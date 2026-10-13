#include "common.h"
#include "fdat184.h"

INCLUDE_ASM("asm/USA/fdat184/nonmatchings/fdat184", func_801B81E8);

INCLUDE_ASM("asm/USA/fdat184/nonmatchings/fdat184", func_801B8440);

INCLUDE_ASM("asm/USA/fdat184/nonmatchings/fdat184", func_801B847C);

void func_801B8490(Obj801B82DC *arg0) {
    Sub801C5550 *task;

    task = func_800729F8(0);
    arg0->unk14 = task;
    task->unk0 = func_801B847C;
}

INCLUDE_ASM("asm/USA/fdat184/nonmatchings/fdat184", func_801B84CC);

INCLUDE_ASM("asm/USA/fdat184/nonmatchings/fdat184", func_801B8618);

void func_801B8708(Obj801B82DC *arg0) {
    Sub801C5550 *task;

    task = func_800729F8(0);
    arg0->unk14 = task;
    task->unk0 = func_801B8618;
}

void func_801B8744(void) {
}
