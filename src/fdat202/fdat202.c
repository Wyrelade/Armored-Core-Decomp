#include "common.h"
#include "fdat202.h"

s32 func_8004C1BC(void) {
    if (func_80016278(D_8008D91C) >= 300) {
        D_8008D920 = 1;
        return 0;
    }
    return 1;
}

void func_8004C200(void) {
    D_8008D920 = 0;
    func_800309A8(4, 0, func_8004C1BC);
}

void func_8004C234(void) {
    func_800309A8(4, 0, NULL);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004C25C);

void func_8004C318(s32 arg0) {
    D_8019F524 = arg0;
    if (D_8019F528 == 0) {
        D_8019F528 = 100;
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004C340);

void func_8004C730(void) {
    s32 ff;
    s32 f0;

    ff = 0xFF;
    D_80041BCE = ff;
    D_80041BCD = ff;
    D_80041BCC = ff;
    D_80041BCB = ff;
    D_80041BCA = ff;
    D_80041BC9 = ff;
    f0 = 0xF0;
    D_80041BC8 = ff;
    D_80041BA0 = 0;
    D_80041BC2 = f0;
    D_80041BBB = D_80041BB8;
    D_80041BBD = D_80041BBA;
}

void func_8004C7A8(s32 arg0, u32 *arg1, u8 *arg2) {
    Elem8004C7A8 *vab;
    s16 id;

    vab = &D_80041BD0[arg0];
    id = SsVabOpenHead(arg1, -1);
    vab->unk0 = id;
    if (id != -1) {
        vab->unk4 = arg1;
        while (SsVabTransBodyPartly(arg2, 0x800, vab->unk0) != vab->unk0) {
            SsVabTransCompleted(1);
            arg2 += 0x800;
        }
        SsVabTransCompleted(1);
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004C854);

void func_8004C91C(s32 arg0) {
    s16 id;

    id = D_80041BD0[arg0].unk0;
    if (id != -1) {
        SsVabClose(id);
    }
}

void func_8004C958(void) {
    SsSetMVol(0, 0);
    func_80016DA8();
    SsEnd();
}

s32 func_8004C98C(s32 arg0, s32 arg1, Sub8004C98C *arg2, Sub8004C98C *arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    Vec8004C98C *d;
    Vec8004C98C *sq;
    s32 dist;
    s32 vol;
    s32 ang;
    s32 l;
    s32 r;

    d = (Vec8004C98C *)0x1F8003F0;
    sq = (Vec8004C98C *)0x1F8003E0;
    d->unk0 = (arg2->unk0 - D_80041B90) >> 1;
    d->unk4 = (arg2->unk2 - D_80041B92) >> 1;
    d->unk8 = (arg2->unk4 - D_80041B94) >> 1;
    arg0 &= 0xFFF;
    gte_ldlvl(d);
    gte_sqr0();
    gte_stlvnl(sq);
    dist = SquareRoot0(sq->unk0 + sq->unk4 + sq->unk8);
    if (dist != 0) {
        arg7 -= ((d->unk0 * arg3->unk0 + d->unk4 * arg3->unk2 + d->unk8 * arg3->unk4) / dist * arg8) >> 12;
    }
    dist *= 2;
    if (dist >= arg5) {
        return 0;
    }
    dist = ((arg6 - dist) << 7) / arg6;
    vol = (dist * arg4) >> 7;
    if (vol < 0xA) {
        return 0;
    }
    if (vol >= 0x80) {
        vol = 0x7F;
    }
    ang = (0x400 - ratan2(d->unk0, d->unk8) - D_80041B9A) & 0xFFF;
    if (ang >= 0x800) {
        ang = 0x1000 - ang;
    }
    ang >>= 1;
    vol += (vol << 6) + (vol << 3) + (vol << 2);
    l = (vol * rsin(ang)) >> 18;
    if (l >= 0x80) {
        l = 0x7F;
    }
    r = (vol * rcos(ang)) >> 18;
    if (r >= 0x80) {
        r = 0x7F;
    }
    func_8004D178(arg0, arg1, l, r, arg7);
    return 1;
}

s32 func_8004CC30(s32 arg0, s32 arg1, Sub8004C98C *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    Vec8004C98C *d;
    Vec8004C98C *sq;
    s32 dist;
    s32 vol;
    s32 ang;
    s32 l;
    s32 r;

    d = (Vec8004C98C *)0x1F8003F0;
    sq = (Vec8004C98C *)0x1F8003E0;
    d->unk0 = (arg2->unk0 - D_80041B90) >> 1;
    d->unk4 = (arg2->unk2 - D_80041B92) >> 1;
    d->unk8 = (arg2->unk4 - D_80041B94) >> 1;
    arg0 &= 0xFFF;
    gte_ldlvl(d);
    gte_sqr0();
    gte_stlvnl(sq);
    dist = SquareRoot0(sq->unk0 + sq->unk4 + sq->unk8) * 2;
    if (dist >= arg4) {
        return 0;
    }
    dist = ((arg5 - dist) << 7) / arg5;
    vol = (dist * arg3) >> 7;
    if (vol < 0x1E) {
        return 0;
    }
    if (vol >= 0x80) {
        vol = 0x7F;
    }
    ang = (0x400 - ratan2(d->unk0, d->unk8) - D_80041B9A) & 0xFFF;
    if (ang >= 0x800) {
        ang = 0x1000 - ang;
    }
    ang >>= 1;
    vol += (vol << 6) + (vol << 3) + (vol << 2);
    l = (vol * rsin(ang)) >> 18;
    if (l >= 0x80) {
        l = 0x7F;
    }
    r = (vol * rcos(ang)) >> 18;
    if (r >= 0x80) {
        r = 0x7F;
    }
    func_8004D178(arg0, arg1, l, r, arg6);
    return 1;
}

void func_8004CE44(s32 arg0, Sub8004DE88 *arg1, s32 arg2, s32 arg3) {
    func_8004CC30(arg0, NULL, arg1, (s16)arg2, 0x1F40, 0x2710, arg3);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004CE88);

void func_8004CF0C(Elem8004CF0C *arg0) {
    s32 unused[2];
    s16 id;

    id = D_80041BD0[D_80042086[arg0->unk6].unk0].unk0;
    if (id != -1 && id != 0xFE) {
        arg0->unk0 = 0;
        SsUtKeyOffV(arg0->unk2);
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004CF7C);

void func_8004CFC8(s32 arg0, s32 arg1) {
    func_8004D178(arg0, 0, arg1, arg1, 0);
}

void func_8004CFF4(s32 arg0, s32 arg1) {
    func_8004D178(arg0, 0, arg1, arg1, 0);
}

void func_8004D020(s32 arg0, s32 arg1, s32 arg2) {
    func_8004D178(arg0, arg1, arg2, arg2, 0);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004D044);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004D178);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004D424);

void func_8004D4C8(void) {
    Elem8004CF0C *p;
    s32 i;
    u16 flags;

    p = D_80041DE0;
    for (i = 0x16; i != -1; i--, p++) {
        if (p->unk2 != -1) {
            flags = p->unk0;
            if (flags != 0) {
                if (!(flags & 0x8000)) {
                    func_8004CF0C(p);
                } else {
                    p->unk0 = flags & 0x7FFF;
                }
            }
        }
    }
    func_8004CE88();
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004D558);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004D610);

void func_8004D948(s16 arg0) {
    SsSetSerialVol(0, arg0, arg0);
}

void func_8004D974(void) {
    u16 *p;

    p = &D_80041BBE;
    if (*p != 0xFFFF && D_80041BC2 == 0 && D_80041BC4 - func_8001628C() < 0) {
        if (!(D_80041BC1 & 1)) {
            func_8004DB18(*p);
            return;
        }
        D_80041BC2 = 0xF0;
        func_8004D948(0);
    }
}

void func_8004DA1C(u8 arg0) {
    Elem8004DA1C *e;
    u32 trk;

    if (arg0 == 2) {
        D_80041BC2++;
        if (D_80041BC2 == 0) {
            CdSyncCallback(D_8008D924);
            D_8008D924 = 0;
            while (CdRead2(0xC8) == 0) {
            }
            func_8004D948(D_80041BBD);
            trk = D_80041BBE;
            e = &D_80031764[trk >> 4];
            trk &= 0xF;
            D_80041BC4 = func_8001628C() + (e->unk0[trk] & 0xFFF) * 6;
        }
    }
}

void func_8004DB18(s32 arg0) {
    u8 param[2];
    Snd8004DB18 *snd;
    Elem8004DA1C *e;
    s32 trk;
    s32 idx;
    u8 *flags;
    volatile u8 *busy;

    snd = (Snd8004DB18 *)&D_80041BBE;
    snd->unk0 = arg0;
    D_80041BC1 = 0;
    if (arg0 == 0xFFFF) {
        D_80041BC0 = 0;
        return;
    }
    if (D_80041BC2 == 0xFF) {
        busy = &snd->unk4;
        do {
        } while (*busy == 0xFF);
    }
    idx = arg0 >> 4;
    trk = arg0 & 0xF;
    e = &D_80031764[idx];
    if ((s16)e->unk0[trk] & 0x8000) {
        flags = &D_80041BC1;
        *flags |= 1;
    }
    param[0] = 1;
    param[1] = trk;
    D_80041BC2 = 0xFF;
    func_8004D948(0);
    while (CdControl(0xD, param, 0) == 0) {
    }
    while (CdControl(2, e->unk20, 0) == 0) {
    }
    if (D_8008D924 == 0) {
        D_8008D924 = CdSyncCallback((s32)func_8004DA1C);
    }
    while (CdControl(0x16, e->unk20, 0) == 0) {
    }
    if (e->unk0[trk] & 0x2000) {
        D_80041BBD = 0x7F;
    } else {
        D_80041BBD = D_80041BBA;
    }
    D_80041BC0 = 1;
}

void func_8004DCBC(void) {
    if (D_80041BC0 == 0) {
        func_8004D948(0);
        return;
    }
    func_8004D974();
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004DCF8);

void func_8004DE88(Sub8007618C *arg0, Sub8004DE88 *arg1) {
    arg1->unk0 = arg0->unk20.unk0;
    arg1->unk2 = arg0->unk28.unk0;
    arg1->unk4 = arg0->unk30.unk0;
}

void func_8004DEAC(Sub8007618C *arg0, s32 arg1, Sub8004DE88 *arg2, Sub8004DE88 *arg3) {
    u8 temp = arg1;

    arg0->unk2 = temp;
    arg0->unk3 = temp;
    func_800131D0(&arg0->unk20, temp, arg2->unk0);
    func_800131D0(&arg0->unk28, arg0->unk3, arg2->unk2);
    func_800131D0(&arg0->unk30, arg0->unk3, arg2->unk4);
    func_800131D0(&arg0->unk38, arg0->unk3, arg3->unk0);
    func_800131D0(&arg0->unk40, arg0->unk3, arg3->unk2);
    func_800131D0(&arg0->unk48, arg0->unk3, arg3->unk4);
}

void func_8004DF54(Sub8007618C *arg0, Sub8004DE88 *arg1, Sub8004DE88 *arg2) {
    arg0->unk3 = arg0->unk2;
    func_800131D0(&arg0->unk20, arg0->unk3, arg1->unk0);
    func_800131D0(&arg0->unk28, arg0->unk3, arg1->unk2);
    func_800131D0(&arg0->unk30, arg0->unk3, arg1->unk4);
    func_800131D0(&arg0->unk38, arg0->unk3, arg2->unk0);
    func_800131D0(&arg0->unk40, arg0->unk3, arg2->unk2);
    func_800131D0(&arg0->unk48, arg0->unk3, arg2->unk4);
}

void func_8004DFF8(Sub8007618C *arg0, s32 arg1, s16 *arg2) {
    arg0->unk3 = arg0->unk2 = arg1;
    func_800131D0(&arg0->unk20, arg1, arg2[0]);
    func_800131D0(&arg0->unk28, arg1, arg2[1]);
    func_800131D0(&arg0->unk30, arg1, arg2[2]);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004E06C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004E22C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004E98C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004EA3C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004EA98);

s32 func_8004EAD0(Sub8007618C *arg0) {
    return arg0->unkA == 0;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004EADC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004EBF8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004EC4C);

void func_8004ECA8(Sub8007618C *arg0) {
    s16 step;
    s16 cur;
    s16 cur2;
    Sub8004ECA8 *tbl;

    step = arg0->unkC;
    if (step > 0) {
        tbl = arg0->unk1C;
        cur = arg0->unkA;
        if (cur < ((Elem8004ECA8 *)(tbl->unkC[arg0->unk0] + (s32)tbl))->unk10 - 1) {
            arg0->unkA = cur + step;
        }
    } else {
        cur2 = arg0->unkA;
        if (cur2 > 0) {
            arg0->unkA = cur2 + step;
        }
    }
}

s32 func_8004ED1C(Sub8007618C *arg0) {
    Sub8004ECA8 *tbl;

    if (arg0->unkC > 0) {
        tbl = arg0->unk1C;
        return ((Elem8004ECA8 *)(tbl->unkC[arg0->unk0] + (s32)tbl))->unk10 - 1;
    }
    return 0;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004ED5C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004EDAC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004EF74);

s32 func_8004EFB8(Sub8007618C *arg0, Sub8004DE88 *arg1) {
    arg1->unk0 = func_8004EF74(&arg0->unk20, arg1->unk0, arg0->unk3);
    arg1->unk2 = func_8004EF74(&arg0->unk28, arg1->unk2, arg0->unk3);
    arg1->unk4 = func_8004EF74(&arg0->unk30, arg1->unk4, arg0->unk3);
}

s32 func_8004F024(Sub8007618C *arg0, Sub8004DE88 *arg1) {
    u8 n;

    func_8004EDAC(arg0, arg1);
    func_8004EC4C(arg0);
    func_8004EFB8(arg0, arg1);
    n = arg0->unk2 - 1;
    arg0->unk2 = n;
    return n & 0xFF;
}

s32 func_8004F080(Sub8007618C *arg0, Sub8004DE88 *arg1) {
    u8 n;

    func_8004ECA8(arg0);
    func_8004EFB8(arg0, arg1);
    n = arg0->unk2 - 1;
    arg0->unk2 = n;
    return n & 0xFF;
}

s32 func_8004F0D4(Sub8007618C *arg0, Sub8004DE88 *arg1, Sub8004DE88 *arg2) {
    func_8004EC4C(arg0);
    arg1->unk0 = func_8004EF74(&arg0->unk20, arg1->unk0, arg0->unk3);
    arg1->unk2 = func_8004EF74(&arg0->unk28, arg1->unk2, arg0->unk3);
    arg1->unk4 = func_8004EF74(&arg0->unk30, arg1->unk4, arg0->unk3);
    arg2->unk0 = func_8004EF74(&arg0->unk38, arg2->unk0, arg0->unk3);
    arg2->unk2 = func_8004EF74(&arg0->unk40, arg2->unk2, arg0->unk3);
    arg2->unk4 = func_8004EF74(&arg0->unk48, arg2->unk4, arg0->unk3);
    return --arg0->unk2;
}

void func_8004F1A0(void) {
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004F1A8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004F508);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004FA44);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004FD9C);

void func_8004FEAC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s16 *arg4) {
    u16 *div = &D_80041210;

    arg4[0] = (((-arg1 * arg2 - arg0 * arg3) >> 0xC) * 0x17) / *div;
    arg4[1] = (((arg1 * arg3 - arg0 * arg2) >> 0xC) * 0x17) / *div;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8004FF48);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80050088);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800501DC);

INCLUDE_RODATA("asm/USA/fdat202/nonmatchings/fdat202", D_8004ADA0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80050468);

void func_80051148(void) {
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80051150);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800513EC);

void func_800514C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, ...) {
    Sub8007BA2C pts[16];
    Sub8007BA2C *p;
    s32 *ap;
    s32 *color;
    s32 n;

    ap = &arg3;
    p = pts;
    color = &D_8008DA1C[arg0];
    for (n = arg3; n != -1; n--) {
        p->unk0 = arg1 + *++ap;
        p->unk2 = arg2 + *++ap;
        p++;
    }
    func_800610A4(pts, color, arg3, 16, 1);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005154C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005156C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800519B0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800519F8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80051C94);

void func_80051CDC(s32 arg0, s32 arg1, s32 arg2) {
    func_800513EC(arg0, arg1, arg2 * 2, D_8008DB0C);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80051D04);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80051F28);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80052010);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80052048);

s32 func_80052338(void) {
    return D_801ED844->unk10 == 0;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80052350);

void func_8005239C(s16 arg0) {
    D_801ED848 = arg0;
    D_801ED84A = 0;
    D_801ED84C = 0;
}

Elem80052338 *func_800523BC(Elem80052338 *arg0) {
    arg0++;
    if (arg0 == D_801ED840) {
        arg0 -= 8;
    }
    return arg0;
}

void func_800523DC(void) {
    Elem80052338 *e;
    Elem80052338 **head;
    u16 **tbl;
    s32 i;

    tbl = &D_801ED850;
    i = 8;
    *tbl = (u16 *)((u8 *)*tbl + (s32)tbl);
    e = (Elem80052338 *)((u8 *)tbl - 0xB0);
    do {
        e->unk10 = 0;
        e++;
    } while (--i != 0);
    head = (Elem80052338 **)D_801ED840;
    D_801ED844 = D_801ED840 - 8;
    *head = D_801ED840 - 8;
    func_8005239C(0);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80052440);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80052650);

INCLUDE_RODATA("asm/USA/fdat202/nonmatchings/fdat202", D_8004ADC0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005277C);

void func_800529F0(s32 arg0, s32 arg1, s32 arg2) {
    func_8005277C(arg0, arg1, (u8 *)&D_801ED850 + D_801ED850[arg2]);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80052A2C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80052B28);

void func_80052F90(Obj80052F90 *arg0, Sub80052F90 *arg1) {
    if (D_80039D10 != 0 || (arg0->unkC & 4)) {
        arg1->unk4 = D_801ED854[arg0->unkE];
        arg1->unk8 = arg1->unk10 = arg0->unk0;
        arg1->unkA = arg1->unkE = arg0->unk2;
        arg1->unkC = arg1->unk14 = arg0->unk4;
        arg1->unk12 = arg1->unk16 = arg0->unk6;
    }
}

void func_80053020(Obj80052F90 *arg0, Sub80052F90 *arg1, s32 arg2) {
    s32 cx;
    s32 cy;
    s32 s;
    s32 c;
    s32 t;

    if (D_80039D10 != 0 || (arg0->unkC & 4)) {
        cx = (arg0->unk0 + arg0->unk4) >> 1;
        cy = (arg0->unk2 + arg0->unk6) >> 1;
        s = rsin(arg2);
        c = rcos(arg2);
        arg1->unk8 = arg1->unk10 = cx + (((arg0->unk0 - cx) * s) >> 12);
        c = 0x1000 - c;
        arg1->unkC = arg1->unk14 = cx + (((arg0->unk4 - cx) * s) >> 12);
        t = (c * c) >> 12;
        arg1->unkA = arg1->unkE = cy + (((arg0->unk2 - cy) * t) >> 12);
        arg1->unk12 = arg1->unk16 = cy + (((arg0->unk6 - cy) * t) >> 12);
        LoadAverageCol(D_8008DBC8, (u8 *)&D_801ED854[arg0->unkE], 0x1000 - s, s, (u8 *)&arg1->unk4);
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80053190);

s32 func_8005360C(Obj80053908 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u16 x;
    u16 y;
    s32 ret;

    x = arg1;
    y = arg2;
    D_801A5F34[arg3] = arg0;
    ret = func_80015D80(x, y);
    func_800165E4(x, y, arg0);
    func_800574D8((Obj80053908 *)((u8 *)arg0 + arg0->unk8));
    return ret;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80053688);

s32 func_800537FC(Obj80053908 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 ret;

    ret = func_8005360C(arg0, arg1, arg2, arg4);
    func_80053688(arg3, arg4);
    return ret;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80053848);

void func_80053908(u16 arg0, Obj80053908 *arg1) {
    D_801A5F34[arg0] = arg1;
    arg1 = (Obj80053908 *)((s32)arg1 + arg1->unk8);
    D_801A5F30.unk0 = (Bank80067EBC *)arg1;
    func_800574D8(arg1);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80053950);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80053A54);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80053FAC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800543F0);

void func_8005460C(Elem8005460C *arg0, s32 arg1) {
    s32 i;
    Elem8005460C *p;
    s32 unused[2];

    p = arg0;
    i = arg1 - 1;
    if (arg1 != 0) {
        do {
            func_800543F0(p);
            i--;
            p++;
        } while (i != -1);
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80054660);

s32 func_800546E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 d1;
    s32 d2;

    arg3 += arg0;
    d1 = (arg3 - arg1) & 0xFFF;
    if (((arg2 - arg1) & 0xFFF) < d1) {
        if (d1 > 0x800) {
            d1 = 0x1000 - d1;
        }
        d2 = (arg3 - arg2) & 0xFFF;
        if (d2 > 0x800) {
            d2 = 0x1000 - d2;
        }
        if (d1 < d2) {
            return arg1 - arg0;
        }
        return arg2 - arg0;
    }
    return d1 + arg1 - arg0;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80054750);

void func_8005583C(void) {
    Obj800558A8 *p;
    u16 i;

    p = D_801A6548;
    i = 0x20;
    do {
        p->unk0 = 0;
        p->unk20 = NULL;
        p++;
    } while (--i);
}

void func_8005586C(void) {
    Obj800558A8 *p;
    u16 i;

    p = D_801A6548;
    i = 0x20;
    do {
        if (p->unk0 != 0) {
            p->unk0 = 1;
        }
        p++;
    } while (--i != 0);
}

void func_800558A8(Obj800558A8 *arg0) {
    arg0->unk0 = 0;
    *arg0->unk24 = 0;
    if (arg0->unk20 != NULL) {
        func_80016114(arg0->unk20);
        arg0->unk20 = NULL;
    }
}

void func_800558F4(void) {
    Obj800558A8 *p;
    s16 i;

    p = D_801A6548;
    i = 0x1F;
    do {
        if (p->unk0 != 0) {
            func_800558A8(p);
        }
        i--;
        p++;
    } while (i != -1);
}

void func_80055964(void) {
    Obj800558A8 *p;
    u16 i;

    p = D_801A6548;
    i = 0x20;
    do {
        if (p->unk0 == 1) {
            func_800558A8(p);
        }
        p++;
    } while (--i != 0);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800559D0);

s32 func_80055A24(Obj80055A24 *arg0, s32 arg1, Sub8004DE88 *arg2, Sub8004DE88 *arg3, SVECTOR *arg4, s32 arg5, s32 arg6, s32 arg7, s32 *arg8) {
    VECTOR tv;
    Sub8006F234 m;
    VECTOR lv;
    Obj80053908 *h;
    Part80055A24 *part;
    Vtx80055A24 *verts;
    s32 k;
    SVECTOR *v;
    Blk80055A24 *blk;

    h = D_801A5F34[arg1];
    blk = (Blk80055A24 *)((u8 *)h + h->unk8);
    verts = ((Elem80055A24 *)((u8 *)blk->unkC + (arg6 << 5) - (arg6 << 2)))->unk18;
    if (arg0 != NULL) {
        part = &arg0->unk20[arg5];
        func_80013AFC(0x800 - arg3->unk2, &m);
        m.unk0[0][0] >>= 2;
        m.unk0[0][2] >>= 2;
        m.unk0[1][1] >>= 2;
        m.unk0[2][0] >>= 2;
        m.unk0[2][2] >>= 2;
        m.unk14[0] = arg2->unk0;
        m.unk14[1] = arg2->unk2;
        m.unk14[2] = arg2->unk4;
        SetRotMatrix(&m);
        SetTransMatrix(&m);
        gte_ldlv0(part->unk28.unk14);
        gte_rtv0tr();
        gte_stlvnl(&tv);
        gte_ldclmv(&part->unk28.unk0[0][0]);
        gte_rtir();
        gte_stclmv(&m.unk0[0][0]);
        gte_ldclmv(&part->unk28.unk0[0][1]);
        gte_rtir();
        gte_stclmv(&m.unk0[0][1]);
        gte_ldclmv(&part->unk28.unk0[0][2]);
        gte_rtir();
        gte_stclmv(&m.unk0[0][2]);
        SetRotMatrix(&m);
        SetTransMatrix((Sub8006F234 *)((u8 *)&tv - (u32)((Sub8006F234 *)0)->unk14));
        k = 1;
    } else {
        func_80013AFC(0x800 - arg3->unk2, &m);
        m.unk0[0][0] >>= 2;
        m.unk0[0][2] >>= 2;
        m.unk0[1][1] >>= 2;
        m.unk0[2][0] >>= 2;
        m.unk0[2][2] >>= 2;
        m.unk14[0] = arg2->unk0;
        m.unk14[1] = arg2->unk2;
        m.unk14[2] = arg2->unk4;
        SetRotMatrix(&m);
        SetTransMatrix(&m);
        k = 2;
    }
    for (arg7--; arg7 != -1; arg7--) {
        v = &verts[*arg8++].v[k];
        gte_ldv0(v);
        gte_rtv0tr();
        gte_stlvnl(&lv);
        arg4->vx = lv.vx;
        arg4->vy = lv.vy;
        arg4->vz = lv.vz;
        arg4++;
    }
    return 1;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80055DB8);

void func_80055E20(Obj80055E20 *arg0, u8 *arg1) {
    u32 idx;
    s16 v;
    Elem8005460C *e;

    if (arg0 != NULL) {
        idx = *arg1++;
        if (idx != 0xFF) {
            do {
                e = &arg0->unk20[idx];
                v = e->unk12;
                if (v >= 0) {
                    e->unk12 = v - 0x1000;
                }
                idx = *arg1++;
            } while (idx != 0xFF);
        }
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80055E84);

void func_80055EB8(Obj80055EB8 *arg0, Sub80055EB8 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_80055E84(arg0->unk5C + (arg2 >> 1), &arg0->unk60);
    func_80055E84(arg0->unk5C + (arg3 >> 1), &arg0->unk68);
    func_80055E84(arg0->unk5C + (arg4 >> 1), &arg0->unk70);
    arg1->unk0 = ((arg0->unk60.unk0 + arg0->unk68.unk0 + arg0->unk70.unk0) * 0x5555) >> 16;
    arg1->unk2 = ((arg0->unk60.unk2 + arg0->unk68.unk2 + arg0->unk70.unk2) * 0x5555) >> 16;
    arg1->unk4 = ((arg0->unk60.unk4 + arg0->unk68.unk4 + arg0->unk70.unk4) * 0x5555) >> 16;
}

void func_80055FD8(Obj80055EB8 *arg0, Sub80055EB8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_80055E84(arg0->unk5C + (arg2 >> 1), &arg0->unk60);
    func_80055E84(arg0->unk5C + (arg3 >> 1), &arg0->unk68);
    func_80055E84(arg0->unk5C + (arg4 >> 1), &arg0->unk70);
    func_80055E84(arg0->unk5C + (arg5 >> 1), &arg0->unk78);
    arg1->unk0 = (arg0->unk60.unk0 + arg0->unk68.unk0 + arg0->unk70.unk0 + arg0->unk78.unk0) >> 2;
    arg1->unk2 = (arg0->unk60.unk2 + arg0->unk68.unk2 + arg0->unk70.unk2 + arg0->unk78.unk2) >> 2;
    arg1->unk4 = (arg0->unk60.unk4 + arg0->unk68.unk4 + arg0->unk70.unk4 + arg0->unk78.unk4) >> 2;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800560F4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80056304);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800563DC);

s32 func_800564AC(Obj80055A24 *arg0, s32 arg1, Sub8004DE88 *arg2, Sub8004DE88 *arg3, s32 arg4, s32 arg5) {
    Scr800564AC *scr;
    Part80055A24 *p;
    s32 n;
    s32 idx;
    s32 sum;
    Elem80055A24 *e;

    scr = (Scr800564AC *)0x1F800000;
    scr->unk50 = D_801A5F34[arg1];
    if (scr->unk50 == NULL) {
        return 0;
    }
    scr->unk80 = arg4;
    scr->unk88 = arg5;
    scr->unk84 = 0;
    if (scr->unk50->unk5 != 0) {
        func_80013AFC(0x800 - arg3->unk2, &scr->unk0);
        scr->unk0.unk0[0][0] >>= 2;
        scr->unk0.unk0[0][2] >>= 2;
        scr->unk0.unk0[1][1] >>= 2;
        scr->unk0.unk0[2][0] >>= 2;
        scr->unk0.unk0[2][2] >>= 2;
        scr->unk0.unk14[0] = arg2->unk0;
        scr->unk0.unk14[1] = arg2->unk2;
        scr->unk0.unk14[2] = arg2->unk4;
        scr->unk54.blk = (Blk80055A24 *)((u8 *)scr->unk50 + scr->unk50->unk8);
        if (arg0 == NULL) {
            func_800563DC(scr, scr->unk54.blk->unk0);
            return 1;
        }
        scr->unk54.elem = scr->unk54.blk->unkC;
        n = scr->unk50->unk5;
        p = arg0->unk20;
        sum = 0;
        for (n--; n != -1; n--, p++) {
            idx = p->unk12;
            if (idx < 0) {
                goto neg;
            }
        sum:
            e = &scr->unk54.elem[idx];
            sum += e->unk14;
            continue;
        neg:
            if (idx < -0x800) {
                idx += 0x1000;
                goto sum;
            }
        }
        func_80056304(scr, sum);
        n = scr->unk50->unk5;
        p = arg0->unk20;
        for (n--; n != -1; p++, n--) {
            idx = p->unk12;
            if (idx < 0) {
                goto neg2;
            }
        draw:
            gte_SetRotMatrix(&scr->unk0);
            gte_SetTransMatrix(&scr->unk0);
            gte_ldlv0(p->unk28.unk14);
            gte_rtv0tr();
            gte_stlvnl(&scr->unk40);
            gte_ldclmv(&p->unk28.unk0[0][0]);
            gte_rtir();
            gte_stclmv(&scr->unk20.unk0[0][0]);
            gte_ldclmv(&p->unk28.unk0[0][1]);
            gte_rtir();
            gte_stclmv(&scr->unk20.unk0[0][1]);
            gte_ldclmv(&p->unk28.unk0[0][2]);
            gte_rtir();
            gte_stclmv(&scr->unk20.unk0[0][2]);
            gte_SetRotMatrix(&scr->unk20);
            gte_SetTransMatrix((Sub8006F234 *)((u8 *)&scr->unk40 - (u32)((Sub8006F234 *)0)->unk14));
            func_800560F4(idx);
            continue;
        neg2:
            if (idx < -0x800) {
                idx += 0x1000;
                goto draw;
            }
        }
        return 1;
    }
    func_80013AFC(0x800 - arg3->unk2, &scr->unk0);
    scr->unk0.unk0[0][0] >>= 2;
    scr->unk0.unk0[0][2] >>= 2;
    scr->unk0.unk0[1][1] >>= 2;
    scr->unk0.unk0[2][0] >>= 2;
    scr->unk0.unk0[2][2] >>= 2;
    scr->unk0.unk14[0] = arg2->unk0;
    scr->unk0.unk14[1] = arg2->unk2;
    scr->unk0.unk14[2] = arg2->unk4;
    scr->unk54.blk = (Blk80055A24 *)((u8 *)scr->unk50 + scr->unk50->unk8);
    func_800563DC(scr, 1);
    return 1;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80056958);

