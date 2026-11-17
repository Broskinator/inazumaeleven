# Inazuma Eleven 3 mapping

What this game shares with *Inazuma Eleven 3: Sekai e no Chousen!! The Ogre* (DS, Japan), whose
decompilation is at <https://github.com/CacaBueno64/ie3ogres>. Both games are built on the same
Level-5 engine and the same Nintendo libraries, so a function found in both can take the name
and the meaning it has there.

**That repository has no licence.** It is used as a reference only: for names, struct layouts,
enums and for understanding what code does. None of its files or code is copied here; what is
written in this repository is our own. A checkout of it lives outside this repository
(`../ext/ie3ogres`) and is never committed.

The full list of pairs is [ie3_mapping.csv](ie3_mapping.csv): one line per symbol, with the
module, the address, our name, their name and file, how the pair was found and how far it is
trusted. The tables at the end of this page are written from the same data.

## How the pairs are found

```sh
git clone --depth 1 https://github.com/CacaBueno64/ie3ogres ../ext/ie3ogres
python tools/refasm.py ../ext/ie3ogres ../ext/ie3obj        # assembles their asm (396 files)
python tools/refmap.py extract/yeep config/yeep/arm9 ../ext/ie3obj build/ie3_map.json
python tools/refdoc.py build/ie3_map.json docs/ie3_mapping.md docs/ie3_mapping.csv build/ie3_renames.txt
python tools/rename.py --map build/ie3_renames.txt          # the symbols without a name here
```

1. **Bytes.** Each of their functions that is still assembly is assembled, and looked for in
   our ROM with the words the linker fills in masked (pointers, calls). A pair is kept when
   the code is found at one place only and no other function of theirs fits there.
2. **Calls.** In a pair, the two functions have the same calls and pointers at the same
   places. What theirs calls by name is therefore what ours calls at that place. This gives
   the functions whose code differs between the games, the ones they have decompiled to C++
   already (which are not in their asm), and the data. A symbol is taken when every call site
   agrees; the number of call sites is the pair's "votes".
3. **Order.** Library functions must come in the order their library has them; the ones that
   don't are not trusted.

Of 4,567 pairs found by their bytes, the call sites confirm 3,062 and contradict 6.

## The compiler

Their project builds with mwccarm `dsi/1.2p1`, ours with `dsi/1.2`. Both are in our compiler
download. The two functions that did not match were compiled with `dsi/1.2p1`, and with
`dsi/1.2p2`, `dsi/1.3` and `dsi/1.1p1`: every version gives the same code as `dsi/1.2` for them
(one word off in `TextFont::SetFont`, seven in `FileManager::LoadAsync`). The version is not the
cause, and the pinned compiler stays `dsi/1.2`.

`TextFont::SetFont` matches now for another reason: their `CFontManager::init` shows that the
original tests the file pointer a second time and keeps a copy of it. `FileManager::LoadAsync`
still has two registers swapped (the heap and the buffer pointer); their `readDeferred` picks
the allocator in another place, so it does not tell how ours was written. It is in
`permuter/queue.txt`.

## Classes

Found by the call sites that reach them, or by reading their headers next to ours.

| Ours | Inazuma Eleven 3 | How sure | Notes |
|---|---|---|---|
| `FileManager` | `CFileIO` | certain | The same fields in the same order (heap, mutex, request count, requests, file, thread, 0x800 bytes of stack, two buffers, buffer index, a pointer, head, tail, the request being decompressed) and the same methods in the same order. `Load` = `readDirect`, `LoadAsync` = `readDeferred`, `Release` = `tryFinalize`, `Cancel` = `close`, `ThreadMain` = `processRequests`, `ReadHeader` = `getDestSize`, `FinishDecompression` = `processUncompRequest`, `Decompress` = `uncompress`, `FindInPack` = `readFromSFP`, `FindFreeRequest` = `getFreeRequestIdx`. Ours also has the `.ph`/`.pb` pack functions, which IE3 replaced. |
| `FileRequest` | `FileRequest` | certain | Identical: compression header, heap, name[64], buffer, offset, size, state, file id, prev, next. The eleven states are the same ones (theirs: idle, new, preparing, pending, reading, read, uncompressing, complete, closed, cancelled, error). |
| `GameHeap` | `CAllocator` | certain | `Alloc` = `allocate(size, type, strategy)`, `Free` = `deallocate`. Theirs has five arenas; ours has one. |
| `TextFont`, `TextFont2bpp` | `CFontManager`, `CFontManager_2` | certain | `SetFont` = `init`, `DrawText` = `drawTextTex4bpp`, `SetSpacing`, `ResetSpacing`, `SetSubColors` (was `SetUnk1C`: the edge and shadow colours, fields `edgeColor` and `shadowColor`). Their `baseColor` is our `unk_10`, a guess there too. |
| `ConfigFile` | `CConfig` | certain | `GetInt` = `getParam` (20 call sites). |
| `SoundManager` | `AudioPlayer` | certain | `Init` = `initDSE`, `PlaySound` = `playEffect` (102 call sites), `WakeUp`, `Quit`, `StopEffect`, `StopAllEffects`. Under it is the DSE sound driver (`DSE_*`, 123 functions named). |
| `MoviePlayer` | `MoviePlayer` | certain | `SetFrameBuffers` = `setBGScreens`, `Resume` = `wakeUp`. The codec in overlay 88 is libMobiclip. |
| `ScreenManager` (was `UnkClass_0203dc7c`) | `CScreenManager` | certain | Eleven methods, all inside the class we had cut out: `Update`, `SetNextScene` (26 call sites), `PopScene`, `GetCurSceneMain`/`Sub`, `GetNextSceneMain`, `GetLoadedSceneMain`/`Sub`, `FadeMainBlack`, `FadeSubBlack`. |
| `SceneManager` | the game modes (`gamemodes.cpp`) | likely | `SetNextMode` = `SetNextMode(GameMode)`. What we call scenes there, IE3 calls game modes; the scenes proper belong to `ScreenManager`. |
| `ScriptManager` (was `UnkClass_02060294`) | `CSceneScriptManager` | certain | `Callocate`, `GetFileCode`, `GetFileContext`, `GetGlobalVariable`, `LoadScript`, `RequestLoad`, `RequestUnloadSlot`, `StopActiveThread`, `UnloadScript`. |
| part of `Unk_0205dee0` | `CSceneScriptFileContext` | likely | `CompareTypeAndCode`. The file is not only the replay display. |
| `MatchEngine` | `CLogicThink` | certain | `GetTeamInfo` = `getTeamInfo` (19 call sites). Their header has few members named, but their match code in asm pairs with 190 functions of `src/match/` and overlay 87. |
| `DistanceTable` | `CCalcMap` | certain | Same fields (table, width, height, size, stepX, stepY): `Release`, `Create` = `init(width, height)`, `Fill` = `calcDistance(stepX, stepY)`. |
| `DistanceTable32` | `CDistanceMap` | certain | Same methods in the same order: `Init`, `CalcDistance`, `GetDistance(x, y)`, `ApproxDistance`, `ApproxDistanceAbs`, `DistanceBetween(VecFx32, VecFx32)`, `DistanceBetweenPlayers` = `distanceBetweenUnits`. A player is a "unit" there (`Unit`, `CUnitMan`). |
| functions at 0x02088a38 to 0x02099370 | `C3DGameBase`, `C3DPlaneCtrl`, `C3DSprFile`, `C3DVramMan`, `Vram` | certain | The 2D-on-3D sprite layer, about 110 functions, named `C3DPlaneCtrl_SetPos` and so on until they are classes here. |
| overlay 15 from 0x02131f84 | `Graphics`, `Archive`, `CBgMenuManager`, `CBgMenuRadioButton`, `CNsbResourceMan`, `CSceneScriptThread`, `Random`, `Shadow` | certain | The resident overlay: screen fades and palettes, archive reading, background menus, model resources. |

## File formats

- **SFP** (a pack in memory): our `PackFileEntry` is their `SFPEntry` (name offset, size, data
  offset, one unknown word), and the header in front of it their `SFPHeader` (magic, chunk size,
  file size). `FileManager::FindInPack` is `readFromSFP`.
- **PAC** (count, then offset and size per file): `PAC_GetOffset`, `PAC_GetSize`, `PAC_GetPtr`
  are at 0x02099c94, 0x02099cc8 and 0x02099cfc.
- **`.ph` / `.pb`** (our `PackEntry`: a 24-byte name, offset, size): Inazuma Eleven 1 only.
  IE3 has `.pkh` / `.pkb` instead, with hashed codes (`Archive::PackHeader`), and nothing in it
  reads the older format.

## What it changed here

- 3,199 symbols that had no name got one from the pairs: 2,809 library functions, 199 game
  functions (as `Class_Method` while they are free functions here) and 191 data symbols.
  By hand, from the table above: `ScreenManager` and `ScriptManager` got their names, and 38
  methods of them and of `SoundManager`, `TextFont`, `MatchEngine`, `SceneManager`,
  `DistanceTable` and `DistanceTable32` were named after their counterparts.
- **Overlays 14, 16 and 89 are libraries, not game code**: 86% of overlay 14 is the DWC and
  TwlWiFi libraries, 87% of overlay 16 is the Wi-Fi connection settings of the DWC utility, and
  all of overlay 89 is the SDK's download play (MB). `docs/progress.md` counts them apart now.
  The functions of these overlays that were decompiled stay as they are; there is no reason to
  decompile more of them.
- `TextFont::SetFont` matches.

## Leads

Not applied: each needs a look at our own code first.

- `cnvdat.h`, `CUnitMan.hpp`: the player ("unit") and save structures, with their field names
  (`st_unit_save`, `st_team_info`, `st_save_user`, `Unit`). The layouts differ between the
  games, so each field has to be checked against our `MatchPlayer` and `SaveBody`.
- `CManager.hpp`, `CScreenManager.hpp` (206 lines): the scene classes and the screen manager's
  fields, for `include/game/ScreenManager.hpp`.
- `CSceneScript*.hpp`: the script engine's classes, for `ScriptManager` and `Unk_0205dee0`.
- The game functions paired without a name on either side (2,690): the name of their file says
  what they are part of. See "Game code by Inazuma Eleven 3 file" below.

<!-- generated: begin -->
7,199 symbols of this game are paired with Inazuma Eleven 3: 6,438 functions and 761 data symbols.

| Found by | Pairs | High | Medium | Low |
|---|---:|---:|---:|---:|
| same bytes, one place | 4,120 | 3,942 | 100 | 78 |
| same bytes in several places, settled by the calls | 447 | 444 | 0 | 3 |
| call sites, same size | 1,299 | 454 | 832 | 13 |
| call sites and pointers, other size (or data) | 1,333 | 478 | 855 | 0 |

| Part of Inazuma Eleven 3 | Functions paired | Named there | Same name here | Still unnamed here |
|---|---:|---:|---:|---:|
| game code decompiled to C++ (src/) | 172 | 159 | 130 | 8 |
| game code still in assembly (asm/) | 2,790 | 80 | 69 | 2,674 |
| lib/DSE | 123 | 123 | 118 | 5 |
| lib/TwlDWC_dl | 1,430 | 1,430 | 1,422 | 8 |
| lib/TwlSDK | 922 | 921 | 908 | 5 |
| lib/TwlSystem | 309 | 305 | 303 | 5 |
| lib/TwlWiFi | 390 | 390 | 388 | 1 |
| lib/libMobiclip | 123 | 2 | 2 | 121 |
| lib/libmsl | 179 | 179 | 131 | 46 |

Renames still to apply (`ie3_renames.txt`): 0; left out: 17 (the name is in use already), 2 (two reference names for one symbol).

### Game functions Inazuma Eleven 3 has a name for

Sorted by what helps first. "Ours" is the name in this repository now.

#### File loading

