#include "ov085/Unk_ov085_0216ffa0.hpp"
#include "game/vcall.hpp"

extern "C" void func_ov085_0216ffa0(u8 *arg0);
extern "C" s32 func_ov085_0216ffc0(...);
extern "C" s32 func_ov085_021700f8(u8 *arg0);
extern "C" s32 func_ov085_02170134(...);
extern "C" s32 func_ov085_0217015c(u8 *arg0);
extern "C" void func_ov085_02170344(u8 *arg0);
extern "C" s32 func_ov085_02170554(...);
extern "C" s32 func_ov085_02170654(...);
extern "C" s32 func_ov085_02170744(...);
extern "C" s32 func_ov085_021708f0(u8 *arg0);
extern "C" s32 func_ov085_021709c0(...);
extern "C" void func_ov085_02170ae4(u8 *arg0);
extern "C" s32 func_ov085_02170b4c(u8 *arg0);
extern "C" s32 func_ov085_02170bd4(u8 *arg0);
extern "C" void func_ov085_02170c18(s32 arg0);
extern "C" s32 func_ov085_02170c48(s32 arg0);
extern "C" void func_ov085_02170c5c(void);

extern "C" char gBgMenuManager[];
extern "C" char data_020e88a0[];
extern "C" char data_ov085_02170c60[];
extern "C" char data_ov085_02170e3c[];
extern "C" char data_ov085_02170e48[];
extern "C" char data_ov085_02170e54[];
extern "C" char data_ov085_02170e60[];
extern "C" char data_ov085_02170e6c[];
extern "C" s32 DC_FlushRange(...);
extern "C" s32 G2S_GetBG1CharPtr(...);
extern "C" s32 MI_CpuFill8(...);
extern "C" s32 MIi_CpuClearFast(...);
extern "C" void _ZN11MatchEngine11GetTeamInfoEi(void);
extern "C" s32 _ZdlPv(...);
extern "C" s32 GXS_LoadBG0Scr(...);
extern "C" s32 func_ov001_02125f64(...);
extern "C" void func_ov001_0212602c(void);
extern "C" void func_ov001_021260f0(void);
extern "C" void func_ov001_02126128(void);
extern "C" s32 func_ov001_02126240(...);
extern "C" s32 func_ov001_02126338(...);
extern "C" void func_ov001_021263b4(void);
extern "C" void func_ov001_02126458(void);
extern "C" void func_ov001_0212816c(void);
extern "C" s32 Graphics_LoadBGPaletteSub(...);
extern "C" s32 Archive_TryFinalize(...);
extern "C" s32 Archive_Close(...);
extern "C" void Archive_Deallocate(void);
extern "C" void Archive_PackHeaderGetOffsetAndSize(void);
extern "C" s32 CBgMenuManager_Init(...);
extern "C" s32 CBgMenuManager_Finalize(...);
extern "C" s32 CBgMenuManager_AddStatic(...);
extern "C" s32 CBgMenuManager_DeleteGroup(...);
extern "C" s32 CBgMenuManager_UpdateGraphics(...);
extern "C" s32 CBgMenuManager_Draw(...);

extern "C" void func_ov085_0216ffa0(u8 *arg0)
{
    func_ov001_02126240(*(s32 *)(arg0 + 0x28), (arg0 + 0x28), (s32)data_ov085_02170c60);
}

