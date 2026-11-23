#include "common.h"
#include "fdat010.h"

void func_801C4C94(Obj801C4C94 *arg0) {
    if (arg0->unk41 == arg0->unk3C) {
        func_8004CC30(0x8F, D_801A5DC0->unk1000, &arg0->unk8, 0x50, 0xBB8, 0xDAC, 0);
    }
    func_80075FC0(arg0);
    if (func_8004F024(&arg0->unk64, &arg0->unk8) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C4D30);

void func_801C4E58(Obj801C4C94 *arg0) {
    u8 state;

    if (arg0->unk40 != 0xFF) {
        if (func_800754D0(arg0, D_801C65DC) != 0) {
            func_80078E1C(arg0);
        }
    } else {
        state = arg0->unk3C;
        if (state == 0 || state == 3) {
            arg0->unk7C = 0;
            arg0->unk76 = rand() & 0xFFF;
            arg0->unk78 = rand() & 0xFFF;
            arg0->unk7A = rand() & 0xFFF;
            return;
        }
        arg0->unk7C = -1;
    }
}

void func_801C4EFC(s32 arg0, s32 arg1) {
    Sub801C4C94 vec;

    vec.unk0 = func_80014D78(100) - 50;
    vec.unk4 = func_80014D78(100) - 50;
    vec.unk2 = 0;
    func_800759A4(arg0, arg1, &vec);
}

INCLUDE_RODATA("asm/USA/fdat010/nonmatchings/fdat010", D_801C4B40);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C4F60);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C50AC);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C5190);

void func_801C5268(Elem801C5EA8 *arg0, s32 arg1) {
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

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C52B8);

s32 func_801C53D4(Obj801C4EB8 *arg0) {
    return func_80012794(&arg0->unk22, arg0->unk16, arg0->unk18, 0, D_801A26C0, D_801A26E0, D_801A26E2);
}

s32 func_801C5424(Elem801C5EA8 *arg0, s32 arg1) {
    Sub801C5EA8 *sub;
    s32 turn;
    s32 rot;
    s32 dir;
    s16 speed;
    s16 v;
    s32 neg;

    sub = arg0->unk2C;
    if (arg1 >= 4) {
        turn = 0;
        dir = 1;
        if (arg1 == 4) {
            dir = -1;
        }
    } else {
        turn = 1;
        rot = arg1;
    }
    switch (sub->unk10) {
    case 2:
        rot += 2;
        dir = -dir;
    case 1:
    case 4:
        if (turn) {
            rot = (rot + arg0->unk16) & 3;
            sub->unk1E -= sub->unk20;
            if (sub->unk1E <= 0) {
                sub->unk1E += sub->unk12;
                speed = sub->unk1C;
            } else {
                speed = sub->unk1A;
            }
            D_801C6604 = speed;
            func_8001380C(&D_801C6600, &sub->unk8, rot);
        } else if (dir > 0) {
            sub->unk1E -= sub->unk20;
            if (sub->unk1E <= 0) {
                sub->unk1E += sub->unk12;
                v = sub->unk1C;
            } else {
                v = sub->unk1A;
            }
            sub->unk8.unk2 = v;
        } else {
            sub->unk1E -= sub->unk20;
            if (sub->unk1E <= 0) {
                sub->unk1E += sub->unk12;
                neg = -sub->unk1C;
            } else {
                neg = -sub->unk1A;
            }
            sub->unk8.unk2 = neg;
        }
        func_80072180(arg0);
        if (sub->unk10 == 1 || sub->unk10 == 4) {
            if (++sub->unk11 >= sub->unk12) {
                sub->unk10 += 2;
            }
            return 1;
        }
        if (--sub->unk11 == 0) {
            sub->unk10 = 0;
            D_801D0B98[*arg0->unk28].unk0 |= 0x100;
            return 2;
        }
        if (sub->unk11 >= sub->unk13 && arg0->unk38->unkA == 0) {
            if (func_801C53D4((struct Obj801C4EB8 *)sub) != 0) {
                func_801C5268(arg0, 1);
            }
        }
        return 1;
    case 3:
        if (arg0->unk38->unkA == 0) {
            if (func_801C53D4((struct Obj801C4EB8 *)sub) == 0) {
                func_801C5268(arg0, 2);
            }
        }
        return 0;
    }
    return 0;
}

