#include "common.h"
#include "fdat064.h"

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C4DF4);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C4ED4);

void func_801C4F4C(Obj801C4F4C *arg0) {
    func_801C4ED4(arg0);
    if (arg0->unkCC.unk0 >= 0x19) {
        arg0->unkCC.unk0 = 0x18;
    }
    arg0->unk10.unk2 += arg0->unkCC.unk0;
}

void func_801C4FA0(Obj801C4FA0 *arg0) {
    func_801C4ED4();
    if (arg0->unkCC < -0x18) {
        arg0->unkCC = -0x18;
    }
    arg0->unk12 += arg0->unkCC;
}

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C4FF4);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C5144);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C52B8);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C559C);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C56C4);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C5994);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C59F8);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C5C18);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C5DA8);

void func_801C5E7C(Obj801C4FA0 *arg0) {
    arg0->unk36 = 2;
    func_801C5DA8();
}

void func_801C5EA0(Obj801C4FA0 *arg0) {
    arg0->unk36 = 1;
    func_801C5DA8();
}

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C5EC4);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C5F14);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C6030);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C6080);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C6340);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C6414);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C6520);

void func_801C6778(Obj801C4FA0 *arg0) {
    Sub801C6778 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C6520;
}

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C67B4);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C6874);

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C68C8);

void func_801C69F0(Obj801C4FA0 *arg0) {
    Sub801C6778 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C68C8;
}

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C6A2C);

void func_801C6F04(Obj801C6F04 *arg0) {
    Sub801C6F04 *task;

    task = func_80073674(4);
    arg0->unk14 = task;
    task->unk0 = func_801C6A2C;
    if (arg0->unk28 == 0xFF) {
        arg0->unk14->unk8 = -1;
        return;
    }
    arg0->unk14->unk8 = func_80014D78(arg0->unk28);
}

void func_801C6F70(void) {
}

INCLUDE_ASM("asm/USA/fdat064/nonmatchings/fdat064", func_801C6F78);
