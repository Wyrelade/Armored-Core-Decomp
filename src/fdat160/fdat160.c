#include "common.h"
#include "fdat160.h"

INCLUDE_ASM("asm/USA/fdat160/nonmatchings/fdat160", func_801C8580);

void func_801C86A4(Obj801C6870 *arg0) {
    arg0->unkA += 0x80;
}

INCLUDE_ASM("asm/USA/fdat160/nonmatchings/fdat160", func_801C86B8);

INCLUDE_ASM("asm/USA/fdat160/nonmatchings/fdat160", func_801C88E4);

INCLUDE_ASM("asm/USA/fdat160/nonmatchings/fdat160", func_801C89F0);

void func_801C8BA8(Obj801B82DC *arg0) {
    Sub801C5550 *task;
    u16 n;

    task = func_80072834(8);
    arg0->unk14 = task;
    task->unk4 = func_801C89F0;
    switch (arg0->unk23) {
    case 1:
        arg0->unk14->unk0 = func_801C86A4;
        break;
    case 2:
        arg0->unk14->unk0 = func_801C86B8;
        arg0->unk14->unkC = (u32)&D_801A4C68[arg0->unk28];
        break;
    case 3:
        arg0->unk14->unk0 = func_801C88E4;
        n = arg0->unk28;
        arg0->unk14->unkC = (u32)(n * n) >> 4;
        arg0->unk14->unk8 = rand() & 0x1F;
        break;
    }
    arg0->unk14->unk9 = 0;
}

INCLUDE_ASM("asm/USA/fdat160/nonmatchings/fdat160", func_801C8CBC);

INCLUDE_ASM("asm/USA/fdat160/nonmatchings/fdat160", func_801C8E08);

void func_801C8F00(Obj801B82DC *arg0) {
    Sub801C5550 *task;

    task = func_80072834(0);
    arg0->unk14 = task;
    task->unk0 = func_801C8E08;
}

void func_801C8F3C(void) {
}

INCLUDE_RODATA("asm/USA/fdat160/nonmatchings/fdat160", D_801C8460);
