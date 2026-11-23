#include "common.h"
#include "fdat004.h"

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C4D30);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C4FFC);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C513C);

void func_801C52A0(Obj801C59E8 *arg0) {
    u8 temp;

    func_80078598(arg0);
    arg0->unk148 = 0;
    arg0->unk15C = 0;
    if (arg0->unk40 != 0xFF) {
        if (func_800754D0(arg0, D_801C7060) != 0) {
            func_80078E1C(arg0);
        }
    } else if (arg0->unk7C == 0 && arg0->unk42 != 0 && func_801C513C(arg0) != 0) {
        arg0->unk7C = 0;
        if ((arg0->unk3C.unk0 & 0xFFFF00) == 0xC000) {
            if (rand() < 0x51F) {
                arg0->unk3C.unk0_b[2] = 5;
            }
        } else {
            temp = arg0->unk3C.unk0_b[3];
            if (temp == 0) {
                func_80077B78(arg0, 0x17, arg0->unk0->unk1C, arg0->unk0->unk20, D_801C7084, 1, 0, 1);
                arg0->unk3C.unk0_b[3] = 1;
                arg0->unk148 = 0xF;
                arg0->unk14A = 0xB4;
                arg0->unk14B = 0xA0;
                arg0->unk14C = 0x8C;
                arg0->unk15C = 1;
                arg0->unk3C.unk0_b[2]--;
                return;
            }
            arg0->unk3C.unk0_b[3] = temp - 1;
        }
    }
}

void func_801C53F4(s32 arg0, s32 arg1) {
    Sub801C4C94 vec;

    vec.unk0 = func_80014D78(2000) - 1000;
    vec.unk4 = func_80014D78(2000) - 1000;
    vec.unk2 = -func_80014D78(2000);
    func_800759A4(arg0, arg1, &vec);
}

void func_801C5464(s32 arg0, s32 arg1) {
    Sub801C4C94 vec;

    vec.unk0 = func_80014DAC(2000);
    vec.unk4 = func_80014DAC(2000);
    vec.unk2 = -func_80014D30(1000);
    func_80075A18(arg0, arg1, &vec);
}

void func_801C54CC(s32 arg0, s32 arg1) {
    Sub801C4C94 vec;

    vec.unk0 = func_80014DAC(2000);
    vec.unk4 = func_80014DAC(2000);
    vec.unk2 = -func_80014D30(1000);
    func_80075A54(arg0, arg1, &vec);
}

INCLUDE_RODATA("asm/USA/fdat004/nonmatchings/fdat004", D_801C4B40);

s32 func_801C5534(Obj801C59E8 *arg0, s32 arg1, ...) {
    s32 dist;
    s32 r;
    s32 n;
    s32 i;

    dist = func_80073714(arg0, 0x7FFFFFFF);
    switch (arg1) {
    case 0x8100:
        return 0;
    case 5:
        return 0;
    case 4:
        if (arg0->unk40 != 0xFF) {
            arg0->unk40 = 0;
        }
        arg0->unk42 = 0;
        arg0->unk36 &= ~0x10;
        arg0->unk44 = func_80073904();
        goto idle;
    case 1:
    case 2:
        if (arg0->unk42 != 2) {
            arg0->unk42 = 1;
            arg0->unk44 = func_80073904();
        }
        r = rand() & 0xF;
        goto pick;
    }
    arg0->unk7C = -1;
    if (dist < 7000) {
        arg0->unk7C = 0;
    }
    switch (arg0->unk42) {
    case 0:
        if (dist < 8000 && rand() < 0x6666) {
        engage:
            arg0->unk42 = 1;
            arg0->unk44 = func_80073904();
            r = rand() & 3;
            goto pick;
        }
        if (dist < 32000) {
            dist >>= 5;
            if (func_80014D78((dist * dist * dist) >> 14) < 476) {
                i = 15;
                n = 0;
                do {
                    if (D_801A2828[0].unk0 != NULL && D_801A2828[0].unk54 == (void (*)())func_801C5534 &&
                        D_801A2828[0].unk42 != 0) {
                        n++;
                    }
                } while (--i != 0);
                if (n < 2) {
                    goto engage;
                }
            }
        }
    idle:
        arg0->unk41 = 0;
        break;
    case 1:
    case 2:
        if (dist > 8000) {
            arg0->unk42 = 3;
            arg0->unk44 = func_80073904();
            goto retreat;
        }
        if (arg0->unk42 == 2) {
            if (func_80073924(arg0->unk44) > 300) {
                arg0->unk42 = 1;
                arg0->unk44 = func_80073904();
            }
        } else if (arg0->unk2E != 0x7FFF && rand() < 0xCCD) {
            arg0->unk42 = 2;
            arg0->unk44 = func_80073904();
        }
        r = rand() & 0x3F;
    pick:
        switch (r) {
        case 0:
        case 1:
        case 2:
            func_801C53F4((s32)arg0, 2);
            break;
        case 3:
            func_801C53F4((s32)arg0, 3);
            break;
        case 4:
        case 5:
            func_801C5464((s32)arg0, 2);
            return 0;
        case 6:
        case 7:
            func_801C54CC((s32)arg0, 2);
            return 0;
        case 8:
            func_801C5464((s32)arg0, 3);
            return 0;
        case 11:
            func_801C54CC((s32)arg0, 3);
            return 0;
        case 12:
            func_801C53F4((s32)arg0, 4);
            break;
        case 13:
            func_801C53F4((s32)arg0, 5);
            break;
        case 14:
            func_801C53F4((s32)arg0, 1);
            break;
        }
        break;
    case 3:
        if (dist < 4000) {
            arg0->unk42 = 1;
            arg0->unk44 = func_80073904();
            goto pick;
        }
    retreat:
        func_801C53F4((s32)arg0, 2);
        break;
    default:
        return 0;
    }
    return 0;
}

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C58AC);

