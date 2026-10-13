#include "common.h"
#include "fdat026.h"

void func_801C52C0(Obj8007618C *arg0) {
    arg0->unk36 = 0x102;
    arg0->unk108 = &D_801CAB88;
    func_801CAB3C(arg0);
}

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C52F0);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C53D4);

void func_801C5410(void) {
}

s32 func_801C5418(s32 arg0) {
    Elem801C5418 *e;
    s32 dx;
    s32 dy;
    s32 dz;

    e = &D_8019FAB8[arg0];
    dx = (e->unk4 - D_801A26C0) >> 2;
    dy = (e->unk6 - D_801A26C2) >> 2;
    dz = (e->unk8 - D_801A26C4) >> 2;
    return dx * dx + dy * dy + dz * dz;
}

void func_801C549C(void) {
    s32 dist5;
    s32 closer;
    u8 *data;

    if (D_801CB0D0 == 0) {
        func_8008C2FC(0x601);
        D_801CB0D0 = 1;
    }
    func_8008A80C();
    if (D_8019F528 == 0 && D_801CB0CC == 1 && func_80052338() != 0) {
        dist5 = func_801C5418(5);
        closer = func_801C5418(6) < dist5;
        do {
            data = D_8019FBC0;
            if (closer) {
                data = D_8019FB94;
            }
        } while (0);
        func_80078CFC(data);
        D_801CB0CC = 2;
    }
}

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C5560);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C55A4);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C5624);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C564C);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C56B8);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C56D4);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C56F4);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C5710);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C572C);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C574C);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C5768);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C5788);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C5824);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C59DC);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C5CA8);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C5F94);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C6298);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C6588);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C673C);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C6A18);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C6B20);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C6BF0);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C6D00);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C6EC8);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C7254);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C72B4);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C7310);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C736C);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C75AC);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C7B0C);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C7D98);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C856C);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C88DC);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C8C58);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C8CAC);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C91BC);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C9508);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C95A8);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C96E4);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801C980C);

INCLUDE_ASM("asm/USA/fdat026/nonmatchings/fdat026", func_801CAB3C);
