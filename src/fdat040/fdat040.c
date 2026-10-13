#include "common.h"
#include "fdat040.h"

void func_801C52C0(Obj801C52C0 *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CC084;
    func_801CC038((Obj801C52F0 *)arg0);
}

void func_801C52F0(Obj801C52F0 *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CC5C8;
    func_801CC038(arg0);
}

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C5320);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C53FC);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C5560);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C55B0);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C5604);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C5684);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C56D4);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C57F0);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C5840);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C5B00);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C5BD4);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C5CE0);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C5D80);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C5DE4);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C5E5C);

void func_801C6020(Obj801C52F0 *arg0) {
    s32 unused[36];
    Sub801C6020 *task;
    u16 val;

    task = func_80072120(0xC);
    arg0->unk2C = task;
    task->unk0 = func_801C5E5C;
    task->unk4 = func_801C5D80;
    task->unk10 = arg0->unk38->unk7;
    task->unk12 = 0;
    task->unk16 = arg0->unk38->unk0 << 5;
    val = arg0->unk38->unk0;
    task->unk1A = 0;
    task->unk14 = val;
    task->unk18 = (s16)val * 0x11;
}

void func_801C60BC(Obj801C52F0 *arg0) {
    Sub801C6020 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C5DE4;
}

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C60F8);

void func_801C6350(Obj801C52F0 *arg0) {
    Sub801C6020 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C60F8;
}

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C638C);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C644C);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C64A0);

void func_801C6538(Obj801C52F0 *arg0) {
    s32 unused[36];
    Sub801C6020 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C64A0;
    arg0->unk2C->unk4 = 0;
}

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C6580);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C65E4);

void func_801C665C(Obj801C665C *arg0) {
    Sub801C665C *task;

    task = arg0->unk14 = func_80073674(0);
    switch (arg0->unk22) {
    case 0:
        task->unk0 = func_801C6580;
        break;
    case 1:
        task->unk0 = func_801C65E4;
        break;
    }
}

void func_801C66C8(void) {
}

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C66D0);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C66F8);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C67F8);

void func_801C6A24(Obj801C52F0 *arg0) {
    if (arg0->unk160 == 0 && D_8019F51C->unk20[arg0->unk0->unkA] == func_801C52C0) {
        D_801CCB90 += 0xBB8;
    }
}

void func_801C6A84(s32 *arg0) {
    *arg0 += D_801CCB90;
}

void func_801C6AA0(Obj801C52F0 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

void func_801C6B20(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C6B48);

void func_801C6BB4(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk2D;
}

void func_801C6BD0(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk2D);
}

void func_801C6BF0(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C |= 1 << arg1->unk6;
}

void func_801C6C0C(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_801C6C28(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

void func_801C6C48(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk9;
}

void func_801C6C64(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk9);
}

void func_801C6C84(Obj801C52F0 *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C71A4);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C6D20);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C6ED8);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C71A4);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C7490);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C7794);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C7A84);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C7C38);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C7F14);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C801C);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C80EC);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C81FC);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C83C4);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C8750);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C87B0);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C880C);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C8868);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C8AA8);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C9008);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C9294);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C9A68);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801C9DD8);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801CA154);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801CA1A8);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801CA6B8);

void func_801CAA04(Obj801C52C0_fdat000 *arg0) {
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

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801CAAA4);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801CABE0);

INCLUDE_ASM("asm/USA/fdat040/nonmatchings/fdat040", func_801CAD08);

void func_801CC038(Obj801C52F0 *arg0) {
    arg0->unk50 = func_801CAD08;
    arg0->unk54 = func_801C8AA8;
    arg0->unk58 = func_801CA1A8;
    arg0->unk5C = func_801CA6B8;
    func_801CAA04(arg0);
}