void func_801C59E8(Obj801C59E8 *arg0) {
    arg0->unk36 = 2;
    arg0->unk50 = func_801C4FFC;
    arg0->unk54 = func_801C5534;
    arg0->unk58 = func_801C52A0;
    arg0->unk5C = func_801C58AC;
    arg0->unk42 = 0;
    arg0->unk164 *= 4;
    arg0->unk44 = func_80073904();
    if (arg0->unk54 != NULL) {
        arg0->unk54(arg0, 0);
    }
    if (arg0->unk50 != NULL) {
        arg0->unk50(arg0, arg0->unk41);
    }
}

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C5A90);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C5B70);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C5D8C);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C5DDC);

void func_801C5E30(Obj801C59E8 *arg0) {
    arg0->unk36 = 2;
    arg0->unk54 = func_801C5D8C;
    arg0->unk58 = func_801C5B70;
    arg0->unk50 = NULL;
    arg0->unk5C = func_801C5DDC;
    if (arg0->unk54 != NULL) {
        arg0->unk54(arg0, 0);
    }
    func_8004E98C(&arg0->unk64, 0, 0, 0);
}

void func_801C5EA8(Obj801C59E8 *arg0) {
    Elem801C70E8 *p;
    Sub8006D4BC *t;
    u8 *tbl;
    s32 speed;
    Sub801C4C94 vec;
    s16 rise;

    if (arg0->unk40 != 0xFF) {
        t = func_8006D4BC(1);
        if (t != NULL) {
            arg0->unk2E = t->unkE;
        } else {
            arg0->unk2E = 0x7FFF;
        }
        arg0->unk8.unk2 += 0x32;
        if (arg0->unk8.unk2 >= arg0->unk2C) {
            arg0->unk40 = 0;
        }
        if (func_800754D0(arg0, D_801C71C8) != 0) {
            func_80078E1C(arg0);
        }
        return;
    }
    if (arg0->unk44 == 0) {
        arg0->unk42++;
        p = &D_801C70E8[arg0->unk42];
        arg0->unk44 = p->unk8;
        if (p->unkB != 0xFF) {
            switch (D_8019F518) {
            case 6:
                tbl = D_801C71F0;
                break;
            case 8:
                tbl = D_801C71F4;
                break;
            case 21:
                tbl = D_801C71F8;
                break;
            case 26:
                tbl = D_801C71FC;
                break;
            case 36:
                tbl = D_801C7200;
                break;
            default:
                tbl = D_801C71EC;
                break;
            }
            func_800529F0(0, 0, tbl[p->unkB]);
        }
        if (p->unkE != 0) {
            func_8004D178(p->unkE, NULL, 0x7F, 0x7F, 0);
        }
    } else {
        p = &D_801C70E8[arg0->unk42];
    }
    func_80014728(arg0->unk10.unk2, &vec);
    speed = ((p[-1].unk4 - p->unk4) * arg0->unk44) / p->unk8 + p->unk4;
    arg0->unk8.unk0 += (vec.unk0 * speed) >> 12;
    arg0->unk8.unk4 += (vec.unk4 * speed) >> 12;
    arg0->unk8.unk2 += ((p[-1].unk2 - p->unk2) * arg0->unk44) / p->unk8 + p->unk2;
    arg0->unk10.unk6 = func_8006E6B4(arg0->unk10.unk6, &arg0->unk8);
    func_8004CC30(0x85, D_801A5DC0->unk1000, &arg0->unk8,
                  ((p[-1].unkC - p->unkC) * arg0->unk44) / p->unk8 + p->unkC, 0x32C8, 0x36B0,
                  ((p[-1].unkD - p->unkD) * arg0->unk44) / p->unk8 + p->unkD);
    D_801A5DC8 = 1;
    t = func_80075030(arg0, 0x1800);
    if (t != NULL) {
        arg0->unk2C = t->unkE;
        arg0->unk30 = t->unk4 - D_801D0B68;
    } else {
        arg0->unk2C = 0x7FFF;
        arg0->unk30 = -1;
    }
    D_801A5DC8 = 0;
    switch (p->unkF) {
    case 0:
        func_8004E98C(&arg0->unk64, 0, 0, 0);
        func_8004ECA8(&arg0->unk64);
        break;
    case 1:
        func_8004E98C(&arg0->unk64, 1, 1, 0);
        func_8004ECA8(&arg0->unk64);
        break;
    case 2:
        func_8004E98C(&arg0->unk64, 1, -1, 0);
        func_8004ECA8(&arg0->unk64);
        break;
    case 3:
        func_8004E98C(&arg0->unk64, 2, 1, 0);
        func_8004ECA8(&arg0->unk64);
        if (func_8004EBF8(&arg0->unk64) == 0) {
            func_8004D178(0x86, D_801A5DC0->unk1100, 0x7F, 0x7F, 0);
        }
        break;
    case 4:
        func_8004E98C(&arg0->unk64, 2, -1, 0);
        func_8004ECA8(&arg0->unk64);
        if (func_8004EBF8(&arg0->unk64) == 0) {
            func_8004D178(0x86, D_801A5DC0->unk1100, 0x7F, 0x7F, 0);
        }
        break;
    }
    switch (p->unkA) {
    case 0:
        D_801A26B8[0].unk8.unk0 = arg0->unk8.unk0;
        arg0->unk108 = D_801A26B8[0].unk8.unk2 = arg0->unk8.unk2;
        D_801A26B8[0].unk8.unk4 = arg0->unk8.unk4;
        D_801A26B8[0].unk10.unk6 = arg0->unk10.unk6;
        break;
    case 1:
        D_801A26B8[0].unk8.unk0 = arg0->unk8.unk0;
        D_801A26B8[0].unk8.unk4 = arg0->unk8.unk4;
        D_801A26B8[0].unk32 = 0;
        D_801A26B8[0].unk36 = 1;
        rise = arg0->unkCC.unk2 + 0x100;
        arg0->unkCC.unk2 = rise;
        D_801A26B8[0].unk8.unk2 = arg0->unk108 += rise >> 6;
        break;
    case 2:
        D_801A26B8[0].unk41 = 0x4B;
        D_8019F524[0] &= ~0x2400;
        D_801987D8[0] &= ~1;
        D_801A26B8[0].unkCC = arg0->unkCC;
        D_8019F52A = 0xFFFE;
        break;
    case 9:
        if ((u16)(arg0->unk8.unk0 + 0x7D00) > 0xFA00 || (u16)(arg0->unk8.unk4 + 0x7D00) > 0xFA00) {
            func_80078E1C(arg0);
        }
        break;
    }
    arg0->unk44--;
}

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C64AC);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C6528);

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C6640);