| Address | Ours | Inazuma Eleven 3 | Found by | Confidence |
|---|---|---|---|---|
| ov015 0x02134198 | `Archive_Close` | `Archive::Close` | calls (27) | high |
| ov015 0x02134208 | `Archive_Deallocate` | `Archive::Deallocate` | calls (49) | high |
| ov015 0x02134998 | `Archive_GetBallModelPath` | `Archive::GetBallModelPath` | calls (1) | medium |
| ov015 0x02134504 | `Archive_GetBodyOffsetAndSize` | `Archive::GetBodyOffsetAndSize` | calls (1) | medium |
| ov015 0x02134554 | `Archive_GetBodyPlttOffsetAndSize` | `Archive::GetBodyPlttOffsetAndSize` | calls (1) | medium |
| ov015 0x0213476c | `Archive_GetCharacterMotionPath` | `Archive::GetCharacterMotionPath` | calls (1) | medium |
| ov015 0x0213490c | `Archive_GetCharacterMotionSizeAndOffset` | `Archive::GetCharacterMotionSizeAndOffset` | calls (1) | medium |
| ov015 0x0213447c | `Archive_GetFaceOffsetAndSize` | `Archive::GetFaceOffsetAndSize` | calls (1) | medium |
| ov015 0x02134928 | `Archive_GetMapModelPath` | `Archive::GetMapModelPath` | calls (1) | medium |
| ov015 0x02134944 | `Archive_GetMapMotionPath` | `Archive::GetMapMotionPath` | calls (1) | medium |
| ov015 0x02134a28 | `Archive_GetMapNameHash` | `Archive::GetMapNameHash` | calls (1) | medium |
| ov015 0x0213497c | `Archive_GetMapObjectModelPath` | `Archive::GetMapObjectModelPath` | calls (1) | medium |
| ov015 0x02134960 | `Archive_GetMapTexturePath` | `Archive::GetMapTexturePath` | calls (1) | medium |
| ov015 0x021349c4 | `Archive_GetOverworldBodyCode` | `Archive::GetOverworldBodyCode` | calls (1) | medium |
| ov015 0x02134a08 | `Archive_GetOverworldBodyCode_2` | `Archive::GetOverworldBodyCode` | calls (1) | medium |
| ov015 0x021349b4 | `Archive_GetOverworldHeadCode` | `Archive::GetOverworldHeadCode` | calls (1) | medium |
| ov015 0x021349c0 | `Archive_GetOverworldHeadPlttCode` | `Archive::GetOverworldHeadPlttCode` | calls (1) | medium |
| ov015 0x02134300 | `Archive_PackHeaderGetOffsetAndSize` | `Archive::PackHeaderGetOffsetAndSize` | calls (28) | high |
| ov015 0x021340c0 | `Archive_ReadFromSFP` | `Archive::ReadFromSFP` | calls (7) | high |
| ov015 0x02133f94 | `Archive_RequestNewRead` | `Archive::RequestNewRead` | calls (23) | high |
| ov015 0x02134024 | `Archive_RequestNewReadEx` | `Archive::RequestNewReadEx` | calls (2) | high |
| ov015 0x02134b08 | `Archive_SFPGetOffsetAndSize` | `Archive::SFPGetOffsetAndSize` | calls (2) | high |
| ov015 0x02134118 | `Archive_TryFinalize` | `Archive::TryFinalize` | calls (23) | high |
| main 0x02037630 | `_ZN8GameHeap5AllocEiii` | `CAllocator::allocate` | calls (5) | high |
| main 0x02037694 | `_ZN8GameHeap4FreeEPv` | `CAllocator::deallocate` | calls (29) | high |
| main 0x02036a2c | `_ZN11FileManager6CancelEPvi` | `CFileIO::close` | calls (1) | medium |
| main 0x02036468 | `_ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih` | `CFileIO::readDirect` | calls (1) | medium |
| main 0x02036930 | `_ZN11FileManager7ReleaseEPv` | `CFileIO::tryFinalize` | calls (1) | medium |
| ov015 0x02147f00 | `CNsbResourceMan_Allocate` | `CNsbResourceMan::allocate` | calls (3) | high |
| ov015 0x02147ffc | `CNsbResourceMan_Aquire` | `CNsbResourceMan::aquire` | calls (4) | high |
| ov015 0x02147ccc | `CNsbResourceMan_GetFromContainer` | `CNsbResourceMan::getFromContainer` | calls (3) | high |
| ov015 0x02147ed4 | `CNsbResourceMan_GetFromPath` | `CNsbResourceMan::getFromPath` | calls (1) | medium |
| ov015 0x02147ad8 | `CNsbResourceMan_GetFromPathEx` | `CNsbResourceMan::getFromPathEx` | calls (5) | high |
| ov015 0x02148488 | `CNsbResourceMan_InitPacResource` | `CNsbResourceMan::initPacResource` | calls (8) | high |
| ov015 0x0214827c | `CNsbResourceMan_Load` | `CNsbResourceMan::load` | calls (2) | high |
| ov015 0x02148114 | `CNsbResourceMan_Release` | `CNsbResourceMan::release` | calls (10) | high |
| ov015 0x02148058 | `CNsbResourceMan_TryFinalize` | `CNsbResourceMan::tryFinalize` | calls (11) | high |
| ov015 0x02148314 | `CNsbResourceMan_Unload` | `CNsbResourceMan::unload` | calls (1) | medium |
| main 0x02099c94 | `PAC_GetOffset` | `PAC_GetOffset` | bytes (1) | high |
| main 0x02099cfc | `PAC_GetPtr` | `PAC_GetPtr` | bytes (5) | high |
| main 0x02099cc8 | `PAC_GetSize` | `PAC_GetSize` | bytes (5) | high |

#### Menus and screens

| Address | Ours | Inazuma Eleven 3 | Found by | Confidence |
|---|---|---|---|---|
| ov015 0x0213b310 | `CBgAnimeManager_Update` | `CBgAnimeManager::update` | calls (2) | high |
| ov015 0x0213b540 | `CBgMenuManager_AddDynamic` | `CBgMenuManager::addDynamic` | bytes (29) | high |
| ov015 0x0213b6ac | `CBgMenuManager_AddStatic` | `CBgMenuManager::addStatic` | bytes (47) | high |
| ov015 0x0213b900 | `CBgMenuManager_DeleteAll` | `CBgMenuManager::deleteAll` | bytes (4) | high |
| ov015 0x0213b870 | `CBgMenuManager_DeleteGroup` | `CBgMenuManager::deleteGroup` | bytes (6) | high |
| ov015 0x0213b7f8 | `CBgMenuManager_DeleteID` | `CBgMenuManager::deleteID` | bytes (7) | high |
| ov015 0x0213c33c | `CBgMenuManager_Draw` | `CBgMenuManager::draw` | bytes (10) | high |
| ov015 0x0213b980 | `CBgMenuManager_Enable` | `CBgMenuManager::enable` | bytes (1) | high |
| ov015 0x0213b3fc | `CBgMenuManager_Finalize` | `CBgMenuManager::finalize` | bytes (14) | high |
| ov015 0x0213c3dc | `CBgMenuManager_GetHit` | `CBgMenuManager::getHit` | bytes (3) | high |
| ov015 0x0213ba78 | `CBgMenuManager_HideGroup` | `CBgMenuManager::hideGroup` | bytes (2) | high |
| ov015 0x0213b990 | `CBgMenuManager_HideID` | `CBgMenuManager::hideID` | bytes (23) | high |
| ov015 0x0213bc88 | `CBgMenuManager_HideTemp` | `CBgMenuManager::hideTemp` | bytes (1) | high |
| ov015 0x0213b364 | `CBgMenuManager_Init` | `CBgMenuManager::init` | bytes (0) | high |
| ov015 0x0213bf84 | `CBgMenuManager_IsAnimating` | `CBgMenuManager::isAnimating` | bytes (4) | high |
| ov015 0x0213be90 | `CBgMenuManager_IsFlashActive` | `CBgMenuManager::isFlashActive` | bytes (3) | high |
| ov015 0x0213beb0 | `CBgMenuManager_IsFlashing` | `CBgMenuManager::isFlashing` | bytes (1) | high |
| ov015 0x0213be3c | `CBgMenuManager_ReleaseButton` | `CBgMenuManager::releaseButton` | bytes (3) | high |
| ov015 0x0213bdd8 | `CBgMenuManager_ResetBounds` | `CBgMenuManager::resetBounds` | bytes (0) | high |
| ov015 0x0213bcbc | `CBgMenuManager_SetBlinking` | `CBgMenuManager::setBlinking` | bytes (1) | high |
| ov015 0x0213bd7c | `CBgMenuManager_SetBounds` | `CBgMenuManager::setBounds` | bytes (0) | high |
| ov015 0x0213be1c | `CBgMenuManager_SetFlash` | `CBgMenuManager::setFlash` | bytes (1) | high |
| ov015 0x0213bcfc | `CBgMenuManager_SetPos` | `CBgMenuManager::setPos` | bytes (15) | high |
| ov015 0x0213c488 | `CBgMenuManager_SetScreen` | `CBgMenuManager::setScreen` | bytes (0) | high |
| ov015 0x0213b478 | `CBgMenuManager_SetScreens` | `CBgMenuManager::setScreens` | bytes (0) | high |
| ov015 0x0213bafc | `CBgMenuManager_ShowGroup` | `CBgMenuManager::showGroup` | bytes (2) | high |
| ov015 0x0213ba04 | `CBgMenuManager_ShowID` | `CBgMenuManager::showID` | bytes (10) | high |
| ov015 0x0213bed0 | `CBgMenuManager_UpdateFlash` | `CBgMenuManager::updateFlash` | bytes (1) | high |
| ov015 0x0213bfcc | `CBgMenuManager_UpdateGraphics` | `CBgMenuManager::updateGraphics` | bytes (12) | high |
| ov015 0x0213bb80 | `CBgMenuManager_UpdateRadio` | `CBgMenuManager::updateRadio` | bytes (1) | high |
| ov015 0x0213b490 | `CBgMenuManager_WriteScreen` | `CBgMenuManager::writeScreen` | bytes (5) | high |
| ov015 0x0213c6d0 | `CBgMenuRadioButton_ActivateGx` | `CBgMenuRadioButton::activateGx` | calls (2) | high |
| ov015 0x0213c5b4 | `CBgMenuRadioButton_Count` | `CBgMenuRadioButton::count` | calls (1) | medium |
| ov015 0x0213c5e0 | `CBgMenuRadioButton_DeactivateGx` | `CBgMenuRadioButton::deactivateGx` | calls (2) | high |
| ov015 0x0213c4fc | `CBgMenuRadioButton_Finalize` | `CBgMenuRadioButton::finalize` | calls (1) | medium |
| ov015 0x0213c58c | `CBgMenuRadioButton_Get` | `CBgMenuRadioButton::get` | calls (2) | high |
| ov015 0x0213c4c0 | `CBgMenuRadioButton_Init` | `CBgMenuRadioButton::init` | calls (1) | medium |
| ov015 0x0213c730 | `CBgMenuRadioButton_ReleaseButton` | `CBgMenuRadioButton::releaseButton` | calls (5) | high |
| ov015 0x0213c4f0 | `CBgMenuRadioButton_Reset` | `CBgMenuRadioButton::reset` | calls (1) | medium |
| main 0x0203df24 | `_ZN13ScreenManager13FadeMainBlackEv` | `CScreenManager::fadeMainBlack` | calls (1) | medium |
| main 0x0203df40 | `_ZN13ScreenManager12FadeSubBlackEv` | `CScreenManager::fadeSubBlack` | calls (1) | medium |
| main 0x0203e18c | `_ZN13ScreenManager15GetCurSceneMainEv` | `CScreenManager::getCurSceneMain` | calls (7) | high |
| main 0x0203e1f4 | `_ZN13ScreenManager14GetCurSceneSubEv` | `CScreenManager::getCurSceneSub` | calls (2) | high |
| main 0x0203e1ec | `_ZN13ScreenManager18GetLoadedSceneMainEv` | `CScreenManager::getLoadedSceneMain` | calls (1) | medium |
| main 0x0203e254 | `_ZN13ScreenManager17GetLoadedSceneSubEv` | `CScreenManager::getLoadedSceneSub` | calls (1) | medium |
| main 0x0203e1bc | `_ZN13ScreenManager16GetNextSceneMainEv` | `CScreenManager::getNextSceneMain` | calls (3) | high |
| main 0x0203e0cc | `_ZN13ScreenManager8PopSceneEi` | `CScreenManager::popScene` | calls (4) | high |
| main 0x0203e04c | `_ZN13ScreenManager12SetNextSceneEii` | `CScreenManager::setNextScene` | calls (26) | high |
| main 0x0203dde0 | `_ZN13ScreenManager6UpdateEi` | `CScreenManager::update` | calls (1) | medium |
| ov015 0x02161618 | `CSprAnimCtrl_Ctor` | `CSprAnimCtrl::Ctor` | bytes (0) | high |
| ov015 0x021320d0 | `Graphics_ApplyBGPalettePulse` | `Graphics::ApplyBGPalettePulse` | bytes (2) | high |
| ov015 0x021330b4 | `Graphics_DrawTextTileWithRuby` | `Graphics::DrawTextTileWithRuby` | calls (1) | medium |
| ov015 0x021325a0 | `Graphics_FadeInScreen` | `Graphics::FadeInScreen` | bytes (1) | high |
| ov015 0x02132568 | `Graphics_FadeInSub` | `Graphics::FadeInSub` | bytes+calls (1) | high |
| ov015 0x02132600 | `Graphics_FadeMainBlack` | `Graphics::FadeMainBlack` | bytes+calls (2) | high |
| ov015 0x0213264c | `Graphics_FadeScreenBlack` | `Graphics::FadeScreenBlack` | calls (3) | high |
| ov015 0x02132628 | `Graphics_FadeScreensBlack` | `Graphics::FadeScreensBlack` | bytes+calls (11) | high |
| ov015 0x02132794 | `Graphics_IsAnyScreenFading` | `Graphics::IsAnyScreenFading` | bytes+calls (1) | high |
| ov015 0x02132960 | `Graphics_IsScreenBrightAdjusted` | `Graphics::IsScreenBrightAdjusted` | bytes (0) | high |
| ov015 0x021327c8 | `Graphics_IsScreenFading` | `Graphics::IsScreenFading` | bytes (2) | high |
| ov015 0x0213225c | `Graphics_LoadBGPalette` | `Graphics::LoadBGPalette` | bytes (1) | high |
| ov015 0x02132224 | `Graphics_LoadBGPaletteMain` | `Graphics::LoadBGPaletteMain` | bytes+calls (15) | high |
| ov015 0x02132240 | `Graphics_LoadBGPaletteSub` | `Graphics::LoadBGPaletteSub` | bytes+calls (13) | high |
| ov015 0x02132af0 | `Graphics_LoadBGXCharMain` | `Graphics::LoadBGXCharMain` | bytes+calls (4) | high |
| ov015 0x02132b7c | `Graphics_LoadBGXCharSub` | `Graphics::LoadBGXCharSub` | bytes+calls (53) | high |
| ov015 0x021322d8 | `Graphics_LoadTempPalette` | `Graphics::LoadTempPalette` | bytes (6) | high |
| ov015 0x021322b0 | `Graphics_LoadTempPaletteFromPac` | `Graphics::LoadTempPaletteFromPac` | bytes (45) | high |
| ov015 0x02131f84 | `Graphics_ResetBGPulse` | `Graphics::ResetBGPulse` | bytes (3) | high |
| ov015 0x02132a38 | `Graphics_ScreenCopy` | `Graphics::ScreenCopy` | bytes (38) | high |
| ov015 0x02132a98 | `Graphics_ScreenFill` | `Graphics::ScreenFill` | bytes (2) | high |
| ov015 0x021321f0 | `Graphics_SetBGPaletteDirect` | `Graphics::SetBGPaletteDirect` | bytes (1) | high |
| ov015 0x02132014 | `Graphics_SetBGPalettePulse` | `Graphics::SetBGPalettePulse` | bytes (6) | high |
| ov015 0x02132984 | `Graphics_SetupScreen` | `Graphics::SetupScreen` | bytes (51) | high |
| ov015 0x02132a04 | `Graphics_SetupScreen_2` | `Graphics::SetupScreen` | bytes (12) | high |
| ov015 0x02132008 | `Graphics_StopBGPulse` | `Graphics::StopBGPulse` | calls+size (1) | medium |
| main 0x020377a8 | `_ZN11MoviePlayer15SetFrameBuffersEPvS0_S0_S0_` | `MoviePlayer::setBGScreens` | calls (1) | medium |

