#include "common.h"
#include "main.h"

void __main(void) {
}

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", __SN_ENTRY_POINT);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80011F28);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80011FD8);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80012048);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800121AC);

void func_80012298(void) {
    D_80049F98 = 0;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800122A8);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800125D0);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80012670);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800126D8);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80012794);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80012A78);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80012E5C);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800131D0);

void func_8001321C(s32 arg0, s32 *arg1, s32 *arg2) {
    if (arg0 < *arg1) {
        *arg1 = arg0;
    } else if (*arg2 < arg0) {
        *arg2 = arg0;
    }
}

void func_80013258(s32 arg0, s32 *arg1, s32 arg2, s32 *arg3) {
    if (*arg1 < arg0) {
        *arg1 = arg0;
        *arg3 = arg2;
    }
}

void func_8001327C(s32 arg0, s32 *arg1, s32 arg2, s32 *arg3) {
    if (arg0 < *arg1) {
        *arg1 = arg0;
        *arg3 = arg2;
    }
}

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800132A0);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800132CC);

s32 func_80013390(s32 arg0, s32 arg1, s32 arg2) {
    if (arg2 > 0) {
        if (arg0 < arg1) {
            arg0 += arg2;
            if (arg1 < arg0) {
                arg0 = arg1;
            }
        } else if (arg1 < arg0) {
            arg0 -= arg2;
            if (arg0 < arg1) {
                arg0 = arg1;
            }
        }
    } else {
        if (arg1 < arg0) {
            arg0 += arg2;
            if (arg0 < arg1) {
                arg0 = arg1;
            }
        } else if (arg0 < arg1) {
            arg0 -= arg2;
            if (arg1 < arg0) {
                arg0 = arg1;
            }
        }
    }
    return arg0;
}

s32 func_800133F8(s32 arg0, s32 arg1) {
    if (arg0 > 0) {
        arg0 += arg1;
        if (arg0 < 0) {
            arg0 = 0;
        }
    } else {
        arg0 += arg1;
        if (arg0 > 0) {
            arg0 = 0;
        }
    }
    return arg0;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80013430);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80013510);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800135E8);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_8001380C);

void func_800138F0(Obj800138F0 *arg0, Obj800138F0 *arg1, s32 arg2) {
    s32 s;
    s32 c;

    s = rsin(arg2);
    c = rcos(arg2);
    arg1->unk0 = (arg0->unk0 * c - arg0->unk4 * s) >> 12;
    arg1->unk4 = (arg0->unk0 * s + arg0->unk4 * c) >> 12;
    arg1->unk2 = arg0->unk2;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800139A4);

void func_80013A88(s16 arg0, Obj80013A88 *arg1) {
    s16 s;
    s16 c;

    s = rsin(arg0);
    c = rcos(arg0);
    arg1->unk0 = 0x1000;
    arg1->unk2 = 0;
    arg1->unk4 = 0;
    arg1->unk6 = 0;
    arg1->unk8 = c;
    arg1->unkA = -s;
    arg1->unkC = 0;
    arg1->unkE = s;
    arg1->unk10 = c;
}

void func_80013AFC(s16 arg0, Obj80013A88 *arg1) {
    s16 s;
    s16 c;

    s = rsin(arg0);
    c = rcos(arg0);
    arg1->unk4 = s;
    arg1->unk0 = c;
    arg1->unk2 = 0;
    arg1->unk6 = 0;
    arg1->unk8 = 0x1000;
    arg1->unkA = 0;
    arg1->unkC = -s;
    arg1->unkE = 0;
    arg1->unk10 = c;
}

void func_80013B74(s16 arg0, Obj80013A88 *arg1) {
    s16 s;
    s16 c;

    s = rsin(arg0);
    c = rcos(arg0);
    arg1->unk0 = c;
    arg1->unk2 = -s;
    arg1->unk8 = c;
    arg1->unk4 = 0;
    arg1->unk6 = s;
    arg1->unkA = 0;
    arg1->unkC = 0;
    arg1->unkE = 0;
    arg1->unk10 = 0x1000;
}

void func_80013BE8(Obj800138F0 *arg0, Obj80013A88 *arg1) {
    Obj80013A88 m;

    func_80013AFC(arg0->unk2, &m);
    func_80013A88(arg0->unk0, arg1);
    MulMatrix(arg1, &m);
    func_80013B74(arg0->unk4, &m);
    MulMatrix2(&m, arg1);
}

