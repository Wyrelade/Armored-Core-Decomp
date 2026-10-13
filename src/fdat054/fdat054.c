#include "common.h"
#include "fdat054.h"

void func_801C52A0(Obj801C52A0 *arg0) {
    arg0->unk36 = 2;
    arg0->unk108 = &D_801CA4D8;
    func_801CA48C(arg0);
}

void func_801C52D0(Obj801C52A0 *arg0) {
    arg0->unk36 = 2;
    arg0->unk108 = &D_801CAA1C;
    func_801CA48C(arg0);
}

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C5300);

void func_801C5428(Obj801C52A0 *arg0) {
    Sub801C5428 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C5300;
}

void func_801C5464(Obj801C52A0 *arg0) {
    Sub801C5428 *task;
    Sub801C5464 *info;
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

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C5500);

void func_801C5524(Obj801C52A0 *arg0) {
    u8 unused[0x90];
    Sub801C5428 *task;

    task = func_80072120(4);
    arg0->unk2C = task;
    task->unk10 = arg0->unk38->unk2 * 22;
    arg0->unk2C->unk0 = func_801C5464;
    arg0->unk2C->unk4 = func_801C5500;
}

void func_801C5598(void) {
}

void func_801C55A0(void) {
    if (D_801CAF60 == 0) {
        func_8008C2FC(0x600);
        D_801CAF60 = 1;
    }
    func_8008A80C();
}

void func_801C55E0(Obj801C52A0 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C5660);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C5688);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C56F4);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C5710);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C5730);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C574C);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C5768);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C5788);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C57A4);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C57C4);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C5860);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C5A18);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C5CE4);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C5FD0);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C62D4);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C65C4);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C6778);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C6A54);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C6B5C);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C6C2C);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C6D3C);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C6F04);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C7290);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C72F0);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C734C);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C73A8);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C75E8);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C7B48);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C7DD4);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C85A8);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C8918);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C8C94);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C8CE8);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C91F8);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C9544);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C95E4);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801C9668);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801CA3F4);

INCLUDE_ASM("asm/USA/fdat054/nonmatchings/fdat054", func_801CA48C);
