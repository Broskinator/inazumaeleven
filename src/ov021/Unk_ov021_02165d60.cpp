#include "ov021/Unk_ov021_02165d60.hpp"

extern "C" s32 func_ov021_02165d60(u8 *arg0);
extern "C" void func_ov021_02165d94(void);
extern "C" void func_ov021_02165d98(s32 arg0);
extern "C" void func_ov021_02165dac(s32 arg0);
extern "C" s32 func_ov021_02165dc0(...);
extern "C" void func_ov021_02165dd8(s32 arg0);
extern "C" s32 func_ov021_02165de8(u8 *arg0);
extern "C" s32 func_ov021_02165e58(...);
extern "C" void func_ov021_02165e98(u8 *arg0, s32 arg1);
extern "C" void func_ov021_02165eb8(u8 *arg0, u8 *arg1);
extern "C" void func_ov021_02165ee0(u8 *arg0);
extern "C" void func_ov021_02165f34(u8 *arg0);
extern "C" s32 func_ov021_02165fd8(u8 *arg0);
extern "C" void func_ov021_02166020(s32 arg0);
extern "C" s32 func_ov021_021660b0(s32 arg0);
extern "C" void func_ov021_021660c4(void);

extern "C" char gBgMenuManager[];
extern "C" char data_ov021_021661cc[];
extern "C" s32 G2_GetBG1ScrPtr(...);
extern "C" s32 G2_GetBG2ScrPtr(...);
extern "C" s32 G2_GetBG3ScrPtr(...);
extern "C" s32 MI_CpuFill8(...);
extern "C" void _ZN13ScreenManager12SetNextSceneEii(void);
extern "C" s32 _ZdlPv(...);
extern "C" s32 GX_LoadBG2Scr(...);
extern "C" s32 GX_LoadBG2Char(...);
extern "C" s32 Graphics_LoadBGPaletteMain(...);
extern "C" s32 Graphics_LoadTempPaletteFromPac(...);
extern "C" void func_ov015_0213257c(void);
extern "C" void Graphics_FadeScreensBlack(void);
extern "C" s32 Graphics_SetupScreen(...);
extern "C" s32 func_ov015_02132c08(...);
extern "C" s32 Archive_RequestNewRead(...);
extern "C" s32 Archive_TryFinalize(...);
extern "C" s32 Archive_Close(...);
extern "C" void Archive_Deallocate(void);
extern "C" s32 CBgMenuManager_Init(...);
extern "C" s32 CBgMenuManager_Finalize(...);
extern "C" s32 CBgMenuManager_SetScreens(...);
extern "C" void CBgMenuManager_UpdateGraphics(void);
extern "C" s32 CBgMenuManager_Draw(...);

extern "C" s32 func_ov021_02165d60(u8 *arg0)
{
    MI_CpuFill8((arg0 + 0xC), 0, 0xC);
    Archive_RequestNewRead((s32)data_ov021_021661cc, (arg0 + 0xC));
    *(s32 *)(arg0 + 0x8) = 1;
    return 1;
}

extern "C" void func_ov021_02165d94(void)
{
}

extern "C" void func_ov021_02165d98(s32 arg0)
{
    Archive_TryFinalize((arg0 + 0xC), 1);
}

extern "C" void func_ov021_02165dac(s32 arg0)
{
    Archive_Close((arg0 + 0xC), 1);
}

extern "C" asm s32 func_ov021_02165dc0(...)
{
    add r2, r0, #0xc
    mov r0, #0xc
    mla r0, r1, r0, r2
    ldr r12, =Archive_Deallocate
    bx r12
}

extern "C" void func_ov021_02165dd8(s32 arg0)
{
    func_ov021_02165dc0(arg0, 0);
}

extern "C" s32 func_ov021_02165de8(u8 *arg0)
{
    u8 *r6;
    s32 v4;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    s32 t5;
    r6 = (u8 *)*(s32 *)(arg0 + 0xC);
    if ((s32)r6 != 0) {
        Graphics_LoadTempPaletteFromPac((s32)r6, 0, 1);
        t0 = (s32)(r6 + *(s32 *)(r6 + 0xC));
        t1 = *(s32 *)(r6 + 0x10);
        Graphics_SetupScreen(t0, t1, 0, 1);
        t2 = (s32)(r6 + *(s32 *)(r6 + 0x14));
        t3 = *(s32 *)(r6 + 0x18);
        GX_LoadBG2Char(t2, 0, t3);
        t4 = (s32)(r6 + *(s32 *)(r6 + 0xC));
        t5 = *(s32 *)(r6 + 0x10);
        GX_LoadBG2Scr(t4, 0, t5);
    }
    v4 = Graphics_LoadBGPaletteMain();
    return v4;
}