void func_80056A54(void) {
    Elem80056A54 *p;
    s32 i;

    p = D_801AC964;
    i = 0x1F;
    do {
        func_800135E8(&p->unk0, &p->unk14, 1);
        func_800135E8(&p->unk0, &p->unk28, 2);
        func_800135E8(&p->unk0, &p->unk3C, 3);
        i--;
        p++;
    } while (i != -1);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80056AD0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80056B54);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80056C30);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80056C6C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80056DD4);

void func_80057134(void) {
    s32 i;
    Elem80057134 *p;
    s32 ff;

    i = 8;
    p = D_801AC8A4;
    ff = 0xFF;
    do {
        p->unk0 = ff;
        i--;
        p++;
    } while (i != 0);
}

void func_8005715C(void) {
    Obj8005715C *db;
    Elem8005715C *e;

    db = (Obj8005715C *)&D_801A5E18;
    db->unk0 = db->unk0 == 0;
    e = &((Obj8005715C *)&D_801A5E18)->unk4[db->unk0];
    D_801A5F1C[0] = e;
    D_801A5F24[0] = &e->unk74;
    D_801A5F28.unk0 = e->unk0;
    ClearOTagR(D_801A5F28.unk0, 0x2000);
    D_801A5F24[0]->unk8 = D_801A5F24[0]->unk0;
    D_801AC818[0] = 0;
    D_801AC814[0] = 0;
    func_8004DCF8();
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800571F0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80057288);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800572A8);

void func_80057360(void) {
    SetGeomOffset(0xA0, 0x78);
    SetGeomScreen(0x140);
    SetDefDrawEnv(D_801A5E20[0].unk0, 0, 0, 0x140, 0xF0);
    SetDefDispEnv(D_801A5E20[0].unk5C, 0, 0xF0, 0x140, 0xF0);
    SetDefDrawEnv(D_801A5E20[1].unk0, 0, 0xF0, 0x140, 0xF0);
    SetDefDispEnv(D_801A5E20[1].unk5C, 0, 0, 0x140, 0xF0);
    D_801A5E39 = 0;
    D_801A5E3A = 0;
    D_801A5E3B = 0;
    D_801A5EB9 = 0;
    D_801A5EBA = 0;
    D_801A5EBB = 0;
    func_800572A8();
    SetGeomScreen(0x140);
    SetFarColor(0, 0, 0);
    D_801A5E18 = -1;
    func_8005583C();
    func_80057134();
    D_801AD668 = 0;
    D_801AC8A3 = 0;
    D_801AC8A2 = 0;
    D_801AC8A1 = 0;
    D_801AC8A0 = 0;
    D_801AC81C = 0;
    D_801AC810 = 0;
    func_800154D8(D_80090A28, D_8008DCA0, 0x200);
    func_80057288();
    D_801AC80C = 1;
}

void func_800574D8(Obj80053908 *arg0) {
    Blk80055A24 *blk;
    Elem80055A24 *e;
    Hdr800574D8 *hdr;
    u16 *b;
    s32 i;
    s32 n;
    u16 flags;
    u32 code;
    s32 unused[2];

    blk = (Blk80055A24 *)arg0;
    e = blk->unkC;
    i = blk->unk8;
    for (i--; i != -1; e++, i--) {
        if (e->unkE & 0x8000) {
            e->unk16 = 0xFFFF;
            continue;
        }
        e->unk0 = (u8 *)((s32)e->unk0 + (s32)blk->unkC);
        e->unk8 = (u8 *)((s32)e->unk8 + (s32)blk->unkC);
        e->unk10 = (Hdr800574D8 *)((s32)e->unk10 + (s32)blk->unkC);
        e->unk18 = (Vtx80055A24 *)((s32)e->unk18 + (s32)blk->unkC);
        flags = e->unkE;
        if (flags & 0x4000) {
            continue;
        }
        n = e->unk14 + (flags & 0x1FF);
        hdr = e->unk10;
        while (--n != -1) {
            b = (u16 *)(hdr + 1);
            code = hdr->w;
            hdr = (Hdr800574D8 *)b + hdr->b[1];
            switch ((code >> 24) & 0xBC) {
            case 0x20:
                b[3] <<= 4;
                b[4] <<= 4;
                b[5] <<= 4;
                b[2] <<= 3;
                break;
            case 0x30:
                b[3] <<= 4;
                b[5] <<= 4;
                b[7] <<= 4;
                b[2] <<= 3;
                b[4] <<= 3;
                b[6] <<= 3;
                break;
            case 0x24:
                b[7] <<= 4;
                b[8] <<= 4;
                b[9] <<= 4;
                b[6] <<= 3;
                break;
            case 0x34:
                b[7] <<= 4;
                b[9] <<= 4;
                b[11] <<= 4;
                b[6] <<= 3;
                b[8] <<= 3;
                b[10] <<= 3;
                break;
            case 0x28:
                b[3] <<= 4;
                b[4] <<= 4;
                b[5] <<= 4;
                b[6] <<= 4;
                b[2] <<= 3;
                break;
            case 0x38:
                b[3] <<= 4;
                b[5] <<= 4;
                b[7] <<= 4;
                b[9] <<= 4;
                b[2] <<= 3;
                b[4] <<= 3;
                b[6] <<= 3;
                b[8] <<= 3;
                break;
            case 0x2C:
                b[9] <<= 4;
                b[10] <<= 4;
                b[11] <<= 4;
                b[12] <<= 4;
                b[8] <<= 3;
                break;
            case 0x3C:
                b[9] <<= 4;
                b[11] <<= 4;
                b[13] <<= 4;
                b[15] <<= 4;
                b[8] <<= 3;
                b[10] <<= 3;
                b[12] <<= 3;
                b[14] <<= 3;
                break;
            case 0xA0:
                b[2] <<= 4;
                b[3] <<= 4;
                b[4] <<= 4;
                break;
            case 0xB0:
                b[6] <<= 4;
                b[7] <<= 4;
                b[8] <<= 4;
                break;
            case 0xA4:
                b[8] <<= 4;
                b[9] <<= 4;
                b[10] <<= 4;
                break;
            case 0xB4:
                b[12] <<= 4;
                b[13] <<= 4;
                b[14] <<= 4;
                break;
            case 0xA8:
                b[2] <<= 4;
                b[3] <<= 4;
                b[4] <<= 4;
                b[5] <<= 4;
                break;
            case 0xB8:
                b[8] <<= 4;
                b[9] <<= 4;
                b[10] <<= 4;
                b[11] <<= 4;
                break;
            case 0xAC:
                b[10] <<= 4;
                b[11] <<= 4;
                b[12] <<= 4;
                b[13] <<= 4;
                break;
            case 0xBC:
                b[16] <<= 4;
                b[17] <<= 4;
                b[18] <<= 4;
                b[19] <<= 4;
                break;
            }
        }
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80057994);

void func_800579D4(u16 arg0) {
    s32 unused[2];

    D_801A5F30.unk0 = (Bank80067EBC *)D_801A5F2C[arg0];
}

void func_80057A00(Elem80055A24 *arg0, s32 arg1) {
    Scr80057A00 *sp;
    Hdr800574D8 *pkt;
    u8 *base;
    Prim80057A00 *p;
    Pkt80057A00 *body;
    Elem8005A364 *v0;
    Elem8005A364 *v1;
    Elem8005A364 *v2;
    Elem8005A364 *v3;
    s32 z;
    Elem80055A24 *m;
    Sub8005715C *db;
    u16 n;

    sp = (Scr80057A00 *)0x1F800000;
    sp->unk2C.b[0] = sp->unk2C.b[1] = sp->unk2C.b[2] = 10;
    sp->unk28 = 0;
    sp->unk10 = arg0;
    sp->unk20 = D_801987CC + 0xF;
    sp->unk24 = D_801987CC + 3;
    sp->unk1C = (Sub8008C95C *)(D_801A5F28.unk0 + arg1);
    base = (u8 *)D_801A5F28.unkB20;
    func_80057F74(arg0->unk4);
    m = sp->unk10;
    db = D_801A5F24[0];
    n = m->unk14;
    pkt = m->unk10;
    sp->unk18 = n;
    sp->unk4 = (u8 *)db->unk8;
    sp->unk8 = (u8 *)db->unk4;
    if (sp->unk8 < sp->unk4 + sp->unk18 * 4 + sp->unk18 * 0x10 + sp->unk18 * 0x20) {
        return;
    }
    while (sp->unk18-- != 0) {
        sp->unkC = *pkt++;
        if ((sp->unkC.b[3] & 0xFC) == 0x28) {
            p = (Prim80057A00 *)sp->unk4;
            sp->unk4 = (u8 *)(p + 1);
            body = (Pkt80057A00 *)pkt;
            v0 = (Elem8005A364 *)(base + body->unk6);
            v1 = (Elem8005A364 *)(base + body->unk8);
            v2 = (Elem8005A364 *)(base + body->unkA);
            v3 = (Elem8005A364 *)(base + body->unkC);
            p->unk8 = v0->unk0;
            p->unkC = v1->unk0;
            p->unk10 = v2->unk0;
            p->unk14 = v3->unk0;
            p->unk4.w = sp->unk2C.w;
            p->unk4.b[3] = sp->unkC.b[3];
            p->unk0.unk0_24 = 5;
            z = (v0->unk4 + v1->unk4 + v2->unk4 + v3->unk4) >> sp->unk24;
            if (z >= 0) {
                p->unk0.unk0_0 = sp->unk1C[z].unk0_0;
                sp->unk1C[z].unk0_0 = (u32)p;
            }
        }
        pkt += sp->unkC.b[1];
    }
    D_801A5F24[0]->unk8 = (s32)sp->unk4;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80057C44);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80057F74);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80058028);

void func_8005804C(u16 arg0, s32 arg1, s32 arg2) {
    Scr80057A00 *sp;
    u8 *vtx;
    Elem8005A364 *a;
    Elem8005A364 *b;
    Elem8005A364 *c;
    Elem8005A364 *d;
    Hdr800574D8 *pk;
    Pk8005804C *q;
    Prim8005804C *p;
    s32 z;

    sp = (Scr80057A00 *)0x1F800000;
    sp->unk2C.b[0] = sp->unk2C.b[1] = sp->unk2C.b[2] = 0x40;
    gte_ldrgb(&sp->unk2C);
    sp->unk28 = 0;
    sp->unk20 = D_801987CC + 0xF;
    sp->unk24 = D_801987CC + 3;
    sp->unk1C = (Sub8008C95C *)(D_801A5F28.unk0 + arg1);
    sp->unk10 = (Elem80055A24 *)((u8 *)D_801A5F28.unk8->unkC + arg0 * 0x20 - arg0 * 4);
    vtx = (u8 *)D_801A5F28.unkB20;
    if (sp->unk10->unk4 == 0) {
        return;
    }
    if (arg2 != 0) {
        func_80057F74(sp->unk10->unk4 + sp->unk10->unk6);
        sp->unk18 = sp->unk10->unk14 + (sp->unk10->unkE & 0x1FF);
    } else {
        func_80057F74(sp->unk10->unk4);
        sp->unk18 = sp->unk10->unk14;
    }
    sp->unk14 = sp->unk10->unk8;
    pk = sp->unk10->unk10;
    sp->unk4 = (u8 *)D_801A5F24[0]->unk8;
    sp->unk8 = (u8 *)D_801A5F24[0]->unk4;
    if (sp->unk8 < sp->unk4 + sp->unk18 * 4 + sp->unk18 * 16 + sp->unk18 * 32) {
        return;
    }
    while (sp->unk18-- != 0) {
        sp->unkC = *pk;
        pk++;
        q = (Pk8005804C *)pk;
        switch (sp->unkC.b[3] & 0xFC) {
        case 0x24:
            a = (Elem8005A364 *)(vtx + q->lf3.unkE);
            b = (Elem8005A364 *)(vtx + q->lf3.unk10);
            c = (Elem8005A364 *)(vtx + q->lf3.unk12);
            func_80058028(&sp->unk0, a->unk0, b->unk0, c->unk0);
            if (sp->unk0 <= 0) {
                break;
            }
            gte_ldv0(sp->unk14 + q->lf3.unkC);
            gte_lddp(a->unkC);
            gte_ncds();
            p = (Prim8005804C *)sp->unk4;
            sp->unk4 += sizeof(Ft38005804C);
            p->f3.unk8 = a->unk0;
            p->f3.unk10 = b->unk0;
            p->f3.unk18 = c->unk0;
            p->f3.unkC = q->lf3.unk0;
            p->f3.unk14 = q->lf3.unk4;
            p->f3.unk1C = q->lf3.unk8;
            p->f3.tag.unk0_24 = 7;
            z = ((a->unk4 + b->unk4 + c->unk4) * 0x1555) >> sp->unk20;
            if (sp->unk28 < z) {
                p->f3.tag.unk0_0 = sp->unk1C[z].unk0_0;
                sp->unk1C[z].unk0_0 = (u32)p;
                gte_strgb(&p->f3.unk4);
                p->f3.unk4.c.code = sp->unkC.b[3] & 0xFE;
            }
            break;
        case 0x2C:
            a = (Elem8005A364 *)(vtx + q->lf4.unk12);
            b = (Elem8005A364 *)(vtx + q->lf4.unk14);
            c = (Elem8005A364 *)(vtx + q->lf4.unk16);
            func_80058028(&sp->unk0, a->unk0, b->unk0, c->unk0);
            if (sp->unk0 <= 0) {
                break;
            }
            gte_ldv0(sp->unk14 + q->lf4.unk10);
            gte_lddp(a->unkC);
            gte_ncds();
            p = (Prim8005804C *)sp->unk4;
            d = (Elem8005A364 *)(vtx + q->lf4.unk18);
            sp->unk4 += sizeof(Ft48005804C);
            p->f4.unk8 = a->unk0;
            p->f4.unk10 = b->unk0;
            p->f4.unk18 = c->unk0;
            p->f4.unk20 = d->unk0;
            p->f4.unkC = q->lf4.unk0;
            p->f4.unk14 = q->lf4.unk4;
            p->f4.unk1C = q->lf4.unk8;
            p->f4.unk24 = q->lf4.unkC;
            p->f4.tag.unk0_24 = 9;
            z = (a->unk4 + b->unk4 + c->unk4 + d->unk4) >> sp->unk24;
            if (sp->unk28 < z) {
                p->f4.tag.unk0_0 = sp->unk1C[z].unk0_0;
                sp->unk1C[z].unk0_0 = (u32)p;
                gte_strgb(&p->f4.unk4);
                p->f4.unk4.c.code = sp->unkC.b[3] & 0xFE;
            }
            break;
        case 0x34:
            a = (Elem8005A364 *)(vtx + q->lg3.unkE);
            b = (Elem8005A364 *)(vtx + q->lg3.unk12);
            c = (Elem8005A364 *)(vtx + q->lg3.unk16);
            func_80058028(&sp->unk0, a->unk0, b->unk0, c->unk0);
            if (sp->unk0 <= 0) {
                break;
            }
            gte_ldv3(sp->unk14 + q->lg3.unkC, sp->unk14 + q->lg3.unk10, sp->unk14 + q->lg3.unk14);
            gte_lddp(a->unkC);
            gte_ncdt();
            p = (Prim8005804C *)sp->unk4;
            sp->unk4 += sizeof(Gt38005804C);
            p->g3.unk8 = a->unk0;
            p->g3.unk14 = b->unk0;
            p->g3.unk20 = c->unk0;
            p->g3.unkC = q->lg3.unk0;
            p->g3.unk18 = q->lg3.unk4;
            p->g3.unk24 = q->lg3.unk8;
            p->g3.tag.unk0_24 = 9;
            z = ((a->unk4 + b->unk4 + c->unk4) * 0x1555) >> sp->unk20;
            if (sp->unk28 < z) {
                p->g3.tag.unk0_0 = sp->unk1C[z].unk0_0;
                sp->unk1C[z].unk0_0 = (u32)p;
                gte_strgb3(&p->g3.unk4, &p->g3.unk10, &p->g3.unk1C);
                p->g3.unk4.c.code = sp->unkC.b[3] & 0xFE;
            }
            break;
        case 0x3C:
            a = (Elem8005A364 *)(vtx + q->lg4.unk12);
            b = (Elem8005A364 *)(vtx + q->lg4.unk16);
            c = (Elem8005A364 *)(vtx + q->lg4.unk1A);
            func_80058028(&sp->unk0, a->unk0, b->unk0, c->unk0);
            if (sp->unk0 <= 0) {
                break;
            }
            gte_ldv3(sp->unk14 + q->lg4.unk10, sp->unk14 + q->lg4.unk14, sp->unk14 + q->lg4.unk18);
            gte_lddp(a->unkC);
            gte_ncdt();
            p = (Prim8005804C *)sp->unk4;
            d = (Elem8005A364 *)(vtx + q->lg4.unk1E);
            sp->unk4 += sizeof(Gt48005804C);
            p->g4.unk8 = a->unk0;
            p->g4.unk14 = b->unk0;
            p->g4.unk20 = c->unk0;
            p->g4.unk2C = d->unk0;
            gte_strgb3(&p->g4.unk4, &p->g4.unk10, &p->g4.unk1C);
            gte_ldv0(sp->unk14 + q->lg4.unk1C);
            gte_lddp(a->unkC);
            gte_ncds();
            p->g4.unkC = q->lg4.unk0;
            p->g4.unk18 = q->lg4.unk4;
            p->g4.unk24 = q->lg4.unk8;
            p->g4.unk30 = q->lg4.unkC;
            p->g4.tag.unk0_24 = 0xC;
            p->g4.unk4.c.code = sp->unkC.b[3] & 0xFE;
            z = (a->unk4 + b->unk4 + c->unk4 + d->unk4) >> sp->unk24;
            if (sp->unk28 < z) {
                p->g4.tag.unk0_0 = sp->unk1C[z].unk0_0;
                sp->unk1C[z].unk0_0 = (u32)p;
                gte_strgb(&p->g4.unk28);
            }
            break;
        case 0xA4:
            p = (Prim8005804C *)sp->unk4;
            a = (Elem8005A364 *)(vtx + q->ft3.unk10);
            b = (Elem8005A364 *)(vtx + q->ft3.unk12);
            c = (Elem8005A364 *)(vtx + q->ft3.unk14);
            sp->unk4 += sizeof(Ft38005804C);
            p->f3.unk8 = a->unk0;
            p->f3.unk10 = b->unk0;
            p->f3.unk18 = c->unk0;
            p->f3.unk4.w = q->ft3.unkC;
            p->f3.unkC = q->ft3.unk0;
            p->f3.unk14 = q->ft3.unk4;
            p->f3.unk1C = q->ft3.unk8;
            p->f3.tag.unk0_24 = 7;
            p->f3.unk4.c.code = sp->unkC.b[3] & 0x7F;
            z = ((a->unk4 + b->unk4 + c->unk4) * 0x1555) >> sp->unk20;
            if (sp->unk28 < z) {
                p->f3.tag.unk0_0 = sp->unk1C[z].unk0_0;
                sp->unk1C[z].unk0_0 = (u32)p;
            }
            break;
        case 0xAC:
            p = (Prim8005804C *)sp->unk4;
            a = (Elem8005A364 *)(vtx + q->ft4.unk14);
            b = (Elem8005A364 *)(vtx + q->ft4.unk16);
            c = (Elem8005A364 *)(vtx + q->ft4.unk18);
            d = (Elem8005A364 *)(vtx + q->ft4.unk1A);
            sp->unk4 += sizeof(Ft48005804C);
            p->f4.unk8 = a->unk0;
            p->f4.unk10 = b->unk0;
            p->f4.unk18 = c->unk0;
            p->f4.unk20 = d->unk0;
            p->f4.unk4.w = q->ft4.unk10;
            p->f4.unkC = q->ft4.unk0;
            p->f4.unk14 = q->ft4.unk4;
            p->f4.unk1C = q->ft4.unk8;
            p->f4.unk24 = q->ft4.unkC;
            p->f4.tag.unk0_24 = 9;
            p->f4.unk4.c.code = sp->unkC.b[3] & 0x7F;
            z = (a->unk4 + b->unk4 + c->unk4 + d->unk4) >> sp->unk24;
            if (sp->unk28 < z) {
                p->f4.tag.unk0_0 = sp->unk1C[z].unk0_0;
                sp->unk1C[z].unk0_0 = (u32)p;
            }
            break;
        }
        pk += sp->unkC.b[1];
    }
    D_801A5F24[0]->unk8 = (s32)sp->unk4;
}

void func_80058B04(Obj80055A24 *arg0, Obj80053908 *arg1, s32 arg2, u16 arg3, s32 arg4, s32 arg5) {
    Scr80058B04 *sp;
    Part80055A24 *p;
    s32 n;
    s32 i;
    s32 idx;
    s32 *src;
    s32 *dst;

    sp = (Scr80058B04 *)0x1F800000;
    p = arg0->unk20;
    n = arg1->unk5;
    src = D_800B1228.unk0;
    dst = sp->unk38.unk0;
    for (i = 5; i != 0; i--) {
        *dst++ = *src++;
    }
    sp->unk38.unk14[0] = D_800B1228.unk14[0];
    sp->unk38.unk14[1] = D_800B1228.unk14[1];
    sp->unk38.unk14[2] = D_800B1228.unk14[2];
    for (n--; n != -1; p++, n--) {
        if (p->unk12 < 0) {
            continue;
        }
        gte_SetRotMatrix(&sp->unk38);
        gte_SetTransMatrix(&sp->unk38);
        gte_ldlv0(p->unk28.unk14);
        gte_rtv0tr();
        gte_stlvnl(sp->unk84.unk14);
        gte_ldclmv(&p->unk28.unk0[0][0]);
        gte_rtir();
        gte_stclmv(&sp->unk58.unk0[0][0]);
        gte_ldclmv(&p->unk28.unk0[0][1]);
        gte_rtir();
        gte_stclmv(&sp->unk58.unk0[0][1]);
        gte_ldclmv(&p->unk28.unk0[0][2]);
        gte_rtir();
        gte_stclmv(&sp->unk58.unk0[0][2]);
        gte_SetRotMatrix(&sp->unk58);
        gte_SetTransMatrix(&sp->unk84);
        idx = p->unk12 + arg5;
        D_801A5F28.unk61C = (SVECTOR *)((Elem80055A24 *)((u8 *)D_801A5F28.unk8->unkC + idx * 0x20 - idx * 4))->unk0;
        if (arg3 == 0) {
            func_8005804C(idx, arg2, (1 << p->unk12) & arg4);
        } else {
            func_80059198(idx, arg2, arg3, (1 << p->unk12) & arg4);
        }
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80058E04);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800590C4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800590E8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005911C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80059140);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80059178);

