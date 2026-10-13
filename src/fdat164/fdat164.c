#include "common.h"
#include "fdat164.h"

INCLUDE_ASM("asm/USA/fdat164/nonmatchings/fdat164", func_801C8580);

INCLUDE_ASM("asm/USA/fdat164/nonmatchings/fdat164", func_801C87F4);

INCLUDE_ASM("asm/USA/fdat164/nonmatchings/fdat164", func_801C89D4);

INCLUDE_ASM("asm/USA/fdat164/nonmatchings/fdat164", func_801C8B44);

INCLUDE_ASM("asm/USA/fdat164/nonmatchings/fdat164", func_801C8C90);

void func_801C8D88(Obj801B82DC *arg0) {
    Sub801C5550 *task;

    task = func_80072834(0);
    arg0->unk14 = task;
    task->unk0 = func_801C8C90;
}

void func_801C8DC4(void) {
}

void func_801C8DCC(void) {
    if ((D_80040FB0 & 7) == 1) {
        D_80041338->unk8 |= 1;
    }
    if ((D_8004134C & 7) == 1) {
        D_800416D4->unk8 |= 1;
    }
}
