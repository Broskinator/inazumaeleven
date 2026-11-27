# Progress

How much of the game's code is C/C++ and how much is still assembly. A function counts as
C/C++ when its source defines it without the `asm` keyword; the sizes are the functions'
sizes in the ROM, so the percentages are by bytes of code. The ROM built from this
repository matches the original either way.

This file is written by `python tools/cprogress.py`.

## Totals

| Area | Code bytes | In C/C++ | % of bytes | Functions | In C/C++ | % of functions | Still asm |
|---|---:|---:|---:|---:|---:|---:|---:|
| **Game code** | 1,948,264 | 561,192 | 28.80% | 9,634 | 6,051 | 62.81% | 3,583 |
| Game, main program | 369,260 | 172,672 | 46.76% | 2,601 | 1,992 | 76.59% | 609 |
| Game, overlays | 1,579,004 | 388,520 | 24.61% | 7,033 | 4,059 | 57.71% | 2,974 |
| Libraries (SDK, runtime) | 306,978 | 0 | 0.00% | 1,960 | 0 | 0.00% | 1,960 |
| Libraries in overlays (Wi-Fi, download play) | 317,846 | 96,404 | 30.33% | 2,169 | 1,281 | 59.06% | 888 |
| Not in a source file yet | 20,936 | 0 | 0.00% | 239 | 0 | 0.00% | 239 |
| **Everything** | 2,594,024 | 657,596 | 25.35% | 14,002 | 7,332 | 52.36% | 6,670 |

The game code is the target of the decompilation. The libraries are Nintendo's SDK, NitroSystem
and the Metrowerks runtime: much of them is assembly in the original as well. Overlays 14, 16 and
89 are libraries too (the Wi-Fi libraries and their connection settings, download play): they
were counted as game code until 2026-11-17, when [ie3_mapping.md](ie3_mapping.md) showed what they are.

## Match engine

