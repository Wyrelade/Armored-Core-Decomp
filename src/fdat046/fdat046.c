#include "common.h"
#include "fdat046.h"

void func_801C52C0(Obj801C52C0 *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CB1E8;
    func_801CB19C(arg0);
}

void func_801C52F0(Obj801C52C0 *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CB72C;
    func_801CB19C(arg0);
}

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C5320);

void func_801C5578(Obj801C52C0 *arg0) {
    Sub801C5578 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C5320;
}

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C55B4);

void func_801C56DC(Obj801C52C0 *arg0) {
    Sub801C5578 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C55B4;
}

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C5718);

void func_801C572C(Obj801C572C *arg0) {
    Sub801C572C *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C5718;
}

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C5768);

void func_801C5848(Obj801C572C *arg0) {
    Sub801C572C *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C5768;
}

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C5884);

void func_801C5BA0(Obj801C572C *arg0) {
    Sub801C572C *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C5884;
}

void func_801C5BDC(void) {
}

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C5BE4);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C5C04);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C5C84);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C5CAC);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C5D18);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C5D34);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C5D54);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C5D70);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C5D8C);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C5DAC);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C5DC8);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C5DE8);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C5E84);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C603C);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C6308);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C65F4);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C68F8);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C6BE8);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C6D9C);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C7078);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C7180);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C7250);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C7360);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C7528);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C78B4);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C7914);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C7970);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C79CC);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C7C0C);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C816C);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C83F8);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C8BCC);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C8F3C);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C92B8);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C930C);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C981C);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C9B68);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C9C08);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C9D44);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801C9E6C);

INCLUDE_ASM("asm/USA/fdat046/nonmatchings/fdat046", func_801CB19C);
