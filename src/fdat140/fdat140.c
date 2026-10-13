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

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C55EC);

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C5614);

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C5680);

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C569C);

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C56BC);

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C56D8);

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C56F4);

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C5714);

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C5730);

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

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C721C);

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

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C94D0);

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C9570);

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C96AC);

INCLUDE_ASM("asm/USA/fdat140/nonmatchings/fdat140", func_801C97D4);

void func_801CAB04(Obj801C52C0 *arg0) {
    arg0->unk50 = func_801C97D4;
    arg0->unk54 = func_801C7574;
    arg0->unk58 = func_801C8C74;
    arg0->unk5C = func_801C9184;
    func_801C94D0();
}
