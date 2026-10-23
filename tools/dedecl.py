#!/usr/bin/env python3
"""Removes the placeholder declarations of a source file that its headers declare properly.

usage: tools/dedecl.py src/file.cpp ...

The asm of split files declares what it uses as 'extern "C" char NAME[];' or
'extern "C" void NAME(void);'. Once a header the file includes declares NAME with its
type, the placeholder conflicts with it; this removes those placeholders.
"""
import os, re, sys


def header_text(t):
    known = ""
    todo = re.findall(r'^#include "([^"]+)"', t, re.M)
    seen = set()
    while todo:
        inc = todo.pop()
        if inc in seen or not os.path.exists(f"include/{inc}"):
            continue
        seen.add(inc)
        text = open(f"include/{inc}").read()
        known += re.sub(r"//[^\n]*", "", text) + "\n"
        todo += re.findall(r'^#include "([^"]+)"', text, re.M)
    return known


for path in sys.argv[1:]:
    t = open(path).read()
    known = header_text(t)
    out = []
    removed = 0
    for line in t.split("\n"):
        m = re.match(r'extern "C" (?:char (\w+)\[\]|void (\w+)\(void\));', line)
        if m:
            name = m.group(1) or m.group(2)
            if re.search(r"\b%s\s*[\(\[;]" % name, known):
                removed += 1
                continue
        out.append(line)
    open(path, "w", newline="\n").write("\n".join(out))
    print(f"{path}: {removed} placeholders removed")
