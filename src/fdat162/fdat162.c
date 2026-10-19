#include "common.h"
#include "fdat162.h"

void func_801C8580(Elem801C8580 *arg0, s32 arg1) {
    s32 count;
    u16 *idx;

    count = arg0->unk26;
    idx = arg0->unk28 + 1;
    do {
        arg0->unk2C->unk10 = arg1;
        if (arg1 == 4) {
            arg0->unk38->unk6 = 0;
        }
        arg0 = &D_801D4488[*idx++];
        count--;
    } while (count != 0);
}

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
