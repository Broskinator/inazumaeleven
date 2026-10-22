#!/usr/bin/env python3
# Splits the code of a class into src/<path>.cpp: every function in [lo, hi) becomes an
# asm member "void Class::func_XXXXXXXX()" (bodies from tools/romasm.py), the symbols are
# renamed to the mangled names, and include/<path>.hpp gets the class with the methods.
#
# usage: tools/splitclass.py LO HI CLASS area/Name ["comment for the class"]
# (then convert the functions to C++ one by one; tools/fixsyms.py renames them in
# symbols.txt when their signatures change)
import os, re, subprocess, sys

lo, hi, cls, path = int(sys.argv[1], 16), int(sys.argv[2], 16), sys.argv[3], sys.argv[4]
comment = sys.argv[5] if len(sys.argv) > 5 else ""
SYM = "config/yeep/arm9/symbols.txt"
s = open(SYM).read()
funcs = []
for m in re.finditer(r"^(\S+) kind:function\(arm,size=(0x[0-9a-f]+)\) addr:(0x[0-9a-f]+)$", s, re.M):
    a = int(m.group(3), 16)
    if lo <= a < hi:
        funcs.append((a, m.group(1)))
funcs.sort()
names = {}
for a, old in funcs:
    short = old if not old.startswith("_Z") else f"func_{a:08x}"
    names[a] = (short, f"_ZN{len(cls)}{cls}{len(short)}{short}Ev")
for a, (short, mangled) in names.items():
    s, k = re.subn(rf"^\S+( kind:function\(arm,size=0x[0-9a-f]+\) addr:{a:#010x})$", rf"{mangled}\1", s, flags=re.M)
    assert k == 1, hex(a)
open(SYM, "w", newline="\n").write(s)

own = {m for _, m in names.values()}
decls, bodies = set(), []
for a, _ in funcs:
    short, mangled = names[a]
    r = subprocess.run([sys.executable, "tools/romasm.py", hex(a), cls], capture_output=True, text=True)
    assert r.returncode == 0, (hex(a), r.stderr)
    body = r.stdout.rstrip()
    for n in own:
        body = body.replace("=" + n + "\n", "=" + names[[k for k, v in names.items() if v[1] == n][0]][0] + "\n")
        if body.endswith("=" + n):
            body = body[: -len(n)] + names[[k for k, v in names.items() if v[1] == n][0]][0]
    for d in r.stderr.splitlines():
        m = re.search(r" (\w+)[\(\[]", d)
        if d.startswith("extern") and m.group(1) not in own and not re.match(r"func_[0-9a-f]{8}$", m.group(1)) or \
           d.startswith("extern") and re.match(r"func_[0-9a-f]{8}$", m.group(1)) and int(m.group(1)[5:], 16) not in names:
            decls.add(d)
    bodies.append(f"asm void {cls}::{short}()\n{{\n{body}\n}}\n")

hdr = path.split("/")
guard = "_".join(x.upper() for x in hdr) + "_HPP"
methods = "\n".join(f"    void {names[a][0]}();" for a, _ in funcs)
header = f"""#ifndef {guard}
#define {guard}

#include "nitro/types.h"

{('// ' + comment + chr(10)) if comment else ''}class {cls} {{
public:
{methods}
}};

#endif // {guard}
"""
os.makedirs(os.path.dirname(f"include/{path}.hpp"), exist_ok=True)
os.makedirs(os.path.dirname(f"src/{path}.cpp"), exist_ok=True)
open(f"include/{path}.hpp", "w", newline="\n").write(header)
src = f'#include "{path}.hpp"\n\n' + "\n".join(sorted(decls)) + "\n\n" + "\n".join(bodies)
open(f"src/{path}.cpp", "w", newline="\n").write(src)

dl = "config/yeep/arm9/delinks.txt"
t = open(dl).read().rstrip("\n")
t += f"\n\nsrc/{path}.cpp:\n    complete\n    .text start:{lo:#010x} end:{hi:#010x}\n"
open(dl, "w", newline="\n").write(t)
print(len(funcs), "functions")
