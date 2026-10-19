#include "common.h"
#include "fdat140.h"

void func_801C52C0(Obj801C52C0 *arg0) {
    arg0->unk36 = 2;
    arg0->unk108 = &D_801CAB50[arg0->unk100];
    func_801CAB04(arg0);
}

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C5314);

void func_801C543C(Obj801C52C0 *arg0) {
    Sub801C5550 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C5314;
}

void func_801C5478(void) {
}

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C5480);

void func_801C556C(Obj801C52C0 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

void func_801C55EC(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

void func_801C5614(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
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

void func_801C5680(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk2D;
}

void func_801C569C(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk2D);
}

void func_801C56BC(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C |= 1 << arg1->unk6;
}

void func_801C56D8(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_801C56F4(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

void func_801C5714(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk9;
}

void func_801C5730(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk9);
}

void func_801C5750(Obj801C52C0 *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C5C70);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C57EC);

INCLUDE_RODATA("asm/USA/fdat140/nonmatchings/fdat140", D_801C4B40);

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C59A4);

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C5C70);

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C5F5C);

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C6260);

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C6550);

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C6704);

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C69E0);

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C6AE8);

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C6BB8);

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C6CC8);

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C6E90);

void func_801C721C(Obj801C52C0_fdat000 *arg0, s32 arg1) {
    if (arg0->unk126 == -1) {
        func_800759A4(arg0, arg1, &D_80039C78);
    } else {
        func_80075B08(arg0, arg1, &D_80198B08[arg0->unk126]);
    }
}

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C727C);

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C72D8);

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C7334);

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C7574);

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C7AD4);

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C7D60);

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C8534);

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C88A4);

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C8C20);

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C8C74);

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C9184);

void func_801C94D0(Obj801C52C0_fdat000 *arg0) {
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

void func_801C9570(Obj801C93D4 *arg0) {
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

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C96AC);

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C97D4);

void func_801CAB04(Obj801C52C0 *arg0) {
    arg0->unk50 = func_801C97D4;
    arg0->unk54 = func_801C7574;
    arg0->unk58 = func_801C8C74;
    arg0->unk5C = func_801C9184;
    func_801C94D0((Obj801C52C0_fdat000 *)arg0);
}
