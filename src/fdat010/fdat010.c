#include "common.h"
#include "fdat010.h"

void func_801C4C94(Obj801C4C94 *arg0) {
    if (arg0->unk41 == arg0->unk3C) {
        func_8004CC30(0x8F, D_801A5DC0->unk1000, &arg0->unk8, 0x50, 0xBB8, 0xDAC, 0);
    }
    func_80075FC0(arg0);
    if (func_8004F024(&arg0->unk64, &arg0->unk8) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C4D30);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C4E58);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C4EFC);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C4F60);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C50AC);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C5190);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C5268);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C52B8);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C53D4);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C5424);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C56E4);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C57B8);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C58C4);

void func_801C5B1C(Obj801C5B1C *arg0) {
    arg0->unk2C = func_80072120(0);
    arg0->unk2C->unk4 = func_801C58C4;
}

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C5B58);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C5C18);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C5C6C);

void func_801C5D04(Obj801C5B1C *arg0) {
    s32 unused[36];

    arg0->unk2C = func_80072120(0);
    arg0->unk2C->unk4 = func_801C5C6C;
}

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C5D40);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C5E68);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C5EA4);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C5F3C);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C5F84);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C5F98);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C5FD4);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C64AC);

void func_801C6518(void) {
}

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C6520);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C6540);
