#include "common.h"
#include "fdat074.h"

INCLUDE_RODATA("asm/USA/fdat074/nonmatchings/fdat074", D_801C4B40);

INCLUDE_ASM("asm/USA/fdat074/nonmatchings/fdat074", func_801C4D48);

INCLUDE_ASM("asm/USA/fdat074/nonmatchings/fdat074", func_801C5138);

INCLUDE_ASM("asm/USA/fdat074/nonmatchings/fdat074", func_801C5390);

INCLUDE_ASM("asm/USA/fdat074/nonmatchings/fdat074", func_801C5498);

INCLUDE_ASM("asm/USA/fdat074/nonmatchings/fdat074", func_801C56A4);

INCLUDE_ASM("asm/USA/fdat074/nonmatchings/fdat074", func_801C5704);

INCLUDE_ASM("asm/USA/fdat074/nonmatchings/fdat074", func_801C596C);

void func_801C5AF0(Obj801C5AF0 *arg0) {
    arg0->unk36 = 2;
    arg0->unk50 = func_801C5138;
    arg0->unk54 = func_801C5704;
    arg0->unk58 = func_801C5498;
    arg0->unk5C = func_801C596C;
    arg0->unk7C = 0;
    arg0->unkFC = 0;
    arg0->unkFE = 0;
    arg0->unk42 = 0;
    arg0->unk164 *= 4;
    arg0->unk44 = func_80073904();
    arg0->unk41 = 0;
    if (arg0->unk54 != NULL) {
        arg0->unk54(arg0, 0);
    }
    if (arg0->unk50 != NULL) {
        arg0->unk50(arg0, arg0->unk41);
    }
}

INCLUDE_ASM("asm/USA/fdat074/nonmatchings/fdat074", func_801C5BA4);

INCLUDE_ASM("asm/USA/fdat074/nonmatchings/fdat074", func_801C5E74);

INCLUDE_ASM("asm/USA/fdat074/nonmatchings/fdat074", func_801C5FB4);

void func_801C60A8(Obj801C5AF0 *arg0) {
    func_80078598();
    arg0->unk148 = 0;
    arg0->unk15C = 0;
    if (arg0->unk40 != 0xFF) {
        if (func_800754D0(arg0, &D_801C72C8) != 0) {
            func_80078E1C(arg0);
        }
    } else {
        if (func_801C5FB4(arg0) != 0 && arg0->unk3F == 0) {
            func_80077B78(arg0, 0x17, arg0->unk0->unk1C, arg0->unk0->unk20, &D_801C72EC, 1, 0, 1, 0, 0, arg0->unk48);
            arg0->unk148 = 0xF;
            arg0->unk14A = 0xC8;
            arg0->unk14B = 0xA0;
            arg0->unk14C = 0x8C;
            arg0->unk15C = 1;
            arg0->unk3F = (rand() & 0x1F) + 0x32;
        }
        if (arg0->unk3F != 0) {
            arg0->unk3F--;
        }
    }
}

INCLUDE_ASM("asm/USA/fdat074/nonmatchings/fdat074", func_801C61C8);

void func_801C6238(s32 arg0, s32 arg1) {
    Sub801C4C94 vec;

    vec.unk0 = func_80014DAC(2000);
    vec.unk4 = func_80014DAC(2000);
    vec.unk2 = -func_80014D30(1000);
    func_80075A18(arg0, arg1, &vec);
}

INCLUDE_ASM("asm/USA/fdat074/nonmatchings/fdat074", func_801C62A0);

INCLUDE_ASM("asm/USA/fdat074/nonmatchings/fdat074", func_801C6308);

INCLUDE_ASM("asm/USA/fdat074/nonmatchings/fdat074", func_801C64AC);

void func_801C65E8(Obj801C5AF0 *arg0) {
    arg0->unk36 = 2;
    arg0->unk50 = func_801C5E74;
    arg0->unk54 = func_801C6308;
    arg0->unk58 = func_801C60A8;
    arg0->unk5C = func_801C64AC;
    arg0->unk7C = 0;
    arg0->unk164 *= 4;
    if (arg0->unk54 != NULL) {
        arg0->unk54(arg0, 0);
    }
    if (arg0->unk50 != NULL) {
        arg0->unk50(arg0, arg0->unk41);
    }
}

INCLUDE_ASM("asm/USA/fdat074/nonmatchings/fdat074", func_801C6680);

void func_801C68D8(Obj801C5AF0 *arg0) {
    Sub801C68D8 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk4 = func_801C6680;
}

INCLUDE_ASM("asm/USA/fdat074/nonmatchings/fdat074", func_801C6914);

void func_801C6A3C(Obj801C5AF0 *arg0) {
    Sub801C68D8 *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C6914;
}

INCLUDE_ASM("asm/USA/fdat074/nonmatchings/fdat074", func_801C6A78);

void func_801C6B58(Obj801C6B58 *arg0) {
    Sub801C6B58 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C6A78;
}

INCLUDE_ASM("asm/USA/fdat074/nonmatchings/fdat074", func_801C6B94);

void func_801C6EB0(Obj801C6B58 *arg0) {
    Sub801C6B58 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C6B94;
}

void func_801C6EEC(void) {
}

Obj801C5AF0 *func_801C6EF4(void) {
    Obj801C5AF0 *obj;
    Obj801C5AF0 *best;
    s32 r;
    s32 i;
    s32 max;

    obj = D_801A26B8;
    best = NULL;
    i = 0x10;
    max = -1;
    do {
        if (obj->unk0 != NULL && (obj->unk36 & 7) == 2) {
            r = rand();
            if (max < r) {
                max = r;
                best = obj;
            }
        }
        i--;
        obj++;
    } while (i != 0);
    return best;
}

INCLUDE_ASM("asm/USA/fdat074/nonmatchings/fdat074", func_801C6FA0);

void func_801C7190(void) {
    func_80056C6C(1, 0x1FB, 1, 1, 2, 0xD, 1);
}

s32 func_801C71D4(s32 arg0) {
    Elem801C5F00 *p;
    s32 i;
    s32 count;

    i = 0x200;
    count = 0;
    p = D_801D0B68;
    do {
        if (p->unk6 != -1 && p->unk1E == arg0) {
            count++;
        }
        i--;
        p++;
    } while (i != 0);
    return count;
}

void func_801C7220(s32 arg0, s32 *arg1) {
    if (func_801C71D4(2) + func_801C71D4(3) == 0) {
        *arg1 -= 5000;
    }
}
