#!/usr/bin/env python3
"""Writes docs/ie3_mapping.md and .csv from the pairs of tools/refmap.py, and the safe renames.

usage: tools/refdoc.py MAP.json DOC.md OUT.csv RENAMES.txt

    DOC.md       the tables go between its "<!-- generated -->" markers; the text written by
                 hand around them stays
    OUT.csv      every pair: module, address, our name, the reference name and file, how it was
                 found, the votes, the confidence
    RENAMES.txt  "OLD NEW" lines for tools/rename.py --map: the symbols of this game that have
                 no name yet and whose pair is trusted

Confidence of a pair:
    high    same bytes, of 24 bytes or more or confirmed by a call site; or reached by two or
            more call sites that agree; and, for library code, in the order the reference has
    medium  same bytes but small and never called from a pair; or one call site
    low     out of order in its library, or the call sites disagree with the bytes

    python tools/refdoc.py build/ie3_map.json docs/ie3_mapping.md docs/ie3_mapping.csv build/ie3_renames.txt
    python tools/rename.py --map build/ie3_renames.txt
"""
import bisect, collections, csv, glob, json, os, re, subprocess, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
BEGIN, END = "<!-- generated: begin -->", "<!-- generated: end -->"
UNNAMED_T = re.compile(r"^(FUN_|sub_|func_|ov\d+_|_?[0-9A-Fa-f]{8}$|data_|unk_|_0[12]|DAT_|PTR_|LAB_|SDK_|_start_|__sinit_)")
PLAIN_FUNC = re.compile(r"^func_(?:ov\d{3}_)?[0-9a-f]{8}$")
PLAIN_DATA = re.compile(r"^data_(?:ov\d{3}_)?[0-9a-f]{8}$")

# what comes first in the tables: file loading, save, menus, text; then the rest of the game
AREAS = [
    ("File loading", r"CFileIO|Archive|PAC_|SFP|filesystem|FS_|CARD_|CAllocator|CNsbResourceMan"),
    ("Save", r"CCardCtrl|CRecordManager|Record|Save|save|Backup|CPhonePassword"),
    ("Menus and screens", r"CBgMenu|CBgAnime|CScreenManager|Graphics|Screen|CSprButton|CSprAnim|CommonScreen"),
    ("Text", r"CFontManager|Font|TextCanvas|CharCanvas|Ruby"),
    ("Scripts", r"CSceneScript"),
    ("Match", r"CLogicThink|Match|CUnitMan|CCalcMap|CDistanceMap|Shadow"),
    ("Sound and movies", r"AudioPlayer|DSE|MoviePlayer|Mobiclip"),
    ("3D engine", r"C3D|Vram|CModel|CMotion|CCameraCtrl|CTexture"),
    ("Game modes and system", r"SetNextMode|GameMode|CConfig|Random|CWireless|thread|Thread|Overlay"),
]


def demangle(name):
    """(scope parts, method) of an Itanium name as far as this needs it, or None"""
    m = re.match(r"_ZNK?(\d)", name)
    if m:
        s, parts = name[name.index("N") + 1:].lstrip("K"), []
        while s and s[0].isdigit():
            n = re.match(r"\d+", s).group(0)
            parts.append(s[len(n):len(n) + int(n)])
            s = s[len(n) + int(n):]
        if s[:2] in ("C1", "C2"):
            parts.append("Ctor")
        elif s[:2] in ("D0", "D1", "D2"):
            parts.append("Dtor")
        return parts
    m = re.match(r"_Z(\d+)", name)
    if m:
        n = m.group(1)
        return [name[2 + len(n):2 + len(n) + int(n)]]
    return None


def shown(name):
    d = demangle(name)
    return "::".join(d) if d else name


def c_name(name):
    """the name a free function of this game gets from a reference name: Class_Method"""
    d = demangle(name)
    if not d:
        return name if re.match(r"^[A-Za-z_]\w*$", name) else None
    if any(UNNAMED_T.match(p) for p in d):
        return None
    if len(d) > 1:
        d[-1] = d[-1][0].upper() + d[-1][1:]
    return "_".join(d)


