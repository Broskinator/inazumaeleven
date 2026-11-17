#include "ov016/Unk_02142f80.hpp"

extern "C" void pushWinButton(void);
extern "C" s32 pushIpAuto(s32 arg0);
extern "C" void pushDnsAuto(u8 arg0);
extern "C" void draw_20(void);
extern "C" void endScene_21(void);
extern "C" void endScene1_20(void);
extern "C" void endScene2_17(void);
extern "C" s32 drawWindow(...);
extern "C" void drawColumnChar(void);
extern "C" void drawColumnObj(void);
extern "C" s32 isEnablePush(s32 arg0);
extern "C" void dispObj(void);
extern "C" void drawString(void);
extern "C" void drawAddress_2(void);
extern "C" void setOffset_2(void);
extern "C" void isPush(void);
extern "C" s32 calcColumnIdx(...);
extern "C" s32 calcIdxColumn(s32 arg0);
extern "C" void taskUp_2(s32 arg0);
extern "C" void taskDown_2(void);
extern "C" void taskVBlank_3(void);
extern "C" s32 dispFocus_4(...);
extern "C" s32 applyForcus(void);
extern "C" s32 applyForcus1(u8 arg0);
extern "C" void moveFocus_6(void);
extern "C" s32 dispPushButton_3(void);
extern "C" s32 taskPushCount(s32 arg0, u8 *arg1, s32 arg2, s32 arg3);
extern "C" void pushButtonYesNo(void);
extern "C" s32 isCorrect_3(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void procError_5(void);
extern "C" void procError1_5(void);
extern "C" void DWCi_SetListReturn(u8 arg0);
extern "C" void DWCi_SceneSetListSave(void);
extern "C" s32 initGraphics_21(...);
extern "C" void procInit_21(void);
extern "C" void procInit1_21(void);
extern "C" void procScene_21(void);
extern "C" void input_19(void);
extern "C" void draw_21(void);
extern "C" void endScene_22(void);
extern "C" void endScene1_21(void);
extern "C" s32 DWCi_IsFold_3(void);
extern "C" void DWCi_SceneSetRakuButton(void);
extern "C" s32 initGraphics_22(...);
extern "C" void procInit_22(void);
extern "C" void procInit1_22(void);
extern "C" void procInit2_17(void);
extern "C" void procScene_22(void);
extern "C" s32 input_20(...);
extern "C" void draw_22(void);
extern "C" s32 button_14(...);
extern "C" void endScene_23(void);
extern "C" s32 endScene1_22(void);
extern "C" s32 endScene2_18(void);
extern "C" s32 checkRaku(...);
extern "C" void procError_6(void);
extern "C" void procError1_6(void);
extern "C" s32 DWCi_IsFold_4(void);
extern "C" void DWCi_SceneSetRakuButton1(void);
extern "C" s32 initGraphics_23(...);
extern "C" void procInit_23(void);
extern "C" void procInit1_23(void);
extern "C" void procInit2_18(void);
extern "C" void procScene_23(void);
extern "C" s32 input_21(...);
extern "C" void draw_23(void);
extern "C" s32 button_15(...);
extern "C" void endScene_24(void);
extern "C" s32 endScene1_23(void);
extern "C" s32 endScene2_19(void);
extern "C" s32 checkRaku_2(...);
extern "C" void procError_7(void);
extern "C" void procError1_7(void);
extern "C" void DWCi_SceneSetRakuComplete(void);
extern "C" s32 initGraphics_24(...);
extern "C" void procInit_24(void);
extern "C" void procInit1_24(void);
extern "C" void procScene_24(void);
extern "C" void draw_24(void);
extern "C" void endScene_25(void);
extern "C" void endScene1_24(void);
extern "C" s32 wait_3(...);
extern "C" s32 DWCi_IsFold_5(void);
extern "C" void DWCi_SceneSetRakuReady(void);
extern "C" s32 initGraphics_25(...);
extern "C" void procInit_25(void);
extern "C" void procInit1_25(void);
extern "C" void procInit2_19(void);
extern "C" void procScene_25(void);
extern "C" s32 input_22(...);
extern "C" void draw_25(void);
extern "C" s32 button_16(...);
extern "C" void endScene_26(void);
extern "C" s32 endScene1_25(void);
extern "C" s32 endScene2_20(void);
extern "C" s32 checkRaku_3(...);
extern "C" void procError_8(void);
extern "C" void procError1_8(void);
extern "C" void DWCi_SceneSetSearch(void);
extern "C" s32 initGraphics_26(...);
extern "C" void procInit_26(void);
extern "C" void procInit1_26(void);
extern "C" void procInit2_20(void);
extern "C" void procScene_26(void);
extern "C" s32 isEnd(...);

extern "C" char data_ov016_02154b18[];
extern "C" char data_ov016_02154b3a[];
extern "C" char data_ov016_02154b43[];
extern "C" char data_ov016_02154b4c[];
extern "C" char data_ov016_02154b57[];
extern "C" char data_ov016_02154b66[];
extern "C" char data_ov016_02154b78[];
extern "C" char data_ov016_02154b90[];
extern "C" char data_ov016_02154b92[];
extern "C" char data_ov016_02154b94[];
extern "C" char data_ov016_02154bc0[];
extern "C" char data_ov016_02154bc4[];
extern "C" char DWCi_R_SCR[];
extern "C" char data_ov016_02155ac8[];
extern "C" char data_ov016_02155ae0[];
extern "C" char data_ov016_02155af0[];
extern "C" char data_ov016_02155b08[];
extern "C" char data_ov016_02155b20[];
extern "C" char data_ov016_02155b34[];
extern "C" char data_ov016_02155b48[];
extern "C" char data_ov016_02155b5c[];
extern "C" char data_ov016_02155b70[];
extern "C" char data_ov016_02155b88[];
extern "C" char data_ov016_02155ba0[];
extern "C" char data_ov016_02155bb4[];
extern "C" char data_ov016_02155bcc[];
extern "C" char data_ov016_02155be4[];
extern "C" char data_ov016_02158acc[];
extern "C" char data_ov016_02158ad4[];
extern "C" char data_ov016_02158ad8[];
extern "C" char data_ov016_02158adc[];
extern "C" char data_ov016_02158ae0[];
extern "C" char data_ov016_02158ae4[];
extern "C" char data_ov016_02158ae8[];
extern "C" s32 FX_DivS32(...);
extern "C" void FX_ModS32(void);
extern "C" void MI_CpuFill8(void);
extern "C" s32 OS_Sleep(...);
extern "C" void GX_LoadBGPltt(void);
extern "C" void GX_LoadOBJPltt(void);
extern "C" void GX_LoadBG2Scr(void);
extern "C" void GX_LoadBG2Char(void);
extern "C" void OS_SNPrintf(void);
extern "C" void DWCi_BACKUPlConvMaskCidr(void);
extern "C" s32 DWC_BACKUPlCheckIp(...);
extern "C" s32 DWC_BACKUPlCheckAddress(...);
extern "C" s32 DWCi_ANIMElInitEx(...);
extern "C" s32 DWCi_ANIMElEnd(...);
extern "C" s32 DWCi_BTNlEnd(...);
extern "C" s32 DWCi_BTNlGet(...);
extern "C" void DWCi_BTNlSet(void);
extern "C" s32 DWCi_BTNlIsEnd(...);
extern "C" s32 DWCi_BTNlEnable(...);
extern "C" s32 DWCi_BTNlDisable(...);
extern "C" s32 DWCi_COMMENTlDispEx(...);
extern "C" s32 DWCi_COMMENTlDelete(...);
extern "C" void DWCi_CMNlLoadResource(void);
extern "C" s32 DWCi_CMNlStep(...);
extern "C" s32 DWCi_CMNlButton(...);
extern "C" s32 DWCi_CMNlMsgDraw(...);
extern "C" void DWCi_FOCUSlDisp(void);
extern "C" void DWCi_FOCUSlDelete(void);
extern "C" s32 DWCi_HLlLoadSet(...);
extern "C" s32 DWCi_ChangeScene(...);
extern "C" s32 DWCi_SetParam_(...);
extern "C" s32 DWCi_SetParam2_(...);
extern "C" s32 DWCi_RAKUlInit(...);
extern "C" s32 DWCi_RAKUlEnd(...);
extern "C" void DWCi_RAKUlGetState(void);
extern "C" void DWCi_RAKUlSetResult(void);
extern "C" void DWCi_SceneSetEdit32(void);
extern "C" void DWCi_SceneSetEditAddress(void);
extern "C" void procScene_20(void);
extern "C" s32 input_23(...);
extern "C" s32 draw_26(...);
extern "C" s32 button_17(...);
extern "C" void endScene_27(void);
extern "C" void procError_9(void);
extern "C" void DWCi_SceneSetSelectAp(void);
extern "C" void DWCi_SceneSetSelectWay(void);
extern "C" void DWCi_SceneSetTest(void);
extern "C" void DWCi_SceneSetTestConfirm(void);
extern "C" void DWCi_SCREENlEnd(void);
extern "C" void DWCi_SCREENlRenew(void);
extern "C" void DWCi_SCREENlCopy(void);
extern "C" s32 DWCi_SCREENlCopyPalette(...);
extern "C" s32 DWCi_SCREENlSetPalette(...);
extern "C" void DWCi_SBlEnd(void);
extern "C" void DWCi_SBlGet(void);
extern "C" void DWCi_SBlGetState(void);
extern "C" void DWCi_SBlSet(void);
extern "C" void DWCi_SBlEnable(void);
extern "C" s32 DWCi_SBlDisable(...);
extern "C" s32 DWCi_SEARCHlInit(...);
extern "C" s32 DWCi_SEARCHlBegin(...);
extern "C" void DWCi_SEARCHlGetApInfo(void);
extern "C" s32 DWCi_SETTIGNlGet(...);
extern "C" s32 DWCi_SETTINGlSetIpAuto(...);
extern "C" s32 DWCi_SETTINGlSetDnsAuto(...);
extern "C" void DWCi_SETTINGlSetSetting(void);
extern "C" s32 DWCi_SETTINGlSet(...);
extern "C" s32 DWCi_SNDlPlay(...);
extern "C" void DWCi_SNDlStop(void);
extern "C" s32 DWCi_WINlInitEx(...);
extern "C" s32 DWCi_WINlEnd(...);
extern "C" s32 DWCi_WINlGet(...);
extern "C" s32 DWCi_WINlIsInit(...);
extern "C" void DWCi_ARClRelease(void);
extern "C" void DWCi_CEINlSet(void);
extern "C" s32 DWCi_EFFlCheck(...);
extern "C" s32 DWCi_EFFlFade(...);
extern "C" s32 DWCi_EFFlWait(...);
extern "C" s32 DWCi_FNTlDeleteBgLcd(...);
extern "C" void DWCi_FNTlDrawStringEx(void);
extern "C" void DWCi_FNTlClear(void);
extern "C" void DWCi_FNTlRenewBg(void);
extern "C" s32 DWCi_GXlVisible(...);
extern "C" s32 DWCi_GXlInvisible(...);
extern "C" void DWCi_HEAPlFree_(void);
extern "C" void DWCi_IPTlCheckTrigger(void);
extern "C" void DWCi_TPlCheckTrigger(void);
extern "C" void DWCi_TPlCheckATrigger(void);
extern "C" void DWCi_OBJlDelete(void);
extern "C" void DWCi_STRlNLen(void);
extern "C" void DWCi_STRlConvertStringAsciiToUnicode(void);
extern "C" void DWCi_TSKlForm(void);
extern "C" void DWCi_TSKlDelete(void);
extern "C" void DWCi_TSKlDeleteEx(void);
extern "C" void memset(void);

extern "C" asm void pushWinButton(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    mov r4, r0
    bl isEnablePush
    cmp r0, #0
    bne @L_02142fa8
    mov r0, #9
    bl DWCi_SNDlPlay
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
@L_02142fa8:
    cmp r4, #8
    addls pc, pc, r4, lsl #2
    b @L_02143020
    b @L_02143020
    b @L_02143020
    b @L_02142fd8
    b @L_02142fd8
    b @L_02143020
    b @L_02143020
    b @L_02143020
    b @L_02142ffc
    b @L_02142ffc
@L_02142fd8:
    mov r0, #6
    bl DWCi_SNDlPlay
    sub r0, r4, #2
    teq r0, #1
    movne r0, #1
    moveq r0, #0
    bl pushIpAuto
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
@L_02142ffc:
    mov r0, #6
    bl DWCi_SNDlPlay
    sub r0, r4, #7
    teq r0, #1
    movne r0, #1
    moveq r0, #0
    bl pushDnsAuto
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
@L_02143020:
    ldr r0, =data_ov016_02158acc
    sub r1, r4, #0xb
    ldr r0, [r0, #8]
    cmp r1, #1
    strb r4, [r0, #0x40]
    bhi @L_02143098
    bl dispPushButton_3
    bl isCorrect_3
    cmp r0, #0
    bne @L_0214307c
    mov r0, #9
    bl DWCi_SNDlPlay
    mov r1, #1
    mov r12, #0
    mov r2, r1
    sub r3, r1, #2
    mov r0, #6
    str r12, [sp]
    bl DWCi_WINlInitEx
    ldr r0, =procError_5
    bl DWCi_ChangeScene
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
@L_0214307c:
    cmp r4, #0xb
    bne @L_02143090
    mov r0, #6
@L_02143088:
    bl DWCi_SNDlPlay
    b @L_021430d4
@L_02143090:
    mov r0, #0xe
    b @L_02143088
@L_02143098:
    cmp r4, #0xd
    bne @L_021430ac
    bl dispPushButton_3
    mov r0, #7
    b @L_02143088
@L_021430ac:
    mov r0, #6
    bl DWCi_SNDlPlay
    ldr r0, =data_ov016_02154b4c
    ldrb r0, [r0, r4]
    bl calcColumnIdx
    mov r2, r0
    mov r0, #0
    mov r1, #1
    bl dispObj
    bl setOffset_2
@L_021430d4:
    bl DWCi_SBlDisable
    ldr r0, =endScene_21
    bl DWCi_ChangeScene
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}

extern "C" s32 pushIpAuto(s32 arg0)
{
    u8 *r0;
    s32 r5;
    s32 v0;
    s32 v3;
    u8 *t0;
    u8 t1;
    v0 = DWCi_SETTIGNlGet(arg0);
    if (*(u8 *)(((u8 *)v0) + 0xF5) == arg0)
        return v0;
    r0 = (u8 *)v0;
    if (arg0 != 0) {
        r5 = 1;
        if (*(u8 *)(*(u8 * *)(((u8 *)&data_ov016_02158acc) + 0x8) + 0x43) == 0) {
            r5 = 0;
        }
    } else {
        t0 = (u8 *)*(s32 *)(((u8 *)&data_ov016_02158acc) + 0x8);
        t1 = *(u8 *)(r0 + 0xF6);
        *(u8 *)(t0 + 0x43) = t1;
        r5 = 0;
    }
    DWCi_SETTINGlSetIpAuto(arg0);
    DWCi_SETTINGlSetDnsAuto(r5);
    v3 = drawWindow();
    return v3;
}

extern "C" void pushDnsAuto(u8 arg0)
{
    s32 v0 = DWCi_SETTIGNlGet(arg0);
    if (*(u8 *)(((u8 *)v0) + 0xF6) == arg0)
        return;
    u8 *t0 = (u8 *)*(s32 *)(data_ov016_02158acc + 0x8);
    *(u8 *)(t0 + 0x43) = arg0;
    DWCi_SETTINGlSetDnsAuto(arg0, (s32)t0);
    drawWindow();
}

extern "C" asm void draw_20(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r4, =data_ov016_02158acc
    ldr r1, [r4, #8]
    ldr r0, [r1, #0x38]
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    ldrb r0, [r1, #0x41]
    cmp r0, #0
    subne r0, r0, #1
    strneb r0, [r1, #0x41]
    bl DWCi_SBlGetState
    cmp r0, #7
    addls pc, pc, r0, lsl #2
    ldmia sp!, {r3, r4, r5, pc}
    ldmia sp!, {r3, r4, r5, pc}
    b @L_021431f4
    b @L_02143204
    b @L_0214324c
    b @L_021432e4
    b @L_0214339c
    b @L_02143340
    b @L_0214339c
@L_021431f4:
    ldr r0, [r4, #8]
    mov r1, #1
    strb r1, [r0, #0x45]
    ldmia sp!, {r3, r4, r5, pc}
@L_02143204:
    ldr r0, [r4, #8]
    ldrb r0, [r0, #0x41]
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    bl DWCi_FOCUSlDelete
    bl DWCi_SBlGet
    mov r1, #0x91
    mul r1, r0, r1
    ldr r2, =0x94f2095
    mov r0, r1, lsr #0x1f
    smull r1, r3, r2, r1
    add r3, r0, r3, asr #1
    strh r3, [r4, #4]
    bl drawWindow
    ldr r0, [r4, #8]
    mov r1, #4
    strb r1, [r0, #0x41]
    ldmia sp!, {r3, r4, r5, pc}
@L_0214324c:
    ldr r0, [r4, #8]
    mov r5, #0
    strb r5, [r0, #0x45]
    bl DWCi_SBlGet
    mov r1, #0x91
    mul r1, r0, r1
    ldr r2, =0x94f2095
    mov r0, r1, lsr #0x1f
    smull r1, r3, r2, r1
    add r3, r0, r3, asr #1
    strh r3, [r4, #4]
    mov r0, #0x13
    bl DWCi_SNDlPlay
    bl drawWindow
    ldrh r0, [r4, #4]
    mov r1, #0x1d
    bl FX_ModS32
    cmp r0, #0
    bne @L_021432a0
    bl applyForcus
    ldmia sp!, {r3, r4, r5, pc}
@L_021432a0:
    cmp r0, #0x10
    mov r3, #0x78
    bge @L_021432c8
    ldr r1, =taskUp_2
    mov r0, r5
    mov r2, r5
    bl DWCi_TSKlForm
    ldr r1, [r4, #8]
    str r0, [r1, #0x38]
    ldmia sp!, {r3, r4, r5, pc}
@L_021432c8:
    ldr r1, =taskDown_2
    mov r0, r5
    mov r2, r5
    bl DWCi_TSKlForm
    ldr r1, [r4, #8]
    str r0, [r1, #0x38]
    ldmia sp!, {r3, r4, r5, pc}
@L_021432e4:
    ldrh r0, [r4, #4]
    cmp r0, #0
    bne @L_02143318
    ldr r0, [r4, #8]
    ldrb r0, [r0, #0x46]
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r0, #9
    bl DWCi_SNDlPlay
    ldr r0, [r4, #8]
    mov r1, #1
    strb r1, [r0, #0x46]
    ldmia sp!, {r3, r4, r5, pc}
@L_02143318:
    mov r0, #0x13
    bl DWCi_SNDlPlay
    mov r0, #0
    ldr r1, =taskUp_2
    mov r2, r0
    mov r3, #0x78
    bl DWCi_TSKlForm
    ldr r1, [r4, #8]
    str r0, [r1, #0x38]
    ldmia sp!, {r3, r4, r5, pc}
@L_02143340:
    ldrh r0, [r4, #4]
    cmp r0, #0x91
    bne @L_02143374
    ldr r0, [r4, #8]
    ldrb r0, [r0, #0x46]
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r0, #9
    bl DWCi_SNDlPlay
    ldr r0, [r4, #8]
    mov r1, #1
    strb r1, [r0, #0x46]
    ldmia sp!, {r3, r4, r5, pc}
@L_02143374:
    mov r0, #0x13
    bl DWCi_SNDlPlay
    mov r0, #0
    ldr r1, =taskDown_2
    mov r2, r0
    mov r3, #0x78
    bl DWCi_TSKlForm
    ldr r1, [r4, #8]
    str r0, [r1, #0x38]
    ldmia sp!, {r3, r4, r5, pc}
@L_0214339c:
    ldr r0, [r4, #8]
    mov r1, #0
    strb r1, [r0, #0x46]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void endScene_21(void)
{
    DWCi_SBlDisable();
    DWCi_EFFlWait(8);
    DWCi_ChangeScene((s32)endScene1_20);
}

extern "C" void endScene1_20(void)
{
    s32 v0 = DWCi_EFFlCheck(1);
    if (v0 != 0)
        return;
    DWCi_EFFlFade(3, 1, 1, 8);
    DWCi_EFFlFade(3, 0, 0x1D, 8);
    DWCi_ChangeScene((s32)endScene2_17);
}

extern "C" asm void endScene2_17(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, #1
    ldr r6, =data_ov016_02158acc
    mov r0, r7
    mov r4, #0
    bl DWCi_EFFlCheck
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    mov r5, r4
    mov r0, r5
    bl DWCi_EFFlCheck
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r1, [r6, #8]
    mov r0, r5
    ldr r1, [r1]
    bl DWCi_TSKlDeleteEx
    ldr r1, [r6, #8]
    mov r0, r7
    ldr r1, [r1, #0x3c]
    bl DWCi_TSKlDeleteEx
@L_02143488:
    ldr r0, [r6, #8]
    add r0, r0, r5, lsl #2
    ldr r0, [r0, #0x18]
    bl DWCi_OBJlDelete
    add r5, r5, #1
    cmp r5, #7
    blt @L_02143488
    ldr r0, [r6, #8]
    ldr r0, [r0, #0x34]
    cmp r0, #0
    beq @L_021434b8
    bl DWCi_OBJlDelete
@L_021434b8:
    bl DWCi_SBlEnd
    mov r0, #0
    bl DWCi_FNTlDeleteBgLcd
    bl DWCi_FOCUSlDelete
    ldr r0, [r6, #8]
    ldrb r0, [r0, #0x40]
    cmp r0, #0xc
    beq @L_021434dc
    bl DWCi_COMMENTlDelete
@L_021434dc:
    bl DWCi_SCREENlEnd
    ldr r0, [r6, #8]
    ldr r0, [r0, #8]
    bl DWCi_ARClRelease
    mov r5, #0
@L_021434f0:
    ldr r0, [r6, #8]
    add r0, r0, r5, lsl #2
    ldr r0, [r0, #0xc]
    bl DWCi_ARClRelease
    add r5, r5, #1
    cmp r5, #2
    blt @L_021434f0
    ldr r0, =data_ov016_02155ac8
    ldr r1, =GX_LoadOBJPltt
    bl DWCi_CMNlLoadResource
    mov r5, #1
    mov r0, r5
    mov r1, r5
    bl DWCi_GXlInvisible
    mov r0, r4
    mov r1, #0x1d
    bl DWCi_GXlInvisible
    ldr r0, =0x4000010
    str r4, [r0]
    sub r1, r0, #4
    str r4, [r0, #8]
    ldrh r0, [r1]
    and r0, r0, #0x43
    orr r0, r0, #0xe10
    strh r0, [r1]
    ldr r0, [r6, #8]
    ldrb r0, [r0, #0x40]
    cmp r0, #0xd
    addls pc, pc, r0, lsl #2
    b @L_021436d0
    b @L_021435a0
    b @L_021435a0
    b @L_021436d0
    b @L_021436d0
    b @L_021435bc
    b @L_021435bc
    b @L_021435bc
    b @L_021436d0
    b @L_021436d0
    b @L_021435bc
    b @L_021435bc
    b @L_021435e8
    b @L_0214367c
    b @L_02143690
@L_021435a0:
    mov r1, r4
    bl DWCi_SetParam2_
    mov r1, r4
    mov r0, #2
    bl DWCi_SetParam_
    ldr r0, =DWCi_SceneSetEdit32
    b @L_021436cc
@L_021435bc:
    sub r5, r0, #4
    cmp r0, #9
    subhs r5, r5, #2
    mov r1, r4
    mov r0, #2
    bl DWCi_SetParam_
    mov r0, r5
    mov r1, r4
    bl DWCi_SetParam2_
    ldr r0, =DWCi_SceneSetEditAddress
    b @L_021436cc
@L_021435e8:
    bl DWCi_SETTIGNlGet
    mov r6, r0
    add r0, r6, #0xf0
    bl DWCi_BACKUPlConvMaskCidr
    strb r0, [r6, #0xd0]
    ldrb r0, [r6, #0xf5]
    cmp r0, #0
    beq @L_02143640
    mov r5, #4
    mov r1, r4
    mov r2, r5
    add r0, r6, #0xc0
    bl MI_CpuFill8
    mov r1, r4
    mov r2, r5
    add r0, r6, #0xc4
    bl MI_CpuFill8
    mov r1, r4
    mov r2, r5
    add r0, r6, #0xf0
    bl MI_CpuFill8
    strb r4, [r6, #0xd0]
@L_02143640:
    ldrb r0, [r6, #0xf6]
    cmp r0, #0
    beq @L_0214365c
    add r0, r6, #0xc8
    mov r1, #0
    mov r2, #8
    bl MI_CpuFill8
@L_0214365c:
    mov r1, r4
    mov r0, #2
    bl DWCi_SetParam_
    mov r0, r4
    mov r1, r4
    bl DWCi_SetParam2_
    ldr r0, =DWCi_SceneSetTest
    b @L_021436cc
@L_0214367c:
    mov r0, r4
    mov r1, r4
    bl DWCi_SetParam_
    ldr r0, =DWCi_SceneSetListSave
    b @L_021436cc
@L_02143690:
    ldrb r0, [r6, #1]
    cmp r0, #0
    bne @L_021436b0
    mov r1, r5
    mov r0, #2
    bl DWCi_SetParam_
    ldr r0, =DWCi_SceneSetSelectAp
    b @L_021436cc
@L_021436b0:
    bl DWCi_SETTIGNlGet
    ldrb r0, [r0, #0xf4]
    bl DWCi_SETTINGlSetSetting
    mov r0, r4
    mov r1, r5
    bl DWCi_SetParam_
    ldr r0, =DWCi_SceneSetSelectWay
@L_021436cc:
    bl DWCi_ChangeScene
@L_021436d0:
    ldr r0, =data_ov016_02158ad4
    bl DWCi_HEAPlFree_
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm s32 drawWindow(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r4, =data_ov016_02158acc
    mov r1, #0x1d
    ldrh r0, [r4, #4]
    bl FX_DivS32
    ldr r1, [r4, #8]
    mov r4, r0
    mov r6, #0
    ldr r0, [r1, #0x14]
    mov r1, r6
    bl DWCi_FNTlClear
    mov r5, r4
@L_02143738:
    mov r0, r5
    mov r1, r6
    bl drawColumnChar
    add r6, r6, #1
    cmp r6, #5
    add r5, r5, #1
    blt @L_02143738
    ldr r0, =data_ov016_02158acc
    ldr r1, =data_ov016_02154b66
    mov r2, r4, lsl #1
    ldr r3, [r0, #8]
    ldrh r0, [r1, r2]
    ldr r2, [r3, #8]
    mov r5, #0
    mov r1, r5
    add r0, r2, r0, lsl #1
    mov r2, #0x1e
    mov r3, #0x13
    bl DWCi_SCREENlCopy
@L_02143784:
    mov r0, r4
    mov r1, r5
    bl drawColumnObj
    add r5, r5, #1
    cmp r5, #5
    add r4, r4, #1
    blt @L_02143784
    bl DWCi_SCREENlRenew
    ldr r0, =data_ov016_02158acc
    ldr r0, [r0, #8]
    ldr r0, [r0, #0x14]
    bl DWCi_FNTlRenewBg
    bl setOffset_2
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void drawColumnChar(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x24
    mov r6, r0
    mov r5, r1
    bl DWCi_SETTIGNlGet
    cmp r6, #8
    addls pc, pc, r6, lsl #2
    b @L_0214395c
    b @L_02143808
    b @L_0214381c
    b @L_0214395c
    b @L_021438b0
    b @L_021438d4
    b @L_021438f8
    b @L_0214395c
    b @L_0214391c
    b @L_02143940
@L_02143808:
    mov r1, r5
    add r0, r0, #0x40
    bl drawString
    add sp, sp, #0x24
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0214381c:
    ldrb r1, [r0, #0xe6]
    mov r1, r1, lsl #0x1e
    mov r1, r1, lsr #0x1e
    cmp r1, #3
    addls pc, pc, r1, lsl #2
    b @L_02143860
    b @L_02143844
    b @L_0214384c
    b @L_02143854
    b @L_0214385c
@L_02143844:
    add sp, sp, #0x24
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0214384c:
    mov r4, #0xa
    b @L_02143860
@L_02143854:
    mov r4, #0x1a
    b @L_02143860
@L_0214385c:
    mov r4, #0x20
@L_02143860:
    ldrb r0, [r0, #0xe6]
    add r6, sp, #0
    mov r1, #0
    mov r0, r0, lsl #0x18
    mov r0, r0, lsr #0x1a
    cmp r0, #1
    addeq r0, r4, r4, lsr #31
    moveq r4, r0, asr #1
    mov r0, r6
    mov r2, #0x21
    bl MI_CpuFill8
    mov r0, r6
    mov r2, r4
    mov r1, #0x2a
    bl memset
    mov r0, r6
    mov r1, r5
    bl drawString
    add sp, sp, #0x24
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_021438b0:
    ldrb r1, [r0, #0xf5]
    cmp r1, #0
    addne sp, sp, #0x24
    ldmneia sp!, {r3, r4, r5, r6, pc}
    mov r1, r5
    add r0, r0, #0xc0
    bl drawAddress_2
    add sp, sp, #0x24
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_021438d4:
    ldrb r1, [r0, #0xf5]
    cmp r1, #0
    addne sp, sp, #0x24
    ldmneia sp!, {r3, r4, r5, r6, pc}
    mov r1, r5
    add r0, r0, #0xf0
    bl drawAddress_2
    add sp, sp, #0x24
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_021438f8:
    ldrb r1, [r0, #0xf5]
    cmp r1, #0
    addne sp, sp, #0x24
    ldmneia sp!, {r3, r4, r5, r6, pc}
    mov r1, r5
    add r0, r0, #0xc4
    bl drawAddress_2
    add sp, sp, #0x24
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0214391c:
    ldrb r1, [r0, #0xf6]
    cmp r1, #0
    addne sp, sp, #0x24
    ldmneia sp!, {r3, r4, r5, r6, pc}
    mov r1, r5
    add r0, r0, #0xc8
    bl drawAddress_2
    add sp, sp, #0x24
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_02143940:
    ldrb r1, [r0, #0xf6]
    cmp r1, #0
    addne sp, sp, #0x24
    ldmneia sp!, {r3, r4, r5, r6, pc}
    mov r1, r5
    add r0, r0, #0xcc
    bl drawAddress_2
@L_0214395c:
    add sp, sp, #0x24
    ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" asm void drawColumnObj(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    mov r6, r1
    bl DWCi_SETTIGNlGet
    cmp r4, #8
    addls pc, pc, r4, lsl #2
    b @L_02143a78
    b @L_021439a4
    b @L_021439a4
    b @L_021439c0
    b @L_02143a0c
    b @L_02143a0c
    b @L_02143a0c
    b @L_02143a14
    b @L_02143a60
    b @L_02143a60
@L_021439a4:
    mov r4, #0
    mov r0, r4
    mov r5, r4
    bl isEnablePush
    cmp r0, #0
    moveq r5, #2
    b @L_02143a80
@L_021439c0:
    ldr r2, =data_ov016_02158acc
    ldrb r0, [r0, #0xf5]
    ldr r3, [r2, #8]
    mov r1, #0
    ldrb r2, [r3, #4]
    cmp r0, #0
    movne r4, #1
    movne r0, #4
    moveq r4, #2
    moveq r0, #3
    cmp r2, #0
    mov r5, r1
    ldrb r2, [r3, #5]
    movne r5, #1
@L_021439f8:
    cmp r2, #0
    movne r1, #1
    mov r2, r6
    bl dispObj
    b @L_02143a80
@L_02143a0c:
    ldrb r0, [r0, #0xf5]
    b @L_02143a64
@L_02143a14:
    ldrb r2, [r0, #0xf6]
    mov r1, #0
    mov r5, r1
    cmp r2, #0
    movne r4, #1
    movne r0, #4
    bne @L_02143a44
    ldrb r0, [r0, #0xf5]
    mov r4, #2
    cmp r0, #0
    moveq r5, #2
    mov r0, #3
@L_02143a44:
    ldr r2, =data_ov016_02158acc
    ldr r3, [r2, #8]
    ldrb r2, [r3, #6]
    cmp r2, #0
    movne r5, #1
    ldrb r2, [r3, #7]
    b @L_021439f8
@L_02143a60:
    ldrb r0, [r0, #0xf6]
@L_02143a64:
    cmp r0, #0
    mov r4, #0
    movne r5, #2
    moveq r5, r4
    b @L_02143a80
@L_02143a78:
    mov r4, #0
    mov r5, #2
@L_02143a80:
    mov r0, r4
    mov r1, r5
    mov r2, r6
    bl dispObj
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 isEnablePush(s32 arg0)
{
    u8 *r0;
    s32 r1;
    s32 v0;
    v0 = DWCi_SETTIGNlGet(arg0);
    r0 = (u8 *)v0;
    r1 = 1;
    switch (arg0) {
        case 7:
            r1 = (*(u8 *)(r0 + 0xF5) == 0 ? 0 : r1);
            break;
        case 0:
        case 1:
            r1 = ((u32)((*(u8 *)(r0 + 0xE7) + 0xFF) & 0xFF) <= (u32)1 ? 0 : r1);
            break;
        case 4:
        case 5:
        case 6:
            r0 = (u8 *)*(u8 *)(r0 + 0xF5);
            r1 = ((s32)r0 != 0 ? 0 : r1);
            break;
        case 9:
        case 10:
            r0 = (u8 *)*(u8 *)(r0 + 0xF6);
            r1 = ((s32)r0 != 0 ? 0 : r1);
            break;
    }
    return r1;
}

extern "C" asm void dispObj(void)
{
    stmdb sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0xc
    ldr r7, =data_ov016_02158acc
    mov r12, #0xc0
    ldr r3, [r7, #8]
    mov r6, r0
    mov r4, #0x8f
    add r3, r3, #0x18
    sub r0, r6, #1
    mov lr, #0xcc
    mov r5, r1
    strh lr, [sp]
    strh r12, [sp, #2]
    strh r12, [sp, #4]
    strh r4, [sp, #6]
    strh r4, [sp, #8]
    cmp r0, #1
    add r4, r3, r2, lsl #2
    bhi @L_02143b88
    mov r0, r2
    bl calcIdxColumn
    cmp r0, #2
    ldr r0, [r7, #8]
    addeq r4, r0, #0x2c
    addne r4, r0, #0x30
@L_02143b88:
    ldr r0, =data_ov016_02154b57
    add r1, r6, r6, lsl #1
    add r0, r0, r1
    ldrb r1, [r5, r0]
    ldr r2, [r4]
    cmp r1, #0
    ldreq r0, =0xfe00ff00
    ldreq r1, [r2]
    addeq sp, sp, #0xc
    andeq r0, r1, r0
    orreq r0, r0, #0x1000000
    streq r0, [r2]
    ldmeqia sp!, {r4, r5, r6, r7, pc}
    mov r0, #0
    bl DWCi_CEINlSet
    ldr r3, [r4]
    add r0, sp, #0
    mov r1, r6, lsl #1
    ldrh r2, [r0, r1]
    ldr r1, [r3]
    ldr r0, =0xfe00ff00
    mov r2, r2, lsl #0x17
    and r0, r1, r0
    orr r0, r0, r2, lsr #7
    str r0, [r3]
    ldr r1, [r4]
    ldrh r0, [r1, #4]
    bic r0, r0, #0xc00
    orr r0, r0, #0xc00
    strh r0, [r1, #4]
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, pc}
}

extern "C" asm void drawString(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x30
    mov r8, r0
    mov r4, r1
    add r0, sp, #0xc
    mov r1, #0
    mov r2, #0x22
    bl MI_CpuFill8
    mov r0, r8
    mov r1, #0x20
    bl DWCi_STRlNLen
    mov r5, r0
    mov r7, r5
    cmp r5, #0x10
    movgt r7, #0x10
    cmp r7, #0
    mov r6, #0
    ble @L_02143c84
    ldr r2, =0xe01d
    add r1, sp, #0xc
@L_02143c64:
    ldrb r3, [r8, r6]
    mov r0, r6, lsl #1
    add r6, r6, #1
    cmp r3, #0x20
    streqh r2, [r1, r0]
    strneh r3, [r1, r0]
    cmp r6, r7
    blt @L_02143c64
@L_02143c84:
    mov r0, #0x1d
    mul r0, r4, r0
    add r6, r0, #2
    mov r0, #8
    add r4, sp, #0xc
    stmia sp, {r0, r4}
    mov r1, #1
    str r1, [sp, #8]
    ldr r0, =data_ov016_02158acc
    cmp r5, #0x10
    ldr r0, [r0, #8]
    addle r6, r6, #5
    ldr r0, [r0, #0x14]
    mov r2, r6
    mov r1, #0x48
    mov r3, #2
    bl DWCi_FNTlDrawStringEx
    cmp r5, #0x10
    addle sp, sp, #0x30
    ldmleia sp!, {r4, r5, r6, r7, r8, pc}
    mov r7, #0
    mov r0, r4
    mov r1, r7
    mov r2, #0x22
    bl MI_CpuFill8
    sub r3, r5, #0x10
    cmp r3, #0
    ble @L_02143d1c
    ldr r1, =0xe01d
@L_02143cf8:
    add r0, r8, r7
    ldrb r2, [r0, #0x10]
    mov r0, r7, lsl #1
    add r7, r7, #1
    cmp r2, #0x20
    streqh r1, [r4, r0]
    strneh r2, [r4, r0]
    cmp r7, r3
    blt @L_02143cf8
@L_02143d1c:
    mov r1, #8
    str r1, [sp]
    add r0, sp, #0xc
    str r0, [sp, #4]
    mov r1, #1
    str r1, [sp, #8]
    ldr r0, =data_ov016_02158acc
    add r2, r6, #0xc
    ldr r0, [r0, #8]
    mov r1, #0x48
    ldr r0, [r0, #0x14]
    mov r3, #2
    bl DWCi_FNTlDrawStringEx
    add sp, sp, #0x30
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void drawAddress_2(void)
{
    stmdb sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x3c
    ldrb r3, [r0, #1]
    ldrb r2, [r0, #2]
    ldrb r5, [r0, #3]
    str r3, [sp]
    str r2, [sp, #4]
    ldrb r3, [r0]
    add r7, sp, #0xc
    mov r6, #0x10
    mov r4, r1
    ldr r2, =data_ov016_02155ae0
    mov r0, r7
    mov r1, r6
    str r5, [sp, #8]
    bl OS_SNPrintf
    add r5, sp, #0x1c
    mov r1, r7
    mov r0, r5
    mov r2, r6
    bl DWCi_STRlConvertStringAsciiToUnicode
    mov r2, #7
    mov r0, #0x1d
    mul r1, r4, r0
    stmia sp, {r2, r5}
    mov r2, #1
    str r2, [sp, #8]
    ldr r0, =data_ov016_02158acc
    add r2, r1, #8
    ldr r0, [r0, #8]
    mov r1, #0x5f
    ldr r0, [r0, #0x14]
    mov r3, #2
    bl DWCi_FNTlDrawStringEx
    add sp, sp, #0x3c
    ldmia sp!, {r4, r5, r6, r7, pc}
}

extern "C" asm void setOffset_2(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #8
    ldr r5, =data_ov016_02158acc
    mov r7, #0x1d
    ldrh r0, [r5, #4]
    mov r1, r7
    ldr r4, =0xfe00ff00
    bl FX_DivS32
    mov r6, r0
    ldrh r0, [r5, #4]
    mov r1, r7
    bl FX_ModS32
    ldr r2, [r5, #8]
    rsb r1, r0, #0x34
    ldr r0, [r2, #0x34]
    cmp r0, #0
    beq @L_02143e68
    ldr r7, [r2, #0x34]
    mov r3, #0x26
    ldr r2, [r7]
    cmp r6, #0
    movne r3, #0x100
    and r0, r1, #0xff
    and r2, r2, r4
    mov r3, r3, lsl #0x17
    orr r0, r2, r0
    orr r0, r0, r3, lsr #7
    str r0, [r7]
@L_02143e68:
    ldr r12, =0x1ff0000
    mov r2, r1
    mov r3, #0
@L_02143e74:
    ldr r0, [r5, #8]
    and lr, r2, #0xff
    add r0, r0, r3, lsl #2
    ldr r0, [r0, #0x18]
    add r3, r3, #1
    ldr r8, [r0]
    cmp r3, #5
    mov r7, r8
    and r8, r8, r12
    mov r8, r8, lsr #0x10
    and r7, r7, r4
    mov r8, r8, lsl #0x17
    orr r7, r7, lr
    orr r7, r7, r8, lsr #7
    str r7, [r0]
    add r2, r2, #0x1d
    blt @L_02143e74
    ldr r4, =data_ov016_02158acc
    cmp r6, #2
    ldr r0, [r4, #8]
    ldr r3, =0xfe00ff00
    ldrgt r2, [r0, #0x2c]
    ldrgt r0, [r2]
    andgt r0, r0, r3
    orrgt r0, r0, #0x1000000
    strgt r0, [r2]
    bgt @L_02143f1c
    rsb r5, r6, #2
    mov r2, #0x1d
    mla r12, r5, r2, r1
    ldr r0, [r0, #0x2c]
    ldr r2, =0x1ff0000
    ldr lr, [r0]
    mov r5, lr
    and r2, lr, r2
    mov lr, r2, lsr #0x10
    and r2, r12, #0xff
    and r5, r5, r3
    mov r12, lr, lsl #0x17
    orr r2, r5, r2
    orr r2, r2, r12, lsr #7
    str r2, [r0]
@L_02143f1c:
    cmp r6, #2
    blt @L_02143f70
    cmp r6, #6
    bgt @L_02143f70
    ldr r0, [r4, #8]
    rsb r5, r6, #6
    mov r2, #0x1d
    mla r2, r5, r2, r1
    ldr r0, [r0, #0x30]
    ldr r1, =0x1ff0000
    ldr r6, [r0]
    mov r5, r6
    and r1, r6, r1
    mov r6, r1, lsr #0x10
    and r1, r2, #0xff
    and r3, r5, r3
    mov r2, r6, lsl #0x17
    orr r1, r3, r1
    orr r1, r1, r2, lsr #7
    str r1, [r0]
    b @L_02143f88
@L_02143f70:
    ldr r0, [r4, #8]
    ldr r1, [r0, #0x30]
    ldr r0, [r1]
    and r0, r0, r3
    orr r0, r0, #0x1000000
    str r0, [r1]
@L_02143f88:
    ldr r0, [r4, #8]
    mov r1, #1
    strb r1, [r0, #0x44]
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void isPush(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #8
    ldr r0, =DWCi_R_SCR
    mov r7, #0x1d
    bl DWCi_TPlCheckTrigger
    cmp r0, #0
    addeq sp, sp, #8
    moveq r0, #0xe
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, =data_ov016_02158acc
    mov r1, r7
    ldrh r0, [r0, #4]
    bl FX_DivS32
    ldr r1, =data_ov016_02154b18
    mov r5, r0
    ldrh r3, [r1, #0xa]
    ldrh r2, [r1, #0xc]
    add r4, sp, #0
    strh r3, [sp]
    strh r2, [sp, #2]
    ldrh r2, [r1, #0xe]
    ldrh r0, [r1, #0x10]
    mov r6, #0
    strh r2, [sp, #4]
    strh r0, [sp, #6]
@L_0214400c:
    cmp r5, #2
    cmpne r5, #6
    beq @L_02144034
    mov r0, r4
    bl DWCi_TPlCheckATrigger
    cmp r0, #0
    ldrne r0, =data_ov016_02154b3a
    addne sp, sp, #8
    ldrneb r0, [r0, r5]
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
@L_02144034:
    ldrh r0, [sp, #2]
    add r6, r6, #1
    cmp r6, #4
    add r0, r0, #0x1d
    strh r0, [sp, #2]
    add r5, r5, #1
    blt @L_0214400c
    ldr r0, =data_ov016_02158acc
    mov r1, #0x1d
    ldrh r0, [r0, #4]
    bl FX_DivS32
    mov r2, #0
@L_02144064:
    cmp r0, #2
    bne @L_02144104
    ldr r6, =data_ov016_02154b18
    mul r5, r2, r7
    ldrh r1, [r6, #0x1c]
    ldrh r0, [r6, #0x1a]
    add r4, sp, #0
    strh r1, [sp, #2]
    strh r0, [sp]
    mov r0, r5, lsl #0x10
    add r1, r1, r0, lsr #16
    ldrh r3, [r6, #0x1e]
    ldrh r2, [r6, #0x20]
    mov r0, r4
    strh r3, [sp, #4]
    strh r2, [sp, #6]
    strh r1, [sp, #2]
    bl DWCi_TPlCheckATrigger
    cmp r0, #0
    addne sp, sp, #8
    movne r0, #2
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldrh r1, [r6, #0x14]
    ldrh r2, [r6, #0x12]
    mov r0, r5, lsl #0x10
    strh r1, [sp, #2]
    strh r2, [sp]
    add r1, r1, r0, lsr #16
    ldrh r3, [r6, #0x16]
    ldrh r2, [r6, #0x18]
    mov r0, r4
    strh r3, [sp, #4]
    strh r2, [sp, #6]
    strh r1, [sp, #2]
    bl DWCi_TPlCheckATrigger
    cmp r0, #0
    beq @L_02144114
    add sp, sp, #8
    mov r0, #3
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02144104:
    add r2, r2, #1
    cmp r2, #4
    add r0, r0, #1
    blt @L_02144064
@L_02144114:
    ldr r0, =data_ov016_02158acc
    mov r1, #0x1d
    ldrh r0, [r0, #4]
    bl FX_DivS32
    mov r2, #0
@L_02144128:
    cmp r0, #6
    bne @L_021441c8
    ldr r6, =data_ov016_02154b18
    mul r5, r2, r7
    ldrh r1, [r6, #0x1c]
    ldrh r0, [r6, #0x1a]
    add r4, sp, #0
    strh r1, [sp, #2]
    strh r0, [sp]
    mov r0, r5, lsl #0x10
    add r1, r1, r0, lsr #16
    ldrh r3, [r6, #0x1e]
    ldrh r2, [r6, #0x20]
    mov r0, r4
    strh r3, [sp, #4]
    strh r2, [sp, #6]
    strh r1, [sp, #2]
    bl DWCi_TPlCheckATrigger
    cmp r0, #0
    addne sp, sp, #8
    movne r0, #7
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldrh r1, [r6, #0x14]
    ldrh r2, [r6, #0x12]
    mov r0, r5, lsl #0x10
    strh r1, [sp, #2]
    strh r2, [sp]
    add r1, r1, r0, lsr #16
    ldrh r3, [r6, #0x16]
    ldrh r2, [r6, #0x18]
    mov r0, r4
    strh r3, [sp, #4]
    strh r2, [sp, #6]
    strh r1, [sp, #2]
    bl DWCi_TPlCheckATrigger
    cmp r0, #0
    beq @L_021441d8
    add sp, sp, #8
    mov r0, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_021441c8:
    add r2, r2, #1
    cmp r2, #4
    add r0, r0, #1
    blt @L_02144128
@L_021441d8:
    ldr r4, =data_ov016_02154b78
    mov r5, #0
@L_021441e0:
    add r0, r4, r5, lsl #3
    bl DWCi_TPlCheckTrigger
    cmp r0, #0
    addne sp, sp, #8
    addne r0, r5, #0xb
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    add r5, r5, #1
    cmp r5, #3
    blt @L_021441e0
    mov r0, #0xe
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm s32 calcColumnIdx(...)
{
    stmdb sp!, {r4, lr}
    ldr r1, =data_ov016_02158acc
    mov r4, r0
    ldrh r0, [r1, #4]
    mov r1, #0x1d
    bl FX_DivS32
    mov r1, #0
@L_02144240:
    cmp r0, r4
    moveq r0, r1
    ldmeqia sp!, {r4, pc}
    add r1, r1, #1
    cmp r1, #4
    add r0, r0, #1
    blt @L_02144240
    mvn r0, #0
    ldmia sp!, {r4, pc}
}

extern "C" s32 calcIdxColumn(s32 arg0)
{
    s32 v0 = FX_DivS32(*(u16 *)(data_ov016_02158acc + 0x4), 0x1D);
    return (v0 + arg0);
}

extern "C" void taskUp_2(s32 arg0)
{
    s32 m;
    ((s32 (*)(...))DWCi_SBlDisable)();
    ((s32 (*)(...))DWCi_FOCUSlDelete)();
    if (*(u16 *)((u8 *)data_ov016_02158acc + 4) > 6)
        *(u16 *)((u8 *)data_ov016_02158acc + 4) = *(u16 *)((u8 *)data_ov016_02158acc + 4) - 6;
    else
        *(u16 *)((u8 *)data_ov016_02158acc + 4) = 0;
    m = ((s32 (*)(...))FX_ModS32)(*(u16 *)((u8 *)data_ov016_02158acc + 4), 0x1D);
    if (m == 0x17) {
        ((s32 (*)(...))drawWindow)();
        return;
    }
    if (m > 0x17) {
        *(u16 *)((u8 *)data_ov016_02158acc + 4) += (u16)(0x1D - m);
        m = 0;
    }
    ((s32 (*)(...))setOffset_2)();
    if (m != 0)
        return;
    ((s32 (*)(...))DWCi_SBlSet)(*(u16 *)((u8 *)data_ov016_02158acc + 4) * 0x37 / 0x91);
    ((s32 (*)(...))DWCi_SBlEnable)();
    ((s32 (*)(...))applyForcus)();
    *(s32 *)(*(u8 **)((u8 *)data_ov016_02158acc + 8) + 0x38) = 0;
    ((s32 (*)(...))DWCi_TSKlDelete)(0, arg0);
}

extern "C" asm void taskDown_2(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    bl DWCi_SBlDisable
    bl DWCi_FOCUSlDelete
    ldr r5, =data_ov016_02158acc
    mov r1, #0x1d
    ldrh r0, [r5, #4]
    add r0, r0, #6
    strh r0, [r5, #4]
    ldrh r0, [r5, #4]
    bl FX_ModS32
    cmp r0, #6
    blt @L_0214438c
    bl setOffset_2
    ldmia sp!, {r3, r4, r5, pc}
@L_0214438c:
    ldrh r1, [r5, #4]
    mov r0, r0, lsl #0x10
    sub r0, r1, r0, lsr #16
    strh r0, [r5, #4]
    bl drawWindow
    ldrh r1, [r5, #4]
    mov r0, #0x37
    ldr r2, =0xe1fc780f
    mul r3, r1, r0
    smull r1, r0, r2, r3
    add r0, r3, r0
    mov r1, r3, lsr #0x1f
    add r0, r1, r0, asr #7
    bl DWCi_SBlSet
    bl DWCi_SBlEnable
    bl applyForcus
    ldr r1, [r5, #8]
    mov r0, #0
    str r0, [r1, #0x38]
    mov r1, r4
    bl DWCi_TSKlDelete
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void taskVBlank_3(void)
{
    u8 *d = (u8 *)data_ov016_02158acc;
    s32 q;
    s32 m;
    s32 t;
    if ((*(u8 **)(d + 8))[0x44] == 0)
        return;
    q = ((s32 (*)(...))FX_DivS32)(*(u16 *)(d + 4), 0x1D);
    m = ((s32 (*)(...))FX_ModS32)(*(u16 *)(d + 4), 0x1D) - 0x33;
    t = ((u8 *)data_ov016_02154b43)[q];
    *(volatile u32 *)0x4000010 = (m << 16) & 0x1FF0000;
    *(volatile u32 *)0x4000018 = ((m + t) << 16) & 0x1FF0000;
    (*(u8 **)(d + 8))[0x44] = 0;
}

extern "C" asm s32 dispFocus_4(...)
{
    stmdb sp!, {r3, lr}
    sub sp, sp, #0x18
    ldr r12, =data_ov016_02154bc4
    add r3, sp, #8
    mov r2, #7
@L_02144480:
    ldrb r0, [r12, #1]
    ldrb r1, [r12], #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_02144480
    ldr r0, =data_ov016_02158acc
    add r1, sp, #8
    ldrb r2, [r0]
    ldrb lr, [r1, r2]
    cmp lr, #3
    blt @L_021444dc
    ldr r1, =data_ov016_02154b90
    mov r3, lr, lsl #3
    ldr r2, =data_ov016_02154b94
    ldr r0, =data_ov016_02154b92
    ldrh r1, [r1, r3]
    ldrh r2, [r2, r3]
    ldrh r3, [r0, r3]
    mov r0, #3
    bl DWCi_FOCUSlDisp
    add sp, sp, #0x18
    ldmia sp!, {r3, pc}
@L_021444dc:
    ldr r2, =data_ov016_02154b90
    ldrb r1, [r0, #2]
    add r12, r2, lr, lsl #3
    mov r0, #0x1d
    smulbb r0, r1, r0
    ldrh r3, [r12, #2]
    mov r0, r0, lsl #0x10
    mov r1, lr, lsl #3
    ldrh r1, [r2, r1]
    ldrh r2, [r12, #4]
    add r0, r3, r0, lsr #16
    strh r0, [sp, #2]
    ldrh r12, [r12, #6]
    ldrh r3, [sp, #2]
    mov r0, #1
    strh r1, [sp]
    strh r2, [sp, #4]
    strh r12, [sp, #6]
    bl DWCi_FOCUSlDisp
    add sp, sp, #0x18
    ldmia sp!, {r3, pc}
}

extern "C" s32 applyForcus(void)
{
    s32 r0;
    s32 r1;
    u8 *r5;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;
    u16 t0;
    u8 t1;
    r0 = ((*(u8 *)(((u8 *)&data_ov016_02158acc)) + 0xF5) & 0xFF);
    if ((u32)r0 <= (u32)2) {
        v0 = dispFocus_4(r0);
        return v0;
    } else {
        v1 = DWCi_SETTIGNlGet(r0);
        t0 = *(u16 *)(((u8 *)&data_ov016_02158acc) + 0x4);
        v2 = FX_DivS32(t0, 0x1D);
        r5 = (u8 *)v1;
        r1 = (*(u8 *)(((u8 *)&data_ov016_02158acc) + 0x2) + v2);
        switch (r1) {
            case 2:
                if (*(u8 *)(r5 + 0xF5) != 0) {
                    *(u8 *)(((u8 *)&data_ov016_02158acc)) = 2;
                    r0 = 2;
                    break;
                } else {
                    *(u8 *)(((u8 *)&data_ov016_02158acc)) = 3;
                    r0 = 3;
                    break;
                }
                v3 = dispFocus_4(r0, r1);
                return v3;
            case 6:
                if (*(u8 *)(r5 + 0xF6) != 0) {
                    *(u8 *)(((u8 *)&data_ov016_02158acc)) = 7;
                    r0 = 7;
                    break;
                } else {
                    *(u8 *)(((u8 *)&data_ov016_02158acc)) = 8;
                    r0 = 8;
                    break;
                }
                v3 = dispFocus_4(r0, r1);
                return v3;
            default:
                t1 = *(u8 *)(((u8 *)&data_ov016_02154b3a) + r1);
                *(u8 *)(((u8 *)&data_ov016_02158acc)) = t1;
                r0 = t1;
                break;
        }
        v3 = dispFocus_4(r0, r1);
        return v3;
    }
}

extern "C" s32 applyForcus1(u8 arg0)
{
    s32 v0;
    s32 v1;
    u8 t0;
    *(u8 *)(data_ov016_02158acc) = arg0;
    t0 = *(u8 *)(data_ov016_02154b4c + arg0);
    v0 = calcColumnIdx(t0, (s32)data_ov016_02154b4c);
    *(u8 *)(data_ov016_02158acc + 0x2) = v0;
    v1 = dispFocus_4();
    return v1;
}

extern "C" asm void moveFocus_6(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r0
    bl DWCi_SETTIGNlGet
    ldr r6, =data_ov016_02158acc
    mov r4, #0
    ldrb r1, [r6]
    cmp r1, #8
    ldreqb r0, [r0, #0xf5]
    cmpeq r0, #0
    bne @L_02144648
    cmp r5, #0
    cmpne r5, #2
    ldmeqia sp!, {r4, r5, r6, pc}
@L_02144648:
    cmp r1, #0
    bgt @L_02144658
    beq @L_02144678
    b @L_021447a4
@L_02144658:
    sub r0, r1, #0xa
    cmp r0, #3
    addls pc, pc, r0, lsl #2
    b @L_021447a4
    b @L_0214469c
    b @L_021446c8
    b @L_02144724
    b @L_02144724
@L_02144678:
    cmp r5, #1
    moveq r0, #0xb
    streqb r0, [r6]
    beq @L_02144878
    cmp r5, #3
    ldreqb r0, [r6, #2]
    addeq r0, r0, #1
    streqb r0, [r6, #2]
    b @L_021446c0
@L_0214469c:
    cmp r5, #1
    ldreqb r0, [r6, #2]
    subeq r0, r0, #1
    streqb r0, [r6, #2]
    beq @L_02144878
    cmp r5, #3
    ldreq r0, [r6, #8]
    ldreqb r0, [r0, #0x42]
    streqb r0, [r6]
@L_021446c0:
    movne r4, #2
    b @L_02144878
@L_021446c8:
    cmp r5, #1
    bne @L_021446f8
    ldr r0, [r6, #8]
    ldrb r0, [r0, #0x47]
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    mov r0, #9
    bl DWCi_SNDlPlay
    ldr r0, [r6, #8]
    mov r1, #1
    strb r1, [r0, #0x47]
    ldmia sp!, {r4, r5, r6, pc}
@L_021446f8:
    cmp r5, #3
    movne r4, #2
    bne @L_02144878
    mov r5, #0
    strb r5, [r6]
    strb r5, [r6, #2]
    strh r5, [r6, #4]
    bl drawWindow
    mov r0, r5
    bl DWCi_SBlSet
    b @L_02144878
@L_02144724:
    ldr r0, [r6, #8]
    cmp r5, #1
    strb r1, [r0, #0x42]
    bne @L_0214475c
    mov r0, #0xa
    strb r0, [r6]
    mov r0, #3
    strb r0, [r6, #2]
    mov r0, #0x91
    strh r0, [r6, #4]
    bl drawWindow
    mov r0, #0x37
    bl DWCi_SBlSet
    b @L_02144878
@L_0214475c:
    cmp r5, #3
    bne @L_0214478c
    ldr r0, [r6, #8]
    ldrb r0, [r0, #0x47]
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    mov r0, #9
    bl DWCi_SNDlPlay
    ldr r0, [r6, #8]
    mov r1, #1
    strb r1, [r0, #0x47]
    ldmia sp!, {r4, r5, r6, pc}
@L_0214478c:
    cmp r1, #0xc
    moveq r0, #0xd
    streqb r0, [r6]
    movne r0, #0xc
    strneb r0, [r6]
    b @L_02144878
@L_021447a4:
    cmp r5, #1
    bne @L_021447e8
    ldrb r0, [r6, #2]
    cmp r0, #0
    subne r0, r0, #1
    strneb r0, [r6, #2]
    bne @L_02144878
    mov r0, #0x13
    bl DWCi_SNDlPlay
    mov r0, #0
    ldr r1, =taskUp_2
    mov r2, r0
    mov r3, #0x78
    bl DWCi_TSKlForm
    ldr r1, [r6, #8]
    str r0, [r1, #0x38]
    ldmia sp!, {r4, r5, r6, pc}
@L_021447e8:
    cmp r5, #3
    bne @L_0214482c
    ldrb r0, [r6, #2]
    cmp r0, #3
    addlo r0, r0, #1
    strlob r0, [r6, #2]
    blo @L_02144878
    mov r0, #0x13
    bl DWCi_SNDlPlay
    mov r0, #0
    ldr r1, =taskDown_2
    mov r2, r0
    mov r3, #0x78
    bl DWCi_TSKlForm
    ldr r1, [r6, #8]
    str r0, [r1, #0x38]
    ldmia sp!, {r4, r5, r6, pc}
@L_0214482c:
    cmp r1, #2
    moveq r0, #3
    mov r4, #2
    streqb r0, [r6]
    beq @L_0214486c
    cmp r1, #3
    streqb r4, [r6]
    beq @L_0214486c
    cmp r1, #7
    moveq r0, #8
    streqb r0, [r6]
    beq @L_0214486c
    cmp r1, #8
    bne @L_02144878
    mov r0, #7
    strb r0, [r6]
@L_0214486c:
    mov r0, #8
    bl DWCi_SNDlPlay
    bl dispFocus_4
@L_02144878:
    cmp r4, #2
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r0, #8
    bl DWCi_SNDlPlay
    cmp r4, #0
    ldmneia sp!, {r4, r5, r6, pc}
    bl applyForcus
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 dispPushButton_3(void)
{
    s32 v0;
    s32 t0;
    u8 t1;
    t0 = *(s32 *)(*(u8 * *)(((u8 *)&data_ov016_02158acc) + 0x8) + 0x10);
    t1 = *(u8 *)(((u8 *)&data_ov016_02154b18) + (*(u8 *)(((u8 *)&data_ov016_02158acc)) - 0xB));
    v0 = DWCi_SCREENlCopyPalette(t0, t1, t1);
    return v0;
}

extern "C" s32 taskPushCount(s32 arg0, u8 *arg1, s32 arg2, s32 arg3)
{
    s32 r4;
    u8 *r5;
    r4 = 0;
    r5 = (u8 *)data_ov016_02158acc;
    do {
        arg0 = *(u8 *)(((u8 *)(*(s32 *)(r5 + 0x8) + r4)) + 0x4);
        arg1 = (u8 *)(*(s32 *)(r5 + 0x8) + r4);
        if (arg0 != 0) {
            *(u8 *)(arg1 + 0x4) = (arg0 - 1);
            arg0 = *(u8 *)(((u8 *)(*(s32 *)(r5 + 0x8) + r4)) + 0x4);
            if (arg0 == 0) {
                s32 v0 = drawWindow();
                arg0 = v0;
            }
        }
        r4 = (r4 + 1);
    } while (r4 < 4);
    return arg0;
}

extern "C" asm void pushButtonYesNo(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    ldr r1, =data_ov016_02154bc0
    ldr r0, =data_ov016_02158acc
    ldrb r12, [r1]
    ldrb r3, [r1, #1]
    ldrb r2, [r1, #2]
    ldrb r1, [r1, #3]
    strb r3, [sp, #1]
    ldrb r4, [r0]
    add lr, sp, #0
    strb r12, [sp]
    strb r2, [sp, #2]
    strb r1, [sp, #3]
    mov r3, #0
@L_02144968:
    ldrb r0, [lr, r3]
    cmp r4, r0
    bne @L_021449b8
    ldr r0, =data_ov016_02158acc
    mov r2, #0x14
    ldr r1, [r0, #8]
    tst r3, #1
    add r1, r1, r3
    strb r2, [r1, #4]
    ldr r1, [r0, #8]
    subne r0, r3, #1
    addne r0, r1, r0
    movne r1, #0
    strneb r1, [r0, #4]
    addeq r0, r3, #1
    addeq r0, r1, r0
    moveq r1, #0
    streqb r1, [r0, #4]
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
@L_021449b8:
    add r3, r3, #1
    cmp r3, #4
    blt @L_02144968
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}

extern "C" s32 isCorrect_3(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    u8 *r4;
    s32 v0 = DWCi_SETTIGNlGet(arg0, arg1, arg2, arg3);
    if (*(u8 *)(((u8 *)v0) + 0x40) == 0)
        return 0;
    r4 = (u8 *)v0;
    if (*(u8 *)(r4 + 0xF6) == 0) {
        s32 v1 = DWC_BACKUPlCheckAddress((r4 + 0xC8));
        if (v1 == 0) {
            s32 v2 = DWC_BACKUPlCheckAddress((r4 + 0xCC));
            if (v2 == 0)
                return 0;
        }
    }
    if (*(u8 *)(r4 + 0xF5) == 0) {
        s32 v3 = DWC_BACKUPlCheckAddress((r4 + 0xC0));
        if (v3 == 0)
            return 0;
        s32 v4 = DWC_BACKUPlCheckAddress((r4 + 0xC4));
        if (v4 == 0)
            return 0;
        s32 v5 = DWC_BACKUPlCheckIp((r4 + 0xC0), (r4 + 0xF0));
        if (v5 == 0)
            return 0;
    }
    return 1;
}

extern "C" void procError_5(void)
{
    s32 v0 = DWCi_WINlGet();
    if (v0 != 0)
        return;
    DWCi_SNDlPlay(6);
    DWCi_WINlEnd();
    DWCi_SCREENlSetPalette(*(s32 *)(*(u8 * *)(data_ov016_02158acc + 0x8) + 0xC));
    DWCi_ChangeScene((s32)procError1_5);
}

extern "C" void procError1_5(void)
{
    s32 v0 = DWCi_WINlIsInit();
    if (v0 != 0)
        return;
    DWCi_ChangeScene((s32)procScene_20);
}

extern "C" void DWCi_SetListReturn(u8 arg0)
{
    *(u8 *)(data_ov016_02158acc + 0x1) = arg0;
}

extern "C" void DWCi_SceneSetListSave(void)
{
    initGraphics_21();
    DWCi_HLlLoadSet();
    DWCi_SETTINGlSet();
    DWCi_ChangeScene((s32)procInit_21);
}

extern "C" asm s32 initGraphics_21(...)
{
    stmdb sp!, {r3, lr}
    ldr r0, =data_ov016_02155af0
    ldr r1, =GX_LoadBG2Char
    bl DWCi_CMNlLoadResource
    ldr r0, =data_ov016_02155b08
    ldr r1, =GX_LoadBGPltt
    bl DWCi_CMNlLoadResource
    ldr r0, =data_ov016_02155b20
    ldr r1, =GX_LoadBG2Scr
    bl DWCi_CMNlLoadResource
    ldr r2, =0x4001008
    ldr r1, =0x400000a
    ldrh r0, [r2]
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r2]
    ldrh r0, [r2, #2]
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r2, #2]
    ldrh r0, [r1]
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r1]
    ldrh r0, [r1, #2]
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r1, #2]
    ldmia sp!, {r3, pc}
}

extern "C" void procInit_21(void)
{
    DWCi_EFFlFade(2, 1, 1, 8);
    DWCi_EFFlFade(2, 0, 0x14, 8);
    DWCi_GXlVisible(1, 1);
    DWCi_GXlVisible(0, 0x14);
    DWCi_ChangeScene((s32)procInit1_21);
}

extern "C" void procInit1_21(void)
{
    s32 v0 = DWCi_EFFlCheck(1);
    if (v0 != 0)
        return;
    s32 v1 = DWCi_EFFlCheck(0);
    if (v1 != 0)
        return;
    DWCi_WINlInitEx(0x44, 5, 1, (5 - 6), 0);
    DWCi_ChangeScene((s32)procScene_21);
}

extern "C" void procScene_21(void)
{
    input_19();
    draw_21();
    s32 v2 = DWCi_WINlIsInit();
    if (v2 != 0)
        return;
    DWCi_ChangeScene((s32)endScene_22);
}

extern "C" void input_19(void)
{
}

extern "C" void draw_21(void)
{
}

extern "C" void endScene_22(void)
{
    DWCi_EFFlFade(3, 1, 1, 8);
    DWCi_EFFlFade(3, 0, 0x14, 8);
    DWCi_ChangeScene((s32)endScene1_21);
}

extern "C" void endScene1_21(void)
{
    s32 v0 = DWCi_EFFlCheck(1);
    if (v0 != 0)
        return;
    s32 v1 = DWCi_EFFlCheck(0);
    if (v1 != 0)
        return;
    DWCi_COMMENTlDelete();
    DWCi_GXlInvisible(1, 1);
    DWCi_GXlInvisible(0, 0x14);
    DWCi_SetParam_(2, 1);
    DWCi_ChangeScene((s32)DWCi_SceneSetSelectAp);
}

extern "C" s32 DWCi_IsFold_3(void)
{
    s32 r0;
    if (((*(u16 *)(((u8 *)0x2FFFFA8)) & 0x8000) >> 0xF) != 0) {
        r0 = 1;
    } else {
        r0 = 0;
    }
    return r0;
}

extern "C" void DWCi_SceneSetRakuButton(void)
{
    *(u8 *)(data_ov016_02158ad8) = 0;
    initGraphics_22((s32)data_ov016_02158ad8, 0);
    DWCi_HLlLoadSet();
    DWCi_CMNlMsgDraw(0x25);
    DWCi_ANIMElInitEx(1);
    DWCi_ChangeScene((s32)procInit_22);
}

extern "C" asm s32 initGraphics_22(...)
{
    stmdb sp!, {r3, lr}
    ldr r0, =data_ov016_02155b34
    ldr r1, =GX_LoadBG2Scr
    bl DWCi_CMNlLoadResource
    ldr r3, =0x4001008
    ldr r1, =0x400000a
    ldrh r0, [r3]
    sub r2, r3, #0x1000
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r3]
    ldrh r0, [r3, #2]
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r3, #2]
    ldrh r0, [r2]
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r2]
    ldrh r0, [r1]
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r1]
    ldrh r0, [r1, #2]
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r1, #2]
    ldmia sp!, {r3, pc}
}

extern "C" void procInit_22(void)
{
    DWCi_EFFlFade(2, 0, 0x15, 8);
    DWCi_GXlVisible(0, 0x15);
    DWCi_ChangeScene((s32)procInit1_22);
}

extern "C" void procInit1_22(void)
{
    s32 v0 = DWCi_EFFlCheck(0);
    if (v0 != 0)
        return;
    DWCi_CMNlButton(1);
    DWCi_ChangeScene((s32)procInit2_17);
}

extern "C" void procInit2_17(void)
{
    s32 v0 = DWCi_BTNlGet();
    if (v0 == -2)
        return;
    DWCi_BTNlEnable();
    DWCi_ChangeScene((s32)procScene_22);
}

extern "C" void procScene_22(void)
{
    OS_Sleep(10);
    checkRaku();
    input_20();
    draw_22();
    button_14();
}

extern "C" asm s32 input_20(...)
{
    stmdb sp!, {r3, lr}
    mov r0, #2
    bl DWCi_IPTlCheckTrigger
    cmp r0, #0
    beq @L_02144ed4
    mov r0, #0
    bl DWCi_BTNlSet
    ldmia sp!, {r3, pc}
@L_02144ed4:
    bl DWCi_IsFold_3
    cmp r0, #0
    ldmeqia sp!, {r3, pc}
    mov r0, #0
    bl DWCi_BTNlSet
    ldmia sp!, {r3, pc}
}

extern "C" void draw_22(void)
{
}

extern "C" asm s32 button_14(...)
{
    stmdb sp!, {r3, lr}
    bl DWCi_BTNlGet
    cmp r0, #0
    ldmneia sp!, {r3, pc}
    bl DWCi_SNDlStop
    mov r0, #7
    bl DWCi_SNDlPlay
    ldr r0, =endScene_23
    bl DWCi_ChangeScene
    ldmia sp!, {r3, pc}
}

extern "C" void endScene_23(void)
{
    DWCi_BTNlDisable();
    DWCi_EFFlWait(8);
    DWCi_ChangeScene((s32)endScene1_22);
}

extern "C" s32 endScene1_22(void)
{
    s32 v0;
    s32 v4;
    v0 = DWCi_EFFlCheck(1);
    if (v0 != 0)
        return v0;
    if (*(u8 *)(data_ov016_02158ad8) == 0) {
        DWCi_BTNlEnd();
    }
    if (*(u8 *)(data_ov016_02158ad8) == 0) {
        DWCi_EFFlFade(3, 1, 1, 8);
    }
    DWCi_EFFlFade(3, 0, 0x15, 8);
    v4 = DWCi_ChangeScene((s32)endScene2_18);
    return v4;
}

extern "C" s32 endScene2_18(void)
{
    s32 r4;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v10;
    s32 v12;
    v0 = DWCi_EFFlCheck(0);
    if (v0 != 0)
        return v0;
    if (*(u8 *)(data_ov016_02158ad8) == 0) {
        v1 = DWCi_EFFlCheck(1);
        if (v1 != 0)
            return v1;
    }
    v2 = DWCi_BTNlIsEnd();
    if (v2 == 0)
        return v2;
    DWCi_ANIMElEnd();
    DWCi_FNTlDeleteBgLcd(0);
    if (*(u8 *)(data_ov016_02158ad8) == 0) {
        DWCi_COMMENTlDelete();
        DWCi_GXlInvisible(1, 1);
    }
    DWCi_GXlInvisible(0, 0x15);
    r4 = 0;
    if (*(u8 *)(data_ov016_02158ad8) == 0) {
        DWCi_RAKUlEnd();
        DWCi_SetParam_(2, 1);
        v10 = DWCi_ChangeScene((s32)DWCi_SceneSetSelectWay);
        return v10;
    } else {
        DWCi_SetParam_(r4, r4);
        v12 = DWCi_ChangeScene((s32)DWCi_SceneSetRakuButton1);
        return v12;
    }
}

extern "C" asm s32 checkRaku(...)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    bl DWCi_RAKUlGetState
    cmp r0, #2
    beq @L_021450a0
    cmp r0, #4
    beq @L_021450bc
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
@L_021450a0:
    ldr r1, =data_ov016_02158ad8
    mov r2, #1
    ldr r0, =endScene_23
    strb r2, [r1]
    bl DWCi_ChangeScene
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
@L_021450bc:
    ldr r0, =data_ov016_02158ad8
    mov r4, #0
    strb r4, [r0]
    bl DWCi_SNDlStop
    mov r0, #9
    bl DWCi_SNDlPlay
    mov r1, #1
    mov r2, r1
    sub r3, r1, #2
    mov r0, #0xd
    str r4, [sp]
    bl DWCi_WINlInitEx
    bl DWCi_BTNlDisable
    ldr r0, =procError_6
    bl DWCi_ChangeScene
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}

extern "C" void procError_6(void)
{
    s32 v0 = DWCi_WINlGet();
    if (v0 != 0)
        return;
    DWCi_SNDlPlay(6);
    DWCi_WINlEnd();
    DWCi_ChangeScene((s32)procError1_6);
}

extern "C" void procError1_6(void)
{
    s32 v0 = DWCi_WINlIsInit();
    if (v0 != 0)
        return;
    DWCi_ChangeScene((s32)endScene_23);
}

extern "C" s32 DWCi_IsFold_4(void)
{
    s32 r0;
    if (((*(u16 *)(((u8 *)0x2FFFFA8)) & 0x8000) >> 0xF) != 0) {
        r0 = 1;
    } else {
        r0 = 0;
    }
    return r0;
}

extern "C" void DWCi_SceneSetRakuButton1(void)
{
    *(u8 *)(data_ov016_02158adc) = 0;
    initGraphics_23((s32)data_ov016_02158adc, 0);
    DWCi_HLlLoadSet();
    DWCi_CMNlMsgDraw(0x2A);
    DWCi_ANIMElInitEx(2);
    DWCi_ChangeScene((s32)procInit_23);
}

extern "C" asm s32 initGraphics_23(...)
{
    stmdb sp!, {r3, lr}
    ldr r0, =data_ov016_02155b48
    ldr r1, =GX_LoadBG2Scr
    bl DWCi_CMNlLoadResource
    ldr r3, =0x4001008
    ldr r1, =0x400000a
    ldrh r0, [r3]
    sub r2, r3, #0x1000
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r3]
    ldrh r0, [r3, #2]
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r3, #2]
    ldrh r0, [r2]
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r2]
    ldrh r0, [r1]
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r1]
    ldrh r0, [r1, #2]
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r1, #2]
    ldmia sp!, {r3, pc}
}

extern "C" void procInit_23(void)
{
    DWCi_EFFlFade(2, 0, 0x15, 8);
    DWCi_GXlVisible(0, 0x15);
    DWCi_ChangeScene((s32)procInit1_23);
}

extern "C" void procInit1_23(void)
{
    s32 v0 = DWCi_EFFlCheck(0);
    if (v0 != 0)
        return;
    DWCi_CMNlButton(1);
    DWCi_ChangeScene((s32)procInit2_18);
}

extern "C" void procInit2_18(void)
{
    s32 v0 = DWCi_BTNlGet();
    if (v0 == -2)
        return;
    DWCi_BTNlEnable();
    DWCi_ChangeScene((s32)procScene_23);
}

extern "C" void procScene_23(void)
{
    OS_Sleep(10);
    checkRaku_2();
    input_21();
    draw_23();
    button_15();
}

extern "C" asm s32 input_21(...)
{
    stmdb sp!, {r3, lr}
    mov r0, #2
    bl DWCi_IPTlCheckTrigger
    cmp r0, #0
    beq @L_02145300
    mov r0, #0
    bl DWCi_BTNlSet
    ldmia sp!, {r3, pc}
@L_02145300:
    bl DWCi_IsFold_4
    cmp r0, #0
    ldmeqia sp!, {r3, pc}
    mov r0, #0
    bl DWCi_BTNlSet
    ldmia sp!, {r3, pc}
}

extern "C" void draw_23(void)
{
}

extern "C" asm s32 button_15(...)
{
    stmdb sp!, {r3, lr}
    bl DWCi_BTNlGet
    cmp r0, #0
    ldmneia sp!, {r3, pc}
    bl DWCi_SNDlStop
    mov r0, #7
    bl DWCi_SNDlPlay
    ldr r0, =endScene_24
    bl DWCi_ChangeScene
    ldmia sp!, {r3, pc}
}

extern "C" void endScene_24(void)
{
    DWCi_BTNlDisable();
    DWCi_EFFlWait(8);
    DWCi_ChangeScene((s32)endScene1_23);
}

extern "C" s32 endScene1_23(void)
{
    s32 r4;
    s32 v0;
    s32 v4;
    v0 = DWCi_EFFlCheck(1);
    if (v0 != 0)
        return v0;
    DWCi_BTNlEnd();
    r4 = 1;
    if (*(u8 *)(data_ov016_02158adc) == 0) {
        DWCi_EFFlFade(3, r4, r4, 8);
    }
    DWCi_EFFlFade(3, 0, 0x15, 8);
    v4 = DWCi_ChangeScene((s32)endScene2_19);
    return v4;
}

extern "C" s32 endScene2_19(void)
{
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v9;
    s32 v11;
    v0 = DWCi_EFFlCheck(0);
    if (v0 != 0)
        return v0;
    if (*(u8 *)(data_ov016_02158adc) == 0) {
        v1 = DWCi_EFFlCheck(1);
        if (v1 != 0)
            return v1;
    }
    v2 = DWCi_BTNlIsEnd();
    if (v2 == 0)
        return v2;
    DWCi_ANIMElEnd();
    DWCi_FNTlDeleteBgLcd(0);
    if (*(u8 *)(data_ov016_02158adc) == 0) {
        DWCi_COMMENTlDelete();
        DWCi_GXlInvisible(1, 1);
    }
    DWCi_RAKUlEnd();
    if (*(u8 *)(data_ov016_02158adc) == 0) {
        DWCi_SetParam_(2, 1);
        v9 = DWCi_ChangeScene((s32)DWCi_SceneSetSelectWay);
        return v9;
    } else {
        DWCi_SetParam_(0, 0);
        v11 = DWCi_ChangeScene((s32)DWCi_SceneSetRakuComplete);
        return v11;
    }
}

extern "C" asm s32 checkRaku_2(...)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    bl DWCi_RAKUlGetState
    cmp r0, #3
    beq @L_021454b8
    cmp r0, #4
    beq @L_021454dc
    cmp r0, #5
    beq @L_02145520
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
@L_021454b8:
    ldr r0, =data_ov016_02158adc
    mov r1, #1
    strb r1, [r0]
    bl DWCi_SNDlStop
    bl DWCi_RAKUlSetResult
    ldr r0, =endScene_24
    bl DWCi_ChangeScene
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
@L_021454dc:
    ldr r0, =data_ov016_02158adc
    mov r4, #0
    strb r4, [r0]
    bl DWCi_SNDlStop
    mov r0, #9
    bl DWCi_SNDlPlay
    mov r1, #1
    mov r2, r1
    sub r3, r1, #2
    mov r0, #0xd
    str r4, [sp]
    bl DWCi_WINlInitEx
    bl DWCi_BTNlDisable
    ldr r0, =procError_7
    bl DWCi_ChangeScene
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
@L_02145520:
    ldr r0, =data_ov016_02158adc
    mov r4, #0
    strb r4, [r0]
    bl DWCi_SNDlStop
    mov r0, #0x12
    bl DWCi_SNDlPlay
    mov r1, #1
    mov r2, r1
    sub r3, r1, #2
    mov r0, #0xe
    str r4, [sp]
    bl DWCi_WINlInitEx
    bl DWCi_BTNlDisable
    ldr r0, =procError_7
    bl DWCi_ChangeScene
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}

extern "C" void procError_7(void)
{
    s32 v0 = DWCi_WINlGet();
    if (v0 != 0)
        return;
    DWCi_SNDlPlay(6);
    DWCi_WINlEnd();
    DWCi_ChangeScene((s32)procError1_7);
}

extern "C" void procError1_7(void)
{
    s32 v0 = DWCi_WINlIsInit();
    if (v0 != 0)
        return;
    DWCi_ChangeScene((s32)endScene_24);
}

extern "C" void DWCi_SceneSetRakuComplete(void)
{
    *(u8 *)(data_ov016_02158ae0) = 0;
    initGraphics_24((s32)data_ov016_02158ae0, 0);
    DWCi_HLlLoadSet();
    DWCi_CMNlMsgDraw(0x26);
    DWCi_SNDlPlay(0x10);
    DWCi_ChangeScene((s32)procInit_24);
}

extern "C" asm s32 initGraphics_24(...)
{
    stmdb sp!, {r3, lr}
    ldr r0, =data_ov016_02155b5c
    ldr r1, =GX_LoadBG2Scr
    bl DWCi_CMNlLoadResource
    ldr r3, =0x4001008
    ldr r1, =0x400000a
    ldrh r0, [r3]
    sub r2, r3, #0x1000
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r3]
    ldrh r0, [r3, #2]
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r3, #2]
    ldrh r0, [r2]
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r2]
    ldrh r0, [r1]
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r1]
    ldrh r0, [r1, #2]
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r1, #2]
    ldmia sp!, {r3, pc}
}

extern "C" void procInit_24(void)
{
    DWCi_EFFlFade(2, 0, 0x15, 8);
    DWCi_GXlVisible(0, 0x15);
    DWCi_ChangeScene((s32)procInit1_24);
}

extern "C" void procInit1_24(void)
{
    s32 v0 = DWCi_EFFlCheck(0);
    if (v0 != 0)
        return;
    DWCi_ChangeScene((s32)procScene_24);
}

extern "C" void procScene_24(void)
{
    wait_3();
    draw_24();
}

extern "C" void draw_24(void)
{
}

extern "C" void endScene_25(void)
{
    DWCi_EFFlFade(3, 1, 1, 8);
    DWCi_EFFlFade(3, 0, 0x15, 8);
    DWCi_ChangeScene((s32)endScene1_24);
}

extern "C" void endScene1_24(void)
{
    s32 v0 = DWCi_EFFlCheck(1);
    if (v0 != 0)
        return;
    s32 v1 = DWCi_EFFlCheck(0);
    if (v1 != 0)
        return;
    DWCi_FNTlDeleteBgLcd(0);
    DWCi_COMMENTlDelete();
    DWCi_GXlInvisible(1, 1);
    DWCi_GXlInvisible(0, 0x15);
    DWCi_SetParam_(0, 0);
    DWCi_SetParam2_(0, 1);
    DWCi_ChangeScene((s32)DWCi_SceneSetTestConfirm);
}

extern "C" asm s32 wait_3(...)
{
    stmdb sp!, {r3, lr}
    ldr r1, =data_ov016_02158ae0
    ldrb r0, [r1]
    add r0, r0, #1
    and r2, r0, #0xff
    strb r0, [r1]
    cmp r2, #0x78
    ldmloia sp!, {r3, pc}
    ldr r0, =endScene_25
    bl DWCi_ChangeScene
    ldmia sp!, {r3, pc}
}

extern "C" s32 DWCi_IsFold_5(void)
{
    s32 r0;
    if (((*(u16 *)(((u8 *)0x2FFFFA8)) & 0x8000) >> 0xF) != 0) {
        r0 = 1;
    } else {
        r0 = 0;
    }
    return r0;
}

extern "C" void DWCi_SceneSetRakuReady(void)
{
    *(u8 *)(data_ov016_02158ae4) = 0;
    initGraphics_25((s32)data_ov016_02158ae4);
    DWCi_HLlLoadSet();
    DWCi_COMMENTlDispEx(0x37, (0x37 - 0x38), 0);
    DWCi_CMNlStep(2);
    DWCi_CMNlMsgDraw(0x24);
    DWCi_ANIMElInitEx(0);
    DWCi_SNDlPlay(0xB);
    DWCi_ChangeScene((s32)procInit_25);
}

extern "C" asm s32 initGraphics_25(...)
{
    stmdb sp!, {r3, lr}
    ldr r0, =data_ov016_02155b70
    ldr r1, =GX_LoadBG2Char
    bl DWCi_CMNlLoadResource
    ldr r0, =data_ov016_02155b88
    ldr r1, =GX_LoadBGPltt
    bl DWCi_CMNlLoadResource
    ldr r0, =data_ov016_02155ba0
    ldr r1, =GX_LoadBG2Scr
    bl DWCi_CMNlLoadResource
    ldr r3, =0x4001008
    ldr r1, =0x400000a
    ldrh r0, [r3]
    sub r2, r3, #0x1000
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r3]
    ldrh r0, [r3, #2]
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r3, #2]
    ldrh r0, [r2]
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r2]
    ldrh r0, [r1]
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r1]
    ldrh r0, [r1, #2]
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r1, #2]
    ldmia sp!, {r3, pc}
}

extern "C" void procInit_25(void)
{
    DWCi_EFFlFade(2, 1, 1, 8);
    DWCi_EFFlFade(2, 0, 0x15, 8);
    DWCi_GXlVisible(1, 1);
    DWCi_GXlVisible(0, 0x15);
    DWCi_ChangeScene((s32)procInit1_25);
}

extern "C" void procInit1_25(void)
{
    s32 v0 = DWCi_EFFlCheck(1);
    if (v0 != 0)
        return;
    s32 v1 = DWCi_EFFlCheck(0);
    if (v1 != 0)
        return;
    DWCi_RAKUlInit();
    DWCi_CMNlButton(1);
    DWCi_ChangeScene((s32)procInit2_19);
}

extern "C" void procInit2_19(void)
{
    s32 v0 = DWCi_BTNlGet();
    if (v0 == -2)
        return;
    DWCi_BTNlEnable();
    DWCi_ChangeScene((s32)procScene_25);
}

extern "C" void procScene_25(void)
{
    OS_Sleep(10);
    checkRaku_3();
    input_22();
    draw_25();
    button_16();
}

extern "C" asm s32 input_22(...)
{
    stmdb sp!, {r3, lr}
    mov r0, #2
    bl DWCi_IPTlCheckTrigger
    cmp r0, #0
    beq @L_02145a10
    mov r0, #0
    bl DWCi_BTNlSet
    ldmia sp!, {r3, pc}
@L_02145a10:
    bl DWCi_IsFold_5
    cmp r0, #0
    ldmeqia sp!, {r3, pc}
    mov r0, #0
    bl DWCi_BTNlSet
    ldmia sp!, {r3, pc}
}

extern "C" void draw_25(void)
{
}

extern "C" asm s32 button_16(...)
{
    stmdb sp!, {r3, lr}
    bl DWCi_BTNlGet
    cmp r0, #0
    ldmneia sp!, {r3, pc}
    bl DWCi_SNDlStop
    mov r0, #7
    bl DWCi_SNDlPlay
    ldr r0, =endScene_26
    bl DWCi_ChangeScene
    ldmia sp!, {r3, pc}
}

extern "C" void endScene_26(void)
{
    DWCi_BTNlDisable();
    DWCi_EFFlWait(8);
    DWCi_ChangeScene((s32)endScene1_25);
}

extern "C" s32 endScene1_25(void)
{
    s32 v0;
    s32 v4;
    v0 = DWCi_EFFlCheck(1);
    if (v0 != 0)
        return v0;
    if (*(u8 *)(data_ov016_02158ae4) == 0) {
        DWCi_BTNlEnd();
    }
    if (*(u8 *)(data_ov016_02158ae4) == 0) {
        DWCi_EFFlFade(3, 1, 1, 8);
    }
    DWCi_EFFlFade(3, 0, 0x14, 8);
    v4 = DWCi_ChangeScene((s32)endScene2_20);
    return v4;
}

extern "C" s32 endScene2_20(void)
{
    s32 r4;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v10;
    s32 v12;
    v0 = DWCi_EFFlCheck(0);
    if (v0 != 0)
        return v0;
    if (*(u8 *)(data_ov016_02158ae4) == 0) {
        v1 = DWCi_EFFlCheck(1);
        if (v1 != 0)
            return v1;
    }
    v2 = DWCi_BTNlIsEnd();
    if (v2 == 0)
        return v2;
    DWCi_ANIMElEnd();
    DWCi_FNTlDeleteBgLcd(0);
    if (*(u8 *)(data_ov016_02158ae4) == 0) {
        DWCi_COMMENTlDelete();
        DWCi_GXlInvisible(1, 1);
    }
    DWCi_GXlInvisible(0, 0x15);
    r4 = 0;
    if (*(u8 *)(data_ov016_02158ae4) == 0) {
        DWCi_RAKUlEnd();
        DWCi_SetParam_(2, 1);
        v10 = DWCi_ChangeScene((s32)DWCi_SceneSetSelectWay);
        return v10;
    } else {
        DWCi_SetParam_(r4, r4);
        v12 = DWCi_ChangeScene((s32)DWCi_SceneSetRakuButton);
        return v12;
    }
}

extern "C" asm s32 checkRaku_3(...)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    bl DWCi_RAKUlGetState
    cmp r0, #1
    beq @L_02145bdc
    cmp r0, #4
    beq @L_02145bf8
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
@L_02145bdc:
    ldr r1, =data_ov016_02158ae4
    mov r2, #1
    ldr r0, =endScene_26
    strb r2, [r1]
    bl DWCi_ChangeScene
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
@L_02145bf8:
    ldr r0, =data_ov016_02158ae4
    mov r4, #0
    strb r4, [r0]
    bl DWCi_SNDlStop
    mov r0, #9
    bl DWCi_SNDlPlay
    mov r1, #1
    mov r2, r1
    sub r3, r1, #2
    mov r0, #0xd
    str r4, [sp]
    bl DWCi_WINlInitEx
    bl DWCi_BTNlDisable
    ldr r0, =procError_8
    bl DWCi_ChangeScene
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}

extern "C" void procError_8(void)
{
    s32 v0 = DWCi_WINlGet();
    if (v0 != 0)
        return;
    DWCi_SNDlPlay(6);
    DWCi_WINlEnd();
    DWCi_ChangeScene((s32)procError1_8);
}

extern "C" void procError1_8(void)
{
    s32 v0 = DWCi_WINlIsInit();
    if (v0 != 0)
        return;
    DWCi_ChangeScene((s32)endScene_26);
}

extern "C" void DWCi_SceneSetSearch(void)
{
    *(u16 *)(data_ov016_02158ae8 + 0x2) = 0;
    *(u8 *)(data_ov016_02158ae8) = 0;
    initGraphics_26((s32)data_ov016_02158ae8);
    DWCi_COMMENTlDispEx(0x33, (0x33 - 0x34), 0);
    DWCi_HLlLoadSet();
    DWCi_CMNlStep(2);
    DWCi_CMNlMsgDraw(0x33);
    DWCi_ANIMElInitEx(0);
    DWCi_SEARCHlInit();
    DWCi_SEARCHlBegin();
    DWCi_SNDlPlay(10);
    DWCi_ChangeScene((s32)procInit_26);
}

extern "C" asm s32 initGraphics_26(...)
{
    stmdb sp!, {r3, lr}
    ldr r0, =data_ov016_02155bb4
    ldr r1, =GX_LoadBG2Char
    bl DWCi_CMNlLoadResource
    ldr r0, =data_ov016_02155bcc
    ldr r1, =GX_LoadBGPltt
    bl DWCi_CMNlLoadResource
    ldr r0, =data_ov016_02155be4
    ldr r1, =GX_LoadBG2Scr
    bl DWCi_CMNlLoadResource
    ldr r3, =0x4001008
    ldr r1, =0x400000a
    ldrh r0, [r3]
    sub r2, r3, #0x1000
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r3]
    ldrh r0, [r3, #2]
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r3, #2]
    ldrh r0, [r2]
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r2]
    ldrh r0, [r1]
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r1]
    ldrh r0, [r1, #2]
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r1, #2]
    ldmia sp!, {r3, pc}
}

extern "C" void procInit_26(void)
{
    DWCi_EFFlFade(2, 1, 1, 8);
    DWCi_EFFlFade(2, 0, 0x15, 8);
    DWCi_GXlVisible(1, 1);
    DWCi_GXlVisible(0, 0x15);
    DWCi_ChangeScene((s32)procInit1_26);
}

extern "C" void procInit1_26(void)
{
    s32 v0 = DWCi_EFFlCheck(1);
    if (v0 != 0)
        return;
    s32 v1 = DWCi_EFFlCheck(0);
    if (v1 != 0)
        return;
    DWCi_CMNlButton(1);
    DWCi_ChangeScene((s32)procInit2_20);
}

extern "C" void procInit2_20(void)
{
    s32 v0 = DWCi_BTNlGet();
    if (v0 == -2)
        return;
    DWCi_BTNlEnable();
    DWCi_ChangeScene((s32)procScene_26);
}

extern "C" void procScene_26(void)
{
    input_23();
    draw_26();
    button_17();
    isEnd();
}

extern "C" asm s32 isEnd(...)
{
    stmdb sp!, {r4, lr}
    sub sp, sp, #8
    ldr r4, =data_ov016_02158ae8
    ldrh r0, [r4, #2]
    add r0, r0, #1
    strh r0, [r4, #2]
    ldrh r0, [r4, #2]
    cmp r0, #0x12c
    addlo sp, sp, #8
    ldmloia sp!, {r4, pc}
    bl DWCi_SNDlStop
    add r0, sp, #4
    bl DWCi_SEARCHlGetApInfo
    cmp r0, #0
    bne @L_02145f08
    mov r1, #1
    mov r0, #2
    strb r0, [r4]
    mov r4, #0
    mov r2, r1
    sub r3, r1, #2
    mov r0, #0xf
    str r4, [sp]
    bl DWCi_WINlInitEx
    mov r0, #0x12
    bl DWCi_SNDlPlay
    bl DWCi_BTNlDisable
    ldr r0, =procError_9
    bl DWCi_ChangeScene
    add sp, sp, #8
    ldmia sp!, {r4, pc}
@L_02145f08:
    cmp r0, #0
    mov r3, #0
    ble @L_02145f38
    ldr r4, [sp, #4]
    mov r1, #0x2a
@L_02145f1c:
    mla r2, r3, r1, r4
    ldrb r2, [r2, #0x28]
    cmp r2, #2
    bne @L_02145f38
    add r3, r3, #1
    cmp r3, r0
    blt @L_02145f1c
@L_02145f38:
    cmp r3, r0
    bne @L_02145f84
    ldr r0, =data_ov016_02158ae8
    mov r1, #1
    mov r3, #3
    strb r3, [r0]
    mov r4, #0
    mov r2, r1
    sub r3, r1, #2
    mov r0, #0xe
    str r4, [sp]
    bl DWCi_WINlInitEx
    mov r0, #0x12
    bl DWCi_SNDlPlay
    bl DWCi_BTNlDisable
    ldr r0, =procError_9
    bl DWCi_ChangeScene
    add sp, sp, #8
    ldmia sp!, {r4, pc}
@L_02145f84:
    ldr r1, =data_ov016_02158ae8
    mov r2, #1
    mov r0, #0xf
    strb r2, [r1]
    bl DWCi_SNDlPlay
    ldr r0, =endScene_27
    bl DWCi_ChangeScene
    add sp, sp, #8
    ldmia sp!, {r4, pc}
}