void func_80013C54(Obj800138F0 *arg0, Obj80013A88 *arg1) {
    Obj80013A88 m;

    func_80013AFC(arg0->unk2, &m);
    func_80013B74(arg0->unk4, arg1);
    MulMatrix(arg1, &m);
    func_80013A88(arg0->unk0, &m);
    MulMatrix2(&m, arg1);
}

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80013CC0);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80013E04);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80013F5C);

void func_800140C4(Obj80013A88 *arg0, Obj80013A88 *arg1) {
    arg1->unk0 = (arg0->unk8 * arg0->unk10 - arg0->unkA * arg0->unkE) >> 12;
    arg1->unk6 = (arg0->unkA * arg0->unkC - arg0->unk6 * arg0->unk10) >> 12;
    arg1->unkC = (arg0->unk6 * arg0->unkE - arg0->unk8 * arg0->unkC) >> 12;
    arg1->unk2 = (arg0->unk4 * arg0->unkE - arg0->unk2 * arg0->unk10) >> 12;
    arg1->unk8 = (arg0->unk0 * arg0->unk10 - arg0->unk4 * arg0->unkC) >> 12;
    arg1->unkE = (arg0->unk2 * arg0->unkC - arg0->unk0 * arg0->unkE) >> 12;
    arg1->unk4 = (arg0->unk2 * arg0->unkA - arg0->unk4 * arg0->unk8) >> 12;
    arg1->unkA = (arg0->unk4 * arg0->unk6 - arg0->unk0 * arg0->unkA) >> 12;
    arg1->unk10 = (arg0->unk0 * arg0->unk8 - arg0->unk2 * arg0->unk6) >> 12;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_8001429C);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80014338);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800143B8);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800144FC);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800145E4);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_8001462C);

void func_8001467C(Obj800138F0 *arg0, Obj800138F0 *arg1, Obj800138F0 *arg2, Obj800138F0 *arg3) {
    s32 ax;
    s32 ay;
    s32 az;
    s32 bx;
    s32 by;
    s32 bz;

    ay = arg1->unk2 - arg0->unk2;
    az = arg1->unk4 - arg0->unk4;
    by = arg2->unk2 - arg0->unk2;
    bx = arg2->unk0 - arg0->unk0;
    bz = arg2->unk4 - arg0->unk4;
    ax = arg1->unk0 - arg0->unk0;
    arg3->unk0 = (ay * bz - az * by) >> 6;
    arg3->unk2 = (az * bx - ax * bz) >> 6;
    arg3->unk4 = (ax * by - ay * bx) >> 6;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80014728);

void func_80014774(Obj800138F0 *arg0, Obj800138F0 *arg1) {
    s32 c;

    c = rcos(arg0->unk0);
    arg1->unk2 = -rsin(arg0->unk0);
    arg1->unk0 = (-rsin(arg0->unk2) * c) >> 12;
    arg1->unk4 = (rcos(arg0->unk2) * c) >> 12;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80014804);

void func_8001484C(s32 arg0, Obj800138F0 *arg1) {
    arg1->unk0 = (arg1->unk0 * arg0) >> 12;
    arg1->unk2 = (arg1->unk2 * arg0) >> 12;
    arg1->unk4 = (arg1->unk4 * arg0) >> 12;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80014898);

s32 func_800148E4(s32 arg0, s32 arg1, s16 arg2) {
    s32 diff;
    s32 ret;

    diff = (arg0 - arg1) & 0xFFF;
    ret = 0;
    if (arg2 >= diff || diff >= 0x1000 - arg2) {
        ret = 1;
    }
    return ret;
}

s32 func_80014920(s32 arg0, s32 arg1) {
    return ((arg0 - arg1) & 0xFFF) < 0x801;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80014930);

s32 func_80014950(s32 arg0, s32 arg1) {
    return SquareRoot0(arg0 * arg0 + arg1 * arg1);
}

s32 func_80014988(s32 arg0, s32 arg1, s32 arg2) {
    return SquareRoot0(arg0 * arg0 + arg1 * arg1 + arg2 * arg2);
}

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800149D4);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80014A68);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80014AE4);

