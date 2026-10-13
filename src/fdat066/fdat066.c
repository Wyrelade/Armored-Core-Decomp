#include "common.h"
#include "fdat066.h"

void func_801C52C0(Obj801C52C0 *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CBAF4;
    func_801CBAA8(arg0);
}

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C52F0);

void func_801C5548(Obj801C52C0 *arg0) {
    Sub801C5548 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C52F0;
}

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C5584);

void func_801C5668(Obj801C52C0 *arg0) {
    Sub801C5548 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C5584;
}

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C56A4);

void func_801C57CC(Obj801C52C0 *arg0) {
    Sub801C5548 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C56A4;
}

void func_801C5808(Obj801C5808 *arg0) {
    Sub801C5548 *task;
    Sub801C5808 *info;
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

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C58A4);

void func_801C58C8(Obj801C5808 *arg0) {
    s32 unused[0x24];
    Sub801C5548 *task;

    task = func_80072120(4);
    arg0->unk2C = task;
    task->unk10 = arg0->unk38->unk2 * 22;
    arg0->unk2C->unk0 = func_801C5808;
    arg0->unk2C->unk4 = func_801C58A4;
}

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C593C);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C5A60);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C5A74);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C5CA0);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C5DAC);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C5F64);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C6078);

void func_801C6394(Obj801C6394 *arg0) {
    Sub801C6394 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C6078;
}

void func_801C63D0(void) {
}

void func_801C63D8(void) {
    func_8008A80C();
}

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C63F8);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C6474);

void func_801C6510(Obj801C52C0 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

void func_801C6590(Obj801C52C0_fdat000 *arg0, Sub801C5634 *arg1) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~arg1->unk38;
}

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C65B8);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C6624);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C6640);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C6660);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C667C);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C6698);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C66B8);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C66D4);

void func_801C66F4(Obj801C52C0 *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C6C14);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C6790);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C6948);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C6C14);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C6F00);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C7204);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C74F4);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C76A8);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C7984);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C7A8C);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C7B5C);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C7C6C);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C7E34);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C81C0);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C8220);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C827C);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C82D8);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C8518);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C8A78);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C8D04);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C94D8);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C9848);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C9BC4);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C9C18);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801CA128);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801CA474);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801CA514);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801CA650);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801CA778);

void func_801CBAA8(Obj801C52C0 *arg0) {
    arg0->unk50 = func_801CA778;
    arg0->unk54 = func_801C8518;
    arg0->unk58 = func_801C9C18;
    arg0->unk5C = func_801CA128;
    func_801CA474();
}