def area(r):
    text = shown(r["theirs"]) + " " + r["obj"]
    if r["obj"].startswith("lib/"):
        return "Libraries"
    for name, pat in AREAS:
        if re.search(pat, text):
            return name
    return "Other game code"


def lis(seq):
    """the indices of a longest increasing subsequence of seq"""
    tails, idx, prev = [], [], [-1] * len(seq)
    for i, v in enumerate(seq):
        k = bisect.bisect_left(tails, v)
        if k == len(tails):
            tails.append(v)
            idx.append(i)
        else:
            tails[k] = v
            idx[k] = i
        prev[i] = idx[k - 1] if k else -1
    out, i = set(), idx[-1] if idx else -1
    while i >= 0:
        out.add(i)
        i = prev[i]
    return out


def source_files():
    """module -> sorted [(start, end, file)] from the delinks"""
    out = collections.defaultdict(list)
    cfg = f"{ROOT}/config/yeep/arm9"
    for p in glob.glob(f"{cfg}/**/delinks.txt", recursive=True):
        rel = os.path.relpath(os.path.dirname(p), cfg)
        mod = "main" if rel == "." else os.path.basename(rel)
        cur = None
        for line in open(p):
            m = re.match(r"^(\S+):\s*$", line)
            if m:
                cur = m.group(1)
            m = re.match(r"\s+\.text\s+start:(0x[0-9a-f]+) end:(0x[0-9a-f]+)", line)
            if m and cur:
                out[mod].append((int(m.group(1), 16), int(m.group(2), 16), cur))
    for v in out.values():
        v.sort()
    return out


def file_of(files, mod, addr):
    for a, b, f in files.get(mod, []):
        if a <= addr < b:
            return f
    return ""


def tokens():
    """every identifier of the sources, the headers and the symbol lists"""
    files = subprocess.run(["git", "ls-files", "src", "include", "config"], cwd=ROOT, capture_output=True, text=True).stdout.split("\n")
    out = set()
    for f in files:
        if f.endswith((".c", ".cpp", ".h", ".hpp", ".txt")):
            try:
                out.update(re.findall(r"[A-Za-z_]\w*", open(os.path.join(ROOT, f), encoding="utf-8", errors="replace").read()))
            except FileNotFoundError:
                pass
    return out