void func_801C66D8(Obj801C66D8 *arg0) {
    s32 unused[36];

    arg0->unk2C = func_80072120(0);
    arg0->unk2C->unk0 = func_801C6640;
    arg0->unk2C->unk4 = NULL;
}

void func_801C6720(Obj801C6720 *arg0) {
    arg0->unkA += 0x20;
}

void func_801C6734(Obj801C6734 *arg0) {
    Sub801C5FDC *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C6720;
}

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C6770);

void func_801C690C(Obj801C6734 *arg0) {
    Sub801C5FDC *task;

    task = func_80073674(1);
    arg0->unk14 = task;
    task->unk0 = func_801C6770;
}

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C6948);

void func_801C6A28(Obj801C6734 *arg0) {
    Sub801C5FDC *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C6948;
}

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C6A64);

void func_801C6D80(Obj801C6734 *arg0) {
    Sub801C5FDC *task;

    task = func_80073674(0);
    arg0->unk14 = task;
    task->unk0 = func_801C6A64;
}

void func_801C6DBC(void) {
}

void func_801C6DC4(void) {
    D_801AC80C = 0;
    func_80078B14(&D_8019FB68.unk2CC0, &D_8019FB68);
    D_8019F51C->unk20[D_8019FB68.unk2CC0.unkE](&D_8019FB68.unk2CC0);
    func_80056C6C(1, 0x1FB, 1, 1, 2, 0xD, 1);
}

INCLUDE_ASM("asm/USA/fdat004/nonmatchings/fdat004", func_801C6E54);