void func_80014B74(Obj800138F0 *arg0, Obj800138F0 *arg1, Obj800138F0 *arg2) {
    s32 dx;
    s32 dy;
    s32 dz;

    dx = arg1->unk0 - arg0->unk0;
    dz = arg1->unk4 - arg0->unk4;
    dy = arg1->unk2 - arg0->unk2;
    arg2->unk2 = -ratan2(dx, dz);
    arg2->unk0 = ratan2(dy, func_80014950(dx, dz)) & 0xFFF;
    arg2->unk4 = 0;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80014C10);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80014C40);

s32 func_80014D30(s32 arg0) {
    s32 r;

    r = rand();
    return ((r + rand()) * arg0) >> 15;
}

s32 func_80014D78(s32 arg0) {
    return (rand() * arg0) >> 15;
}

s32 func_80014DAC(s32 arg0) {
    s32 r;

    r = rand();
    return ((r + rand() - 0x8000) * arg0) >> 15;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80014DFC);

s32 func_80014EC0(s32 arg0, s32 arg1, s32 arg2) {
    return (((arg1 - arg0) * arg2) >> 12) + arg0;
}

u16 func_80014ED8(s16 arg0, s16 arg1, s32 arg2) {
    s32 diff;

    diff = (arg1 - arg0) & 0xFFF;
    if (diff > 0x800) {
        diff -= 0x1000;
    }
    return (arg0 + ((diff * arg2) >> 12)) & 0xFFF;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80014F18);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80014F78);

s32 func_8001514C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s16 *arg9, s16 *arg10, s16 *arg11) {
    s32 sp20;
    s32 sp24;
    s32 ret;

    ret = func_80014F78(arg0, func_80014950(arg4 - arg1, arg6 - arg3), arg2 - arg5, arg7, arg8, &sp20, &sp24);
    if (ret == 0) {
        *arg10 = (arg8 * rcos(sp24)) >> 12;
        *arg11 = (arg8 * -rsin(sp24)) >> 12;
        *arg9 = sp20;
    }
    return ret;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80015258);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80015440);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800154D8);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80015508);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80015538);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_8001555C);

void func_80015580(Elem80015580 *arg0) {
    arg0->unk0 = 0;
    arg0->unk1 = 0;
    arg0++;
    if (arg0 == (Elem80015580 *)&D_8004A260) {
        arg0 -= 16;
    }
    D_8004A264 = arg0;
    if (arg0->unk0 != 0) {
        while (CdControl(0x16, arg0->unk2, 0) == 0) {
        }
    }
}

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800155F0);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80015710);

void func_80015854(void) {
}

void func_8001585C(void) {
}

void func_80015864(void) {
}

s32 func_8001586C(u8 arg0) {
    return (arg0 >> 4) * 10 + (arg0 & 0xF);
}

s32 func_8001588C(u8 arg0) {
    return ((u8)(arg0 / 10) << 4) | (u8)(arg0 % 10);
}

s32 func_800158C8(Obj800158C8 *arg0) {
    s32 min;
    s32 sec;

    min = func_8001586C(arg0->unk0);
    sec = func_8001586C(arg0->unk1);
    return min * 4500 + sec * 75 + func_8001586C(arg0->unk2);
}

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_8001594C);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80015A08);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80015A48);

void func_80015AC8(u8 *arg0) {
    for (;;) {
        EnterCriticalSection();
        if (*arg0 == 0) {
            break;
        }
        ExitCriticalSection();
        func_800161F8();
    }
    ExitCriticalSection();
}

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80015B24);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80015B78);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80015C9C);

void func_80015D28(u16 arg0, u16 arg1, s32 arg2, s32 arg3) {
    u8 loc[4];

    func_80015B78(0x10, loc, func_80015C9C(arg0, arg1, loc), arg2, arg3);
}

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80015D80);

void func_80015DC0(void) {
}

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80015DC8);

void func_80015E48(Obj80015E48 *arg0) {
    s32 *ptr;

    ptr = arg0->unk8;
    arg0->unk0 = 0;
    if (ptr != NULL) {
        *ptr = 0;
        arg0->unk8 = NULL;
    }
}

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80015E68);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80015FB4);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_8001604C);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_8001606C);

void func_80016114(Obj80015E48 *arg0) {
    func_80015E48(&arg0[-1]);
}

void func_80016134(Obj80015E48 *arg0, u8 arg1) {
    arg0[-1].unk0 = arg1;
}

u8 func_8001613C(Obj80015E48 *arg0) {
    return arg0[-1].unk0;
}

void func_80016148(Obj80015E48 *arg0, u8 arg1) {
    arg0[-1].unk1 = arg1;
}

