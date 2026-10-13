#include "common.h"
#include "fdat006.h"

INCLUDE_ASM("asm/USA/fdat006/nonmatchings/fdat006", func_801C4CD8);

INCLUDE_ASM("asm/USA/fdat006/nonmatchings/fdat006", func_801C4EC8);

INCLUDE_ASM("asm/USA/fdat006/nonmatchings/fdat006", func_801C4FB0);

void func_801C50C0(s32 arg0, s32 arg1) {
    Sub801C4C94 vec;

    vec.unk0 = func_80014D78(500) - 250;
    vec.unk4 = func_80014D78(500) - 250;
    vec.unk2 = 0;
    func_800759A4(arg0, arg1, &vec);
}

INCLUDE_ASM("asm/USA/fdat006/nonmatchings/fdat006", func_801C5124);

INCLUDE_ASM("asm/USA/fdat006/nonmatchings/fdat006", func_801C5320);

INCLUDE_ASM("asm/USA/fdat006/nonmatchings/fdat006", func_801C5374);

void func_801C541C(Elem801C5F00 *arg0, s32 arg1) {
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

INCLUDE_ASM("asm/USA/fdat006/nonmatchings/fdat006", func_801C546C);

void func_801C5588(Obj801C4EB8 *arg0) {
    func_80012794(&arg0->unk22, arg0->unk16, arg0->unk18, 0, D_801A26C0, D_801A26E0, D_801A26E2);
}

INCLUDE_ASM("asm/USA/fdat006/nonmatchings/fdat006", func_801C55D8);

INCLUDE_ASM("asm/USA/fdat006/nonmatchings/fdat006", func_801C5898);

INCLUDE_ASM("asm/USA/fdat006/nonmatchings/fdat006", func_801C596C);

INCLUDE_ASM("asm/USA/fdat006/nonmatchings/fdat006", func_801C5A78);

void func_801C5CD0(Obj801C5CD0 *arg0) {
    Sub801C5CD0 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C5A78;
}

INCLUDE_ASM("asm/USA/fdat006/nonmatchings/fdat006", func_801C5D0C);

INCLUDE_ASM("asm/USA/fdat006/nonmatchings/fdat006", func_801C5DCC);

INCLUDE_ASM("asm/USA/fdat006/nonmatchings/fdat006", func_801C5E20);

void func_801C5EB8(Obj801C5CD0 *arg0) {
    s32 unused[36];

    arg0->unk2C = func_80072120(0);
    arg0->unk2C->unk0 = func_801C5E20;
    arg0->unk2C->unk4 = NULL;
}

void func_801C5F00(Obj801C5F00 *arg0) {
    u8 num;
    s32 count;
    Elem801C5F00 *elem;

    num = arg0->unk23;
    if (num != 0) {
        count = num;
        elem = &D_801D0B68[arg0->unk24];
        do {
            if (elem->unk2C != 0) {
                return;
            }
            count--;
            elem++;
        } while (count != 0);
        arg0->unk6 = -1;
        arg0->unk14 = NULL;
        arg0->unk1C |= 0x8000;
    }
}

INCLUDE_ASM("asm/USA/fdat006/nonmatchings/fdat006", func_801C5F64);

void func_801C5FDC(Obj801C5F00 *arg0) {
    Sub801C5FDC *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    switch (arg0->unk22) {
    case 0:
        task->unk0 = func_801C5F00;
        break;
    case 1:
        task->unk0 = func_801C5F64;
        break;
    }
}

void func_801C6048(void) {
}

void func_801C6050(s32 arg0) {
    D_801D0BA0[arg0].unk0->unk6 = 0;
}

void func_801C6068(s32 arg0) {
    Sub801C6068 *p;

    p = D_801D0B94[arg0].unk0;
    if (p != NULL) {
        p->unk0 = 0;
    }
}

INCLUDE_ASM("asm/USA/fdat006/nonmatchings/fdat006", func_801C6090);

void func_801C6150(void) {
    func_8008A80C();
}

void func_801C6170(void) {
    D_801C6208 += 0x64;
}

void func_801C6190(s32 *arg0) {
    *arg0 += D_801C6208;
}