void func_80059198(u16 arg0, s32 arg1, u16 arg2, s32 arg3) {
    Scr80057A00 *sp;
    Elem8005A364 *a;
    Elem8005A364 *b;
    Elem8005A364 *c;
    Elem8005A364 *d;
    Hdr800574D8 *pk;
    Pk8005804C *q;
    Prim8005804C *p;
    s32 z;
    u8 *vtx;

    sp = (Scr80057A00 *)0x1F800000;
    sp->unk2C.b[0] = sp->unk2C.b[1] = sp->unk2C.b[2] = 0x40;
    sp->unk28 = 0;
    sp->unk20 = D_801987CC + 0xF;
    sp->unk24 = D_801987CC + 3;
    sp->unk1C = (Sub8008C95C *)(D_801A5F28.unk0 + arg1);
    sp->unk10 = (Elem80055A24 *)((u8 *)D_801A5F28.unk8->unkC + arg0 * 0x20 - arg0 * 4);
    vtx = (u8 *)D_801A5F28.unkB20;
    if (sp->unk10->unk4 == 0) {
        return;
    }
    func_80058E04(sp, arg2, arg3);
    sp->unk14 = sp->unk10->unk8;
    pk = sp->unk10->unk10;
    if (arg3 != 0) {
        sp->unk18 = sp->unk10->unk14 + (sp->unk10->unkE & 0x1FF);
    } else {
        sp->unk18 = sp->unk10->unk14;
    }
    sp->unk4 = (u8 *)D_801A5F24[0]->unk8;
    sp->unk8 = (u8 *)D_801A5F24[0]->unk4;
    if (sp->unk8 < sp->unk4 + sp->unk18 * 4 + sp->unk18 * 16 + sp->unk18 * 32) {
        return;
    }
    while (sp->unk18-- != 0) {
        sp->unkC = *pk;
        pk++;
        q = (Pk8005804C *)pk;
        switch (sp->unkC.b[3] & 0xFD) {
        case 0x25:
            a = (Elem8005A364 *)(vtx + q->lf3.unkE);
            b = (Elem8005A364 *)(vtx + q->lf3.unk10);
            c = (Elem8005A364 *)(vtx + q->lf3.unk12);
            func_800590C4(&sp->unk0, a->unk0, b->unk0, c->unk0);
            if (sp->unk0 <= 0) {
                break;
            }
            gte_ldv0(sp->unk14 + q->lf3.unkC);
            gte_ncs();
            p = (Prim8005804C *)sp->unk4;
            sp->unk4 += sizeof(Gt38005804C);
            p->g3.unk8 = a->unk0;
            p->g3.unk14 = b->unk0;
            p->g3.unk20 = c->unk0;
            func_80059178(&sp->unk30);
            func_800590E8(&sp->unk30, &a->unk8, a->unkC);
            gte_strgb(&p->g3.unk4);
            func_800590E8(&sp->unk30, &b->unk8, b->unkC);
            p->g3.unkC = q->lf3.unk0;
            p->g3.unk18 = q->lf3.unk4;
            p->g3.unk24 = q->lf3.unk8;
            gte_strgb(&p->g3.unk10);
            func_800590E8(&sp->unk30, &c->unk8, c->unkC);
            p->g3.tag.unk0_24 = 9;
            p->g3.unk4.c.code = (sp->unkC.b[3] & 2) | 0x34;
            z = ((a->unk4 + b->unk4 + c->unk4) * 0x1555) >> sp->unk20;
            if (sp->unk28 < z) {
                p->g3.tag.unk0_0 = sp->unk1C[z].unk0_0;
                sp->unk1C[z].unk0_0 = (u32)p;
                gte_strgb(&p->g3.unk1C);
            }
            break;
        case 0x2D:
            a = (Elem8005A364 *)(vtx + q->lf4.unk12);
            b = (Elem8005A364 *)(vtx + q->lf4.unk14);
            c = (Elem8005A364 *)(vtx + q->lf4.unk16);
            func_800590C4(&sp->unk0, a->unk0, b->unk0, c->unk0);
            if (sp->unk0 <= 0) {
                break;
            }
            gte_ldv0(sp->unk14 + q->lf4.unk10);
            gte_ncs();
            p = (Prim8005804C *)sp->unk4;
            d = (Elem8005A364 *)(vtx + q->lf4.unk18);
            sp->unk4 += sizeof(Gt48005804C);
            p->g4.unk8 = a->unk0;
            p->g4.unk14 = b->unk0;
            p->g4.unk20 = c->unk0;
            p->g4.unk2C = d->unk0;
            func_80059178(&sp->unk30);
            func_800590E8(&sp->unk30, &a->unk8, a->unkC);
            gte_strgb(&p->g4.unk4);
            func_800590E8(&sp->unk30, &b->unk8, b->unkC);
            gte_strgb(&p->g4.unk10);
            func_800590E8(&sp->unk30, &c->unk8, c->unkC);
            p->g4.unkC = q->lf4.unk0;
            p->g4.unk18 = q->lf4.unk4;
            p->g4.unk24 = q->lf4.unk8;
            p->g4.unk30 = q->lf4.unkC;
            gte_strgb(&p->g4.unk1C);
            func_800590E8(&sp->unk30, &d->unk8, d->unkC);
            p->g4.tag.unk0_24 = 0xC;
            p->g4.unk4.c.code = (sp->unkC.b[3] & 2) | 0x3C;
            z = (a->unk4 + b->unk4 + c->unk4 + d->unk4) >> sp->unk24;
            if (sp->unk28 < z) {
                p->g4.tag.unk0_0 = sp->unk1C[z].unk0_0;
                sp->unk1C[z].unk0_0 = (u32)p;
                gte_strgb(&p->g4.unk28);
            }
            break;
        case 0x35:
            a = (Elem8005A364 *)(vtx + q->lg3.unkE);
            b = (Elem8005A364 *)(vtx + q->lg3.unk12);
            c = (Elem8005A364 *)(vtx + q->lg3.unk16);
            func_800590C4(&sp->unk0, a->unk0, b->unk0, c->unk0);
            if (sp->unk0 <= 0) {
                break;
            }
            func_8005911C((SVECTOR *)(sp->unk14 + q->lg3.unkC), &a->unk8, a->unkC);
            p = (Prim8005804C *)sp->unk4;
            sp->unk4 += sizeof(Gt38005804C);
            p->g3.unk8 = a->unk0;
            p->g3.unk14 = b->unk0;
            p->g3.unk20 = c->unk0;
            gte_strgb(&p->g3.unk4);
            func_8005911C((SVECTOR *)(sp->unk14 + q->lg3.unk10), &b->unk8, b->unkC);
            gte_strgb(&p->g3.unk10);
            func_8005911C((SVECTOR *)(sp->unk14 + q->lg3.unk14), &c->unk8, c->unkC);
            p->g3.unkC = q->lg3.unk0;
            p->g3.unk18 = q->lg3.unk4;
            p->g3.unk24 = q->lg3.unk8;
            p->g3.tag.unk0_24 = 9;
            p->g3.unk4.c.code = sp->unkC.b[3] & 0xFE;
            z = ((a->unk4 + b->unk4 + c->unk4) * 0x1555) >> sp->unk20;
            if (sp->unk28 < z) {
                p->g3.tag.unk0_0 = sp->unk1C[z].unk0_0;
                sp->unk1C[z].unk0_0 = (u32)p;
                gte_strgb(&p->g3.unk1C);
            }
            break;
        case 0x3D:
            a = (Elem8005A364 *)(vtx + q->lg4.unk12);
            b = (Elem8005A364 *)(vtx + q->lg4.unk16);
            c = (Elem8005A364 *)(vtx + q->lg4.unk1A);
            func_800590C4(&sp->unk0, a->unk0, b->unk0, c->unk0);
            if (sp->unk0 <= 0) {
                break;
            }
            func_8005911C((SVECTOR *)(sp->unk14 + q->lg4.unk10), &a->unk8, a->unkC);
            d = (Elem8005A364 *)(vtx + q->lg4.unk1E);
            p = (Prim8005804C *)sp->unk4;
            sp->unk4 += sizeof(Gt48005804C);
            gte_strgb(&p->g4.unk4);
            func_8005911C((SVECTOR *)(sp->unk14 + q->lg4.unk14), &b->unk8, b->unkC);
            p->g4.unk8 = a->unk0;
            p->g4.unk14 = b->unk0;
            p->g4.unk20 = c->unk0;
            p->g4.unk2C = d->unk0;
            gte_strgb(&p->g4.unk10);
            func_8005911C((SVECTOR *)(sp->unk14 + q->lg4.unk18), &c->unk8, c->unkC);
            gte_strgb(&p->g4.unk1C);
            func_8005911C((SVECTOR *)(sp->unk14 + q->lg4.unk1C), &d->unk8, d->unkC);
            p->g4.unkC = q->lg4.unk0;
            p->g4.unk18 = q->lg4.unk4;
            p->g4.unk24 = q->lg4.unk8;
            p->g4.unk30 = q->lg4.unkC;
            p->g4.tag.unk0_24 = 0xC;
            p->g4.unk4.c.code = sp->unkC.b[3] & 0xFE;
            z = (a->unk4 + b->unk4 + c->unk4 + d->unk4) >> sp->unk24;
            if (sp->unk28 < z) {
                p->g4.tag.unk0_0 = sp->unk1C[z].unk0_0;
                sp->unk1C[z].unk0_0 = (u32)p;
                gte_strgb(&p->g4.unk28);
            }
            break;
        case 0x24:
            a = (Elem8005A364 *)(vtx + q->lf3.unkE);
            b = (Elem8005A364 *)(vtx + q->lf3.unk10);
            c = (Elem8005A364 *)(vtx + q->lf3.unk12);
            func_800590C4(&sp->unk0, a->unk0, b->unk0, c->unk0);
            if (sp->unk0 <= 0) {
                break;
            }
            func_8005911C((SVECTOR *)(sp->unk14 + q->lf3.unkC), &sp->unk2C, a->unkC);
            p = (Prim8005804C *)sp->unk4;
            sp->unk4 += sizeof(Ft38005804C);
            p->f3.unk8 = a->unk0;
            p->f3.unk10 = b->unk0;
            p->f3.unk18 = c->unk0;
            p->f3.unkC = q->lf3.unk0;
            p->f3.unk14 = q->lf3.unk4;
            p->f3.unk1C = q->lf3.unk8;
            p->f3.tag.unk0_24 = 7;
            z = ((a->unk4 + b->unk4 + c->unk4) * 0x1555) >> sp->unk20;
            if (sp->unk28 < z) {
                p->f3.tag.unk0_0 = sp->unk1C[z].unk0_0;
                sp->unk1C[z].unk0_0 = (u32)p;
                gte_strgb(&p->f3.unk4);
                p->f3.unk4.c.code = sp->unkC.b[3];
            }
            break;
        case 0x2C:
            a = (Elem8005A364 *)(vtx + q->lf4.unk12);
            b = (Elem8005A364 *)(vtx + q->lf4.unk14);
            c = (Elem8005A364 *)(vtx + q->lf4.unk16);
            func_800590C4(&sp->unk0, a->unk0, b->unk0, c->unk0);
            if (sp->unk0 <= 0) {
                break;
            }
            func_8005911C((SVECTOR *)(sp->unk14 + q->lf4.unk10), &sp->unk2C, a->unkC);
            p = (Prim8005804C *)sp->unk4;
            d = (Elem8005A364 *)(vtx + q->lf4.unk18);
            sp->unk4 += sizeof(Ft48005804C);
            p->f4.unk8 = a->unk0;
            p->f4.unk10 = b->unk0;
            p->f4.unk18 = c->unk0;
            p->f4.unk20 = d->unk0;
            p->f4.unkC = q->lf4.unk0;
            p->f4.unk14 = q->lf4.unk4;
            p->f4.unk1C = q->lf4.unk8;
            p->f4.unk24 = q->lf4.unkC;
            p->f4.tag.unk0_24 = 9;
            z = (a->unk4 + b->unk4 + c->unk4 + d->unk4) >> sp->unk24;
            if (sp->unk28 < z) {
                p->f4.tag.unk0_0 = sp->unk1C[z].unk0_0;
                sp->unk1C[z].unk0_0 = (u32)p;
                gte_strgb(&p->f4.unk4);
                p->f4.unk4.c.code = sp->unkC.b[3];
            }
            break;
        case 0x34:
            a = (Elem8005A364 *)(vtx + q->lg3.unkE);
            b = (Elem8005A364 *)(vtx + q->lg3.unk12);
            c = (Elem8005A364 *)(vtx + q->lg3.unk16);
            func_800590C4(&sp->unk0, a->unk0, b->unk0, c->unk0);
            if (sp->unk0 <= 0) {
                break;
            }
            func_80059140((SVECTOR *)(sp->unk14 + q->lg3.unkC), (SVECTOR *)(sp->unk14 + q->lg3.unk10), (SVECTOR *)(sp->unk14 + q->lg3.unk14), &sp->unk2C, a->unkC);
            p = (Prim8005804C *)sp->unk4;
            sp->unk4 += sizeof(Gt38005804C);
            p->g3.unk8 = a->unk0;
            p->g3.unk14 = b->unk0;
            p->g3.unk20 = c->unk0;
            p->g3.unkC = q->lg3.unk0;
            p->g3.unk18 = q->lg3.unk4;
            p->g3.unk24 = q->lg3.unk8;
            p->g3.tag.unk0_24 = 9;
            z = ((a->unk4 + b->unk4 + c->unk4) * 0x1555) >> sp->unk20;
            if (sp->unk28 < z) {
                p->g3.tag.unk0_0 = sp->unk1C[z].unk0_0;
                sp->unk1C[z].unk0_0 = (u32)p;
                gte_strgb3(&p->g3.unk4, &p->g3.unk10, &p->g3.unk1C);
                p->g3.unk4.c.code = sp->unkC.b[3];
            }
            break;
        case 0x3C:
            a = (Elem8005A364 *)(vtx + q->lg4.unk12);
            b = (Elem8005A364 *)(vtx + q->lg4.unk16);
            c = (Elem8005A364 *)(vtx + q->lg4.unk1A);
            func_800590C4(&sp->unk0, a->unk0, b->unk0, c->unk0);
            if (sp->unk0 <= 0) {
                break;
            }
            func_80059140((SVECTOR *)(sp->unk14 + q->lg4.unk10), (SVECTOR *)(sp->unk14 + q->lg4.unk14), (SVECTOR *)(sp->unk14 + q->lg4.unk18), &sp->unk2C, a->unkC);
            p = (Prim8005804C *)sp->unk4;
            d = (Elem8005A364 *)(vtx + q->lg4.unk1E);
            sp->unk4 += sizeof(Gt48005804C);
            p->g4.unk8 = a->unk0;
            p->g4.unk14 = b->unk0;
            p->g4.unk20 = c->unk0;
            p->g4.unk2C = d->unk0;
            gte_strgb3(&p->g4.unk4, &p->g4.unk10, &p->g4.unk1C);
            func_8005911C((SVECTOR *)(sp->unk14 + q->lg4.unk1C), &sp->unk2C, a->unkC);
            p->g4.unkC = q->lg4.unk0;
            p->g4.unk18 = q->lg4.unk4;
            p->g4.unk24 = q->lg4.unk8;
            p->g4.unk30 = q->lg4.unkC;
            p->g4.tag.unk0_24 = 0xC;
            p->g4.unk4.c.code = sp->unkC.b[3];
            z = (a->unk4 + b->unk4 + c->unk4 + d->unk4) >> sp->unk24;
            if (sp->unk28 < z) {
                p->g4.tag.unk0_0 = sp->unk1C[z].unk0_0;
                sp->unk1C[z].unk0_0 = (u32)p;
                gte_strgb(&p->g4.unk28);
            }
            break;
        case 0xA4:
            p = (Prim8005804C *)sp->unk4;
            a = (Elem8005A364 *)(vtx + q->ft3.unk10);
            b = (Elem8005A364 *)(vtx + q->ft3.unk12);
            c = (Elem8005A364 *)(vtx + q->ft3.unk14);
            sp->unk4 += sizeof(Ft38005804C);
            p->f3.unk8 = a->unk0;
            p->f3.unk10 = b->unk0;
            p->f3.unk18 = c->unk0;
            p->f3.unk4.w = q->ft3.unkC;
            p->f3.unkC = q->ft3.unk0;
            p->f3.unk14 = q->ft3.unk4;
            p->f3.unk1C = q->ft3.unk8;
            p->f3.tag.unk0_24 = 7;
            p->f3.unk4.c.code = sp->unkC.b[3] & 0x7F;
            z = ((a->unk4 + b->unk4 + c->unk4) * 0x1555) >> sp->unk20;
            if (sp->unk28 < z) {
                p->f3.tag.unk0_0 = sp->unk1C[z].unk0_0;
                sp->unk1C[z].unk0_0 = (u32)p;
            }
            break;
        case 0xAC:
            p = (Prim8005804C *)sp->unk4;
            a = (Elem8005A364 *)(vtx + q->ft4.unk14);
            b = (Elem8005A364 *)(vtx + q->ft4.unk16);
            c = (Elem8005A364 *)(vtx + q->ft4.unk18);
            d = (Elem8005A364 *)(vtx + q->ft4.unk1A);
            sp->unk4 += sizeof(Ft48005804C);
            p->f4.unk8 = a->unk0;
            p->f4.unk10 = b->unk0;
            p->f4.unk18 = c->unk0;
            p->f4.unk20 = d->unk0;
            p->f4.unk4.w = q->ft4.unk10;
            p->f4.unkC = q->ft4.unk0;
            p->f4.unk14 = q->ft4.unk4;
            p->f4.unk1C = q->ft4.unk8;
            p->f4.unk24 = q->ft4.unkC;
            p->f4.tag.unk0_24 = 9;
            p->f4.unk4.c.code = sp->unkC.b[3] & 0x7F;
            z = (a->unk4 + b->unk4 + c->unk4 + d->unk4) >> sp->unk24;
            if (sp->unk28 < z) {
                p->f4.tag.unk0_0 = sp->unk1C[z].unk0_0;
                sp->unk1C[z].unk0_0 = (u32)p;
            }
            break;
        }
        pk += sp->unkC.b[1];
    }
    D_801A5F24[0]->unk8 = (s32)sp->unk4;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005A330);

void func_8005A364(s32 arg0) {
    Elem8005A364 *out;
    SVECTOR *v;
    Scr8005A364 *sp;

    out = D_801A5F28.unkB20;
    sp = (Scr8005A364 *)0x1F800000;
    v = D_801A5F28.unk61C;
    func_8005A330(v, &sp->unkC, &sp->unk10, &sp->unk14);
    arg0--;
    v++;
    while (arg0 != 0) {
        gte_ldv0(v);
        gte_rtps();
        out->unkC = sp->unk10;
        out->unk4 = sp->unk14;
        out->unk0 = sp->unkC.w;
        if ((s16)sp->unkC.h.unk0 < 0) {
            out->unk6 = 1;
        } else if ((s16)sp->unkC.h.unk0 > 0x140) {
            out->unk6 = 2;
        } else {
            out->unk6 = 0;
        }
        if ((s16)sp->unkC.h.unk2 < 0) {
            out->unk6 |= 4;
        } else if ((s16)sp->unkC.h.unk2 > 0xF0) {
            out->unk6 |= 8;
        }
        v++;
        out++;
        gte_stsxy(&sp->unkC);
        gte_stdp(&sp->unk10);
        gte_stszotz(&sp->unk14);
        arg0--;
    }
    out->unkC = sp->unk10;
    out->unk4 = sp->unk14;
    out->unk0 = sp->unkC.w;
    if ((s16)sp->unkC.h.unk0 < 0) {
        out->unk6 = 1;
    } else if ((s16)sp->unkC.h.unk0 > 0x140) {
        out->unk6 = 2;
    } else {
        out->unk6 = 0;
    }
    if ((s16)sp->unkC.h.unk2 < 0) {
        out->unk6 |= 4;
    } else if ((s16)sp->unkC.h.unk2 > 0xF0) {
        out->unk6 |= 8;
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005A57C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005AF90);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005B124);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005B1D0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005BDBC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005BDE0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005BE04);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005BE20);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005C630);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005C710);

void func_8005C904(Elem800730DC *arg0, s32 arg1, Elem8005C904 **arg2, Elem8005C904 **arg3, Sub8004DE88 *arg4) {
    Vec8004C98C out;
    Vec8004C98C in;
    Light8005C904 *light;
    s32 rot;
    s32 model;
    s32 hit;
    Elem80055A24 *el;
    Elem8005C904 *pa;
    Elem8005C904 *pb;
    s32 h;
    s32 id;

    SetRotMatrix(&D_801A5F28.unk7754);
    SetTransMatrix((Sub8006F234 *)((u8 *)&D_801A5F28.unk7774 - (u32)((Sub8006F234 *)0)->unk14));
    if (func_8005C710(&arg0->unk18, &arg0->unk20) == 0) {
        return;
    }
    arg0->unk34_24 = 1;
    light = &D_801A5F28.unk6A3C[arg0->unk30_0];
    rot = -arg0->unk16 & 3;
    in.unk0 = (arg0->unk10 - arg4->unk0) * 4;
    in.unk4 = (arg0->unk12 - arg4->unk2) * 4;
    in.unk8 = (arg0->unk14 - arg4->unk4) * 4;
    if (arg1 == 0 && arg0->unk30_13) {
        h = arg0->unk34_12 << 4;
        if (!(arg0->unk18 - h < arg4->unk0 && arg4->unk0 < arg0->unk20 + h &&
              arg0->unk1A - h < arg4->unk2 && arg4->unk2 < arg0->unk22 + h &&
              arg0->unk1C - h < arg4->unk4 && arg4->unk4 < arg0->unk24 + h)) {
            arg1 = 1;
        }
    }
    id = arg0->unk1E + 0x104;
    D_801A5F28.unk8 = (Blk80055A24 *)((u8 *)D_801A5F28.unkC[id] + D_801A5F28.unkC[id]->unk8);
    model = arg1;
    if ((u32)D_801A5F28.unk8->unk8 < 2) {
        model = 0;
    }
    el = (Elem80055A24 *)((u8 *)D_801A5F28.unk8->unkC + (model << 5) - (model << 2));
    D_801A5F28.unk61C = (SVECTOR *)el->unk0;
    hit = func_800674B0(arg0, el->unk4);
    if (arg1 == 0 &&
        arg0->unk18 - 0x514 < arg4->unk0 && arg4->unk0 < arg0->unk20 + 0x514 &&
        arg0->unk1A - 0x514 < arg4->unk2 && arg4->unk2 < arg0->unk22 + 0x514 &&
        arg0->unk1C - 0x514 < arg4->unk4 && arg4->unk4 < arg0->unk24 + 0x514) {
        SetColorMatrix((Mat8008D3B0 *)light->unk50);
        SetBackColor(light->unk62, light->unk63, light->unk64);
        SetLightMatrix(&light->unk0[rot]);
        ApplyMatrixLV(D_801A5F28.unk7824, &in, &out);
        SetRotMatrix(&D_801A5F28.unk7824[rot]);
        SetTransMatrix((Sub8006F234 *)((u8 *)&out - (u32)((Sub8006F234 *)0)->unk14));
        if (hit != 0) {
            func_80067EBC(model);
        } else {
            func_80068D18(model, arg0->unk30_28);
        }
        return;
    }
    ApplyMatrixLV(D_801A5F28.unk77A4, &in, &out);
    if (arg1 == 0) {
        if (hit != 0) {
            SetColorMatrix((Mat8008D3B0 *)light->unk50);
            SetBackColor(light->unk62, light->unk63, light->unk64);
            SetLightMatrix(&light->unk0[rot]);
            if (light->unk66 != 0) {
                SetFogNearFar((light->unk66 * 2) >> 5, (light->unk66 * 2) >> 3, 0xA0);
            }
            D_801A5F28.unk773C = light->unk66;
            SetRotMatrix(&D_801A5F28.unk77A4[rot]);
            SetTransMatrix((Sub8006F234 *)((u8 *)&out - (u32)((Sub8006F234 *)0)->unk14));
            func_8005BE20(model, 0x78);
        } else {
            pa = *arg2;
            pa->unk0 = out.unk0;
            pa->unk4 = out.unk4;
            pa->unk8 = out.unk8;
            pa->unkC = rot;
            pa->unk14 = light;
            pa->unk10 = arg0;
            *arg2 = ++pa;
        }
    } else {
        if (hit != 0) {
            SetColorMatrix((Mat8008D3B0 *)light->unk50);
            SetBackColor(light->unk62, light->unk63, light->unk64);
            SetLightMatrix(&light->unk0[rot]);
            SetRotMatrix(&D_801A5F28.unk77A4[rot]);
            if (light->unk66 != 0) {
                SetFogNearFar((light->unk66 * 2) >> 5, (light->unk66 * 2) >> 3, 0xA0);
            }
            D_801A5F28.unk773C = light->unk66;
            SetTransMatrix((Sub8006F234 *)((u8 *)&out - (u32)((Sub8006F234 *)0)->unk14));
            func_80064684(model, 0x78);
        } else {
            pb = *arg3;
            pb->unk0 = out.unk0;
            pb->unk4 = out.unk4;
            pb->unk8 = out.unk8;
            pb->unkC = rot;
            pb->unkE = model ? 0x28 : 0xC;
            pb->unk14 = light;
            pb->unk10 = arg0;
            *arg3 = ++pb;
        }
    }
}

void func_8005CE3C(void) {
    Sub8004DE88 cam;
    s32 unused[8];
    Elem8005C904 recA[129];
    Elem8005C904 recB[193];
    Elem8005C904 *pa;
    Elem8005C904 *pb;
    Elem800730DC *e;
    u16 *list;
    u16 *last;
    s32 n;
    s32 w;
    s32 i;
    s32 f;
    Elem800730DC *nb;

    e = D_801A5F28.unk7740;
    pa = recA;
    pb = recB;
    if (e == NULL) {
        return;
    }
    D_801987CC = -1;
    D_801987C8 = 2;
    cam.unk0 = D_801A5F28.unk7754.unk14[0];
    cam.unk2 = D_801A5F28.unk7754.unk14[1];
    cam.unk4 = D_801A5F28.unk7754.unk14[2];
    func_8005C904(e, 0, &pa, &pb, &cam);
    w = e - D_801D0B68;
    D_801A5F28.unk68F8[w >> 5] = D_801A5F28.unk6938[w >> 5] = 1 << (w & 0x1F);
    n = e->unk26;
    list = e->unk28;
    last = list + n - 1;
    for (n--; n != -1; n--) {
        w = *list;
        i = w & 0x1FF;
        e = &D_801D0B68[i];
        list++;
        if (e->unk30_12) {
            ((Vec8004C98C *)0x1F800000)->unk0 = (cam.unk0 - e->unk10) >> 1;
            ((Vec8004C98C *)0x1F800000)->unk4 = (cam.unk2 - e->unk12) >> 1;
            ((Vec8004C98C *)0x1F800000)->unk8 = (cam.unk4 - e->unk14) >> 1;
            Square0((Vec8004C98C *)0x1F800000, (Vec8004C98C *)0x1F800000);
            if (((((Vec8004C98C *)0x1F800000)->unk0 + ((Vec8004C98C *)0x1F800000)->unk4 + ((Vec8004C98C *)0x1F800000)->unk8) >> 18) >= e->unk34_0) {
                continue;
            }
        }
        D_801A5F28.unk68F8[i >> 5] |= 1 << (w & 0x1F);
        if (w & 0x3800) {
            nb = &D_801D0B68[last[(w & 0x3800) >> 11]];
            if (nb->unk30_8) {
                continue;
            }
        }
        D_801A5F28.unk6938[i >> 5] |= 1 << (w & 0x1F);
        f = w & 0x4000;
        func_8005C904(e, f != 0, &pa, &pb, &cam);
    }
    pa->unkC = pb->unkC = -1;
    func_8005AF90(recA);
    func_800639D8(recB);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005D0F0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005D19C);

void func_8005D76C(s32 arg0, Rgbc80057A00 *arg1, s32 arg2) {
    Scr80057A00 *sp;
    u8 *vtx;
    Elem8005A364 *v0;
    Elem8005A364 *v1;
    Elem8005A364 *v2;
    Elem8005A364 *v3;
    Hdr800574D8 *pk;
    Pk8005D76C *q;
    Prim8005804C *p;
    s32 z;

    sp = (Scr80057A00 *)0x1F800000;
    sp->unk2C.c = *arg1;
    sp->unk28 = 0;
    sp->unk20 = D_801987CC + 0xF;
    sp->unk24 = D_801987CC + 3;
    sp->unk1C = (Sub8008C95C *)(D_801A5F28.unk0 + arg2);
    sp->unk10 = (Elem80055A24 *)((u8 *)D_801A5F28.unk8->unkC + arg0 * 0x20 - arg0 * 4);
    vtx = (u8 *)D_801A5F28.unkB20;
    func_80057F74(sp->unk10->unk4 + sp->unk10->unk6);
    sp->unk18 = sp->unk10->unk14 + (sp->unk10->unkE & 0x1FF);
    pk = sp->unk10->unk10;
    sp->unk4 = (u8 *)D_801A5F24[0]->unk8;
    sp->unk8 = (u8 *)D_801A5F24[0]->unk4;
    if (sp->unk8 < sp->unk4 + sp->unk18 * 4 + sp->unk18 * 16 + sp->unk18 * 32) {
        return;
    }
    while (sp->unk18-- != 0) {
        sp->unkC = *pk;
        pk++;
        switch (sp->unkC.b[3] & 0xFC) {
        case 0xA4:
            q = (Pk8005D76C *)pk;
            p = (Prim8005804C *)sp->unk4;
            v0 = (Elem8005A364 *)(vtx + q->unk10);
            v1 = (Elem8005A364 *)(vtx + q->unk12);
            v2 = (Elem8005A364 *)(vtx + q->unk14);
            sp->unk4 += sizeof(Ft38005804C);
            p->f3.unk8 = v0->unk0;
            p->f3.unk10 = v1->unk0;
            p->f3.unk18 = v2->unk0;
            p->f3.unk4.w = sp->unk2C.w;
            p->f3.unkC = q->unk0;
            p->f3.unk14 = q->unk4;
            p->f3.unk1C = q->unk8;
            p->f3.tag.unk0_24 = 7;
            p->f3.unk4.c.code = sp->unkC.b[3] & 0x7F;
            z = ((v0->unk4 + v1->unk4 + v2->unk4) * 0x1555) >> sp->unk20;
            if (sp->unk28 < z) {
                p->f3.tag.unk0_0 = sp->unk1C[z].unk0_0;
                sp->unk1C[z].unk0_0 = (u32)p;
            }
            break;
        case 0xAC:
            q = (Pk8005D76C *)pk;
            p = (Prim8005804C *)sp->unk4;
            v0 = (Elem8005A364 *)(vtx + q->unk14);
            v1 = (Elem8005A364 *)(vtx + q->unk16);
            v2 = (Elem8005A364 *)(vtx + q->unk18);
            v3 = (Elem8005A364 *)(vtx + q->unk1A);
            sp->unk4 += sizeof(Ft48005804C);
            p->f4.unk8 = v0->unk0;
            p->f4.unk10 = v1->unk0;
            p->f4.unk18 = v2->unk0;
            p->f4.unk20 = v3->unk0;
            p->f4.unk4.w = sp->unk2C.w;
            p->f4.unkC = q->unk0;
            p->f4.unk14 = q->unk4;
            p->f4.unk1C = q->unk8;
            p->f4.unk24 = q->unkC;
            p->f4.tag.unk0_24 = 9;
            p->f4.unk4.c.code = sp->unkC.b[3] & 0x7F;
            z = (v0->unk4 + v1->unk4 + v2->unk4 + v3->unk4) >> sp->unk24;
            if (sp->unk28 < z) {
                p->f4.tag.unk0_0 = sp->unk1C[z].unk0_0;
                sp->unk1C[z].unk0_0 = (u32)p;
            }
            break;
        }
        pk += sp->unkC.b[1];
    }
    D_801A5F24[0]->unk8 = (s32)sp->unk4;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005DB10);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005DC7C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005DEC4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005E22C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005E300);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005E434);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005E604);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005E7D8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005E97C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005E9A8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005EB50);

void func_8005EF38(Node8005EF38 *arg0) {
    Scr8005EF38 *sp;
    Line8005EF38 *line;
    Mode8005EF38 *mode;
    s32 z;
    s32 a;
    s32 b;

    sp = (Scr8005EF38 *)0x1F800000;
    if (sp->unk7C == 0) {
        arg0->unk14 = sp->unk6C;
        arg0->unk18 = sp->unk74;
        gte_ldv0(&arg0->unk8);
        gte_rtps();
        gte_stsxy(&sp->unk6C);
        gte_stszotz(&sp->unk74);
    } else {
        sp->unk68 = sp->unk6C;
        sp->unk70 = sp->unk74;
        a = arg0->unk14;
        b = arg0->unk18;
        sp->unk6C = a;
        sp->unk74 = b;
    }
    if ((sp->unk70 <= 0x140 || sp->unk74 <= 0x140) && (sp->unk4 != 0 || sp->unk70 < 0x10 || sp->unk74 < 0x10)) {
        if (sp->unk4 != 0) {
            sp->unk4--;
            arg0[1].unk0 = arg0->unk0;
            arg0[1].unk8.unk0 = (arg0->unk0.unk0 + arg0->unk8.unk0) >> 1;
            arg0[1].unk8.unk2 = (arg0->unk0.unk2 + arg0->unk8.unk2) >> 1;
            arg0[1].unk8.unk4 = (arg0->unk0.unk4 + arg0->unk8.unk4) >> 1;
            sp->unk7C = 0;
            func_8005EF38(&arg0[1]);
            arg0[1].unk0 = arg0[1].unk8;
            arg0[1].unk8 = arg0->unk8;
            sp->unk7C = 1;
            func_8005EF38(&arg0[1]);
            sp->unk4++;
        }
        return;
    }
    line = (Line8005EF38 *)D_801A5F24[0]->unk8;
    D_801A5F24[0]->unk8 += sizeof(Line8005EF38);
    if ((u32)D_801A5F24[0]->unk8 > (u32)D_801A5F24[0]->unk4) {
        return;
    }
    line->unk8 = sp->unk68;
    line->unkC = sp->unk6C;
    line->unk4.w = sp->unk10;
    line->tag.unk0_24 = 3;
    line->unk4.b[3] = 0x42;
    z = (sp->unk70 + sp->unk74) >> 2;
    if (z >= 0) {
        line->tag.unk0_0 = sp->unk0[z].unk0_0;
        sp->unk0[z].unk0_0 = (u32)line;
    }
    mode = (Mode8005EF38 *)D_801A5F24[0]->unk8;
    D_801A5F24[0]->unk8 += sizeof(Mode8005EF38);
    if ((u32)D_801A5F24[0]->unk8 > (u32)D_801A5F24[0]->unk4) {
        return;
    }
    SetDrawMode(mode, 0, 1, sp->unkA, NULL);
    if (z >= 0) {
        mode->tag.unk0_0 = sp->unk0[z].unk0_0;
        sp->unk0[z].unk0_0 = (u32)mode;
    }
}

void func_8005F2CC(Sub8004DE88 *arg0, Sub8004DE88 *arg1, Arg8005F2CC *arg2, s32 *arg3) {
    Scr8005EF38 *sp;
    Line8005EF38 *line;
    Mode8005EF38 *mode;
    s32 z;

    sp = (Scr8005EF38 *)0x1F800000;
    if (sp->unk70 <= 0x140 || sp->unk74 <= 0x140) {
        sp->unk4 = 2;
        sp->unk10 = *arg3;
        sp->unk14[0].unk0 = *arg0;
        sp->unk14[0].unk8.unk0 = (arg0->unk0 + arg1->unk0) >> 1;
        sp->unk14[0].unk8.unk2 = (arg0->unk2 + arg1->unk2) >> 1;
        sp->unk14[0].unk8.unk4 = (arg0->unk4 + arg1->unk4) >> 1;
        sp->unkA = arg2->unk2;
        sp->unk7C = 0;
        func_8005EF38(sp->unk14);
        sp->unk14[0].unk0 = sp->unk14[0].unk8;
        sp->unk14[0].unk8 = *arg1;
        sp->unk7C = 1;
        func_8005EF38(sp->unk14);
        return;
    }
    line = (Line8005EF38 *)D_801A5F24[0]->unk8;
    D_801A5F24[0]->unk8 += sizeof(Line8005EF38);
    if ((u32)D_801A5F24[0]->unk8 > (u32)D_801A5F24[0]->unk4) {
        return;
    }
    line->unk8 = sp->unk68;
    line->unkC = sp->unk6C;
    line->unk4.w = *arg3;
    line->tag.unk0_24 = 3;
    line->unk4.b[3] = 0x42;
    z = (sp->unk70 + sp->unk74) >> 2;
    if (z >= 0) {
        line->tag.unk0_0 = sp->unk0[z].unk0_0;
        sp->unk0[z].unk0_0 = (u32)line;
    }
    mode = (Mode8005EF38 *)D_801A5F24[0]->unk8;
    D_801A5F24[0]->unk8 += sizeof(Mode8005EF38);
    if ((u32)D_801A5F24[0]->unk8 > (u32)D_801A5F24[0]->unk4) {
        return;
    }
    SetDrawMode(mode, 0, 1, arg2->unk2, NULL);
    if (z >= 0) {
        mode->tag.unk0_0 = sp->unk0[z].unk0_0;
        sp->unk0[z].unk0_0 = (u32)mode;
    }
}

