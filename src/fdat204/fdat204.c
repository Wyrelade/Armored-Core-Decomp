#include "common.h"
#include "fdat204.h"

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004BDB8);

void func_8004BDFC(void) {
    D_800893C4 = 0;
    func_800309A8(4, 0, func_8004BDB8);
}

void func_8004BE30(void) {
    func_800309A8(4, 0, NULL);
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004BE58);

void func_8004BF14(s32 arg0) {
    D_801AB684 = arg0;
    if (D_801AB688 == 0) {
        D_801AB688 = 0x5A;
    }
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004BF3C);

void func_8004C7C8(void) {
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

void func_8004C840(s32 arg0, u32 *arg1, u8 *arg2) {
    Elem8004C840 *vab;
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

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004C8EC);

void func_8004C9B4(s32 arg0) {
    s16 id;

    id = D_80041BD0[arg0].unk0;
    if (id != -1) {
        SsVabClose(id);
    }
}

void func_8004C9F0(void) {
    SsSetMVol(0, 0);
    func_80016DA8();
    SsEnd();
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004CA24);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004CB3C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004CCC0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004CDE8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004CECC);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004CF10);

void func_8004CF94(Elem8004CF0C *arg0) {
    s32 unused[2];
    s16 id;

    id = D_80041BD0[D_80042086[arg0->unk6].unk0].unk0;
    if (id != -1 && id != 0xFE) {
        arg0->unk0 = 0;
        SsUtKeyOffV(arg0->unk2);
    }
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004D004);

void func_8004D09C(s32 arg0, s32 arg1) {
    func_8004D278(arg0, 0, arg1, arg1, 0);
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004D0C8);

void func_8004D120(s32 arg0, s32 arg1, s32 arg2) {
    func_8004D278(arg0, arg1, arg2, arg2, 0);
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004D144);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004D278);

void func_8004D524(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 tone;
    s32 note;

    tone = arg3 + 0x3C0;
    note = tone >> 4;
    if (note < 0) {
        note = 0;
    } else if (note >= 0x80) {
        note = 0x7F;
    }
    SsUtKeyOnV(0x17, D_80041BD0[arg4].unk0, (arg0 >> 4) + 4, arg0 & 0xF, note, (tone & 0xF) * 8, arg1, arg2);
}

void func_8004D5C8(void) {
    Elem80016D64 *p;
    s32 i;
    u16 v;

    p = D_80041DE0;
    for (i = 22; i != -1; i--) {
        if (p->unk2 != -1 && (v = p->unk0) != 0) {
            if (!(v & 0x8000)) {
                func_8004CF94(p);
            } else {
                p->unk0 = v & 0x7FFF;
            }
        }
        p++;
    }
    func_8004CF10();
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004D658);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004D710);

void func_8004DA48(s16 arg0) {
    SsSetSerialVol(0, arg0, arg0);
}

void func_8004DA74(void) {
    u16 *cur;
    s32 f0;

    cur = &D_80041BBE;
    if (*cur != 0xFFFF && (D_80041BC2 & 0xFF) == 0 && D_80041BC4 - func_8001628C() < 0) {
        if (!(D_80041BC1 & 1)) {
            func_8004DC18(*cur);
        } else {
            f0 = 0xF0;
            D_80041BC2 = f0;
            func_8004DA48(0);
        }
    }
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004DB1C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004DC18);

void func_8004DDBC(void) {
    if (D_80041BC0 == 0) {
        func_8004DA48(0);
        return;
    }
    func_8004DA74();
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004DDF8);

void func_8004DF88(Obj8004DE88 *arg0, Sub8004DE88 *arg1) {
    arg1->unk0 = arg0->unk20.unk0;
    arg1->unk2 = arg0->unk28.unk0;
    arg1->unk4 = arg0->unk30.unk0;
}

void func_8004DFAC(Sub8007618C_fdat202 *arg0, s32 arg1, Sub8004DE88 *arg2, Sub8004DE88 *arg3) {
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

void func_8004E054(Sub8007618C_fdat202 *arg0, Sub8004DE88 *arg1, Sub8004DE88 *arg2) {
    arg0->unk3 = arg0->unk2;
    func_800131D0(&arg0->unk20, arg0->unk3, arg1->unk0);
    func_800131D0(&arg0->unk28, arg0->unk3, arg1->unk2);
    func_800131D0(&arg0->unk30, arg0->unk3, arg1->unk4);
    func_800131D0(&arg0->unk38, arg0->unk3, arg2->unk0);
    func_800131D0(&arg0->unk40, arg0->unk3, arg2->unk2);
    func_800131D0(&arg0->unk48, arg0->unk3, arg2->unk4);
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004E0F8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004E16C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004E32C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004EA8C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004EB3C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004EB98);

s32 func_8004EBD0(Sub8007618C_fdat202 *arg0) {
    return arg0->unkA == 0;
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004EBDC);

s32 func_8004ECF8(Obj8004EDA8 *arg0) {
    Sub8004EDA8 *data;

    if (arg0->unkC > 0) {
        data = arg0->unk1C;
        return arg0->unkA >= ((Elem8004EDA8 *)(data->unkC[arg0->unk0] + (s32)data))->unk10 - 1;
    }
    return arg0->unkA < 1;
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004ED4C);

void func_8004EDA8(Obj8004EDA8 *arg0) {
    s16 step;
    s16 cur;
    s16 cur2;
    Sub8004EDA8 *data;

    step = arg0->unkC;
    if (step > 0) {
        data = arg0->unk1C;
        cur = arg0->unkA;
        if (cur < ((Elem8004EDA8 *)(data->unkC[arg0->unk0] + (s32)data))->unk10 - 1) {
            arg0->unkA = cur + step;
        }
    } else {
        cur2 = arg0->unkA;
        if (cur2 > 0) {
            arg0->unkA = cur2 + step;
        }
    }
}

s32 func_8004EE1C(Sub8007618C_fdat202 *arg0) {
    Sub8004ECA8 *tbl;

    if (arg0->unkC > 0) {
        tbl = arg0->unk1C;
        return ((Elem8004ECA8 *)(tbl->unkC[arg0->unk0] + (s32)tbl))->unk10 - 1;
    }
    return 0;
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004EE5C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004EEAC);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004F074);

s32 func_8004F0B8(Obj8004EDA8 *arg0, Obj8004F0B8 *arg1) {
    arg1->unk0 = func_8004F074(&arg0->unk20, arg1->unk0, arg0->unk3);
    arg1->unk2 = func_8004F074(&arg0->unk28, arg1->unk2, arg0->unk3);
    arg1->unk4 = func_8004F074(&arg0->unk30, arg1->unk4, arg0->unk3);
}

s32 func_8004F124(Obj8004EDA8 *arg0, Obj8004F0B8 *arg1) {
    u8 tmp;

    func_8004EEAC();
    func_8004ED4C(arg0);
    func_8004F0B8(arg0, arg1);
    tmp = arg0->unk2 - 1;
    arg0->unk2 = tmp;
    return tmp & 0xFF;
}

s32 func_8004F180(Obj8004EDA8 *arg0, Obj8004F0B8 *arg1) {
    u8 tmp;

    func_8004EDA8(arg0);
    func_8004F0B8(arg0, arg1);
    tmp = arg0->unk2 - 1;
    arg0->unk2 = tmp;
    return tmp & 0xFF;
}

