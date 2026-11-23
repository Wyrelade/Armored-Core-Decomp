#include "common.h"
#include "fdat056.h"

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C5438);

void func_801C5518(Obj801C4EB8 *arg0) {
    func_8004ECA8(&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
    arg0->unkCC += arg0->unkCE;
}

void func_801C5590(Obj801C5590 *arg0) {
    func_801C5518(arg0);
    if (arg0->unkCC > 24) {
        arg0->unkCC = 24;
    }
    arg0->unk12 += arg0->unkCC;
}

void func_801C55E4(Obj801C5590 *arg0) {
    func_801C5518(arg0);
    if (arg0->unkCC < -24) {
        arg0->unkCC = -24;
    }
    arg0->unk12 += arg0->unkCC;
}

INCLUDE_RODATA("asm/USA/fdat056/nonmatchings/fdat056", D_801C4B40);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C5638);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C5788);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C58FC);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C5BE0);

void func_801C5D08(Obj801C5D08 *arg0) {
    Buf801C5D08 buf;
    Sub8004DE88 vec;
    Sub801C5D08 *sub;
    u8 *tbl;
    u8 kind;
    s32 flags;

    arg0->unk148 = 0;
    arg0->unk15C = 0;
    if (arg0->unk40 != 0xFF) {
        if (func_800754D0(arg0, D_801CD1C8) != 0) {
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
        func_80077B78(arg0, 0x17, sub->unk1E, sub->unk21, D_801CD1EC, kind, 0, kind, 0, 0, arg0->unk48);
    }
    if (arg0->unk3F != 0) {
        arg0->unk3F--;
        return;
    }
    tbl = D_801CD148[arg0->unkFC];
    if (func_801C5BE0(arg0, tbl) == 0) {
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

void func_801C5FD8(s32 arg0, s32 arg1) {
    Sub8004DE88 vec;

    vec.unk0 = func_80014D78(100) - 50;
    vec.unk4 = func_80014D78(100) - 50;
    vec.unk2 = 0;
    func_800759A4((Obj801C52C0 *)arg0, arg1, (Sub8004DE88 *)&vec);
}

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C603C);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C625C);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C63EC);

void func_801C64C0(Obj801C64C0 *arg0) {
    arg0->unk36 = 2;
    func_801C63EC(arg0);
}

void func_801C64E4(Obj801C64C0 *arg0) {
    arg0->unk36 = 1;
    func_801C63EC(arg0);
}

void func_801C6508(Obj801C64C0 *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CD20C;
    func_801CD0DC(arg0);
}

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C6538);

void func_801C6790(Obj801C4F4C *arg0) {
    Sub801C667C *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C6538;
}

void func_801C67CC(Obj801C4F4C *arg0) {
    Sub801C667C *task;
    Sub801C66B8 *info;
    s32 timer;

    if (arg0->unk38->unk0 == 1) {
        task = arg0->unk2C;
        timer = task->unk10;
        if (timer == 0) {
            if (func_8006D45C() != 0) {
                func_8006D39C(arg0);
                info = arg0->unk38;
                func_8008A0B0(info->unk4, info->unk5, info->unk6, info->unk8, info->unk9);
            }
        } else {
            task->unk10 = timer - 1;
        }
    }
}

s32 func_801C6868(Obj801C730C *arg0, s32 arg1, s32 arg2, ...) {
    if (arg1 == 0x8200) {
        arg0->unk38->unk0 = 1;
    }
    return 0;
}

void func_801C688C(Obj801C4F4C *arg0) {
    s32 unused[36];

    arg0->unk2C = func_80072120(4);
    arg0->unk2C->unk10 = arg0->unk38->unk2 * 0x16;
    arg0->unk2C->unk0 = func_801C67CC;
    arg0->unk2C->unk4 = func_801C6868;
}

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C6900);

void func_801C6A24(Obj801C6870 *arg0) {
    arg0->unkA += 0x80;
}

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C6A38);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C6C64);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C6D70);

