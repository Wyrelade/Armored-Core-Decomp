#include "common.h"
#include "fdat082.h"

void func_801C5438(Obj801C4E64 *arg0) {
    arg0->unk36 = 2;
    arg0->unk108 = &D_801CCA8C;
    func_801CCA40(arg0);
}

void func_801C5468(Obj801C4E64 *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CCFD0;
    func_801CCA40(arg0);
}

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C5498);

void func_801C5578(Obj801C4EB8 *arg0) {
    func_8004ECA8(&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
    arg0->unkCC += arg0->unkCE;
}

void func_801C55F0(Obj801C4E64 *arg0) {
    func_801C5578((Obj801C4EB8 *)arg0);
    if (arg0->unkCC.unk0 >= 0x19) {
        arg0->unkCC.unk0 = 0x18;
    }
    arg0->unk12 += arg0->unkCC.unk0;
}

void func_801C5644(Obj801C4E64 *arg0) {
    func_801C5578((Obj801C4EB8 *)arg0);
    if (arg0->unkCC.unk0 < -0x18) {
        arg0->unkCC.unk0 = -0x18;
    }
    arg0->unk12 += arg0->unkCC.unk0;
}

INCLUDE_RODATA("asm/USA/fdat082/nonmatchings/fdat082", D_801C4B40);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C5698);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C57E8);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C595C);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C5C40);

void func_801C5D68(Obj801C5D08 *arg0) {
    Buf801C5D08 buf;
    Sub8004DE88 vec;
    Sub801C5D08 *sub;
    u8 *tbl;
    u8 kind;
    s32 flags;

    arg0->unk148 = 0;
    arg0->unk15C = 0;
    if (arg0->unk40 != 0xFF) {
        if (func_800754D0(arg0, D_801CD5B4) != 0) {
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
        func_80077B78(arg0, 0x17, sub->unk1E, sub->unk21, D_801CD5D8, kind, 0, kind, 0, 0, arg0->unk48);
    }
    if (arg0->unk3F != 0) {
        arg0->unk3F--;
        return;
    }
    tbl = D_801CD534[arg0->unkFC];
    if (func_801C5C40(arg0, tbl) == 0) {
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

void func_801C6038(s32 arg0, s32 arg1) {
    Sub801C50B0 vec;

    vec.unk0 = func_80014D78(100) - 50;
    vec.unk4 = func_80014D78(100) - 50;
    vec.unk2 = 0;
    func_800759A4((Obj801C52C0 *)arg0, arg1, (u8 *)&vec);
}

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C609C);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C62BC);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C644C);

void func_801C6520(Obj801C4E64 *arg0) {
    arg0->unk36 = 2;
    func_801C644C();
}

void func_801C6544(Obj801C4E64 *arg0) {
    arg0->unk36 = 1;
    func_801C644C();
}

void func_801C6568(Obj801C4E64 *arg0) {
    arg0->unk36 = 1;
    func_8004E98C(&arg0->unk64, 0, 0, 0);
}

void func_801C659C(Elem801C5EA8 *arg0, s32 arg1) {
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

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C65EC);

s32 func_801C6708(Obj801C4EB8 *arg0) {
    return func_80012794(&arg0->unk22, arg0->unk16, arg0->unk18, 0, D_801A26C0, D_801A26E0, D_801A26E2);
}

s32 func_801C6758(Elem801C5EA8 *arg0, s32 arg1) {
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
            D_801CD5FC = speed;
            func_8001380C(&D_801CD5F8, &sub->unk8, rot);
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
            if (func_801C6708((struct Obj801C4EB8 *)sub) != 0) {
                func_801C659C(arg0, 1);
            }
        }
        return 1;
    case 3:
        if (arg0->unk38->unkA == 0) {
            if (func_801C6708((struct Obj801C4EB8 *)sub) == 0) {
                func_801C659C(arg0, 2);
            }
        }
        return 0;
    }
    return 0;
}

void func_801C6A18(Elem801C5EA8 *arg0) {
    switch (func_801C6758(arg0, arg0->unk38->unk7)) {
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

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C6AEC);

void func_801C6BF8(Obj801C6BF8 *arg0) {
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

void func_801C6CB8(Obj801C6BF8 *arg0) {
    s32 unused[36];
    Task801C6BF8 *task;

    task = (Task801C6BF8 *)func_80072120(2);
    arg0->unk2C = task;
    task->unk10 = (Elem801C5EA8 *)arg0 - D_801D0B68;
    arg0->unk2C->unk0 = func_801C6BF8;
}

void func_801C6D0C(Obj801C6D0C *arg0) {
    Sub801C6B04 *task;
    Sub801C6D0C *info;
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

s32 func_801C6DA8(Obj801C730C *arg0, s32 arg1, s32 arg2, ...) {
    if (arg1 == 0x8200) {
        arg0->unk38->unk0 = 1;
    }
    return 0;
}

void func_801C6DCC(Obj801C6D0C *arg0) {
    s32 unused[36];

    arg0->unk2C = func_80072120(4);
    arg0->unk2C->unk10 = arg0->unk38->unk2 * 0x16;
    arg0->unk2C->unk0 = func_801C6D0C;
    arg0->unk2C->unk4 = func_801C6DA8;
}

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C6E40);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C6F80);

void func_801C6FC8(Obj801C6B04 *arg0) {
    Sub801C6B04 *task;

    if (func_801C6F80(arg0->unk22, arg0->unk24) != 0 && func_801C6F80(arg0->unk2A, arg0->unk2C) != 0) {
        task = func_80073674(4);
        arg0->unk14 = task;
        task->unk4 = func_801C6E40;
        return;
    }
    arg0->unk6 = -1;
}

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C703C);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C7358);

void func_801C7394(void) {
}

void func_801C739C(void) {
    func_8008A80C();
}

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C73BC);

void func_801C74A8(Obj801C4E64 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

void func_801C7528(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C7550);

void func_801C75BC(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk2D;
}

void func_801C75D8(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk2D);
}

void func_801C75F8(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C |= 1 << arg1->unk6;
}

void func_801C7614(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_801C7630(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

void func_801C7650(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk9;
}

void func_801C766C(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk9);
}

void func_801C768C(Obj801C4E64 *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C7BAC);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C7728);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C78E0);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C7BAC);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C7E98);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C819C);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C848C);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C8640);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C891C);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C8A24);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C8AF4);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C8C04);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C8DCC);

void func_801C9158(Obj801C52C0 *arg0, s32 arg1) {
    if (arg0->unk126 == -1) {
        func_800759A4(arg0, arg1, D_80039C78);
    } else {
        func_80075B08(arg0, arg1, &D_80198B08[arg0->unk126]);
    }
}

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C91B8);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C9214);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C9270);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C94B0);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C9A10);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801C9C9C);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801CA470);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801CA7E0);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801CAB5C);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801CABB0);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801CB0C0);

void func_801CB40C(Obj801C52C0 *arg0) {
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

void func_801CB4AC(Obj801CB4AC *arg0) {
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

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801CB5E8);

INCLUDE_ASM("asm/USA/fdat082/nonmatchings/fdat082", func_801CB710);

void func_801CCA40(Obj801C4E64 *arg0) {
    arg0->unk50 = func_801CB710;
    arg0->unk54 = func_801C94B0;
    arg0->unk58 = func_801CABB0;
    arg0->unk5C = func_801CB0C0;
    func_801CB40C((Obj801C52C0 *)arg0);
}
