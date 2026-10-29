#!/usr/bin/env python3
"""Updates the callers of a class that was split with tools/splitclass.py.

usage: tools/retarget.py CLASS src/file.cpp [MEMBER=EXPR ...]

In src/file.cpp, the calls to the class's functions by their old names (func_XXXXXXXX)
become calls of the class: in C++, "func_X(MEMBER, ...)" becomes "MEMBER.func_X(...)"
for every MEMBER=EXPR given (EXPR is what MEMBER is replaced with, e.g. unk_8c=unk_8c or
obj=((Class *)ptr)->), and in asm functions "bl func_X" uses the mangled name (with an
extern "C" declaration). The old declarations of func_X are removed.
"""
import os, re, sys

cls, path = sys.argv[1], sys.argv[2]
members = [a.split("=", 1) for a in sys.argv[3:]]
syms = {}
for line in open((f"config/yeep/arm9/overlays/ov{int(os.environ['IE_OV']):03d}" if os.environ.get("IE_OV") else "config/yeep/arm9") + "/symbols.txt"):
    m = re.match(r"(_ZN%d%s\d+(func_(?:ov[0-9]{3}_)?[0-9a-f]{8})E\S*) kind:function" % (len(cls), cls), line)
    if m:
        syms[m.group(2)] = m.group(1)

t = open(path).read()
for member, expr in members:
    sep = "" if expr.endswith("->") or expr.endswith(".") else "."
    t = re.sub(r"\b(func_(?:ov[0-9]{3}_)?[0-9a-f]{8})\(%s(?:, )?" % re.escape(member),
               lambda m: f"{expr}{sep}{m.group(1)}(" if m.group(1) in syms else m.group(0), t)
for f in syms:
    # (only the untyped declarations: typed ones are turned into members by tools/memberize.py)
    t = re.sub(r'^extern "C" void %s\(void\);.*\n' % f, "", t, flags=re.M)
used = set()


def asm(m):
    if m.group(2) in syms:
        used.add(syms[m.group(2)])
        return m.group(1) + syms[m.group(2)]
    return m.group(0)


t = re.sub(r"(\b(?:bl|b)\w*\s+|=)(func_(?:ov[0-9]{3}_)?[0-9a-f]{8})\b", asm, t)
decls = "".join(f'extern "C" void {n}(void);     // (for the asm functions)\n' for n in sorted(used) if n not in t.split("asm ")[0])
if decls:
    i = t.index("\n\n") + 2
    t = t[:i] + decls + t[i:]
open(path, "w", newline="\n").write(t)
print(f"{path}: {len(used)} asm calls, {len(members)} members")
