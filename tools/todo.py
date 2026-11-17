#!/usr/bin/env python3
"""Lists the functions that are not C/C++ yet, the easiest first.

usage: tools/todo.py [-n N] [--file PATH] [--module NAME] [--all] [--sort score|size|calls|addr] [--csv]

A function is listed when its source still defines it with `asm`, or when it is in no source
file at all (those are the ones the objdiff report of `make progress` counts as not matched: an
asm fallback assembles to the original bytes, so objdiff sees it as done). For each one:

    score    size + 24 * calls: what the list is sorted by, small functions that call nothing first
    size     its size in the ROM, in bytes
    calls    how many calls it makes (bl/blx in its code, counted in the ROM)
    where    the module and the address
    file     its source file, or "-" when it is in none
    name     its symbol
    IE3      its counterpart in Inazuma Eleven 3, when docs/ie3_mapping.csv has one; "C++" means
             that project has it decompiled, which helps to understand it (never copy from it)

Library code (src/libs/ and the library overlays 14, 16 and 89) is left out unless --all is given.

    python tools/todo.py                      the 50 easiest (what `make todo` prints)
    python tools/todo.py --file src/match     the match engine only (a path prefix)
    python tools/todo.py --module ov087 -n 0  a whole module (-n 0: no limit)
    make todo ARGS="--file src/match -n 100"
"""
import bisect, csv, os, re, sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import cprogress

ROOT = cprogress.ROOT


def blobs():
    """module -> (base address, bytes), from the extracted ROM"""
    import yaml
    ex = os.path.join(ROOT, "extract", "yeep")
    out = {"main": (0x02000000, open(f"{ex}/arm9/arm9.bin", "rb").read())}
    for nm in ("itcm", "dtcm"):
        meta = yaml.safe_load(open(f"{ex}/arm9/{nm}.yaml"))
        out[nm] = (meta["base_address"], open(f"{ex}/arm9/{nm}.bin", "rb").read())
    for o in yaml.safe_load(open(f"{ex}/arm9_overlays/overlays.yaml"))["overlays"]:
        out["ov%03d" % o["id"]] = (o["base_address"], open(f"{ex}/arm9_overlays/{o['file_name']}", "rb").read())
    return out


def calls(blob, base, addr, size, thumb):
    """the number of calls in the code of a function"""
    code = blob[addr - base:addr - base + size]
    n = 0
    if thumb:
        for i in range(0, len(code) - 3, 2):
            a, b = int.from_bytes(code[i:i + 2], "little"), int.from_bytes(code[i + 2:i + 4], "little")
            if (a & 0xF800) == 0xF000 and (b & 0xE800) == 0xE800:
                n += 1
        return n
    for i in range(0, len(code) - 3, 4):
        w = int.from_bytes(code[i:i + 4], "little")
        if (w & 0x0F000000) == 0x0B000000 or (w >> 25) == 0x7D or (w & 0x0FFFFFF0) == 0x012FFF30:
            n += 1
    return n


def reference():
    """(module, address) -> what docs/ie3_mapping.csv says the function is in Inazuma Eleven 3"""
    out = {}
    path = os.path.join(ROOT, "docs", "ie3_mapping.csv")
    if os.path.exists(path):
        for r in csv.DictReader(open(path, encoding="utf-8")):
            if r["kind"] == "function" and r["confidence"] != "low":
                where = "C++" if not r["ie3_file"] else os.path.basename(r["ie3_file"])
                out[(r["module"], int(r["address"], 16))] = f"{r['ie3_name']} ({where})"
    return out


def main():
    args = sys.argv[1:]

    def opt(name, default=None):
        return args[args.index(name) + 1] if name in args else default

    limit = int(opt("-n", "50"))
    only_file, only_mod, order = opt("--file"), opt("--module"), opt("--sort", "score")
    everything = "--all" in args
    data, ref = blobs(), reference()
    rows = []
    for mod, folder in cprogress.modules():
        if only_mod and mod != only_mod:
            continue
        ranges = cprogress.files(folder)
        starts = [r[0] for r in ranges]
        kinds = {}
        for line in open(os.path.join(folder, "symbols.txt")) if os.path.exists(os.path.join(folder, "symbols.txt")) else []:
            m = cprogress.SYM.match(line)
            if m:
                kinds[int(m[4], 16)] = m[2]
        for name, addr, size in cprogress.functions(folder):
            k = bisect.bisect_right(starts, addr) - 1
            src = ranges[k][2] if k >= 0 and addr < ranges[k][1] else None
            if src is not None and not cprogress.is_asm(name, src):
                continue
            if not everything and not cprogress.area(mod, src).startswith(("Game", "Not in")):
                continue
            if only_file and not (src or "").replace("\\", "/").startswith(only_file):
                continue
            base, blob = data[mod]
            n = calls(blob, base, addr, size, kinds.get(addr) == "thumb")
            rows.append((size + 24 * n, size, n, mod, addr, src or "-", name, ref.get((mod, addr), "")))
    key = {"score": lambda r: (r[0], r[4]), "size": lambda r: (r[1], r[4]), "calls": lambda r: (r[2], r[1]),
           "addr": lambda r: (r[3] != "main", r[3], r[4])}[order]
    rows.sort(key=key)
    total = len(rows)
    shown = rows[:limit] if limit else rows
    if "--csv" in args:
        w = csv.writer(sys.stdout, lineterminator="\n")
        w.writerow(["score", "size", "calls", "module", "address", "file", "name", "ie3"])
        for r in shown:
            w.writerow([r[0], r[1], r[2], r[3], "0x%08x" % r[4], r[5], r[6], r[7]])
        return
    print(f"{'score':>6} {'size':>6} {'calls':>5}  {'where':<16} {'file':<36} name")
    for score, size, n, mod, addr, src, name, their in shown:
        line = f"{score:>6} {size:>6} {n:>5}  {mod:<5} {addr:08x}   {src:<36} {name}"
        print(line + (f"   [IE3: {their}]" if their else ""))
    leaf = sum(1 for r in rows if r[2] == 0)
    print(f"{total:,} functions to do ({sum(r[1] for r in rows):,} bytes), {leaf:,} of them call nothing; {len(shown):,} shown")


if __name__ == "__main__":
    main()
