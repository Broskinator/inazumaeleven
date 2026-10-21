#!/usr/bin/env python3
"""Adds absolute symbols to the linker script written by dsd.

usage: tools/lcfextra.py arm9.lcf SYMBOLS_FILE

SYMBOLS_FILE has lines "NAME = VALUE;" (# for comments). They are put in the main
program's section, as NitroSDK's linker scripts do for SDK_OVERLAY_<name>_ID: the
FS_OVERLAY_ID() macro takes the address of such a symbol.
"""
import sys

lcf, extra = sys.argv[1:3]
lines = [l.strip() for l in open(extra) if l.strip() and not l.strip().startswith("#")]
text = open(lcf).read()
marker = "ARM9_CTOR_END = .;"
if marker not in text:
    sys.exit(f"{lcf}: no '{marker}' to put the symbols after")
if lines[0] not in text:
    text = text.replace(marker, marker + "\n        " + "\n        ".join(lines), 1)
    open(lcf, "w").write(text)
