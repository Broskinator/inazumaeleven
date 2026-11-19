#include "ov001/Unk_ov001_02121e30.hpp"
#include "game/vcall.hpp"

extern "C" void func_ov001_02121e30(void);
extern "C" s32 func_ov001_02121f78(u8 *arg0);
extern "C" s32 func_ov001_02122050(u8 *arg0);
extern "C" s32 func_ov001_02122188(u8 *arg0);
extern "C" s32 func_ov001_021221e4(u8 *arg0);
extern "C" s32 func_ov001_02122250(s32 arg0);
extern "C" void func_ov001_02122264(void);
extern "C" s32 func_ov001_02122378(s32 arg0);
extern "C" s32 func_ov001_0212238c(s32 arg0, u8 *arg1, s32 arg2, s32 arg3);
extern "C" s32 func_ov001_021223f4(u8 *arg0);
extern "C" s32 func_ov001_02122428(...);
extern "C" s32 func_ov001_0212247c(...);
extern "C" s32 func_ov001_021224a4(u8 *arg0);
extern "C" s32 func_ov001_02122654(u8 *arg0);
extern "C" s32 func_ov001_02122754(...);
extern "C" void func_ov001_021227ac(void);
extern "C" void func_ov001_0212290c(void);
extern "C" s32 func_ov001_021229b4(...);
extern "C" void func_ov001_02122ad0(void);
extern "C" s32 func_ov001_02122b54(u8 *arg0);
extern "C" s32 func_ov001_02122bac(u8 *arg0);
extern "C" s32 func_ov001_02122c04(u8 *arg0);
extern "C" s32 func_ov001_02122c5c(s32 arg0);
extern "C" void func_ov001_02122c70(void);
extern "C" s32 func_ov001_02122c84(void);
extern "C" void func_ov001_02122cbc(void);
extern "C" void func_ov001_02122cd0(void);
extern "C" void func_ov001_02122ce4(void);
extern "C" void func_ov001_02122cf8(void);
extern "C" void func_ov001_02122d0c(void);
extern "C" s32 func_ov001_02122d20(void);
extern "C" void func_ov001_02122d40(void);
extern "C" void func_ov001_02122dd4(void);
extern "C" void func_ov001_02122de8(void);
extern "C" void func_ov001_02122ef8(void);
extern "C" void func_ov001_02123008(void);
extern "C" s32 func_ov001_021232c8(...);
extern "C" void func_ov001_02123628(u8 *arg0, s32 arg1, s32 arg2);
extern "C" void func_ov001_02123680(u8 *arg0, u8 arg1);
extern "C" void func_ov001_021236f4(void);
extern "C" s32 func_ov001_0212393c(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void func_ov001_021239c8(void);
extern "C" void func_ov001_02123aec(void);
extern "C" void func_ov001_02123e2c(void);
extern "C" void func_ov001_021242a4(void);
extern "C" void func_ov001_02124540(void);
extern "C" void func_ov001_02124774(void);

extern "C" char gFont12T[];
extern "C" char gFont12Manager[];
extern "C" char gFont8[];
extern "C" char gAllocator[];
extern "C" char data_020c4920[];
extern "C" char data_020c492c[];
extern "C" char data_020c4938[];
extern "C" char data_020c4940[];
extern "C" char data_020c4948[];
extern "C" char data_020c4b80[];
extern "C" char data_020c4bd8[];
extern "C" char data_020c4bdc[];
extern "C" char data_020c4be0[];
extern "C" char data_020c4bf0[];
extern "C" char gWirelessUtil[];
extern "C" char gBgMenuManager[];
extern "C" char data_020ca700[];
extern "C" char data_020ca710[];
extern "C" char gSubScreen0[];
extern "C" char gSubScreen1[];
extern "C" char gSubScreen2[];
extern "C" char data_020e88a0[];
extern "C" char data_ov001_02128980[];
extern "C" char data_ov001_02128980_b[];
extern "C" char data_ov001_021289c0[];
extern "C" char data_ov001_0212a898[];
extern "C" char data_ov001_0212a8b4[];
extern "C" char data_ov001_0212a9e8[];
extern "C" char data_ov001_02130678[];
extern "C" char data_ov001_021306c0[];
extern "C" s32 DC_FlushRange(...);
extern "C" s32 G2S_GetBG1CharPtr(...);
extern "C" s32 G2S_GetBG2CharPtr(...);
extern "C" s32 MI_CpuCopy8(...);
extern "C" s32 MI_CpuFill8(...);
extern "C" s32 MIi_CpuClearFast(...);
extern "C" void _ZN11MatchEngine13func_020690a8Eii(void);
extern "C" void _ZN11MatchEngine11GetTeamInfoEi(void);
extern "C" void _ZN11MatchEngine13func_0206b3a4Eim(void);
extern "C" void _ZN11MatchEngine13func_0206bfa0Eh(void);
extern "C" void _ZN11MatchEngine13func_0206bfb4Ei(void);
extern "C" s32 _ZN11MatchEngine13func_0206d828Ev(...);
extern "C" s32 _ZN11MatchEngine13func_0206d840Ei(...);
extern "C" s32 _ZN11MatchEngine13func_0206d8e0Ev(...);
extern "C" s32 _ZN11MatchEngine13func_0206d8f8Ev(...);
extern "C" s32 _ZN11MatchEngine13func_0206d910Ev(...);
extern "C" s32 _ZN11MatchEngine13func_0206d940Ev(...);
extern "C" s32 _ZN11MatchEngine13func_0206d958Ev(...);
extern "C" s32 _ZN11MatchEngine13func_0206dedcEv(...);
extern "C" s32 _ZN11MatchEngine13func_0206df34Ev(...);
extern "C" void _ZN11MatchEngine13func_0207f7ccEP11MatchPlayerii(void);
extern "C" s32 _ZN8GameHeap4FreeEPv(...);
extern "C" void _ZN8TextFont10SetSpacingEii(void);
extern "C" void _ZN8TextFont12ResetSpacingEv(void);
extern "C" void _ZN8TextFont12SetSubColorsEhh(void);
extern "C" void _ZN9EntryPool6CreateEi(void);
extern "C" s32 _ZdlPv(...);
extern "C" s32 GXS_LoadBG0Scr(...);
extern "C" s32 GXS_LoadBG1Scr(...);
extern "C" s32 GXS_LoadBG2Scr(...);
extern "C" s32 GXS_LoadBG0Char(...);
extern "C" void GXS_LoadBG2Char(void);
extern "C" void func_02017278(void);
extern "C" void _fflt(void);
extern "C" void _ffix(void);
extern "C" void _fadd(void);
extern "C" void _fsub(void);
extern "C" void func_02080b90(void);
extern "C" void func_020813a0(void);
extern "C" void func_02082aa4(void);
extern "C" void func_02082c8c(void);
extern "C" void func_0209bf0c(void);
extern "C" s32 func_0209bf8c(...);
extern "C" void func_0209bf9c(void);
extern "C" void func_0209c4d8(void);
extern "C" void func_0209d8b8(void);
extern "C" s32 func_ov001_02120268(...);
extern "C" s32 func_ov001_02120440(...);
extern "C" s32 func_ov001_0212049c(...);
extern "C" s32 func_ov001_021204c4(...);
extern "C" s32 func_ov001_02121158(...);
extern "C" s32 func_ov001_021211f0(...);
extern "C" s32 func_ov001_02121368(...);
extern "C" void func_ov001_02121808(void);
extern "C" s32 func_ov001_02121c5c(...);
extern "C" s32 func_ov001_02125ef8(...);
extern "C" void func_ov015_02130a84(void);
extern "C" void func_ov015_02130ae8(void);
extern "C" void func_ov015_02130b14(void);
extern "C" void func_ov015_02130d8c(void);
extern "C" void func_ov015_021313d4(void);
extern "C" void func_ov015_02131754(void);
extern "C" void func_ov015_02131808(void);
extern "C" void func_ov015_02131994(void);
extern "C" void func_ov015_021319bc(void);
extern "C" void func_ov015_021319fc(void);
extern "C" void func_ov015_02131a5c(void);
extern "C" void func_ov015_02131ae4(void);
extern "C" void func_ov015_02131bb4(void);
extern "C" s32 Graphics_ApplyBGPalettePulse(...);
extern "C" s32 Graphics_LoadBGPaletteSub(...);
extern "C" s32 Graphics_LoadTempPaletteFromPac(...);
extern "C" s32 Graphics_SetupScreen(...);
extern "C" s32 Graphics_LoadBGXCharSub(...);
extern "C" void Graphics_DrawTextTileWithRuby(void);
extern "C" s32 func_ov015_02133d84(...);
extern "C" void func_ov015_02133dc8(void);
extern "C" void func_ov015_02133e24(void);
extern "C" void func_ov015_02133e50(void);
extern "C" s32 func_ov015_02133e8c(...);
extern "C" s32 Archive_RequestNewRead(...);
extern "C" void Archive_ReadFromSFP(void);
extern "C" s32 Archive_TryFinalize(...);
extern "C" s32 Archive_Close(...);
extern "C" s32 Archive_Deallocate(...);
extern "C" s32 func_ov015_02135440(...);
extern "C" s32 func_ov015_02135e10(...);
extern "C" void CBgMenuManager_Init(void);
extern "C" s32 CBgMenuManager_Finalize(...);
extern "C" void CBgMenuManager_AddStatic(void);
extern "C" void CBgMenuManager_DeleteID(void);
extern "C" void CBgMenuManager_DeleteGroup(void);
extern "C" void CBgMenuManager_UpdateGraphics(void);
extern "C" s32 CBgMenuManager_Draw(...);
extern "C" void func_ov015_02143664(void);
extern "C" void gEntryPool(void);
extern "C" char gGameState[];

extern "C" void _ZN11MatchEngine13func_0206bfecEv(void);
extern "C" void _ZN11MatchEngine13func_0206d358Ev(void);
extern "C" void _ZN11MatchEngine13func_0206bfa8Ev(void);
extern "C" void _ZN11MatchEngine13func_0206bff4Ei(void);
extern "C" asm void func_ov001_02121e30(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r4, r0
    mov r7, #0
    add r0, r4, #0x54
    mov r8, r7
    mov r9, r7
    add r6, r4, #0x1c
    add r5, r4, #0x38
    str r0, [sp, #8]
@L_02121e58:
    add r11, r4, r9
    ldrb r0, [r11, #0x19]
    cmp r0, #1
    beq @L_02121e7c
    cmp r0, #2
    beq @L_02121e9c
    cmp r0, #3
    beq @L_02121ee4
    b @L_02121f58
@L_02121e7c:
    mov r0, #0x54
    mla r0, r9, r0, r6
    str r8, [sp]
    str r0, [sp, #4]
    mov r0, r4
    mov r1, r7
    mov r2, #8
    b @L_02121f50
@L_02121e9c:
    mov r0, #0x54
    mul r10, r9, r0
    str r8, [sp]
    add r0, r6, r10
    str r0, [sp, #4]
    mov r0, r4
    mov r1, r7
    mov r2, #0xd
    mov r3, r9
    bl func_ov001_02121808
    add r1, r8, #1
    str r1, [sp]
    add r0, r5, r10
    str r0, [sp, #4]
    mov r0, r4
    mov r1, r7
    mov r2, #3
    b @L_02121f50
@L_02121ee4:
    mov r0, #0x54
    mul r10, r9, r0
    str r8, [sp]
    add r0, r6, r10
    str r0, [sp, #4]
    mov r0, r4
    mov r1, r7
    mov r2, #8
    mov r3, r9
    bl func_ov001_02121808
    add r0, r8, #1
    str r0, [sp]
    add r0, r5, r10
    str r0, [sp, #4]
    mov r0, r4
    mov r1, r7
    mov r2, #0
    mov r3, r9
    bl func_ov001_02121808
    ldr r0, [sp, #8]
    add r1, r8, #2
    str r1, [sp]
    add r0, r0, r10
    str r0, [sp, #4]
    mov r0, r4
    mov r1, r7
    mov r2, #0x10
@L_02121f50:
    mov r3, r9
    bl func_ov001_02121808
@L_02121f58:
    ldrb r0, [r11, #0x19]
    add r7, r7, #0x10
    add r9, r9, #1
    add r8, r8, r0
    cmp r9, #2
    blt @L_02121e58
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 func_ov001_02121f78(u8 *arg0)
{
    s32 r1;
    u8 *r4;
    s32 v0;
    s32 v2;
    s32 v3;
    s32 v10;
    s32 t0;
    r4 = arg0;
    r1 = *(s32 *)(arg0 + 0x8);
    switch (r1) {
        default:
            return (s32)arg0;
        case 1:
            v0 = Archive_TryFinalize((s32)(r4 + 0xC4), 0x35);
            if (v0 == 0)
                return v0;
            arg0 = (u8 *)*(s32 *)(r4 + 0xC);
            switch ((s32)arg0) {
                default:
                    return (s32)arg0;
                case 1:
                    func_ov001_02120440((s32)r4);
                    v2 = func_ov001_02120268((s32)r4, 2);
                    return v2;
                case 2:
                    v3 = func_ov001_02120268((s32)r4, 3);
                    return v3;
                case 3:
                    func_ov001_02121158((s32)r4);
                    Archive_Deallocate((s32)(r4 + 0x31C));
                    Archive_Deallocate((s32)(r4 + 0x328));
                    Archive_Deallocate((s32)(r4 + 0x334));
                    *(s32 *)(r4 + 0x8) = 2;
                    *(s32 *)(r4 + 0x10) = 0;
                    return 0;
            }
        case 3:
            func_ov001_02121368((s32)arg0, r1);
            func_ov001_02121c5c((s32)r4);
            t0 = *(s32 *)(r4 + 0x340);
            v10 = func_ov001_02125ef8(0x16, 0, t0, (u8 *)((u8 *)&gSubScreen0));
            return v10;
    }
}

extern "C" s32 func_ov001_02122050(u8 *arg0)
{
    s32 r1;
    s32 v0;
    s32 v10;
    s32 t0;
    s32 t1;
    s32 t2;
    r1 = *(s32 *)(arg0 + 0x8);
    switch (r1) {
        default:
            return (s32)arg0;
        case 2:
            v0 = func_ov001_021204c4((s32)arg0, r1);
            if (v0 == 0)
                return v0;
            func_ov001_021211f0((s32)arg0);
            if (*(u8 *)(((u8 *)&gGameState) + 0x1A) != 0) {
                *(u16 *)(((u8 *)0x4001040)) = 0xB0BF;
                *(u16 *)(((u8 *)0x4001040) + 0x4) = 0xF;
                t0 = ((*(s32 *)(((u8 *)(0x4001040 - 0x40))) & -0xE001) | 0x2000);
                *(s32 *)(((u8 *)(0x4001040 - 0x40))) = t0;
                t1 = ((*(u16 *)(((u8 *)0x4001040) + 0x8) & -0x40) | 0xF);
                *(u16 *)(((u8 *)0x4001040) + 0x8) = t1;
                t2 = ((*(u16 *)(((u8 *)0x4001040) + 0xA) & -0x40) | 0x2F);
                *(u16 *)(((u8 *)0x4001040) + 0xA) = t2;
            }
            ((VCall *)arg0)->f19();
            *(s32 *)(arg0 + 0x8) = 3;
            return 3;
        case 3:
            DC_FlushRange((u8 *)((u8 *)&gSubScreen2), 0x800);
            GXS_LoadBG0Scr((u8 *)((u8 *)&gSubScreen2), 0, 0x800);
            DC_FlushRange((u8 *)((u8 *)&gSubScreen1), 0x800);
            GXS_LoadBG1Scr((u8 *)((u8 *)&gSubScreen1), 0, 0x800);
            DC_FlushRange((u8 *)((u8 *)&gSubScreen0), 0x800);
            GXS_LoadBG2Scr((u8 *)((u8 *)&gSubScreen0), 0, 0x800);
            Graphics_ApplyBGPalettePulse(1);
            v10 = Graphics_LoadBGPaletteSub();
            return v10;
    }
}

extern "C" s32 func_ov001_02122188(u8 *arg0)
{
    s32 v1;
    s32 v3;
    s32 v4;
    *(s32 *)(arg0 + 0x8) = 0;
    *(s32 *)(arg0 + 0x14) = (0 - 1);
    *(s32 *)(arg0 + 0x340) = 0;
    func_ov015_02135440(3, (0 - 1), 0);
    v1 = func_ov015_02133d84(6, 6);
    *(s32 *)(arg0 + 0x344) = v1;
    ((VCall *)arg0)->f27();
    v3 = ((s32 (*)(...))func_ov001_02122ce4)();
    *(u8 *)(arg0 + 0x18) = v3;
    v4 = func_ov001_02120268((s32)arg0, 1);
    return v4;
}

extern "C" s32 func_ov001_021221e4(u8 *arg0)
{
    s32 v2;
    s32 t0;
    s32 t1;
    if (*(u8 *)(((u8 *)&gGameState) + 0x1A) != 0) {
        t0 = (*(s32 *)(((u8 *)0x4001000)) & -0xE001);
        *(s32 *)(((u8 *)0x4001000)) = t0;
    }
    func_ov015_02135440(2);
    Archive_Close((s32)(arg0 + 0xC4), 0x35);
    v2 = func_ov001_0212049c((s32)arg0);
    if (*(s32 *)(arg0 + 0x344) == 0)
        return v2;
    t1 = *(s32 *)(arg0 + 0x344);
    _ZN8GameHeap4FreeEPv((s32)((u8 *)&gAllocator), t1);
    *(s32 *)(arg0 + 0x344) = 0;
    return 0;
}

extern "C" s32 func_ov001_02122250(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" asm void func_ov001_02122264(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    mov r3, #1
    mov r5, #0
    mov r1, r5
    add r0, r4, #0x1c
    mov r2, #0xa8
    strb r3, [r4, #0x19]
    strb r3, [r4, #0x1a]
    bl MI_CpuFill8
    mvn r1, #0
    mov r0, #0x1c
@L_02122294:
    mla r2, r5, r0, r4
    strh r1, [r2, #0x1c]
    add r5, r5, #1
    strh r1, [r2, #0x70]
    cmp r5, #3
    blt @L_02122294
    ldr r0, =data_020e88a0
    bl func_ov015_02143664
    movs r5, r0
    beq @L_021222e8
    ldrsb r0, [r5, #0xc]
    bl func_ov015_02131994
    cmp r0, #0
    ldreqsb r0, [r5, #0xc]
    streqh r0, [r4, #0x1c]
    ldreqsb r0, [r5, #0xd]
    streqh r0, [r4, #0x70]
    ldrnesb r0, [r5, #0xd]
    strneh r0, [r4, #0x1c]
    ldrnesb r0, [r5, #0xc]
    strneh r0, [r4, #0x70]
@L_021222e8:
    ldrsh r0, [r4, #0x1c]
    mvn r5, #0
    mov r6, r5
    bl func_ov015_02130ae8
    movs r1, r0
    beq @L_02122314
    ldr r0, =data_020e88a0
    mov r2, #0xf
    mov r3, #0
    bl _ZN11MatchEngine13func_0207f7ccEP11MatchPlayerii
    mov r5, r0
@L_02122314:
    ldrsh r0, [r4, #0x70]
    bl func_ov015_02130ae8
    movs r1, r0
    beq @L_02122338
    ldr r0, =data_020e88a0
    mov r2, #0xf
    mov r3, #0
    bl _ZN11MatchEngine13func_0207f7ccEP11MatchPlayerii
    mov r6, r0
@L_02122338:
    ldr r0, =data_020e88a0
    mov r1, r5
    mov r2, r6
    bl _ZN11MatchEngine13func_020690a8Eii
    cmp r0, #0
    movne r0, #1
    strneb r0, [r4, #0x8b]
    ldr r0, =data_020e88a0
    mov r1, r6
    mov r2, r5
    bl _ZN11MatchEngine13func_020690a8Eii
    cmp r0, #0
    movne r0, #1
    strneb r0, [r4, #0x37]
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 func_ov001_02122378(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" s32 func_ov001_0212238c(s32 arg0, u8 *arg1, s32 arg2, s32 arg3)
{
    if ((((((((*(s32 *)(arg1) != 0x5A && *(s32 *)(arg1) != 0x62) && *(s32 *)(arg1) != 0x76) && *(s32 *)(arg1) != 0x77) && *(s32 *)(arg1) != 0x3F) && *(s32 *)(arg1) != 0x40) && *(s32 *)(arg1) != 0x37) && *(s32 *)(arg1) != 0x48))
        return -1;
    if ((u32)*(s32 *)(arg1 + 0x4) >= (u32)10)
        return -1;
    MI_CpuCopy8((s32)arg1, (arg0 + 0xC), 0x14, arg3);
    *(u8 *)(arg1 + 0x10) = 0;
    return 1;
}

extern "C" s32 func_ov001_021223f4(u8 *arg0)
{
    MI_CpuFill8((arg0 + 0x34), 0, 0x54);
    Archive_RequestNewRead((s32)data_ov001_0212a898, (arg0 + 0x34));
    *(s32 *)(arg0 + 0x8) = 1;
    return 1;
}

extern "C" asm s32 func_ov001_02122428(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r6, [r0, #0x34]
    cmp r6, #0
    ldrne r1, =data_ov001_02128980
    ldrne r7, =data_ov001_02128980_b
    ldrne r1, [r1]
    cmpne r1, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    add r5, r0, #0x34
    mov r4, #0xc
@L_02122450:
    ldr r2, [r7, #4]
    mov r0, r1
    mla r1, r2, r4, r5
    mov r2, r6
    bl Archive_ReadFromSFP
    ldr r1, [r7, #8]!
    cmp r1, #0
    bne @L_02122450
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm s32 func_ov001_0212247c(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, #0
    add r5, r0, #0x34
    mov r4, #0xc
@L_0212248c:
    mla r0, r6, r4, r5
    bl Archive_Deallocate
    add r6, r6, #1
    cmp r6, #7
    blt @L_0212248c
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 func_ov001_021224a4(u8 *arg0)
{
    s32 r2;
    u8 *r5;
    u8 *r6;
    u8 *r8;
    s32 v2;
    s32 v4;
    s32 v6;
    s32 v10;
    s32 v12;
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
    r6 = arg0;
    r5 = (u8 *)*(s32 *)(arg0 + 0x40);
    if ((s32)r5 != 0) {
        t0 = (s32)(r5 + *(s32 *)(r5 + 0xC));
        t1 = *(s32 *)(r5 + 0x10);
        Graphics_SetupScreen(t0, t1, 0, 1);
        Graphics_LoadTempPaletteFromPac((s32)r5, 1, 1);
    }
    r8 = (u8 *)*(s32 *)(r6 + 0x58);
    r5 = (u8 *)0;
    if ((s32)r8 != 0) {
        t2 = (s32)(r8 + *(s32 *)(r8 + 0xC));
        t3 = *(s32 *)(r8 + 0x10);
        v2 = Graphics_SetupScreen(t2, t3, 1, 3);
        Graphics_LoadTempPaletteFromPac((s32)r8, 1, 3);
        r5 = (u8 *)v2;
    }
    r8 = (u8 *)*(s32 *)(r6 + 0x64);
    if ((s32)r8 != 0) {
        t4 = (s32)(r8 + *(s32 *)(r8 + 0xC));
        t5 = *(s32 *)(r8 + 0x10);
        v4 = Graphics_SetupScreen(t4, t5, (s32)(r5 + 1), 4);
        Graphics_LoadTempPaletteFromPac((s32)r8, 1, 4);
        r5 = (u8 *)v4;
    }
    r8 = (u8 *)*(s32 *)(r6 + 0x70);
    if ((s32)r8 != 0) {
        t6 = (s32)(r8 + *(s32 *)(r8 + 0xC));
        t7 = *(s32 *)(r8 + 0x10);
        v6 = Graphics_SetupScreen(t6, t7, (s32)(r5 + 1), 5);
        Graphics_LoadTempPaletteFromPac((s32)r8, 1, 5);
        r5 = (u8 *)v6;
    }
    r8 = (u8 *)*(s32 *)(r6 + 0x7C);
    if ((s32)r8 != 0) {
        t8 = (s32)(r8 + *(s32 *)(r8 + 0xC));
        t9 = *(s32 *)(r8 + 0x10);
        Graphics_SetupScreen(t8, t9, (s32)(r5 + 1), 6);
        Graphics_LoadTempPaletteFromPac((s32)r8, 1, 6);
    }
    r8 = (u8 *)*(s32 *)(r6 + 0x4C);
    r5 = (u8 *)0;
    if ((s32)r8 != 0) {
        t10 = (s32)(r8 + *(s32 *)(r8 + 0xC));
        t11 = *(s32 *)(r8 + 0x10);
        v10 = Graphics_SetupScreen(t10, t11, 1, 2);
        Graphics_LoadTempPaletteFromPac((s32)r8, 1, 2);
        r5 = (u8 *)v10;
    }
    arg0 = (u8 *)*(s32 *)(r6 + 0x20);
    r2 = 0;
    if ((s32)arg0 != 0) {
        r2 = 0;
        if (*(s32 *)(r6 + 0x24) != 0) {
            r2 = 1;
        }
    }
    if (r2 == 0)
        return (s32)arg0;
    t12 = ((*(u16 *)(r6 + 0x2C) * *(u16 *)(r6 + 0x2E)) << 1);
    v12 = Graphics_SetupScreen((s32)arg0, t12, (s32)(r5 + 1), 0);
    return v12;
}

extern "C" s32 func_ov001_02122654(u8 *arg0)
{
    s32 r0;
    u8 *r6;
    s32 r7;
    s32 v2;
    s32 v4;
    s32 v6;
    s32 v7;
    s32 v8;
    s32 v10;
    s32 v12;
    s32 v14;
    s32 v15;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    s32 t5;
    s32 t6;
    s32 t7;
    s32 t8;
    r6 = (u8 *)*(s32 *)(arg0 + 0x40);
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
    t4 = *(s32 *)(arg0 + 0x58);
    r7 = 1;
    v6 = Graphics_LoadBGXCharSub(1, t4, 0x20);
    t5 = *(s32 *)(arg0 + 0x64);
    v7 = Graphics_LoadBGXCharSub(1, t5, v6);
    t6 = *(s32 *)(arg0 + 0x70);
    v8 = Graphics_LoadBGXCharSub(1, t6, v7);
    t7 = *(s32 *)(arg0 + 0x7C);
    Graphics_LoadBGXCharSub(1, t7, v8);
    v10 = G2S_GetBG2CharPtr();
    MIi_CpuClearFast(0, v10, 0x20);
    v12 = G2S_GetBG2CharPtr();
    DC_FlushRange(v12, 0x20);
    t8 = *(s32 *)(arg0 + 0x4C);
    v14 = Graphics_LoadBGXCharSub(2, t8, 0x20);
    r0 = v14;
    if ((*(s32 *)(arg0 + 0x20) == 0 || *(s32 *)(arg0 + 0x24) == 0)) {
        r7 = 0;
    }
    if (r7 != 0) {
        *(s32 *)(arg0 + 0x28) = r0;
    }
    v15 = Graphics_LoadBGPaletteSub();
    return v15;
}

extern "C" asm s32 func_ov001_02122754(...)
{
    stmdb sp!, {r3, lr}
    mov lr, r0
    ldr r0, [lr, #0x20]
    cmp r0, #0
    ldrne r0, [lr, #0x24]
    cmpne r0, #0
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    ldrneb r0, [lr, #0x30]
    cmpne r0, #0
    ldmeqia sp!, {r3, pc}
    ldrh r2, [lr, #0x2c]
    ldrh r1, [lr, #0x2e]
    mov r12, #0
    ldr r0, [lr, #0x24]
    mul r3, r2, r1
    ldr r1, [lr, #0x28]
    mov r2, r3, lsl #5
    strb r12, [lr, #0x30]
    bl GXS_LoadBG2Char
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov001_021227ac(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x20
    mov r7, r0
    ldr r12, [r7, #0x20]
    mov r3, #0
    cmp r12, #0
    ldrne r0, [r7, #0x24]
    cmpne r0, #0
    movne r3, #1
    cmp r3, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    sub r0, r2, #8
    ldr r2, [r7, #0x18]
    add r0, r0, r0, lsr #31
    cmp r2, #0
    addeq sp, sp, #0x20
    add r1, r1, r0, asr #1
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    mov r0, #5
    str r0, [sp]
    mov r6, #1
    mov r0, r1, lsl #0x18
    str r6, [sp, #4]
    mov r5, #4
    mov r4, #0
    str r5, [sp, #8]
    mov r0, r0, asr #0x18
    str r0, [sp, #0xc]
    mov r0, #0x18
    str r0, [sp, #0x10]
    mov r0, #8
    str r0, [sp, #0x14]
    str r4, [sp, #0x18]
    ldr r0, =gBgMenuManager
    mov r1, r6
    mov r2, r4
    mov r3, r4
    str r12, [sp, #0x1c]
    bl CBgMenuManager_AddStatic
    add r0, r7, #0x20
    bl func_ov015_02133dc8
    ldrb r0, [r7, #0x1c]
    cmp r0, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r8, =gFont12Manager
    strb r4, [r7, #0x1c]
    ldr r0, [r8]
    mov r1, r6
    mov r2, r5
    bl _ZN8TextFont10SetSpacingEii
    mov r0, #3
    str r0, [sp]
    stmib sp, {r0, r6}
    str r4, [sp, #0xc]
    str r4, [sp, #0x10]
    ldrb r1, [r7, #0x1d]
    mov r0, #0x14
    smulbb r0, r1, r0
    sub r0, r0, #6
    rsb r0, r0, #0x40
    add r0, r0, r0, lsr #31
    mov r0, r0, asr #1
    sub r0, r0, #2
    str r0, [sp, #0x14]
    str r6, [sp, #0x18]
    str r6, [sp, #0x1c]
    ldrh r2, [r7, #0x2c]
    ldrh r3, [r7, #0x2e]
    ldr r0, [r7, #0x18]
    ldr r1, [r7, #0x24]
    mov r2, r2, lsl #3
    mov r3, r3, lsl #3
    bl Graphics_DrawTextTileWithRuby
    ldr r0, [r8]
    bl _ZN8TextFont12ResetSpacingEv
    ldrh r2, [r7, #0x2c]
    ldrh r1, [r7, #0x2e]
    ldr r0, [r7, #0x24]
    strb r6, [r7, #0x30]
    mul r1, r2, r1
    mov r1, r1, lsl #5
    bl DC_FlushRange
    add sp, sp, #0x20
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov001_0212290c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x20
    mov r5, r0
    mov r1, #1
    ldr r0, =gBgMenuManager
    mov r2, r1
    mov r3, #0
    bl CBgMenuManager_DeleteID
    ldr r4, [r5, #0x4c]
    cmp r4, #0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, =gWirelessUtil
    bl func_0209bf0c
    cmp r0, #0
    addlt sp, sp, #0x20
    str r0, [r5, #0x14]
    ldmltia sp!, {r3, r4, r5, pc}
    ldr lr, [r4, #0xc]
    mov r1, #1
    str r1, [sp]
    mov r12, #2
    str r12, [sp, #4]
    mov r3, #0x1e
    str r3, [sp, #8]
    mov r2, #0
    str r2, [sp, #0xc]
    cmp r0, #3
    str r12, [sp, #0x10]
    str r12, [sp, #0x14]
    movgt r0, #3
    add r3, r4, lr
    add lr, r3, r0, lsl #3
    str r12, [sp, #0x18]
    ldr r0, =gBgMenuManager
    mov r3, r2
    str lr, [sp, #0x1c]
    bl CBgMenuManager_AddStatic
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm s32 func_ov001_021229b4(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x20
    ldr r6, =gBgMenuManager
    mov r5, #1
    mov r4, #0
    mov r7, r0
    mov r0, r6
    mov r1, r5
    mov r2, r5
    mov r3, r4
    bl CBgMenuManager_DeleteGroup
    ldr r2, [r7, #0x58]
    cmp r2, #0
    beq @L_02122a38
    mov r1, #3
    stmia sp, {r1, r5}
    mov r0, #2
    str r0, [sp, #8]
    mov r0, #0xa
    str r0, [sp, #0xc]
    mov r0, #0x1c
    str r0, [sp, #0x10]
    mov r0, #9
    str r0, [sp, #0x14]
    str r1, [sp, #0x18]
    ldr r1, [r2, #0xc]
    mov r0, r6
    add r6, r2, r1
    mov r1, r5
    mov r2, r5
    mov r3, r4
    str r6, [sp, #0x1c]
    bl CBgMenuManager_AddStatic
@L_02122a38:
    ldr r4, [r7, #0x64]
    cmp r4, #0
    beq @L_02122aa0
    ldr r3, [r4, #0xc]
    ldr r2, [r7, #0x10]
    mov r0, #2
    mov r1, #1
    stmia sp, {r0, r1}
    add r3, r4, r3
    sub r2, r2, #1
    mov r0, #0xb4
    mla r4, r2, r0, r3
    str r1, [sp, #8]
    mov r0, #5
    str r0, [sp, #0xc]
    mov r0, #0x1e
    str r0, [sp, #0x10]
    mov r0, #3
    str r0, [sp, #0x14]
    mov r0, #4
    str r0, [sp, #0x18]
    ldr r0, =gBgMenuManager
    mov r2, r1
    mov r3, #0
    str r4, [sp, #0x1c]
    bl CBgMenuManager_AddStatic
@L_02122aa0:
    mov r0, r7
    mov r1, #0xa
    mov r2, #9
    bl func_ov001_021227ac
    mov r0, r7
    bl func_ov001_0212290c
    ldr r0, =gBgMenuManager
    mov r1, #1
    bl CBgMenuManager_UpdateGraphics
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov001_02122ad0(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    ldr r0, [r5, #4]
    mov r4, #1
    ldr r2, [r0]
    mov r1, r4
    ldr r2, [r2, #0x28]
    blx r2
    mov r0, #6
    bl func_ov015_02135440
    mov r3, #0
    sub r2, r3, #1
    ldr r0, =gBgMenuManager
    mov r1, r4
    str r2, [r5, #0x14]
    str r3, [r5, #8]
    str r3, [r5, #0xc]
    str r4, [r5, #0x10]
    str r3, [r5, #0x18]
    strb r3, [r5, #0x1c]
    strb r3, [r5, #0x1d]
    bl CBgMenuManager_Init
    mov r1, r4
    add r0, r5, #0x20
    bl func_ov015_02133e24
    add r0, r5, #0x20
    mov r1, #0x18
    mov r2, #8
    bl func_ov015_02133e50
    mov r0, r5
    bl func_ov001_021223f4
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 func_ov001_02122b54(u8 *arg0)
{
    s32 r1;
    s32 v0;
    s32 v3;
    r1 = *(s32 *)(arg0 + 0x8);
    switch (r1) {
        default:
            return (s32)arg0;
        case 1:
            v0 = Archive_TryFinalize((s32)(arg0 + 0x34), 7);
            if (v0 == 0)
                return v0;
            func_ov001_02122428((s32)arg0);
            func_ov001_021224a4(arg0);
            *(s32 *)(arg0 + 0x8) = 2;
            return 2;
        case 3:
            v3 = func_ov001_021229b4((s32)arg0, r1);
            return v3;
    }
}

extern "C" s32 func_ov001_02122bac(u8 *arg0)
{
    s32 r1;
    s32 v3;
    r1 = *(s32 *)(arg0 + 0x8);
    switch (r1) {
        default:
            return (s32)arg0;
        case 2:
            ((s32 (*)(...))func_ov001_02122654)((s32)arg0, r1);
            ((VCall *)arg0)->f19();
            *(s32 *)(arg0 + 0x8) = 3;
            return 3;
        case 3:
            func_ov001_02122754((s32)arg0, r1);
            v3 = CBgMenuManager_Draw((u8 *)((u8 *)&gBgMenuManager), 1);
            return v3;
    }
}

extern "C" s32 func_ov001_02122c04(u8 *arg0)
{
    s32 v5;
    u8 *t0;
    s32 t1;
    Archive_Close((arg0 + 0x34), 7);
    func_ov001_0212247c((s32)arg0);
    CBgMenuManager_Finalize((s32)gBgMenuManager, 1);
    func_ov015_02133e8c((arg0 + 0x20), 1);
    func_ov015_02135e10();
    t0 = *(u8 * *)(arg0 + 0x4);
    t1 = *(s32 *)(*(u8 * *)(*(u8 * *)(arg0 + 0x4)) + 0xC);
    v5 = ((s32 (*)(...))*(s32 *)(*(u8 * *)(*(u8 * *)(arg0 + 0x4)) + 0xC))(t0, 1, t1);
    return v5;
}

extern "C" s32 func_ov001_02122c5c(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov001_02122c70(void)
{
    _ZN11MatchEngine13func_0206d828Ev((s32)data_020e88a0);
}

extern "C" s32 func_ov001_02122c84(void)
{
    s32 v0;
    s32 v1;
    u8 t0;
    if (*(u8 *)(((u8 *)&gGameState) + 0x7D) != 0) {
        v0 = _ZN11MatchEngine13func_0206d8e0Ev((s32)((u8 *)&data_020e88a0));
        return v0;
    } else {
        t0 = *(u8 *)(((u8 *)&gGameState) + 0x7E);
        v1 = _ZN11MatchEngine13func_0206d840Ei((s32)((u8 *)&data_020e88a0), t0);
        return v1;
    }
}

extern "C" void func_ov001_02122cbc(void)
{
    _ZN11MatchEngine13func_0206d8f8Ev((s32)data_020e88a0);
}

extern "C" void func_ov001_02122cd0(void)
{
    _ZN11MatchEngine13func_0206d910Ev((s32)data_020e88a0);
}

extern "C" void func_ov001_02122ce4(void)
{
    _ZN11MatchEngine13func_0206df34Ev((s32)data_020e88a0);
}

extern "C" void func_ov001_02122cf8(void)
{
    _ZN11MatchEngine13func_0206dedcEv((s32)data_020e88a0);
}

extern "C" void func_ov001_02122d0c(void)
{
    _ZN11MatchEngine13func_0206d958Ev((s32)data_020e88a0);
}

extern "C" s32 func_ov001_02122d20(void)
{
    s32 v0 = _ZN11MatchEngine13func_0206dedcEv((s32)data_020e88a0);
    return (v0 == 0 ? 1 : 0);
}

extern "C" asm void func_ov001_02122d40(void)
{
    ldr r0, =gGameState
    ldrb r0, [r0, #0x7e]
    cmp r0, #2
    movls r0, #1
    bls @L_02122dc0
    cmp r0, #3
    blo @L_02122d68
    cmp r0, #5
    movls r0, #2
    bls @L_02122dc0
@L_02122d68:
    ldr r0, =gGameState
    ldrb r0, [r0, #0x7e]
    cmp r0, #6
    blo @L_02122d84
    cmp r0, #8
    movls r0, #3
    bls @L_02122dc0
@L_02122d84:
    ldr r0, =gGameState
    ldrb r0, [r0, #0x7e]
    cmp r0, #9
    blo @L_02122da0
    cmp r0, #0xb
    movls r0, #4
    bls @L_02122dc0
@L_02122da0:
    ldr r0, =gGameState
    ldrb r0, [r0, #0x7e]
    cmp r0, #0xc
    blo @L_02122dbc
    cmp r0, #0xe
    movls r0, #5
    bls @L_02122dc0
@L_02122dbc:
    mvn r0, #0
@L_02122dc0:
    cmp r0, #5
    moveq r0, #1
    movne r0, #0
    bx lr
}

extern "C" void func_ov001_02122dd4(void)
{
    _ZN11MatchEngine13func_0206d940Ev((s32)data_020e88a0);
}

extern "C" asm void func_ov001_02122de8(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r4, =gGameState
    ldrb r1, [r4, #0x7e]
    cmp r1, #0xe
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r4, r5, r6, pc}
    b @L_02122e3c
    b @L_02122e60
    b @L_02122e84
    b @L_02122e3c
    b @L_02122e60
    b @L_02122e84
    b @L_02122e3c
    b @L_02122e60
    b @L_02122e84
    b @L_02122e3c
    b @L_02122e60
    b @L_02122e84
    b @L_02122e3c
    b @L_02122e60
    b @L_02122e84
@L_02122e3c:
    cmp r0, #0x37
    beq @L_02122e4c
    cmp r0, #0x47
    ldmneia sp!, {r4, r5, r6, pc}
@L_02122e4c:
    ldr r0, =gGameState
    ldrb r1, [r0, #0x7e]
    add r1, r1, #1
    strb r1, [r0, #0x7e]
    ldmia sp!, {r4, r5, r6, pc}
@L_02122e60:
    cmp r0, #0x38
    beq @L_02122e70
    cmp r0, #0x46
    ldmneia sp!, {r4, r5, r6, pc}
@L_02122e70:
    ldr r0, =gGameState
    ldrb r1, [r0, #0x7e]
    add r1, r1, #1
    strb r1, [r0, #0x7e]
    ldmia sp!, {r4, r5, r6, pc}
@L_02122e84:
    cmp r0, #0x3c
    ldmneia sp!, {r4, r5, r6, pc}
    ldr r6, =data_020e88a0
    mov r0, r6
    bl _ZN11MatchEngine13func_0206bfecEv
    cmp r0, #0xc
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r5, #0
    str r5, [r4]
    str r5, [r4, #4]
    ldrb r1, [r4, #0x7e]
    mov r0, r6
    bl _ZN11MatchEngine13func_0206d358Ev
    strb r0, [r4, #0x7e]
    mov r0, r6
    bl _ZN11MatchEngine13func_0206bfa8Ev
    cmp r0, #1
    ldreqb r0, [r4, #0x7e]
    cmpeq r0, #0xc
    ldmneia sp!, {r4, r5, r6, pc}
    mov r0, r6
    mov r1, #8
    bl _ZN11MatchEngine13func_0206bfb4Ei
    mov r0, r6
    mov r1, r5
    bl _ZN11MatchEngine13func_0206bff4Ei
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov001_02122ef8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x1c
    ldr r2, =gGameState
    mov r6, r0
    ldrb r0, [r2, #0x1a]
    mov r4, r1
    cmp r0, #0
    bne @L_02122f28
    bl func_ov015_02131808
    cmp r0, #0
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02122f28:
    ldr r0, [r6, #4]
    cmp r0, #0
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldrh r3, [r6, #0xc]
    ldrh r2, [r6, #0xe]
    mov r5, #0
    mov r1, r5
    mul r2, r3, r2
    mov r2, r2, lsl #5
    bl MI_CpuFill8
    ldr r0, =data_020e88a0
    mov r1, r4
    bl _ZN11MatchEngine11GetTeamInfoEi
    movs r4, r0
    beq @L_02122fdc
    ldr r7, =gFont12T
    mov r8, #1
    ldr r0, [r7]
    mov r1, r8
    mov r2, r5
    bl _ZN8TextFont12SetSubColorsEhh
    mov r0, #3
    stmia sp, {r0, r8}
    ldr r0, [r6, #4]
    mov r3, r4
    str r0, [sp, #8]
    ldrh r0, [r6, #0xc]
    mov r1, r5
    mov r0, r0, lsl #3
    str r0, [sp, #0xc]
    ldrh r0, [r6, #0xe]
    mov r0, r0, lsl #3
    str r0, [sp, #0x10]
    str r5, [sp, #0x14]
    str r5, [sp, #0x18]
    ldrh r2, [r6, #0xe]
    ldr r0, [r7]
    mov r2, r2, lsl #3
    ldr r4, [r0]
    sub r2, r2, #0xc
    add r2, r2, r2, lsr #31
    ldr r4, [r4, #8]
    mov r2, r2, asr #1
    blx r4
@L_02122fdc:
    ldrh r2, [r6, #0xc]
    ldrh r1, [r6, #0xe]
    ldr r0, [r6, #4]
    mul r1, r2, r1
    mov r1, r1, lsl #5
    bl DC_FlushRange
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_ov001_02123008(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x3c
    mov r9, r0
    ldr r0, [r9]
    mov r10, r1
    cmp r0, #0
    ldrne r0, [r9, #4]
    str r2, [sp, #0x1c]
    cmpne r0, #0
    movne r0, #1
    moveq r0, #0
    str r3, [sp, #0x20]
    cmp r0, #0
    addeq sp, sp, #0x3c
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r9
    bl func_ov015_02133dc8
    mov r5, #0
    add r0, sp, #0x2c
    mov r1, r5
    mov r2, #0x10
    bl MI_CpuFill8
    ldr r0, [sp, #0x20]
    mov r8, r5
    cmp r0, #0
    ble @L_02123290
    mvn r0, #0
    str r0, [sp, #0x24]
    rsb r0, r0, #0x184
    str r0, [sp, #0x28]
    mov r11, #3
    mov r4, r5
@L_02123088:
    ldr r0, [sp, #0x1c]
    ldr r2, [r0, r8, lsl #2]
    cmp r2, #0
    blt @L_02123290
    ldr r0, =data_020e88a0
    mov r1, r10
    bl _ZN11MatchEngine13func_0206b3a4Eim
    movs r7, r0
    beq @L_02123290
    ldrsh r0, [r7, #4]
    bl func_ov015_02130ae8
    movs r6, r0
    beq @L_02123290
    ldrb r0, [r7, #8]
    cmp r0, #0xa
    addls pc, pc, r0, lsl #2
    b @L_02123118
    b @L_02123118
    b @L_021230f8
    b @L_02123118
    b @L_02123118
    b @L_02123100
    b @L_02123118
    b @L_02123118
    b @L_02123108
    b @L_02123118
    b @L_02123118
    b @L_02123110
@L_021230f8:
    mov r1, #0
    b @L_0212311c
@L_02123100:
    mov r1, #1
    b @L_0212311c
@L_02123108:
    mov r1, #2
    b @L_0212311c
@L_02123110:
    mov r1, #3
    b @L_0212311c
@L_02123118:
    ldr r1, [sp, #0x24]
@L_0212311c:
    cmp r1, #0
    blt @L_02123290
    ldr r0, =data_ov001_021289c0
    ldr r0, [r0, r1, lsl #2]
    bl func_0209d8b8
    str r11, [sp]
    str r4, [sp, #4]
    mov r3, r0
    ldr r0, [r9, #4]
    mov r1, r4
    str r0, [sp, #8]
    ldrh r0, [r9, #0xc]
    mov r2, r5
    mov r0, r0, lsl #3
    str r0, [sp, #0xc]
    ldrh r0, [r9, #0xe]
    mov r0, r0, lsl #3
    str r0, [sp, #0x10]
    str r4, [sp, #0x14]
    ldr r0, =gFont8
    str r4, [sp, #0x18]
    ldr r0, [r0]
    ldr r12, [r0]
    ldr r12, [r12, #8]
    blx r12
    mov r0, #0x184
    bl func_0209d8b8
    mov r2, r0
    ldr r1, [r7]
    ldr r0, =0x88888889
    ldr r3, =0x88888889
    umull r0, r7, r1, r0
    mov r7, r7, lsr #4
    umull r12, r3, r7, r3
    add r0, sp, #0x2c
    mov r1, #0x10
    mov r3, r3, lsr #5
    bl func_02017278
    str r11, [sp]
    str r4, [sp, #4]
    ldr r0, [r9, #4]
    mov r1, #0xc
    str r0, [sp, #8]
    ldrh r0, [r9, #0xc]
    mov r2, r5
    add r3, sp, #0x2c
    mov r0, r0, lsl #3
    str r0, [sp, #0xc]
    ldrh r0, [r9, #0xe]
    mov r0, r0, lsl #3
    str r0, [sp, #0x10]
    str r4, [sp, #0x14]
    ldr r0, =gFont8
    str r4, [sp, #0x18]
    ldr r0, [r0]
    ldr r7, [r0]
    ldr r7, [r7, #8]
    blx r7
    mov r0, r6
    bl func_02080b90
    cmp r10, r0
    beq @L_0212322c
    ldr r0, [sp, #0x28]
    bl func_0209d8b8
    str r11, [sp]
    str r4, [sp, #4]
    mov r3, r0
    b @L_02123238
@L_0212322c:
    str r11, [sp]
    add r3, r6, #0x20
    str r4, [sp, #4]
@L_02123238:
    ldr r0, [r9, #4]
    mov r1, #0x2c
    str r0, [sp, #8]
    ldrh r0, [r9, #0xc]
    mov r2, r5
    mov r0, r0, lsl #3
    str r0, [sp, #0xc]
    ldrh r0, [r9, #0xe]
    mov r0, r0, lsl #3
    str r0, [sp, #0x10]
    str r4, [sp, #0x14]
    ldr r0, =gFont8
    str r4, [sp, #0x18]
    ldr r0, [r0]
    ldr r6, [r0]
    ldr r6, [r6, #8]
    blx r6
    ldr r0, [sp, #0x20]
    add r8, r8, #1
    add r5, r5, #8
    cmp r8, r0
    blt @L_02123088
@L_02123290:
    ldrh r2, [r9, #0xc]
    ldrh r1, [r9, #0xe]
    ldr r0, [r9, #4]
    mul r1, r2, r1
    mov r1, r1, lsl #5
    bl DC_FlushRange
    mov r0, #1
    strb r0, [r9, #0x10]
    add sp, sp, #0x3c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 func_ov001_021232c8(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    ldr r7, [pc, #0x34c]
    mov r11, r0
    mov r0, r7
    mov r6, r1
    mov r5, #1
    mov r4, #0
    bl func_0209bf8c
    mov r8, r0
    mov r0, r7
    mov r1, #6
    bl func_0209c4d8
    add r1, r11, r8, lsl #2
    str r6, [r1, #4]
    mov r0, #0xe
    str r0, [r11, #0x14]
    mov r7, r4
    str r7, [r1, #0x18]
    str r7, [r1, #0x28]
    str r7, [r1, #0x38]
    str r7, [r11, #0x48]
    cmp r6, #0xd
    addls pc, pc, r6, lsl #2
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    dcd 0xe8bd8ff8
    dcd 0xe8bd8ff8
    dcd 0xe8bd8ff8
    dcd 0xea000009
    dcd 0xe8bd8ff8
    dcd 0xe8bd8ff8
    dcd 0xea000071
    dcd 0xe8bd8ff8
    dcd 0xea00006f
    dcd 0xea000025
    dcd 0xea000024
    dcd 0xea000091
    dcd 0xea000044
    dcd 0xea000043
    dcd 0xe1a0a007
    dcd 0xe2476001
    dcd 0xe28b9038
    dcd 0xea000018
@L_02123370:
    add r0, r10, r7
    bl func_ov015_02130ae8
    cmp r0, #0
    beq @L_021233d0
    ldrh r1, [r0, #0xf0]
    tst r1, #1
    movne r1, r5
    moveq r1, r4
    cmp r1, #0
    beq @L_021233d0
    ldrh r1, [r0, #0xf0]
    tst r1, #2
    movne r1, r5
    moveq r1, r4
    cmp r1, #0
    beq @L_021233d0
    bl func_ov015_02131a5c
    cmp r0, #0
    bne @L_021233d0
    ldr r0, [r9, r8, lsl #2]
    cmp r6, #0
    orr r0, r0, r5, lsl r10
    str r0, [r9, r8, lsl #2]
    addlt r6, r10, r7
@L_021233d0:
    add r10, r10, #1
    cmp r10, #0x20
    blt @L_02123370
    add r0, r11, r8, lsl #2
    str r6, [r0, #0x18]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    dcd 0xe2476001
    dcd 0xeb003972
    dcd 0xe3500000
    dcd 0x13a07010
    dcd 0xe3a0a000
    dcd 0xe28b9038
    dcd 0xea000015
@L_02123404:
    add r0, r10, r7
    bl func_ov015_02130ae8
    cmp r0, #0
    beq @L_02123458
    ldrh r1, [r0, #0xf0]
    tst r1, #1
    movne r1, r5
    moveq r1, r4
    cmp r1, #0
    beq @L_02123458
    ldrh r0, [r0, #0xf0]
    tst r0, #2
    movne r0, r5
    moveq r0, r4
    cmp r0, #0
    beq @L_02123458
    ldr r0, [r9, r8, lsl #2]
    cmp r6, #0
    orr r0, r0, r5, lsl r10
    str r0, [r9, r8, lsl #2]
    addlt r6, r10, r7
@L_02123458:
    add r10, r10, #1
    cmp r10, #0x10
    blt @L_02123404
    add r0, r11, r8, lsl #2
    str r6, [r0, #0x18]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    dcd 0xe2476001
    dcd 0xeb003950
    dcd 0xe3500000
    dcd 0x13a07010
    dcd 0xe3a0a000
    dcd 0xe28b9038
    dcd 0xea00001a
@L_0212348c:
    add r0, r10, r7
    bl func_ov015_02130ae8
    cmp r0, #0
    beq @L_021234f4
    ldrh r1, [r0, #0xf0]
    tst r1, #1
    movne r1, r5
    moveq r1, r4
    cmp r1, #0
    beq @L_021234f4
    ldrh r0, [r0, #0xf0]
    tst r0, #2
    movne r0, r5
    moveq r0, r4
    cmp r0, #0
    beq @L_021234f4
    ldr r0, [pc, #0x150]
    add r1, r10, r7
    ldr r0, [r0, #0x78]
    tst r0, r5, lsl r1
    beq @L_021234f4
    ldr r0, [r9, r8, lsl #2]
    cmp r6, #0
    orr r0, r0, r5, lsl r10
    str r0, [r9, r8, lsl #2]
    movlt r6, r1
@L_021234f4:
    add r10, r10, #1
    cmp r10, #0x10
    blt @L_0212348c
    add r0, r11, r8, lsl #2
    str r6, [r0, #0x18]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    dcd 0xe2476001
    dcd 0xeb003929
    dcd 0xe3500000
    dcd 0x13a07010
    dcd 0xe3a0a000
    dcd 0xe28b9038
    dcd 0xea000018
@L_02123528:
    add r0, r10, r7
    bl func_ov015_02130ae8
    cmp r0, #0
    beq @L_02123588
    ldrh r1, [r0, #0xf0]
    tst r1, #1
    movne r1, r5
    moveq r1, r4
    cmp r1, #0
    beq @L_02123588
    ldrh r1, [r0, #0xf0]
    tst r1, #2
    movne r1, r5
    moveq r1, r4
    cmp r1, #0
    beq @L_02123588
    bl func_ov015_02131a5c
    cmp r0, #0
    beq @L_02123588
    ldr r0, [r9, r8, lsl #2]
    cmp r6, #0
    orr r0, r0, r5, lsl r10
    str r0, [r9, r8, lsl #2]
    addlt r6, r10, r7
@L_02123588:
    add r10, r10, #1
    cmp r10, #0x10
    blt @L_02123528
    add r0, r11, r8, lsl #2
    str r6, [r0, #0x18]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    dcd 0xe2476001
    dcd 0xeb003904
    dcd 0xe3a07020
    dcd 0xe3500000
    dcd 0x13a07030
    dcd 0xe3a0a000
    dcd 0xe28b9038
    dcd 0xea000012
@L_021235c0:
    add r0, r10, r7
    bl func_ov015_02130ae8
    cmp r0, #0
    beq @L_02123608
    ldrh r1, [r0, #0xf0]
    tst r1, #1
    movne r1, r5
    moveq r1, r4
    cmp r1, #0
    beq @L_02123608
    bl func_ov015_02131a5c
    cmp r0, #0
    beq @L_02123608
    ldr r0, [r9, r8, lsl #2]
    cmp r6, #0
    orr r0, r0, r5, lsl r10
    str r0, [r9, r8, lsl #2]
    addlt r6, r10, r7
@L_02123608:
    add r10, r10, #1
    cmp r10, #0x10
    blt @L_021235c0
    add r0, r11, r8, lsl #2
    str r6, [r0, #0x18]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    dcd gWirelessUtil
    dcd gGameState
}

extern "C" void func_ov001_02123628(u8 *arg0, s32 arg1, s32 arg2)
{
    s32 n;
    s32 k;
    ((s32 *)(arg0 + 4))[arg2] = arg1;
    n = ((s32 (*)(void *))func_0209bf8c)(gWirelessUtil);
    k = arg2;
    if (arg2 >= n)
        k = arg2 - 1;
    ((s32 *)(arg0 + 0x18))[arg2] = -1;
    ((s32 *)(arg0 + 0x28))[arg2] = -1;
    ((s32 *)(arg0 + 0x38))[arg2] = 0;
    ((void (*)(u8 *, s32, s32))MI_CpuFill8)(arg0 + 0x4C + k * 0x20, 0, 0x20);
}

#pragma push
#pragma optimization_level 2
extern "C" void func_ov001_02123680(u8 *arg0, u8 arg1)
{
    s32 r5;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    t0 = *(s32 *)(arg0);
    *(u8 *)(((u8 *)&data_020c4b80) + 0x2) = t0;
    *(u8 *)(((u8 *)&data_020c4b80) + 0x3) = arg1;
    r5 = 0;
    while (r5 < 4) {
        t1 = *(s32 *)(((u8 *)(arg0 + (r5 << 2))) + 0x4);
        *(u8 *)(((u8 *)&data_020c4bd8) + r5) = t1;
        t2 = *(s32 *)(((u8 *)(arg0 + (r5 << 2))) + 0x18);
        *(u8 *)(((u8 *)&data_020c4bdc) + r5) = t2;
        t3 = *(s32 *)(((u8 *)(arg0 + (r5 << 2))) + 0x28);
        *(u8 *)(((u8 *)&data_020c4bf0) + r5) = t3;
        t4 = *(s32 *)(((u8 *)(arg0 + (r5 << 2))) + 0x38);
        *(s32 *)(((u8 *)&data_020c4be0) + (r5 << 2)) = t4;
        r5 = (r5 + 1);
    }
    return;
}
#pragma pop

extern "C" asm void func_ov001_021236f4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r0
    ldr r0, =gWirelessUtil
    mov r5, r1
    mov r7, #0
    bl func_0209bf8c
    mov r4, r0
    add r1, r6, #0x28
    ldr r0, [r1, r4, lsl #2]
    add r12, r6, r4, lsl #2
    add r0, r0, #1
    str r0, [r1, r4, lsl #2]
    ldr r1, [r12, #4]
    ldr r2, [r12, #0x28]
    mov r0, #0x54
    mul r0, r2, r0
    cmp r1, #0xe
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
    b @L_0212377c
    b @L_0212378c
    b @L_021237a4
    b @L_0212390c
    b @L_02123928
    b @L_0212384c
    b @L_021238fc
    b @L_02123888
    b @L_021237cc
    b @L_021237cc
    b @L_021238c4
    b @L_0212380c
    b @L_0212380c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0212377c:
    mov r0, r6
    mov r1, r5
    bl func_ov001_021232c8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0212378c:
    cmp r0, #0xc0
    ldmloia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r6
    mov r1, r5
    bl func_ov001_021232c8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_021237a4:
    rsb r0, r0, #0x4c
    cmp r0, #0
    ldmgtia sp!, {r3, r4, r5, r6, r7, pc}
    mov r2, r7
    mov r0, r6
    mov r1, r5
    mov r3, #0x1f
    str r2, [r12, #0x28]
    bl func_ov001_0212393c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_021237cc:
    rsb r0, r0, #0x4c
    cmp r0, #0
    ldmgtia sp!, {r3, r4, r5, r6, r7, pc}
    mov r4, r7
    mov r7, #0xf
    str r4, [r12, #0x28]
    bl func_ov015_021319bc
    cmp r0, #1
    moveq r4, #0x10
    moveq r7, #0x1f
    mov r0, r6
    mov r1, r5
    mov r2, r4
    mov r3, r7
    bl func_ov001_0212393c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0212380c:
    rsb r0, r0, #0x3a
    cmp r0, #0
    ldmgtia sp!, {r3, r4, r5, r6, r7, pc}
    mov r4, r7
    mov r7, #0xf
    str r4, [r12, #0x28]
    bl func_ov015_021319bc
    cmp r0, #1
    moveq r4, #0x10
    moveq r7, #0x1f
    mov r0, r6
    mov r1, r5
    mov r2, r4
    mov r3, r7
    bl func_ov001_0212393c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0212384c:
    rsb r0, r0, #0x1ac
    cmp r0, #0
    ldmgtia sp!, {r3, r4, r5, r6, r7, pc}
    mov r4, r7
    str r4, [r12, #0x28]
    bl func_ov015_021319bc
    cmp r0, #0
    moveq r3, #0xf
    movne r4, #0x10
    movne r3, #0x1f
    mov r0, r6
    mov r1, r5
    mov r2, r4
    bl func_ov001_0212393c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02123888:
    rsb r0, r0, #0x4c
    cmp r0, #0
    ldmgtia sp!, {r3, r4, r5, r6, r7, pc}
    bl func_ov015_021319bc
    cmp r0, #0
    moveq r3, #0xf
    add r1, r6, r4, lsl #2
    mov r2, r7
    str r2, [r1, #0x28]
    movne r2, #0x10
    movne r3, #0x1f
    mov r0, r6
    mov r1, r5
    bl func_ov001_0212393c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_021238c4:
    rsb r0, r0, #0x1ac
    cmp r0, #0
    ldmgtia sp!, {r3, r4, r5, r6, r7, pc}
    str r7, [r12, #0x28]
    bl func_ov015_021319bc
    cmp r0, #0
    moveq r2, #0x20
    moveq r3, #0x2f
    movne r2, #0x30
    movne r3, #0x3f
    mov r0, r6
    mov r1, r5
    bl func_ov001_0212393c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_021238fc:
    mov r0, r6
    mov r1, r5
    bl func_ov001_021232c8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0212390c:
    rsb r0, r0, #0x40
    cmp r0, #0
    ldmgtia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r6
    mov r1, r5
    bl func_ov001_021232c8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02123928:
    mov r0, r6
    mov r1, r5
    bl func_ov001_021232c8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" s32 func_ov001_0212393c(u8 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 r0;
    u8 *r1;
    s32 r2;
    s32 r3;
    s32 r12;
    s32 lr;
    s32 v0;
    s32 v1;
    s32 t0;
    v0 = func_0209bf8c((s32)((u8 *)&gWirelessUtil), arg1, arg2, arg3);
    *(s32 *)(((u8 *)(arg0 + (v0 << 2))) + 0x28) = 0;
    r0 = v0;
    r1 = (u8 *)(arg0 + (v0 << 2));
    r12 = (*(s32 *)(arg0 + 0x48) ^ *(s32 *)(((u8 *)(arg0 + (v0 << 2))) + 0x38));
    if (r12 == 0) {
        v1 = func_ov001_021232c8((s32)arg0, arg1);
        return v1;
    } else {
        if (*(s32 *)(r1 + 0x18) >= arg3)
            return r0;
        lr = *(s32 *)(r1 + 0x18);
        do {
            t0 = (*(s32 *)(((u8 *)(arg0 + 0x18)) + (r0 << 2)) + 1);
            *(s32 *)(((u8 *)(arg0 + 0x18)) + (r0 << 2)) = t0;
            r3 = 1;
            r2 = *(s32 *)(r1 + 0x18);
            if (r2 > arg3) {
                *(s32 *)(r1 + 0x18) = lr;
                return r0;
            }
        } while ((r12 & (r3 << (r2 - arg2))) == 0);
        return r0;
    }
}

extern "C" asm void func_ov001_021239c8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r2, =gWirelessUtil
    mov r5, r1
    cmp r0, #0
    ldrb r4, [r2, #0x64]
    beq @L_02123a10
    b @L_021239e8
@L_021239e4:
    add r5, r5, #4
@L_021239e8:
    ldr r1, [r5]
    cmp r1, r0
    beq @L_021239fc
    cmp r1, #0xe
    bne @L_021239e4
@L_021239fc:
    ldr r0, [r5]
    cmp r0, #0xe
    bne @L_02123a14
    mov r0, #0xe
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02123a10:
    sub r5, r5, #4
@L_02123a14:
    ldr r0, [r5, #4]!
    cmp r0, #0xb
    bne @L_02123a60
    mov r6, #0
    mov r7, #0x20
    b @L_02123a50
@L_02123a2c:
    mov r0, r7
    bl func_ov015_02130ae8
    cmp r0, #0
    beq @L_02123a4c
    bl func_ov015_02131a5c
    cmp r0, #0
    movne r6, #1
    bne @L_02123a58
@L_02123a4c:
    add r7, r7, #1
@L_02123a50:
    cmp r7, #0x40
    blt @L_02123a2c
@L_02123a58:
    cmp r6, #0
    beq @L_02123ad0
@L_02123a60:
    ldr r0, [r5]
    cmp r0, #0xc
    cmpne r0, #0xd
    bne @L_02123a80
    ldr r0, =gGameState
    ldr r0, [r0, #0x78]
    cmp r0, #0
    beq @L_02123ad0
@L_02123a80:
    bl func_ov015_02131ae4
    cmp r0, #0
    bne @L_02123aa0
    ldr r0, [r5]
    cmp r0, #9
    cmpne r0, #0xa
    cmpne r0, #0xd
    beq @L_02123ad0
@L_02123aa0:
    cmp r4, #0
    beq @L_02123ab4
    ldr r0, [r5]
    cmp r0, #5
    bne @L_02123adc
@L_02123ab4:
    cmp r4, #0
    bne @L_02123ad0
    ldr r0, [r5]
    cmp r0, #1
    cmpne r0, #2
    cmpne r0, #3
    bne @L_02123adc
@L_02123ad0:
    ldr r0, [r5]
    cmp r0, #0xe
    bne @L_02123a14
@L_02123adc:
    ldr r0, [r5]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov001_02123aec(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    ldr r5, =data_ov001_021306c0
    mov r7, r0
    ldr r0, [r5]
    str r1, [sp]
    mov r11, r2
    mov r10, r3
    tst r0, #1
    mov r4, #1
    bne @L_02123b4c
    mov r1, #0x1ac
    ldr r2, =0x86186187
    add r3, r1, #0x53
    umull r1, r2, r3, r2
    sub r1, r3, r2
    add r2, r2, r1, lsr #1
    orr r1, r0, #1
    mov r2, r2, lsr #6
    mov r0, r4, lsl r2
    sub r2, r0, #1
    ldr r0, =data_ov001_0212a8b4
    and r2, r2, #0xff
    str r2, [r0]
    str r1, [r5]
@L_02123b4c:
    ldr r5, =gWirelessUtil
    mov r0, r5
    bl func_0209bf8c
    mov r0, r5
    bl func_0209bf8c
    add r1, r7, r10, lsl #2
    cmp r10, r0
    mov r6, r10
    ldr r0, [r1, #0x28]
    ldr r5, [r1, #0x18]
    mov r2, r4, lsl r0
    subge r6, r10, #1
    add r3, r7, #0x4c
    add r8, r3, r6, lsl #5
    sub r0, r5, r11
    and r3, r2, #0xff
    ldrb r4, [r8, r0]
    ldr r2, =data_ov001_0212a9e8
    orr r3, r4, r3
    strb r3, [r8, r0]
    ldr r3, [r2]
    ldr r2, [r1, #0x28]
    mov r1, #0x54
    mla r3, r2, r1, r3
    mov r1, #0x1ac
    mla r2, r1, r0, r3
    mov r0, r1
    mov r0, r0, lsl #4
    mla r1, r6, r0, r2
    ldr r0, [sp]
    ldrb r2, [r0, #0x70]
    bl MI_CpuCopy8
    ldr r1, =data_ov001_0212a8b4
    add r0, r7, r6, lsl #5
    sub r2, r5, r11
    add r2, r0, r2
    ldrb r2, [r2, #0x4c]
    ldr r1, [r1]
    cmp r1, r2
    bne @L_02123e00
    add r3, r7, r10, lsl #2
    mov r2, #0
    str r2, [r3, #0x38]
    add r5, r7, #0x38
    mov r3, #1
    b @L_02123c20
@L_02123c04:
    add r4, r0, r2
    ldrb r4, [r4, #0x4c]
    teq r1, r4
    ldreq r4, [r5, r10, lsl #2]
    orreq r4, r4, r3, lsl r2
    streq r4, [r5, r10, lsl #2]
    add r2, r2, #1
@L_02123c20:
    cmp r2, #0x20
    blt @L_02123c04
    ldr r0, [sp]
    add r1, r0, r10, lsl #2
    add r0, r7, r10, lsl #2
    ldr r1, [r1, #0x5c]
    ldr r0, [r0, #0x38]
    cmp r1, r0
    bne @L_02123e00
    ldr r4, =data_ov001_0212a9e8
    ldr r1, =0x5040
    ldr r0, [r4]
    bl DC_FlushRange
    mov r0, #0x1ac
    ldr r1, [r4]
    mov r0, r0, lsl #4
    mla r7, r6, r0, r1
    mov r6, #0
    b @L_02123df0
@L_02123c6c:
    ldr r0, [sp]
    add r0, r0, r10, lsl #2
    ldr r1, [r0, #0x5c]
    mov r0, #1
    tst r1, r0, lsl r6
    beq @L_02123de4
    add r0, r6, r11
    bl func_ov015_02130ae8
    movs r5, r0
    bne @L_02123ca4
    ldr r0, =gEntryPool
    add r1, r6, r11
    bl _ZN9EntryPool6CreateEi
    mov r5, r0
@L_02123ca4:
    cmp r5, #0
    beq @L_02123de4
    mov r0, r7
    mov r1, r5
    mov r2, #0
    bl func_ov015_02130d8c
    ldr r1, [r5, #0xe8]
    cmp r1, #0
    beq @L_02123cd4
    add r0, r7, #0xfc
    mov r2, #0x20
    bl MI_CpuCopy8
@L_02123cd4:
    ldr r1, [r5, #0xec]
    cmp r1, #0
    beq @L_02123cec
    add r0, r7, #0x11c
    mov r2, #0x90
    bl MI_CpuCopy8
@L_02123cec:
    ldr r0, =data_020ca700
    ldr r0, [r0, r10, lsl #2]
    bl func_ov015_02131bb4
    cmp r0, #0
    bne @L_02123db4
    ldr r4, [r5, #0xe8]
    cmp r4, #0
    beq @L_02123d50
    mov r0, r4
    bl func_ov015_021313d4
    ldrb r0, [r4, #0x1b]
    add r0, r0, #4
    mov r1, r0, lsr #0x1f
    rsb r0, r1, r0, lsl #29
    add r0, r1, r0, ror #29
    strb r0, [r4, #0x1b]
    ldrh r0, [r4, #0x18]
    add r0, r0, #0x8000
    strh r0, [r4, #0x18]
    ldrb r0, [r4, #0x1a]
    add r0, r0, #4
    mov r1, r0, lsr #0x1f
    rsb r0, r1, r0, lsl #29
    add r0, r1, r0, ror #29
    strb r0, [r4, #0x1a]
@L_02123d50:
    ldrh r0, [r5, #0xf0]
    tst r0, #0x20
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    ldrneh r1, [r5, #0xf0]
    ldrne r0, =0xffdf
    andne r0, r1, r0
    ldreqh r0, [r5, #0xf0]
    orreq r0, r0, #0x20
    strh r0, [r5, #0xf0]
    ldr r0, [r5, #0xec]
    cmp r0, #0
    beq @L_02123db4
    ldrb r9, [r0, #0x85]
    mov r8, #0
    add r4, r0, #0x34
    cmp r9, #0xa
    movhi r9, #0xa
    b @L_02123dac
@L_02123da0:
    add r0, r4, r8, lsl #3
    bl func_ov015_021313d4
    add r8, r8, #1
@L_02123dac:
    cmp r8, r9
    blt @L_02123da0
@L_02123db4:
    mov r0, r5
    bl func_ov015_02131a5c
    cmp r0, #0
    ldrneh r0, [r5, #0xf0]
    ldreqh r1, [r5, #0xf0]
    orrne r0, r0, #0x20
    ldreq r0, =0xffdf
    andeq r0, r1, r0
    strh r0, [r5, #0xf0]
    mov r0, r5
    mov r1, #0xfc
    bl DC_FlushRange
@L_02123de4:
    mov r0, #0x1ac
    add r7, r7, r0
    add r6, r6, #1
@L_02123df0:
    cmp r6, #0x20
    blt @L_02123c6c
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02123e00:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov001_02123e2c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    ldr r4, =gWirelessUtil
    mov r6, r0
    mov r0, r4
    str r1, [sp]
    str r2, [sp, #4]
    mov r10, r3
    mov r7, #1
    bl func_0209bf8c
    mov r0, r4
    bl func_0209bf8c
    add r1, r6, r10, lsl #2
    cmp r10, r0
    ldr r0, [r1, #0x28]
    mov r4, r10
    mov r2, r7, lsl r0
    ldr r5, [r1, #0x18]
    ldr r0, [sp, #4]
    subge r4, r10, #1
    add r3, r6, #0x4c
    add r8, r3, r4, lsl #5
    sub r0, r5, r0
    and r3, r2, #0xff
    ldrb r7, [r8, r0]
    ldr r2, =data_ov001_0212a9e8
    orr r3, r7, r3
    strb r3, [r8, r0]
    ldr r3, [r2]
    ldr r2, [r1, #0x28]
    mov r1, #0x54
    mla r3, r2, r1, r3
    mov r1, #0x4c
    mla r1, r0, r1, r3
    mov r0, #0x4c0
    mla r1, r4, r0, r1
    ldr r0, [sp]
    ldrb r2, [r0, #0x70]
    bl MI_CpuCopy8
    ldr r1, [sp, #4]
    add r0, r6, r4, lsl #5
    sub r1, r5, r1
    add r1, r0, r1
    ldrb r1, [r1, #0x4c]
    cmp r1, #1
    bne @L_02124280
    add r1, r6, r10, lsl #2
    mov r7, #0
    str r7, [r1, #0x38]
    mov r1, #1
    mov r5, #0x3f000000
    add r3, r6, #0x38
    b @L_02123f1c
@L_02123f00:
    add r2, r0, r7
    ldrb r2, [r2, #0x4c]
    teq r2, #1
    ldreq r2, [r3, r10, lsl #2]
    orreq r2, r2, r1, lsl r7
    streq r2, [r3, r10, lsl #2]
    add r7, r7, #1
@L_02123f1c:
    cmp r7, #0x20
    blt @L_02123f00
    ldr r0, [sp]
    add r1, r0, r10, lsl #2
    add r0, r6, r10, lsl #2
    ldr r1, [r1, #0x5c]
    ldr r0, [r0, #0x38]
    cmp r1, r0
    bne @L_02124280
    ldrb r0, [sp, #0x30]
    cmp r0, #0
    addeq sp, sp, #8
    moveq r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r6, =data_ov001_0212a9e8
    ldr r1, =0x5040
    ldr r0, [r6]
    bl DC_FlushRange
    ldr r1, [r6]
    mov r0, #0x4c0
    mla r7, r4, r0, r1
    mov r11, #0
    b @L_0212426c
@L_02123f78:
    ldr r0, [sp]
    add r0, r0, r10, lsl #2
    ldr r1, [r0, #0x5c]
    mov r0, #1
    tst r1, r0, lsl r11
    beq @L_02124264
    ldr r0, [sp, #4]
    add r0, r11, r0
    bl func_ov015_02130ae8
    movs r6, r0
    beq @L_02124264
    ldrb r1, [r7]
    ldr r0, [r6, #0xec]
    mov r4, #0
    strb r1, [r0, #0x84]
    ldrsh r1, [r7, #2]
    ldr r0, [r6, #0xec]
    strh r1, [r0, #0x86]
    ldr r0, [r6, #0xec]
    strb r4, [r0, #0x85]
    b @L_0212406c
@L_02123fcc:
    add r0, r7, r4, lsl #2
    ldrsh r0, [r0, #6]
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02123ff4
    bl _fflt
    mov r1, r0
    mov r0, r5
    bl _fadd
    b @L_02124000
@L_02123ff4:
    bl _fflt
    mov r1, r5
    bl _fsub
@L_02124000:
    bl _ffix
    mov r8, r0
    add r0, r7, r4, lsl #2
    ldrsh r0, [r0, #4]
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02124030
    bl _fflt
    mov r1, r0
    mov r0, r5
    bl _fadd
    b @L_0212403c
@L_02124030:
    bl _fflt
    mov r1, r5
    bl _fsub
@L_0212403c:
    bl _ffix
    ldr r1, [r6, #0xec]
    add r4, r4, #1
    ldrb r2, [r1, #0x85]
    add r2, r1, r2, lsl #3
    str r0, [r2, #0x34]
    ldrb r0, [r1, #0x85]
    add r0, r1, r0, lsl #3
    str r8, [r0, #0x38]
    ldrb r0, [r1, #0x85]
    add r0, r0, #1
    strb r0, [r1, #0x85]
@L_0212406c:
    ldrb r0, [r7, #1]
    cmp r4, r0
    blt @L_02123fcc
    ldrh r1, [r7, #0x34]
    ldr r0, =0x7ff
    strh r1, [r6, #0xf0]
    ldr r1, [r7, #0x2c]
    and r0, r1, r0
    sub r0, r0, #0x400
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_021240b0
    bl _fflt
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_021240bc
@L_021240b0:
    bl _fflt
    mov r1, #0x3f000000
    bl _fsub
@L_021240bc:
    bl _ffix
    ldr r2, [r6, #0xe8]
    ldr r1, =0x7ff
    str r0, [r2]
    ldr r0, [r7, #0x2c]
    and r0, r1, r0, lsr #11
    sub r0, r0, #0x400
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_021240f8
    bl _fflt
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_02124104
@L_021240f8:
    bl _fflt
    mov r1, #0x3f000000
    bl _fsub
@L_02124104:
    bl _ffix
    ldr r1, [r6, #0xe8]
    str r0, [r1, #4]
    ldrh r2, [r7, #0x36]
    ldr r1, [r6, #0xe8]
    mov r0, r10
    strh r2, [r1, #0x16]
    ldrh r1, [r7, #0x38]
    strh r1, [r6, #0xba]
    bl func_ov015_021319fc
    bl func_ov015_02131bb4
    cmp r0, #0
    bne @L_02124140
    ldr r0, [r6, #0xe8]
    bl func_ov015_021313d4
@L_02124140:
    ldrh r2, [r7, #0x30]
    ldr r1, [r6, #0xe8]
    mov r0, r10
    and r2, r2, #0xf
    strb r2, [r1, #0x1d]
    bl func_ov015_021319fc
    bl func_ov015_02131bb4
    cmp r0, #0
    bne @L_021241ac
    ldr r0, [r6, #0xec]
    mov r8, #0
    ldrb r9, [r0, #0x85]
    add r4, r0, #0x34
    cmp r9, #0xa
    movhi r9, #0xa
    b @L_0212418c
@L_02124180:
    add r0, r4, r8, lsl #3
    bl func_ov015_021313d4
    add r8, r8, #1
@L_0212418c:
    cmp r8, r9
    blt @L_02124180
    ldrh r1, [r7, #0x30]
    ldr r0, [r6, #0xe8]
    mov r1, r1, asr #4
    and r1, r1, #7
    add r1, r1, #4
    b @L_021241b8
@L_021241ac:
    ldrh r1, [r7, #0x30]
    ldr r0, [r6, #0xe8]
    mov r1, r1, asr #4
@L_021241b8:
    and r1, r1, #7
    strb r1, [r0, #0x1b]
    ldrh r0, [r7, #0x30]
    mov r4, #7
    ldr r3, [r6, #0xe8]
    mov r0, r0, asr #7
    and r8, r0, #7
    mov r2, r4
    add r0, r7, #0x3b
    add r1, r6, #0xd8
    strh r8, [r3, #0x10]
    bl MI_CpuCopy8
    mov r2, r4
    add r0, r7, #0x42
    add r1, r6, #0xdf
    bl MI_CpuCopy8
    ldrb r1, [r7, #0x3a]
    mov r0, r6
    bl func_020813a0
    mov r0, r6
    bl func_ov015_02131a5c
    cmp r0, #0
    ldrneh r0, [r6, #0xf0]
    ldreqh r1, [r6, #0xf0]
    orrne r0, r0, #0x20
    ldreq r0, =0xffdf
    andeq r0, r1, r0
    strh r0, [r6, #0xf0]
    ldrb r0, [r7, #0x3a]
    cmp r0, #0
    ble @L_02124248
    cmp r0, #0xb
    ldrleh r0, [r6, #0xf0]
    orrle r0, r0, #0x18
    strleh r0, [r6, #0xf0]
    ble @L_02124258
@L_02124248:
    ldrh r1, [r6, #0xf0]
    ldr r0, =0xfff7
    and r0, r1, r0
    strh r0, [r6, #0xf0]
@L_02124258:
    mov r0, r6
    mov r1, #0xfc
    bl DC_FlushRange
@L_02124264:
    add r7, r7, #0x4c
    add r11, r11, #1
@L_0212426c:
    cmp r11, #0x20
    blt @L_02123f78
    add sp, sp, #8
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02124280:
    mov r0, #0
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov001_021242a4(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    ldr r4, =gWirelessUtil
    mov r9, r0
    mov r0, r4
    mov r8, r1
    mov r7, r2
    mov r6, r3
    mov r10, #1
    bl func_0209bf8c
    mov r0, r4
    bl func_0209bf8c
    add r2, r9, r6, lsl #2
    cmp r6, r0
    mov r5, r6
    ldr r0, [r2, #0x28]
    ldr r4, [r2, #0x18]
    mov r3, r10, lsl r0
    and r10, r3, #0xff
    subge r5, r6, #1
    add r1, r9, #0x4c
    add r1, r1, r5, lsl #5
    sub r0, r4, r7
    ldrb r12, [r1, r0]
    ldr r3, =data_ov001_0212a9e8
    orr r10, r12, r10
    strb r10, [r1, r0]
    ldr r3, [r3]
    ldr r2, [r2, #0x28]
    mov r1, #0x54
    mla r3, r2, r1, r3
    mov r1, #0x3a
    mla r1, r0, r1, r3
    mov r0, #0x3a0
    mla r1, r5, r0, r1
    ldrb r2, [r8, #0x70]
    mov r0, r8
    bl MI_CpuCopy8
    add r0, r9, r5, lsl #5
    sub r1, r4, r7
    add r1, r0, r1
    ldrb r1, [r1, #0x4c]
    cmp r1, #1
    bne @L_02124528
    add r2, r9, r6, lsl #2
    mov r1, #0
    str r1, [r2, #0x38]
    mov r10, #1
    add r3, r9, #0x38
    b @L_02124384
@L_02124368:
    add r2, r0, r1
    ldrb r2, [r2, #0x4c]
    teq r2, #1
    ldreq r2, [r3, r6, lsl #2]
    orreq r2, r2, r10, lsl r1
    streq r2, [r3, r6, lsl #2]
    add r1, r1, #1
@L_02124384:
    cmp r1, #0x20
    blt @L_02124368
    add r1, r8, r6, lsl #2
    add r0, r9, r6, lsl #2
    ldr r1, [r1, #0x5c]
    ldr r0, [r0, #0x38]
    cmp r1, r0
    bne @L_02124528
    ldrb r0, [sp, #0x20]
    cmp r0, #0
    moveq r0, #1
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r4, =data_ov001_0212a9e8
    ldr r1, =0x5040
    ldr r0, [r4]
    bl DC_FlushRange
    ldr r1, [r4]
    mov r0, #0x3a0
    mla r4, r5, r0, r1
    mov r9, #0
    b @L_02124518
@L_021243d8:
    add r0, r8, r6, lsl #2
    ldr r0, [r0, #0x5c]
    tst r0, r10, lsl r9
    beq @L_02124510
    add r0, r9, r7
    bl func_ov015_02130ae8
    movs r5, r0
    beq @L_02124510
    ldrh r0, [r5, #0x42]
    ldrh r1, [r4, #8]
    cmp r1, r0
    beq @L_0212441c
    ldr r0, =data_020e88a0
    bl func_02082c8c
    cmp r0, #0
    addeq r4, r4, #0x3a
    beq @L_02124514
@L_0212441c:
    ldrh r1, [r5, #0x42]
    ldrh r0, [r4, #8]
    cmp r0, r1
    beq @L_02124448
    ldr r0, =data_020e88a0
    bl func_02082aa4
    add r0, r9, r7
    bl func_ov015_02130ae8
    movs r5, r0
    addeq r4, r4, #0x3a
    beq @L_02124514
@L_02124448:
    ldrsb r1, [r4]
    mov r0, #0
    strb r1, [r5, #0xaf]
    ldrsb r1, [r4, #1]
    strb r1, [r5, #0xb0]
    ldrsb r1, [r4, #2]
    strb r1, [r5, #0xb1]
    ldrsb r1, [r4, #3]
    strb r1, [r5, #0xb2]
    ldrsb r1, [r4, #4]
    strb r1, [r5, #0xb3]
    ldrsb r1, [r4, #5]
    strb r1, [r5, #0xb4]
    ldrsb r1, [r4, #6]
    strb r1, [r5, #0xb5]
    ldrsh r1, [r4, #0xa]
    strh r1, [r5, #0x78]
    ldrsh r1, [r4, #0xc]
    strh r1, [r5, #0x7a]
    b @L_021244d8
@L_02124498:
    mov r2, r0, lsl #1
    add r1, r4, r2, lsl #1
    ldrh r3, [r1, #0xe]
    add r1, r2, #0
    add r2, r2, #1
    add r1, r5, r1, lsl #1
    strh r3, [r1, #0x7c]
    add r1, r4, r2, lsl #1
    ldrh r3, [r1, #0xe]
    add r1, r5, r2, lsl #1
    add r2, r4, r0, lsl #1
    strh r3, [r1, #0x7c]
    add r1, r5, r0, lsl #1
    ldrh r2, [r2, #0x26]
    add r0, r0, #1
    strh r2, [r1, #0x98]
@L_021244d8:
    cmp r0, #6
    blt @L_02124498
    mov r2, #0
    b @L_021244fc
@L_021244e8:
    add r0, r4, r2, lsl #1
    ldrh r1, [r0, #0x32]
    add r0, r5, r2, lsl #1
    add r2, r2, #1
    strh r1, [r0, #0x70]
@L_021244fc:
    cmp r2, #4
    blt @L_021244e8
    mov r0, r5
    mov r1, #0xfc
    bl DC_FlushRange
@L_02124510:
    add r4, r4, #0x3a
@L_02124514:
    add r9, r9, #1
@L_02124518:
    cmp r9, #0x20
    blt @L_021243d8
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02124528:
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_ov001_02124540(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    ldr r8, =gWirelessUtil
    mov r9, r0
    mov r0, r8
    mov r7, #1
    str r1, [sp]
    bl func_0209bf9c
    mov r11, r0
    mov r5, #0
    mov r6, r7
    b @L_021245c4
@L_02124570:
    mov r0, r8
    bl func_0209bf8c
    cmp r5, r0
    beq @L_021245c0
    tst r11, r6, lsl r5
    beq @L_021245c0
    ldrb r0, [r9, #0x3ac]
    cmp r0, #0
    beq @L_021245ac
    mov r0, r5
    bl func_ov015_021319fc
    mov r4, r0
    bl func_ov015_021319bc
    cmp r4, r0
    bne @L_021245c0
@L_021245ac:
    mov r0, r9
    mov r1, r5
    bl func_ov001_02124774
    cmp r0, #0
    moveq r7, #0
@L_021245c0:
    add r5, r5, #1
@L_021245c4:
    cmp r5, #4
    blt @L_02124570
    cmp r7, #0
    addne sp, sp, #8
    movne r0, #1
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, =gWirelessUtil
    bl func_0209bf8c
    mov r6, r0
    add r0, r9, r6, lsl #2
    ldr r7, [r0, #4]
    ldr r10, [r0, #0x28]
    ldr r0, [r0, #0x18]
    mov r5, #0
    str r0, [sp, #4]
    b @L_021246ec
@L_02124604:
    cmp r6, r5
    beq @L_021246e8
    mov r0, #1
    tst r11, r0, lsl r5
    beq @L_021246e8
    mov r0, r5
    mov r1, #0
    bl func_ov015_02131754
    ldrb r1, [r9, #0x3ac]
    add r8, r0, #4
    cmp r1, #0
    beq @L_0212464c
    bl func_ov015_021319bc
    mov r4, r0
    mov r0, r5
    bl func_ov015_021319fc
    cmp r4, r0
    bne @L_021246e8
@L_0212464c:
    add r0, r8, r6
    ldrb r0, [r0, #0x54]
    cmp r7, r0
    addne sp, sp, #8
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r7, #4
    cmpne r7, #5
    cmpne r7, #1
    cmpne r7, #2
    beq @L_02124680
    cmp r7, #7
    bne @L_0212469c
@L_02124680:
    add r0, r8, r6
    ldrb r0, [r0, #0x6c]
    cmp r10, r0
    beq @L_021246e8
    add sp, sp, #8
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0212469c:
    cmp r7, #6
    cmpne r7, #8
    cmpne r7, #0xb
    cmpne r7, #3
    cmpne r7, #9
    cmpne r7, #0xa
    cmpne r7, #0xc
    beq @L_021246c4
    cmp r7, #0xd
    bne @L_021246e8
@L_021246c4:
    add r1, r8, r6
    ldrb r0, [r1, #0x6c]
    cmp r10, r0
    ldreqsb r1, [r1, #0x58]
    ldreq r0, [sp, #4]
    cmpeq r0, r1
    addne sp, sp, #8
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_021246e8:
    add r5, r5, #1
@L_021246ec:
    cmp r5, #4
    blt @L_02124604
    cmp r7, #0xd
    addls pc, pc, r7, lsl #2
    b @L_02124764
    b @L_02124764
    b @L_0212473c
    b @L_0212473c
    b @L_02124738
    b @L_0212473c
    b @L_0212473c
    b @L_02124738
    b @L_0212473c
    b @L_02124738
    b @L_02124738
    b @L_02124738
    b @L_02124738
    b @L_02124738
    b @L_02124738
@L_02124738:
    b @L_0212474c
@L_0212473c:
    add r0, r9, r6, lsl #2
    ldr r0, [r0, #0x28]
    cmp r10, r0
    bne @L_02124764
@L_0212474c:
    ldr r1, [sp]
    mov r0, r7
    bl func_ov001_021239c8
    mov r1, r0
    mov r0, r9
    bl func_ov001_021236f4
@L_02124764:
    mov r0, #0
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov001_02124774(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    mov r9, r1
    mov r1, #0
    str r1, [sp, #8]
    mov r5, r0
    mov r0, r9
    mov r1, r1
    bl func_ov015_02131754
    add r6, r0, #4
    ldr r0, [pc, #0xb80]
    bl func_0209bf8c
    ldr r7, [pc, #0xb78]
    cmp r9, r0
    mov r8, r9
    mov r0, r7
    subge r8, r9, #1
    bl func_0209bf8c
    add r2, r6, r9
    add r1, r5, r9, lsl #2
    ldrb r4, [r2, #0x54]
    ldr r1, [r1, #4]
    mov r11, r0
    cmp r4, r1
    ldrb r10, [r7, #0x64]
    beq @L_021247ec
    mov r0, r5
    mov r1, r4
    mov r2, r9
    bl func_ov001_02123628
@L_021247ec:
    add r0, r6, r11, lsl #2
    ldr r0, [r0, #0x5c]
    cmp r4, #0xe
    str r0, [r5, #0x48]
    bhi @L_02125318
    mov r7, #0x3f000000
    add pc, pc, r4, lsl #2
    mov r0, r0
    b @L_02125318
    dcd 0xea000090
    dcd 0xea000179
    dcd 0xea0001e8
    dcd 0xea000009
    dcd 0xea00006c
    dcd 0xea00025a
    dcd 0xea000030
    dcd 0xea000276
    dcd 0xea0001f8
    dcd 0xea0001f7
    dcd 0xea000291
    dcd 0xea000224
    dcd 0xea000223
    dcd 0xea0002a5
    dcd 0xe0860009
    dcd 0xe0852109
    dcd 0xe5d0106c
    dcd 0xe5920028
    dcd 0xe59f4ac8
    dcd 0xe1500001
    dcd 0x0a0002ac
    dcd 0xe3a00054
    dcd 0xe00a0091
    dcd 0xe5821028
    dcd 0xe28500ac
    dcd 0xe080100a
    dcd 0xe5d62070
    dcd 0xe1a00006
    dcd 0xe0811308
    dcd 0xebfb92f6
    dcd 0xe5d60070
    dcd 0xe08a0000
    dcd 0xe3500040
    dcd 0x3a00029f
    dcd 0xe28500ac
    dcd 0xe3a06040
    dcd 0xe1a01006
    dcd 0xe0800308
    dcd 0xebfb892c
    dcd 0xe7941109
    dcd 0xe59f0a74
    dcd 0xe7d00001
    dcd 0xe1590000
    dcd 0x1a000295
    dcd 0xe59f0a68
    dcd 0xebfd1826
    dcd 0xe1a04000
    dcd 0xe28500ac
    dcd 0xe1a01004
    dcd 0xe1a02006
    dcd 0xe0800308
    dcd 0xebfb92e0
    dcd 0xe1a00004
    dcd 0xe1a01006
    dcd 0xebfb891c
    dcd 0xea000289
    dcd 0xe0860009
    dcd 0xe0852109
    dcd 0xe5d0006c
    dcd 0xe5921028
    dcd 0xe59f5a2c
    dcd 0xe1510000
    dcd 0x0a000282
    dcd 0xe5820028
    dcd 0xe28d400c
    dcd 0xe5d62070
    dcd 0xe1a00006
    dcd 0xe1a01004
    dcd 0xebfb92cf
    dcd 0xe5d61070
    dcd 0xe1a00004
    dcd 0xebfb890b
    dcd 0xe1a00009
    dcd 0xeb003430
    dcd 0xe1a04000
    dcd 0xe5950048
    dcd 0xe3500000
    dcd 0xba000006
    dcd 0xeb003066
    dcd 0xe3500000
    dcd 0x0a00000c
    dcd 0xebfd70a2
    dcd 0xe1590000
    dcd 0x1a00026d
    dcd 0xea000008
    dcd 0xe595004c
    dcd 0xe3500000
    dcd 0xba000005
    dcd 0xeb00305c
    dcd 0xe3500000
    dcd 0x0a000002
    dcd 0xebfd7098
    dcd 0xe1590000
    dcd 0x1a000263
    dcd 0xe59d100c
    dcd 0xe59d0010
    dcd 0xe58d1018
    dcd 0xe58d0014
    dcd 0xeb003407
    dcd 0xe1540000
    dcd 0x159d0018
    dcd 0x13500102
    dcd 0xc59d0014
    dcd 0xc3500102
    dcd 0xda000002
    dcd 0xe28d0018
    dcd 0xe28d1014
    dcd 0xeb003275
    dcd 0xe59f0970
    dcd 0xe59d1018
    dcd 0xe59d2014
    dcd 0xe0800184
    dcd 0xe8800006
    dcd 0xea00024f
    dcd 0xe0860009
    dcd 0xe0852109
    dcd 0xe5d0006c
    dcd 0xe5921028
    dcd 0xe3a05001
    dcd 0xe1510000
    dcd 0x15820028
    dcd 0x13590000
    dcd 0x0a000246
    dcd 0xe59f0938
    dcd 0xe5d01030
    dcd 0xe1510009
    dcd 0x0a000002
    dcd 0xe5d00031
    dcd 0xe1500009
    dcd 0x1a00023f
    dcd 0xe1a00009
    dcd 0xeb0033f6
    dcd 0xe1a07000
    dcd 0xe59f4904
    dcd 0xe58d5000
    dcd 0xe3a03000
    dcd 0xe58d3004
    dcd 0xe5962000
    dcd 0xe1a00004
    dcd 0xe1a01007
    dcd 0xeb01750c
    dcd 0xe5962004
    dcd 0xe1a00004
    dcd 0xe1a01007
    dcd 0xebfd25df
    dcd 0xea00022f
    dcd 0xe0860009
    dcd 0xe0852109
    dcd 0xe5d0006c
    dcd 0xe5921028
    dcd 0xe59f58b8
    dcd 0xe1510000
    dcd 0xe59f78c8
    dcd 0xe59f48b8
    dcd 0x0a000226
    dcd 0xe5820028
    dcd 0xe35a0000
    dcd 0x1a000223
    dcd 0xe5960000
    dcd 0xe0000007
    dcd 0xe2400b01
    dcd 0xe3500000
    dcd 0xe1a00600
    dcd 0xda000004
    dcd 0xebfbf677
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfbf956
    dcd 0xea000002
    dcd 0xebfbf672
    dcd 0xe3a0143f
    dcd 0xebfbf9de
    dcd 0xebfbf819
    dcd 0xe5840000
    dcd 0xe5960000
    dcd 0xe00705a0
    dcd 0xe2400b01
    dcd 0xe3500000
    dcd 0xe1a00600
    dcd 0xda000004
    dcd 0xebfbf667
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfbf946
    dcd 0xea000002
    dcd 0xebfbf662
    dcd 0xe3a0143f
    dcd 0xebfbf9ce
    dcd 0xebfbf809
    dcd 0xe5840004
    dcd 0xe5961000
    dcd 0xe59f0830
    dcd 0xe0000b21
    dcd 0xe2400c02
    dcd 0xe3500000
    dcd 0xe1a00600
    dcd 0xda000004
    dcd 0xebfbf656
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfbf935
    dcd 0xea000002
    dcd 0xebfbf651
    dcd 0xe3a0143f
    dcd 0xebfbf9bd
    dcd 0xebfbf7f8
    dcd 0xe5840008
    dcd 0xe5960004
    dcd 0xe0000007
    dcd 0xe2400b01
    dcd 0xe3500000
    dcd 0xe1a00600
    dcd 0xda000004
    dcd 0xebfbf646
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfbf925
    dcd 0xea000002
    dcd 0xebfbf641
    dcd 0xe3a0143f
    dcd 0xebfbf9ad
    dcd 0xebfbf7e8
    dcd 0xe5840020
    dcd 0xe5960004
    dcd 0xe00705a0
    dcd 0xe2400b01
    dcd 0xe3500000
    dcd 0xe1a00600
    dcd 0xda000004
    dcd 0xebfbf636
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfbf915
    dcd 0xea000002
    dcd 0xebfbf631
    dcd 0xe3a0143f
    dcd 0xebfbf99d
    dcd 0xebfbf7d8
    dcd 0xe5840024
    dcd 0xe3a00b01
    dcd 0xe1d620f8
    dcd 0xe2600000
    dcd 0xe1520000
    dcd 0x11d610fa
    dcd 0x11510000
    dcd 0x03a00102
    dcd 0x05840018
    dcd 0x0584001c
    dcd 0x0a00001a
    dcd 0xe3520000
    dcd 0xe1a00602
    dcd 0xda000004
    dcd 0xebfbf61f
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfbf8fe
    dcd 0xea000002
    dcd 0xebfbf61a
    dcd 0xe3a0143f
    dcd 0xebfbf986
    dcd 0xebfbf7c1
    dcd 0xe5840018
    dcd 0xe1d600fa
    dcd 0xe3500000
    dcd 0xe1a00600
    dcd 0xda000004
    dcd 0xebfbf611
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfbf8f0
    dcd 0xea000002
    dcd 0xebfbf60c
    dcd 0xe3a0143f
    dcd 0xebfbf978
    dcd 0xebfbf7b3
    dcd 0xe584001c
    dcd 0xe1d600fc
    dcd 0xe3500000
    dcd 0xe1a00600
    dcd 0xda000004
    dcd 0xebfbf603
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfbf8e2
    dcd 0xea000002
    dcd 0xebfbf5fe
    dcd 0xe3a0143f
    dcd 0xebfbf96a
    dcd 0xebfbf7a5
    dcd 0xe5840028
    dcd 0xe1d600fe
    dcd 0xe3500000
    dcd 0xe1a00600
    dcd 0xda000004
    dcd 0xebfbf5f5
    dcd 0xe1a01000
    dcd 0xe3a0043f
    dcd 0xebfbf8d4
    dcd 0xea000002
@L_02124cbc:
    bl _fflt
    mov r1, #0x3f000000
    bl _fsub
@L_02124cc8:
    bl _ffix
    str r0, [r4, #0x2c]
    ldrh r1, [r6, #0x10]
    ldr r0, [pc, #0x648]
    strh r1, [r4, #0x50]
    ldrb r1, [r6, #0x12]
    mov r1, r1, lsl #8
    strh r1, [r4, #0x52]
    ldrb r1, [r6, #0x13]
    strb r1, [r4, #0x5b]
    ldrh r1, [r6, #0x14]
    strh r1, [r4, #0x54]
    ldr r1, [r6, #4]
    mov r1, r1, lsr #0x16
    and r1, r1, #0x1f
    strb r1, [r4, #0x56]
    ldr r1, [r6, #4]
    mov r1, r1, lsr #0x1b
    and r1, r1, #0x1f
    strb r1, [r4, #0x57]
    ldrh r1, [r6, #0x16]
    mov r1, r1, asr #0xc
    and r1, r1, #3
    strb r1, [r4, #0x58]
    ldrh r1, [r6, #0x16]
    and r1, r1, #0x3f
    sub r1, r1, #0x20
    str r1, [r4, #0x48]
    ldrh r1, [r6, #0x16]
    mov r1, r1, asr #6
    and r1, r1, #0x3f
    sub r1, r1, #0x20
    str r1, [r4, #0x4c]
    ldrh r1, [r6, #0x16]
    mov r1, r1, asr #0xe
    and r1, r1, #3
    strb r1, [r4, #0x5a]
    bl func_0209bf8c
    ldr r1, [pc, #0x5d4]
    ldr r0, [r5, r0, lsl #2]
    ldr r1, [r1, #0x20]
    cmp r1, r0
    beq @L_02124db4
    mov r0, r4
    bl func_ov015_021313d4
    ldr r0, [pc, #0x5c4]
    bl func_ov015_021313d4
    ldr r0, [pc, #0x5c0]
    bl func_ov015_021313d4
    ldr r0, [pc, #0x5bc]
    bl func_ov015_021313d4
    ldr r0, [pc, #0x5b8]
    bl func_ov015_021313d4
    ldrh r0, [r4, #0x52]
    add r0, r0, #0x8000
    strh r0, [r4, #0x52]
    ldrb r0, [r4, #0x5b]
    add r0, r0, #0x80
    strb r0, [r4, #0x5b]
@L_02124db4:
    add r0, r6, #0x18
    bl func_ov015_02130a84
    ldr r0, [r6, #0x30]
    ldr r1, [pc, #0x574]
    ldr r4, [pc, #0x564]
    str r0, [r1]
    ldr r2, [r6, #0x34]
    mov r0, r4
    str r2, [r1, #4]
    ldrb r2, [r6, #0x38]
    strb r2, [r1, #0x86]
    ldrb r2, [r6, #0x39]
    strb r2, [r1, #0x87]
    ldrb r1, [r6, #0x3a]
    bl _ZN11MatchEngine13func_0206bfa0Eh
    ldrb r1, [r6, #0x3b]
    mov r0, r4
    bl _ZN11MatchEngine13func_0206bfb4Ei
    b @L_02125318
    dcd 0xe0860009
    dcd 0xe0852109
    dcd 0xe5d0006c
    dcd 0xe5921028
    dcd 0xe3a0400c
    dcd 0xe1510000
    dcd 0x0a00013e
    dcd 0xe5820028
    dcd 0xe35a0000
    dcd 0x1a00013b
    dcd 0xe5921028
    dcd 0xe3a00054
    dcd 0xe00a0091
    dcd 0xe28510ac
    dcd 0xe5d62070
    dcd 0xe1a00006
    dcd 0xe081100a
    dcd 0xebfb9186
    dcd 0xe5d60070
    dcd 0xe08a0000
    dcd 0xe35000c0
    dcd 0x3a00012f
    dcd 0xe28500ac
    dcd 0xe3a010c0
    dcd 0xe59f64c0
    dcd 0xe59fb4d4
    dcd 0xebfb87bc
    dcd 0xe28590ac
    dcd 0xe3a0a000
    dcd 0xe59f54c0
    dcd 0xea00004d
@L_02124e7c:
    mla r0, r10, r4, r9
    ldrh r0, [r0, #8]
    cmp r0, #0
    beq @L_02124fb0
    mov r1, #0
    bl func_ov015_02130b14
    movs r8, r0
    beq @L_02124fb0
    mul r0, r10, r4
    ldr r0, [r9, r0]
    and r0, r0, r11
    sub r0, r0, #0x400
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02124ecc
    bl _fflt
    mov r1, r0
    mov r0, r7
    bl _fadd
    b @L_02124ed8
@L_02124ecc:
    bl _fflt
    mov r1, r7
    bl _fsub
@L_02124ed8:
    bl _ffix
    mul r1, r10, r4
    ldr r2, [r8, #0xe8]
    str r0, [r2]
    ldr r0, [r9, r1]
    and r0, r11, r0, lsr #11
    sub r0, r0, #0x400
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02124f14
    bl _fflt
    mov r1, r0
    mov r0, r7
    bl _fadd
    b @L_02124f20
@L_02124f14:
    bl _fflt
    mov r1, r7
    bl _fsub
@L_02124f20:
    bl _ffix
    ldr r1, [r8, #0xe8]
    str r0, [r1, #4]
    ldr r0, [pc, #0x3f0]
    bl func_0209bf8c
    ldr r0, [r6, r0, lsl #2]
    ldr r1, [r5, #0x20]
    cmp r1, r0
    beq @L_02124f4c
    ldr r0, [r8, #0xe8]
    bl func_ov015_021313d4
@L_02124f4c:
    mla r0, r10, r4, r9
    ldrh r2, [r0, #4]
    ldr r1, [r8, #0xe8]
    ldr r0, [pc, #0x3c4]
    and r2, r2, #0xf
    strb r2, [r1, #0x1d]
    bl func_0209bf8c
    ldr r0, [r6, r0, lsl #2]
    ldr r1, [r5, #0x20]
    cmp r1, r0
    mla r0, r10, r4, r9
    ldrh r1, [r0, #4]
    ldr r0, [r8, #0xe8]
    movne r1, r1, asr #4
    andne r1, r1, #7
    addne r1, r1, #4
    moveq r1, r1, asr #4
    and r1, r1, #7
    strb r1, [r0, #0x1b]
    mla r1, r10, r4, r9
    ldrh r1, [r1, #4]
    ldr r0, [r8, #0xe8]
    mov r1, r1, asr #7
    and r1, r1, #7
    strh r1, [r0, #0x10]
@L_02124fb0:
    add r10, r10, #1
    cmp r10, #0x10
    blt @L_02124e7c
    b @L_02125318
    dcd 0xe0864009
    dcd 0xe1d405d8
    dcd 0xe0853109
    dcd 0xe0851288
    dcd 0xe5830018
    dcd 0xe5d4206c
    dcd 0xe2400000
    dcd 0xe0810000
    dcd 0xe5832028
    dcd 0xe5d4106c
    dcd 0xe5d0004c
    dcd 0xe3a04001
    dcd 0xe3a02000
    dcd 0xe1100114
    dcd 0x035a0000
    dcd 0x1a0000c5
    dcd 0xe1a00005
    dcd 0xe1a01006
    dcd 0xe1a03009
    dcd 0xe58d4000
    dcd 0xebfffb85
    dcd 0xea0000bf
    dcd 0xe0861009
    dcd 0xe1d175d8
    dcd 0xe0852109
    dcd 0xe20900ff
    dcd 0xe5827018
    dcd 0xe5d1106c
    dcd 0xe3a0b001
    dcd 0xe5821028
    dcd 0xeb00326f
    dcd 0xe3a0a000
    dcd 0xe3500000
    dcd 0x13a0a010
    dcd 0xe0851288
    dcd 0xe047000a
    dcd 0xe0810000
    dcd 0xe0862009
    dcd 0xe5d2106c
    dcd 0xe5d0004c
    dcd 0xe110011b
    dcd 0x1a0000ab
    dcd 0xe3540009
    dcd 0x1a000010
    dcd 0xe3a07000
    dcd 0xeb003250
    dcd 0xe1a04000
    dcd 0xe20900ff
    dcd 0xeb00325d
    dcd 0xe1540000
    dcd 0x1a000003
    dcd 0xe20900ff
    dcd 0xeb0032a4
    dcd 0xe3500000
    dcd 0x11a0700b
    dcd 0xe1a00005
    dcd 0xe1a01006
    dcd 0xe1a0200a
    dcd 0xe1a03009
    dcd 0xe58d7000
    dcd 0xeaffffd6
    dcd 0xe20900ff
    dcd 0xeb00329a
    dcd 0xe58d0000
    dcd 0xe1a00005
    dcd 0xe1a01006
    dcd 0xe1a0200a
    dcd 0xe1a03009
    dcd 0xeaffffce
    dcd 0xe0861009
    dcd 0xe1d175d8
    dcd 0xe0852109
    dcd 0xe20900ff
    dcd 0xe5827018
    dcd 0xe5d1106c
    dcd 0xe3a0b001
    dcd 0xe5821028
    dcd 0xeb003240
    dcd 0xe3a0a000
    dcd 0xe3500000
    dcd 0x13a0a010
    dcd 0xe0851288
    dcd 0xe047000a
    dcd 0xe0810000
    dcd 0xe0862009
    dcd 0xe5d2106c
    dcd 0xe5d0004c
    dcd 0xe110011b
    dcd 0x1a00007c
    dcd 0xe354000c
    dcd 0x1a000011
    dcd 0xe3a07000
    dcd 0xeb003221
    dcd 0xe1a04000
    dcd 0xe20900ff
    dcd 0xeb00322e
    dcd 0xe1540000
    dcd 0x1a000003
    dcd 0xe20900ff
    dcd 0xeb003275
    dcd 0xe3500000
    dcd 0x11a0700b
    dcd 0xe1a00005
    dcd 0xe1a01006
    dcd 0xe1a0200a
    dcd 0xe1a03009
    dcd 0xe58d7000
    dcd 0xebfffc4c
    dcd 0xea000068
    dcd 0xe20900ff
    dcd 0xeb00326a
    dcd 0xe58d0000
    dcd 0xe1a00005
    dcd 0xe1a01006
    dcd 0xe1a0200a
    dcd 0xe1a03009
    dcd 0xeafffff5
    dcd 0xe59f018c
    dcd 0xe086a009
    dcd 0xe7900109
    dcd 0xe0857109
    dcd 0xe3500001
    dcd 0xe1da05d8
    dcd 0xe3a02010
    dcd 0x13a02000
    dcd 0xe5870018
    dcd 0xe5da406c
    dcd 0xe0851288
    dcd 0xe0400002
    dcd 0xe0810000
    dcd 0xe5874028
    dcd 0xe5da106c
    dcd 0xe5d0004c
    dcd 0xe3a03001
    dcd 0xe1100113
    dcd 0x1a00004d
    dcd 0xe1a00005
    dcd 0xe1a01006
    dcd 0xe1a03009
    dcd 0xebfffa3e
    dcd 0xe3500000
    dcd 0x0a000047
    dcd 0xe5950000
    dcd 0xe3500037
    dcd 0x1a000044
    dcd 0xeb000053
    dcd 0xea000042
    dcd 0xe59f0114
    dcd 0xe086a009
    dcd 0xe7900109
    dcd 0xe0857109
    dcd 0xe3500001
    dcd 0xe1da05d8
    dcd 0xe3a02010
    dcd 0x13a02000
    dcd 0xe5870018
    dcd 0xe5da306c
    dcd 0xe0851288
    dcd 0xe0400002
    dcd 0xe0810000
    dcd 0xe5873028
    dcd 0xe5da106c
    dcd 0xe5d0004c
    dcd 0xe3a04001
    dcd 0xe1100114
    dcd 0x1a00002f
    dcd 0xe1a00005
    dcd 0xe1a01006
    dcd 0xe1a03009
    dcd 0xe58d4000
    dcd 0xebfffaef
    dcd 0xe3500000
    dcd 0x0a000028
    dcd 0xe5950000
    dcd 0xe3500037
    dcd 0x1a000025
    dcd 0xeaffffdf
    dcd 0xe1a00009
    dcd 0xeb0031db
    dcd 0xe086a009
    dcd 0xe1da75d8
    dcd 0xe0854109
    dcd 0xe1a00200
    dcd 0xe5847018
    dcd 0xe5da306c
    dcd 0xe2802020
    dcd 0xe0851288
    dcd 0xe0470002
    dcd 0xe5843028
    dcd 0xe0810000
    dcd 0xe5da106c
    dcd 0xe5d0004c
    dcd 0xe3a03001
    dcd 0xe1100113
    dcd 0x1a000012
    dcd 0xe1a00005
    dcd 0xe1a01006
    dcd 0xe1a03009
    dcd 0xebfffa03
    dcd 0xea00000d
    dcd 0xe5d503ac
    dcd 0xe3500000
    dcd 0x1a000002
    dcd 0xe35a0000
    dcd 0x0a000008
    dcd 0xea000002
    dcd 0xeb0031f9
    dcd 0xe3500000
    dcd 0x0a000004
    dcd 0xe085010b
    dcd 0xe5900004
    dcd 0xe350000e
    dcd 0x03a00001
    dcd 0x058d0008
@L_02125318:
    ldr r0, [sp, #8]
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    dcd gWirelessUtil
    dcd data_020ca700
    dcd data_020ca710
    dcd data_020e88a0
    dcd data_020c4920
    dcd data_ov001_02130678
    dcd gGameState
    dcd 0x000007ff
    dcd 0x000003ff
    dcd data_020c492c
    dcd data_020c4938
    dcd data_020c4940
    dcd data_020c4948
}
