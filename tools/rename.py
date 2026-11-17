#!/usr/bin/env python3
"""Renames classes/structs/functions and moves their files, everywhere at once.

usage: tools/rename.py [--dry] [--also DIR] [--map FILE] OLD=NEW ... [old/path=new/path ...]

    OLD=NEW                 an identifier: a class, struct, function or variable. Its mangled
                            uses change with it (17UnkClass_020621b4 -> 11MatchEngine inside
                            _ZN... names), in the sources, the headers, symbols.txt and the docs.
    game/Old=match/New      a source file and its header, by their path without the extension,
                            relative to src/ and include/: both are moved (git mv), and the
                            #include lines, the include guard and delinks.txt follow.
    --map FILE              a file of "OLD NEW" lines, as tools/refdoc.py writes them: the same
                            as giving each line as OLD=NEW (thousands at once are fine)

Names don't change the code, so the ROM must build the same afterwards: run make.
--also DIR: other folders of text files to rename in as well (scratch files of work in progress).
"""
import os, re, subprocess, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
TOKEN = re.compile(r"[A-Za-z_]\w*")


def guard(path):
    return re.sub(r"[^A-Za-z0-9]", "_", path).upper() + "_HPP"


def remangle(tok, table):
    """a mangled name (_Z...) with the names of table replaced: its <length><name> parts are read
    one after the other, so that a class whose name ends in a digit doesn't hide the next part"""
    out, i, n = [], 0, len(tok)
    while i < n:
        if tok[i].isdigit():
            j = i
            while j < n and tok[j].isdigit():
                j += 1
            k = int(tok[i:j])
            name = tok[j:j + k]
            if k and len(name) == k and TOKEN.fullmatch(name):
                new = table.get(name, name)
                out.append(f"{len(new)}{new}")
                i = j + k
                continue
            out.append(tok[i:j])
            i = j
        else:
            out.append(tok[i])
            i += 1
    return "".join(out)


def main():
    args = sys.argv[1:]
    dry = "--dry" in args
    also = [args[i + 1] for i, a in enumerate(args) if a == "--also"]
    pairs = [a.split("=", 1) for i, a in enumerate(args) if "=" in a and (i == 0 or args[i - 1] not in ("--also", "--map"))]
    table = {a: b for a, b in pairs if "/" not in a}
    for i, a in enumerate(args):
        if a == "--map":
            for line in open(args[i + 1]):
                if len(line.split()) == 2:
                    table[line.split()[0]] = line.split()[1]
    paths = [(a, b) for a, b in pairs if "/" in a]
    for new in table.values():
        if not TOKEN.fullmatch(new):
            sys.exit(f"{new}: not an identifier")
    subs = []
    # (paths first: a file named after its class would otherwise be renamed in place, in its old folder)
    for old, new in paths:
        subs.append((re.compile(r"\b%s\b" % re.escape(guard(old))), guard(new)))
        subs.append((re.compile(r"(?<![\w/])%s(?=\.(?:hpp|h|cpp|c)\b)" % re.escape(old)), new))
        subs.append((re.compile(r"(?<=src/|ude/)%s(?=\.(?:hpp|h|cpp|c)\b)" % re.escape(old)), new))

    def token(m):
        t = m.group(0)
        if t in table:
            return table[t]
        return remangle(t, table) if t.startswith("_Z") else t

    files = subprocess.run(["git", "ls-files", "src", "include", "config", "docs", "README.md", "CLAUDE.md"], cwd=ROOT,
                           capture_output=True, text=True).stdout.split("\n")
    files = [os.path.join(ROOT, f) for f in files if f and f.endswith((".c", ".cpp", ".h", ".hpp", ".txt", ".md", ".s", ".inc", ".csv"))]
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
            n = TOKEN.sub(token, n)
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
