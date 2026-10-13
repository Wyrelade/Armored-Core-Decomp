#include "common.h"
#include "fdat160.h"

INCLUDE_ASM("asm/USA/fdat160/nonmatchings/fdat160", func_801C8580);

void func_801C86A4(Obj801C6870 *arg0) {
    arg0->unkA += 0x80;
}

INCLUDE_ASM("asm/USA/fdat160/nonmatchings/fdat160", func_801C86B8);

INCLUDE_ASM("asm/USA/fdat160/nonmatchings/fdat160", func_801C88E4);

INCLUDE_ASM("asm/USA/fdat160/nonmatchings/fdat160", func_801C89F0);

INCLUDE_ASM("asm/USA/fdat160/nonmatchings/fdat160", func_801C8BA8);

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