s32 func_8004F1D4(Obj8004EDA8 *arg0, Obj8004F0B8 *arg1, Obj8004F0B8 *arg2) {
    func_8004ED4C(arg0);
    arg1->unk0 = func_8004F074(&arg0->unk20, arg1->unk0, arg0->unk3);
    arg1->unk2 = func_8004F074(&arg0->unk28, arg1->unk2, arg0->unk3);
    arg1->unk4 = func_8004F074(&arg0->unk30, arg1->unk4, arg0->unk3);
    arg2->unk0 = func_8004F074(&arg0->unk38, arg2->unk0, arg0->unk3);
    arg2->unk2 = func_8004F074(&arg0->unk40, arg2->unk2, arg0->unk3);
    arg2->unk4 = func_8004F074(&arg0->unk48, arg2->unk4, arg0->unk3);
    return --arg0->unk2;
}

void func_8004F2A0(void) {
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004F2A8);

void func_8004F66C(u16 *arg0, u16 *arg1) {
    u16 a;
    u16 b;

    a = *arg0;
    b = *arg1;
    if (a >= 0x7980 && a <= 0x7B80) {
        *arg0 = a + 0x240;
    } else if (a == 0x7F90) {
        *arg0 = a + 0x40;
    }
    if ((b & 0x1F) == 0x1B || (b & 0x1F) == 0x1C) {
        *arg1 = b & 0xFFEF;
    }
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004F6BC);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004F74C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004F7F8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004F964);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004FE38);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80050190);

void func_800502A4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, Sub800507B8 *arg4) {
    arg4->unk0 = (((-arg1 * arg2 - arg0 * arg3) >> 12) * 23) / D_80039D18->unk270;
    arg4->unk2 = (((arg1 * arg3 - arg0 * arg2) >> 12) * 23) / D_80039D18->unk270;
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80050344);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80050490);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800505E8);

INCLUDE_RODATA("asm/USA/fdat204/nonmatchings/fdat204", D_8004ADA0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80050888);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80050E60);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800513B4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005145C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800516F8);

void func_800517CC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, ...) {
    Sub800507B8 pts[16];
    Sub800507B8 *dst;
    s32 *src;
    s32 *tbl;
    s32 i;

    src = &arg3;
    dst = pts;
    tbl = &D_800894C0[arg0];
    for (i = arg3; i != -1; i--) {
        src++;
        dst->unk0 = arg1 + *src;
        src++;
        dst->unk2 = arg2 + *src;
        dst++;
    }
    func_80060050(pts, tbl, arg3, 0x10, 1);
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80051858);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80051878);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80051CCC);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80051D14);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80051FB0);

void func_80051FF8(s32 arg0, s32 arg1, s32 arg2) {
    func_800516F8(arg0, arg1, arg2 * 2, D_800895B0);
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80052020);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80052244);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80052330);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80052368);

s32 func_80052658(Obj80052658 *arg0, u16 arg1, u16 arg2, s32 arg3) {
    s32 ret;

    D_801ADCDC[arg3] = arg0;
    ret = func_80015D80(arg1, arg2);
    func_800165E4(arg1, arg2, (u32 *)arg0);
    func_80056688((u8 *)arg0 + arg0->unk8);
    return ret;
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800526D4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80052848);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80052894);

void func_80052954(u16 arg0, Obj80052658 *arg1) {
    u8 *p;

    D_801ADCDC[arg0] = arg1;
    p = (u8 *)arg1 + arg1->unk8;
    D_801ADCD8 = p;
    func_80056688(p);
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005299C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80052AA0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80052FF8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005343C);

void func_80053658(Elem80053658 *arg0, s32 arg1) {
    s32 i;
    Elem80053658 *p;
    s32 unused[2];

    p = arg0;
    i = arg1 - 1;
    if (arg1 != 0) {
        do {
            func_8005343C(p);
            i--;
            p++;
        } while (i != -1);
    }
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800536AC);

s32 func_8005372C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
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

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005379C);

void func_80054888(void) {
    Obj800558A8 *p;
    u16 i;

    p = D_801AE2F0;
    i = 2;
    do {
        p->unk0 = 0;
        p->unk20 = 0;
        p++;
    } while (--i != 0);
}

void func_800548B8(void) {
    Obj800558A8 *p;
    u16 i;

    p = D_801AE2F0;
    i = 2;
    do {
        if (p->unk0 != 0) {
            p->unk0 = 1;
        }
        p++;
    } while (--i != 0);
}

void func_800548F4(Obj800558A8 *arg0) {
    arg0->unk0 = 0;
    *arg0->unk24 = 0;
    if (arg0->unk20 != NULL) {
        func_80016114(arg0->unk20);
        arg0->unk20 = NULL;
    }
}

void func_80054940(void) {
    Obj800558A8 *p;
    s16 i;

    p = D_801AE2F0;
    for (i = 1; i != -1; i--) {
        if (p->unk0 != 0) {
            func_800548F4(p);
        }
        p++;
    }
}

void func_800549B0(void) {
    Obj800558A8 *p;
    u16 i;

    p = D_801AE2F0;
    i = 2;
    do {
        if (p->unk0 == 1) {
            func_800548F4(p);
        }
        p++;
    } while (--i != 0);
}

Obj800558A8 *func_80054A1C(void) {
    Obj800558A8 *p;
    u16 i;

    p = D_801AE2F0;
    i = 2;
    do {
        if (p->unk0 == 0) {
            p->unk4 = 0xFF;
            p->unkE = -1;
            p->unk10 = 0xFF;
            return p;
        }
        p++;
    } while (--i != 0);
    return NULL;
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80054A70);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80054E04);

void func_80054E6C(Obj80055E20 *arg0, u8 *arg1) {
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

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80054ED0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80054F04);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80055024);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80055140);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80055350);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80055428);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800554F8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800559A4);

void func_80055AA0(void) {
    Elem80055AA0 *p;
    s32 i;

    p = D_801B425C;
    for (i = 0x1F; i != -1; i--) {
        func_800135E8(p, &p->unk14, 1);
        func_800135E8(p, &p->unk28, 2);
        func_800135E8(p, &p->unk3C, 3);
        p++;
    }
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80055B1C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80055BA0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80055C7C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80055CB8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80055E20);

void func_80056180(void) {
    s32 i;
    Elem80056180 *p;

    i = 8;
    p = D_801B419C;
    do {
        p->unk0 = 0xFF;
        i--;
        p++;
    } while (i != 0);
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800561A8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005625C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800562FC);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005631C);

void func_80056434(void) {
    SetGeomOffset(0x4F, 0x3C);
    SetGeomScreen(0xA0);
    SetDefDrawEnv(&D_801ADA54[0].unk0[0], 2, 0x28, 0x9E, 0x78);
    SetDefDrawEnv(&D_801ADA54[0].unk0[1], 0xA0, 0x28, 0x9E, 0x78);
    SetDefDrawEnv(&D_801ADA54[0].unk0[2], 0, 0, 0x140, 0xF0);
    SetDefDispEnv(&D_801ADA54[0].unk114, 0, 0xF0, 0x140, 0xF0);
    SetDefDrawEnv(&D_801ADA54[1].unk0[0], 2, 0x118, 0x9E, 0x78);
    SetDefDrawEnv(&D_801ADA54[1].unk0[1], 0xA0, 0x118, 0x9E, 0x78);
    SetDefDrawEnv(&D_801ADA54[1].unk0[2], 0, 0xF0, 0x140, 0xF0);
    SetDefDispEnv(&D_801ADA54[1].unk114, 0, 0, 0x140, 0xF0);
    D_801ADA6D = 0;
    D_801ADA6E = 0;
    D_801ADA6F = 0;
    D_801ADBA9 = 0;
    D_801ADBAA = 0;
    D_801ADBAB = 0;
    D_801ADAC9 = 0;
    D_801ADACA = 0;
    D_801ADACB = 0;
    D_801ADC05 = 0;
    D_801ADC06 = 0;
    D_801ADC07 = 0;
    D_801ADB25 = 0;
    D_801ADB26 = 0;
    D_801ADB27 = 0;
    D_801ADC61 = 0;
    D_801ADC62 = 0;
    D_801ADC63 = 0;
    func_8005631C();
    SetGeomScreen(0xA0);
    SetFarColor(0, 0, 0);
    D_801ADA48 = -1;
    func_80054888();
    func_80056180();
    D_801B4F88 = 0;
    D_801B4F60 = 0;
    D_801B4F74 = 0;
    D_801B419B = 0;
    D_801B419A = 0;
    D_801B4199 = 0;
    D_801B4198 = 0;
    D_801B4114 = 0;
    D_801B4108 = 0;
    func_800154D8(D_8008CB48, D_8008970C, 0x200);
    func_800562FC();
    D_801B4104 = 1;
}

