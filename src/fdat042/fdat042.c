#include "common.h"
#include "fdat042.h"

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C54CC);

void func_801C55AC(Obj801C4EB8 *arg0) {
    func_8004ECA8(&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
    arg0->unkCC += arg0->unkCE;
}

void func_801C5624(Obj801C5624 *arg0) {
    func_801C55AC(arg0);
    if (arg0->unkCC >= 0x19) {
        arg0->unkCC = 0x18;
    }
    arg0->unk12 += arg0->unkCC;
}

void func_801C5678(Obj801C5624 *arg0) {
    func_801C55AC(arg0);
    if (arg0->unkCC < -0x18) {
        arg0->unkCC = -0x18;
    }
    arg0->unk12 += arg0->unkCC;
}

INCLUDE_RODATA("asm/USA/fdat042/nonmatchings/fdat042", D_801C4B40);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C56CC);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C581C);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C5990);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C5C74);

void func_801C5D9C(Obj801C5D08 *arg0) {
    Buf801C5D08 buf;
    Sub801C7910 vec;
    Sub801C5D08 *sub;
    u8 *tbl;
    u8 kind;
    s32 flags;

    arg0->unk148 = 0;
    arg0->unk15C = 0;
    if (arg0->unk40 != 0xFF) {
        if (func_800754D0(arg0, D_801CCF94) != 0) {
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
        func_80077B78(arg0, 0x17, sub->unk1E, sub->unk21, D_801CCFB8, kind, 0, kind, 0, 0, arg0->unk48);
    }
    if (arg0->unk3F != 0) {
        arg0->unk3F--;
        return;
    }
    tbl = D_801CCF14[arg0->unkFC];
    if (func_801C5C74(arg0, tbl) == 0) {
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

void func_801C606C(s32 arg0, s32 arg1) {
    Sub801C7910 vec;

    vec.unk0 = func_80014D78(100) - 50;
    vec.unk4 = func_80014D78(100) - 50;
    vec.unk2 = 0;
    func_800759A4((Obj801C52C0_fdat000 *)arg0, arg1, (Sub801C7910 *)&vec);
}

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C60D0);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C62F0);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C6480);

void func_801C6554(Obj801C6554 *arg0) {
    arg0->unk36 = 2;
    func_801C6480(arg0);
}

void func_801C6578(Obj801C6554 *arg0) {
    arg0->unk36 = 1;
    func_801C6480(arg0);
}

void func_801C659C(Obj801C6554 *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CCFD8;
    func_801CCEA8(arg0);
}

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C65CC);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C6BD0);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C6C4C);

void func_801C6D64(Obj801C5D08 *arg0) {
    Sub8006D4BC *t;
    s32 unused[2];

    D_801A5DC8 = 1;
    t = func_80075030(arg0, 0x1800);
    if (t != NULL) {
        arg0->unk2C = t->unkE;
        arg0->unk30 = t->unk4 - D_801D0B68;
    } else {
        arg0->unk2C = 0x7FFF;
        arg0->unk30 = -1;
    }
    D_801A5DC8 = 0;
    if (arg0->unk40 != 0xFF) {
        arg0->unk8.unk2 += 0x32;
        if (arg0->unk8.unk2 >= arg0->unk2C) {
            arg0->unk40 = 0;
        }
        if (func_800754D0(arg0, D_801CD638) != 0) {
            func_80078E1C(arg0);
        }
    }
}

void func_801C6E3C(Obj801C6554 *arg0) {
    arg0->unk36 = 1;
    arg0->unk58 = func_801C6D64;
    arg0->unk50 = 0;
    arg0->unk54 = 0;
    arg0->unk5C = 0;
    arg0->unk40 = 0xC8;
    arg0->unk42 = 0;
    arg0->unk44 = 0;
    func_8004E98C(&arg0->unk64, 1, 0, 0);
}

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C6E98);

void func_801C70F0(Obj801C6554 *arg0) {
    Sub801C70F0 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C6E98;
}

void func_801C712C(Obj801C712C *arg0) {
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

void func_801C71EC(Obj801C712C *arg0) {
    s32 unused[36];
    Task801C712C *task;

    task = (Task801C712C *)func_80072120(2);
    arg0->unk2C = task;
    task->unk10 = arg0 - D_801D0B68;
    arg0->unk2C->unk0 = func_801C712C;
}

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C7240);

void func_801C7324(Obj801C6554 *arg0) {
    Sub801C70F0 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C7240;
}

void func_801C7360(Obj801C7360 *arg0) {
    arg0->unk8 += arg0->unk22;
    arg0->unkA += arg0->unk24;
    arg0->unkC += arg0->unk26;
}

