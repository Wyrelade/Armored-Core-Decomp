#!/usr/bin/env python3
"""Unpack Armored Core's FromSoftware ".T" archives (GG/COM/FDAT.T and friends).

    python tools/acdisc.py [--list] [ARCHIVE ...]

Format (little-endian):
    u16 count
    u16 sector[count + 1]     # entry i = sectors [sector[i], sector[i+1]) of 0x800 bytes
Entries with sector[i] == sector[i+1] are empty. sector[0] is the header size in sectors.

With no archive given, FDAT.T is unpacked to dumps/fdat/FDAT_NNN.BIN. FDAT.T holds the
game code: entries 201-204 are the four main programs loaded at 0x8004ADA0 (the end of
the exe's .bss), the small even entries 0-188 are per-mission overlays at 0x801C4B40 /
0x801B8xxx, each followed by its mission data entry.
"""
import argparse
import os
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SECTOR = 0x800


def entries(data):
    count = struct.unpack_from("<H", data, 0)[0]
    sectors = struct.unpack_from("<%dH" % (count + 1), data, 2)
    out = []
    for i in range(count):
        a, b = sectors[i] * SECTOR, sectors[i + 1] * SECTOR
        out.append(data[a:b])
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("archives", nargs="*")
    ap.add_argument("--list", action="store_true", help="print the entry table only")
    ap.add_argument("--out", default=None, help="output dir (default dumps/<name>)")
    args = ap.parse_args()

    archives = args.archives or [os.path.join(ROOT, "dumps", "disc", "GG", "COM", "FDAT.T")]
    for path in archives:
        if not os.path.exists(path):
            print("missing %s (extract the disc first, see README)" % path)
            return 1
        with open(path, "rb") as f:
            data = f.read()
        name = os.path.splitext(os.path.basename(path))[0]
        ents = entries(data)
        outdir = args.out or os.path.join(ROOT, "dumps", name.lower())
        if not args.list:
            os.makedirs(outdir, exist_ok=True)
        for i, blob in enumerate(ents):
            if args.list:
                jr = blob.count(b"\x08\x00\xe0\x03")
                print("%3d size %7X %s" % (i, len(blob), "code" if jr >= 4 else ""))
                continue
            if not blob:
                continue
            with open(os.path.join(outdir, "%s_%03d.BIN" % (name, i)), "wb") as f:
                f.write(blob)
        if not args.list:
            print("%s: %d entries -> %s" % (path, len(ents), outdir))
    return 0


if __name__ == "__main__":
    sys.exit(main())