INCLUDE_RODATA("asm/USA/fdat204/nonmatchings/fdat204", D_8004ADB0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80056688);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80056B44);

void func_80056B84(u16 arg0) {
    s32 unused[2];

    D_801ADCD8 = D_801ADCD4[arg0];
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80056BB0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80056DF4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80057118);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800571CC);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800571F0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80057CA8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80057FA8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80058268);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005828C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800582C0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800582E4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005831C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005833C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800594D4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80059508);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80059720);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005A134);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005A2C8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005A374);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005AF60);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005AF84);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005AFA8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005AFC4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005B7D4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005B8B4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005BAA8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005BFE0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005C294);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005C340);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005C910);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005CCB4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005CE20);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005D068);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005D3A8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005D47C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005D5B0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005D784);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005D928);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005D954);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005DAFC);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005DEE4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005E278);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005E588);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005EB3C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005F1E8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005F464);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005F770);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005F7AC);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005FB00);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80060050);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800602C8);

s32 func_80060AC4(s32 arg0, s32 arg1) {
    s32 flags;

    flags = 1;
    if (arg0 >= -0x4F) {
        flags = (arg0 >= 0x4F) * 2;
    }
    if (arg1 < -0x3C) {
        flags |= 4;
    } else if (arg1 >= 0x3C) {
        flags |= 8;
    }
    return flags;
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80060B08);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80060C54);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800611D0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800613A0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800613F4);

void func_800614C8(void) {
    func_800613F4(0, 1, 8, (rsin(D_801B4114 << 9) + 0x1400) >> 1);
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80061508);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80061698);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006176C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80061AD4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800622D8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80062324);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80062348);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80062368);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80062CB4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80062E70);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80062EC4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800638C4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800638E8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80063904);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80063928);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80063948);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80063960);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80063EC4);

void func_80063F18(u16 arg0, s32 arg1, s32 arg2, u16 arg3, s32 arg4) {
    func_80064B94(arg2);
    if (arg3 == 0) {
        func_800640A4(arg0, arg1, arg4);
    } else {
        func_800653F8(arg0, arg1, arg3, arg4);
    }
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80063F94);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80064040);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80064064);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80064088);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800640A4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80064B94);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80064CC8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80064FD4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80065324);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80065348);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006537C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800653A0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800653D8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800653F8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80066580);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800665A8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006678C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80066D90);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80066E88);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80066EBC);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80067130);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80067160);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80067180);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80067198);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80067CEC);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80067D20);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80067F94);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80067FBC);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80067FDC);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80067FF4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80068D38);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800691E0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80069418);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80069AC8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80069D6C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80069D8C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80069DA4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006A398);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006A628);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006A648);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006A660);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006AF0C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006B230);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006B250);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006B268);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006B85C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006BAB8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006BAD8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006BAF0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006C39C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006C678);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006C738);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006C798);

s32 func_8006C810(s32 arg0, s32 arg1, s32 arg2, Obj8006C810 *arg3) {
    s32 ret;
    Obj8006C810 *obj;

    ret = func_80072758();
    obj = arg3;
    if (ret == 0) {
        ret = (s32)func_80073290((Elem80073290 *)arg0, arg1, arg2, (Sub8004DE88 *)arg3);
        if (ret == 0) {
            return 0;
        }
    }
    obj->unk6 = 1;
    return ret;
}

void func_8006C898(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (func_80072598(arg0, arg1, arg2, arg3, 0) == 0) {
        func_80073188(arg0, arg1, arg2, arg3, 0);
    }
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006C904);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006CBD4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006CCB8);

void func_8006CCFC(void) {
    func_80015538(D_801EE0B0[0], 0, 0x400);
    func_80015538(D_801EE0B0[1], 0, 0x400);
    func_80015538(D_801EE0B0[2], 0, 0x400);
}

void func_8006CD54(void) {
    func_8006CCFC();
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006CD74);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006CE6C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006CEC0);

void func_8006CF18(Obj8006CF18 *arg0, s32 arg1) {
    func_8006CE6C(D_801EE0B0[0], ((s16)arg0->unk0 >> 10) + 0x20, ((s16)arg0->unk8 >> 10) + 0x20, arg1);
    func_8006CE6C(D_801EE0B0[1], ((s16)arg0->unk2 >> 10) + 0x20, ((s16)arg0->unkA >> 10) + 0x20, arg1);
    func_8006CE6C(D_801EE0B0[2], ((s16)arg0->unk4 >> 10) + 0x20, ((s16)arg0->unkC >> 10) + 0x20, arg1);
}

void func_8006CFDC(Obj8006CF18 *arg0, s32 arg1) {
    func_8006CEC0(D_801EE0B0[0], ((s16)arg0->unk0 >> 10) + 0x20, ((s16)arg0->unk8 >> 10) + 0x20, arg1);
    func_8006CEC0(D_801EE0B0[1], ((s16)arg0->unk2 >> 10) + 0x20, ((s16)arg0->unkA >> 10) + 0x20, arg1);
    func_8006CEC0(D_801EE0B0[2], ((s16)arg0->unk4 >> 10) + 0x20, ((s16)arg0->unkC >> 10) + 0x20, arg1);
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006D0A0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006D130);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006D1D0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006D2A8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006D39C);

void func_8006D5E4(u32 *arg0, s32 arg1) {
    arg0[arg1 >> 5] |= 1 << (arg1 & 0x1F);
}

void func_8006D60C(u32 *arg0, s32 arg1) {
    arg0[arg1 >> 5] &= ~(1 << (arg1 & 0x1F));
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006D638);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006D65C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006D990);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006D9F4);

void func_8006DA5C(s32 *arg0) {
    s32 *p;
    s32 i;

    p = arg0;
    i = 0x10;
    do {
        *p = 0;
        i--;
        p++;
    } while (i != 0);
    func_8006D9F4(arg0);
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006DA94);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006DCD0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006E04C);

s32 func_8006E1BC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0 < arg2) {
        return !(arg1 < arg2);
    }
    if (arg2 < arg0) {
        return !(arg3 < arg0);
    }
    return 1;
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006E1E8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006E20C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006E24C);

void func_8006E3F4(Obj8006E3F4 *arg0) {
    s32 scale;

    func_8006E20C(&arg0->unkE4, &arg0->unk9E, &arg0->unkD0);
    scale = (-(arg0->unkD0 + arg0->unkA4) >> 10) - 0x10;
    arg0->unk50 = (u32)(arg0->unk9E * scale) >> 14;
    arg0->unk52 = (u32)(arg0->unkA0 * scale) >> 14;
    arg0->unk54 = (u32)(arg0->unkA2 * scale) >> 14;
    if (arg0->unk60 != 0) {
        arg0->unk50 += arg0->unk58;
        arg0->unk52 += arg0->unk5A;
        arg0->unk54 += arg0->unk5C;
    }
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006E4C0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006E5A0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006E698);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006E960);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006E9FC);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006EBF0);

