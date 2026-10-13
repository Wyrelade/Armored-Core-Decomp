#include "common.h"
#include "fdat024.h"

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C4D04);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C4EF4);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C4FDC);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C50EC);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C5150);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C534C);

void func_801C53A0(Obj801C53A0 *arg0) {
    arg0->unk36 = 2;
    arg0->unk50 = func_801C4D04;
    arg0->unk54 = func_801C5150;
    arg0->unk58 = func_801C4FDC;
    arg0->unk5C = func_801C534C;
    arg0->unk42 = 1;
    arg0->unk44 = func_80073904();
    if (arg0->unk54 != NULL) {
        arg0->unk54(arg0, 0);
    }
    if (arg0->unk50 != NULL) {
        arg0->unk50(arg0, arg0->unk41);
    }
    arg0->unk64.unk18 = -1;
}

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C5448);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C5524);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C5688);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C56D8);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C572C);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C57AC);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C57FC);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C5918);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C5968);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C5C28);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C5CFC);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C5E08);

void func_801C6060(Obj801C53A0 *arg0) {
    Sub801C6060 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C5E08;
}

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C609C);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C615C);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C61B0);

void func_801C6248(Obj801C53A0 *arg0) {
    u8 unused[0x90];
    Sub801C6060 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C61B0;
}

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C6284);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C62E8);

void func_801C6360(Obj801C6360 *arg0) {
    Sub801C6360 *task;

    arg0->unk14 = task = func_80073674(0);
    switch (arg0->unk22) {
    case 0:
        task->unk0 = func_801C6284;
        return;
    case 1:
        task->unk0 = func_801C62E8;
        return;
    }
}

void func_801C63CC(Obj801C63CC *arg0) {
    arg0->unkBE = arg0->unk26 >> 4;
    arg0->unk26 += arg0->unk1E;
    arg0->unkB8 += arg0->unk28;
    arg0->unkB9 += arg0->unk29;
    arg0->unkBA += arg0->unk2A;
    arg0->unk0 += arg0->unk18 >> 8;
    arg0->unk2 += arg0->unk1A >> 8;
    arg0->unk4 += arg0->unk1C >> 8;
    arg0->unk18 += arg0->unk20;
    arg0->unk1A += arg0->unk22;
    arg0->unk1C += arg0->unk24;
}

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C6498);

void func_801C674C(Obj801C6360 *arg0) {
    Sub801C6360 *task;

    task = func_80073674(4);
    arg0->unk14 = task;
    task->unk0 = func_801C6498;
    arg0->unk14->unk8 = func_80014D78(arg0->unk28);
}

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C67A0);

void func_801C6880(Obj801C6360 *arg0) {
    Sub801C6360 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C67A0;
}

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C68BC);

void func_801C6BD8(Obj801C6360 *arg0) {
    Sub801C6360 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C68BC;
}

void func_801C6C14(void) {
}

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C6C1C);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C6C5C);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C6CCC);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C6D94);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C6E14);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C6E80);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C6FD4);

INCLUDE_ASM("asm/USA/fdat024/nonmatchings/fdat024", func_801C7004);
