#!/usr/bin/env python3
"""Prints the decompilation progress from an objdiff report (objdiff-cli report generate)."""
import json, sys

r = json.load(open(sys.argv[1]))
m = r["measures"]
code = int(m.get("total_code", 0))
done = int(m.get("complete_code", 0))
print(f"Code decompiled: {done} / {code} bytes ({100 * done / code:.3f}%)")
print(f"Functions:       {m.get('matched_functions', 0)} / {m.get('total_functions', 0)}")
print(f"Files complete:  {m.get('complete_units', 0)} / {m.get('total_units', 0)}")
