#include "common.h"
#include "fdat038.h"

INCLUDE_RODATA("asm/USA/fdat038/nonmatchings/fdat038", D_801C4B40);

void func_801C4CA0(Obj801C52C0 *arg0) {
    Sub8004DE88 v;
    s16 angle;
    s32 ofs;

    angle = func_80075EB4();
    ofs = 0;
    switch (arg0->unk3C) {
    case 1:
    turn:
        arg0->unk12 = func_800132CC(arg0->unk12, angle, arg0->unk4->unk8);
        func_80014728(arg0->unk12 + ofs, &v);
        func_80014338(&v, 0x3E8, &arg0->unkCC);
        break;
    case 2:
        angle += 0x200;
        goto turn;
    case 3:
        angle -= 0x200;
        goto turn;
    case 6:
        angle += 0x800;
        ofs = 0x800;
        goto turn;
    case 7:
        angle += 0x600;
        ofs = 0x800;
        goto turn;
    case 8:
        angle += 0xA00;
        ofs = 0x800;
        goto turn;
    case 4:
        angle += 0x400;
        goto turn;
    case 5:
        angle -= 0x400;
        goto turn;
    default:
        func_800143B8(&arg0->unkCC, 0x1F4, 0x3E8, &arg0->unkCC);
        break;
    }
    if (func_8004F080(&arg0->unk64, &arg0->unk8) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C4DD8);

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C4EDC);

void func_801C4FD0(Obj801C52C0 *arg0) {
    arg0->unk148 = 0;
    arg0->unk15C = 0;
    if (arg0->unk40 != 0xFF) {
        if (func_800754D0(arg0, D_801C6438) != 0) {
            func_80078E1C(arg0);
        }
        return;
    }
    if (func_801C4EDC(arg0) != 0 && arg0->unk3F == 0) {
        if (func_800781E8(arg0) != 0 && !(rand() & 7)) {
            if (arg0->unk3E != 0 || !(rand() & 7)) {
                func_80077B78(arg0, 0x17, arg0->unk0->unk1C, arg0->unk0->unk20, D_801C645C, 2, 0, 1, 0, -0x12C, arg0->unk48, 2, 3, 0, 0x12C, arg0->unk48);
                arg0->unk3F = (rand() & 0xF) + 0x3C;
                arg0->unk3E = 0;
            } else {
                func_80077B78(arg0, 0x17, arg0->unk0->unk1E, arg0->unk0->unk21, D_801C647C, 1, 0, 1);
                arg0->unk3F = (rand() & 0xF) + 0x14;
            }
            arg0->unk148 = 0xF;
            arg0->unk14A[0] = 0xC8;
            arg0->unk14A[1] = 0xA0;
            arg0->unk14A[2] = 0x8C;
            arg0->unk15C = 1;
        }
    }
    if (arg0->unk3F != 0) {
        arg0->unk3F--;
    }
}

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C51A8);

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C52E0);

void func_801C5344(Obj801C52C0 *arg0) {
    arg0->unk36 = 2;
    arg0->unk50 = func_801C4DD8;
    arg0->unk54 = func_801C51A8;
    arg0->unk58 = func_801C4FD0;
    arg0->unk5C = func_801C52E0;
    arg0->unk64.unk18 = 0;
    arg0->unk41 = 0;
    arg0->unk164 *= 4;
    if (arg0->unk54 != NULL) {
        arg0->unk54(arg0, 0);
    }
    if (arg0->unk50 != NULL) {
        arg0->unk50(arg0, arg0->unk41);
    }
}

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C53E0);

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C54BC);

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C5620);

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C5670);

void func_801C56C4(Obj801C4C94 *arg0) {
    arg0->unk36 = 2;
    arg0->unk54 = func_801C5620;
    arg0->unk58 = func_801C54BC;
    arg0->unk5C = func_801C5670;
    arg0->unk50 = NULL;
    arg0->unk2C = 0x7FFF;
    if (arg0->unk54 != NULL) {
        arg0->unk54(arg0, 0);
    }
    func_8004E98C(&arg0->unk64, 0, 0, 0);
}

void func_801C5744(Elem801C5EA8 *arg0, s32 arg1) {
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

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C5794);

void func_801C58B0(Obj801C4EB8 *arg0) {
    func_80012794(&arg0->unk22, arg0->unk16, arg0->unk18, 0, D_801A26C0, D_801A26E0, D_801A26E2);
}

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C5900);

void func_801C5BC0(Elem801C5EA8 *arg0) {
    u8 id;

    switch (func_801C5900(arg0, arg0->unk38->unk7)) {
    case 1:
        id = arg0->unk38->unk8;
        if (id != 0) {
            func_8004CC30(id, (u8 *)((arg0 - D_801D0B68) + 0x3000), &arg0->unk2C->unk22, 0x64, 0x1F40, 0x2710, 0);
        }
        break;
    case 2:
        id = arg0->unk38->unk9;
        if (id != 0) {
            func_8004CE44(id, &arg0->unk2C->unk22, 0x78, 0);
        }
        break;
    }
}

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C5C94);

void func_801C5DA0(Obj801C52C0_fdat000 *arg0) {
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

void func_801C5E60(Obj801C52C0_fdat000 *arg0) {
    s32 unused[36];

    arg0->unk2C = func_80072120(2);
    arg0->unk2C->unk10 = (Elem801C5EA8 *)arg0 - D_801D0B68;
    arg0->unk2C->unk0 = func_801C5DA0;
}

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C5EB4);

void func_801C61D0(Obj801C61D0 *arg0) {
    Sub801C61D0 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C5EB4;
}

void func_801C620C(void) {
}

s32 func_801C6214(s32 arg0) {
    if (D_8019F528 == 0) {
        switch (arg0) {
        case 1:
            if (D_801C6508 == 0) {
                return 0;
            }
            if (func_80052338() == 0) {
                break;
            }
            func_800529F0(0, 0, 0x68);
            func_8004C318(0x80);
            return 1;
        case 2:
            func_800529F0(0, 0, 0x7A);
            func_800529F0(0, 0, 0x1E);
            func_800529F0(0, 0, 0x7B);
            D_801D3C20->unk6 = D_801D3C60->unk6 = 0x66;
            D_801D3A20->unk6 = D_801D3AE0->unk6 = 0;
            D_801C6504 = 1;
            return 1;
        default:
            return 0;
        }
    }
    return 0;
}

void func_801C6314(void) {
    func_8008A80C();
    if (D_8019F528 == 0) {
        if (D_801C6500 == 0xDC) {
            func_800529F0(0, 0, 0x4F);
        }
        if (D_801C6504 != 0 && func_80052338() != 0) {
            func_8008A778(0xF78, 0x100, 0x95);
            D_801C6504 = 0;
            D_801C6508 = 1;
        }
        if (D_8019F52C == 0x528) {
            func_800529F0(0, 0, 0x50);
        }
        if (D_801C6500 < 0xFFFF) {
            D_801C6500++;
        }
    }
}

void func_801C63EC(Obj801C52C0 *arg0) {
    if (arg0->unk160 == 0) {
        D_801C650C += 0x12C;
    }
}

void func_801C641C(s32 *arg0) {
    *arg0 += D_801C650C;
}
