#include "ov060/Unk_ov060_02165d60.hpp"
#include "game/vcall.hpp"

extern "C" void func_ov060_02165d60(u8 *arg0, s32 arg1);
extern "C" void func_ov060_02165d7c(u8 *arg0);
extern "C" void func_ov060_02165e68(s32 arg0);
extern "C" void func_ov060_02165e98(s32 arg0);
extern "C" void func_ov060_02165ec4(void);
extern "C" void func_ov060_021663f8(void);
extern "C" s32 func_ov060_02166578(u8 *arg0);
extern "C" s32 func_ov060_0216658c(u8 *arg0);
extern "C" s32 func_ov060_021665a0(...);
extern "C" s32 func_ov060_02166938(...);
extern "C" void func_ov060_02166984(void);
extern "C" char *func_ov060_02166a44(u8 *arg0);
extern "C" s32 func_ov060_02166b0c(...);
extern "C" s32 func_ov060_02166b5c(...);
extern "C" void func_ov060_02166b9c(s32 arg0, s32 arg1);
extern "C" s32 func_ov060_02166bcc(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void func_ov060_02166c10(void);
extern "C" s32 func_ov060_02166d3c(...);
extern "C" s32 func_ov060_02166f48(u8 *arg0, s32 arg1, s32 arg2);
extern "C" s32 func_ov060_02166fd0(...);
extern "C" s32 func_ov060_02167138(u8 *arg0, s32 arg1, s32 arg2);
extern "C" s32 func_ov060_021671e4(u8 *arg0, u8 *arg1);
extern "C" s32 func_ov060_02167314(...);
extern "C" void func_ov060_02167600(void);
extern "C" void func_ov060_021677c8(void);
extern "C" s32 func_ov060_021678a8(...);
extern "C" void func_ov060_02167944(void);
extern "C" void func_ov060_02167b4c(u8 *arg0);
extern "C" void func_ov060_02167bd8(void);
extern "C" void func_ov060_02167d68(s32 arg0);
extern "C" void func_ov060_02167da0(u8 *arg0);
extern "C" void func_ov060_02167dc0(s32 arg0);
extern "C" void func_ov060_02167de8(void);
extern "C" void func_ov060_02167f84(void);
extern "C" s32 func_ov060_021680c8(u8 *arg0);
extern "C" void func_ov060_02168108(s32 arg0, s32 arg1);
extern "C" void func_ov060_021681dc(void *arg0);
extern "C" void func_ov060_02168260(void);
extern "C" void func_ov060_021683fc(void);
extern "C" s32 func_ov060_02168474(u8 *arg0);
extern "C" void func_ov060_02168568(u8 *arg0);
extern "C" s32 func_ov060_021685dc(s32 arg0);
extern "C" s32 func_ov060_021685f0(u8 *arg0);
extern "C" void func_ov060_021685f8(void);

extern "C" char g3DFieldSprite[];
extern "C" char g3DGameMapObject[];
extern "C" char gCameraCtrl[];
extern "C" char data_020c4824[];
extern "C" char data_020c482c[];
extern "C" char data_020c4838[];
extern "C" char data_020c483c[];
extern "C" char gDeltaTime[];
extern "C" char data_020c4920[];
extern "C" char data_020c4a40[];
extern "C" char data_020c4ab4[];
extern "C" char data_020c4b80[];
extern "C" char data_020c4ba8[];
extern "C" char gWirelessUtil[];
extern "C" char gAudioPlayer[];
extern "C" char gBgMenuManager[];
extern "C" char gMainScreen0[];
extern "C" char data_020e88a0[];
extern "C" char data_020f98a0[];
extern "C" char data_ov001_0212a9e0[];
extern "C" char data_ov001_02130678[];
extern "C" char data_ov060_021685fc[];
extern "C" char data_ov060_0216860c[];
extern "C" char data_ov060_02168620[];
extern "C" char data_ov060_02168770[];
extern "C" char data_ov060_02168800[];
extern "C" void DC_FlushRange(void);
extern "C" void G2_GetBG1CharPtr(void);
extern "C" void G2_GetBG2CharPtr(void);
extern "C" s32 MI_CpuFill8(...);
extern "C" void MIi_CpuClearFast(void);
extern "C" s32 _ZN12SoundManager13func_0203a7b4Ei(...);
extern "C" s32 _ZN12SoundManager9PlaySoundEi(...);
extern "C" s32 _ZN13ScreenManager12SetNextSceneEii(...);
extern "C" void _ZN13ScreenManager13func_0203e090Eii(void);
extern "C" s32 _ZN13ScreenManager18GetLoadedSceneMainEv(...);
extern "C" s32 _ZN13ScreenManager13func_0203e2b0Ei(...);
extern "C" void _ZN11MatchEngine13func_0206ad94Ev(void);
extern "C" s32 _ZN11MatchEngine13func_0206b4b8Ei(...);
extern "C" void _ZN11MatchEngine13func_0206c8c8Ev(void);
extern "C" s32 _ZN11MatchEngine13func_0206d9d0Ei(...);
extern "C" s32 _ZN11MatchEngine13func_0206da44Ev(...);
extern "C" void _ZN11MatchEngine13func_0206dedcEv(void);
extern "C" void _ZN11MatchEngine13func_0206f08cEv(void);
extern "C" s32 _ZN11MatchEngine13func_02079d1cEv(...);
extern "C" s32 _ZdlPv(...);
extern "C" void func_01ffa3a4(void);
extern "C" void GX_LoadBG1Scr(void);
extern "C" void GX_LoadBG2Scr(void);
extern "C" void _fflt(void);
extern "C" void _ffix(void);
extern "C" void _fadd(void);
extern "C" void _fsub(void);
extern "C" void func_02080b90(void);
extern "C" void func_02080be4(void);
extern "C" void func_0208dc5c(void);
extern "C" s32 func_0208e908(...);
extern "C" void func_0208e910(void);
extern "C" void func_0208f300(void);
extern "C" void func_0209bf8c(void);
extern "C" void func_0209bf9c(void);
extern "C" void func_0209c4d8(void);
extern "C" s32 func_ov001_020fe9c4(...);
extern "C" void func_ov001_02122dd4(void);
extern "C" void func_ov001_021232c8(void);
extern "C" void func_ov001_02123680(void);
extern "C" void func_ov001_021239c8(void);
extern "C" s32 func_ov001_02124540(...);
extern "C" void func_ov001_02125440(void);
extern "C" void func_ov001_02125cd0(void);
extern "C" void func_ov001_02125e98(void);
extern "C" s32 func_ov001_0212602c(...);
extern "C" s32 func_ov001_02126240(...);
extern "C" void func_ov001_02126284(void);
extern "C" void func_ov001_021262ec(void);
extern "C" s32 func_ov001_021264cc(...);
extern "C" s32 func_ov001_02126554(...);
extern "C" void func_ov001_02126588(void);
extern "C" s32 func_ov001_0212662c(...);
extern "C" s32 func_ov001_02126634(...);
extern "C" void func_ov001_02126690(void);
extern "C" void func_ov001_0212694c(void);
extern "C" void func_ov001_02126990(void);
extern "C" void func_ov015_02130ae8(void);
extern "C" void func_ov015_02130e80(void);
extern "C" void func_ov015_02131398(void);
extern "C" void func_ov015_021313d4(void);
extern "C" void func_ov015_0213140c(void);
extern "C" void func_ov015_02131754(void);
extern "C" void func_ov015_021317c8(void);
extern "C" s32 func_ov015_02131910(...);
extern "C" void func_ov015_02131994(void);
extern "C" s32 func_ov015_021319bc(...);
extern "C" void func_ov015_021319fc(void);
extern "C" void func_ov015_02131a44(void);
extern "C" void func_ov015_02131ae4(void);
extern "C" s32 func_ov015_02131bb4(...);
extern "C" void func_ov015_02131bec(void);
extern "C" void Graphics_SetBGPalettePulse(void);
extern "C" void Graphics_LoadBGPaletteMain(void);
extern "C" s32 Graphics_FadeScreensBlack(...);
extern "C" void Archive_TryFinalize(void);
extern "C" s32 Archive_Close(...);
extern "C" s32 Archive_Deallocate(...);
extern "C" s32 func_ov015_02136680(...);
extern "C" s32 func_ov015_02136734(...);
extern "C" void func_ov015_0213782c(void);
extern "C" void func_ov015_0213a56c(void);
extern "C" void func_ov015_0213a65c(void);
extern "C" s32 func_ov015_0213a688(...);
extern "C" s32 func_ov015_0213a690(...);
extern "C" void func_ov015_0213a8b8(void);
extern "C" s32 func_ov015_0213a928(...);
extern "C" void func_ov015_0213a930(void);
extern "C" void func_ov015_0213a938(void);
extern "C" void func_ov015_0213a9d0(void);
extern "C" void func_ov015_0213a9d8(void);
extern "C" void func_ov015_0213a9e0(void);
extern "C" void func_ov015_0213ad04(void);
extern "C" void func_ov015_0213ae3c(void);
extern "C" s32 CBgMenuManager_Init(...);
extern "C" s32 CBgMenuManager_Finalize(...);
extern "C" void CBgMenuManager_AddDynamic(void);
extern "C" void CBgMenuManager_DeleteID(void);
extern "C" void CBgMenuManager_HideTemp(void);
extern "C" void CBgMenuManager_SetBlinking(void);
extern "C" void CBgMenuManager_UpdateGraphics(void);
extern "C" void CBgMenuManager_Draw(void);
extern "C" s32 CBgMenuManager_GetHit(...);
extern "C" void func_ov015_0213d1ac(void);
extern "C" void func_ov015_0213d1d0(void);
extern "C" void func_ov015_0213ed24(void);
extern "C" void func_ov015_0214079c(void);
extern "C" void func_ov015_021491a0(void);
extern "C" void func_ov087_02181c08(void);
extern "C" char gGameState[];

extern "C" void func_ov060_02165d60(u8 *arg0, s32 arg1)
{
    *(s32 *)(arg0) = (s32)data_ov060_02168770;
    *(s32 *)(arg0 + 0x4) = arg1;
    *(u8 *)(arg0 + 0x2F) = 0;
}

#pragma push
#pragma optimization_level 2
extern "C" void func_ov060_02165d7c(u8 *arg0)
{
    s32 i;
    s32 j;
    s32 k;
    *(s32 *)(arg0 + 0x34) = 0x3e;
    *(s32 *)(arg0 + 0x38) = 0;
    *(s32 *)(arg0 + 0x3c) = 0;
    *(s32 *)(arg0 + 0x40) = 0;
    *(s32 *)(arg0 + 0x44) = 0;
    *(s32 *)(arg0 + 0x48) = 0xE;
    for (i = 0; i < 4; i++) {
        if (i == ((s32 (*)(void *))func_0209bf8c)(gWirelessUtil))
            ((s32 *)(arg0 + 0x4c))[i] = 0;
        else
            ((s32 *)(arg0 + 0x4c))[i] = -1;
    }
    for (j = 0; j < 4; j++) {
        if (j == ((s32 (*)(void *))func_0209bf8c)(gWirelessUtil))
            ((s32 *)(arg0 + 0x5c))[j] = 0;
        else
            ((s32 *)(arg0 + 0x5c))[j] = -1;
    }
    for (k = 0; k < 4; k++)
        ((s32 *)(arg0 + 0x6c))[k] = 0;
    ((void (*)(void *, s32, s32))MI_CpuFill8)(arg0 + 0x80, 0, 0x60);
    arg0[0x3e0] = 0;
    ((u8 *)data_020c4b80)[2] = 0x3e;
    ((u8 *)data_020c4b80)[3] = 0;
    ((void (*)(void *, s32))func_0209c4d8)(gWirelessUtil, 6);
}
#pragma pop

extern "C" void func_ov060_02165e68(s32 arg0)
{
    s32 v0 = func_ov001_02124540((arg0 + 0x34), (s32)data_ov060_021685fc);
    if (v0 == 0)
        return;
    func_ov060_021665a0(arg0, 6);
}

extern "C" void func_ov060_02165e98(s32 arg0)
{
    s32 v0 = func_ov001_02124540((arg0 + 0x34), (s32)data_ov060_0216860c);
    if (v0 == 0)
        return;
    func_ov060_02166938(arg0);
}

extern "C" asm void func_ov060_02165ec4(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    mov r4, r0
    mov r0, #0
    mov r1, r0
    bl func_ov015_02131754
    ldrb r0, [r0, #3]
    str r0, [sp, #0xc]
    mov r0, #0
    mov r1, r0
    bl func_ov015_02131754
    ldr r5, =gWirelessUtil
    ldrb r0, [r0, #2]
    ldrb r1, [r5, #0x64]
    str r0, [sp, #8]
    mov r0, r5
    str r1, [sp, #0x10]
    bl func_0209bf9c
    str r0, [sp, #4]
    mov r0, r5
    bl func_0209bf8c
    ldr r1, [r4, #8]
    str r0, [sp]
    cmp r1, #7
    beq @L_02165f30
    cmp r1, #9
    bne @L_021661fc
@L_02165f30:
    mov r6, #0
    b @L_021661f4
@L_02165f38:
    ldr r1, [sp, #4]
    mov r0, #1
    tst r1, r0, lsl r6
    ldrne r0, [sp]
    cmpne r0, r6
    beq @L_021661f0
    mov r0, r6
    mov r1, #0
    bl func_ov015_02131754
    ldrb r0, [r0, #2]
    ldr r1, [r4, #0x34]
    cmp r1, r0
    bne @L_021661f0
    mov r0, r6
    mov r1, #0
    bl func_ov015_02131754
    ldrb r0, [r0, #3]
    cmp r0, #7
    beq @L_02165f9c
    mov r0, r6
    mov r1, #0
    bl func_ov015_02131754
    ldrb r0, [r0, #3]
    cmp r0, #9
    bne @L_021661f0
@L_02165f9c:
    mov r8, #0
    mov r0, r6
    mov r1, r8
    bl func_ov015_02131754
    ldrsb r9, [r0, #0x28]
    add r7, r0, #0x28
    mov r0, r9
    bl func_ov015_02130ae8
    mov r5, r0
    mov r0, r6
    bl func_ov015_021319fc
    cmp r9, #0
    mov r10, r0
    blt @L_021660d4
    cmp r5, #0
    beq @L_021660d4
    ldr r0, [r5, #0xec]
    mov r11, #0x3f000000
    strb r8, [r0, #0x85]
    b @L_0216608c
@L_02165fec:
    add r0, r7, r8, lsl #2
    ldrsh r0, [r0, #4]
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02166014
    bl _fflt
    mov r1, r0
    mov r0, r11
    bl _fadd
    b @L_02166020
@L_02166014:
    bl _fflt
    mov r1, #0x3f000000
    bl _fsub
@L_02166020:
    bl _ffix
    mov r9, r0
    add r0, r7, r8, lsl #2
    ldrsh r0, [r0, #2]
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02166050
    bl _fflt
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_0216605c
@L_02166050:
    bl _fflt
    mov r1, #0x3f000000
    bl _fsub
@L_0216605c:
    bl _ffix
    ldr r1, [r5, #0xec]
    add r8, r8, #1
    ldrb r2, [r1, #0x85]
    add r2, r1, r2, lsl #3
    str r0, [r2, #0x34]
    ldrb r0, [r1, #0x85]
    add r0, r1, r0, lsl #3
    str r9, [r0, #0x38]
    ldrb r0, [r1, #0x85]
    add r0, r0, #1
    strb r0, [r1, #0x85]
@L_0216608c:
    ldrb r0, [r7, #1]
    cmp r8, r0
    blt @L_02165fec
    bl func_ov015_021319bc
    cmp r10, r0
    beq @L_021660d4
    ldr r0, [r5, #0xec]
    mov r8, #0
    ldrb r9, [r0, #0x85]
    add r5, r0, #0x34
    cmp r9, #0xa
    movhi r9, #0xa
    b @L_021660cc
@L_021660c0:
    add r0, r5, r8, lsl #3
    bl func_ov015_021313d4
    add r8, r8, #1
@L_021660cc:
    cmp r8, r9
    blt @L_021660c0
@L_021660d4:
    ldr r1, =data_020c4920
    mov r5, #0
    ldr r0, [r1, #0x48]
    cmp r0, #0
    blt @L_021660f8
    bl func_ov015_02130ae8
    cmp r0, #0
    beq @L_0216611c
    b @L_02166110
@L_021660f8:
    ldr r0, [r1, #0x4c]
    cmp r0, #0
    blt @L_0216611c
    bl func_ov015_02130ae8
    cmp r0, #0
    beq @L_0216611c
@L_02166110:
    bl func_02080be4
    cmp r6, r0
    moveq r5, #1
@L_0216611c:
    cmp r5, #0
    beq @L_021661f0
    ldrsh r1, [r7, #0x2a]
    mov r0, #0x400
    rsb r0, r0, #0
    cmp r1, r0
    beq @L_021661d4
    cmp r1, #0
    mov r0, r1, lsl #0xc
    ble @L_02166158
    bl _fflt
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_02166164
@L_02166158:
    bl _fflt
    mov r1, #0x3f000000
    bl _fsub
@L_02166164:
    bl _ffix
    str r0, [sp, #0x18]
    ldrsh r0, [r7, #0x2c]
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02166190
    bl _fflt
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_0216619c
@L_02166190:
    bl _fflt
    mov r1, #0x3f000000
    bl _fsub
@L_0216619c:
    bl _ffix
    str r0, [sp, #0x14]
    bl func_ov015_021319bc
    cmp r10, r0
    beq @L_021661bc
    add r0, sp, #0x18
    add r1, sp, #0x14
    bl func_ov015_02131398
@L_021661bc:
    ldr r0, =data_ov001_02130678
    ldr r2, [sp, #0x18]
    ldr r1, [sp, #0x14]
    str r2, [r0, r10, lsl #3]!
    str r1, [r0, #4]
    b @L_021661f0
@L_021661d4:
    ldr r0, =data_ov001_02130678
    ldr r0, [r0, r10, lsl #3]
    cmp r0, #0x80000000
    ble @L_021661f0
    mov r0, r4
    mov r1, r10
    bl func_ov060_02166b9c
@L_021661f0:
    add r6, r6, #1
@L_021661f4:
    cmp r6, #4
    blt @L_02165f38
@L_021661fc:
    ldr r0, [r4, #8]
    mov r6, #1
    cmp r0, #0xa
    mov r5, #0
    addls pc, pc, r0, lsl #2
    b @L_021663e0
    b @L_021663e0
    b @L_021663e0
    b @L_021663e0
    b @L_021663e0
    b @L_02166240
    b @L_02166270
    b @L_021663e0
    b @L_021663e0
    b @L_021663e0
    b @L_021662b8
    b @L_02166388
@L_02166240:
    mov r5, #5
    mov r1, r5
    sub r2, r5, #6
    mov r0, #4
    mov r3, #0
    bl func_ov001_02125cd0
    cmp r0, #0
    beq @L_021663e0
@L_02166260:
    mov r0, r4
    mov r1, r5
@L_02166268:
    bl func_ov060_021665a0
    b @L_021663e0
@L_02166270:
    ldr r0, [sp, #0xc]
    cmp r0, #6
    cmpne r0, #7
    cmpne r0, #9
    bne @L_02166290
    mov r0, r4
    mov r1, #6
    b @L_02166268
@L_02166290:
    mov r0, #5
    sub r1, r0, #6
    mov r2, r1
    mov r3, r5
    bl func_ov001_02125cd0
    cmp r0, #0
    beq @L_021663e0
    mov r0, r4
    bl func_ov060_02165e68
    b @L_021663e0
@L_021662b8:
    mov r7, r5
    b @L_02166348
@L_021662c0:
    ldr r0, [sp, #4]
    tst r0, r6, lsl r7
    ldrne r0, [sp]
    cmpne r0, r7
    beq @L_02166344
    add r0, r4, r7
    ldrb r0, [r0, #0x3e4]
    cmp r0, #0
    bne @L_021662fc
    mov r0, r7
    mov r1, r5
    bl func_ov015_02131754
    ldrb r0, [r0, #3]
    cmp r0, #9
    beq @L_02166324
@L_021662fc:
    add r0, r4, r7
    ldrb r0, [r0, #0x3e4]
    cmp r0, #0
    beq @L_02166344
    mov r0, r7
    mov r1, r5
    bl func_ov015_02131754
    ldrb r0, [r0, #3]
    cmp r0, #7
    bne @L_02166344
@L_02166324:
    strb r6, [r4, #0x2c]
    add r0, r4, r7
    ldrb r0, [r0, #0x3e4]
    mov r1, r6
    cmp r0, #0
    movne r1, r5
    add r0, r4, r7
    strb r1, [r0, #0x3e4]
@L_02166344:
    add r7, r7, #1
@L_02166348:
    cmp r7, #4
    blt @L_021662c0
    mov r5, #8
    mov r2, r5
    mov r0, #9
    mov r1, #0xa
    mov r3, #0
    bl func_ov001_02125cd0
    cmp r0, #0
    beq @L_021663e0
    ldr r0, [r4, #0x3ec]
    sub r0, r0, #1
    str r0, [r4, #0x3ec]
    cmp r0, #0
    bgt @L_021663e0
    b @L_02166260
@L_02166388:
    ldr r0, [sp, #0x10]
    cmp r0, #0
    bne @L_021663bc
    ldr r0, [sp, #0xc]
    cmp r0, #0xb
    beq @L_021663b0
    ldr r1, [r4, #0x34]
    ldr r0, [sp, #8]
    cmp r1, r0
    beq @L_021663bc
@L_021663b0:
    mov r0, r4
    bl func_ov060_02166938
    b @L_021663e0
@L_021663bc:
    mov r0, #0xa
    sub r1, r0, #0xb
    mov r2, r1
    mov r3, #0
    bl func_ov001_02125cd0
    cmp r0, #0
    beq @L_021663e0
    mov r0, r4
    bl func_ov060_02165e98
@L_021663e0:
    mov r0, #1
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov060_021663f8(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x10
    mov r4, r0
    ldr r3, [r4, #8]
    cmp r3, #0xa
    addls pc, pc, r3, lsl #2
    b @L_02166550
    b @L_02166550
    b @L_02166550
    b @L_02166550
    b @L_02166550
    b @L_02166550
    b @L_02166440
    b @L_02166550
    b @L_0216646c
    b @L_02166550
    b @L_0216646c
    b @L_02166460
@L_02166440:
    ldr r0, =gWirelessUtil
    ldrb r0, [r0, #0x64]
    cmp r0, #0
    beq @L_02166550
    add r0, r4, #0x34
    mov r1, #1
@L_02166458:
    bl func_ov001_02125440
    b @L_02166550
@L_02166460:
    add r0, r4, #0x34
    mov r1, #8
    b @L_02166458
@L_0216646c:
    ldr r0, [r4, #0x34]
    ldr r2, =data_020c4b80
    ldr r6, =data_020c4ba8
    strb r0, [r2, #2]
    mov r8, #0
    mov r0, r6
    mov r1, r8
    strb r3, [r2, #3]
    mov r2, #4
    bl MI_CpuFill8
    ldr r0, [r4, #0x18]
    strb r0, [r6]
    cmp r0, #0
    blt @L_02166504
    bl func_ov015_02130ae8
    movs r7, r0
    beq @L_02166504
    ldr r0, [r7, #0xec]
    add r5, sp, #0xc
    ldrb r0, [r0, #0x85]
    add r4, sp, #8
    strb r0, [r6, #1]
    b @L_021664f8
@L_021664c8:
    ldr r0, [r7, #0xec]
    mov r1, r5
    add r0, r0, #0x34
    mov r2, r4
    add r0, r0, r8, lsl #3
    bl func_ov015_0213140c
    add r1, r6, r8, lsl #2
    ldr r2, [sp, #0xc]
    ldr r0, [sp, #8]
    strh r2, [r1, #2]
    strh r0, [r1, #4]
    add r8, r8, #1
@L_021664f8:
    ldrb r0, [r6, #1]
    cmp r8, r0
    blt @L_021664c8
@L_02166504:
    bl func_ov015_021319bc
    ldr r3, =data_ov001_02130678
    ldr r1, [r3, r0, lsl #3]
    cmp r1, #0x80000000
    moveq r0, #0x400
    rsbeq r0, r0, #0
    streqh r0, [r6, #0x2a]
    beq @L_02166540
    add r1, sp, #4
    add r2, sp, #0
    add r0, r3, r0, lsl #3
    bl func_ov015_0213140c
    ldr r1, [sp, #4]
    ldr r0, [sp]
    strh r1, [r6, #0x2a]
@L_02166540:
    add sp, sp, #0x10
    strh r0, [r6, #0x2c]
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02166550:
    ldr r1, [r4, #8]
    add r0, r4, #0x34
    bl func_ov001_02123680
    mov r0, #1
    add sp, sp, #0x10
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" s32 func_ov060_02166578(u8 *arg0)
{
    return ((u32)*(s32 *)(arg0 + 0x8) > (u32)2 ? 1 : 0);
}

extern "C" s32 func_ov060_0216658c(u8 *arg0)
{
    return ((u32)*(s32 *)(arg0 + 0x8) > (u32)2 ? 1 : 0);
}

extern "C" asm s32 func_ov060_021665a0(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r4, r0
    ldr r2, [r4, #8]
    ldr r7, =gWirelessUtil
    mov r5, #1
    mov r6, #0
    cmp r2, r1
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    str r1, [r4, #8]
    cmp r1, #0xa
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    b @L_021665fc
    b @L_021668cc
    b @L_021666e4
    b @L_02166794
    b @L_0216679c
    b @L_021667ac
    b @L_02166884
@L_021665fc:
    mov r8, r6
    mov r1, #0x3e
    mov r0, #0xe
    str r1, [r4, #0x34]
    str r8, [r4, #0x38]
    str r8, [r4, #0x3c]
    str r8, [r4, #0x40]
    str r8, [r4, #0x44]
    str r0, [r4, #0x48]
    mvn r9, #0
    b @L_02166644
@L_02166628:
    mov r0, r7
    bl func_0209bf8c
    cmp r8, r0
    add r0, r4, r8, lsl #2
    streq r6, [r0, #0x4c]
    strne r9, [r0, #0x4c]
    add r8, r8, #1
@L_02166644:
    cmp r8, #4
    blt @L_02166628
    mov r8, #0
    mvn r9, #0
    b @L_02166674
@L_02166658:
    mov r0, r7
    bl func_0209bf8c
    cmp r8, r0
    add r0, r4, r8, lsl #2
    streq r6, [r0, #0x5c]
    strne r9, [r0, #0x5c]
    add r8, r8, #1
@L_02166674:
    cmp r8, #4
    blt @L_02166658
    mov r1, #0
    b @L_02166690
@L_02166684:
    add r0, r4, r1, lsl #2
    str r6, [r0, #0x6c]
    add r1, r1, #1
@L_02166690:
    cmp r1, #4
    blt @L_02166684
    mov r1, r6
    add r0, r4, #0x80
    mov r2, #0x60
    bl MI_CpuFill8
    ldr r0, =g3DFieldSprite
    strb r6, [r4, #0x3e0]
    ldr r0, [r0]
    mov r1, r6
    bl func_ov015_0213ad04
    ldr r0, =data_020c482c
    mov r1, r6
    ldr r0, [r0]
    bl func_ov001_02126990
    ldr r0, =data_020c4824
    mov r1, r6
    ldr r0, [r0]
    bl func_0208f300
    strb r5, [r4, #0x2c]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_021666e4:
    mov r2, r6
    ldr r0, =gGameState
    strb r2, [r4, #0x2f]
    ldrb r0, [r0, #0x1a]
    cmp r0, #0
    beq @L_02166714
    ldrb r0, [r7, #0x64]
    cmp r0, #0
    bne @L_02166714
    ldr r0, =data_020e88a0
    mov r1, r5
    bl _ZN11MatchEngine13func_0206ad94Ev
@L_02166714:
    ldr r7, =g3DFieldSprite
    ldr r1, =0x47f
    ldr r0, [r7]
    bl func_ov015_0213ad04
    ldr r0, =data_020c482c
    mov r1, r5
    ldr r0, [r0]
    bl func_ov001_02126990
    ldr r0, =data_020c4824
    mov r1, r5
    ldr r0, [r0]
    bl func_0208f300
    ldr r0, [r7]
    mov r1, r5
    bl func_ov015_0213ae3c
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x44]
    blx r1
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x4c]
    blx r1
    ldr r7, =gBgMenuManager
    mov r1, r6
    mov r0, r7
    bl CBgMenuManager_Finalize
    mov r0, r7
    mov r1, r6
    bl CBgMenuManager_Init
    strb r5, [r4, #0x2c]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_02166794:
    strb r5, [r4, #0x2c]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0216679c:
    ldr r1, [r0]
    ldr r1, [r1, #0x50]
    blx r1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_021667ac:
    mov r8, r6
    mov r1, #0x3e
    mov r0, #0xe
    str r1, [r4, #0x34]
    str r8, [r4, #0x38]
    str r8, [r4, #0x3c]
    str r8, [r4, #0x40]
    str r8, [r4, #0x44]
    str r0, [r4, #0x48]
    mvn r9, #0
    b @L_021667f4
@L_021667d8:
    mov r0, r7
    bl func_0209bf8c
    cmp r8, r0
    add r0, r4, r8, lsl #2
    streq r6, [r0, #0x4c]
    strne r9, [r0, #0x4c]
    add r8, r8, #1
@L_021667f4:
    cmp r8, #4
    blt @L_021667d8
    mov r8, #0
    mvn r9, #0
    b @L_02166824
@L_02166808:
    mov r0, r7
    bl func_0209bf8c
    cmp r8, r0
    add r0, r4, r8, lsl #2
    streq r6, [r0, #0x5c]
    strne r9, [r0, #0x5c]
    add r8, r8, #1
@L_02166824:
    cmp r8, #4
    blt @L_02166808
    mov r1, #0
    b @L_02166840
@L_02166834:
    add r0, r4, r1, lsl #2
    str r6, [r0, #0x6c]
    add r1, r1, #1
@L_02166840:
    cmp r1, #4
    blt @L_02166834
    mov r1, r6
    add r0, r4, #0x80
    mov r2, #0x60
    bl MI_CpuFill8
    mov r1, #8
    str r1, [r4, #0x3ec]
    ldr r0, =data_020c4824
    strb r6, [r4, #0x3e0]
    strb r6, [r4, #0x3e8]
    ldr r0, [r0]
    mov r1, r6
    bl func_0208f300
    strb r5, [r4, #0x2c]
    strb r6, [r4, #0x2e]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_02166884:
    ldr r1, =data_ov060_0216860c
    mov r0, r6
    bl func_ov001_021239c8
    mov r1, r0
    add r0, r4, #0x34
    bl func_ov001_021232c8
    ldr r0, =data_ov001_0212a9e0
    mov r1, r6
    strb r6, [r0]
    ldr r0, =g3DFieldSprite
    strb r5, [r4, #0x2c]
    ldr r0, [r0]
    bl func_ov015_0213ad04
    ldr r0, =data_020c482c
    mov r1, r6
    ldr r0, [r0]
    bl func_ov001_02126990
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_021668cc:
    ldr r1, =data_ov060_021685fc
    mov r0, r6
    bl func_ov001_021239c8
    mov r1, r0
    add r0, r4, #0x34
    bl func_ov001_021232c8
    ldr r0, =g3DFieldSprite
    strb r5, [r4, #0x2c]
    ldr r0, [r0]
    mov r1, r6
    bl func_ov015_0213ad04
    ldr r0, =data_020c482c
    mov r1, r6
    ldr r0, [r0]
    bl func_ov001_02126990
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm s32 func_ov060_02166938(...)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #8]
    cmp r1, #0xb
    ldmeqia sp!, {r4, pc}
    mov r1, #0xb
    bl func_ov060_021665a0
    mov r0, r4
    ldr r1, [r0]
    ldr r1, [r1, #0x50]
    blx r1
    ldr r0, [r4, #4]
    mov r1, #0
    mov r2, #0x38
    bl _ZN13ScreenManager12SetNextSceneEii
    ldr r0, =data_020e88a0
    bl func_01ffa3a4
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov060_02166984(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r4, r0
    ldr r1, [r4, #8]
    cmp r1, #0xb
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    mov r1, #0xb
    bl func_ov060_021665a0
    bl func_ov015_021319bc
    ldr r5, =data_020c4ab4
    mov r7, #1
    strb r7, [r5, #0x6e]
    strb r7, [r5, #0x6f]
    mov r8, #0
    strb r8, [r5, #0x70]
    strb r8, [r5, #0x71]
    strb r8, [r5, #0x72]
    strb r8, [r5, #0x73]
    strb r0, [r5, #0x68]
    strb r8, [r5, #0x69]
    ldr r6, =data_020e88a0
    strb r8, [r5, #0x6a]
    strb r8, [r5, #0x6b]
    mov r0, r6
    strb r7, [r5, #0x74]
    bl _ZN11MatchEngine13func_0206dedcEv
    strb r0, [r5, #0x70]
    mov r0, r6
    ldr r1, =gGameState
    ldrb r1, [r1, #0x1a]
    strb r1, [r5, #0x71]
    strb r8, [r5, #0x6f]
    bl func_ov087_02181c08
    mov r0, #6
    bl Graphics_FadeScreensBlack
    ldr r5, [r4, #4]
    mov r1, r8
    mov r0, r5
    mov r4, #0x5a
    mov r2, r4
    bl _ZN13ScreenManager13func_0203e090Eii
    mov r0, r5
    mov r1, r7
    mov r2, r4
    bl _ZN13ScreenManager13func_0203e090Eii
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" char *func_ov060_02166a44(u8 *arg0)
{
    if (*(s32 *)(arg0 + 0x8) == 0xB)
        return (char *)arg0;
    func_ov060_021665a0((s32)arg0, 0xB);
    _ZN12SoundManager13func_0203a7b4Ei((s32)((u8 *)&gAudioPlayer), 0x5DC);
    *(u8 *)(((u8 *)&gGameState) + 0x89) = 1;
    s32 v2 = func_ov015_021319bc();
    s32 v3 = _ZN11MatchEngine13func_0206b4b8Ei((s32)((u8 *)&data_020e88a0), v2);
    s32 v4 = _ZN11MatchEngine13func_0206da44Ev((s32)((u8 *)&data_020e88a0), v3);
    *(u16 *)(((u8 *)&gGameState) + 0x8A) = v4;
    s32 v5 = func_ov015_021319bc();
    s32 v6 = _ZN11MatchEngine13func_0206b4b8Ei((s32)((u8 *)&data_020e88a0), v5);
    s32 v7 = _ZN11MatchEngine13func_0206d9d0Ei((s32)((u8 *)&data_020e88a0), v6);
    *(u16 *)(((u8 *)&gGameState) + 0x8C) = v7;
    Graphics_FadeScreensBlack(6);
    s32 t0 = *(s32 *)(arg0 + 0x4);
    _ZN13ScreenManager12SetNextSceneEii(t0, 0, 0x3D);
    _ZN13ScreenManager12SetNextSceneEii(t0, 1, 0);
    *(u8 *)(((u8 *)&data_020f98a0) + 0x8DC) = 1;
    return (char *)((u8 *)&data_020f98a0);
}

extern "C" asm s32 func_ov060_02166b0c(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r12, =data_ov001_02130678
    mov r5, r2
    mov r4, r3
    mov r0, r1
    str r5, [r12, r1, lsl #3]
    add r1, r12, r1, lsl #3
    str r4, [r1, #4]
    bl func_ov015_02131bb4
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, =g3DFieldSprite
    ldr r3, [sp, #0x10]
    ldr r0, [r0]
    mov r1, r5
    mov r2, r4
    bl func_ov015_0213a56c
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm s32 func_ov060_02166b5c(...)
{
    stmdb sp!, {r3, lr}
    ldr r2, =data_ov001_02130678
    mov r3, #0x80000000
    mov r0, r1
    str r3, [r2, r1, lsl #3]
    add r1, r2, r1, lsl #3
    str r3, [r1, #4]
    bl func_ov015_02131bb4
    cmp r0, #0
    ldmeqia sp!, {r3, pc}
    ldr r0, =g3DFieldSprite
    ldr r0, [r0]
    bl func_ov015_0213a65c
    ldmia sp!, {r3, pc}
}

extern "C" void func_ov060_02166b9c(s32 arg0, s32 arg1)
{
    func_ov060_02166b5c(arg0, arg1);
    s32 v1 = func_ov015_02131bb4(arg1);
    if (v1 == 0)
        return;
    _ZN12SoundManager9PlaySoundEi((s32)gAudioPlayer, 4);
}

extern "C" s32 func_ov060_02166bcc(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 v1;
    s32 v2;
    func_ov060_02166b0c(arg0, arg1, arg2, arg3, 0);
    v1 = func_ov015_02131bb4(arg1);
    if (v1 == 0)
        return v1;
    v2 = _ZN12SoundManager9PlaySoundEi((s32)((u8 *)&gAudioPlayer), 3);
    return v2;
}

extern "C" asm void func_ov060_02166c10(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r0
    ldrb r0, [r6, #0x2d]
    mov r5, r1
    mov r4, r2
    cmp r0, #0
    beq @L_02166c50
    ldr r0, =data_020c4a40
    ldr r0, [r0, #4]
    cmp r0, #0
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, #0
    strb r0, [r6, #0x2d]
@L_02166c50:
    ldr r0, [r6, #8]
    cmp r0, #7
    beq @L_02166c64
    cmp r0, #9
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
@L_02166c64:
    ldrb r0, [r6, #0xd]
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    tst r5, #8
    beq @L_02166cbc
    ldr r0, =gGameState
    ldrb r0, [r0, #0x1a]
    cmp r0, #0
    bne @L_02166cbc
    mov r7, #0
    ldr r0, =data_020c4a40
    mov r1, r7
    bl func_ov015_021491a0
    cmp r0, #0
    beq @L_02166cbc
    mov r4, #1
    ldr r0, =gAudioPlayer
    mov r1, r4
    bl _ZN12SoundManager9PlaySoundEi
    strb r4, [r6, #0x2d]
    strb r7, [r6, #0xd]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02166cbc:
    tst r5, #4
    beq @L_02166cd4
    mov r0, r6
    ldr r1, [r0]
    ldr r1, [r1, #0x70]
    blx r1
@L_02166cd4:
    ldr r0, =0xcf3
    tst r4, r0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r1, =data_020c483c
    ldr r0, =data_020c4838
    ldr r1, [r1]
    ldr r2, [r0]
    mov r0, r6
    ldr r3, [r0]
    tst r4, #0x11
    addne r1, r1, #8
    tst r4, #0x820
    subne r1, r1, #8
    tst r4, #0x440
    subne r2, r2, #8
    tst r4, #0x82
    ldr r3, [r3, #0x8c]
    addne r2, r2, #8
    blx r3
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm s32 func_ov060_02166d3c(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #8
    mov r6, r0
    mov r5, r1
    mov r4, r2
    ldr r0, =gBgMenuManager
    mov r2, r5
    mov r3, r4
    mov r1, #0
    bl CBgMenuManager_GetHit
    cmp r0, #1
    beq @L_02166d80
    cmp r0, #2
    beq @L_02166dc4
    cmp r0, #3
    beq @L_02166e10
    b @L_02166e34
@L_02166d80:
    ldr r0, =data_020e88a0
    bl _ZN11MatchEngine13func_0206f08cEv
    ldr r0, =gAudioPlayer
    mov r1, #1
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, =gGameState
    ldrb r0, [r0, #0x1a]
    cmp r0, #0
    mov r0, r6
    beq @L_02166db8
    mov r1, #9
    bl func_ov060_021665a0
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, pc}
@L_02166db8:
    bl func_ov060_02166938
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, pc}
@L_02166dc4:
    ldr r0, =gGameState
    ldrb r0, [r0, #0x1a]
    cmp r0, #0
    beq @L_02166df4
    bl func_ov015_02131ae4
    cmp r0, #0
    bne @L_02166df4
    ldr r0, =gAudioPlayer
    mov r1, #9
    bl _ZN12SoundManager9PlaySoundEi
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, pc}
@L_02166df4:
    ldr r0, =gAudioPlayer
    mov r1, #1
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r6
    bl func_ov060_02166984
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, pc}
@L_02166e10:
    ldr r0, =data_020e88a0
    bl _ZN11MatchEngine13func_0206f08cEv
    ldr r0, =gAudioPlayer
    mov r1, #1
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, r6
    bl func_ov060_02166a44
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, pc}
@L_02166e34:
    bl func_ov015_02131bec
    bl func_ov015_02131bb4
    cmp r0, #0
    addeq sp, sp, #8
    ldmeqia sp!, {r4, r5, r6, pc}
    ldr r0, =gGameState
    ldrb r0, [r0, #0x1a]
    cmp r0, #0
    beq @L_02166ea8
    ldr r0, =data_020c4920
    ldr r0, [r0, #0x48]
    cmp r0, #0
    blt @L_02166e74
    bl func_ov015_02131910
    cmp r0, #0
    bne @L_02166ea8
@L_02166e74:
    ldr r0, =data_020c4920
    ldr r1, [r0, #0x48]
    cmp r1, #0
    addge sp, sp, #8
    ldmgeia sp!, {r4, r5, r6, pc}
    ldr r0, [r0, #0x4c]
    cmp r0, #0
    addlt sp, sp, #8
    ldmltia sp!, {r4, r5, r6, pc}
    bl func_ov015_02131910
    cmp r0, #0
    addeq sp, sp, #8
    ldmeqia sp!, {r4, r5, r6, pc}
@L_02166ea8:
    add r2, sp, #4
    add r3, sp, #0
    mov r0, r5
    mov r1, r4
    bl func_ov015_02130e80
    bl func_ov015_021319bc
    ldr r2, =data_ov001_02130678
    mov r1, r0
    ldr r2, [r2, r1, lsl #3]
    cmp r2, #0x80000000
    ble @L_02166f18
    ldr r0, [sp, #4]
    subs r0, r2, r0
    rsbmi r0, r0, #0
    cmp r0, #0x8000
    bgt @L_02166f18
    ldr r2, =data_ov001_02130678
    ldr r0, [sp]
    add r2, r2, r1, lsl #3
    ldr r2, [r2, #4]
    subs r0, r2, r0
    rsbmi r0, r0, #0
    cmp r0, #0x8000
    bgt @L_02166f18
    mov r0, r6
    bl func_ov060_02166b9c
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, pc}
@L_02166f18:
    ldr r2, [sp, #4]
    ldr r3, [sp]
    mov r0, r6
    bl func_ov060_02166bcc
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 func_ov060_02166f48(u8 *arg0, s32 arg1, s32 arg2)
{
    s32 r4;
    u8 *r5;
    s32 v0;
    s32 v1;
    s32 v4;
    s32 v5;
    if (*(s32 *)(arg0 + 0x10) >= 0)
        return *(s32 *)(arg0 + 0x10);
    v0 = CBgMenuManager_GetHit((s32)gBgMenuManager, 0, arg1, arg2);
    if (v0 != 0xD)
        return v0;
    v1 = func_ov060_021678a8((s32)arg0);
    r4 = 0;
    r5 = arg0;
    if (v1 != 0) {
        _ZN12SoundManager9PlaySoundEi((s32)gAudioPlayer, 4);
        func_ov060_021665a0((s32)r5, 7);
        v4 = func_ov060_02167314((s32)r5);
        *(u8 *)(r5 + 0x2C) = r4;
        return v4;
    } else {
        v5 = _ZN12SoundManager9PlaySoundEi((s32)gAudioPlayer, 9);
        return v5;
    }
}

extern "C" asm s32 func_ov060_02166fd0(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x10
    mov r8, r0
    ldr r3, [r8, #0x14]
    mov r7, r1
    cmp r3, #0
    mov r6, r2
    addlt sp, sp, #0x10
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r0, [r8, #0x10]
    mov r4, #0
    cmp r0, #0
    strlt r3, [r8, #0x10]
    ldr r0, [r8, #0x10]
    strlt r3, [r8, #0x18]
    movlt r4, #1
    bl func_ov015_02130ae8
    movs r5, r0
    addeq sp, sp, #0x10
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r0, [r8, #0x28]
    ldr r1, [r8, #0x24]
    sub r2, r0, r6
    mul r0, r2, r2
    sub r1, r1, r7
    mla r0, r1, r1, r0
    cmp r0, #0x40
    addlt sp, sp, #0x10
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    cmp r4, #0
    ldrne r0, [r5, #0xec]
    cmpne r0, #0
    beq @L_02167070
    mov r2, #0
    strb r2, [r0, #0x84]
    ldr r0, [r5, #0xec]
    sub r1, r2, #1
    strb r2, [r0, #0x85]
    ldr r0, [r5, #0xec]
    strh r1, [r0, #0x86]
@L_02167070:
    ldr r0, [r5, #0xec]
    ldrb r0, [r0, #0x85]
    cmp r0, #0xa
    addhs sp, sp, #0x10
    ldmhsia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    add r9, sp, #0xc
    add r4, sp, #8
    mov r0, r7
    mov r1, r6
    mov r2, r9
    mov r3, r4
    str r7, [r8, #0x24]
    str r6, [r8, #0x28]
    bl func_ov015_02130e80
    str r9, [sp]
    str r4, [sp, #4]
    ldr r2, [sp, #0xc]
    ldr r3, [sp, #8]
    ldr r0, =data_020e88a0
    mov r1, r5
    bl _ZN11MatchEngine13func_0206c8c8Ev
    ldr r0, [r5, #0xec]
    ldrb r1, [r0, #0x85]
    cmp r1, #0
    ble @L_02167100
    add r4, r0, #0x34
    sub r3, r1, #1
    ldr r1, [r4, r3, lsl #3]
    ldr r2, [sp, #0xc]
    add r3, r4, r3, lsl #3
    cmp r2, r1
    ldreq r2, [sp, #8]
    ldreq r1, [r3, #4]
    cmpeq r2, r1
    addeq sp, sp, #0x10
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_02167100:
    ldrb r1, [r0, #0x85]
    ldr r3, [sp, #8]
    ldr r2, [sp, #0xc]
    add r1, r0, r1, lsl #3
    str r2, [r1, #0x34]
    ldrb r1, [r0, #0x85]
    add r1, r0, r1, lsl #3
    str r3, [r1, #0x38]
    ldrb r1, [r0, #0x85]
    add r1, r1, #1
    strb r1, [r0, #0x85]
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" s32 func_ov060_02167138(u8 *arg0, s32 arg1, s32 arg2)
{
    s32 r3;
    s32 r7;
    s32 v0;
    s32 v1;
    s32 t0;
    s32 t1;
    if (*(s32 *)(arg0 + 0x8) != 7)
        return *(s32 *)(arg0 + 0x8);
    r3 = *(u8 *)(arg0 + 0xC);
    if (*(s32 *)(arg0 + 0x24) < 0) {
        *(s32 *)(arg0 + 0x24) = arg1;
        *(s32 *)(arg0 + 0x28) = arg2;
    }
    if (r3 == 0) {
        if ((((*(s32 *)(arg0 + 0x24) - arg1) * (*(s32 *)(arg0 + 0x24) - arg1)) + ((*(s32 *)(arg0 + 0x28) - arg2) * (*(s32 *)(arg0 + 0x28) - arg2))) < 0x100)
            return (((*(s32 *)(arg0 + 0x24) - arg1) * (*(s32 *)(arg0 + 0x24) - arg1)) + ((*(s32 *)(arg0 + 0x28) - arg2) * (*(s32 *)(arg0 + 0x28) - arg2)));
    }
    if (r3 == 0) {
        t0 = *(s32 *)(arg0 + 0x24);
        t1 = *(s32 *)(arg0 + 0x28);
        v0 = func_ov001_020fe9c4((s32)arg0, t0, t1, r3);
        r7 = v0;
        if ((r7 >= 0 && (v1 = func_ov015_02131910(), v1 != 0))) {
            *(s32 *)(arg0 + 0x14) = r7;
        } else {
            *(s32 *)(arg0 + 0x14) = -1;
        }
    }
    func_ov060_02166fd0((s32)arg0, arg1, arg2);
    *(u8 *)(arg0 + 0xC) = 1;
    return 1;
}

extern "C" s32 func_ov060_021671e4(u8 *arg0, u8 *arg1)
{
    s32 r0;
    s32 r1;
    u16 t0;
    u16 t1;
    u16 t2;
    u16 t3;
    s32 t4;
    s32 t5;
    s32 t6;
    s32 t7;
    if (*(u8 *)(arg0 + 0x2D) != 0)
        return *(u8 *)(arg0 + 0x2D);
    if (*(s32 *)(((u8 *)&data_020c4a40) + 0x4) != 0) {
        r0 = 1;
    } else {
        r0 = 0;
    }
    if (r0 != 0)
        return r0;
    r1 = *(s32 *)(arg0 + 0x8);
    if (r1 != 7) {
        if (r1 != 9)
            return r0;
    }
    if (*(u16 *)(arg1 + 0x4) == 1) {
        if (*(u16 *)(arg1 + 0x6) != 0)
            return *(u16 *)(arg1 + 0x6);
        if (*(u8 *)(arg0 + 0xD) == 0) {
            *(u8 *)(arg0 + 0xD) = 1;
            *(u8 *)(arg0 + 0xC) = 0;
            *(s32 *)(arg0 + 0x24) = (0 - 1);
            *(s32 *)(arg0 + 0x28) = (0 - 1);
            *(s32 *)(arg0 + 0x14) = (0 - 1);
        } else {
            t0 = *(u16 *)(arg1);
            t1 = *(u16 *)(arg1 + 0x2);
            func_ov060_02167138(arg0, t0, t1);
        }
        t2 = *(u16 *)(arg1);
        *(s32 *)(arg0 + 0x1C) = t2;
        t3 = *(u16 *)(arg1 + 0x2);
        *(s32 *)(arg0 + 0x20) = t3;
        return t3;
    } else {
        if (*(u8 *)(arg0 + 0xC) != 0) {
            *(u8 *)(arg0 + 0xC) = 0;
            *(s32 *)(arg0 + 0x24) = (0 - 1);
            *(s32 *)(arg0 + 0x28) = (0 - 1);
        } else {
            if (*(u8 *)(arg0 + 0xD) != 0) {
                if (r1 == 7) {
                    t4 = *(s32 *)(arg0 + 0x1C);
                    t5 = *(s32 *)(arg0 + 0x20);
                    func_ov060_02166d3c((s32)arg0, t4, t5);
                } else {
                    if (r1 == 9) {
                        t6 = *(s32 *)(arg0 + 0x1C);
                        t7 = *(s32 *)(arg0 + 0x20);
                        func_ov060_02166f48(arg0, t6, t7);
                    }
                }
            }
        }
        *(u8 *)(arg0 + 0xD) = 0;
        *(s32 *)(arg0 + 0x10) = (0 - 1);
        return (0 - 1);
    }
}

extern "C" asm s32 func_ov060_02167314(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x2c
    ldr r11, =gBgMenuManager
    mov r7, #0
    mov r10, r0
    mov r0, r11
    mov r1, r7
    add r4, sp, #0x14
    mov r5, #4
    mov r6, #1
    bl CBgMenuManager_Finalize
    mov r0, r11
    mov r1, r7
    bl CBgMenuManager_Init
    ldr r9, [r10, #0x3fc]
    cmp r9, #0
    beq @L_021674dc
    bl func_ov001_02122dd4
    movs r8, r0
    beq @L_021673cc
    ldr r0, [r9, #0xc]
    mov r1, #0x14
    strh r1, [sp, #0x16]
    mov r1, #8
    add r0, r9, r0
    strh r1, [sp, #0x18]
    mov r1, #0x40
    add r0, r0, #0xc0
    strh r1, [sp, #0x20]
    mov r1, #0x20
    mov r2, #2
    strh r1, [sp, #0x22]
    str r0, [sp, #0x28]
    strh r5, [sp, #0x1a]
    strh r6, [sp, #0x14]
    strh r7, [sp, #0x1c]
    strh r7, [sp, #0x1e]
    strb r2, [sp, #0x24]
    str r6, [sp]
    stmib sp, {r4, r7}
    str r7, [sp, #0xc]
    mov r0, r11
    mov r1, r7
    mov r3, #3
    str r7, [sp, #0x10]
    bl CBgMenuManager_AddDynamic
@L_021673cc:
    ldr r0, [r9, #0xc]
    mov r1, #0
    add r7, r9, r0
    cmp r8, #0
    movne r0, #0xc
    moveq r0, #5
    mov r2, #8
    add r3, r7, #0x40
    mov r11, #0x14
    strh r0, [sp, #0x14]
    mov r9, #0x40
    mov r0, #0x20
    strh r2, [sp, #0x18]
    mov r2, #2
    strh r0, [sp, #0x22]
    str r3, [sp, #0x28]
    strh r11, [sp, #0x16]
    strh r9, [sp, #0x20]
    strh r5, [sp, #0x1a]
    strh r1, [sp, #0x1c]
    strh r1, [sp, #0x1e]
    strb r2, [sp, #0x24]
    mov r3, #1
    stmia sp, {r3, r4}
    str r1, [sp, #8]
    str r1, [sp, #0xc]
    ldr r0, =gBgMenuManager
    str r1, [sp, #0x10]
    bl CBgMenuManager_AddDynamic
    ldr r0, =gGameState
    ldrb r0, [r0, #0x1a]
    cmp r0, #0
    beq @L_0216745c
    bl func_ov015_02131ae4
    cmp r0, #0
    beq @L_021674cc
@L_0216745c:
    mov r0, #0x17
    cmp r8, #0
    mov r1, #0
    add r3, r7, #0x80
    moveq r0, #0x13
    mov r2, #2
    mov r11, #0x14
    mov r9, #8
    strh r0, [sp, #0x14]
    mov r7, #0x40
    mov r0, #0x20
    strh r0, [sp, #0x22]
    str r3, [sp, #0x28]
    strh r11, [sp, #0x16]
    strh r9, [sp, #0x18]
    strh r5, [sp, #0x1a]
    strh r1, [sp, #0x1c]
    strh r1, [sp, #0x1e]
    strh r7, [sp, #0x20]
    strb r2, [sp, #0x24]
    str r6, [sp]
    str r4, [sp, #4]
    str r1, [sp, #8]
    str r1, [sp, #0xc]
    ldr r0, =gBgMenuManager
    mov r3, r2
    str r1, [sp, #0x10]
    bl CBgMenuManager_AddDynamic
@L_021674cc:
    mov r0, #0
    mov r1, #2
    mov r2, #1
    bl Graphics_SetBGPalettePulse
@L_021674dc:
    ldr r0, =gGameState
    ldrb r0, [r0, #0x1a]
    cmp r0, #0
    beq @L_0216757c
    bl func_ov015_02131ae4
    cmp r0, #0
    bne @L_0216757c
    ldr r1, [r10, #0x450]
    cmp r1, #0
    beq @L_0216757c
    ldr r0, [r1, #0xc]
    cmp r8, #0
    add r7, r1, r0
    mov r1, #0
    movne r0, #0x17
    moveq r0, #0x13
    mov r12, #0x14
    mov r11, #8
    mov r9, #0x40
    mov r8, #0x20
    mov r3, #7
    strh r0, [sp, #0x14]
    strh r12, [sp, #0x16]
    strh r11, [sp, #0x18]
    strh r5, [sp, #0x1a]
    strh r1, [sp, #0x1c]
    strh r1, [sp, #0x1e]
    strh r9, [sp, #0x20]
    strh r8, [sp, #0x22]
    strb r3, [sp, #0x24]
    str r7, [sp, #0x28]
    str r6, [sp]
    str r4, [sp, #4]
    mov r2, #2
    str r1, [sp, #8]
    str r1, [sp, #0xc]
    ldr r0, =gBgMenuManager
    mov r3, r2
    str r1, [sp, #0x10]
    bl CBgMenuManager_AddDynamic
@L_0216757c:
    ldr r2, [r10, #0x408]
    cmp r2, #0
    addeq sp, sp, #0x2c
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r2, #0xc]
    mov r1, #0
    add r7, r2, r0
    mov r5, #5
    mov r2, #0x16
    mov r3, #4
    mov r0, #3
    strh r2, [sp, #0x18]
    strb r0, [sp, #0x24]
    strh r5, [sp, #0x14]
    strh r1, [sp, #0x16]
    strh r3, [sp, #0x1a]
    strh r1, [sp, #0x1c]
    strh r1, [sp, #0x1e]
    strh r1, [sp, #0x20]
    strh r1, [sp, #0x22]
    str r7, [sp, #0x28]
    str r6, [sp]
    str r4, [sp, #4]
    str r1, [sp, #8]
    str r1, [sp, #0xc]
    ldr r0, =gBgMenuManager
    mov r2, #2
    str r1, [sp, #0x10]
    bl CBgMenuManager_AddDynamic
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov060_02167600(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x2c
    ldr r5, =gWirelessUtil
    mov r6, r0
    mov r0, r5
    mov r4, #0
    bl func_0209bf9c
    mov r11, r0
    mov r0, r5
    bl func_0209bf8c
    ldr r5, [r6, #0x42c]
    mov r7, r0
    cmp r5, #0
    ldrne r6, [r6, #0x438]
    cmpne r6, #0
    addeq sp, sp, #0x2c
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r9, r4
    ldr r8, =gBgMenuManager
    b @L_0216767c
@L_02167650:
    mov r0, r8
    mov r1, r4
    mov r3, r4
    add r2, r9, #7
    bl CBgMenuManager_DeleteID
    mov r0, r8
    mov r1, r4
    mov r3, r4
    add r2, r9, #0xa
    bl CBgMenuManager_DeleteID
    add r9, r9, #1
@L_0216767c:
    cmp r9, #3
    blt @L_02167650
    mov r8, #0
    mov r9, r8
    b @L_021677b0
@L_02167690:
    mov r0, #1
    tst r11, r0, lsl r9
    cmpne r7, r9
    beq @L_021677ac
    mov r0, r9
    mov r1, r4
    mov r10, r4
    bl func_ov015_02131754
    ldrb r0, [r0, #3]
    ldr r1, [r5, #0xc]
    mov r2, #2
    cmp r0, #9
    cmpne r0, #0xa
    moveq r10, #1
    add r1, r5, r1
    add r1, r1, r10, lsl #2
    str r1, [sp, #0x28]
    mov r1, #0x1c
    strh r1, [sp, #0x14]
    mov r1, #2
    strh r1, [sp, #0x18]
    mov r1, #1
    strh r1, [sp, #0x1a]
    mov r1, #6
    strb r1, [sp, #0x24]
    strh r8, [sp, #0x16]
    strh r4, [sp, #0x1c]
    strh r4, [sp, #0x1e]
    strh r4, [sp, #0x20]
    strh r4, [sp, #0x22]
    mov r1, #3
    str r1, [sp]
    add r1, sp, #0x14
    stmib sp, {r1, r4}
    str r4, [sp, #0xc]
    ldr r0, =gBgMenuManager
    mov r1, r4
    add r3, r8, #7
    str r4, [sp, #0x10]
    bl CBgMenuManager_AddDynamic
    mov r0, r9
    bl func_ov015_02131a44
    ldr r2, [r6, #0xc]
    mov r1, r4
    add r2, r6, r2
    add r0, r2, r0, lsl #2
    str r0, [sp, #0x28]
    mov r0, #0x1e
    strh r0, [sp, #0x14]
    mov r0, #2
    strh r0, [sp, #0x18]
    mov r0, #1
    strh r0, [sp, #0x1a]
    mov r0, #6
    strb r0, [sp, #0x24]
    strh r8, [sp, #0x16]
    strh r4, [sp, #0x1c]
    strh r4, [sp, #0x1e]
    strh r4, [sp, #0x20]
    strh r4, [sp, #0x22]
    mov r0, #3
    str r0, [sp]
    add r0, sp, #0x14
    stmib sp, {r0, r4}
    str r4, [sp, #0xc]
    ldr r0, =gBgMenuManager
    mov r2, #2
    add r3, r8, #0xa
    str r4, [sp, #0x10]
    bl CBgMenuManager_AddDynamic
    add r8, r8, #1
@L_021677ac:
    add r9, r9, #1
@L_021677b0:
    cmp r9, #4
    blt @L_02167690
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov060_021677c8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x2c
    mov r4, r0
    bl func_ov060_021678a8
    cmp r0, #0
    addeq sp, sp, #0x2c
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldrb r8, [r4, #0x2e]
    cmp r8, #0
    addne sp, sp, #0x2c
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldr r1, [r4, #0x444]
    cmp r1, #0
    addeq sp, sp, #0x2c
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldr r0, [r1, #0xc]
    mov r12, #4
    add r7, r1, r0
    mov r6, #0xc
    mov r5, #0x13
    mov lr, #8
    mov r2, #0
    mov r3, #0x40
    mov r1, #0x18
    mov r0, #5
    strh r3, [sp, #0x20]
    strh r1, [sp, #0x22]
    strb r0, [sp, #0x24]
    strh r6, [sp, #0x14]
    strh r5, [sp, #0x16]
    strh lr, [sp, #0x18]
    strh r12, [sp, #0x1a]
    strh r2, [sp, #0x1c]
    cmp r8, #0
    strh r12, [sp, #0x1e]
    moveq r2, #1
    rsb r12, r2, #0
    str r7, [sp, #0x28]
    mov r1, #3
    str r1, [sp]
    add r0, sp, #0x14
    str r0, [sp, #4]
    mov r0, #6
    str r0, [sp, #8]
    mov r1, #0
    str r1, [sp, #0xc]
    ldr r0, =gBgMenuManager
    mov r2, #2
    mov r3, #0xd
    str r12, [sp, #0x10]
    bl CBgMenuManager_AddDynamic
    mov r0, #1
    strb r0, [r4, #0x2e]
    add sp, sp, #0x2c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" asm s32 func_ov060_021678a8(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    ldr r4, =gWirelessUtil
    mov r0, r4
    bl func_0209bf9c
    mov r6, r0
    mov r0, r4
    bl func_0209bf8c
    mov r8, #0
    mov r7, r0
    mov r4, r8
    mov r9, r8
    mov r5, #1
    b @L_02167930
@L_021678dc:
    cmp r8, r7
    beq @L_0216792c
    tst r6, r5, lsl r8
    beq @L_0216792c
    mov r0, r8
    mov r1, r4
    bl func_ov015_02131754
    ldrb r0, [r0, #3]
    cmp r0, #8
    cmpne r0, #9
    cmpne r0, #0xa
    bne @L_02167924
    mov r0, r8
    mov r1, r9
    bl func_ov015_02131754
    ldrb r0, [r0, #2]
    cmp r0, #0x3e
    beq @L_0216792c
@L_02167924:
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0216792c:
    add r8, r8, #1
@L_02167930:
    cmp r8, #4
    blt @L_021678dc
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov060_02167944(void)
{
    stmdb sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x2c
    mov r7, r0
    ldr r0, [r7, #8]
    cmp r0, #0xa
    addls pc, pc, r0, lsl #2
    b @L_02167b40
    b @L_02167b40
    b @L_02167b40
    b @L_02167b40
    b @L_02167b40
    b @L_02167a88
    b @L_02167a88
    b @L_02167b40
    b @L_02167b40
    b @L_02167b40
    b @L_0216798c
    b @L_02167a88
@L_0216798c:
    ldrb r0, [r7, #0x3e8]
    cmp r0, #0
    bne @L_02167a70
    ldr r6, =gBgMenuManager
    mov r5, #0
    mov r0, r6
    mov r1, r5
    bl CBgMenuManager_Finalize
    mov r0, r6
    mov r1, r5
    bl CBgMenuManager_Init
    ldr r1, [r7, #0x414]
    cmp r1, #0
    addeq sp, sp, #0x2c
    ldmeqia sp!, {r4, r5, r6, r7, pc}
    ldr r0, [r1, #0xc]
    mov r4, #5
    add r0, r1, r0
    add r3, r0, #0x108
    mov r2, #0xf
    mov r1, #0x16
    mov r0, #3
    strh r2, [sp, #0x16]
    strh r1, [sp, #0x18]
    strh r0, [sp, #0x1a]
    str r3, [sp, #0x28]
    strh r4, [sp, #0x14]
    strh r5, [sp, #0x1c]
    strh r5, [sp, #0x1e]
    strh r5, [sp, #0x20]
    strh r5, [sp, #0x22]
    strb r4, [sp, #0x24]
    add r0, sp, #0x14
    str r5, [sp]
    stmib sp, {r0, r5}
    str r5, [sp, #0xc]
    mov r0, r6
    mov r1, r5
    mov r3, r4
    mov r2, #2
    str r5, [sp, #0x10]
    bl CBgMenuManager_AddDynamic
    mov r0, r6
    mov r1, r5
    mov r2, r4
    mov r3, #0x1e
    bl CBgMenuManager_HideTemp
    mov r0, r5
    mov r1, r4
    mov r2, r5
    bl Graphics_SetBGPalettePulse
    mov r6, #1
    mov r0, r5
    mov r1, r4
    mov r2, r6
    bl Graphics_SetBGPalettePulse
    strb r6, [r7, #0x3e8]
@L_02167a70:
    mov r0, r7
    bl func_ov060_021677c8
    mov r0, r7
    bl func_ov060_02167600
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, pc}
@L_02167a88:
    ldr r5, =gBgMenuManager
    mov r4, #0
    mov r0, r5
    mov r1, r4
    bl CBgMenuManager_Finalize
    mov r0, r5
    mov r1, r4
    bl CBgMenuManager_Init
    ldr r2, [r7, #0x420]
    cmp r2, #0
    addeq sp, sp, #0x2c
    ldmeqia sp!, {r4, r5, r6, r7, pc}
    ldr r0, [r2, #0xc]
    mov r1, #0x1d
    add r3, r2, r0
    mov r0, #3
    mov r2, #2
    mov r7, #5
    strh r1, [sp, #0x14]
    strh r0, [sp, #0x18]
    strh r4, [sp, #0x16]
    strh r2, [sp, #0x1a]
    strh r4, [sp, #0x1c]
    strh r4, [sp, #0x1e]
    strh r4, [sp, #0x20]
    strh r4, [sp, #0x22]
    strb r7, [sp, #0x24]
    str r3, [sp, #0x28]
    mov r6, #6
    add r0, sp, #0x14
    str r4, [sp]
    stmib sp, {r0, r4}
    str r4, [sp, #0xc]
    mov r0, r5
    mov r1, r4
    mov r3, r6
    str r4, [sp, #0x10]
    bl CBgMenuManager_AddDynamic
    mov r0, r5
    mov r1, r4
    mov r2, r6
    bl CBgMenuManager_SetBlinking
    mov r0, r4
    mov r1, r7
    mov r2, r4
    bl Graphics_SetBGPalettePulse
@L_02167b40:
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, pc}
}

extern "C" void func_ov060_02167b4c(u8 *arg0)
{
    if (arg0[0x2C] == 0)
        return;
    arg0[0x2C] = 0;
    switch (*(s32 *)(arg0 + 8)) {
    case 6:
        ((s32 (*)(...))func_ov060_02167314)(arg0);
        break;
    case 4:
    case 5:
    case 8:
    case 9:
    case 10:
        ((s32 (*)(...))func_ov060_02167944)(arg0);
        break;
    case 7:
        break;
    default: {
        s32 d = (s32)gBgMenuManager;
        s32 z = 0;
        ((s32 (*)(...))CBgMenuManager_Finalize)(d, z);
        ((s32 (*)(...))CBgMenuManager_Init)(d, z);
    }
    }
}

extern "C" asm void func_ov060_02167bd8(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #8
    ldr r6, =gMainScreen0
    mov r5, #0x800
    mov r7, #0x20
    mov r8, #0
    mov r4, r0
    mov r0, r8
    mov r1, r6
    mov r2, r5
    str r7, [sp, #4]
    bl MIi_CpuClearFast
    mov r0, r6
    mov r1, r5
    bl DC_FlushRange
    mov r0, r6
    mov r1, r8
    mov r2, r5
    bl GX_LoadBG1Scr
    mov r0, r6
    mov r2, r5
    mov r1, r8
    bl GX_LoadBG2Scr
    bl G2_GetBG1CharPtr
    mov r1, r0
    mov r0, r8
    mov r2, r7
    bl MIi_CpuClearFast
    bl G2_GetBG2CharPtr
    mov r1, r0
    mov r0, r8
    mov r2, r7
    bl MIi_CpuClearFast
    bl G2_GetBG1CharPtr
    mov r1, r7
    bl DC_FlushRange
    bl G2_GetBG2CharPtr
    mov r1, r7
    bl DC_FlushRange
    mov r7, #2
    mov r1, r8
    add r8, sp, #4
    str r8, [sp]
    ldr r0, [r4, #0x3fc]
    mov r2, r7
    mov r3, r7
    bl func_ov001_02126284
    str r8, [sp]
    mov r1, r0
    ldr r0, [r4, #0x408]
    mov r2, #3
    mov r3, r7
    bl func_ov001_02126284
    mov r1, r0
    ldr r0, =gGameState
    ldrb r0, [r0, #0x1a]
    cmp r0, #0
    beq @L_02167d54
    str r8, [sp]
    mov r6, #5
    ldr r0, [r4, #0x414]
    mov r2, r6
    mov r3, r7
    bl func_ov001_02126284
    str r8, [sp]
    mov r1, r0
    ldr r0, [r4, #0x420]
    mov r2, r6
    mov r3, r7
    bl func_ov001_02126284
    mov r5, #6
    str r8, [sp]
    mov r1, r0
    ldr r0, [r4, #0x42c]
    mov r2, r5
    mov r3, r7
    bl func_ov001_02126284
    mov r2, r5
    str r8, [sp]
    mov r1, r0
    ldr r0, [r4, #0x438]
    mov r3, r7
    bl func_ov001_02126284
    str r8, [sp]
    mov r1, r0
    ldr r0, [r4, #0x450]
    mov r2, #7
    mov r3, r7
    bl func_ov001_02126284
    str r8, [sp]
    mov r2, r6
    mov r3, r7
    mov r1, r0
    ldr r0, [r4, #0x444]
    bl func_ov001_021262ec
@L_02167d54:
    bl Graphics_LoadBGPaletteMain
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" void func_ov060_02167d68(s32 arg0)
{
    MI_CpuFill8((arg0 + 0x3F0), 0, 0x6C);
    func_ov001_0212602c((s32)data_ov060_02168800, (arg0 + 0x3F0));
    func_ov060_021665a0(arg0, 1);
}

extern "C" void func_ov060_02167da0(u8 *arg0)
{
    func_ov001_02126240(*(s32 *)(arg0 + 0x3F0), (arg0 + 0x3F0), (s32)data_ov060_02168620);
}

extern "C" void func_ov060_02167dc0(s32 arg0)
{
    s32 r4;
    s32 r5;
    s32 r6;
    r6 = 0;
    do {
        Archive_Deallocate(((r6 * 0xC) + (arg0 + 0x3F0)));
        r4 = 0xC;
        r5 = (arg0 + 0x3F0);
        r6 = (r6 + 1);
    } while (r6 < 9);
    return;
}

extern "C" asm void func_ov060_02167de8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0xb0
    ldr r7, =data_020c4920
    mov r8, r1
    ldr r0, [r7, #0x48]
    cmp r0, #0
    blt @L_02167e28
    bl func_ov015_02131994
    mov r4, r0
    bl func_ov015_021319bc
    cmp r4, r0
    bne @L_02167e28
    ldr r0, [r7, #0x48]
    bl func_ov015_02130ae8
    mov r4, r0
    b @L_02167e34
@L_02167e28:
    add sp, sp, #0xb0
    mov r0, r8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_02167e34:
    bl func_ov015_021319bc
    ldr r1, =data_ov001_02130678
    mov r12, r0
    ldr r0, [r1, r12, lsl #3]
    cmp r0, #0x80000000
    ble @L_02167f64
    add r6, sp, #0x50
    mov r5, #6
@L_02167e54:
    ldmia r7!, {r0, r1, r2, r3}
    stmia r6!, {r0, r1, r2, r3}
    subs r5, r5, #1
    bne @L_02167e54
    mov r7, #0
    ldr r1, =data_ov001_02130678
    add r6, sp, #0x50
    str r7, [sp]
    str r6, [sp, #4]
    str r4, [sp, #8]
    add r0, r1, r12, lsl #3
    mov r4, #2
    ldr r5, =data_020e88a0
    ldr r2, [r0, #4]
    ldr r1, [r1, r12, lsl #3]
    mov r0, r5
    mov r3, r4
    bl func_ov015_0214079c
    add r9, sp, #0x18
    mov r0, r5
    mov r1, r9
    mov r3, r6
    mov r2, #6
    str r7, [sp]
    bl func_ov015_0213ed24
    cmp r0, #0
    beq @L_02167efc
    stmia sp, {r7, r9}
    add r1, sp, #0x20
    str r1, [sp, #8]
    add r0, sp, #0x50
    str r0, [sp, #0xc]
    mov r0, #0xf
    str r0, [sp, #0x10]
    ldr r0, =data_020c482c
    str r7, [sp, #0x14]
    ldr r0, [r0]
    mov r1, r8
    mov r2, r7
    mov r3, r4
    bl func_ov001_02126690
    add r8, r8, #1
@L_02167efc:
    add r4, sp, #0x18
    mov r5, #1
    ldr r0, =data_020e88a0
    add r3, sp, #0x50
    mov r1, r4
    mov r2, #6
    str r5, [sp]
    bl func_ov015_0213ed24
    cmp r0, #0
    beq @L_02167f64
    mov r2, #0
    stmia sp, {r2, r4}
    add r1, sp, #0x20
    str r1, [sp, #8]
    add r0, sp, #0x50
    str r0, [sp, #0xc]
    mov r0, #0x1f
    str r0, [sp, #0x10]
    str r2, [sp, #0x14]
    ldr r0, =data_020c482c
    ldr r2, =0x7fe0
    ldr r0, [r0]
    mov r1, r8
    mov r3, #3
    bl func_ov001_02126690
    add r8, r8, #1
@L_02167f64:
    mov r0, r8
    add sp, sp, #0xb0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov060_02167f84(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    ldr r4, =data_020c482c
    str r0, [sp, #0x18]
    ldr r0, [r4]
    bl func_ov001_0212694c
    mov r10, #0
    mov r9, r10
    mov r6, #0xc
    mov r5, #0x1f
    mov r11, #0x19
    b @L_021680a0
@L_02167fb4:
    mov r0, r9
    bl func_ov015_02130ae8
    movs r8, r0
    beq @L_0216809c
    ldrh r0, [r8, #0xf0]
    tst r0, #2
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_0216809c
    ldrh r0, [r8, #0xf0]
    tst r0, #8
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    beq @L_0216809c
    ldrh r0, [r8, #0xf0]
    tst r0, #0x20
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    bne @L_02168034
    ldr r0, =gGameState
    ldrb r0, [r0, #0x1b]
    cmp r0, #0
    beq @L_0216809c
    mov r0, r8
    bl func_02080b90
    mov r7, r0
    bl func_ov015_021319bc
    cmp r7, r0
    bne @L_0216809c
@L_02168034:
    ldr r1, [r8, #0xec]
    ldrb r0, [r1, #0x85]
    ldrb r2, [r1, #0x84]
    cmp r2, r0
    bhs @L_0216809c
    add r1, r1, #0x34
    add r7, r1, r2, lsl #3
    add r0, r1, r0, lsl #3
    ldrh r1, [r8, #0xf0]
    mov r2, #0x3e0
    str r6, [sp]
    ldr r3, [r8, #0xe8]
    tst r1, #0x20
    stmib sp, {r3, r7}
    str r0, [sp, #0xc]
    movne r1, #1
    str r5, [sp, #0x10]
    moveq r1, #0
    cmp r1, #0
    str r11, [sp, #0x14]
    ldreq r2, =0x319f
    ldr r0, [r4]
    mov r1, r10
    mov r3, #6
    bl func_ov001_02126690
    add r10, r10, #1
@L_0216809c:
    add r9, r9, #1
@L_021680a0:
    cmp r9, #0x84
    blt @L_02167fb4
    ldr r0, [sp, #0x18]
    mov r1, r10
    bl func_ov060_02167de8
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 func_ov060_021680c8(u8 *arg0)
{
    s32 r1;
    s32 v0;
    s32 v1;
    s32 t0;
    s32 t1;
    r1 = *(u8 *)(arg0 + 0xC);
    if ((r1 != 0 && (r1 = *(s32 *)(arg0 + 0x10), r1 >= 0))) {
        t0 = *(s32 *)(((u8 *)&g3DFieldSprite));
        v0 = func_ov015_0213a688(t0, r1);
        return v0;
    } else {
        t1 = *(s32 *)(((u8 *)&g3DFieldSprite));
        v1 = func_ov015_0213a690(t1, r1);
        return v1;
    }
}

extern "C" void func_ov060_02168108(s32 arg0, s32 arg1)
{
    s32 a;
    s32 b;
    if (((s32 (*)(...))func_ov015_021317c8)(arg0) == 0) {
        a = ((s32 (*)(...))func_ov015_0213a938)(*(s32 *)g3DFieldSprite);
        b = ((s32 (*)(...))func_ov015_0213a9e0)(*(s32 *)g3DFieldSprite);
    } else {
        a = ((s32 (*)(...))func_ov015_0213a930)(*(s32 *)g3DFieldSprite);
        b = ((s32 (*)(...))func_ov015_0213a9d8)(*(s32 *)g3DFieldSprite);
    }
    ((s32 (*)(...))func_ov015_0213a928)(*(s32 *)g3DFieldSprite, a);
    ((s32 (*)(...))func_ov015_0213a9d0)(*(s32 *)g3DFieldSprite, b);
    ((s32 (*)(...))func_ov015_0213782c)(*(s32 *)g3DFieldSprite, arg1, 0);
    ((s32 (*)(...))func_0208dc5c)(*(s32 *)g3DGameMapObject, *(s32 *)gDeltaTime);
    ((s32 (*)(...))func_ov015_0213d1ac)(*(s32 *)gCameraCtrl);
    ((s32 (*)(...))func_ov001_02126588)(*(s32 *)data_020c482c);
    ((s32 (*)(...))func_0208e910)(*(s32 *)data_020c4824);
    ((s32 (*)(...))func_ov015_0213d1d0)(*(s32 *)gCameraCtrl);
}

extern "C" void func_ov060_021681dc(void *arg0)
{
    s32 i = ((s32 (*)(...))func_ov015_02131bec)();
    s32 z;
    if (((s32 (*)(...))func_ov015_02131bb4)() != 0 && ((s32 *)data_ov001_02130678)[i * 2] > (s32)0x80000000)
        ((s32 (*)(...))func_ov015_0213a56c)(*(s32 *)g3DFieldSprite, ((s32 *)data_ov001_02130678)[i * 2], ((s32 *)data_ov001_02130678)[i * 2 + 1], 0);
    ((s32 (*)(...))func_ov060_02167b4c)(arg0);
    z = 0;
    ((s32 (*)(...))CBgMenuManager_UpdateGraphics)(gBgMenuManager, z);
    ((s32 (*)(...))func_ov060_021680c8)(arg0);
    ((s32 (*)(...))func_ov060_02167f84)(arg0);
    ((s32 (*)(...))func_ov060_02168108)(arg0, z);
}

extern "C" asm void func_ov060_02168260(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #8]
    cmp r1, #9
    addls pc, pc, r1, lsl #2
    b @L_021683c0
    b @L_021682a0
    b @L_021682a4
    ldmia sp!, {r4, pc}
    b @L_021682e4
    b @L_021683c0
    b @L_021683c0
    b @L_0216832c
    b @L_021683c0
    b @L_0216835c
    b @L_0216838c
@L_021682a0:
    ldmia sp!, {r4, pc}
@L_021682a4:
    ldr r0, =g3DFieldSprite
    ldr r0, [r0]
    bl func_ov015_0213a8b8
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    add r0, r4, #0x3f0
    mov r1, #9
    bl Archive_TryFinalize
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    mov r0, r4
    bl func_ov060_02167da0
    mov r0, r4
    mov r1, #2
    bl func_ov060_021665a0
    ldmia sp!, {r4, pc}
@L_021682e4:
    ldr r0, =gBgMenuManager
    mov r1, #0
    bl CBgMenuManager_Init
    ldr r0, =gGameState
    ldrb r0, [r0, #0x1a]
    cmp r0, #0
    beq @L_0216831c
    ldrb r0, [r4, #0x2f]
    cmp r0, #0
    bne @L_0216831c
    mov r0, r4
    mov r1, #4
    bl func_ov060_021665a0
    ldmia sp!, {r4, pc}
@L_0216831c:
    mov r0, r4
    mov r1, #6
    bl func_ov060_021665a0
    ldmia sp!, {r4, pc}
@L_0216832c:
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    bne @L_0216834c
    mov r0, r4
    mov r1, #7
    bl func_ov060_021665a0
@L_0216834c:
    mov r0, r4
    mov r1, #0
    bl func_ov060_021681dc
    ldmia sp!, {r4, pc}
@L_0216835c:
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    bne @L_0216837c
    mov r0, r4
    mov r1, #0xa
    bl func_ov060_021665a0
@L_0216837c:
    mov r0, r4
    mov r1, #0
    bl func_ov060_021681dc
    ldmia sp!, {r4, pc}
@L_0216838c:
    bl func_ov001_02125e98
    cmp r0, #0
    movne r0, #1
    strneb r0, [r4, #0x2c]
    bne @L_021683c0
    mov r0, r4
    bl func_ov060_021678a8
    cmp r0, #0
    beq @L_021683c0
    ldrb r0, [r4, #0x2e]
    cmp r0, #0
    moveq r0, #1
    streqb r0, [r4, #0x2c]
@L_021683c0:
    ldr r0, [r4, #8]
    cmp r0, #7
    bne @L_021683e0
    ldr r0, =gGameState
    ldrb r0, [r0, #0x1a]
    cmp r0, #0
    beq @L_021683e0
    bl func_ov001_02125e98
@L_021683e0:
    mov r0, r4
    mov r1, #0
    bl func_ov060_021681dc
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov060_021683fc(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #8]
    cmp r1, #0xa
    addls pc, pc, r1, lsl #2
    b @L_02168460
    ldmia sp!, {r4, pc}
    ldmia sp!, {r4, pc}
    b @L_02168440
    b @L_02168460
    b @L_02168454
    b @L_02168454
    b @L_02168460
    b @L_02168460
    b @L_02168460
    b @L_02168460
    b @L_02168454
@L_02168440:
    bl func_ov060_02167bd8
    mov r0, r4
    mov r1, #3
    bl func_ov060_021665a0
    ldmia sp!, {r4, pc}
@L_02168454:
    ldr r1, [r0]
    ldr r1, [r1, #0x3c]
    blx r1
@L_02168460:
    ldr r0, =gBgMenuManager
    mov r1, #0
    bl CBgMenuManager_Draw
    ldmia sp!, {r4, pc}
}

extern "C" s32 func_ov060_02168474(u8 *arg0)
{
    s32 v1;
    s32 v2;
    s32 v11;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    s32 t5;
    s32 t6;
    s32 t7;
    *(s32 *)(arg0 + 0x8) = 0;
    *(u8 *)(arg0 + 0xC) = 0;
    *(u8 *)(arg0 + 0xD) = 0;
    *(s32 *)(arg0 + 0x1C) = (0 - 1);
    *(s32 *)(arg0 + 0x20) = (0 - 1);
    *(s32 *)(arg0 + 0x24) = (0 - 1);
    *(s32 *)(arg0 + 0x28) = (0 - 1);
    *(s32 *)(arg0 + 0x10) = (0 - 1);
    *(s32 *)(arg0 + 0x18) = (0 - 1);
    *(u8 *)(arg0 + 0x2D) = 0;
    *(u8 *)(arg0 + 0x3E7) = 0;
    *(u8 *)(arg0 + 0x3E6) = 0;
    *(u8 *)(arg0 + 0x3E5) = 0;
    *(u8 *)(arg0 + 0x3E4) = 0;
    *(u8 *)(arg0 + 0x3E8) = 0;
    CBgMenuManager_Init((s32)((u8 *)&gBgMenuManager), 0, (0 - 1));
    t0 = *(s32 *)(arg0 + 0x4);
    v1 = _ZN13ScreenManager18GetLoadedSceneMainEv(t0);
    t1 = *(s32 *)(arg0 + 0x4);
    v2 = _ZN13ScreenManager13func_0203e2b0Ei(t1, v1);
    *(u8 *)(arg0 + 0x2F) = v2;
    _ZN11MatchEngine13func_02079d1cEv((s32)((u8 *)&data_020e88a0));
    func_ov060_02167d68((s32)arg0);
    t2 = *(s32 *)(((u8 *)&data_020c482c));
    func_ov001_021264cc(t2);
    t3 = *(s32 *)(((u8 *)&data_020c482c));
    func_ov001_0212662c(t3);
    t4 = *(s32 *)(((u8 *)&data_020c482c));
    func_ov001_02126634(t4);
    t5 = *(s32 *)(((u8 *)&data_020c4824));
    func_0208e908(t5);
    t6 = *(s32 *)(((u8 *)&g3DFieldSprite));
    func_ov015_02136734(t6, 0x47F);
    t7 = *(s32 *)(((u8 *)&g3DFieldSprite));
    func_ov015_0213a928(t7, 1);
    v11 = ((VCall *)arg0)->f33(1);
    return v11;
}

extern "C" void func_ov060_02168568(u8 *arg0)
{
    s32 t0;
    s32 t1;
    t0 = *(s32 *)(((u8 *)&data_020c482c));
    func_ov001_02126554(t0, (s32)((u8 *)&data_020c482c));
    t1 = *(s32 *)(((u8 *)&g3DFieldSprite));
    func_ov015_02136680(t1);
    CBgMenuManager_Finalize((s32)((u8 *)&gBgMenuManager), 0);
    _ZN11MatchEngine13func_02079d1cEv((s32)((u8 *)&data_020e88a0));
    ((VCall *)arg0)->f27();
    *(s32 *)(arg0 + 0x8) = 0;
    Archive_Close((s32)(arg0 + 0x3F0), 9);
    func_ov060_02167dc0((s32)arg0);
    return;
}

extern "C" s32 func_ov060_021685dc(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" s32 func_ov060_021685f0(u8 *arg0)
{
    return *(s32 *)(arg0 + 0x8);
}

extern "C" void func_ov060_021685f8(void)
{
}