void func_801C56E4(Elem801C5EA8 *arg0) {
    switch (func_801C5424(arg0, arg0->unk38->unk7)) {
    case 1:
        if (arg0->unk38->unk8 != 0) {
            func_8004CC30(arg0->unk38->unk8, (u8 *)((arg0 - D_801D0B68) + 0x3000), &arg0->unk2C->unk22, 0x64, 0x1F40, 0x2710, 0);
        }
        break;
    case 2:
        if (arg0->unk38->unk9 != 0) {
            func_8004CE44(arg0->unk38->unk9, &arg0->unk2C->unk22, 0x78, 0);
        }
        break;
    }
}

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C57B8);

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C58C4);

void func_801C5B1C(Obj801C5B1C *arg0) {
    arg0->unk2C = func_80072120(0);
    arg0->unk2C->unk4 = func_801C58C4;
}

void func_801C5B58(Obj801C52C0 *arg0) {
    s32 idx;
    s32 n;

    if (D_801A26CE == arg0->unk2C->unk10) {
        idx = arg0->unk38->unk6;
        if (idx != 0) {
            n = arg0->unk38->unk8;
            for (n--; n != -1; n--) {
                if (D_801D0B94[idx].unk0 != 0) {
                    return;
                }
                idx++;
            }
        }
        if (func_8008A0B0(arg0->unk38->unk0, arg0->unk38->unk1, arg0->unk38->unk2, arg0->unk38->unk4, arg0->unk38->unk5) != 0) {
            arg0->unk2C = NULL;
        }
    }
}

void func_801C5C18(Elem801C5EA8 *arg0) {
    s32 unused[36];
    Sub801C5B1C *task;

    task = func_80072120(2);
    arg0->unk2C = (Sub801C5EA8 *)task;
    task->unk10 = arg0 - D_801D0B68;
    arg0->unk2C->unk0 = func_801C5B58;
}

s32 func_801C5C6C(Obj801C5B1C *arg0, s32 arg1, Elem801C5C6C **arg2, ...) {
    Sub801C5C6C *data;

    if (arg1 == 0x8100) {
        if (((*arg2)->unkC & 7) == 2) {
            data = arg0->unk38;
            func_8008A0B0(data->unk0, data->unk1, data->unk2, data->unk4, data->unk5);
            if (arg0->unk38->unk6 == 1) {
                arg0->unk2C = NULL;
            }
            return 1;
        }
    }
    return 0;
}

void func_801C5D04(Obj801C5B1C *arg0) {
    s32 unused[36];

    arg0->unk2C = func_80072120(0);
    arg0->unk2C->unk4 = func_801C5C6C;
}

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C5D40);

void func_801C5E68(Obj801C5B1C *arg0) {
    Sub801C5B1C *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C5D40;
}

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C5EA4);

void func_801C5F3C(Obj801C5B1C *arg0) {
    s32 unused[36];
    Sub801C5B1C *task;

    task = func_80072120(0);
    arg0->unk2C = task;
    task->unk0 = func_801C5EA4;
    arg0->unk2C->unk4 = 0;
}

void func_801C5F84(Obj801C5F84 *arg0) {
    arg0->unk8 += 0x10;
}

void func_801C5F98(Obj801C5F98 *arg0) {
    Sub801C5F98 *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C5F84;
}

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C5FD4);

void func_801C64AC(Obj801C5F98 *arg0) {
    Sub801C5F98 *task;

    task = func_80073674(4);
    arg0->unk14 = task;
    task->unk0 = func_801C5FD4;
    if (arg0->unk28 == 0xFF) {
        arg0->unk14->unk8 = -1;
    } else {
        arg0->unk14->unk8 = func_80014D78(arg0->unk28);
    }
}

void func_801C6518(void) {
}

void func_801C6520(void) {
    func_8008A80C();
}

INCLUDE_ASM("asm/USA/fdat010/nonmatchings/fdat010", func_801C6540);
