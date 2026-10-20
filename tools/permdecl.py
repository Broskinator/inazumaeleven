#!/usr/bin/env python3
"""Tries every order of a function's leading local declarations until it matches.

usage: tools/permdecl.py src/file.cpp "Class::Function(" MANGLED_NAME

The declarations are the lines right after the function's opening brace (one per line,
indented by 4 spaces). The best order found is written back to the file.
"""
import itertools, re, subprocess, sys

src, marker, name = sys.argv[1:4]
text = open(src).read()
start = text.index(marker)
brace = text.index("{\n", start) + 2
lines = text[brace:].split("\n")
n = 0
while n < len(lines) and re.match(r"    [A-Za-z_][\w\s\*\[\]]* [\*\w\[\]x0-9]+( = [^;]+)?;$", lines[n]):
    n += 1
decls = lines[:n]
rest = "\n".join(lines[n:])
print(f"{len(decls)} declarations")


def score(order):
    open(src, "w").write(text[:brace] + "\n".join(order) + "\n" + rest)
    r = subprocess.run(["python3", "tools/fncmp.py", src, name], capture_output=True, text=True).stdout
    m = re.search(r"(\d+) words differ", r)
    return 0 if "OK" in r else int(m.group(1)) if m else 9999


best = (score(decls), decls)
for order in itertools.permutations(decls):
    s = score(list(order))
    if s < best[0]:
        best = (s, list(order))
        print(s, [d.strip() for d in order])
    if s == 0:
        break
open(src, "w").write(text[:brace] + "\n".join(best[1]) + "\n" + rest)
print("best:", best[0])
