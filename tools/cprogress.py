#!/usr/bin/env python3
"""Writes docs/progress.md: how much of the code is C/C++ and how much is still assembly.

A function counts as C/C++ when its source file defines it without the `asm` keyword. The sizes
are the functions' sizes in the ROM (config/yeep/arm9/**/symbols.txt), so the percentages are
by bytes of code, not by number of functions. Nothing is compiled: it only reads the sources
and the configuration, and runs in a second or two.

    python tools/cprogress.py            write docs/progress.md and print the totals
    python tools/cprogress.py --check    print the totals only
"""
import bisect, glob, os, re, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
CFG = os.path.join(ROOT, "config", "yeep", "arm9")
SYM = re.compile(r"^(\S+) kind:function\((\w+),size=(0x[0-9a-f]+)\) addr:(0x[0-9a-f]+)")
RANGE = re.compile(r"^\s+\.(?:text|init)\s+start:(0x[0-9a-f]+) end:(0x[0-9a-f]+)\s*$")
ASMDEF = re.compile(r'^(?:extern "C" )?(?:static )?(?:inline )?asm\s+[^;{(]*?([A-Za-z_]\w*(?:::~?\w+)?)\s*\(', re.M)


def modules():
    """(name, folder) of the main program, the ITCM and each overlay"""
    out = [("main", CFG), ("itcm", os.path.join(CFG, "itcm"))]
    for d in sorted(glob.glob(os.path.join(CFG, "overlays", "ov*"))):
        out.append((os.path.basename(d), d))
    return out


def functions(folder):
    out = []
    path = os.path.join(folder, "symbols.txt")
    if os.path.exists(path):
        for line in open(path):
            m = SYM.match(line)
            if m:
                out.append((m[1], int(m[4], 16), int(m[3], 16)))
    return out


def files(folder):
    """[(start, end, source path)] of the code ranges given to source files, sorted"""
    out = []
    path = os.path.join(folder, "delinks.txt")
    cur = None
    if os.path.exists(path):
        for line in open(path):
            if line and not line[0].isspace() and line.rstrip().endswith(":"):
                cur = line.rstrip()[:-1]
            elif cur:
                m = RANGE.match(line)
                if m:
                    out.append((int(m[1], 16), int(m[2], 16), cur))
    return sorted(out)


ASM_CACHE = {}


def asm_names(src):
    """the names a source file defines with `asm`: plain names, and (class, method) pairs"""
    if src not in ASM_CACHE:
        plain, members = set(), []
        path = os.path.join(ROOT, src)
        if os.path.exists(path):
            for m in ASMDEF.finditer(open(path, encoding="utf-8", errors="replace").read()):
                if "::" in m[1]:
                    members.append(tuple(m[1].split("::")))
                else:
                    plain.add(m[1])
        ASM_CACHE[src] = (plain, members)
    return ASM_CACHE[src]


def is_asm(name, src):
    plain, members = asm_names(src)
    if name in plain:
        return True
    for cls, meth in members:
        if meth.startswith("~"):
            key = f"{len(cls)}{cls}D"
        elif meth == cls:
            key = f"{len(cls)}{cls}C"
        else:
            key = f"{len(cls)}{cls}{len(meth)}{meth}"
        if key in name:
            return True
    return False


# Overlays that are Nintendo libraries, not game code: found by pairing their functions with the
# libraries of Inazuma Eleven 3 (docs/ie3_mapping.md)
LIB_OVERLAYS = {"ov014": "Wi-Fi (DWC, TwlWiFi)", "ov016": "Wi-Fi connection settings (DWC utility)",
                "ov089": "download play (the MB library of the SDK)"}
LIB_OV_AREA = "Libraries in overlays (Wi-Fi, download play)"
LOG_MARK = "## Log"


def area(module, src):
    if src is None:
        return "Not in a source file yet"
    if module in LIB_OVERLAYS:
        return LIB_OV_AREA
    if src.replace("\\", "/").startswith("src/libs/"):
        return "Libraries (SDK, runtime)"
    return "Game, overlays" if module.startswith("ov") else "Game, main program"


MATCH_OVERLAYS = {"ov087": "ov087 (match logic)", "ov001": "ov001 (match scene)"}


def match_key(module, src):
    """the row of the match engine table a function belongs to, or None"""
    src = src.replace("\\", "/")
    if src.startswith("src/match/"):
        return src
    return MATCH_OVERLAYS.get(module)


class Count:
    def __init__(self):
        self.bytes = self.cbytes = self.funcs = self.cfuncs = 0

    def add(self, size, in_c):
        self.bytes += size
        self.funcs += 1
        if in_c:
            self.cbytes += size
            self.cfuncs += 1

    def row(self, label):
        pb = 100 * self.cbytes / self.bytes if self.bytes else 0
        pf = 100 * self.cfuncs / self.funcs if self.funcs else 0
        return (f"| {label} | {self.bytes:,} | {self.cbytes:,} | {pb:.2f}% | "
                f"{self.funcs:,} | {self.cfuncs:,} | {pf:.2f}% | {self.funcs - self.cfuncs:,} |")


