#!/usr/bin/env python3
"""Final touch on the built ROM's header.

The header stores a checksum of the *encrypted* secure area (0x6C). Computing it
needs the DS BIOS encryption keys, which this project does not use or ship, so the
known value of the retail ROM is written instead. The header checksum (0x15E) is
then recomputed.
"""
import sys

SECURE_AREA_CRC = 0x4821   # retail YEEP


def crc16(data: bytes) -> int:
    crc = 0xFFFF
    for b in data:
        crc ^= b
        for _ in range(8):
            crc = (crc >> 1) ^ 0xA001 if crc & 1 else crc >> 1
    return crc


def main(path: str) -> None:
    with open(path, "r+b") as f:
        hdr = bytearray(f.read(0x160))
        hdr[0x6C:0x6E] = SECURE_AREA_CRC.to_bytes(2, "little")
        hdr[0x15E:0x160] = crc16(bytes(hdr[:0x15E])).to_bytes(2, "little")
        f.seek(0)
        f.write(hdr)


if __name__ == "__main__":
    main(sys.argv[1])