void func_8005F5DC(Node8005EF38 *arg0) {
    Scr8005F5DC *sp;
    Poly8005F5DC *prim;
    s32 dx;
    s32 dy;
    s32 len;
    s32 ox;
    s32 oy;
    s32 ax;
    s32 ay;
    s32 px;
    s32 py;
    s32 qx;
    s32 qy;
    s32 a;
    s32 b;
    s32 z;

    sp = (Scr8005F5DC *)0x1F800000;
    if (sp->unk7C == 0) {
        arg0->unk14 = sp->unk6C.w;
        arg0->unk18 = sp->unk74;
        gte_ldv0(&arg0->unk8);
        gte_rtps();
        gte_stsxy(&sp->unk6C);
        gte_stszotz(&sp->unk74);
    } else {
        sp->unk68.w = sp->unk6C.w;
        sp->unk70 = sp->unk74;
        a = arg0->unk14;
        b = arg0->unk18;
        sp->unk6C.w = a;
        sp->unk74 = b;
    }
    if ((sp->unk70 <= 0x140 || sp->unk74 <= 0x140) && (sp->unk4 != 0 || sp->unk70 < 0x10 || sp->unk74 < 0x10)) {
        if (sp->unk4 != 0) {
            sp->unk4--;
            arg0[1].unk0 = arg0->unk0;
            arg0[1].unk8.unk0 = (arg0->unk0.unk0 + arg0->unk8.unk0) >> 1;
            arg0[1].unk8.unk2 = (arg0->unk0.unk2 + arg0->unk8.unk2) >> 1;
            arg0[1].unk8.unk4 = (arg0->unk0.unk4 + arg0->unk8.unk4) >> 1;
            arg0[1].unk10 = arg0->unk10;
            arg0[1].unk11 = (arg0->unk10 + arg0->unk11) >> 1;
            sp->unk7C = 0;
            func_8005F5DC(&arg0[1]);
            arg0[1].unk0 = arg0[1].unk8;
            arg0[1].unk8 = arg0->unk8;
            arg0[1].unk10 = arg0[1].unk11;
            arg0[1].unk11 = arg0->unk11;
            sp->unk7C = 1;
            func_8005F5DC(&arg0[1]);
            sp->unk4++;
        }
        return;
    }
    dx = sp->unk6C.v.x - sp->unk68.v.x;
    dy = sp->unk6C.v.y - sp->unk68.v.y;
    len = SquareRoot0(dx * dx + dy * dy);
    if (len == 0) {
        len = 1;
    }
    prim = (Poly8005F5DC *)D_801A5F24[0]->unk8;
    D_801A5F24[0]->unk8 += sizeof(Poly8005F5DC);
    if ((u32)D_801A5F24[0]->unk8 > (u32)D_801A5F24[0]->unk4) {
        return;
    }
    if (sp->unk78 == NULL) {
        ox = dx * (sp->unk6 * 80 / sp->unk70) / len;
        oy = dy * (sp->unk6 * 80 / sp->unk70) / len;
        if (ox <= 0) {
            if (ox < 0) {
                ax = ox + 1;
            } else {
                ax = ox;
            }
        } else {
            ax = ox - 1;
        }
        if (oy <= 0) {
            if (oy < 0) {
                ay = oy + 1;
            } else {
                ay = oy;
            }
        } else {
            ay = oy - 1;
        }
        prim->unk8.v.x = sp->unk68.v.x - ay;
        prim->unk8.v.y = sp->unk68.v.y + ox;
        prim->unk10.v.x = sp->unk68.v.x + oy;
        prim->unk10.v.y = sp->unk68.v.y - ax;
    } else {
        prim->unk8.w = sp->unk78->unk18.w;
        prim->unk10.w = sp->unk78->unk20.w;
    }
    px = dx * (sp->unk6 * 80 / sp->unk74) / len;
    py = dy * (sp->unk6 * 80 / sp->unk74) / len;
    sp->unk78 = prim;
    if (px <= 0) {
        if (px < 0) {
            qx = px + 1;
        } else {
            qx = px;
        }
    } else {
        qx = px - 1;
    }
    if (py <= 0) {
        if (py < 0) {
            qy = py + 1;
        } else {
            qy = py;
        }
    } else {
        qy = py - 1;
    }
    prim->unk18.v.x = sp->unk6C.v.x - qy;
    prim->unk18.v.y = sp->unk6C.v.y + px;
    prim->unk20.v.x = sp->unk6C.v.x + py;
    prim->unk20.v.y = sp->unk6C.v.y - qx;
    prim->unk4.w = sp->unk10;
    prim->unkE = sp->unk8;
    prim->unk16 = sp->unkA;
    prim->unkC = prim->unk1C = sp->unkC;
    prim->unk14 = prim->unk24 = sp->unkD;
    prim->unkD = prim->unk15 = arg0->unk10;
    prim->unk1D = prim->unk25 = arg0->unk11;
    prim->tag.unk0_24 = 9;
    prim->unk4.b[3] = 0x2E;
    z = (sp->unk70 + sp->unk74) >> 2;
    if (z >= 0) {
        prim->tag.unk0_0 = sp->unk0[z].unk0_0;
        sp->unk0[z].unk0_0 = (u32)prim;
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8005FB90);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006023C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800604B8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800607C4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80060800);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80060B54);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800610A4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006131C);

s32 func_80061F00(s32 arg0, s32 arg1) {
    s32 flags;

    flags = 1;
    if (arg0 >= -0xA0) {
        flags = (arg0 >= 0xA0) * 2;
    }
    if (arg1 < -0x78) {
        flags |= 4;
    } else if (arg1 >= 0x78) {
        flags |= 8;
    }
    return flags;
}

s32 func_80061F44(s32 arg0, Sub8004DE88 *arg1, s32 arg2, s32 arg3) {
    Scr80061F44 *sp;
    s32 *v;
    s32 scale;
    s32 x;
    s32 y;
    s32 w;
    s32 h;
    s32 flags;

    sp = (Scr80061F44 *)0x1F800000;
    v = sp->unk300;
    gte_ldv0(arg1);
    gte_rtv0tr();
    gte_stlvnl(v);
    v[2] += arg2;
    if (v[2] > 0 && arg0 >= v[2]) {
        scale = 0x1400000 / v[2];
        x = (v[0] * scale) >> 16;
        y = (v[1] * scale) >> 16;
        w = (arg2 * scale) >> 16;
        h = (arg3 * scale) >> 16;
        flags = func_80061F00(x - w, y);
        flags &= func_80061F00(x + w, y);
        flags &= func_80061F00(x - w, y - h);
        flags &= func_80061F00(x + w, y - h);
        return flags == 0;
    }
    return 0;
}

void func_80062090(s32 arg0) {
    Scr80062090 *sp;
    Obj80062090 *e;
    Light8005C904 *light;
    Mdl80062090 *m;
    Ft480062090 *p;
    s32 *src;
    s32 *dst;
    s32 *src2;
    s32 *dst2;
    s32 i;
    s32 last;
    s32 z;
    s32 bit;

    sp = (Scr80062090 *)0x1F800000;
    last = -1;
    sp->unk8 = (Sub8008C95C *)D_801A5F28.unk0;
    sp->unk0 = (Ft480062090 *)D_801A5F24[0]->unk8;
    sp->unk4 = (u8 *)D_801A5F24[0]->unk4;
    src = D_801A5F28.unk78A4.unk0;
    dst = sp->unk1C.unk0;
    for (i = 5; i != 0; i--) {
        *dst++ = *src++;
    }
    src2 = (s32 *)D_801A5F28.unk7754.unk0;
    dst2 = sp->unk3C.unk0;
    for (i = 5; i != 0; i--) {
        *dst2++ = *src2++;
    }
    sp->unk14.vx = 0x1000;
    sp->unk14.vy = sp->unk14.vz = 0;
    sp->unk64 = 0x100;
    sp->unk3C.unk14[0] = D_801A5F28.unk7774.unk0;
    sp->unk3C.unk14[1] = D_801A5F28.unk7774.unk4;
    sp->unk3C.unk14[2] = D_801A5F28.unk7774.unk8;
    e = D_801A5F28.unk7904;
    sp->unk68 = D_801A5F28.unk7754.unk14[0];
    sp->unk6A = D_801A5F28.unk7754.unk14[1];
    sp->unk6C = D_801A5F28.unk7754.unk14[2];
    do {
        if (e->unk0.unk6 != -1) {
            bit = e->unk8;
            if (D_801A5F28.unk6938[bit >> 5] & (1 << (bit & 0x1F))) {
                gte_SetRotMatrix(&sp->unk3C);
                gte_SetTransMatrix(&sp->unk3C);
                if (func_80061F44(arg0, &e->unk0, 0x1F4, 0x1F4) != 0) {
                    if (D_801D0B98[e->unk8].unk0 != last) {
                        last = D_801D0B98[e->unk8].unk0;
                        light = &D_801A5F28.unk6A3C[last];
                        SetBackColor(light->unk62, light->unk63, light->unk64);
                        sp->unk5C = light->unk66;
                        if (sp->unk5C != 0) {
                            SetFogNearFar((sp->unk5C * 2) >> 4, (sp->unk5C * 2) >> 2, 0xA0);
                        }
                    }
                    sp->unkC.vx = e->unk0.unk0 - sp->unk68;
                    sp->unkC.vy = e->unk0.unk2 - sp->unk6A;
                    sp->unkC.vz = e->unk0.unk4 - sp->unk6C;
                    gte_ldv0(&sp->unkC);
                    gte_rtv0();
                    gte_stlvnl(sp->unk1C.unk14);
                    gte_SetRotMatrix(&sp->unk1C);
                    gte_SetTransMatrix(&sp->unk1C);
                    p = sp->unk0;
                    sp->unk0 = p + 1;
                    m = D_8008DC90[e->unk0.unk6] + e->unkA + e->unkD;
                    gte_ldv3(&m->unk10, &m->unk18, &m->unk20);
                    gte_rtpt();
                    p->unkC = m->unk4;
                    p->unk14 = m->unk8;
                    gte_stsxy3(&p->unk8, &p->unk10, &p->unk18);
                    gte_stszotz(&z);
                    if (z != 0) {
                        if (sp->unk5C == 0) {
                            sp->unk60 = 0;
                        } else {
                            gte_stdp(&sp->unk60);
                        }
                        gte_ldv0(&m->unk28);
                        gte_rtps();
                        p->unk1C = m->unkC;
                        p->unk24 = m->unkE;
                        p->tag.unk0_24 = 9;
                        gte_stsxy(&p->unk20);
                        gte_ldv0(&sp->unk14);
                        gte_ldrgb(m);
                        gte_lddp(sp->unk60);
                        gte_ncds();
                        gte_strgb(&p->unk4);
                        z >>= 1;
                        if (sp->unkC.vy <= 0) {
                            z += 120;
                        } else {
                            z += 100;
                        }
                        p->tag.unk0_0 = sp->unk8[z].unk0_0;
                        sp->unk8[z].unk0_0 = (u32)p;
                        if (e->unkC != 0 && (u32)D_801AC81C % e->unkC == 0) {
                            if (++e->unkD >= e->unkB) {
                                e->unkD = 0;
                            }
                        }
                    } else {
                        sp->unk0--;
                    }
                }
            }
        }
        e++;
    } while (--sp->unk64 != 0);
    D_801A5F24[0]->unk8 = (s32)sp->unk0;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006260C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006280C);

void func_80062860(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *src;
    u8 *dst;
    s32 v;

    dst = &D_80090A28[arg0 * 128] + arg1 * 4;
    src = &D_8008DCA0[arg0 * 128] + arg1 * 4;
    do {
        v = ((src[0] * arg3) >> 12) + 64;
        if (v >= 256) {
            v = 255;
        }
        dst[0] = v;
        v = ((src[1] * arg3) >> 12) + 64;
        if (v >= 256) {
            v = 255;
        }
        dst[1] = v;
        v = ((src[2] * arg3) >> 12) + 64;
        if (v >= 256) {
            v = 255;
        }
        dst[2] = v;
        dst += 4;
        src += 4;
    } while (--arg2 != 0);
}

void func_80062934(void) {
    func_80062860(0, 1, 8, (rsin(D_801AC81C << 9) + 0x1400) >> 1);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80062974);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80062B04);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80062BD8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80062FFC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80063048);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006306C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006308C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800639D8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80063B94);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80063BE8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800645E8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006460C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80064628);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006464C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006466C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80064684);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80064BE8);

void func_80064C3C(u16 arg0, s32 arg1, s32 arg2, u16 arg3, s32 arg4) {
    func_800658B8(arg2);
    if (arg3 == 0) {
        func_80064DC8(arg0, arg1, arg4);
    } else {
        func_8006611C(arg0, arg1, arg3, arg4);
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80064CB8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80064D64);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80064D88);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80064DAC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80064DC8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800658B8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800659EC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80065CF8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80066048);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006606C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800660A0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800660C4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800660FC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006611C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800672A4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800672CC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800674B0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80067AB4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80067BAC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80067BE0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80067E54);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80067E84);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80067EA4);

void func_80067EBC(u16 arg0) {
    Scr80069A5C *scr = (Scr80069A5C *)0x1F800000;
    Ent80067EBC lists[4][0x100];
    Obj80067EBC *d;
    Model80067EBC *model;
    Vtx80067EBC *v1;
    Vtx80067EBC *v0;
    Vtx80067EBC *v2;
    Vtx80067EBC *v3;
    u32 *p;
    u8 *vtx;
    u32 t;
    s32 n;
    s32 otz;
    Un80069A5C prim;

    d = &D_801A5F30;
    model = (Model80067EBC *)((u32 *)d->unk0 + 3 + arg0 * 8 - arg0);
    scr->unk354 = model;
    if (model->unk14 == 0) {
        return;
    }
    scr->unk368 = model->unk14;
    scr->unk390.unk0 = scr->unk390.unk1 = scr->unk390.unk2 = 0x40;
    scr->unk380 = lists[0];
    scr->unk384 = lists[1];
    scr->unk388 = lists[2];
    scr->unk38C = lists[3];
    scr->unk378 = D_801987C8 + 0xF;
    scr->unk37C = D_801987C8 + 3;
    scr->unk36C = (Tag80069A5C *)&D_801A5F28.unk0[0x78];
    vtx = d->unkB18;
    func_80067BE0(model->unk4);
    scr->unk358 = scr->unk354->unk8;
    scr->unk35C = D_801A6544;
    p = scr->unk354->unk10;
    scr->unk4.ft3 = (Prim80069A5C *)D_801A5F24[0]->unk8;
    scr->unk8 = D_801A5F24[0]->unk4;
    do {
        scr->unk350.w = *p++;
        switch (scr->unk350.b.unk3 & 0xFC) {
        case 0x24:
            v0 = (Vtx80067EBC *)(vtx + ((Poly80067EBC *)p)->unkE);
            v1 = (Vtx80067EBC *)(vtx + ((Poly80067EBC *)p)->unk10);
            v2 = (Vtx80067EBC *)(vtx + ((Poly80067EBC *)p)->unk12);
            if (v0->unk6 & v1->unk6 & v2->unk6) {
                break;
            }
            t = v0->unk7 | v1->unk7 | v2->unk7;
            if (t == 0) {
            draw3:
                if ((v0->unk6 | v1->unk6 | v2->unk6) == 0x1F) {
                    break;
                }
                if (func_80067E54(v0->unk0, v1->unk0, v2->unk0) <= 0) {
                    break;
                }
                if ((v0->unk8.unk3 | v1->unk8.unk3 | v2->unk8.unk3) == 0) {
                    gte_ldv0(scr->unk358 + ((Poly80067EBC *)p)->unkC);
                    gte_ldrgb(&scr->unk390);
                    gte_nccs();
                    prim.ft3 = scr->unk4.ft3;
                    scr->unk4.ft3 = prim.ft3 + 1;
                    prim.ft3->unk8 = v0->unk0;
                    prim.ft3->unk10 = v1->unk0;
                    prim.ft3->unk18 = v2->unk0;
                    prim.ft3->unkC = ((Poly80067EBC *)p)->unk0;
                    prim.ft3->unk14 = ((Poly80067EBC *)p)->unk4;
                    prim.ft3->unk1C = ((Poly80067EBC *)p)->unk8;
                    prim.ft3->unk0.unk0_24 = 7;
                    gte_strgb(&prim.ft3->unk4);
                    prim.ft3->unk4.unk0_24 = scr->unk350.b.unk3;
                    otz = (((v0->unk4 + v1->unk4 + v2->unk4) * 0x1555) >> scr->unk378) + (s8)scr->unk350.b.unk0 * 4;
                    prim.ft3->unk0.unk0_0 = scr->unk36C[otz].unk0_0;
                    scr->unk36C[otz].unk0_0 = (u32)prim.ft3;
                } else {
                    func_80067E84(scr->unk358 + ((Poly80067EBC *)p)->unkC, &v0->unk8);
                    prim.gt3 = scr->unk4.gt3;
                    scr->unk4.gt3 = prim.gt3 + 1;
                    gte_strgb(&prim.gt3->unk4);
                    func_80067EA4(&v1->unk8);
                    prim.gt3->unk8 = v0->unk0;
                    prim.gt3->unk14 = v1->unk0;
                    prim.gt3->unk20 = v2->unk0;
                    gte_strgb(&prim.gt3->unk10);
                    func_80067EA4(&v2->unk8);
                    prim.gt3->unkC = ((Poly80067EBC *)p)->unk0;
                    prim.gt3->unk18 = ((Poly80067EBC *)p)->unk4;
                    prim.gt3->unk24 = ((Poly80067EBC *)p)->unk8;
                    prim.gt3->unk0.unk0_24 = 9;
                    prim.gt3->unk4.unk0_24 = (scr->unk350.b.unk3 & 2) | 0x34;
                    gte_strgb(&prim.gt3->unk1C);
                    otz = (((v0->unk4 + v1->unk4 + v2->unk4) * 0x1555) >> scr->unk378) + (s8)scr->unk350.b.unk0 * 4;
                    prim.ft3->unk0.unk0_0 = scr->unk36C[otz].unk0_0;
                    scr->unk36C[otz].unk0_0 = (u32)prim.ft3;
                }
                break;
            }
            if (t < 2) {
                n = scr->unk350.b.unk2 & 7;
                if (n == 0) {
                    goto draw3;
                }
                if (func_80067E54(v0->unk0, v1->unk0, v2->unk0) <= 0) {
                    break;
                }
            } else {
                n = scr->unk350.b.unk2 >> 3;
                if (n == 0) {
                    goto draw3;
                }
            }
            if ((v0->unk8.unk3 | v1->unk8.unk3 | v2->unk8.unk3) == 0) {
                scr->unk384->unk0 = p;
                scr->unk350.b.unk2 = n;
                scr->unk384->unk4 = scr->unk350.w;
                scr->unk384++;
            } else {
                scr->unk38C->unk0 = p;
                scr->unk350.b.unk2 = n;
                scr->unk38C->unk4 = scr->unk350.w;
                scr->unk38C++;
            }
            break;
        case 0x2C:
            v0 = (Vtx80067EBC *)(vtx + ((Poly80067EBC *)p)->unk12);
            v1 = (Vtx80067EBC *)(vtx + ((Poly80067EBC *)p)->unk14);
            v2 = (Vtx80067EBC *)(vtx + ((Poly80067EBC *)p)->unk16);
            v3 = (Vtx80067EBC *)(vtx + ((Poly80067EBC *)p)->unk18);
            if (v0->unk6 & v1->unk6 & v2->unk6 & v3->unk6) {
                break;
            }
            t = v0->unk7 | v1->unk7 | v2->unk7 | v3->unk7;
            if (t == 0) {
            draw2C:
                if ((v0->unk6 | v1->unk6 | v2->unk6 | v3->unk6) == 0x1F) {
                    break;
                }
                if (func_80067E54(v0->unk0, v1->unk0, v2->unk0) <= 0) {
                    break;
                }
                if ((v0->unk8.unk3 | v1->unk8.unk3 | v2->unk8.unk3 | v3->unk8.unk3) == 0) {
                    gte_ldv0(scr->unk358 + ((Poly80067EBC *)p)->unk10);
                    gte_ldrgb(&scr->unk390);
                    gte_nccs();
                    prim.ft4 = scr->unk4.ft4;
                    scr->unk4.ft4 = prim.ft4 + 1;
                    prim.ft4->unk8 = v0->unk0;
                    prim.ft4->unk10 = v1->unk0;
                    prim.ft4->unk18 = v2->unk0;
                    prim.ft4->unk20 = v3->unk0;
                    prim.ft4->unkC = ((Poly80067EBC *)p)->unk0;
                    prim.ft4->unk14 = ((Poly80067EBC *)p)->unk4;
                    prim.ft4->unk1C = ((Poly80067EBC *)p)->unk8;
                    prim.ft4->unk24 = ((Poly80067EBC *)p)->unkC;
                    prim.ft4->unk0.unk0_24 = 9;
                    gte_strgb(&prim.ft4->unk4);
                    prim.ft4->unk4.unk0_24 = scr->unk350.b.unk3;
                    otz = ((v0->unk4 + v1->unk4 + v2->unk4 + v3->unk4) >> scr->unk37C) + (s8)scr->unk350.b.unk0 * 4;
                    prim.ft3->unk0.unk0_0 = scr->unk36C[otz].unk0_0;
                    scr->unk36C[otz].unk0_0 = (u32)prim.ft3;
                    break;
                }
            gour4:
                func_80067E84(scr->unk358 + ((Poly80067EBC *)p)->unk10, &v0->unk8);
                prim.gt4 = scr->unk4.gt4;
                scr->unk4.gt4 = prim.gt4 + 1;
                gte_strgb(&prim.gt4->unk4);
                func_80067EA4(&v1->unk8);
                prim.gt4->unk8 = v0->unk0;
                prim.gt4->unk14 = v1->unk0;
                prim.gt4->unk20 = v2->unk0;
                prim.gt4->unk2C = v3->unk0;
                gte_strgb(&prim.gt4->unk10);
                func_80067EA4(&v2->unk8);
                prim.gt4->unkC = ((Poly80067EBC *)p)->unk0;
                prim.gt4->unk18 = ((Poly80067EBC *)p)->unk4;
                prim.gt4->unk24 = ((Poly80067EBC *)p)->unk8;
                prim.gt4->unk30 = ((Poly80067EBC *)p)->unkC;
                gte_strgb(&prim.gt4->unk1C);
                func_80067EA4(&v3->unk8);
                prim.gt4->unk0.unk0_24 = 0xC;
                prim.gt4->unk4.unk0_24 = (scr->unk350.b.unk3 & 2) | 0x3C;
                gte_strgb(&prim.gt4->unk28);
                otz = ((v0->unk4 + v1->unk4 + v2->unk4 + v3->unk4) >> scr->unk37C) + (s8)scr->unk350.b.unk0 * 4;
                prim.ft3->unk0.unk0_0 = scr->unk36C[otz].unk0_0;
                scr->unk36C[otz].unk0_0 = (u32)prim.ft3;
                break;
            }
            if (t < 2) {
                n = scr->unk350.b.unk2 & 7;
                if (n == 0) {
                    goto draw2C;
                }
                if (func_80067E54(v0->unk0, v1->unk0, v2->unk0) <= 0) {
                    break;
                }
            } else {
                n = scr->unk350.b.unk2 >> 3;
                if (n == 0) {
                    goto draw2C;
                }
            }
            if ((v0->unk8.unk3 | v1->unk8.unk3 | v2->unk8.unk3 | v3->unk8.unk3) == 0) {
                goto list0;
            }
            goto list2;
        case 0x6C:
            v0 = (Vtx80067EBC *)(vtx + ((Poly80067EBC *)p)->unk12);
            v1 = (Vtx80067EBC *)(vtx + ((Poly80067EBC *)p)->unk14);
            v2 = (Vtx80067EBC *)(vtx + ((Poly80067EBC *)p)->unk16);
            v3 = (Vtx80067EBC *)(vtx + ((Poly80067EBC *)p)->unk18);
            if (v0->unk6 & v1->unk6 & v2->unk6 & v3->unk6) {
                break;
            }
            t = v0->unk7 | v1->unk7 | v2->unk7 | v3->unk7;
            if (t == 0) {
            draw6C:
                if ((v0->unk6 | v1->unk6 | v2->unk6 | v3->unk6) == 0x1F) {
                    break;
                }
                if ((v0->unk8.unk3 | v1->unk8.unk3 | v2->unk8.unk3 | v3->unk8.unk3) != 0) {
                    goto gour4;
                }
                gte_ldv0(scr->unk358 + ((Poly80067EBC *)p)->unk10);
                gte_ldrgb(&scr->unk390);
                gte_nccs();
                prim.ft4 = scr->unk4.ft4;
                scr->unk4.ft4 = prim.ft4 + 1;
                prim.ft4->unk8 = v0->unk0;
                prim.ft4->unk10 = v1->unk0;
                prim.ft4->unk18 = v2->unk0;
                prim.ft4->unk20 = v3->unk0;
                prim.ft4->unkC = ((Poly80067EBC *)p)->unk0;
                prim.ft4->unk14 = ((Poly80067EBC *)p)->unk4;
                prim.ft4->unk1C = ((Poly80067EBC *)p)->unk8;
                prim.ft4->unk24 = ((Poly80067EBC *)p)->unkC;
                prim.ft4->unk0.unk0_24 = 9;
                gte_strgb(&prim.ft4->unk4);
                prim.ft4->unk4.unk0_24 = scr->unk350.b.unk3 & 0xBF;
                otz = ((v0->unk4 + v1->unk4 + v2->unk4 + v3->unk4) >> scr->unk37C) + (s8)scr->unk350.b.unk0 * 4;
                prim.ft3->unk0.unk0_0 = scr->unk36C[otz].unk0_0;
                scr->unk36C[otz].unk0_0 = (u32)prim.ft3;
                break;
            }
            if (t < 2) {
                n = scr->unk350.b.unk2 & 7;
            } else {
                n = scr->unk350.b.unk2 >> 3;
            }
            if (n == 0) {
                goto draw6C;
            }
            if ((v0->unk8.unk3 | v1->unk8.unk3 | v2->unk8.unk3 | v3->unk8.unk3) == 0) {
            list0:
                scr->unk380->unk0 = p;
                scr->unk350.b.unk2 = n;
                scr->unk380->unk4 = scr->unk350.w;
                scr->unk380++;
            } else {
            list2:
                scr->unk388->unk0 = p;
                scr->unk350.b.unk2 = n;
                scr->unk388->unk4 = scr->unk350.w;
                scr->unk388++;
            }
            break;
        }
        p += scr->unk350.b.unk1;
    } while (--scr->unk368 != 0);
    scr->unk378 -= 0xE;
    scr->unk384->unk0 = NULL;
    func_80069F04(lists[1]);
    scr->unk380->unk0 = NULL;
    func_8006A7EC(lists[0]);
    scr->unk38C->unk0 = NULL;
    func_8006C580(lists[3]);
    scr->unk388->unk0 = NULL;
    func_8006D0C0(lists[2]);
    D_801A5F24[0]->unk8 = (s32)scr->unk4.ft3;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80068A10);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80068A44);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80068CB8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80068CE0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80068D00);

