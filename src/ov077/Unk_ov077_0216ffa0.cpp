#include "ov077/Unk_ov077_0216ffa0.hpp"
#include "game/vcall.hpp"

extern "C" s32 func_ov077_0216ffa0(...);
extern "C" s32 func_ov077_0217003c(...);
extern "C" s32 func_ov077_0217006c(...);
extern "C" s32 func_ov077_02170094(...);
extern "C" s32 func_ov077_02170148(...);
extern "C" void func_ov077_0217025c(u8 *arg0);
extern "C" void func_ov077_02170270(u8 *arg0);
extern "C" s32 func_ov077_021702b4(u8 *arg0);
extern "C" void func_ov077_02170320(s32 arg0);
extern "C" s32 func_ov077_02170340(s32 arg0);
extern "C" void func_ov077_02170354(void);

extern "C" char gDebugFont[];
extern "C" char data_020c4ab4[];
extern "C" char data_020c4b32[];
extern "C" char data_020c4b52[];
extern "C" char gSubScreen0[];
extern "C" char gSubScreen1[];
extern "C" char gSubScreen2[];
extern "C" char data_ov077_0217044c[];
extern "C" char data_ov077_02170458[];
extern "C" s32 DC_FlushRange(...);
extern "C" void G2S_GetBG0CharPtr(void);
extern "C" void G2S_GetBG1CharPtr(void);
extern "C" void MI_CpuFill8(void);
extern "C" void MIi_CpuClearFast(void);
extern "C" s32 _ZdlPv(...);
extern "C" void GXS_LoadBG0Scr(void);
extern "C" void GXS_LoadBG1Scr(void);
extern "C" s32 GXS_LoadBG2Scr(...);
extern "C" void GXS_LoadBG0Char(void);
extern "C" void GXS_LoadBG2Char(void);
extern "C" void Graphics_LoadBGPaletteSub(void);
extern "C" void Graphics_LoadTempPaletteFromPac(void);
extern "C" void Graphics_SetupScreen(void);
extern "C" void Archive_RequestNewRead(void);
extern "C" void Archive_ReadFromSFP(void);
extern "C" s32 Archive_TryFinalize(...);
extern "C" s32 Archive_Close(...);
extern "C" void Archive_Deallocate(void);
extern "C" void sprintf(void);

