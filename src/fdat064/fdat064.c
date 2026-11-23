#include "common.h"
#include "fdat064.h"

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C4DF4);

void func_801C4ED4(Obj801C4EB8 *arg0) {
    func_8004ECA8(&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
    arg0->unkCC += arg0->unkCE;
}

void func_801C4F4C(Obj801C4F4C *arg0) {
    func_801C4ED4(arg0);
    if (arg0->unkCC.unk0 >= 0x19) {
        arg0->unkCC.unk0 = 0x18;
    }
    arg0->unk10.unk2 += arg0->unkCC.unk0;
}

void func_801C4FA0(Obj801C4FA0 *arg0) {
    func_801C4ED4((Obj801C4EB8 *)arg0);
    if (arg0->unkCC < -0x18) {
        arg0->unkCC = -0x18;
    }
    arg0->unk12 += arg0->unkCC;
}

INCLUDE_RODATA("asm/USA/fdat064/nonmatchings/fdat064", D_801C4B40);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C4FF4);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C5144);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C52B8);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C559C);

void func_801C56C4(Obj801C5D08 *arg0) {
    Buf801C5D08 buf;
    Sub8004DE88 vec;
    Sub801C5D08 *sub;
    u8 *tbl;
    u8 kind;
    s32 flags;

    arg0->unk148 = 0;
    arg0->unk15C = 0;
    if (arg0->unk40 != 0xFF) {
        if (func_800754D0(arg0, D_801C70D0) != 0) {
            func_80078E1C(arg0);
        }
        return;
    }
    kind = arg0->unkFC;
    if (kind == 1 && (rand() < 0x148 || (arg0->unk0->unk24 != 0 && rand() < 0x3D8)) &&
        func_800745D0(arg0, &vec, 0, 10, kind, kind) != 0 &&
        func_80073C2C(arg0->unk48, &vec, arg0->unk12, 0, 8, arg0->unk36, 10000, -800, 800, -500, 500, &buf) != 0 &&
        (buf.unk16 & 2) && func_800781E8(arg0) != 0) {
        sub = arg0->unk0;
        func_80077B78(arg0, 0x17, sub->unk1E, sub->unk21, D_801C70F4, kind, 0, kind, 0, 0, arg0->unk48);
    }
    if (arg0->unk3F != 0) {
        arg0->unk3F--;
        return;
    }
    tbl = D_801C7050[arg0->unkFC];
    if (func_801C559C(arg0, tbl) == 0) {
        return;
    }
    if (arg0->unk3E == 0) {
        if (rand() < 0xA3E && (rand() < 0x148 || func_800781E8(arg0) != 0)) {
            arg0->unk3E = 6;
        }
        return;
    }
    if (arg0->unk3E & 1) {
        flags = 0x10;
        if (arg0->unkFC != 2) {
            flags = 0x20;
        }
        sub = arg0->unk0;
        func_80077B78(arg0, flags | 7, sub->unk1C, sub->unk20, tbl, 1, arg0->unk108, arg0->unk108 + 1);
        arg0->unk148 = 0xF;
        arg0->unk14A = 0xB4;
        arg0->unk14B = 0xA0;
        arg0->unk14C = 0x8C;
        arg0->unk15C = 0x10;
        arg0->unk108 ^= 2;
    }
    if (arg0->unk3E-- == 0) {
        arg0->unk3F = 10;
    }
}

void func_801C5994(s32 arg0, s32 arg1) {
    Sub8004DE88 vec;

    vec.unk0 = func_80014D78(100) - 50;
    vec.unk4 = func_80014D78(100) - 50;
    vec.unk2 = 0;
    func_800759A4(arg0, arg1, &vec);
}

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C59F8);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C5C18);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C5DA8);

void func_801C5E7C(Obj801C4FA0 *arg0) {
    arg0->unk36 = 2;
    func_801C5DA8();
}

void func_801C5EA0(Obj801C4FA0 *arg0) {
    arg0->unk36 = 1;
    func_801C5DA8();
}

void func_801C5EC4(Elem801C5EA8 *arg0, s32 arg1) {
    s32 count;
    u16 *idx;

    count = arg0->unk26;
    idx = arg0->unk28 + 1;
    do {
        arg0->unk2C->unk10 = arg1;
        if (arg1 == 4) {
            arg0->unk38->unk6 = 0;
        }
        arg0 = &D_801D0B68[*idx++];
        count--;
    } while (count != 0);
}

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C5F14);

s32 func_801C6030(Obj801C4EB8 *arg0) {
    return func_80012794(&arg0->unk22, arg0->unk16, arg0->unk18, 0, D_801A26C0, D_801A26E0, D_801A26E2);
}

