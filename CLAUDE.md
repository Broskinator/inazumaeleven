# Inazuma Eleven decompilation: working notes

A matching decompilation of *Inazuma Eleven* (Nintendo DS, Europe, `YEEP`) in the style of the
pret projects: C/C++ (with asm for what is not decompiled yet) that rebuilds the ROM byte for byte.
The game is C++; the long-term goal is all of its code readable and matching.

- ROM: `baserom_yeep.nds`, SHA-1 `d55169c0b93d26b4037379d3b81a61b5404945e5`. Never commit it, a
  save or anything built from it (`.gitignore` and the pre-commit hook refuse them).
- Compiler: `mwccarm` **dsi/1.2** (`CC_VER` in the Makefile), flags
  `-O4,p -RTTI off -proc arm946e -enum int -Cpp_exceptions off -char signed -str noreuse -interworking`.
  dsi/1.1p1, 1.2p1, 1.2p2 and 1.3 give the same code on the known near misses: the pin stays.
- Linker 2.0/sp1p5, ROM tools [ds-decomp](https://github.com/AetiasHax/ds-decomp) (`dsd`), progress
  by objdiff. `tools/setup.sh` downloads them (`make` does it the first time).

## Build and check

| Command | What |
|---|---|
| `make -j8` | build the ROM and check its SHA-1 (`build/inazumaeleven_yeep.nds: OK`). Incremental: no change takes ~2 s, one file ~10 s, everything ~40 s |
| `make modules` | quicker check while working: compile, link and compare every module, without writing the 256 MB ROM (~4 s) |
| `python tools/fncmp.py src/f.cpp [NAME...] [-d]` | one file or function against the ROM, without building anything else: `OK` or how many words differ; `-d` shows both disassemblies side by side. `EXTRA_CFLAGS=-DNONMATCHING` compiles the attempts instead of the asm; `CC_VER=dsi/1.2p1` tries another compiler |
| `make progress` | objdiff report: bytes and functions matched (asm fallbacks count as matched) |
| `make report` | rewrites the tables of `docs/progress.md`: the share of the code that is C/C++, by bytes |
| `make todo` | the functions still in asm, easiest first (`make todo ARGS="--file src/match -n 100"`) |
| `make hooks` | once per clone: git then runs the full build and SHA-1 check before every commit |

Python needs `pip install pyyaml pyelftools capstone` (and `toml` for the permuter). On Windows,
work in Git Bash / MSYS2 with Python on the PATH.

## Workflow rules

1. **Easy first.** Take functions from the top of `make todo` (small, few calls); within a
   class, write its layout and header (fields, typed signatures) before decompiling its members.
2. **Effort cap.** At most about 10 serious attempts per function. Then keep it as asm with the
   attempt under `#ifdef NONMATCHING` (below) and move on.
3. **Near misses go to the permuter.** A difference of 1-2 instructions or a register swap: add
   a line to `permuter/queue.txt` (`FUNCTION SOURCE what differs`).
   `tools/permuter_batch.sh [MINUTES]` runs decomp-permuter on each (default 30 min,
   `PERM_JOBS` processes), unattended; results in `permuter/results/NAME/`.
4. **Never commit a ROM that does not match.** Run `make` (full SHA-1) before every commit; the
   hook does it. A rename or a header change can break asm that calls by mangled name.
5. Commit in small steps with clear messages, on `main`; keep `docs/progress.md` current.
6. **Inazuma Eleven 3 reference** (`../ext/ie3ogres`, never inside this repo): it has no
   license. Use it for names, struct layouts, enums and understanding only; never copy its
   files or code. What maps to what: [docs/ie3_mapping.md](docs/ie3_mapping.md).
7. **Inazuma Eleven recomp** (`../ext/ie1recomp`, MIT): a PC port of this same ROM whose mod
   plugin documents the player record, the stat and level functions, the rows of
   `func_02069394` and more, checked in play. Same use as the IE3 reference (names, layouts,
   meaning; our own code): [docs/ie1_recomp.md](docs/ie1_recomp.md).

### The NONMATCHING pattern

```cpp
// (nonmatching: heap and buffer registers swapped)
#ifdef NONMATCHING
int FileManager::LoadAsync(const char *name, void **buffer, GameHeap *heap, ...)
{
    ...the C++ attempt...
}
#else
asm int FileManager::LoadAsync(const char *name, void **buffer, GameHeap *heap, ...)
{
    ...the original instructions, from tools/romasm.py...
}
#endif
```

`tools/asmwrap.py` makes this from a function that does not match; `tools/asmunwrap.py` removes
the asm once the C++ matches.

## Code conventions

- One class per file: `src/<area>/<Class>.cpp` with `include/<area>/<Class>.hpp` (areas: `file`,
  `game`, `match`, `save`, `sound`, `system`, `text`, ...; overlays in `src/ovNNN/`; libraries in
  `src/libs/`, C). A class too big for one file continues in `Class_2.cpp`.
- Unknown names carry their address: `func_02069394`, `func_ov015_02130ae8`, `data_020e88a0`,
  classes `UnkClass_0208351c`, files of free functions `Unk_02081740`, fields `unk_b84` (offset).
  `python tools/rename.py OLD=NEW` renames everywhere at once (mangled names, asm, symbols.txt).
- `symbols.txt` holds C++ functions by their mangled names; after changing a signature run
  `tools/fixsyms.py`, which renames the symbol and its asm callers.
- asm calls a C++ function by its mangled name; a file declares such names as
  `extern "C" void _ZN...(void);  // (for the asm functions)` until the asm is gone
  (`tools/dedecl.py` removes the ones a header now declares).
- Object file names must be unique ignoring case (the linker runs on Windows).

## Tools (`tools/`)

| Tool | What it does | Example |
|---|---|---|
| `fncmp.py` | compares a file's functions with the ROM | `python tools/fncmp.py src/text/TextFont.cpp SetFont -d` |
| `todo.py` | lists what is still asm, easiest first, with its IE3 counterpart | `python tools/todo.py --file src/match -n 30` |
| `romasm.py` | a ROM function as MWCC inline asm | `python tools/romasm.py --ov 87 0x02180000 MatchEngine` |
| `asmconv.py` | the same, by name or address, with current callee names | `python tools/asmconv.py 0x02036354 FileManager > f.s` |
| `hand.py` | checks hand-written functions (one per file, or `#### name` sections with variants) in place of their asm; `--write` puts the matches in (headers, fixsyms), `--nonmatching REASON` the rest under NONMATCHING | `python tools/hand.py batch.txt`, then `--write` |
| `dumpasm.py` | prints functions' asm as it is in src/ | `python tools/dumpasm.py func_02077e78 MatchEngine::func_020805a0` |
| `untried.py` | the todo functions with no NONMATCHING attempt yet | `python tools/untried.py -n 30 --file src/match` |
| `asmwrap.py` | turns a function into asm + its C++ under NONMATCHING | `python tools/asmwrap.py src/f.cpp "int C::F(" f.s "reason"` |
| `asmunwrap.py` | removes the asm of a function that now matches | `python tools/asmunwrap.py src/f.cpp "int C::F("` |
| `permdecl.py` | tries every order of a function's local declarations | `python tools/permdecl.py src/f.cpp "int C::F(" _ZN1C1FEv` |
| `permprep.py` | runs decomp-permuter on a C++ near miss (C view + C++ compile bridge) | `python tools/permprep.py run FileManager::LoadAsync src/file/FileManager.cpp --minutes 10` |
| `permuter_batch.sh` | `permprep.py run` over `permuter/queue.txt`, unattended | `PERM_JOBS=6 sh tools/permuter_batch.sh 30` |
| `lift.py` | turns small branch-free asm functions into C where it matches | `python tools/lift.py src/ov087/*.cpp` |
| `splitclass.py` | splits an address range into a class file of asm members | `python tools/splitclass.py 0x0203c0ec 0x0203dc7c Wireless wireless/Wireless` |
| `splitfree.py` | the same for free `extern "C"` functions | `python tools/splitfree.py LO HI game/Unk_02081740` |
| `splitlib.py` | a range of library code as a C file of asm | `python tools/splitlib.py LO HI libs/NitroSDK/fx/fx_vec` |
| `memberize.py` | typed `extern "C"` functions of a class become members | `python tools/memberize.py MatchEngine src/match/MatchEngine.cpp` |
| `retarget.py` | updates callers after a class split | `python tools/retarget.py Wireless src/f.cpp unk_8c=unk_8c` |
| `fixsyms.py` | renames symbols after signatures changed | `python tools/fixsyms.py src/match/MatchEngine.cpp` |
| `rename.py` | renames identifiers or moves files everywhere | `python tools/rename.py UnkClass_0203dc7c=ScreenManager` |
| `dedecl.py` | removes placeholder declarations a header now covers | `python tools/dedecl.py src/game/*.cpp` |
| `cluster.py` | guesses a class's extent from its calls | `python tools/cluster.py 0x020621b4 --map` |
| `disrange.py` | disassembles a range of the main module with names | `python tools/disrange.py 0x02061498 0x02061600` |
| `findtails.py` | finds unreachable epilogues before splitting a range | `python tools/findtails.py LO HI` |
| `thumbfix.py` | makes Thumb asm assemble to the original encodings | `IE_OV=14 python tools/thumbfix.py src/ov014/f.c` |
| `sigmatch.py` | finds known library (or reference) code by masked signatures | `python tools/sigmatch.py extract/yeep out.json REF_OBJ_DIR --config config/yeep/arm9` |
| `sdk_split.py` | names and splits the library functions sigmatch found | `python tools/sdk_split.py matches.json config/yeep/arm9` |
| `refasm.py` | assembles the IE3 reference's asm (outside the repo) | `python tools/refasm.py ../ext/ie3ogres ../ext/ie3obj` |
| `refmap.py` | pairs our functions with IE3's (bytes, calls, order) | `python tools/refmap.py extract/yeep config/yeep/arm9 ../ext/ie3obj build/ie3_map.json` |
| `refdoc.py` | writes `docs/ie3_mapping.md/.csv` and a rename list | `python tools/refdoc.py build/ie3_map.json docs/ie3_mapping.md docs/ie3_mapping.csv build/ie3_renames.txt` |
| `cprogress.py` | the C/C++ share by bytes (`make report`) | `python tools/cprogress.py` |
| `progress.py` | prints the objdiff report (`make progress`) | |
| `deps.py` | header dependencies for the Makefile; checks includes | `python tools/deps.py --users include/match/MatchEngine.hpp` |
| `lcfextra.py`, `fixrom.py` | build steps: linker script additions, ROM header fix | |
| `setup.sh`, `hooks/pre-commit` | download the tools; the commit check | |

More on what made functions match: [docs/matching.md](docs/matching.md); the match code:
[docs/match_engine.md](docs/match_engine.md).

## Continuous integration

`.github/workflows/build.yml` builds on every push and pull request. The ROM comes from the
repository's encrypted secrets and is never uploaded. A secret holds at most 48 KB and the ROM is
256 MB, so `BASEROM_B64` (read first if set) cannot hold it; use `BASEROM_KEY` instead:

1. `gpg --symmetric --cipher-algo AES256 baserom_yeep.nds` (choose a strong passphrase).
2. Put `baserom_yeep.nds.gpg` somewhere private that `curl` can download from (a link only you
   have), and set the secret `BASEROM_URL` to it. **The repository is public: never attach the
   file to a release here**, as release assets are public. (Only while the repository was
   private could it live in a release tagged `baserom`; the workflow uses that only when the
   repository is private and `BASEROM_URL` is unset.)
3. Settings > Secrets and variables > Actions > New repository secret: `BASEROM_KEY` = the
   passphrase (`gh secret set BASEROM_KEY`), and `BASEROM_URL`.

Without the secret the workflow skips the build with a notice and still checks the tools and
the includes.

## Current priorities

1. **Match engine** (`src/match/`, ov087, ov001; [docs/match_engine.md](docs/match_engine.md)):
   120 functions still asm in `src/match` (`make todo ARGS="--file src/match"`), 40 of them
   never attempted (`python tools/untried.py -n 300 --file src/match`: take them from the top;
   next: `func_020725ac`, `func_0207e8f8`, `func_020640b4`, `func_02065fa0`, `func_020733d4`;
   `func_0207c1b0` drives the 2D adventure logic like `func_0207bb9c`, whose callees are now
   typed in MatchEngine_2.cpp). Field meanings and function roles checked in play are in
   [docs/ie1_recomp.md](docs/ie1_recomp.md): use them when typing. A loop that jumps to its test first: put the function at
   `#pragma optimization_level 2` (push/pop around it), and if it then reuses a value the ROM
   computes again after a call, add `#pragma opt_common_subs off` (docs/matching.md). Skip for
   now the `UnkDeque_0207076c` members and users (`func_0206d6b4`: they want the deque template
   modelled; the iterator's `this` is {cur, begin, start, end}). `func_020810ec` (MatchUtil)
   needs the engine typed there instead of `char data_020e88a0[]`. Before retyping a callee,
   check that its C callers still match (a `u32` parameter where `int` was changed
   `func_02078bc0`). A member whose `this` is something else becomes static and takes it
   (func_0207f3cc, func_0207f3e0). IE3 names: `CLogicThink`, `CUnitMan`, `CCalcMap` (the
   `match` rows of `docs/ie3_mapping.csv`).
2. **Permuter queue**: 64 entries in `permuter/queue.txt`; batches 1-6 covered the first 35.
   The ones from line 36 (`func_0206b5a0`) on have never run (func_02075428, 2 words, got 10
   minutes without improvement): `tools/permuter_batch.sh` with
   `PERM_QUEUE=` a file holding just them. Results reached only through fake code (an uninitialised
   variable, a self-assignment, a 64-bit index, `if (1)`) don't count; look for the natural
   form they point at (func_0207e738 matched that way).
3. **Bigger non-matching attempts** (16-165 words): `SceneManager` (6), `SaveManager` (4),
   `System::func_020401bc`, `Wireless` (3), `MatchBallPhysics::func_02061ab8`, MatchEngine
   (func_0207bb9c (118), func_020793bc (94), func_02065dec (70), func_02067aec (57),
   func_02066e28 (56), func_02077f20, func_02084350, func_0206a590/0206a648 (45),
   func_0206cec0 (25) and older).
4. Known blockers: `FileManager::LoadAsync` (r9/r11 swap, queued); identical blocks of two
   branches the ROM shares (func_02066e28); a field read twice that the rebuild keeps in a
   register (func_02061bc0); two loads merged into an `ldm` (func_0206a3b8); an immediate
   `return 0` after an index check (func_0206e50c/0206e5e4); dead stack stores the ROM keeps
   (func_02068434); a returned struct copied word by word into a second slot (func_0207bb9c)
   and a u16 swap through a kept stack temporary (func_020793bc), docs/matching.md; 19 IE3
   names not applied (name clashes, see ie3_mapping.md); ov088
   (Mobiclip) still counted as game code.

At the end of every session, update the 'Current priorities' section in CLAUDE.md and append a short dated entry to docs/progress.md (what was matched, progress % from make progress, new findings, blockers). Commit both.
