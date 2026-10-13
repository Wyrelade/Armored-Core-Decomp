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

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C58C8);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C593C);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C5A60);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C5A74);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C5CA0);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C5DAC);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C5F64);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C6078);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C6394);

void func_801C63D0(void) {
}

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C63D8);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C63F8);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C6474);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C6510);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C6590);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C65B8);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C6624);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C6640);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C6660);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C667C);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C6698);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C66B8);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C66D4);

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801C66F4);

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

INCLUDE_ASM("asm/USA/fdat066/nonmatchings/fdat066", func_801CBAA8);
