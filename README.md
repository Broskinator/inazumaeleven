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
- [x] First functions decompiled to matching C (`src/text/text_font.c`)
- [ ] Decompiled to C

## Building

Requirements: Linux (or WSL on Windows), `make`, `python3`, `curl`, `unzip`.

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

A function is decompiled when its C source compiles to exactly the original
machine code. Decompiled files live in `src/` (headers in `include/`) and are
marked `complete` in `config/yeep/arm9/**/delinks.txt`; the build then uses the
compiled C instead of the original code, and the final SHA-1 check proves it matches.

Compiler: Metrowerks CodeWarrior for DS (`mwccarm`), flags in the `Makefile`
(`-O4,p -proc arm946e -enum int -lang c99 -Cpp_exceptions off -char signed`).
The exact version is not pinned yet: the functions decompiled so far compile
identically with every 2.0 and DSi 1.x version; 2.0/sp1p2 is used until one of
them shows a difference.

## Layout

| Path | What |
|------|------|
| `src/`, `include/` | decompiled C code and headers |
| `config/yeep/arm9/` | ds-decomp configuration: modules, sections, symbols, relocations, how the code is split (`delinks.txt`) |
| `tools/` | setup script and build helpers (`sigmatch.py` / `sdk_split.py`: library identification) |
| `docs/` | notes on the game's code |
| `extract/` | the unpacked ROM (created by the build, not in git) |
| `build/` | build output (not in git) |
