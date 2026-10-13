#include "common.h"
#include "fdat022.h"

INCLUDE_RODATA("asm/USA/fdat022/nonmatchings/fdat022", D_801C4B40);

INCLUDE_ASM("asm/USA/fdat022/nonmatchings/fdat022", func_801C4CFC);

INCLUDE_ASM("asm/USA/fdat022/nonmatchings/fdat022", func_801C4FD0);

INCLUDE_ASM("asm/USA/fdat022/nonmatchings/fdat022", func_801C50C8);

INCLUDE_ASM("asm/USA/fdat022/nonmatchings/fdat022", func_801C51B8);

INCLUDE_ASM("asm/USA/fdat022/nonmatchings/fdat022", func_801C5418);

INCLUDE_ASM("asm/USA/fdat022/nonmatchings/fdat022", func_801C547C);

INCLUDE_ASM("asm/USA/fdat022/nonmatchings/fdat022", func_801C5688);

INCLUDE_ASM("asm/USA/fdat022/nonmatchings/fdat022", func_801C5770);

INCLUDE_ASM("asm/USA/fdat022/nonmatchings/fdat022", func_801C5848);

INCLUDE_ASM("asm/USA/fdat022/nonmatchings/fdat022", func_801C5A0C);

INCLUDE_ASM("asm/USA/fdat022/nonmatchings/fdat022", func_801C5B10);

INCLUDE_ASM("asm/USA/fdat022/nonmatchings/fdat022", func_801C5C00);

INCLUDE_ASM("asm/USA/fdat022/nonmatchings/fdat022", func_801C5E40);

INCLUDE_ASM("asm/USA/fdat022/nonmatchings/fdat022", func_801C5EF8);

void func_801C5F30(Obj801C53A0 *arg0) {
    arg0->unk36 = 2;
    arg0->unk50 = func_801C5A0C;
    arg0->unk54 = func_801C5E40;
    arg0->unk58 = func_801C5C00;
    arg0->unk5C = func_801C5EF8;
    arg0->unk41 = 1;
    arg0->unk64.unk18 = 0;
    arg0->unk164 *= 4;
    if (arg0->unk54 != NULL) {
        arg0->unk54(arg0, 0);
    }
    if (arg0->unk50 != NULL) {
        arg0->unk50(arg0, arg0->unk41);
    }
}

void func_801C5FD0(Obj801C53A0 *arg0) {
    if (D_801D0B94[arg0->unkFC].unk0 == 0) {
        func_80078E1C(arg0);
    }
}

void func_801C6014(Obj801C5C4C *arg0) {
    if (arg0->unkFE != 0) {
        arg0->unk36 = 1;
    } else {
        arg0->unk36 = 2;
    }
    arg0->unk32 = 5;
    arg0->unk58 = func_801C5FD0;
}

Obj801C53A0 *func_801C6044(u8 *arg0) {
    Obj801C53A0 *obj;

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

INCLUDE_ASM("asm/USA/fdat022/nonmatchings/fdat022", func_801C60B0);

INCLUDE_ASM("asm/USA/fdat022/nonmatchings/fdat022", func_801C66C4);

void func_801C6758(Obj801C53A0 *arg0) {
    arg0->unk36 = 2;
    arg0->unk58 = func_801C60B0;
    arg0->unk50 = NULL;
    arg0->unk54 = NULL;
    arg0->unk5C = func_801C66C4;
    arg0->unk42 = 0;
    arg0->unk44 = 0;
    func_8004E98C(&arg0->unk64, 0, 0, 0);
    arg0->unk10B = 0;
    arg0->unk10A = 0;
}

INCLUDE_ASM("asm/USA/fdat022/nonmatchings/fdat022", func_801C67C8);

void func_801C6A20(Obj801C53A0 *arg0) {
    Sub801C6060 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C67C8;
}

void func_801C6A5C(Obj801C53A0 *arg0) {
    Sub801C6060 *task;
    Sub801C6A5C *data;
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

INCLUDE_ASM("asm/USA/fdat022/nonmatchings/fdat022", func_801C6AF8);

void func_801C6B1C(Obj801C53A0 *arg0) {
    u8 unused[0x90];
    Sub801C6060 *task;

    task = func_80072120(4);
    arg0->unk2C = task;
    task->unk10 = arg0->unk38->unk2 * 22;
    arg0->unk2C->unk0 = func_801C6A5C;
    arg0->unk2C->unk4 = func_801C6AF8;
}

void func_801C6B90(Obj801C6720 *arg0) {
    arg0->unkA += 0x20;
}

void func_801C6BA4(Obj801C6360 *arg0) {
    Sub801C6360 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C6B90;
}

INCLUDE_ASM("asm/USA/fdat022/nonmatchings/fdat022", func_801C6BE0);

void func_801C6CC0(Obj801C6360 *arg0) {
    Sub801C6360 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C6BE0;
}

INCLUDE_ASM("asm/USA/fdat022/nonmatchings/fdat022", func_801C6CFC);

void func_801C7018(Obj801C6360 *arg0) {
    Sub801C6360 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C6CFC;
}

void func_801C7054(void) {
}

void func_801C705C(void) {
    func_800529F0(0, 0, 0x1B);
    func_800529F0(0, 0, 0x1C);
    D_801C761C = 3;
}

INCLUDE_ASM("asm/USA/fdat022/nonmatchings/fdat022", func_801C70A0);

s32 func_801C73A4(s32 arg0) {
    if (D_8019F528 == 0 && arg0 == 0 && D_801C761C != 3) {
        func_801C705C();
    }
}

void func_801C73EC(Obj801C53A0 *arg0) {
    if (arg0->unk160 == 0 && D_8019F51C->unk20[arg0->unk0->unkA] == func_801C6758) {
        D_801C7624 += 0x1388;
    }
}

void func_801C744C(s32 *arg0) {
    *arg0 += D_801C7624;
}
