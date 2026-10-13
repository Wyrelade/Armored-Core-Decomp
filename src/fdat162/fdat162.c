#include "common.h"
#include "fdat162.h"

INCLUDE_ASM("asm/USA/fdat162/nonmatchings/fdat162", func_801C8580);

INCLUDE_ASM("asm/USA/fdat162/nonmatchings/fdat162", func_801C85D0);

INCLUDE_ASM("asm/USA/fdat162/nonmatchings/fdat162", func_801C86E8);

INCLUDE_ASM("asm/USA/fdat162/nonmatchings/fdat162", func_801C8798);

INCLUDE_ASM("asm/USA/fdat162/nonmatchings/fdat162", func_801C8A58);

INCLUDE_ASM("asm/USA/fdat162/nonmatchings/fdat162", func_801C8B2C);

INCLUDE_ASM("asm/USA/fdat162/nonmatchings/fdat162", func_801C8C38);

void func_801C8CD0(Obj801B8280 *arg0) {
    s32 unused[0x24];
    Sub801C5550 *task;

    task = func_800712E0(0);
    arg0->unk2C = task;
    task->unk0 = func_801C8C38;
    arg0->unk2C->unk4 = NULL;
}

void func_801C8D18(void) {
}

INCLUDE_RODATA("asm/USA/fdat162/nonmatchings/fdat162", D_801C8460);