u8 func_80016150(Obj80015E48 *arg0) {
    return arg0[-1].unk1;
}

void func_8001615C(Obj80015E48 *arg0, u16 arg1) {
    arg0[-1].unk2 = arg1;
}

u16 func_80016164(Obj80015E48 *arg0) {
    return arg0[-1].unk2;
}

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80016170);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80016190);

void func_800161B8(u32 *arg0) {
    free2(arg0);
}

void func_800161D8(u32 *arg0) {
    free2(arg0);
}

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800161F8);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80016220);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80016278);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_8001628C);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800162A0);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800162E8);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80016328);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800163F8);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800164A0);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_8001654C);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800165A8);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800165E4);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80016678);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800167A8);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800167D0);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80016A3C);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80016A84);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80016ACC);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80016D64);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80016DA8);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80016E14);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80016E64);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _card_clear);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _bu_init);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _card_write);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _new_card);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", InitCARD);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", StartCARD);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", StopCARD);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", InitCARD2);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", StartCARD2);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", StopCARD2);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _patch_card);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800170F4);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _patch_card2);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80017190);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _ExitCard);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", StSetRing);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CdInit);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800172F4);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_8001731C);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80017344);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CdStatus);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CdMode);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CdLastCom);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CdLastPos);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CdReset);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CdFlush);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CdSetDebug);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CdComstr);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CdIntstr);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CdSync);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CdReady);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CdSyncCallback);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CdReadyCallback);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CdControl);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CdControlF);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CdControlB);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CdMix);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CdGetSector);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CdDataCallback);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CdDataSync);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CdIntToPos);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CdPosToInt);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", getintr);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CD_sync);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CD_ready);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CD_cw);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CD_vol);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CD_flush);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CD_initvol);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CD_initintr);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CD_init);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CD_datasync);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CD_getsector);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CD_set_test_parmnum);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", callback);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CdSearchFile);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _cmp);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CD_newmedia);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CD_searchdir);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CD_cachefile);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", cd_read);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80019B4C);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", cb_read);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", cd_read_retry);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CdReadBreak);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CdRead);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CdReadSync);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CdReadCallback);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CdRead2);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", StCdInterrupt2);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", StClearRing);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", StUnSetRing);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_8001A2E0);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", StGetBackloc);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", StSetStream);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", StFreeRing);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", init_ring_status);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", StGetNext);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", StSetMask);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", StCdInterrupt);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", mem2mem);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", dma_execute);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SpuRGetAllKeysStatus);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SpuGetAllKeysStatus);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _spu_init);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _spu_writeByIO);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _spu_FiDMA);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _spu_r_);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _spu_t);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _spu_write);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _spu_read);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _spu_FsetRXX);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _spu_FsetRXXa);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _spu_FgetRXXa);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _spu_FsetPCR);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _spu_FsetDelayW);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _spu_FsetDelayR);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _spu_FwaitFs);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SpuInit);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SpuStart);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SpuDataCallback);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsClose);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsSeqClose);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsSepClose);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsEnd);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsInit);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsInit);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_8001C3CC);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsSeqOpen);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsContBankChange);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsContDataEntry);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsContMainVol);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsContPanpot);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_8001CD40);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsContDamper);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsContExternal);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsContNrpn1);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsContNrpn2);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsContRpn1);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsContRpn2);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsContResetAll);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsSetNrpnVabAttr0);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsSetNrpnVabAttr1);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsSetNrpnVabAttr2);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsSetNrpnVabAttr3);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsSetNrpnVabAttr4);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsUtResolveADSR);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsUtBuildADSR);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsSetNrpnVabAttr5);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsSetNrpnVabAttr6);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsSetNrpnVabAttr7);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsSetNrpnVabAttr8);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsSetNrpnVabAttr9);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsSetNrpnVabAttr10);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsSetNrpnVabAttr11);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsSetNrpnVabAttr12);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsSetNrpnVabAttr13);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsSetNrpnVabAttr14);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_8001DDC0);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsSetNrpnVabAttr16);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_8001DE0C);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_8001DE30);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_8001DE54);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsSetPitchBend);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsSetControlChange);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsGetMetaEvent);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsNoteOn);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsSetProgramChange);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsReadDeltaValue);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsInitSoundSeq);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsSeqPlay);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsSepPlay);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", Snd_SetPlayMode);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsSetSerialAttr);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SpuSetCommonAttr);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsSetMVol);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsSetRVol);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SpuSetReverbDepth);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsStart);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsStart);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsStart2);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsTrapIntrVSync);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsSeqCalledTbyT_1per2);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsSeqCalledTbyT);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsSndCrescendo);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsSndDecrescendo);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsSndPause);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_8001FB30);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsSeqPlay);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsSeqGetEof);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsGetSeqData);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsSndNextSep);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsSndReplay);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsSndStop);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsSeqStop);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsSepStop);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsSetSerialVol);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsSetTableSize);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsSetTickMode);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsSndSetVol);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsSeqSetVol);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsSepSetVol);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsSeqGetVol);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsSndTempo);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsUtAllKeyOff);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsUtChangePitch);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsUtGetProgAtr);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsUtGetVagAtr);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsUtKeyOn);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsUtKeyOff);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsUtKeyOnV);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsUtKeyOffV);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsUtSetReverbDelay);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SpuSetReverbModeParam);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SpuIsInAllocateArea);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SpuIsInAllocateArea_);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _spu_setReverbAttr);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SpuClearReverbWorkArea);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsUtSetReverbDepth);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsUtSetReverbType);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsUtGetReverbType);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SpuSetReverb);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsUtSetReverbFeedback);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800228C4);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800228E4);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsUtSetVagAtr);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsUtGetDetVVol);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsUtSetDetVVol);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsUtGetVVol);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsUtSetVVol);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsVmAlloc);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SpuSetNoiseVoice);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SpuSetAnyVoice);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsVmDoAllocate);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsVmDamperOff);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsVmDamperOn);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsVmFlush);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsVmInit);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SpuInitMalloc);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _spu_setInTransfer);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _spu_getInTransfer);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsVmKeyOn);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsVmKeyOff);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsVmSeKeyOn);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsVmSeKeyOff);

