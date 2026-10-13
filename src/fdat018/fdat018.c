#include "common.h"
#include "fdat018.h"

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C4E14);

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C4EF0);

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C5054);

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C50A4);

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C50F8);

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C5178);

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C5258);

void func_801C52D0(Obj801C52C0 *arg0) {
    func_801C5258(arg0);
    if (arg0->unkCC.unk0 >= 0x19) {
        arg0->unkCC.unk0 = 0x18;
    }
    arg0->unk10.unk2 += arg0->unkCC.unk0;
}

void func_801C5324(Obj801C52C0 *arg0) {
    func_801C5258(arg0);
    if (arg0->unkCC.unk0 < -0x18) {
        arg0->unkCC.unk0 = -0x18;
    }
    arg0->unk10.unk2 += arg0->unkCC.unk0;
}

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C5378);

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C54C8);

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C563C);

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C5920);

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C5A48);

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C5D18);

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C5D7C);

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C5F9C);

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C612C);

void func_801C6200(Obj801C52C0 *arg0) {
    arg0->unk36 = 2;
    func_801C612C(arg0);
}

void func_801C6224(Obj801C52C0 *arg0) {
    arg0->unk36 = 1;
    func_801C612C(arg0);
}

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C6248);

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C6518);

void func_801C6658(Obj801C52C0 *arg0) {
    func_80078598(arg0);
    arg0->unk148 = 0;
    arg0->unk15C = 0;
    if (arg0->unk40 != 0xFF && func_800754D0(arg0, D_801C8200) != 0) {
        func_80078E1C(arg0);
    }
}

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C66B4);

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C6724);

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C678C);

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C67F4);

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C6998);

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C6AD4);

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C6B68);

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C6BB8);

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C6CD4);

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C6D24);

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C6FE4);

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C70B8);

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C71C4);

void func_801C741C(Obj801C53D4 *arg0) {
    Sub801C53D4 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C71C4;
}

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C7458);

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C7518);

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C756C);

void func_801C7694(Obj801C53D4 *arg0) {
    Sub801C53D4 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C756C;
}

void func_801C76D0(Obj801C53D4 *arg0) {
    Sub801C53D4 *task;
    Sub801C76D0 *data;
    s32 timer;

    if (arg0->unk38->unk0 == 1) {
        task = arg0->unk2C;
        timer = task->unk10;
        if (timer == 0) {
            if (func_8006D45C() != 0) {
                func_8006D39C(arg0);
                data = arg0->unk38;
                func_8008A0B0(data->unk4, data->unk5, data->unk6, data->unk8, data->unk9);
            }
        } else {
            task->unk10 = timer - 1;
        }
    }
}

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C776C);

void func_801C7790(Obj801C53D4 *arg0) {
    s32 unused[36];

    arg0->unk2C = func_80072120(4);
    arg0->unk2C->unk10 = arg0->unk38->unk2 * 0x16;
    arg0->unk2C->unk0 = func_801C76D0;
    arg0->unk2C->unk4 = func_801C776C;
}

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C7804);

void func_801C7938(Obj801C53D4 *arg0) {
    Sub801C53D4 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C7804;
}

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C7974);

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C7AB4);

void func_801C7AFC(Obj801C7AB8 *arg0) {
    Sub801C7AB8 *task;

    if (func_801C7AB4(arg0->unk22, arg0->unk24) != 0 && func_801C7AB4(arg0->unk2A, arg0->unk2C) != 0) {
        task = func_80073674(4);
        arg0->unk14 = task;
        task->unk4 = func_801C7974;
        return;
    }
    arg0->unk6 = -1;
}

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C7B70);

void func_801C7C50(Obj801C7AB8 *arg0) {
    Sub801C7AB8 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C7B70;
}

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C7C8C);

void func_801C7FA8(Obj801C7AB8 *arg0) {
    Sub801C7AB8 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C7C8C;
}

void func_801C7FE4(void) {
}

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C7FEC);

INCLUDE_ASM("asm/USA/fdat018/nonmatchings/fdat018", func_801C800C);
