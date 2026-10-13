#include "common.h"
#include "fdat072.h"

INCLUDE_ASM("asm/USA/fdat072/nonmatchings/fdat072", func_801C4D28);

INCLUDE_ASM("asm/USA/fdat072/nonmatchings/fdat072", func_801C4EE8);

INCLUDE_ASM("asm/USA/fdat072/nonmatchings/fdat072", func_801C4F3C);

INCLUDE_ASM("asm/USA/fdat072/nonmatchings/fdat072", func_801C5050);

INCLUDE_ASM("asm/USA/fdat072/nonmatchings/fdat072", func_801C5158);

INCLUDE_ASM("asm/USA/fdat072/nonmatchings/fdat072", func_801C539C);

INCLUDE_ASM("asm/USA/fdat072/nonmatchings/fdat072", func_801C550C);

void func_801C5560(Obj801C5560 *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk50 = func_801C4EE8;
    arg0->unk54 = func_801C539C;
    arg0->unk58 = func_801C5158;
    arg0->unk5C = func_801C550C;
    arg0->unk7C = 0;
    arg0->unk108 = 0;
    arg0->unk41 = 0;
    arg0->unk164 *= 4;
    if (arg0->unk54 != NULL) {
        arg0->unk54(arg0, 0);
    }
    if (arg0->unk50 != NULL) {
        arg0->unk50(arg0, arg0->unk41);
    }
}

INCLUDE_ASM("asm/USA/fdat072/nonmatchings/fdat072", func_801C5600);

INCLUDE_ASM("asm/USA/fdat072/nonmatchings/fdat072", func_801C5C04);

INCLUDE_ASM("asm/USA/fdat072/nonmatchings/fdat072", func_801C5C80);

INCLUDE_ASM("asm/USA/fdat072/nonmatchings/fdat072", func_801C5D98);

void func_801C5EC0(Obj801C5EC0 *arg0) {
    Sub801C5EC0 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C5D98;
}

INCLUDE_ASM("asm/USA/fdat072/nonmatchings/fdat072", func_801C5EFC);

void func_801C6020(Obj801C6870 *arg0) {
    arg0->unkA += 0x80;
}

INCLUDE_ASM("asm/USA/fdat072/nonmatchings/fdat072", func_801C6034);

INCLUDE_ASM("asm/USA/fdat072/nonmatchings/fdat072", func_801C6260);

INCLUDE_ASM("asm/USA/fdat072/nonmatchings/fdat072", func_801C636C);

INCLUDE_ASM("asm/USA/fdat072/nonmatchings/fdat072", func_801C6524);

INCLUDE_ASM("asm/USA/fdat072/nonmatchings/fdat072", func_801C6638);

void func_801C6954(Obj801C6954 *arg0) {
    Sub801C6954 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C6638;
}

void func_801C6990(void) {
}

INCLUDE_ASM("asm/USA/fdat072/nonmatchings/fdat072", func_801C6998);

INCLUDE_ASM("asm/USA/fdat072/nonmatchings/fdat072", func_801C69FC);