extern "C" asm s32 func_ov085_0216ffc0(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r10, r0
    str r1, [r10, #0xc]
    cmp r1, #1
    beq @L_0216ffe4
    cmp r1, #2
    beq @L_0217000c
    b @L_021700d0
@L_0216ffe4:
    ldr r0, =data_ov085_02170e3c
    add r1, r10, #0x28
    bl func_ov001_0212602c
    ldr r0, =data_ov085_02170e48
    add r1, r10, #0x64
    bl func_ov001_021260f0
    ldr r0, =data_ov085_02170e54
    add r1, r10, #0x40
    bl func_ov001_021260f0
    b @L_021700d0
@L_0217000c:
    mov r5, #1
    mov r9, #0
    add r4, r10, #0x28
    mov r11, r5
    add r7, sp, #8
    add r6, sp, #4
@L_02170024:
    ldr r0, =data_020e88a0
    mov r1, r9
    bl _ZN11MatchEngine11GetTeamInfoEi
    mov r0, r9
    bl func_ov001_02126458
    mov r8, r0
    ldr r0, [r10, #0x64]
    mov r1, r8
    mov r2, r7
    mov r3, r6
    bl Archive_PackHeaderGetOffsetAndSize
    cmp r0, #0
    beq @L_02170078
    add r2, r9, #6
    mov r0, #0xc
    mla r1, r2, r0, r4
    str r5, [sp]
    ldr r0, =data_ov085_02170e60
    ldr r2, [sp, #8]
    ldr r3, [sp, #4]
    bl func_ov001_02126128
@L_02170078:
    mov r0, r9
    bl func_ov001_021263b4
    cmp r0, #0
    addne r8, r9, #0xc9
    ldr r0, [r10, #0x40]
    mov r1, r8
    mov r2, r7
    mov r3, r6
    bl Archive_PackHeaderGetOffsetAndSize
    cmp r0, #0
    beq @L_021700c4
    add r2, r9, #3
    mov r0, #0xc
    mla r1, r2, r0, r4
    str r11, [sp]
    ldr r2, [sp, #8]
    ldr r0, =data_ov085_02170e6c
    ldr r3, [sp, #4]
    bl func_ov001_02126128
@L_021700c4:
    add r9, r9, #1
    cmp r9, #2
    blt @L_02170024
@L_021700d0:
    mov r0, #1
    str r0, [r10, #8]
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 func_ov085_021700f8(u8 *arg0)
{
    s32 r1;
    s32 v0;
    r1 = *(s32 *)(arg0 + 0xC);
    switch (r1) {
        default:
            return (s32)arg0;
        case 1:
            v0 = func_ov085_0216ffc0((s32)arg0, 2);
            return v0;
        case 2:
            func_ov085_0216ffa0(arg0);
            *(s32 *)(arg0 + 0x8) = 2;
            return 2;
    }
}

extern "C" asm s32 func_ov085_02170134(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, #0
    add r5, r0, #0x28
    mov r4, #0xc
@L_02170144:
    mla r0, r6, r4, r5
    bl Archive_Deallocate
    add r6, r6, #1
    cmp r6, #0x10
    blt @L_02170144
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 func_ov085_0217015c(u8 *arg0)
{
    s32 local[1];
    u8 *r6;
    s32 v4;
    s32 v6;
    s32 v8;
    s32 v10;
    s32 v12;
    s32 v14;
    s32 v15;
    s32 v16;
    s32 v17;
    s32 v18;
    s32 v19;
    s32 v20;
    s32 v21;
    s32 v23;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    s32 t5;
    s32 t6;
    s32 t7;
    s32 t8;
    s32 t9;
    s32 t10;
    s32 t11;
    s32 t12;
    CBgMenuManager_Finalize((s32)((u8 *)&gBgMenuManager), 1);
    CBgMenuManager_Init((s32)((u8 *)&gBgMenuManager), 1);
    *(s32 *)(((u8 *)local)) = 0;
    r6 = (u8 *)*(s32 *)(arg0 + 0x88);
    if ((s32)r6 != 0) {
        func_ov001_02126338((s32)r6, (0 - 1), 2, 0, (s32)((u8 *)local));
        t0 = (s32)(r6 + *(s32 *)(r6 + 0xC));
        t1 = *(s32 *)(r6 + 0x10);
        GXS_LoadBG0Scr(t0, 0, t1);
    }
    *(s32 *)(((u8 *)local)) = 0x20;
    v4 = G2S_GetBG1CharPtr();
    MIi_CpuClearFast(0, v4, 0x20);
    v6 = G2S_GetBG1CharPtr();
    DC_FlushRange(v6, 0x20);
    t2 = *(s32 *)(arg0 + 0xC4);
    v8 = func_ov001_02126338(t2, 0, 1, 1, (s32)((u8 *)local));
    t3 = *(s32 *)(arg0 + 0xDC);
    func_ov001_02126338(t3, v8, 1, 1, (s32)((u8 *)local));
    *(s32 *)(((u8 *)local)) = 0x20;
    v10 = G2S_GetBG1CharPtr();
    MIi_CpuClearFast(0, v10, 0x20);
    v12 = G2S_GetBG1CharPtr();
    DC_FlushRange(v12, 0x20);
    t4 = *(s32 *)(arg0 + 0xA0);
    v14 = func_ov001_02126338(t4, 0, 3, 2, (s32)((u8 *)local));
    t5 = *(s32 *)(arg0 + 0xAC);
    v15 = func_ov001_02126338(t5, v14, 1, 2, (s32)((u8 *)local));
    t6 = *(s32 *)(arg0 + 0x94);
    v16 = func_ov001_02126338(t6, v15, 1, 2, (s32)((u8 *)local));
    t7 = *(s32 *)(arg0 + 0xB8);
    v17 = func_ov001_02126338(t7, v16, 1, 2, (s32)((u8 *)local));
    t8 = *(s32 *)(arg0 + 0x70);
    v18 = func_ov001_02126338(t8, v17, 4, 2, (s32)((u8 *)local));
    t9 = *(s32 *)(arg0 + 0x7C);
    v19 = func_ov001_02126338(t9, v18, 5, 2, (s32)((u8 *)local));
    t10 = *(s32 *)(arg0 + 0x4C);
    v20 = func_ov001_02126338(t10, v19, 6, 2, (s32)((u8 *)local));
    t11 = *(s32 *)(arg0 + 0x58);
    v21 = func_ov001_02126338(t11, v20, 6, 2, (s32)((u8 *)local));
    t12 = *(s32 *)(arg0 + 0x34);
    func_ov001_02126338(t12, v21, 7, 2, (s32)((u8 *)local));
    v23 = Graphics_LoadBGPaletteSub();
    return v23;
}

extern "C" void func_ov085_02170344(u8 *arg0)
{
    u8 *r3;
    u8 *r4;
    u8 *r12;
    r3 = (u8 *)*(s32 *)(arg0 + 0xDC);
    r4 = arg0;
    if ((s32)r3 != 0) {
        CBgMenuManager_AddStatic((s32)gBgMenuManager, 1, 1, 0, 1, 1, 5, 1, 0x16, 6, 1, (r3 + *(s32 *)(r3 + 0xC)));
    }
    r12 = (u8 *)*(s32 *)(r4 + 0xC4);
    if ((s32)r12 != 0) {
        CBgMenuManager_AddStatic((s32)gBgMenuManager, 1, 1, 0, 1, 1, 0, 8, 0x20, 0xE, 1, (r12 + *(s32 *)(r12 + 0xC)));
    }
    r3 = (u8 *)*(s32 *)(r4 + 0x4C);
    if ((s32)r3 != 0) {
        CBgMenuManager_AddStatic((s32)gBgMenuManager, 1, 0, 0, 1, 1, 7, 1, 6, 2, 6, (r3 + *(s32 *)(r3 + 0xC)));
    }
    r3 = (u8 *)*(s32 *)(r4 + 0x58);
    if ((s32)r3 != 0) {
        CBgMenuManager_AddStatic((s32)gBgMenuManager, 1, 0, 0, 1, 1, 0x13, 1, 6, 2, 6, (r3 + *(s32 *)(r3 + 0xC)));
    }
    r3 = (u8 *)*(s32 *)(r4 + 0x70);
    if ((s32)r3 != 0) {
        CBgMenuManager_AddStatic((s32)gBgMenuManager, 1, 0, 0, 1, 1, 1, 0xB, 5, 5, 4, (r3 + *(s32 *)(r3 + 0xC)));
    }
    if ((s32)*(u8 * *)(r4 + 0x7C) == 0)
        return;
    CBgMenuManager_AddStatic((s32)gBgMenuManager, 1, 0, 0, 1, 1, 1, 0x10, 5, 5, 5, (*(u8 * *)(r4 + 0x7C) + *(s32 *)(*(u8 * *)(r4 + 0x7C) + 0xC)));
    return;
}

extern "C" asm s32 func_ov085_02170554(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x20
    ldr r4, [r0, #0xac]
    mov r10, r1
    cmp r4, #0
    mov r9, r3
    addeq sp, sp, #0x20
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r4, #0xc]
    cmp r9, #0x64
    add r8, r4, r0
    blt @L_021705a4
    mov r4, r9
    ldr r3, =0x51eb851f
    mov r0, r4, lsr #0x1f
    smull r1, r9, r3, r4
    add r9, r0, r9, asr #5
    mov r3, #0x64
    smull r0, r1, r3, r9
    sub r9, r4, r0
@L_021705a4:
    mov r0, r2, lsl #0x18
    ldr r4, =0x66666667
    add r10, r10, #3
    mov r5, r0, asr #0x18
    mov r7, #1
    mov r6, #2
    mov r11, #3
@L_021705c0:
    str r7, [sp]
    mov r0, r10, lsl #0x18
    str r6, [sp, #4]
    mov r0, r0, asr #0x18
    str r0, [sp, #8]
    str r5, [sp, #0xc]
    str r11, [sp, #0x10]
    mov r0, #4
    str r0, [sp, #0x14]
    smull r0, r2, r4, r9
    mov r1, r9, lsr #0x1f
    add r2, r1, r2, asr #2
    mov r0, #0xa
    smull r1, r2, r0, r2
    sub r2, r9, r1
    mov r0, #0xc
    mul r0, r2, r0
    mov r2, #0
    str r7, [sp, #0x18]
    add r0, r8, r0, lsl #1
    str r0, [sp, #0x1c]
    ldr r0, =gBgMenuManager
    mov r1, r7
    mov r3, r2
    bl CBgMenuManager_AddStatic
    mov r1, r9
    smull r0, r9, r4, r1
    mov r0, r1, lsr #0x1f
    add r9, r0, r9, asr #2
    cmp r9, #0
    sub r10, r10, #3
    bgt @L_021705c0
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 func_ov085_02170654(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x20
    ldr r4, [r0, #0xb8]
    mov r10, r1
    cmp r4, #0
    mov r9, r3
    addeq sp, sp, #0x20
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r4, #0xc]
    cmp r9, #0x64
    add r8, r4, r0
    blt @L_021706a4
    mov r4, r9
    ldr r3, =0x51eb851f
    mov r0, r4, lsr #0x1f
    smull r1, r9, r3, r4
    add r9, r0, r9, asr #5
    mov r3, #0x64
    smull r0, r1, r3, r9
    sub r9, r4, r0
@L_021706a4:
    mov r0, r2, lsl #0x18
    ldr r4, =0x66666667
    add r10, r10, #1
    mov r5, r0, asr #0x18
    mov r7, #1
    mov r6, #2
    mov r11, #0xa
@L_021706c0:
    smull r1, r2, r4, r9
    mov r0, r9, lsr #0x1f
    add r2, r0, r2, asr #2
    smull r1, r0, r11, r2
    str r7, [sp]
    mov r0, r10, lsl #0x18
    sub r2, r9, r1
    add r1, r8, r2, lsl #2
    mov r2, #0
    mov r0, r0, asr #0x18
    str r6, [sp, #4]
    str r0, [sp, #8]
    str r5, [sp, #0xc]
    str r7, [sp, #0x10]
    str r6, [sp, #0x14]
    str r7, [sp, #0x18]
    str r1, [sp, #0x1c]
    ldr r0, =gBgMenuManager
    mov r1, r7
    mov r3, r2
    bl CBgMenuManager_AddStatic
    mov r1, r9
    smull r0, r9, r4, r1
    mov r0, r1, lsr #0x1f
    add r9, r0, r9, asr #2
    cmp r9, #0
    sub r10, r10, #1
    bgt @L_021706c0
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 func_ov085_02170744(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x30
    mov r10, r0
    ldr r1, [r10, #0xa0]
    cmp r1, #0
    addeq sp, sp, #0x30
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r1, #0xc]
    mov r5, #0
    add r8, r1, r0
    mov r0, #7
    str r5, [sp, #0x20]
    str r0, [sp, #0x24]
    b @L_021708cc
@L_0217077c:
    ldr r0, [sp, #0x20]
    mov r6, #0xc
    add r11, r10, r0
    ldr r0, [sp, #0x24]
    mov r9, #0
    sub r0, r0, #1
    mov r1, r0, lsl #0x18
    ldr r0, [sp, #0x24]
    mov r4, #1
    mov r2, r0, lsl #0x18
    mov r0, r1, asr #0x18
    str r0, [sp, #0x28]
    mov r0, r2, asr #0x18
    str r0, [sp, #0x2c]
@L_021707b4:
    add r0, r9, r9, lsl #2
    add r0, r11, r0
    ldrb r0, [r0, #0x1c]
    cmp r0, #1
    beq @L_02170844
    cmp r0, #2
    beq @L_0217084c
    mov r5, r4
    ldr r2, [r10, #0x94]
    cmp r2, #0
    beq @L_02170850
    mov r0, #0x19
    mul r0, r9, r0
    ldr r1, [r2, #0xc]
    add r1, r2, r1
    add r7, r1, r0, lsl #1
    str r4, [sp]
    mov r0, #2
    str r0, [sp, #4]
    ldr r0, [sp, #0x28]
    mov r2, #0
    str r0, [sp, #8]
    sub r0, r6, #1
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    str r0, [sp, #0xc]
    mov r0, #5
    str r0, [sp, #0x10]
    str r0, [sp, #0x14]
    str r4, [sp, #0x18]
    ldr r0, =gBgMenuManager
    mov r1, r4
    mov r3, r2
    str r7, [sp, #0x1c]
    bl CBgMenuManager_AddStatic
    b @L_02170850
@L_02170844:
    mov r7, r8
    b @L_02170850
@L_0217084c:
    add r7, r8, #0x12
@L_02170850:
    cmp r5, #0
    bne @L_021708b4
    mov r0, #1
    str r0, [sp]
    mov r0, #2
    str r0, [sp, #4]
    ldr r0, [sp, #0x2c]
    mov r2, #0
    str r0, [sp, #8]
    mov r0, r6, lsl #0x18
    mov r0, r0, asr #0x18
    str r0, [sp, #0xc]
    mov r0, #3
    str r0, [sp, #0x10]
    str r0, [sp, #0x14]
    str r0, [sp, #0x18]
    ldr r0, =gBgMenuManager
    mov r1, #1
    mov r3, r2
    str r7, [sp, #0x1c]
    bl CBgMenuManager_AddStatic
    add r9, r9, #1
    add r6, r6, #5
    cmp r9, #2
    blt @L_021707b4
@L_021708b4:
    ldr r0, [sp, #0x24]
    add r0, r0, #5
    str r0, [sp, #0x24]
    ldr r0, [sp, #0x20]
    add r0, r0, #1
    str r0, [sp, #0x20]
@L_021708cc:
    ldr r0, [sp, #0x20]
    cmp r0, #5
    addge sp, sp, #0x30
    ldmgeia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r5, #0
    beq @L_0217077c
    add sp, sp, #0x30
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 func_ov085_021708f0(u8 *arg0)
{
    s32 r4;
    s32 r5;
    s32 r6;
    s32 r7;
    u8 *r8;
    s32 v5;
    s32 t0;
    s32 t1;
    CBgMenuManager_DeleteGroup((s32)((u8 *)&gBgMenuManager), 1, 2, 0);
    t0 = *(s32 *)(arg0 + 0x10);
    func_ov085_02170554((s32)arg0, 7, 3, t0);
    t1 = *(s32 *)(arg0 + 0x14);
    func_ov085_02170554((s32)arg0, 0x13, 3, t1);
    r8 = arg0;
    r6 = 1;
    arg0 = (u8 *)*(s32 *)(arg0 + 0x18);
    if ((s32)arg0 >= 5) {
        r6 = (s32)(arg0 - 4);
    }
    r5 = 8;
    r7 = 0;
    r4 = 9;
    do {
        func_ov085_02170654((s32)r8, r5, r4, r6);
        r7 = (r7 + 1);
        r6 = (r6 + 1);
        r5 = (r5 + 5);
    } while (r7 < 5);
    func_ov085_02170744((s32)r8);
    v5 = func_ov001_02125f64(0x1E, 0, 1, 0, *(s32 *)(r8 + 0x34), 2, 7);
    return v5;
}

extern "C" asm s32 func_ov085_021709c0(...)
{
    stmdb sp!, {r4, lr}
    sub sp, sp, #0x18
    mov r4, r0
    ldr r0, =data_020e88a0
    add r1, sp, #0
    bl func_ov001_0212816c
    ldr r0, [sp, #8]
    cmp r0, #5
    ldrge r2, [sp]
    ldrge r1, [sp, #4]
    cmpge r2, r1
    bne @L_021709fc
    ldr r1, [sp, #0x10]
    cmp r1, #0
    addne r0, r0, #1
@L_021709fc:
    ldr r2, [sp]
    str r2, [r4, #0x10]
    ldr r1, [sp, #4]
    cmp r2, #0x63
    str r1, [r4, #0x14]
    movgt r1, #0x63
    strgt r1, [r4, #0x10]
    ldr r1, [r4, #0x14]
    cmp r1, #0x63
    movgt r1, #0x63
    strgt r1, [r4, #0x14]
    ldr r1, [r4, #0x18]
    cmp r1, r0
    strne r0, [r4, #0x18]
    cmpne r0, #5
    ble @L_02170a6c
    mov r3, #1
@L_02170a40:
    add r2, r4, r3
    ldrb r1, [r2, #0x1c]
    add r3, r3, #1
    cmp r3, #5
    strb r1, [r2, #0x1b]
    ldrb r1, [r2, #0x21]
    strb r1, [r2, #0x20]
    blt @L_02170a40
    mov r1, #0
    strb r1, [r4, #0x20]
    strb r1, [r4, #0x25]
@L_02170a6c:
    ldr r1, [r4, #0x18]
    cmp r1, #5
    blt @L_02170aa8
    ldr r1, [sp, #8]
    cmp r0, r1
    ldreq r0, [sp, #0xc]
    streqb r0, [r4, #0x20]
    ldreq r0, [sp, #0x10]
    streqb r0, [r4, #0x25]
    ldrne r0, [sp, #0xc]
    strneb r0, [r4, #0x1f]
    ldrne r0, [sp, #0x10]
    add sp, sp, #0x18
    strneb r0, [r4, #0x24]
    ldmia sp!, {r4, pc}
@L_02170aa8:
    cmp r1, #0
    addle sp, sp, #0x18
    ldmleia sp!, {r4, pc}
    sub r0, r1, #1
    ldr r1, [sp, #0xc]
    add r0, r4, r0
    strb r1, [r0, #0x1c]
    ldr r0, [r4, #0x18]
    ldr r1, [sp, #0x10]
    sub r0, r0, #1
    add r0, r4, r0
    strb r1, [r0, #0x21]
    add sp, sp, #0x18
    ldmia sp!, {r4, pc}
}

extern "C" void func_ov085_02170ae4(u8 *arg0)
{
    *(s32 *)(arg0 + 0x8) = 0;
    MI_CpuFill8((arg0 + 0x28), 0, 0xC0);
    MI_CpuFill8((arg0 + 0x10), 0, 8);
    MI_CpuFill8((arg0 + 0x1C), 0, 10);
    *(s32 *)(arg0 + 0x18) = 0;
    CBgMenuManager_Init((s32)gBgMenuManager, 1);
    func_ov085_0216ffc0((s32)arg0, 1);
}

extern "C" s32 func_ov085_02170b4c(u8 *arg0)
{
    s32 r1;
    s32 v0;
    s32 v1;
    s32 v6;
    r1 = *(s32 *)(arg0 + 0x8);
    switch (r1) {
        default:
            return (s32)arg0;
        case 1:
            v0 = Archive_TryFinalize((s32)(arg0 + 0x28), 0x10);
            if (v0 == 0)
                return v0;
            v1 = func_ov085_021700f8(arg0);
            return v1;
        case 3:
            *(s32 *)(arg0 + 0x8) = 4;
            func_ov085_02170344(arg0);
            ((VCall *)arg0)->f19();
        case 4:
            func_ov085_021709c0((s32)arg0);
            func_ov085_021708f0(arg0);
            v6 = CBgMenuManager_UpdateGraphics((u8 *)((u8 *)&gBgMenuManager), 1);
            return v6;
    }
}

extern "C" s32 func_ov085_02170bd4(u8 *arg0)
{
    s32 r1;
    s32 v1;
    r1 = *(s32 *)(arg0 + 0x8);
    switch (r1) {
        default:
            return (s32)arg0;
        case 2:
            func_ov085_0217015c(arg0);
            *(s32 *)(arg0 + 0x8) = 3;
            return 3;
        case 4:
            v1 = CBgMenuManager_Draw((u8 *)((u8 *)&gBgMenuManager), 1);
            return v1;
    }
}

extern "C" void func_ov085_02170c18(s32 arg0)
{
    Archive_Close((arg0 + 0x28), 0x10);
    func_ov085_02170134(arg0);
    CBgMenuManager_Finalize((s32)gBgMenuManager, 1);
}

extern "C" s32 func_ov085_02170c48(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov085_02170c5c(void)
{
}
