#include "common.h"
#include "fdat180.h"

INCLUDE_ASM("asm/USA/fdat180/nonmatchings/fdat180", func_801B81E8);

void func_801B8280(Obj801B8280 *arg0) {
    s32 unused[0x24];
    Sub801C5550 *task;

    task = func_800714A4(0);
    arg0->unk2C = task;
    task->unk0 = func_801B81E8;
    arg0->unk2C->unk4 = NULL;
}

INCLUDE_ASM("asm/USA/fdat180/nonmatchings/fdat180", func_801B82C8);

void func_801B82DC(Obj801B82DC *arg0) {
    Sub801C5550 *task;

    task = func_800729F8(0);
    arg0->unk14 = task;
    task->unk0 = func_801B82C8;
}

INCLUDE_ASM("asm/USA/fdat180/nonmatchings/fdat180", func_801B8318);

void func_801B83F8(Obj801B82DC *arg0) {
    Sub801C5550 *task;

    task = func_800729F8(0);
    arg0->unk14 = task;
    task->unk0 = func_801B8318;
}

INCLUDE_ASM("asm/USA/fdat180/nonmatchings/fdat180", func_801B8434);

INCLUDE_ASM("asm/USA/fdat180/nonmatchings/fdat180", func_801B8580);

void func_801B8670(Obj801B82DC *arg0) {
    Sub801C5550 *task;

    task = func_800729F8(0);
    arg0->unk14 = task;
    task->unk0 = func_801B8580;
}

void func_801B86AC(void) {
}

void func_801B86B4(void) {
    func_80056668(1, 0x1FB, 1, 1, 2, 0xD, 1);
}
