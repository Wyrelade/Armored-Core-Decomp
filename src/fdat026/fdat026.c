#include "common.h"
#include "fdat026.h"

void func_801C52C0(Obj8007618C *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CAB88;
    func_801CAB3C(arg0);
}

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C52F0);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C53D4);

void func_801C5410(void) {
}

s32 func_801C5418(s32 arg0) {
    Elem801C5418 *e;
    s32 dx;
    s32 dy;
    s32 dz;

    e = &D_8019FAB8[arg0];
    dx = (e->unk4 - D_801A26C0) >> 2;
    dy = (e->unk6 - D_801A26C2) >> 2;
    dz = (e->unk8 - D_801A26C4) >> 2;
    return dx * dx + dy * dy + dz * dz;
}

void func_801C549C(void) {
    s32 dist5;
    s32 closer;
    u8 *data;

    if (D_801CB0D0 == 0) {
        func_8008C2FC(0x601);
        D_801CB0D0 = 1;
    }
    func_8008A80C();
    if (D_8019F528 == 0 && D_801CB0CC == 1 && func_80052338() != 0) {
        dist5 = func_801C5418(5);
        closer = func_801C5418(6) < dist5;
        do {
            data = D_8019FBC0;
            if (closer) {
                data = D_8019FB94;
            }
        } while (0);
        func_80078CFC(data);
        D_801CB0CC = 2;
    }
}

s32 func_801C5560(s32 arg0) {
    if (D_8019F528 == 0 && arg0 == 0) {
        func_800529F0(0, 0, 0x4A);
        D_801CB0CC = 1;
    }
    return 1;
}

void func_801C55A4(Obj8007618C *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 100, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 100, 0x1F40, 0x2710, -0x30);
}

void func_801C5624(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

void func_801C564C(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    u16 mask;

    arg0->unk148 |= 0xF;
    mask = arg1->unk38;
    if (arg0->unk15C & mask) {
        arg0->unk15C &= ~mask;
        arg0->unk14A[0] = 0x3C;
        arg0->unk14A[1] = 0x28;
        arg0->unk14A[2] = 0x14;
    } else {
        arg0->unk15C |= mask;
        arg0->unk14A[0] = 0xB4;
        arg0->unk14A[1] = 0xA0;
        arg0->unk14A[2] = 0x8C;
    }
}

void func_801C56B8(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk2D;
}

void func_801C56D4(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk2D);
}

void func_801C56F4(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C |= 1 << arg1->unk6;
}

void func_801C5710(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_801C572C(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

void func_801C574C(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk9;
}

void func_801C5768(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk9);
}

void func_801C5788(Obj8007618C *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C5CA8);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C5824);

INCLUDE_RODATA("asm/USA/fdat026/nonmatchings/fdat026", D_801C4B40);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C59DC);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C5CA8);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C5F94);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C6298);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C6588);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C673C);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C6A18);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C6B20);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C6BF0);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C6D00);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C6EC8);

void func_801C7254(Obj801C52C0 *arg0, s32 arg1) {
    if (arg0->unk126 == -1) {
        func_800759A4(arg0, arg1, &D_80039C78);
        return;
    }
    func_80075B08(arg0, arg1, &D_80198B08[arg0->unk126]);
}

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C72B4);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C7310);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C736C);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C75AC);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C7B0C);

