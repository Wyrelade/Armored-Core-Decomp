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

s32 func_801C8798(Elem801C8580 *arg0, s32 arg1) {
    Sub801C8580 *sub;
    s32 turn;
    s32 rot;
    s32 dir;
    s16 speed;
    s16 v;
    s32 neg;

    sub = arg0->unk2C;
    if (arg1 >= 4) {
        turn = 0;
        dir = 1;
        if (arg1 == 4) {
            dir = -1;
        }
    } else {
        turn = 1;
        rot = arg1;
    }
    switch (sub->unk10) {
    case 2:
        rot += 2;
        dir = -dir;
    case 1:
    case 4:
        if (turn) {
            rot = (rot + arg0->unk16) & 3;
            sub->unk1E -= sub->unk20;
            if (sub->unk1E <= 0) {
                sub->unk1E += sub->unk12;
                speed = sub->unk1C;
            } else {
                speed = sub->unk1A;
            }
            D_801C8D24 = speed;
            func_8001380C(&D_801C8D20, &sub->unk8, rot);
        } else if (dir > 0) {
            sub->unk1E -= sub->unk20;
            if (sub->unk1E <= 0) {
                sub->unk1E += sub->unk12;
                v = sub->unk1C;
            } else {
                v = sub->unk1A;
            }
            sub->unk8.unk2 = v;
        } else {
            sub->unk1E -= sub->unk20;
            if (sub->unk1E <= 0) {
                sub->unk1E += sub->unk12;
                neg = -sub->unk1C;
            } else {
                neg = -sub->unk1A;
            }
            sub->unk8.unk2 = neg;
        }
        func_80071340(arg0);
        if (sub->unk10 == 1 || sub->unk10 == 4) {
            if (++sub->unk11 >= sub->unk12) {
                sub->unk10 += 2;
            }
            return 1;
        }
        if (--sub->unk11 == 0) {
            sub->unk10 = 0;
            D_801D44B8[*arg0->unk28].unk0 |= 0x100;
            return 2;
        }
        if (sub->unk11 >= sub->unk13 && arg0->unk38->unkA == 0) {
            if (func_801C86E8(sub) != 0) {
                func_801C8580(arg0, 1);
            }
        }
        return 1;
    case 3:
        if (arg0->unk38->unkA == 0) {
            if (func_801C86E8(sub) == 0) {
                func_801C8580(arg0, 2);
            }
        }
        return 0;
    }
    return 0;
}

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
