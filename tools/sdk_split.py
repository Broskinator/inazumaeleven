#!/usr/bin/env python3
"""Names the library functions found by sigmatch.py and splits the code into files.

usage: sdk_split.py MATCHES.json CONFIG_DIR [--dry]

For every function of NitroSDK, NitroSystem and the Metrowerks libraries (MSL C/C++,
runtime) found in the game, the function is renamed in symbols.txt, and each run of
functions from one source file becomes a file in delinks.txt (code only; its data
stays in the gaps for now). A file starts at its first function found and keeps the
functions that follow until the next file starts - an approximation, refined as the
code is decompiled.
"""
import json, re, sys, os, collections

MIN_SIZE = 24          # smaller functions match in too many places to be trusted
FAR = 0x1000           # farther than this from other library code: not the same library block


def file_path(ref, obj):
    base = os.path.basename(obj)
    if ref == "NitroSDK" or ref == "NitroSystem":
        # libraries/os/libos.a.p/src_os_thread.c.o -> libs/NitroSDK/os/os_thread.c
        parts = obj.split("/")
        lib = parts[1] if parts[0] == "libraries" else parts[0]
        name = re.sub(r"^src_", "", base[:-2] if base.endswith(".o") else base)
        return f"libs/{ref}/{lib}/{name}"
    # msl_<ver>/<library>/<file>.o
    lib = obj.split("/")[0]
    group = "MSL_CPP" if "CPP" in lib else "MSL_C" if "MSL_C" in lib else "MSL_Extras" if "Extras" in lib else "Runtime"
    return f"libs/{group}/{base[:-2]}.c"


def module_dirs(cfg):
    d = {"main": cfg, "itcm": f"{cfg}/itcm", "dtcm": f"{cfg}/dtcm"}
    for o in sorted(os.listdir(f"{cfg}/overlays")):
        d[o] = f"{cfg}/overlays/{o}"
    return d


def read_symbols(path):
    funcs = {}
    for line in open(path):
        m = re.match(r"(\S+) kind:function\((\w+),size=(0x[0-9a-f]+)[^)]*\) addr:(0x[0-9a-f]+)", line)
        if m:
            funcs[int(m.group(4), 16)] = (m.group(1), int(m.group(3), 16), m.group(2))
    return funcs