void func_80068D18(u16 arg0, s32 arg1) {
    Scr80069A5C *scr = (Scr80069A5C *)0x1F800000;
    Ent80067EBC lists[4][0x100];
    Obj80057A00 *d;
    Model80067EBC *model;
    Vtx80067EBC *v1;
    Vtx80067EBC *v0;
    Vtx80067EBC *v2;
    Vtx80067EBC *v3;
    u32 *p;
    u8 *vtx;
    u32 t;
    s32 n;
    s32 otz;
    Un80069A5C prim;

    scr->unk390.unk0 = scr->unk390.unk1 = scr->unk390.unk2 = 0x40;
    scr->unk380 = lists[0];
    scr->unk384 = lists[1];
    scr->unk388 = lists[2];
    scr->unk38C = lists[3];
    d = &D_801A5F28;
    scr->unk378 = D_801987C8 + 0xF;
    scr->unk37C = D_801987C8 + 3;
    scr->unk36C = (Tag80069A5C *)&d->unk0[0x78];
    model = (Model80067EBC *)((u32 *)D_801A5F30.unk0 + 3 + arg0 * 8 - arg0);
    scr->unk354 = model;
    vtx = (u8 *)d->unkB20;
    func_80068A44(model->unk4);
    scr->unk358 = scr->unk354->unk8;
    scr->unk35C = D_801A6544;
    scr->unk374 = &D_80090A28[arg1 * 0x80];
    p = scr->unk354->unk10;
    scr->unk368 = scr->unk354->unk14;
    scr->unk4.ft3 = (Prim80069A5C *)D_801A5F24[0]->unk8;
    scr->unk8 = D_801A5F24[0]->unk4;
    while (scr->unk368-- != 0) {
        scr->unk350.w = *p++;
        switch (scr->unk350.b.unk3 & 0xFD) {
        case 0x24:
            v0 = (Vtx80067EBC *)(vtx + ((Poly80067EBC *)p)->unkE);
            v1 = (Vtx80067EBC *)(vtx + ((Poly80067EBC *)p)->unk10);
            v2 = (Vtx80067EBC *)(vtx + ((Poly80067EBC *)p)->unk12);
            if (v0->unk6 & v1->unk6 & v2->unk6) {
                break;
            }
            t = v0->unk7 | v1->unk7 | v2->unk7;
            if (t == 0) {
            draw24:
                if ((v0->unk6 | v1->unk6 | v2->unk6) == 0x1F) {
                    break;
                }
                if (func_80068CB8(scr, v0->unk0, v1->unk0, v2->unk0) <= 0) {
                    break;
                }
                gte_ldv0(scr->unk358 + ((Poly80067EBC *)p)->unkC);
                gte_ldrgb(&scr->unk390);
                gte_nccs();
                prim.ft3 = scr->unk4.ft3;
                scr->unk4.ft3 = prim.ft3 + 1;
                prim.ft3->unk8 = v0->unk0;
                prim.ft3->unk10 = v1->unk0;
                prim.ft3->unk18 = v2->unk0;
                prim.ft3->unkC = ((Poly80067EBC *)p)->unk0;
                prim.ft3->unk14 = ((Poly80067EBC *)p)->unk4;
                prim.ft3->unk1C = ((Poly80067EBC *)p)->unk8;
                prim.ft3->unk0.unk0_24 = 7;
                gte_strgb(&prim.ft3->unk4);
                prim.ft3->unk4.unk0_24 = scr->unk350.b.unk3;
                otz = (((v0->unk4 + v1->unk4 + v2->unk4) * 0x1555) >> scr->unk378) + (s8)scr->unk350.b.unk0 * 4;
                prim.ft3->unk0.unk0_0 = scr->unk36C[otz].unk0_0;
                scr->unk36C[otz].unk0_0 = (u32)prim.ft3;
                break;
            }
            if (t < 2) {
                n = scr->unk350.b.unk2 & 7;
                if (n == 0) {
                    goto draw24;
                }
                if (func_80068CB8(scr, v0->unk0, v1->unk0, v2->unk0) <= 0) {
                    break;
                }
            } else {
                n = scr->unk350.b.unk2 >> 3;
                if (n == 0) {
                    goto draw24;
                }
            }
            scr->unk384->unk0 = p;
            scr->unk350.b.unk2 = n;
            scr->unk384->unk4 = scr->unk350.w;
            scr->unk384++;
            break;
        case 0x2C:
            v0 = (Vtx80067EBC *)(vtx + ((Poly80067EBC *)p)->unk12);
            v1 = (Vtx80067EBC *)(vtx + ((Poly80067EBC *)p)->unk14);
            v2 = (Vtx80067EBC *)(vtx + ((Poly80067EBC *)p)->unk16);
            v3 = (Vtx80067EBC *)(vtx + ((Poly80067EBC *)p)->unk18);
            if (v0->unk6 & v1->unk6 & v2->unk6 & v3->unk6) {
                break;
            }
            t = v0->unk7 | v1->unk7 | v2->unk7 | v3->unk7;
            if (t == 0) {
            draw2C:
                if ((v0->unk6 | v1->unk6 | v2->unk6 | v3->unk6) == 0x1F) {
                    break;
                }
                if (func_80068CB8(scr, v0->unk0, v1->unk0, v2->unk0) <= 0) {
                    break;
                }
                gte_ldv0(scr->unk358 + ((Poly80067EBC *)p)->unk10);
                gte_ldrgb(&scr->unk390);
                gte_nccs();
                prim.ft4 = scr->unk4.ft4;
                scr->unk4.ft4 = prim.ft4 + 1;
                prim.ft4->unk8 = v0->unk0;
                prim.ft4->unk10 = v1->unk0;
                prim.ft4->unk18 = v2->unk0;
                prim.ft4->unk20 = v3->unk0;
                prim.ft4->unkC = ((Poly80067EBC *)p)->unk0;
                prim.ft4->unk14 = ((Poly80067EBC *)p)->unk4;
                prim.ft4->unk1C = ((Poly80067EBC *)p)->unk8;
                prim.ft4->unk24 = ((Poly80067EBC *)p)->unkC;
                prim.ft4->unk0.unk0_24 = 9;
                gte_strgb(&prim.ft4->unk4);
                prim.ft4->unk4.unk0_24 = scr->unk350.b.unk3;
                otz = ((v0->unk4 + v1->unk4 + v2->unk4 + v3->unk4) >> scr->unk37C) + (s8)scr->unk350.b.unk0 * 4;
                prim.ft3->unk0.unk0_0 = scr->unk36C[otz].unk0_0;
                scr->unk36C[otz].unk0_0 = (u32)prim.ft3;
                break;
            }
            if (t < 2) {
                n = scr->unk350.b.unk2 & 7;
                if (n == 0) {
                    goto draw2C;
                }
                if (func_80068CB8(scr, v0->unk0, v1->unk0, v2->unk0) <= 0) {
                    break;
                }
            } else {
                n = scr->unk350.b.unk2 >> 3;
                if (n == 0) {
                    goto draw2C;
                }
            }
            scr->unk380->unk0 = p;
            scr->unk350.b.unk2 = n;
            scr->unk380->unk4 = scr->unk350.w;
            scr->unk380++;
            break;
        case 0x25:
            v0 = (Vtx80067EBC *)(vtx + ((Poly80067EBC *)p)->unkE);
            v1 = (Vtx80067EBC *)(vtx + ((Poly80067EBC *)p)->unk10);
            v2 = (Vtx80067EBC *)(vtx + ((Poly80067EBC *)p)->unk12);
            if (v0->unk6 & v1->unk6 & v2->unk6) {
                break;
            }
            t = v0->unk7 | v1->unk7 | v2->unk7;
            if (t == 0) {
            draw25:
                if ((v0->unk6 | v1->unk6 | v2->unk6) == 0x1F) {
                    break;
                }
                if (func_80068CB8(scr, v0->unk0, v1->unk0, v2->unk0) <= 0) {
                    break;
                }
                func_80068CE0(scr->unk358 + ((Poly80067EBC *)p)->unkC, scr->unk374 + ((Nrm80068D18 *)(scr->unk35C + (((Poly80067EBC *)p)->unkE >> 1)))->unk6);
                prim.gt3 = scr->unk4.gt3;
                scr->unk4.gt3 = prim.gt3 + 1;
                gte_strgb(&prim.gt3->unk4);
                func_80068D00(scr->unk374 + ((Nrm80068D18 *)(scr->unk35C + (((Poly80067EBC *)p)->unk10 >> 1)))->unk6);
                prim.gt3->unk8 = v0->unk0;
                prim.gt3->unk14 = v1->unk0;
                prim.gt3->unk20 = v2->unk0;
                gte_strgb(&prim.gt3->unk10);
                func_80068D00(scr->unk374 + ((Nrm80068D18 *)(scr->unk35C + (((Poly80067EBC *)p)->unk12 >> 1)))->unk6);
                prim.gt3->unkC = ((Poly80067EBC *)p)->unk0;
                prim.gt3->unk18 = ((Poly80067EBC *)p)->unk4;
                prim.gt3->unk24 = ((Poly80067EBC *)p)->unk8;
                prim.gt3->unk0.unk0_24 = 9;
                prim.gt3->unk4.unk0_24 = (scr->unk350.b.unk3 & 2) | 0x34;
                gte_strgb(&prim.gt3->unk1C);
                otz = (((v0->unk4 + v1->unk4 + v2->unk4) * 0x1555) >> scr->unk378) + (s8)scr->unk350.b.unk0 * 4;
                prim.ft3->unk0.unk0_0 = scr->unk36C[otz].unk0_0;
                scr->unk36C[otz].unk0_0 = (u32)prim.ft3;
                break;
            }
            if (t < 2) {
                n = scr->unk350.b.unk2 & 7;
                if (n == 0) {
                    goto draw25;
                }
                if (func_80068CB8(scr, v0->unk0, v1->unk0, v2->unk0) <= 0) {
                    break;
                }
            } else {
                n = scr->unk350.b.unk2 >> 3;
                if (n == 0) {
                    goto draw25;
                }
            }
            scr->unk38C->unk0 = p;
            scr->unk350.b.unk2 = n;
            scr->unk38C->unk4 = scr->unk350.w;
            scr->unk38C++;
            break;
        case 0x2D:
            v0 = (Vtx80067EBC *)(vtx + ((Poly80067EBC *)p)->unk12);
            v1 = (Vtx80067EBC *)(vtx + ((Poly80067EBC *)p)->unk14);
            v2 = (Vtx80067EBC *)(vtx + ((Poly80067EBC *)p)->unk16);
            v3 = (Vtx80067EBC *)(vtx + ((Poly80067EBC *)p)->unk18);
            if (v0->unk6 & v1->unk6 & v2->unk6 & v3->unk6) {
                break;
            }
            t = v0->unk7 | v1->unk7 | v2->unk7 | v3->unk7;
            if (t == 0) {
            draw2D:
                if ((v0->unk6 | v1->unk6 | v2->unk6 | v3->unk6) == 0x1F) {
                    break;
                }
                if (func_80068CB8(scr, v0->unk0, v1->unk0, v2->unk0) <= 0) {
                    break;
                }
                func_80068CE0(scr->unk358 + ((Poly80067EBC *)p)->unk10, scr->unk374 + ((Nrm80068D18 *)(scr->unk35C + (((Poly80067EBC *)p)->unk12 >> 1)))->unk6);
                prim.gt4 = scr->unk4.gt4;
                scr->unk4.gt4 = prim.gt4 + 1;
                gte_strgb(&prim.gt4->unk4);
                func_80068D00(scr->unk374 + ((Nrm80068D18 *)(scr->unk35C + (((Poly80067EBC *)p)->unk14 >> 1)))->unk6);
                prim.gt4->unk8 = v0->unk0;
                prim.gt4->unk14 = v1->unk0;
                prim.gt4->unk20 = v2->unk0;
                prim.gt4->unk2C = v3->unk0;
                gte_strgb(&prim.gt4->unk10);
                func_80068D00(scr->unk374 + ((Nrm80068D18 *)(scr->unk35C + (((Poly80067EBC *)p)->unk16 >> 1)))->unk6);
                prim.gt4->unkC = ((Poly80067EBC *)p)->unk0;
                prim.gt4->unk18 = ((Poly80067EBC *)p)->unk4;
                prim.gt4->unk24 = ((Poly80067EBC *)p)->unk8;
                prim.gt4->unk30 = ((Poly80067EBC *)p)->unkC;
                gte_strgb(&prim.gt4->unk1C);
                func_80068D00(scr->unk374 + ((Nrm80068D18 *)(scr->unk35C + (((Poly80067EBC *)p)->unk18 >> 1)))->unk6);
                prim.gt4->unk0.unk0_24 = 0xC;
                prim.gt4->unk4.unk0_24 = (scr->unk350.b.unk3 & 2) | 0x3C;
                gte_strgb(&prim.gt4->unk28);
                otz = ((v0->unk4 + v1->unk4 + v2->unk4 + v3->unk4) >> scr->unk37C) + (s8)scr->unk350.b.unk0 * 4;
                prim.ft3->unk0.unk0_0 = scr->unk36C[otz].unk0_0;
                scr->unk36C[otz].unk0_0 = (u32)prim.ft3;
                break;
            }
            if (t < 2) {
                n = scr->unk350.b.unk2 & 7;
                if (n == 0) {
                    goto draw2D;
                }
                if (func_80068CB8(scr, v0->unk0, v1->unk0, v2->unk0) <= 0) {
                    break;
                }
            } else {
                n = scr->unk350.b.unk2 >> 3;
                if (n == 0) {
                    goto draw2D;
                }
            }
            scr->unk388->unk0 = p;
            scr->unk350.b.unk2 = n;
            scr->unk388->unk4 = scr->unk350.w;
            scr->unk388++;
            break;
        case 0x6C:
            v0 = (Vtx80067EBC *)(vtx + ((Poly80067EBC *)p)->unk12);
            v1 = (Vtx80067EBC *)(vtx + ((Poly80067EBC *)p)->unk14);
            v2 = (Vtx80067EBC *)(vtx + ((Poly80067EBC *)p)->unk16);
            v3 = (Vtx80067EBC *)(vtx + ((Poly80067EBC *)p)->unk18);
            if (v0->unk6 & v1->unk6 & v2->unk6 & v3->unk6) {
                break;
            }
            t = v0->unk7 | v1->unk7 | v2->unk7 | v3->unk7;
            if (t == 0) {
            draw6C:
                if ((v0->unk6 | v1->unk6 | v2->unk6 | v3->unk6) == 0x1F) {
                    break;
                }
                gte_ldv0(scr->unk358 + ((Poly80067EBC *)p)->unk10);
                gte_ldrgb(&scr->unk390);
                gte_nccs();
                prim.ft4 = scr->unk4.ft4;
                scr->unk4.ft4 = prim.ft4 + 1;
                prim.ft4->unk8 = v0->unk0;
                prim.ft4->unk10 = v1->unk0;
                prim.ft4->unk18 = v2->unk0;
                prim.ft4->unk20 = v3->unk0;
                prim.ft4->unkC = ((Poly80067EBC *)p)->unk0;
                prim.ft4->unk14 = ((Poly80067EBC *)p)->unk4;
                prim.ft4->unk1C = ((Poly80067EBC *)p)->unk8;
                prim.ft4->unk24 = ((Poly80067EBC *)p)->unkC;
                prim.ft4->unk0.unk0_24 = 9;
                gte_strgb(&prim.ft4->unk4);
                prim.ft4->unk4.unk0_24 = scr->unk350.b.unk3 & 0xBF;
                otz = ((v0->unk4 + v1->unk4 + v2->unk4 + v3->unk4) >> scr->unk37C) + (s8)scr->unk350.b.unk0 * 4;
                prim.ft3->unk0.unk0_0 = scr->unk36C[otz].unk0_0;
                scr->unk36C[otz].unk0_0 = (u32)prim.ft3;
                break;
            }
            if (t < 2) {
                n = scr->unk350.b.unk2 & 7;
            } else {
                n = scr->unk350.b.unk2 >> 3;
            }
            if (n == 0) {
                goto draw6C;
            }
            scr->unk380->unk0 = p;
            scr->unk350.b.unk2 = n;
            scr->unk380->unk4 = scr->unk350.w;
            scr->unk380++;
            break;
        }
        p += scr->unk350.b.unk1;
    }
    scr->unk378 -= 0xE;
    scr->unk384->unk0 = NULL;
    func_80069F04(lists[1]);
    scr->unk380->unk0 = NULL;
    func_8006A7EC(lists[0]);
    scr->unk38C->unk0 = NULL;
    func_8006B0BC(lists[3]);
    scr->unk388->unk0 = NULL;
    func_8006BC30(lists[2]);
    D_801A5F24[0]->unk8 = (s32)scr->unk4.ft3;
}

void func_80069A5C(Obj80069A5C *arg0, s32 arg1) {
    Prim80069A5C *prim;
    Obj80069A5C *child;
    Scr80069A5C *scr = (Scr80069A5C *)0x1F800000;

    if ((arg0->unk48->unk14 | arg0->unk4C->unk14 | arg0->unk50->unk14) == 0) {
        return;
    }
    if (arg1 == 0) {
        if (arg0->unk48->unk14 < 0x28 || arg0->unk4C->unk14 < 0x28 || arg0->unk50->unk14 < 0x28) {
            return;
        }
        prim = scr->unk4.ft3;
        scr->unk4.ft3 = prim + 1;
        prim->unk8 = arg0->unk48->unk10;
        prim->unk10 = arg0->unk4C->unk10;
        prim->unk18 = arg0->unk50->unk10;
        prim->unkC = arg0->unk48->unk8.unk0 | scr->unk360;
        prim->unk14 = arg0->unk4C->unk8.unk0 | scr->unk364;
        prim->unk1C = arg0->unk50->unk8.unk0;
        prim->unk4 = scr->unk2C;
        prim->unk0.unk0_24 = 7;
        prim->unk4.unk0_24 = scr->unk390.unk3;
        prim->unk0.unk0_0 = scr->unk370[arg0->unk48->unk14 >> scr->unk378].unk0_0;
        scr->unk370[arg0->unk48->unk14 >> scr->unk378].unk0_0 = (u32)prim;
        return;
    }
    arg0->unk0[0].unk0 = (arg0->unk48->unk0 + arg0->unk4C->unk0) >> 1;
    arg0->unk0[0].unk2 = (arg0->unk48->unk2 + arg0->unk4C->unk2) >> 1;
    arg0->unk0[0].unk4 = (arg0->unk48->unk4 + arg0->unk4C->unk4) >> 1;
    gte_ldv0(&arg0->unk0[0]);
    gte_rtps();
    arg0->unk0[0].unk8.b.unk0 = (arg0->unk48->unk8.b.unk0 + arg0->unk4C->unk8.b.unk0) >> 1;
    arg0->unk0[0].unk8.b.unk1 = (arg0->unk48->unk8.b.unk1 + arg0->unk4C->unk8.b.unk1) >> 1;
    gte_stsxy(&arg0->unk0[0].unk10);
    gte_stszotz(&arg0->unk0[0].unk14);
    arg0->unk0[1].unk0 = (arg0->unk4C->unk0 + arg0->unk50->unk0) >> 1;
    arg0->unk0[1].unk2 = (arg0->unk4C->unk2 + arg0->unk50->unk2) >> 1;
    arg0->unk0[1].unk4 = (arg0->unk4C->unk4 + arg0->unk50->unk4) >> 1;
    gte_ldv0(&arg0->unk0[1]);
    gte_rtps();
    arg0->unk0[1].unk8.b.unk0 = (arg0->unk4C->unk8.b.unk0 + arg0->unk50->unk8.b.unk0) >> 1;
    arg0->unk0[1].unk8.b.unk1 = (arg0->unk4C->unk8.b.unk1 + arg0->unk50->unk8.b.unk1) >> 1;
    gte_stsxy(&arg0->unk0[1].unk10);
    gte_stszotz(&arg0->unk0[1].unk14);
    arg0->unk0[2].unk0 = (arg0->unk50->unk0 + arg0->unk48->unk0) >> 1;
    arg0->unk0[2].unk2 = (arg0->unk50->unk2 + arg0->unk48->unk2) >> 1;
    arg0->unk0[2].unk4 = (arg0->unk50->unk4 + arg0->unk48->unk4) >> 1;
    gte_ldv0(&arg0->unk0[2]);
    gte_rtps();
    arg0->unk0[2].unk8.b.unk0 = (arg0->unk50->unk8.b.unk0 + arg0->unk48->unk8.b.unk0) >> 1;
    arg0->unk0[2].unk8.b.unk1 = (arg0->unk50->unk8.b.unk1 + arg0->unk48->unk8.b.unk1) >> 1;
    gte_stsxy(&arg0->unk0[2].unk10);
    gte_stszotz(&arg0->unk0[2].unk14);
    arg1--;
    child = arg0 + 1;
    child->unk48 = &arg0->unk0[0];
    child->unk4C = &arg0->unk0[2];
    child->unk50 = arg0->unk48;
    func_80069A5C(child, arg1);
    child->unk4C = arg0->unk4C;
    child->unk50 = &arg0->unk0[1];
    func_80069A5C(child, arg1);
    child->unk48 = arg0->unk50;
    child->unk4C = &arg0->unk0[2];
    func_80069A5C(child, arg1);
    child->unk48 = &arg0->unk0[2];
    child->unk4C = &arg0->unk0[0];
    func_80069A5C(child, arg1);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80069F04);

void func_8006A13C(Obj8006A13C *arg0, s32 arg1) {
    Prim8006A13C *prim;
    Obj8006A13C *child;
    Scr80069A5C *scr = (Scr80069A5C *)0x1F800000;

    if ((arg0->unk78->unk14 | arg0->unk7C->unk14 | arg0->unk80->unk14 | arg0->unk84->unk14) == 0) {
        return;
    }
    if (arg1 == 0) {
        if (arg0->unk78->unk14 < 0x28 || arg0->unk7C->unk14 < 0x28 || arg0->unk80->unk14 < 0x28
            || arg0->unk84->unk14 < 0x28) {
            return;
        }
        prim = scr->unk4.ft4;
        scr->unk4.ft4 = prim + 1;
        prim->unk8 = arg0->unk78->unk10;
        prim->unk10 = arg0->unk7C->unk10;
        prim->unk18 = arg0->unk80->unk10;
        prim->unk20 = arg0->unk84->unk10;
        prim->unkC = arg0->unk78->unk8.unk0 | scr->unk360;
        prim->unk14 = arg0->unk7C->unk8.unk0 | scr->unk364;
        prim->unk1C = arg0->unk80->unk8.unk0;
        prim->unk24 = arg0->unk84->unk8.unk0;
        prim->unk4 = scr->unk2C;
        prim->unk0.unk0_24 = 9;
        prim->unk4.unk0_24 = scr->unk390.unk3;
        prim->unk0.unk0_0 = scr->unk370[(arg0->unk78->unk14 + arg0->unk7C->unk14 + arg0->unk80->unk14 + arg0->unk84->unk14) >> scr->unk37C].unk0_0;
        scr->unk370[(arg0->unk78->unk14 + arg0->unk7C->unk14 + arg0->unk80->unk14 + arg0->unk84->unk14) >> scr->unk37C].unk0_0 = (u32)prim;
        return;
    }
    arg0->unk0[0].unk0 = (arg0->unk78->unk0 + arg0->unk7C->unk0) >> 1;
    arg0->unk0[0].unk2 = (arg0->unk78->unk2 + arg0->unk7C->unk2) >> 1;
    arg0->unk0[0].unk4 = (arg0->unk78->unk4 + arg0->unk7C->unk4) >> 1;
    gte_ldv0(&arg0->unk0[0]);
    gte_rtps();
    arg0->unk0[0].unk8.b.unk0 = (arg0->unk78->unk8.b.unk0 + arg0->unk7C->unk8.b.unk0) >> 1;
    arg0->unk0[0].unk8.b.unk1 = (arg0->unk78->unk8.b.unk1 + arg0->unk7C->unk8.b.unk1) >> 1;
    gte_stsxy(&arg0->unk0[0].unk10);
    gte_stszotz(&arg0->unk0[0].unk14);
    arg0->unk0[1].unk0 = (arg0->unk78->unk0 + arg0->unk80->unk0) >> 1;
    arg0->unk0[1].unk2 = (arg0->unk78->unk2 + arg0->unk80->unk2) >> 1;
    arg0->unk0[1].unk4 = (arg0->unk78->unk4 + arg0->unk80->unk4) >> 1;
    gte_ldv0(&arg0->unk0[1]);
    gte_rtps();
    arg0->unk0[1].unk8.b.unk0 = (arg0->unk78->unk8.b.unk0 + arg0->unk80->unk8.b.unk0) >> 1;
    arg0->unk0[1].unk8.b.unk1 = (arg0->unk78->unk8.b.unk1 + arg0->unk80->unk8.b.unk1) >> 1;
    gte_stsxy(&arg0->unk0[1].unk10);
    gte_stszotz(&arg0->unk0[1].unk14);
    arg0->unk0[2].unk0 = (arg0->unk84->unk0 + arg0->unk7C->unk0) >> 1;
    arg0->unk0[2].unk2 = (arg0->unk84->unk2 + arg0->unk7C->unk2) >> 1;
    arg0->unk0[2].unk4 = (arg0->unk84->unk4 + arg0->unk7C->unk4) >> 1;
    gte_ldv0(&arg0->unk0[2]);
    gte_rtps();
    arg0->unk0[2].unk8.b.unk0 = (arg0->unk84->unk8.b.unk0 + arg0->unk7C->unk8.b.unk0) >> 1;
    arg0->unk0[2].unk8.b.unk1 = (arg0->unk84->unk8.b.unk1 + arg0->unk7C->unk8.b.unk1) >> 1;
    gte_stsxy(&arg0->unk0[2].unk10);
    gte_stszotz(&arg0->unk0[2].unk14);
    arg0->unk0[3].unk0 = (arg0->unk84->unk0 + arg0->unk80->unk0) >> 1;
    arg0->unk0[3].unk2 = (arg0->unk84->unk2 + arg0->unk80->unk2) >> 1;
    arg0->unk0[3].unk4 = (arg0->unk84->unk4 + arg0->unk80->unk4) >> 1;
    gte_ldv0(&arg0->unk0[3]);
    gte_rtps();
    arg0->unk0[3].unk8.b.unk0 = (arg0->unk84->unk8.b.unk0 + arg0->unk80->unk8.b.unk0) >> 1;
    arg0->unk0[3].unk8.b.unk1 = (arg0->unk84->unk8.b.unk1 + arg0->unk80->unk8.b.unk1) >> 1;
    gte_stsxy(&arg0->unk0[3].unk10);
    gte_stszotz(&arg0->unk0[3].unk14);
    arg0->unk0[4].unk0 = (arg0->unk0[0].unk0 + arg0->unk0[3].unk0) >> 1;
    arg0->unk0[4].unk2 = (arg0->unk0[0].unk2 + arg0->unk0[3].unk2) >> 1;
    arg0->unk0[4].unk4 = (arg0->unk0[0].unk4 + arg0->unk0[3].unk4) >> 1;
    gte_ldv0(&arg0->unk0[4]);
    gte_rtps();
    arg0->unk0[4].unk8.b.unk0 = (arg0->unk0[0].unk8.b.unk0 + arg0->unk0[3].unk8.b.unk0) >> 1;
    arg0->unk0[4].unk8.b.unk1 = (arg0->unk0[0].unk8.b.unk1 + arg0->unk0[3].unk8.b.unk1) >> 1;
    gte_stsxy(&arg0->unk0[4].unk10);
    gte_stszotz(&arg0->unk0[4].unk14);
    arg1--;
    child = arg0 + 1;
    child->unk78 = &arg0->unk0[0];
    child->unk7C = &arg0->unk0[4];
    child->unk80 = arg0->unk78;
    child->unk84 = &arg0->unk0[1];
    func_8006A13C(child, arg1);
    child->unk7C = arg0->unk7C;
    child->unk80 = &arg0->unk0[4];
    child->unk84 = &arg0->unk0[2];
    func_8006A13C(child, arg1);
    child->unk78 = &arg0->unk0[3];
    child->unk7C = &arg0->unk0[4];
    child->unk80 = arg0->unk84;
    func_8006A13C(child, arg1);
    child->unk7C = arg0->unk80;
    child->unk80 = &arg0->unk0[4];
    child->unk84 = &arg0->unk0[1];
    func_8006A13C(child, arg1);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006A7EC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006AA90);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006AAB0);

void func_8006AAC8(Obj80069A5C *arg0, s32 arg1) {
    Prim8006AAC8 *prim;
    Obj80069A5C *child;
    Scr80069A5C *scr = (Scr80069A5C *)0x1F800000;

    if ((arg0->unk48->unk14 | arg0->unk4C->unk14 | arg0->unk50->unk14) == 0) {
        return;
    }
    if (arg1 == 0) {
        if (arg0->unk48->unk14 < 0x28 || arg0->unk4C->unk14 < 0x28 || arg0->unk50->unk14 < 0x28) {
            return;
        }
        prim = scr->unk4.gt3;
        scr->unk4.gt3 = prim + 1;
        prim->unk8 = arg0->unk48->unk10;
        prim->unk14 = arg0->unk4C->unk10;
        prim->unk20 = arg0->unk50->unk10;
        prim->unkC = arg0->unk48->unk8.unk0 | scr->unk360;
        prim->unk18 = arg0->unk4C->unk8.unk0 | scr->unk364;
        prim->unk24 = arg0->unk50->unk8.unk0;
        prim->unk4 = arg0->unk48->unkC.unk0;
        prim->unk10 = arg0->unk4C->unkC.unk0;
        prim->unk1C = arg0->unk50->unkC.unk0;
        prim->unk0.unk0_24 = 9;
        prim->unk4.unk0_24 = scr->unk2C.unk0_24;
        prim->unk0.unk0_0 = scr->unk370[arg0->unk48->unk14 >> scr->unk378].unk0_0;
        scr->unk370[arg0->unk48->unk14 >> scr->unk378].unk0_0 = (u32)prim;
        return;
    }
    arg0->unk0[0].unk0 = (arg0->unk48->unk0 + arg0->unk4C->unk0) >> 1;
    arg0->unk0[0].unk2 = (arg0->unk48->unk2 + arg0->unk4C->unk2) >> 1;
    arg0->unk0[0].unk4 = (arg0->unk48->unk4 + arg0->unk4C->unk4) >> 1;
    gte_ldv0(&arg0->unk0[0]);
    gte_rtps();
    arg0->unk0[0].unkC.b.unk0 = (arg0->unk48->unkC.b.unk0 + arg0->unk4C->unkC.b.unk0) >> 1;
    arg0->unk0[0].unkC.b.unk1 = (arg0->unk48->unkC.b.unk1 + arg0->unk4C->unkC.b.unk1) >> 1;
    arg0->unk0[0].unkC.b.unk2 = (arg0->unk48->unkC.b.unk2 + arg0->unk4C->unkC.b.unk2) >> 1;
    arg0->unk0[0].unk8.b.unk0 = (arg0->unk48->unk8.b.unk0 + arg0->unk4C->unk8.b.unk0) >> 1;
    arg0->unk0[0].unk8.b.unk1 = (arg0->unk48->unk8.b.unk1 + arg0->unk4C->unk8.b.unk1) >> 1;
    gte_stsxy(&arg0->unk0[0].unk10);
    gte_stszotz(&arg0->unk0[0].unk14);
    arg0->unk0[1].unk0 = (arg0->unk4C->unk0 + arg0->unk50->unk0) >> 1;
    arg0->unk0[1].unk2 = (arg0->unk4C->unk2 + arg0->unk50->unk2) >> 1;
    arg0->unk0[1].unk4 = (arg0->unk4C->unk4 + arg0->unk50->unk4) >> 1;
    gte_ldv0(&arg0->unk0[1]);
    gte_rtps();
    arg0->unk0[1].unkC.b.unk0 = (arg0->unk4C->unkC.b.unk0 + arg0->unk50->unkC.b.unk0) >> 1;
    arg0->unk0[1].unkC.b.unk1 = (arg0->unk4C->unkC.b.unk1 + arg0->unk50->unkC.b.unk1) >> 1;
    arg0->unk0[1].unkC.b.unk2 = (arg0->unk4C->unkC.b.unk2 + arg0->unk50->unkC.b.unk2) >> 1;
    arg0->unk0[1].unk8.b.unk0 = (arg0->unk4C->unk8.b.unk0 + arg0->unk50->unk8.b.unk0) >> 1;
    arg0->unk0[1].unk8.b.unk1 = (arg0->unk4C->unk8.b.unk1 + arg0->unk50->unk8.b.unk1) >> 1;
    gte_stsxy(&arg0->unk0[1].unk10);
    gte_stszotz(&arg0->unk0[1].unk14);
    arg0->unk0[2].unk0 = (arg0->unk50->unk0 + arg0->unk48->unk0) >> 1;
    arg0->unk0[2].unk2 = (arg0->unk50->unk2 + arg0->unk48->unk2) >> 1;
    arg0->unk0[2].unk4 = (arg0->unk50->unk4 + arg0->unk48->unk4) >> 1;
    gte_ldv0(&arg0->unk0[2]);
    gte_rtps();
    arg0->unk0[2].unkC.b.unk0 = (arg0->unk50->unkC.b.unk0 + arg0->unk48->unkC.b.unk0) >> 1;
    arg0->unk0[2].unkC.b.unk1 = (arg0->unk50->unkC.b.unk1 + arg0->unk48->unkC.b.unk1) >> 1;
    arg0->unk0[2].unkC.b.unk2 = (arg0->unk50->unkC.b.unk2 + arg0->unk48->unkC.b.unk2) >> 1;
    arg0->unk0[2].unk8.b.unk0 = (arg0->unk50->unk8.b.unk0 + arg0->unk48->unk8.b.unk0) >> 1;
    arg0->unk0[2].unk8.b.unk1 = (arg0->unk50->unk8.b.unk1 + arg0->unk48->unk8.b.unk1) >> 1;
    gte_stsxy(&arg0->unk0[2].unk10);
    gte_stszotz(&arg0->unk0[2].unk14);
    arg1--;
    child = arg0 + 1;
    child->unk48 = &arg0->unk0[0];
    child->unk4C = &arg0->unk0[2];
    child->unk50 = arg0->unk48;
    func_8006AAC8(child, arg1);
    child->unk4C = arg0->unk4C;
    child->unk50 = &arg0->unk0[1];
    func_8006AAC8(child, arg1);
    child->unk48 = arg0->unk50;
    child->unk4C = &arg0->unk0[2];
    func_8006AAC8(child, arg1);
    child->unk48 = &arg0->unk0[2];
    child->unk4C = &arg0->unk0[0];
    func_8006AAC8(child, arg1);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006B0BC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006B34C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006B36C);

