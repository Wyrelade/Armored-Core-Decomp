#include "common.h"
#include "fdat002.h"

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C4DD8);

void func_801C4EB8(Obj801C4EB8 *arg0) {
    func_8004ECA8(&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
    arg0->unkCC += arg0->unkCE;
}

void func_801C4F30(Obj801C4EB8 *arg0) {
    func_801C4EB8(arg0);
    if (arg0->unkCC > 0x18) {
        arg0->unkCC = 0x18;
    }
    arg0->unk12 += arg0->unkCC;
}

void func_801C4F84(Obj801C4EB8 *arg0) {
    func_801C4EB8(arg0);
    if (arg0->unkCC < -0x18) {
        arg0->unkCC = -0x18;
    }
    arg0->unk12 += arg0->unkCC;
}

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C4FD8);

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C5128);

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C529C);

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C5580);

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C56A8);

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C5978);

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C59DC);

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C5BFC);

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C5D8C);

void func_801C5E60(Obj801C4EB8 *arg0) {
    arg0->unk36 = 2;
    func_801C5D8C(arg0);
}

void func_801C5E84(Obj801C4EB8 *arg0) {
    arg0->unk36 = 1;
    func_801C5D8C(arg0);
}

void func_801C5EA8(Elem801C5EA8 *arg0, s32 arg1) {
    s32 count;
    u16 *idx;

    count = arg0->unk26;
    idx = arg0->unk28 + 1;
    do {
        arg0->unk2C->unk10 = arg1;
        if (arg1 == 4) {
            arg0->unk38->unk6 = 0;
        }
        arg0 = &D_801D0B68[*idx++];
        count--;
    } while (count != 0);
}

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C5EF8);

void func_801C6014(Obj801C4EB8 *arg0) {
    func_80012794(&arg0->unk22, arg0->unk16, arg0->unk18, 0, D_801A26C0, D_801A26E0, D_801A26E2);
}

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C6064);

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C6324);

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C63F8);

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C6504);

void func_801C675C(Obj801C4EB8 *arg0) {
    Sub801C5550 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C6504;
}

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C6798);

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C6858);

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C68AC);

void func_801C6944(Obj801C4EB8 *arg0) {
    s32 unused[0x24];
    Sub801C5550 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C68AC;
    arg0->unk2C->unk4 = NULL;
}

void func_801C698C(void) {
}

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C6994);

s32 func_801C6BE4(s32 arg0) {
    if (arg0 == 0) {
        func_800529F0(0, 0, 1);
        func_80078CFC(D_8019FE28);
    }
    return 1;
}

void func_801C6C20(Obj801C4EB8 *arg0) {
    Sub801C6C20 *ref;

    if (arg0->unk160 == 0) {
        ref = arg0->unk0;
        if (D_8019F51C->unk20[ref->unkA] == func_801C5E60) {
            D_801C6DF4 += 0x1F4;
        }
        if (D_8019F51C->unk20[ref->unkA] == func_801C5E84) {
            D_801C6DF0 -= 0x3E8;
        }
    }
}

void func_801C6CBC(s32 *arg0, s32 *arg1) {
    *arg0 += D_801C6DF4;
    *arg1 += D_801C6DF0;
}
