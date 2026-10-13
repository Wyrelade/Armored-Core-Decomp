#include "common.h"
#include "fdat166.h"

INCLUDE_ASM("asm/USA/fdat166/nonmatchings/fdat166", func_801C8580);

INCLUDE_ASM("asm/USA/fdat166/nonmatchings/fdat166", func_801C86CC);

void func_801C87C4(Obj801B82DC *arg0) {
    Sub801C5550 *task;

    task = func_80072834(0);
    arg0->unk14 = task;
    task->unk0 = func_801C86CC;
}

void func_801C8800(void) {
}

INCLUDE_RODATA("asm/USA/fdat166/nonmatchings/fdat166", D_801C8460);
