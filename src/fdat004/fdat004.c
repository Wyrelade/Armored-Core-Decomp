#include "common.h"
#include "fdat004.h"

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C4D30);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C4FFC);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C513C);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C52A0);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C53F4);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C5464);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C54CC);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C5534);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C58AC);

void func_801C59E8(Obj801C59E8 *arg0) {
    arg0->unk36 = 2;
    arg0->unk50 = func_801C4FFC;
    arg0->unk54 = func_801C5534;
    arg0->unk58 = func_801C52A0;
    arg0->unk5C = func_801C58AC;
    arg0->unk42 = 0;
    arg0->unk164 *= 4;
    arg0->unk44 = func_80073904();
    if (arg0->unk54 != NULL) {
        arg0->unk54(arg0, 0);
    }
    if (arg0->unk50 != NULL) {
        arg0->unk50(arg0, arg0->unk41);
    }
}

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C5A90);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C5B70);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C5D8C);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C5DDC);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C5E30);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C5EA8);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C64AC);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C6528);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C6640);

void func_801C66D8(Obj801C66D8 *arg0) {
    s32 unused[36];

    arg0->unk2C = func_80072120(0);
    arg0->unk2C->unk0 = func_801C6640;
    arg0->unk2C->unk4 = NULL;
}

void func_801C6720(Obj801C6720 *arg0) {
    arg0->unkA += 0x20;
}

void func_801C6734(Obj801C6734 *arg0) {
    Sub801C5FDC *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C6720;
}

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C6770);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C690C);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C6948);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C6A28);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C6A64);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C6D80);

void func_801C6DBC(void) {
}

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C6DC4);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C6E54);
