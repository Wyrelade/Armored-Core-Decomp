#include "common.h"
#include "fdat062.h"

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C5438);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C5518);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C5590);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C55E4);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C5638);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C5788);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C58FC);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C5BE0);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C5D08);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C5FD8);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C603C);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C625C);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C63EC);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C64C0);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C64E4);

void func_801C6508(Obj801C4F4C *arg0) {
    arg0->unk36 = 2;
    arg0->unk108 = &D_801CBEDC;
    func_801CBDAC(arg0);
    arg0->unk164 *= 4;
}

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C6554);

void func_801C667C(Obj801C4F4C *arg0) {
    Sub801C667C *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C6554;
}

void func_801C66B8(Obj801C4F4C *arg0) {
    Sub801C667C *task;
    Sub801C66B8 *info;
    s32 timer;

    if (arg0->unk38->unk0 == 1) {
        task = arg0->unk2C;
        timer = task->unk10;
        if (timer == 0) {
            if (func_8006D45C() != 0) {
                func_8006D39C(arg0);
                info = arg0->unk38;
                func_8008A0B0(info->unk4, info->unk5, info->unk6, info->unk8, info->unk9);
            }
        } else {
            task->unk10 = timer - 1;
        }
    }
}

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C6754);

void func_801C6778(Obj801C4F4C *arg0) {
    s32 unused[36];

    arg0->unk2C = func_80072120(4);
    arg0->unk2C->unk10 = arg0->unk38->unk2 * 0x16;
    arg0->unk2C->unk0 = func_801C66B8;
    arg0->unk2C->unk4 = func_801C6754;
}

void func_801C67EC(void) {
}

void func_801C67F4(void) {
    func_8008A80C();
}

void func_801C6814(Obj801C4F4C *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

void func_801C6894(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C68BC);

void func_801C6928(Obj801C52C0 *arg0, Sub801C5634 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk2D;
}

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C6944);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C6964);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C6980);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C699C);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C69BC);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C69D8);

void func_801C69F8(Obj801C4F4C *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C6F18);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C6A94);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C6C4C);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C6F18);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C7204);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C7508);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C77F8);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C79AC);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C7C88);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C7D90);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C7E60);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C7F70);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C8138);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C84C4);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C8524);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C8580);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C85DC);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C881C);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C8D7C);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C9008);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C97DC);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C9B4C);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C9EC8);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801C9F1C);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801CA42C);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801CA778);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801CA818);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801CA954);

INCLUDE_ASM("asm/USA/fdat062/nonmatchings/fdat062", func_801CAA7C);

void func_801CBDAC(Obj801C4F4C *arg0) {
    arg0->unk50 = func_801CAA7C;
    arg0->unk54 = func_801C881C;
    arg0->unk58 = func_801C9F1C;
    arg0->unk5C = func_801CA42C;
    func_801CA778(arg0);
}