#### Text

| Address | Ours | Inazuma Eleven 3 | Found by | Confidence |
|---|---|---|---|---|
| main 0x02033bd0 | `_ZN8TextFont8DrawTextEPKcPviiiiiP12TextCharRectiii` | `CFontManager::drawTextTex4bpp` | calls (7) | high |
| main 0x020349c0 | `_ZN8TextFont12ResetSpacingEv` | `CFontManager::resetSpacing` | calls (7) | high |
| main 0x020349b4 | `_ZN8TextFont10SetSpacingEii` | `CFontManager::setSpacing` | calls (7) | high |
| main 0x02034e24 | `_ZN8TextFont12SetSubColorsEhh` | `CFontManager::setSubColors` | calls (2) | high |

#### Scripts

| Address | Ours | Inazuma Eleven 3 | Found by | Confidence |
|---|---|---|---|---|
| main 0x0209d678 | `CSceneScriptData_Ctor` | `CSceneScriptData::Ctor` | calls (4) | high |
| main 0x0209d684 | `CSceneScriptData_Dtor` | `CSceneScriptData::Dtor` | calls (6) | high |
| main 0x0209d874 | `CSceneScriptData_GetInstructionByID` | `CSceneScriptData::getInstructionByID` | calls (2) | high |
| main 0x0209d688 | `CSceneScriptData_InitFile` | `CSceneScriptData::initFile` | calls (2) | high |
| main 0x0205ff20 | `_ZN12Unk_0205dee018CompareTypeAndCodeEv` | `CSceneScriptFileContext::compareTypeAndCode` | calls (1) | medium |
| main 0x02060448 | `_ZN13ScriptManager9CallocateEv` | `CSceneScriptManager::callocate` | bytes (0) | high |
| main 0x02060b48 | `_ZN13ScriptManager11GetFileCodeEi` | `CSceneScriptManager::getFileCode` | bytes (0) | medium |
| main 0x02060858 | `_ZN13ScriptManager14GetFileContextEi` | `CSceneScriptManager::getFileContext` | calls+size (1) | medium |
| main 0x02060624 | `_ZN13ScriptManager17GetGlobalVariableEi` | `CSceneScriptManager::getGlobalVariable` | calls+size (1) | medium |
| main 0x02060864 | `_ZN13ScriptManager10LoadScriptEiiii` | `CSceneScriptManager::loadScript` | calls (1) | medium |
| main 0x02060938 | `_ZN13ScriptManager11RequestLoadEiiii` | `CSceneScriptManager::requestLoad` | calls+size (1) | medium |
| main 0x02060b70 | `_ZN13ScriptManager17RequestUnloadSlotEv` | `CSceneScriptManager::requestUnloadSlot` | calls+size (1) | medium |
| main 0x02061210 | `_ZN13ScriptManager16StopActiveThreadEv` | `CSceneScriptManager::stopActiveThread` | calls+size (1) | medium |
| main 0x02060b58 | `_ZN13ScriptManager12UnloadScriptEi` | `CSceneScriptManager::unloadScript` | calls (1) | medium |
| ov015 0x02149c58 | `CSceneScriptThread_Event_6xxx` | `CSceneScriptThread::event_6xxx` | bytes (0) | high |
| ov015 0x0214b7ac | `CSceneScriptThread_Event_7xxx` | `CSceneScriptThread::event_7xxx` | bytes (0) | high |
| ov015 0x0214b920 | `CSceneScriptThread_Event_default` | `CSceneScriptThread::event_default` | calls (3) | high |
| ov015 0x021495c0 | `CSceneScriptThread_Stop` | `CSceneScriptThread::stop` | calls (1) | medium |

#### Match

| Address | Ours | Inazuma Eleven 3 | Found by | Confidence |
|---|---|---|---|---|
| main 0x0206a964 | `_ZN11MatchEngine11GetTeamInfoEi` | `CLogicThink::getTeamInfo` | calls (19) | high |
| ov015 0x021307e4 | `Shadow_Draw` | `Shadow::Draw` | calls (1) | medium |
| ov015 0x02130fd4 | `WorldToMatchCamera` | `WorldToMatchCamera` | bytes (1) | high |

#### Sound and movies

| Address | Ours | Inazuma Eleven 3 | Found by | Confidence |
|---|---|---|---|---|
| main 0x02039988 | `_ZN12SoundManager4InitEP8GameHeap` | `AudioPlayer::initDSE` | calls (1) | medium |
| main 0x0203b33c | `_ZN12SoundManager9PlaySoundEi` | `AudioPlayer::playEffect` | calls (102) | high |
| main 0x02039c28 | `_ZN12SoundManager4QuitEv` | `AudioPlayer::quit` | calls (1) | medium |
| main 0x0203b3c8 | `_ZN12SoundManager14StopAllEffectsEi` | `AudioPlayer::stopAllEffects` | calls (1) | medium |
| main 0x0203b3a8 | `_ZN12SoundManager10StopEffectEii` | `AudioPlayer::stopEffect` | calls (4) | high |
| main 0x02039bdc | `_ZN12SoundManager6WakeUpEv` | `AudioPlayer::wakeUp` | calls (1) | medium |
| main 0x02037d4c | `_ZN11MoviePlayer6ResumeEv` | `MoviePlayer::wakeUp` | calls (1) | medium |

#### 3D engine

| Address | Ours | Inazuma Eleven 3 | Found by | Confidence |
|---|---|---|---|---|
| main 0x020887f0 | `C3DDevice_SetClearColor` | `C3DDevice::setClearColor` | calls (3) | high |
| main 0x02088864 | `C3DDevice_SetEdgeMarking` | `C3DDevice::setEdgeMarking` | calls (1) | medium |
| main 0x02088a38 | `C3DGameBase_Ctor` | `C3DGameBase::Ctor` | calls (1) | medium |
| main 0x02088bec | `C3DGameBase_CloseFile` | `C3DGameBase::closeFile` | calls (6) | high |
| main 0x02088aa0 | `C3DGameBase_CloseFiles` | `C3DGameBase::closeFiles` | calls (2) | high |
| main 0x02088b8c | `C3DGameBase_DetachFile` | `C3DGameBase::detachFile` | calls (1) | medium |
| main 0x02088ad0 | `C3DGameBase_OpenFile` | `C3DGameBase::openFile` | calls (4) | high |
| main 0x02088cfc | `C3DGameBase_SetupModels` | `C3DGameBase::setupModels` | calls (1) | medium |
| main 0x02089024 | `C3DGameChar_Reset` | `C3DGameChar::reset` | bytes (1) | high |
| main 0x0208a718 | `C3DGameEffect_Reset` | `C3DGameEffect::reset` | bytes (1) | high |
| main 0x0208c178 | `C3DGameMap_Ctor` | `C3DGameMap::Ctor` | bytes (0) | high |
| main 0x0208d2f0 | `C3DGameMapObject_Reset` | `C3DGameMapObject::reset` | bytes (1) | high |
| main 0x02090320 | `C3DMagicCamera_Ctor` | `C3DMagicCamera::Ctor` | bytes (0) | high |
| main 0x02091d54 | `C3DPlaneCtrl_Acquire` | `C3DPlaneCtrl::acquire` | calls (3) | high |
| main 0x02093928 | `C3DPlaneCtrl_ClearFlag` | `C3DPlaneCtrl::clearFlag` | calls (18) | high |
| main 0x02093d1c | `C3DPlaneCtrl_ClearFlag_2` | `C3DPlaneCtrl::clearFlag` | calls (9) | high |
| main 0x02092d3c | `C3DPlaneCtrl_ClearFlagAll` | `C3DPlaneCtrl::clearFlagAll` | calls (3) | high |
| main 0x02094154 | `C3DPlaneCtrl_ConvertTilesToTex` | `C3DPlaneCtrl::convertTilesToTex` | calls (6) | high |
| main 0x020920c4 | `C3DPlaneCtrl_Create` | `C3DPlaneCtrl::create` | calls (37) | high |
| main 0x02092270 | `C3DPlaneCtrl_Destroy` | `C3DPlaneCtrl::destroy` | calls (32) | high |
| main 0x02091cec | `C3DPlaneCtrl_Finalize` | `C3DPlaneCtrl::finalize` | calls (1) | medium |
| main 0x02093e2c | `C3DPlaneCtrl_GetDimensions` | `C3DPlaneCtrl::getDimensions` | calls (1) | medium |
| main 0x02093d80 | `C3DPlaneCtrl_GetPartExt` | `C3DPlaneCtrl::getPartExt` | calls (3) | high |
| main 0x02093df0 | `C3DPlaneCtrl_GetSetExt` | `C3DPlaneCtrl::getSetExt` | calls (3) | high |
| main 0x02090dec | `C3DPlaneCtrl_GetTexHeight` | `C3DPlaneCtrl::getTexHeight` | calls (7) | high |
| main 0x02090dcc | `C3DPlaneCtrl_GetTexWidth` | `C3DPlaneCtrl::getTexWidth` | calls (5) | high |
| main 0x02091d64 | `C3DPlaneCtrl_Release` | `C3DPlaneCtrl::release` | calls (6) | high |
| main 0x02093bb0 | `C3DPlaneCtrl_SetColorMask` | `C3DPlaneCtrl::setColorMask` | calls (6) | high |
| main 0x02093368 | `C3DPlaneCtrl_SetDepth` | `C3DPlaneCtrl::setDepth` | calls (13) | high |
| main 0x02092544 | `C3DPlaneCtrl_SetDepthAll` | `C3DPlaneCtrl::setDepthAll` | calls (18) | high |
| main 0x0209263c | `C3DPlaneCtrl_SetDepthStepAll` | `C3DPlaneCtrl::setDepthStepAll` | calls (8) | high |
| main 0x0209386c | `C3DPlaneCtrl_SetFlag` | `C3DPlaneCtrl::setFlag` | calls (30) | high |
| main 0x02093ca8 | `C3DPlaneCtrl_SetFlag_2` | `C3DPlaneCtrl::setFlag` | calls (33) | high |
| main 0x02092c48 | `C3DPlaneCtrl_SetFlagAll` | `C3DPlaneCtrl::setFlagAll` | calls (1) | medium |
| main 0x020939c8 | `C3DPlaneCtrl_SetGraphicIdx` | `C3DPlaneCtrl::setGraphicIdx` | calls (77) | high |
| main 0x02092e18 | `C3DPlaneCtrl_SetGraphicIdxAll` | `C3DPlaneCtrl::setGraphicIdxAll` | calls (19) | high |
| main 0x0209323c | `C3DPlaneCtrl_SetPltt` | `C3DPlaneCtrl::setPltt` | calls (1) | medium |
| main 0x020923e0 | `C3DPlaneCtrl_SetPlttAll` | `C3DPlaneCtrl::setPlttAll` | calls (1) | medium |
| main 0x020932f0 | `C3DPlaneCtrl_SetPlttIdx` | `C3DPlaneCtrl::setPlttIdx` | calls (1) | medium |
| main 0x0209249c | `C3DPlaneCtrl_SetPlttIdxAll` | `C3DPlaneCtrl::setPlttIdxAll` | calls (3) | high |
| main 0x02093524 | `C3DPlaneCtrl_SetPos` | `C3DPlaneCtrl::setPos` | calls (46) | high |
| main 0x02093bf4 | `C3DPlaneCtrl_SetPos_2` | `C3DPlaneCtrl::setPos` | calls (27) | high |
| main 0x020928b0 | `C3DPlaneCtrl_SetPosAll` | `C3DPlaneCtrl::setPosAll` | calls (2) | high |
| main 0x02092ed4 | `C3DPlaneCtrl_SetPosAnchorAll` | `C3DPlaneCtrl::setPosAnchorAll` | calls (1) | medium |
| main 0x02093188 | `C3DPlaneCtrl_SetTex` | `C3DPlaneCtrl::setTex` | calls (28) | high |
| main 0x020922fc | `C3DPlaneCtrl_SetTexAll` | `C3DPlaneCtrl::setTexAll` | calls (23) | high |
| main 0x02093734 | `C3DPlaneCtrl_SetTexST` | `C3DPlaneCtrl::setTexST` | calls (3) | high |
| main 0x0209360c | `C3DPlaneCtrl_SetTexScale` | `C3DPlaneCtrl::setTexScale` | calls (3) | high |
| main 0x020936b4 | `C3DPlaneCtrl_SetTexWH` | `C3DPlaneCtrl::setTexWH` | calls (3) | high |
| main 0x02097fcc | `C3DSprFile_AllocTexBuffer` | `C3DSprFile::allocTexBuffer` | calls (8) | high |
| main 0x02097880 | `C3DSprFile_Clear` | `C3DSprFile::clear` | calls (1) | medium |
| main 0x020982a0 | `C3DSprFile_CreateTex16` | `C3DSprFile::createTex16` | calls (12) | high |
| main 0x020984f0 | `C3DSprFile_EvictVram` | `C3DSprFile::evictVram` | calls (1) | medium |
| main 0x02097e58 | `C3DSprFile_FreeVram` | `C3DSprFile::freeVram` | calls (1) | medium |
| main 0x020987fc | `C3DSprFile_GetMetadata` | `C3DSprFile::getMetadata` | calls (4) | high |
| main 0x02098824 | `C3DSprFile_GetMetadata_2` | `C3DSprFile::getMetadata` | calls (2) | high |
| main 0x02098710 | `C3DSprFile_GetPaletteData` | `C3DSprFile::getPaletteData` | calls (1) | medium |
| main 0x02098900 | `C3DSprFile_GetResKeyAddresses` | `C3DSprFile::getResKeyAddresses` | calls (1) | medium |
| main 0x02098930 | `C3DSprFile_GetResKeyAddresses_2` | `C3DSprFile::getResKeyAddresses` | calls (1) | medium |
| main 0x020985fc | `C3DSprFile_GetSpriteSheet` | `C3DSprFile::getSpriteSheet` | calls (3) | high |
| main 0x0209860c | `C3DSprFile_GetTextureData` | `C3DSprFile::getTextureData` | calls (2) | high |
| main 0x02097c74 | `C3DSprFile_IsInVram` | `C3DSprFile::isInVram` | calls (12) | high |
| main 0x02097898 | `C3DSprFile_LoadFromPath` | `C3DSprFile::loadFromPath` | calls (12) | high |
| main 0x02097ca8 | `C3DSprFile_LoadToVram` | `C3DSprFile::loadToVram` | calls (18) | high |
| main 0x02097b3c | `C3DSprFile_Release` | `C3DSprFile::release` | calls (45) | high |
| main 0x0209855c | `C3DSprFile_RestoreVram` | `C3DSprFile::restoreVram` | calls (1) | medium |
| main 0x02097aa0 | `C3DSprFile_TryFinalize` | `C3DSprFile::tryFinalize` | calls (14) | high |
| main 0x02097ac0 | `C3DSprFile_TryFinalize_2` | `C3DSprFile::tryFinalize` | calls (3) | high |
| main 0x02097ef8 | `C3DSprFile_UploadTex` | `C3DSprFile::uploadTex` | calls (8) | high |
| main 0x02096eb4 | `C3DSprSheet_IsIdle` | `C3DSprSheet::isIdle` | calls (6) | high |
| main 0x0209926c | `C3DVramMan_EvictRes` | `C3DVramMan::evictRes` | calls (1) | medium |
| main 0x02098d88 | `C3DVramMan_FreeRes` | `C3DVramMan::freeRes` | calls (1) | medium |
| main 0x02098b48 | `C3DVramMan_GetPlttSize` | `C3DVramMan::getPlttSize` | calls (1) | medium |
| main 0x020990e8 | `C3DVramMan_GetResKeyAddr` | `C3DVramMan::getResKeyAddr` | calls (3) | high |
| main 0x02098ae4 | `C3DVramMan_GetTexSize` | `C3DVramMan::getTexSize` | calls (1) | medium |
| main 0x02098f14 | `C3DVramMan_QueueUpload` | `C3DVramMan::queueUpload` | calls (1) | medium |
| main 0x02099370 | `C3DVramMan_ResetUploadQueue` | `C3DVramMan::resetUploadQueue` | calls (1) | medium |
| main 0x020992ec | `C3DVramMan_RestoreRes` | `C3DVramMan::restoreRes` | calls (1) | medium |
| main 0x02098fac | `C3DVramMan_UploadResNow` | `C3DVramMan::uploadResNow` | calls (1) | medium |
| ov015 0x0213cc18 | `CCameraCtrl_Init` | `CCameraCtrl::init` | bytes (1) | high |
| main 0x0208ff7c | `Vram_ClearTexPool` | `Vram::ClearTexPool` | calls (1) | medium |
| main 0x020901ec | `Vram_EvictTexPool` | `Vram::EvictTexPool` | calls (1) | medium |
| main 0x02090160 | `Vram_GetTexPoolElement` | `Vram::GetTexPoolElement` | calls (4) | high |
| main 0x02090194 | `Vram_GetTexPoolElementVramAddr` | `Vram::GetTexPoolElementVramAddr` | calls (4) | high |
| main 0x0208ff98 | `Vram_InitTexPool` | `Vram::InitTexPool` | calls (1) | medium |
| main 0x0209020c | `Vram_RestoreTexPool` | `Vram::RestoreTexPool` | calls (1) | medium |

