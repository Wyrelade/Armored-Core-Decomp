#include "common.h"
#include "fdat076.h"

void func_801C52C0(Obj801C52C0 *arg0) {
    arg0->unk36 = 2;
    arg0->unk108 = &D_801CAF1C;
    func_801CAED0(arg0);
}

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C52F0);

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C53B0);

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C5404);

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C5544);

void func_801C558C(Obj801C558C *arg0) {
    Sub801C558C *task;

    if (func_801C5544(arg0->unk22, arg0->unk24) != 0 && func_801C5544(arg0->unk2A, arg0->unk2C) != 0) {
        task = func_80073674(4);
        arg0->unk14 = task;
        task->unk4 = func_801C5404;
        return;
    }
    arg0->unk6 = -1;
}

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C5600);

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C5664);

void func_801C56DC(Obj801C558C *arg0) {
    Sub801C558C *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    switch (arg0->unk22) {
    case 0:
        task->unk0 = func_801C5600;
        break;
    case 1:
        task->unk0 = func_801C5664;
        break;
    }
}

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C5748);

void func_801C5828(Obj801C558C *arg0) {
    Sub801C558C *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C5748;
}

void func_801C5864(void) {
}

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C586C);

void func_801C5910(void) {
    func_8008A80C();
}

void func_801C5930(void) {
}

void func_801C5938(Obj801C52C0 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

void func_801C59B8(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C59E0);

void func_801C5A4C(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk2D;
}

void func_801C5A68(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk2D);
}

void func_801C5A88(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C |= 1 << arg1->unk6;
}

void func_801C5AA4(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_801C5AC0(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

void func_801C5AE0(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk9;
}

void func_801C5AFC(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk9);
}

void func_801C5B1C(Obj801C52C0 *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C603C);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C5BB8);

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C5D70);

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C603C);

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C6328);

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C662C);

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C691C);

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C6AD0);

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C6DAC);

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C6EB4);

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C6F84);

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C7094);

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C725C);

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C75E8);

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C7648);

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C76A4);

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C7700);

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C7940);

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C7EA0);

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C812C);

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C8900);

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C8C70);

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C8FEC);

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C9040);

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C9550);

void func_801C989C(Obj801C52C0_fdat000 *arg0) {
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

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C993C);

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C9A78);

INCLUDE_ASM("asm/USA/fdat076/nonmatchings/fdat076", func_801C9BA0);

void func_801CAED0(Obj801C52C0 *arg0) {
    arg0->unk50 = func_801C9BA0;
    arg0->unk54 = func_801C7940;
    arg0->unk58 = func_801C9040;
    arg0->unk5C = func_801C9550;
    func_801C989C(arg0);
}