s32 func_801C6080(Elem801C5EA8 *arg0, s32 arg1) {
    Sub801C5EA8 *sub;
    s32 turn;
    s32 rot;
    s32 dir;
    s16 speed;
    s16 v;
    s32 neg;

    sub = arg0->unk2C;
    if (arg1 >= 4) {
        turn = 0;
        dir = 1;
        if (arg1 == 4) {
            dir = -1;
        }
    } else {
        turn = 1;
        rot = arg1;
    }
    switch (sub->unk10) {
    case 2:
        rot += 2;
        dir = -dir;
    case 1:
    case 4:
        if (turn) {
            rot = (rot + arg0->unk16) & 3;
            sub->unk1E -= sub->unk20;
            if (sub->unk1E <= 0) {
                sub->unk1E += sub->unk12;
                speed = sub->unk1C;
            } else {
                speed = sub->unk1A;
            }
            D_801C7118 = speed;
            func_8001380C(&D_801C7114, &sub->unk8, rot);
        } else if (dir > 0) {
            sub->unk1E -= sub->unk20;
            if (sub->unk1E <= 0) {
                sub->unk1E += sub->unk12;
                v = sub->unk1C;
            } else {
                v = sub->unk1A;
            }
            sub->unk8.unk2 = v;
        } else {
            sub->unk1E -= sub->unk20;
            if (sub->unk1E <= 0) {
                sub->unk1E += sub->unk12;
                neg = -sub->unk1C;
            } else {
                neg = -sub->unk1A;
            }
            sub->unk8.unk2 = neg;
        }
        func_80072180(arg0);
        if (sub->unk10 == 1 || sub->unk10 == 4) {
            if (++sub->unk11 >= sub->unk12) {
                sub->unk10 += 2;
            }
            return 1;
        }
        if (--sub->unk11 == 0) {
            sub->unk10 = 0;
            D_801D0B98[*arg0->unk28].unk0 |= 0x100;
            return 2;
        }
        if (sub->unk11 >= sub->unk13 && arg0->unk38->unkA == 0) {
            if (func_801C6030((struct Obj801C4EB8 *)sub) != 0) {
                func_801C5EC4(arg0, 1);
            }
        }
        return 1;
    case 3:
        if (arg0->unk38->unkA == 0) {
            if (func_801C6030((struct Obj801C4EB8 *)sub) == 0) {
                func_801C5EC4(arg0, 2);
            }
        }
        return 0;
    }
    return 0;
}

void func_801C6340(Elem801C5EA8 *arg0) {
    switch (func_801C6080(arg0, arg0->unk38->unk7)) {
    case 1:
        if (arg0->unk38->unk8 != 0) {
            func_8004CC30(arg0->unk38->unk8, (u8 *)((arg0 - D_801D0B68) + 0x3000), &arg0->unk2C->unk22, 0x64, 0x1F40, 0x2710, 0);
        }
        break;
    case 2:
        if (arg0->unk38->unk9 != 0) {
            func_8004CE44(arg0->unk38->unk9, &arg0->unk2C->unk22, 0x78, 0);
        }
        break;
    }
}

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C6414);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C6520);

void func_801C6778(Obj801C4FA0 *arg0) {
    Sub801C6778 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C6520;
}

void func_801C67B4(Obj801C52C0 *arg0) {
    s32 idx;
    s32 n;

    if (D_801A26CE == arg0->unk2C->unk10) {
        idx = arg0->unk38->unk6;
        if (idx != 0) {
            n = arg0->unk38->unk8;
            for (n--; n != -1; n--) {
                if (D_801D0B94[idx].unk0 != 0) {
                    return;
                }
                idx++;
            }
        }
        if (func_8008A0B0(arg0->unk38->unk0, arg0->unk38->unk1, arg0->unk38->unk2, arg0->unk38->unk4, arg0->unk38->unk5) != 0) {
            arg0->unk2C = NULL;
        }
    }
}

void func_801C6874(Obj801C52C0 *arg0) {
    s32 unused[36];
    Sub801C5550 *task;

    task = (Sub801C5550 *)func_80072120(2);
    arg0->unk2C = task;
    task->unk10 = (Elem801C5EA8 *)arg0 - D_801D0B68;
    arg0->unk2C->unk0 = func_801C67B4;
}

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C68C8);

void func_801C69F0(Obj801C4FA0 *arg0) {
    Sub801C6778 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C68C8;
}

