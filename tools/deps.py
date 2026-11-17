#!/usr/bin/env python3
"""Writes the header dependencies of every source file, for the Makefile.

usage: tools/deps.py BUILD_DIR OUT.mk        (the Makefile runs it: build/yeep/deps.mk)
       tools/deps.py --check                 the includes that don't resolve, or differ in case
       tools/deps.py --users include/x.hpp   the sources that include a header, directly or not

For each src/**/*.c and *.cpp, the headers it includes are followed (the including file's
folder first, then include/, as the compiler does with -i include), and the object gets one
line in OUT.mk:

    build/yeep/src/text/TextFont.o: include/text/TextFont.hpp include/nitro/types.h ...

so that changing a header recompiles only the sources that use it. #if/#ifdef are not
evaluated: a header named in the file counts, which can only recompile too much, never too
little.
"""
import os, re, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
INCLUDE = re.compile(r'^[ \t]*#[ \t]*include[ \t]*["<]([^">]+)[">]', re.M)


def tree(top):
    """the files under top, as paths relative to the repository, with forward slashes"""
    out = []
    for r, _, fs in os.walk(os.path.join(ROOT, top)):
        for f in fs:
            out.append(os.path.relpath(os.path.join(r, f), ROOT).replace("\\", "/"))
    return sorted(out)


class Scanner:
    def __init__(self):
        self.files = set(tree("src")) | set(tree("include"))
        self.lower = {f.lower(): f for f in self.files}
        self.direct = {}
        self.problems = []

    def resolve(self, name, frm):
        """the file an #include names, or None"""
        for base in (os.path.dirname(frm), "include"):
            path = os.path.normpath(os.path.join(base, name)).replace("\\", "/")
            if path in self.files:
                return path
            if path.lower() in self.lower:
                # (found on Windows, not on Linux: the build must be the same on both)
                self.problems.append(f"{frm}: #include \"{name}\" is {self.lower[path.lower()]} (case differs)")
                return self.lower[path.lower()]
        self.problems.append(f"{frm}: #include \"{name}\" not found")
        return None

    def includes(self, path):
        """the files path includes itself"""
        if path not in self.direct:
            text = open(os.path.join(ROOT, path), encoding="utf-8", errors="replace").read()
            found = [self.resolve(n, path) for n in INCLUDE.findall(text)]
            self.direct[path] = [f for f in found if f]
        return self.direct[path]

    def closure(self, path):
        """every file path includes, directly or through other headers"""
        seen, todo = [], [path]
        while todo:
            for f in self.includes(todo.pop()):
                if f not in seen:
                    seen.append(f)
                    todo.append(f)
        return sorted(seen)


def sources(scan):
    return [f for f in sorted(scan.files) if f.startswith("src/") and f.endswith((".c", ".cpp"))]


def main():
    args = sys.argv[1:]
    scan = Scanner()
    if args[:1] == ["--check"]:
        for s in sources(scan):
            scan.closure(s)
        print("\n".join(sorted(set(scan.problems))) or "every #include resolves")
        sys.exit(1 if scan.problems else 0)
    if args[:1] == ["--users"]:
        header = args[1].replace("\\", "/")
        users = [s for s in sources(scan) if header in scan.closure(s)]
        print("\n".join(users))
        print(f"{len(users)} of {len(sources(scan))} sources include {header}", file=sys.stderr)
        return
    build, out = args[0].replace("\\", "/"), args[1]
    lines, headers = [], set()
    for s in sources(scan):
        deps = scan.closure(s)
        headers.update(deps)
        if deps:
            lines.append(f"{build}/{os.path.splitext(s)[0]}.o: {' '.join(deps)}")
    # (a header that is deleted or renamed must not stop make: an empty rule each)
    lines += [f"{h}:" for h in sorted(headers)]
    text = "\n".join(lines) + "\n"
    if not os.path.exists(out) or open(out).read() != text:
        os.makedirs(os.path.dirname(out) or ".", exist_ok=True)
        open(out, "w", newline="\n").write(text)
    else:
        os.utime(out)


if __name__ == "__main__":
    main()