void func_801C7394(Obj801C7394 *arg0) {
    Sub801C7394 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C7360;
}

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C73D0);

void func_801C74B0(Obj801C7394 *arg0) {
    Sub801C7394 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C73D0;
}

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C74EC);

void func_801C7808(Obj801C7394 *arg0) {
    Sub801C7394 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C74EC;
}

void func_801C7844(void) {
}

void func_801C784C(void) {
    D_801AC80C = 0;
    func_80078B14(&D_8019FB68.unk2CC0, &D_8019FB68);
    D_8019F51C->unk20[D_8019FB68.unk2CC0.unkE](&D_8019FB68.unk2CC0);
}

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C78B0);

void func_801C7910(Obj801C6554 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

void func_801C7990(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C79B8);

void func_801C7A24(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk2D;
}

void func_801C7A40(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk2D);
}

void func_801C7A60(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C |= 1 << arg1->unk6;
}

void func_801C7A7C(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_801C7A98(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

void func_801C7AB8(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk9;
}

void func_801C7AD4(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk9);
}

void func_801C7AF4(Obj801C6554 *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C8014);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C7B90);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C7D48);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C8014);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C8300);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C8604);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C88F4);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C8AA8);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C8D84);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C8E8C);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C8F5C);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C906C);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C9234);

void func_801C95C0(Obj801C52C0_fdat000 *arg0, s32 arg1) {
    if (arg0->unk126 == -1) {
        func_800759A4(arg0, arg1, &D_80039C78);
        return;
    }
    func_80075B08(arg0, arg1, &D_80198B08[arg0->unk126]);
}

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C9620);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C967C);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C96D8);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C9918);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801C9E78);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801CA104);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801CA8D8);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801CAC48);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801CAFC4);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801CB018);

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801CB528);