void func_8006ECD4(Obj8006FB14 *arg0) {
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

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006ED2C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006EE48);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006EF2C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006F0F4);

s32 func_8006F118(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 a;
    s32 b;
    s32 c;
    s32 ret;

    func_8006F0F4(arg1, arg2, arg0, &a);
    func_8006F0F4(arg2, arg3, arg0, &b);
    func_8006F0F4(arg3, arg1, arg0, &c);
    ret = 0;
    if ((a >= 0 && b >= 0 && c >= 0) || (a <= 0 && b <= 0 && c <= 0)) {
        ret = 1;
    }
    return ret;
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006F1FC);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006F328);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006F798);

s32 func_8006FBC0(Obj8006FBC0 *arg0, u32 arg1, u32 arg2, u32 arg3) {
    if (arg1 < 8 && arg2 < 8 && arg3 < 8) {
        return arg0->unk4[arg1] & arg0->unk24[arg2] & arg0->unk44[arg3];
    }
    return 0;
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006FC18);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800700F0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800701D4);

void func_80070348(Obj80071188 *arg0, s16 *arg1, s16 *arg2) {
    s32 base;
    Elem80071188 *e;

    base = *arg0->unk8;
    e = (Elem80071188 *)((arg0->unk0->unkC[(arg0->unk0->unk0 >> 6) & 3] & 0x7FF8) + base);
    *arg1 = arg0->unk4->unk12 + ((s16)e->unk2 >> 2);
    e = (Elem80071188 *)((arg0->unk0->unkC[(arg0->unk0->unk0 >> 12) & 3] & 0x7FF8) + base);
    *arg2 = arg0->unk4->unk12 + ((s16)e->unk2 >> 2);
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800703E0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80070404);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80070684);

void func_800707D0(Obj800707D0 *arg0) {
    s32 base;

    base = *arg0->unk94;
    arg0->unkC0[0] = (Sub8004DE88 *)(base + arg0->unkA8[0].unk0_3 * 8);
    arg0->unkC0[1] = (Sub8004DE88 *)(base + arg0->unkA8[1].unk0_3 * 8);
    arg0->unkC0[2] = (Sub8004DE88 *)(base + arg0->unkA8[2].unk0_3 * 8);
    if (arg0->unk9C & 1) {
        arg0->unkC0[3] = (Sub8004DE88 *)(base + arg0->unkA8[3].unk0_3 * 8);
    }
    if (func_8006E1BC(arg0->unk5C[0], arg0->unk68[0], arg0->unkC0[(arg0->unk9C >> 4) & 3]->unk0, arg0->unkC0[(arg0->unk9C >> 10) & 3]->unk0) != 0
        && func_8006E1BC(arg0->unk5C[1], arg0->unk68[1], arg0->unkC0[(arg0->unk9C >> 6) & 3]->unk2, arg0->unkC0[(arg0->unk9C >> 12) & 3]->unk2) != 0
        && func_8006E1BC(arg0->unk5C[2], arg0->unk68[2], arg0->unkC0[(arg0->unk9C >> 8) & 3]->unk4, arg0->unkC0[(arg0->unk9C >> 14) & 3]->unk4) != 0) {
        func_80070684(base, arg0);
    }
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80070928);

void func_80070A74(Obj800718B4 *arg0) {
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

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80070AC4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80070C9C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80070F0C);

s32 func_80070F84(s32 arg0, s32 arg1) {
    s32 ret;

    if (func_80070C9C(arg0, 1) != 0) {
        return (ret = func_80070F0C(arg1)) != 0 ? ret : 0;
    }
    return 0;
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80070FD4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800712E0);

void func_80071340(Obj80072180 *arg0) {
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

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80071474);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80071708);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80071BC0);

void func_8007229C(void) {
    Elem8007229C *p;
    s32 i;

    p = D_801D4488;
    i = D_801EC48C;
    do {
        p->unk2C = NULL;
        i--;
        p++;
    } while (i != 0);
}

void func_800722C4(void) {
    Elem8007229C *p;
    s32 i;

    i = D_801EC48C;
    p = D_801D4488;
    do {
        if (p->unk2C != NULL && p->unk2C->unk0 != NULL) {
            p->unk2C->unk0(p);
        }
        i--;
        p++;
    } while (i != 0);
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80072330);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800723A8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007250C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80072598);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80072758);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80072834);

void func_8007286C(void) {
    Elem8007286C *p;
    s32 i;

    i = 0x200;
    p = D_801A4C68;
    do {
        if (p->unk14 != NULL && p->unk14->unk0 != NULL) {
            p->unk14->unk0(p);
        }
        i--;
        p++;
    } while (i != 0);
}

u16 func_800728D4(void) {
    return func_8001628C();
}

s32 func_800728F4(s32 arg0) {
    return (func_8001628C() & 0xFFFF) - (arg0 & 0xFFFF);
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80072928);

void func_8007295C(s32 arg0) {
    D_801ADA3C = arg0;
}

void func_8007296C(s32 arg0) {
    D_801ADA40 = arg0;
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007297C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80072A18);

void func_80072A70(void) {
    func_80015538(D_801AB748, 0, 0xB8);
    D_801ADA28 = D_801AB748 + 0xB8;
    D_801ADA34 = 0;
    func_8007295C(0);
    D_801ADA38 = 0;
    func_8007296C(0);
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80072AD4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80072DE8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80072E44);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80072F08);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80073004);

void func_80073138(Obj80073138 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, ...) {
    func_80054A70(arg0->unk60, arg0->unk8.unk6 + 0x80, &arg0->unk8, &arg0->unk10, arg1, arg2, arg3, arg4, &arg4 + 1);
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80073188);

Elem80073290 *func_80073290(Elem80073290 *arg0, s32 arg1, s32 arg2, Sub8004DE88 *arg3) {
    Elem80073290 *p;
    s32 i;

    p = (Elem80073290 *)D_801AB748;
    for (i = 2; i != 0; i--) {
        if (p->unk0 != 0 && p != arg0 && !(p->unk32 & 4)
            && func_80012E5C(arg1, arg2, arg3, &p->unk8, p->unk6A, p->unk6C) != 0) {
            return p;
        }
        p++;
    }
    return NULL;
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80073368);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80073508);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80073808);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80073B0C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80073B98);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80073C70);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80073DE8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80073E6C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80073EC8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80073FDC);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80074094);

s32 func_80074314(Obj80074314 *arg0, s32 arg1) {
    s32 val;

    val = (arg1 * 50) / arg0->unk164;
    if (val <= 0) {
        val = 1;
    } else if (val >= 0x1F) {
        val = 0x1E;
    }
    return val;
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007435C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80074568);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800745A0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800745DC);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80074618);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80074654);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80074690);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800746CC);

void func_80074700(Obj80073138 *arg0) {
    s32 unused[2];

    if (arg0->unkCC > 0) {
        if (arg0->unkCC > 0x100) {
            arg0->unkCC -= 0x100;
        } else {
            arg0->unkCC = 0;
        }
    } else if (arg0->unkCC < -0x100) {
        arg0->unkCC += 0x100;
    } else {
        arg0->unkCC = 0;
    }
    if (arg0->unkD0 > 0) {
        if (arg0->unkD0 > 0x100) {
            arg0->unkD0 -= 0x100;
        } else {
            arg0->unkD0 = 0;
        }
    } else if (arg0->unkD0 < -0x100) {
        arg0->unkD0 += 0x100;
    } else {
        arg0->unkD0 = 0;
    }
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80074784);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80074A78);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80074B84);

