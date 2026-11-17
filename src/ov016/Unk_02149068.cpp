#include "ov016/Unk_02149068.hpp"
struct T02149498 { s32 v[17]; };
struct P0214aad0 { u16 x; u16 y; };
struct S0214bd10 { u8 pad[0x14]; s32 x14; u16 x18; u8 x1a; s8 x1b; };

extern "C" void moveBar(void);
extern "C" void playSound(s32 arg0);
extern "C" void stepBar(s32 arg0);
extern "C" s32 setBar(void);
extern "C" s32 isTrigger(void);
extern "C" s32 isTouch(void);
extern "C" void calcRect(void);
extern "C" s32 disp_4(u8 arg0);
extern "C" void DWCi_SEARCHlInit(void);
extern "C" s32 DWCi_SEARCHlEnd(void);
extern "C" s32 DWCi_SEARCHlBegin(void);
extern "C" s32 startScan(void);
extern "C" s32 DWCi_SEARCHlStop(void);
extern "C" s32 DWCi_SEARCHlGetApInfo(u8 *arg0);
extern "C" void func_ov016_02149688(u16 *arg0);
extern "C" void renewInfo(void);
extern "C" void func_ov016_021498c4(void);
extern "C" void DWCi_SETTIGNlEnd(void);
extern "C" s32 DWCi_SETTIGNlGet(void);
extern "C" void DWCi_SETTINGlSetIpAuto(u8 arg0);
extern "C" void DWCi_SETTINGlSetDnsAuto(u8 arg0);
extern "C" s32 DWCi_SETTINGlSetSsid(s32 arg0);
extern "C" void func_ov016_02149980(void);
extern "C" void func_ov016_02149b00(s32 arg0);
extern "C" void func_ov016_02149b1c(s32 arg0);
extern "C" void func_ov016_02149b38(s32 arg0);
extern "C" void func_ov016_02149b58(s32 arg0);
extern "C" void func_ov016_02149b78(s32 arg0);
extern "C" void DWCi_SETTINGlGetSsid(s32 arg0);
extern "C" void func_ov016_02149bbc(s32 arg0);
extern "C" void func_ov016_02149bfc(s32 arg0);
extern "C" void func_ov016_02149c3c(void);
extern "C" void func_ov016_02149c80(void);
extern "C" void func_ov016_02149cc4(void);
extern "C" u8 DWCi_SETTINGlGetSetType(s32 arg0);
extern "C" void DWCi_SETTINGlSetSetting(void);
extern "C" void DWCi_SETTINGlSet(void);
extern "C" void DWCi_SETTINGlSetRaku(void);
extern "C" void DWCi_SETTINGlSetAoss(void);
extern "C" s32 DWCi_SETTINGlGetMemMap(void);
extern "C" void DWCi_SETTINGlErasePage(s32 arg0);
extern "C" void DWCi_SETTINGlEraseAll(void);
extern "C" s32 func_ov016_0214a1dc(...);
extern "C" s32 DWCi_SETTINGlConvAddress(...);
extern "C" s32 ascii2hex(s32 arg0);
extern "C" s32 func_ov016_0214a3d0(void);
extern "C" void DWCi_SNDlEnd(void);
extern "C" void DWCi_SNDlPlay(s32 arg0);
extern "C" void DWCi_SNDlSetVolume(s32 arg0);
extern "C" void DWCi_SNDlSetPitch(s32 arg0, s32 arg1);
extern "C" void DWCi_SNDlStop(void);
extern "C" void func_ov016_0214a548(void);
extern "C" void DWCi_STEPlBegin(void);
extern "C" void taskBegin0(void);
extern "C" void taskBegin1(void);
extern "C" void taskBegin2(void);
extern "C" void taskBegin3(void);
extern "C" void taskBegin4(s32 arg0);
extern "C" s32 taskBegin5(s32 arg0);
extern "C" void DWCi_STEPlEnd(void);
extern "C" void DWCi_STEPlChange(s32 arg0);
extern "C" s32 DWCi_STEPlGet(void);
extern "C" void taskEnd0_3(s32 arg0);
extern "C" void taskEnd1_4(void);
extern "C" void taskEnd2_3(void);
extern "C" void taskEnd3_3(void);
extern "C" void taskEnd4_3(void);
extern "C" s32 DWCi_STEPlIsEnd(void);
extern "C" s32 DWCi_STEPlChangeScr(s32 arg0);
extern "C" void taskChange(s32 arg0);
extern "C" void DWCi_USBAPlBegin(void);
extern "C" s32 startScan_2(void);
extern "C" void DWCi_USBAPlEnd(void);
extern "C" void DWCi_USBAPlSetCallback(s32 arg0);
extern "C" void cbWm(void);
extern "C" void scanFirst(void);
extern "C" void scanWait(void);
extern "C" void taskFirst(void);
extern "C" void DWCi_WINlInitEx(void);
extern "C" void DWCi_WINlEnd(void);
extern "C" s8 DWCi_WINlGet(void);
extern "C" s32 DWCi_WINlIsInit(void);
extern "C" void taskV(s32 arg0);
extern "C" void taskMove(s32 arg0);
extern "C" void taskMain_4(void);
extern "C" void taskMain1(s32 arg0);
extern "C" void disp_5(void);
extern "C" void dispCell(s32 arg0, s32 arg1);
extern "C" void pushButton(void);
extern "C" void taskEnd_3(s32 arg0);

extern "C" char data_ov016_02154db7[];
extern "C" char data_ov016_02154dbc[];
extern "C" char data_ov016_02154dc0[];
extern "C" char data_ov016_02154dc8[];
extern "C" char data_ov016_02154e0c[];
extern "C" char data_ov016_02154e10[];
extern "C" char data_ov016_02154e1f[];
extern "C" char data_ov016_02154e2e[];
extern "C" char data_ov016_02154e44[];
extern "C" char data_ov016_02154e4a[];
extern "C" char data_ov016_02154e54[];
extern "C" char data_ov016_02154e9c[];
extern "C" char data_ov016_02154ea2[];
extern "C" char data_ov016_02154ea8[];
extern "C" char data_ov016_02154eb0[];
extern "C" char data_ov016_02154eba[];
extern "C" char data_ov016_02154ebb[];
extern "C" char data_ov016_02154ec4[];
extern "C" char data_ov016_02154ece[];
extern "C" char data_ov016_02154ee2[];
extern "C" char data_ov016_02154ee4[];
extern "C" char data_ov016_02154efa[];
extern "C" char data_ov016_02154efc[];
extern "C" char data_ov016_02154f12[];
extern "C" char data_ov016_02154f14[];
extern "C" char data_ov016_02154f2a[];
extern "C" char data_ov016_02154f2c[];
extern "C" char data_ov016_02154f54[];
extern "C" char DWCi_R_SCR[];
extern "C" char data_ov016_02155db4[];
extern "C" char data_ov016_02155dc4[];
extern "C" char data_ov016_02155e40[];
extern "C" char DWCiMsgCmn[];
extern "C" char data_ov016_02158b1c[];
extern "C" char data_ov016_02158b20[];
extern "C" char data_ov016_02158b20_b[];
extern "C" char data_ov016_02158b24[];
extern "C" char data_ov016_02158b28[];
extern "C" char data_ov016_02158b28_b[];
extern "C" char data_ov016_02158b2c[];
extern "C" char data_ov016_02158b30[];
extern "C" char data_ov016_02158b34[];
extern "C" char data_ov016_02158b34_b[];
extern "C" char data_ov016_02158b38[];
extern "C" s32 DC_FlushRange(...);
extern "C" void DC_InvalidateRange(void);
extern "C" void FX_DivS32(void);
extern "C" s32 G2x_ChangeBlendBrightness_(...);
extern "C" void MATH_CalcCRC16(void);
extern "C" s32 MATHi_CRC16InitTableRev(...);
extern "C" s32 MI_CpuCopy8(...);
extern "C" s32 MI_CpuFill8(...);
extern "C" void MIi_CpuClear16(void);
extern "C" s32 NNS_SndArcPlayerStartSeqArc(...);
extern "C" s32 NNS_SndPlayerSetAllocatableChannel(...);
extern "C" s32 NNS_SndPlayerSetPlayableSeqCount(...);
extern "C" s32 NNS_SndPlayerSetPlayerVolume(...);
extern "C" s32 NNS_SndPlayerSetTrackMute(...);
extern "C" void OS_GetTick(void);
extern "C" void atoi(void);
extern "C" void G2x_SetBlendBrightness_(void);
extern "C" s32 GXS_LoadBG1Scr(...);
extern "C" s32 OS_SPrintf(...);
extern "C" void OS_GetOwnerInfo(void);
extern "C" void OS_Terminate(void);
extern "C" void WM_ReadStatus(void);
extern "C" s32 func_020131c0(...);
extern "C" void WM_GetDispersionScanPeriod(void);
extern "C" void WM_GetOtherElements(void);
extern "C" void func_020136b4(void);
extern "C" void WM_Reset(void);
extern "C" void WM_End(void);
extern "C" s32 WM_StartScanEx(...);
extern "C" s32 NNS_SndInit(...);
extern "C" void NNS_SndMain(void);
extern "C" s32 NNS_SndPlayerStopSeq(...);
extern "C" s32 func_020308bc(...);
extern "C" s32 NNS_SndPlayerSetVolume(...);
extern "C" s32 NNS_SndArcInitOnMemory(...);
extern "C" s32 NNS_SndArcPlayerSetup(...);
extern "C" s32 DWCi_BACKUPlRead(...);
extern "C" void DWCi_BACKUPlWritePage(void);
extern "C" void DWCi_BACKUPlConvMaskCidr(void);
extern "C" void DWCi_BACKUPlConvMaskAddr(void);
extern "C" void DWCi_BACKUPlConvWifiInfo(void);
extern "C" void DWCi_AUTH_GetNewWiFiInfo(void);
extern "C" s32 DWCi_Char(...);
extern "C" void DWCi_CMNlFontFlag(void);
extern "C" void DWCi_MSGlGetEx(void);
extern "C" void taskEnd1_5(void);
extern "C" s32 DWCi_ARClReadEx(...);
extern "C" s32 DWCi_ARClRelease(...);
extern "C" void DWCi_CELLlForm(void);
extern "C" void DWCi_CELLlDelete(void);
extern "C" void DWCi_CELLlGetObj(void);
extern "C" void DWCi_CELLlGetObjNum(void);
extern "C" void DWCi_CELLlSetEffect(void);
extern "C" void DWCi_CELLlSetPalette(void);
extern "C" s32 DWCi_CELLlSetPosition(...);
extern "C" void DWCi_CELLlSetPriority(void);
extern "C" void DWCi_CELLlGetPosition(void);
extern "C" void DWCi_CEINlSet(void);
extern "C" void DWCi_CEINlSetExCell(void);
extern "C" void DWCi_FNTlFormEx(void);
extern "C" void DWCi_FNTlDrawRect(void);
extern "C" void DWCi_FNTlDisp(void);
extern "C" void DWCi_InputRect(void);
extern "C" void DWCi_Coord2Rect(void);
extern "C" void DWCi_GXlSetWndPosition(void);
extern "C" void DWCi_GXlSetWndPlane(void);
extern "C" s32 DWCi_HEAPlAllocEx(...);
extern "C" s32 DWCi_HEAPlFree_(...);
extern "C" void DWCi_IPTlCheckTrigger(void);
extern "C" void DWCi_TPlCheck(void);
extern "C" void DWCi_TPlCheckTrigger(void);
extern "C" void DWCi_TPlCheckRepeat(void);
extern "C" s32 DWCi_TPlGet(...);
extern "C" void DWCi_STRlNLen(void);
extern "C" s32 DWCi_TSKlForm(...);
extern "C" s32 DWCi_TSKlChangeFunc(...);
extern "C" s32 DWCi_TSKlDelete(...);
extern "C" void DWCi_TSKlDeleteEx(void);
extern "C" s32 memcmp(...);

