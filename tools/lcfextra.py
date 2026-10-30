#!/usr/bin/env python3
"""Adds to the linker script written by dsd: absolute symbols, and the functions to keep.

usage: tools/lcfextra.py arm9.lcf SYMBOLS_FILE

SYMBOLS_FILE has lines "NAME = VALUE;" (# for comments). They are put in the main
program's section, as NitroSDK's linker scripts do for SDK_OVERLAY_<name>_ID: the
FS_OVERLAY_ID() macro takes the address of such a symbol.

The functions of the source files (the complete ranges of the delinks files) are listed
in a FORCE_ACTIVE block: the linker would dead-strip the ones no relocation of the built
code refers to (one asm refers to as raw words, say), though the original has them.
"""
import glob, os, re, sys

lcf, extra = sys.argv[1:3]
lines = [l.strip() for l in open(extra) if l.strip() and not l.strip().startswith("#")]
text = open(lcf).read()
marker = "ARM9_CTOR_END = .;"
if marker not in text:
    sys.exit(f"{lcf}: no '{marker}' to put the symbols after")
if lines[0] not in text:
    text = text.replace(marker, marker + "\n        " + "\n        ".join(lines), 1)

# (the functions to keep)
cfg = os.path.join(os.path.dirname(os.path.abspath(extra)))
mods = {"main": cfg}
for d in glob.glob(os.path.join(cfg, "overlays", "ov*")):
    mods[int(os.path.basename(d)[2:])] = d
for tcm in ("itcm", "dtcm"):
    mods[tcm] = os.path.join(cfg, tcm)
keep = []
for m, d in mods.items():
    t = open(os.path.join(d, "delinks.txt")).read()
    ranges = [(int(a, 16), int(b, 16)) for a, b in
              re.findall(r"^\S+:\n    complete\n    \.text start:(0x[0-9a-f]+) end:(0x[0-9a-f]+)", t, re.M)]
    if not ranges:
        continue
    syms = open(os.path.join(d, "symbols.txt")).read()
    funcs = [(int(a, 16), int(n, 16)) for n, a in re.findall(r"kind:function\(\w+,size=(0x[0-9a-f]+)\S* addr:(0x[0-9a-f]+)", syms)]
    for s in re.finditer(r"^(\S+) kind:(function|data)\S* addr:(0x[0-9a-f]+)", syms, re.M):
        a = int(s.group(3), 16)
        # (and the data between the functions, BuildInfo say: tools/splitlib.py writes it as asm)
        if any(lo <= a < hi for lo, hi in ranges) and \
           (s.group(2) == "function" or not any(f <= a < f + n for f, n in funcs)):
            keep.append(s.group(1))
if keep and "FORCE_ACTIVE" not in text:
    text = text.replace("KEEP_SECTION {", "FORCE_ACTIVE {\n    " + ",\n    ".join(keep) + "\n}\n\nKEEP_SECTION {", 1)
open(lcf, "w", newline="\n").write(text)