void func_8006B384(Obj8006A13C *arg0, s32 arg1) {
    Prim8006B384 *prim;
    Obj8006A13C *child;
    Scr80069A5C *scr = (Scr80069A5C *)0x1F800000;

    if ((arg0->unk78->unk14 | arg0->unk7C->unk14 | arg0->unk80->unk14 | arg0->unk84->unk14) == 0) {
        return;
    }
    if (arg1 == 0) {
        if (arg0->unk78->unk14 < 0x28 || arg0->unk7C->unk14 < 0x28 || arg0->unk80->unk14 < 0x28
            || arg0->unk84->unk14 < 0x28) {
            return;
        }
        prim = scr->unk4.gt4;
        scr->unk4.gt4 = prim + 1;
        prim->unk8 = arg0->unk78->unk10;
        prim->unk14 = arg0->unk7C->unk10;
        prim->unk20 = arg0->unk80->unk10;
        prim->unk2C = arg0->unk84->unk10;
        prim->unkC = arg0->unk78->unk8.unk0 | scr->unk360;
        prim->unk18 = arg0->unk7C->unk8.unk0 | scr->unk364;
        prim->unk24 = arg0->unk80->unk8.unk0;
        prim->unk30 = arg0->unk84->unk8.unk0;
        prim->unk4 = arg0->unk78->unkC.unk0;
        prim->unk10 = arg0->unk7C->unkC.unk0;
        prim->unk1C = arg0->unk80->unkC.unk0;
        prim->unk28 = arg0->unk84->unkC.unk0;
        prim->unk0.unk0_24 = 0xC;
        prim->unk4.unk0_24 = scr->unk2C.unk0_24;
        prim->unk0.unk0_0 = scr->unk370[(arg0->unk78->unk14 + arg0->unk7C->unk14 + arg0->unk80->unk14 + arg0->unk84->unk14) >> scr->unk37C].unk0_0;
        scr->unk370[(arg0->unk78->unk14 + arg0->unk7C->unk14 + arg0->unk80->unk14 + arg0->unk84->unk14) >> scr->unk37C].unk0_0 = (u32)prim;
        return;
    }
    arg0->unk0[0].unk0 = (arg0->unk78->unk0 + arg0->unk7C->unk0) >> 1;
    arg0->unk0[0].unk2 = (arg0->unk78->unk2 + arg0->unk7C->unk2) >> 1;
    arg0->unk0[0].unk4 = (arg0->unk78->unk4 + arg0->unk7C->unk4) >> 1;
    gte_ldv0(&arg0->unk0[0]);
    gte_rtps();
    arg0->unk0[0].unkC.b.unk0 = (arg0->unk78->unkC.b.unk0 + arg0->unk7C->unkC.b.unk0) >> 1;
    arg0->unk0[0].unkC.b.unk1 = (arg0->unk78->unkC.b.unk1 + arg0->unk7C->unkC.b.unk1) >> 1;
    arg0->unk0[0].unkC.b.unk2 = (arg0->unk78->unkC.b.unk2 + arg0->unk7C->unkC.b.unk2) >> 1;
    arg0->unk0[0].unk8.b.unk0 = (arg0->unk78->unk8.b.unk0 + arg0->unk7C->unk8.b.unk0) >> 1;
    arg0->unk0[0].unk8.b.unk1 = (arg0->unk78->unk8.b.unk1 + arg0->unk7C->unk8.b.unk1) >> 1;
    gte_stsxy(&arg0->unk0[0].unk10);
    gte_stszotz(&arg0->unk0[0].unk14);
    arg0->unk0[1].unk0 = (arg0->unk78->unk0 + arg0->unk80->unk0) >> 1;
    arg0->unk0[1].unk2 = (arg0->unk78->unk2 + arg0->unk80->unk2) >> 1;
    arg0->unk0[1].unk4 = (arg0->unk78->unk4 + arg0->unk80->unk4) >> 1;
    gte_ldv0(&arg0->unk0[1]);
    gte_rtps();
    arg0->unk0[1].unkC.b.unk0 = (arg0->unk78->unkC.b.unk0 + arg0->unk80->unkC.b.unk0) >> 1;
    arg0->unk0[1].unkC.b.unk1 = (arg0->unk78->unkC.b.unk1 + arg0->unk80->unkC.b.unk1) >> 1;
    arg0->unk0[1].unkC.b.unk2 = (arg0->unk78->unkC.b.unk2 + arg0->unk80->unkC.b.unk2) >> 1;
    arg0->unk0[1].unk8.b.unk0 = (arg0->unk78->unk8.b.unk0 + arg0->unk80->unk8.b.unk0) >> 1;
    arg0->unk0[1].unk8.b.unk1 = (arg0->unk78->unk8.b.unk1 + arg0->unk80->unk8.b.unk1) >> 1;
    gte_stsxy(&arg0->unk0[1].unk10);
    gte_stszotz(&arg0->unk0[1].unk14);
    arg0->unk0[2].unk0 = (arg0->unk84->unk0 + arg0->unk7C->unk0) >> 1;
    arg0->unk0[2].unk2 = (arg0->unk84->unk2 + arg0->unk7C->unk2) >> 1;
    arg0->unk0[2].unk4 = (arg0->unk84->unk4 + arg0->unk7C->unk4) >> 1;
    gte_ldv0(&arg0->unk0[2]);
    gte_rtps();
    arg0->unk0[2].unkC.b.unk0 = (arg0->unk84->unkC.b.unk0 + arg0->unk7C->unkC.b.unk0) >> 1;
    arg0->unk0[2].unkC.b.unk1 = (arg0->unk84->unkC.b.unk1 + arg0->unk7C->unkC.b.unk1) >> 1;
    arg0->unk0[2].unkC.b.unk2 = (arg0->unk84->unkC.b.unk2 + arg0->unk7C->unkC.b.unk2) >> 1;
    arg0->unk0[2].unk8.b.unk0 = (arg0->unk84->unk8.b.unk0 + arg0->unk7C->unk8.b.unk0) >> 1;
    arg0->unk0[2].unk8.b.unk1 = (arg0->unk84->unk8.b.unk1 + arg0->unk7C->unk8.b.unk1) >> 1;
    gte_stsxy(&arg0->unk0[2].unk10);
    gte_stszotz(&arg0->unk0[2].unk14);
    arg0->unk0[3].unk0 = (arg0->unk84->unk0 + arg0->unk80->unk0) >> 1;
    arg0->unk0[3].unk2 = (arg0->unk84->unk2 + arg0->unk80->unk2) >> 1;
    arg0->unk0[3].unk4 = (arg0->unk84->unk4 + arg0->unk80->unk4) >> 1;
    gte_ldv0(&arg0->unk0[3]);
    gte_rtps();
    arg0->unk0[3].unkC.b.unk0 = (arg0->unk84->unkC.b.unk0 + arg0->unk80->unkC.b.unk0) >> 1;
    arg0->unk0[3].unkC.b.unk1 = (arg0->unk84->unkC.b.unk1 + arg0->unk80->unkC.b.unk1) >> 1;
    arg0->unk0[3].unkC.b.unk2 = (arg0->unk84->unkC.b.unk2 + arg0->unk80->unkC.b.unk2) >> 1;
    arg0->unk0[3].unk8.b.unk0 = (arg0->unk84->unk8.b.unk0 + arg0->unk80->unk8.b.unk0) >> 1;
    arg0->unk0[3].unk8.b.unk1 = (arg0->unk84->unk8.b.unk1 + arg0->unk80->unk8.b.unk1) >> 1;
    gte_stsxy(&arg0->unk0[3].unk10);
    gte_stszotz(&arg0->unk0[3].unk14);
    arg0->unk0[4].unk0 = (arg0->unk0[0].unk0 + arg0->unk0[3].unk0) >> 1;
    arg0->unk0[4].unk2 = (arg0->unk0[0].unk2 + arg0->unk0[3].unk2) >> 1;
    arg0->unk0[4].unk4 = (arg0->unk0[0].unk4 + arg0->unk0[3].unk4) >> 1;
    gte_ldv0(&arg0->unk0[4]);
    gte_rtps();
    arg0->unk0[4].unkC.b.unk0 = (arg0->unk0[0].unkC.b.unk0 + arg0->unk0[3].unkC.b.unk0) >> 1;
    arg0->unk0[4].unkC.b.unk1 = (arg0->unk0[0].unkC.b.unk1 + arg0->unk0[3].unkC.b.unk1) >> 1;
    arg0->unk0[4].unkC.b.unk2 = (arg0->unk0[0].unkC.b.unk2 + arg0->unk0[3].unkC.b.unk2) >> 1;
    arg0->unk0[4].unk8.b.unk0 = (arg0->unk0[0].unk8.b.unk0 + arg0->unk0[3].unk8.b.unk0) >> 1;
    arg0->unk0[4].unk8.b.unk1 = (arg0->unk0[0].unk8.b.unk1 + arg0->unk0[3].unk8.b.unk1) >> 1;
    gte_stsxy(&arg0->unk0[4].unk10);
    gte_stszotz(&arg0->unk0[4].unk14);
    arg1--;
    child = arg0 + 1;
    child->unk78 = &arg0->unk0[0];
    child->unk7C = &arg0->unk0[4];
    child->unk80 = arg0->unk78;
    child->unk84 = &arg0->unk0[1];
    func_8006B384(child, arg1);
    child->unk7C = arg0->unk7C;
    child->unk80 = &arg0->unk0[4];
    child->unk84 = &arg0->unk0[2];
    func_8006B384(child, arg1);
    child->unk78 = &arg0->unk0[3];
    child->unk7C = &arg0->unk0[4];
    child->unk80 = arg0->unk84;
    func_8006B384(child, arg1);
    child->unk7C = arg0->unk80;
    child->unk80 = &arg0->unk0[4];
    child->unk84 = &arg0->unk0[1];
    func_8006B384(child, arg1);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006BC30);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006BF54);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006BF74);

void func_8006BF8C(Obj80069A5C *arg0, s32 arg1) {
    Prim8006AAC8 *prim;
    Obj80069A5C *child;
    Scr80069A5C *scr = (Scr80069A5C *)0x1F800000;

    if ((arg0->unk48->unk14 | arg0->unk4C->unk14 | arg0->unk50->unk14) == 0) {
        return;
    }
    if (arg1 == 0) {
        if (arg0->unk48->unk14 < 0x28 || arg0->unk4C->unk14 < 0x28 || arg0->unk50->unk14 < 0x28) {
            return;
        }
        prim = scr->unk4.gt3;
        scr->unk4.gt3 = prim + 1;
        prim->unk8 = arg0->unk48->unk10;
        prim->unk14 = arg0->unk4C->unk10;
        prim->unk20 = arg0->unk50->unk10;
        prim->unkC = arg0->unk48->unk8.unk0 | scr->unk360;
        prim->unk18 = arg0->unk4C->unk8.unk0 | scr->unk364;
        prim->unk24 = arg0->unk50->unk8.unk0;
        prim->unk4 = arg0->unk48->unkC.unk0;
        prim->unk10 = arg0->unk4C->unkC.unk0;
        prim->unk1C = arg0->unk50->unkC.unk0;
        prim->unk0.unk0_24 = 9;
        prim->unk4.unk0_24 = scr->unk2C.unk0_24;
        prim->unk0.unk0_0 = scr->unk370[arg0->unk48->unk14 >> scr->unk378].unk0_0;
        scr->unk370[arg0->unk48->unk14 >> scr->unk378].unk0_0 = (u32)prim;
        return;
    }
    arg0->unk0[0].unk0 = (arg0->unk48->unk0 + arg0->unk4C->unk0) >> 1;
    arg0->unk0[0].unk2 = (arg0->unk48->unk2 + arg0->unk4C->unk2) >> 1;
    arg0->unk0[0].unk4 = (arg0->unk48->unk4 + arg0->unk4C->unk4) >> 1;
    gte_ldv0(&arg0->unk0[0]);
    gte_rtps();
    arg0->unk0[0].unkC.b.unk0 = (arg0->unk48->unkC.b.unk0 + arg0->unk4C->unkC.b.unk0) >> 1;
    arg0->unk0[0].unkC.b.unk1 = (arg0->unk48->unkC.b.unk1 + arg0->unk4C->unkC.b.unk1) >> 1;
    arg0->unk0[0].unkC.b.unk2 = (arg0->unk48->unkC.b.unk2 + arg0->unk4C->unkC.b.unk2) >> 1;
    arg0->unk0[0].unk8.b.unk0 = (arg0->unk48->unk8.b.unk0 + arg0->unk4C->unk8.b.unk0) >> 1;
    arg0->unk0[0].unk8.b.unk1 = (arg0->unk48->unk8.b.unk1 + arg0->unk4C->unk8.b.unk1) >> 1;
    gte_stsxy(&arg0->unk0[0].unk10);
    gte_stszotz(&arg0->unk0[0].unk14);
    arg0->unk0[1].unk0 = (arg0->unk4C->unk0 + arg0->unk50->unk0) >> 1;
    arg0->unk0[1].unk2 = (arg0->unk4C->unk2 + arg0->unk50->unk2) >> 1;
    arg0->unk0[1].unk4 = (arg0->unk4C->unk4 + arg0->unk50->unk4) >> 1;
    gte_ldv0(&arg0->unk0[1]);
    gte_rtps();
    arg0->unk0[1].unkC.b.unk0 = (arg0->unk4C->unkC.b.unk0 + arg0->unk50->unkC.b.unk0) >> 1;
    arg0->unk0[1].unkC.b.unk1 = (arg0->unk4C->unkC.b.unk1 + arg0->unk50->unkC.b.unk1) >> 1;
    arg0->unk0[1].unkC.b.unk2 = (arg0->unk4C->unkC.b.unk2 + arg0->unk50->unkC.b.unk2) >> 1;
    arg0->unk0[1].unk8.b.unk0 = (arg0->unk4C->unk8.b.unk0 + arg0->unk50->unk8.b.unk0) >> 1;
    arg0->unk0[1].unk8.b.unk1 = (arg0->unk4C->unk8.b.unk1 + arg0->unk50->unk8.b.unk1) >> 1;
    gte_stsxy(&arg0->unk0[1].unk10);
    gte_stszotz(&arg0->unk0[1].unk14);
    arg0->unk0[2].unk0 = (arg0->unk50->unk0 + arg0->unk48->unk0) >> 1;
    arg0->unk0[2].unk2 = (arg0->unk50->unk2 + arg0->unk48->unk2) >> 1;
    arg0->unk0[2].unk4 = (arg0->unk50->unk4 + arg0->unk48->unk4) >> 1;
    gte_ldv0(&arg0->unk0[2]);
    gte_rtps();
    arg0->unk0[2].unkC.b.unk0 = (arg0->unk50->unkC.b.unk0 + arg0->unk48->unkC.b.unk0) >> 1;
    arg0->unk0[2].unkC.b.unk1 = (arg0->unk50->unkC.b.unk1 + arg0->unk48->unkC.b.unk1) >> 1;
    arg0->unk0[2].unkC.b.unk2 = (arg0->unk50->unkC.b.unk2 + arg0->unk48->unkC.b.unk2) >> 1;
    arg0->unk0[2].unk8.b.unk0 = (arg0->unk50->unk8.b.unk0 + arg0->unk48->unk8.b.unk0) >> 1;
    arg0->unk0[2].unk8.b.unk1 = (arg0->unk50->unk8.b.unk1 + arg0->unk48->unk8.b.unk1) >> 1;
    gte_stsxy(&arg0->unk0[2].unk10);
    gte_stszotz(&arg0->unk0[2].unk14);
    arg1--;
    child = arg0 + 1;
    child->unk48 = &arg0->unk0[0];
    child->unk4C = &arg0->unk0[2];
    child->unk50 = arg0->unk48;
    func_8006BF8C(child, arg1);
    child->unk4C = arg0->unk4C;
    child->unk50 = &arg0->unk0[1];
    func_8006BF8C(child, arg1);
    child->unk48 = arg0->unk50;
    child->unk4C = &arg0->unk0[2];
    func_8006BF8C(child, arg1);
    child->unk48 = &arg0->unk0[2];
    child->unk4C = &arg0->unk0[0];
    func_8006BF8C(child, arg1);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006C580);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006C7DC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006C7FC);

void func_8006C814(Obj8006A13C *arg0, s32 arg1) {
    Prim8006B384 *prim;
    Obj8006A13C *child;
    Scr80069A5C *scr = (Scr80069A5C *)0x1F800000;

    if ((arg0->unk78->unk14 | arg0->unk7C->unk14 | arg0->unk80->unk14 | arg0->unk84->unk14) == 0) {
        return;
    }
    if (arg1 == 0) {
        if (arg0->unk78->unk14 < 0x28 || arg0->unk7C->unk14 < 0x28 || arg0->unk80->unk14 < 0x28
            || arg0->unk84->unk14 < 0x28) {
            return;
        }
        prim = scr->unk4.gt4;
        scr->unk4.gt4 = prim + 1;
        prim->unk8 = arg0->unk78->unk10;
        prim->unk14 = arg0->unk7C->unk10;
        prim->unk20 = arg0->unk80->unk10;
        prim->unk2C = arg0->unk84->unk10;
        prim->unkC = arg0->unk78->unk8.unk0 | scr->unk360;
        prim->unk18 = arg0->unk7C->unk8.unk0 | scr->unk364;
        prim->unk24 = arg0->unk80->unk8.unk0;
        prim->unk30 = arg0->unk84->unk8.unk0;
        prim->unk4 = arg0->unk78->unkC.unk0;
        prim->unk10 = arg0->unk7C->unkC.unk0;
        prim->unk1C = arg0->unk80->unkC.unk0;
        prim->unk28 = arg0->unk84->unkC.unk0;
        prim->unk0.unk0_24 = 0xC;
        prim->unk4.unk0_24 = scr->unk2C.unk0_24;
        prim->unk0.unk0_0 = scr->unk370[(arg0->unk78->unk14 + arg0->unk7C->unk14 + arg0->unk80->unk14 + arg0->unk84->unk14) >> scr->unk37C].unk0_0;
        scr->unk370[(arg0->unk78->unk14 + arg0->unk7C->unk14 + arg0->unk80->unk14 + arg0->unk84->unk14) >> scr->unk37C].unk0_0 = (u32)prim;
        return;
    }
    arg0->unk0[0].unk0 = (arg0->unk78->unk0 + arg0->unk7C->unk0) >> 1;
    arg0->unk0[0].unk2 = (arg0->unk78->unk2 + arg0->unk7C->unk2) >> 1;
    arg0->unk0[0].unk4 = (arg0->unk78->unk4 + arg0->unk7C->unk4) >> 1;
    gte_ldv0(&arg0->unk0[0]);
    gte_rtps();
    arg0->unk0[0].unkC.b.unk0 = (arg0->unk78->unkC.b.unk0 + arg0->unk7C->unkC.b.unk0) >> 1;
    arg0->unk0[0].unkC.b.unk1 = (arg0->unk78->unkC.b.unk1 + arg0->unk7C->unkC.b.unk1) >> 1;
    arg0->unk0[0].unkC.b.unk2 = (arg0->unk78->unkC.b.unk2 + arg0->unk7C->unkC.b.unk2) >> 1;
    arg0->unk0[0].unk8.b.unk0 = (arg0->unk78->unk8.b.unk0 + arg0->unk7C->unk8.b.unk0) >> 1;
    arg0->unk0[0].unk8.b.unk1 = (arg0->unk78->unk8.b.unk1 + arg0->unk7C->unk8.b.unk1) >> 1;
    gte_stsxy(&arg0->unk0[0].unk10);
    gte_stszotz(&arg0->unk0[0].unk14);
    arg0->unk0[1].unk0 = (arg0->unk78->unk0 + arg0->unk80->unk0) >> 1;
    arg0->unk0[1].unk2 = (arg0->unk78->unk2 + arg0->unk80->unk2) >> 1;
    arg0->unk0[1].unk4 = (arg0->unk78->unk4 + arg0->unk80->unk4) >> 1;
    gte_ldv0(&arg0->unk0[1]);
    gte_rtps();
    arg0->unk0[1].unkC.b.unk0 = (arg0->unk78->unkC.b.unk0 + arg0->unk80->unkC.b.unk0) >> 1;
    arg0->unk0[1].unkC.b.unk1 = (arg0->unk78->unkC.b.unk1 + arg0->unk80->unkC.b.unk1) >> 1;
    arg0->unk0[1].unkC.b.unk2 = (arg0->unk78->unkC.b.unk2 + arg0->unk80->unkC.b.unk2) >> 1;
    arg0->unk0[1].unk8.b.unk0 = (arg0->unk78->unk8.b.unk0 + arg0->unk80->unk8.b.unk0) >> 1;
    arg0->unk0[1].unk8.b.unk1 = (arg0->unk78->unk8.b.unk1 + arg0->unk80->unk8.b.unk1) >> 1;
    gte_stsxy(&arg0->unk0[1].unk10);
    gte_stszotz(&arg0->unk0[1].unk14);
    arg0->unk0[2].unk0 = (arg0->unk84->unk0 + arg0->unk7C->unk0) >> 1;
    arg0->unk0[2].unk2 = (arg0->unk84->unk2 + arg0->unk7C->unk2) >> 1;
    arg0->unk0[2].unk4 = (arg0->unk84->unk4 + arg0->unk7C->unk4) >> 1;
    gte_ldv0(&arg0->unk0[2]);
    gte_rtps();
    arg0->unk0[2].unkC.b.unk0 = (arg0->unk84->unkC.b.unk0 + arg0->unk7C->unkC.b.unk0) >> 1;
    arg0->unk0[2].unkC.b.unk1 = (arg0->unk84->unkC.b.unk1 + arg0->unk7C->unkC.b.unk1) >> 1;
    arg0->unk0[2].unkC.b.unk2 = (arg0->unk84->unkC.b.unk2 + arg0->unk7C->unkC.b.unk2) >> 1;
    arg0->unk0[2].unk8.b.unk0 = (arg0->unk84->unk8.b.unk0 + arg0->unk7C->unk8.b.unk0) >> 1;
    arg0->unk0[2].unk8.b.unk1 = (arg0->unk84->unk8.b.unk1 + arg0->unk7C->unk8.b.unk1) >> 1;
    gte_stsxy(&arg0->unk0[2].unk10);
    gte_stszotz(&arg0->unk0[2].unk14);
    arg0->unk0[3].unk0 = (arg0->unk84->unk0 + arg0->unk80->unk0) >> 1;
    arg0->unk0[3].unk2 = (arg0->unk84->unk2 + arg0->unk80->unk2) >> 1;
    arg0->unk0[3].unk4 = (arg0->unk84->unk4 + arg0->unk80->unk4) >> 1;
    gte_ldv0(&arg0->unk0[3]);
    gte_rtps();
    arg0->unk0[3].unkC.b.unk0 = (arg0->unk84->unkC.b.unk0 + arg0->unk80->unkC.b.unk0) >> 1;
    arg0->unk0[3].unkC.b.unk1 = (arg0->unk84->unkC.b.unk1 + arg0->unk80->unkC.b.unk1) >> 1;
    arg0->unk0[3].unkC.b.unk2 = (arg0->unk84->unkC.b.unk2 + arg0->unk80->unkC.b.unk2) >> 1;
    arg0->unk0[3].unk8.b.unk0 = (arg0->unk84->unk8.b.unk0 + arg0->unk80->unk8.b.unk0) >> 1;
    arg0->unk0[3].unk8.b.unk1 = (arg0->unk84->unk8.b.unk1 + arg0->unk80->unk8.b.unk1) >> 1;
    gte_stsxy(&arg0->unk0[3].unk10);
    gte_stszotz(&arg0->unk0[3].unk14);
    arg0->unk0[4].unk0 = (arg0->unk0[0].unk0 + arg0->unk0[3].unk0) >> 1;
    arg0->unk0[4].unk2 = (arg0->unk0[0].unk2 + arg0->unk0[3].unk2) >> 1;
    arg0->unk0[4].unk4 = (arg0->unk0[0].unk4 + arg0->unk0[3].unk4) >> 1;
    gte_ldv0(&arg0->unk0[4]);
    gte_rtps();
    arg0->unk0[4].unkC.b.unk0 = (arg0->unk0[0].unkC.b.unk0 + arg0->unk0[3].unkC.b.unk0) >> 1;
    arg0->unk0[4].unkC.b.unk1 = (arg0->unk0[0].unkC.b.unk1 + arg0->unk0[3].unkC.b.unk1) >> 1;
    arg0->unk0[4].unkC.b.unk2 = (arg0->unk0[0].unkC.b.unk2 + arg0->unk0[3].unkC.b.unk2) >> 1;
    arg0->unk0[4].unk8.b.unk0 = (arg0->unk0[0].unk8.b.unk0 + arg0->unk0[3].unk8.b.unk0) >> 1;
    arg0->unk0[4].unk8.b.unk1 = (arg0->unk0[0].unk8.b.unk1 + arg0->unk0[3].unk8.b.unk1) >> 1;
    gte_stsxy(&arg0->unk0[4].unk10);
    gte_stszotz(&arg0->unk0[4].unk14);
    arg1--;
    child = arg0 + 1;
    child->unk78 = &arg0->unk0[0];
    child->unk7C = &arg0->unk0[4];
    child->unk80 = arg0->unk78;
    child->unk84 = &arg0->unk0[1];
    func_8006C814(child, arg1);
    child->unk7C = arg0->unk7C;
    child->unk80 = &arg0->unk0[4];
    child->unk84 = &arg0->unk0[2];
    func_8006C814(child, arg1);
    child->unk78 = &arg0->unk0[3];
    child->unk7C = &arg0->unk0[4];
    child->unk80 = arg0->unk84;
    func_8006C814(child, arg1);
    child->unk7C = arg0->unk80;
    child->unk80 = &arg0->unk0[4];
    child->unk84 = &arg0->unk0[1];
    func_8006C814(child, arg1);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006D0C0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006D39C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006D45C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006D4BC);

s32 func_8006D534(s32 arg0, s32 arg1, s32 arg2, Sub8004DE88 *arg3) {
    s32 ret;

    ret = func_80073598(arg0, arg1, arg2, arg3);
    if (ret == 0) {
        ret = func_80074728(arg0, arg1, arg2, arg3);
        if (ret == 0) {
            return 0;
        }
    }
    do {
        arg3->unk6 = 1;
    } while (0);
    return ret;
}

void func_8006D5BC(Elem80074728 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (func_800733D8(arg0, arg1, arg2, arg3, 0) == 0) {
        func_80074620(arg0, arg1, arg2, arg3, 0);
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006D628);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006D8F8);

void func_8006D9DC(void) {
    Elem8006D9DC *p;
    s32 i;

    i = 0x400;
    p = D_80091228;
    do {
        i--;
        p->unk0 += (s32)D_80091228;
        p->unk4 = (Obj8006D9DC *)((s32)p->unk4 + (s32)D_80091228);
        p++;
    } while (i != 0);
}

void func_8006DA20(void) {
    func_80015538(D_801EA790[0], 0, 0x400);
    func_80015538(D_801EA790[1], 0, 0x400);
    do { } while (0);
    func_80015538(D_801EA790[2], 0, 0x400);
}

void func_8006DA78(void) {
    func_8006DA20();
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006DA98);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006DB90);

void func_8006DBE4(u32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 n;
    u32 mask;

    n = arg2 - arg1;
    arg0 = arg0 + arg1 * 16 + ((u32)arg3 >> 5);
    mask = ~(1 << (arg3 & 0x1F));
    while (n-- >= 0) {
        *arg0 &= mask;
        arg0 += 16;
    }
}

void func_8006DC3C(Sub8004DE88 *arg0, s32 arg1) {
    func_8006DB90(D_801EA790[0], (arg0[0].unk0 >> 10) + 0x20, (arg0[1].unk0 >> 10) + 0x20, arg1);
    func_8006DB90(D_801EA790[1], (arg0[0].unk2 >> 10) + 0x20, (arg0[1].unk2 >> 10) + 0x20, arg1);
    func_8006DB90(D_801EA790[2], (arg0[0].unk4 >> 10) + 0x20, (arg0[1].unk4 >> 10) + 0x20, arg1);
}

void func_8006DD00(Sub8004DE88 *arg0, s32 arg1) {
    func_8006DBE4(D_801EA790[0], (arg0[0].unk0 >> 10) + 0x20, (arg0[1].unk0 >> 10) + 0x20, arg1);
    func_8006DBE4(D_801EA790[1], (arg0[0].unk2 >> 10) + 0x20, (arg0[1].unk2 >> 10) + 0x20, arg1);
    func_8006DBE4(D_801EA790[2], (arg0[0].unk4 >> 10) + 0x20, (arg0[1].unk4 >> 10) + 0x20, arg1);
}

void func_8006DDC4(Sub8004DE88 *arg0, u32 *arg1) {
    u32 *x;
    u32 *y;
    u32 *z;
    s32 i;

    i = D_801E8B70;
    x = &D_801EAF90[0][(arg0->unk0 >> 10) * 16];
    y = &D_801EAF90[1][(arg0->unk2 >> 10) * 16];
    z = &D_801EAF90[2][(arg0->unk4 >> 10) * 16];
    do {
        *arg1++ = *x++ & *y++ & *z++;
    } while (--i != 0);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006DE54);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006DEF4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006DFCC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006E0C0);

void func_8006E308(u32 *arg0, s32 arg1) {
    arg0[arg1 >> 5] |= 1 << (arg1 & 0x1F);
}

void func_8006E330(u32 *arg0, s32 arg1) {
    arg0[arg1 >> 5] &= ~(1 << (arg1 & 0x1F));
}

s32 func_8006E35C(s32 *arg0, s32 arg1) {
    return arg0[arg1 >> 5] & (1 << (arg1 & 0x1F));
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006E380);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006E6B4);

void func_8006E718(s32 *arg0, Elem800730DC *arg1) {
    s32 n;
    u16 *p;
    s32 idx;

    if (arg1 != NULL) {
        idx = arg1 - D_801D0B68;
        p = arg1->unk28;
        n = arg1->unk26;
        do {
            n--;
            arg0[idx >> 5] |= 1 << (idx & 0x1F);
            idx = *p++ & 0x1FF;
        } while (n != -1);
    }
}

void func_8006E780(s32 *arg0, Elem800730DC *arg1) {
    s32 *p;
    s32 i;

    p = arg0;
    i = 0x10;
    do {
        *p = 0;
        i--;
        p++;
    } while (i != 0);
    func_8006E718(arg0, arg1);
}

void func_8006E7B8(s32 *arg0) {
    s32 i;

    i = 0x10;
    do {
        *arg0 = 0;
        i--;
        arg0++;
    } while (i != 0);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006E7D4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006E8D4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006EB10);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006EE8C);

s32 func_8006EFFC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0 < arg2) {
        return !(arg1 < arg2);
    }
    if (arg2 < arg0) {
        return !(arg3 < arg0);
    }
    return 1;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006F028);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006F04C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006F08C);

void func_8006F234(Obj8006F234 *arg0) {
    s32 temp;

    func_8006F04C(&arg0->unkE4, arg0->unk9E, &arg0->unkD0);
    temp = (-(arg0->unkD0 + arg0->unkA4) >> 10) - 0x10;
    arg0->unk50 = (u32)(arg0->unk9E[0] * temp) >> 14;
    arg0->unk52 = (u32)(arg0->unk9E[1] * temp) >> 14;
    arg0->unk54 = (u32)(arg0->unk9E[2] * temp) >> 14;
    if (arg0->unk60 != 0) {
        arg0->unk50 += arg0->unk58;
        arg0->unk52 += arg0->unk5A;
        arg0->unk54 += arg0->unk5C;
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006F300);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006F3E0);

