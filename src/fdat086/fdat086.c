#include "common.h"
#include "fdat086.h"

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C5438);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C5518);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C5590);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C55E4);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C5638);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C5788);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C58FC);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C5BE0);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C5D08);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C5FD8);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C603C);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C625C);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C63EC);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C64C0);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C64E4);

void func_801C6508(Obj801C6508 *arg0) {
    arg0->unk36 = 2;
    arg0->unk108 = &D_801CCF68;
    func_801CCE38(arg0);
}

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C6538);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C6790);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C67CC);

void func_801C6800(Obj801C6800 *arg0) {
    Sub801C6800 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C67CC;
}

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C683C);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C6960);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C6974);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C6BA0);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C6CAC);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C6E64);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C6F78);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C70B8);

void func_801C7100(Obj801C6800 *arg0) {
    Sub801C6800 *task;

    if (func_801C70B8(arg0->unk22, arg0->unk24) != 0 && func_801C70B8(arg0->unk2A, arg0->unk2C) != 0) {
        task = func_80073674(4);
        arg0->unk14 = task;
        task->unk4 = func_801C6F78;
        return;
    }
    arg0->unk6 = -1;
}

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C7174);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C71D8);

void func_801C7250(Obj801C6800 *arg0) {
    Sub801C6800 *task;

    task = arg0->unk14 = func_80073674(0);
    switch (arg0->unk22) {
    case 0:
        task->unk0 = func_801C7174;
        break;
    case 1:
        task->unk0 = func_801C71D8;
        break;
    }
}

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C72BC);

void func_801C739C(Obj801C6800 *arg0) {
    Sub801C6800 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C72BC;
}

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C73D8);

void func_801C76F4(Obj801C6800 *arg0) {
    Sub801C6800 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C73D8;
}

void func_801C7730(void) {
}

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C7738);

void func_801C77E8(s32 arg0) {
    if (D_8019F528 == 0) {
        switch (arg0) {
        case 0:
            func_800529F0(0, 0, 0x9C);
            func_800529F0(0, 0, 0x68);
            func_8004C318(0x80);
            break;
        case 1:
            func_800529F0(0, 0, 0x9D);
            func_800529F0(0, 0, 0x95);
            func_8004C318(0x100);
            D_801CD538 = -0x7530;
            break;
        }
    }
}

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C7884);

void func_801C78A0(Obj801C6508 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C7920);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C7948);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C79B4);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C79D0);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C79F0);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C7A0C);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C7A28);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C7A48);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C7A64);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C7A84);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C7B20);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C7CD8);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C7FA4);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C8290);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C8594);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C8884);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C8A38);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C8D14);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C8E1C);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C8EEC);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C8FFC);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C91C4);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C9550);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C95B0);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C960C);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C9668);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C98A8);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801C9E08);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801CA094);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801CA868);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801CABD8);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801CAF54);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801CAFA8);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801CB4B8);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801CB804);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801CB8A4);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801CB9E0);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801CBB08);

INCLUDE_ASM("asm/USA/fdat086/nonmatchings/fdat086", func_801CCE38);