extern "C" asm s32 func_ov077_0216ffa0(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x80
    mov r5, r0
    mov r4, #0
    mov r1, r4
    add r0, r5, #0x10
    mov r2, #0x18
    bl MI_CpuFill8
    ldr r0, =data_020c4ab4
    ldrsb r0, [r0, #0x7e]
    cmp r0, #0
    movne r4, #1
    strb r4, [r5, #0xc]
    tst r4, #0xff
    add r4, sp, #0
    beq @L_0216fffc
    ldr r1, =data_ov077_0217044c
    ldr r2, =data_020c4b32
    mov r0, r4
    bl sprintf
    mov r0, r4
    add r1, r5, #0x10
    b @L_02170014
@L_0216fffc:
    ldr r1, =data_ov077_02170458
    ldr r2, =data_020c4b52
    mov r0, r4
    bl sprintf
    mov r0, r4
    add r1, r5, #0x1c
@L_02170014:
    bl Archive_RequestNewRead
    mov r0, #1
    str r0, [r5, #8]
    add sp, sp, #0x80
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm s32 func_ov077_0217003c(...)
{
    stmdb sp!, {r3, lr}
    mov r1, r0
    ldrb r0, [r1, #0xc]
    cmp r0, #0
    ldrne r2, [r1, #0x10]
    cmpne r2, #0
    ldmeqia sp!, {r3, pc}
    ldr r0, =data_020c4b52
    add r1, r1, #0x1c
    bl Archive_ReadFromSFP
    ldmia sp!, {r3, pc}
}

extern "C" asm s32 func_ov077_0217006c(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, #0
    add r5, r0, #0x10
    mov r4, #0xc
@L_0217007c:
    mla r0, r6, r4, r5
    bl Archive_Deallocate
    add r6, r6, #1
    cmp r6, #2
    blt @L_0217007c
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm s32 func_ov077_02170094(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r5, [r0, #0x1c]
    cmp r5, #0
    beq @L_021700d0
    ldr r0, [r5, #0xc]
    mov r4, #1
    ldr r1, [r5, #0x10]
    mov r3, r4
    add r0, r5, r0
    mov r2, #0
    bl Graphics_SetupScreen
    mov r0, r5
    mov r1, r4
    mov r2, r4
    bl Graphics_LoadTempPaletteFromPac
@L_021700d0:
    ldr r4, =gSubScreen2
    mov r6, #0
    mov r5, #0x800
    mov r0, r6
    mov r1, r4
    mov r2, r5
    bl MIi_CpuClearFast
    mov r0, r4
    mov r1, r5
    bl DC_FlushRange
    ldr r4, =gSubScreen1
    mov r0, r6
    mov r1, r4
    mov r2, r5
    bl MIi_CpuClearFast
    mov r0, r4
    mov r1, r5
    bl DC_FlushRange
    mov r0, r6
    ldr r4, =gSubScreen0
    mov r2, r5
    mov r1, r4
    bl MIi_CpuClearFast
    mov r0, r4
    mov r1, r5
    bl DC_FlushRange
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm s32 func_ov077_02170148(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    bl G2S_GetBG0CharPtr
    mov r4, #0x20
    mov r5, #0
    mov r1, r0
    mov r0, r5
    mov r2, r4
    bl MIi_CpuClearFast
    bl G2S_GetBG0CharPtr
    mov r1, r4
    bl DC_FlushRange
    ldr r4, [r6, #0x1c]
    cmp r4, #0
    beq @L_021701ac
    ldr r0, [r4, #0x14]
    ldr r2, [r4, #0x18]
    mov r1, r5
    add r0, r4, r0
    bl GXS_LoadBG0Char
    ldr r0, [r4, #0xc]
    ldr r2, [r4, #0x10]
    mov r1, r5
    add r0, r4, r0
    b @L_021701b8
@L_021701ac:
    ldr r0, =gSubScreen2
    mov r1, r5
    mov r2, #0x800
@L_021701b8:
    bl GXS_LoadBG0Scr
    bl G2S_GetBG1CharPtr
    mov r5, #0x20
    mov r6, #0
    mov r1, r0
    mov r0, r6
    mov r2, r5
    bl MIi_CpuClearFast
    bl G2S_GetBG1CharPtr
    mov r1, r5
    bl DC_FlushRange
    mov r4, #0x800
    ldr r0, =gSubScreen1
    mov r1, r6
    mov r2, r4
    bl GXS_LoadBG1Scr
    bl G2S_GetBG1CharPtr
    mov r1, r0
    mov r0, r6
    mov r2, r5
    bl MIi_CpuClearFast
    bl G2S_GetBG1CharPtr
    mov r1, r5
    bl DC_FlushRange
    mov r2, r4
    ldr r0, =gSubScreen0
    mov r1, r6
    bl GXS_LoadBG2Scr
    mov r1, r6
    ldr r0, =gDebugFont
    ldr r3, [r0]
    ldr r0, [r3, #0x14]
    ldr r2, [r3, #0x18]
    add r0, r3, r0
    bl GXS_LoadBG2Char
    bl Graphics_LoadBGPaletteSub
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" void func_ov077_0217025c(u8 *arg0)
{
    *(s32 *)(arg0 + 0x8) = 0;
    func_ov077_0216ffa0((s32)arg0, 0);
}

extern "C" void func_ov077_02170270(u8 *arg0)
{
    if (*(s32 *)(arg0 + 0x8) != 1)
        return;
    s32 v0 = Archive_TryFinalize((arg0 + 0x10), 2);
    if (v0 == 0)
        return;
    func_ov077_0217003c((s32)arg0);
    func_ov077_02170094((s32)arg0);
    *(s32 *)(arg0 + 0x8) = 2;
}

extern "C" s32 func_ov077_021702b4(u8 *arg0)
{
    s32 r1;
    s32 v3;
    r1 = *(s32 *)(arg0 + 0x8);
    switch (r1) {
        default:
            return (s32)arg0;
        case 2:
            func_ov077_02170148((s32)arg0, r1);
            ((VCall *)arg0)->f19();
            *(s32 *)(arg0 + 0x8) = 3;
            return 3;
        case 3:
            DC_FlushRange((u8 *)((u8 *)&gSubScreen0), 0x800);
            v3 = GXS_LoadBG2Scr((u8 *)((u8 *)&gSubScreen0), 0, 0x800);
            return v3;
    }
}

extern "C" void func_ov077_02170320(s32 arg0)
{
    Archive_Close((arg0 + 0x10), 2);
    func_ov077_0217006c(arg0);
}

extern "C" s32 func_ov077_02170340(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov077_02170354(void)
{
}