void func_80074BD8(Obj80073138 *arg0) {
    func_8004ED4C(&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_80074C3C(Obj80073138 *arg0) {
    func_8004EDA8(&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_80074CA0(Obj80073138 *arg0) {
    func_80074B84();
    if (func_8004F124(&arg0->unk64, &arg0->unk8) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_80074CF8(Obj80073138 *arg0) {
    if (func_8004F1D4(&arg0->unk64, &arg0->unk8, &arg0->unk10) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_80074D50(Obj80073138 *arg0) {
    func_80074B84();
    if (func_8004F180(&arg0->unk64, &arg0->unk8) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_80074DA8(Obj80073138 *arg0) {
    func_80074B84();
    func_80074700(arg0);
    if (func_8004F180(&arg0->unk64, &arg0->unk8) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_80074E08(Obj80073138 *arg0) {
    func_80074B84();
    func_8004ED4C(&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_80074E70(Obj80073138 *arg0) {
    func_8004EDA8(&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
    arg0->unkCC += arg0->unkCE;
    if (arg0->unkCC > 0x40) {
        arg0->unkCC = 0x40;
    }
    arg0->unk10.unk2 += arg0->unkCC;
}

void func_80074F14(Obj80073138 *arg0) {
    func_8004EDA8(&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
    arg0->unkCC += arg0->unkCE;
    if (arg0->unkCC < -0x40) {
        arg0->unkCC = -0x40;
    }
    arg0->unk10.unk2 += arg0->unkCC;
}

void func_80074FB8(Obj80073138 *arg0) {
    func_8004EDA8(&arg0->unk64);
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
    arg0->unkCC += arg0->unkCE;
    if (arg0->unkCE >= 0) {
        if (arg0->unkCC > arg0->unkD0) {
            arg0->unkCC = arg0->unkD0;
        }
    } else if (arg0->unkCC < arg0->unkD0) {
        arg0->unkCC = arg0->unkD0;
    }
    arg0->unk10.unk2 += arg0->unkCC;
}

void func_80075088(Obj80073138 *arg0) {
    func_80074B84();
    if (arg0->unkD2 == 0) {
        arg0->unk36 &= ~0x10;
    } else {
        arg0->unkD2--;
    }
    if (func_8004F180(&arg0->unk64, &arg0->unk8) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_8007510C(Obj8007618C_fdat202 *arg0, s32 arg1, s32 arg2) {
    arg0->unk3D = arg1;
    arg0->unk4C = arg2;
    arg0->unkDC = arg0->unkEC;
}

void func_8007513C(Obj80073138 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk64.unk30.unk0 = 0;
    arg0->unk64.unk28.unk0 = 0;
    arg0->unk64.unk20.unk0 = 0;
    func_8007510C(arg0, 0, arg3);
    func_8004EA8C(&arg0->unk64, arg1, arg2, 0);
    arg0->unk64.unk2 = 2;
}

void func_800751AC(Obj80073138 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk64.unk30.unk0 = 0;
    arg0->unk64.unk28.unk0 = 0;
    arg0->unk64.unk20.unk0 = 0;
    func_8007510C(arg0, 1, arg3);
    func_8004EA8C(&arg0->unk64, arg1, arg2, 0);
    arg0->unk64.unk2 = 2;
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007521C);

void func_800752A4(Obj80073138 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    Obj8004F0B8 sp18;
    Obj8004F0B8 sp20;
    s32 ret;

    if (arg0->unk3D != 0x10) {
        arg0->unk1C = 0;
        arg0->unk1A = 0;
        arg0->unk18 = 0;
    }
    func_8007510C(arg0, 0x10, arg6);
    if (arg3 != 0) {
        func_8004EB98(&arg0->unk64, arg1, arg2, 0);
    } else {
        func_8004EA8C(&arg0->unk64, arg1, arg2, 0);
        func_8004EB3C(&arg0->unk64, arg4, arg5);
    }
    ret = func_8004E32C(&arg0->unk64, &arg0->unk10, &arg0->unk10, &sp18, &sp20);
    func_80073C70(arg0, &sp18);
    func_8004DFAC(&arg0->unk64, ret, &sp18, &sp20);
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007539C);

void func_80075648(Obj80073138 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    Obj8004F0B8 sp18;
    Obj8004F0B8 sp20;
    Obj8004F0B8 sp28;
    s32 ret;
    s32 hit;

    if (arg0->unk3D != 0x10) {
        arg0->unk1C = 0;
        arg0->unk1A = 0;
        arg0->unk18 = 0;
    }
    func_8007510C(arg0, 0x10, arg5);
    func_8004EA8C(&arg0->unk64, arg1, arg2, 0);
    func_8004EB3C(&arg0->unk64, arg3, arg4);
    ret = func_8004E32C(&arg0->unk64, &arg0->unk10, &arg0->unk10, &sp18, &sp20);
    hit = func_80073508(arg0, &arg0->unk8, &sp28, &sp18);
    func_8004DFAC(&arg0->unk64, ret, &sp18, &sp20);
    if (hit != 0) {
        if (arg0->unk54 != NULL) {
            arg0->unk54(arg0, 5, hit);
        }
    }
}

void func_80075758(Obj80073138 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    Obj8004F0B8 sp18;
    Obj8004F0B8 sp20;

    if (arg0->unk3D != 0x10) {
        arg0->unk1C = 0;
        arg0->unk1A = 0;
        arg0->unk18 = 0;
    }
    func_8007510C(arg0, 0x10, arg3);
    func_8004EA8C(&arg0->unk64, arg1, arg2, 0);
    func_8004DFAC(&arg0->unk64, func_8004E32C(&arg0->unk64, &arg0->unk10, &arg0->unk10, &sp18, &sp20), &sp18, &sp20);
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007580C);

void func_800758E4(Obj80073138 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0->unk3D != 0x12) {
        func_8004DF88((Obj8004DE88 *)&arg0->unk64, (Sub8004DE88 *)&arg0->unkCC);
        arg0->unkCE = 0;
        arg0->unkCC <<= 6;
        arg0->unkD0 <<= 6;
    }
    if ((u16)(arg0->unkCC + 1) < 3) {
        arg0->unkCC = 0;
    } else {
        arg0->unkCC -= arg0->unkCC >> 1;
    }
    if ((u16)(arg0->unkD0 + 1) < 3) {
        arg0->unkD0 = 0;
    } else {
        arg0->unkD0 -= arg0->unkD0 >> 1;
    }
    func_8007510C(arg0, 0x13, arg3);
    func_8004EA8C(&arg0->unk64, arg1, arg2, 0);
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800759E4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80075B24);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80075D34);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80075EF0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007617C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007647C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800764D0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007673C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80076D00);

s32 func_80076D7C(Obj80073138 *arg0) {
    Obj8004F0B8 sp10;
    Obj80073138 *other;
    Obj80076D7C *hit;

    other = arg0->unk48;
    if (other == NULL || other->unk0 == 0) {
        return 0;
    }
    hit = func_80076D00(arg0, other, &sp10);
    if (hit == NULL) {
        return 1;
    }
    return hit->unk4->unk6 == 0x30;
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80076DE4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80076EC0);

void func_80076F8C(Obj80073138 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    Obj8004F0B8 pos;

    pos.unk0 = arg0->unk8.unk0;
    pos.unk4 = arg0->unk8.unk4;
    pos.unk2 = arg0->unk2E;
    func_800856F8(0, &pos, 0x28, arg1, arg2, arg1 >> 2, arg2 >> 2, -arg1 >> 5, -arg2 >> 3, arg2 >> 2, arg3, arg4);
}

void func_80077010(Obj80073138 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    Obj8004F0B8 pos;

    pos.unk0 = arg0->unk8.unk0;
    pos.unk4 = arg0->unk8.unk4;
    pos.unk2 = arg0->unk2E;
    func_80085838(0, &pos, arg1, arg2, 0x28, arg3, arg4, arg5, arg6, arg7);
}

void func_8007708C(Obj80073138 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0->unk8.unk2 + arg1 >= arg0->unk2E && arg0->unk2E >= arg0->unk8.unk2 - arg0->unk2A) {
        if (arg0->unk8.unk2 < arg0->unk2E) {
            arg3 -= arg0->unk2E - arg0->unk8.unk2;
        }
        func_80076F8C(arg0, arg2, arg3 + func_80014D78(arg3 >> 2), 0x42, D_801ADA30 + 0x1F00);
    }
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007712C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800771D0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800775B8);

Obj80077854 *func_80077674(void) {
    return NULL;
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007767C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800776B4);

void func_8007789C(u8 *arg0) {
    Obj8007789C *obj;

    if (arg0 >= D_801AB7A0) {
        obj = func_80077674();
        if (obj != NULL) {
            func_800776B4(obj, arg0);
            D_801AB67C->unk20[obj->unkE](obj);
        }
    }
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80077918);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800779BC);

void func_80077A68(s32 arg0) {
    s32 v;

    v = func_8007767C();
    if (v != 0) {
        func_80077918(v, arg0);
    }
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80077AA0);

void func_80077C30(void) {
    s32 v;

    v = func_80016A84(1);
    D_80040FA0[0].unk4 = D_80040FA0[0].unk0;
    D_80040FA0[0].unk0 = v;
    D_80040FA0[1].unk4 = D_80040FA0[1].unk0;
    D_80040FA0[1].unk0 = v >> 16;
    D_80040FA0[0].unkC = D_80040FA0[0].unk8;
    D_80040FA0[1].unkC = D_80040FA0[1].unk8;
    if (!(D_801AB684 & 0x400)) {
        D_80040FA0[0].unk8 = v;
        D_80040FA0[1].unk8 = v >> 16;
    } else {
        D_80040FA0[1].unk8 = 0;
        D_80040FA0[0].unk8 = 0;
    }
}

void func_80077CD8(void) {
    Obj80077CD8 *obj;

    func_80077C30();
    func_800771D0();
    if ((D_80040FA8 & 0x800) && !(D_80040FAC & 0x800)) {
        D_800411F4 = (D_800411F4 & ~0x10000) | ((((D_800411F4 >> 16) ^ 1) & 1) << 16);
    }
    if ((D_80041344 & 0x800) && !(D_80041348 & 0x800)) {
        D_80041590 = (D_80041590 & ~0x10000) | ((((D_80041590 >> 16) ^ 1) & 1) << 16);
    }
    D_80039D18 = &D_80040FA0[0];
    func_80077AA0();
    obj = D_80039D18->unk394;
    if (obj->unk54 != NULL) {
        obj->unk54(obj, 0);
    }
    if (obj->unk0 != 0) {
        func_800775B8(obj, 0);
    }
    D_80039D18 = &D_80040FA0[1];
    func_80077AA0();
    obj = D_80039D18->unk394;
    if (obj->unk54 != NULL) {
        obj->unk54(obj, 0);
    }
    if (obj->unk0 != 0) {
        func_800775B8(obj, 1);
    }
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80077E78);

void func_80077EAC(void) {
    u16 n;

    n = D_80039D18->unk28C;
    func_800815DC(D_80039D18->unk288, D_80039D18->unk28A, n, n * n, D_80039D18->unk28E, D_80039D18->unk2AC, D_80039D18->unk2AD, &D_80039D18->unk2C0);
}

void func_80077F08(Obj80073138 *arg0, s32 arg1, s32 arg2) {
    s16 cur;
    u16 val;

    if (D_80039D18->unk8 & D_80039D18->unk294) {
        val = arg0->unk1A + arg1;
    } else if (D_80039D18->unk8 & D_80039D18->unk296) {
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

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80077FF4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80078070);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800780EC);

void func_8007825C(Obj80073138 *arg0) {
    s32 unused[2];

    if (arg0->unkCC > 0) {
        if (arg0->unkCC > D_80039D18->unk261) {
            arg0->unkCC -= D_80039D18->unk261;
        } else {
            arg0->unkCC = 0;
        }
    } else if (arg0->unkCC < -D_80039D18->unk261) {
        arg0->unkCC += D_80039D18->unk261;
    } else {
        arg0->unkCC = 0;
    }
    if (arg0->unkD0 > 0) {
        if (arg0->unkD0 > D_80039D18->unk261) {
            arg0->unkD0 -= D_80039D18->unk261;
        } else {
            arg0->unkD0 = 0;
        }
    } else if (arg0->unkD0 < -D_80039D18->unk261) {
        arg0->unkD0 += D_80039D18->unk261;
    } else {
        arg0->unkD0 = 0;
    }
}

void func_80078338(Obj80073138 *arg0) {
    if (func_8004F1D4(&arg0->unk64, &arg0->unk8, &arg0->unk10) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_80078390(Obj80073138 *arg0) {
    func_80077F08(arg0, D_80039D18->unk214, D_80039D18->unk216);
    if (func_8004F180(&arg0->unk64, &arg0->unk8) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800783F8);

void func_80078460(Obj80073138 *arg0) {
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
    arg0->unkCC += arg0->unkCE;
    if (D_80039D18->unk216 < arg0->unkCC) {
        arg0->unkCC = D_80039D18->unk216;
    }
    arg0->unk10.unk2 += arg0->unkCC;
    func_8004CDE8(D_80039D18->unk4C->unk11, D_801ADA30 + 0x1200, &arg0->unk8, 0x28, 0x1F40, 0x2710, 0);
}

void func_8007853C(Obj80073138 *arg0) {
    func_8004EDA8(&arg0->unk64);
    func_80078460(arg0);
}

void func_80078570(Obj80073138 *arg0) {
    if (--arg0->unk64.unk2 == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
    arg0->unkCC += arg0->unkCE;
    if (arg0->unkCC < -D_80039D18->unk216) {
        arg0->unkCC = -D_80039D18->unk216;
    }
    arg0->unk10.unk2 += arg0->unkCC;
    func_8004CDE8(D_80039D18->unk4C->unk11, D_801ADA30 + 0x1200, &arg0->unk8, 0x28, 0x1F40, 0x2710, 0);
}

void func_80078654(Obj80073138 *arg0) {
    func_8004EDA8(&arg0->unk64);
    func_80078570(arg0);
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80078688);

void func_800787BC(Obj80073138 *arg0) {
    arg0->unk148 &= 0xFFF0;
    arg0->unk15C &= ~D_80039D18->unk2BE;
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800787E8);

void func_80078858(Obj80073138 *arg0) {
    arg0->unk15C ^= 1 << D_80039D18->unk2AB;
}

void func_8007887C(Obj80073138 *arg0) {
    arg0->unk15C &= ~(1 << D_80039D18->unk2AB);
}

void func_800788A8(Obj8007618C *arg0, Obj8007A108 *arg1) {
    arg0->unk15C |= 1 << arg1->unk3;
}

void func_800788C4(Obj8007618C *arg0, Obj8007A108 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk3;
}

void func_800788E0(Obj8007618C *arg0, Obj8007A108 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk3);
}

void func_80078900(Obj8007618C *arg0, Obj8007A108 *arg1) {
    arg0->unk15C ^= 1 << arg1->unk6;
}

void func_8007891C(Obj8007618C *arg0, Obj8007A108 *arg1) {
    arg0->unk15C &= ~(1 << arg1->unk6);
}

void func_8007893C(Obj80073138 *arg0) {
    if (!(arg0->unk148 & 0xF)) {
        func_8004CECC(1, &arg0->unk8, 0x50, -0x50);
    } else {
        func_8004CDE8(0xB, D_801ADA30 + 0x1000, &arg0->unk8, 0x50, 0x1F40, 0x2710, -0x30);
    }
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800789B8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80078AD4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80078C94);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80078DF4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800792D4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80079480);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80079944);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80079D4C);

void func_8007A078(Obj80073138 *arg0) {
    if (arg0->unkD2 == 0) {
        arg0->unk36 &= ~0x10;
    } else {
        arg0->unkD2--;
    }
    if (func_8004F180(&arg0->unk64, &arg0->unk8) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

void func_8007A0F8(Obj80073138 *arg0, s32 arg1) {
    if (arg0->unk3D != 0xB0) {
        func_8004DF88((Obj8004DE88 *)&arg0->unk64, (Sub8004DE88 *)&arg0->unkCC);
        arg0->unkCE = 0;
        arg0->unkCC <<= 7;
        arg0->unkD0 <<= 7;
    }
    arg0->unk15C &= D_80039D18->unk2BE;
    func_8007617C(arg0, arg1, 1, 0x200, &arg0->unkCC, func_80079D4C);
    arg0->unk3C = 0x41;
    arg0->unk41 = 0x41;
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007A1A8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007A240);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007A29C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007A7FC);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007AF2C);

void func_8007AF8C(Obj80073138 *arg0) {
    arg0->unk15C &= D_80039D18->unk2BE;
    func_8004EE5C(&arg0->unk64);
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007AFC8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007B57C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007B874);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007BB04);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007C3F0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007C7B4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007C83C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007D3B0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007D6C8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007D818);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007F0C0);

void func_8007F5E4(void) {
    func_8007C83C();
}

void func_8007F604(Obj80073138 *arg0) {
    arg0->unk50 = func_8007D818;
    arg0->unk54 = func_8007F0C0;
    arg0->unk5C = func_8007C3F0;
    arg0->unk58 = func_8007F5E4;
    if (arg0->unk54 != NULL) {
        ((void (*)(Obj80073138 *, s32))arg0->unk54)(arg0, 0);
    }
    if (arg0->unk50 != NULL) {
        arg0->unk50(arg0, arg0->unk41);
    }
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007F684);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007F978);

s32 func_8007FC08(Obj80073138 *arg0) {
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
        if (arg0->unkCC != 0 || arg0->unkD0 != 0) {
            func_8007F978(arg0, 0, 0, 0x100, &arg0->unkCC);
            return 0;
        }
        break;
    case 21:
        func_8004EA8C(&arg0->unk64, 0, 1, 0x200);
        arg0->unk64.unk2 = 4;
        arg0->unkCE = 0;
        arg0->unkCC = 0;
        return 1;
    }
    return 1;
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007FCC8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80080C90);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80080F5C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80081004);

void func_800814D8(Obj80073138 *arg0) {
    arg0->unk50 = func_8007FCC8;
    arg0->unk54 = func_80080C90;
    arg0->unk5C = func_8007C3F0;
    arg0->unk58 = func_80081004;
    arg0->unk10C = 0;
    arg0->unk108 = 0;
    arg0->unk10A = 500;
    arg0->unk10E = 0;
    if (arg0->unk54 != NULL) {
        ((void (*)(Obj80073138 *, s32))arg0->unk54)(arg0, 0);
    }
    if (arg0->unk50 != NULL) {
        arg0->unk50(arg0, arg0->unk41);
    }
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8008156C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800815DC);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8008166C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8008181C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80081A00);

void func_80081FD0(void) {
    Elem80081FD0 *p;
    s32 i;

    p = D_801B645C;
    i = 0x100;
    D_8008AA66 = D_8008C1E8[D_801AB678];
    do {
        p->unk6 = -1;
        i--;
        p++;
    } while (i != 0);
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80082018);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80082194);

void func_80082384(Obj80082384 *arg0) {
    u8 count;

    count = arg0->unk21;
    if ((count % arg0->unk1E) == 0) {
        func_800861F4(arg0->unk8, arg0, &arg0->unk18, arg0->unk1F, count == arg0->unk20);
    }
    arg0->unk21++;
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800823F8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8008246C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80082794);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800829FC);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80082C54);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80082D70);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800834F4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800835B4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80083808);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8008393C);