void KeyOnCheck(void) {
}

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", note2pitch);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", note2pitch2);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", vmNoiseOn);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", vmNoiseOff);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsVmKeyOffNow);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsVmKeyOnNow);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsVmPBVoice);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsVmPitchBend);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsVmSetSeqVol);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsVmGetSeqVol);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsVmGetSeqLVol);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsVmGetSeqRVol);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsVmSeqKeyOff);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsVmSelectToneAndVag);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsVmSetVol);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _SsVmVSetUp);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsVabClose);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SpuFree);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _spu_gcSPU);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsVabOpenHead);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsVabOpenHeadSticky);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsVabFakeHead);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsVabOpenHeadWithMode);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SpuMalloc);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsVabTransBody);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SpuRead);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SpuSetTransferStartAddr);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SpuSetTransferMode);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsVabTransBodyPartly);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SpuWritePartly);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SsVabTransCompleted);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SpuIsTransferCompleted);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", __fixunsdfsi);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", rsin);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", sin_1);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", rcos);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetFogNearFar);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80027294);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", InitGeom);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SquareRoot0);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", InvSquareRoot);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", VectorNormalS);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", VectorNormalSS);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800274B0);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", MatrixNormal);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", LoadAverage12);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", LoadAverage0);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", LoadAverageShort12);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", LoadAverageShort0);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", LoadAverageByte);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", LoadAverageCol);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", MulMatrix0);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", MulRotMatrix);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CompMatrix);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", ApplyMatrixLV);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", MulMatrix);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", MulMatrix2);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", ApplyMatrix);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", ApplyMatrixSV);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", TransMatrix);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", ScaleMatrix);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetRotMatrix);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetLightMatrix);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetColorMatrix);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetTransMatrix);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetVertex0);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetVertex1);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetVertex2);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetVertexTri);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetRGBfifo);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetIR123);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetIR0);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetSZfifo3);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetSZfifo4);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetSXSYfifo);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetRii);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetMAC123);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetData32);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetDQA);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetDQB);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetBackColor);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetFarColor);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetGeomOffset);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetGeomScreen);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", LightColor);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", DpqColorLight);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", DpqColor3);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", Intpl);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", Square12);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", Square0);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", AverageZ3);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", AverageZ4);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", OuterProduct12);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", OuterProduct0);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", Lzc);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", RotTrans);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", RotMatrix);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", RotMatrixYXZ);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", ratan2);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _patch_gte);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80028D54);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", VSync);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", v_wait);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", ResetCallback);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", InterruptCallback);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", DMACallback);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", VSyncCallback);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", VSyncCallbacks);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", StopCallback);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", RestartCallback);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CheckCallback);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", GetIntrMask);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetIntrMask);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", startIntr);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", trapIntr);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", setIntr);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", stopIntr);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", restartIntr);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_8002964C);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", startIntrVSync);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", trapIntrVSync);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", setIntrVSync);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80029774);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", startIntrDMA);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", trapIntrDMA);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", setIntrDMA);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80029A1C);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetVideoMode);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", GetVideoMode);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", InitHeap);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", FlushCache);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _96_remove);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", DeliverEvent);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", OpenEvent);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", WaitEvent);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", TestEvent);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", EnableEvent);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", ReturnFromException);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", ResetEntryInt);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", HookEntryInt);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", EnterCriticalSection);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", ExitCriticalSection);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", open);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", ChangeClearPAD);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", ChangeClearRCnt);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetRCnt);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", GetRCnt);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", StartRCnt);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", StopRCnt);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", ResetRCnt);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetInitPadFlag);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", ReadInitPadFlag);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", PAD_init);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", InitPAD);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", StartPAD);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", StopPAD);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetPatchPad);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", RemovePatchPad);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _Pad1);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _IsVSync);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", InitPAD2);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", StartPAD2);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", StopPAD2);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", PAD_init2);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SysEnqIntRP);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SysDeqIntRP);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", EnablePAD);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", DesablePAD);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _patch_pad);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", InitHeap2);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", malloc2);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _ExpAndAlloc);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", free2);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", exit);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", puts);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", setjmp);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", strcat);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", strcmp);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", strncmp);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_8002A480);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_8002A490);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", rand);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", printf);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", LoadTPage);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", LoadClut);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", LoadClut2);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetDefDrawEnv);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetDefDispEnv);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetDumpFnt);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", FntLoad);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", FntOpen);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", FntFlush);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", FntPrint);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", strlen);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", GetTPage);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", GetClut);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", DumpTPage);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", DumpClut);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", NextPrim);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", IsEndPrim);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", AddPrim);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", AddPrims);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", CatPrim);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", TermPrim);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetSemiTrans);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetShadeTex);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetPolyF3);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetPolyFT3);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetPolyG3);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetPolyGT3);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetPolyF4);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetPolyFT4);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetPolyG4);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetPolyGT4);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetSprt8);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetSprt16);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetSprt);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetTile1);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetTile8);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetTile16);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetTile);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetLineF2);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetLineG2);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetLineF3);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetLineG3);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetLineF4);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetLineG4);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetDrawTPage);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetDrawMove);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetDrawLoad);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", MargePrim);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", DumpDrawEnv);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", DumpDispEnv);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", ResetGraph);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetGraphReverse);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetGraphDebug);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetGraphQueue);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", GetGraphType);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", GetGraphDebug);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", DrawSyncCallback);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetDispMask);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", DrawSync);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", checkRECT);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", ClearImage);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", ClearImage2);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", LoadImage);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", StoreImage);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", MoveImage);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", ClearOTag);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", ClearOTagR);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", DrawPrim);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", DrawOTag);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", PutDrawEnv);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", DrawOTagEnv);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", GetDrawEnv);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", PutDispEnv);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", GetDispEnv);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", GetODE);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetTexWindow);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetDrawArea);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetDrawOffset);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetPriority);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetDrawMode);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetDrawEnv);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", SetDrawEnv2);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", get_mode);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", get_cs);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", get_ce);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", get_ofs);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", get_tw);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", get_dx);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _status);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _otc);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _clr);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _dws);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _drs);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _ctl);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _getctl);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _cwb);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _cwc);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _param);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _addque);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _addque2);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _exeque);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _reset);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _sync);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", set_alarm);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", get_alarm);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", _version);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_8002EB90);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", GPU_cw);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", OpenTIM);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", ReadTIM);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", OpenTMD);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", ReadTMD);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", get_tim_addr);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", get_tmd_addr);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", unpack_packet);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80030368);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800303A0);

void func_800303E0(void) {
}

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800303E8);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80030448);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800306C8);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_8003072C);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800309A8);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80030EBC);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80030F38);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800312D0);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800313F0);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800313F8);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_80031400);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_800314A0);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", func_8003158C);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", AddDrv);

INCLUDE_ASM("asm/USA/main/nonmatchings/1664", DelDrv);
