#!/usr/bin/env python3
"""Adds to the linker script written by dsd: absolute symbols, and the functions to keep.

usage: tools/lcfextra.py arm9.lcf SYMBOLS_FILE

SYMBOLS_FILE has lines "NAME = VALUE;" (# for comments). They are put in the main
program's section, as NitroSDK's linker scripts do for SDK_OVERLAY_<name>_ID: the
FS_OVERLAY_ID() macro takes the address of such a symbol.

The functions of the source files (the complete ranges of the delinks files) that no
relocation refers to would be dead-stripped by the linker, though the original has them:
they are listed in a FORCE_ACTIVE block.
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
refs = {m: set() for m in mods}
for m, d in mods.items():
    for line in open(os.path.join(d, "relocs.txt")):
        r = re.match(r"from:0x\w+ kind:\w+ to:(0x[0-9a-f]+)(?: add:\S+)? module:(\w+)(?:\(([\d, ]+)\))?", line)
        if not r:
            continue
        to = int(r.group(1), 16)
        if r.group(2) == "main":
            refs["main"].add(to)
        elif r.group(3) and "," not in r.group(3):
            # (only a reference into one overlay: one into "one of several" isn't linked by name)
            if int(r.group(3)) in refs:
                refs[int(r.group(3))].add(to)
keep = []
for m, d in mods.items():
    t = open(os.path.join(d, "delinks.txt")).read()
    ranges = [(int(a, 16), int(b, 16)) for a, b in
              re.findall(r"^\S+:\n    complete\n    \.text start:(0x[0-9a-f]+) end:(0x[0-9a-f]+)", t, re.M)]
    if not ranges:
        continue
    for line in open(os.path.join(d, "symbols.txt")):
        s = re.match(r"(\S+) kind:function\S* addr:(0x[0-9a-f]+)", line)
        if s:
            a = int(s.group(2), 16)
            if a not in refs[m] and any(lo <= a < hi for lo, hi in ranges):
                keep.append(s.group(1))
if keep and "FORCE_ACTIVE" not in text:
    text = text.replace("KEEP_SECTION {", "FORCE_ACTIVE {\n    " + ",\n    ".join(keep) + "\n}\n\nKEEP_SECTION {", 1)
open(lcf, "w", newline="\n").write(text)