void func_80083C04(Obj800851A8 *arg0) {
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

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80083C98);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80083D84);

void func_80083DF0(Obj80085394 *arg0) {
    arg0->unkBA += arg0->unk18;
    arg0->unk18 += arg0->unk1A;
    if ((s16)arg0->unkBA <= arg0->unk1C) {
        arg0->unk12 = 0;
    }
}

void func_80083E30(Obj80085394 *arg0) {
    arg0->unkBC += arg0->unk1A;
    if ((s16)arg0->unkBC < arg0->unk20) {
    stop:
        arg0->unk12 = 0;
        return;
    }
    arg0->unkBA += arg0->unk18;
    if ((s16)arg0->unkBA <= 0) {
        goto stop;
    }
    arg0->unk1A += arg0->unk1E;
    arg0->unk18 += arg0->unk1C;
}

void func_80083EB0(Obj80087A24_fdat202 *arg0) {
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

void func_80083F6C(Obj80085510 *arg0) {
    arg0->unk0 += arg0->unk18;
    arg0->unk2 += arg0->unk1A;
    arg0->unk4 += arg0->unk1C;
    arg0->unkC6 += arg0->unk20;
    arg0->unkC8 += arg0->unk22;
    arg0->unkCA += arg0->unk24;
    arg0->unk1A += 6;
}

void func_80083FDC(Obj80083FDC *arg0) {
    u8 col[4];
    s32 prev;
    s32 t;
    u16 cur;
    Elem80083FDC *e;

    arg0->unkC4 += arg0->unk24;
    arg0->unkC6 += arg0->unk24;
    arg0->unkC8 += arg0->unk24;
    e = &D_8008BE80[arg0->unk2D];
    arg0->unkCC += e->unk26;
    arg0->unkCD += e->unk27;
    cur = arg0->unkC4;
    arg0->unkCE += e->unk28;
    arg0->unk24 += e->unk6;
    prev = arg0->unk2A << 16;
    arg0->unk2A = cur;
    if (arg0->unk18.unk0 != 0) {
        arg0->unk20 = func_80082194(arg0, prev >> 18, (s16)cur >> 2, (s16)e->unk8 >> 2,
                                    &arg0->unk18, &e->unkC, &e->unk10, arg0->unk20);
    }
    if (arg0->unk26 > 0) {
        if (e->unk1A[3] != 0xFF) {
            t = (arg0->unk12 << 12) / arg0->unk2C;
            LoadAverageCol(e->unk1A, e->unk1E, t, 0x1000 - t, col);
            func_80055BA0(0, arg0, 0, arg0->unkE, 0xFFFF, col, arg0->unk26);
        }
        arg0->unk26 += arg0->unk28;
        arg0->unk28 += e->unk18;
        func_800842F8(0, arg0, e->unk2C, arg0->unk26 >> 1, 0, arg0->unkE)->unk12 = 0;
    }
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800841C0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80084248);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80084288);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800842F8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800843A4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80084470);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80084558);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800848F4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80084B48);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80084D44);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80084EA4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80084FF4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8008514C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800852B0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8008544C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80085534);

