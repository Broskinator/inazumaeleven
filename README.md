# Inazuma Eleven (Europe)

A decompilation of *Inazuma Eleven* for the Nintendo DS (Europe, `YEEP`).

The goal is source code (readable C, with assembly for the parts not decompiled yet)
that builds a ROM byte-for-byte identical to the original, like the
[pret](https://github.com/pret) projects.

This repository does not contain the game or any of its data. To build it you need
your own copy of the ROM:

| Version | File | SHA-1 |
|---------|------|-------|
| Europe  | `baserom_yeep.nds` | `d55169c0b93d26b4037379d3b81a61b5404945e5` |

## Status

- [x] The whole ROM rebuilds from this repository and matches the original
      (main program, ITCM/DTCM and all 91 overlays)
- [x] Library code identified and split into files: about 400 functions of
      NitroSDK, NitroSystem and the Metrowerks libraries named, 126 files
      (see [docs/libraries.md](docs/libraries.md))
- [ ] Game code split into files
- [x] First complete source files (`make progress` for the current count): text drawing
      (`src/text/`), the file loader and pack files (`src/file/`), the save memory
      (`src/save/`), the heap (`src/system/`), data containers and the "key = value"
      settings reader (`src/data/`), the movie player (`src/movie/`) and the sound
      manager over the sound driver (`src/sound/`: all 68 functions in C++, 63 matching)
      and wireless play over the WM library (`src/wireless/`: 53 of 55 in C++), the scenes'
      base class, the scene manager with the game's main loop and the treasure boxes
      (`src/game/`), the start-up and the entry point (`src/system/`)
- [ ] Match code (`src/game/`, from 0x02061498): the ball's physics and the distance
      tables (`UnkClass_02061498.cpp`), and the first files of the match's data
      object at data_020e88a0 (`UnkClass_020621b4.cpp`); the ball, the players and their
      bodies are in `include/game/Match.hpp`
- [ ] Decompiled to C

## Building

Requirements: Linux, or Windows with Git Bash / MSYS2 (no WSL needed: the tools are
downloaded as Windows programs and the compiler runs directly); `make`, `python3`, `curl`.

1. Put your ROM in this folder as `baserom_yeep.nds`.
2. Run `make`.

The first run downloads the tools into `tools/` (see `tools/setup.sh`):

- [ds-decomp](https://github.com/AetiasHax/ds-decomp) (`dsd`): extracts the ROM, cuts
  the code into objects and puts the ROM back together
- [wibo](https://github.com/decompals/wibo): runs the Windows compiler on Linux
- Metrowerks CodeWarrior for DS (`mwccarm`, from
  [decomp.me](https://github.com/decompme/compilers)): the compiler and linker the
  game was built with

The result is `build/inazumaeleven_yeep.nds`, and the build ends with its SHA-1 check.

`make progress` shows how much has been decompiled. It also writes `objdiff.json`,
which [objdiff](https://github.com/encounter/objdiff) opens to compare each
function of the C code with the original, side by side.

## Decompiling

The game is written in C++. A function is decompiled when its source compiles to
exactly the original machine code. Decompiled files live in `src/` (headers in
`include/`) and are marked `complete` in `config/yeep/arm9/**/delinks.txt`; the
build then uses the compiled code instead of the original, and the final SHA-1
check proves it matches.

Compiler: Metrowerks CodeWarrior for DSi (`mwccarm`, `dsi/1.2` in the `Makefile`),
with `-O4,p -RTTI off -proc arm946e -enum int -Cpp_exceptions off -char signed -str noreuse`.
The game was linked with dead code stripping: functions nothing calls (such as the
base-object constructor of a class nothing derives from) are not in the ROM. The 2.0
(DS) compilers produce different code for some functions; every DSi 1.x version
matched so far, so the exact one is not pinned yet.

Functions that compile almost but not exactly to the original are kept as the
original instructions (an `asm` function) with the C++ attempt next to it under
`#ifdef NONMATCHING`, so that a file can be complete before every function matches.

Symbols use their C++ (mangled) names in `symbols.txt`, e.g.
`_ZN8TextFont12GetLineWidthEPKc` for `TextFont::GetLineWidth(const char *)`.

To check a file while working on it:

    python3 tools/fncmp.py src/text/TextFont.cpp       # OK / words that differ, per function
    python3 tools/fncmp.py src/text/TextFont.cpp -d    # with a side-by-side disassembly

(`pip install pyelftools pyyaml capstone` first.)

More helpers:

    python3 tools/permdecl.py src/file.cpp "int Class::Function(" MANGLED_NAME
        # tries every order of the function's local declarations (register allocation
        # follows it)
    python3 tools/asmconv.py 0x02036354 FileManager > func.s
    python3 tools/asmwrap.py src/file.cpp "int Class::Function(" func.s "reason"
        # turns a function into an asm fallback, with its C++ under NONMATCHING
    python3 tools/splitclass.py 0x0203c0ec 0x0203dc7c Wireless wireless/Wireless
        # splits the code of a class into a file of asm members, to convert one by one
    python3 tools/fixsyms.py src/file.cpp
        # renames functions in symbols.txt after their signatures changed

See [docs/matching.md](docs/matching.md) for what made functions match so far.

Object file names must be unique ignoring case: the linker runs on Windows, so
`Heap.o` and the sound library's `heap.o` would be the same file.

## Layout

| Path | What |
|------|------|
| `src/`, `include/` | decompiled C code and headers |
| `config/yeep/arm9/` | ds-decomp configuration: modules, sections, symbols, relocations, how the code is split (`delinks.txt`) |
| `tools/` | setup script and build helpers (`sigmatch.py` / `sdk_split.py`: library identification) |
| `docs/` | notes on the game's code |
| `extract/` | the unpacked ROM (created by the build, not in git) |
| `build/` | build output (not in git) |
