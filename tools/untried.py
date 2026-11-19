"""untried.py [-n N] [--file PATH]: the functions of `todo.py` that have no C/C++ attempt yet.

todo.py lists what is still asm, easiest first; this leaves out the ones already under
'#ifdef NONMATCHING' (tried, kept as asm), so what remains has never been attempted.
--file limits it to sources under PATH (default src/match), -n to N lines (default 40).

Example: python tools/untried.py -n 30
"""
import os, re, subprocess, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))


def in_nonmatching(text, k):
    """whether offset k of text is in the #else of an '#ifdef NONMATCHING'"""
    before = text[:k]
    endif = before.rfind("#endif")
    return before.rfind("#else") > endif and before.rfind("#ifdef NONMATCHING") > endif


def main(argv):
    n, path = 40, "src/match"
    while argv:
        a = argv.pop(0)
        if a == "-n":
            n = int(argv.pop(0))
        elif a == "--file":
            path = argv.pop(0)
        else:
            sys.exit(__doc__)
    out = subprocess.run([sys.executable, os.path.join(ROOT, "tools", "todo.py"), "--file", path, "-n", "100000"],
                         capture_output=True, text=True, cwd=ROOT).stdout
    texts = {}
    shown = 0
    for line in out.splitlines():
        f = line.split()
        if len(f) < 7 or not f[0].isdigit():
            continue
        addr, src, mangled = f[4], f[5], f[6]
        if src not in texts:
            texts[src] = open(os.path.join(ROOT, src), encoding="utf-8", errors="replace").read()
        t = texts[src]
        m = re.search(r"func_(?:ov\d+_)?" + addr, mangled)
        name = m.group(0) if m else mangled
        d = re.search(r'^(?:extern "C" )?asm [^\n]*\b' + re.escape(name) + r"\(", t, re.M)
        if d is None or in_nonmatching(t, d.start()):
            continue
        print(line)
        shown += 1
        if shown >= n:
            break


if __name__ == "__main__":
    main(sys.argv[1:])