void func_801C7D98(Obj8007618C *arg0, Sub801C7D98 *arg1) {
    Seg801C7D98 seg;
    Sub8004DE88 rot;
    Tbl801C7D98 *tbl;
    Sub801C52C0 *sub;
    Mdl801C7D98 *mdl;
    Hdr801C7D98 *hdr;
    Part801C7D98 *part;
    Slot801C7D98 *slot;
    Elem801C7D98 *elem;
    Obj8007618C *target;
    s32 ok;
    s32 scale;
    s32 time;
    s32 dx;
    s32 dy;
    s32 dz;
    s32 hit;
    s32 unused[2];

    tbl = &D_8008E658[arg1->unk2 & 0xF];
    sub = arg0->unk108;
    ok = func_801C7B0C(arg0, arg1, 0, tbl->unk0);
    if (sub->unk0 != 0
        || (arg0->unk3C == 0x22 && arg0->unk64.unk0 == arg0->unk135 && func_8004EBF8(&arg0->unk64))) {
        arg0->unk64.unk18 = arg1->unkB;
        mdl = (Mdl801C7D98 *)arg0->unk60;
        if (mdl != NULL && mdl->unkE == arg1->unkB) {
            hdr = D_801A6134[arg0->unk8.unk6];
            part = (Part801C7D98 *)((u8 *)hdr + ((s32 *)((u8 *)hdr + hdr->unk14))[arg1->unkB]);
            slot = &part->unk14[arg1->unk4];
            elem = &mdl->unk20[slot->unk0];
            if (elem->unk26 & 4) {
                goto tail;
            }
        }
        if (arg0->unk3F != 0) {
            goto tail;
        }
        if (arg0->unk3E == 0) {
            if (ok == 0) {
                goto tail;
            }
            if (arg1->unkF < (rand() & 0xFF)) {
                goto tail;
            }
            arg0->unk3E = arg1->unk10;
        }
        if (!(arg1->unk2 & 0x40)) {
            hit = func_800745D0(arg0, &seg, arg1->unk5, arg1->unk6, 2, 0, 1);
        } else if (arg0->unk3E & 1) {
            hit = func_800745D0(arg0, &seg, arg1->unk5, arg1->unk6, 2, 0, 1);
        } else {
            hit = func_800745D0(arg0, &seg, arg1->unk7, arg1->unk8, 2, 0, 1);
        }
        if (hit != 0) {
            seg.unk8.unk0 -= seg.unk0.unk0;
            seg.unk8.unk2 -= seg.unk0.unk2;
            seg.unk8.unk4 -= seg.unk0.unk4;
            VectorNormalSS(&seg.unk8, &seg.unk8);
            scale = (arg0->unk108->unk24 * tbl->unk2) >> 8;
            if (scale != 0) {
                arg0->unkCC.unk0 -= (seg.unk8.unk0 * scale) >> 6;
                arg0->unkCC.unk2 -= (seg.unk8.unk2 * scale) >> 6;
                arg0->unkCC.unk4 -= (seg.unk8.unk4 * scale) >> 6;
                if (arg0->unk3D == 2 || arg0->unk3D == 3) {
                    func_801C5824(arg0, 0, 0, 0x100, &arg0->unkCC);
                }
            }
            switch (arg1->unk2 & 0xF) {
            case 0:
                func_80085E98(arg0, &arg1->unk22, &seg.unk0, &seg.unk8, tbl->unk0, arg1->unk12, 7, &D_801CB0D4, 0x14, 3, 0x78, &D_801CB0D8, &D_801CB0DC, 0, 4);
                if (arg0->unk50 != NULL) {
                    arg0->unk50(arg0, arg0->unk41);
                }
                break;
            case 1:
                func_800889B4(arg0, &seg.unk0, &seg.unk8, &arg1->unk22, arg1->unk12, 7);
                if (arg0->unk50 != NULL) {
                    arg0->unk50(arg0, arg0->unk41);
                }
                break;
            case 2:
                func_800889B4(arg0, &seg.unk0, &seg.unk8, &arg1->unk22, arg1->unk12, 6);
                if (arg0->unk50 != NULL) {
                    arg0->unk50(arg0, arg0->unk41);
                }
                break;
            case 3:
                if (func_800781E8(arg0) == 0) {
                    goto done;
                }
                seg.unk8.unk0 = (seg.unk8.unk0 * 75) >> 9;
                seg.unk8.unk2 = (seg.unk8.unk2 * 75) >> 9;
                seg.unk8.unk4 = (seg.unk8.unk4 * 75) >> 9;
                target = arg0->unk48;
                if (target != NULL) {
                    dx = (target->unk8.unk0 - arg0->unk8.unk0) >> 1;
                    dy = (target->unk8.unk2 - arg0->unk8.unk2) >> 1;
                    dz = (target->unk8.unk4 - arg0->unk8.unk4) >> 1;
                    time = (SquareRoot0(dx * dx + dy * dy + dz * dz) << 2) / 600;
                } else {
                    time = (s16)(arg1->unk12 / 600);
                }
                func_80014AE4(seg.unk8.unk0, seg.unk8.unk2, seg.unk8.unk4, &rot);
                func_80086448(arg0, &arg1->unk22, &seg.unk0, &rot, &seg.unk8, 0x31, 0, time);
                if (arg0->unk50 != NULL) {
                    arg0->unk50(arg0, arg0->unk41);
                }
                break;
            case 4:
                func_800889B4(arg0, &seg.unk0, &seg.unk8, &arg1->unk22, arg1->unk12, 5);
                if (arg0->unk50 != NULL) {
                    arg0->unk50(arg0, arg0->unk41);
                }
                break;
            case 5:
                func_8008840C(arg0, &seg.unk0, &seg.unk8, &arg1->unk22, arg1->unk12, 1);
                if (arg0->unk50 != NULL) {
                    arg0->unk50(arg0, arg0->unk41);
                }
                break;
            case 6:
                func_80014AE4(seg.unk8.unk0, seg.unk8.unk2, seg.unk8.unk4, &rot);
                func_8008915C(arg0, &seg.unk0, &seg.unk8, &arg1->unk22, arg1->unk12, 3, 0x31, &rot);
                if (arg0->unk50 != NULL) {
                    arg0->unk50(arg0, arg0->unk41);
                }
                break;
            case 7:
                func_80014AE4(seg.unk8.unk0, seg.unk8.unk2, seg.unk8.unk4, &rot);
                func_8008915C(arg0, &seg.unk0, &seg.unk8, &arg1->unk22, arg1->unk12, 1, 0, &rot);
                if (arg0->unk50 != NULL) {
                    arg0->unk50(arg0, arg0->unk41);
                }
                break;
            case 8:
                func_80014AE4(seg.unk8.unk0, seg.unk8.unk2, seg.unk8.unk4, &rot);
                func_8008915C(arg0, &seg.unk0, &seg.unk8, &arg1->unk22, arg1->unk12, 2, 0, &rot);
                if (arg0->unk50 != NULL) {
                    arg0->unk50(arg0, arg0->unk41);
                }
                break;
            case 9:
                func_80085E98(arg0, &arg1->unk22, &seg.unk0, &seg.unk8, tbl->unk0, arg1->unk12, 7, &D_801CB0E0, 0x14, 3, 0x78, &D_801CB0E4, &D_801CB0E8, 0, 4);
                if (arg0->unk50 != NULL) {
                    arg0->unk50(arg0, arg0->unk41);
                }
                break;
            }
        }
    done:
        arg0->unk3E--;
        arg0->unk64.unk1 = arg1->unkC;
        arg0->unk3F = tbl->unk5;
    } else if (ok != 0 && arg0->unk3D != 0xC0 && arg0->unk3C != 0x22) {
        arg0->unk135 = arg1->unkB + 0x2A;
        arg0->unk3C = 0x22;
        arg0->unk133 = 0;
        arg0->unk36 |= 0x10;
    }
tail:
    if (arg0->unk3F != 0) {
        arg0->unk3F--;
    }
}

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C856C);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C88DC);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C8C58);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C8CAC);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C91BC);

