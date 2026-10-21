#!/usr/bin/env python3
"""Removes the asm fallback of a function that now matches, keeping its C++.

usage: tools/asmunwrap.py src/file.cpp "int Class::Function("
"""
import re, sys

src, marker = sys.argv[1:3]
t = open(src).read()
start = t.index("#ifdef NONMATCHING\n" + marker)
els = t.index("#else\nasm " + marker, start)
end = t.index("#endif\n", els) + len("#endif\n")
cpp = t[start + len("#ifdef NONMATCHING\n"):els]
# drop the "(nonmatching: ...)" comment line right before
before = t[:start]
before = re.sub(r"// \(nonmatching:[^\n]*\)\n$", "", before)
open(src, "w").write(before + cpp + t[end:])