s32 func_8006F4D8(Sub8006F4D8 *arg0, s32 arg1, s32 arg2) {
    Obj8006F4D8 *scr = (Obj8006F4D8 *)0x1F800000;

    func_8006DEF4(arg0, scr->unk0);
    scr->unk48 = D_801E8B74;
    scr->unk4C = arg2;
    scr->unk84 = D_80091228;
    for (scr->unk88 = func_8006FB6C(scr->unk0, D_801E8B70); scr->unk88 != -1; scr->unk88 = func_8006FB6C(NULL)) {
        scr->unk90 = &D_801D0B68[scr->unk88];
        if (func_8006EFFC(arg0->unk0, arg0->unk8, scr->unk90->unk18, scr->unk90->unk20)
            && func_8006EFFC(arg0->unk2, arg0->unkA, scr->unk90->unk1A, scr->unk90->unk22)
            && func_8006EFFC(arg0->unk4, arg0->unkC, scr->unk90->unk1C, scr->unk90->unk24)) {
            if (arg1 == 0) {
                scr->unk60 = NULL;
            } else {
                scr->unk60 = scr->unk58;
            }
            func_8006F83C(scr, arg0, arg1);
            scr->unk94 = &scr->unk84[scr->unk90->unk1E];
            scr->unk98 = scr->unk94->unk4;
            scr->unkBC = func_8006F7A0(scr->unk98->unk4, scr->unk64.unk0 - scr->unk74.unk0,
                                       scr->unk6C.unk0 - scr->unk74.unk0, scr->unk7C.unk0 - scr->unk74.unk0);
            scr->unkBC &= func_8006F7A0(scr->unk98->unk24, scr->unk64.unk2 - scr->unk74.unk2,
                                        scr->unk6C.unk2 - scr->unk74.unk2, scr->unk7C.unk2 - scr->unk74.unk2);
            scr->unkBC &= func_8006F7A0(scr->unk98->unk44, scr->unk64.unk4 - scr->unk74.unk4,
                                        scr->unk6C.unk4 - scr->unk74.unk4, scr->unk7C.unk4 - scr->unk74.unk4);
            if (scr->unkBC != 0) {
                scr->unkB0 = scr->unk98->unk64;
                scr->unkB4 = &scr->unkB0[scr->unk98->unk0];
                scr->unk8C = (scr->unk98->unk0 >> 5) + 1;
                func_8006F08C(scr);
            }
        }
    }
    *scr->unk48 = NULL;
    return scr->unk48 != D_801E8B74;
}

s32 func_8006F7A0(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 result;
    s32 n;

    if (arg1 < 0) {
        arg1 = 0;
    } else if (arg1 == arg3) {
        arg1--;
    }
    if (arg2 >= arg3) {
        arg2 = arg3 - 1;
    }
    if (arg3 == 0) {
        return *arg0;
    }
    arg1 = (arg1 * 8) / arg3;
    arg2 = (arg2 * 8) / arg3;
    arg0 += arg1;
    result = *arg0++;
    n = arg2 - arg1;
    while (n-- > 0) {
        result |= *arg0++;
    }
    return result;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006F83C);

void func_8006FA30(Sub8004DE88 *arg0, Sub8004DE88 *arg1, s32 arg2) {
    switch (arg2) {
    case 0:
        arg1->unk0 = arg0->unk0;
        arg1->unk2 = arg0->unk2;
        arg1->unk4 = arg0->unk4;
        break;
    case 1:
        arg1->unk0 = -arg0->unk4;
        arg1->unk2 = arg0->unk2;
        arg1->unk4 = arg0->unk0;
        break;
    case 2:
        arg1->unk0 = -arg0->unk0;
        arg1->unk2 = arg0->unk2;
        arg1->unk4 = -arg0->unk4;
        break;
    case 3:
        arg1->unk0 = arg0->unk4;
        arg1->unk2 = arg0->unk2;
        arg1->unk4 = -arg0->unk0;
        break;
    }
}

void func_8006FB14(Obj8006FB14 *arg0) {
    s16 t;

    if (arg0->unk0 > arg0->unk8) {
        t = arg0->unk0;
        arg0->unk0 = arg0->unk8;
        arg0->unk8 = t;
    }
    if (arg0->unk4 > arg0->unkC) {
        t = arg0->unk4;
        arg0->unk4 = arg0->unkC;
        arg0->unkC = t;
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006FB6C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006FC88);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006FD6C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8006FF34);

s32 func_8006FF58(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 a;
    s32 b;
    s32 c;
    s32 ret;

    func_8006FF34(arg1, arg2, arg0, &a);
    func_8006FF34(arg2, arg3, arg0, &b);
    func_8006FF34(arg3, arg1, arg0, &c);
    ret = 0;
    if ((a >= 0 && b >= 0 && c >= 0) || (a <= 0 && b <= 0 && c <= 0)) {
        ret = 1;
    }
    return ret;
}

s32 func_8007003C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 ret;

    func_8006FF34(arg1, arg2, arg0, &a);
    func_8006FF34(arg2, arg4, arg0, &b);
    func_8006FF34(arg4, arg3, arg0, &c);
    func_8006FF34(arg3, arg1, arg0, &d);
    ret = 0;
    if ((a >= 0 && b >= 0 && c >= 0 && d >= 0) || (a <= 0 && b <= 0 && c <= 0 && d <= 0)) {
        ret = 1;
    }
    return ret;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80070168);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800705D8);

s32 func_80070A00(Obj80070A00 *arg0, u32 arg1, u32 arg2, u32 arg3) {
    if (arg1 < 8 && arg2 < 8 && arg3 < 8) {
        return arg0->unk4[arg1] & arg0->unk24[arg2] & arg0->unk44[arg3];
    }
    return 0;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80070A58);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80070F30);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80071014);

void func_80071188(Obj80071188 *arg0, s16 *arg1, s16 *arg2) {
    s32 base;
    Elem80071188 *e;

    base = *arg0->unk8;
    e = (Elem80071188 *)((arg0->unk0->unkC[(arg0->unk0->unk0 >> 6) & 3] & 0x7FF8) + base);
    *arg1 = arg0->unk4->unk12 + ((s16)e->unk2 >> 2);
    e = (Elem80071188 *)((arg0->unk0->unkC[(arg0->unk0->unk0 >> 12) & 3] & 0x7FF8) + base);
    *arg2 = arg0->unk4->unk12 + ((s16)e->unk2 >> 2);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80071220);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80071244);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800714C4);

void func_80071610(Obj80071610 *arg0) {
    Sub8004DE88 *base;

    base = arg0->unk94->unk0;
    arg0->unkC0[0] = &base[arg0->unkA8_3];
    arg0->unkC0[1] = &base[arg0->unkA8_19];
    arg0->unkC0[2] = &base[arg0->unkAC_3];
    if (arg0->unk9C & 1) {
        arg0->unkC0[3] = &base[arg0->unkAC_19];
    }
    if (func_8006EFFC(arg0->unk5C, arg0->unk68, arg0->unkC0[(arg0->unk9C >> 4) & 3]->unk0, arg0->unkC0[(arg0->unk9C >> 10) & 3]->unk0) != 0
        && func_8006EFFC(arg0->unk60, arg0->unk6C, arg0->unkC0[(arg0->unk9C >> 6) & 3]->unk2, arg0->unkC0[(arg0->unk9C >> 12) & 3]->unk2) != 0
        && func_8006EFFC(arg0->unk64, arg0->unk70, arg0->unkC0[(arg0->unk9C >> 8) & 3]->unk4, arg0->unkC0[(arg0->unk9C >> 14) & 3]->unk4) != 0) {
        func_800714C4(base, arg0);
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80071768);

void func_800718B4(Obj800718B4 *arg0) {
    s32 a;
    s32 b;

    a = arg0->unk0;
    b = arg0->unkC;
    if (b < a) {
        arg0->unk0 = b;
        arg0->unkC = (s16)a;
    }
    a = arg0->unk8;
    b = arg0->unk14;
    if (b < a) {
        arg0->unk8 = b;
        arg0->unk14 = (s16)a;
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80071904);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80071ADC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80071D4C);

Elem80071DC4 *func_80071DC4(s32 arg0, s32 arg1) {
    Elem80071DC4 *p;
    Elem80071DC4 *q;

    if (func_80071ADC(arg0, 1) != 0) {
        p = func_80071D4C(arg1);
        q = p;
        return q != NULL ? p : NULL;
    }
    return NULL;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80071E14);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80072120);

void func_80072180(Obj80072180 *arg0) {
    Obj80072180 *parent = arg0->unk2C;

    arg0->unk10.unk0 += parent->unk8.unk0;
    arg0->unk10.unk2 += parent->unk8.unk2;
    arg0->unk10.unk4 += parent->unk8.unk4;
    arg0->unk0.unk0 += parent->unk8.unk0;
    arg0->unk0.unk2 += parent->unk8.unk2;
    arg0->unk0.unk4 += parent->unk8.unk4;
    arg0->unk8.unk0 += parent->unk8.unk0;
    arg0->unk8.unk2 += parent->unk8.unk2;
    arg0->unk8.unk4 += parent->unk8.unk4;
    arg0->unk18.unk0 += parent->unk8.unk0;
    arg0->unk18.unk2 += parent->unk8.unk2;
    arg0->unk18.unk4 += parent->unk8.unk4;
    arg0->unk20.unk0 += parent->unk8.unk0;
    arg0->unk20.unk2 += parent->unk8.unk2;
    arg0->unk20.unk4 += parent->unk8.unk4;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800722B4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80072548);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80072A00);

void func_800730DC(void) {
    Elem800730DC *p;
    s32 i;

    p = D_801D0B68;
    i = D_801E8B6C;
    do {
        p->unk2C = NULL;
        i--;
        p++;
    } while (i != 0);
}

void func_80073104(void) {
    Elem800730DC *p;
    s32 i;

    i = D_801E8B6C;
    p = D_801D0B68;
    do {
        if (p->unk2C != NULL && p->unk2C->unk0 != NULL) {
            p->unk2C->unk0(p);
        }
        i--;
        p++;
    } while (i != 0);
}

void func_80073170(void) {
    Obj80073170 *obj;
    Elem800736AC *p;
    Elem800736AC **list;
    u16 *count;
    s32 i;

    obj = (Obj80073170 *)D_80198B08;
    p = obj->unk0;
    list = obj->unk6800;
    i = 0x200;
    D_8019F508 = 0;
    do {
        if (p->unk6 != -1 && !(p->unk1C & 0x4000)) {
            count = &((Obj80073170 *)D_80198B08)->unk6A00;
            (*count)++;
            *list++ = p;
        }
        p++;
    } while (--i != 0);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800731E8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007334C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800733D8);

s32 func_80073598(s32 arg0, s32 arg1, s32 arg2, Sub8004DE88 *arg3) {
    Obj80073598 **list;
    Obj80073598 *p;
    s32 i;

    list = D_8019F308;
    i = (s16)D_8019F508;
    for (i--; i != -1; i--) {
        p = *list++;
        if ((s32)p != arg0 && func_80012E5C(arg1, arg2, arg3, &p->unk0, p->unk1E, p->unk20) != 0) {
            return (s32)p;
        }
    }
    return 0;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80073674);

void func_800736AC(void) {
    Elem800736AC *p;
    s32 i;

    i = 0x200;
    p = D_80198B08;
    do {
        if (p->unk14 != NULL && p->unk14->unk0 != NULL) {
            p->unk14->unk0(p);
        }
        i--;
        p++;
    } while (i != 0);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80073714);

u16 func_80073904(void) {
    return func_8001628C();
}

s32 func_80073924(s32 arg0) {
    return (func_8001628C() & 0xFFFF) - (arg0 & 0xFFFF);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80073958);

void func_8007398C(s32 arg0) {
    D_801A5DCC = arg0;
}

void func_8007399C(s32 arg0) {
    D_801A5DD0 = arg0;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800739AC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80073AD8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80073B74);

void func_80073BC8(void) {
    func_80015538(D_801A26B8, 0, 0x5C0);
    D_801A5DB8 = D_801A26B8;
    D_801A5DB8 = D_801A5DB8 + 0x5C0;
    D_801A5DC4 = 0;
    func_8007398C(0);
    D_801A5DC8 = 0;
    func_8007399C(0);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80073C2C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80073F38);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80074280);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800742DC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800743A0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007449C);

void func_800745D0(Obj8007618C *arg0, s32 arg1, s32 arg2, s32 arg3, volatile s32 arg4, s32 arg5) {
    func_80055A24(arg0->unk60, arg0->unk8.unk6 + 0x80, &arg0->unk8, &arg0->unk10, arg1, arg2, arg3, arg4, &arg5);
}

Elem80074728 *func_80074620(Elem80074728 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    Elem80074728 *p;
    Elem80074728 *q;
    Elem80074728 *found;
    s32 i;

    p = (Elem80074728 *)D_801A26B8;
    found = NULL;
    i = 0x10;
    q = p;
    do {
        if (arg0 != p && p->unk0 != 0 && !(q->unk32 & 4)
            && func_80012794(arg1, arg2, arg3, arg4, &p->unk8, q->unk6A, q->unk6C) != 0) {
            found = q;
            if (arg4 == 0) {
                return p;
            }
        }
        q++;
        p++;
    } while (--i != 0);
    return found;
}

s32 func_80074728(s32 arg0, s32 arg1, s32 arg2, Sub8004DE88 *arg3) {
    Elem80074728 *p;
    s32 i;

    p = (Elem80074728 *)D_801A26B8;
    for (i = 0x10; i != 0; i--) {
        if (p->unk0 != 0 && (s32)p != arg0 && !(p->unk32 & 4)
            && func_80012E5C(arg1, arg2, arg3, &p->unk8, p->unk6A, p->unk6C) != 0) {
            return (s32)p;
        }
        p++;
    }
    return 0;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80074800);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800749A0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80074CA0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80074FA4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80075030);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80075108);

extern u8 D_80041214;
extern u8 D_80041215;

s32 func_80075280(Obj80075280 *p) {
    s32 v = p->val;

    switch (p->flags & 0x30) {
    case 0x10:
        v = (v * D_80041214) >> 6;
        break;
    case 0x20:
        v = (v * D_80041215) >> 6;
        break;
    }
    return (v * 2) / 3;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800752F4);

void func_80075350(Obj8007618C *arg0, Obj80075280 *arg1, s32 arg2, s32 arg3) {
    s32 sub;
    s32 rem;

    if (arg0 == (Obj8007618C *)D_801A26B8) {
        sub = func_80075280(arg1) * 2;
    } else {
        sub = func_800752F4(arg0->unk0->unk14, arg1);
    }
    rem = arg0->unk160 - sub;
    if (rem < 0) {
        arg0->unk160 = 0;
    } else {
        arg0->unk160 = rem;
    }
    if (arg0->unk5C != NULL) {
        arg0->unk5C(arg0, arg1, arg2, arg3, sub);
    }
}

void func_80075418(Obj8007618C *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 val;

    val = arg0->unk40;
    if (val == 0xFF) {
        val = arg3;
    }
    if (*arg1 & 8) {
        arg2 >>= 3;
    }
    if (arg2 != 0) {
        if (arg4 == -1) {
            if (arg3 < 0x100) {
                val -= (((arg2 * (0x100 - arg3)) >> 8) + 7) >> 3;
            }
        } else {
            val -= (arg2 * 16) / ((arg0->unk162 * arg4) >> 8);
        }
    }
    if (val <= 0) {
        arg0->unk40 = 0;
    } else if (val >= 0xFE) {
        arg0->unk40 = 0xFE;
    } else {
        arg0->unk40 = val;
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800754D0);

s32 func_80075750(Obj80075750 *arg0, s32 arg1) {
    s32 v;

    v = (arg1 * 50) / arg0->unk164;
    if (v <= 0) {
        v = 1;
    } else if (v >= 0x1F) {
        v = 0x1E;
    }
    return v;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80075798);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800759A4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800759DC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80075A18);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80075A54);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80075A90);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80075ACC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80075B08);

void func_80075B3C(Obj8007618C *arg0) {
    s32 unused[2];

    if (arg0->unkCC.unk0 > 0) {
        if (arg0->unkCC.unk0 > 0x100) {
            arg0->unkCC.unk0 -= 0x100;
        } else {
            arg0->unkCC.unk0 = 0;
        }
    } else if (arg0->unkCC.unk0 < -0x100) {
        arg0->unkCC.unk0 += 0x100;
    } else {
        arg0->unkCC.unk0 = 0;
    }
    if (arg0->unkCC.unk4 > 0) {
        if (arg0->unkCC.unk4 > 0x100) {
            arg0->unkCC.unk4 -= 0x100;
        } else {
            arg0->unkCC.unk4 = 0;
        }
    } else if (arg0->unkCC.unk4 < -0x100) {
        arg0->unkCC.unk4 += 0x100;
    } else {
        arg0->unkCC.unk4 = 0;
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80075BC0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80075EB4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80075FC0);

void func_80076014(Obj8007618C *arg0) {
    func_8004EC4C(&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_80076078(Obj8007618C *arg0) {
    func_8004ECA8(&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_800760DC(Obj8007618C *arg0) {
    func_80075FC0(arg0);
    if (func_8004F024(&arg0->unk64, &arg0->unk8) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_80076134(Obj8007618C *arg0) {
    if (func_8004F0D4(&arg0->unk64, &arg0->unk8, &arg0->unk10) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_8007618C(Obj8007618C *arg0) {
    func_80075FC0(arg0);
    if (func_8004F080(&arg0->unk64, &arg0->unk8) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_800761E4(Obj8007618C *arg0) {
    func_80075FC0(arg0);
    func_80075B3C(arg0);
    if (func_8004F080(&arg0->unk64, &arg0->unk8) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_80076244(Obj8007618C *arg0) {
    func_80075FC0(arg0);
    func_8004EC4C(&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_800762AC(Obj8007618C *arg0) {
    func_8004ECA8(&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
    arg0->unkCC.unk0 += arg0->unkCC.unk2;
    if (arg0->unkCC.unk0 > 0x40) {
        arg0->unkCC.unk0 = 0x40;
    }
    arg0->unk10.unk2 += arg0->unkCC.unk0;
}

void func_80076350(Obj8007618C *arg0) {
    func_8004ECA8(&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
    arg0->unkCC.unk0 += arg0->unkCC.unk2;
    if (arg0->unkCC.unk0 < -0x40) {
        arg0->unkCC.unk0 = -0x40;
    }
    arg0->unk10.unk2 += arg0->unkCC.unk0;
}

void func_800763F4(Obj8007618C *arg0) {
    func_8004ECA8(&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
    arg0->unkCC.unk0 += arg0->unkCC.unk2;
    if (arg0->unkCC.unk2 >= 0) {
        if (arg0->unkCC.unk0 > arg0->unkCC.unk4) {
            arg0->unkCC.unk0 = arg0->unkCC.unk4;
        }
    } else {
        if (arg0->unkCC.unk0 < arg0->unkCC.unk4) {
            arg0->unkCC.unk0 = arg0->unkCC.unk4;
        }
    }
    arg0->unk10.unk2 += arg0->unkCC.unk0;
}

void func_800764C4(Obj8007618C *arg0) {
    func_80075FC0(arg0);

    if (arg0->unkCC.unk6 == 0) {
        arg0->unk36 &= 0xFFEF;
    } else {
        arg0->unkCC.unk6--;
    }
    if (func_8004F080(&arg0->unk64, &arg0->unk8) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_80076548(Obj8007618C *arg0, s32 arg1, s32 arg2) {
    arg0->unk3D = arg1;
    arg0->unk4C = arg2;
    arg0->unkDC = arg0->unkEC;
}

void func_80076578(Obj8007618C *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk64.unk30.unk0 = 0;
    arg0->unk64.unk28.unk0 = 0;
    arg0->unk64.unk20.unk0 = 0;
    func_80076548(arg0, 0, arg3);
    func_8004E98C(&arg0->unk64, arg1, arg2, 0);
    arg0->unk64.unk2 = 2;
}

void func_800765E8(Obj8007618C *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk64.unk30.unk0 = 0;
    arg0->unk64.unk28.unk0 = 0;
    arg0->unk64.unk20.unk0 = 0;
    func_80076548(arg0, 1, arg3);
    func_8004E98C(&arg0->unk64, arg1, arg2, 0);
    arg0->unk64.unk2 = 2;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80076658);

void func_800766E0(Obj8007618C *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    Sub8004DE88 sp18;
    Sub8004DE88 sp20;
    s32 temp;

    if (arg0->unk3D != 0x10) {
        arg0->unk1C = 0;
        arg0->unk1A = 0;
        arg0->unk18 = 0;
    }
    func_80076548(arg0, 0x10, arg6);
    if (arg3 != 0) {
        func_8004EA98(&arg0->unk64, arg1, arg2, 0);
    } else {
        func_8004E98C(&arg0->unk64, arg1, arg2, 0);
        func_8004EA3C(&arg0->unk64, arg4, arg5);
    }
    temp = func_8004E22C(&arg0->unk64, &arg0->unk10, &arg0->unk10, &sp18, &sp20);
    func_80075108(arg0, &sp18);
    func_8004DEAC(&arg0->unk64, temp, &sp18, &sp20);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800767D8);

void func_80076A84(Obj8007618C *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    Sub8004DE88 sp18;
    Sub8004DE88 sp20;
    Sub8004DE88 sp28;
    s32 temp;
    s32 result;

    if (arg0->unk3D != 0x10) {
        arg0->unk1C = 0;
        arg0->unk1A = 0;
        arg0->unk18 = 0;
    }
    func_80076548(arg0, 0x10, arg5);
    func_8004E98C(&arg0->unk64, arg1, arg2, 0);
    func_8004EA3C(&arg0->unk64, arg3, arg4);
    temp = func_8004E22C(&arg0->unk64, &arg0->unk10, &arg0->unk10, &sp18, &sp20);
    result = func_800749A0(arg0, &arg0->unk8, &sp28, &sp18);
    func_8004DEAC(&arg0->unk64, temp, &sp18, &sp20);
    if (result != 0) {
        if (arg0->unk54 != NULL) {
            arg0->unk54(arg0, 5, result);
        }
    }
}

void func_80076B94(Obj8007618C *arg0, s32 arg1, s32 arg2, s32 arg3) {
    Sub8004DE88 sp18;
    Sub8004DE88 sp20;

    if (arg0->unk3D != 0x10) {
        arg0->unk1C = 0;
        arg0->unk1A = 0;
        arg0->unk18 = 0;
    }
    func_80076548(arg0, 0x10, arg3);
    func_8004E98C(&arg0->unk64, arg1, arg2, 0);
    func_8004DEAC(&arg0->unk64, func_8004E22C(&arg0->unk64, &arg0->unk10, &arg0->unk10, &sp18, &sp20), &sp18, &sp20);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80076C48);

void func_80076D20(Obj8007618C *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0->unk3D != 0x12) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 6;
        arg0->unkCC.unk4 <<= 6;
    }
    if ((u16)(arg0->unkCC.unk0 + 1) < 3) {
        arg0->unkCC.unk0 = 0;
    } else {
        arg0->unkCC.unk0 -= arg0->unkCC.unk0 >> 1;
    }
    if ((u16)(arg0->unkCC.unk4 + 1) < 3) {
        arg0->unkCC.unk4 = 0;
    } else {
        arg0->unkCC.unk4 -= arg0->unkCC.unk4 >> 1;
    }
    func_80076548(arg0, 0x13, arg3);
    func_8004E98C(&arg0->unk64, arg1, arg2, 0);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80076E20);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80076F60);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80077170);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007732C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800775B8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800778B8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007790C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80077B78);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007816C);

s32 func_800781E8(Obj8007618C *arg0) {
    Sub8004DE88 sp10;
    Elem800781E8 *ret;

    if (arg0->unk48 == NULL) {
        return 0;
    }
    if (arg0->unk48->unk0 == NULL) {
        return 0;
    }
    ret = func_8007816C(arg0, arg0->unk48, &sp10);
    if (ret == NULL) {
        return 1;
    }
    return ret->unk4->unk6 == 0x30;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80078250);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007832C);

void func_800783F8(Obj8007618C *arg0, s32 arg1, s32 arg2, s32 arg3, u8 *arg4) {
    Sub8004DE88 pos;

    pos.unk0 = arg0->unk8.unk0;
    pos.unk4 = arg0->unk8.unk4;
    pos.unk2 = arg0->unk2E;
    func_80086C9C(0, &pos, 0x28, arg1, arg2, arg1 >> 2, arg2 >> 2, -arg1 >> 5, -arg2 >> 3, arg2 >> 2, arg3, arg4);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007847C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800784F8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80078598);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007863C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80078970);

Obj80078CFC *func_80078A2C(Sub80075350 *arg0) {
    Obj80078CFC *p;
    Obj80078CFC *q;
    s32 i;
    s32 j;

    p = D_801A2828;
    i = 0xF;
    do {
        i--;
        if (p->unk0 == NULL) {
            return p;
        }
        p++;
    } while (i != 0);
    if (arg0->unk14 & 0x8000) {
        q = D_801A2828;
        j = 0xF;
        do {
            if (q->unk0 != NULL && !(q->unk0->unk14 & 0x8000)) {
                func_80078D78((s32)q, (s32)q->unk0);
                return q;
            }
            j--;
            q++;
        } while (j != 0);
    }
    return NULL;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80078ADC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80078B14);

void func_80078CFC(u8 *arg0) {
    Obj80078CFC *obj;

    if (arg0 >= D_8019FB68) {
        obj = func_80078A2C((Sub80075350 *)arg0);
        if (obj != NULL) {
            func_80078B14(obj, arg0);
            D_8019F51C->unk20[obj->unkE](obj);
        }
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80078D78);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80078E1C);

void func_80078EC8(s32 arg0) {
    s32 temp;

    temp = func_80078ADC();
    if (temp != 0) {
        func_80078D78(temp, arg0);
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80078F00);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007909C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007922C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80079370);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80079524);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007959C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800796F4);

void func_80079728(void) {
    func_80082CAC(D_80041228[0], D_8004122A, D_8004122C, D_8004122C * D_8004122C, D_8004122E, D_8004124C, D_8004124D, (s32)&D_80041228[0x1C]);
}

void func_80079798(Obj8007618C *arg0, s32 arg1, s32 arg2) {
    s16 cur;
    u16 val;

    if (D_80040FA8 & D_80041234) {
        val = arg0->unk1A + arg1;
    } else if (D_80040FA8 & D_80041236) {
        val = arg0->unk1A - arg1;
    } else {
        cur = arg0->unk1A;
        if (cur > 0) {
            if (arg1 < cur) {
                arg0->unk1A = cur - arg1;
            } else {
                arg0->unk1A = 0;
            }
            goto clamp;
        }
        if (cur >= -arg1) {
            arg0->unk1A = 0;
            goto clamp;
        }
        val = cur + arg1;
    }
    arg0->unk1A = val;
clamp:
    if (arg0->unk1A > arg2) {
        arg0->unk1A = arg2;
    }
    if (arg0->unk1A < -arg2) {
        arg0->unk1A = -arg2;
    }
    arg0->unk10.unk0 += arg0->unk18;
    arg0->unk10.unk2 += arg0->unk1A;
}

void func_80079888(Obj8007618C *arg0) {
    func_8004EDAC(&arg0->unk64, &arg0->unk8);
    func_8004EC4C(&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_80079904(Obj8007618C *arg0) {
    func_8004EDAC(&arg0->unk64, &arg0->unk8);
    func_8004ECA8(&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80079980);

void func_80079AF8(Obj8007618C *arg0) {
    s32 unused[2];
    s16 x;
    s16 z;

    x = arg0->unkCC.unk0;
    if (x > 0) {
        if (D_80041201 < x) {
            arg0->unkCC.unk0 = x - D_80041201;
        } else {
            arg0->unkCC.unk0 = 0;
        }
    } else if (x < -D_80041201) {
        arg0->unkCC.unk0 = x + D_80041201;
    } else {
        arg0->unkCC.unk0 = 0;
    }
    z = arg0->unkCC.unk4;
    if (z > 0) {
        if (D_80041201 < z) {
            arg0->unkCC.unk4 = z - D_80041201;
        } else {
            arg0->unkCC.unk4 = 0;
        }
    } else if (z < -D_80041201) {
        arg0->unkCC.unk4 = z + D_80041201;
    } else {
        arg0->unkCC.unk4 = 0;
    }
}

void func_80079BB4(Obj8007618C *arg0) {
    if (func_8004F0D4(&arg0->unk64, &arg0->unk8, &arg0->unk10) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_80079C0C(Obj8007618C *arg0) {
    func_80079798(arg0, D_800411B4, D_800411B6);
    if (func_8004F080(&arg0->unk64, &arg0->unk8) == 0 && arg0->unk50 != NULL) {
        arg0->unk50(arg0, arg0->unk41);
    }
}

void func_80079C74(Obj8007618C *arg0) {
    func_80079798(arg0, D_800411B4, D_800411B6);
    if (func_8004F080(&arg0->unk64, &arg0->unk8) == 0 && arg0->unk50 != NULL) {
        arg0->unk50(arg0, arg0->unk41);
    }
}

void func_80079CDC(Obj8007618C *arg0) {
    s16 *y;

    if (--arg0->unk64.unk2 == 0 && arg0->unk50 != NULL) {
        arg0->unk50(arg0, arg0->unk41);
    }
    arg0->unkCC.unk0 += arg0->unkCC.unk2;
    if (arg0->unkCC.unk0 > D_800411B6) {
        arg0->unkCC.unk0 = D_800411B6;
    }
    y = &arg0->unk10.unk2;
    *y += arg0->unkCC.unk0;
    func_8004CC30(D_80040FEC[0]->unk11, D_801A5DC0->unk1200, &arg0->unk8, 0x28, 0x1F40, 0x2710, 0);
}

void func_80079DB0(Obj8007618C *arg0) {
    func_8004ECA8(&arg0->unk64);
    func_80079CDC(arg0);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80079DE4);

void func_80079EC0(Obj8007618C *arg0) {
    func_8004ECA8(&arg0->unk64);
    func_80079DE4(arg0);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80079EF4);

void func_8007A02C(Obj8007618C *arg0) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~D_8004125E;
}

void func_8007A058(Obj8007618C *arg0) {
    u16 *bits;
    s32 flags;

    bits = &arg0->unk148;
    flags = arg0->unk15C;
    *bits |= 0xF;
    if (flags & D_8004125E) {
        arg0->unk15C = flags & ~D_8004125E;
        arg0->unk14A = 60;
        arg0->unk14B = 40;
        arg0->unk14C = 20;
    } else {
        arg0->unk15C = flags | D_8004125E;
        arg0->unk14A = 180;
        arg0->unk14B = 160;
        arg0->unk14C = 140;
    }
}

void func_8007A0C4(Obj8007618C *arg0) {
    arg0->unk15C ^= 1 << D_8004124B;
}

void func_8007A0E4(Obj8007618C *arg0) {
    arg0->unk15C &= ~(1 << D_8004124B);
}

void func_8007A108(Obj8007618C *arg0, Obj8007A108 *arg1) {
    arg0->unk15C |= 1 << arg1->unk3;
}

void func_8007A124(Obj8007618C *arg0, Obj8007A108 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk3;
}

void func_8007A140(Obj8007618C *arg0, Obj8007A108 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk3);
}

void func_8007A160(Obj8007618C *arg0, Obj8007A108 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_8007A17C(Obj8007618C *arg0, Obj8007A108 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

void func_8007A19C(Obj8007618C *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CE44(1, &arg0->unk8, 0x50, -0x50);
        return;
    }
    func_8004CC30(0xB, D_801A5DC0->unk1000, &arg0->unk8, 0x50, 0x1F40, 0x2710, -0x30);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007A218);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007A334);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007A4F4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007A654);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007AB04);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007ACC0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007B160);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007B548);

void func_8007B868(Obj8007618C *arg0) {
    if (arg0->unkCC.unk6 == 0) {
        arg0->unk36 &= 0xFFEF;
    } else {
        arg0->unkCC.unk6--;
    }
    if (func_8004F080(&arg0->unk64, &arg0->unk8) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_8007B8E8(Obj8007618C *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DE88(&arg0->unk64, &arg0->unkCC);
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 <<= 7;
        arg0->unkCC.unk4 <<= 7;
    }
    arg0->unk15C &= D_8004125E;
    func_800775B8(arg0, arg1, 1, 0x200, &arg0->unkCC, func_8007B548);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

void func_8007B994(Obj8007618C *arg0, s32 arg1, s8 arg2) {
    Sub8004DE88 *rect;
    s32 val;

    rect = &arg0->unkCC;
    func_8004DE88(&arg0->unk64, rect);
    arg0->unkCC.unk0 <<= 6;
    arg0->unkCC.unk4 <<= 6;
    func_8007732C(arg0, arg1, 1, 0x200, rect, func_8007B160);
    val = arg2;
    arg0->unk3C = val;
    arg0->unk41 = arg2;
}

void func_8007BA2C(void) {
    Elem8007BA2C *p;
    s32 i;

    p = D_80041024;
    i = 8;
    do {
        p->unk0 = 0;
        p->unkC.unk2 = 0;
        p->unkC.unk0 = 0;
        p++;
    } while (--i != 0);
    D_80041020 = 0;
    D_80040FC4 = 0;
    D_80040FCE = 0;
    D_80040FCC = 0;
    D_80040FCA = 0;
    D_80040FC8 = D_800411C0;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007BA98);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007C02C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007C730);

void func_8007C790(Obj8007618C *arg0) {
    arg0->unk15C &= D_8004125E;
    func_8004ED5C(&arg0->unk64);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007C7C8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007CD74);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007D068);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007D2F8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007DB98);

void func_8007DF08(void) {
    Elem8007DF08 *e;

    e = &D_80040FB8.unk2C2[D_80040FB8.unk0];
    D_800411B8 = ((u32)(e->unk7 * 5) >> 5) + 1;
    D_800411BA = ((e->unk8 * 15) >> 5) + 1;
    D_800411BC = ((e->unk9 * 75) >> 5) + 1;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007DF98);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007EAE8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007EE44);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8007EF94);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008080C);

void func_80080D00(void) {
    func_8007DF98();
}

void func_80080D20(Obj8007618C *arg0) {
    arg0->unk50 = func_8007EF94;
    arg0->unk54 = func_8008080C;
    arg0->unk5C = func_8007DB98;
    arg0->unk58 = func_80080D00;
    if (arg0->unk54 != NULL) {
        ((void (*)())arg0->unk54)(arg0, 0);
    }
    if (arg0->unk50 != NULL) {
        arg0->unk50(arg0, arg0->unk41);
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80080DA0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80081088);

s32 func_80081318(Obj8007618C *arg0) {
    switch (arg0->unk64.unk0) {
    case 0:
    case 2:
    case 4:
    case 6:
    case 9:
    case 12:
    case 15:
    case 17:
    case 19:
        if (arg0->unkCC.unk0 != 0 || arg0->unkCC.unk4 != 0) {
            func_80081088(arg0, 0, 0, 0x100, &arg0->unkCC);
            return 0;
        }
        break;
    case 21:
        func_8004E98C(&arg0->unk64, 0, 1, 0x200);
        arg0->unk64.unk2 = 4;
        arg0->unkCC.unk2 = 0;
        arg0->unkCC.unk0 = 0;
        return 1;
    }
    return 1;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800813D8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008238C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80082654);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800826FC);

void func_80082BC4(Obj8007618C *arg0) {
    arg0->unk50 = func_800813D8;
    arg0->unk54 = func_8008238C;
    arg0->unk5C = func_8007DB98;
    arg0->unk58 = func_800826FC;
    arg0->unk108 = arg0->unk10C = 0;
    arg0->unk10A = 500;
    arg0->unk10E = 0;
    if (arg0->unk54 != NULL) {
        ((void (*)())arg0->unk54)(arg0, 0);
    }
    if (arg0->unk50 != NULL) {
        arg0->unk50(arg0, arg0->unk41);
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80082C58);

void func_80082CAC(u16 arg0, u16 arg1, u16 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    D_801987DA = arg0;
    D_801987DC = arg1;
    D_801987E0 = arg2;
    D_801987E4 = arg3;
    D_801987DE = arg4;
    D_801987D1 = arg5;
    D_801987D2 = arg6;
    D_801987D4 = arg7;
}

void func_80082D04(void) {
    Sub8004DE88 v;
    Obj80082D04 *p;

    p = D_80041020;
    if ((D_800411F4 & 0x20000) && D_80040FC4 != 0) {
        if (p != NULL && p->unk0 != 0) {
            v.unk0 = p->unk18 - (p->unk18 >> 2);
            v.unk2 = p->unk1A - (p->unk1A >> 2);
            D_801987FC[0] = func_800132CC(D_801987FC[0], v.unk0, 0x40);
            D_801987FE = func_800132CC(D_801987FE, v.unk2, 0x40);
            return;
        }
        v = D_80039C78;
    } else if (p != NULL && p->unk0 != 0 && (p->unk16 & 2)) {
        v.unk0 = p->unk18 >> 1;
        v.unk2 = p->unk1A >> 1;
    } else {
        v = D_80039C78;
    }
    D_801987FC[0] = func_800132CC(D_801987FC[0], v.unk0, 0x14);
    D_801987FE = func_800132CC(D_801987FE, v.unk2, 0x14);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80082E7C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80083038);

void func_800835A0(void) {
    Elem800835A0 *p;
    s32 i;

    p = D_801AEB3C;
    i = 0x100;
    D_8008EF4A = D_800906CC[D_8019F518];
    do {
        p->unk6 = -1;
        p++;
    } while (--i != 0);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800835E8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80083738);

void func_80083928(Obj80083928 *arg0) {
    u8 count;

    count = arg0->unk21;
    if ((count % arg0->unk1E) == 0) {
        func_80087798(arg0->unk8, arg0, arg0->unk18, arg0->unk1F, count == arg0->unk20);
    }
    arg0->unk21++;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008399C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80083A10);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80083D38);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80083FA0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800841F8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80084314);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80084A98);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80084B58);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80084DAC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80084EE0);

void func_800851A8(Obj800851A8 *arg0) {
    arg0->unk0 += arg0->unk1C;
    arg0->unk2 += arg0->unk1E;
    arg0->unk4 += arg0->unk20;
    arg0->unkB8 += arg0->unk24;
    arg0->unkBA += arg0->unk26;
    arg0->unkBC += arg0->unk28;
    arg0->unkC0 += arg0->unk18;
    arg0->unkC1 += arg0->unk19;
    arg0->unkC2 += arg0->unk1A;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008523C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80085328);

void func_80085394(Obj80085394 *arg0) {
    arg0->unkBA += arg0->unk18;
    arg0->unk18 += arg0->unk1A;
    if ((s16)arg0->unkBA <= arg0->unk1C) {
        arg0->unk12 = 0;
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800853D4);

void func_80085454(Obj80087A24 *arg0) {
    arg0->unkBE += arg0->unk1E;
    arg0->unkB8 += arg0->unk28;
    arg0->unkB9 += arg0->unk29;
    arg0->unkBA += arg0->unk2A;
    arg0->unk0 += arg0->unk18 >> 8;
    arg0->unk2 += arg0->unk1A >> 8;
    arg0->unk4 += arg0->unk1C >> 8;
    arg0->unk18 += arg0->unk20;
    arg0->unk1A += arg0->unk22;
    arg0->unk1C += arg0->unk24;
}

void func_80085510(Obj80085510 *arg0) {
    arg0->unk0 += arg0->unk18;
    arg0->unk2 += arg0->unk1A;
    arg0->unk4 += arg0->unk1C;
    arg0->unkC6 += arg0->unk20;
    arg0->unkC8 += arg0->unk22;
    arg0->unkCA += arg0->unk24;
    arg0->unk1A += 6;
}

void func_80085580(Obj80085580 *arg0) {
    u8 col[4];
    Elem80085580 *e;
    s32 t;
    s32 old;
    u16 pos;

    arg0->unkC4 += arg0->unk24;
    arg0->unkC6 += arg0->unk24;
    arg0->unkC8 += arg0->unk24;
    e = &D_80090364[arg0->unk2D];
    arg0->unkCC += e->unk26;
    arg0->unkCD += e->unk27;
    pos = arg0->unkC4;
    arg0->unkCE += e->unk28;
    arg0->unk24 += e->unk6;
    old = arg0->unk2A << 16;
    arg0->unk2A = pos;
    if (arg0->unk18 != 0) {
        arg0->unk20 = func_80083738(arg0, old >> 18, (s16)pos >> 2, (s16)e->unk8 >> 2,
                                    &arg0->unk18, e->unkC, e->unk10, arg0->unk20);
    }
    if (arg0->unk26 > 0) {
        if (e->unk1D != 0xFF) {
            t = (arg0->unk12 << 12) / arg0->unk2C;
            LoadAverageCol(e->unk1A, e->unk1E, t, 0x1000 - t, col);
            func_80056B54(0, arg0, 0, arg0->unkE, 0xFFFF, col, arg0->unk26);
        }
        arg0->unk26 += arg0->unk28;
        arg0->unk28 += e->unk18;
        func_8008589C(0, arg0, e->unk2C, arg0->unk26 >> 1, 0, arg0->unkE)->unk12 = 0;
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80085764);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800857EC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008582C);

Sub80085580 *func_8008589C(s32 arg0, Obj80085580 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    Obj80085394 *obj;

    obj = func_80089ECC(0);
    if (obj == &D_8008EC88) {
        return (Sub80085580 *)obj;
    }
    func_80085764(obj, arg0, (s32)arg1, arg5);
    obj->unk10 = 2;
    obj->unkB8 = arg2;
    obj->unkBA = arg3;
    obj->unkBC = arg4;
    obj->unk14 = NULL;
    return (Sub80085580 *)obj;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80085948);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80085A14);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80085AFC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80085E98);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800860EC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800862E8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80086448);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80086598);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800866F0);

