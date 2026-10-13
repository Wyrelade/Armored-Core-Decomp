#include "common.h"
#include "fdat068.h"

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C52E0);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C5440);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C5494);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C55A0);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C56B0);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C57E4);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C5838);

void func_801C58D4(Obj801C58D4 *arg0) {
    arg0->unk36 = 2;
    arg0->unk108 = &D_801CBA34;
    func_801CB994((Obj801CB994 *)arg0);
    arg0->unk164 *= 4;
}

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C5920);

void func_801C5B78(Obj801C58D4 *arg0) {
    Sub801C5B78 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C5920;
}

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C5BB4);

void func_801C5CDC(Obj801C58D4 *arg0) {
    Sub801C5B78 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C5BB4;
}

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C5D18);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C5E58);

void func_801C5EA0(Obj801C5EA0 *arg0) {
    Sub801C5EA0 *task;

    if (func_801C5E58(arg0->unk22, arg0->unk24) != 0 && func_801C5E58(arg0->unk2A, arg0->unk2C) != 0) {
        task = func_80073674(4);
        arg0->unk14 = task;
        task->unk4 = func_801C5D18;
        return;
    }
    arg0->unk6 = -1;
}

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C5F14);

void func_801C5FF4(Obj801C5EA0 *arg0) {
    Sub801C5EA0 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C5F14;
}

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C6030);

void func_801C634C(Obj801C5EA0 *arg0) {
    Sub801C5EA0 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C6030;
}

void func_801C6388(void) {
}

void func_801C6390(void) {
    func_80056C6C(1, 0x1FB, 1, 1, 2, 0xD, 1);
}

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C63D4);

void func_801C63F4(void) {
}

void func_801C63FC(Obj801C58D4 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C647C);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C64A4);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C6510);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C652C);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C654C);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C6568);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C6584);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C65A4);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C65C0);

void func_801C65E0(Obj801C58D4 *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C6B00);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C667C);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C6834);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C6B00);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C6DEC);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C70F0);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C73E0);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C7594);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C7870);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C7978);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C7A48);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C7B58);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C7D20);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C80AC);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C810C);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C8168);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C81C4);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C8404);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C8964);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C8BF0);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C93C4);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C9734);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C9AB0);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801C9B04);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801CA014);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801CA360);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801CA400);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801CA53C);

INCLUDE_ASM("asm/USA/fdat068/nonmatchings/fdat068", func_801CA664);

void func_801CB994(Obj801CB994 *arg0) {
    arg0->unk50 = func_801CA664;
    arg0->unk54 = func_801C8404;
    arg0->unk58 = func_801C9B04;
    arg0->unk5C = func_801CA014;
    func_801CA360(arg0);
}