#### Game modes and system

| Address | Ours | Inazuma Eleven 3 | Found by | Confidence |
|---|---|---|---|---|
| main 0x02033394 | `_ZN10ConfigFile6GetIntEPKc` | `CConfig::getParam` | calls (20) | high |
| ov015 0x021309a4 | `Random_RandA` | `Random::RandA` | calls (4) | high |
| ov015 0x021309f8 | `Random_RandB` | `Random::RandB` | calls (11) | high |
| main 0x0203e2fc | `_ZN12SceneManager11SetNextModeEl` | `SetNextMode` | calls+size (4) | high |

### Game code by Inazuma Eleven 3 file

Where the functions of each of their files are in this game: the file names say what the code is, also
where the functions themselves have no name yet.

| Their file | Pairs | Here | Our files |
|---|---:|---|---|
| `asm/overlay0/overlay0.s` | 195 | ov000 0x020fdd60-0x02117954 (195) | `src/ov000/Unk_ov000_0210f5d8.cpp` (61), `src/ov000/Unk_ov000_020ffbd8.cpp` (38), `src/ov000/Unk_ov000_0210c514.cpp` (32) |
| `asm/overlay1/overlay1.s` | 129 | ov001 0x020fccf0-0x02128a24 (90); ov015 0x0213649c-0x021624f0 (23); main 0x0208e9b8-0x0208ff1c (14) | `src/ov001/Unk_ov001_02125358.cpp` (35), `src/ov001/Unk_ov001_0211ec68.cpp` (15), `src/ov001/Unk_ov001_02121e30.cpp` (14) |
| `asm/overlay132/overlay132.s` | 86 | main 0x02061a2c-0x020706b4 (67); ov087 0x02174d74-0x0218230c (18); ov001 0x020fe798-0x020fe798 (1) | `src/match/MatchEngine.cpp` (62), `src/ov087/Unk_ov087_02174240.cpp` (5), `src/ov087/Unk_ov087_021772d4.cpp` (5) |
| `asm/overlay126/overlay126.s` | 85 | main 0x0207577c-0x0207e738 (32); ov015 0x0213f8bc-0x0214440c (32); ov087 0x0217f288-0x02182248 (16) | `src/match/MatchEngine_2.cpp` (32), `src/ov015/Unk_0214079c.cpp` (27), `src/ov087/Unk_ov087_02180788.cpp` (11) |
| `asm/overlay16/cmodel.s` | 76 | ov015 0x0214448c-0x02164d70 (76) | `src/ov015/Unk_021437ac.cpp` (75) |
| `asm/overlay16/c3dspritectrl.s` | 72 | main 0x0209443c-0x02096e60 (72) | `src/game/Unk_0209657c.cpp` (32), `src/game/Unk_02095154.cpp` (29), `src/game/Unk_0209386c.cpp` (11) |
| `asm/overlay4/overlay4.s` | 69 | ov003 0x020fe94c-0x0211d3f8 (69) | `src/ov003/Unk_ov003_02102880.cpp` (26), `src/ov003/Unk_ov003_021124c0.cpp` (9), `src/ov003/Unk_ov003_02115874.cpp` (9) |
| `asm/logicthink.s` | 66 | main 0x020728e0-0x02082f3c (66) | `src/match/MatchEngine_2.cpp` (45), `src/match/MatchUtil.cpp` (17), `src/game/Unk_02081740.cpp` (3) |
| `asm/2dadventurelogic.s` | 62 | main 0x02084e40-0x02086ac8 (62) | `src/game/Unk_02084ff4.cpp` (45), `src/game/Unk_02086070.cpp` (13), `src/match/MatchGeometry.cpp` (4) |
| `asm/overlay16/csprbuttonctrl.s` | 55 | ov015 0x02161c3c-0x021630d8 (55) | `src/ov015/Unk_02161af4.cpp` (55) |
| `asm/overlay67/overlay67.s` | 55 | ov052 0x0216663c-0x0216e354 (55) | `src/ov052/Unk_ov052_02168f7c.cpp` (30), `src/ov052/Unk_ov052_0216c000.cpp` (21), `src/ov052/Unk_ov052_02165d60.cpp` (3) |
| `asm/overlay16/ov16_020efa04.s` | 53 | ov015 0x02130b14-0x02131ef4 (52); main 0x020380e8-0x020380e8 (1) | `src/ov015/Unk_02131004.cpp` (42), `src/ov015/Unk_021306e0.cpp` (10), `src/movie/MoviePlayer.cpp` (1) |
| `asm/arm9_0206f0b8.s` | 51 | main 0x0206a964-0x0206effc (40); itcm 0x01ffb2e0-0x01ffef7c (11) | `src/match/MatchEngine.cpp` (22), `src/match/MatchRules.cpp` (18), `src/libs/Unk_itcm_01ff8000.c` (11) |
| `asm/arm9_0203df80.s` | 50 | main 0x0203c0fc-0x0203dad8 (50) | `src/wireless/Wireless.cpp` (50) |
| `asm/overlay54/overlay54.s` | 49 | ov039 0x02165d60-0x02168714 (49) | `src/ov039/Unk_ov039_02165d60.cpp` (48) |
| `asm/overlay53/overlay53.s` | 45 | ov038 0x021660a8-0x02169c10 (44); ov074 0x02171094-0x02171094 (1) | `src/ov038/Unk_ov038_02165d60.cpp` (33), `src/ov038/Unk_ov038_02168e24.cpp` (11) |
| `asm/overlay16/scenescriptthread.s` | 44 | ov015 0x02149c58-0x02160bac (44) | `src/ov015/Unk_0215eaa8.cpp` (25), `src/ov015/Unk_02149818.cpp` (11), `src/ov015/Unk_0214c83c.cpp` (8) |
| `asm/arm9_0203fb5c.s` | 42 | main 0x0208363c-0x02084970 (42) | `src/match/MatchGeometry.cpp` (38), `src/match/UnkClass_0208351c.cpp` (4) |
| `asm/overlay63/overlay63.s` | 40 | ov048 0x02165e60-0x0216e9f8 (40) | `src/ov048/Unk_ov048_02168df8.cpp` (19), `src/ov048/Unk_ov048_0216be28.cpp` (14), `src/ov048/Unk_ov048_02165d60.cpp` (7) |
| `asm/overlay84/overlay84.s` | 38 | ov063 0x02165d60-0x021676b4 (38) | `src/ov063/Unk_ov063_02165d60.cpp` (38) |
| `asm/3dgamechar.s` | 37 | main 0x02089024-0x0208a5e0 (37) | `src/game/Unk_02089004.cpp` (37) |
| `asm/overlay16/compositemodel.s` | 37 | ov015 0x021462e4-0x02147440 (37) | `src/ov015/Unk_021467c8.cpp` (20), `src/ov015/Unk_021437ac.cpp` (17) |
| `asm/3dgamemapobject.s` | 36 | main 0x0208d0d8-0x0208e870 (36) | `src/game/Unk_0208d0d8.cpp` (36) |
| `asm/overlay85/overlay85.s` | 36 | ov064 0x02165d60-0x02168cd0 (36) | `src/ov064/Unk_ov064_02165d60.cpp` (35) |
| `asm/wirelessutil.s` | 34 | main 0x0209be60-0x0209d1d4 (34) | `src/game/Unk_0209b7b0.cpp` (30), `src/game/Unk_0209cd14.cpp` (4) |
| `asm/arm9_0205318c.s` | 33 | main 0x02099664-0x0209a3b0 (33) | `src/game/Unk_02098f14.cpp` (32), `src/game/Unk_0209a3b0.cpp` (1) |
| `asm/overlay15/overlay15.s` | 33 | ov014 0x020fc8a0-0x02101334 (32); ov016 0x0213e9ec-0x0213e9ec (1) | `src/ov014/Unk_ov014_020fc7e0.cpp` (23), `src/ov014/Unk_ov014_020ff844.cpp` (9), `src/ov016/Unk_0213cd9c.cpp` (1) |
| `asm/overlay16/ov16_graphics.s` | 33 | ov015 0x02131f84-0x0213396c (33) | `src/ov015/Unk_02131004.cpp` (33) |
| `asm/overlay16/ccameractrl.s` | 33 | ov015 0x0213c830-0x0213da48 (33) | `src/ov015/Unk_0213d138.cpp` (21), `src/ov015/Unk_0213a104.cpp` (12) |
| `asm/scenedirection.s` | 30 | main 0x02054d4c-0x0205df74 (30) | `src/game/UnkClass_02054800.cpp` (26), `src/game/Unk_0205dee0.cpp` (4) |
| `asm/overlay16/cbgmenumanager.s` | 30 | ov015 0x0213b364-0x0213c488 (30) | `src/ov015/Unk_0213a104.cpp` (30) |
| `asm/2dgamechar.s` | 28 | main 0x02086afc-0x02088580 (28) | `src/game/Unk_02087500.cpp` (16), `src/game/Unk_02086070.cpp` (12) |
| `asm/overlay16/ctexture.s` | 28 | ov015 0x02163f50-0x0216473c (28) | `src/ov015/Unk_02161af4.cpp` (28) |
| `asm/arm9_0205244c.s` | 26 | main 0x02089384-0x02090d0c (26) | `src/game/Unk_02090194.cpp` (20), `src/game/Unk_02089004.cpp` (6) |
| `asm/overlay51/overlay51.s` | 26 | ov036 0x02165d70-0x02169ad8 (26) | `src/ov036/Unk_ov036_02165d60.cpp` (21), `src/ov036/Unk_ov036_02168e64.cpp` (5) |
| `asm/overlay57/overlay57.s` | 26 | ov042 0x02165d60-0x0216e194 (26) | `src/ov042/Unk_ov042_02168de4.cpp` (13), `src/ov042/Unk_ov042_02165d60.cpp` (8), `src/ov042/Unk_ov042_0216bdfc.cpp` (5) |
| `asm/unitmanager.s` | 25 | main 0x02037694-0x020813a8 (25) | `src/match/MatchUtil.cpp` (22), `src/match/MatchEngine_2.cpp` (2), `src/system/GameHeap.cpp` (1) |
| `asm/overlay80/overlay80.s` | 25 | ov059 0x02165d60-0x0216b138 (25) | `src/ov059/Unk_ov059_02165d60.cpp` (19), `src/ov059/Unk_ov059_02168da4.cpp` (6) |
| `asm/3dgamemap.s` | 24 | main 0x0208b95c-0x0208cf78 (24) | `src/game/Unk_0208afe4.cpp` (24) |
| `asm/overlay42/overlay42.s` | 24 | ov027 0x02166168-0x0216b74c (24) | `src/ov027/Unk_ov027_02168fbc.cpp` (13), `src/ov027/Unk_ov027_02165d60.cpp` (11) |
| `asm/overlay131/overlay131.s` | 23 | main 0x02053874-0x02081d20 (18); ov000 0x02114db4-0x02116958 (5) | `src/game/UnkClass_02054800.cpp` (13), `src/ov000/Unk_ov000_02116308.cpp` (3), `src/match/MatchEngine_2.cpp` (2) |
| `asm/overlay88/overlay88.s` | 23 | ov067 0x02165d60-0x021686dc (23) | `src/ov067/Unk_ov067_02165d60.cpp` (23) |
| `asm/3dgameeffect.s` | 22 | main 0x0208a718-0x0208b8cc (22) | `src/game/Unk_0208afe4.cpp` (12), `src/game/Unk_02089004.cpp` (10) |
| `asm/overlay16/cspranimectrl.s` | 22 | ov015 0x02160ce0-0x02161bf4 (22) | `src/ov015/Unk_0215eaa8.cpp` (19), `src/ov015/Unk_02161af4.cpp` (3) |
| `asm/overlay59/overlay59.s` | 22 | ov044 0x02165e88-0x0216a32c (22) | `src/ov044/Unk_ov044_02165d60.cpp` (14), `src/ov044/Unk_ov044_02168e14.cpp` (8) |
| `asm/overlay91/overlay91.s` | 22 | ov065 0x02165d60-0x0216838c (22) | `src/ov065/Unk_ov065_02165d60.cpp` (21) |
| `asm/overlay16/cmodelcfg.s` | 20 | ov015 0x02145d7c-0x021462cc (20) | `src/ov015/Unk_021437ac.cpp` (20) |
| `asm/overlay87/overlay87.s` | 20 | ov066 0x02165d60-0x0216852c (20) | `src/ov066/Unk_ov066_02165d60.cpp` (20) |
| `asm/overlay16/ov16_020ede60.s` | 19 | main 0x0206e1c4-0x02078474 (19) | `src/match/MatchEngine_2.cpp` (18), `src/match/MatchEngine.cpp` (1) |
| `asm/actor2d.s` | 19 | main 0x02084be8-0x02099bcc (19) | `src/match/MatchGeometry.cpp` (16), `src/game/Unk_02098f14.cpp` (3) |
| `asm/overlay43/overlay43.s` | 19 | ov028 0x02166120-0x0216aeb0 (19) | `src/ov028/Unk_ov028_02165d60.cpp` (10), `src/ov028/Unk_ov028_02168e14.cpp` (9) |
| `asm/overlay62/overlay62.s` | 19 | ov047 0x02166dfc-0x0216a6a8 (19) | `src/ov047/Unk_ov047_02165d60.cpp` (16), `src/ov047/Unk_ov047_02169034.cpp` (3) |
| `asm/overlay41/overlay41.s` | 18 | ov026 0x02166270-0x0216b220 (18) | `src/ov026/Unk_ov026_02165d60.cpp` (9), `src/ov026/Unk_ov026_02169010.cpp` (9) |
| `asm/overlay96/overlay96.s` | 17 | ov071 0x02170148-0x02170b2c (16); ov003 0x0211d2a8-0x0211d2a8 (1) | `src/ov071/Unk_ov071_0216ffa0.cpp` (16) |
| `asm/overlay16/cquitmenumanager.s` | 17 | ov015 0x02148760-0x02164f10 (17) | `src/ov015/Unk_021467c8.cpp` (16) |
| `asm/overlay16/csprdialog.s` | 17 | ov015 0x02163100-0x02163edc (17) | `src/ov015/Unk_02161af4.cpp` (17) |
| `asm/overlay71/overlay71.s` | 17 | ov055 0x02165d60-0x02166b68 (17) | `src/ov055/Unk_ov055_02165d60.cpp` (17) |
| `asm/overlay79/overlay79.s` | 16 | ov001 0x02117274-0x02117c8c (16) | `src/ov001/Unk_ov001_021159c0.cpp` (16) |
| `asm/overlay115/overlay115.s` | 15 | ov001 0x0211ebe8-0x02129054 (15) | `src/ov001/Unk_ov001_0211ec68.cpp` (11), `src/ov001/Unk_ov001_0211bc68.cpp` (3) |
| `asm/overlay40/overlay40.s` | 15 | ov025 0x02165dc4-0x02167908 (14); ov001 0x02129150-0x02129150 (1) | `src/ov025/Unk_ov025_02165d60.cpp` (14) |
| `asm/overlay45/overlay45.s` | 15 | ov030 0x02165e48-0x021688c4 (13); ov037 0x0216a0dc-0x0216a0dc (1); ov059 0x021693e0-0x021693e0 (1) | `src/ov030/Unk_ov030_02165d60.cpp` (13), `src/ov037/Unk_ov037_02168dd4.cpp` (1), `src/ov059/Unk_ov059_02168da4.cpp` (1) |
| `asm/overlay65/overlay65.s` | 15 | ov050 0x0216612c-0x02168bb4 (15) | `src/ov050/Unk_ov050_02165d60.cpp` (15) |
| `asm/overlay121/overlay121.s` | 15 | ov085 0x0216ffa0-0x02170c18 (15) | `src/ov085/Unk_ov085_0216ffa0.cpp` (15) |
| `asm/overlay122/overlay122.s` | 15 | ov086 0x0216ffa0-0x02170ffc (15) | `src/ov086/Unk_ov086_0216ffa0.cpp` (15) |
| `asm/itcm.s` | 14 | itcm 0x01ff852c-0x01fff3cc (13); main 0x020838d0-0x020838d0 (1) | `src/libs/Unk_itcm_01ff8000.c` (13), `src/match/UnkClass_0208351c.cpp` (1) |
| `asm/arm9_020453e0.s` | 14 | main 0x0209ac74-0x0209bb28 (14) | `src/game/Unk_0209a3b0.cpp` (11), `src/game/Unk_0209b7b0.cpp` (3) |
| `asm/overlay16/ov16_020f3f00.s` | 14 | ov015 0x02134c78-0x021363e8 (14) | `src/ov015/Unk_02134024.cpp` (14) |
| `asm/overlay16/cmotion.s` | 14 | ov015 0x021474bc-0x02147878 (14) | `src/ov015/Unk_021467c8.cpp` (14) |
| `asm/overlay44/overlay44.s` | 13 | ov029 0x02166428-0x0216c534 (13) | `src/ov029/Unk_ov029_02165d60.cpp` (6), `src/ov029/Unk_ov029_0216c1f8.cpp` (6), `src/ov029/Unk_ov029_02168df8.cpp` (1) |
| `asm/overlay61/overlay61.s` | 13 | ov046 0x02165d74-0x0216a0e8 (13) | `src/ov046/Unk_ov046_02165d60.cpp` (10), `src/ov046/Unk_ov046_02169170.cpp` (3) |
| `asm/overlay68/overlay68.s` | 13 | ov053 0x02165f04-0x0216b2a4 (13) | `src/ov053/Unk_ov053_02168eb4.cpp` (8), `src/ov053/Unk_ov053_02165d60.cpp` (5) |
| `asm/overlay97/overlay97.s` | 13 | ov072 0x02170210-0x0217155c (13) | `src/ov072/Unk_ov072_0216ffa0.cpp` (13) |
| `asm/overlay114/overlay114.s` | 12 | ov001 0x0211d754-0x0211eac8 (12) | `src/ov001/Unk_ov001_0211bc68.cpp` (12) |
| `asm/overlay81/overlay81.s` | 12 | ov060 0x021665a0-0x02168668 (12) | `src/ov060/Unk_ov060_02165d60.cpp` (11) |
| `asm/eventscreenmanager.s` | 11 | main 0x020523bc-0x02052fd8 (11) | `src/game/TreasureBox.cpp` (11) |
| `asm/overlay66/overlay66.s` | 11 | ov051 0x02165d60-0x02166234 (11) | `src/ov051/Unk_ov051_02165d60.cpp` (11) |
| `asm/overlay69/overlay69.s` | 11 | ov054 0x021678c8-0x0216935c (11) | `src/ov054/Unk_ov054_02165d60.cpp` (9), `src/ov054/Unk_ov054_02168d70.cpp` (2) |
| `asm/overlay120/overlay120.s` | 11 | ov084 0x0216ffa0-0x02170da4 (11) | `src/ov084/Unk_ov084_0216ffa0.cpp` (10) |
| `asm/gamemain.s` | 10 | main 0x0203ecd4-0x0203f3b4 (10) | `src/game/SceneManager.cpp` (10) |
| `asm/overlay92/overlay92.s` | 10 | ov068 0x021701b4-0x021708ac (10) | `src/ov068/Unk_ov068_0216ffa0.cpp` (10) |
| `asm/scenescriptmanager.s` | 9 | main 0x02060448-0x02061210 (9) | `src/game/ScriptManager.cpp` (9) |
| `asm/thinkmanager.s` | 9 | main 0x020832a8-0x020834e0 (9) | `src/match/MatchPlayerList.cpp` (9) |
| `asm/overlay16/cdungeonmanager.s` | 9 | ov015 0x0213e0e8-0x0213ec08 (9) | `src/ov015/Unk_0213d138.cpp` (9) |
| `asm/overlay39/overlay39.s` | 9 | ov024 0x02165d8c-0x021679e8 (9) | `src/ov024/Unk_ov024_02165d60.cpp` (8) |
| `asm/overlay119/overlay119.s` | 8 | ov001 0x021223f4-0x02122b54 (8) | `src/ov001/Unk_ov001_02121e30.cpp` (8) |
| `asm/overlay60/overlay60.s` | 8 | ov045 0x02168098-0x0216a21c (8) | `src/ov045/Unk_ov045_02168e34.cpp` (7), `src/ov045/Unk_ov045_02165d60.cpp` (1) |
| `asm/overlay107/overlay107.s` | 8 | ov077 0x0216ffa0-0x02170320 (8) | `src/ov077/Unk_ov077_0216ffa0.cpp` (8) |
| `asm/overlay77/overlay77.s` | 7 | ov001 0x02116710-0x02116bc8 (7) | `src/ov001/Unk_ov001_021159c0.cpp` (7) |
| `asm/overlay34/overlay34.s` | 7 | ov003 0x0210c968-0x0210ddc0 (4); ov004 0x020fcdcc-0x020fcf8c (2); ov031 0x0216bd48-0x0216bd48 (1) | `src/ov003/Unk_ov003_0210bd08.cpp` (4), `src/ov004/Unk_ov004_020fc7e0.cpp` (2) |
| `asm/overlay16/ov16_020f2cf8.s` | 7 | ov015 0x02133d50-0x02133e8c (7) | `src/ov015/Unk_02131004.cpp` (7) |
| `asm/overlay56/overlay56.s` | 7 | ov041 0x02167184-0x0216b970 (7) | `src/ov041/Unk_ov041_02168dbc.cpp` (4), `src/ov041/Unk_ov041_02165d60.cpp` (3) |
| `asm/overlay33/overlay33.s` | 6 | ov003 0x021194a4-0x0211a748 (5); ov027 0x0216bc8c-0x0216bc8c (1) | `src/ov003/Unk_ov003_021188a4.cpp` (5) |
| `asm/overlay47/overlay47.s` | 6 | ov032 0x021676cc-0x02169278 (6) | `src/ov032/Unk_ov032_02165d60.cpp` (4), `src/ov032/Unk_ov032_02168e2c.cpp` (2) |
| `asm/overlay83/overlay83.s` | 6 | ov062 0x02165e4c-0x02166ddc (6) | `src/ov062/Unk_ov062_02165d60.cpp` (6) |
| `asm/overlay110/overlay110.s` | 6 | ov080 0x021702c8-0x02170954 (5); ov079 0x02172f40-0x02172f40 (1) | `src/ov080/Unk_ov080_0216ffa0.cpp` (5), `src/ov079/Unk_ov079_0216ffa0.cpp` (1) |
| `asm/overlay37/overlay37.s` | 5 | ov003 0x020fcc60-0x020fd6d8 (5) | `src/ov003/Unk_ov003_020fc7e0.cpp` (5) |
| `asm/overlay108/overlay108.s` | 5 | ov078 0x02170cbc-0x02171028 (5) | `src/ov078/Unk_ov078_0216ffa0.cpp` (5) |
| `asm/recordmanager.s` | 4 | main 0x020383ec-0x020396f8 (4) | `src/save/SaveManager.cpp` (4) |
| `asm/overlay104/overlay104.s` | 4 | ov074 0x02170fe8-0x02171010 (3); main 0x0208a44c-0x0208a44c (1) | `src/ov074/Unk_ov074_0216ffa0.cpp` (3), `src/game/Unk_02089004.cpp` (1) |
| `asm/overlay35/overlay35.s` | 4 | ov003 0x020ff180-0x020ff698 (4) | `src/ov003/Unk_ov003_020fc7e0.cpp` (4) |
| `asm/overlay46/overlay46.s` | 4 | ov031 0x02168434-0x0216bc64 (4) | `src/ov031/Unk_ov031_02165d60.cpp` (2), `src/ov031/Unk_ov031_02168f58.cpp` (2) |
| `asm/overlay49/overlay49.s` | 4 | ov034 0x02166df8-0x02167374 (4) | `src/ov034/Unk_ov034_02165d60.cpp` (4) |
| `asm/overlay74/overlay74.s` | 4 | ov058 0x02165d98-0x02166408 (4) | `src/ov058/Unk_ov058_02165d60.cpp` (4) |
| `asm/overlay32/overlay32.s` | 3 | ov003 0x021029b8-0x02102b70 (2); ov014 0x02124130-0x02124130 (1) | `src/ov003/Unk_ov003_02102880.cpp` (2) |
| `asm/overlay21/overlay21.s` | 3 | ov020 0x02166284-0x02167a34 (3) | `src/ov020/Unk_ov020_02165d60.cpp` (3) |
| `asm/overlay48/overlay48.s` | 3 | ov033 0x02166ad0-0x02166fec (3) | `src/ov033/Unk_ov033_02165d60.cpp` (2) |
| `asm/overlay73/overlay73.s` | 3 | ov057 0x02166658-0x02168624 (3) | `src/ov057/Unk_ov057_02165d60.cpp` (3) |
| `asm/overlay86/overlay86.s` | 3 | ov065 0x02167468-0x02167704 (3) | `src/ov065/Unk_ov065_02165d60.cpp` (3) |
| `asm/overlay105/overlay105.s` | 3 | ov075 0x021720bc-0x02172a54 (3) | `src/ov075/Unk_ov075_0216ffa0.cpp` (2) |
| `asm/overlay118/overlay118.s` | 3 | ov083 0x021701e4-0x02170b4c (3) | `src/ov083/Unk_ov083_0216ffa0.cpp` (3) |
| `asm/thinkmanager_mini.s` | 2 | main 0x02083578-0x020835e0 (2) | `src/match/UnkClass_0208351c.cpp` (2) |
| `asm/cameracontroller.s` | 2 | main 0x02088df4-0x02088eb0 (2) | `src/game/Unk_02087500.cpp` (2) |
| `asm/overlay76/overlay76.s` | 2 | ov001 0x02115f28-0x02116164 (2) | `src/ov001/Unk_ov001_021159c0.cpp` (2) |
| `asm/overlay82/overlay82.s` | 2 | ov061 0x02167b50-0x02167b70 (2) | `src/ov061/Unk_ov061_02165d60.cpp` (2) |
| `asm/overlay111/overlay111.s` | 2 | ov081 0x021709d8-0x02170a98 (2) | `src/ov081/Unk_ov081_0216ffa0.cpp` (2) |
| `asm/gamemodes_0.s` | 1 | main 0x0203e2fc-0x0203e2fc (1) | `src/game/SceneManager.cpp` (1) |
| `asm/izmain_0.s` | 1 | main 0x020404bc-0x020404bc (1) | `src/system/System.cpp` (1) |
| `asm/init/arm9_init_02087500.s` | 1 | main 0x0209f630-0x0209f630 (1) |  |
| `asm/init/arm9_init_02086f2c.s` | 1 | main 0x0209fbac-0x0209fbac (1) |  |
| `asm/overlay52/overlay52.s` | 1 | ov015 0x02136584-0x02136584 (1) | `src/ov015/Unk_02134024.cpp` (1) |
| `asm/overlay25/overlay25.s` | 1 | ov049 0x021674d4-0x021674d4 (1) |  |
| `asm/overlay72/overlay72.s` | 1 | ov056 0x02165d60-0x02165d60 (1) | `src/ov056/Unk_ov056_02165d60.cpp` (1) |
| `asm/overlay24/overlay24.s` | 1 | ov061 0x02169de0-0x02169de0 (1) |  |
| `asm/overlay113/overlay113.s` | 1 | ov082 0x021712c4-0x021712c4 (1) | `src/ov082/Unk_ov082_0216ffa0.cpp` (1) |

