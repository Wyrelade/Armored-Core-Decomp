#include "common.h"
#include "fdat120.h"

void func_801C52C0(Obj801C52C0 *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CA9B4;
    func_801CA968(arg0);
}

void func_801C52F0(void) {
}

void func_801C52F8(void) {
    Elem8019FB68 *p;
    s32 i;

    if (D_801CAEF8 == 0) {
        func_8008C2FC(0);
        D_801CAEF8 = 1;
    }
    func_8008A80C();
    if (D_801CAEFE == 0 && (D_801CAEFC++ & 0xF) == 0) {
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
        D_801CAEFE = 1;
    }
}

void func_801C53D0(Obj801C52C0 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

void func_801C5450(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

void func_801C5478(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    u16 mask;

    arg0->unk148 |= 0xF;
    mask = arg1->unk38;
    if (arg0->unk15C & mask) {
        arg0->unk15C &= ~mask;
        arg0->unk14A = 0x3C;
        arg0->unk14B = 0x28;
        arg0->unk14C = 0x14;
    } else {
        arg0->unk15C |= mask;
        arg0->unk14A = 0xB4;
        arg0->unk14B = 0xA0;
        arg0->unk14C = 0x8C;
    }
}

void func_801C54E4(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk2D;
}

void func_801C5500(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk2D);
}

void func_801C5520(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C |= 1 << arg1->unk6;
}

void func_801C553C(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_801C5558(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

void func_801C5578(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk9;
}

void func_801C5594(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk9);
}

void func_801C55B4(Obj801C52C0 *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C5AD4);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C5650);

INCLUDE_RODATA("asm/USA/fdat120/nonmatchings/fdat120", D_801C4B40);

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C5808);

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C5AD4);

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C5DC0);

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C60C4);

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C63B4);

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C6568);

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C6844);

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C694C);

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C6A1C);

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C6B2C);

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C6CF4);

void func_801C7080(Obj801C52C0_fdat000 *arg0, s32 arg1) {
    if (arg0->unk126 == -1) {
        func_800759A4(arg0, arg1, &D_80039C78);
    } else {
        func_80075B08(arg0, arg1, &D_80198B08[arg0->unk126]);
    }
}

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C70E0);

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C713C);

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C7198);

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C73D8);

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C7938);

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C7BC4);

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C8398);

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C8708);

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C8A84);

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C8AD8);

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C8FE8);

void func_801C9334(Obj801C52C0_fdat000 *arg0) {
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

void func_801C93D4(Obj801C93D4 *arg0) {
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

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C9510);

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C9638);

void func_801CA968(Obj801C52C0 *arg0) {
    arg0->unk50 = func_801C9638;
    arg0->unk54 = func_801C73D8;
    arg0->unk58 = func_801C8AD8;
    arg0->unk5C = func_801C8FE8;
    func_801C9334((Obj801C52C0_fdat000 *)arg0);
}