Obj80085394 *func_80085620(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    Obj80085394 *obj;

    obj = func_80088928(0);
    if (obj != &D_8008A7A4) {
        func_800841C0(obj, arg0, arg1, -1);
        obj->unk10 = 2;
        obj->unkB8 = arg2;
        obj->unkBA = arg3;
        obj->unkBC = 0;
        obj->unk1C = arg6;
        obj->unk18 = arg4;
        obj->unk1A = arg5;
        obj->unk14 = func_80083DF0;
        func_80083DF0(obj);
    }
    return obj;
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800856F8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80085838);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8008597C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80085ACC);

s32 func_80085C28(s32 arg0) {
    return ((rand() * arg0) >> 15) - (arg0 >> 1);
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80085C64);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80085D48);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80085E54);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800861F4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80086388);

void func_80086480(Obj80087A24 *arg0) {
    arg0->unkBE += arg0->unk1E;
    arg0->unkB8 -= arg0->unk28;
    arg0->unkB9 -= arg0->unk29;
    arg0->unkBA -= arg0->unk2A;
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800864C4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80086624);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80086848);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80086B18);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80086E68);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800870C0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80087410);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800876DC);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80087BB8);

void func_80087DE8(Obj8008800C *arg0) {
    if (--arg0->unk2A == 0) {
        arg0->unk12 = 0;
    }
    arg0->unk0 += arg0->unk24.unk0;
    arg0->unk2 += arg0->unk24.unk2 - ((rand() * 0x30) >> 15);
    arg0->unk4 += arg0->unk24.unk4;
    arg0->unkE = func_8006D990(arg0->unkE, arg0);
    arg0->unkBC += arg0->unk1A;
    arg0->unkBE += arg0->unk1C;
    if (arg0->unk1E != 0) {
        arg0->unkB8.b[0] -= arg0->unk1E;
        arg0->unkB8.b[1] -= arg0->unk1E;
        arg0->unkB8.b[2] -= arg0->unk1E;
    }
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80087EE0);

