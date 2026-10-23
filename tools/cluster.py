#!/usr/bin/env python3
"""Guesses the extent of a class's code from its calls.

usage: tools/cluster.py START [LIMIT] [--from LO-HI ...]

--from LO-HI: the functions of the window called from code in [LO, HI) (the class's
users) are taken as starting points too. --map prints every function (- after the
ones not reached).

Starting from the function at START, collects the functions of the main module from
START up to LIMIT (default START + 0x8000) that are called by, or call, functions
already collected, and prints the first gap: the address of the first function after
START that is not reached. The functions of a file are usually contiguous, so the code
of the class most likely ends there.
"""
import re, sys

args = [a for a in sys.argv[1:] if a != "--map"]
users = []
while "--from" in args:
    i = args.index("--from")
    lo, hi = args[i + 1].split("-")
    users.append((int(lo, 16), int(hi, 16)))
    del args[i:i + 2]
start = int(args[0], 16)
limit = int(args[1], 16) if len(args) > 1 else start + 0x8000

funcs = []
for line in open("config/yeep/arm9/symbols.txt"):
    m = re.match(r"\S+ kind:function\(\w+,size=(0x[0-9a-f]+)\S*\) addr:(0x[0-9a-f]+)", line)
    if m:
        a = int(m.group(2), 16)
        if start <= a < limit:
            funcs.append((a, int(m.group(1), 16)))
funcs.sort()
owner = {}
for a, size in funcs:
    for x in range(a, a + size, 4):
        owner[x] = a

edges = {}
seeds = {start}
for line in open("config/yeep/arm9/relocs.txt"):
    m = re.match(r"from:(0x[0-9a-f]+) kind:\w+ to:(0x[0-9a-f]+) module:main", line)
    if m and users:
        f, t = int(m.group(1), 16), int(m.group(2), 16)
        if t in owner and owner[t] == t and any(lo <= f < hi for lo, hi in users):
            seeds.add(t)
    m = re.match(r"from:(0x[0-9a-f]+) kind:(\w+) to:(0x[0-9a-f]+) module:main", line)
    if not m:
        continue
    f, t = int(m.group(1), 16), int(m.group(3), 16)
    if f in owner and t in owner and owner[t] == t:
        edges.setdefault(owner[f], set()).add(t)
        edges.setdefault(t, set()).add(owner[f])

reached = set(seeds)
todo = list(seeds)
while todo:
    a = todo.pop()
    for b in edges.get(a, ()):
        if b not in reached:
            reached.add(b)
            todo.append(b)

addrs = [a for a, _ in funcs]
if "--map" in sys.argv:
    print(" ".join(f"{a:x}{'' if a in reached else '-'}" for a in addrs))
for a in addrs:
    if a not in reached:
        print(f"first function not reached: {a:#010x}")
        break
print(f"last function reached: {max(reached):#010x}")
print(f"{len(reached)} of {len(addrs)} functions in the window reached")