void func_801C6F28(Obj801C7358 *arg0) {
    Sub801C7358 *task;
    u16 n;

    task = func_80073674(8);
    arg0->unk14 = task;
    task->unk4 = func_801C6D70;
    switch (arg0->unk23) {
    case 1:
        arg0->unk14->unk0 = func_801C6A24;
        break;
    case 2:
        arg0->unk14->unk0 = func_801C6A38;
        arg0->unk14->unkC = (u32)&D_80198B08[arg0->unk28];
        break;
    case 3:
        arg0->unk14->unk0 = func_801C6C64;
        n = arg0->unk28;
        arg0->unk14->unkC = (u32)(n * n) >> 4;
        arg0->unk14->unk8 = rand() & 0x1F;
        break;
    }
    arg0->unk14->unk9 = 0;
}

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C703C);

void func_801C7358(Obj801C7358 *arg0) {
    Sub801C7358 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C703C;
}

void func_801C7394(void) {
}

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C739C);

s32 func_801C73F0(s32 arg0) {
    Elem801C5F00 *p;
    s32 i;
    s32 count;

    i = 0x200;
    count = 0;
    p = D_801D0B68;
    do {
        if (p->unk6 != -1 && p->unk1E == arg0) {
            count++;
        }
        i--;
        p++;
    } while (i != 0);
    return count;
}

void func_801C743C(void) {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 e;
    s32 f;
    s32 g;

    a = func_801C739C(4);
    b = func_801C739C(5);
    D_801CD7E8 = a + b + func_801C739C(6);
    c = func_801C739C(0x15);
    D_801CD7EC = c + func_801C739C(0x16);
    d = func_801C73F0(0x23);
    e = func_801C73F0(0x24);
    f = func_801C73F0(0x25);
    g = func_801C73F0(0x26);
    D_801CD7F0 = d + e + f + g + func_801C73F0(0x27);
    D_801CD7F4 = func_801C73F0(0x29);
    D_801CD7F8 = func_801C73F0(0x2A);
    D_801CD7FC = func_801C73F0(0x2B);
}

void func_801C7544(s32 *arg0) {
    s32 n;
    s32 e8;

    D_801CD7E8 -= func_801C739C(4) + func_801C739C(5) + func_801C739C(6);
    D_801CD7EC -= func_801C739C(0x15) + func_801C739C(0x16);
    D_801CD7F0 -= func_801C73F0(0x23) + func_801C73F0(0x24) + func_801C73F0(0x25) +
                  func_801C73F0(0x26) + func_801C73F0(0x27);
    D_801CD7F4 -= func_801C73F0(0x29);
    D_801CD7F8 -= func_801C73F0(0x2A);
    n = D_801CD7FC - func_801C73F0(0x2B);
    e8 = D_801CD7E8 * 0x19;
    D_801CD7FC = n;
    *arg0 += (D_801CD7EC * 0x7D + e8) * 8 + D_801CD7F0 * 0x190 +
             D_801CD7F8 * 0x2BC + n * 0x12C + D_801CD760 * 0x2BC + D_801CD764 * 0xDAC;
}

void func_801C779C(Obj801C4EB8 *arg0) {
    s32 idx;

    if (arg0->unk160 == 0) {
        idx = arg0->unk0 - D_8019FAB8;
        if (idx >= 4 && idx < 11) {
            D_801CD760++;
        }
        if (idx >= 11 && idx < 18) {
            D_80049E78 = 0;
            D_801CD764++;
        }
    }
}

s32 func_801C784C(Sub801C6AE0 *arg0) {
    s32 dx;
    s32 dy;
    s32 dz;

    dx = (arg0->unk4 - D_801A26C0) >> 2;
    dy = (arg0->unk6 - D_801A26C2) >> 2;
    dz = (arg0->unk8 - D_801A26C4) >> 2;
    return dx * dx + dy * dy + dz * dz;
}

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C78B0);

void func_801C7B44(Obj801C4F4C *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

void func_801C7BC4(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

void func_801C7BEC(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 |= 0xF;
    if (arg0->unk15C & arg1->unk38) {
        arg0->unk15C &= ~arg1->unk38;
        arg0->unk14A = 0x3C;
        arg0->unk14B = 0x28;
        arg0->unk14C = 0x14;
    } else {
        arg0->unk15C |= arg1->unk38;
        arg0->unk14A = 0xB4;
        arg0->unk14B = 0xA0;
        arg0->unk14C = 0x8C;
    }
}

void func_801C7C58(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk2D;
}

void func_801C7C74(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk2D);
}

void func_801C7C94(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C |= 1 << arg1->unk6;
}

void func_801C7CB0(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_801C7CCC(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

void func_801C7CEC(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk9;
}

void func_801C7D08(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk9);
}

void func_801C7D28(Obj801C4F4C *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C8248);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C7DC4);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C7F7C);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C8248);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C8534);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C8838);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C8B28);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C8CDC);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C8FB8);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C90C0);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C9190);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C92A0);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C9468);

