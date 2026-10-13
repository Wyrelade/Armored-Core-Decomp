#include "common.h"
#include "fdat094.h"

void func_801C52C0(Obj801C52C0 *arg0) {
    arg0->unk36 = 2;
    arg0->unk108 = &D_801CB45C[arg0->unk100];
    func_801CB410(arg0);
}

void func_801C5314(Obj801C52C0 *arg0) {
    arg0->unk36 = 2;
    arg0->unk108 = &D_801CC428;
    func_801CB410(arg0);
}

void func_801C5344(Obj801C52C0 *arg0) {
    arg0->unk36 = 2;
    arg0->unk108 = &D_801CC96C;
    func_801CB410(arg0);
}

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C5374);

void func_801C55CC(Obj801C52C0 *arg0) {
    Sub801C5550 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C5374;
}

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C5608);

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C56C8);

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C571C);

void func_801C5800(Obj801C52C0 *arg0) {
    Sub801C5550 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C571C;
}

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C583C);

void func_801C5870(Obj801C5870 *arg0) {
    Sub801C5870 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C583C;
}

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C58AC);

void func_801C598C(Obj801C5870 *arg0) {
    Sub801C5870 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C58AC;
}

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C59C8);

void func_801C5CE4(Obj801C5870 *arg0) {
    Sub801C5870 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C59C8;
}

void func_801C5D20(void) {
}

void func_801C5D28(void) {
    func_8008A80C();
}

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C5D48);

void func_801C5E78(Obj801C52C0 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

void func_801C5EF8(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C5F20);

void func_801C5F8C(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk2D;
}

void func_801C5FA8(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk2D);
}

void func_801C5FC8(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C |= 1 << arg1->unk6;
}

void func_801C5FE4(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_801C6000(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C6020);

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C603C);

void func_801C605C(Obj801C52C0 *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C657C);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C60F8);

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C62B0);

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C657C);

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C6868);

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C6B6C);

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C6E5C);

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C7010);

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C72EC);

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C73F4);

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C74C4);

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C75D4);

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C779C);

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C7B28);

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C7B88);

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C7BE4);

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C7C40);

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C7E80);

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C83E0);

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C866C);

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C8E40);

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C91B0);

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C952C);

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C9580);

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C9A90);

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C9DDC);

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C9E7C);

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801C9FB8);

INCLUDE_ASM("asm/USA/fdat094/nonmatchings/fdat094", func_801CA0E0);

void func_801CB410(Obj801C52C0 *arg0) {
    arg0->unk50 = func_801CA0E0;
    arg0->unk54 = func_801C7E80;
    arg0->unk58 = func_801C9580;
    arg0->unk5C = func_801C9A90;
    func_801C9DDC(arg0);
}
