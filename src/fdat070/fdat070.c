#include "common.h"
#include "fdat070.h"

INCLUDE_RODATA("asm/USA/fdat070/nonmatchings/fdat070", D_801C4B40);

INCLUDE_ASM("asm/USA/fdat070/nonmatchings/fdat070", func_801C4CA0);

INCLUDE_ASM("asm/USA/fdat070/nonmatchings/fdat070", func_801C4DD8);

INCLUDE_ASM("asm/USA/fdat070/nonmatchings/fdat070", func_801C4EDC);

void func_801C4FD0(Obj801C4FD0 *arg0) {
    arg0->unk148 = 0;
    arg0->unk15C = 0;
    if (arg0->unk40 != 0xFF) {
        if (func_800754D0(arg0, &D_801C5800) != 0) {
            func_80078E1C(arg0);
        }
    } else {
        if (func_801C4EDC(arg0) != 0 && arg0->unk3F == 0 && func_800781E8(arg0) != 0 && !(rand() & 7)) {
            if (arg0->unk3E != 0 || !(rand() & 7)) {
                func_80077B78(arg0, 0x17, arg0->unk0->unk1C, arg0->unk0->unk20, D_801C5824, 2, 0, 1, 0, -0x12C, arg0->unk48, 2, 3, 0, 0x12C, arg0->unk48);
                arg0->unk3F = (rand() & 0xF) + 0x3C;
                arg0->unk3E = 0;
            } else {
                func_80077B78(arg0, 0x17, arg0->unk0->unk1E, arg0->unk0->unk21, D_801C5844, 1, 0, 1);
                arg0->unk3F = (rand() & 0xF) + 0x14;
            }
            arg0->unk148 = 0xF;
            arg0->unk14A = 0xC8;
            arg0->unk14B = 0xA0;
            arg0->unk14C = 0x8C;
            arg0->unk15C = 1;
        }
        if (arg0->unk3F != 0) {
            arg0->unk3F--;
        }
    }
}

INCLUDE_ASM("asm/USA/fdat070/nonmatchings/fdat070", func_801C51A8);

INCLUDE_ASM("asm/USA/fdat070/nonmatchings/fdat070", func_801C52E0);

INCLUDE_ASM("asm/USA/fdat070/nonmatchings/fdat070", func_801C5344);

INCLUDE_ASM("asm/USA/fdat070/nonmatchings/fdat070", func_801C53E0);

void func_801C5638(Obj801C5638 *arg0) {
    Sub801C5638 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C53E0;
}

INCLUDE_ASM("asm/USA/fdat070/nonmatchings/fdat070", func_801C5674);

void func_801C579C(Obj801C5638 *arg0) {
    Sub801C5638 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C5674;
}

void func_801C57D8(void) {
}

void func_801C57E0(void) {
    func_8008A80C();
}