### Libraries

| Library file | Pairs | Here | Same name here |
|---|---:|---|---:|
| `lib/DSE/asm/libDSE.s` | 123 | main 0x020406b4-0x02051ad8 (123) | 118 |
| `lib/TwlDWC_dl/asm/ac/beacon.s` | 9 | ov014 0x021071d0-0x02107748 (9) | 9 |
| `lib/TwlDWC_dl/asm/ac/callback.s` | 1 | ov014 0x02107934-0x02107934 (1) | 1 |
| `lib/TwlDWC_dl/asm/ac/close.s` | 3 | ov014 0x021079c0-0x02107ad4 (3) | 3 |
| `lib/TwlDWC_dl/asm/ac/connect.s` | 7 | ov014 0x02107b18-0x02107f70 (7) | 7 |
| `lib/TwlDWC_dl/asm/ac/dwc_ac.s` | 26 | ov014 0x02108054-0x02108a58 (26) | 26 |
| `lib/TwlDWC_dl/asm/ac/dwc_connectinet.s` | 13 | ov014 0x02108a60-0x0210929c (13) | 13 |
| `lib/TwlDWC_dl/asm/ac/error.s` | 6 | ov014 0x0210930c-0x0210940c (6) | 6 |
| `lib/TwlDWC_dl/asm/ac/makelist.s` | 8 | ov014 0x02109540-0x02109958 (8) | 8 |
| `lib/TwlDWC_dl/asm/ac/nintendospot.s` | 10 | ov014 0x0210999c-0x02109dec (10) | 10 |
| `lib/TwlDWC_dl/asm/ac/retry.s` | 1 | ov014 0x02109e00-0x02109e00 (1) | 1 |
| `lib/TwlDWC_dl/asm/ac/search.s` | 14 | ov014 0x02109ed4-0x0210a938 (14) | 14 |
| `lib/TwlDWC_dl/asm/ac/shop_usb.s` | 10 | ov014 0x0210a9e8-0x0210ae3c (10) | 10 |
| `lib/TwlDWC_dl/asm/ac/start.s` | 1 | ov014 0x0210af94-0x0210af94 (1) | 1 |
| `lib/TwlDWC_dl/asm/ac/test.s` | 11 | ov014 0x0210b01c-0x0210b45c (11) | 11 |
| `lib/TwlDWC_dl/asm/ac/wds.s` | 9 | ov014 0x02106bd0-0x02107128 (9) | 9 |
| `lib/TwlDWC_dl/asm/auth/dwc_auth.s` | 14 | ov014 0x0210b4e4-0x0210c264 (14) | 14 |
| `lib/TwlDWC_dl/asm/auth/dwc_auth_interface.s` | 1 | ov014 0x0210c2a4-0x0210c2a4 (1) | 1 |
| `lib/TwlDWC_dl/asm/auth/dwc_cal.s` | 3 | ov014 0x0210c2fc-0x0210c5c8 (3) | 3 |
| `lib/TwlDWC_dl/asm/auth/dwc_http.s` | 25 | ov014 0x0210c91c-0x0210dbb8 (25) | 25 |
| `lib/TwlDWC_dl/asm/auth/dwc_netcheck.s` | 8 | ov014 0x0210dc30-0x0210eb98 (8) | 8 |
| `lib/TwlDWC_dl/asm/auth/dwc_svl.s` | 4 | ov014 0x0210ebd8-0x0210efb0 (4) | 4 |
| `lib/TwlDWC_dl/asm/bm/dwc_backup.s` | 23 | ov014 0x0210f1f8-0x0210fd18 (23) | 23 |
| `lib/TwlDWC_dl/asm/bm/dwc_bm_init.s` | 4 | ov014 0x0210fd24-0x0211018c (4) | 3 |
| `lib/TwlDWC_dl/asm/bm/util_wifiidtool.s` | 7 | ov014 0x021101b8-0x02110784 (7) | 7 |
| `lib/TwlDWC_dl/asm/common/dwc_base64.s` | 2 | ov014 0x021107d4-0x02110950 (2) | 2 |
| `lib/TwlDWC_dl/asm/common/dwc_error.s` | 5 | ov014 0x02110aac-0x02110be4 (5) | 5 |
| `lib/TwlDWC_dl/asm/common/dwc_init.s` | 3 | ov014 0x02110bfc-0x02110cf4 (3) | 3 |
| `lib/TwlDWC_dl/asm/common/dwc_memfunc.s` | 6 | ov014 0x02110d04-0x02110d78 (6) | 6 |
| `lib/TwlDWC_dl/asm/nas/dwc_nasfunc.s` | 2 | ov014 0x02110e4c-0x02110f30 (2) | 2 |
| `lib/TwlDWC_dl/asm/nas/dwc_nastime.s` | 1 | ov014 0x02111068-0x02111068 (1) | 1 |
| `lib/TwlDWC_dl/asm/nd/dwc_nd.s` | 12 | ov014 0x0211126c-0x02111a84 (12) | 12 |
| `lib/TwlDWC_dl/asm/nd/dwci_nd.s` | 49 | ov014 0x02111ae8-0x02113834 (49) | 49 |
| `lib/TwlDWC_dl/asm/nhttp/d_nhttp.s` | 9 | ov014 0x02118220-0x021183ec (9) | 9 |
| `lib/TwlDWC_dl/asm/nhttp/d_nhttp_common.s` | 35 | ov014 0x02118414-0x02118a0c (35) | 35 |
| `lib/TwlDWC_dl/asm/nhttp/d_nhttp_private.s` | 11 | ov014 0x02118a40-0x02118ea4 (11) | 11 |
| `lib/TwlDWC_dl/asm/nhttp/nhttp_bgnend.s` | 8 | ov014 0x02114454-0x02114600 (8) | 8 |
| `lib/TwlDWC_dl/asm/nhttp/nhttp_control.s` | 6 | ov014 0x0211468c-0x021148c8 (6) | 6 |
| `lib/TwlDWC_dl/asm/nhttp/nhttp_list.s` | 6 | ov014 0x0211495c-0x02114b38 (6) | 6 |
| `lib/TwlDWC_dl/asm/nhttp/nhttp_os_ntr.s` | 8 | ov014 0x0211388c-0x021139a0 (8) | 8 |
| `lib/TwlDWC_dl/asm/nhttp/nhttp_recvbuf.s` | 9 | ov014 0x02114b44-0x02114fb4 (9) | 9 |
| `lib/TwlDWC_dl/asm/nhttp/nhttp_request.s` | 8 | ov014 0x02115030-0x0211571c (8) | 8 |
| `lib/TwlDWC_dl/asm/nhttp/nhttp_response.s` | 3 | ov014 0x02115798-0x02115960 (3) | 3 |
| `lib/TwlDWC_dl/asm/nhttp/nhttp_socket_ntr.s` | 14 | ov014 0x021139ac-0x02113dd8 (14) | 14 |
| `lib/TwlDWC_dl/asm/nhttp/nhttp_stdlib_ntr.s` | 15 | ov014 0x02113e40-0x021143d0 (15) | 15 |
| `lib/TwlDWC_dl/asm/nhttp/nhttp_thread.s` | 30 | ov014 0x02115a6c-0x021180ac (30) | 30 |
| `lib/TwlDWC_dl/asm/util/anime.s` | 3 | ov016 0x02136d50-0x02136e54 (3) | 3 |
| `lib/TwlDWC_dl/asm/util/aoss.s` | 28 | ov016 0x02131208-0x02132894 (28) | 26 |
| `lib/TwlDWC_dl/asm/util/aosslink.s` | 3 | ov016 0x021329b8-0x02132ef8 (3) | 3 |
| `lib/TwlDWC_dl/asm/util/archive_.s` | 6 | ov016 0x0214ef34-0x0214f1b0 (6) | 6 |
| `lib/TwlDWC_dl/asm/util/atermset.s` | 25 | ov016 0x021343bc-0x02136b38 (25) | 25 |
| `lib/TwlDWC_dl/asm/util/button.s` | 15 | ov016 0x02136f14-0x0213748c (15) | 15 |
| `lib/TwlDWC_dl/asm/util/cell.s` | 11 | ov016 0x0214f208-0x0214f764 (11) | 11 |
| `lib/TwlDWC_dl/asm/util/cellinfo.s` | 4 | ov016 0x0214f7c4-0x0214f8a8 (4) | 4 |
| `lib/TwlDWC_dl/asm/util/comment.s` | 2 | ov016 0x02137590-0x02137668 (2) | 2 |
| `lib/TwlDWC_dl/asm/util/common.s` | 7 | ov016 0x021376a0-0x021378fc (7) | 7 |
| `lib/TwlDWC_dl/asm/util/deque.s` | 5 | ov016 0x0214f8f0-0x0214f9d8 (5) | 5 |
| `lib/TwlDWC_dl/asm/util/dwc_mov_mbp.s` | 19 | ov016 0x0214c218-0x0214cdf8 (19) | 19 |
| `lib/TwlDWC_dl/asm/util/dwc_mov_wh.s` | 45 | ov016 0x0214cea0-0x0214dfdc (45) | 45 |
| `lib/TwlDWC_dl/asm/util/dwc_moveid.s` | 20 | ov016 0x0214e02c-0x0214ed68 (20) | 20 |
| `lib/TwlDWC_dl/asm/util/effect.s` | 6 | ov016 0x0214fa80-0x0214fd00 (6) | 6 |
| `lib/TwlDWC_dl/asm/util/focus.s` | 4 | ov016 0x02137934-0x02137ad8 (4) | 4 |
| `lib/TwlDWC_dl/asm/util/font.s` | 15 | ov016 0x0214fd38-0x021504d8 (15) | 15 |
| `lib/TwlDWC_dl/asm/util/foundation.s` | 3 | ov016 0x021504fc-0x02150520 (3) | 3 |
| `lib/TwlDWC_dl/asm/util/graphics.s` | 4 | ov016 0x02150550-0x02150708 (4) | 4 |
| `lib/TwlDWC_dl/asm/util/headline.s` | 5 | ov016 0x02137b90-0x02137c34 (5) | 5 |
| `lib/TwlDWC_dl/asm/util/heap.s` | 5 | ov016 0x021508bc-0x02150990 (5) | 5 |
| `lib/TwlDWC_dl/asm/util/icon.s` | 3 | ov016 0x02137c74-0x02137d64 (3) | 3 |
| `lib/TwlDWC_dl/asm/util/input.s` | 13 | ov016 0x02150a4c-0x02151078 (13) | 13 |
| `lib/TwlDWC_dl/asm/util/interrupt.s` | 2 | ov016 0x021511f8-0x02151230 (2) | 2 |
| `lib/TwlDWC_dl/asm/util/keyboard.s` | 30 | ov016 0x02137e08-0x021397e0 (30) | 28 |
| `lib/TwlDWC_dl/asm/util/keyboard10.s` | 28 | ov016 0x021398c0-0x0213ac18 (28) | 28 |
| `lib/TwlDWC_dl/asm/util/libaoss.s` | 5 | ov016 0x0213acd8-0x0213ae94 (5) | 5 |
| `lib/TwlDWC_dl/asm/util/list.s` | 6 | ov016 0x02151258-0x02151318 (6) | 6 |
| `lib/TwlDWC_dl/asm/util/main.s` | 12 | ov016 0x0213b090-0x0213b434 (12) | 12 |
| `lib/TwlDWC_dl/asm/util/message.s` | 4 | ov016 0x0213b4ac-0x0213b55c (4) | 4 |
| `lib/TwlDWC_dl/asm/util/move.s` | 8 | ov016 0x0213b588-0x0213b724 (8) | 8 |
| `lib/TwlDWC_dl/asm/util/obj.s` | 6 | ov016 0x02151328-0x02151498 (6) | 6 |
| `lib/TwlDWC_dl/asm/util/objvram.s` | 3 | ov016 0x021514b0-0x021516d4 (3) | 3 |
| `lib/TwlDWC_dl/asm/util/rakuraku.s` | 7 | ov016 0x0213b99c-0x0213bb38 (7) | 7 |
| `lib/TwlDWC_dl/asm/util/sceneend.s` | 2 | ov016 0x0213bb44-0x0213bb8c (2) | 2 |
| `lib/TwlDWC_dl/asm/util/sceneinit.s` | 2 | ov016 0x0213bdd8-0x0213be1c (2) | 2 |
| `lib/TwlDWC_dl/asm/util/scenemenu.s` | 14 | ov016 0x0213be98-0x0213c3f0 (14) | 13 |
| `lib/TwlDWC_dl/asm/util/sceneopterase.s` | 14 | ov016 0x0213c430-0x0213c810 (14) | 14 |
| `lib/TwlDWC_dl/asm/util/sceneopterase1.s` | 12 | ov016 0x0213c830-0x0213ca3c (12) | 12 |
| `lib/TwlDWC_dl/asm/util/sceneoptinfo.s` | 13 | ov016 0x0213ca70-0x0213ced8 (13) | 13 |
| `lib/TwlDWC_dl/asm/util/sceneoptmenu.s` | 14 | ov016 0x0213cf50-0x0213d644 (14) | 14 |
| `lib/TwlDWC_dl/asm/util/sceneoptmovcomm.s` | 10 | ov016 0x0213d670-0x0213d86c (10) | 10 |
| `lib/TwlDWC_dl/asm/util/sceneoptmovcomplete.s` | 12 | ov016 0x0213d8e0-0x0213dad0 (12) | 12 |
| `lib/TwlDWC_dl/asm/util/sceneoptmovconfirm.s` | 12 | ov016 0x0213db04-0x0213dce4 (12) | 12 |
| `lib/TwlDWC_dl/asm/util/sceneoptmovconfirm1.s` | 12 | ov016 0x0213dd38-0x0213dfe4 (12) | 12 |
| `lib/TwlDWC_dl/asm/util/sceneoptmovdisconnect.s` | 9 | ov016 0x0213e0a0-0x0213e26c (9) | 9 |
| `lib/TwlDWC_dl/asm/util/sceneoptmovfailure.s` | 12 | ov016 0x0213e2a0-0x0213e570 (12) | 12 |
| `lib/TwlDWC_dl/asm/util/sceneoptmovuser.s` | 12 | ov016 0x0213e624-0x0213e9ec (12) | 12 |
| `lib/TwlDWC_dl/asm/util/sceneoptmovwait.s` | 14 | ov016 0x0213ea00-0x0213eda4 (14) | 14 |
| `lib/TwlDWC_dl/asm/util/scenesetaossbutton.s` | 18 | ov016 0x0213edf8-0x0213f3ac (18) | 18 |
| `lib/TwlDWC_dl/asm/util/scenesetaosscomplete.s` | 9 | ov016 0x0213f3dc-0x0213f5b4 (9) | 9 |
| `lib/TwlDWC_dl/asm/util/scenesetaplist.s` | 28 | ov016 0x0213f5e8-0x02140a74 (28) | 28 |
| `lib/TwlDWC_dl/asm/util/scenesetedit32.s` | 19 | ov016 0x02140a9c-0x02141558 (19) | 19 |
| `lib/TwlDWC_dl/asm/util/sceneseteditaddress.s` | 21 | ov016 0x0214159c-0x021421b4 (21) | 21 |
| `lib/TwlDWC_dl/asm/util/sceneseterror.s` | 14 | ov016 0x021421f8-0x02142800 (14) | 14 |
| `lib/TwlDWC_dl/asm/util/scenesetlist.s` | 40 | ov016 0x02142810-0x02144ad4 (40) | 40 |
| `lib/TwlDWC_dl/asm/util/scenesetlistsave.s` | 9 | ov016 0x02144ae4-0x02144cc8 (9) | 9 |
| `lib/TwlDWC_dl/asm/util/scenesetrakubutton.s` | 16 | ov016 0x02144d2c-0x02145138 (16) | 16 |
| `lib/TwlDWC_dl/asm/util/scenesetrakubutton1.s` | 16 | ov016 0x02145158-0x0214559c (16) | 16 |
| `lib/TwlDWC_dl/asm/util/scenesetrakucomplete.s` | 9 | ov016 0x021455bc-0x021457a8 (9) | 9 |
| `lib/TwlDWC_dl/asm/util/scenesetrakuready.s` | 16 | ov016 0x021457dc-0x02145c74 (16) | 16 |
| `lib/TwlDWC_dl/asm/util/scenesetsearch.s` | 15 | ov016 0x02145c94-0x02146184 (15) | 15 |
| `lib/TwlDWC_dl/asm/util/scenesetselectap.s` | 19 | ov016 0x021461a4-0x02146dd8 (19) | 19 |
| `lib/TwlDWC_dl/asm/util/scenesetselectway.s` | 14 | ov016 0x02146eac-0x0214761c (14) | 14 |
| `lib/TwlDWC_dl/asm/util/scenesettest.s` | 13 | ov016 0x02147674-0x02147a08 (13) | 13 |
| `lib/TwlDWC_dl/asm/util/scenesettestcompletet.s` | 9 | ov016 0x02147a94-0x02147cb0 (9) | 9 |
| `lib/TwlDWC_dl/asm/util/scenesettestconfirm.s` | 9 | ov016 0x02147d20-0x02147f5c (9) | 9 |
| `lib/TwlDWC_dl/asm/util/scenesetusbcomplete.s` | 9 | ov016 0x02147f9c-0x0214818c (9) | 9 |
| `lib/TwlDWC_dl/asm/util/scenesetusbready.s` | 12 | ov016 0x021481c0-0x021484ac (12) | 12 |
| `lib/TwlDWC_dl/asm/util/scenesetusbready1.s` | 18 | ov016 0x02148564-0x02148b18 (18) | 18 |
| `lib/TwlDWC_dl/asm/util/screen.s` | 9 | ov016 0x02148b7c-0x02148d58 (9) | 9 |
| `lib/TwlDWC_dl/asm/util/scrollbar.s` | 16 | ov016 0x02148d88-0x021493fc (16) | 16 |
| `lib/TwlDWC_dl/asm/util/search_dwc_util.s` | 8 | ov016 0x02149434-0x021496e8 (8) | 7 |
| `lib/TwlDWC_dl/asm/util/setting.s` | 17 | ov016 0x02149904-0x0214a3b4 (17) | 16 |
| `lib/TwlDWC_dl/asm/util/sound.s` | 5 | ov016 0x0214a494-0x0214a528 (5) | 5 |
| `lib/TwlDWC_dl/asm/util/step.s` | 18 | ov016 0x0214a554-0x0214b010 (18) | 18 |
| `lib/TwlDWC_dl/asm/util/str.s` | 2 | ov016 0x02151714-0x02151740 (2) | 2 |
| `lib/TwlDWC_dl/asm/util/sub.s` | 4 | ov016 0x0215180c-0x02151988 (4) | 4 |
| `lib/TwlDWC_dl/asm/util/task.s` | 9 | ov016 0x02151a9c-0x02151ca8 (9) | 9 |
| `lib/TwlDWC_dl/asm/util/usbap.s` | 8 | ov016 0x0214b058-0x0214b5ec (8) | 8 |
| `lib/TwlDWC_dl/asm/util/window.s` | 15 | ov016 0x0214b71c-0x0214c170 (15) | 15 |
| `lib/TwlSDK/asm/card/libcard.s` | 60 | main 0x02010bcc-0x0201239c (60) | 58 |
| `lib/TwlSDK/asm/cp/libcp.s` | 2 | main 0x0200e7c0-0x0200e800 (2) | 2 |
| `lib/TwlSDK/asm/crypto/rc4.s` | 2 | main 0x0209d524-0x0209d5a4 (2) | 2 |
| `lib/TwlSDK/asm/ctrdg/libctrdg.s` | 18 | main 0x02015294-0x020159b0 (18) | 18 |
| `lib/TwlSDK/asm/fs/libfs.s` | 109 | main 0x0200b2b0-0x0200e794 (109) | 109 |
| `lib/TwlSDK/asm/fx/libfx.s` | 37 | main 0x02000c9c-0x0200226c (37) | 37 |
| `lib/TwlSDK/asm/gx/libgx.s` | 117 | main 0x02002400-0x020050a8 (117) | 117 |
| `lib/TwlSDK/asm/init/crt0.s` | 8 | main 0x02000800-0x02040588 (8) | 5 |
| `lib/TwlSDK/asm/math/libmath.s` | 17 | main 0x02015aa0-0x020169bc (17) | 16 |
| `lib/TwlSDK/asm/mb/libmb.s` | 88 | ov089 0x02174240-0x02179140 (88) | 85 |
| `lib/TwlSDK/asm/memory/libmi.s` | 39 | main 0x020088d0-0x02009e14 (38); itcm 0x01ff845c-0x01ff845c (1) | 39 |
| `lib/TwlSDK/asm/os/libos.s` | 196 | main 0x02005108-0x02008894 (189); itcm 0x01ff8000-0x01ff8388 (7) | 196 |
| `lib/TwlSDK/asm/pm/libpm.s` | 39 | main 0x0200f298-0x02010240 (39) | 36 |
| `lib/TwlSDK/asm/pxi/libpxi.s` | 6 | main 0x0200afc0-0x0200b1b0 (6) | 6 |
| `lib/TwlSDK/asm/rtc/librtc.s` | 20 | main 0x0201025c-0x02010b10 (20) | 20 |
| `lib/TwlSDK/asm/snd/libsnd.s` | 61 | main 0x02009e2c-0x0200af84 (61) | 61 |
| `lib/TwlSDK/asm/std/libstd.s` | 11 | main 0x02016cd8-0x020172a0 (11) | 11 |
| `lib/TwlSDK/asm/tp/libtp.s` | 14 | main 0x0200e83c-0x0200f284 (14) | 14 |
| `lib/TwlSDK/asm/wm/libwm.s` | 78 | main 0x020123ec-0x02015218 (78) | 76 |
| `lib/TwlSystem/asm/fnd/libnnsfnd.s` | 35 | main 0x020326b4-0x020331ec (35) | 35 |
| `lib/TwlSystem/asm/g2d/libnnsg2d.s` | 35 | main 0x02025ba4-0x0202790c (35) | 35 |
| `lib/TwlSystem/asm/g3d/libnnsg3d.s` | 130 | main 0x02027960-0x0202fba4 (130) | 130 |
| `lib/TwlSystem/asm/gfd/libnnsgfd.s` | 16 | main 0x0202fd38-0x02030604 (16) | 16 |
| `lib/TwlSystem/asm/snd/libnnssnd.s` | 93 | main 0x02030660-0x0203269c (93) | 87 |
| `lib/TwlWiFi/asm/cps/network.s` | 113 | ov014 0x0210146c-0x02106a54 (113) | 113 |
| `lib/TwlWiFi/asm/soc/soc.s` | 19 | ov014 0x0211b738-0x0211bd38 (19) | 19 |
| `lib/TwlWiFi/asm/soc/socl_bind.s` | 4 | ov014 0x021198c4-0x02119ad8 (4) | 4 |
| `lib/TwlWiFi/asm/soc/socl_cleanup.s` | 4 | ov014 0x0211af00-0x0211b070 (4) | 4 |
| `lib/TwlWiFi/asm/soc/socl_close.s` | 6 | ov014 0x0211ab28-0x0211aec4 (6) | 6 |
| `lib/TwlWiFi/asm/soc/socl_command.s` | 13 | ov014 0x021191c4-0x02119448 (13) | 13 |
| `lib/TwlWiFi/asm/soc/socl_create.s` | 8 | ov014 0x021194f8-0x02119850 (8) | 8 |
| `lib/TwlWiFi/asm/soc/socl_list.s` | 9 | ov014 0x0211b5ec-0x0211b714 (9) | 8 |
| `lib/TwlWiFi/asm/soc/socl_misc.s` | 5 | ov014 0x0211b3d8-0x0211b4e4 (5) | 5 |
| `lib/TwlWiFi/asm/soc/socl_poll.s` | 2 | ov014 0x0211b2c0-0x0211b390 (2) | 2 |
| `lib/TwlWiFi/asm/soc/socl_read.s` | 12 | ov014 0x02119b50-0x0211a29c (12) | 12 |
| `lib/TwlWiFi/asm/soc/socl_resolve.s` | 4 | ov014 0x0211b0e0-0x0211b258 (4) | 4 |
| `lib/TwlWiFi/asm/soc/socl_shutdown.s` | 2 | ov014 0x0211aa4c-0x0211aaf8 (2) | 2 |
| `lib/TwlWiFi/asm/soc/socl_ssl.s` | 3 | ov014 0x0211bdec-0x0211beac (3) | 3 |
| `lib/TwlWiFi/asm/soc/socl_startup.s` | 6 | ov014 0x02118f14-0x021191ac (6) | 6 |
| `lib/TwlWiFi/asm/soc/socl_write.s` | 8 | ov014 0x0211a3b8-0x0211a9b4 (8) | 8 |
| `lib/TwlWiFi/asm/ssl/arc4.s` | 2 | ov014 0x0211ffac-0x02120024 (2) | 2 |
| `lib/TwlWiFi/asm/ssl/biginteger.s` | 23 | ov014 0x02120090-0x02120e8c (23) | 23 |
| `lib/TwlWiFi/asm/ssl/md5.s` | 6 | ov014 0x0211f12c-0x0211f65c (6) | 6 |
| `lib/TwlWiFi/asm/ssl/sha1.s` | 8 | ov014 0x0211f6c4-0x0211ff7c (8) | 7 |
| `lib/TwlWiFi/asm/ssl/ssl.s` | 60 | ov014 0x0211bf10-0x0211f110 (60) | 60 |
| `lib/TwlWiFi/asm/wcm/aplist.s` | 11 | ov014 0x02121bb0-0x02122040 (11) | 11 |
| `lib/TwlWiFi/asm/wcm/cpsif.s` | 10 | ov014 0x021221f0-0x02122498 (10) | 10 |
| `lib/TwlWiFi/asm/wcm/system.s` | 25 | ov014 0x02120ed0-0x02121ba8 (25) | 25 |
| `lib/TwlWiFi/asm/wcm/util.s` | 6 | ov014 0x021224d8-0x0212261c (6) | 6 |
| `lib/TwlWiFi/asm/wcm/wmif.s` | 21 | ov014 0x0212267c-0x02123c1c (21) | 21 |
| `lib/libMobiclip/asm/YuvToArgb.s` | 1 | ov088 0x02174240-0x02174240 (1) | 1 |
| `lib/libMobiclip/asm/vx2Code.s` | 122 | ov088 0x02175898-0x02180510 (122) | 1 |
| `lib/libmsl/asm/libmsl.s` | 179 | main 0x02017a7c-0x02025b58 (179) | 131 |

