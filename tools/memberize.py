#!/usr/bin/env python3
"""Turns the typed extern "C" declarations of functions that are now members into members.

usage: tools/memberize.py CLASS src/file.cpp

After tools/splitclass.py --extend, functions the file declared as
'extern "C" RET func_X(CLASS *self, ARGS);' (typed, with the object as the first
parameter) are members of CLASS: the declaration is removed, the member gets the
signature 'RET func_X(ARGS)' in the header and on its asm definition, and the calls
'func_X(this, ...)' become 'func_X(...)'. Run tools/fixsyms.py afterwards.
"""
import re, sys

cls, path = sys.argv[1], sys.argv[2]
hdr = "include/" + path[len("src/"):].rsplit(".", 1)[0] + ".hpp"
t = open(path).read()
h = open(hdr).read()
pat = re.compile(r'^extern "C" (.+?)\b(func_[0-9a-f]{8})\(%s \*self(?:, )?([^)]*)\);[^\n]*\n' % cls, re.M)
done = []
for m in list(pat.finditer(t)):
    ret, name, args = m.group(1), m.group(2), m.group(3)
    if not re.search(r"^    void %s\(\);" % name, h, re.M):
        continue        # (not a member)
    args = args or ""
    t = t.replace(m.group(0), "")
    h = re.sub(r"^    void %s\(\);" % name, f"    {ret}{name}({args});", h, flags=re.M)
    t = t.replace(f"asm void {cls}::{name}()", f"asm {ret}{cls}::{name}({args})")
    t = re.sub(r"\b%s\(this(?:, )?" % name, name + "(", t)
    done.append(name)
# (in the other files, 'extern "C" RET func_X(TYPE obj, ARGS);' declarations of members
# go too, the member gets their signature if it has none yet, and 'func_X(&OBJ, ...)'
# becomes 'OBJ.func_X(...)')
others = []
for other in sys.argv[3:]:
    o = open(other).read()
    opat = re.compile(r'^extern "C" (.+?)\b(func_[0-9a-f]{8})\([^,)]*(?:, )?([^)]*)\);[^\n]*\n', re.M)
    changed = False
    for m in list(opat.finditer(o)):
        ret, name, args = m.group(1), m.group(2), m.group(3)
        if not re.search(r"^    \S.*\b%s\(" % name, h, re.M):
            continue
        o = o.replace(m.group(0), "")
        if re.search(r"^    void %s\(\);" % name, h, re.M):
            h = re.sub(r"^    void %s\(\);" % name, f"    {ret}{name}({args});", h, flags=re.M)
            t = t.replace(f"asm void {cls}::{name}()", f"asm {ret}{cls}::{name}({args})")
        o = re.sub(r"\b%s\(&(\w+)(?:, )?" % name, lambda mm: f"{mm.group(1)}.{name}(", o)
        others.append(name)
        changed = True
    if changed:
        inc = '#include "' + hdr[len("include/"):] + '"\n'
        if inc not in o:
            i = o.index("#include")
            j = o.index("\n", i) + 1
            o = o[:j] + inc + o[j:]
        open(other, "w", newline="\n").write(o)

open(path, "w", newline="\n").write(t)
open(hdr, "w", newline="\n").write(h)
print(f"{path}: {len(done)} members", " ".join(done))
if others:
    print("callers in other files:", " ".join(others))
