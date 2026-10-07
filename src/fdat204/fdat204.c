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

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004C9B4);

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

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004CF94);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004D004);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004D09C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004D0C8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004D120);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004D144);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004D278);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004D524);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004D5C8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004D658);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004D710);

void func_8004DA48(s16 arg0) {
    SsSetSerialVol(0, arg0, arg0);
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004DA74);

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

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004DFAC);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004E054);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004E0F8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004E16C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004E32C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004EA8C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004EB3C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004EB98);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004EBD0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004EBDC);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004ECF8);

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

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004EE1C);

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

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004F1D4);

void func_8004F2A0(void) {
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004F2A8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004F66C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004F6BC);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004F74C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004F7F8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004F964);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8004FE38);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80050190);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800502A4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80050344);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80050490);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800505E8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80050888);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80050E60);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800513B4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005145C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800516F8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800517CC);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80051858);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80051878);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80051CCC);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80051D14);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80051FB0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80051FF8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80052020);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80052244);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80052330);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80052368);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80052658);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800526D4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80052848);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80052894);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80052954);

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

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005372C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8005379C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80054888);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800548B8);

void func_800548F4(Obj800558A8 *arg0) {
    arg0->unk0 = 0;
    *arg0->unk24 = 0;
    if (arg0->unk20 != NULL) {
        func_80016114(arg0->unk20);
        arg0->unk20 = NULL;
    }
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80054940);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800549B0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80054A1C);

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

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80055AA0);

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

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80056434);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80056688);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80056B44);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80056B84);

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
        ret = func_80073290(arg0, arg1, arg2, arg3);
        if (ret == 0) {
            return 0;
        }
    }
    obj->unk6 = 1;
    return ret;
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006C898);

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

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006DA5C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006DA94);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006DCD0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006E04C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006E1BC);

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

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006ECD4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006ED2C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006EE48);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006EF2C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006F0F4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8006F118);

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

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80070348);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800703E0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80070404);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80070684);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800707D0);

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

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80070F84);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80070FD4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800712E0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80071340);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80071474);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80071708);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80071BC0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007229C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800722C4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80072330);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800723A8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007250C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80072598);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80072758);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80072834);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007286C);

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

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80073290);

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

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80074E70);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80074F14);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80074FB8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80075088);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007510C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007513C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800751AC);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007521C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800752A4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007539C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80075648);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80075758);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007580C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800758E4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800759E4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80075B24);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80075D34);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80075EF0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007617C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007647C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800764D0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007673C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80076D00);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80076D7C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80076DE4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80076EC0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80076F8C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80077010);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007708C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007712C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800771D0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800775B8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80077674);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007767C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800776B4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007789C);

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

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80077C30);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80077CD8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80077E78);

void func_80077EAC(void) {
    u16 n;

    n = D_80039D18->unk28C;
    func_800815DC(D_80039D18->unk288, D_80039D18->unk28A, n, n * n, D_80039D18->unk28E, D_80039D18->unk2AC, D_80039D18->unk2AD, &D_80039D18->unk2C0);
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80077F08);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80077FF4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80078070);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800780EC);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007825C);

void func_80078338(Obj80073138 *arg0) {
    if (func_8004F1D4(&arg0->unk64, &arg0->unk8, &arg0->unk10) == 0) {
        if (arg0->unk50 != NULL) {
            arg0->unk50(arg0, arg0->unk41);
        }
    }
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80078390);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800783F8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80078460);

void func_8007853C(Obj80073138 *arg0) {
    func_8004EDA8(&arg0->unk64);
    func_80078460(arg0);
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80078570);

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

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007893C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800789B8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80078AD4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80078C94);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80078DF4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800792D4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80079480);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80079944);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80079D4C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007A078);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007A0F8);

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

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007F604);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007F684);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007F978);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007FC08);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8007FCC8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80080C90);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80080F5C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80081004);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800814D8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8008156C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800815DC);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8008166C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8008181C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80081A00);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80081FD0);

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

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80083C04);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80083C98);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80083D84);

void func_80083DF0(Obj80085394 *arg0) {
    arg0->unkBA += arg0->unk18;
    arg0->unk18 += arg0->unk1A;
    if ((s16)arg0->unkBA <= arg0->unk1C) {
        arg0->unk12 = 0;
    }
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80083E30);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80083EB0);

void func_80083F6C(Obj80085510 *arg0) {
    arg0->unk0 += arg0->unk18;
    arg0->unk2 += arg0->unk1A;
    arg0->unk4 += arg0->unk1C;
    arg0->unkC6 += arg0->unk20;
    arg0->unkC8 += arg0->unk22;
    arg0->unkCA += arg0->unk24;
    arg0->unk1A += 6;
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80083FDC);

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

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80085620);

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

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80087DE8);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80087EE0);

void func_8008800C(Obj8008800C *arg0) {
    if (--arg0->unk2A == 0) {
        arg0->unk12 = 0;
    }
    arg0->unkE = func_8006D990(arg0->unkE, arg0);
    func_80087EE0(arg0, &arg0->unk24, arg0->unk1A, arg0->unk1C, arg0->unk1E, arg0->unk20);
}

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80088084);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800881B4);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80088300);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80088444);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800884DC);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800885A0);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_8008868C);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80088790);

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

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80088DA0);

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

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_80089154);

INCLUDE_ASM("asm/USA/fdat204/nonmatchings/fdat204", func_800891D0);

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
