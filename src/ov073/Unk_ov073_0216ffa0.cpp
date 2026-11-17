#include "ov073/Unk_ov073_0216ffa0.hpp"

extern "C" void func_ov073_0216ffa0(s32 arg0);
extern "C" s32 func_ov073_0216ffcc(...);
extern "C" void func_ov073_0217001c(s32 arg0);
extern "C" void func_ov073_02170030(s32 arg0);
extern "C" s32 func_ov073_02170044(...);
extern "C" s32 func_ov073_0217005c(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void func_ov073_02170084(void);
extern "C" s32 func_ov073_021700bc(...);
extern "C" s32 func_ov073_021700d8(...);
extern "C" s32 func_ov073_021701d4(u8 *arg0);
extern "C" s32 func_ov073_021702a8(...);
extern "C" s32 func_ov073_02170300(u8 *arg0);
extern "C" s32 func_ov073_021703fc(...);
extern "C" void func_ov073_02170550(void);
extern "C" void func_ov073_02170554(void);
extern "C" void func_ov073_02170558(u8 *arg0);
extern "C" s32 func_ov073_021705cc(u8 *arg0);
extern "C" s32 func_ov073_02170634(u8 *arg0);
extern "C" s32 func_ov073_0217067c(u8 *arg0);
extern "C" s32 func_ov073_021706cc(s32 arg0);
extern "C" void func_ov073_021706e0(void);

extern "C" char gFont12Manager[];
extern "C" char gBgMenuManager[];
extern "C" char data_ov073_021706e4[];
extern "C" char data_ov073_021706e4_b[];
extern "C" char data_ov073_02170814[];
extern "C" s32 DC_FlushRange(...);
extern "C" s32 G2S_GetBG1CharPtr(...);
extern "C" s32 G2S_GetBG2CharPtr(...);
extern "C" s32 MI_CpuFill8(...);
extern "C" s32 MIi_CpuClearFast(...);
extern "C" void _ZN8TextFont10SetSpacingEii(void);
extern "C" s32 _ZdlPv(...);
extern "C" s32 GXS_LoadBG0Scr(...);
extern "C" s32 GXS_LoadBG0Char(...);
extern "C" void GXS_LoadBG2Char(void);
extern "C" void func_0209d8b8(void);
extern "C" s32 Graphics_LoadBGPaletteSub(...);
extern "C" void Graphics_LoadTempPaletteFromPac(void);
extern "C" void Graphics_SetupScreen(void);
extern "C" void Graphics_LoadBGXCharSub(void);
extern "C" void func_ov015_02133dc8(void);
extern "C" s32 func_ov015_02133e24(...);
extern "C" s32 func_ov015_02133e50(...);
extern "C" s32 func_ov015_02133e8c(...);
extern "C" s32 Archive_RequestNewRead(...);
extern "C" void Archive_ReadFromSFP(void);
extern "C" s32 Archive_TryFinalize(...);
extern "C" s32 Archive_Close(...);
extern "C" void Archive_Deallocate(void);
extern "C" s32 func_ov015_02135440(...);
extern "C" s32 func_ov015_02135e10(...);
extern "C" s32 CBgMenuManager_Init(...);
extern "C" s32 CBgMenuManager_Finalize(...);
extern "C" s32 CBgMenuManager_AddStatic(...);
extern "C" s32 CBgMenuManager_DeleteGroup(...);
extern "C" s32 CBgMenuManager_UpdateGraphics(...);
extern "C" s32 CBgMenuManager_Draw(...);

extern "C" void func_ov073_0216ffa0(s32 arg0)
{
    MI_CpuFill8((arg0 + 0x20), 0, 0x30);
    Archive_RequestNewRead((s32)data_ov073_02170814, (arg0 + 0x20));
}

extern "C" asm s32 func_ov073_0216ffcc(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r1, =data_ov073_021706e4
    ldr r6, [r0, #0x20]
    ldr r1, [r1]
    ldr r7, =data_ov073_021706e4_b
    cmp r1, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    add r5, r0, #0x20
    mov r4, #0xc
@L_0216fff0:
    ldr r2, [r7, #4]
    mov r0, r1
    mla r1, r2, r4, r5
    mov r2, r6
    bl Archive_ReadFromSFP
    ldr r1, [r7, #8]!
    cmp r1, #0
    bne @L_0216fff0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" void func_ov073_0217001c(s32 arg0)
{
    Archive_TryFinalize((arg0 + 0x20), 4);
}

extern "C" void func_ov073_02170030(s32 arg0)
{
    Archive_Close((arg0 + 0x20), 4);
}

extern "C" asm s32 func_ov073_02170044(...)
{
    add r2, r0, #0x20
    mov r0, #0xc
    mla r0, r1, r0, r2
    ldr r12, =Archive_Deallocate
    bx r12
}

extern "C" s32 func_ov073_0217005c(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 r4;
    s32 r5;
    r4 = 0;
    r5 = arg0;
    do {
        s32 v0 = func_ov073_02170044(r5, r4);
        arg0 = v0;
        r4 = (r4 + 1);
    } while (r4 < 4);
    return arg0;
}

extern "C" asm void func_ov073_02170084(void)
{
    ldrsb r2, [r1]
    mov r0, #1
    cmp r2, #0
    bxeq lr
@L_02170094:
    ldrsb r2, [r1]
    cmp r2, #0xa
    bne @L_021700ac
    ldrsb r2, [r1, #1]
    cmp r2, #0
    addne r0, r0, #1
@L_021700ac:
    ldrsb r2, [r1, #1]!
    cmp r2, #0
    bne @L_02170094
    bx lr
}

extern "C" asm s32 func_ov073_021700bc(...)
{
    mov r3, #0xc
    mla r0, r1, r3, r0
    ldr r1, [r0, #0x20]
    ldr r12, =Graphics_LoadBGXCharSub
    mov r0, #1
    bx r12
}

extern "C" asm s32 func_ov073_021700d8(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r5, r0
    ldr r6, [r5, #0x2c]
    mov r7, #1
    cmp r6, #0
    mov r4, #0
    beq @L_0217011c
    ldr r0, [r6, #0xc]
    ldr r1, [r6, #0x10]
    mov r2, r4
    mov r3, r7
    add r0, r6, r0
    bl Graphics_SetupScreen
    mov r0, r6
    mov r1, r7
    mov r2, r7
    bl Graphics_LoadTempPaletteFromPac
@L_0217011c:
    ldr r8, [r5, #0x38]
    cmp r8, #0
    beq @L_02170158
    ldr r0, [r8, #0xc]
    mov r6, #2
    ldr r1, [r8, #0x10]
    mov r2, r7
    mov r3, r6
    add r0, r8, r0
    bl Graphics_SetupScreen
    mov r4, r0
    mov r0, r8
    mov r1, r7
    mov r2, r6
    bl Graphics_LoadTempPaletteFromPac
@L_02170158:
    ldr r7, [r5, #0x44]
    cmp r7, #0
    beq @L_02170190
    ldr r0, [r7, #0xc]
    mov r6, #3
    ldr r1, [r7, #0x10]
    mov r3, r6
    add r0, r7, r0
    add r2, r4, #1
    bl Graphics_SetupScreen
    mov r0, r7
    mov r2, r6
    mov r1, #1
    bl Graphics_LoadTempPaletteFromPac
@L_02170190:
    ldr r0, [r5, #0xc]
    mov r2, #0
    cmp r0, #0
    ldrne r1, [r5, #0x10]
    cmpne r1, #0
    movne r2, #1
    cmp r2, #0
    beq @L_021701cc
    ldrh r4, [r5, #0x18]
    ldrh r1, [r5, #0x1a]
    mov r2, #1
    mov r3, #0
    mul r1, r4, r1
    mov r1, r1, lsl #1
    bl Graphics_SetupScreen
@L_021701cc:
    bl Graphics_LoadBGPaletteSub
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" s32 func_ov073_021701d4(u8 *arg0)
{
    s32 r0;
    u8 *r6;
    s32 v2;
    s32 v4;
    s32 v6;
    s32 v8;
    s32 v10;
    s32 v12;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    r6 = (u8 *)*(s32 *)(arg0 + 0x2C);
    if ((s32)r6 != 0) {
        t0 = (s32)(r6 + *(s32 *)(r6 + 0x14));
        t1 = *(s32 *)(r6 + 0x18);
        GXS_LoadBG0Char(t0, 0, t1);
        t2 = (s32)(r6 + *(s32 *)(r6 + 0xC));
        t3 = *(s32 *)(r6 + 0x10);
        GXS_LoadBG0Scr(t2, 0, t3);
    }
    v2 = G2S_GetBG1CharPtr();
    MIi_CpuClearFast(0, v2, 0x20);
    v4 = G2S_GetBG1CharPtr();
    DC_FlushRange(v4, 0x20);
    v6 = func_ov073_021700bc((s32)arg0, 2, 0x20);
    func_ov073_021700bc((s32)arg0, 3, v6);
    v8 = G2S_GetBG2CharPtr();
    MIi_CpuClearFast(0, v8, 0x20);
    v10 = G2S_GetBG2CharPtr();
    DC_FlushRange(v10, 0x20);
    if ((*(s32 *)(arg0 + 0xC) != 0 && *(s32 *)(arg0 + 0x10) != 0)) {
        r0 = 1;
    } else {
        r0 = 0;
    }
    if (r0 != 0) {
        *(s32 *)(arg0 + 0x14) = 0x20;
        r0 = 0x20;
    }
    v12 = Graphics_LoadBGPaletteSub(r0);
    return v12;
}

extern "C" asm s32 func_ov073_021702a8(...)
{
    stmdb sp!, {r3, lr}
    mov lr, r0
    ldr r0, [lr, #0xc]
    cmp r0, #0
    ldrne r0, [lr, #0x10]
    cmpne r0, #0
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    ldrneb r0, [lr, #0x1c]
    cmpne r0, #0
    ldmeqia sp!, {r3, pc}
    ldrh r2, [lr, #0x18]
    ldrh r1, [lr, #0x1a]
    mov r12, #0
    ldr r0, [lr, #0x10]
    mul r3, r2, r1
    ldr r1, [lr, #0x14]
    mov r2, r3, lsl #5
    strb r12, [lr, #0x1c]
    bl GXS_LoadBG2Char
    ldmia sp!, {r3, pc}
}

extern "C" s32 func_ov073_02170300(u8 *arg0)
{
    u8 *r2;
    u8 *r3;
    s32 r4;
    s32 r5;
    s32 v4;
    r5 = 1;
    r4 = 0;
    CBgMenuManager_DeleteGroup((u8 *)((u8 *)&gBgMenuManager), 1, 1, 0);
    r2 = (u8 *)*(s32 *)(arg0 + 0x38);
    if ((s32)r2 != 0) {
        CBgMenuManager_AddStatic((u8 *)((u8 *)&gBgMenuManager), r5, r5, r4, r5, r5, r5, 2, 0x1E, 3, 2, (s32)((r2 + *(s32 *)(r2 + 0xC)) + 0x168));
    }
    r3 = (u8 *)*(s32 *)(arg0 + 0x44);
    if ((s32)r3 != 0) {
        CBgMenuManager_AddStatic((u8 *)((u8 *)&gBgMenuManager), 1, 1, 0, 2, 1, 2, 8, 0x1C, 9, 3, (s32)(r3 + *(s32 *)(r3 + 0xC)));
    }
    func_ov073_021703fc((s32)arg0);
    v4 = CBgMenuManager_UpdateGraphics((u8 *)((u8 *)&gBgMenuManager), 1);
    return v4;
}

extern "C" asm s32 func_ov073_021703fc(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x20
    mov r8, r0
    ldr r0, =0x125
    bl func_0209d8b8
    ldr r12, [r8, #0xc]
    mov r7, r0
    cmp r12, #0
    ldrne r0, [r8, #0x10]
    mov r1, #0
    cmpne r0, #0
    movne r1, #1
    cmp r1, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r6, #3
    mov r5, #1
    str r6, [sp]
    str r5, [sp, #4]
    mov r0, #4
    str r0, [sp, #8]
    mov r4, #0
    mov r0, #9
    str r0, [sp, #0xc]
    mov r0, #0x18
    str r0, [sp, #0x10]
    mov r0, #7
    str r0, [sp, #0x14]
    str r4, [sp, #0x18]
    ldr r0, =gBgMenuManager
    mov r1, r5
    mov r2, r4
    mov r3, r4
    str r12, [sp, #0x1c]
    bl CBgMenuManager_AddStatic
    add r0, r8, #0xc
    bl func_ov015_02133dc8
    mov r0, r8
    mov r1, r7
    bl func_ov073_02170084
    mov r7, #0xa
    smulbb r0, r0, r7
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
    rsb r0, r0, #0x1e
    mov r0, r0, lsl #0x10
    mov r10, r0, asr #0x10
    ldr r9, =gFont12Manager
    mov r1, r5
    ldr r0, [r9]
    mov r2, #8
    bl _ZN8TextFont10SetSpacingEii
    add r0, r7, #0x20c
    bl func_0209d8b8
    str r6, [sp]
    mov r2, r10
    str r5, [sp, #4]
    mov r3, r0
    ldr r0, [r8, #0x10]
    mov r1, r4
    str r0, [sp, #8]
    ldrh r0, [r8, #0x18]
    mov r0, r0, lsl #3
    str r0, [sp, #0xc]
    ldrh r0, [r8, #0x1a]
    mov r0, r0, lsl #3
    str r0, [sp, #0x10]
    str r4, [sp, #0x14]
    str r4, [sp, #0x18]
    ldr r0, [r9]
    ldr r4, [r0]
    ldr r4, [r4, #8]
    blx r4
    strb r5, [r8, #0x1c]
    ldr r0, [r8, #0x10]
    ldrh r2, [r8, #0x18]
    ldrh r1, [r8, #0x1a]
    mul r1, r2, r1
    mov r1, r1, lsl #5
    bl DC_FlushRange
    add sp, sp, #0x20
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" void func_ov073_02170550(void)
{
}

extern "C" void func_ov073_02170554(void)
{
}

extern "C" void func_ov073_02170558(u8 *arg0)
{
    u8 *t0;
    s32 t1;
    MI_CpuFill8((arg0 + 0x20), 0, 0x30);
    t0 = *(u8 * *)(arg0 + 0x4);
    t1 = *(s32 *)(*(u8 * *)(*(u8 * *)(arg0 + 0x4)) + 0x28);
    ((s32 (*)(...))*(s32 *)(*(u8 * *)(*(u8 * *)(arg0 + 0x4)) + 0x28))(t0, 1, t1);
    func_ov015_02135440(6);
    CBgMenuManager_Init((s32)gBgMenuManager, 1);
    func_ov015_02133e24((arg0 + 0xC), 1);
    func_ov015_02133e50((arg0 + 0xC), 0x18, 7);
    func_ov073_0216ffa0((s32)arg0);
    *(s32 *)(arg0 + 0x8) = 1;
    return;
}

extern "C" s32 func_ov073_021705cc(u8 *arg0)
{
    s32 r1;
    s32 v0;
    s32 v4;
    r1 = *(s32 *)(arg0 + 0x8);
    switch (r1) {
        default:
            return (s32)arg0;
        case 1:
            v0 = ((s32 (*)(...))func_ov073_0217001c)((s32)arg0, r1);
            if (v0 == 0)
                return v0;
            func_ov073_0216ffcc((s32)arg0);
            func_ov073_021700d8((s32)arg0);
            *(s32 *)(arg0 + 0x8) = 2;
            return 2;
        case 3:
            ((s32 (*)(...))func_ov073_02170300)((s32)arg0, r1);
            *(s32 *)(arg0 + 0x8) = 4;
            return 4;
        case 4:
            v4 = ((s32 (*)(...))func_ov073_02170300)((s32)arg0, r1);
            return v4;
    }
}

extern "C" s32 func_ov073_02170634(u8 *arg0)
{
    s32 r1;
    s32 v2;
    r1 = *(s32 *)(arg0 + 0x8);
    switch (r1) {
        default:
            return (s32)arg0;
        case 2:
            ((s32 (*)(...))func_ov073_021701d4)((s32)arg0, r1);
            *(s32 *)(arg0 + 0x8) = 3;
            return 3;
        case 4:
            func_ov073_021702a8((s32)arg0, r1);
            v2 = CBgMenuManager_Draw((u8 *)((u8 *)&gBgMenuManager), 1);
            return v2;
    }
}

extern "C" s32 func_ov073_0217067c(u8 *arg0)
{
    s32 v5;
    u8 *t0;
    func_ov073_02170030((s32)arg0);
    ((s32 (*)(...))func_ov073_0217005c)((s32)arg0);
    CBgMenuManager_Finalize((s32)((u8 *)&gBgMenuManager), 1);
    func_ov015_02133e8c((s32)(arg0 + 0xC), 1);
    func_ov015_02135e10();
    t0 = *(u8 * *)(arg0 + 0x4);
    v5 = ((s32 (*)(...))*(s32 *)(*(u8 * *)(*(u8 * *)(arg0 + 0x4)) + 0xC))(t0, 1);
    return v5;
}

extern "C" s32 func_ov073_021706cc(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov073_021706e0(void)
{
}