extern "C" asm s32 func_ov021_02165e58(...)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    mov r1, #5
    mov r0, #6
    str r1, [r4, #8]
    bl Graphics_FadeScreensBlack
    ldr r4, [r4, #4]
    mov r1, #0
    mov r0, r4
    mov r2, #0x20
    bl _ZN13ScreenManager12SetNextSceneEii
    mov r0, r4
    mov r1, #1
    mov r2, #0x21
    bl _ZN13ScreenManager12SetNextSceneEii
    ldmia sp!, {r4, pc}
}

extern "C" void func_ov021_02165e98(u8 *arg0, s32 arg1)
{
    if (*(s32 *)(arg0 + 0x8) != 4)
        return;
    if (arg1 == 0)
        return;
    func_ov021_02165e58((s32)arg0, arg1, *(s32 *)(arg0 + 0x8));
}

extern "C" void func_ov021_02165eb8(u8 *arg0, u8 *arg1)
{
    u16 t0;
    u16 t1;
    if (*(s32 *)(arg0 + 0x8) != 4)
        return;
    if (*(u16 *)(arg1 + 0x4) != 1)
        return;
    if (*(u16 *)(arg1 + 0x6) != 0)
        return;
    t0 = *(u16 *)(arg1 + 0x6);
    t1 = *(u16 *)(arg1 + 0x4);
    func_ov021_02165e58((s32)arg0, t0, t1);
    return;
}

extern "C" void func_ov021_02165ee0(u8 *arg0)
{
    *(s32 *)(arg0 + 0x8) = 0;
    CBgMenuManager_Init((s32)gBgMenuManager, 0);
    s32 v1 = G2_GetBG3ScrPtr();
    s32 v2 = G2_GetBG1ScrPtr();
    CBgMenuManager_SetScreens((s32)gBgMenuManager, 0, v1, v2, 0);
    func_ov021_02165d60(arg0);
}

extern "C" void func_ov021_02165f34(u8 *arg0)
{
    switch (*(s32 *)(arg0 + 8)) {
    case 1:
        if (((s32 (*)(...))func_ov021_02165d98)(arg0) != 0) {
            ((s32 (*)(...))func_ov021_02165d94)(arg0);
            *(s32 *)(arg0 + 8) = 2;
        }
        break;
    case 3:
        ((s32 (*)(...))CBgMenuManager_Finalize)(gBgMenuManager, 0);
        ((s32 (*)(...))CBgMenuManager_Init)(gBgMenuManager, 0);
        ((s32 (*)(...))CBgMenuManager_UpdateGraphics)(gBgMenuManager, 0);
        ((s32 (*)(...))func_ov015_0213257c)(6);
        *(s32 *)(arg0 + 8) = 4;
        break;
    case 4:
    case 5:
        ((s32 (*)(...))CBgMenuManager_UpdateGraphics)(gBgMenuManager, 0);
        break;
    }
}

extern "C" s32 func_ov021_02165fd8(u8 *arg0)
{
    s32 r1;
    s32 v1;
    r1 = *(s32 *)(arg0 + 0x8);
    switch (r1) {
        default:
            return (s32)arg0;
        case 2:
            ((s32 (*)(...))func_ov021_02165de8)((s32)arg0, r1);
            *(s32 *)(arg0 + 0x8) = 3;
            return 3;
        case 4:
        case 5:
            v1 = CBgMenuManager_Draw((u8 *)((u8 *)&gBgMenuManager), 0);
            return v1;
    }
}

extern "C" void func_ov021_02166020(s32 arg0)
{
    s32 v0 = G2_GetBG3ScrPtr(arg0);
    s32 v1 = G2_GetBG1ScrPtr();
    s32 v2 = G2_GetBG2ScrPtr();
    CBgMenuManager_SetScreens((s32)gBgMenuManager, 0, v0, v1, v2);
    CBgMenuManager_Finalize((s32)gBgMenuManager, 0);
    func_ov021_02165dac(arg0);
    func_ov021_02165dd8(arg0);
    func_ov015_02132c08(1, 0x10);
    func_ov015_02132c08(2, 0x10);
    func_ov015_02132c08(3, 0x10);
}

extern "C" s32 func_ov021_021660b0(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov021_021660c4(void)
{
}
