# Libraries in the game

The game was built with Nintendo's and Metrowerks' libraries, recognisable in the code:

| Library | Version (from the ROM) |
|---------|------------------------|
| TWL-SDK (NitroSDK successor), used in DS mode | `sdk_version` 0x05047532 in the ARM9 header (5.4) |
| NitroSystem (NNS: G2D, G3D, SND, FND) | - |
| Metrowerks MSL C / C++ and runtime | CodeWarrior for DS 2.0 |
| Nintendo DWC (Wi-Fi Connection) | `DWC-DL5.3.30003.20100513.2315_TWLDWC-DL_5_3_PATCH3` |
| NitroWiFi | `WiFi3.3.30001.200910291651` |
| Ubiquitous CPS / SSL | - |
| Mobiclip (video) | `Mobiclip SDK V1.2.2` |
| Backup (save) library | `[SDK+NINTENDO:BACKUP]` |

## How they were found

`tools/sigmatch.py` compares every function of a set of reference objects with the
game's code (main program, ITCM, DTCM, overlays), with the bytes that the linker
fills in (calls, pointers) masked. `tools/sdk_split.py` then names the functions
found (`symbols.txt`) and turns each run of functions from one source file into a
file in `delinks.txt` (under `libs/`).

Reference objects used:

- NitroSDK 4.2.30001, decompiled by [ntrtwl/NitroSDK](https://github.com/ntrtwl/NitroSDK)
- NitroSystem 071126, [ntrtwl/NitroSystem](https://github.com/ntrtwl/NitroSystem)
- MSL C, MSL C++ and runtime libraries of CodeWarrior for DS 2.0 sp1p2 and sp2p3
  (from [metroskrew](https://github.com/mid-kid/metroskrew))

both built with mwccarm 2.0/sp1p2. The game uses a newer SDK (TWL-SDK 5.4), so only
the functions that did not change between the versions are found: about 400 so far.
The rest of each library (DWC, WiFi, SSL, Mobiclip, and the SDK functions that
changed) still has to be identified.

## Where they are

In the main program (ARM9, 0x02000000-0x0209e94c), the libraries come first:

| Range | Content |
|-------|---------|
| 0x02000000-0x02000950 | secure area (BIOS calls), crt0 entry |
| 0x02000950-0x02018128 | NitroSDK / TWL-SDK (init, fx, gx, os, mi, snd, fs, cp, tp, pm, mic, card, wm, ctrdg, math, std) |
| 0x02018128-0x020252f8 | MSL C (math, mbstring, mem, printf, rand, string, wstring, ansi_fp, fdlibm) |
| 0x020252f8-0x02025ba4 | MSL C++ (exceptions, new, cxxabi) |
| 0x02025ba4-0x02033218 | NitroSystem (g2d, g3d, snd, fnd) |
| 0x02033218-0x0209e94c | the game, and the libraries not identified yet |

Overlay 89 contains the SDK's DS Download Play (MB) library.

File boundaries inside the library block are approximate: a file starts at its
first function found, and the functions that follow (not found, because they
changed in the newer SDK) are kept in it until the next file starts.
