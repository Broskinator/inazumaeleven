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
- [ ] Code split into one object per source file
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

## Layout

| Path | What |
|------|------|
| `config/yeep/arm9/` | ds-decomp configuration: modules, sections, symbols, relocations, how the code is split (`delinks.txt`) |
| `tools/` | setup script and build helpers |
| `extract/` | the unpacked ROM (created by the build, not in git) |
| `build/` | build output (not in git) |
