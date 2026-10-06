typedef unsigned short u16; typedef short s16; typedef unsigned char u8; typedef int s32;
extern void func_800309A8(s32, s32, s32);
extern void func_80020440(s32, s32, s32);
extern void func_8004D178(s32, s32, s32, s32, s32);
extern s32 D_801A5F2C[];
extern s32 D_801A5F30;

void func_8004C234(void) { func_800309A8(4, 0, 0); }
void func_8004D948(s16 a) { func_80020440(0, a, a); }
void func_8004CFC8(s32 a, s32 b) { func_8004D178(a, 0, b, b, 0); }
u8 *func_8005E97C(u8 *src, u8 *dst) {
    dst[0] = *src++;
    dst[1] = *src++;
    dst[2] = *src++;
    return src;
}
void func_800579D4(u16 i) { s32 tmp[2]; D_801A5F30 = D_801A5F2C[i]; }