void func_8008800C(Obj8008800C *arg0) {
    if (--arg0->unk2A == 0) {
        arg0->unk12 = 0;
    }
    arg0->unkE = func_8006D990(arg0->unkE, arg0);
    func_80087EE0(arg0, &arg0->unk24, arg0->unk1A, arg0->unk1C, arg0->unk1E, arg0->unk20);
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80088084);

void func_800881B4(Obj8008800C *arg0) {
    s32 ret;
    u32 flags;
    u32 flags2;
    s16 *vel;
    u16 *pos;

    if (arg0->unk12 < 2) {
        arg0->unk12 = 0;
        return;
    }
    vel = &arg0->unk1E;
    pos = &arg0->unk24.unk2;
    ret = func_8006C810(arg0->unk8, (s32)arg0, (s32)vel, (Obj8006C810 *)pos);
    if (ret != 0) {
        flags = arg0->unk34;
        func_80085E54(ret, pos, flags & 0x3FF, (flags >> 10) & 0xFF, (flags >> 18) & 0x1F, 1);
        func_80082018(arg0->unk8, ret, &arg0->unk18, vel, pos);
        flags2 = arg0->unk34;
        func_80085E54(arg0->unk38, pos, flags2 & 0x3FF, (flags2 >> 10) & 0xFF, (flags2 >> 18) & 0x1F, 1);
        func_800852B0(0, arg0, &arg0->unk30);
        arg0->unk12 = 0;
        return;
    }
    arg0->unk0 += arg0->unk1E;
    arg0->unk2 += arg0->unk20;
    arg0->unk4 += arg0->unk22;
    arg0->unkE = func_8006D990(arg0->unkE, arg0);
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80088300);

void func_80088444(Obj8008800C *arg0) {
    arg0->unk0 += arg0->unk24.unk0;
    arg0->unk2 += arg0->unk24.unk2;
    arg0->unk4 += arg0->unk24.unk4;
    arg0->unkE = func_8006D990(arg0->unkE, arg0);
    arg0->unkB8.h = ((0xC0 - arg0->unk2A) & 3) + 0x11C;
    if (--arg0->unk2A == 0) {
        arg0->unk12 = 0;
    }
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800884DC);

void func_800885A0(Obj8008800C *arg0) {
    if (arg0->unk2A < 15) {
        arg0->unkB8.b[0] -= 8;
        arg0->unkB8.b[1] -= 8;
        arg0->unkB8.b[2] -= 8;
    } else if (arg0->unkB8.b[0] < 0x70) {
        arg0->unkB8.b[0] += 8;
        arg0->unkB8.b[1] += 8;
        arg0->unkB8.b[2] += 8;
    }
    arg0->unk0 += arg0->unk24.unk0;
    arg0->unk2 += arg0->unk24.unk2;
    arg0->unk4 += arg0->unk24.unk4;
    arg0->unkE = func_8006D990(arg0->unkE, arg0);
    if (--arg0->unk2A == 0) {
        arg0->unk12 = 0;
    }
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8008868C);

void func_80088790(Obj8008800C *arg0) {
    arg0->unk0 += arg0->unk24.unk0;
    arg0->unk2 += arg0->unk24.unk2;
    arg0->unk4 += arg0->unk24.unk4;
    arg0->unkE = func_8006D990(arg0->unkE, arg0);
    arg0->unkBE += 2;
    arg0->unkB8.b[0] -= 2;
    arg0->unkB8.b[1] -= 4;
    arg0->unkB8.b[2] -= 4;
    if (--arg0->unk2A == 0) {
        arg0->unk12 = 0;
    }
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80088840);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80088928);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800889D8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80088A3C);

void func_80088AA4(void) {
}

void func_80088AAC(s32 arg0) {
    if (arg0 != 0) {
        D_80031A94[arg0]++;
    }
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80088ADC);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80088D34);

void func_80088DA0(Obj80088DA0 *arg0, s32 arg1) {
    if ((u32 *)arg0 >= D_801AB748 && (u32 *)arg0 <= &D_801AB748[0x5C]) {
        if (arg0->unk54 != NULL) {
            arg0->unk54(arg0, arg1);
        }
    } else if ((Elem8007229C *)arg0 >= D_801D4488 && (Elem8007229C *)arg0 <= &D_801D4488[D_801EC48C - 1]) {
        if (arg0->unk2C != NULL && arg0->unk2C->unk4 != NULL) {
            arg0->unk2C->unk4(arg0, arg1, 0);
        }
    }
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80088E54);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80088FBC);

void func_800890C0(s16 arg0, s16 arg1, s8 arg2) {
    D_801AB68C = arg0;
    D_801D4466 = arg1;
    D_801D4464 = arg2;
}

void func_800890E0(s32 arg0) {
    s8 v;

    if (arg0 < 0x15) {
        if (arg0 == 0x14) {
            D_801B419B = 0;
            return;
        }
        D_801B419B = 2;
        v = (((0x14 - arg0) << 8) - 0xA) / 20;
        D_801B419A = v;
        D_801B4199 = v;
        D_801B4198 = v;
    }
}

void func_80089154(void) {
    if (D_801AB68A == 0x2C) {
        D_801AB684 &= ~0x1400;
        if (D_80039C5D != 0xFF) {
            func_8004DC18(D_80039C5D);
        }
    } else {
        D_801AB684 |= 0x1400;
    }
}

void func_800891D0(void) {
    u8 full;
    s8 level;

    if (D_801AB688 < 0x16) {
        D_801B419B = 2;
        if (D_801AB688 < 3) {
            full = 0xFF;
            D_801B419A = full;
            D_801B4199 = full;
            D_801B4198 = full;
            return;
        }
        level = ((0x16 - D_801AB688) << 8) / 20;
        D_801B419A = level;
        D_801B4199 = level;
        D_801B4198 = level;
    }
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80089264);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800892F0);

void func_80089354(void) {
    if (D_801AB68A < 0x2D) {
        func_80089154();
    }
    if (D_801AB688 != 0) {
        func_800892F0();
    }
}

void func_800893A0(void) {
    s32 sp10[8];

    MulRotMatrix(sp10);
}
