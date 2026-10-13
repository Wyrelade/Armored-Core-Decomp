#include "common.h"
#include "fdat038.h"

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C4CA0);

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C4DD8);

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C4EDC);

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C4FD0);

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C51A8);

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C52E0);

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C5344);

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C53E0);

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C54BC);

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C5620);

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C5670);

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C56C4);

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C5744);

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C5794);

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C58B0);

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C5900);

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C5BC0);

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C5C94);

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C5DA0);

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C5E60);

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C5EB4);

void func_801C61D0(Obj801C61D0 *arg0) {
    Sub801C61D0 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C5EB4;
}

void func_801C620C(void) {
}

s32 func_801C6214(s32 arg0) {
    if (D_8019F528 == 0) {
        switch (arg0) {
        case 1:
            if (D_801C6508 == 0) {
                return 0;
            }
            if (func_80052338() == 0) {
                break;
            }
            func_800529F0(0, 0, 0x68);
            func_8004C318(0x80);
            return 1;
        case 2:
            func_800529F0(0, 0, 0x7A);
            func_800529F0(0, 0, 0x1E);
            func_800529F0(0, 0, 0x7B);
            D_801D3C20->unk6 = D_801D3C60->unk6 = 0x66;
            D_801D3A20->unk6 = D_801D3AE0->unk6 = 0;
            D_801C6504 = 1;
            return 1;
        default:
            return 0;
        }
    }
    return 0;
}

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C6314);

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C63EC);

INCLUDE_ASM("asm/USA/fdat038/nonmatchings/fdat038", func_801C641C);