void func_801CB874(Obj801C52C0_fdat000 *arg0) {
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

void func_801CB914(Obj801C95A8 *arg0) {
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

INCLUDE_ASM("asm/USA/fdat042/nonmatchings/fdat042", func_801CBA50);

void func_801CBB78(Obj801C95A8 *arg0, s32 arg1) {
    Elem801C52C0 *info;
    s32 state;
    s32 orig;
    s32 hit;
    s32 *flag;
    s32 dir;
    Sub801C7910 pos;

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
            func_801C7AF4(arg0, 0x1A);
            return;
        case 3:
        case 4:
        case 0x34:
            func_801C7AF4(arg0, 0x20);
            return;
        case 5:
        case 6:
        case 0x35:
            func_801C7AF4(arg0, 0x21);
            return;
        case 14:
        case 15:
        case 0x31:
            func_801C7AF4(arg0, 0x1B);
            return;
        case 16:
        case 17:
        case 0x36:
            func_801C7AF4(arg0, 0x22);
            return;
        case 18:
        case 19:
        case 0x37:
            func_801C7AF4(arg0, 0x23);
            return;
        case 8:
        case 9:
        case 0x32:
            func_801C7AF4(arg0, 0x1C);
            return;
        case 11:
        case 12:
        case 0x33:
            func_801C7AF4(arg0, 0x1D);
            return;
        case 0x2D:
        case 0x2E:
            arg0->unk36 &= ~0x10;
            func_801C7AF4(arg0, 0x18);
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
                func_800766E0(arg0, 2, 1, 0, 2, &info->unk1, func_801CB914);
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
            if (func_801CBA50(arg0) != 0) {
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
                func_800766E0(arg0, 4, 1, 0, 2, &info->unk1, func_801CB914);
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
            if (func_801CBA50(arg0) != 0) {
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
                func_800766E0(arg0, 6, 1, 0, 2, &info->unk1, func_801CB914);
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
            if (func_801CBA50(arg0) != 0) {
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
                func_800766E0(arg0, 0xF, 1, 0, 2, &info->unk1, func_801CB914);
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
            if (func_801CBA50(arg0) != 0) {
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
                func_800766E0(arg0, 0x11, 1, 0, 2, &info->unk1, func_801CB914);
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
            if (func_801CBA50(arg0) != 0) {
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
                func_800766E0(arg0, 0x13, 1, 0, 2, &info->unk1, func_801CB914);
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
            if (func_801CBA50(arg0) != 0) {
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
                func_800766E0(arg0, 9, 1, 0, 2, &info->unk1, func_801CB914);
            } else {
                func_800766E0(arg0, 8, 1, 0, 0, NULL, D_800760DC);
            }
            break;
        default:
            if (func_801CBA50(arg0) != 0) {
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
                func_800766E0(arg0, 0xC, 1, 0, 2, &info->unk1, func_801CB914);
            } else {
                func_800766E0(arg0, 0xB, 1, 0, 0, NULL, D_800760DC);
            }
            break;
        default:
            if (func_801CBA50(arg0) != 0) {
                func_800766E0(arg0, 0xB, 1, 0, 0, NULL, D_800760DC);
                arg0->unk64.unkE = info->unk22;
            }
            break;
        }
        break;
    case 0:
        if (func_801CBA50(arg0) != 0) {
            func_80076578(arg0, 0, 1, D_80076014);
            arg0->unk64.unkE = info->unk22;
        }
        break;
    case 0x40:
        if (arg0->unk3D != 0xC0) {
            if (func_801CBA50(arg0) != 0) {
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
        func_800775B8(arg0, 0x19, 1, info->unk22, &arg0->unkCC, func_801C8014);
        break;
    case 0x41:
        func_800775B8(arg0, 0x1A, 1, info->unk22, &arg0->unkCC, func_801C8014);
        break;
    case 0x42:
        func_800775B8(arg0, 0x20, 1, info->unk22, &arg0->unkCC, func_801C8014);
        break;
    case 0x43:
        func_800775B8(arg0, 0x21, 1, info->unk22, &arg0->unkCC, func_801C8014);
        break;
    case 0x44:
        func_800775B8(arg0, 0x1B, 1, info->unk22, &arg0->unkCC, func_801C8014);
        break;
    case 0x45:
        func_800775B8(arg0, 0x22, 1, info->unk22, &arg0->unkCC, func_801C8014);
        break;
    case 0x46:
        func_800775B8(arg0, 0x23, 1, info->unk22, &arg0->unkCC, func_801C8014);
        break;
    case 0x47:
        func_800775B8(arg0, 0x1C, 1, info->unk22, &arg0->unkCC, func_801C8014);
        break;
    case 0x48:
        func_800775B8(arg0, 0x1D, 1, info->unk22, &arg0->unkCC, func_801C8014);
        break;
    case 0x4B:
        func_800775B8(arg0, 0x18, 1, info->unk22, &arg0->unkCC, func_801C8014);
        break;
    case 0x60:
        func_801C7990(arg0, info);
        if (arg0->unk64.unk0 != 0x17) {
            arg0->unk15C = 0;
            arg0->unk148 = 0;
            func_8004CE44(0xE, &arg0->unk8, 0x3C, 0);
        }
        switch (orig) {
        case 1:
            func_800766E0(arg0, 2, 1, 0, 2, info->unk1, func_801CB914);
            state = orig;
            arg0->unk64.unkE = info->unk22;
            arg0->unk36 &= ~0x10;
            break;
        case 2:
            func_800766E0(arg0, 4, 1, 0, 2, info->unk1, func_801CB914);
            state = orig;
            arg0->unk64.unkE = info->unk22;
            arg0->unk36 &= ~0x10;
            break;
        case 3:
            func_800766E0(arg0, 6, 1, 0, 2, info->unk1, func_801CB914);
            state = orig;
            arg0->unk64.unkE = info->unk22;
            arg0->unk36 &= ~0x10;
            break;
        case 6:
            func_800766E0(arg0, 0xF, 1, 0, 2, info->unk1, func_801CB914);
            state = orig;
            arg0->unk64.unkE = info->unk22;
            arg0->unk36 &= ~0x10;
            break;
        case 7:
            func_800766E0(arg0, 0x11, 1, 0, 2, info->unk1, func_801CB914);
            state = orig;
            arg0->unk64.unkE = info->unk22;
            arg0->unk36 &= ~0x10;
            break;
        case 8:
            func_800766E0(arg0, 0x13, 1, 0, 2, info->unk1, func_801CB914);
            state = orig;
            arg0->unk64.unkE = info->unk22;
            arg0->unk36 &= ~0x10;
            break;
        case 4:
            func_800766E0(arg0, 9, 1, 0, 2, info->unk1, func_801CB914);
            state = orig;
            arg0->unk64.unkE = info->unk22;
            arg0->unk36 &= ~0x10;
            break;
        case 5:
            func_800766E0(arg0, 0xC, 1, 0, 2, info->unk1, func_801CB914);
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
        func_801C7990(arg0, info);
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
        func_8007732C(arg0, 0x30, 1, info->unk22, &arg0->unkCC, func_801C8300);
        break;
    case 0x31:
        func_8007732C(arg0, 0x34, 1, info->unk22, &arg0->unkCC, func_801C8300);
        break;
    case 0x32:
        func_8007732C(arg0, 0x35, 1, info->unk22, &arg0->unkCC, func_801C8300);
        break;
    case 0x35:
        func_8007732C(arg0, 0x31, 1, info->unk22, &arg0->unkCC, func_801C8300);
        break;
    case 0x37:
        func_8007732C(arg0, 0x37, 1, info->unk22, &arg0->unkCC, func_801C8300);
        break;
    case 0x33:
        func_8007732C(arg0, 0x32, 1, info->unk22, &arg0->unkCC, func_801C8300);
        break;
    case 0x34:
        func_8007732C(arg0, 0x33, 1, info->unk22, &arg0->unkCC, func_801C8300);
        break;
    case 0x36:
        func_8007732C(arg0, 0x36, 1, info->unk22, &arg0->unkCC, func_801C8300);
        break;
    case 0x38:
        if (abs(arg0->unkCC.unk0) >= 0x15 || abs(arg0->unkCC.unk4) >= 0x15) {
            dir = -ratan2(arg0->unkCC.unk0, arg0->unkCC.unk4);
            dir = dir - arg0->unk12 + 0x100;
            switch ((dir >> 9) & 7) {
            case 0:
                func_8007732C(arg0, 0x31, 1, info->unk22, &arg0->unkCC, func_801C8300);
                break;
            case 1:
                func_8007732C(arg0, 0x37, 1, info->unk22, &arg0->unkCC, func_801C8300);
                break;
            case 2:
                func_8007732C(arg0, 0x33, 1, info->unk22, &arg0->unkCC, func_801C8300);
                break;
            case 3:
                func_8007732C(arg0, 0x35, 1, info->unk22, &arg0->unkCC, func_801C8300);
                break;
            case 4:
                func_8007732C(arg0, 0x30, 1, info->unk22, &arg0->unkCC, func_801C8300);
                break;
            case 5:
                func_8007732C(arg0, 0x34, 1, info->unk22, &arg0->unkCC, func_801C8300);
                break;
            case 6:
                func_8007732C(arg0, 0x32, 1, info->unk22, &arg0->unkCC, func_801C8300);
                break;
            case 7:
                func_8007732C(arg0, 0x36, 1, info->unk22, &arg0->unkCC, func_801C8300);
                break;
            }
        } else {
            func_80076578(arg0, 0, 1, D_80076014);
            func_801C7990(arg0, info);
            arg0->unk64.unkE = info->unk22;
        }
        break;
    case 0x20:
        if (arg0->unk64.unk0 == 0x38 && func_8004EBF8(&arg0->unk64) != 0) {
            arg0->unk36 &= ~0x10;
        }
        func_800766E0(arg0, 0x38, 1, 0, 0, NULL, func_801C88F4);
        arg0->unk64.unkE = 0x400;
        break;
    case 0x21:
        if (arg0->unk64.unk0 == 0x2F && func_8004EBF8(&arg0->unk64) != 0) {
            arg0->unk36 &= ~0x10;
        }
        func_800775B8(arg0, 0x2F, 1, 0x400, &arg0->unkCC, func_801C8AA8);
        break;
    case 0x22:
        if ((u8)(arg0->unk64.unk0 - 0x2D) >= 2) {
            arg0->unkCC = D_80039C78;
        }
        func_80077170(arg0, arg0->unk135, 1, &arg0->unkCC, func_801C8D84);
        break;
    case 0x23:
        if (arg0->unk64.unkC < 0) {
            if (func_8004EBF8(&arg0->unk64) != 0) {
                arg0->unk36 &= ~0x10;
            }
            func_80077170(arg0, arg0->unk135, -1, &arg0->unkCC, func_801C8D84);
        } else {
            func_80077170(arg0, arg0->unk135, 1, &arg0->unkCC, func_801C8D84);
            arg0->unk64.unkC = -1;
            arg0->unk64.unk6 = arg0->unk28;
            arg0->unk64.unk8 = arg0->unk2A;
        }
        break;
    case 0x80:
        func_8007790C(arg0, arg0->unk64.unk0, 1, 0x400, &arg0->unkCC, -1, D_800764C4);
        break;
    case 0x81:
        func_800778B8(arg0, arg0->unk64.unk0, 0x400, &arg0->unkCC, -1, func_801C8014);
        break;
    }
    if (!(arg0->unk36 & 0x10)) {
        arg0->unk3C = state;
    }
}

void func_801CCEA8(Obj801C52C0 *arg0) {
    arg0->unk50 = func_801CBB78;
    arg0->unk54 = func_801C9918;
    arg0->unk58 = func_801CB018;
    arg0->unk5C = func_801CB528;
    func_801CB874(arg0);
}
