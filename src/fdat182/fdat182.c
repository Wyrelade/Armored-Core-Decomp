#include "common.h"
#include "fdat182.h"

INCLUDE_ASM("asm/USA/fdat182/nonmatchings/fdat182", func_801B81E8);

void func_801B8440(Obj801B8280 *arg0) {
    Sub801C5550 *task;

    task = func_800714A4(0);
    arg0->unk2C = task;
    task->unk4 = func_801B81E8;
}

INCLUDE_ASM("asm/USA/fdat182/nonmatchings/fdat182", func_801B847C);

void func_801B8560(Obj801B8280 *arg0) {
    Sub801C5550 *task;

    task = func_800714A4(0);
    arg0->unk2C = task;
    task->unk0 = func_801B847C;
}

void func_801B859C(Obj801C7360 *arg0) {
    arg0->unk8 += arg0->unk22;
    arg0->unkA += arg0->unk24;
    arg0->unkC += arg0->unk26;
}

void func_801B85D0(Obj801B82DC *arg0) {
    Sub801C5550 *task;

    task = func_800729F8(0);
    arg0->unk14 = task;
    task->unk0 = func_801B859C;
}

INCLUDE_ASM("asm/USA/fdat182/nonmatchings/fdat182", func_801B860C);

void func_801B86EC(Obj801B82DC *arg0) {
    Sub801C5550 *task;

    task = func_800729F8(0);
    arg0->unk14 = task;
    task->unk0 = func_801B860C;
}

INCLUDE_ASM("asm/USA/fdat182/nonmatchings/fdat182", func_801B8728);

INCLUDE_ASM("asm/USA/fdat182/nonmatchings/fdat182", func_801B8874);

void func_801B8964(Obj801B82DC *arg0) {
    Sub801C5550 *task;

    task = func_800729F8(0);
    arg0->unk14 = task;
    task->unk0 = func_801B8874;
}

void func_801B89A0(void) {
}
