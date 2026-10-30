#!/usr/bin/env python3
"""Lists the unreachable epilogues in a range of the main module, before splitting it.

usage: tools/findtails.py LO HI

A "function" that nothing references and whose code is only 'ldmia sp!, {..., pc}' (or
'bx lr') is the end of the function before it, after an endless loop. Split as its own
asm function, the linker strips it (see docs/matching.md): it has to join the function
before it.
"""
import os, glob, re, struct, sys

lo, hi = int(sys.argv[1], 16), int(sys.argv[2], 16)
fs = []
OV = os.environ.get("IE_OV")
CFG = "config/yeep/arm9" + ((f"/{OV}" if OV in ("itcm", "dtcm") else f"/overlays/ov{int(OV):03d}") if OV else "")
for line in open(f"{CFG}/symbols.txt"):
    m = re.match(r"(\S+) kind:function\(arm,size=(0x[0-9a-f]+)\S*\) addr:(0x[0-9a-f]+)", line)
    if m and lo <= int(m[3], 16) < hi:
        fs.append((int(m[3], 16), int(m[2], 16), m[1]))
fs.sort()
refs = set()
for f in ["config/yeep/arm9/relocs.txt"] + glob.glob("config/yeep/arm9/overlays/*/relocs.txt") + \
         ["config/yeep/arm9/itcm/relocs.txt", "config/yeep/arm9/dtcm/relocs.txt"]:
    for line in open(f):
        m = re.match(r"from:0x\w+ kind:\w+ to:(0x[0-9a-f]+) module:(?:main|overlay|itcm|dtcm)", line)
        if m:
            refs.add(int(m[1], 16))
if OV:
    rom = open(f"extract/yeep/arm9/{OV}.bin" if OV in ("itcm", "dtcm") else
               f"extract/yeep/arm9_overlays/ov{int(OV):03d}.bin", "rb").read()
    off = -int(re.search(r"\.text\s+start:(0x[0-9a-f]+)", open(f"{CFG}/delinks.txt").read()).group(1), 16) + 0x02000000
else:
    rom = open("baserom_yeep.nds", "rb").read()
    off = struct.unpack("<I", rom[0x20:0x24])[0]
for i, (a, size, name) in enumerate(fs):
    if a in refs or size > 8 or i == 0:
        continue
    w = struct.unpack("<I", rom[off + a - 0x02000000:off + a - 0x02000000 + 4])[0]
    # ldmia sp!, {..., pc} (cond AL) or bx lr
    if (w & 0xFFFF8000) == 0xE8BD8000 or w == 0xE12FFF1E:
        print(f"{name} at {a:#x}: the unreachable end of {fs[i - 1][2]}")