The football match itself: the engine in `src/match/` (the match object, the ball's physics, the
rules, the players' lists, field geometry), the match logic overlay (ov087) and the match scene
overlay (ov001). See [match_engine.md](match_engine.md) for what each part is.

| Part | Code bytes | In C/C++ | % of bytes | Functions | In C/C++ | % of functions | Still asm |
|---|---:|---:|---:|---:|---:|---:|---:|
| **Match engine, all** | 376,800 | 121,368 | 32.21% | 1,742 | 1,238 | 71.07% | 504 |
| `src/match/MatchBallPhysics.cpp` | 3,356 | 1,568 | 46.72% | 33 | 29 | 87.88% | 4 |
| `src/match/MatchEngine.cpp` | 52,352 | 26,784 | 51.16% | 294 | 250 | 85.03% | 44 |
| `src/match/MatchEngine_2.cpp` | 70,264 | 44,536 | 63.38% | 391 | 336 | 85.93% | 55 |
| `src/match/MatchEngine_3.cpp` | 772 | 356 | 46.11% | 6 | 5 | 83.33% | 1 |
| `src/match/MatchGeometry.cpp` | 5,368 | 4,660 | 86.81% | 70 | 66 | 94.29% | 4 |
| `src/match/MatchPlayerList.cpp` | 1,212 | 372 | 30.69% | 21 | 17 | 80.95% | 4 |
| `src/match/MatchRules.cpp` | 500 | 500 | 100.00% | 21 | 21 | 100.00% | 0 |
| `src/match/MatchUtil.cpp` | 5,280 | 5,080 | 96.21% | 99 | 98 | 98.99% | 1 |
| `src/match/UnkClass_0208351c.cpp` | 1,504 | 1,160 | 77.13% | 12 | 11 | 91.67% | 1 |
| ov001 (match scene) | 178,724 | 30,288 | 16.95% | 628 | 343 | 54.62% | 285 |
| ov087 (match logic) | 57,468 | 6,064 | 10.55% | 167 | 62 | 37.13% | 105 |

## Game code by module

| Module | Code bytes | In C/C++ | % of bytes | Functions | In C/C++ | % of functions | Still asm |
|---|---:|---:|---:|---:|---:|---:|---:|
| main program | 369,260 | 172,672 | 46.76% | 2,601 | 1,992 | 76.59% | 609 |
| ov000 | 108,664 | 19,904 | 18.32% | 408 | 239 | 58.58% | 169 |
| ov001 | 178,724 | 30,288 | 16.95% | 628 | 343 | 54.62% | 285 |
| ov002 | 2,972 | 1,176 | 39.57% | 23 | 16 | 69.57% | 7 |
| ov003 | 129,636 | 27,248 | 21.02% | 490 | 283 | 57.76% | 207 |
| ov004 | 2,380 | 1,336 | 56.13% | 38 | 31 | 81.58% | 7 |
| ov005 | 4,376 | 1,512 | 34.55% | 38 | 28 | 73.68% | 10 |
| ov015 | 213,136 | 71,432 | 33.51% | 1,282 | 813 | 63.42% | 469 |
| ov017 | 6,040 | 480 | 7.95% | 18 | 10 | 55.56% | 8 |
| ov018 | 4,836 | 1,772 | 36.64% | 38 | 24 | 63.16% | 14 |
| ov019 | 17,700 | 2,960 | 16.72% | 64 | 33 | 51.56% | 31 |
| ov020 | 10,836 | 3,600 | 33.22% | 49 | 28 | 57.14% | 21 |
| ov021 | 872 | 784 | 89.91% | 16 | 14 | 87.50% | 2 |
| ov022 | 856 | 784 | 91.59% | 16 | 14 | 87.50% | 2 |
| ov023 | 16,816 | 4,604 | 27.38% | 52 | 29 | 55.77% | 23 |
| ov024 | 7,180 | 2,152 | 29.97% | 39 | 23 | 58.97% | 16 |
| ov025 | 7,492 | 3,580 | 47.78% | 45 | 32 | 71.11% | 13 |
| ov026 | 22,404 | 7,476 | 33.37% | 112 | 67 | 59.82% | 45 |
| ov027 | 23,948 | 6,232 | 26.02% | 109 | 59 | 54.13% | 50 |
| ov028 | 23,268 | 6,296 | 27.06% | 104 | 58 | 55.77% | 46 |
| ov029 | 29,232 | 5,416 | 18.53% | 122 | 57 | 46.72% | 65 |
| ov030 | 15,496 | 5,384 | 34.74% | 90 | 56 | 62.22% | 34 |
| ov031 | 24,552 | 3,880 | 15.80% | 84 | 33 | 39.29% | 51 |
| ov032 | 20,520 | 2,556 | 12.46% | 73 | 27 | 36.99% | 46 |
| ov033 | 4,616 | 2,600 | 56.33% | 32 | 21 | 65.62% | 11 |
| ov034 | 7,236 | 2,488 | 34.38% | 37 | 21 | 56.76% | 16 |
| ov035 | 18,028 | 2,956 | 16.40% | 64 | 33 | 51.56% | 31 |
| ov036 | 17,056 | 3,296 | 19.32% | 56 | 29 | 51.79% | 27 |
| ov037 | 24,920 | 7,252 | 29.10% | 104 | 54 | 51.92% | 50 |
| ov038 | 18,620 | 4,544 | 24.40% | 103 | 51 | 49.51% | 52 |
| ov039 | 10,568 | 3,640 | 34.44% | 62 | 42 | 67.74% | 20 |
| ov040 | 13,708 | 4,672 | 34.08% | 44 | 23 | 52.27% | 21 |
| ov041 | 25,088 | 6,736 | 26.85% | 97 | 55 | 56.70% | 42 |
| ov042 | 39,548 | 11,316 | 28.61% | 147 | 86 | 58.50% | 61 |
| ov043 | 5,824 | 1,972 | 33.86% | 31 | 19 | 61.29% | 12 |
| ov044 | 18,848 | 4,692 | 24.89% | 93 | 50 | 53.76% | 43 |
| ov045 | 17,728 | 3,524 | 19.88% | 80 | 42 | 52.50% | 38 |
| ov046 | 19,144 | 5,140 | 26.85% | 109 | 74 | 67.89% | 35 |
| ov047 | 18,852 | 5,020 | 26.63% | 76 | 42 | 55.26% | 34 |
| ov048 | 36,208 | 8,976 | 24.79% | 109 | 58 | 53.21% | 51 |
| ov049 | 5,804 | 1,508 | 25.98% | 26 | 18 | 69.23% | 8 |
| ov050 | 11,904 | 2,748 | 23.08% | 68 | 37 | 54.41% | 31 |
| ov051 | 1,292 | 372 | 28.79% | 14 | 8 | 57.14% | 6 |
| ov052 | 34,036 | 9,924 | 29.16% | 168 | 92 | 54.76% | 76 |
| ov053 | 21,904 | 8,580 | 39.17% | 83 | 55 | 66.27% | 28 |
| ov054 | 13,936 | 3,368 | 24.17% | 70 | 37 | 52.86% | 33 |
| ov055 | 3,680 | 972 | 26.41% | 22 | 14 | 63.64% | 8 |
| ov056 | 21,404 | 3,300 | 15.42% | 66 | 30 | 45.45% | 36 |
| ov057 | 10,548 | 2,484 | 23.55% | 47 | 25 | 53.19% | 22 |
| ov058 | 6,768 | 2,172 | 32.09% | 39 | 26 | 66.67% | 13 |
| ov059 | 22,856 | 4,068 | 17.80% | 92 | 52 | 56.52% | 40 |
| ov060 | 10,396 | 2,392 | 23.01% | 44 | 24 | 54.55% | 20 |
| ov061 | 16,128 | 2,488 | 15.43% | 61 | 32 | 52.46% | 29 |
| ov062 | 11,432 | 2,076 | 18.16% | 42 | 23 | 54.76% | 19 |
| ov063 | 7,404 | 2,768 | 37.39% | 49 | 30 | 61.22% | 19 |
| ov064 | 12,028 | 1,456 | 12.11% | 42 | 20 | 47.62% | 22 |
| ov065 | 9,716 | 2,352 | 24.21% | 54 | 26 | 48.15% | 28 |
| ov066 | 11,584 | 3,364 | 29.04% | 63 | 33 | 52.38% | 30 |
| ov067 | 12,144 | 3,604 | 29.68% | 64 | 35 | 54.69% | 29 |
| ov068 | 6,016 | 3,020 | 50.20% | 33 | 25 | 75.76% | 8 |
| ov069 | 1,632 | 496 | 30.39% | 18 | 13 | 72.22% | 5 |
| ov070 | 10,932 | 2,636 | 24.11% | 42 | 23 | 54.76% | 19 |
| ov071 | 3,428 | 2,084 | 60.79% | 26 | 20 | 76.92% | 6 |
| ov072 | 7,192 | 2,012 | 27.98% | 37 | 23 | 62.16% | 14 |
| ov073 | 1,860 | 992 | 53.33% | 21 | 14 | 66.67% | 7 |
| ov074 | 4,252 | 1,404 | 33.02% | 28 | 21 | 75.00% | 7 |
| ov075 | 10,788 | 2,632 | 24.40% | 42 | 23 | 54.76% | 19 |
| ov076 | 1,632 | 496 | 30.39% | 18 | 13 | 72.22% | 5 |
| ov077 | 952 | 252 | 26.47% | 11 | 6 | 54.55% | 5 |
| ov078 | 6,412 | 2,812 | 43.86% | 40 | 28 | 70.00% | 12 |
| ov079 | 15,620 | 2,712 | 17.36% | 50 | 25 | 50.00% | 25 |
| ov080 | 6,324 | 2,020 | 31.94% | 35 | 23 | 65.71% | 12 |
| ov081 | 3,860 | 1,916 | 49.64% | 36 | 27 | 75.00% | 9 |
| ov082 | 6,496 | 2,168 | 33.37% | 31 | 16 | 51.61% | 15 |
| ov083 | 3,316 | 960 | 28.95% | 17 | 10 | 58.82% | 7 |
| ov084 | 3,532 | 536 | 15.18% | 12 | 7 | 58.33% | 5 |
| ov085 | 3,264 | 1,696 | 51.96% | 17 | 11 | 64.71% | 6 |
| ov086 | 4,292 | 856 | 19.94% | 17 | 9 | 52.94% | 8 |
| ov087 | 57,468 | 6,064 | 10.55% | 167 | 62 | 37.13% | 105 |
| ov088 | 6,844 | 1,084 | 15.84% | 39 | 26 | 66.67% | 13 |

## Log

One entry per working session, newest last: what was matched, the numbers, what was found, what
blocks. `make report` rewrites everything above this section and keeps this one.

### 2026-11-17

At the start: `make progress` 2,573,592 / 2,600,908 bytes (98.950%, asm fallbacks count as
matched), 13,579 / 14,048 functions, 382 / 470 files complete. C/C++ share: 592,108 / 2,251,302
bytes of game code (26.30%), 7,001 / 11,724 functions.

- Matched: `TextFont::SetFont` (the original checks the file pointer twice: the second check,
  on a local copy, is what keeps r0 for the 0) and `TreasureBox::func_020526ec` (the attempt
  lacked `UnloadScript`'s argument) and `MatchEngine::func_020747e4` (found by the first permuter
  batch: the same second null check as SetFont).
- Compiler: dsi/1.1p1, 1.2p1, 1.2p2 and 1.3 give the same code as dsi/1.2 on the two known near
  misses, so the version was not their cause; the pin stays dsi/1.2.
- Inazuma Eleven 3 (an unlicensed decompilation, used as a reference only, outside the repo):
  7,199 of our symbols paired with it (6,438 functions, 761 data) by masked bytes, calls and
  order; 3,199 symbols renamed from it (2,809 library, 199 game functions, 191 data), plus
  `ScreenManager`, `ScriptManager` and 38 members by hand. See [ie3_mapping.md](ie3_mapping.md).
- Overlays 14, 16 and 89 turned out to be Nintendo's Wi-Fi and download-play libraries: they are
  no longer counted as game code. Game code is now 1,948,264 bytes, of which 495,816 are C/C++
  (25.45%; 5,722 / 9,634 functions). The match engine: 15.19% (912 / 1,742 functions).
- Tooling: `make todo` (what to do next, easiest first), an incremental build (header
  dependencies; a no-change `make` takes ~2 s), `make modules` (quick check without the ROM),
  a pre-commit hook that runs the full SHA-1 check, a CI workflow (needs a secret, see
  CLAUDE.md), decomp-permuter on C++ through `tools/permprep.py` with a queue of 15 near misses
  and `tools/permuter_batch.sh`, and CLAUDE.md.
- At the end: `make progress` 98.950% (unchanged: it counts asm as matched), 13,579 / 14,048.
- Blockers: `FileManager::LoadAsync` (registers r9/r11 swapped; queued for the permuter); the
  larger attempts of SceneManager, SaveManager, System and Wireless (16 to 165 words).

### 2026-11-17 (second session)

Following CLAUDE.md's priorities: the match engine's small members, field types first.

- Matched: 76 functions of the match engine, in nine batches (`MatchEngine` members, the
  free helpers of MatchUtil and MatchGeometry, `UnkClass_0208351c`, the two error helpers of
  `UnkDeque_0207076c`). The match engine is now 988 / 1,742 functions in C/C++ (16.49% of its
  bytes, from 15.19%); game code 25.70%. `make progress`: 98.950%, 13,579 / 14,048 functions
  (unchanged: it counts asm as matched).
- Types: `MatchEngine` got its areas (`MatchSegment unk_4[6]`), `MatchPoint unk_ac[22]`, the
  heap buffers, the flag words, the pair table `unk_be0`/`unk_c24`, per-team bytes and the
  records at 0x116a8; `MatchPlayer`, `MatchPlayerBody`, `MatchPlayerState`, `MatchPlayerInfo` and
  `SaveProfile` a few fields each. The wrong name `isunordered` is `func_02078ff4` again.
- Found: C callers written with too few arguments matched because the rest passed through in
  r2/r3; the callees' use of those registers gave the real signatures (`func_020670ec` takes a
  margin, `func_0207aeac`/`func_0207aec4` a team and an id, `func_020790cc`/`func_0207922c` a
  point). `func_02084900` is a clamp that returns nothing. `func_0201a508` is MSL `printf`.
  The six small `UnkDeque_0207076c` members left are MSL deque *iterator* methods (`this` is
  {cur, begin, start, end}), so they need an iterator class first.
