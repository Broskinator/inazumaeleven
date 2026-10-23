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
open(path, "w", newline="\n").write(t)
open(hdr, "w", newline="\n").write(h)
print(f"{path}: {len(done)} members", " ".join(done))
