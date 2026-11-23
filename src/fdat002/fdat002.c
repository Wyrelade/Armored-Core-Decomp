#include "common.h"
#include "fdat002.h"

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C4DD8);

void func_801C4EB8(Obj801C4EB8 *arg0) {
    func_8004ECA8(&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
    arg0->unkCC += arg0->unkCE;
}

void func_801C4F30(Obj801C4EB8 *arg0) {
    func_801C4EB8(arg0);
    if (arg0->unkCC > 0x18) {
        arg0->unkCC = 0x18;
    }
    arg0->unk12 += arg0->unkCC;
}

void func_801C4F84(Obj801C4EB8 *arg0) {
    func_801C4EB8(arg0);
    if (arg0->unkCC < -0x18) {
        arg0->unkCC = -0x18;
    }
    arg0->unk12 += arg0->unkCC;
}

INCLUDE_RODATA("asm/USA/fdat002/nonmatchings/fdat002", D_801C4B40);

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C4FD8);

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C5128);

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C529C);

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C5580);

void func_801C56A8(Obj801C5D08 *arg0) {
    Buf801C5D08 buf;
    Sub8004DE88 vec;
    Sub801C5D08 *sub;
    u8 *tbl;
    u8 kind;
    s32 flags;

    arg0->unk148 = 0;
    arg0->unk15C = 0;
    if (arg0->unk40 != 0xFF) {
        if (func_800754D0(arg0, D_801C6D90) != 0) {
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
        func_80077B78(arg0, 0x17, sub->unk1E, sub->unk21, D_801C6DB4, kind, 0, kind, 0, 0, arg0->unk48);
    }
    if (arg0->unk3F != 0) {
        arg0->unk3F--;
        return;
    }
    tbl = D_801C6D10[arg0->unkFC];
    if (func_801C5580(arg0, tbl) == 0) {
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

void func_801C5978(s32 arg0, s32 arg1) {
    Sub801C4C94 vec;

    vec.unk0 = func_80014D78(100) - 50;
    vec.unk4 = func_80014D78(100) - 50;
    vec.unk2 = 0;
    func_800759A4(arg0, arg1, &vec);
}

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C59DC);

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C5BFC);

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C5D8C);

void func_801C5E60(Obj801C4EB8 *arg0) {
    arg0->unk36 = 2;
    func_801C5D8C(arg0);
}

void func_801C5E84(Obj801C4EB8 *arg0) {
    arg0->unk36 = 1;
    func_801C5D8C(arg0);
}

void func_801C5EA8(Elem801C5EA8 *arg0, s32 arg1) {
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

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C5EF8);

s32 func_801C6014(Obj801C4EB8 *arg0) {
    return func_80012794(&arg0->unk22, arg0->unk16, arg0->unk18, 0, D_801A26C0, D_801A26E0, D_801A26E2);
}

s32 func_801C6064(Elem801C5EA8 *arg0, s32 arg1) {
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
            D_801C6DD8 = speed;
            func_8001380C(&D_801C6DD4, &sub->unk8, rot);
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
            if (func_801C6014((struct Obj801C4EB8 *)sub) != 0) {
                func_801C5EA8(arg0, 1);
            }
        }
        return 1;
    case 3:
        if (arg0->unk38->unkA == 0) {
            if (func_801C6014((struct Obj801C4EB8 *)sub) == 0) {
                func_801C5EA8(arg0, 2);
            }
        }
        return 0;
    }
    return 0;
}

void func_801C6324(Elem801C5EA8 *arg0) {
    switch (func_801C6064(arg0, arg0->unk38->unk7)) {
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

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C63F8);

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C6504);

void func_801C675C(Obj801C4EB8 *arg0) {
    Sub801C5550 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C6504;
}

void func_801C6798(Obj801C52C0 *arg0) {
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

void func_801C6858(Elem801C5EA8 *arg0) {
    s32 unused[36];
    Sub801C5550 *task;

    task = func_80072120(2);
    arg0->unk2C = (Sub801C5EA8 *)task;
    task->unk10 = arg0 - D_801D0B68;
    arg0->unk2C->unk0 = func_801C6798;
}

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C68AC);

void func_801C6944(Obj801C4EB8 *arg0) {
    s32 unused[0x24];
    Sub801C5550 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C68AC;
    arg0->unk2C->unk4 = NULL;
}

void func_801C698C(void) {
}

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C6994);

s32 func_801C6BE4(s32 arg0) {
    if (arg0 == 0) {
        func_800529F0(0, 0, 1);
        func_80078CFC(D_8019FE28);
    }
    return 1;
}

void func_801C6C20(Obj801C4EB8 *arg0) {
    Sub801C6C20 *ref;

    if (arg0->unk160 == 0) {
        ref = arg0->unk0;
        if (D_8019F51C->unk20[ref->unkA] == func_801C5E60) {
            D_801C6DF4 += 0x1F4;
        }
        if (D_8019F51C->unk20[ref->unkA] == func_801C5E84) {
            D_801C6DF0 -= 0x3E8;
        }
    }
}

void func_801C6CBC(s32 *arg0, s32 *arg1) {
    *arg0 += D_801C6DF4;
    *arg1 += D_801C6DF0;
}
