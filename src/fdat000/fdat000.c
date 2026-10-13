#include "common.h"
#include "fdat000.h"

void func_801C52C0(Obj801C52C0 *arg0) {
    arg0->unk36 = 2;
    arg0->unk108 = &D_801CAB98[arg0->unk100];
    func_801CAB4C(arg0);
}

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C5314);

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C53D4);

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C5428);

void func_801C5550(Obj801C52C0 *arg0) {
    Sub801C5550 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C5428;
}

void func_801C558C(void) {
}

void func_801C5594(void) {
    func_8008A80C();
}

void func_801C55B4(Obj801C52C0 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

void func_801C5634(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C565C);

void func_801C56C8(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk2D;
}

void func_801C56E4(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk2D);
}

void func_801C5704(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C |= 1 << arg1->unk6;
}

void func_801C5720(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_801C573C(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C575C);

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C5778);

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C5798);

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C5834);

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C59EC);

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C5CB8);

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C5FA4);

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C62A8);

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C6598);

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C674C);

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C6A28);

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C6B30);

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C6C00);

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C6D10);

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C6ED8);

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C7264);

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C72C4);

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C7320);

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C737C);

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C75BC);

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C7B1C);

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C7DA8);

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C857C);

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C88EC);

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C8C68);

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C8CBC);

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C91CC);

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C9518);

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C95B8);

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C96F4);

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801C981C);

INCLUDE_ASM("asm/USA/fdat000/nonmatchings/fdat000", func_801CAB4C);
