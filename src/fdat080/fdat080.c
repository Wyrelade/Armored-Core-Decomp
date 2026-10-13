#include "common.h"
#include "fdat080.h"

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C52FC);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C55C8);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C5708);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C582C);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C5970);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C59E0);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C5A48);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C5AB0);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C5C5C);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C5D98);

void func_801C5E2C(Obj801C5E2C *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CC190;
    func_801CC100(arg0);
}

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C5E5C);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C5EA0);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C5ED0);

void func_801C6128(Obj801C5E2C *arg0) {
    Sub801C6128 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C5ED0;
}

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C6164);

void func_801C61FC(Obj801C5E2C *arg0) {
    s32 unused[36];
    Sub801C6128 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C6164;
}

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C6238);

void func_801C6360(Obj801C5E2C *arg0) {
    Sub801C6128 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C6238;
}

void func_801C639C(Obj801C5E2C *arg0) {
    Sub801C6128 *task;
    Sub801C639C *data;

    if (arg0->unk38->unk0 == 1) {
        task = arg0->unk2C;
        if (task->unk10 == 0) {
            if (func_8006D45C() != 0) {
                func_8006D39C(arg0);
                data = arg0->unk38;
                func_8008A0B0(data->unk4, data->unk5, data->unk6, data->unk8, data->unk9);
            }
        } else {
            task->unk10--;
        }
    }
}

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C6438);

void func_801C645C(Obj801C5E2C *arg0) {
    s32 unused[36];

    arg0->unk2C = func_80072120(4);
    arg0->unk2C->unk10 = arg0->unk38->unk2 * 22;
    arg0->unk2C->unk0 = func_801C639C;
    arg0->unk2C->unk4 = func_801C6438;
}

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C64D0);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C6610);

void func_801C6658(Obj801C6658 *arg0) {
    Sub801C6B04 *task;

    if (func_801C6610(arg0->unk22, arg0->unk24) != 0 && func_801C6610(arg0->unk2A, arg0->unk2C) != 0) {
        task = func_80073674(4);
        arg0->unk14 = task;
        task->unk4 = func_801C64D0;
        return;
    }
    arg0->unk6 = -1;
}

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C66CC);

void func_801C67AC(Obj801C6658 *arg0) {
    Sub801C6B04 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C66CC;
}

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C67E8);

void func_801C6B04(Obj801C6B04 *arg0) {
    Sub801C6B04 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C67E8;
}

void func_801C6B40(void) {
}

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C6B48);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C6B68);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C6BE8);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C6C10);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C6C7C);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C6C98);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C6CB8);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C6CD4);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C6CF0);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C6D10);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C6D2C);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C6D4C);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C6DE8);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C6FA0);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C726C);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C7558);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C785C);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C7B4C);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C7D00);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C7FDC);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C80E4);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C81B4);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C82C4);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C848C);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C8818);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C8878);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C88D4);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C8930);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C8B70);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C90D0);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C935C);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C9B30);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801C9EA0);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801CA21C);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801CA270);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801CA780);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801CAACC);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801CAB6C);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801CACA8);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801CADD0);

INCLUDE_ASM("asm/USA/fdat080/nonmatchings/fdat080", func_801CC100);
