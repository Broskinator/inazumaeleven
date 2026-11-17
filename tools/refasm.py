#!/usr/bin/env python3
"""Assembles the asm files of a reference project into objects, for tools/sigmatch.py.

usage: tools/refasm.py REF_DIR OUT_DIR [-j N]

REF_DIR is a checkout of another decompilation whose not yet decompiled code is mwasmarm
assembly (for example ../ext/ie3ogres: Inazuma Eleven 3, kept outside this repository and
never committed). Every .s file under REF_DIR/asm and REF_DIR/lib/*/asm is assembled with the
pinned assembler into OUT_DIR, with the same path and the extension .o. The objects keep their
relocations, which is what sigmatch.py masks when it looks for the functions in this game.

    python tools/refasm.py ../ext/ie3ogres ../ext/ie3obj
    python tools/sigmatch.py extract/yeep build/ie3_matches.json ../ext/ie3obj --config config/yeep/arm9
"""
import concurrent.futures, glob, os, subprocess, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
ASM_VER = os.environ.get("ASM_VER", "dsi/1.2")


def assemble(job):
    src, obj, incs = job
    if os.path.exists(obj) and os.path.getmtime(obj) >= os.path.getmtime(src):
        return src, None
    os.makedirs(os.path.dirname(obj), exist_ok=True)
    wibo = [] if os.name == "nt" else [f"{ROOT}/tools/bin/wibo"]
    cmd = [*wibo, f"{ROOT}/tools/mwccarm/{ASM_VER}/mwasmarm.exe", "-proc", "arm5TE", "-16", "-gccinc"]
    for i in incs:
        cmd += ["-i", i]
    env = dict(os.environ, LM_LICENSE_FILE=f"{ROOT}/tools/mwccarm/license.dat")
    r = subprocess.run(cmd + [src, "-o", obj], env=env, capture_output=True, text=True)
    if r.returncode or not os.path.exists(obj):
        return src, (r.stdout + r.stderr).strip()[-300:] or "no object written"
    return src, None


def main():
    args = [a for a in sys.argv[1:] if not a.startswith("-")]
    ref, out = os.path.abspath(args[0]), os.path.abspath(args[1])
    jobs = int(sys.argv[sys.argv.index("-j") + 1]) if "-j" in sys.argv else os.cpu_count() or 4
    if "-j" in sys.argv:
        args = [a for a in args if a != sys.argv[sys.argv.index("-j") + 1]] or args
    work = []
    for top in [f"{ref}/asm"] + sorted(glob.glob(f"{ref}/lib/*/asm")):
        # (each tree's own include directories: its macros, and the project's headers)
        incs = [top, top + "/include", os.path.dirname(top) + "/include", f"{ref}/asm", f"{ref}/include"]
        for src in sorted(glob.glob(f"{top}/**/*.s", recursive=True)):
            rel = os.path.relpath(src, ref)
            work.append((src, os.path.join(out, rel[:-2] + ".o"), [i for i in incs if os.path.isdir(i)]))
    failed = 0
    with concurrent.futures.ThreadPoolExecutor(jobs) as pool:
        for src, err in pool.map(assemble, work):
            if err:
                failed += 1
                print(f"{os.path.relpath(src, ref)}: {err}")
    print(f"{len(work)} files, {len(work) - failed} assembled into {out}")


main()
