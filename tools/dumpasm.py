"""dumpasm.py NAME...: prints the asm definitions of the named functions as they are in src/.

NAME is a function's name, with or without its class (func_02077e78, MatchEngine::func_02077e78).
The first asm definition found is printed, after a line with its source file.

Example: python tools/dumpasm.py MatchEngine::func_02077e78 func_020805a0
"""
import glob, os, re, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))


def main(names):
    texts = {}
    for f in sorted(glob.glob(os.path.join(ROOT, "src", "**", "*.c*"), recursive=True)):
        texts[os.path.relpath(f, ROOT)] = open(f, encoding="utf-8", errors="replace").read()
    missing = 0
    for name in names:
        fn = name.split("::")[-1]
        pat = re.compile(r'^(?:extern "C" )?asm [^\n(;]*?\b(?:\w+::)?%s\([^\n]*\)\n\{\n.*?\n\}\n' % re.escape(fn),
                         re.M | re.S)
        for f, t in texts.items():
            m = pat.search(t)
            if m:
                print("//", f)
                print(m.group(0))
                break
        else:
            print(f"// {name}: no asm definition in src/", file=sys.stderr)
            missing += 1
    return 1 if missing else 0


if __name__ == "__main__":
    if len(sys.argv) < 2:
        sys.exit(__doc__)
    sys.exit(main(sys.argv[1:]))
