#include "common.h"
#include "fdat052.h"

void func_801C5918(Obj801C5454 *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CD8E8;
    func_801CC9A8(arg0);
}

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C5948);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C5F4C);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C5FC8);

Obj801C5454 *func_801C60E0(u8 *arg0) {
    Obj801C5454 *obj;

    if (arg0 >= D_8019FB68) {
        obj = func_80078A2C();
        if (obj != NULL) {
            func_80078B14(obj, arg0);
            obj->unk36 = 2;
            return obj;
        }
    }
    return NULL;
}

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C614C);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C6760);

void func_801C67F4(Obj801C67F4 *arg0) {
    arg0->unk36 = 2;
    arg0->unk58 = func_801C614C;
    arg0->unk50 = 0;
    arg0->unk54 = 0;
    arg0->unk5C = func_801C6760;
    arg0->unk42 = 0;
    arg0->unk44 = 0;
    func_8004E98C(&arg0->unk64, 0, 0, 0);
    arg0->unk10B = 0;
    arg0->unk10A = 0;
}

void func_801C6864(Obj801C6864 *arg0) {
    arg0->unk36 = 2;
    arg0->unk108 = &D_801CE024;
    func_801CD89C(arg0);
}

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C6894);

void func_801C6AEC(Obj801C6864 *arg0) {
    Sub801C6AEC *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C6894;
}

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C6B28);

void func_801C6C50(Obj801C6864 *arg0) {
    Sub801C6AEC *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C6B28;
}

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C6C8C);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C6CF0);

void func_801C6D68(Obj801C6D68 *arg0) {
    Sub801C6D68 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    switch (arg0->unk22) {
    case 0:
        task->unk0 = func_801C6C8C;
        break;
    case 1:
        task->unk0 = func_801C6CF0;
        break;
    }
}

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C6DD4);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C6EB4);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C6EF0);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C720C);

void func_801C7248(void) {
}

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C7250);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C72B4);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C73A8);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C7410);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C7490);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C74B8);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C7524);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C7540);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C7560);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C757C);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C7598);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C75B8);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C75D4);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C75F4);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C7690);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C7848);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C7B14);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C7E00);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C8104);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C83F4);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C85A8);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C8884);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C898C);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C8A5C);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C8B6C);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C8D34);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C90C0);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C9120);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C917C);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C91D8);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C9418);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C9978);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801C9C04);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801CA3D8);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801CA748);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801CAAC4);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801CAB18);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801CB028);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801CB374);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801CB414);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801CB550);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801CB678);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801CC9A8);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801CC9F4);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801CCA78);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801CD804);

INCLUDE_ASM("asm/USA/fdat052/nonmatchings/fdat052", func_801CD89C);
