#include "ov016/Unk_0214f17c.hpp"
struct T0214fab8 { s8 v[4]; };
struct N021512a0 { N021512a0 *a; N021512a0 *b; };

extern "C" s32 DWCi_ARClRelease(...);
extern "C" s32 cmpBack(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 DWCi_CELLlInit(void);
extern "C" s32 DWCi_CELLlEnd(void);
extern "C" s32 DWCi_CELLlForm(...);
extern "C" void DWCi_CELLlDelete(u8 *arg0);
extern "C" s32 DWCi_CELLlGetObj(u8 *arg0, s32 arg1);
extern "C" u8 DWCi_CELLlGetObjNum(u8 *arg0);
extern "C" s32 DWCi_CELLlSetEffect(...);
extern "C" s32 DWCi_CELLlSetPalette(...);
extern "C" void DWCi_CELLlSetPosition(void);
extern "C" s32 DWCi_CELLlSetPriority(...);
extern "C" s32 DWCi_CELLlGetPosition(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3);
extern "C" s32 func_ov016_0214f794(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 DWCi_CEINlRelease(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 DWCi_CEINlSet(...);
extern "C" s32 DWCi_CEINlSetExObj(s32 arg0, s32 arg1);
extern "C" s32 DWCi_CEINlSetExCell(s32 arg0, s32 arg1, s32 arg2);
extern "C" void DWCi_QUElForm(s32 arg0);
extern "C" s32 DWCi_QUElFormEx(...);
extern "C" s32 DWCi_QUElDelete(...);
extern "C" s32 DWCi_QUElPushBack(...);
extern "C" s32 DWCi_QUElPopBack(u8 *arg0);
extern "C" void func_ov016_0214fa30(void);
extern "C" void DWCi_EFFlEnd(void);
extern "C" s32 DWCi_EFFlCheck(u8 *arg0);
extern "C" s32 DWCi_EFFlFade(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void taskFade(void);
extern "C" s32 DWCi_EFFlWait(u16 arg0);
extern "C" void taskWait(s32 arg0, u8 *arg1);
extern "C" s32 DWCi_FNTlInit(void);
extern "C" s32 DWCi_FNTlEnd(void);
extern "C" void DWCi_FNTlFormEx(void);
extern "C" void DWCi_FNTlDelete(u8 *arg0);
extern "C" void DWCi_FNTlFormBgEx(void);
extern "C" s32 taskLoad_3(s32 arg0, u8 *arg1);
extern "C" s32 DWCi_FNTlDeleteBg(u8 *arg0);
extern "C" void DWCi_FNTlDeleteBgLcd(s32 arg0);
extern "C" void DWCi_FNTlDraw(void);
extern "C" void DWCi_FNTlDrawCharEx(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u16 arg4, s32 arg5);
extern "C" void DWCi_FNTlDrawStringEx(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u16 *arg5, s32 arg6);
extern "C" void DWCi_FNTlDrawRect(void);
extern "C" void DWCi_FNTlClear(u8 *arg0, s32 arg1);
extern "C" void DWCi_FNTlDisp(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern "C" void DWCi_FNTlRenewBg(u8 arg0);
extern "C" void DWCi_InputCoord(u16 arg0, u16 arg1, u8 *arg2);
extern "C" void DWCi_InputRect(u16 arg0, u16 arg1, u16 arg2, u16 arg3, u8 *arg4);
extern "C" void DWCi_Coord2Rect(void);
extern "C" void DWCi_GXlVisible(s32 arg0, u32 arg1);
extern "C" void DWCi_GXlInvisible(s32 arg0, u32 arg1);
extern "C" void DWCi_GXlSetWndPosition(void);
extern "C" void DWCi_GXlSetWndPlane(void);
extern "C" void func_ov016_02150874(s32 arg0);
extern "C" s32 DWCi_HEAPlEnd(void);
extern "C" s32 DWCi_HEAPlAlloc(...);
extern "C" s32 DWCi_HEAPlAllocEx(s32 arg0);
extern "C" s32 DWCi_HEAPlFree_(...);
extern "C" void DWCi_HEAPlFree2(s32 arg0);
extern "C" void func_ov016_021509cc(void);
extern "C" s32 DWCi_IPTlEnd(void);
extern "C" void DWCi_IPTlRead(void);
extern "C" s32 readKey(...);
extern "C" s32 readTouch(...);
extern "C" s32 DWCi_IPTlCheckTrigger(s32 arg0);
extern "C" s32 DWCi_IPTlCheckRepeat(s32 arg0);
extern "C" s32 DWCi_IPTlCheckRelease(s32 arg0);
extern "C" s32 DWCi_TPlCheck(u8 *arg0);
extern "C" s32 DWCi_TPlCheckTrigger(u8 *arg0);
extern "C" s32 DWCi_TPlCheckRepeat(u8 *arg0);
extern "C" s32 DWCi_TPlCheckRelease(u8 *arg0);
extern "C" void DWCi_TPlCheckATrigger(void);
extern "C" void DWCi_TPlGet(void);
extern "C" void func_ov016_021510dc(void);
extern "C" void func_ov016_0215118c(void);
extern "C" void DWCi_ITRlEnd(void);
extern "C" void initVBlank(void);
extern "C" void DWCi_LSTlForm(void);
extern "C" s32 DWCi_LSTlDelete(...);
extern "C" void DWCi_LSTlErase(N021512a0 *arg0);
extern "C" s32 DWCi_LSTlInsert(...);
extern "C" void DWCi_LSTlPushBack(s32 arg0);
extern "C" void DWCi_LSTlPushFront(u8 *arg0);
extern "C" s32 DWCi_OBJlInit(void);
extern "C" void taskTransfer(void);
extern "C" void DWCi_OBJlEnd(void);
extern "C" s32 DWCi_OBJlFormGx(...);
extern "C" s32 DWCi_OBJlDelete(u8 *arg0);
extern "C" s32 DWCi_OBJlGetOam(s32 arg0, s32 arg1);
extern "C" s32 DWCi_OVRlInit(void);
extern "C" void DWCi_OVRlAlloc(void);
extern "C" s32 DWCi_OVRlFree(...);
extern "C" s32 DWCi_STRlNLen(u8 *arg0, s32 arg1);
extern "C" s32 DWCi_STRlConvertStringAsciiToUnicode(u8 *arg0, u8 *arg1, s32 arg2);
extern "C" void func_ov016_02151788(void);
extern "C" s32 DWCi_RepairVram(void);
extern "C" void clearVram(void);
extern "C" s32 DWCi_SetLedWireless(void);
extern "C" void DWCi_SetLedNormal(void);
extern "C" void func_ov016_02151998(void);
extern "C" s32 DWCi_TSKlEnd(void);
extern "C" void DWCi_TSKlAct(void);
extern "C" s32 DWCi_TSKlForm(...);
extern "C" u8 *formTask(s32 arg0, s32 arg1, s32 arg2, u32 arg3, u8 arg4);
extern "C" void DWCi_TSKlChangeFunc(u8 *arg0, s32 arg1);
extern "C" s32 DWCi_TSKlDelete(...);
extern "C" void DWCi_TSKlDeleteEx(void);
extern "C" void deleteTcb(void);
extern "C" s32 DWCi_TSKlOperate(s32 arg0, u8 arg1);

extern "C" char data_ov016_02154f60[];
extern "C" char data_ov016_02154f64[];
extern "C" char data_ov016_02154f68[];
extern "C" char data_ov016_02154f6c[];
extern "C" char data_ov016_02154f70[];
extern "C" char data_ov016_02154f72[];
extern "C" char data_ov016_02154f80[];
extern "C" char data_ov016_021564d4[];
extern "C" char data_ov016_021564dc[];
extern "C" char data_ov016_02158b4c[];
extern "C" char data_ov016_02158b50[];
extern "C" char data_ov016_02158b50_b[];
extern "C" char data_ov016_02158b54[];
extern "C" char data_ov016_02158b5c[];
extern "C" char data_ov016_02158b60[];
extern "C" char data_ov016_02158b60_b[];
extern "C" char data_ov016_02158b64[];
extern "C" char data_ov016_02158b68[];
extern "C" char data_ov016_02158b6c[];
extern "C" char data_ov016_02158b70[];
extern "C" char data_ov016_02158b80[];
extern "C" char data_ov016_02158b88[];
extern "C" char data_ov016_02158b88_b[];
extern "C" char data_ov016_02158b8c[];
extern "C" char data_ov016_02158b90[];
extern "C" char data_ov016_02158bc4[];
extern "C" char data_ov016_02158bc4_b[];
extern "C" s32 DC_FlushRange(...);
extern "C" void FX_DivS32(void);
extern "C" s32 FX_ModS32(...);
extern "C" void G2S_GetBG0ScrPtr(void);
extern "C" s32 G2_GetBG0CharPtr(...);
extern "C" void G2_GetBG0ScrPtr(void);
extern "C" void G2x_ChangeBlendBrightness_(void);
extern "C" s32 GX_SetBankForSubBGExtPltt(...);
extern "C" s32 GX_SetBankForSubOBJ(...);
extern "C" s32 GX_SetBankForSubOBJExtPltt(...);
extern "C" s32 MI_CpuFill8(...);
extern "C" s32 MIi_CpuClear16(...);
extern "C" s32 MIi_CpuClearFast(...);
extern "C" void MIi_CpuCopy16(void);
extern "C" void MIi_CpuCopy32(void);
extern "C" void NNS_FndAllocFromExpHeapEx(void);
extern "C" s32 NNS_FndCreateExpHeapEx(...);
extern "C" s32 NNS_FndDestroyExpHeap(...);
extern "C" s32 NNS_FndFreeToExpHeap(...);
extern "C" void NNS_G2dCharCanvasInitForBG(void);
extern "C" void NNS_G2dFontFindGlyphIndex(void);
extern "C" void NNS_G2dFontGetCharWidthsFromIndex(void);
extern "C" s32 NNS_G2dFontInitUTF16(...);
extern "C" void NNSi_G2dTextCanvasDrawTextRect(void);
extern "C" s32 OS_DisableIrqMask(...);
extern "C" s32 OS_EnableIrqMask(...);
extern "C" s32 OS_GetIrqFunction(...);
extern "C" s32 OS_ResetRequestIrqMask(...);
extern "C" s32 OS_SetIrqFunction(...);
extern "C" s32 OS_SetIrqMask(...);
extern "C" s32 TP_WaitBusy(...);
extern "C" void GX_DispOff(void);
extern "C" void GX_DispOn(void);
extern "C" s32 G2x_SetBlendBrightness_(...);
extern "C" s32 GX_LoadOAM(...);
extern "C" s32 GXS_LoadOAM(...);
extern "C" s32 GX_LoadBG0Char(...);
extern "C" s32 GXS_LoadBG0Char(...);
extern "C" s32 GX_SetBankForBG(...);
extern "C" s32 GX_SetBankForOBJ(...);
extern "C" s32 GX_SetBankForBGExtPltt(...);
extern "C" s32 GX_SetBankForOBJExtPltt(...);
extern "C" s32 GX_SetBankForTex(...);
extern "C" s32 GX_SetBankForTexPltt(...);
extern "C" s32 GX_SetBankForClearImage(...);
extern "C" s32 GX_SetBankForARM7(...);
extern "C" s32 GX_SetBankForLCDC(...);
extern "C" s32 GX_SetBankForSubBG(...);
extern "C" s32 GX_DisableBankForBG(...);
extern "C" s32 GX_DisableBankForOBJ(...);
extern "C" s32 func_02004eb4(...);
extern "C" s32 GX_DisableBankForOBJExtPltt(...);
extern "C" s32 func_02004efc(...);
extern "C" s32 func_02004f10(...);
extern "C" s32 func_02004f24(...);
extern "C" s32 func_02004f38(...);
extern "C" s32 GX_DisableBankForLCDC(...);
extern "C" s32 GX_DisableBankForSubBG(...);
extern "C" s32 GX_DisableBankForSubOBJ(...);
extern "C" s32 func_02004f88(...);
extern "C" s32 GX_DisableBankForSubOBJExtPltt(...);
extern "C" s32 OS_EnableInterrupts(...);
extern "C" void OS_WaitVBlankIntr(void);
extern "C" s32 OS_Terminate(...);
extern "C" void MIi_CpuClear32(void);
extern "C" void TP_GetUserInfo(void);
extern "C" void TP_SetCalibrateParam(void);
extern "C" void TP_RequestAutoSamplingStartAsync(void);
extern "C" s32 TP_RequestAutoSamplingStopAsync(...);
extern "C" void TP_GetLatestIndexInAuto(void);
extern "C" void TP_GetCalibratedPoint(void);
extern "C" s32 TP_CheckError(...);
extern "C" void PM_SetLCDPower(void);
extern "C" s32 PMi_SendLEDPatternCommand(...);
extern "C" s32 PM_GetLEDPattern(...);
extern "C" s32 NNS_G2dCharCanvasDrawChar(...);
extern "C" void NNS_G2dCharCanvasInitForOBJ1D(void);
extern "C" void NNS_G2dMapScrToCharText(void);
extern "C" void NNSi_G2dCalcRequiredOBJ(void);
extern "C" s32 NNS_G2dArrangeOBJ1D(...);
extern "C" void NNSi_G2dTextCanvasDrawText(void);
extern "C" s32 DWCi_Language(...);
extern "C" s32 DWCi_ARClReadEx(...);
extern "C" s32 memcmp(...);
extern "C" s32 strlen(...);

extern "C" asm s32 DWCi_ARClRelease(...)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, lr}
    add r0, sp, #8
    bl DWCi_HEAPlFree_
    ldr r0, =data_ov016_02158b4c
    ldr r1, [sp, #8]
    ldr r0, [r0]
    ldr r0, [r0, #0x84]
    bl DWCi_QUElPushBack
    ldmia sp!, {r3, lr}
    add sp, sp, #0x10
    bx lr
}

extern "C" s32 cmpBack(s32 arg0, s32 arg1, s32 arg2)
{
    s32 r4;
    s32 r7;
    s32 v0;
    s32 v1;
    s32 v2;
    v0 = strlen(arg0, arg1, arg2);
    v1 = strlen(arg1);
    r7 = arg0;
    r4 = v0;
    arg0 = v1;
    if ((r4 < arg2 || arg0 < arg2)) {
        return 0;
    } else {
        v2 = memcmp((r7 + (r4 - arg2)), (arg1 + (arg0 - arg2)), arg2, (r4 - arg2));
        if (v2 == 0) {
            arg0 = 1;
        } else {
            arg0 = 0;
        }
        return arg0;
    }
}

extern "C" s32 DWCi_CELLlInit(void)
{
    s32 r0;
    s32 r4;
    s32 r5;
    s32 r6;
    s32 r7;
    s32 r8;
    s32 r9;
    s32 r11;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;
    s32 v4;
    s32 v6;
    s32 t0;
    u8 *t1;
    u8 *t2;
    u8 *t3;
    u8 *t4;
    s32 t5;
    s32 t6;
    s32 t7;
    s32 t8;
    v0 = ((s32 (*)(...))DWCi_HEAPlAllocEx)(0x450, 4);
    *(s32 *)(data_ov016_02158b50) = v0;
    r9 = 0;
    do {
        t0 = (*(s32 *)(data_ov016_02158b50) + (r9 * 0x228));
        v1 = DWCi_QUElFormEx(0x20, t0, 0x10);
        t1 = (u8 *)(*(s32 *)(data_ov016_02158b50) + (r9 * 0x228));
        *(s32 *)(t1 + 0x224) = v1;
        v2 = ((s32 (*)(...))DWCi_LSTlForm)(v1, (s32)t1);
        t2 = (u8 *)(*(s32 *)(data_ov016_02158b50) + (r9 * 0x228));
        *(s32 *)(t2 + 0x220) = v2;
        v3 = ((s32 (*)(...))DWCi_OBJlGetOam)(r9, 0x40, (s32)t2);
        t3 = (u8 *)(*(s32 *)(data_ov016_02158b50) + (r9 * 0x228));
        *(s32 *)(t3 + 0x208) = v3;
        v4 = ((s32 (*)(...))DWCi_OBJlGetOam)(r9, 0x7F, (s32)t3);
        t4 = (u8 *)(*(s32 *)(data_ov016_02158b50) + (r9 * 0x228));
        *(s32 *)(t4 + 0x218) = (v4 + 8);
        t5 = *(s32 *)(((u8 *)(*(s32 *)(data_ov016_02158b50) + (r9 * 0x228))) + 0x220);
        t6 = ((*(s32 *)(data_ov016_02158b50) + (r9 * 0x228)) + 0x200);
        ((s32 (*)(...))DWCi_LSTlPushFront)(t5, t6);
        t7 = *(s32 *)(((u8 *)(*(s32 *)(data_ov016_02158b50) + (r9 * 0x228))) + 0x220);
        t8 = ((*(s32 *)(data_ov016_02158b50) + (r9 * 0x228)) + 0x210);
        v6 = ((s32 (*)(...))DWCi_LSTlPushBack)(t7, t8);
        r0 = v6;
        r4 = 0x228;
        r5 = (s32)data_ov016_02158b50;
        r6 = 0x40;
        r7 = 0x10;
        r8 = 0x20;
        r9 = (r9 + 1);
        r11 = 0x7F;
    } while (r9 < 2);
    return r0;
}

extern "C" s32 DWCi_CELLlEnd(void)
{
    s32 r4;
    s32 r5;
    s32 r6;
    s32 v2;
    s32 t0;
    s32 t1;
    r6 = 0;
    do {
        t0 = *(s32 *)(((u8 *)(*(s32 *)(data_ov016_02158b50) + (r6 * 0x228))) + 0x220);
        DWCi_LSTlDelete(t0);
        t1 = *(s32 *)(((u8 *)(*(s32 *)(data_ov016_02158b50) + (r6 * 0x228))) + 0x224);
        DWCi_QUElDelete(t1);
        r4 = 0x228;
        r5 = (s32)data_ov016_02158b50;
        r6 = (r6 + 1);
    } while (r6 < 2);
    v2 = DWCi_HEAPlFree_((s32)data_ov016_02158b50_b);
    return v2;
}

extern "C" asm s32 DWCi_CELLlForm(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    mov r11, #0x228
    mul r7, r10, r11
    ldr r4, =data_ov016_02158b50
    mov r9, r1
    ldr r0, [r4]
    mov r8, r2
    add r0, r0, r7
    ldr r0, [r0, #0x224]
    bl DWCi_QUElPopBack
    mov r5, r0
    mov r0, #1
    bl OS_DisableIrqMask
    ldr r1, [r4]
    mov r6, r0
    mla r0, r10, r11, r1
    cmp r8, #0
    beq @L_0214f3e8
    add r4, r0, #0x200
    add r0, r0, #0x210
    cmp r4, r0
    beq @L_0214f3cc
    add r0, r1, r7
    add r1, r0, #0x210
@L_0214f394:
    ldrb r3, [r4, #0xc]
    ldmib r4, {r0, r8}
    add r8, r8, r3, lsl #3
    ldr r2, [r0, #8]
    add r3, r8, r9, lsl #3
    cmp r3, r2
    bhi @L_0214f3c0
    mov r1, r5
    str r8, [r5, #8]
    bl DWCi_LSTlInsert
    b @L_0214f3cc
@L_0214f3c0:
    mov r4, r0
    cmp r0, r1
    bne @L_0214f394
@L_0214f3cc:
    ldr r0, =data_ov016_02158b50
    ldr r0, [r0]
    add r0, r0, r7
    add r0, r0, #0x210
    cmp r4, r0
    bne @L_0214f45c
    b @L_0214f458
@L_0214f3e8:
    add r4, r0, #0x210
    add r0, r0, #0x200
    cmp r4, r0
    beq @L_0214f440
    add r0, r1, r7
    add r0, r0, #0x200
@L_0214f400:
    ldr r8, [r4]
    ldr r3, [r4, #8]
    ldrb r1, [r8, #0xc]
    ldr r2, [r8, #8]
    sub r3, r3, r9, lsl #3
    add r1, r2, r1, lsl #3
    cmp r3, r1
    blo @L_0214f434
    mov r0, r4
    mov r1, r5
    str r3, [r5, #8]
    bl DWCi_LSTlInsert
    b @L_0214f440
@L_0214f434:
    mov r4, r8
    cmp r8, r0
    bne @L_0214f400
@L_0214f440:
    ldr r0, =data_ov016_02158b50
    ldr r0, [r0]
    add r0, r0, r7
    add r0, r0, #0x200
    cmp r4, r0
    bne @L_0214f45c
@L_0214f458:
    bl OS_Terminate
@L_0214f45c:
    mov r0, r6
    bl OS_EnableIrqMask
    mov r0, r5
    strb r9, [r5, #0xc]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void DWCi_CELLlDelete(u8 *arg0)
{
    s32 z;
    u32 *p;
    s32 i;
    u8 *b;
    z = 0;
    i = z;
    p = *(u32 **)(arg0 + 8);
    for (; i < arg0[0xC]; i++) {
        *p = (*p & 0xC1FFFCFF) | 0x200;
        p += 2;
    }
    ((s32 (*)(...))DWCi_LSTlErase)(arg0);
    b = *(u8 **)data_ov016_02158b50;
    if (arg0 >= b + 0x228)
        z = 1;
    ((s32 (*)(...))DWCi_QUElPushBack)(*(s32 *)(b + z * 0x228 + 0x224), arg0);
}

extern "C" s32 DWCi_CELLlGetObj(u8 *arg0, s32 arg1)
{
    return (*(s32 *)(arg0 + 0x8) + (arg1 << 3));
}

extern "C" u8 DWCi_CELLlGetObjNum(u8 *arg0)
{
    return *(u8 *)(arg0 + 0xC);
}

extern "C" asm s32 DWCi_CELLlSetEffect(...)
{
    stmdb sp!, {r4, lr}
    cmp r1, #0
    ldr r12, [r0, #8]
    blt @L_0214f554
    cmp r2, #0x100
    cmpne r2, #0x300
    ldr r0, =0xc1fffcff
    beq @L_0214f53c
    ldr r3, [r12, r1, lsl #3]
    and r0, r3, r0
    orr r0, r0, r2
    str r0, [r12, r1, lsl #3]
    ldmia sp!, {r4, pc}
@L_0214f53c:
    ldr r4, [r12, r1, lsl #3]
    and r0, r4, r0
    orr r0, r0, r2
    orr r0, r0, r3, lsl #25
    str r0, [r12, r1, lsl #3]
    ldmia sp!, {r4, pc}
@L_0214f554:
    ldrb r4, [r0, #0xc]
    mov r1, #0
    cmp r4, #0
    ldmleia sp!, {r4, pc}
    ldr lr, =0xc1fffcff
@L_0214f568:
    cmp r2, #0x100
    cmpne r2, #0x300
    ldrne r4, [r12, r1, lsl #3]
    andne r4, r4, lr
    orrne r4, r4, r2
    strne r4, [r12, r1, lsl #3]
    ldreq r4, [r12, r1, lsl #3]
    andeq r4, r4, lr
    orreq r4, r4, r2
    orreq r4, r4, r3, lsl #25
    streq r4, [r12, r1, lsl #3]
    ldrb r4, [r0, #0xc]
    add r1, r1, #1
    cmp r1, r4
    blt @L_0214f568
    ldmia sp!, {r4, pc}
}

extern "C" asm s32 DWCi_CELLlSetPalette(...)
{
    stmdb sp!, {r4, lr}
    cmp r1, #0
    ldr r12, [r0, #8]
    blt @L_0214f5e4
    ldr r0, [r12, r1, lsl #3]
    add lr, r12, r1, lsl #3
    bic r0, r0, #0xc00
    orr r0, r0, r2, lsl #10
    str r0, [r12, r1, lsl #3]
    ldrh r0, [lr, #4]
    bic r0, r0, #0xf000
    orr r0, r0, r3, lsl #12
    strh r0, [lr, #4]
    ldmia sp!, {r4, pc}
@L_0214f5e4:
    ldrb r1, [r0, #0xc]
    mov r4, #0
    cmp r1, #0
    ldmleia sp!, {r4, pc}
@L_0214f5f4:
    ldr r1, [r12, r4, lsl #3]
    add lr, r12, r4, lsl #3
    bic r1, r1, #0xc00
    orr r1, r1, r2, lsl #10
    str r1, [r12, r4, lsl #3]
    ldrh r1, [lr, #4]
    add r4, r4, #1
    bic r1, r1, #0xf000
    orr r1, r1, r3, lsl #12
    strh r1, [lr, #4]
    ldrb r1, [r0, #0xc]
    cmp r4, r1
    blt @L_0214f5f4
    ldmia sp!, {r4, pc}
}

extern "C" asm void DWCi_CELLlSetPosition(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x10
    cmp r1, #0
    ldr r12, [r0, #8]
    blt @L_0214f668
    ldr r4, [r12, r1, lsl #3]
    ldr r0, =0xfe00ff00
    and r3, r3, #0xff
    and r0, r4, r0
    mov r2, r2, lsl #0x17
    orr r0, r0, r3
    orr r0, r0, r2, lsr #7
    str r0, [r12, r1, lsl #3]
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0214f668:
    ldr r5, [r12]
    ldr r4, =0xfe00ff00
    and r1, r3, #0xff
    and r5, r5, r4
    ldr r7, [r12]
    orr r1, r5, r1
    mov r6, r2, lsl #0x17
    orr r1, r1, r6, lsr #7
    str r1, [r12]
    ldrb r1, [r0, #0xc]
    ldr lr, =0x1ff0000
    and r5, r7, #0xff
    cmp r1, #1
    and r6, r7, lr
    sub r3, r3, r5
    addle sp, sp, #0x10
    sub r2, r2, r6, lsr #16
    mov r1, #1
    ldmleia sp!, {r3, r4, r5, r6, r7, pc}
@L_0214f6b4:
    ldr r7, [r12, r1, lsl #3]
    and r5, r7, #0xff
    mov r6, r7
    and r7, r7, lr
    add r5, r5, r3
    add r7, r2, r7, lsr #16
    and r6, r6, r4
    and r5, r5, #0xff
    mov r7, r7, lsl #0x17
    orr r5, r6, r5
    orr r5, r5, r7, lsr #7
    str r5, [r12, r1, lsl #3]
    ldrb r5, [r0, #0xc]
    add r1, r1, #1
    cmp r1, r5
    blt @L_0214f6b4
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm s32 DWCi_CELLlSetPriority(...)
{
    stmdb sp!, {r3, lr}
    cmp r1, #0
    ldr r12, [r0, #8]
    blt @L_0214f72c
    add r1, r12, r1, lsl #3
    ldrh r0, [r1, #4]
    bic r0, r0, #0xc00
    orr r0, r0, r2, lsl #10
    strh r0, [r1, #4]
    ldmia sp!, {r3, pc}
@L_0214f72c:
    ldrb r1, [r0, #0xc]
    mov lr, #0
    cmp r1, #0
    ldmleia sp!, {r3, pc}
@L_0214f73c:
    add r3, r12, lr, lsl #3
    ldrh r1, [r3, #4]
    add lr, lr, #1
    bic r1, r1, #0xc00
    orr r1, r1, r2, lsl #10
    strh r1, [r3, #4]
    ldrb r1, [r0, #0xc]
    cmp lr, r1
    blt @L_0214f73c
    ldmia sp!, {r3, pc}
}

extern "C" s32 DWCi_CELLlGetPosition(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3)
{
    s32 t0;
    u8 *t2;
    s32 t3;
    t0 = ((u32)(*(s32 *)(*(u8 * *)(arg0 + 0x8) + (arg1 << 3)) & 0x1FF0000) >> 0x10);
    t2 = *(u8 * *)(arg0 + 0x8);
    *(s32 *)(arg2) = t0;
    t3 = (*(s32 *)(t2 + (arg1 << 3)) & 0xFF);
    *(s32 *)(arg3) = t3;
    return t3;
}

extern "C" s32 func_ov016_0214f794(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 local[1];
    s32 v0;
    v0 = DWCi_ARClReadEx(arg1, (s32)((u8 *)local), 4, arg3);
    *(s32 *)(data_ov016_02158b54 + (arg0 << 2)) = v0;
    return v0;
}

extern "C" s32 DWCi_CEINlRelease(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    DWCi_ARClRelease(*(s32 *)(data_ov016_02158b54 + (arg0 << 2)), arg1, arg2, arg3);
    *(s32 *)(data_ov016_02158b54 + (arg0 << 2)) = 0;
    return 0;
}

extern "C" asm s32 DWCi_CEINlSet(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #8
    ldr r3, =data_ov016_02158b54
    mov r6, r2
    ldr r7, [r3, r0, lsl #2]
    mov r2, r1, lsl #3
    add r0, r7, r1, lsl #3
    ldrh r4, [r7, r2]
    add r9, sp, #0
    ldr r3, [r0, #4]
    mov r5, #0
    mov r0, r5
    mov r1, r9
    mov r2, #8
    add r10, r7, r3
    bl MIi_CpuClear32
    cmp r4, #0
    addle sp, sp, #8
    ldmleia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r8, #6
    mov r7, #8
@L_0214f83c:
    mov r0, r10
    mov r1, r9
    mov r2, r8
    bl MIi_CpuCopy16
    mov r0, r9
    mov r1, r6
    mov r2, r7
    bl MIi_CpuCopy32
    add r5, r5, #1
    cmp r5, r4
    add r10, r10, #6
    add r6, r6, #8
    blt @L_0214f83c
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" s32 DWCi_CEINlSetExObj(s32 arg0, s32 arg1)
{
    s32 v0 = DWCi_OBJlFormGx(arg0, arg1);
    DWCi_CEINlSet(arg0, arg1, v0);
    return v0;
}

extern "C" s32 DWCi_CEINlSetExCell(s32 arg0, s32 arg1, s32 arg2)
{
    s32 v0;
    s32 v1;
    u16 t0;
    u8 *t1;
    t0 = *(u16 *)(*(u8 * *)(((u8 *)&data_ov016_02158b54) + (arg0 << 2)) + (arg1 << 3));
    t1 = *(u8 * *)(((u8 *)&data_ov016_02158b54) + (arg0 << 2));
    v0 = DWCi_CELLlForm(arg0, t0, arg2, t1);
    v1 = DWCi_CELLlGetObj((u8 *)v0, 0);
    DWCi_CEINlSet(arg0, arg1, v1);
    return v0;
}

extern "C" void DWCi_QUElForm(s32 arg0)
{
    s32 v0 = ((s32 (*)(...))DWCi_HEAPlAllocEx)((((arg0 + 1) << 2) + 8), 4);
    *(u16 *)(((u8 *)v0)) = (arg0 + 1);
    *(u8 *)(((u8 *)v0) + 0x2) = 0;
    *(u8 *)(((u8 *)v0) + 0x3) = 0;
}

extern "C" asm s32 DWCi_QUElFormEx(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, r1
    mov r4, r2
    bl DWCi_QUElForm
    cmp r6, #0
    mov r2, #0
    ble @L_0214f95c
@L_0214f944:
    add r1, r0, r2, lsl #2
    add r2, r2, #1
    str r5, [r1, #4]
    cmp r2, r6
    add r5, r5, r4
    blt @L_0214f944
@L_0214f95c:
    strb r6, [r0, #3]
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm s32 DWCi_QUElDelete(...)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, lr}
    add r0, sp, #8
    bl DWCi_HEAPlFree_
    ldmia sp!, {r3, lr}
    add sp, sp, #0x10
    bx lr
}

extern "C" asm s32 DWCi_QUElPushBack(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r0
    mov r0, #1
    mov r4, r1
    bl OS_DisableIrqMask
    ldrb r2, [r5, #3]
    mov r6, r0
    ldrh r1, [r5]
    add r0, r2, #1
    bl FX_ModS32
    ldrb r1, [r5, #2]
    mov r7, r0
    cmp r7, r1
    bne @L_0214f9bc
    bl OS_Terminate
@L_0214f9bc:
    ldrb r1, [r5, #3]
    mov r0, r6
    add r1, r5, r1, lsl #2
    str r4, [r1, #4]
    strb r7, [r5, #3]
    bl OS_EnableIrqMask
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" s32 DWCi_QUElPopBack(u8 *arg0)
{
    s32 r1;
    s32 r2;
    s32 r4;
    s32 r5;
    s32 v0;
    s32 v1;
    s32 t0;
    u16 t1;
    r4 = 0;
    v0 = OS_DisableIrqMask(1);
    r2 = *(u8 *)(arg0 + 0x3);
    r1 = *(u8 *)(arg0 + 0x2);
    r5 = v0;
    if (r1 != r2) {
        t0 = ((r2 + *(u16 *)(arg0)) - 1);
        t1 = *(u16 *)(arg0);
        v1 = FX_ModS32(t0, t1, r2);
        *(u8 *)(arg0 + 0x3) = v1;
        r1 = (v1 & 0xFF);
        r4 = *(s32 *)(((u8 *)(arg0 + ((v1 & 0xFF) << 2))) + 0x4);
    }
    OS_EnableIrqMask(r5, r1);
    return r4;
}

extern "C" void func_ov016_0214fa30(void)
{
    s32 v0 = ((s32 (*)(...))DWCi_HEAPlAllocEx)(0x18, 4);
    *(s32 *)(data_ov016_02158b5c) = v0;
    G2x_SetBlendBrightness_(0x4000050, 0x3F, 0x10);
    G2x_SetBlendBrightness_((0x4000050 + 0x1000), 0x3F, 0x10);
}

extern "C" void DWCi_EFFlEnd(void)
{
    DWCi_HEAPlFree_((s32)data_ov016_02158b5c);
}

extern "C" s32 DWCi_EFFlCheck(u8 *arg0)
{
    if ((s32)arg0 == 1) {
        arg0 = (u8 *)*(s32 *)(data_ov016_02158b5c);
    } else {
        arg0 = (u8 *)(*(s32 *)(data_ov016_02158b5c) + 0xC);
    }
    return *(u8 *)(arg0 + 0x9);
}

extern "C" s32 DWCi_EFFlFade(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    T0214fab8 t = *(T0214fab8 *)data_ov016_02154f68;
    u8 *p;
    if (arg1 == 1)
        p = *(u8 **)data_ov016_02158b5c;
    else
        p = *(u8 **)data_ov016_02158b5c + 0xC;
    if (p[9] != 0)
        return 0;
    if (arg1 == 1)
        ((s32 (*)(...))G2x_SetBlendBrightness_)(0x4001050, arg2, t.v[arg0]);
    else
        ((s32 (*)(...))G2x_SetBlendBrightness_)(0x4000050, arg2, t.v[arg0]);
    *(s32 *)p = ((s32 (*)(...))DWCi_TSKlForm)(1, taskFade, p, 0xC8);
    *(u16 *)(p + 4) = 0;
    p[8] = arg0;
    *(u16 *)(p + 6) = arg3;
    p[9] = 1;
    return 1;
}

extern "C" asm void taskFade(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #8
    ldr r3, =data_ov016_02154f64
    ldr r2, =data_ov016_02154f60
    mov r4, r1
    ldrsh r1, [r4, #4]
    ldrb r9, [r3]
    ldrb r8, [r3, #1]
    ldrb r7, [r3, #2]
    ldrb r6, [r3, #3]
    ldrb lr, [r2]
    ldrb r12, [r2, #1]
    ldrb r3, [r2, #2]
    ldrb r2, [r2, #3]
    add r5, r1, #1
    strb r6, [sp, #7]
    strh r5, [r4, #4]
    ldrsh r10, [r4, #4]
    mov r5, r0
    ldrh r1, [r4, #6]
    mov r0, r10, lsl #4
    strb r9, [sp, #4]
    strb r8, [sp, #5]
    strb r7, [sp, #6]
    strb lr, [sp]
    strb r12, [sp, #1]
    strb r3, [sp, #2]
    strb r2, [sp, #3]
    add r6, sp, #4
    bl FX_DivS32
    ldrb r2, [r4, #8]
    mov r1, r0
    ldrb r0, [r6, r2]
    tst r0, #1
    rsbne r1, r1, #0x10
    tst r0, #0x10
    ldr r0, =data_ov016_02158b5c
    rsbne r1, r1, #0
    ldr r0, [r0]
    cmp r4, r0
    bne @L_0214fc2c
    ldr r0, =0x4001050
    b @L_0214fc30
@L_0214fc2c:
    ldr r0, =0x4000050
@L_0214fc30:
    bl G2x_ChangeBlendBrightness_
    ldrsh r1, [r4, #4]
    ldrh r0, [r4, #6]
    cmp r1, r0
    addlt sp, sp, #8
    ldmltia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, =data_ov016_02158b5c
    ldrb r2, [r4, #8]
    ldr r0, [r0]
    add r1, sp, #0
    cmp r4, r0
    bne @L_0214fc68
    ldr r0, =0x4001050
    b @L_0214fc6c
@L_0214fc68:
    ldr r0, =0x4000050
@L_0214fc6c:
    ldrsb r1, [r1, r2]
    bl G2x_ChangeBlendBrightness_
    mov r2, #0
    mov r1, r5
    mov r0, #1
    strb r2, [r4, #9]
    bl DWCi_TSKlDelete
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" s32 DWCi_EFFlWait(u16 arg0)
{
    s32 v0;
    u8 *t0;
    if (*(u8 *)(*(u8 * *)(data_ov016_02158b5c) + 0x9) != 0)
        return 0;
    t0 = *(u8 * *)(data_ov016_02158b5c);
    v0 = DWCi_TSKlForm(1, (s32)taskWait, (s32)t0, 0xC8);
    *(s32 *)(t0) = v0;
    *(u16 *)(t0 + 0x4) = 0;
    *(u16 *)(t0 + 0x6) = arg0;
    *(u8 *)(t0 + 0x9) = 1;
    return 1;
}

extern "C" void taskWait(s32 arg0, u8 *arg1)
{
    *(u16 *)(arg1 + 0x4) = (*(s16 *)(arg1 + 0x4) + 1);
    if (*(s16 *)(arg1 + 0x4) < *(u16 *)(arg1 + 0x6))
        return;
    *(u8 *)(arg1 + 0x9) = 0;
    DWCi_TSKlDelete(1, arg0, 0, *(s16 *)(arg1 + 0x4));
}

extern "C" s32 DWCi_FNTlInit(void)
{
    s32 r0;
    s32 r4;
    s32 r5;
    s32 r6;
    s32 r7;
    s32 r8;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;
    s32 v4;
    s32 v5;
    s32 v6;
    u8 *t0;
    s32 t1;
    u8 *t2;
    s32 t3;
    s32 t4;
    s32 t5;
    s32 t6;
    u8 *t7;
    s32 t8;
    s32 t9;
    s32 t10;
    v0 = ((s32 (*)(...))DWCi_HEAPlAllocEx)(0x680, 4);
    *(s32 *)(data_ov016_02158b60) = v0;
    v1 = DWCi_QUElFormEx(0x20, (v0 + 0x10), 0x30);
    t0 = (u8 *)*(s32 *)(data_ov016_02158b60);
    *(s32 *)(t0 + 0x670) = v1;
    v2 = DWCi_Language(v1, (s32)t0);
    if (v2 == 6) {
        r8 = 0;
        do {
            t1 = *(s32 *)(data_ov016_021564d4 + (r8 << 2));
            v3 = DWCi_ARClReadEx(t1, 0, 4);
            t2 = (u8 *)(*(s32 *)(data_ov016_02158b60) + (r8 << 2));
            *(s32 *)(t2 + 0x674) = v3;
            t3 = (*(s32 *)(data_ov016_02158b60) + (r8 << 3));
            t4 = *(s32 *)(((u8 *)(*(s32 *)(data_ov016_02158b60) + (r8 << 2))) + 0x674);
            t5 = *(s32 *)(data_ov016_02158b60);
            v4 = NNS_G2dFontInitUTF16(t3, t4, t5);
            r0 = v4;
            r4 = (s32)data_ov016_02158b60;
            r5 = 4;
            r6 = 0;
            r7 = (s32)data_ov016_021564d4;
            r8 = (r8 + 1);
        } while (r8 < 2);
        return r0;
    } else {
        r8 = 0;
        do {
            t6 = *(s32 *)(data_ov016_021564dc + (r8 << 2));
            v5 = DWCi_ARClReadEx(t6, 0, 4);
            t7 = (u8 *)(*(s32 *)(data_ov016_02158b60) + (r8 << 2));
            *(s32 *)(t7 + 0x674) = v5;
            t8 = (*(s32 *)(data_ov016_02158b60) + (r8 << 3));
            t9 = *(s32 *)(((u8 *)(*(s32 *)(data_ov016_02158b60) + (r8 << 2))) + 0x674);
            t10 = *(s32 *)(data_ov016_02158b60);
            v6 = NNS_G2dFontInitUTF16(t8, t9, t10);
            r0 = v6;
            r4 = (s32)data_ov016_02158b60;
            r5 = 4;
            r6 = 0;
            r7 = (s32)data_ov016_021564dc;
            r8 = (r8 + 1);
        } while (r8 < 2);
        return r0;
    }
}

extern "C" s32 DWCi_FNTlEnd(void)
{
    s32 r4;
    s32 r5;
    s32 v2;
    s32 t0;
    s32 t1;
    r5 = 0;
    do {
        t0 = *(s32 *)(((u8 *)(*(s32 *)(data_ov016_02158b60) + (r5 << 2))) + 0x674);
        DWCi_ARClRelease(t0);
        r4 = (s32)data_ov016_02158b60;
        r5 = (r5 + 1);
    } while (r5 < 2);
    t1 = *(s32 *)(*(u8 * *)(data_ov016_02158b60) + 0x670);
    DWCi_QUElDelete(t1);
    v2 = DWCi_HEAPlFree_((s32)data_ov016_02158b60_b);
    return v2;
}

extern "C" asm void DWCi_FNTlFormEx(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #8
    ldr r4, =data_ov016_02158b60
    mov r7, r0
    ldr r0, [r4]
    mov r6, r1
    ldr r0, [r0, #0x670]
    mov r5, r2
    mov r8, r3
    bl DWCi_QUElPopBack
    mov r4, r0
    strb r6, [r4, #0x2e]
    mul r1, r6, r5
    mov r2, r8
    strb r5, [r4, #0x2f]
    mov r0, r7
    add r3, sp, #4
    bl DWCi_OVRlAlloc
    str r0, [r4, #0x28]
    ldr r1, [sp, #4]
    mov r0, r6
    strh r1, [r4, #0x2c]
    mov r1, r5
    bl NNSi_G2dCalcRequiredOBJ
    ldr r1, [sp, #0x20]
    mov r12, #0x6600000
    str r0, [r1]
    cmp r7, #1
    ldr r7, [sp, #4]
    mov r1, #4
    movne r12, #0x6400000
    str r1, [sp]
    mov r0, r4
    mov r2, r6
    mov r3, r5
    add r1, r12, r7, lsl #7
    bl NNS_G2dCharCanvasInitForOBJ1D
    ldr r1, [r4, #0x14]
    mov r0, r4
    ldr r2, [r1, #4]
    mov r1, #0
    blx r2
    ldr r0, =data_ov016_02158b60
    ldr r2, [sp, #0x24]
    ldr r0, [r0]
    mov r1, #1
    str r4, [r4, #0x18]
    add r0, r0, r2, lsl #3
    str r0, [r4, #0x1c]
    str r1, [r4, #0x20]
    mov r0, r4
    str r1, [r4, #0x24]
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" void DWCi_FNTlDelete(u8 *arg0)
{
    DWCi_OVRlFree(*(s32 *)(arg0 + 0x28));
    DWCi_QUElPushBack(*(s32 *)(*(u8 * *)(data_ov016_02158b60) + 0x670), (s32)arg0);
}

extern "C" asm void DWCi_FNTlFormBgEx(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x10
    mov r8, r0
    ldr r0, =data_ov016_02158b60
    ldr r3, =data_ov016_02154f72
    mov r4, r8, lsl #2
    ldr r2, =data_ov016_02154f70
    ldrh r6, [r3, r4]
    ldrh r7, [r2, r4]
    ldr r0, [r0]
    mov r4, r1
    add r3, r0, #0x610
    mov r0, #0x30
    mul r2, r7, r6
    mla r5, r8, r0, r3
    mov r0, r2, lsl #5
    mov r1, #0x20
    bl DWCi_HEAPlAllocEx
    str r0, [r5, #0x28]
    cmp r8, #1
    ldr r0, =0xffbf
    bne @L_0214ffcc
    ldr r2, =0x4001008
    b @L_0214ffd0
@L_0214ffcc:
    ldr r2, =0x4000008
@L_0214ffd0:
    ldrh r1, [r2]
    and r0, r1, r0
    strh r0, [r2]
    ldrh r0, [r2]
    and r0, r0, #0x43
    orr r0, r0, #0xc00
    strh r0, [r2]
    mov r0, #4
    str r0, [sp]
    ldr r1, [r5, #0x28]
    mov r0, r5
    mov r2, r7
    mov r3, r6
    bl NNS_G2dCharCanvasInitForBG
    ldr r0, =data_ov016_02158b60
    mov r1, #1
    ldr r0, [r0]
    cmp r8, #1
    str r5, [r5, #0x18]
    add r0, r0, r4, lsl #3
    str r0, [r5, #0x1c]
    str r1, [r5, #0x20]
    str r1, [r5, #0x24]
    bne @L_02150038
    bl G2S_GetBG0ScrPtr
    b @L_0215003c
@L_02150038:
    bl G2_GetBG0ScrPtr
@L_0215003c:
    ldr r1, =data_ov016_02154f6c
    mov r2, r8, lsl #1
    mov r4, #0
    ldrh r12, [r1, r2]
    str r4, [sp]
    mov r1, #0x20
    str r1, [sp, #4]
    mov r1, r7
    mov r2, r6
    mov r3, r4
    str r12, [sp, #8]
    mov r6, #0xf
    str r6, [sp, #0xc]
    bl NNS_G2dMapScrToCharText
    mov r0, r5
    mov r1, r4
    bl DWCi_FNTlClear
    ldr r0, =data_ov016_02158b60
    ldr r1, =taskLoad_3
    ldr r2, [r0]
    mov r0, #1
    add r2, r2, #0x27c
    add r2, r2, #0x400
    add r2, r2, r8
    mov r3, #0xc8
    bl DWCi_TSKlForm
    str r0, [r5, #0x2c]
    mov r0, r5
    add sp, sp, #0x10
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" s32 taskLoad_3(s32 arg0, u8 *arg1)
{
    u8 *r1;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    if (*(u8 *)(arg1) == 0)
        return *(u8 *)(arg1);
    r1 = (u8 *)*(s32 *)(((u8 *)&data_ov016_02158b60));
    if ((s32)arg1 == (s32)((r1 + 0x27C) + 0x400)) {
        t0 = *(s32 *)(r1 + 0x638);
        DC_FlushRange(t0, 0x6000);
        t1 = *(s32 *)(*(u8 * *)(((u8 *)&data_ov016_02158b60)) + 0x638);
        GX_LoadBG0Char(t1, 0, 0x6000);
    } else {
        t2 = *(s32 *)(r1 + 0x668);
        DC_FlushRange(t2, 0x3000);
        t3 = *(s32 *)(*(u8 * *)(((u8 *)&data_ov016_02158b60)) + 0x668);
        GXS_LoadBG0Char(t3, 0x3000, 0x3000);
    }
    *(u8 *)(arg1) = 0;
    return 0;
}

extern "C" s32 DWCi_FNTlDeleteBg(u8 *arg0)
{
    s32 r0;
    s32 r1;
    s32 r2;
    s32 v1;
    s32 v2;
    s32 v4;
    s32 t0;
    t0 = *(s32 *)(arg0 + 0x2C);
    ((s32 (*)(...))DWCi_TSKlDeleteEx)(1, t0);
    r0 = (*(s32 *)(((u8 *)&data_ov016_02158b60)) + 0x610);
    if ((s32)arg0 == r0) {
        v1 = G2_GetBG0CharPtr(r0);
        r1 = v1;
        r0 = 0;
        r2 = 0x6000;
    } else {
        v2 = G2_GetBG0CharPtr(r0);
        r1 = v2;
        r0 = 0;
        r2 = 0x3000;
    }
    MIi_CpuClear16(r0, r1, r2);
    v4 = DWCi_HEAPlFree_((s32)(arg0 + 0x28));
    return v4;
}

extern "C" void DWCi_FNTlDeleteBgLcd(s32 arg0)
{
    s32 t0 = ((0x30 * arg0) + (*(s32 *)(((u8 *)&data_ov016_02158b60)) + 0x610));
    s32 t1 = (*(s32 *)(((u8 *)&data_ov016_02158b60)) + 0x610);
    ((s32 (*)(...))DWCi_FNTlDeleteBg)(t0, 0x30, t1);
}

extern "C" asm void DWCi_FNTlDraw(void)
{
    stmdb sp!, {r4, lr}
    sub sp, sp, #0x10
    ldr r12, [r0, #0x1c]
    add r4, sp, #0xc
    ldr r12, [r12]
    mov lr, #0
    ldr r12, [r12, #8]
    strb lr, [r4]
    ldrb r12, [r12, #7]
    strb lr, [r4, #1]
    cmp r12, #7
    addls pc, pc, r12, lsl #2
    b @L_02150258
    b @L_02150234
    b @L_02150240
    b @L_02150240
    b @L_02150248
    b @L_02150248
    b @L_02150250
    b @L_02150250
    b @L_02150234
@L_02150234:
    mov r12, #1
@L_02150238:
    strb r12, [sp, #0xc]
    b @L_02150258
@L_02150240:
    mov r12, #1
    b @L_02150254
@L_02150248:
    sub r12, lr, #1
    b @L_02150238
@L_02150250:
    sub r12, lr, #1
@L_02150254:
    strb r12, [sp, #0xd]
@L_02150258:
    ldr lr, [sp, #0x18]
    ldr r12, [sp, #0x1c]
    str lr, [sp]
    ldrb lr, [sp, #0xc]
    str r12, [sp, #4]
    ldrb r12, [sp, #0xd]
    strb lr, [sp, #8]
    add r0, r0, #0x18
    strb r12, [sp, #9]
    bl NNSi_G2dTextCanvasDrawText
    add sp, sp, #0x10
    ldmia sp!, {r4, pc}
}

extern "C" void DWCi_FNTlDrawCharEx(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u16 arg4, s32 arg5)
{
    s32 t0;
    t0 = (*(s32 *)(((u8 *)&data_ov016_02158b60)) + (arg5 << 3));
    NNS_G2dCharCanvasDrawChar(arg0, t0, arg1, arg2, arg3, arg4);
    return;
}

extern "C" void DWCi_FNTlDrawStringEx(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u16 *arg5, s32 arg6)
{
    while (*arg5 != 0) {
        u8 *f = *(u8 **)data_ov016_02158b60 + (arg6 << 3);
        s32 g = ((s32 (*)(...))NNS_G2dFontFindGlyphIndex)(f, *arg5);
        s8 *e;
        if (g == 0xFFFF)
            g = *(u16 *)(*(u8 **)f + 2);
        e = (s8 *)((s32 (*)(...))NNS_G2dFontGetCharWidthsFromIndex)(f, g);
        ((s32 (*)(...))DWCi_FNTlDrawCharEx)(arg0, arg1 + ((arg4 - e[2]) >> 1), arg2, arg3, *arg5, arg6);
        arg5++;
        arg1 += arg4;
    }
}

extern "C" asm void DWCi_FNTlDrawRect(void)
{
    stmdb sp!, {r4, lr}
    sub sp, sp, #0x18
    ldr r12, [r0, #0x1c]
    add r4, sp, #0x14
    ldr r12, [r12]
    mov lr, #0
    ldr r12, [r12, #8]
    strb lr, [r4]
    ldrb r12, [r12, #7]
    strb lr, [r4, #1]
    cmp r12, #7
    addls pc, pc, r12, lsl #2
    b @L_021503e8
    b @L_021503c4
    b @L_021503d0
    b @L_021503d0
    b @L_021503d8
    b @L_021503d8
    b @L_021503e0
    b @L_021503e0
    b @L_021503c4
@L_021503c4:
    mov r12, #1
@L_021503c8:
    strb r12, [sp, #0x14]
    b @L_021503e8
@L_021503d0:
    mov r12, #1
    b @L_021503e4
@L_021503d8:
    sub r12, lr, #1
    b @L_021503c8
@L_021503e0:
    sub r12, lr, #1
@L_021503e4:
    strb r12, [sp, #0x15]
@L_021503e8:
    ldr lr, [sp, #0x20]
    ldr r12, [sp, #0x24]
    str lr, [sp]
    ldr lr, [sp, #0x28]
    str r12, [sp, #4]
    ldr r12, [sp, #0x2c]
    str lr, [sp, #8]
    ldrb lr, [sp, #0x14]
    str r12, [sp, #0xc]
    ldrb r12, [sp, #0x15]
    strb lr, [sp, #0x10]
    add r0, r0, #0x18
    strb r12, [sp, #0x11]
    bl NNSi_G2dTextCanvasDrawTextRect
    add sp, sp, #0x18
    ldmia sp!, {r4, pc}
}

extern "C" void DWCi_FNTlClear(u8 *arg0, s32 arg1)
{
    ((s32 (*)(...))*(s32 *)(*(u8 * *)(arg0 + 0x14) + 0x4))((s32)arg0, arg1);
    return;
}

extern "C" void DWCi_FNTlDisp(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    s32 v0 = DWCi_CELLlGetObj((u8 *)arg3, 0);
    DWCi_CELLlSetEffect(arg3, (0 - 1), 0, 0);
    DWCi_CELLlSetPalette(arg3, (0 - 1), 0, 0xF);
    DWCi_CELLlSetPriority(arg3, (0 - 1), arg4);
    NNS_G2dArrangeOBJ1D(v0, *(u8 *)(arg0 + 0x2E), *(u8 *)(arg0 + 0x2F), arg1, arg2, 0, *(u16 *)(arg0 + 0x2C), 2);
}

extern "C" void DWCi_FNTlRenewBg(u8 arg0)
{
    s32 r0;
    u8 *r2;
    r2 = (u8 *)*(s32 *)(((u8 *)&data_ov016_02158b60));
    r0 = 1;
    if (arg0 == (s32)(r2 + 0x610)) {
        *(u8 *)(r2 + 0x67C) = r0;
    } else {
        *(u8 *)(r2 + 0x67D) = r0;
    }
    return;
}

extern "C" void DWCi_InputCoord(u16 arg0, u16 arg1, u8 *arg2)
{
    *(u16 *)(arg2) = arg0;
    *(u16 *)(arg2 + 0x2) = arg1;
}

extern "C" void DWCi_InputRect(u16 arg0, u16 arg1, u16 arg2, u16 arg3, u8 *arg4)
{
    *(u16 *)(arg4) = arg0;
    *(u16 *)(arg4 + 0x2) = arg1;
    *(u16 *)(arg4 + 0x4) = arg2;
    *(u16 *)(arg4 + 0x6) = arg3;
}

extern "C" asm void DWCi_Coord2Rect(void)
{
    stmdb sp!, {r3, lr}
    ldrh lr, [r0]
    ldrh r12, [r0, #2]
    ldrh r3, [r1]
    ldrh r0, [r1, #2]
    strh lr, [r2]
    add r1, lr, r3
    add r0, r12, r0
    strh r12, [r2, #2]
    strh r1, [r2, #4]
    strh r0, [r2, #6]
    ldmia sp!, {r3, pc}
}

static inline void set02150550(volatile u32 *reg, u32 v)
{
    u32 cur = (*reg & 0x1F00) >> 8;
    *reg = (*reg & ~0x1F00) | ((v | cur) << 8);
}
extern "C" void DWCi_GXlVisible(s32 arg0, u32 arg1)
{
    if (arg0 == 1)
        set02150550((volatile u32 *)0x4001000, arg1);
    else
        set02150550((volatile u32 *)0x4000000, arg1);
}

static inline void clr021505a4(volatile u32 *reg, u32 v)
{
    u32 cur = (*reg & 0x1F00) >> 8;
    *reg = (*reg & ~0x1F00) | ((~v & cur) << 8);
}
extern "C" void DWCi_GXlInvisible(s32 arg0, u32 arg1)
{
    if (arg0 == 1)
        clr021505a4((volatile u32 *)0x4001000, arg1);
    else
        clr021505a4((volatile u32 *)0x4000000, arg1);
}

extern "C" asm void DWCi_GXlSetWndPosition(void)
{
    cmp r0, #1
    bne @L_02150680
    cmp r1, #0
    ldrh r0, [r2]
    ldrh r3, [r2, #2]
    ldrh r1, [r2, #4]
    ldrh r12, [r2, #6]
    bne @L_02150650
    mov r2, r0, lsl #8
    mov r0, r3, lsl #8
    and r3, r2, #0xff00
    and r1, r1, #0xff
    orr r3, r3, r1
    ldr r2, =0x4001040
    and r1, r0, #0xff00
    and r0, r12, #0xff
    strh r3, [r2]
    orr r0, r1, r0
    strh r0, [r2, #4]
    bx lr
@L_02150650:
    mov r2, r0, lsl #8
    mov r0, r3, lsl #8
    and r3, r2, #0xff00
    and r1, r1, #0xff
    orr r3, r3, r1
    ldr r2, =0x4001042
    and r1, r0, #0xff00
    and r0, r12, #0xff
    strh r3, [r2]
    orr r0, r1, r0
    strh r0, [r2, #4]
    bx lr
@L_02150680:
    cmp r1, #0
    ldrh r0, [r2]
    ldrh r3, [r2, #2]
    ldrh r1, [r2, #4]
    ldrh r12, [r2, #6]
    bne @L_021506c8
    mov r2, r0, lsl #8
    mov r0, r3, lsl #8
    and r3, r2, #0xff00
    and r1, r1, #0xff
    orr r3, r3, r1
    ldr r2, =0x4000040
    and r1, r0, #0xff00
    and r0, r12, #0xff
    strh r3, [r2]
    orr r0, r1, r0
    strh r0, [r2, #4]
    bx lr
@L_021506c8:
    mov r2, r0, lsl #8
    mov r0, r3, lsl #8
    and r3, r2, #0xff00
    and r1, r1, #0xff
    orr r3, r3, r1
    ldr r2, =0x4000042
    and r1, r0, #0xff00
    and r0, r12, #0xff
    strh r3, [r2]
    orr r0, r1, r0
    strh r0, [r2, #4]
    bx lr
}

extern "C" asm void DWCi_GXlSetWndPlane(void)
{
    cmp r1, #3
    addls pc, pc, r1, lsl #2
    bx lr
    b @L_02150724
    b @L_02150774
    b @L_021507c4
    b @L_02150814
@L_02150724:
    cmp r0, #1
    bne @L_02150750
    ldr r0, =0x4001048
    cmp r3, #0
    ldrh r0, [r0]
    bic r0, r0, #0x3f
    orr r1, r0, r2
    ldr r0, =0x4001048
    orrne r1, r1, #0x20
    strh r1, [r0]
    bx lr
@L_02150750:
    ldr r0, =0x4000048
    cmp r3, #0
    ldrh r0, [r0]
    bic r0, r0, #0x3f
    orr r1, r0, r2
    ldr r0, =0x4000048
    orrne r1, r1, #0x20
    strh r1, [r0]
    bx lr
@L_02150774:
    cmp r0, #1
    bne @L_021507a0
    ldr r0, =0x4001048
    cmp r3, #0
    ldrh r0, [r0]
    bic r0, r0, #0x3f00
    orr r1, r0, r2, lsl #8
    ldr r0, =0x4001048
    orrne r1, r1, #0x2000
    strh r1, [r0]
    bx lr
@L_021507a0:
    ldr r0, =0x4000048
    cmp r3, #0
    ldrh r0, [r0]
    bic r0, r0, #0x3f00
    orr r1, r0, r2, lsl #8
    ldr r0, =0x4000048
    orrne r1, r1, #0x2000
    strh r1, [r0]
    bx lr
@L_021507c4:
    cmp r0, #1
    bne @L_021507f0
    ldr r0, =0x400104a
    cmp r3, #0
    ldrh r0, [r0]
    bic r0, r0, #0x3f00
    orr r1, r0, r2, lsl #8
    ldr r0, =0x400104a
    orrne r1, r1, #0x2000
    strh r1, [r0]
    bx lr
@L_021507f0:
    ldr r0, =0x400004a
    cmp r3, #0
    ldrh r0, [r0]
    bic r0, r0, #0x3f00
    orr r1, r0, r2, lsl #8
    ldr r0, =0x400004a
    orrne r1, r1, #0x2000
    strh r1, [r0]
    bx lr
@L_02150814:
    cmp r0, #1
    bne @L_02150840
    ldr r0, =0x400104a
    cmp r3, #0
    ldrh r0, [r0]
    bic r0, r0, #0x3f
    orr r1, r0, r2
    ldr r0, =0x400104a
    orrne r1, r1, #0x20
    strh r1, [r0]
    bx lr
@L_02150840:
    ldr r0, =0x400004a
    cmp r3, #0
    ldrh r0, [r0]
    bic r0, r0, #0x3f
    orr r1, r0, r2
    ldr r0, =0x400004a
    orrne r1, r1, #0x20
    strh r1, [r0]
    bx lr
}

extern "C" void func_ov016_02150874(s32 arg0)
{
    MI_CpuFill8(arg0, 0, 0x40000);
    s32 v1 = NNS_FndCreateExpHeapEx(arg0, 0x40000, 0);
    *(s32 *)(data_ov016_02158b64) = v1;
    if (v1 != 0)
        return;
    OS_Terminate(v1, (s32)data_ov016_02158b64);
}

extern "C" s32 DWCi_HEAPlEnd(void)
{
    NNS_FndDestroyExpHeap(*(s32 *)(data_ov016_02158b64));
    *(s32 *)(data_ov016_02158b64) = 0;
    return 0;
}

extern "C" asm s32 DWCi_HEAPlAlloc(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r0, #1
    mov r4, r1
    bl OS_DisableIrqMask
    ldr r1, =data_ov016_02158b64
    mov r5, r0
    ldr r0, [r1]
    mov r1, r6
    mov r2, r4
    bl NNS_FndAllocFromExpHeapEx
    movs r4, r0
    bne @L_02150914
    bl OS_Terminate
@L_02150914:
    mov r0, r5
    bl OS_EnableIrqMask
    mov r0, r4
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 DWCi_HEAPlAllocEx(s32 arg0)
{
    s32 v0 = DWCi_HEAPlAlloc(arg0);
    MI_CpuFill8(v0, 0, arg0);
    return v0;
}

extern "C" asm s32 DWCi_HEAPlFree_(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r0, #1
    bl OS_DisableIrqMask
    ldr r1, [r5]
    mov r4, r0
    cmp r1, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, =data_ov016_02158b64
    ldr r0, [r0]
    bl NNS_FndFreeToExpHeap
    mov r0, r4
    bl OS_EnableIrqMask
    mov r0, #0
    str r0, [r5]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void DWCi_HEAPlFree2(s32 arg0)
{
    s32 v0 = OS_DisableIrqMask(1);
    if (arg0 == 0)
        return;
    NNS_FndFreeToExpHeap(*(s32 *)(data_ov016_02158b64), arg0);
    OS_EnableIrqMask(v0);
}

extern "C" void func_ov016_021509cc(void)
{
    u8 buf[8];
    s32 k;
    *(s32 *)((u8 *)data_ov016_02158b68 + 4) = ((s32 (*)(...))DWCi_HEAPlAllocEx)(0x3A, 4);
    if (((s32 (*)(...))TP_GetUserInfo)(buf) == 0)
        ((s32 (*)(...))OS_Terminate)();
    ((s32 (*)(...))TP_SetCalibrateParam)(buf);
    ((s32 (*)(...))TP_RequestAutoSamplingStartAsync)(0, 4, *(s32 *)((u8 *)data_ov016_02158b68 + 4), 5);
    k = 2;
    ((s32 (*)(...))TP_WaitBusy)(k);
    if (((s32 (*)(...))TP_CheckError)(k) != 0)
        ((s32 (*)(...))OS_Terminate)();
    ((s32 (*)(...))DWCi_IPTlRead)();
}

extern "C" s32 DWCi_IPTlEnd(void)
{
    s32 r4;
    s32 v2;
    s32 v3;
    r4 = 4;
    do {
        TP_RequestAutoSamplingStopAsync();
        TP_WaitBusy(r4);
        v2 = TP_CheckError(r4);
    } while (v2 != 0);
    v3 = DWCi_HEAPlFree_((s32)data_ov016_02158b6c);
    return v3;
}

extern "C" void DWCi_IPTlRead(void)
{
    readKey();
    readTouch();
}

extern "C" asm s32 readKey(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r0, =0x4000130
    ldr r1, =0x2ffffa8
    ldrh r2, [r0]
    ldrh r0, [r1]
    ldr r4, =data_ov016_02158b68
    mov r3, #0
    orr r0, r2, r0
    eor r0, r0, r1, lsr #12
    and r0, r0, r1, lsr #12
    mov r1, r0, lsl #0x10
    mov r5, r1, lsr #0x10
    and r2, r5, #0x40
    and r5, r5, #0x20
    mvn r2, r2, lsl #1
    ldr r0, [r4, #4]
    and r1, r2, r1, lsr #16
    mvn r5, r5, asr #1
    and r1, r5, r1
    mov r1, r1, lsl #0x10
    ldrh r2, [r0, #0x30]
    mov r12, r1, lsr #0x10
    mov r5, #0x28
    eor r2, r2, r1, lsr #16
    and r2, r2, r1, lsr #16
    strh r2, [r0, #0x32]
    ldrh r2, [r0, #0x30]
    ldr r0, [r4, #4]
    eor r1, r2, r1, lsr #16
    and r1, r2, r1
    strh r1, [r0, #0x36]
    ldr r0, [r4, #4]
    mov r2, #1
    strh r12, [r0, #0x30]
    ldr r1, [r4, #4]
    ldrh r0, [r1, #0x32]
    strh r0, [r1, #0x34]
    ldr r0, =data_ov016_02158b70
    mov r1, r3
@L_02150b2c:
    mov r6, r2, lsl r3
    mov lr, r6, lsl #0x10
    tst r12, lr, lsr #16
    streqb r1, [r0, r3]
    beq @L_02150b80
    ldrb r6, [r0, r3]
    add r7, r6, #1
    and r6, r7, #0xff
    strb r7, [r0, r3]
    cmp r6, #0x28
    ldreq r7, [r4, #4]
    ldreqh r6, [r7, #0x34]
    orreq r6, r6, lr, lsr #16
    streqh r6, [r7, #0x34]
    beq @L_02150b80
    cmp r6, #0x2f
    ldreq r7, [r4, #4]
    streqb r5, [r0, r3]
    ldreqh r6, [r7, #0x34]
    orreq r6, r6, lr, lsr #16
    streqh r6, [r7, #0x34]
@L_02150b80:
    add r3, r3, #1
    cmp r3, #0xe
    blt @L_02150b2c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm s32 readTouch(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #8
    ldr r0, =data_ov016_02158b68
    mov r5, #0
    ldr r0, [r0, #4]
    ldrb r0, [r0, #0x38]
    mov r0, r0, lsl #0x1f
    movs r0, r0, lsr #0x1f
    movne r6, #1
    moveq r6, #0
    bl TP_GetLatestIndexInAuto
    ldr r7, =data_ov016_02158b68
    mov r4, r5
    ldr r3, [r7, #4]
    mov r8, #5
    ldrh r2, [r3, #0x28]
    ldrh r1, [r3, #0x2a]
    strh r2, [r3, #0x2c]
    strh r1, [r3, #0x2e]
@L_02150bec:
    ldr r1, [r7, #4]
    add r1, r1, r0, lsl #3
    ldrh r2, [r1, #4]
    cmp r2, #1
    ldreqh r2, [r1, #6]
    cmpeq r2, #0
    bne @L_02150c30
    add r0, sp, #0
    mov r5, #1
    bl TP_GetCalibratedPoint
    ldr r1, =data_ov016_02158b68
    ldrh r0, [sp]
    ldr r2, [r1, #4]
    ldrh r1, [sp, #2]
    add r2, r2, #0x28
    bl DWCi_InputCoord
    b @L_02150c48
@L_02150c30:
    mov r1, r8
    add r4, r4, #1
    add r0, r0, #4
    bl FX_ModS32
    cmp r4, #4
    blt @L_02150bec
@L_02150c48:
    ldr r0, =data_ov016_02158b68
    eor r7, r5, r6
    ldr r4, [r0, #4]
    and r1, r5, r7
    ldrb r3, [r4, #0x38]
    and r2, r1, #0xff
    and r1, r6, r7
    bic r3, r3, #2
    mov r2, r2, lsl #0x1f
    orr r2, r3, r2, lsr #30
    strb r2, [r4, #0x38]
    ldr r4, [r0, #4]
    and r1, r1, #0xff
    ldrb r3, [r4, #0x38]
    mov r2, r1, lsl #0x1f
    cmp r5, #0
    bic r3, r3, #8
    orr r2, r3, r2, lsr #28
    strb r2, [r4, #0x38]
    ldr r3, [r0, #4]
    and r1, r5, #1
    ldrb r2, [r3, #0x38]
    addeq sp, sp, #8
    bic r2, r2, #1
    orr r1, r2, r1
    strb r1, [r3, #0x38]
    ldr r3, [r0, #4]
    ldrb r2, [r3, #0x38]
    mov r1, r2, lsl #0x1e
    mov r1, r1, lsr #0x1f
    bic r2, r2, #4
    mov r1, r1, lsl #0x1f
    orr r1, r2, r1, lsr #29
    strb r1, [r3, #0x38]
    moveq r1, #0
    streqb r1, [r0, #1]
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldrb r1, [r0, #1]
    add r2, r1, #1
    and r1, r2, #0xff
    cmp r1, #0x28
    strb r2, [r0, #1]
    ldreq r1, [r0, #4]
    addeq sp, sp, #8
    ldreqb r0, [r1, #0x38]
    orreq r0, r0, #4
    streqb r0, [r1, #0x38]
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    cmp r1, #0x2f
    addne sp, sp, #8
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r3, [r0, #4]
    mov r1, #0x28
    ldrb r2, [r3, #0x38]
    orr r2, r2, #4
    strb r2, [r3, #0x38]
    strb r1, [r0, #1]
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" s32 DWCi_IPTlCheckTrigger(s32 arg0)
{
    if (((*(u16 *)(((u8 *)0x2FFFFA8)) & 0x8000) >> 0xF) != 0) {
        return 0;
    } else {
        if (arg0 == (arg0 & *(u16 *)(*(u8 * *)(data_ov016_02158b68 + 0x4) + 0x32))) {
            arg0 = 1;
        } else {
            arg0 = 0;
        }
        return arg0;
    }
}

extern "C" s32 DWCi_IPTlCheckRepeat(s32 arg0)
{
    if (((*(u16 *)(((u8 *)0x2FFFFA8)) & 0x8000) >> 0xF) != 0) {
        return 0;
    } else {
        if (arg0 == (arg0 & *(u16 *)(*(u8 * *)(data_ov016_02158b68 + 0x4) + 0x34))) {
            arg0 = 1;
        } else {
            arg0 = 0;
        }
        return arg0;
    }
}

extern "C" s32 DWCi_IPTlCheckRelease(s32 arg0)
{
    if (((*(u16 *)(((u8 *)0x2FFFFA8)) & 0x8000) >> 0xF) != 0) {
        return 0;
    } else {
        if (arg0 == (arg0 & *(u16 *)(*(u8 * *)(data_ov016_02158b68 + 0x4) + 0x36))) {
            arg0 = 1;
        } else {
            arg0 = 0;
        }
        return arg0;
    }
}

extern "C" s32 DWCi_TPlCheck(u8 *arg0)
{
    s32 r2;
    u8 *r3;
    if (((*(u16 *)(((u8 *)0x2FFFFA8)) & 0x8000) >> 0xF) != 0) {
        return 0;
    } else {
        r3 = (u8 *)*(s32 *)(data_ov016_02158b68 + 0x4);
        if (((u32)(*(u8 *)(r3 + 0x38) << 0x1F) >> 0x1F) == 0) {
            return 0;
        } else {
            r2 = *(u16 *)(r3 + 0x28);
            if ((u32)*(u16 *)(arg0) > (u32)r2) {
                return 0;
            } else {
                if ((u32)*(u16 *)(arg0 + 0x4) < (u32)r2) {
                    return 0;
                } else {
                    r2 = *(u16 *)(r3 + 0x2A);
                    if ((u32)*(u16 *)(arg0 + 0x2) > (u32)r2) {
                        return 0;
                    } else {
                        if ((u32)*(u16 *)(arg0 + 0x6) >= (u32)r2) {
                            arg0 = (u8 *)1;
                        } else {
                            arg0 = (u8 *)0;
                        }
                        return (s32)arg0;
                    }
                }
            }
        }
    }
}

extern "C" s32 DWCi_TPlCheckTrigger(u8 *arg0)
{
    s32 r2;
    u8 *r3;
    if (((*(u16 *)(((u8 *)0x2FFFFA8)) & 0x8000) >> 0xF) != 0) {
        return 0;
    } else {
        r3 = (u8 *)*(s32 *)(data_ov016_02158b68 + 0x4);
        if (((u32)(*(u8 *)(r3 + 0x38) << 0x1E) >> 0x1F) == 0) {
            return 0;
        } else {
            r2 = *(u16 *)(r3 + 0x28);
            if ((u32)*(u16 *)(arg0) > (u32)r2) {
                return 0;
            } else {
                if ((u32)*(u16 *)(arg0 + 0x4) < (u32)r2) {
                    return 0;
                } else {
                    r2 = *(u16 *)(r3 + 0x2A);
                    if ((u32)*(u16 *)(arg0 + 0x2) > (u32)r2) {
                        return 0;
                    } else {
                        if ((u32)*(u16 *)(arg0 + 0x6) >= (u32)r2) {
                            arg0 = (u8 *)1;
                        } else {
                            arg0 = (u8 *)0;
                        }
                        return (s32)arg0;
                    }
                }
            }
        }
    }
}

extern "C" s32 DWCi_TPlCheckRepeat(u8 *arg0)
{
    s32 r2;
    u8 *r3;
    if (((*(u16 *)(((u8 *)0x2FFFFA8)) & 0x8000) >> 0xF) != 0) {
        return 0;
    } else {
        r3 = (u8 *)*(s32 *)(data_ov016_02158b68 + 0x4);
        if (((u32)(*(u8 *)(r3 + 0x38) << 0x1D) >> 0x1F) == 0) {
            return 0;
        } else {
            r2 = *(u16 *)(r3 + 0x28);
            if ((u32)*(u16 *)(arg0) > (u32)r2) {
                return 0;
            } else {
                if ((u32)*(u16 *)(arg0 + 0x4) < (u32)r2) {
                    return 0;
                } else {
                    r2 = *(u16 *)(r3 + 0x2A);
                    if ((u32)*(u16 *)(arg0 + 0x2) > (u32)r2) {
                        return 0;
                    } else {
                        if ((u32)*(u16 *)(arg0 + 0x6) >= (u32)r2) {
                            arg0 = (u8 *)1;
                        } else {
                            arg0 = (u8 *)0;
                        }
                        return (s32)arg0;
                    }
                }
            }
        }
    }
}

extern "C" s32 DWCi_TPlCheckRelease(u8 *arg0)
{
    s32 r2;
    u8 *r3;
    if (((*(u16 *)(((u8 *)0x2FFFFA8)) & 0x8000) >> 0xF) != 0) {
        return 0;
    } else {
        r3 = (u8 *)*(s32 *)(data_ov016_02158b68 + 0x4);
        if (((u32)(*(u8 *)(r3 + 0x38) << 0x1C) >> 0x1F) == 0) {
            return 0;
        } else {
            r2 = *(u16 *)(r3 + 0x28);
            if ((u32)*(u16 *)(arg0) > (u32)r2) {
                return 0;
            } else {
                if ((u32)*(u16 *)(arg0 + 0x4) < (u32)r2) {
                    return 0;
                } else {
                    r2 = *(u16 *)(r3 + 0x2A);
                    if ((u32)*(u16 *)(arg0 + 0x2) > (u32)r2) {
                        return 0;
                    } else {
                        if ((u32)*(u16 *)(arg0 + 0x6) >= (u32)r2) {
                            arg0 = (u8 *)1;
                        } else {
                            arg0 = (u8 *)0;
                        }
                        return (s32)arg0;
                    }
                }
            }
        }
    }
}

extern "C" asm void DWCi_TPlCheckATrigger(void)
{
    stmdb sp!, {r3, lr}
    sub sp, sp, #8
    ldr r1, =0x2ffffa8
    ldrh r1, [r1]
    and r1, r1, #0x8000
    movs r1, r1, asr #0xf
    addne sp, sp, #8
    movne r0, #0
    ldmneia sp!, {r3, pc}
    ldrh r12, [r0]
    ldrh r3, [r0, #2]
    ldrh r2, [r0, #4]
    ldrh r1, [r0, #6]
    add r0, sp, #0
    add r2, r12, r2
    add r1, r3, r1
    strh r12, [sp]
    strh r3, [sp, #2]
    strh r2, [sp, #4]
    strh r1, [sp, #6]
    bl DWCi_TPlCheckTrigger
    add sp, sp, #8
    ldmia sp!, {r3, pc}
}

extern "C" asm void DWCi_TPlGet(void)
{
    ldr r1, =0x2ffffa8
    ldrh r1, [r1]
    and r1, r1, #0x8000
    movs r1, r1, asr #0xf
    movne r0, #0
    bxne lr
    ldr r1, =data_ov016_02158b68
    ldr r3, [r1, #4]
    ldrb r1, [r3, #0x38]
    mov r1, r1, lsl #0x1f
    movs r1, r1, lsr #0x1f
    ldrneh r2, [r3, #0x28]
    ldrneh r1, [r3, #0x2a]
    strneh r2, [r0]
    strneh r1, [r0, #2]
    movne r0, #1
    bxne lr
    ldrh r2, [r3, #0x2c]
    ldrh r1, [r3, #0x2e]
    strh r2, [r0]
    strh r1, [r0, #2]
    mov r0, #0
    bx lr
}

extern "C" void func_ov016_021510dc(void)
{
    if (*(u8 *)data_ov016_02158b68 != 0) {
        if ((*(volatile u16 *)0x2FFFFA8 & 0x8000) >> 15)
            return;
        if (((s32 (*)(...))PM_SetLCDPower)(1) == 0)
            return;
        ((s32 (*)(...))OS_WaitVBlankIntr)();
        ((s32 (*)(...))GX_DispOn)();
        *(volatile u32 *)0x4001000 |= 0x10000;
        ((s32 (*)(...))OS_WaitVBlankIntr)();
        *(u8 *)data_ov016_02158b68 = 0;
    } else {
        if (!((*(volatile u16 *)0x2FFFFA8 & 0x8000) >> 15))
            return;
        ((s32 (*)(...))OS_WaitVBlankIntr)();
        ((s32 (*)(...))GX_DispOff)();
        *(volatile u32 *)0x4001000 &= ~0x10000;
        ((s32 (*)(...))OS_WaitVBlankIntr)();
        if (((s32 (*)(...))PM_SetLCDPower)(0) != 0)
            *(u8 *)data_ov016_02158b68 = 1;
    }
}

extern "C" void func_ov016_0215118c(void)
{
    s32 t0 = *(s32 *)(((u8 *)0x4000210));
    *(s32 *)(data_ov016_02158b80 + 0x4) = t0;
    OS_SetIrqMask(0x40018, t0);
    OS_EnableIrqMask(1);
    s32 v2 = OS_GetIrqFunction(1);
    *(s32 *)(data_ov016_02158b80) = v2;
    OS_SetIrqFunction(1, (s32)initVBlank);
    OS_ResetRequestIrqMask(1);
    u16 t1 = *(u16 *)(((u8 *)(0x4000210 - 8)));
    *(u16 *)(((u8 *)(0x4000210 - 8))) = 1;
    OS_EnableInterrupts(t1, (0x4000210 - 8));
}

extern "C" void DWCi_ITRlEnd(void)
{
    u16 t0 = *(u16 *)(((u8 *)0x4000208));
    *(u16 *)(((u8 *)0x4000208)) = 0;
    s32 t1 = *(s32 *)(data_ov016_02158b80 + 0x4);
    OS_SetIrqMask(t1, t0, 0x4000208);
    s32 t2 = *(s32 *)(data_ov016_02158b80);
    OS_SetIrqFunction(1, t2);
}

extern "C" asm void initVBlank(void)
{
    stmdb sp!, {r3, lr}
    mov r0, #1
    bl DWCi_TSKlAct
    ldr r0, =0x27e0000
    add r0, r0, #0x3000
    ldr r1, [r0, #0xff8]
    orr r1, r1, #1
    str r1, [r0, #0xff8]
    ldmia sp!, {r3, pc}
}

extern "C" void DWCi_LSTlForm(void)
{
    s32 v0 = ((s32 (*)(...))DWCi_HEAPlAllocEx)(0x10, 4);
    *(s32 *)(((u8 *)v0)) = 0;
    *(s32 *)(((u8 *)v0) + 0x4) = (v0 + 8);
    *(s32 *)(((u8 *)v0) + 0x8) = v0;
    *(s32 *)(((u8 *)v0) + 0xC) = 0;
}

extern "C" asm s32 DWCi_LSTlDelete(...)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, lr}
    add r0, sp, #8
    bl DWCi_HEAPlFree_
    ldmia sp!, {r3, lr}
    add sp, sp, #0x10
    bx lr
}

extern "C" void DWCi_LSTlErase(N021512a0 *arg0)
{
    u32 m = ((u32 (*)(u32))OS_DisableIrqMask)(1);
    arg0->a->b = arg0->b;
    arg0->b->a = arg0->a;
    arg0->b = 0;
    arg0->a = 0;
    ((void (*)(u32))OS_EnableIrqMask)(m);
}

extern "C" asm s32 DWCi_LSTlInsert(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r0, #1
    mov r4, r1
    bl OS_DisableIrqMask
    ldr r1, [r5]
    str r4, [r1, #4]
    ldr r1, [r5]
    stmia r4, {r1, r5}
    str r4, [r5]
    bl OS_EnableIrqMask
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void DWCi_LSTlPushBack(s32 arg0)
{
    DWCi_LSTlInsert((arg0 + 8));
}

extern "C" void DWCi_LSTlPushFront(u8 *arg0)
{
    DWCi_LSTlInsert(*(s32 *)(arg0 + 0x4));
}

extern "C" s32 DWCi_OBJlInit(void)
{
    s32 r4;
    s32 r5;
    s32 r6;
    s32 r7;
    s32 v0;
    s32 v2;
    s32 v3;
    s32 t0;
    u8 *t1;
    u8 *t2;
    v0 = ((s32 (*)(...))DWCi_HEAPlAllocEx)(0x80C, 4);
    *(s32 *)(data_ov016_02158b88) = v0;
    MIi_CpuClearFast(0x200, v0, 0x800);
    r7 = 0;
    do {
        t0 = (*(s32 *)(data_ov016_02158b88) + (r7 << 10));
        v2 = DWCi_QUElFormEx(0x40, t0, 8);
        t1 = (u8 *)(*(s32 *)(data_ov016_02158b88) + (r7 << 2));
        *(s32 *)(t1 + 0x800) = v2;
        r4 = (s32)data_ov016_02158b88;
        r5 = 8;
        r6 = 0x40;
        r7 = (r7 + 1);
    } while (r7 < 2);
    v3 = DWCi_TSKlForm(1, (s32)taskTransfer, 0, 0xC8);
    t2 = (u8 *)*(s32 *)(data_ov016_02158b88);
    *(s32 *)(t2 + 0x808) = v3;
    return v3;
}

extern "C" void taskTransfer(void)
{
    DC_FlushRange(*(s32 *)(data_ov016_02158b88), 0x800);
    GX_LoadOAM(*(s32 *)(data_ov016_02158b88), 0, 0x400);
    GXS_LoadOAM((*(s32 *)(data_ov016_02158b88) + 0x400), 0, 0x400);
}

extern "C" void DWCi_OBJlEnd(void)
{
    s32 t0 = *(s32 *)(*(u8 * *)(data_ov016_02158b88) + 0x808);
    ((s32 (*)(...))DWCi_TSKlDeleteEx)(1, t0);
    DWCi_HEAPlFree_((s32)data_ov016_02158b88_b);
}

extern "C" asm s32 DWCi_OBJlFormGx(...)
{
    ldr r1, =data_ov016_02158b88
    ldr r12, =DWCi_QUElPopBack
    ldr r1, [r1]
    add r0, r1, r0, lsl #2
    ldr r0, [r0, #0x800]
    bx r12
}

extern "C" s32 DWCi_OBJlDelete(u8 *arg0)
{
    s32 r2;
    s32 r3;
    s32 v0;
    s32 t0;
    s32 t2;
    t0 = ((*(s32 *)(arg0) & -0x3E000301) | 0x200);
    *(s32 *)(arg0) = t0;
    r3 = *(s32 *)(((u8 *)&data_ov016_02158b88));
    r2 = 0;
    if ((u32)arg0 >= (u32)(r3 + 0x400)) {
        r2 = 1;
    }
    t2 = *(s32 *)(((u8 *)(r3 + (r2 << 2))) + 0x800);
    v0 = DWCi_QUElPushBack(t2, (s32)arg0, r2, r3);
    return v0;
}

extern "C" s32 DWCi_OBJlGetOam(s32 arg0, s32 arg1)
{
    return ((*(s32 *)(data_ov016_02158b88) + (arg0 << 10)) + (arg1 << 3));
}

extern "C" s32 DWCi_OVRlInit(void)
{
    s32 r0;
    s32 r4;
    s32 r5;
    s32 r6;
    s32 r7;
    s32 r8;
    s32 r9;
    s32 r11;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v4;
    s32 t0;
    u8 *t1;
    u8 *t2;
    u8 *t3;
    u8 *t4;
    s32 t5;
    s32 t6;
    s32 t7;
    s32 t8;
    v0 = ((s32 (*)(...))DWCi_HEAPlAllocEx)(0x340, 4);
    *(s32 *)(data_ov016_02158b8c) = v0;
    r9 = 0;
    do {
        t0 = (*(s32 *)(data_ov016_02158b8c) + (r9 * 0x1A0));
        v1 = DWCi_QUElFormEx(0x20, t0, 0xC);
        t1 = (u8 *)(*(s32 *)(data_ov016_02158b8c) + (r9 * 0x1A0));
        *(s32 *)(t1 + 0x19C) = v1;
        v2 = ((s32 (*)(...))DWCi_LSTlForm)(v1, (s32)t1);
        t2 = (u8 *)(*(s32 *)(data_ov016_02158b8c) + (r9 * 0x1A0));
        *(s32 *)(t2 + 0x198) = v2;
        t3 = (u8 *)((*(s32 *)(data_ov016_02158b8c) + (r9 * 0x1A0)) + 0x100);
        *(u16 *)(t3 + 0x88) = 0x300;
        t4 = (u8 *)((*(s32 *)(data_ov016_02158b8c) + (r9 * 0x1A0)) + 0x100);
        *(u16 *)(t4 + 0x94) = 0x400;
        t5 = *(s32 *)(((u8 *)(*(s32 *)(data_ov016_02158b8c) + (r9 * 0x1A0))) + 0x198);
        t6 = ((*(s32 *)(data_ov016_02158b8c) + (r9 * 0x1A0)) + 0x180);
        ((s32 (*)(...))DWCi_LSTlPushFront)(t5, t6);
        t7 = *(s32 *)(((u8 *)(*(s32 *)(data_ov016_02158b8c) + (r9 * 0x1A0))) + 0x198);
        t8 = ((*(s32 *)(data_ov016_02158b8c) + (r9 * 0x1A0)) + 0x18C);
        v4 = ((s32 (*)(...))DWCi_LSTlPushBack)(t7, t8);
        r0 = v4;
        r4 = 0x1A0;
        r5 = (s32)data_ov016_02158b8c;
        r6 = 0x400;
        r7 = 0x300;
        r8 = 0x20;
        r9 = (r9 + 1);
        r11 = 0xC;
    } while (r9 < 2);
    return r0;
}

extern "C" asm void DWCi_OVRlAlloc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    mov r0, #0x1a0
    mul r7, r10, r0
    ldr r4, =data_ov016_02158b8c
    mov r5, r1
    ldr r0, [r4]
    mov r9, r2
    add r0, r0, r7
    ldr r0, [r0, #0x19c]
    mov r8, r3
    bl DWCi_QUElPopBack
    add r1, r5, #3
    bic r1, r1, #3
    mov r5, r0
    mov r6, r1, asr #2
    mov r0, #1
    strh r6, [r5, #0xa]
    bl OS_DisableIrqMask
    mov r11, r0
    ldr r1, [r4]
    mov r0, #0x1a0
    mla r0, r10, r0, r1
    cmp r9, #0
    beq @L_02151644
    add r4, r0, #0x180
    add r0, r0, #0x18c
    cmp r4, r0
    beq @L_02151628
    add r0, r1, r7
    add r1, r0, #0x18c
@L_021515ec:
    ldr r0, [r4, #4]
    ldrh r9, [r4, #8]
    ldrh r3, [r4, #0xa]
    ldrh r2, [r0, #8]
    add r9, r9, r3
    add r3, r9, r6
    cmp r3, r2
    bgt @L_0215161c
    mov r1, r5
    strh r9, [r5, #8]
    bl DWCi_LSTlInsert
    b @L_02151628
@L_0215161c:
    mov r4, r0
    cmp r0, r1
    bne @L_021515ec
@L_02151628:
    ldr r0, =data_ov016_02158b8c
    ldr r0, [r0]
    add r0, r0, r7
    add r0, r0, #0x18c
    cmp r4, r0
    bne @L_021516b8
    b @L_021516b4
@L_02151644:
    add r4, r0, #0x18c
    add r0, r0, #0x180
    cmp r4, r0
    beq @L_0215169c
    add r0, r1, r7
    add r0, r0, #0x180
@L_0215165c:
    ldr r9, [r4]
    ldrh r3, [r4, #8]
    ldrh r2, [r9, #8]
    ldrh r1, [r9, #0xa]
    sub r3, r3, r6
    add r1, r2, r1
    cmp r3, r1
    blt @L_02151690
    mov r0, r4
    mov r1, r5
    strh r3, [r5, #8]
    bl DWCi_LSTlInsert
    b @L_0215169c
@L_02151690:
    mov r4, r9
    cmp r9, r0
    bne @L_0215165c
@L_0215169c:
    ldr r0, =data_ov016_02158b8c
    ldr r0, [r0]
    add r0, r0, r7
    add r0, r0, #0x180
    cmp r4, r0
    bne @L_021516b8
@L_021516b4:
    bl OS_Terminate
@L_021516b8:
    ldrh r1, [r5, #8]
    mov r0, r11
    str r1, [r8]
    bl OS_EnableIrqMask
    mov r0, r5
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 DWCi_OVRlFree(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, #0
    bl DWCi_LSTlErase
    ldr r0, =data_ov016_02158b8c
    ldr r1, [r0]
    add r0, r1, #0x1a0
    cmp r5, r0
    movhs r4, #1
    mov r0, #0x1a0
    mla r0, r4, r0, r1
    ldr r0, [r0, #0x19c]
    mov r1, r5
    bl DWCi_QUElPushBack
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 DWCi_STRlNLen(u8 *arg0, s32 arg1)
{
    s32 r3;
    r3 = 0;
    if (arg1 > 0) {
        do {
            if (*(u8 *)(arg0 + r3) == 0)
                break;
            r3 = (r3 + 1);
        } while (r3 < arg1);
    }
    return r3;
}

extern "C" s32 DWCi_STRlConvertStringAsciiToUnicode(u8 *arg0, u8 *arg1, s32 arg2)
{
    s32 r3;
    s32 r12;
    s32 lr;
    r12 = (arg2 - 1);
    lr = 0;
    if (r12 > 0) {
        do {
            r3 = *(u8 *)(arg1 + lr);
            if (r3 == 0)
                break;
            *(u16 *)(arg0 + (lr << 1)) = r3;
            lr = (lr + 1);
        } while (lr < r12);
    }
    *(u16 *)(arg0 + (lr << 1)) = 0;
    return lr;
}

extern "C" void func_ov016_02151788(void)
{
    s32 v0 = GX_DisableBankForBG();
    *(s32 *)(data_ov016_02158b90) = v0;
    s32 v1 = GX_DisableBankForOBJ();
    *(s32 *)(data_ov016_02158b90 + 0x4) = v1;
    s32 v2 = func_02004eb4();
    *(s32 *)(data_ov016_02158b90 + 0x8) = v2;
    s32 v3 = GX_DisableBankForOBJExtPltt();
    *(s32 *)(data_ov016_02158b90 + 0xC) = v3;
    s32 v4 = func_02004efc();
    *(s32 *)(data_ov016_02158b90 + 0x10) = v4;
    s32 v5 = func_02004f10();
    *(s32 *)(data_ov016_02158b90 + 0x14) = v5;
    s32 v6 = func_02004f24();
    *(s32 *)(data_ov016_02158b90 + 0x18) = v6;
    s32 v7 = GX_DisableBankForSubBG();
    *(s32 *)(data_ov016_02158b90 + 0x1C) = v7;
    s32 v8 = GX_DisableBankForSubOBJ();
    *(s32 *)(data_ov016_02158b90 + 0x20) = v8;
    s32 v9 = func_02004f88();
    *(s32 *)(data_ov016_02158b90 + 0x24) = v9;
    s32 v10 = GX_DisableBankForSubOBJExtPltt();
    *(s32 *)(data_ov016_02158b90 + 0x28) = v10;
    s32 v11 = func_02004f38();
    *(s32 *)(data_ov016_02158b90 + 0x2C) = v11;
    s32 v12 = GX_DisableBankForLCDC();
    *(s32 *)(data_ov016_02158b90 + 0x30) = v12;
    GX_SetBankForARM7(*(s32 *)(data_ov016_02158b90 + 0x2C));
    clearVram();
}

extern "C" s32 DWCi_RepairVram(void)
{
    GX_DisableBankForBG();
    GX_DisableBankForOBJ();
    GX_DisableBankForSubBG();
    GX_DisableBankForSubOBJ();
    clearVram();
    GX_SetBankForBG(*(s32 *)(data_ov016_02158b90));
    GX_SetBankForOBJ(*(s32 *)(data_ov016_02158b90 + 0x4));
    GX_SetBankForBGExtPltt(*(s32 *)(data_ov016_02158b90 + 0x8));
    GX_SetBankForOBJExtPltt(*(s32 *)(data_ov016_02158b90 + 0xC));
    GX_SetBankForTex(*(s32 *)(data_ov016_02158b90 + 0x10));
    GX_SetBankForTexPltt(*(s32 *)(data_ov016_02158b90 + 0x14));
    GX_SetBankForClearImage(*(s32 *)(data_ov016_02158b90 + 0x18));
    GX_SetBankForSubBG(*(s32 *)(data_ov016_02158b90 + 0x1C));
    GX_SetBankForSubOBJ(*(s32 *)(data_ov016_02158b90 + 0x20));
    GX_SetBankForSubBGExtPltt(*(s32 *)(data_ov016_02158b90 + 0x24));
    GX_SetBankForSubOBJExtPltt(*(s32 *)(data_ov016_02158b90 + 0x28));
    GX_SetBankForLCDC(*(s32 *)(data_ov016_02158b90 + 0x30));
    *(u16 *)(((u8 *)0x4000050)) = 0;
    *(u16 *)(((u8 *)(0x4000050 + 0x1000))) = 0;
    *(s32 *)(((u8 *)0x4000050) - 0x40) = 0;
    *(s32 *)(((u8 *)0x4000050) - 0x3C) = 0;
    *(s32 *)(((u8 *)0x4000050) - 0x38) = 0;
    *(s32 *)(((u8 *)0x4000050) - 0x34) = 0;
    *(s32 *)(((u8 *)0x4000050) + 0xFC0) = 0;
    *(s32 *)(((u8 *)0x4001014)) = 0;
    *(s32 *)(((u8 *)0x4001014) + 0x4) = 0;
    *(s32 *)(((u8 *)0x4001014) + 0x8) = 0;
    return 0x4001014;
}

extern "C" void clearVram(void)
{
    GX_SetBankForLCDC(0x1F3);
    MIi_CpuClearFast(0, 0x6800000, 0x40000);
    MIi_CpuClearFast(0, (0x6800000 + 0x80000), 0x24000);
    GX_DisableBankForLCDC();
    MIi_CpuClearFast(0x200, 0x7000000, 0x400);
    MIi_CpuClearFast(0, 0x5000000, 0x400);
    MIi_CpuClearFast(0x200, (0x400 - -0x7000000), 0x400);
    MIi_CpuClearFast(0, (0x5000000 + 0x400), 0x400);
}

extern "C" s32 DWCi_SetLedWireless(void)
{
    s32 local[1];
    s32 v0;
    s32 v1;
    v0 = PM_GetLEDPattern((s32)((u8 *)local));
    if (v0 != 0)
        return v0;
    if (*(s32 *)(((u8 *)local)) == 0xF)
        return *(s32 *)(((u8 *)local));
    v1 = PMi_SendLEDPatternCommand(0xF);
    return v1;
}

extern "C" void DWCi_SetLedNormal(void)
{
    PMi_SendLEDPatternCommand(1);
}

extern "C" asm void func_ov016_02151998(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r0, #0x80
    mov r1, #4
    bl DWCi_HEAPlAllocEx
    ldr r4, =data_ov016_02158bc4
    mov r9, #0
    ldr r8, =data_ov016_02154f80
    str r0, [r4]
    mov r7, r9
    mov r6, #0xff
    mov r5, #1
    mov r11, #0x14
@L_021519c8:
    ldrb r10, [r8, r9]
    ldr r2, [r4]
    mov r1, #4
    mul r0, r10, r11
    add r2, r2, r9, lsl #6
    str r10, [r2, #0x34]
    bl DWCi_HEAPlAllocEx
    ldr r1, [r4]
    mov r2, #0x14
    add r1, r1, r9, lsl #6
    str r0, [r1, #0x3c]
    ldr r1, [r4]
    mov r0, r10
    add r1, r1, r9, lsl #6
    ldr r1, [r1, #0x3c]
    bl DWCi_QUElFormEx
    ldr r1, [r4]
    str r0, [r1, r9, lsl #6]
    mov r0, r10
    bl DWCi_QUElForm
    ldr r1, [r4]
    add r1, r1, r9, lsl #6
    str r0, [r1, #4]
    bl DWCi_LSTlForm
    ldr r1, [r4]
    add r1, r1, r9, lsl #6
    str r0, [r1, #8]
    ldr r0, [r4]
    add r0, r0, r9, lsl #6
    strb r7, [r0, #0x1c]
    ldr r0, [r4]
    add r0, r0, r9, lsl #6
    strb r6, [r0, #0x30]
    ldr r0, [r4]
    add r1, r0, r9, lsl #6
    ldr r0, [r1, #8]
    add r1, r1, #0xc
    bl DWCi_LSTlPushFront
    ldr r1, [r4]
    add r0, r1, r9, lsl #6
    add r1, r1, r9, lsl #6
    ldr r0, [r0, #8]
    add r1, r1, #0x20
    bl DWCi_LSTlPushBack
    ldr r0, [r4]
    add r0, r0, r9, lsl #6
    add r9, r9, #1
    strb r5, [r0, #0x38]
    cmp r9, #2
    blt @L_021519c8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 DWCi_TSKlEnd(void)
{
    s32 r4;
    s32 r5;
    s32 v2;
    s32 t0;
    s32 t1;
    r5 = 0;
    do {
        t0 = *(s32 *)(((u8 *)(*(s32 *)(data_ov016_02158bc4) + (r5 << 6))) + 0x8);
        DWCi_LSTlDelete(t0);
        t1 = *(s32 *)(*(u8 * *)(data_ov016_02158bc4) + (r5 << 6));
        DWCi_QUElDelete(t1);
        r4 = (s32)data_ov016_02158bc4;
        r5 = (r5 + 1);
    } while (r5 < 2);
    v2 = DWCi_HEAPlFree_((s32)data_ov016_02158bc4_b);
    return v2;
}

extern "C" asm void DWCi_TSKlAct(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r5, =data_ov016_02158bc4
    mov r6, r0
    ldr r0, [r5]
    add r2, r0, r6, lsl #6
    ldrb r1, [r2, #0x38]
    cmp r1, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r4, [r2, #0x10]
    add r1, r2, #0x20
    cmp r4, r1
    beq @L_02151b3c
@L_02151b14:
    ldr r1, [r4, #0xc]
    ldr r2, [r4, #8]
    mov r0, r4
    blx r2
    ldr r0, [r5]
    ldr r4, [r4, #4]
    add r1, r0, r6, lsl #6
    add r1, r1, #0x20
    cmp r4, r1
    bne @L_02151b14
@L_02151b3c:
    add r1, r0, r6, lsl #6
    ldr r1, [r1, #0x34]
    mov r4, r6, lsl #6
    mov r5, #0
    cmp r1, #0
    ldmleia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r7, =data_ov016_02158bc4
@L_02151b58:
    add r0, r4, r0
    ldr r0, [r0, #4]
    bl DWCi_QUElPopBack
    movs r1, r0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r6
    bl deleteTcb
    ldr r0, [r7]
    add r5, r5, #1
    add r1, r4, r0
    ldr r1, [r1, #0x34]
    cmp r5, r1
    blt @L_02151b58
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm s32 DWCi_TSKlForm(...)
{
    stmdb sp!, {r3, lr}
    mov r12, #0
    str r12, [sp]
    bl formTask
    ldmia sp!, {r3, pc}
}

extern "C" u8 *formTask(s32 arg0, s32 arg1, s32 arg2, u32 arg3, u8 arg4)
{
    u8 **d = (u8 **)data_ov016_02158bc4;
    u8 *e = (u8 *)((s32 (*)(...))DWCi_QUElPopBack)(*(s32 *)(*d + (arg0 << 6)));
    s32 irq;
    u8 *n;
    *(s32 *)(e + 8) = arg1;
    *(s32 *)(e + 0xC) = arg2;
    e[0x10] = arg3;
    e[0x11] = arg4;
    irq = ((s32 (*)(...))OS_DisableIrqMask)(1);
    n = *(u8 **)(*d + (arg0 << 6) + 0x10);
    for (;;) {
        if (arg3 < n[0x10]) {
            ((s32 (*)(...))DWCi_LSTlInsert)(n, e);
            break;
        }
        n = *(u8 **)(n + 4);
    }
    ((s32 (*)(...))OS_EnableIrqMask)(irq);
    return e;
}

extern "C" void DWCi_TSKlChangeFunc(u8 *arg0, s32 arg1)
{
    *(s32 *)(arg0 + 0x8) = arg1;
}

extern "C" asm s32 DWCi_TSKlDelete(...)
{
    ldr r2, =data_ov016_02158bc4
    ldr r12, =DWCi_QUElPushBack
    ldr r2, [r2]
    add r0, r2, r0, lsl #6
    ldr r0, [r0, #4]
    bx r12
}

extern "C" void DWCi_TSKlDeleteEx(void)
{
    deleteTcb();
}

extern "C" asm void deleteTcb(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r1
    ldrb r1, [r4, #0x11]
    mov r5, r0
    cmp r1, #0
    beq @L_02151c84
    add r0, r4, #0xc
    bl DWCi_HEAPlFree_
@L_02151c84:
    mov r0, r4
    bl DWCi_LSTlErase
    ldr r0, =data_ov016_02158bc4
    mov r1, r4
    ldr r0, [r0]
    ldr r0, [r0, r5, lsl #6]
    bl DWCi_QUElPushBack
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 DWCi_TSKlOperate(s32 arg0, u8 arg1)
{
    u8 *t0 = (u8 *)(*(s32 *)(data_ov016_02158bc4) + (arg0 << 6));
    *(u8 *)(t0 + 0x38) = arg1;
    return (s32)t0;
}
