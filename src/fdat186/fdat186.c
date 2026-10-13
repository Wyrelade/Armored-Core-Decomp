#include "common.h"
#include "fdat186.h"

INCLUDE_ASM("asm/USA/fdat186/nonmatchings/fdat186", func_801B81E8);

INCLUDE_ASM("asm/USA/fdat186/nonmatchings/fdat186", func_801B8440);

INCLUDE_ASM("asm/USA/fdat186/nonmatchings/fdat186", func_801B847C);

void func_801B855C(Obj801B82DC *arg0) {
    Sub801C5550 *task;

    task = func_800729F8(0);
    arg0->unk14 = task;
    task->unk0 = func_801B847C;
}

INCLUDE_ASM("asm/USA/fdat186/nonmatchings/fdat186", func_801B8598);

INCLUDE_ASM("asm/USA/fdat186/nonmatchings/fdat186", func_801B86E4);

void func_801B87D4(Obj801B82DC *arg0) {
    Sub801C5550 *task;

    task = func_800729F8(0);
    arg0->unk14 = task;
    task->unk0 = func_801B86E4;
}

void func_801B8810(void) {
}
