#!/usr/bin/env python3
"""Splits a range of the main module into a file of free extern "C" functions (asm for now).

usage: tools/splitfree.py LO HI area/Name ["comment"]

Like tools/splitclass.py, but the functions are 'extern "C" asm void func_X(void)' (their
symbols stay func_XXXXXXXX): for code whose first argument is a plain struct and not a
class. The other files that call them by mangled names are updated, and the file
declares its own functions first (the asm calls them).
"""
import glob, os, re, subprocess, sys

lo, hi, path = sys.argv[1], sys.argv[2], sys.argv[3]
comment = sys.argv[4] if len(sys.argv) > 4 else ""
tmp = "Free_" + lo
r = subprocess.run([sys.executable, "tools/splitclass.py", lo, hi, tmp, path, comment], capture_output=True, text=True)
print(r.stdout.strip())
if r.returncode:
    print(r.stderr)
    sys.exit(1)
for f in glob.glob("src/**/*.cpp", recursive=True):
    f = f.replace("\\", "/")
    if f != f"src/{path}.cpp":
        subprocess.run([sys.executable, "tools/retarget.py", tmp, f], capture_output=True)

mang = re.compile(r"_ZN%d%s\d+(func_[0-9a-f]{8})Ev" % (len(tmp), tmp))
p = f"src/{path}.cpp"
t = open(p).read()
t = re.sub(r"asm void %s::(func_[0-9a-f]{8})\(\)" % tmp, r'extern "C" asm void \1(void)', t)
t = mang.sub(r"\1", t)
names = re.findall(r'^extern "C" asm void (func_[0-9a-f]{8})\(void\)', t, re.M)
for n in names:
    t = re.sub(r'^extern "C" void %s\(void\);\n' % n, "", t, flags=re.M)
i = t.index("\n\n") + 2
t = t[:i] + "".join(f'extern "C" void {n}(void);\n' for n in names) + "\n" + t[i:]
open(p, "w", newline="\n").write(t)

h = f"include/{path}.hpp"
s = open(h).read()
s = re.sub(r"class %s \{\npublic:\n.*?\n\};\n" % tmp, "// (the functions are declared by their users, with their types, for now)\n", s, flags=re.S)
open(h, "w", newline="\n").write(s)

sy = "config/yeep/arm9/symbols.txt"
x = open(sy).read()
x = re.sub(r"^_ZN%d%s\d+(func_[0-9a-f]{8})Ev " % (len(tmp), tmp), r"\1 ", x, flags=re.M)
open(sy, "w", newline="\n").write(x)

for f in glob.glob("src/**/*.cpp", recursive=True):
    f = f.replace("\\", "/")
    if f == p:
        continue
    y = open(f).read()
    ny = mang.sub(r"\1", y)
    # (an untyped declaration once is enough, and none where a typed one exists)
    typed = set(re.findall(r'^extern "C" (?!void \w+\(void\))[^\n]*?\b(func_[0-9a-f]{8})\(', ny, re.M))
    seen, out = set(), []
    for line in ny.split("\n"):
        m = re.match(r'extern "C" void (func_[0-9a-f]{8})\(void\);', line)
        if m:
            if m.group(1) in seen or m.group(1) in typed:
                continue
            seen.add(m.group(1))
        out.append(line)
    ny = "\n".join(out)
    if ny != y:
        open(f, "w", newline="\n").write(ny)
print(len(names), "free functions")