void func_801C6A2C(Obj801C6A40 *arg0) {
    Sub801C6A40 *task;
    Sub801C6568 info;
    Sub8004DE88 vec;
    Sub8004DE88 pos;
    s32 hit;
    s32 n;

    task = arg0->unk14;
    if (task->unk8 == -1) {
        return;
    }
    if (task->unk8 == 0) {
        info.unk0 = 7;
        info.unk2 = arg0->unk2A;
        info.unk4 = arg0->unk29;
        task->unk8 = arg0->unk28;
        func_80014774(&arg0->unk8, &vec);
        switch (arg0->unk22) {
        case 0:
            arg0->unk24 = 0x240;
            vec.unk0 = (arg0->unk24 * vec.unk0) >> 12;
            vec.unk2 = (arg0->unk24 * vec.unk2) >> 12;
            vec.unk4 = (arg0->unk24 * vec.unk4) >> 12;
            func_80086598(0, &info, D_801C7124, D_801C7128, arg0, &arg0->unk8, &vec, 0x37, 0x7530);
            func_800889B4(0, arg0, &vec, &info, 0x7530, 9);
            break;
        case 1:
        case 3:
            hit = D_801AC860[arg0->unk8.unk6 >> 5] & (1 << (arg0->unk8.unk6 & 0x1F));
            if (hit != 0) {
                vec.unk0 = (arg0->unk24 * vec.unk0) >> 12;
                vec.unk2 = (arg0->unk24 * vec.unk2) >> 12;
                vec.unk4 = (arg0->unk24 * vec.unk4) >> 12;
                func_80089628(arg0, &vec, 0xC, arg0->unk22);
            }
            break;
        case 2:
            hit = D_801AC860[arg0->unk8.unk6 >> 5] & (1 << (arg0->unk8.unk6 & 0x1F));
            if (hit != 0) {
                vec.unk0 = (vec.unk0 * 0x80) >> 12;
                vec.unk2 = (vec.unk2 * 0x80) >> 12;
                vec.unk4 = (vec.unk4 * 0x80) >> 12;
                func_800898A4(&info, D_801C712C, D_801C7130, arg0, &vec, &arg0->unk8, 6);
            }
            break;
        case 4:
            vec.unk0 = (arg0->unk24 * vec.unk0) >> 12;
            vec.unk2 = (arg0->unk24 * vec.unk2) >> 12;
            vec.unk4 = (arg0->unk24 * vec.unk4) >> 12;
            func_80086598(0, &info, D_801C7134, D_801C7138, arg0, &arg0->unk8, &vec, 0x3B, 0x7530);
            break;
        case 5:
            hit = D_801AC860[arg0->unk8.unk6 >> 5] & (1 << (arg0->unk8.unk6 & 0x1F));
            if (hit != 0) {
                vec.unk0 = (arg0->unk24 * vec.unk0) >> 12;
                vec.unk2 = (arg0->unk24 * vec.unk2) >> 12;
                vec.unk4 = (arg0->unk24 * vec.unk4) >> 12;
                func_80089A80(arg0, &vec);
            }
            break;
        case 6:
            n = arg0->unk26;
            vec.unk0 = (arg0->unk24 * vec.unk0) >> 12;
            vec.unk2 = (arg0->unk24 * vec.unk2) >> 12;
            vec.unk4 = (arg0->unk24 * vec.unk4) >> 12;
            for (n--; n != -1; n--) {
                pos.unk0 = arg0->unk0 + (((rand() * 14000) >> 15) - 7000);
                pos.unk2 = arg0->unk2 + (((rand() * 2800) >> 15) - 2000);
                pos.unk4 = arg0->unk4;
                func_80089C30(&pos, &vec, 0x60);
            }
            break;
        }
    } else {
        task->unk8--;
    }
}

void func_801C6F04(Obj801C6F04 *arg0) {
    Sub801C6F04 *task;

    task = func_80073674(4);
    arg0->unk14 = task;
    task->unk0 = func_801C6A2C;
    if (arg0->unk28 == 0xFF) {
        arg0->unk14->unk8 = -1;
        return;
    }
    arg0->unk14->unk8 = func_80014D78(arg0->unk28);
}

void func_801C6F70(void) {
}

void func_801C6F78(void) {
    Elem8019FB68 *p;
    s32 i;

    func_8008A80C();
    if (D_801C713E == 0 && (D_801C713C++ & 0xF) == 0) {
        i = 0xFC;
        p = D_8019FB68;
        do {
            if (p->unkA != -1 && p->unk0 != 3) {
                return;
            }
            i--;
            p++;
        } while (i != 0);
        func_800529F0(0, 0, 0x68);
        func_8004C318(0x80);
        D_801C713E = 1;
    }
}
