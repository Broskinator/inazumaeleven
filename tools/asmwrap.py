#!/usr/bin/env python3
"""Replaces a function in a source file with the original code as inline asm, keeping
the C++ under #ifdef NONMATCHING.

usage: tools/asmwrap.py src/file.cpp "int Class::Function(" ASM_FILE "reason"
"""
import sys

src, marker, asmfile, reason = sys.argv[1:5]
t = open(src).read()
a = t.index(marker)
# the function's comment lines right before it stay in front
brace = t.index("\n{\n", a)
end = t.index("\n}\n", brace) + 3
header = t[a:brace + 1]
asm = open(asmfile).read().rstrip()
new = (f"// (nonmatching: {reason})\n#ifdef NONMATCHING\n" + t[a:end] +
       "#else\nasm " + header + "{\n" + asm + "\n}\n#endif\n")
open(src, "w", newline="\n").write(t[:a] + new + t[end:])
