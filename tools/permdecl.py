#!/usr/bin/env python3
"""Tries every order of a function's leading local declarations until it matches.

usage: tools/permdecl.py src/file.cpp "Class::Function(" MANGLED_NAME

The declarations are the lines right after the function's opening brace (one per line,
indented by 4 spaces). The best order found is written back to the file. A function under
#ifdef NONMATCHING (its attempt, with the asm after #else) is compiled with -DNONMATCHING.
"""
import itertools, os, re, subprocess, sys

src, marker, name = sys.argv[1:4]
text = open(src).read()
# (the definition: an occurrence of the marker whose line doesn't end in ';' (a prototype) and
# isn't the asm; under #ifdef NONMATCHING when the function has an attempt and its asm)
starts = []
for m in re.finditer(re.escape(marker), text):
    line_start = text.rfind("\n", 0, m.start()) + 1
    line_end = text.find("\n", m.start())
    line = text[line_start:line_end]
    if not line.rstrip().endswith(";") and not re.search(r"\basm\b", line):
        starts.append(m.start())
if not starts:
    sys.exit(f"no definition of {marker} in {src}")
start = starts[0]
before = text[:start]
nonmatching = before.rfind("#ifdef NONMATCHING") > max(before.rfind("#endif"), before.rfind("#else"))
brace = text.index("{\n", start) + 2
lines = text[brace:].split("\n")
n = 0
while n < len(lines) and re.match(r"    [A-Za-z_][\w\s\*\[\]]* [\*\w\[\]x0-9]+( = [^;]+)?;$", lines[n]):
    n += 1
decls = lines[:n]
rest = "\n".join(lines[n:])
print(f"{len(decls)} declarations")


def score(order):
    open(src, "w", newline="\n").write(text[:brace] + "\n".join(order) + "\n" + rest)
    env = dict(os.environ)
    if nonmatching:
        env["EXTRA_CFLAGS"] = (env.get("EXTRA_CFLAGS", "") + " -DNONMATCHING").strip()
    r = subprocess.run([sys.executable, "tools/fncmp.py", src, name], capture_output=True, text=True,
                       env=env).stdout
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
open(src, "w", newline="\n").write(text[:brace] + "\n".join(best[1]) + "\n" + rest)
print("best:", best[0])