Obj80086854 *func_80086854(s32 arg0, Obj800895B0 *arg1, s32 *arg2) {
    Obj80086854 *obj;
    Elem80086854 *e;
    Sub80086854 *kind;
    s32 n;

    if ((*arg2 & 7) == 7 || (obj = (Obj80086854 *)func_80089ECC(0)) == (Obj80086854 *)&D_8008EC88) {
        return (Obj80086854 *)&D_8008EC88;
    }
    if ((*arg2 & 0xF8000000) != 0xF8000000) {
        e = &D_80090128[(u32)*arg2 >> 27];
        func_8004CE44(e->unk0, (Sub8004DE88 *)arg1, e->unk4, e->unk6);
    }
    kind = &D_80090164[*arg2 & 7];
    func_80085764((Obj80085394 *)obj, arg0, (s32)arg1, -1);
    obj->unk10 = 2;
    obj->unkB8 = kind->unk0;
    obj->unk18 = *arg2 & 7;
    obj->unkBA = ((u32)*arg2 >> 17) & 0x3FF;
    obj->unkBC = 100;
    obj->unk1B = ((u32)*arg2 >> 10) & 7;
    obj->unk19 = ((u32)*arg2 >> 3) & 3;
    n = ((u32)*arg2 >> 13) & 0xF;
    obj->unk1C = n;
    obj->unk12 = (((u32)*arg2 >> 5) & 0x1F) + n - 1;
    if (obj->unk1C != 0) {
        obj->unk6 = 1;
    }
    obj->unk14 = func_8008523C;
    obj->unk1A = 0;
    return obj;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800869F0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80086AD8);

Obj80085394 *func_80086BC4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    Obj80085394 *obj;

    obj = func_80089ECC(0);
    if (obj != &D_8008EC88) {
        func_80085764(obj, arg0, arg1, -1);
        obj->unk10 = 2;
        obj->unkB8 = arg2;
        obj->unkBA = arg3;
        obj->unkBC = 0;
        obj->unk1C = arg6;
        obj->unk18 = arg4;
        obj->unk1A = arg5;
        obj->unk14 = func_80085394;
        func_80085394(obj);
    }
    return obj;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80086C9C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80086DDC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80086F20);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80087070);

s32 func_800871CC(s32 arg0) {
    return ((rand() * arg0) >> 15) - (arg0 >> 1);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80087208);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800872EC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800873F8);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80087798);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008792C);

void func_80087A24(Obj80087A24 *arg0) {
    arg0->unkBE += arg0->unk1E;
    arg0->unkB8 -= arg0->unk28;
    arg0->unkB9 -= arg0->unk29;
    arg0->unkBA -= arg0->unk2A;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80087A68);

void func_80087BC8(Obj800895B0 *arg0) {
    Sub8004DE88 old;
    Sub80087BC8 seg;
    Obj80087BC8 *hit;
    s32 ret;

    ret = func_8006D534(arg0->unk8, (s32)arg0, (s32)&arg0->unk1E, (Sub8004DE88 *)&arg0->unk24[1]);
    if (ret == 0) {
        old = *(Sub8004DE88 *)arg0->unk0;
        arg0->unk20 += 8;
        if (arg0->unk20 > 500) {
            arg0->unk20 = 500;
        }
        arg0->unk0[0] += arg0->unk1E;
        arg0->unk0[1] += arg0->unk20;
        arg0->unk0[2] += arg0->unk22;
        arg0->unkE = func_8006E6B4(arg0->unkE, arg0);
        seg.unk0 = old.unk0;
        seg.unk4 = old.unk2;
        seg.unk8 = old.unk4;
        seg.unkC = arg0->unk0[0];
        seg.unk10 = arg0->unk0[1];
        seg.unk14 = arg0->unk0[2];
        hit = func_800705D8(&seg, (Sub8004DE88 *)&arg0->unk24[1], 6);
        if (hit == NULL) {
            return;
        }
        if (hit->unk0->unkE & 1) {
            arg0->unk2C = 2;
        } else {
            arg0->unk2C = 1;
        }
        ret = hit->unk4;
    }

    func_800873F8(ret, (Sub8004DE88 *)&arg0->unk24[1], arg0->unk34 & 0x3FF, (arg0->unk34 >> 10) & 0xFF, (arg0->unk34 >> 18) & 0x1F, 1);
    func_800835E8(arg0->unk8, ret, &arg0->unk18, &arg0->unk1E, (Sub8004DE88 *)&arg0->unk24[1]);
    if (arg0->unk2C == 2) {
        func_80086C9C(0, (Sub8004DE88 *)&arg0->unk24[1], 0x28, 0xC0, 0x300, 0xC, 0x30, -1, -0x18, 0x30, 0x41, NULL);
    }
    if (arg0->unk2C == 1) {
        func_80086854(0, (Obj800895B0 *)&arg0->unk24[1], &arg0->unk30);
    }
    arg0->unk12 = 0;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80087DEC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800880BC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008840C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80088664);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800889B4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80088C80);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008915C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008938C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80089484);

void func_800895B0(Obj800895B0 *arg0) {
    if (--arg0->unk2A == 0) {
        arg0->unk12 = 0;
    }
    arg0->unkE = func_8006E6B4(arg0->unkE, arg0);
    func_80089484(arg0, arg0->unk24, arg0->unk1A, arg0->unk1C, arg0->unk1E, arg0->unk20);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80089628);

void func_80089758(Obj800895B0 *arg0) {
    s32 hit;
    u32 flags;
    u32 flags2;
    s16 *vel;
    Sub8004DE88 *pos;

    if (arg0->unk12 < 2) {
        arg0->unk12 = 0;
        return;
    }
    vel = &arg0->unk1E;
    pos = (Sub8004DE88 *)&arg0->unk24[1];
    hit = func_8006D534(arg0->unk8, (s32)arg0, (s32)vel, pos);
    if (hit != 0) {
        flags = arg0->unk34;
        func_800873F8(hit, pos, flags & 0x3FF, (flags >> 10) & 0xFF, (flags >> 18) & 0x1F, 1);
        func_800835E8(arg0->unk8, hit, &arg0->unk18, vel, pos);
        flags2 = arg0->unk34;
        func_800873F8(arg0->unk38, pos, flags2 & 0x3FF, (flags2 >> 10) & 0xFF, (flags2 >> 18) & 0x1F, 1);
        func_80086854(0, arg0, &arg0->unk30);
        arg0->unk12 = 0;
        return;
    }
    arg0->unk0[0] += arg0->unk1E;
    arg0->unk0[1] += arg0->unk20;
    arg0->unk0[2] += arg0->unk22;
    arg0->unkE = func_8006E6B4(arg0->unkE, arg0);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_800898A4);

void func_800899E8(Obj800895B0 *arg0) {
    arg0->unk0[0] += arg0->unk24[0];
    arg0->unk0[1] += arg0->unk24[1];
    arg0->unk0[2] += arg0->unk24[2];
    arg0->unkE = func_8006E6B4(arg0->unkE, arg0);
    arg0->unkB8.unk0 = ((0xC0 - arg0->unk2A) & 3) + 0x11C;
    if (--arg0->unk2A == 0) {
        arg0->unk12 = 0;
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80089A80);

void func_80089B44(Obj800895B0 *arg0) {
    if (arg0->unk2A < 15) {
        arg0->unkB8.unk0_u8[0] -= 8;
        arg0->unkB8.unk0_u8[1] -= 8;
        arg0->unkB8.unk0_u8[2] -= 8;
    } else if (arg0->unkB8.unk0_u8[0] < 0x70) {
        arg0->unkB8.unk0_u8[0] += 8;
        arg0->unkB8.unk0_u8[1] += 8;
        arg0->unkB8.unk0_u8[2] += 8;
    }
    arg0->unk0[0] += arg0->unk24[0];
    arg0->unk0[1] += arg0->unk24[1];
    arg0->unk0[2] += arg0->unk24[2];
    arg0->unkE = func_8006E6B4(arg0->unkE, arg0);
    if (--arg0->unk2A == 0) {
        arg0->unk12 = 0;
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80089C30);

void func_80089D34(Obj800895B0 *arg0) {
    arg0->unk0[0] += arg0->unk24[0];
    arg0->unk0[1] += arg0->unk24[1];
    arg0->unk0[2] += arg0->unk24[2];
    arg0->unkE = func_8006E6B4(arg0->unkE, arg0);
    arg0->unkBE += 2;
    arg0->unkB8.unk0_u8[0] -= 2;
    arg0->unkB8.unk0_u8[1] -= 4;
    arg0->unkB8.unk0_u8[2] -= 4;
    if (--arg0->unk2A == 0) {
        arg0->unk12 = 0;
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80089DE4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80089ECC);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80089F7C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_80089FE0);

void func_8008A048(s32 arg0) {
    if (D_8019F528 == 0 && arg0 != 0) {
        func_800529F0(0, 0, arg0);
    }
}

void func_8008A080(s32 arg0) {
    if (arg0 != 0) {
        D_80031A94[arg0]++;
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008A0B0);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008A344);

void func_8008A3B0(Obj8007618C *arg0, s32 arg1) {
    Elem800730DC *elem;

    if ((s32 *)arg0 >= D_801A26B8 && (s32 *)arg0 <= &D_801A26B8[0x564]) {
        if (arg0->unk54 != NULL) {
            ((void (*)())arg0->unk54)(arg0, arg1);
        }
    } else {
        elem = (Elem800730DC *)arg0;
        if (elem >= D_801D0B68 && elem <= &D_801D0B68[D_801E8B6C - 1]) {
            if (elem->unk2C != NULL && elem->unk2C->unk4 != NULL) {
                elem->unk2C->unk4(elem, arg1, 0);
            }
        }
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008A464);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008A5CC);

void func_8008A778(s16 arg0, s16 arg1, s8 arg2) {
    D_8019F52C = arg0;
    D_801D0B46 = arg1;
    D_801D0B44 = arg2;
}

void func_8008A798(s32 arg0) {
    s8 v;

    if (arg0 < 0x15) {
        if (arg0 == 0x14) {
            D_801AC8A3 = 0;
            return;
        }
        D_801AC8A3 = 2;
        v = (((0x14 - arg0) << 8) - 0xA) / 20;
        D_801AC8A2 = v;
        D_801AC8A1 = v;
        D_801AC8A0 = v;
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008A80C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008A8F8);

void func_8008A9FC(void) {
    u8 full;
    s8 level;

    if (D_8019F528 < 0x16) {
        D_801AC8A3 = 2;
        if (D_8019F528 < 3) {
            full = 0xFF;
            D_801AC8A2 = full;
            D_801AC8A1 = full;
            D_801AC8A0 = full;
            return;
        }
        level = ((0x16 - D_8019F528) << 8) / 20;
        D_801AC8A2 = level;
        D_801AC8A1 = level;
        D_801AC8A0 = level;
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008AA90);

void func_8008AB68(void) {
    D_8019F51C->unk0();
    if (D_8019F52A < 0x3D) {
        func_8008A8F8();
    }
    if (D_8019F528 != 0) {
        func_8008AA90();
    }
}

void func_8008ABD4(s8 arg0) {
    D_80090922 = arg0;
    D_80090921 = arg0;
    D_80090920 = arg0;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008ABF4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008ACE4);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008AD80);

void func_8008AE44(Obj8008AE44 *arg0) {
    if (arg0->unk1C[0] != 0) {
        func_8008AD80(0xCA, 0x38, arg0->unk0[0]);
    }
    if (arg0->unk1C[1] != 0) {
        func_8008AD80(0xCA, 0x48, arg0->unk0[1]);
    }
    if (arg0->unk1C[2] != 0) {
        func_8008AD80(0xCA, 0x60, arg0->unk0[2]);
    }
    if (arg0->unk1C[3] != 0) {
        func_8008AD80(0xCA, 0x70, arg0->unk0[3]);
    }
    if (arg0->unk1C[4] != 0) {
        func_8008AD80(0xCA, 0x80, arg0->unk0[4]);
    }
    if (arg0->unk1C[5] != 0) {
        func_8008AD80(0xCA, 0x98, arg0->unk0[5]);
    }
    if (arg0->unk1C[6] != 0) {
        func_8008AD80(0xCA, 0xC0, arg0->unk0[6]);
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008AF2C);

void func_8008B320(Obj8008B320 *arg0) {
    s32 sp18[2];
    s32 sp20[2];
    Sub8008B320 *sub;

    sub = arg0->unk4;
    func_8004DEAC(sub->unk64, func_8004E22C(sub->unk64, sub->unk10, sub->unk10, sp18, sp20), sp18, sp20);
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008B380);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008C154);

u16 func_8008C178(s32 arg0) {
    u8 unused[0x218];
    Sub8008C178b *hdr;
    Elem8008C178 *e;
    u16 *idx;
    Sub8008C178c *src;
    Sub8008C178 *sub;
    s32 n;

    D_801D0B50.unk0 = arg0;
    hdr = (Sub8008C178b *)((u8 *)D_801D0B64 + D_801D0B64[arg0]);
    D_801D0B51[0] = hdr->unk2;
    D_801D0B52 = hdr->unk4;
    D_801D0B5C[0] = (u8 *)D_801D0B58;
    D_801D0B60[0] = D_801D0B58;
    e = D_801D0B58;
    idx = hdr->unk6;
    n = D_801D0B51[0];
    for (n--; n != -1; n--) {
        D_801D0B50.unkC += 0x18;
        src = (Sub8008C178c *)((u8 *)D_801D0B50.unk14 + *idx++);
        e->unk0 = src->unk2;
        e->unkC = src->unk0;
        e->unk4 = 0;
        e->unk10 = 0;
        e++;
    }
    e = D_801D0B60[0];
    n = D_801D0B51[0];
    for (n--; n != -1; n--) {
        switch (e->unkC) {
        case 0:
            e->unk14 = func_8008C154(0x10);
            break;
        case 1:
            sub = func_8008C154(0x212);
            e->unk14 = sub;
            sub->unk10 = 0;
            break;
        case 2:
            e->unk14 = func_8008C154(0x28);
            break;
        }
        e++;
    }
    return hdr->unk0;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008C2FC);

void func_8008C6FC(Sub8004DE88 *arg0) {
    Obj8008C6FC *sc = (Obj8008C6FC *)0x1F800000;

    SetRotMatrix(&sc->unk0);
    SetTransMatrix(&sc->unk0);
    sc->unk128 = *arg0;
    sc->unk128.unk0 = (sc->unk128.unk0 >> 2) - sc->unk120.unk0;
    sc->unk128.unk2 = (sc->unk128.unk2 >> 2) - sc->unk120.unk2;
    sc->unk128.unk4 = (sc->unk128.unk4 >> 2) - sc->unk120.unk4;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008C7BC);

void func_8008C890(Sub8007BA2C *arg0, char *arg1, s32 arg2, s32 arg3) {
    Obj8008C6FC *sc = (Obj8008C6FC *)0x1F800000;

    arg0[1].unk0 = arg0[0].unk0 + 0x10;
    arg0[1].unk2 = arg0[0].unk2 - 0x10;
    D_801A5F24[0]->unk8 = (s32)sc->unk144;
    func_800610A4(arg0, &D_8008DA1C[arg2], 1, arg3, 0);
    func_80051150(arg0[1].unk0, arg0[1].unk2 - 3, arg3, 0x80, arg2, arg1);
    sc->unk144 = (u8 *)D_801A5F24[0]->unk8;
}

void func_8008C95C(Elem8008C95C *arg0, s32 *arg1, s32 arg2) {
    Obj8008C6FC *sc = (Obj8008C6FC *)0x1F800000;
    Obj8008C95C *p;

    p = (Obj8008C95C *)sc->unk144;
    sc->unk144 = (u8 *)(p + 1);
    p->unk8 = arg0[0].unk0.w;
    p->unk10 = arg0[1].unk0.w;
    p->unk18 = arg0[2].unk0.w;
    p->unk4 = arg1[0];
    p->unkC = arg1[1];
    p->unk14 = arg1[2];
    p->unk0.unk0_24 = 6;
    p->unk0.unk0_0 = sc->unk140[arg2].unk0_0;
    sc->unk140[arg2].unk0_0 = (u32)p;
}

void func_8008CA14(Sub8004DE88 *arg0, s32 arg1, char *arg2) {
    Obj8008C6FC *sc = (Obj8008C6FC *)0x1F800000;

    func_8008C6FC(arg0);
    RotTrans(&sc->unk128, sc->unk130, &sc->unk168);
    func_80013AFC(-arg1, &sc->unk148);
    MulRotMatrix(&sc->unk148);
    SetRotMatrix(&sc->unk148);
    SetTransMatrix((Sub8006F234 *)&sc->unk11C);
    func_8008C7BC(D_80090824, sc->unk170, 3);
    if ((s16)(sc->unk170[0].unk6 | sc->unk170[1].unk6 | sc->unk170[2].unk6) != 0xFF &&
        (sc->unk170[0].unk6 & sc->unk170[1].unk6 & sc->unk170[2].unk6) == 0) {
        func_8008C95C(sc->unk170, D_80090844, 0x10);
    }
    if (arg2 != NULL) {
        func_8008C7BC(&D_8009083C, sc->unk170, 1);
        if (sc->unk170[0].unk6 != 0xFF) {
            func_8008C890(&sc->unk170[0].unk0.h, arg2, 7, 8);
        }
    }
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008CB5C);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008CC88);

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008D288);

INCLUDE_RODATA("asm/USA/fdat202/nonmatchings/fdat202", D_8004C1AC);

void func_8008D3B0(void) {
    Sub8004DE88 rect;
    Obj8008D3B0 *sc;
    s16 *src;
    s16 *dst;
    s32 i;
    s32 ot;

    sc = (Obj8008D3B0 *)0x1F800000;
    func_8005715C();
    SetColorMatrix(&D_8009089C);
    SetBackColor(0x80, 0x80, 0x80);
    sc->unkA0 = D_8009087C;
    func_800135E8((Sub80056A54 *)&sc->unkA0, (Sub80056A54 *)&sc->unkC0, 1);
    func_800135E8((Sub80056A54 *)&sc->unkC0, (Sub80056A54 *)&sc->unkE0, 1);
    func_800135E8((Sub80056A54 *)&sc->unkE0, (Sub80056A54 *)&sc->unk100, 1);
    sc->unk120 = D_801A26C0;
    sc->unk120.unk0 >>= 2;
    sc->unk120.unk2 >>= 2;
    sc->unk120.unk4 >>= 2;
    func_80013BE8(&D_801ED798, &sc->unk0);
    sc->unk0.unk14 = D_801ED790;
    sc->unk0.unk18 = D_801ED792;
    sc->unk0.unk1C = D_801ED794;
    src = sc->unk0.unk0[0];
    dst = sc->unk20.unk0[0];
    i = 9;
    do {
        *dst++ = *src++ >> 4;
    } while (--i != 0);
    func_800135E8((Sub80056A54 *)&sc->unk20, (Sub80056A54 *)&sc->unk40, 1);
    func_800135E8((Sub80056A54 *)&sc->unk40, (Sub80056A54 *)&sc->unk60, 1);
    func_800135E8((Sub80056A54 *)&sc->unk60, (Sub80056A54 *)&sc->unk80, 1);
    ot = D_801A5F24[0]->unk8;
    rect = D_801A26C0;
    sc->unk140 = D_801A5F28.unk0;
    sc->unk144 = ot;
    rect.unk2 -= D_801A26E2[0] >> 1;
    func_8008CA14(&rect, D_801A26CA, D_8004C1AC);
    func_8008D288();
    if (!(D_80041218 & 2)) {
        func_8008CB5C();
    }
    func_8008CC88();
    D_801A5F24[0]->unk8 = sc->unk144;
    func_800571F0();
}

s32 func_8008D668(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 val;

    val = arg0 + arg1;
    if (arg1 >= 0) {
        if (arg3 < val) {
            val = arg3;
        }
    } else if (val < arg2) {
        val = arg2;
    }
    return val;
}

INCLUDE_ASM("asm/USA/fdat202/nonmatchings/fdat202", func_8008D69C);

void func_8008D8DC(void) {
    D_801ED794 = 0xFA0;
    D_801ED792 = 0;
    D_801ED790 = 0;
    D_801ED798 = 0x200;
    D_801ED79C = 0;
    D_801ED79A = 0;
}
