/*
 * unecm.c - decode an ECM (Error Code Modeler) CD image back to a raw .bin/.img.
 *
 * Clean reimplementation of the ECM v1.0 format (Neill Corlett). ECM strips the
 * EDC/ECC bytes of every sector that can be regenerated; this rebuilds them and
 * checks the whole-file EDC stored at the end of the stream.
 *
 * Build: gcc -O2 -o unecm tools/unecm.c
 * Use:   unecm <in.img.ecm> <out.img>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

static uint8_t ecc_f_lut[256];
static uint8_t ecc_b_lut[256];
static uint32_t edc_lut[256];

static void eccedc_init(void) {
    uint32_t i, j, edc;
    for (i = 0; i < 256; i++) {
        j = (i << 1) ^ (i & 0x80 ? 0x11D : 0);
        ecc_f_lut[i] = (uint8_t)j;
        ecc_b_lut[i ^ j] = (uint8_t)i;
        edc = i;
        for (j = 0; j < 8; j++) {
            edc = (edc >> 1) ^ (edc & 1 ? 0xD8018001 : 0);
        }
        edc_lut[i] = edc;
    }
}

static uint32_t edc_partial(uint32_t edc, const uint8_t *src, size_t size) {
    while (size--) {
        edc = (edc >> 8) ^ edc_lut[(edc ^ *src++) & 0xFF];
    }
    return edc;
}

static void edc_put(uint8_t *dst, uint32_t edc) {
    dst[0] = edc;
    dst[1] = edc >> 8;
    dst[2] = edc >> 16;
    dst[3] = edc >> 24;
}

static void ecc_computeblock(const uint8_t *src, uint32_t major_count, uint32_t minor_count,
                             uint32_t major_mult, uint32_t minor_inc, uint8_t *dest) {
    uint32_t size = major_count * minor_count;
    uint32_t major, minor;
    for (major = 0; major < major_count; major++) {
        uint32_t index = (major >> 1) * major_mult + (major & 1);
        uint8_t ecc_a = 0, ecc_b = 0;
        for (minor = 0; minor < minor_count; minor++) {
            uint8_t temp = src[index];
            index += minor_inc;
            if (index >= size) {
                index -= size;
            }
            ecc_a ^= temp;
            ecc_b ^= temp;
            ecc_a = ecc_f_lut[ecc_a];
        }
        ecc_a = ecc_b_lut[ecc_f_lut[ecc_a] ^ ecc_b];
        dest[major] = ecc_a;
        dest[major + major_count] = ecc_a ^ ecc_b;
    }
}

static void ecc_generate(uint8_t *sector, int zeroaddress) {
    uint8_t address[4];
    if (zeroaddress) {
        memcpy(address, sector + 12, 4);
        memset(sector + 12, 0, 4);
    }
    ecc_computeblock(sector + 0xC, 86, 24, 2, 86, sector + 0x81C);
    ecc_computeblock(sector + 0xC, 52, 43, 86, 88, sector + 0x8C8);
    if (zeroaddress) {
        memcpy(sector + 12, address, 4);
    }
}

static void eccedc_generate(uint8_t *sector, int type) {
    switch (type) {
    case 1: /* Mode 1 */
        edc_put(sector + 0x810, edc_partial(0, sector, 0x810));
        memset(sector + 0x814, 0, 8);
        ecc_generate(sector, 0);
        break;
    case 2: /* Mode 2 form 1 */
        edc_put(sector + 0x818, edc_partial(0, sector + 0x10, 0x808));
        ecc_generate(sector, 1);
        break;
    case 3: /* Mode 2 form 2 */
        edc_put(sector + 0x92C, edc_partial(0, sector + 0x10, 0x91C));
        break;
    }
}

int main(int argc, char **argv) {
    FILE *in, *out;
    uint8_t sector[2352];
    uint32_t checkedc = 0;
    int c;

    if (argc != 3) {
        fprintf(stderr, "usage: %s <in.ecm> <out>\n", argv[0]);
        return 1;
    }
    eccedc_init();
    in = fopen(argv[1], "rb");
    if (!in) { perror(argv[1]); return 1; }
    if (fgetc(in) != 'E' || fgetc(in) != 'C' || fgetc(in) != 'M' || fgetc(in) != 0) {
        fprintf(stderr, "not an ECM file\n");
        return 1;
    }
    out = fopen(argv[2], "wb");
    if (!out) { perror(argv[2]); return 1; }

    for (;;) {
        uint32_t type, num, bits = 5;
        c = fgetc(in);
        if (c == EOF) goto uneof;
        type = c & 3;
        num = (c >> 2) & 0x1F;
        while (c & 0x80) {
            c = fgetc(in);
            if (c == EOF) goto uneof;
            num |= ((uint32_t)(c & 0x7F)) << bits;
            bits += 7;
        }
        if (num == 0xFFFFFFFF) break;
        num++;
        if (type == 0) {
            while (num) {
                uint32_t b = num > sizeof(sector) ? sizeof(sector) : num;
                if (fread(sector, 1, b, in) != b) goto uneof;
                checkedc = edc_partial(checkedc, sector, b);
                fwrite(sector, 1, b, out);
                num -= b;
            }
        } else {
            while (num--) {
                memset(sector, 0, sizeof(sector));
                memset(sector + 1, 0xFF, 10);
                switch (type) {
                case 1:
                    sector[0x0F] = 0x01;
                    if (fread(sector + 0x00C, 1, 0x003, in) != 0x003) goto uneof;
                    if (fread(sector + 0x010, 1, 0x800, in) != 0x800) goto uneof;
                    eccedc_generate(sector, 1);
                    checkedc = edc_partial(checkedc, sector, 2352);
                    fwrite(sector, 2352, 1, out);
                    break;
                case 2:
                    sector[0x0F] = 0x02;
                    if (fread(sector + 0x014, 1, 0x804, in) != 0x804) goto uneof;
                    memcpy(sector + 0x10, sector + 0x14, 4);
                    eccedc_generate(sector, 2);
                    checkedc = edc_partial(checkedc, sector + 0x10, 2336);
                    fwrite(sector + 0x10, 2336, 1, out);
                    break;
                case 3:
                    sector[0x0F] = 0x02;
                    if (fread(sector + 0x014, 1, 0x918, in) != 0x918) goto uneof;
                    memcpy(sector + 0x10, sector + 0x14, 4);
                    eccedc_generate(sector, 3);
                    checkedc = edc_partial(checkedc, sector + 0x10, 2336);
                    fwrite(sector + 0x10, 2336, 1, out);
                    break;
                }
            }
        }
    }
    {
        uint8_t tail[4];
        uint32_t stored;
        if (fread(tail, 1, 4, in) != 4) goto uneof;
        stored = tail[0] | (tail[1] << 8) | (tail[2] << 16) | ((uint32_t)tail[3] << 24);
        fclose(out);
        if (stored != checkedc) {
            fprintf(stderr, "EDC mismatch: stored %08X computed %08X\n", stored, checkedc);
            return 2;
        }
    }
    printf("ok, EDC %08X\n", checkedc);
    return 0;

uneof:
    fprintf(stderr, "unexpected end of file\n");
    return 1;
}
