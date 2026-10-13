#include "common.h"
#include "fdat120.h"

void func_801C52C0(Obj801C52C0 *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CA9B4;
    func_801CA968(arg0);
}

void func_801C52F0(void) {
}

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C52F8);

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

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C5478);

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

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C5558);

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C5578);

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C5594);

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

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C7080);

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

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C9334);

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C93D4);

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C9510);

INCLUDE_ASM("asm/USA/fdat120/nonmatchings/fdat120", func_801C9638);

void func_801CA968(Obj801C52C0 *arg0) {
    arg0->unk50 = func_801C9638;
    arg0->unk54 = func_801C73D8;
    arg0->unk58 = func_801C8AD8;
    arg0->unk5C = func_801C8FE8;
    func_801C9334();
}
