#include "common.h"
#include "fdat070.h"

INCLUDE_ASM("asm/USA/fdat070/nonmatchings/fdat070", func_801C4CA0);

INCLUDE_ASM("asm/USA/fdat070/nonmatchings/fdat070", func_801C4DD8);

INCLUDE_ASM("asm/USA/fdat070/nonmatchings/fdat070", func_801C4EDC);

INCLUDE_ASM("asm/USA/fdat070/nonmatchings/fdat070", func_801C4FD0);

INCLUDE_ASM("asm/USA/fdat070/nonmatchings/fdat070", func_801C51A8);

INCLUDE_ASM("asm/USA/fdat070/nonmatchings/fdat070", func_801C52E0);

INCLUDE_ASM("asm/USA/fdat070/nonmatchings/fdat070", func_801C5344);

INCLUDE_ASM("asm/USA/fdat070/nonmatchings/fdat070", func_801C53E0);

void func_801C5638(Obj801C5638 *arg0) {
    Sub801C5638 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C53E0;
}

INCLUDE_ASM("asm/USA/fdat070/nonmatchings/fdat070", func_801C5674);

void func_801C579C(Obj801C5638 *arg0) {
    Sub801C5638 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C5674;
}

void func_801C57D8(void) {
}

void func_801C57E0(void) {
    func_8008A80C();
}
