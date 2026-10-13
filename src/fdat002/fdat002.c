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

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C5EA8);

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

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C6944);

void func_801C698C(void) {
}

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C6994);

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C6BE4);

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C6C20);

INCLUDE_ASM("asm/USA/fdat002/nonmatchings/fdat002", func_801C6CBC);