def main():
    areas, mods, total = {}, {}, Count()
    game = Count()
    match_files, match_all = {}, Count()
    for mod, folder in modules():
        ranges = files(folder)
        starts = [r[0] for r in ranges]
        for name, addr, size in functions(folder):
            k = bisect.bisect_right(starts, addr) - 1
            src = ranges[k][2] if k >= 0 and addr < ranges[k][1] else None
            in_c = src is not None and not is_asm(name, src)
            a = area(mod, src)
            areas.setdefault(a, Count()).add(size, in_c)
            total.add(size, in_c)
            if a.startswith("Game"):
                game.add(size, in_c)
                mods.setdefault(mod, Count()).add(size, in_c)
                key = match_key(mod, src)
                if key:
                    match_files.setdefault(key, Count()).add(size, in_c)
                    match_all.add(size, in_c)
    head = ("| Area | Code bytes | In C/C++ | % of bytes | Functions | In C/C++ | % of functions | Still asm |\n"
            "|---|---:|---:|---:|---:|---:|---:|---:|")
    lines = ["# Progress", "",
             "How much of the game's code is C/C++ and how much is still assembly. A function counts as",
             "C/C++ when its source defines it without the `asm` keyword; the sizes are the functions'",
             "sizes in the ROM, so the percentages are by bytes of code. The ROM built from this",
             "repository matches the original either way.", "",
             "This file is written by `python tools/cprogress.py`.", "",
             "## Totals", "", head]
    order = ["Game, main program", "Game, overlays", "Libraries (SDK, runtime)", LIB_OV_AREA, "Not in a source file yet"]
    lines.append(game.row("**Game code**"))
    for a in order:
        if a in areas:
            lines.append(areas[a].row(a))
    lines.append(total.row("**Everything**"))
    lines += ["", "The game code is the target of the decompilation. The libraries are Nintendo's SDK, NitroSystem",
              "and the Metrowerks runtime: much of them is assembly in the original as well. Overlays 14, 16 and",
              "89 are libraries too (the Wi-Fi libraries and their connection settings, download play): they",
              "were counted as game code until 2026-11-17, when [ie3_mapping.md](ie3_mapping.md) showed what they are.", "",
              "## Match engine", "",
              "The football match itself: the engine in `src/match/` (the match object, the ball's physics, the",
              "rules, the players' lists, field geometry), the match logic overlay (ov087) and the match scene",
              "overlay (ov001). See [match_engine.md](match_engine.md) for what each part is.", "",
              head.replace("Area", "Part")]
    lines.append(match_all.row("**Match engine, all**"))
    for key in sorted(match_files, key=lambda k: (not k.startswith("src/match/"), k)):
        lines.append(match_files[key].row(f"`{key}`" if "/" in key else key))
    lines += ["", "## Game code by module", "", head.replace("Area", "Module")]
    for mod in sorted(mods, key=lambda m: (m != "main", m)):
        lines.append(mods[mod].row("main program" if mod == "main" else mod))
    text = "\n".join(lines) + "\n"
    # (the log at the end of the file is written by hand, one entry per session: it is kept)
    path = os.path.join(ROOT, "docs", "progress.md")
    if os.path.exists(path):
        old = open(path, encoding="utf-8").read()
        if LOG_MARK in old:
            text += "\n" + old[old.index(LOG_MARK):]
    if "--check" not in sys.argv:
        os.makedirs(os.path.join(ROOT, "docs"), exist_ok=True)
        open(path, "w", newline="\n", encoding="utf-8").write(text)
    pct = 100 * game.cbytes / game.bytes if game.bytes else 0
    print(f"Game code in C/C++: {game.cbytes:,} / {game.bytes:,} bytes ({pct:.2f}%), "
          f"{game.cfuncs:,} / {game.funcs:,} functions; {game.funcs - game.cfuncs:,} still asm")
    pct = 100 * total.cbytes / total.bytes if total.bytes else 0
    pct = 100 * match_all.cbytes / match_all.bytes if match_all.bytes else 0
    print(f"Match engine:       {match_all.cbytes:,} / {match_all.bytes:,} bytes ({pct:.2f}%), "
          f"{match_all.cfuncs:,} / {match_all.funcs:,} functions; {match_all.funcs - match_all.cfuncs:,} still asm")
    pct = 100 * total.cbytes / total.bytes if total.bytes else 0
    print(f"Everything:         {total.cbytes:,} / {total.bytes:,} bytes ({pct:.2f}%), "
          f"{total.cfuncs:,} / {total.funcs:,} functions")


if __name__ == "__main__":
    main()