def main():
    mapp, docp, csvp, renp = sys.argv[1:5]
    R = json.load(open(mapp))
    files = source_files()

    # library pairs must come in the order the reference has them
    groups = collections.defaultdict(list)
    for r in R:
        if r["obj"].startswith("lib/") and r["how"] != "calls":
            groups[(r["obj"], r["sec"], r["module"])].append(r)
    for g in groups.values():
        g.sort(key=lambda r: r["off"])
        keep = lis([r["addr"] for r in g])
        for i, r in enumerate(g):
            if i not in keep:
                r["order"] = False
    for r in R:
        if r["votes"] < 0 or r.get("order") is False:
            c = "low"
        elif r["how"] in ("bytes", "bytes+calls"):
            c = "high" if r["size"] >= 24 or r["votes"] >= 1 else "medium"
        else:
            c = "high" if r["votes"] >= 2 else "medium"
        r["conf"] = c
        r["area"] = area(r)
        r["file"] = file_of(files, r["module"], r["addr"])

    # the renames: symbols of this game without a name, pairs that are trusted, names not in use
    used = tokens()
    wanted = collections.defaultdict(list)
    for r in R:
        if r["conf"] == "low" or not r["ours"]:
            continue
        t = r["theirs"]
        if r["ref"] == "function" and PLAIN_FUNC.match(r["ours"]):
            if r["obj"].startswith("lib/"):
                new = t if not UNNAMED_T.match(t) and re.match(r"^[A-Za-z_]\w*$", t) else None
            else:
                new = c_name(t) if not UNNAMED_T.match(t) else None
        elif r["ref"] == "data" and PLAIN_DATA.match(r["ours"]) and r["votes"] >= 2 and r["conf"] == "high":
            new = t if not UNNAMED_T.match(t) and re.match(r"^[A-Za-z_]\w*$", t) else None
        else:
            new = None
        if new and len(new) > 2:
            wanted[new].append(r)
    renames, skipped = [], collections.Counter()
    targets = collections.Counter(r["ours"] for rs in wanted.values() for r in rs)
    for new, rs in sorted(wanted.items()):
        rs.sort(key=lambda r: (r["module"], r["addr"]))
        for i, r in enumerate(rs):
            # (overloads and static functions of the same name: the later ones get a number)
            name = new if i == 0 else f"{new}_{i + 1}"
            if name in used:
                skipped["the name is in use already"] += 1
                r["note"] = f"not renamed: {name} is in use already"
            elif targets[r["ours"]] > 1:
                skipped["two reference names for one symbol"] += 1
                r["note"] = "not renamed: two reference names reach this symbol"
            else:
                renames.append((r["ours"], name))
                r["new"] = name
    with open(renp, "w", newline="\n") as f:
        for old, new in renames:
            f.write(f"{old} {new}\n")

    with open(csvp, "w", newline="", encoding="utf-8") as f:
        w = csv.writer(f, lineterminator="\n")
        w.writerow(["module", "address", "our_name", "our_file", "ie3_name", "ie3_file", "kind", "found_by", "votes", "confidence", "area", "note"])
        for r in R:
            w.writerow([r["module"], "0x%08x" % r["addr"], r["ours"], r["file"], shown(r["theirs"]), r["obj"].replace(".o", ".s"),
                        r["ref"], r["how"], r["votes"], r["conf"], r["area"], r.get("note", "")])

    L = []
    funcs = [r for r in R if r["ref"] == "function"]
    data = [r for r in R if r["ref"] == "data"]
    L.append(f"{len(R):,} symbols of this game are paired with Inazuma Eleven 3: {len(funcs):,} functions and {len(data):,} data symbols.")
    L.append("")
    L.append("| Found by | Pairs | High | Medium | Low |")
    L.append("|---|---:|---:|---:|---:|")
    for how, label in (("bytes", "same bytes, one place"), ("bytes+calls", "same bytes in several places, settled by the calls"),
                       ("calls+size", "call sites, same size"), ("calls", "call sites and pointers, other size (or data)")):
        rs = [r for r in R if r["how"] == how]
        L.append(f"| {label} | {len(rs):,} | " + " | ".join(f"{sum(1 for r in rs if r['conf'] == c):,}" for c in ("high", "medium", "low")) + " |")
    L.append("")
    L.append("| Part of Inazuma Eleven 3 | Functions paired | Named there | Unnamed here until now |")
    L.append("|---|---:|---:|---:|")
    part = collections.defaultdict(list)
    for r in funcs:
        o = r["obj"]
        part["/".join(o.split("/")[:2]) if o.startswith("lib/") else "game code still in assembly (asm/)" if o else "game code decompiled to C++ (src/)"].append(r)
    for k in sorted(part, key=lambda k: (k.startswith("lib/"), k)):
        rs = part[k]
        named = [r for r in rs if not UNNAMED_T.match(r["theirs"]) and not (demangle(r["theirs"]) and any(UNNAMED_T.match(p) for p in demangle(r["theirs"])))]
        L.append(f"| {k} | {len(rs):,} | {len(named):,} | {sum(1 for r in named if 'new' in r or 'func_' in r['ours']):,} |")
    L.append("")
    L.append(f"`{os.path.basename(renp)}` holds {len(renames):,} renames of symbols that had no name ({', '.join(f'{v:,} left out: {k}' for k, v in skipped.items()) or 'none left out'}).")
    L.append("")

    L.append("### Game functions Inazuma Eleven 3 has a name for")
    L.append("")
    L.append("Sorted by what helps first. \"Ours\" is the name in this repository now.")
    L.append("")
    named = [r for r in funcs if not r["obj"].startswith("lib/") and c_name(r["theirs"]) and not UNNAMED_T.match(r["theirs"])]
    order = [a for a, _ in AREAS] + ["Other game code"]
    for a in order:
        rs = sorted((r for r in named if r["area"] == a), key=lambda r: (shown(r["theirs"]), r["addr"]))
        if not rs:
            continue
        L.append(f"#### {a}")
        L.append("")
        L.append("| Address | Ours | Inazuma Eleven 3 | Found by | Confidence |")
        L.append("|---|---|---|---|---|")
        for r in rs:
            L.append(f"| {r['module']} 0x{r['addr']:08x} | `{r.get('new') or r['ours']}` | `{shown(r['theirs'])}` | {r['how']} ({abs(r['votes'])}) | {r['conf']} |")
        L.append("")

    L.append("### Game code by Inazuma Eleven 3 file")
    L.append("")
    L.append("Where the functions of each of their files are in this game: the file names say what the code is, also")
    L.append("where the functions themselves have no name yet.")
    L.append("")
    L.append("| Their file | Pairs | Here | Our files |")
    L.append("|---|---:|---|---|")
    byfile = collections.defaultdict(list)
    for r in funcs:
        if r["obj"] and not r["obj"].startswith("lib/"):
            byfile[r["obj"]].append(r)
    for o in sorted(byfile, key=lambda o: -len(byfile[o])):
        rs = byfile[o]
        mods = collections.Counter(r["module"] for r in rs)
        where = []
        for m, n in mods.most_common(3):
            ad = sorted(r["addr"] for r in rs if r["module"] == m)
            where.append(f"{m} 0x{ad[0]:08x}-0x{ad[-1]:08x} ({n})")
        fs = collections.Counter(r["file"] for r in rs if r["file"])
        L.append(f"| `{o.replace('.o', '.s')}` | {len(rs)} | {'; '.join(where)} | {', '.join(f'`{f}` ({n})' for f, n in fs.most_common(3))} |")
    L.append("")

    L.append("### Libraries")
    L.append("")
    L.append("| Library file | Pairs | Here | Renamed now |")
    L.append("|---|---:|---|---:|")
    bylib = collections.defaultdict(list)
    for r in funcs:
        if r["obj"].startswith("lib/"):
            bylib[r["obj"]].append(r)
    for o in sorted(bylib):
        rs = bylib[o]
        mods = collections.Counter(r["module"] for r in rs)
        where = []
        for m, n in mods.most_common(2):
            ad = sorted(r["addr"] for r in rs if r["module"] == m)
            where.append(f"{m} 0x{ad[0]:08x}-0x{ad[-1]:08x} ({n})")
        L.append(f"| `{o.replace('.o', '.s')}` | {len(rs)} | {'; '.join(where)} | {sum(1 for r in rs if 'new' in r)} |")
    L.append("")

    L.append("### Data")
    L.append("")
    nd = sorted((r for r in data if not UNNAMED_T.match(r["theirs"])), key=lambda r: -r["votes"])
    L.append(f"{len(nd):,} data symbols have a name there; the ones most code points to:")
    L.append("")
    L.append("| Address | Ours | Inazuma Eleven 3 | Call sites |")
    L.append("|---|---|---|---:|")
    for r in nd[:60]:
        L.append(f"| {r['module']} 0x{r['addr']:08x} | `{r.get('new') or r['ours'] or '(no symbol)'}` | `{r['theirs']}` | {r['votes']} |")
    L.append("")

    low = [r for r in R if r["conf"] == "low"]
    L.append("### Not trusted")
    L.append("")
    L.append(f"{len(low)} pairs are left out of the renames: {sum(1 for r in low if r['votes'] < 0)} whose call sites point somewhere else than the bytes,")
    L.append(f"{sum(1 for r in low if r.get('order') is False)} library functions out of the order their library has (the same code twice, usually).")
    L.append("They are in the CSV with confidence `low`.")
    text = "\n".join(L) + "\n"

    doc = open(docp, encoding="utf-8").read() if os.path.exists(docp) else f"# Inazuma Eleven 3 mapping\n\n{BEGIN}\n{END}\n"
    a, b = doc.index(BEGIN) + len(BEGIN), doc.index(END)
    open(docp, "w", newline="\n", encoding="utf-8").write(doc[:a] + "\n" + text + doc[b:])
    print(f"{len(R)} pairs, {len(renames)} renames, {sum(skipped.values())} left out")


if __name__ == "__main__":
    main()