- Permuter: `func_020747e4` matched; `func_0207455c`, `func_02074584` and
  `SoundManager::func_0203bd04` reach 1 word only through an uninitialised variable or a
  self-assignment, so they stay queued. `func_020658ec`: no progress.
- Under NONMATCHING (effort cap): `func_020765d4`, `func_0206ccb8`, `func_0206f500`,
  `func_0207070c`, `func_0207add4`, `func_0207ae40` (queued), `func_02084350`, `func_02077f20`.
- Blockers: MWCC's loop rotation (it enters some loops through the test and not others, for
  reasons not found yet: `func_0207070c`, `func_0207add4`); `FileManager::LoadAsync` as before.

### 2026-11-18 to 2026-11-20

Following CLAUDE.md's priorities: the match engine, functions with no attempt yet first
(`tools/untried.py`).

- Matched: 157 functions of the match engine (`MatchEngine` members in `MatchEngine.cpp` and
  `MatchEngine_2.cpp`, helpers of MatchUtil and MatchGeometry, `UnkClass_0208351c`, the
  deque's ring buffer and iterator). The match engine is now 1,145 / 1,742 functions in
  C/C++ (22.49% of its bytes, from 16.49%); game code 26.92% (from 25.70%), everything
  23.93%. `make progress`: 98.950%, 13,579 / 14,048 functions (unchanged: it counts asm as
  matched). 207 functions of `src/match` are still asm, 162 of them never attempted.
- Types: `MatchPlayerState::unk_24` is an `s16`, `MatchEngine::unk_ba0` an `s32` (a phase),
  `UnkTrail_02084e40` (the last 0x60 positions, `func_02084e70`), the 7 kinds per team at
  `unk_118e4`, the requirement of a move (12 bytes, `func_020738e4`) whose accessors
  `func_02074aac`/`abc`/`ac8` are now static; `func_0207f3cc` takes the player (its `this`
  was one). `_dmul` and `_ddiv` named.
- Found: two calls of one function in an if/else that differ in one argument are merged by
  MWCC into one call (`func_02068b5c`); a value read through a local pointer and needed again
  is reloaded when the first read goes through the global itself (`func_0207e738`, found by
  the permuter through a 64-bit index); `func_020745e4` matches only with a `goto` to the
  common code. C++ `bool` parameters avoid the `and 0xff` of `u8` ones in the callers
  (`func_0207436c`). See docs/matching.md.
- Permuter: batches 4 to 6; `func_0207e738`, `func_0206f500`, `func_0206a078` and
  `SoundManager::RestoreState` matched. The other improvements used fake code.
- Under NONMATCHING (effort cap, all queued): `func_0206e50c`, `func_0206e5e4`,
  `func_0206a590`, `func_0206a648`, `func_0206cec0`, `func_0206b5a0`, `func_020776f8`,
  `func_02067f44`, `func_0206a3b8`, `func_02068434` (not queued: dead stack stores).
- Blockers: loops that jump to their test first (`func_0207f4bc`, `0206e76c`, `0207c064`,
  `0206c694`, `02079c08`, `02068028`, `02076a7c`: no source form found); MWCC merging two
  loads into an `ldm` where the ROM has two `ldr` (`func_0206a3b8`); a `return FALSE` that
  the ROM writes as an immediate 0 after an index check (`func_0206e50c`); dead stores to a
  local array that MWCC drops (`func_02068434`); `func_020810ec` in MatchUtil calls engine
  members through mangled names on a `char[]` and needs a typed engine there.

### 2026-11-21 to 2026-11-25

The match engine again, the functions with no attempt first (`tools/untried.py`).

- Matched: about 70 functions of the match engine, among them `func_02068028`, `func_0207c064`,
  `func_0206e76c`, `func_0207f4bc`, `func_0207070c`, `func_020776f8`, `func_02067f44`,
  `func_0207a5c0`, `func_0207b00c`, `func_0206aa6c`, `func_020665a4`, `func_0206d358`,
  `func_0206eb34`/`func_0206ecbc` (the record at 0x6B0 and its restore), `func_02065a90`,
  `func_02077224` (can a player use an item), `func_0207e19c`, `func_0206ba84`, and
  `MatchBallPhysics::func_020618d4`; also `SceneManager::func_0203f248`. The match engine is
  1,209 / 1,742 functions in C/C++ (27.42% of its bytes, from 22.49%); game code 27.88%,
  everything 24.65%. `make progress`: 98.950%, 13,579 / 14,048 functions (it counts asm as
  matched). 143 functions of `src/match` are still asm (from 207), 80 never attempted.
- Found: loops that jump to their test first were built at optimization level 2 (`#pragma
  optimization_level 2` around the function); some of those also need `#pragma
  opt_common_subs off` (`func_0206ecbc`), and every level-2 function still matches with it.
  A jump table that runs to a high label wants those labels listed before `default:`; a flag
  `(k == 2 || k == 5 || ...)` gives the ROM's bit test; retyping a callee's `int` parameter
  as `u32` changed a caller (`func_02078bc0`). See docs/matching.md.
- Types: the record at `MatchEngine+0x6B0` (`UnkRecord_0206eb34`), `MatchPlayerCache`
  (`unk_bf0`), `MatchArea::unk_d4`, `unk_118a9` (an s8 player index), `unk_118be`,
  `unk_118f8`, `unk_bac`; `func_0207f3e0` and `func_0207f3b8` are static and take the player.
- `.gitattributes`: sources are LF (a Python script that wrote text mode on Windows had made
  two files CRLF).
- Under NONMATCHING (effort cap): `func_02079f98` (one `cmp` with its operands swapped),
  `func_02065dec`, `func_02066e28`, `MatchBallPhysics::func_02061bc0` and
  `func_020614d0`, `func_02077fa0`, `func_02078148`, `func_02064500`, `func_020663b0`,
  `func_0206fbd0`, `func_02063f24`, `func_02078844`, `func_0206e858`, `func_02063550`,
  `func_02068f90`, `func_02078aac`, `func_0207d118`, `func_02082d9c`, `func_02084970`,
  `UnkClass_0208351c::func_02083778`, `MatchPlayerList::func_020830ac`; most are queued.
- Blockers: identical blocks of two branches that the ROM shares and the rebuild keeps apart
  at every level (`func_02066e28`); a field read again where the rebuild keeps it in a register
  (`func_02061bc0`, matching only with `opt_common_subs off`, which the rest of the code
  does not have); the users of the stack deque (`func_0206d6b4` passes an empty tag object to
  push_back) want the deque template modelled; the older ones (an `ldm` merge, dead stack
  stores, `FileManager::LoadAsync`).

### 2026-11-26

- Matched: MatchEngine::func_02075f7c, func_02078664, func_0206d188, func_02065c00, func_020678d0,
  func_02068248, func_0206d4ec, func_0207c478. Under NONMATCHING (queued for the permuter):
  func_0207dc10 (22 words), func_0206b628 (38), func_020795b4 (32).
- make progress 98.950%; match engine 1,219 / 1,742 functions in C/C++ (28.60% of its bytes);
  src/match has 135 asm functions left, 48 never attempted.
- Findings: a signed jump-table check (cmp #N; bgt; cmp #0; addge) comes from a case above the
  table sharing the default's code (func_0206d4ec: case 13); func_ov087_02180be0 takes x and y,
  not a MatchPoint by value (the base register of the ldm); a BOOL passed to a bool parameter
  gives mov #1; cmp; moveq #0; `case 0:` grouped with `default:` after the other cases; an
  array initialised with = {0, 0, 0, 0} gives the add rN, sp store base; opt_loop_invariants off
  fixed a path setup (func_0206b628); a bare return in an int function leaves r0 as the ROM does.
- Next: func_0207ec70 (the ROM keeps its stack slot in the push, ours subtracts sp: started, not
  written), then the untried list.

### 2026-11-26 (continued)

- Matched: MatchEngine::func_0207ec70, func_0207577c, func_0207d830, func_02069184,
  func_0206ad94, func_02074f90, func_0207fff0, func_02077448, func_020751b8, func_0207e334,
  func_02062d74, UnkClass_0208351c::func_020838d0, func_02083afc (MatchGeometry).
- Typed, under NONMATCHING: MatchBallPhysics::func_0206168c; MatchEngine::func_0206bc70,
  func_02063c14, func_0206a100, func_020654cc, func_02065178, func_0207c8e0, func_0207dec0,
  func_0207bb9c (118 words), func_02067aec (57), func_02073a9c (13, queued), func_02075428 (2,
  queued; 10 permuter minutes without improvement), func_020793bc (94).
- The [Inazuma Eleven recomp](https://github.com/2002-source/InazumaElevenRecomp) (a PC port of
  this ROM, MIT) documents the player record, the stat, level and EXP functions, the rows of
  func_02069394 and the data files: [docs/ie1_recomp.md](ie1_recomp.md). From it: the
  unitstat.dat record (the moves learnt at +0x2C), MatchPlayer's level (unk_aa), FP/TP and the
  stats shown and base, the duel record's moves and slots.
- Retyped on the way: func_0207b780, func_02062b58 (the crossing point), func_02067aec with
  func_02067e00/func_02067e78, func_02073a9c, func_02075428, the 2D adventure-logic calls of
  MatchEngine_2.cpp; func_02083afc is declared once, in MatchGeometry.hpp.
- make progress 98.950% (asm counted); C/C++: match engine 1,232 / 1,742 functions (30.62% of
  its bytes), game code 28.50%; src/match has 120 asm functions left, 40 never attempted.
- Findings in docs/matching.md: u8 compared as int for `blt`; `out[n] = x; n++;`; stores
  predicated on a test already made; local copies of stack parameters; a BOOL inline into a
  bool; the order of a new-best block; one index per inner loop.
- Blockers: func_0207bb9c's returned struct copied word by word (an idiom ov029 and IE3 share);
  func_020793bc's swap temporary.
- Note: commit cf1f451 ("func_02062d74 in C++", a second time) is the move of func_02083afc's
  declaration to MatchGeometry.hpp; its message was left over from the commit before.

### 2026-11-27

- The repository is public now: CI fetches the encrypted ROM only through `BASEROM_URL` and
  never from a release (the release fallback runs only while the repository is private);
  CLAUDE.md says so.
- Matched: MatchEngine::func_020725ac, func_0207e8f8, func_02065fa0, func_020733d4,
  func_0207b780, func_02072bb8.
- Typed, under NONMATCHING: func_020640b4 (4 words, queued), func_020674f8 (4, queued),
  func_02074b30 (9, queued), func_0207b28c (213), func_0206ffe0 (232).
- make progress 98.950% (asm counted); C/C++: match engine 1,238 / 1,742 functions (32.21% of
  its bytes), game code 28.80%; src/match has 114 asm functions left, 11 never attempted
  outside the UnkDeque members.
- Findings in docs/matching.md: a local declared last gets the lowest callee-saved register;
  a counter per phase; `(u16)(id & 0xFFF)` keeps the truncation; row bases of a 2D local
  array at O2 with CSE off; the searches of data_020a71d0 run past its 8 entries (so in the
  ROM).
- Blockers: func_0207b28c's `team == 0 || team == 1` (an unsigned range check at O2);
  func_0206ffe0's best record, which the rebuild splits into registers.
