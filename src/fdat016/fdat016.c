#include "common.h"
#include "fdat016.h"

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C5384);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C55C0);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C5844);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C59F8);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C5B7C);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C5D24);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C5DA0);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C5E14);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C5E88);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C6080);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C61F8);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C62CC);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C66DC);

void func_801C68E4(void) {
    func_801C62CC();
}

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C6904);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C69BC);

void func_801C6A60(Obj801C6A60 *arg0) {
    func_801C69BC(arg0);
    arg0->unk58 = func_801C66DC;
    arg0->unk5C = func_801C6904;
}

void func_801C6AA0(Obj801C6A60 *arg0) {
    func_801C69BC(arg0);
    arg0->unk58 = func_801C68E4;
    arg0->unk5C = func_801C6904;
}

void func_801C6AE0(Obj801C6A60 *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk108 = D_801CDC7C;
    func_801CDBD4((Obj801C52C0 *)arg0);
}

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C6B10);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C7114);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C7190);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C72A8);

void func_801C730C(Obj801C730C *arg0) {
    s32 unused[36];
    Task801C6D58 *task;

    task = func_80072120(1);
    arg0->unk2C = task;
    task->unk0 = 0;
    arg0->unk2C->unk4 = func_801C72A8;
}

void func_801C7350(Obj801C730C *arg0) {
    func_801C730C(arg0);
}

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C7370);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C7390);

void func_801C75E8(Obj801C730C *arg0) {
    Task801C6D58 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C7390;
}

void func_801C7624(Obj801C730C *arg0) {
    Task801C6D58 *task;
    Sub801C7624 *info;
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

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C76C0);

void func_801C76E4(Obj801C730C *arg0) {
    s32 unused[36];
    Task801C6D58 *task;

    task = func_80072120(4);
    arg0->unk2C = task;
    task->unk10 = arg0->unk38->unk2 * 22;
    arg0->unk2C->unk0 = func_801C7624;
    arg0->unk2C->unk4 = func_801C76C0;
}

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C7758);

void func_801C78F4(Obj801C78F4 *arg0) {
    Task801C788C *task;

    task = func_80073674(1);
    arg0->unk14 = task;
    task->unk0 = func_801C7758;
}

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C7930);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C7A70);

void func_801C7AB8(Obj801C7AB8 *arg0) {
    Sub801C7AB8 *task;

    if (func_801C7A70(arg0->unk22, arg0->unk24) != 0 && func_801C7A70(arg0->unk2A, arg0->unk2C) != 0) {
        task = func_80073674(4);
        arg0->unk14 = task;
        task->unk4 = func_801C7930;
        return;
    }
    arg0->unk6 = -1;
}

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C7B2C);

void func_801C7C0C(Obj801C7AB8 *arg0) {
    Sub801C7AB8 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C7B2C;
}

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C7C48);

void func_801C7F64(Obj801C7AB8 *arg0) {
    Sub801C7AB8 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C7C48;
}

void func_801C7FA0(void) {
}

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C7FA8);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C804C);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C85FC);

void func_801C863C(Obj801C52C0 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(arg0->unk108->unk3A, &arg0->unk8, 0x64, -0x50);
        return;
    }
    func_8004CC30(arg0->unk108->unk3B, D_801A5DC0->unk1000, &arg0->unk8, 0x64, 0x1F40, 0x2710, -0x30);
}

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C86BC);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C86E4);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C8750);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C876C);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C878C);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C87A8);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C87C4);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C87E4);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C8800);

void func_801C8820(Obj801C52C0 *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C = 0;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_801C8D40);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C88BC);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C8A74);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C8D40);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C902C);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C9330);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C9620);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C97D4);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C9AB0);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C9BB8);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C9C88);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C9D98);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801C9F60);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801CA2EC);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801CA34C);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801CA3A8);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801CA404);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801CA644);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801CABA4);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801CAE30);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801CB604);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801CB974);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801CBCF0);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801CBD44);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801CC254);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801CC5A0);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801CC640);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801CC77C);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801CC8A4);

INCLUDE_ASM("asm/USA/fdat016/nonmatchings/fdat016", func_801CDBD4);
