#include "common.h"
#include "fdat008.h"

void func_801C5418(Obj801C5418 *arg0) {
    arg0->unk36 = 2;
    arg0->unk108 = &D_801CBEAC;
    func_801CBE60((Obj801C4C94 *)arg0);
}

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C5448);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C5528);

void func_801C55A0(Obj801C5418 *arg0) {
    func_801C5528();
    if (arg0->unkCC > 0x18) {
        arg0->unkCC = 0x18;
    }
    arg0->unk12 += arg0->unkCC;
}

void func_801C55F4(Obj801C5418 *arg0) {
    func_801C5528();
    if (arg0->unkCC < -0x18) {
        arg0->unkCC = -0x18;
    }
    arg0->unk12 += arg0->unkCC;
}

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C5648);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C5798);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C590C);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C5BF0);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C5D18);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C5FE8);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C604C);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C626C);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C63FC);

void func_801C64D0(Obj801C5418 *arg0) {
    arg0->unk36 = 2;
    func_801C63FC();
}

void func_801C64F4(Obj801C5418 *arg0) {
    arg0->unk36 = 1;
    func_801C63FC();
}

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C6518);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C65D8);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C662C);

void func_801C6710(Obj801C6710 *arg0) {
    Sub801C5CD0 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C662C;
}

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C674C);

void func_801C6870(Obj801C6870 *arg0) {
    arg0->unkA += 0x80;
}

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C6884);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C6AB0);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C6BBC);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C6D74);

void func_801C6E88(void) {
}

s32 func_801C6E90(s32 arg0) {
    if (D_8019F528 == 0 && arg0 == 0) {
        if (D_8019FB94 == 1) {
            func_8008C2FC(0);
        }
        func_800529F0(0, 0, 0x68);
        func_8004C318(0x80);
    }
    return 1;
}

void func_801C6EF0(void) {
    func_8008A80C();
}

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C6F10);

void func_801C6FB4(Obj801C5418 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

void func_801C7034(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C705C);

void func_801C70C8(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk2D;
}

void func_801C70E4(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk2D);
}

void func_801C7104(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C |= 1 << arg1->unk6;
}

void func_801C7120(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_801C713C(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

void func_801C715C(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk9;
}

void func_801C7178(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk9);
}

void func_801C7198(Obj801C4C94 *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C76B8);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C7234);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C73EC);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C76B8);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C79A4);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C7CA8);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C7F98);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C814C);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C8428);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C8530);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C8600);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C8710);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C88D8);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C8C64);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C8CC4);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C8D20);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C8D7C);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C8FBC);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C951C);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C97A8);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801C9F7C);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801CA2EC);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801CA668);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801CA6BC);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801CABCC);

void func_801CAF18(Obj801C52C0 *arg0) {
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

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801CAFB8);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801CB03C);

INCLUDE_ASM("asm/USA/fdat008/nonmatchings/fdat008", func_801CBDC8);

void func_801CBE60(Obj801C4C94 *arg0) {
    arg0->unk50 = func_801CB03C;
    arg0->unk54 = func_801C8FBC;
    arg0->unk58 = func_801CBDC8;
    arg0->unk5C = func_801CABCC;
    func_801CAF18((Obj801C52C0 *)arg0);
}
