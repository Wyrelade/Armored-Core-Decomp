#include "common.h"
#include "fdat028.h"

INCLUDE_ASM("asm/USA/fdat028/nonmatchings/fdat028", func_801C4CC0);

INCLUDE_ASM("asm/USA/fdat028/nonmatchings/fdat028", func_801C4EFC);

INCLUDE_ASM("asm/USA/fdat028/nonmatchings/fdat028", func_801C5180);

INCLUDE_ASM("asm/USA/fdat028/nonmatchings/fdat028", func_801C5334);

INCLUDE_ASM("asm/USA/fdat028/nonmatchings/fdat028", func_801C54B8);

INCLUDE_ASM("asm/USA/fdat028/nonmatchings/fdat028", func_801C5660);

INCLUDE_ASM("asm/USA/fdat028/nonmatchings/fdat028", func_801C56DC);

INCLUDE_ASM("asm/USA/fdat028/nonmatchings/fdat028", func_801C5750);

INCLUDE_ASM("asm/USA/fdat028/nonmatchings/fdat028", func_801C57C4);

INCLUDE_ASM("asm/USA/fdat028/nonmatchings/fdat028", func_801C59BC);

INCLUDE_ASM("asm/USA/fdat028/nonmatchings/fdat028", func_801C5B34);

void func_801C5C08(Obj801C53A0 *arg0) {
    if (D_801D0B94[arg0->unkFC].unk0 == 0) {
        func_80078E1C(arg0);
    }
}

INCLUDE_ASM("asm/USA/fdat028/nonmatchings/fdat028", func_801C5C4C);

INCLUDE_ASM("asm/USA/fdat028/nonmatchings/fdat028", func_801C5C7C);

INCLUDE_ASM("asm/USA/fdat028/nonmatchings/fdat028", func_801C5DCC);

INCLUDE_ASM("asm/USA/fdat028/nonmatchings/fdat028", func_801C5F3C);

INCLUDE_ASM("asm/USA/fdat028/nonmatchings/fdat028", func_801C5F6C);

INCLUDE_ASM("asm/USA/fdat028/nonmatchings/fdat028", func_801C5FC0);

INCLUDE_ASM("asm/USA/fdat028/nonmatchings/fdat028", func_801C603C);

void func_801C6294(Obj801C60B4 *arg0) {
    Sub801C60B4 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C603C;
}

INCLUDE_ASM("asm/USA/fdat028/nonmatchings/fdat028", func_801C62D0);

void func_801C63F8(Obj801C60B4 *arg0) {
    Sub801C60B4 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C62D0;
}

void func_801C6434(Obj801C60B4 *arg0) {
    Sub801C60B4 *task;
    Sub801C6434 *info;

    if (arg0->unk38->unk0 == 1) {
        task = arg0->unk2C;
        if (task->unk10 == 0) {
            if (func_8006D45C() != 0) {
                func_8006D39C(arg0);
                info = arg0->unk38;
                func_8008A0B0(info->unk4, info->unk5, info->unk6, info->unk8, info->unk9);
            }
        } else {
            task->unk10--;
        }
    }
}

INCLUDE_ASM("asm/USA/fdat028/nonmatchings/fdat028", func_801C64D0);

void func_801C64F4(Obj801C60B4 *arg0) {
    s32 unused[36];
    Sub801C60B4 *task;

    task = func_80072120(4);
    arg0->unk2C = task;
    task->unk10 = arg0->unk38->unk2 * 22;
    arg0->unk2C->unk0 = func_801C6434;
    arg0->unk2C->unk4 = func_801C64D0;
}

INCLUDE_ASM("asm/USA/fdat028/nonmatchings/fdat028", func_801C6568);

void func_801C6A40(Obj801C6A40 *arg0) {
    Sub801C6A40 *task;

    task = func_80073674(4);
    arg0->unk14 = task;
    task->unk0 = func_801C6568;
    if (arg0->unk28 == 0xFF) {
        arg0->unk14->unk8 = -1;
        return;
    }
    arg0->unk14->unk8 = func_80014D78(arg0->unk28);
}

INCLUDE_ASM("asm/USA/fdat028/nonmatchings/fdat028", func_801C6AAC);

void func_801C6B8C(Obj801C6A40 *arg0) {
    Sub801C6A40 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C6AAC;
}

INCLUDE_ASM("asm/USA/fdat028/nonmatchings/fdat028", func_801C6BC8);

void func_801C6EE4(Obj801C6A40 *arg0) {
    Sub801C6A40 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C6BC8;
}

void func_801C6F20(void) {
}

void func_801C6F28(Obj801C6F28 *arg0) {
    arg0->unkBE += arg0->unk1E;
    arg0->unkB8 += arg0->unk28;
    arg0->unkB9 += arg0->unk29;
    arg0->unkBA += arg0->unk2A;
    arg0->unk0 += (s16)arg0->unk18 >> 4;
    arg0->unk2 += (s16)arg0->unk1A >> 4;
    arg0->unk4 += (s16)arg0->unk1C >> 4;
    arg0->unk18 += arg0->unk20;
    arg0->unk1A += arg0->unk22;
    arg0->unk1C += arg0->unk24;
}

INCLUDE_ASM("asm/USA/fdat028/nonmatchings/fdat028", func_801C6FE4);

INCLUDE_ASM("asm/USA/fdat028/nonmatchings/fdat028", func_801C70CC);

INCLUDE_ASM("asm/USA/fdat028/nonmatchings/fdat028", func_801C71B4);

INCLUDE_ASM("asm/USA/fdat028/nonmatchings/fdat028", func_801C7254);

INCLUDE_ASM("asm/USA/fdat028/nonmatchings/fdat028", func_801C72B4);
