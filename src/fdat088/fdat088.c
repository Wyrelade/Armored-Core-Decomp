#include "common.h"
#include "fdat088.h"

void func_801C52DC(Obj801C52DC *arg0) {
    arg0->unk36 = 2;
    arg0->unk108 = &D_801CBF1C;
    func_801CBED0(arg0);
}

void func_801C530C(Obj801C52DC *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CC460;
    func_801CBED0(arg0);
}

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C533C);

void func_801C5594(Obj801C52DC *arg0) {
    Sub801C5594 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C533C;
}

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C55D0);

void func_801C56B4(Obj801C52DC *arg0) {
    Sub801C5594 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C55D0;
}

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C56F0);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C5830);

void func_801C5878(Obj801C5878 *arg0) {
    Sub801C5878 *task;

    if (func_801C5830(arg0->unk22, arg0->unk24) != 0 && func_801C5830(arg0->unk2A, arg0->unk2C) != 0) {
        task = func_80073674(4);
        arg0->unk14 = task;
        task->unk4 = func_801C56F0;
        return;
    }
    arg0->unk6 = -1;
}

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C58EC);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C5A10);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C5A24);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C5C50);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C5D5C);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C5F14);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C6028);

void func_801C6500(Obj801C5878 *arg0) {
    Sub801C5878 *task;

    task = func_80073674(4);
    arg0->unk14 = task;
    task->unk0 = func_801C6028;
    if (arg0->unk28 == 0xFF) {
        arg0->unk14->unk8 = -1;
    } else {
        arg0->unk14->unk8 = func_80014D78(arg0->unk28);
    }
}

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C656C);

void func_801C6888(Obj801C5878 *arg0) {
    Sub801C5878 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C656C;
}

void func_801C68C4(void) {
}

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C68CC);

void func_801C68EC(Obj801C68EC *arg0) {
    if (arg0->unk160 == 0) {
        D_801CC9D0 += 0x7D0;
    }
}

void func_801C691C(s32 *arg0) {
    *arg0 += D_801CC9D0;
}

void func_801C6938(Obj801C52DC *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C69B8);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C69E0);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C6A4C);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C6A68);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C6A88);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C6AA4);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C6AC0);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C6AE0);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C6AFC);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C6B1C);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C6BB8);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C6D70);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C703C);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C7328);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C762C);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C791C);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C7AD0);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C7DAC);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C7EB4);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C7F84);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C8094);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C825C);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C85E8);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C8648);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C86A4);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C8700);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C8940);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C8EA0);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C912C);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C9900);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C9C70);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801C9FEC);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801CA040);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801CA550);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801CA89C);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801CA93C);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801CAA78);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801CABA0);

INCLUDE_ASM("asm/USA/fdat088/nonmatchings/fdat088", func_801CBED0);