extern "C" asm void moveBar(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    ldr r0, =DWCi_R_SCR
    bl DWCi_TPlCheck
    cmp r0, #0
    beq @L_02149104
    add r0, sp, #0
    bl DWCi_TPlGet
    ldr r0, =data_ov016_02158b1c
    ldrh r1, [sp]
    ldr r3, [r0]
    ldrh r0, [r3, #0x10]
    sub r0, r0, #0x1e
    cmp r1, r0
    blt @L_02149104
    ldrh r1, [sp, #2]
    ldrh r0, [r3, #0x16]
    ldrb r2, [r3, #0x18]
    sub r0, r1, r0
    adds r4, r2, r0
    movmi r4, #0
    bmi @L_021490dc
    ldrb r1, [r3, #0x1b]
    ldr r0, =data_ov016_02154db7
    ldrb r2, [r3, #0x19]
    ldrb r0, [r0, r1]
    sub r0, r2, r0
    cmp r4, r0
    movge r4, r0
@L_021490dc:
    mov r0, r4
    bl playSound
    mov r0, r4
    bl disp_4
    ldr r0, =data_ov016_02158b1c
    mov r1, #2
    ldr r0, [r0]
    add sp, sp, #4
    strb r1, [r0, #0x1d]
    ldmia sp!, {r3, r4, pc}
@L_02149104:
    bl DWCi_SNDlStop
    ldr r0, =data_ov016_02158b1c
    mov r3, #0
    ldr r2, [r0]
    mov r1, #3
    strb r3, [r2, #0x1c]
    ldr r0, [r0]
    strb r1, [r0, #0x1d]
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}

extern "C" void playSound(s32 arg0)
{
    s32 d = (*(u8 **)data_ov016_02158b1c)[0x1A] - arg0;
    s32 x;
    s32 y;
    if (d < 0)
        d = -d;
    if (d < 2)
        x = 0;
    else if (d >= 6)
        x = 0x7F;
    else
        x = ((s32 (*)(...))FX_DivS32)(0x7F, 6 - d);
    ((s32 (*)(...))DWCi_SNDlSetVolume)(x);
    if (d < 2)
        y = -0x100;
    else if (d >= 6)
        y = 0x100;
    else
        y = ((s32 (*)(...))FX_DivS32)(0x200, 6 - d) - 0x100;
    ((s32 (*)(...))DWCi_SNDlSetPitch)(0xFFFF, y);
}

extern "C" void stepBar(s32 arg0)
{
    (*(u8 **)data_ov016_02158b1c)[0x1C] = arg0;
    (*(u8 **)data_ov016_02158b1c)[0x1D] = (arg0 == 2) ? 4 : 6;
}

extern "C" s32 setBar(void)
{
    s32 local[1];
    s32 r0;
    s32 r1;
    s32 r2;
    s32 r3;
    u8 *r12;
    u8 *t0;
    DWCi_TPlGet((s32)((u8 *)local));
    r12 = *(u8 * *)(((u8 *)&data_ov016_02158b1c));
    r1 = *(u16 *)(((u8 *)local) + 0x2);
    r3 = *(u8 *)(*(u8 * *)(((u8 *)&data_ov016_02158b1c)) + 0x1B);
    r2 = *(u8 *)(((u8 *)&data_ov016_02154db7) + *(u8 *)(*(u8 * *)(((u8 *)&data_ov016_02158b1c)) + 0x1B));
    r0 = ((*(u16 *)(((u8 *)local) + 0x2) - *(u16 *)(*(u8 * *)(((u8 *)&data_ov016_02158b1c)) + 0x12)) - ((u32)*(u8 *)(((u8 *)&data_ov016_02154db7) + *(u8 *)(*(u8 * *)(((u8 *)&data_ov016_02158b1c)) + 0x1B)) >> 1));
    if (r0 < 0) {
        r0 = 0;
    } else {
        r1 = (*(u8 *)(r12 + 0x19) - r2);
        if (r0 >= r1) {
            r0 = r1;
        }
    }
    ((s32 (*)(...))disp_4)(r0, r1, r2, r3);
    t0 = (u8 *)*(s32 *)(((u8 *)&data_ov016_02158b1c));
    *(u8 *)(t0 + 0x1D) = 3;
    return (s32)t0;
}

extern "C" s32 isTrigger(void)
{
    u8 b[8];
    s32 i = 1;
    ((s32 (*)(...))calcRect)(i, b);
    if (((s32 (*)(...))DWCi_TPlCheckRepeat)(b) != 0)
        return i;
    for (i = 2; i <= 3; i++) {
        ((s32 (*)(...))calcRect)(i, b);
        if (((s32 (*)(...))DWCi_TPlCheckRepeat)(b) != 0)
            return i;
    }
    i = 4;
    ((s32 (*)(...))calcRect)(i, b);
    if (((s32 (*)(...))DWCi_TPlCheckTrigger)(b) == 0)
        i = 0;
    return i;
}

extern "C" s32 isTouch(void)
{
    u8 buf[8];
    s32 i;
    for (i = 2; i <= 3; i++) {
        ((void (*)(s32, u8 *))calcRect)(i, buf);
        if (((s32 (*)(u8 *))DWCi_TPlCheck)(buf) != 0)
            return i;
    }
    return 0;
}

extern "C" asm void calcRect(void)
{
    ldr r2, =data_ov016_02158b1c
    cmp r0, #4
    ldr r3, [r2]
    ldrh r12, [r3, #0x10]
    add r3, r12, #0xc
    strh r12, [r1]
    strh r3, [r1, #4]
    addls pc, pc, r0, lsl #2
    bx lr
    bx lr
    b @L_0214935c
    b @L_02149390
    b @L_021493b0
    b @L_021493d4
@L_0214935c:
    ldr r3, [r2]
    ldr r0, =data_ov016_02154db7
    ldrh r12, [r3, #0x12]
    ldrb r3, [r3, #0x1a]
    add r3, r12, r3
    strh r3, [r1, #2]
    ldr r2, [r2]
    ldrh r3, [r1, #2]
    ldrb r2, [r2, #0x1b]
    ldrb r0, [r0, r2]
    add r0, r3, r0
    strh r0, [r1, #6]
    bx lr
@L_02149390:
    ldr r0, [r2]
    ldrh r0, [r0, #0x12]
    sub r0, r0, #0xd
    strh r0, [r1, #2]
    ldr r0, [r2]
    ldrh r0, [r0, #0x12]
    strh r0, [r1, #6]
    bx lr
@L_021493b0:
    ldr r0, [r2]
    ldrh r2, [r0, #0x12]
    ldrb r0, [r0, #0x19]
    add r0, r2, r0
    strh r0, [r1, #2]
    ldrh r0, [r1, #2]
    add r0, r0, #0xd
    strh r0, [r1, #6]
    bx lr
@L_021493d4:
    ldr r0, [r2]
    ldrh r3, [r0, #0x12]
    strh r3, [r1, #2]
    ldr r0, [r2]
    ldrb r0, [r0, #0x19]
    add r0, r3, r0
    strh r0, [r1, #6]
    bx lr
}

extern "C" s32 disp_4(u8 arg0)
{
    s32 t0 = *(s32 *)(*(u8 * *)(data_ov016_02158b1c));
    u16 t1 = *(u16 *)(*(u8 * *)(data_ov016_02158b1c) + 0x10);
    s32 t2 = (arg0 + *(u16 *)(*(u8 * *)(data_ov016_02158b1c) + 0x12));
    DWCi_CELLlSetPosition(t0, -1, t1, t2);
    u8 *t3 = (u8 *)*(s32 *)(data_ov016_02158b1c);
    *(u8 *)(t3 + 0x1A) = arg0;
    return (s32)t3;
}

extern "C" void DWCi_SEARCHlInit(void)
{
    if (*(s32 *)(data_ov016_02158b20) != 0)
        return;
    s32 v0 = DWCi_HEAPlAllocEx(0x1E60, 0x20);
    *(s32 *)(data_ov016_02158b20) = v0;
}

extern "C" s32 DWCi_SEARCHlEnd(void)
{
    s32 v0;
    s32 v1;
    if (*(s32 *)(data_ov016_02158b20) == 0)
        return *(s32 *)(data_ov016_02158b20);
    do {
        v0 = func_020131c0();
    } while (v0 != 0x8000);
    v1 = DWCi_HEAPlFree_((s32)data_ov016_02158b20_b);
    return v1;
}

extern "C" s32 DWCi_SEARCHlBegin(void)
{
    u8 *g;
    ((s32 (*)(...))MIi_CpuClear16)(0, *(u8 **)data_ov016_02158b20 + 0x1300, 0x348);
    if (((s32 (*)(...))func_020136b4)(*(u8 **)data_ov016_02158b20, func_ov016_02149688, 3) != 2)
        return 0;
    do {
        ((s32 (*)(...))WM_ReadStatus)(*(u8 **)data_ov016_02158b20 + 0x168C);
        g = *(u8 **)data_ov016_02158b20;
    } while (*(u16 *)(g + 0x168C) != 2);
    *(T02149498 *)(g + 0x1648) = *(T02149498 *)data_ov016_02154dc8;
    *(u8 **)(g + 0x1648) = g + 0xF00;
    *(u16 *)(*(u8 **)data_ov016_02158b20 + 0x1650) = ((s32 (*)(...))WM_GetDispersionScanPeriod)();
    return ((s32 (*)(...))startScan)() != 0 ? 1 : 0;
}

extern "C" s32 startScan(void)
{
    s32 v0 = WM_StartScanEx((s32)func_ov016_02149688, ((*(s32 *)(data_ov016_02158b20) + 0x248) + 0x1400));
    return (v0 == 2 ? 1 : 0);
}

extern "C" s32 DWCi_SEARCHlStop(void)
{
    u8 **d = (u8 **)data_ov016_02158b20;
    (*d)[0x1E5C] = 1;
    ((s32 (*)(...))WM_ReadStatus)(*d + 0x168C);
    if (*(u16 *)(*d + 0x168C) != 2) {
        if (((s32 (*)(...))WM_Reset)(func_ov016_02149688) != 2)
            return 0;
        do {
            ((s32 (*)(...))WM_ReadStatus)(*d + 0x168C);
        } while (*(u16 *)(*d + 0x168C) != 2);
    }
    if (((s32 (*)(...))WM_End)(func_ov016_02149688) != 2)
        return 0;
    return 1;
}

extern "C" s32 DWCi_SEARCHlGetApInfo(u8 *arg0)
{
    s32 r4;
    s32 r5;
    s32 r6;
    s32 r7;
    s32 r8;
    s32 r9;
    s32 v0;
    s32 t1;
    t1 = (*(s32 *)(data_ov016_02158b20) + 0x1300);
    *(s32 *)(arg0) = t1;
    r4 = 0x2A;
    r5 = 6;
    r6 = (s32)data_ov016_02154dc0;
    r7 = 0;
    r8 = 0;
    r9 = t1;
    do {
        v0 = memcmp((((r8 * r4) + r9) + 0x20), r6, r5);
        r8 = (r8 + 1);
        if (v0 != 0) {
            r7 = (r7 + 1);
        }
    } while (r8 < 0x14);
    return r7;
}

extern "C" void func_ov016_02149688(u16 *arg0)
{
    if (arg0[1] != 0 || (*(u8 **)data_ov016_02158b20)[0x1E5C] != 0 || arg0[0] != 0x26)
        return;
    switch (arg0[4]) {
    case 5:
        ((s32 (*)(...))renewInfo)();
        ((s32 (*)(...))startScan)();
        break;
    case 4:
        ((s32 (*)(...))startScan)();
        break;
    default:
        ((s32 (*)(...))OS_Terminate)(arg0);
        break;
    }
}

extern "C" asm void renewInfo(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x88
    ldr r1, =data_ov016_02158b20
    str r0, [sp]
    ldr r2, [r1]
    mov r1, #0x400
    add r0, r2, #0xf00
    add r6, r2, #0x1300
    bl DC_InvalidateRange
    ldr r0, [sp]
    mov r10, #0
    ldrh r0, [r0, #0xe]
    cmp r0, #0
    addle sp, sp, #0x88
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02149724:
    ldr r0, [sp]
    add r0, r0, r10, lsl #2
    ldr r4, [r0, #0x10]
    ldrb r0, [r4, #0xc]
    cmp r0, #0
    beq @L_0214989c
    ldrh r0, [r4, #0x3c]
    cmp r0, #0
    bne @L_0214989c
    mov r5, #0
    mov r8, #6
    mov r7, #0x2a
@L_02149754:
    mla r1, r5, r7, r6
    mov r2, r8
    add r0, r4, #4
    add r1, r1, #0x20
    bl memcmp
    cmp r0, #0
    beq @L_0214977c
    add r5, r5, #1
    cmp r5, #0x14
    blt @L_02149754
@L_0214977c:
    cmp r5, #0x14
    mov r11, #0
    bne @L_021497cc
    ldr r9, =data_ov016_02154dc0
    mov r5, r11
    mov r8, #6
    mov r7, #0x2a
@L_02149798:
    mla r0, r5, r7, r6
    mov r1, r9
    mov r2, r8
    add r0, r0, #0x20
    bl memcmp
    cmp r0, #0
    beq @L_021497c0
    add r5, r5, #1
    cmp r5, #0x14
    blt @L_02149798
@L_021497c0:
    cmp r5, #0x14
    addeq sp, sp, #0x88
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_021497cc:
    mov r0, #0x2a
    mla r9, r5, r0, r6
    add r0, r4, #4
    add r1, r9, #0x20
    mov r2, #6
    bl MI_CpuCopy8
    mov r1, r9
    add r0, r4, #0xc
    mov r2, #0x20
    bl MI_CpuCopy8
    ldr r0, [sp]
    add r0, r0, r10, lsl #1
    ldrh r0, [r0, #0x50]
    strh r0, [r9, #0x26]
    ldrh r0, [r4, #0x2c]
    tst r0, #0x10
    streqb r11, [r9, #0x28]
    beq @L_0214989c
    add r5, sp, #4
    mov r2, #1
    mov r0, r5
    mov r1, r4
    strb r2, [r9, #0x28]
    bl WM_GetOtherElements
    ldrb r8, [sp, #4]
    mov r7, #0
    cmp r8, #0
    ble @L_0214989c
    ldr r4, =data_ov016_02154dbc
    mov r11, #4
@L_02149844:
    add r1, r5, r7, lsl #3
    ldrb r0, [r1, #4]
    cmp r0, #0x30
    moveq r0, #2
    streqb r0, [r9, #0x28]
    beq @L_0214989c
    cmp r0, #0xdd
    bne @L_02149890
    ldrb r0, [r1, #5]
    cmp r0, #4
    blo @L_02149890
    ldr r0, [r1, #8]
    mov r1, r4
    mov r2, r11
    bl memcmp
    cmp r0, #0
    moveq r0, #2
    streqb r0, [r9, #0x28]
    beq @L_0214989c
@L_02149890:
    add r7, r7, #1
    cmp r7, r8
    blt @L_02149844
@L_0214989c:
    ldr r0, [sp]
    add r10, r10, #1
    ldrh r0, [r0, #0xe]
    cmp r10, r0
    blt @L_02149724
    add sp, sp, #0x88
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void func_ov016_021498c4(void)
{
    s32 v0 = DWCi_HEAPlAllocEx(0x6F8, 0x20);
    *(s32 *)(data_ov016_02158b24) = v0;
    MATHi_CRC16InitTableRev(((v0 + 0xF8) + 0x400), 0xA001, (v0 + 0xF8));
    DWCi_BACKUPlRead(*(s32 *)(data_ov016_02158b24));
}

extern "C" void DWCi_SETTIGNlEnd(void)
{
    DWCi_HEAPlFree_((s32)data_ov016_02158b24);
}

extern "C" s32 DWCi_SETTIGNlGet(void)
{
    return (*(s32 *)(data_ov016_02158b24) + 0x400);
}

extern "C" void DWCi_SETTINGlSetIpAuto(u8 arg0)
{
    *(u8 *)(*(u8 * *)(data_ov016_02158b24) + 0x4F5) = arg0;
}

extern "C" void DWCi_SETTINGlSetDnsAuto(u8 arg0)
{
    *(u8 *)(*(u8 * *)(data_ov016_02158b24) + 0x4F6) = arg0;
}

extern "C" s32 DWCi_SETTINGlSetSsid(s32 arg0)
{
    s32 t0 = (*(s32 *)(data_ov016_02158b24) + 0x440);
    MI_CpuCopy8(arg0, t0, 0x20);
    u8 *t1 = (u8 *)*(s32 *)(data_ov016_02158b24);
    *(u8 *)(t1 + 0x4E7) = 0;
    return (s32)t1;
}

extern "C" asm void func_ov016_02149980(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    ldr r7, =data_ov016_02158b24
    mov r6, r0
    ldr r0, [r7]
    mov r1, #0
    add r0, r0, #0x480
    mov r2, #0x10
    bl MI_CpuFill8
    mov r0, r6
    mov r1, #0x20
    bl DWCi_STRlNLen
    mov r5, r0
    cmp r5, #0xa
    bgt @L_021499c8
    bge @L_021499e0
    cmp r5, #0
    beq @L_021499e0
    b @L_02149a34
@L_021499c8:
    cmp r5, #0x1a
    bgt @L_021499d8
    beq @L_021499e0
    b @L_02149a34
@L_021499d8:
    cmp r5, #0x20
    bne @L_02149a34
@L_021499e0:
    ldr r1, [r7]
    cmp r5, #0
    ldrb r0, [r1, #0x4e6]
    mov r4, #0
    bic r0, r0, #0xfc
    strb r0, [r1, #0x4e6]
    ldr r0, [r7]
    add r9, r0, #0x480
    ble @L_02149a5c
@L_02149a04:
    ldrb r0, [r6, r4]
    add r10, r6, r4
    bl ascii2hex
    mov r8, r0
    ldrb r0, [r10, #1]
    bl ascii2hex
    add r0, r0, r8, lsl #4
    add r4, r4, #2
    cmp r4, r5
    strb r0, [r9], #1
    blt @L_02149a04
    b @L_02149a5c
@L_02149a34:
    ldr r3, [r7]
    mov r0, r6
    ldrb r1, [r3, #0x4e6]
    mov r2, #0x10
    bic r1, r1, #0xfc
    orr r1, r1, #4
    strb r1, [r3, #0x4e6]
    ldr r1, [r7]
    add r1, r1, #0x480
    bl MI_CpuCopy8
@L_02149a5c:
    cmp r5, #5
    bgt @L_02149a74
    bge @L_02149ab4
    cmp r5, #0
    beq @L_02149aa0
    b @L_02149ae4
@L_02149a74:
    cmp r5, #0xd
    bgt @L_02149a94
    cmp r5, #0xa
    blt @L_02149ae4
    beq @L_02149ab4
    cmp r5, #0xd
    beq @L_02149acc
    b @L_02149ae4
@L_02149a94:
    cmp r5, #0x1a
    beq @L_02149acc
    b @L_02149ae4
@L_02149aa0:
    ldr r1, [r7]
    ldrb r0, [r1, #0x4e6]
    bic r0, r0, #3
    strb r0, [r1, #0x4e6]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02149ab4:
    ldr r1, [r7]
    ldrb r0, [r1, #0x4e6]
    bic r0, r0, #3
    orr r0, r0, #1
    strb r0, [r1, #0x4e6]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02149acc:
    ldr r1, [r7]
    ldrb r0, [r1, #0x4e6]
    bic r0, r0, #3
    orr r0, r0, #2
    strb r0, [r1, #0x4e6]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02149ae4:
    ldr r1, [r7]
    ldrb r0, [r1, #0x4e6]
    bic r0, r0, #3
    orr r0, r0, #3
    strb r0, [r1, #0x4e6]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" void func_ov016_02149b00(s32 arg0)
{
    DWCi_SETTINGlConvAddress(arg0, (*(s32 *)(data_ov016_02158b24) + 0x4C0));
}

extern "C" void func_ov016_02149b1c(s32 arg0)
{
    DWCi_SETTINGlConvAddress(arg0, (*(s32 *)(data_ov016_02158b24) + 0x4F0));
}

extern "C" void func_ov016_02149b38(s32 arg0)
{
    DWCi_SETTINGlConvAddress(arg0, ((*(s32 *)(data_ov016_02158b24) + 0xC4) + 0x400));
}

extern "C" void func_ov016_02149b58(s32 arg0)
{
    DWCi_SETTINGlConvAddress(arg0, ((*(s32 *)(data_ov016_02158b24) + 0xC8) + 0x400));
}

extern "C" void func_ov016_02149b78(s32 arg0)
{
    DWCi_SETTINGlConvAddress(arg0, ((*(s32 *)(data_ov016_02158b24) + 0xCC) + 0x400));
}

extern "C" void DWCi_SETTINGlGetSsid(s32 arg0)
{
    MI_CpuCopy8((*(s32 *)(data_ov016_02158b24) + 0x440), arg0, 0x20);
}

extern "C" void func_ov016_02149bbc(s32 arg0)
{
    u8 t0 = *(u8 *)(*(u8 * *)(data_ov016_02158b24) + 0x4C0);
    u8 t1 = *(u8 *)(*(u8 * *)(data_ov016_02158b24) + 0x4C1);
    OS_SPrintf(arg0, (s32)data_ov016_02155db4, t0, t1, *(u8 *)(*(u8 * *)(data_ov016_02158b24) + 0x4C2), *(u8 *)(*(u8 * *)(data_ov016_02158b24) + 0x4C3));
}

extern "C" void func_ov016_02149bfc(s32 arg0)
{
    u8 t0 = *(u8 *)(*(u8 * *)(data_ov016_02158b24) + 0x4F0);
    u8 t1 = *(u8 *)(*(u8 * *)(data_ov016_02158b24) + 0x4F1);
    OS_SPrintf(arg0, (s32)data_ov016_02155db4, t0, t1, *(u8 *)(*(u8 * *)(data_ov016_02158b24) + 0x4F2), *(u8 *)(*(u8 * *)(data_ov016_02158b24) + 0x4F3));
}

extern "C" asm void func_ov016_02149c3c(void)
{
    stmdb sp!, {r3, lr}
    sub sp, sp, #8
    ldr r2, =data_ov016_02158b24
    ldr r1, =data_ov016_02155db4
    ldr r12, [r2]
    add r3, r12, #0xc4
    ldrb r2, [r3, #0x402]
    str r2, [sp]
    ldrb r2, [r3, #0x403]
    str r2, [sp, #4]
    ldrb r2, [r12, #0x4c4]
    ldrb r3, [r3, #0x401]
    bl OS_SPrintf
    add sp, sp, #8
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov016_02149c80(void)
{
    stmdb sp!, {r3, lr}
    sub sp, sp, #8
    ldr r2, =data_ov016_02158b24
    ldr r1, =data_ov016_02155db4
    ldr r12, [r2]
    add r3, r12, #0xc8
    ldrb r2, [r3, #0x402]
    str r2, [sp]
    ldrb r2, [r3, #0x403]
    str r2, [sp, #4]
    ldrb r2, [r12, #0x4c8]
    ldrb r3, [r3, #0x401]
    bl OS_SPrintf
    add sp, sp, #8
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov016_02149cc4(void)
{
    stmdb sp!, {r3, lr}
    sub sp, sp, #8
    ldr r2, =data_ov016_02158b24
    ldr r1, =data_ov016_02155db4
    ldr r12, [r2]
    add r3, r12, #0xcc
    ldrb r2, [r3, #0x402]
    str r2, [sp]
    ldrb r2, [r3, #0x403]
    str r2, [sp, #4]
    ldrb r2, [r12, #0x4cc]
    ldrb r3, [r3, #0x401]
    bl OS_SPrintf
    add sp, sp, #8
    ldmia sp!, {r3, pc}
}

extern "C" u8 DWCi_SETTINGlGetSetType(s32 arg0)
{
    return *(u8 *)(((u8 *)(*(s32 *)(data_ov016_02158b24) + (arg0 << 8))) + 0xE7);
}

extern "C" asm void DWCi_SETTINGlSetSetting(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r5, =data_ov016_02158b24
    mov r3, #0x78
    ldr r12, [r5]
    add r4, r12, r0, lsl #8
    mov r7, r4
    add r6, r12, #0x400
@L_02149d3c:
    ldrb r2, [r7]
    ldrb r1, [r7, #1]
    add r7, r7, #2
    subs r3, r3, #1
    strb r1, [r6, #1]
    strb r2, [r6], #2
    bne @L_02149d3c
    ldr r1, =data_ov016_02154e0c
    strb r0, [r12, #0x4f4]
    add r0, r4, #0xc0
    mov r2, #4
    bl memcmp
    cmp r0, #0
    mov r1, #0
    mov r6, #4
    ldr r0, [r5]
    moveq r1, #1
    strb r1, [r0, #0x4f5]
    ldr r7, =data_ov016_02154e0c
    mov r2, r6
    mov r1, r7
    add r0, r4, #0xc8
    bl memcmp
    cmp r0, #0
    bne @L_02149db8
    mov r1, r7
    mov r2, r6
    add r0, r4, #0xcc
    bl memcmp
    cmp r0, #0
    beq @L_02149dc4
@L_02149db8:
    ldr r0, [r5]
    mov r1, #0
    b @L_02149dcc
@L_02149dc4:
    ldr r0, [r5]
    mov r1, #1
@L_02149dcc:
    strb r1, [r0, #0x4f6]
    ldr r1, [r5]
    ldrb r0, [r4, #0xd0]
    add r1, r1, #0x4f0
    bl DWCi_BACKUPlConvMaskAddr
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void DWCi_SETTINGlSet(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r0, =data_ov016_02158b24
    mov r2, #0x78
    ldr r1, [r0]
    add r4, r1, #0x400
    ldrb r0, [r4, #0xf4]
    mov r6, r4
    add r5, r1, r0, lsl #8
    mov r3, r5
@L_02149e10:
    ldrb r1, [r6]
    ldrb r0, [r6, #1]
    add r6, r6, #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_02149e10
    ldrb r0, [r4, #0xf5]
    mov r6, #4
    cmp r0, #0
    beq @L_02149e68
    mov r7, #0
    mov r1, r7
    mov r2, r6
    add r0, r5, #0xc0
    bl MI_CpuFill8
    mov r1, r7
    mov r2, r6
    add r0, r5, #0xc4
    bl MI_CpuFill8
    strb r7, [r5, #0xd0]
    b @L_02149e94
@L_02149e68:
    mov r2, r6
    add r0, r4, #0xc0
    add r1, r5, #0xc0
    bl MI_CpuCopy8
    mov r2, r6
    add r0, r4, #0xc4
    add r1, r5, #0xc4
    bl MI_CpuCopy8
    add r0, r4, #0xf0
    bl DWCi_BACKUPlConvMaskCidr
    strb r0, [r5, #0xd0]
@L_02149e94:
    ldrb r0, [r4, #0xf6]
    mov r2, #8
    cmp r0, #0
    beq @L_02149eb4
    add r0, r5, #0xc8
    mov r1, #0
    bl MI_CpuFill8
    b @L_02149ec0
@L_02149eb4:
    add r0, r4, #0xc8
    add r1, r5, #0xc8
    bl MI_CpuCopy8
@L_02149ec0:
    ldrb r0, [r4, #0xf4]
    bl func_ov016_0214a1dc
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void DWCi_SETTINGlSetRaku(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    ldr r1, =data_ov016_02158b24
    mov r6, #0
    ldr r4, [r1]
    mov r7, r0
    mov r1, r6
    add r0, r4, #0x400
    mov r2, #0xef
    bl MI_CpuFill8
    mov r0, r7
    add r1, r4, #0x440
    mov r2, #0x20
    bl MI_CpuCopy8
    ldr r0, [r7, #0x20]
    cmp r0, #1
    beq @L_02149f24
    cmp r0, #2
    beq @L_02149f38
    cmp r0, #3
    beq @L_02149f4c
    b @L_02149f60
@L_02149f24:
    ldrb r0, [r4, #0x4e6]
    mov r6, #5
    bic r0, r0, #3
    orr r0, r0, #1
    b @L_02149f68
@L_02149f38:
    ldrb r0, [r4, #0x4e6]
    mov r6, #0xd
    bic r0, r0, #3
    orr r0, r0, #2
    b @L_02149f68
@L_02149f4c:
    ldrb r0, [r4, #0x4e6]
    mov r6, #0x10
    bic r0, r0, #3
    orr r0, r0, #3
    b @L_02149f68
@L_02149f60:
    ldrb r0, [r4, #0x4e6]
    bic r0, r0, #3
@L_02149f68:
    strb r0, [r4, #0x4e6]
    ldrb r0, [r4, #0x4e6]
    add r8, r7, #0x28
    mov r5, #0
    bic r0, r0, #0xfc
    strb r0, [r4, #0x4e6]
    add r7, r4, #0x480
@L_02149f84:
    mov r2, r6
    add r0, r8, r5, lsl #5
    add r1, r7, r5, lsl #4
    bl MI_CpuCopy8
    add r5, r5, #1
    cmp r5, #4
    blt @L_02149f84
    mov r3, #2
    add r0, r4, #0x4f0
    mov r1, #0
    mov r2, #4
    strb r3, [r4, #0x4e7]
    bl MI_CpuFill8
    mov r0, #1
    strb r0, [r4, #0x4f5]
    strb r0, [r4, #0x4f6]
    bl DWCi_SETTINGlSet
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void DWCi_SETTINGlSetAoss(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    ldr r1, =data_ov016_02158b24
    mov r7, #0
    ldr r1, [r1]
    mov r8, r0
    add r4, r1, #0x400
    mov r0, r4
    mov r1, r7
    mov r2, #0xef
    bl MI_CpuFill8
    mov r5, #5
    mov r0, r8
    mov r2, r5
    add r1, r4, #0xd1
    bl MI_CpuCopy8
    mov r2, r5
    add r0, r8, #6
    add r1, r4, #0xd6
    bl MI_CpuCopy8
    add r0, r8, #0xc
    add r1, r4, #0xdb
    mov r2, r5
    bl MI_CpuCopy8
    mov r2, r5
    add r0, r8, #0x12
    add r1, r4, #0xe0
    bl MI_CpuCopy8
    add r0, r8, #0x18
    add r1, r4, #0x60
    mov r6, #0x20
    mov r2, r6
    bl MI_CpuCopy8
    add r0, r8, #0x39
    add r1, r4, #0x80
    mov r5, #0xd
    mov r2, r5
    bl MI_CpuCopy8
    add r0, r8, #0x47
    add r1, r4, #0x90
    mov r2, r5
    bl MI_CpuCopy8
    add r0, r8, #0x55
    add r1, r4, #0xa0
    mov r2, r5
    bl MI_CpuCopy8
    mov r2, r5
    add r0, r8, #0x63
    add r1, r4, #0xb0
    bl MI_CpuCopy8
    add r0, r8, #0x71
    mov r2, r6
    add r1, r4, #0x40
    bl MI_CpuCopy8
    mov r1, r7
    ldrb r2, [r4, #0xe6]
    mov r5, #1
    add r0, r4, #0xf0
    bic r2, r2, #3
    orr r2, r2, #2
    and r2, r2, #0xff
    bic r2, r2, #0xfc
    strb r2, [r4, #0xe6]
    strb r5, [r4, #0xe7]
    mov r2, #4
    bl MI_CpuFill8
    strb r5, [r4, #0xf5]
    strb r5, [r4, #0xf6]
    bl DWCi_SETTINGlSet
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" s32 DWCi_SETTINGlGetMemMap(void)
{
    return *(s32 *)(data_ov016_02158b24);
}

extern "C" void DWCi_SETTINGlErasePage(s32 arg0)
{
    u8 *t0 = (u8 *)(*(s32 *)(data_ov016_02158b24) + (arg0 << 8));
    MI_CpuFill8((s32)t0, 0, 0xEF);
    *(u8 *)(t0 + 0xE7) = 0xFF;
    func_ov016_0214a1dc(arg0, 0xFF);
}

extern "C" void DWCi_SETTINGlEraseAll(void)
{
    u8 buf[0x14];
    s32 i;
    s32 s;
    ((s32 (*)(...))MIi_CpuClear16)(0, *(s32 *)data_ov016_02158b24, 0x400);
    for (i = 0; i < 3; i++)
        (*(u8 **)data_ov016_02158b24)[(i << 8) + 0xE7] = 0xFF;
    ((s32 (*)(...))DWCi_AUTH_GetNewWiFiInfo)(buf);
    s = ((s32 (*)(...))DWCi_BACKUPlConvWifiInfo)(buf);
    for (i = 0; i < 2; i++)
        ((s32 (*)(...))MI_CpuCopy8)(s, *(u8 **)data_ov016_02158b24 + (i << 8) + 0xF0, 0xE);
    for (i = 0; i < 4; i++)
        ((s32 (*)(...))func_ov016_0214a1dc)(i);
}

extern "C" asm s32 func_ov016_0214a1dc(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x14
    ldr r9, =data_ov016_02158b24
    mov r8, r0
    ldr r1, [r9]
    mov r4, #1
    add r0, r1, r8, lsl #8
    ldrb r5, [r0, #0xe7]
    mov r7, #0
    add r10, sp, #4
    mov r0, r10
    mov r1, r7
    mov r2, #0x10
    mov r6, r4, lsl r8
    bl MI_CpuFill8
    str r4, [r10, r8, lsl #2]
    cmp r8, #2
    bgt @L_0214a2ac
    ldr r0, [r9]
    ldr r1, =data_ov016_02158b24
    ldrb r2, [r0, #0xef]
    tst r2, r6
    movne r7, r4
    cmp r5, #0xff
    bne @L_0214a270
    cmp r7, #0
    beq @L_0214a270
    ldrb r2, [r0, #0xef]
    mvn r3, r6
    and r3, r3, #0xff
    and r2, r2, r3
    strb r2, [r0, #0xef]
    ldr r2, [r1]
    mov r0, #1
    ldrb r1, [r2, #0x1ef]
    and r1, r1, r3
    b @L_0214a2a0
@L_0214a270:
    cmp r5, #0xff
    beq @L_0214a2ac
    cmp r7, #0
    bne @L_0214a2ac
    ldrb r2, [r0, #0xef]
    and r3, r6, #0xff
    orr r2, r2, r3
    strb r2, [r0, #0xef]
    ldr r2, [r1]
    mov r0, #1
    ldrb r1, [r2, #0x1ef]
    orr r1, r1, r3
@L_0214a2a0:
    strb r1, [r2, #0x1ef]
    str r0, [sp, #8]
    str r0, [sp, #4]
@L_0214a2ac:
    ldr r6, =data_ov016_02158b24
    mov r5, #0
    mov r7, #0xfe
    add r4, sp, #4
@L_0214a2bc:
    ldr r0, [r4, r5, lsl #2]
    cmp r0, #0
    beq @L_0214a2ec
    ldr r1, [r6]
    mov r2, r7
    add r0, r1, #0xf8
    add r0, r0, #0x400
    add r1, r1, r5, lsl #8
    bl MATH_CalcCRC16
    ldr r1, [r6]
    add r1, r1, r5, lsl #8
    strh r0, [r1, #0xfe]
@L_0214a2ec:
    add r5, r5, #1
    cmp r5, #4
    blt @L_0214a2bc
    mov r0, #0x100
    mov r1, #0x20
    bl DWCi_HEAPlAllocEx
    mov r2, r0
    str r2, [sp]
    ldr r0, [r6]
    add r1, sp, #4
    bl DWCi_BACKUPlWritePage
    add r0, sp, #0
    bl DWCi_HEAPlFree_
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm s32 DWCi_SETTINGlConvAddress(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #4
    add r6, sp, #0
    mov r9, r0
    mov r7, #0
    mov r8, r1
    mov r0, r6
    mov r1, r7
    mov r2, #4
    bl MI_CpuFill8
    mov r10, #0x20
    mov r5, #3
    mov r4, r7
@L_0214a360:
    add r0, r7, r7, lsl #1
    mov r1, r6
    mov r2, r5
    add r0, r9, r0
    bl MI_CpuCopy8
    mov r1, r4
@L_0214a378:
    ldrb r0, [r6, r1]
    cmp r0, #0
    bne @L_0214a394
    strb r10, [r6, r1]
    add r1, r1, #1
    cmp r1, #3
    blt @L_0214a378
@L_0214a394:
    mov r0, r6
    bl atoi
    strb r0, [r8, r7]
    add r7, r7, #1
    cmp r7, #4
    blt @L_0214a360
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" s32 ascii2hex(s32 arg0)
{
    if ((u32)arg0 <= (u32)0x39) {
        return (arg0 - 0x30);
    } else {
        if ((u32)arg0 <= (u32)0x46) {
            arg0 = (arg0 - 0x37);
        } else {
            arg0 = (arg0 - 0x57);
        }
        return arg0;
    }
}

extern "C" s32 func_ov016_0214a3d0(void)
{
    s32 local[1];
    s32 r4;
    s32 r7;
    s32 v0;
    s32 v1;
    s32 v9;
    u8 *t0;
    u8 *t1;
    s32 t2;
    s32 t3;
    u8 *t4;
    v0 = DWCi_HEAPlAllocEx(0xAC, 4);
    *(s32 *)(((u8 *)&data_ov016_02158b28)) = v0;
    v1 = DWCi_ARClReadEx((s32)((u8 *)&data_ov016_02155dc4), (s32)((u8 *)local), 0x20);
    t0 = (u8 *)*(s32 *)(((u8 *)&data_ov016_02158b28));
    *(s32 *)(t0 + 0xA4) = v1;
    NNS_SndInit(v1, (s32)t0);
    t1 = *(u8 * *)(((u8 *)&data_ov016_02158b28));
    t2 = *(s32 *)(*(u8 * *)(((u8 *)&data_ov016_02158b28)) + 0xA4);
    NNS_SndArcInitOnMemory(t1, t2);
    r7 = 0;
    NNS_SndArcPlayerSetup(0);
    t3 = (*(s32 *)(((u8 *)&data_ov016_02158b28)) + 0xA0);
    func_020308bc(t3);
    do {
        r4 = 0;
        NNS_SndPlayerSetPlayerVolume(r7, 0x7F);
        NNS_SndPlayerSetPlayableSeqCount(r7, 1);
        NNS_SndPlayerSetAllocatableChannel(r7, 0);
        r7 = (r7 + 1);
    } while (r7 < 0x20);
    v9 = DWCi_TSKlForm(r4, (s32)((u8 *)&func_ov016_0214a548), r4, 0xC8);
    t4 = (u8 *)*(s32 *)(((u8 *)&data_ov016_02158b28));
    *(s32 *)(t4 + 0xA8) = v9;
    return v9;
}

extern "C" void DWCi_SNDlEnd(void)
{
    DWCi_TSKlDelete(0, *(s32 *)(*(u8 * *)(data_ov016_02158b28) + 0xA8));
    DWCi_HEAPlFree_((s32)data_ov016_02158b28_b);
}

extern "C" void DWCi_SNDlPlay(s32 arg0)
{
    NNS_SndArcPlayerStartSeqArc((*(s32 *)(data_ov016_02158b28) + 0xA0), 0, arg0);
}

extern "C" void DWCi_SNDlSetVolume(s32 arg0)
{
    NNS_SndPlayerSetVolume((*(s32 *)(data_ov016_02158b28) + 0xA0), arg0, (s32)data_ov016_02158b28);
}

extern "C" void DWCi_SNDlSetPitch(s32 arg0, s32 arg1)
{
    NNS_SndPlayerSetTrackMute((*(s32 *)(data_ov016_02158b28) + 0xA0), arg0, arg1, *(s32 *)(data_ov016_02158b28));
}

extern "C" void DWCi_SNDlStop(void)
{
    NNS_SndPlayerStopSeq((*(s32 *)(data_ov016_02158b28) + 0xA0), 0);
}

extern "C" void func_ov016_0214a548(void)
{
    NNS_SndMain();
}

extern "C" asm void DWCi_STEPlBegin(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    str r0, [sp]
    mov r0, #0x1c
    mov r1, #4
    bl DWCi_HEAPlAllocEx
    ldr r1, [sp]
    ldr r4, =data_ov016_02158b2c
    add r3, r1, r1, lsl #2
    ldr r2, =data_ov016_02154e10
    ldr r1, =data_ov016_02154e1f
    mov r8, #0
    mvn r7, #0
    ldr r11, =data_ov016_02154e2e
    str r0, [r4, #4]
    add r9, r2, r3
    add r10, r1, r3
    sub r5, r7, #0x29
    mov r6, r8
@L_0214a59c:
    ldrb r1, [r9, r8]
    mov r0, #1
    mov r2, r0
    bl DWCi_CEINlSetExCell
    ldr r2, [r4, #4]
    mov r1, r7
    str r0, [r2, r8, lsl #2]
    ldr r0, [r4, #4]
    mov r2, r6
    ldr r0, [r0, r8, lsl #2]
    bl DWCi_CELLlSetPriority
    ldr r0, [r4, #4]
    add r3, r11, r8, lsl #2
    ldrh r3, [r3, #2]
    ldr r0, [r0, r8, lsl #2]
    mov r1, r7
    mov r2, r5
    bl DWCi_CELLlSetPosition
    ldr r0, [r4, #4]
    ldrb r3, [r10, r8]
    ldr r0, [r0, r8, lsl #2]
    mov r1, r7
    mov r2, r6
    bl DWCi_CELLlSetPalette
    add r8, r8, #1
    cmp r8, #5
    blt @L_0214a59c
    ldr r1, =taskBegin0
    mov r0, r6
    mov r2, r6
    mov r3, #0x78
    bl DWCi_TSKlForm
    ldr r1, =data_ov016_02158b2c
    ldr r1, [r1, #4]
    str r0, [r1, #0x14]
    ldr r0, [sp]
    bl DWCi_STEPlChangeScr
    mov r0, #0xd
    bl DWCi_SNDlPlay
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void taskBegin0(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #8
    ldr r6, =data_ov016_02158b2c
    mov r4, #0
    ldr r1, [r6, #4]
    mov r5, r0
    ldr r0, [r1]
    add r2, sp, #4
    add r3, sp, #0
    mov r1, r4
    bl DWCi_CELLlGetPosition
    ldr r0, [sp, #4]
    add r0, r0, #8
    str r0, [sp, #4]
    cmp r0, #0x20
    blt @L_0214a698
    cmp r0, #0x100
    ble @L_0214a6d8
@L_0214a698:
    ldr r5, =data_ov016_02154e2e
    ldr r4, =data_ov016_02158b2c
    mov r7, #0
    mvn r6, #0
@L_0214a6a8:
    add r0, r5, r7, lsl #2
    ldr r1, [r4, #4]
    ldrh r3, [r0, #2]
    ldr r0, [r1, r7, lsl #2]
    ldr r2, [sp, #4]
    mov r1, r6
    bl DWCi_CELLlSetPosition
    add r7, r7, #1
    cmp r7, #5
    blt @L_0214a6a8
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0214a6d8:
    mov r0, #0x20
    ldr r7, =data_ov016_02154e2e
    str r0, [sp, #4]
    mvn r8, #0
@L_0214a6e8:
    add r0, r7, r4, lsl #2
    ldr r1, [r6, #4]
    ldrh r3, [r0, #2]
    ldr r0, [r1, r4, lsl #2]
    ldr r2, [sp, #4]
    mov r1, r8
    bl DWCi_CELLlSetPosition
    add r4, r4, #1
    cmp r4, #5
    blt @L_0214a6e8
    ldr r1, =taskBegin1
    mov r0, r5
    bl DWCi_TSKlChangeFunc
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void taskBegin1(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #8
    ldr r5, =data_ov016_02158b2c
    mov r4, r0
    ldr r0, [r5, #4]
    add r2, sp, #4
    ldr r0, [r0, #4]
    add r3, sp, #0
    mov r1, #0
    bl DWCi_CELLlGetPosition
    ldr r0, [sp, #4]
    add r0, r0, #8
    str r0, [sp, #4]
    cmp r0, #0x50
    blt @L_0214a774
    cmp r0, #0x100
    ble @L_0214a7b4
@L_0214a774:
    ldr r5, =data_ov016_02154e2e
    ldr r4, =data_ov016_02158b2c
    mov r7, #1
    mvn r6, #0
@L_0214a784:
    add r0, r5, r7, lsl #2
    ldr r1, [r4, #4]
    ldrh r3, [r0, #2]
    ldr r0, [r1, r7, lsl #2]
    ldr r2, [sp, #4]
    mov r1, r6
    bl DWCi_CELLlSetPosition
    add r7, r7, #1
    cmp r7, #5
    blt @L_0214a784
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0214a7b4:
    mov r0, #0x50
    ldr r6, =data_ov016_02154e2e
    str r0, [sp, #4]
    mov r8, #1
    mvn r7, #0
@L_0214a7c8:
    add r0, r6, r8, lsl #2
    ldr r1, [r5, #4]
    ldrh r3, [r0, #2]
    ldr r0, [r1, r8, lsl #2]
    ldr r2, [sp, #4]
    mov r1, r7
    bl DWCi_CELLlSetPosition
    add r8, r8, #1
    cmp r8, #5
    blt @L_0214a7c8
    ldr r1, =taskBegin2
    mov r0, r4
    bl DWCi_TSKlChangeFunc
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void taskBegin2(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #8
    ldr r5, =data_ov016_02158b2c
    mov r4, r0
    ldr r0, [r5, #4]
    add r2, sp, #4
    ldr r0, [r0, #8]
    add r3, sp, #0
    mov r1, #0
    bl DWCi_CELLlGetPosition
    ldr r0, [sp, #4]
    add r0, r0, #8
    str r0, [sp, #4]
    cmp r0, #0x68
    blt @L_0214a854
    cmp r0, #0x100
    ble @L_0214a894
@L_0214a854:
    ldr r5, =data_ov016_02154e2e
    ldr r4, =data_ov016_02158b2c
    mov r7, #2
    mvn r6, #0
@L_0214a864:
    add r0, r5, r7, lsl #2
    ldr r1, [r4, #4]
    ldrh r3, [r0, #2]
    ldr r0, [r1, r7, lsl #2]
    ldr r2, [sp, #4]
    mov r1, r6
    bl DWCi_CELLlSetPosition
    add r7, r7, #1
    cmp r7, #5
    blt @L_0214a864
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0214a894:
    mov r0, #0x68
    ldr r6, =data_ov016_02154e2e
    str r0, [sp, #4]
    mov r8, #2
    mvn r7, #0
@L_0214a8a8:
    add r0, r6, r8, lsl #2
    ldr r1, [r5, #4]
    ldrh r3, [r0, #2]
    ldr r0, [r1, r8, lsl #2]
    ldr r2, [sp, #4]
    mov r1, r7
    bl DWCi_CELLlSetPosition
    add r8, r8, #1
    cmp r8, #5
    blt @L_0214a8a8
    ldr r1, =taskBegin3
    mov r0, r4
    bl DWCi_TSKlChangeFunc
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void taskBegin3(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #8
    ldr r5, =data_ov016_02158b2c
    mov r4, r0
    ldr r0, [r5, #4]
    add r2, sp, #4
    ldr r0, [r0, #0xc]
    add r3, sp, #0
    mov r1, #0
    bl DWCi_CELLlGetPosition
    ldr r0, [sp, #4]
    add r0, r0, #8
    str r0, [sp, #4]
    cmp r0, #0x98
    blt @L_0214a934
    cmp r0, #0x100
    ble @L_0214a974
@L_0214a934:
    ldr r5, =data_ov016_02154e2e
    ldr r4, =data_ov016_02158b2c
    mov r7, #3
    mvn r6, #0
@L_0214a944:
    add r0, r5, r7, lsl #2
    ldr r1, [r4, #4]
    ldrh r3, [r0, #2]
    ldr r0, [r1, r7, lsl #2]
    ldr r2, [sp, #4]
    mov r1, r6
    bl DWCi_CELLlSetPosition
    add r7, r7, #1
    cmp r7, #5
    blt @L_0214a944
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0214a974:
    mov r0, #0x98
    ldr r6, =data_ov016_02154e2e
    str r0, [sp, #4]
    mov r8, #3
    mvn r7, #0
@L_0214a988:
    add r0, r6, r8, lsl #2
    ldr r1, [r5, #4]
    ldrh r3, [r0, #2]
    ldr r0, [r1, r8, lsl #2]
    ldr r2, [sp, #4]
    mov r1, r7
    bl DWCi_CELLlSetPosition
    add r8, r8, #1
    cmp r8, #5
    blt @L_0214a988
    ldr r1, =taskBegin4
    mov r0, r4
    bl DWCi_TSKlChangeFunc
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" void taskBegin4(s32 arg0)
{
    s32 x;
    s32 y;
    u8 *d = (u8 *)data_ov016_02158b2c;
    ((s32 (*)(...))DWCi_CELLlGetPosition)(*(s32 *)(*(u8 **)(d + 4) + 0x10), 0, &x, &y);
    x += 8;
    if (x < 0xB0 || x > 0x100) {
        ((s32 (*)(...))DWCi_CELLlSetPosition)(*(s32 *)(*(u8 **)((u8 *)data_ov016_02158b2c + 4) + 0x10), -1, x, 0x21);
        return;
    }
    x = 0xB0;
    ((s32 (*)(...))DWCi_CELLlSetPosition)(*(s32 *)(*(u8 **)(d + 4) + 0x10), x - 0xB1, x, 0x21);
    ((s32 (*)(...))DWCi_TSKlChangeFunc)(arg0, taskBegin5);
}

extern "C" s32 taskBegin5(s32 arg0)
{
    DWCi_TSKlDelete(0, arg0);
    u8 *t0 = (u8 *)*(s32 *)(data_ov016_02158b2c + 0x4);
    *(s32 *)(t0 + 0x14) = 0;
    return (s32)t0;
}

extern "C" void DWCi_STEPlEnd(void)
{
    *(u8 *)(*(u8 * *)(data_ov016_02158b2c + 0x4) + 0x18) = 1;
    s32 v0 = DWCi_TSKlForm(0, (s32)taskEnd0_3, 0, 0x78);
    *(s32 *)(*(u8 * *)(data_ov016_02158b2c + 0x4) + 0x14) = v0;
}

extern "C" void DWCi_STEPlChange(s32 arg0)
{
    s32 i;
    for (i = 0; i < 5; i += 2) {
        ((s32 (*)(...))DWCi_CEINlSet)(1, ((u8 (*)[5])data_ov016_02154e10)[arg0][i], ((s32 (*)(...))DWCi_CELLlGetObj)((*(s32 **)((u8 *)data_ov016_02158b2c + 4))[i], 0));
        ((s32 (*)(...))DWCi_CELLlSetPriority)((*(s32 **)((u8 *)data_ov016_02158b2c + 4))[i], -1, 0);
        ((s32 (*)(...))DWCi_CELLlSetPosition)((*(s32 **)((u8 *)data_ov016_02158b2c + 4))[i], -1, ((P0214aad0 *)data_ov016_02154e2e)[i].x, ((P0214aad0 *)data_ov016_02154e2e)[i].y);
        ((s32 (*)(...))DWCi_CELLlSetPalette)((*(s32 **)((u8 *)data_ov016_02158b2c + 4))[i], -1, 0, ((u8 (*)[5])data_ov016_02154e1f)[arg0][i]);
    }
    ((s32 (*)(...))DWCi_STEPlChangeScr)(arg0);
}

extern "C" s32 DWCi_STEPlGet(void)
{
    return (*(s32 *)(*(u8 * *)(data_ov016_02158b2c + 0x4) + 0x14) != 0 ? 1 : 0);
}

extern "C" void taskEnd0_3(s32 arg0)
{
    s32 x;
    s32 y;
    ((s32 (*)(...))DWCi_CELLlGetPosition)(*(s32 *)(*(u8 **)(((u8 *)data_ov016_02158b2c) + 4) + 0x10), 0, &x, &y);
    x -= 8;
    if (x > 0x98) {
        ((s32 (*)(...))DWCi_CELLlSetPosition)(*(s32 *)(*(u8 **)(((u8 *)data_ov016_02158b2c) + 4) + 0x10), 0 - 1, x, 0x21);
    } else {
        x = 0x98;
        ((s32 (*)(...))DWCi_CELLlSetPosition)(*(s32 *)(*(u8 **)(((u8 *)data_ov016_02158b2c) + 4) + 0x10), x - 0x99, x, 0x21);
        ((s32 (*)(...))DWCi_TSKlChangeFunc)(arg0, taskEnd1_4);
    }
}

extern "C" asm void taskEnd1_4(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #8
    ldr r5, =data_ov016_02158b2c
    mov r4, r0
    ldr r0, [r5, #4]
    add r2, sp, #4
    ldr r0, [r0, #0xc]
    add r3, sp, #0
    mov r1, #0
    bl DWCi_CELLlGetPosition
    ldr r0, [sp, #4]
    sub r0, r0, #8
    str r0, [sp, #4]
    cmp r0, #0x68
    ble @L_0214acc0
    ldr r4, =data_ov016_02154e2e
    mov r7, #3
    mvn r6, #0
@L_0214ac90:
    add r0, r4, r7, lsl #2
    ldr r1, [r5, #4]
    ldrh r3, [r0, #2]
    ldr r0, [r1, r7, lsl #2]
    ldr r2, [sp, #4]
    mov r1, r6
    bl DWCi_CELLlSetPosition
    add r7, r7, #1
    cmp r7, #5
    blt @L_0214ac90
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0214acc0:
    mov r0, #0x68
    ldr r6, =data_ov016_02154e2e
    str r0, [sp, #4]
    mov r8, #3
    mvn r7, #0
@L_0214acd4:
    add r0, r6, r8, lsl #2
    ldr r1, [r5, #4]
    ldrh r3, [r0, #2]
    ldr r0, [r1, r8, lsl #2]
    ldr r2, [sp, #4]
    mov r1, r7
    bl DWCi_CELLlSetPosition
    add r8, r8, #1
    cmp r8, #5
    blt @L_0214acd4
    ldr r1, =taskEnd2_3
    mov r0, r4
    bl DWCi_TSKlChangeFunc
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void taskEnd2_3(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #8
    ldr r5, =data_ov016_02158b2c
    mov r4, r0
    ldr r0, [r5, #4]
    add r2, sp, #4
    ldr r0, [r0, #8]
    add r3, sp, #0
    mov r1, #0
    bl DWCi_CELLlGetPosition
    ldr r0, [sp, #4]
    sub r0, r0, #8
    str r0, [sp, #4]
    cmp r0, #0x50
    ble @L_0214ad94
    ldr r4, =data_ov016_02154e2e
    mov r7, #2
    mvn r6, #0
@L_0214ad64:
    add r0, r4, r7, lsl #2
    ldr r1, [r5, #4]
    ldrh r3, [r0, #2]
    ldr r0, [r1, r7, lsl #2]
    ldr r2, [sp, #4]
    mov r1, r6
    bl DWCi_CELLlSetPosition
    add r7, r7, #1
    cmp r7, #5
    blt @L_0214ad64
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0214ad94:
    mov r0, #0x50
    ldr r6, =data_ov016_02154e2e
    str r0, [sp, #4]
    mov r8, #2
    mvn r7, #0
@L_0214ada8:
    add r0, r6, r8, lsl #2
    ldr r1, [r5, #4]
    ldrh r3, [r0, #2]
    ldr r0, [r1, r8, lsl #2]
    ldr r2, [sp, #4]
    mov r1, r7
    bl DWCi_CELLlSetPosition
    add r8, r8, #1
    cmp r8, #5
    blt @L_0214ada8
    ldr r1, =taskEnd3_3
    mov r0, r4
    bl DWCi_TSKlChangeFunc
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void taskEnd3_3(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #8
    ldr r5, =data_ov016_02158b2c
    mov r4, r0
    ldr r0, [r5, #4]
    add r2, sp, #4
    ldr r0, [r0, #4]
    add r3, sp, #0
    mov r1, #0
    bl DWCi_CELLlGetPosition
    ldr r0, [sp, #4]
    sub r0, r0, #8
    str r0, [sp, #4]
    cmp r0, #0x20
    ble @L_0214ae68
    ldr r4, =data_ov016_02154e2e
    mov r7, #1
    mvn r6, #0
@L_0214ae38:
    add r0, r4, r7, lsl #2
    ldr r1, [r5, #4]
    ldrh r3, [r0, #2]
    ldr r0, [r1, r7, lsl #2]
    ldr r2, [sp, #4]
    mov r1, r6
    bl DWCi_CELLlSetPosition
    add r7, r7, #1
    cmp r7, #5
    blt @L_0214ae38
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0214ae68:
    mov r0, #0x20
    ldr r6, =data_ov016_02154e2e
    str r0, [sp, #4]
    mov r8, #1
    mvn r7, #0
@L_0214ae7c:
    add r0, r6, r8, lsl #2
    ldr r1, [r5, #4]
    ldrh r3, [r0, #2]
    ldr r0, [r1, r8, lsl #2]
    ldr r2, [sp, #4]
    mov r1, r7
    bl DWCi_CELLlSetPosition
    add r8, r8, #1
    cmp r8, #5
    blt @L_0214ae7c
    ldr r1, =taskEnd4_3
    mov r0, r4
    bl DWCi_TSKlChangeFunc
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void taskEnd4_3(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #8
    ldr r6, =data_ov016_02158b2c
    mov r4, #0
    ldr r1, [r6, #4]
    mov r5, r0
    ldr r0, [r1]
    add r2, sp, #4
    add r3, sp, #0
    mov r1, r4
    bl DWCi_CELLlGetPosition
    ldr r0, [sp, #4]
    ldr r7, =data_ov016_02154e2e
    sub r0, r0, #8
    str r0, [sp, #4]
    mvn r8, #0
@L_0214af04:
    add r0, r7, r4, lsl #2
    ldr r1, [r6, #4]
    ldrh r3, [r0, #2]
    ldr r0, [r1, r4, lsl #2]
    ldr r2, [sp, #4]
    mov r1, r8
    bl DWCi_CELLlSetPosition
    add r4, r4, #1
    cmp r4, #5
    blt @L_0214af04
    ldr r1, [sp, #4]
    ldr r0, =0x1d6
    cmp r1, r0
    addgt sp, sp, #8
    ldmgtia sp!, {r4, r5, r6, r7, r8, pc}
    cmp r1, #0x100
    addlt sp, sp, #8
    ldmltia sp!, {r4, r5, r6, r7, r8, pc}
    mov r6, #0
    mov r0, r6
    mov r1, r5
    bl DWCi_TSKlDelete
    ldr r4, =data_ov016_02158b2c
@L_0214af60:
    ldr r0, [r4, #4]
    ldr r0, [r0, r6, lsl #2]
    bl DWCi_CELLlDelete
    add r6, r6, #1
    cmp r6, #5
    blt @L_0214af60
    ldr r0, =data_ov016_02158b30
    bl DWCi_HEAPlFree_
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" s32 DWCi_STEPlIsEnd(void)
{
    u8 *r0;
    r0 = (u8 *)*(s32 *)(data_ov016_02158b2c + 0x4);
    if ((s32)r0 == 0) {
        return 1;
    } else {
        if (*(u8 *)(r0 + 0x18) == 0) {
            r0 = (u8 *)1;
        } else {
            r0 = (u8 *)0;
        }
        return (s32)r0;
    }
}

extern "C" s32 DWCi_STEPlChangeScr(s32 arg0)
{
    s32 v0;
    s32 v1;
    s32 v2;
    s32 t0;
    t0 = *(s32 *)(data_ov016_02155e40 + (arg0 << 2));
    v0 = DWCi_Char(t0, (s32)data_ov016_02155e40);
    v1 = DWCi_ARClReadEx(v0, 0, 4);
    *(s32 *)(data_ov016_02158b2c) = v1;
    v2 = DWCi_TSKlForm(1, (s32)taskChange, 0, 0x78);
    return v2;
}

extern "C" void taskChange(s32 arg0)
{
    DC_FlushRange(*(s32 *)(data_ov016_02158b2c), 0x600);
    GXS_LoadBG1Scr(*(s32 *)(data_ov016_02158b2c), 0, 0x600);
    DWCi_ARClRelease(*(s32 *)(data_ov016_02158b2c));
    DWCi_TSKlDelete(1, arg0);
}

extern "C" asm void DWCi_USBAPlBegin(void)
{
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0x54
    mov r4, r0
    ldr r0, =0x1ba0
    mov r1, #0x20
    bl DWCi_HEAPlAllocEx
    ldr r5, =data_ov016_02158b34
    add r1, r0, #0x1000
    str r0, [r5]
    str r4, [r1, #0x370]
    bl OS_GetTick
    ldr r3, [r5]
    mov r2, #3
    add r3, r3, #0x1000
    str r0, [r3, #0xb88]
    str r1, [r3, #0xb8c]
    ldr r0, [r5]
    ldr r1, =cbWm
    bl func_020136b4
    cmp r0, #2
    bne @L_0214b19c
@L_0214b0ac:
    ldr r0, [r5]
    add r0, r0, #0x3b8
    add r0, r0, #0x1000
    bl WM_ReadStatus
    ldr r4, [r5]
    add r0, r4, #0x1300
    ldrh r0, [r0, #0xb8]
    cmp r0, #2
    bne @L_0214b0ac
    add r0, r4, #0x374
    ldr lr, =data_ov016_02154e54
    add r12, r0, #0x1000
    mov r5, #4
@L_0214b0e0:
    ldmia lr!, {r0, r1, r2, r3}
    stmia r12!, {r0, r1, r2, r3}
    subs r5, r5, #1
    bne @L_0214b0e0
    ldr r0, [lr]
    add r1, r4, #0xf00
    str r0, [r12]
    add r0, r4, #0x1000
    str r1, [r0, #0x374]
    bl WM_GetDispersionScanPeriod
    ldr r5, =data_ov016_02158b34
    ldr r1, [r5]
    add r1, r1, #0x1300
    strh r0, [r1, #0x7c]
    add r0, sp, #0
    bl OS_GetOwnerInfo
    ldr r1, [r5]
    ldr r0, =data_ov016_02154e4a
    add r1, r1, #0x388
    add r1, r1, #0x1000
    mov r2, #8
    bl MI_CpuCopy8
    ldr r0, [r5]
    mov r4, #1
    add r0, r0, #0x1000
    strb r4, [r0, #0x391]
    ldr r0, [r5]
    ldrh r2, [sp, #0x1a]
    add r1, r0, #0x394
    add r0, sp, #4
    add r1, r1, #0x1000
    mov r2, r2, lsl #1
    bl MI_CpuCopy8
    bl startScan_2
    cmp r0, #0
    beq @L_0214b19c
    mov r0, #0
    ldr r1, =taskFirst
    mov r2, r0
    mov r3, #0x78
    bl DWCi_TSKlForm
    ldr r1, [r5]
    add sp, sp, #0x54
    add r1, r1, #0x1000
    str r0, [r1, #0xb90]
    mov r0, r4
    ldmia sp!, {r4, r5, pc}
@L_0214b19c:
    ldr r0, =data_ov016_02158b34_b
    bl DWCi_HEAPlFree_
    mov r0, #0
    add sp, sp, #0x54
    ldmia sp!, {r4, r5, pc}
}

extern "C" s32 startScan_2(void)
{
    s32 v0 = WM_StartScanEx((s32)cbWm, ((*(s32 *)(data_ov016_02158b34) + 0x374) + 0x1000));
    return (v0 == 2 ? 1 : 0);
}

extern "C" asm void DWCi_USBAPlEnd(void)
{
    stmdb sp!, {r4, lr}
    ldr r4, =data_ov016_02158b34
    mov r1, #1
    ldr r0, [r4]
    add r0, r0, #0x1000
    strb r1, [r0, #0xb94]
    ldr r0, [r4]
    add r0, r0, #0x3b8
    add r0, r0, #0x1000
    bl WM_ReadStatus
    ldr r0, [r4]
    add r0, r0, #0x1300
    ldrh r0, [r0, #0xb8]
    cmp r0, #2
    beq @L_0214b274
    ldr r0, =cbWm
    bl WM_Reset
    cmp r0, #2
    movne r0, #0
    ldmneia sp!, {r4, pc}
@L_0214b250:
    ldr r0, [r4]
    add r0, r0, #0x3b8
    add r0, r0, #0x1000
    bl WM_ReadStatus
    ldr r0, [r4]
    add r0, r0, #0x1300
    ldrh r0, [r0, #0xb8]
    cmp r0, #2
    bne @L_0214b250
@L_0214b274:
    ldr r0, =cbWm
    bl WM_End
    cmp r0, #2
    movne r0, #0
    ldmneia sp!, {r4, pc}
    ldr r0, =data_ov016_02158b34
    ldr r0, [r0]
    add r0, r0, #0x1000
    ldr r1, [r0, #0xb90]
    cmp r1, #0
    beq @L_0214b2a8
    mov r0, #0
    bl DWCi_TSKlDeleteEx
@L_0214b2a8:
    ldr r0, =data_ov016_02158b34
    ldr r0, [r0]
    add r0, r0, #0x1000
@L_0214b2b4:
    ldrb r1, [r0, #0xb94]
    cmp r1, #2
    bne @L_0214b2b4
    ldr r0, =data_ov016_02158b34_b
    bl DWCi_HEAPlFree_
    mov r0, #1
    ldmia sp!, {r4, pc}
}

extern "C" void DWCi_USBAPlSetCallback(s32 arg0)
{
    *(s32 *)(((u8 *)(*(s32 *)(data_ov016_02158b34) + 0x1000)) + 0x370) = arg0;
}

extern "C" asm void cbWm(void)
{
    stmdb sp!, {r3, lr}
    ldrh r1, [r0, #2]
    cmp r1, #0
    ldmneia sp!, {r3, pc}
    ldr r1, =data_ov016_02158b34
    ldr r1, [r1]
    add r1, r1, #0x1000
    ldrb r2, [r1, #0xb94]
    cmp r2, #0
    beq @L_0214b334
    ldrh r0, [r0]
    cmp r0, #2
    ldmneia sp!, {r3, pc}
    mov r0, #2
    strb r0, [r1, #0xb94]
    ldmia sp!, {r3, pc}
@L_0214b334:
    ldrh r2, [r0]
    cmp r2, #0x26
    ldmneia sp!, {r3, pc}
    ldrh r2, [r0, #8]
    cmp r2, #4
    beq @L_0214b374
    cmp r2, #5
    bne @L_0214b37c
    ldrb r1, [r1, #0xb96]
    cmp r1, #0
    beq @L_0214b368
    bl scanWait
    b @L_0214b36c
@L_0214b368:
    bl scanFirst
@L_0214b36c:
    bl startScan_2
    ldmia sp!, {r3, pc}
@L_0214b374:
    bl startScan_2
    ldmia sp!, {r3, pc}
@L_0214b37c:
    bl OS_Terminate
    ldmia sp!, {r3, pc}
}

extern "C" asm void scanFirst(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    str r0, [sp]
    ldrh r0, [r0, #0xe]
    mov r11, #0
    cmp r0, #0
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0214b3a0:
    ldr r0, [sp]
    mov r1, #0xc0
    add r0, r0, r11, lsl #2
    ldr r7, [r0, #0x10]
    mov r0, r7
    bl DC_InvalidateRange
    ldr r1, =data_ov016_02154e4a
    add r0, r7, #0xc
    mov r2, #8
    bl memcmp
    cmp r0, #0
    bne @L_0214b4bc
    ldr r0, =data_ov016_02158b34
    mov r6, #0
    ldr r8, [r0]
    mov r4, #6
    add r5, r8, #0x1300
@L_0214b3e4:
    rsb r9, r6, r6, lsl #3
    mov r2, r4
    add r0, r7, #4
    add r1, r5, r9
    bl memcmp
    cmp r0, #0
    bne @L_0214b43c
    add r0, r8, r9
    add r0, r0, #0x1000
    ldrb r0, [r0, #0x306]
    cmp r0, #0
    bne @L_0214b4bc
    ldrb r0, [r7, #0x15]
    tst r0, #1
    beq @L_0214b4bc
    add r0, r8, #0x1000
    ldr r1, [r0, #0x370]
    cmp r1, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, #1
    blx r1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0214b43c:
    add r6, r6, #1
    cmp r6, #0x10
    blt @L_0214b3e4
    ldr r5, =data_ov016_02154e44
    mov r10, #0
    add r6, r8, #0x1300
    mov r4, #6
@L_0214b458:
    rsb r9, r10, r10, lsl #3
    mov r1, r5
    mov r2, r4
    add r0, r6, r9
    bl memcmp
    cmp r0, #0
    bne @L_0214b4b0
    add r1, r8, #0x1300
    mov r2, r4
    add r0, r7, #4
    add r1, r1, r9
    bl MI_CpuCopy8
    ldrb r0, [r7, #0x15]
    tst r0, #1
    ldr r0, =data_ov016_02158b34
    movne r1, #1
    ldr r0, [r0]
    moveq r1, #0
    add r0, r0, r9
    add r0, r0, #0x1000
    strb r1, [r0, #0x306]
    b @L_0214b4bc
@L_0214b4b0:
    add r10, r10, #1
    cmp r10, #0x10
    blt @L_0214b458
@L_0214b4bc:
    ldr r0, [sp]
    add r11, r11, #1
    ldrh r0, [r0, #0xe]
    cmp r11, r0
    blt @L_0214b3a0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void scanWait(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    ldr r4, =data_ov016_02158b34
    mov r11, r0
    ldr r2, [r4]
    add r1, r2, #0x1000
    ldrb r0, [r1, #0xb95]
    cmp r0, #0
    beq @L_0214b514
    ldr r1, [r1, #0x370]
    cmp r1, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    blx r1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0214b514:
    add r0, r2, #0xf00
    mov r1, #0x400
    bl DC_InvalidateRange
    ldrh r0, [r11, #0xe]
    mov r7, #0
    str r0, [sp]
    cmp r0, #0
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r10, [r4]
    mov r4, #6
    add r5, r10, #0x1300
@L_0214b540:
    add r0, r11, r7, lsl #2
    ldr r6, [r0, #0x10]
    ldr r1, =data_ov016_02154e4a
    mov r2, #8
    add r0, r6, #0xc
    bl memcmp
    cmp r0, #0
    bne @L_0214b5d0
    ldrb r0, [r6, #0x15]
    tst r0, #1
    beq @L_0214b5d0
    mov r8, #0
@L_0214b570:
    rsb r9, r8, r8, lsl #3
    mov r2, r4
    add r0, r6, #4
    add r1, r5, r9
    bl memcmp
    cmp r0, #0
    bne @L_0214b5c4
    add r0, r10, r9
    add r0, r0, #0x1000
    ldrb r0, [r0, #0x306]
    cmp r0, #0
    bne @L_0214b5d0
    add r0, r10, #0x1000
    ldr r1, [r0, #0x370]
    cmp r1, #0
    moveq r1, #1
    streqb r1, [r0, #0xb95]
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, #1
    blx r1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0214b5c4:
    add r8, r8, #1
    cmp r8, #0x10
    blt @L_0214b570
@L_0214b5d0:
    ldr r0, [sp]
    add r7, r7, #1
    cmp r7, r0
    blt @L_0214b540
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void taskFirst(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    str r0, [sp]
    bl OS_GetTick
    ldr r2, =data_ov016_02158b34
    ldr r3, =0x17f898
    ldr r10, [r2]
    mov r8, #0
    add r2, r10, #0x1000
    ldr r4, [r2, #0xb88]
    ldr r5, [r2, #0xb8c]
    adds r3, r4, r3
    adc r2, r5, #0
    cmp r1, r2
    cmpeq r0, r3
    ldmloia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r4, =data_ov016_02154e44
    mov r7, r8
    mov r6, r8
    add r5, r10, #0x1300
    mov r11, #6
@L_0214b63c:
    rsb r9, r6, r6, lsl #3
    mov r1, r4
    mov r2, r11
    add r0, r5, r9
    bl memcmp
    cmp r0, #0
    beq @L_0214b670
    add r0, r10, r9
    add r0, r0, #0x1000
    ldrb r0, [r0, #0x306]
    cmp r0, #0
    movne r7, #1
    moveq r8, #1
@L_0214b670:
    add r6, r6, #1
    cmp r6, #0x10
    blt @L_0214b63c
    cmp r7, #0
    cmpne r8, #0
    beq @L_0214b6a0
    add r0, r10, #0x1000
    ldr r1, [r0, #0x370]
    cmp r1, #0
    beq @L_0214b6e0
    mov r0, #2
    b @L_0214b6dc
@L_0214b6a0:
    cmp r7, #0
    beq @L_0214b6c0
    add r0, r10, #0x1000
    ldr r1, [r0, #0x370]
    cmp r1, #0
    beq @L_0214b6e0
    mov r0, #1
    b @L_0214b6dc
@L_0214b6c0:
    cmp r8, #0
    bne @L_0214b6e0
    add r0, r10, #0x1000
    ldr r1, [r0, #0x370]
    cmp r1, #0
    beq @L_0214b6e0
    mov r0, #0
@L_0214b6dc:
    blx r1
@L_0214b6e0:
    ldr r3, =data_ov016_02158b34
    mov r0, #0
    ldr r2, [r3]
    ldr r1, [sp]
    add r2, r2, #0x1000
    str r0, [r2, #0xb90]
    ldr r2, [r3]
    mov r3, #1
    add r2, r2, #0x1000
    strb r3, [r2, #0xb96]
    bl DWCi_TSKlDelete
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void DWCi_WINlInitEx(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x24
    ldr r5, =data_ov016_02154f54
    ldr r4, =DWCiMsgCmn
    ldrb r10, [r5]
    ldrb r9, [r5, #1]
    ldrb r8, [r5, #2]
    ldrb r7, [r5, #3]
    ldrb r6, [r5, #4]
    ldrb r5, [r5, #5]
    strb r10, [sp, #0x1c]
    mov r11, r0
    str r2, [sp, #0x10]
    mov r2, r3
    mov r10, r1
    ldr r0, [r4]
    ldr r3, [sp, #0x48]
    mov r1, r11
    strb r9, [sp, #0x1d]
    strb r8, [sp, #0x1e]
    strb r7, [sp, #0x1f]
    strb r6, [sp, #0x20]
    strb r5, [sp, #0x21]
    bl DWCi_MSGlGetEx
    mov r4, #4
    str r0, [sp, #0x14]
    mov r1, r4
    mov r0, #0x20
    bl DWCi_HEAPlAllocEx
    sub r3, r4, #6
    ldr r4, =data_ov016_02158b38
    mov r9, #0
    str r0, [r4]
    strb r10, [r0, #0x1c]
    ldr r2, [r4]
    ldr r0, =0x4000050
    strb r3, [r2, #0x1b]
    ldr r3, [r4]
    ldr r2, [sp, #0x10]
    mov r1, #0x1f
    strb r2, [r3, #0x1e]
    mov r2, r9
    bl G2x_SetBlendBrightness_
    ldr r1, =data_ov016_02154e9c
    mov r0, r9
    ldrb r1, [r1, r10]
    mov r2, r9
    bl DWCi_CEINlSetExCell
    ldr r1, [r4]
    sub r8, r9, #1
    str r0, [r1]
    ldr r0, [r4]
    mov r1, r8
    ldr r0, [r0]
    mov r2, #0x100
    mov r3, r9
    bl DWCi_CELLlSetPosition
    ldr r0, [r4]
    mov r1, r8
    ldr r0, [r0]
    mov r2, r9
    bl DWCi_CELLlSetPriority
    ldr r1, =data_ov016_02154ea2
    ldrb r0, [r1, r10]
    cmp r0, #0
    ble @L_0214b894
    ldr r0, =data_ov016_02154ec4
    ldrb r5, [r1, r10]
    add r6, r0, r10, lsl #1
    mov r7, r9
    mov r11, #0x100
@L_0214b838:
    ldrb r1, [r9, r6]
    mov r0, r7
    mov r2, r7
    bl DWCi_CEINlSetExCell
    ldr r2, [r4]
    mov r1, r8
    add r2, r2, r9, lsl #2
    str r0, [r2, #8]
    ldr r0, [r4]
    mov r2, r11
    add r0, r0, r9, lsl #2
    ldr r0, [r0, #8]
    mov r3, r7
    bl DWCi_CELLlSetPosition
    ldr r0, [r4]
    mov r1, r8
    add r0, r0, r9, lsl #2
    ldr r0, [r0, #8]
    mov r2, r7
    bl DWCi_CELLlSetPriority
    add r9, r9, #1
    cmp r9, r5
    blt @L_0214b838
@L_0214b894:
    add r0, sp, #0x18
    mov r4, #1
    mov r5, #0
    str r0, [sp]
    mov r0, r5
    mov r3, r4
    mov r1, #0x20
    mov r2, #0xc
    str r5, [sp, #4]
    bl DWCi_FNTlFormEx
    ldr r6, =data_ov016_02158b38
    mov r2, r5
    ldr r1, [r6]
    str r0, [r1, #0x10]
    ldr r1, [sp, #0x18]
    mov r0, r5
    bl DWCi_CELLlForm
    ldr r1, [r6]
    str r0, [r1, #4]
    bl DWCi_CMNlFontFlag
    ldr r1, =data_ov016_02154ee4
    mov r8, r10, lsl #2
    ldrh r7, [r1, r8]
    mov r3, #2
    mov r1, r5
    str r7, [sp]
    str r3, [sp, #4]
    str r0, [sp, #8]
    ldr r0, [sp, #0x14]
    ldr r3, =data_ov016_02154ee2
    str r0, [sp, #0xc]
    ldr r0, [r6]
    ldrh r3, [r3, r8]
    ldr r0, [r0, #0x10]
    mov r2, r5
    bl DWCi_FNTlDrawRect
    ldr r2, [r6]
    mov r1, #0x100
    str r5, [sp]
    ldr r0, [r2, #0x10]
    ldr r3, [r2, #4]
    mov r2, r5
    bl DWCi_FNTlDisp
    mov r8, #0x1f
    mov r0, r5
    mov r1, r5
    mov r2, r8
    mov r3, r5
    bl DWCi_GXlSetWndPlane
    ldr r7, [r6]
    add r3, sp, #0x1c
    ldrb r7, [r7, #0x1c]
    mov r0, r5
    mov r1, r4
    ldrb r3, [r3, r7]
    mov r2, r8
    bl DWCi_GXlSetWndPlane
    mov r2, r8
    mov r0, r5
    mov r1, #3
    mov r3, r4
    bl DWCi_GXlSetWndPlane
    ldr r2, =data_ov016_02154ea8
    mov r0, r5
    mov r1, r4
    bl DWCi_GXlSetWndPosition
    mov r0, #0xc0
    bl disp_5
    mov r2, #0x4000000
    ldr r0, [sp, #0x10]
    ldr r1, [r2]
    cmp r0, #0
    bic r0, r1, #0xe000
    orr r0, r0, #0x6000
    str r0, [r2]
    mov r3, #0x78
    beq @L_0214b9e8
    ldr r1, =taskV
    mov r0, r4
    mov r2, r5
    bl DWCi_TSKlForm
    ldr r1, [r6]
    add sp, sp, #0x24
    str r0, [r1, #0x14]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0214b9e8:
    ldr r1, =taskMove
    mov r0, r4
    mov r2, r5
    bl DWCi_TSKlForm
    ldr r1, [r6]
    str r0, [r1, #0x14]
    add sp, sp, #0x24
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void DWCi_WINlEnd(void)
{
    DWCi_TSKlDelete(0, *(s32 *)(*(u8 * *)(data_ov016_02158b38) + 0x14));
    s32 v1 = DWCi_TSKlForm(1, (s32)taskEnd_3, 0, 0x78);
    *(s32 *)(*(u8 * *)(data_ov016_02158b38) + 0x14) = v1;
}

extern "C" s8 DWCi_WINlGet(void)
{
    return *(s8 *)(*(u8 * *)(data_ov016_02158b38) + 0x1B);
}

extern "C" s32 DWCi_WINlIsInit(void)
{
    return (*(s32 *)(data_ov016_02158b38) != 0 ? 1 : 0);
}

extern "C" void taskV(s32 arg0)
{
    s32 t0 = (*(s8 *)(*(u8 * *)(((u8 *)&data_ov016_02158b38)) + 0x1A) - 1);
    u8 *t1 = *(u8 * *)(((u8 *)&data_ov016_02158b38));
    *(u8 *)(t1 + 0x1A) = t0;
    s8 t2 = *(s8 *)(*(u8 * *)(((u8 *)&data_ov016_02158b38)) + 0x1A);
    G2x_ChangeBlendBrightness_(0x4000050, t2);
    if (*(s8 *)(*(u8 * *)(((u8 *)&data_ov016_02158b38)) + 0x1A) > -0xC)
        return;
    DWCi_TSKlChangeFunc(arg0, (s32)((u8 *)&taskMove));
}

extern "C" void taskMove(s32 arg0)
{
    s32 a;
    s32 b;
    s32 lim;
    ((s32 (*)(...))DWCi_CELLlGetPosition)(**(s32 **)data_ov016_02158b38, 0, &a, &b);
    b -= 0xC;
    lim = *(u16 *)((u8 *)data_ov016_02154efc + ((*(u8 **)data_ov016_02158b38)[0x1C] << 2));
    if (b > lim) {
        ((s32 (*)(...))disp_5)(b);
        return;
    }
    ((s32 (*)(...))disp_5)(lim);
    if ((*(u8 **)data_ov016_02158b38)[0x1C] == 5)
        *(s32 *)(*(u8 **)data_ov016_02158b38 + 0x14) = ((s32 (*)(...))DWCi_TSKlForm)(0, taskMain1, 0, 0x78);
    else
        *(s32 *)(*(u8 **)data_ov016_02158b38 + 0x14) = ((s32 (*)(...))DWCi_TSKlForm)(0, taskMain_4, 0, 0x78);
    ((s32 (*)(...))DWCi_TSKlDelete)(1, arg0);
}

extern "C" asm void taskMain_4(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #8
    ldr r4, =data_ov016_02158b38
    ldr r9, =data_ov016_02154ea2
    ldr r0, [r4]
    mov r10, #0
    ldrb r1, [r0, #0x1c]
    ldrb r0, [r9, r1]
    cmp r0, #0
    ble @L_0214bc4c
    ldr r8, =data_ov016_02154f2a
    ldr r7, =data_ov016_02154eb0
    ldr r6, =data_ov016_02154ece
    add r5, sp, #0
@L_0214bbfc:
    add r0, r7, r1, lsl #1
    ldrb r0, [r10, r0]
    add r3, r8, r1, lsl #3
    mov r2, r5
    add r0, r3, r0, lsl #2
    add r1, r6, r1, lsl #2
    bl DWCi_Coord2Rect
    mov r0, r5
    bl DWCi_TPlCheckTrigger
    cmp r0, #0
    ldrne r0, =data_ov016_02158b38
    ldrne r0, [r0]
    strneb r10, [r0, #0x1b]
    bne @L_0214bc4c
    ldr r0, [r4]
    add r10, r10, #1
    ldrb r1, [r0, #0x1c]
    ldrb r0, [r9, r1]
    cmp r10, r0
    blt @L_0214bbfc
@L_0214bc4c:
    mov r0, #1
    bl DWCi_IPTlCheckTrigger
    cmp r0, #0
    beq @L_0214bc74
    ldr r2, [r4]
    ldr r0, =data_ov016_02154eba
    ldrb r1, [r2, #0x1c]
    mov r1, r1, lsl #1
    ldrsb r0, [r0, r1]
    strb r0, [r2, #0x1b]
@L_0214bc74:
    mov r0, #2
    bl DWCi_IPTlCheckTrigger
    cmp r0, #0
    beq @L_0214bc9c
    ldr r2, [r4]
    ldr r0, =data_ov016_02154ebb
    ldrb r1, [r2, #0x1c]
    mov r1, r1, lsl #1
    ldrsb r0, [r0, r1]
    strb r0, [r2, #0x1b]
@L_0214bc9c:
    ldr r4, [r4]
    ldr r2, =data_ov016_02154ea2
    ldrb r1, [r4, #0x1c]
    mov r0, #0
    ldrb r1, [r2, r1]
    cmp r1, #0
    ble @L_0214bce4
    ldrsb r3, [r4, #0x1b]
@L_0214bcbc:
    cmp r0, r3
    bne @L_0214bcd0
    bl pushButton
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_0214bcd0:
    ldrb r1, [r4, #0x1c]
    add r0, r0, #1
    ldrb r1, [r2, r1]
    cmp r0, r1
    blt @L_0214bcbc
@L_0214bce4:
    mvn r0, #0
    strb r0, [r4, #0x1b]
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" void taskMain1(s32 arg0)
{
    S0214bd10 **p = (S0214bd10 **)data_ov016_02158b38;
    s32 z;
    (*p)->x1b = -1;
    (*p)->x18++;
    if ((*p)->x18 < 0x78)
        return;
    z = 0;
    ((s32 (*)(...))DWCi_TSKlDelete)(z, arg0);
    (*p)->x14 = ((s32 (*)(...))DWCi_TSKlForm)(1, taskEnd_3, z, 0x78);
}

extern "C" asm void disp_5(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    ldr r4, =data_ov016_02158b38
    mov r10, r0
    ldr r0, [r4]
    mvn r8, #0
    ldrb r1, [r0, #0x1c]
    ldr r7, =data_ov016_02154efa
    ldr r0, [r0]
    mov r1, r1, lsl #2
    ldrh r2, [r7, r1]
    mov r1, r8
    mov r3, r10
    bl DWCi_CELLlSetPosition
    ldr r0, [r4]
    mov r1, r8
    ldrb r2, [r0, #0x1c]
    ldr r0, [r0, #4]
    add r3, r10, #8
    mov r2, r2, lsl #2
    ldrh r2, [r7, r2]
    add r2, r2, #8
    bl DWCi_CELLlSetPosition
    ldr r0, [r4]
    mov r1, r10
    ldr r0, [r0]
    bl dispCell
    ldr r0, [r4]
    mov r1, r10
    ldr r0, [r0, #4]
    bl dispCell
    ldr r0, [r4]
    mov r9, #0
    ldrb r0, [r0, #0x1c]
    ldr r6, =data_ov016_02154ea2
    ldrb r1, [r6, r0]
    cmp r1, #0
    ble @L_0214be88
    ldr r5, =data_ov016_02154eb0
    ldr r11, =data_ov016_02154f2a
@L_0214be1c:
    add r1, r5, r0, lsl #1
    ldrb r12, [r9, r1]
    add r2, r11, r0, lsl #3
    add r3, r7, r0, lsl #2
    add r0, r2, r12, lsl #2
    ldr r1, [r4]
    mov r12, r12, lsl #2
    ldrh r2, [r12, r2]
    ldrh r0, [r0, #2]
    add r1, r1, r9, lsl #2
    ldrh r3, [r3, #2]
    add r12, r10, r0
    ldr r0, [r1, #8]
    mov r1, r8
    sub r3, r12, r3
    bl DWCi_CELLlSetPosition
    ldr r0, [r4]
    mov r1, r10
    add r0, r0, r9, lsl #2
    ldr r0, [r0, #8]
    bl dispCell
    ldr r0, [r4]
    add r9, r9, #1
    ldrb r0, [r0, #0x1c]
    ldrb r1, [r6, r0]
    cmp r9, r1
    blt @L_0214be1c
@L_0214be88:
    and r1, r10, #0xff
    cmp r1, #0xc0
    movge r3, #0
    movge r1, r3
    ldrlt r2, =data_ov016_02154f14
    movlt r3, r0, lsl #2
    ldrlth r2, [r2, r3]
    ldr r4, =data_ov016_02154efa
    mov r5, r0, lsl #2
    addlt r3, r1, r2
    ldr r2, =data_ov016_02154f12
    ldrh r0, [r4, r5]
    ldrh r2, [r2, r5]
    cmp r3, #0xc0
    add r4, sp, #4
    movgt r3, #0xc0
    add r2, r0, r2
    str r4, [sp]
    bl DWCi_InputRect
    mov r0, #0
    mov r1, r0
    mov r2, r4
    bl DWCi_GXlSetWndPosition
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void dispCell(s32 arg0, s32 arg1)
{
    s32 n = ((s32 (*)(...))DWCi_CELLlGetObjNum)(arg0);
    s32 i;
    for (i = 0; i < n; i++) {
        s32 x;
        s32 y;
        s32 f;
        ((s32 (*)(...))DWCi_CELLlGetPosition)(arg0, i, &x, &y);
        if (y >= arg1 && y < 0xC0)
            f = 0;
        else
            f = 0x200;
        ((s32 (*)(...))DWCi_CELLlSetEffect)(arg0, i, f, 0);
    }
}

extern "C" asm void pushButton(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r7, =data_ov016_02158b38
    mov r5, #0
    ldr r1, [r7]
    mov r6, r0
    add r0, r1, r6, lsl #2
    ldr r0, [r0, #8]
    mov r1, r5
    bl DWCi_CELLlGetObj
    ldr r2, [r7]
    ldr r1, =data_ov016_02154ec4
    ldrb r3, [r2, #0x1c]
    mov r2, r0
    mov r0, r5
    add r1, r1, r3, lsl #1
    ldrb r1, [r6, r1]
    add r1, r1, #1
    bl DWCi_CEINlSet
    ldr r0, [r7]
    ldr r1, =data_ov016_02154eb0
    ldrb r2, [r0, #0x1c]
    add r0, r0, r6, lsl #2
    ldr r0, [r0, #8]
    add r1, r1, r2, lsl #1
    ldrb r3, [r6, r1]
    sub r4, r5, #1
    mov r1, r4
    mov lr, r3, lsl #2
    ldr r12, =data_ov016_02154f2a
    ldr r3, =data_ov016_02154f2c
    add r12, r12, r2, lsl #3
    add r3, r3, r2, lsl #3
    ldrh r2, [lr, r12]
    ldrh r3, [lr, r3]
    bl DWCi_CELLlSetPosition
    ldr r0, [r7]
    mov r1, r4
    add r0, r0, r6, lsl #2
    ldr r0, [r0, #8]
    mov r2, r5
    bl DWCi_CELLlSetPriority
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" void taskEnd_3(s32 arg0)
{
    s32 t0 = (*(u8 *)(*(u8 * *)(data_ov016_02158b38) + 0x1D) + 1);
    u8 *t1 = *(u8 * *)(data_ov016_02158b38);
    *(u8 *)(t1 + 0x1D) = t0;
    if ((u32)*(u8 *)(*(u8 * *)(data_ov016_02158b38) + 0x1D) < (u32)8)
        return;
    DWCi_TSKlChangeFunc(arg0, (s32)taskEnd1_5, t0, (s32)t1);
}
