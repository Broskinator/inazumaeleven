#!/usr/bin/env python3
"""Renames classes/structs/functions and moves their files, everywhere at once.

usage: tools/rename.py [--dry] [--also DIR] [--map FILE] OLD=NEW ... [old/path=new/path ...]

    OLD=NEW                 an identifier: a class, struct, function or variable. Its mangled
                            uses change with it (17UnkClass_020621b4 -> 11MatchEngine inside
                            _ZN... names), in the sources, the headers, symbols.txt and the docs.
    game/Old=match/New      a source file and its header, by their path without the extension,
                            relative to src/ and include/: both are moved (git mv), and the
                            #include lines, the include guard and delinks.txt follow.

    --map FILE              a file of "OLD NEW" lines: thousands of plain symbols at once (functions
                            and data that are no class members: whole identifiers only, one pass
                            per file), as tools/refdoc.py writes them

Names don't change the code, so the ROM must build the same afterwards: run make.
--also DIR: other folders of text files to rename in as well (scratch files of work in progress).
"""
import os, re, subprocess, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))


def guard(path):
    return re.sub(r"[^A-Za-z0-9]", "_", path).upper() + "_HPP"


def main():
    args = sys.argv[1:]
    dry = "--dry" in args
    also = [args[i + 1] for i, a in enumerate(args) if a == "--also"]
    table = {}
    for i, a in enumerate(args):
        if a == "--map":
            for line in open(args[i + 1]):
                if len(line.split()) == 2:
                    table[line.split()[0]] = line.split()[1]
    token = re.compile(r"[A-Za-z_]\w*")
    pairs = [a.split("=", 1) for i, a in enumerate(args) if "=" in a and (i == 0 or args[i - 1] != "--also")]
    names = [(a, b) for a, b in pairs if "/" not in a]
    paths = [(a, b) for a, b in pairs if "/" in a]
    subs = []
    # (paths first: a file named after its class would otherwise be renamed in place, in its old folder)
    for old, new in paths:
        subs.append((re.compile(r"\b%s\b" % re.escape(guard(old))), guard(new)))
        subs.append((re.compile(r"(?<![\w/])%s(?=\.(?:hpp|h|cpp|c)\b)" % re.escape(old)), new))
        subs.append((re.compile(r"(?<=src/|ude/)%s(?=\.(?:hpp|h|cpp|c)\b)" % re.escape(old)), new))
    for old, new in names:
        if not re.match(r"^[A-Za-z_]\w*$", new):
            sys.exit(f"{new}: not an identifier")
        subs.append((re.compile(r"(?<![0-9])%d%s" % (len(old), re.escape(old))), f"{len(new)}{new}"))
        subs.append((re.compile(r"\b%s\b" % re.escape(old)), new))
    files = subprocess.run(["git", "ls-files", "src", "include", "config", "docs", "README.md"], cwd=ROOT,
                           capture_output=True, text=True).stdout.split("\n")
    files = [os.path.join(ROOT, f) for f in files if f and f.endswith((".c", ".cpp", ".h", ".hpp", ".txt", ".md", ".s", ".inc"))]
    for d in also:
        for r, _, fs in os.walk(d):
            files += [os.path.join(r, f) for f in fs if f.endswith((".c", ".cpp", ".txt", ".h", ".hpp"))]
    changed = 0
    for p in files:
        try:
            t = open(p, encoding="utf-8", newline="").read()
        except (UnicodeDecodeError, FileNotFoundError):
            continue
        n = t
        for pat, rep in subs:
            n = pat.sub(rep, n)
        if table:
            n = token.sub(lambda m: table.get(m.group(0), m.group(0)), n)
        if n != t:
            changed += 1
            if not dry:
                open(p, "w", encoding="utf-8", newline="").write(n)
    print(changed, "files changed")
    for old, new in paths:
        for base, exts in (("src", (".cpp", ".c")), ("include", (".hpp", ".h"))):
            for e in exts:
                a, b = f"{base}/{old}{e}", f"{base}/{new}{e}"
                if os.path.exists(os.path.join(ROOT, a)):
                    print("  ", a, "->", b)
                    if not dry:
                        os.makedirs(os.path.dirname(os.path.join(ROOT, b)), exist_ok=True)
                        subprocess.run(["git", "mv", a, b], cwd=ROOT, check=True)


if __name__ == "__main__":
    main()