void func_801C97F4(Obj801C52C0 *arg0, s32 arg1) {
    if (arg0->unk126 == -1) {
        func_800759A4(arg0, arg1, &D_80039C78);
    } else {
        func_80075B08(arg0, arg1, &D_80198B08[arg0->unk126]);
    }
}

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C9854);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C98B0);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C990C);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801C9B4C);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801CA0AC);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801CA338);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801CAB0C);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801CAE7C);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801CB1F8);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801CB24C);

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801CB75C);

void func_801CBAA8(Obj801C52C0 *arg0) {
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

void func_801CBB48(Obj801CBB48 *arg0) {
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

INCLUDE_ASM("asm/USA/fdat056/nonmatchings/fdat056", func_801CBC84);

void func_801CBDAC(Obj801CBB48 *arg0, s32 arg1) {
    Elem801C52C0 *info;
    s32 state;
    s32 orig;
    s32 hit;
    s32 *flag;
    s32 dir;
    Sub8004DE88 pos;

    info = arg0->unk108;
    orig = arg1;
    state = arg1;
    if (arg0->unk36 & 0x10) {
        state = arg0->unk3C;
    }
    if (arg0->unk64.unk0 == 0x16) {
        if (func_8004EAD0(&arg0->unk64) != 0) {
            func_8004DE88(&arg0->unk64, &arg0->unkCC);
            arg0->unkCC.unk0 <<= 6;
            arg0->unkCC.unk2 <<= 6;
            arg0->unkCC.unk4 <<= 6;
            goto fall;
        }
    } else if (info->unk16 != 0 && arg0->unk3D != 0xC0 && (u32)(state - 0x60) >= 2) {
        if (arg0->unk41 != 0x40 || arg0->unk3D != 0xB0) {
            if (arg0->unk2C - arg0->unk8.unk2 < 0x32) {
                goto act;
            }
            pos.unk0 = arg0->unk8.unk0;
            pos.unk2 = arg0->unk8.unk2 + 0x32;
            flag = &D_801A5DC8;
            pos.unk4 = arg0->unk8.unk4;
            *flag = 1;
            hit = func_80074FA4(arg0, &pos);
            *flag = 0;
            if (hit != 0) {
                goto act;
            }
            state = 0x4B;
            arg0->unkCC.unk2 = 0x100;
            arg0->unkCC.unk4 = 0;
            arg0->unkCC.unk0 = 0;
            arg0->unk3C = 0x4B;
            arg0->unk41 = 0x4B;
        }
        arg0->unk148 = 0;
        arg0->unk15C = 0;
        switch (arg0->unk64.unk0) {
        case 1:
        case 2:
        case 0x30:
            func_801C7D28(arg0, 0x1A);
            return;
        case 3:
        case 4:
        case 0x34:
            func_801C7D28(arg0, 0x20);
            return;
        case 5:
        case 6:
        case 0x35:
            func_801C7D28(arg0, 0x21);
            return;
        case 14:
        case 15:
        case 0x31:
            func_801C7D28(arg0, 0x1B);
            return;
        case 16:
        case 17:
        case 0x36:
            func_801C7D28(arg0, 0x22);
            return;
        case 18:
        case 19:
        case 0x37:
            func_801C7D28(arg0, 0x23);
            return;
        case 8:
        case 9:
        case 0x32:
            func_801C7D28(arg0, 0x1C);
            return;
        case 11:
        case 12:
        case 0x33:
            func_801C7D28(arg0, 0x1D);
            return;
        case 0x2D:
        case 0x2E:
            arg0->unk36 &= ~0x10;
            func_801C7D28(arg0, 0x18);
            return;
        }
    }
act:
    switch (state) {
    case 1:
        switch (arg0->unk64.unk0) {
        case 2:
        case 4:
        case 6:
        case 9:
        case 12:
        case 15:
        case 17:
        case 19:
            func_800766E0(arg0, 2, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        case 1:
            if (func_8004EAD0(&arg0->unk64) != 0) {
                func_800766E0(arg0, 2, 1, 0, 2, &info->unk1, func_801CBB48);
            } else {
                func_800766E0(arg0, 1, 1, 0, 0, NULL, D_800760DC);
            }
            break;
        case 3:
        case 5:
            func_800766E0(arg0, 1, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        default:
            if (func_801CBC84(arg0) != 0) {
                func_800766E0(arg0, 1, 1, 0, 0, NULL, D_800760DC);
                arg0->unk64.unkE = info->unk22;
            }
            break;
        }
        break;
    case 2:
        switch (arg0->unk64.unk0) {
        case 2:
        case 4:
        case 6:
        case 9:
        case 12:
        case 15:
        case 17:
        case 19:
            func_800766E0(arg0, 4, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        case 3:
            if (func_8004EAD0(&arg0->unk64) != 0) {
                func_800766E0(arg0, 4, 1, 0, 2, &info->unk1, func_801CBB48);
            } else {
                func_800766E0(arg0, 3, 1, 0, 0, NULL, D_800760DC);
            }
            break;
        case 1:
        case 5:
            func_800766E0(arg0, 3, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        default:
            if (func_801CBC84(arg0) != 0) {
                func_800766E0(arg0, 3, 1, 0, 0, NULL, D_800760DC);
                arg0->unk64.unkE = info->unk22;
            }
            break;
        }
        break;
    case 3:
        switch (arg0->unk64.unk0) {
        case 2:
        case 4:
        case 6:
        case 9:
        case 12:
        case 15:
        case 17:
        case 19:
            func_800766E0(arg0, 6, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        case 5:
            if (func_8004EAD0(&arg0->unk64) != 0) {
                func_800766E0(arg0, 6, 1, 0, 2, &info->unk1, func_801CBB48);
            } else {
                func_800766E0(arg0, 5, 1, 0, 0, NULL, D_800760DC);
            }
            break;
        case 1:
        case 3:
            func_800766E0(arg0, 5, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        default:
            if (func_801CBC84(arg0) != 0) {
                func_800766E0(arg0, 5, 1, 0, 0, NULL, D_800760DC);
                arg0->unk64.unkE = info->unk22;
            }
            break;
        }
        break;
    case 6:
        switch (arg0->unk64.unk0) {
        case 2:
        case 4:
        case 6:
        case 9:
        case 12:
        case 15:
        case 17:
        case 19:
            func_800766E0(arg0, 0xF, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        case 14:
            if (func_8004EAD0(&arg0->unk64) != 0) {
                func_800766E0(arg0, 0xF, 1, 0, 2, &info->unk1, func_801CBB48);
            } else {
                func_800766E0(arg0, 0xE, 1, 0, 0, NULL, D_800760DC);
            }
            break;
        case 16:
        case 18:
            func_800766E0(arg0, 0xE, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        default:
            if (func_801CBC84(arg0) != 0) {
                func_800766E0(arg0, 0xE, 1, 0, 0, NULL, D_800760DC);
                arg0->unk64.unkE = info->unk22;
            }
            break;
        }
        break;
    case 7:
        switch (arg0->unk64.unk0) {
        case 2:
        case 4:
        case 6:
        case 9:
        case 12:
        case 15:
        case 17:
        case 19:
            func_800766E0(arg0, 0x11, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        case 16:
            if (func_8004EAD0(&arg0->unk64) != 0) {
                func_800766E0(arg0, 0x11, 1, 0, 2, &info->unk1, func_801CBB48);
            } else {
                func_800766E0(arg0, 0x10, 1, 0, 0, NULL, D_800760DC);
            }
            break;
        case 14:
        case 18:
            func_800766E0(arg0, 0x10, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        default:
            if (func_801CBC84(arg0) != 0) {
                func_800766E0(arg0, 0x10, 1, 0, 0, NULL, D_800760DC);
                arg0->unk64.unkE = info->unk22;
            }
            break;
        }
        break;
    case 8:
        switch (arg0->unk64.unk0) {
        case 2:
        case 4:
        case 6:
        case 9:
        case 12:
        case 15:
        case 17:
        case 19:
            func_800766E0(arg0, 0x13, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        case 18:
            if (func_8004EAD0(&arg0->unk64) != 0) {
                func_800766E0(arg0, 0x13, 1, 0, 2, &info->unk1, func_801CBB48);
            } else {
                func_800766E0(arg0, 0x12, 1, 0, 0, NULL, D_800760DC);
            }
            break;
        case 14:
        case 16:
            func_800766E0(arg0, 0x12, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        default:
            if (func_801CBC84(arg0) != 0) {
                func_800766E0(arg0, 0x12, 1, 0, 0, NULL, D_800760DC);
                arg0->unk64.unkE = info->unk22;
            }
            break;
        }
        break;
    case 4:
        switch (arg0->unk64.unk0) {
        case 2:
        case 4:
        case 6:
        case 9:
        case 15:
        case 17:
        case 19:
            func_800766E0(arg0, 9, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        case 8:
            if (func_8004EAD0(&arg0->unk64) != 0) {
                func_800766E0(arg0, 9, 1, 0, 2, &info->unk1, func_801CBB48);
            } else {
                func_800766E0(arg0, 8, 1, 0, 0, NULL, D_800760DC);
            }
            break;
        default:
            if (func_801CBC84(arg0) != 0) {
                func_800766E0(arg0, 8, 1, 0, 0, NULL, D_800760DC);
                arg0->unk64.unkE = info->unk22;
            }
            break;
        }
        break;
    case 5:
        switch (arg0->unk64.unk0) {
        case 2:
        case 4:
        case 6:
        case 12:
        case 15:
        case 17:
        case 19:
            func_800766E0(arg0, 0xC, 1, 1, 0, NULL, D_800760DC);
            arg0->unk64.unkE = info->unk22;
            break;
        case 11:
            if (func_8004EAD0(&arg0->unk64) != 0) {
                func_800766E0(arg0, 0xC, 1, 0, 2, &info->unk1, func_801CBB48);
            } else {
                func_800766E0(arg0, 0xB, 1, 0, 0, NULL, D_800760DC);
            }
            break;
        default:
            if (func_801CBC84(arg0) != 0) {
                func_800766E0(arg0, 0xB, 1, 0, 0, NULL, D_800760DC);
                arg0->unk64.unkE = info->unk22;
            }
            break;
        }
        break;
    case 0:
        if (func_801CBC84(arg0) != 0) {
            func_80076578(arg0, 0, 1, D_80076014);
            arg0->unk64.unkE = info->unk22;
        }
        break;
    case 0x40:
        if (arg0->unk3D != 0xC0) {
            if (func_801CBC84(arg0) != 0) {
                if (arg0->unk64.unk0 == 0x38) {
                    func_80076A84(arg0, 0x16, 1, 0xFF, info->unkD, D_800760DC);
                    arg0->unk64.unkE = 0x400;
                } else {
                    func_80076A84(arg0, 0x16, 1, 0xFF, info->unkD, D_800760DC);
                }
            }
            break;
        }
    fall:
        func_800775B8(arg0, 0x19, 1, info->unk22, &arg0->unkCC, func_801C8248);
        break;
    case 0x41:
        func_800775B8(arg0, 0x1A, 1, info->unk22, &arg0->unkCC, func_801C8248);
        break;
    case 0x42:
        func_800775B8(arg0, 0x20, 1, info->unk22, &arg0->unkCC, func_801C8248);
        break;
    case 0x43:
        func_800775B8(arg0, 0x21, 1, info->unk22, &arg0->unkCC, func_801C8248);
        break;
    case 0x44:
        func_800775B8(arg0, 0x1B, 1, info->unk22, &arg0->unkCC, func_801C8248);
        break;
    case 0x45:
        func_800775B8(arg0, 0x22, 1, info->unk22, &arg0->unkCC, func_801C8248);
        break;
    case 0x46:
        func_800775B8(arg0, 0x23, 1, info->unk22, &arg0->unkCC, func_801C8248);
        break;
    case 0x47:
        func_800775B8(arg0, 0x1C, 1, info->unk22, &arg0->unkCC, func_801C8248);
        break;
    case 0x48:
        func_800775B8(arg0, 0x1D, 1, info->unk22, &arg0->unkCC, func_801C8248);
        break;
    case 0x4B:
        func_800775B8(arg0, 0x18, 1, info->unk22, &arg0->unkCC, func_801C8248);
        break;
    case 0x60:
        func_801C7BC4(arg0, info);
        if (arg0->unk64.unk0 != 0x17) {
            arg0->unk15C = 0;
            arg0->unk148 = 0;
            func_8004CE44(0xE, &arg0->unk8, 0x3C, 0);
        }
        switch (orig) {
        case 1:
            func_800766E0(arg0, 2, 1, 0, 2, info->unk1, func_801CBB48);
            state = orig;
            arg0->unk64.unkE = info->unk22;
            arg0->unk36 &= ~0x10;
            break;
        case 2:
            func_800766E0(arg0, 4, 1, 0, 2, info->unk1, func_801CBB48);
            state = orig;
            arg0->unk64.unkE = info->unk22;
            arg0->unk36 &= ~0x10;
            break;
        case 3:
            func_800766E0(arg0, 6, 1, 0, 2, info->unk1, func_801CBB48);
            state = orig;
            arg0->unk64.unkE = info->unk22;
            arg0->unk36 &= ~0x10;
            break;
        case 6:
            func_800766E0(arg0, 0xF, 1, 0, 2, info->unk1, func_801CBB48);
            state = orig;
            arg0->unk64.unkE = info->unk22;
            arg0->unk36 &= ~0x10;
            break;
        case 7:
            func_800766E0(arg0, 0x11, 1, 0, 2, info->unk1, func_801CBB48);
            state = orig;
            arg0->unk64.unkE = info->unk22;
            arg0->unk36 &= ~0x10;
            break;
        case 8:
            func_800766E0(arg0, 0x13, 1, 0, 2, info->unk1, func_801CBB48);
            state = orig;
            arg0->unk64.unkE = info->unk22;
            arg0->unk36 &= ~0x10;
            break;
        case 4:
            func_800766E0(arg0, 9, 1, 0, 2, info->unk1, func_801CBB48);
            state = orig;
            arg0->unk64.unkE = info->unk22;
            arg0->unk36 &= ~0x10;
            break;
        case 5:
            func_800766E0(arg0, 0xC, 1, 0, 2, info->unk1, func_801CBB48);
            state = orig;
            arg0->unk64.unkE = info->unk22;
            arg0->unk36 &= ~0x10;
            break;
        default:
            if (arg0->unk64.unk0 == 0x17) {
                if (func_8004EBF8(&arg0->unk64) != 0) {
                    arg0->unk36 &= ~0x10;
                    func_80076578(arg0, 0, 1, D_80076014);
                } else {
                    func_800765E8(arg0, 0x17, 1, D_80076078);
                }
            } else {
                func_800765E8(arg0, 0x17, 1, D_80076078);
                arg0->unkCC = D_80039C78;
            }
            arg0->unk64.unkE = info->unk22;
            break;
        }
        break;
    case 0x61:
        func_801C7BC4(arg0, info);
        if (arg0->unk64.unk0 == 0x24) {
            if (func_8004EBF8(&arg0->unk64) != 0) {
                arg0->unk36 &= ~0x10;
                func_80076578(arg0, 0, 1, D_80076014);
            } else {
                func_800765E8(arg0, 0x24, 1, D_80076078);
            }
        } else {
            arg0->unk15C = 0;
            arg0->unk148 = 0;
            func_800765E8(arg0, 0x24, 1, D_80076078);
            func_8004EA3C(&arg0->unk64, 1, info->unk9);
            arg0->unkCC = D_80039C78;
            if (arg0->unk2E <= arg0->unk8.unk2 && arg0->unk2E >= arg0->unk8.unk2 - arg0->unk2A) {
                func_8007847C(arg0, 0x64, 5, 0x12C, 0x2BC, 0x64, 0x12C, 0x40);
            }
        }
        break;
    case 0x30:
        func_8007732C(arg0, 0x30, 1, info->unk22, &arg0->unkCC, func_801C8534);
        break;
    case 0x31:
        func_8007732C(arg0, 0x34, 1, info->unk22, &arg0->unkCC, func_801C8534);
        break;
    case 0x32:
        func_8007732C(arg0, 0x35, 1, info->unk22, &arg0->unkCC, func_801C8534);
        break;
    case 0x35:
        func_8007732C(arg0, 0x31, 1, info->unk22, &arg0->unkCC, func_801C8534);
        break;
    case 0x37:
        func_8007732C(arg0, 0x37, 1, info->unk22, &arg0->unkCC, func_801C8534);
        break;
    case 0x33:
        func_8007732C(arg0, 0x32, 1, info->unk22, &arg0->unkCC, func_801C8534);
        break;
    case 0x34:
        func_8007732C(arg0, 0x33, 1, info->unk22, &arg0->unkCC, func_801C8534);
        break;
    case 0x36:
        func_8007732C(arg0, 0x36, 1, info->unk22, &arg0->unkCC, func_801C8534);
        break;
    case 0x38:
        if (abs(arg0->unkCC.unk0) >= 0x15 || abs(arg0->unkCC.unk4) >= 0x15) {
            dir = -ratan2(arg0->unkCC.unk0, arg0->unkCC.unk4);
            dir = dir - arg0->unk12 + 0x100;
            switch ((dir >> 9) & 7) {
            case 0:
                func_8007732C(arg0, 0x31, 1, info->unk22, &arg0->unkCC, func_801C8534);
                break;
            case 1:
                func_8007732C(arg0, 0x37, 1, info->unk22, &arg0->unkCC, func_801C8534);
                break;
            case 2:
                func_8007732C(arg0, 0x33, 1, info->unk22, &arg0->unkCC, func_801C8534);
                break;
            case 3:
                func_8007732C(arg0, 0x35, 1, info->unk22, &arg0->unkCC, func_801C8534);
                break;
            case 4:
                func_8007732C(arg0, 0x30, 1, info->unk22, &arg0->unkCC, func_801C8534);
                break;
            case 5:
                func_8007732C(arg0, 0x34, 1, info->unk22, &arg0->unkCC, func_801C8534);
                break;
            case 6:
                func_8007732C(arg0, 0x32, 1, info->unk22, &arg0->unkCC, func_801C8534);
                break;
            case 7:
                func_8007732C(arg0, 0x36, 1, info->unk22, &arg0->unkCC, func_801C8534);
                break;
            }
        } else {
            func_80076578(arg0, 0, 1, D_80076014);
            func_801C7BC4(arg0, info);
            arg0->unk64.unkE = info->unk22;
        }
        break;
    case 0x20:
        if (arg0->unk64.unk0 == 0x38 && func_8004EBF8(&arg0->unk64) != 0) {
            arg0->unk36 &= ~0x10;
        }
        func_800766E0(arg0, 0x38, 1, 0, 0, NULL, func_801C8B28);
        arg0->unk64.unkE = 0x400;
        break;
    case 0x21:
        if (arg0->unk64.unk0 == 0x2F && func_8004EBF8(&arg0->unk64) != 0) {
            arg0->unk36 &= ~0x10;
        }
        func_800775B8(arg0, 0x2F, 1, 0x400, &arg0->unkCC, func_801C8CDC);
        break;
    case 0x22:
        if ((u8)(arg0->unk64.unk0 - 0x2D) >= 2) {
            arg0->unkCC = D_80039C78;
        }
        func_80077170(arg0, arg0->unk135, 1, &arg0->unkCC, func_801C8FB8);
        break;
    case 0x23:
        if (arg0->unk64.unkC < 0) {
            if (func_8004EBF8(&arg0->unk64) != 0) {
                arg0->unk36 &= ~0x10;
            }
            func_80077170(arg0, arg0->unk135, -1, &arg0->unkCC, func_801C8FB8);
        } else {
            func_80077170(arg0, arg0->unk135, 1, &arg0->unkCC, func_801C8FB8);
            arg0->unk64.unkC = -1;
            arg0->unk64.unk6 = arg0->unk28;
            arg0->unk64.unk8 = arg0->unk2A;
        }
        break;
    case 0x80:
        func_8007790C(arg0, arg0->unk64.unk0, 1, 0x400, &arg0->unkCC, -1, D_800764C4);
        break;
    case 0x81:
        func_800778B8(arg0, arg0->unk64.unk0, 0x400, &arg0->unkCC, -1, func_801C8248);
        break;
    }
    if (!(arg0->unk36 & 0x10)) {
        arg0->unk3C = state;
    }
}

void func_801CD0DC(Obj801C4F4C *arg0) {
    arg0->unk50 = func_801CBDAC;
    arg0->unk54 = func_801C9B4C;
    arg0->unk58 = func_801CB24C;
    arg0->unk5C = func_801CB75C;
    func_801CBAA8(arg0);
}
