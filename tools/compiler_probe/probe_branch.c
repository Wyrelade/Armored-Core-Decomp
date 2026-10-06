typedef unsigned short u16; typedef short s16; typedef unsigned char u8; typedef int s32;
extern s32 D_8008D91C; extern u8 D_8008D920;
extern s32 func_80016278();
s32 func_8004C1BC(void) {
    if (func_80016278(D_8008D91C) >= 300) {
        D_8008D920 = 1;
        return 0;
    }
    return 1;
}