def main():
    matches, cfg = sys.argv[1], sys.argv[2]
    dry = "--dry" in sys.argv
    R = json.load(open(matches))
    dirs = module_dirs(cfg)
    syms = {m: read_symbols(f"{d}/symbols.txt") for m, d in dirs.items()}

    # candidates: one place in the game, big enough, at a function start
    cand = collections.defaultdict(list)
    for r in R:
        if len(r["hits"]) != 1 or r["size"] < MIN_SIZE:
            continue
        mod, addr = r["hits"][0]
        if mod not in syms or addr not in syms[mod]:
            continue
        cand[(mod, addr)].append((file_path(r["ref"], r["obj"]), r["name"], r["size"]))

    per_mod = collections.defaultdict(list)
    for (mod, addr), opts in cand.items():
        per_mod[mod].append((addr, opts))
    chosen = {}
    for mod, lst in per_mod.items():
        lst.sort()
        for i, (addr, opts) in enumerate(lst):
            files = {o[0] for o in opts}
            if len(files) > 1:   # same code in several files: let the neighbours decide
                near = collections.Counter(o[0] for _, oo in lst[max(0, i - 3):i + 4] for o in oo if len(oo) == 1)
                best = max(files, key=lambda f: near[f])
                if near[best] == 0:
                    continue
                opts = [o for o in opts if o[0] == best]
            chosen[(mod, addr)] = opts[0]

    # outliers: a lone function of a file between two functions of another file
    for mod in per_mod:
        seq = sorted((a, chosen[(m, a)]) for (m, a) in chosen if m == mod)
        for i in range(1, len(seq) - 1):
            if seq[i - 1][1][0] == seq[i + 1][1][0] != seq[i][1][0]:
                chosen.pop((mod, seq[i][0]), None)

    # names: only names that are unique
    count = collections.Counter(v[1] for v in chosen.values())
    renamed = 0
    for mod, d in dirs.items():
        p = f"{d}/symbols.txt"
        lines = open(p).read().split("\n")
        out = []
        for line in lines:
            m = re.match(r"(\S+)( kind:function.* addr:(0x[0-9a-f]+).*)", line)
            if m:
                k = (mod, int(m.group(3), 16))
                if k in chosen and count[chosen[k][1]] == 1 and m.group(1).startswith("func_"):
                    line = chosen[k][1] + m.group(2)
                    renamed += 1
            out.append(line)
        if not dry:
            open(p, "w").write("\n".join(out))

    # file names must be unique (by name, over all modules): the same object can have code in
    # two modules (e.g. ITCM), and two libraries can have a file of the same name
    seen = {}
    for (mod, addr), v in sorted(chosen.items(), key=lambda kv: (kv[0][0] != "main", kv[0])):
        f = v[0]
        base = os.path.basename(f)
        if base in seen and seen[base] != (f, mod):
            stem, ext = os.path.splitext(f)
            f2 = f"{stem}_{mod}{ext}" if seen[base][0] == f else f"{os.path.dirname(f)}/{f.split('/')[-2]}_{base}"
            chosen[(mod, addr)] = (f2,) + v[1:]
        else:
            seen[base] = (f, mod)

    # files: runs of functions of one source file
    files_total = 0
    for mod, d in dirs.items():
        seq = sorted((a, v[0]) for (m, a), v in chosen.items() if m == mod)
        if not seq:
            continue
        fn = sorted(syms[mod])
        p = f"{d}/delinks.txt"
        text = open(p).read()
        head, _, rest = text.partition("\n\n")
        mtext = re.search(r"\.text\s+start:(0x[0-9a-f]+) end:(0x[0-9a-f]+)", head)
        tstart, tend = int(mtext.group(1), 16), int(mtext.group(2), 16)
        # runs; a file seen in two separate runs keeps its longest one
        runs = []
        for a, f in seq:
            if runs and runs[-1][0] == f and a - runs[-1][2] <= FAR:
                runs[-1][2] = a
                runs[-1][3] += 1
            else:
                runs.append([f, a, a, 1])
        best = {}
        for i, r in enumerate(runs):
            if r[0] not in best or r[3] > runs[best[r[0]]][3]:
                best[r[0]] = i
        runs = [r for i, r in enumerate(runs) if best[r[0]] == i]
        # a lone function far from any other library function is a chance match
        def gap(i, j):
            return abs(runs[j][1] - runs[i][2]) if 0 <= j < len(runs) else 1 << 30
        runs = [r for i, r in enumerate(runs)
                if not (r[3] == 1 and min(abs(r[1] - runs[i - 1][2]) if i else 1 << 30,
                                          abs(runs[i + 1][1] - r[2]) if i + 1 < len(runs) else 1 << 30) > FAR)]
        entries = []
        for i, (f, first, last, n) in enumerate(runs):
            start = first
            nxt = runs[i + 1][1] if i + 1 < len(runs) else None
            name_, size, _ = syms[mod][last]
            end = last + size
            # the functions between this file's last one found and the next file belong to it,
            # unless the next file is far away (then the code in between is something else)
            if nxt is not None and nxt - end <= FAR:
                end = nxt
            end = min(end, tend)
            if start >= end or start < tstart:
                continue
            entries.append((f, start, end))
        # existing user files (not generated by this tool) are kept
        blocks = [b for b in rest.split("\n\n") if b.strip() and not b.startswith("libs/")]
        gen = "\n\n".join(f"{f}:\n    .text start:0x{s:08x} end:0x{e:08x}" for f, s, e in entries)
        new = head + "\n\n" + "\n\n".join(([gen] if gen else []) + blocks) + "\n"
        files_total += len(entries)
        if entries and not dry:
            open(p, "w").write(new)
    print(f"{len(chosen)} functions identified, {renamed} renamed, {files_total} library files")


main()