### Data

335 data symbols have a name there; the ones most code points to:

| Address | Ours | Inazuma Eleven 3 | Call sites |
|---|---|---|---:|
| main 0x020c46d4 | `g3DPlaneCtrl` | `g3DPlaneCtrl` | 202 |
| main 0x020c46c4 | `gSprButtonCtrl` | `gSprButtonCtrl` | 133 |
| main 0x020c9660 | `gBgMenuManager` | `gBgMenuManager` | 87 |
| main 0x020c5e40 | `gAudioPlayer` | `gAudioPlayer` | 82 |
| main 0x020c46b8 | `gSprAnimCtrl` | `gSprAnimCtrl` | 55 |
| main 0x020e88a0 | `data_020e88a0` | `gLogicThink` | 53 |
| main 0x020bb120 | `OSi_ThreadInfo` | `OSi_ThreadInfo` | 48 |
| main 0x020c464c | `gNsbResourceMan` | `gNsbResourceMan` | 41 |
| main 0x020c5320 | `gWirelessUtil` | `gWirelessUtil` | 38 |
| main 0x020aad64 | `GXi_DmaId` | `GXi_DmaId` | 33 |
| main 0x020c47b4 | `gAllocator` | `gAllocator` | 31 |
| main 0x0209fcf8 | `FX_SinCosTable_` | `FX_SinCosTable_` | 30 |
| main 0x020c46cc | `g2DAdventureLogic` | `g2DAdventureLogic` | 26 |
| main 0x020bd460 | `cardi_common` | `cardi_common` | 21 |
| main 0x020c46c8 | `g2DGChar` | `g2DGChar` | 21 |
| main 0x020bb080 | `gGXState` | `gGXState` | 20 |
| main 0x020c4694 | `g3DSpriteCtrl` | `g3DSpriteCtrl` | 20 |
| main 0x020d2520 | `gSubScreen0` | `gSubScreen0` | 20 |
| ov089 0x021792d0 | `WM_DMA_NO` | `WM_DMA_NO` | 20 |
| main 0x020c4650 | `g3DGameChar` | `g3DGameChar` | 19 |
| main 0x020bb104 | `OSi_SystemCallbackInSwitchThread` | `OSi_SystemCallbackInSwitchThread` | 18 |
| ov014 0x0212d574 | `WCMi_OverridedDeviceId` | `WCMi_OverridedDeviceId` | 18 |
| ov089 0x021792e0 | `mbc` | `mbc` | 17 |
| ov014 0x02128e24 | `DWCi_Ndi_dlcallback` | `DWCi_Ndi_dlcallback` | 16 |
| main 0x020c46d0 | `gCameraCtrl` | `gCameraCtrl` | 14 |
| ov014 0x02125e3c | `SOCLiConfigPtr` | `SOCLiConfigPtr` | 14 |
| dtcm 0x027e0000 | `OS_IRQTable` | `OS_IRQTable` | 13 |
| main 0x020bdd6c | `wmInitialized` | `wmInitialized` | 13 |
| main 0x020d2d20 | `gSubScreen1` | `gSubScreen1` | 13 |
| ov014 0x02126b0c | `CPSiFree` | `CPSiFree` | 13 |
| ov014 0x02128cac | `DWCiswfcutil` | `DWCiswfcutil` | 13 |
| main 0x020c4678 | `g3DGameMapObject` | `g3DGameMapObject` | 12 |
| main 0x020bd340 | `initial_020976e4` | `initial_020976e4` | 11 |
| main 0x020c2dfc | `sCurrent` | `sCurrent` | 11 |
| main 0x020d0d20 | `gMainScreen0` | `gMainScreen0` | 11 |
| ov014 0x02128c84 | `wcmBuffer` | `wcmBuffer` | 11 |
| main 0x020bf418 | `NNS_G3dGlb` | `NNS_G3dGlb` | 10 |
| ov014 0x02126adc | `CPSiAlloc` | `CPSiAlloc` | 10 |
| ov014 0x02128c98 | `_ZZ17DWC_GetInetStatusvE8stateOld` | `_ZZ17DWC_GetInetStatusvE8stateOld` | 10 |
| main 0x020bb4f0 | `sFreeList` | `sFreeList` | 9 |
| main 0x020bd3b8 | `rtcInitialized` | `rtcInitialized` | 9 |
| main 0x020bf464 | `NNS_G3dGlb_cameraMtx` | `NNS_G3dGlb_cameraMtx` | 9 |
| main 0x020c4648 | `g3DFieldSprite` | `g3DFieldSprite` | 9 |
| main 0x020c467c | `g3DDevice` | `g3DDevice` | 9 |
| ov014 0x02126b30 | `CPSMyMac` | `CPSMyMac` | 9 |
| ov014 0x02128ca0 | `gDwcWdsWork` | `gDwcWdsWork` | 9 |
| ov014 0x02128df0 | `s_userCallback` | `s_userCallback` | 9 |
| ov014 0x02128e0c | `s_dwcnd_mutexState` | `s_dwcnd_mutexState` | 9 |
| ov016 0x02154f78 | `DWCi_R_SCR` | `DWCi_R_SCR` | 9 |
| ov089 0x02179228 | `mbgameinfo_sUnlockFunc` | `mbgameinfo_sUnlockFunc` | 9 |
| main 0x020bf3e4 | `errno` | `errno` | 8 |
| ov014 0x02128cd0 | `DWChttp` | `DWChttp` | 8 |
| main 0x020bd0a8 | `arc_list` | `arc_list` | 7 |
| main 0x020bf67c | `NNS_G3dRS` | `NNS_G3dRS` | 7 |
| main 0x020c4660 | `g3DGameMap` | `g3DGameMap` | 7 |
| main 0x020c4668 | `g3DVramMan` | `g3DVramMan` | 7 |
| main 0x020c5a40 | `gBGPalettesFinal` | `gBGPalettesFinal` | 7 |
| ov014 0x02126b18 | `CPSMyIp` | `CPSMyIp` | 7 |
| ov014 0x02128c80 | `gWdsWork` | `gWdsWork` | 7 |
| ov016 0x02158a78 | `DWCiMsgCmn` | `DWCiMsgCmn` | 7 |

### Not trusted

94 pairs are left out of the renames: 6 whose call sites point somewhere else than the bytes,
88 library functions out of the order their library has (the same code twice, usually).
They are in the CSV with confidence `low`.
<!-- generated: end -->