void func_801C9508(Obj801C52C0 *arg0) {
    s16 val;

    arg0->unk42 = 0;
    arg0->unk130 = 0;
    arg0->unk164 *= 4;
    val = func_80073904();
    arg0->unk12A = val;
    arg0->unk12C = val;
    arg0->unk44 = val;
    arg0->unk126 = -1;
    arg0->unk124 = -1;
    arg0->unk128 = 0;
    arg0->unk136 = 0;
    arg0->unk12E = 0;
    arg0->unk133 = 0;
    arg0->unk134 = 0;
    arg0->unk132 = 0;
    arg0->unk131 = 0;
    if (arg0->unk54 != NULL) {
        arg0->unk54(arg0, 0);
    }
    if (arg0->unk50 != NULL) {
        arg0->unk50(arg0, arg0->unk41);
    }
}

void func_801C95A8(Obj801C95A8 *arg0) {
    Elem801C52C0 *elem;

    if (arg0->unk2E <= arg0->unk8.unk2 && arg0->unk2E >= arg0->unk8.unk2 - arg0->unk2A) {
        if (arg0->unk64.unk0 == 0x16) {
            if (arg0->unk64.unkA == 6) {
                func_8007847C(arg0, 0x64, 5, 0x12C, 0x2BC, 0x64, 0x12C, 0x40);
            }
        } else {
            elem = arg0->unk108;
            if (arg0->unk64.unkA == 0xC) {
                func_80078250(arg0, elem->unk30, elem->unk31, 0, 0x50, 0xC8, 0x41, 0);
            } else if (arg0->unk64.unkA == 5) {
                func_80078250(arg0, elem->unk32, elem->unk33, 0, 0x50, 0xC8, 0x41, 0);
            }
        }
    }
    func_80075FC0(arg0);
    if (func_8004F024(&arg0->unk64, &arg0->unk8) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C96E4);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C980C);

void func_801CAB3C(Obj8007618C *arg0) {
    arg0->unk50 = func_801C980C;
    arg0->unk54 = func_801C75AC;
    arg0->unk58 = func_801C8CAC;
    arg0->unk5C = func_801C91BC;
    func_801C9508(arg0);
}
