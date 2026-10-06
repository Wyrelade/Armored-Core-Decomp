from typing import List
import os
import shlex
import subprocess

# No `cpp` on the Windows box; PERMUTER_CPP lets the caller supply one
# (e.g. "gcc.exe -E"). Split as argv so a flag can ride along.
_CPP = shlex.split(os.environ.get("PERMUTER_CPP", "cpp"))


def preprocess(filename: str, cpp_args: List[str] = []) -> str:
    return subprocess.check_output(
        _CPP + cpp_args + ["-P", "-nostdinc", "-DPERMUTER", filename],
        universal_newlines=True,
        encoding="utf-8",
    )
