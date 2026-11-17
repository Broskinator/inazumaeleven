#include "ov016/Unk_0213ff24.hpp"
struct S02141f20 { void (*f[5])(u8 *); };
struct S021412f8 { void (*f[2])(u8 *); };

extern "C" void button_12(void);
extern "C" void endScene_17(void);
extern "C" s32 endScene1_16(void);
extern "C" void endScene2_13(void);
extern "C" void drawApInfo(void);
extern "C" void drawAp(void);
extern "C" s32 drawApObj(s32 arg0, s32 arg1);
extern "C" void setOffset(void);
extern "C" void taskUp(s32 arg0);
extern "C" void taskDown(void);
extern "C" s32 taskVBlank_2(void);
extern "C" void dispFocus_3(void);
extern "C" void moveFocus_5(void);
extern "C" s32 scrollUp(void);
extern "C" s32 scrollDown(void);
extern "C" void dispPushButton_2(void);
extern "C" void procError_2(void);
extern "C" void procError1_2(void);
extern "C" void DWCi_SceneSetEdit32(void);
extern "C" s32 initGraphics_17(void);
extern "C" void procInit_17(void);
extern "C" s32 procInit1_17(void);
extern "C" void procInit2_14(void);
extern "C" void procScene_17(void);
extern "C" s32 input_15(...);
extern "C" void draw_17(void);
extern "C" void endScene_18(void);
extern "C" void endScene1_17(void);
extern "C" void endScene2_14(void);
extern "C" void endScene3(void);
extern "C" void drawSsid(void);
extern "C" void dispCaret(void);
extern "C" s32 procWin(void);
extern "C" void procWin1(void);
extern "C" void isCorrect(void);
extern "C" void procError_3(void);
extern "C" void procError1_3(void);
extern "C" void DWCi_SceneSetEditAddress(void);
extern "C" s32 initGraphics_18(void);
extern "C" void procInit_18(void);
extern "C" void procInit1_18(void);
extern "C" void procInit2_15(void);
extern "C" void procScene_18(void);
extern "C" s32 input_16(...);
extern "C" s32 isOver(s32 arg0);
extern "C" void draw_18(void);
extern "C" void endScene_19(void);
extern "C" void endScene1_18(void);
extern "C" s32 endScene2_15(void);
extern "C" s32 endScene3_2(void);
extern "C" void drawAddress(void);
extern "C" void dispCaret_2(void);
extern "C" s32 procWin_2(void);
extern "C" void procWin1_2(void);
extern "C" void arrangeAddress(void);
extern "C" void isCorrect_2(void);
extern "C" void procError_4(void);
extern "C" void procError1_4(void);
extern "C" void DWCi_SceneSetError(void);
extern "C" s32 initGraphics_19(...);
extern "C" s32 drawMessage(...);
extern "C" void procInit_19(void);
extern "C" void procInit1_19(void);
extern "C" void procInit2_16(void);
extern "C" void procScene_19(void);
extern "C" void input_17(void);
extern "C" void draw_19(void);
extern "C" s32 button_13(...);
extern "C" void endScene_20(void);
extern "C" void endScene1_19(void);
extern "C" void endScene2_16(void);
extern "C" void DWCi_SetErrorCode(s32 arg0);
extern "C" void DWCi_SceneSetList(void);
extern "C" void initGraphics_20(void);
extern "C" s32 calcParam(void);
extern "C" void procInit_20(void);
extern "C" void procInit1_20(void);
extern "C" void procScene_20(void);
extern "C" s32 input_18(...);
extern "C" s32 inputWinButton(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

extern "C" char data_ov016_02154a14[];
extern "C" char data_ov016_02154a48[];
extern "C" char data_ov016_02154a4a[];
extern "C" char data_ov016_02154a4c[];
extern "C" char data_ov016_02154aa4[];
extern "C" char data_ov016_02154aa8[];
extern "C" char data_ov016_02154aae[];
extern "C" char data_ov016_02154ac0[];
extern "C" char data_ov016_02154ac8[];
extern "C" char data_ov016_02154ad0[];
extern "C" char data_ov016_02154adc[];
extern "C" char data_ov016_02154ae4[];
extern "C" char data_ov016_02154aec[];
extern "C" char data_ov016_02154afc[];
extern "C" char data_ov016_02154afe[];
extern "C" char data_ov016_02154b1b[];
extern "C" char data_ov016_02154bd4[];
extern "C" char data_ov016_02154bec[];
extern "C" char data_ov016_02154c04[];
extern "C" char data_ov016_02155940[];
extern "C" char data_ov016_02155948[];
extern "C" char data_ov016_0215595c[];
extern "C" char data_ov016_02155974[];
extern "C" char data_ov016_0215598c[];
extern "C" char data_ov016_021559a0[];
extern "C" char data_ov016_021559b8[];
extern "C" char data_ov016_021559cc[];
extern "C" char data_ov016_021559e0[];
extern "C" char data_ov016_021559e4[];
extern "C" char data_ov016_021559f8[];
extern "C" char data_ov016_02155a10[];
extern "C" char data_ov016_02155a28[];
extern "C" char data_ov016_02155a40[];
extern "C" char data_ov016_02155a58[];
extern "C" char data_ov016_02155a6c[];
extern "C" char data_ov016_02155a70[];
extern "C" char data_ov016_02155a84[];
extern "C" char data_ov016_02155a9c[];
extern "C" char data_ov016_02155ab4[];
extern "C" char DWCiMsgCmn[];
extern "C" char data_ov016_02158ab8[];
extern "C" char data_ov016_02158abc[];
extern "C" char data_ov016_02158ac0[];
extern "C" char data_ov016_02158ac0_b[];
extern "C" char data_ov016_02158ac4[];
extern "C" char data_ov016_02158ac4_b[];
extern "C" char data_ov016_02158ac8[];
extern "C" char data_ov016_02158acc[];
extern "C" void FX_DivS32(void);
extern "C" s32 FX_ModS32(...);
extern "C" void MI_CpuCopy8(void);
extern "C" void MI_CpuFill8(void);
extern "C" void atoi(void);
extern "C" void GX_LoadBGPltt(void);
extern "C" void GX_LoadOBJPltt(void);
extern "C" void GX_LoadBG2Scr(void);
extern "C" void GX_LoadBG3Scr(void);
extern "C" void GX_LoadBG2Char(void);
extern "C" void GX_LoadBG3Char(void);
extern "C" void OS_SNPrintf(void);
extern "C" void DWC_BACKUPlCheckAddress(void);
extern "C" s32 DWCi_BTNlEnd(...);
extern "C" s32 DWCi_BTNlGet(...);
extern "C" s32 DWCi_BTNlSet(...);
extern "C" s32 DWCi_BTNlIsEnd(...);
extern "C" s32 DWCi_BTNlEnable(...);
extern "C" s32 DWCi_BTNlDisable(...);
extern "C" void DWCi_COMMENTlDispEx(void);
extern "C" s32 DWCi_COMMENTlDelete(...);
extern "C" void DWCi_Char(void);
extern "C" s32 DWCi_CMNlLoadResource(...);
extern "C" void DWCi_CMNlStep(void);
extern "C" s32 DWCi_CMNlButton(...);
extern "C" void DWCi_CMNlFontFlag(void);
extern "C" void DWCi_FOCUSlDisp(void);
extern "C" void DWCi_FOCUSlDelete(void);
extern "C" void DWCi_HLlLoad(void);
extern "C" void DWCi_HLlLoadList(void);
extern "C" s32 DWCi_KBlInit(...);
extern "C" s32 DWCi_KBlEnd(...);
extern "C" s32 DWCi_KBlGet(...);
extern "C" s32 DWCi_KBlSetErase(...);
extern "C" s32 DWCi_KBlSetInput(...);
extern "C" void DWCi_KBlIsInit(void);
extern "C" void DWCi_KB10lInit(void);
extern "C" s32 DWCi_KB10lEnd(...);
extern "C" s32 DWCi_KB10lGet(...);
extern "C" void DWCi_KB10lSetErase(void);
extern "C" void DWCi_KB10lSetInput(void);
extern "C" void DWCi_KB10lSetShift(void);
extern "C" s32 DWCi_KB10lIsInit(...);
extern "C" s32 DWCi_ChangeScene(...);
extern "C" s32 DWCi_SetParam_(...);
extern "C" s32 DWCi_SetParam2_(...);
extern "C" s32 DWCi_GetParam2_(...);
extern "C" void DWCi_Language(void);
extern "C" void DWCi_MSGlGet(void);
extern "C" void DWCi_SceneSetApList(void);
extern "C" void procScene_16(void);
extern "C" s32 pushWinButton(...);
extern "C" s32 draw_20(...);
extern "C" void endScene_21(void);
extern "C" void drawWindow(void);
extern "C" s32 isEnablePush(...);
extern "C" s32 isPush(...);
extern "C" void taskUp_2(void);
extern "C" void taskDown_2(void);
extern "C" void taskVBlank_3(void);
extern "C" void dispFocus_4(void);
extern "C" s32 applyForcus1(...);
extern "C" void moveFocus_6(void);
extern "C" void taskPushCount(void);
extern "C" s32 pushButtonYesNo(...);
extern "C" s32 DWCi_SetListReturn(...);
extern "C" void DWCi_SceneSetSearch(void);
extern "C" void DWCi_SceneSetSelectAp(void);
extern "C" void DWCi_SceneSetSelectWay(void);
extern "C" void DWCi_SceneSetTestConfirm(void);
extern "C" void DWCi_SCREENlInit(void);
extern "C" void DWCi_SCREENlEnd(void);
extern "C" void DWCi_SCREENlRenew(void);
extern "C" void DWCi_SCREENlCopyPalette(void);
extern "C" void DWCi_SBlInit(void);
extern "C" void DWCi_SBlEnd(void);
extern "C" void DWCi_SBlSet(void);
extern "C" s32 DWCi_SBlEnable(...);
extern "C" void DWCi_SBlDisable(void);
extern "C" void DWCi_SEARCHlEnd(void);
extern "C" s32 DWCi_SETTIGNlGet(...);
extern "C" void DWCi_SETTINGlSetSsid(void);
extern "C" void DWCi_SETTINGlGetSsid(void);
extern "C" void DWCi_SETTINGlSetSetting(void);
extern "C" void DWCi_SETTINGlConvAddress(void);
extern "C" s32 DWCi_SNDlPlay(...);
extern "C" s32 DWCi_WINlInitEx(...);
extern "C" s32 DWCi_WINlEnd(...);
extern "C" s32 DWCi_WINlGet(...);
extern "C" s32 DWCi_WINlIsInit(...);
extern "C" void DWCi_ARClReadEx(void);
extern "C" void DWCi_ARClRelease(void);
extern "C" void DWCi_CEINlSetExObj(void);
extern "C" s32 DWCi_EFFlCheck(...);
extern "C" s32 DWCi_EFFlFade(...);
extern "C" s32 DWCi_EFFlWait(...);
extern "C" void DWCi_FNTlFormBgEx(void);
extern "C" void DWCi_FNTlDeleteBg(void);
extern "C" s32 DWCi_FNTlDeleteBgLcd(...);
extern "C" void DWCi_FNTlDrawStringEx(void);
extern "C" void DWCi_FNTlDrawRect(void);
extern "C" void DWCi_FNTlClear(void);
extern "C" void DWCi_FNTlRenewBg(void);
extern "C" s32 DWCi_GXlVisible(...);
extern "C" s32 DWCi_GXlInvisible(...);
extern "C" void DWCi_HEAPlAllocEx(void);
extern "C" s32 DWCi_HEAPlFree_(...);
extern "C" s32 DWCi_IPTlCheckTrigger(...);
extern "C" void DWCi_IPTlCheckRepeat(void);
extern "C" void DWCi_IPTlCheckRelease(void);
extern "C" s32 DWCi_OBJlDelete(...);
extern "C" void DWCi_STRlNLen(void);
extern "C" void DWCi_STRlConvertStringAsciiToUnicode(void);
extern "C" s32 DWCi_TSKlForm(...);
extern "C" void DWCi_TSKlDelete(void);
extern "C" void DWCi_TSKlDeleteEx(void);
extern "C" void memcmp(void);

extern "C" asm void button_12(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    ldr r4, =data_ov016_02158ab8
    ldr r1, [r4, #4]
    ldr r0, [r1, #0x38]
    cmp r0, #0
    ldreqb r0, [r1, #0x57]
    cmpeq r0, #0
    addne sp, sp, #4
    ldmneia sp!, {r3, r4, pc}
    bl DWCi_BTNlGet
    cmp r0, #0
    beq @L_0213ff68
    cmp r0, #1
    beq @L_0213ff70
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
@L_0213ff68:
    mov r0, #7
    b @L_02140018
@L_0213ff70:
    ldrb r0, [r4]
    cmp r0, #4
    bne @L_0213ff98
    ldr r1, [r4, #4]
    mov r2, #1
    mov r0, #6
    strb r2, [r1, #0x54]
    bl DWCi_SNDlPlay
    bl dispPushButton_2
    b @L_0214001c
@L_0213ff98:
    ldrh r0, [r4, #2]
    mov r1, #0x1c
    bl FX_DivS32
    ldrb r12, [r4]
    ldr r3, [r4, #4]
    mov r1, #0x2a
    ldr r2, [r3]
    add r12, r12, r0
    mla r0, r12, r1, r2
    ldrb r0, [r0, #0x28]
    cmp r0, #2
    bne @L_02140004
    mov r0, #9
    bl DWCi_SNDlPlay
    bl DWCi_SBlDisable
    bl DWCi_BTNlDisable
    mov r1, #1
    mov r0, #0
    str r0, [sp]
    mov r2, r1
    mov r0, #0xe
    sub r3, r1, #2
    bl DWCi_WINlInitEx
    ldr r0, =procError_2
    bl DWCi_ChangeScene
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
@L_02140004:
    mov r0, #1
    strb r0, [r3, #0x54]
    ldr r1, [r4, #4]
    mov r0, #6
    strb r12, [r1, #0x52]
@L_02140018:
    bl DWCi_SNDlPlay
@L_0214001c:
    ldr r0, =endScene_17
    bl DWCi_ChangeScene
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}

extern "C" void endScene_17(void)
{
    DWCi_BTNlDisable();
    DWCi_EFFlWait(8);
    DWCi_ChangeScene((s32)endScene1_16);
}

extern "C" s32 endScene1_16(void)
{
    s32 v0;
    s32 v5;
    v0 = DWCi_EFFlCheck(1);
    if (v0 != 0)
        return v0;
    if (*(u8 *)(*(u8 * *)(data_ov016_02158ab8 + 0x4) + 0x54) != 0) {
        DWCi_BTNlEnd();
    } else {
        DWCi_BTNlDisable();
    }
    DWCi_EFFlFade(3, 1, 1, 8);
    DWCi_EFFlFade(3, 0, 0x1D, 8);
    v5 = DWCi_ChangeScene((s32)endScene2_13);
    return v5;
}

extern "C" asm void endScene2_13(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, #1
    mov r0, r6
    bl DWCi_EFFlCheck
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    mov r4, #0
    mov r0, r4
    bl DWCi_EFFlCheck
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    bl DWCi_BTNlIsEnd
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r5, =data_ov016_02158ab8
    mov r0, r6
    ldr r1, [r5, #4]
    ldr r1, [r1, #0x3c]
    bl DWCi_TSKlDeleteEx
@L_0214011c:
    ldr r0, [r5, #4]
    add r0, r0, r4, lsl #2
    ldr r0, [r0, #0x10]
    cmp r0, #0
    beq @L_02140134
    bl DWCi_OBJlDelete
@L_02140134:
    ldr r0, [r5, #4]
    add r0, r0, r4, lsl #2
    ldr r0, [r0, #0x24]
    cmp r0, #0
    beq @L_0214014c
    bl DWCi_OBJlDelete
@L_0214014c:
    add r4, r4, #1
    cmp r4, #5
    blt @L_0214011c
    ldr r7, =data_ov016_02158ab8
    ldr r0, [r7, #4]
    ldr r0, [r0, #0xc]
    bl DWCi_FNTlDeleteBg
    bl DWCi_SBlEnd
    bl DWCi_FOCUSlDelete
    bl DWCi_COMMENTlDelete
    bl DWCi_SCREENlEnd
    ldr r0, [r7, #4]
    ldr r0, [r0, #4]
    bl DWCi_ARClRelease
    ldr r0, [r7, #4]
    ldr r0, [r0, #8]
    bl DWCi_ARClRelease
    mov r5, #1
    mov r0, r5
    mov r1, r5
    bl DWCi_GXlInvisible
    mov r4, #0
    mov r0, r4
    mov r1, #0x1d
    bl DWCi_GXlInvisible
    ldr r0, =0x4000010
    str r4, [r0]
    str r4, [r0, #8]
    ldr r2, [r7, #4]
    ldrb r0, [r2, #0x54]
    cmp r0, #0
    bne @L_021401f0
    bl DWCi_SEARCHlEnd
    bl DWCi_SETTIGNlGet
    ldrb r0, [r0, #0xf4]
    bl DWCi_SETTINGlSetSetting
    mov r1, r4
    mov r0, #2
    bl DWCi_SetParam_
    ldr r0, =DWCi_SceneSetSelectWay
    b @L_02140284
@L_021401f0:
    ldrb r0, [r7]
    cmp r0, #4
    bne @L_02140214
    bl DWCi_SEARCHlEnd
    mov r0, r4
    mov r1, r5
    bl DWCi_SetParam_
    ldr r0, =DWCi_SceneSetSearch
    b @L_02140284
@L_02140214:
    ldrb r1, [r2, #0x52]
    ldr r0, [r2]
    mov r6, #0x2a
    mla r0, r1, r6, r0
    bl DWCi_SETTINGlSetSsid
    mov r0, r4
    mov r1, r4
    bl DWCi_SetParam_
    ldr r0, [r7, #4]
    ldrb r1, [r0, #0x52]
    ldr r0, [r0]
    mla r0, r1, r6, r0
    ldrb r0, [r0, #0x28]
    mov r1, r5
    cmp r0, #0
    mov r0, r4
    beq @L_02140270
    bl DWCi_SetParam_
    mov r0, r5
    mov r1, r5
    bl DWCi_SetParam2_
    ldr r0, =DWCi_SceneSetEdit32
    b @L_02140284
@L_02140270:
    bl DWCi_SetParam_
    mov r0, r4
    mov r1, r5
    bl DWCi_SetParam2_
    ldr r0, =DWCi_SceneSetTestConfirm
@L_02140284:
    bl DWCi_ChangeScene
    ldr r0, =data_ov016_02158abc
    bl DWCi_HEAPlFree_
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void drawApInfo(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r4, =data_ov016_02158ab8
    mov r1, #0x1c
    ldrh r0, [r4, #2]
    bl FX_DivS32
    ldr r1, [r4, #4]
    mov r7, r0
    ldrb r4, [r1, #0x51]
    ldr r0, [r1, #0xc]
    mov r1, #0
    bl DWCi_FNTlClear
    cmp r4, #5
    movgt r4, #5
    mov r5, r7
    cmp r4, #0
    mov r6, #0
    ble @L_02140310
@L_021402f4:
    mov r0, r5
    mov r1, r6
    bl drawAp
    add r6, r6, #1
    cmp r6, r4
    add r5, r5, #1
    blt @L_021402f4
@L_02140310:
    cmp r4, #0
    mov r5, #0
    ble @L_02140338
@L_0214031c:
    mov r0, r7
    mov r1, r5
    bl drawApObj
    add r5, r5, #1
    cmp r5, r4
    add r7, r7, #1
    blt @L_0214031c
@L_02140338:
    ldr r0, =data_ov016_02158ab8
    ldr r0, [r0, #4]
    ldr r0, [r0, #0xc]
    bl DWCi_FNTlRenewBg
    bl setOffset
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void drawAp(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x30
    mov r8, r0
    mov r0, #0x2a
    ldr r5, =data_ov016_02158ab8
    mul r7, r8, r0
    ldr r0, [r5, #4]
    mov r4, r1
    ldr r0, [r0]
    mov r1, #0x20
    add r0, r0, r7
    bl DWCi_STRlNLen
    ldr r2, [r5, #4]
    mov r1, #0x1c
    ldrb r2, [r2, #0x51]
    mul r6, r4, r1
    cmp r8, r2
    mov r5, r0
    addge sp, sp, #0x30
    ldmgeia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    add r0, sp, #0xc
    cmp r5, #0x10
    mov r1, #0
    mov r2, #0x22
    addle r6, r6, #6
    bl MI_CpuFill8
    mov r8, r5
    cmp r5, #0x10
    movgt r8, #0x10
    cmp r8, #0
    mov r3, #0
    ble @L_02140400
    ldr r0, =data_ov016_02158ab8
    ldr r4, [r0, #4]
    add r0, sp, #0xc
@L_021403e0:
    ldr r2, [r4]
    mov r1, r3, lsl #1
    add r2, r7, r2
    ldrb r2, [r3, r2]
    add r3, r3, #1
    cmp r3, r8
    strh r2, [r0, r1]
    blt @L_021403e0
@L_02140400:
    mov r1, #0xa
    add r4, sp, #0xc
    stmia sp, {r1, r4}
    mov r0, #1
    ldr r9, =data_ov016_02158ab8
    str r0, [sp, #8]
    ldr r0, [r9, #4]
    mov r2, r6
    ldr r0, [r0, #0xc]
    mov r3, #2
    bl DWCi_FNTlDrawStringEx
    cmp r5, #0x10
    addle sp, sp, #0x30
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r8, #0
    mov r0, r4
    mov r1, r8
    mov r2, #0x22
    bl MI_CpuFill8
    sub r2, r5, #0x10
    cmp r2, #0
    ble @L_02140480
    ldr r3, [r9, #4]
@L_0214045c:
    ldr r1, [r3]
    mov r0, r8, lsl #1
    add r1, r7, r1
    add r1, r8, r1
    ldrb r1, [r1, #0x10]
    add r8, r8, #1
    cmp r8, r2
    strh r1, [r4, r0]
    blt @L_0214045c
@L_02140480:
    mov r1, #0xa
    add r0, sp, #0xc
    str r1, [sp]
    str r0, [sp, #4]
    mov r2, #1
    str r2, [sp, #8]
    ldr r0, =data_ov016_02158ab8
    add r2, r6, #0xc
    ldr r0, [r0, #4]
    mov r3, #2
    ldr r0, [r0, #0xc]
    bl DWCi_FNTlDrawStringEx
    add sp, sp, #0x30
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" s32 drawApObj(s32 arg0, s32 arg1)
{
    u8 *t0;
    s32 t1;
    s32 t3;
    u8 *t6;
    if (arg0 >= *(u8 *)(*(u8 * *)(data_ov016_02158ab8 + 0x4) + 0x51))
        return arg0;
    t0 = *(u8 * *)(((u8 *)(*(u8 * *)(data_ov016_02158ab8 + 0x4) + (arg1 << 2))) + 0x10);
    t1 = ((*(u16 *)(*(u8 * *)(((u8 *)(*(u8 * *)(data_ov016_02158ab8 + 0x4) + (arg1 << 2))) + 0x10) + 0x4) & (0 - 0x400)) | *(u16 *)(((u8 *)(*(u8 * *)(data_ov016_02158ab8 + 0x4) + (*(u8 *)(((u8 *)(*(s32 *)(*(u8 * *)(data_ov016_02158ab8 + 0x4)) + (arg0 * 0x2A))) + 0x28) << 1))) + 0x42));
    *(u16 *)(t0 + 0x4) = t1;
    t3 = ((*(u16 *)(*(u8 * *)(((u8 *)(*(u8 * *)(data_ov016_02158ab8 + 0x4) + (arg1 << 2))) + 0x24) + 0x4) & (0 - 0x400)) | *(u16 *)(((u8 *)(*(u8 * *)(data_ov016_02158ab8 + 0x4) + (*(u16 *)(((u8 *)(*(s32 *)(*(u8 * *)(data_ov016_02158ab8 + 0x4)) + (arg0 * 0x2A))) + 0x26) << 1))) + 0x48));
    t6 = *(u8 * *)(((u8 *)(*(u8 * *)(data_ov016_02158ab8 + 0x4) + (arg1 << 2))) + 0x24);
    *(u16 *)(t6 + 0x4) = t3;
    return t3;
}

extern "C" void setOffset(void)
{
    s32 y = 0x36 - ((s32 (*)(...))FX_ModS32)(*(u16 *)((u8 *)data_ov016_02158ab8 + 2), 0x1C);
    s32 n = (*(u8 **)((u8 *)data_ov016_02158ab8 + 4))[0x51];
    s32 i;
    if (n > 5)
        n = 5;
    for (i = 0; i < n; i++) {
        u32 *o = *(u32 **)(*(u8 **)((u8 *)data_ov016_02158ab8 + 4) + (i << 2) + 0x10);
        *o = (*o & 0xFE00FF00) | ((y - 2) & 0xFF) | (0xB3 << 16);
        o = *(u32 **)(*(u8 **)((u8 *)data_ov016_02158ab8 + 4) + (i << 2) + 0x24);
        *o = (*o & 0xFE00FF00) | ((y + 1) & 0xFF) | (0xD2 << 16);
        y += 0x1C;
    }
    (*(u8 **)((u8 *)data_ov016_02158ab8 + 4))[0x56] = 1;
}

extern "C" void taskUp(s32 arg0)
{
    s32 m;
    ((s32 (*)(...))DWCi_SBlDisable)();
    ((s32 (*)(...))DWCi_FOCUSlDelete)();
    if (*(u16 *)((u8 *)data_ov016_02158ab8 + 2) > 4)
        *(u16 *)((u8 *)data_ov016_02158ab8 + 2) = *(u16 *)((u8 *)data_ov016_02158ab8 + 2) - 4;
    else
        *(u16 *)((u8 *)data_ov016_02158ab8 + 2) = 0;
    m = ((s32 (*)(...))FX_ModS32)(*(u16 *)((u8 *)data_ov016_02158ab8 + 2), 0x1C);
    if (m == 0x18) {
        ((s32 (*)(...))drawApInfo)();
        return;
    }
    if (m > 0x18) {
        *(u16 *)((u8 *)data_ov016_02158ab8 + 2) += (u16)(0x1C - m);
        m = 0;
    }
    ((s32 (*)(...))setOffset)();
    if (m != 0)
        return;
    {
        u8 *p = *(u8 **)((u8 *)data_ov016_02158ab8 + 4);
        ((s32 (*)(...))DWCi_SBlSet)(((s32 (*)(...))FX_DivS32)(*(u16 *)((u8 *)data_ov016_02158ab8 + 2) * p[0x53], *(u16 *)(p + 0x40)));
    }
    ((s32 (*)(...))DWCi_SBlEnable)();
    ((s32 (*)(...))dispFocus_3)();
    *(s32 *)(*(u8 **)((u8 *)data_ov016_02158ab8 + 4) + 0x38) = 0;
    ((s32 (*)(...))DWCi_TSKlDelete)(0, arg0);
}

extern "C" asm void taskDown(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    bl DWCi_SBlDisable
    bl DWCi_FOCUSlDelete
    ldr r5, =data_ov016_02158ab8
    mov r1, #0x1c
    ldrh r0, [r5, #2]
    add r0, r0, #4
    strh r0, [r5, #2]
    ldrh r0, [r5, #2]
    bl FX_ModS32
    cmp r0, #4
    blt @L_021406f4
    bl setOffset
    ldmia sp!, {r3, r4, r5, pc}
@L_021406f4:
    ldrh r1, [r5, #2]
    mov r0, r0, lsl #0x10
    sub r0, r1, r0, lsr #16
    strh r0, [r5, #2]
    bl drawApInfo
    ldr r1, [r5, #4]
    ldrh r2, [r5, #2]
    ldrb r0, [r1, #0x53]
    ldrh r1, [r1, #0x40]
    mul r0, r2, r0
    bl FX_DivS32
    bl DWCi_SBlSet
    bl DWCi_SBlEnable
    bl dispFocus_3
    ldr r2, [r5, #4]
    mov r0, #0
    mov r1, r4
    str r0, [r2, #0x38]
    bl DWCi_TSKlDelete
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 taskVBlank_2(void)
{
    if (*(u8 *)(*(u8 * *)(data_ov016_02158ab8 + 0x4) + 0x56) == 0)
        return *(u8 *)(*(u8 * *)(data_ov016_02158ab8 + 0x4) + 0x56);
    u16 t0 = *(u16 *)(data_ov016_02158ab8 + 0x2);
    s32 v0 = FX_ModS32(t0, 0x1C);
    *(s32 *)(((u8 *)0x4000010)) = (0x1FF0000 & ((v0 - 0x32) << 0x10));
    *(s32 *)(((u8 *)0x4000010) + 0x8) = (0x1FF0000 & ((v0 - 0x32) << 0x10));
    u8 *t1 = (u8 *)*(s32 *)(data_ov016_02158ab8 + 0x4);
    *(u8 *)(t1 + 0x56) = 0;
    return (s32)t1;
}

extern "C" void dispFocus_3(void)
{
    u8 i = *(u8 *)data_ov016_02158ab8;
    ((void (*)(s32, u16, u16, u16))DWCi_FOCUSlDisp)(i < 4 ? 2 : 3, *(u16 *)((u8 *)data_ov016_02154a48 + i * 8), *(u16 *)((u8 *)data_ov016_02154a4c + i * 8), *(u16 *)((u8 *)data_ov016_02154a4a + i * 8));
}

extern "C" asm void moveFocus_5(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r5, =data_ov016_02158ab8
    mov r6, #0
    ldrb r2, [r5]
    mov r4, #1
    cmp r2, #4
    addls pc, pc, r2, lsl #2
    b @L_021408e4
    b @L_02140820
    b @L_02140880
    b @L_02140880
    b @L_021408ac
    b @L_021408c4
@L_02140820:
    cmp r0, #1
    bne @L_02140864
    ldrh r0, [r5, #2]
    cmp r0, #0
    moveq r0, #4
    streqb r0, [r5]
    beq @L_021408e4
    mov r0, #0x13
    bl DWCi_SNDlPlay
    mov r0, r6
    ldr r1, =taskUp
    mov r2, r0
    mov r3, #0x78
    bl DWCi_TSKlForm
    ldr r1, [r5, #4]
    str r0, [r1, #0x38]
    ldmia sp!, {r4, r5, r6, pc}
@L_02140864:
    ldr r0, [r5, #4]
    ldrb r0, [r0, #0x51]
    cmp r0, #1
    addhi r0, r2, #1
    strhib r0, [r5]
    movls r4, r6
    b @L_021408e4
@L_02140880:
    cmp r0, #1
    subeq r0, r2, #1
    streqb r0, [r5]
    beq @L_021408e4
    ldr r1, [r5, #4]
    add r0, r2, #1
    ldrb r1, [r1, #0x51]
    cmp r1, r0
    strgtb r0, [r5]
    movle r4, r6
    b @L_021408e4
@L_021408ac:
    cmp r0, #1
    subeq r0, r2, #1
    streqb r0, [r5]
    beq @L_021408e4
    bl scrollDown
    ldmia sp!, {r4, r5, r6, pc}
@L_021408c4:
    cmp r0, #1
    moveq r4, r6
    beq @L_021408e4
    strh r6, [r5, #2]
    strb r6, [r5]
    bl drawApInfo
    mov r0, r6
    bl DWCi_SBlSet
@L_021408e4:
    cmp r4, #0
    bne @L_02140918
    ldr r4, =data_ov016_02158ab8
    ldr r0, [r4, #4]
    ldrb r0, [r0, #0x59]
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    mov r0, #9
    bl DWCi_SNDlPlay
    ldr r0, [r4, #4]
    mov r1, #1
    strb r1, [r0, #0x59]
    ldmia sp!, {r4, r5, r6, pc}
@L_02140918:
    mov r0, #8
    bl DWCi_SNDlPlay
    bl dispFocus_3
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 scrollUp(void)
{
    u8 *r4;
    s32 v2;
    u8 *t0;
    u8 *t1;
    r4 = (u8 *)data_ov016_02158ab8;
    if (*(u16 *)(r4 + 0x2) == 0) {
        if (*(u8 *)(*(u8 * *)(r4 + 0x4) + 0x59) != 0)
            return *(u8 *)(*(u8 * *)(r4 + 0x4) + 0x59);
        DWCi_SNDlPlay(9);
        t0 = (u8 *)*(s32 *)(r4 + 0x4);
        *(u8 *)(t0 + 0x59) = 1;
        return (s32)t0;
    } else {
        DWCi_SNDlPlay(0x13);
        v2 = DWCi_TSKlForm(0, (s32)taskUp, 0, 0x78);
        t1 = (u8 *)*(s32 *)(r4 + 0x4);
        *(s32 *)(t1 + 0x38) = v2;
        return v2;
    }
}

extern "C" s32 scrollDown(void)
{
    u8 *r2;
    s32 v2;
    u8 *t0;
    u8 *t1;
    r2 = (u8 *)*(s32 *)(((u8 *)&data_ov016_02158ab8) + 0x4);
    if ((*(u16 *)(((u8 *)&data_ov016_02158ab8) + 0x2) == *(u16 *)(r2 + 0x40) || (u32)*(u8 *)(r2 + 0x51) <= (u32)4)) {
        if (*(u8 *)(r2 + 0x59) != 0)
            return *(u8 *)(r2 + 0x59);
        DWCi_SNDlPlay(9);
        t0 = (u8 *)*(s32 *)(((u8 *)&data_ov016_02158ab8) + 0x4);
        *(u8 *)(t0 + 0x59) = 1;
        return (s32)t0;
    } else {
        DWCi_SNDlPlay(0x13);
        v2 = DWCi_TSKlForm(0, (s32)((u8 *)&taskDown), 0, 0x78);
        t1 = (u8 *)*(s32 *)(((u8 *)&data_ov016_02158ab8) + 0x4);
        *(s32 *)(t1 + 0x38) = v2;
        return v2;
    }
}

extern "C" asm void dispPushButton_2(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, =data_ov016_02154a14
    ldr r0, =data_ov016_02158ab8
    ldrb r1, [r1]
    ldr r0, [r0, #4]
    ldr r0, [r0, #8]
    mov r2, r1
    bl DWCi_SCREENlCopyPalette
    ldmia sp!, {r3, pc}
}

extern "C" void procError_2(void)
{
    s32 v0 = DWCi_WINlGet();
    if (v0 != 0)
        return;
    DWCi_SNDlPlay(6);
    DWCi_WINlEnd();
    DWCi_ChangeScene((s32)procError1_2);
}

extern "C" void procError1_2(void)
{
    s32 v0 = DWCi_WINlIsInit();
    if (v0 != 0)
        return;
    DWCi_BTNlEnable();
    DWCi_SBlEnable();
    DWCi_ChangeScene((s32)procScene_16);
}

extern "C" asm void DWCi_SceneSetEdit32(void)
{
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    ldr r1, =data_ov016_02154aa4
    mov r0, #0x2c
    ldrb r3, [r1]
    ldrb r2, [r1, #1]
    mov r1, #4
    strb r3, [sp]
    strb r2, [sp, #1]
    bl DWCi_HEAPlAllocEx
    ldr r4, =data_ov016_02158ac0
    add r1, sp, #4
    str r0, [r4]
    add r0, sp, #8
    bl DWCi_GetParam2_
    ldr r0, [sp, #8]
    cmp r0, #0
    bne @L_02140b08
    ldr r0, [r4]
    add r0, r0, #8
    bl DWCi_SETTINGlGetSsid
    ldr r0, [r4]
    mov r1, #0x20
    add r0, r0, #8
    bl DWCi_STRlNLen
    ldr r1, [r4]
    strb r0, [r1, #0x29]
@L_02140b08:
    bl initGraphics_17
    ldr r0, [sp, #8]
    add r0, r0, #9
    bl DWCi_HLlLoad
    ldr r0, [sp, #4]
    cmp r0, #1
    bne @L_02140b30
    mov r0, #0x35
    sub r1, r0, #0x36
    b @L_02140b40
@L_02140b30:
    ldr r2, [sp, #8]
    add r0, sp, #0
    ldrb r0, [r0, r2]
    mvn r1, #0
@L_02140b40:
    mov r2, #0
    bl DWCi_COMMENTlDispEx
    mov r0, #2
    bl DWCi_CMNlStep
    mov r5, #0
    mov r0, r5
    mov r1, r5
    bl DWCi_FNTlFormBgEx
    ldr r4, =data_ov016_02158ac0
    mov r1, #0x3e
    ldr r2, [r4]
    str r0, [r2]
    mov r0, r5
    bl DWCi_CEINlSetExObj
    ldr r1, [r4]
    str r0, [r1, #4]
    ldr r0, [r4]
    ldr r1, [r0, #4]
    ldrh r0, [r1, #4]
    bic r0, r0, #0xc00
    orr r0, r0, #0xc00
    strh r0, [r1, #4]
    bl dispCaret
    bl drawSsid
    ldr r0, =procInit_17
    bl DWCi_ChangeScene
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, pc}
}

extern "C" s32 initGraphics_17(void)
{
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    DWCi_CMNlLoadResource((s32)data_ov016_02155948, (s32)GX_LoadOBJPltt);
    DWCi_CMNlLoadResource((s32)data_ov016_0215595c, (s32)GX_LoadBG2Char);
    DWCi_CMNlLoadResource((s32)data_ov016_02155974, (s32)GX_LoadBGPltt);
    DWCi_CMNlLoadResource((s32)data_ov016_0215598c, (s32)GX_LoadBG2Scr);
    t0 = ((*(u16 *)(((u8 *)0x4001008)) & -4) | 3);
    *(u16 *)(((u8 *)0x4001008)) = t0;
    t1 = ((*(u16 *)(((u8 *)0x4001008) + 0x2) & -4) | 3);
    *(u16 *)(((u8 *)0x4001008) + 0x2) = t1;
    t2 = ((*(u16 *)(((u8 *)(0x4001008 - 0x1000))) & -4) | 2);
    *(u16 *)(((u8 *)(0x4001008 - 0x1000))) = t2;
    t3 = ((*(u16 *)(((u8 *)0x400000A)) & -4) | 3);
    *(u16 *)(((u8 *)0x400000A)) = t3;
    t4 = ((*(u16 *)(((u8 *)0x400000A) + 0x2) & -4) | 3);
    *(u16 *)(((u8 *)0x400000A) + 0x2) = t4;
    return t4;
}

extern "C" void procInit_17(void)
{
    DWCi_EFFlFade(2, 1, 1, 8);
    DWCi_EFFlFade(2, 0, 0x15, 8);
    DWCi_GXlVisible(1, 1);
    DWCi_GXlVisible(0, 0x15);
    DWCi_ChangeScene((s32)procInit1_17);
}

extern "C" s32 procInit1_17(void)
{
    s32 r4;
    s32 v0;
    s32 v1;
    s32 v6;
    v0 = DWCi_EFFlCheck(1);
    if (v0 != 0)
        return v0;
    v1 = DWCi_EFFlCheck(0);
    if (v1 != 0)
        return v1;
    DWCi_KBlInit();
    DWCi_SNDlPlay(0x14);
    r4 = 0;
    if (*(u8 *)(*(u8 * *)(data_ov016_02158ac0) + 0x29) == 0) {
        DWCi_KBlSetErase(r4);
    }
    if (*(u8 *)(*(u8 * *)(data_ov016_02158ac0) + 0x29) == 0x20) {
        DWCi_KBlSetInput(0);
    }
    v6 = DWCi_ChangeScene((s32)procInit2_14);
    return v6;
}

extern "C" void procInit2_14(void)
{
    s32 v0 = DWCi_KBlGet();
    if (v0 == 0xFF)
        return;
    DWCi_ChangeScene((s32)procScene_17);
}

extern "C" void procScene_17(void)
{
    input_15();
    draw_17();
}

extern "C" asm s32 input_15(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r5, =data_ov016_02158ac0
    bl DWCi_KBlGet
    mov r4, r0
    cmp r4, #0x83
    bgt @L_02140eac
    cmp r4, #0x80
    blt @L_02140dc8
    beq @L_02140dd4
    cmp r4, #0x82
    beq @L_02140e2c
    cmp r4, #0x83
    beq @L_02140e4c
    b @L_02140eac
@L_02140dc8:
    cmp r4, #0
    beq @L_02140f08
    b @L_02140eac
@L_02140dd4:
    ldr r0, [r5]
    ldrb r0, [r0, #0x29]
    cmp r0, #0
    beq @L_02140f08
    mov r0, #3
    bl DWCi_SNDlPlay
    ldr r2, [r5]
    mov r0, #0
    ldrb r1, [r2, #0x29]
    sub r1, r1, #1
    strb r1, [r2, #0x29]
    ldr r2, [r5]
    ldrb r1, [r2, #0x29]
    add r1, r2, r1
    strb r0, [r1, #8]
    ldr r1, [r5]
    ldrb r1, [r1, #0x29]
    cmp r1, #0
    bne @L_02140e24
    bl DWCi_KBlSetErase
@L_02140e24:
    mov r0, #1
    b @L_02140f04
@L_02140e2c:
    mov r0, #7
    bl DWCi_SNDlPlay
    ldr r1, [r5]
    mov r2, #0
    ldr r0, =endScene_18
    strb r2, [r1, #0x2a]
    bl DWCi_ChangeScene
    ldmia sp!, {r4, r5, r6, pc}
@L_02140e4c:
    bl isCorrect
    cmp r0, #0
    beq @L_02140e70
    mov r0, #6
    bl DWCi_SNDlPlay
    ldr r0, [r5]
    mov r1, #1
    strb r1, [r0, #0x2a]
    b @L_02140e84
@L_02140e70:
    ldr r1, [r5]
    mov r2, #2
    mov r0, #9
    strb r2, [r1, #0x2a]
    bl DWCi_SNDlPlay
@L_02140e84:
    ldr r0, [r5]
    ldr r1, =0xc1fffcff
    ldr r3, [r0, #4]
    ldr r0, =endScene_18
    ldr r2, [r3]
    and r1, r2, r1
    orr r1, r1, #0x200
    str r1, [r3]
    bl DWCi_ChangeScene
    ldmia sp!, {r4, r5, r6, pc}
@L_02140eac:
    ldr r0, [r5]
    ldrb r0, [r0, #0x29]
    cmp r0, #0x20
    beq @L_02140f08
    mov r6, #1
    mov r0, r6
    bl DWCi_SNDlPlay
    ldr r2, [r5]
    mov r0, r6
    ldrb r1, [r2, #0x29]
    add r1, r2, r1
    strb r4, [r1, #8]
    ldr r2, [r5]
    ldrb r1, [r2, #0x29]
    add r1, r1, #1
    strb r1, [r2, #0x29]
    bl DWCi_KBlSetErase
    ldr r0, [r5]
    ldrb r0, [r0, #0x29]
    cmp r0, #0x20
    bne @L_02140f08
    mov r0, #0
@L_02140f04:
    bl DWCi_KBlSetInput
@L_02140f08:
    bl drawSsid
    bl dispCaret
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" void draw_17(void)
{
}

extern "C" void endScene_18(void)
{
    DWCi_EFFlWait(8);
    DWCi_ChangeScene((s32)endScene1_17);
}

extern "C" void endScene1_17(void)
{
    s32 v0 = DWCi_EFFlCheck(1);
    if (v0 != 0)
        return;
    DWCi_KBlEnd();
    DWCi_SNDlPlay(0x15);
    DWCi_ChangeScene((s32)endScene2_14);
}

extern "C" asm void endScene2_14(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x10
    ldr r0, =data_ov016_02154ac0
    add r5, sp, #8
    ldr r1, [r0]
    ldr r0, [r0, #4]
    str r1, [sp, #8]
    str r0, [sp, #0xc]
    bl DWCi_KBlIsInit
    cmp r0, #0
    addne sp, sp, #0x10
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r0, =data_ov016_02158ac0
    ldr r0, [r0]
    ldrb r0, [r0, #0x2a]
    cmp r0, #0
    bne @L_02140fc4
    ldr r0, =endScene3
    bl DWCi_ChangeScene
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, pc}
@L_02140fc4:
    cmp r0, #2
    mov r4, #0
    bne @L_02140ff8
    mov r2, #1
    sub r3, r2, #2
    mov r0, #6
    mov r1, #3
    str r4, [sp]
    bl DWCi_WINlInitEx
    ldr r0, =procError_3
    bl DWCi_ChangeScene
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, pc}
@L_02140ff8:
    add r1, sp, #4
    mov r0, r4
    bl DWCi_GetParam2_
    str r4, [sp]
    ldr r0, [sp, #4]
    mov r2, #1
    ldr r0, [r5, r0, lsl #2]
    sub r3, r2, #2
    mov r1, #2
    bl DWCi_WINlInitEx
    ldr r0, =procWin
    bl DWCi_ChangeScene
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void endScene3(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #8
    bl DWCi_COMMENTlDelete
    ldr r4, =data_ov016_02158ac0
    ldr r0, [r4]
    ldr r0, [r0, #4]
    bl DWCi_OBJlDelete
    mov r6, #0
    mov r0, r6
    bl DWCi_FNTlDeleteBgLcd
    ldr r0, =data_ov016_021559a0
    ldr r1, =GX_LoadOBJPltt
    bl DWCi_CMNlLoadResource
    mov r5, #1
    mov r0, r5
    mov r1, r5
    bl DWCi_GXlInvisible
    mov r0, r6
    mov r1, #0x15
    bl DWCi_GXlInvisible
    add r0, sp, #4
    add r1, sp, #0
    bl DWCi_GetParam2_
    ldr r0, [sp]
    cmp r0, #0
    bne @L_021410cc
    mov r1, r5
    mov r0, #2
    bl DWCi_SetParam_
    ldr r1, [sp, #4]
    mov r0, r6
    bl DWCi_SetParam2_
    ldr r0, =DWCi_SceneSetList
    b @L_02141114
@L_021410cc:
    ldr r0, [r4]
    ldrb r0, [r0, #0x2a]
    cmp r0, #0
    mov r0, r6
    bne @L_021410fc
    mov r1, r5
    bl DWCi_SetParam_
    mov r0, r5
    mov r1, r6
    bl DWCi_SetParam2_
    ldr r0, =DWCi_SceneSetApList
    b @L_02141114
@L_021410fc:
    mov r1, r6
    bl DWCi_SetParam_
    mov r0, r6
    mov r1, r5
    bl DWCi_SetParam2_
    ldr r0, =DWCi_SceneSetTestConfirm
@L_02141114:
    bl DWCi_ChangeScene
    ldr r0, =data_ov016_02158ac0_b
    bl DWCi_HEAPlFree_
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void drawSsid(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    ldr r0, =data_ov016_02158ac0
    mov r10, #0
    ldr r0, [r0]
    add r5, sp, #0x14
    ldr r0, [r0]
    mov r1, r10
    strh r10, [r5, #2]
    mov r4, #0x20
    strh r10, [r5, #4]
    mov r3, #0xe
    strh r10, [r5, #6]
    mov r2, #0x10
    strh r10, [r5]
    strh r4, [sp, #0x16]
    strh r3, [sp, #0x18]
    strh r2, [sp, #0x1a]
    bl DWCi_FNTlClear
    ldr r7, =0xe01d
    ldr r6, =data_ov016_02154aae
    mov r9, r10
    strh r10, [sp, #0x12]
    mov r8, #0x31
    mov r5, #2
    mov r4, #0x480
    add r11, sp, #0x10
@L_021411b0:
    ldr r0, =data_ov016_02158ac0
    cmp r10, #0x10
    ldr r0, [r0]
    moveq r9, #0
    add r1, r0, r10
    ldrb r1, [r1, #8]
    streqh r8, [sp, #0x16]
    ldrb r3, [r6, r9]
    cmp r1, #0x20
    streqh r7, [sp, #0x10]
    strneh r1, [sp, #0x10]
    ldrh r1, [sp, #0x1a]
    strh r3, [sp, #0x14]
    ldrh r2, [sp, #0x16]
    stmia sp, {r1, r5}
    str r4, [sp, #8]
    str r11, [sp, #0xc]
    ldrh r1, [sp, #0x14]
    ldrh r3, [sp, #0x18]
    ldr r0, [r0]
    bl DWCi_FNTlDrawRect
    add r10, r10, #1
    cmp r10, #0x20
    add r9, r9, #1
    blt @L_021411b0
    ldr r0, =data_ov016_02158ac0
    ldr r0, [r0]
    ldr r0, [r0]
    bl DWCi_FNTlRenewBg
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void dispCaret(void)
{
    u8 *p = *(u8 **)data_ov016_02158ac0;
    s32 v = *(u8 *)(p + 0x29);
    u32 *q = *(u32 **)(p + 4);
    s32 lo = v & 0xF;
    s32 hi = v >> 4;
    u32 a, b;
    if ((u32)v >= 0x20) {
        hi = 1;
        lo = 0xF;
    }
    b = ((u8 *)data_ov016_02154aae)[lo];
    a = ((u8 *)data_ov016_02154aa8)[hi];
    *q = (*q & 0xFE00FF00) | a | ((b & 0x1FF) << 16);
}

extern "C" s32 procWin(void)
{
    s32 r0;
    s32 r1;
    s32 r2;
    s32 v0;
    s32 v3;
    u8 *t0;
    v0 = DWCi_WINlGet();
    t0 = (u8 *)*(s32 *)(((u8 *)&data_ov016_02158ac0));
    *(u8 *)(t0 + 0x2A) = v0;
    r1 = (s32)((u8 *)&data_ov016_02158ac0);
    r2 = (s32)t0;
    r0 = *(u8 *)(*(u8 * *)(((u8 *)&data_ov016_02158ac0)) + 0x2A);
    switch (r0) {
        default:
            return r0;
        case 0:
            r0 = 7;
            break;
        case 1:
            r0 = 0xE;
            break;
    }
    DWCi_SNDlPlay(r0, r1, r2);
    DWCi_WINlEnd();
    v3 = DWCi_ChangeScene((s32)((u8 *)&procWin1));
    return v3;
}

extern "C" void procWin1(void)
{
    S021412f8 s = *(S021412f8 *)data_ov016_02155940;
    s32 i;
    u8 **d;
    if (((s32 (*)(...))DWCi_WINlIsInit)() != 0)
        return;
    d = (u8 **)data_ov016_02158ac0;
    if ((*d)[0x2A] == 0) {
        **(u32 **)(*d + 4) &= 0xC1FFFCFF;
        ((s32 (*)(...))DWCi_ChangeScene)(procInit1_17);
        return;
    }
    ((s32 (*)(...))DWCi_GetParam2_)(&i, 0);
    s.f[i](*d + 8);
    ((s32 (*)(...))DWCi_ChangeScene)(endScene3);
}

extern "C" asm void isCorrect(void)
{
    stmdb sp!, {r3, lr}
    sub sp, sp, #8
    add r0, sp, #4
    add r1, sp, #0
    bl DWCi_GetParam2_
    ldr r0, [sp]
    cmp r0, #1
    bne @L_021413d4
    mov r0, #0x35
    sub r1, r0, #0x36
    mov r2, #0
    bl DWCi_COMMENTlDispEx
@L_021413d4:
    add r0, sp, #4
    add r1, sp, #0
    bl DWCi_GetParam2_
    ldr r0, [sp, #4]
    cmp r0, #0
    bne @L_0214140c
    ldr r0, =data_ov016_02158ac0
    add sp, sp, #8
    ldr r0, [r0]
    ldrb r0, [r0, #8]
    cmp r0, #0
    movne r0, #1
    moveq r0, #0
    ldmia sp!, {r3, pc}
@L_0214140c:
    ldr r0, [sp]
    cmp r0, #1
    ldreq r0, =data_ov016_02158ac0
    ldreq r0, [r0]
    ldreqb r0, [r0, #8]
    cmpeq r0, #0
    addeq sp, sp, #8
    moveq r0, #0
    ldmeqia sp!, {r3, pc}
    ldr r0, =data_ov016_02158ac0
    mov r1, #0x20
    ldr r0, [r0]
    add r0, r0, #8
    bl DWCi_STRlNLen
    cmp r0, #0x10
    bgt @L_02141484
    cmp r0, #0xa
    blt @L_02141468
    beq @L_021414ac
    cmp r0, #0xd
    cmpne r0, #0x10
    beq @L_021414a0
    b @L_0214151c
@L_02141468:
    cmp r0, #0
    bgt @L_02141478
    beq @L_021414a0
    b @L_0214151c
@L_02141478:
    cmp r0, #5
    beq @L_021414a0
    b @L_0214151c
@L_02141484:
    cmp r0, #0x1a
    bgt @L_02141494
    beq @L_021414ac
    b @L_0214151c
@L_02141494:
    cmp r0, #0x20
    beq @L_021414ac
    b @L_0214151c
@L_021414a0:
    add sp, sp, #8
    mov r0, #1
    ldmia sp!, {r3, pc}
@L_021414ac:
    cmp r0, #0
    mov r2, #0
    ble @L_02141510
    ldr r1, =data_ov016_02158ac0
    ldr r3, [r1]
@L_021414c0:
    add r1, r3, r2
    ldrb r1, [r1, #8]
    cmp r1, #0x30
    blo @L_021414d8
    cmp r1, #0x39
    bls @L_02141504
@L_021414d8:
    cmp r1, #0x41
    blo @L_021414e8
    cmp r1, #0x46
    bls @L_02141504
@L_021414e8:
    cmp r1, #0x61
    blo @L_021414f8
    cmp r1, #0x66
    bls @L_02141504
@L_021414f8:
    add sp, sp, #8
    mov r0, #0
    ldmia sp!, {r3, pc}
@L_02141504:
    add r2, r2, #1
    cmp r2, r0
    blt @L_021414c0
@L_02141510:
    add sp, sp, #8
    mov r0, #1
    ldmia sp!, {r3, pc}
@L_0214151c:
    mov r0, #0
    add sp, sp, #8
    ldmia sp!, {r3, pc}
}

extern "C" void procError_3(void)
{
    s32 v0 = DWCi_WINlGet();
    if (v0 != 0)
        return;
    DWCi_SNDlPlay(6);
    DWCi_WINlEnd();
    DWCi_ChangeScene((s32)procError1_3);
}

extern "C" void procError1_3(void)
{
    s32 v0 = DWCi_WINlIsInit();
    if (v0 != 0)
        return;
    s32 t0 = (*(s32 *)(*(u8 * *)(*(u8 * *)(data_ov016_02158ac0) + 0x4)) & -0x3E000301);
    s32 t1 = *(s32 *)(*(u8 * *)(*(u8 * *)(data_ov016_02158ac0) + 0x4));
    u8 *t2 = *(u8 * *)(*(u8 * *)(data_ov016_02158ac0) + 0x4);
    *(s32 *)(t2) = t0;
    DWCi_ChangeScene((s32)procInit1_17, t0, t1, (s32)t2);
}

extern "C" asm void DWCi_SceneSetEditAddress(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x20
    ldr r5, =data_ov016_021559b8
    ldr r4, =data_ov016_02154adc
    ldmia r5!, {r0, r1, r2, r3}
    add r12, sp, #0xc
    ldr r6, [r5]
    mov r5, r12
    stmia r12!, {r0, r1, r2, r3}
    str r6, [r12]
    ldrb lr, [r4]
    ldrb r12, [r4, #1]
    ldrb r6, [r4, #2]
    ldrb r3, [r4, #3]
    ldrb r2, [r4, #4]
    mov r0, #0x18
    mov r1, #4
    strb lr, [sp, #4]
    strb r12, [sp, #5]
    strb r6, [sp, #6]
    strb r3, [sp, #7]
    strb r2, [sp, #8]
    bl DWCi_HEAPlAllocEx
    ldr r6, =data_ov016_02158ac4
    mov r4, #0
    str r0, [r6]
    add r0, sp, #0
    mov r1, r4
    bl DWCi_GetParam2_
    ldr r0, [sp]
    ldr r2, [r6]
    ldr r1, [r5, r0, lsl #2]
    add r0, r2, #8
    blx r1
    ldr r7, [r6]
    mov r5, #3
    ldr r1, =data_ov016_021559e0
    add r0, r7, #8
    mov r2, r5
    bl memcmp
    cmp r0, #0
    strneb r5, [r7, #0x14]
    bne @L_02141660
    mov r1, r4
    add r0, r7, #8
    mov r2, #0xc
    bl MI_CpuFill8
    ldr r0, [r6]
    strb r4, [r0, #0x14]
@L_02141660:
    bl initGraphics_18
    ldr r0, [sp]
    add r0, r0, #0xb
    bl DWCi_HLlLoad
    mov r5, #0
    ldr r1, [sp]
    add r0, sp, #4
    ldrb r0, [r0, r1]
    mov r2, r5
    mvn r1, #0
    bl DWCi_COMMENTlDispEx
    mov r0, #2
    bl DWCi_CMNlStep
    mov r0, r5
    mov r1, r5
    bl DWCi_FNTlFormBgEx
    ldr r4, =data_ov016_02158ac4
    mov r1, #0x3f
    ldr r2, [r4]
    str r0, [r2]
    mov r0, r5
    bl DWCi_CEINlSetExObj
    ldr r1, [r4]
    str r0, [r1, #4]
    ldr r0, [r4]
    ldr r1, [r0, #4]
    ldrh r0, [r1, #4]
    bic r0, r0, #0xc00
    orr r0, r0, #0xc00
    strh r0, [r1, #4]
    bl dispCaret_2
    bl drawAddress
    ldr r0, =procInit_18
    bl DWCi_ChangeScene
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" s32 initGraphics_18(void)
{
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    DWCi_CMNlLoadResource((s32)data_ov016_021559e4, (s32)GX_LoadOBJPltt);
    DWCi_CMNlLoadResource((s32)data_ov016_021559f8, (s32)GX_LoadBG2Char);
    DWCi_CMNlLoadResource((s32)data_ov016_02155a10, (s32)GX_LoadBGPltt);
    DWCi_CMNlLoadResource((s32)data_ov016_02155a28, (s32)GX_LoadBG2Scr);
    t0 = ((*(u16 *)(((u8 *)0x4001008)) & -4) | 3);
    *(u16 *)(((u8 *)0x4001008)) = t0;
    t1 = ((*(u16 *)(((u8 *)0x4001008) + 0x2) & -4) | 3);
    *(u16 *)(((u8 *)0x4001008) + 0x2) = t1;
    t2 = ((*(u16 *)(((u8 *)(0x4001008 - 0x1000))) & -4) | 2);
    *(u16 *)(((u8 *)(0x4001008 - 0x1000))) = t2;
    t3 = ((*(u16 *)(((u8 *)0x400000A)) & -4) | 3);
    *(u16 *)(((u8 *)0x400000A)) = t3;
    t4 = ((*(u16 *)(((u8 *)0x400000A) + 0x2) & -4) | 3);
    *(u16 *)(((u8 *)0x400000A) + 0x2) = t4;
    return t4;
}

extern "C" void procInit_18(void)
{
    DWCi_EFFlFade(2, 1, 1, 8);
    DWCi_EFFlFade(2, 0, 0x15, 8);
    DWCi_GXlVisible(1, 1);
    DWCi_GXlVisible(0, 0x15);
    DWCi_ChangeScene((s32)procInit1_18);
}

extern "C" void procInit1_18(void)
{
    s32 z;
    if (((s32 (*)(...))DWCi_EFFlCheck)(1) != 0)
        return;
    z = 0;
    if (((s32 (*)(...))DWCi_EFFlCheck)(z) != 0)
        return;
    ((s32 (*)(...))DWCi_KB10lInit)();
    ((s32 (*)(...))DWCi_SNDlPlay)(0x14);
    if ((*(u8 **)data_ov016_02158ac4)[0x14] == 0) {
        ((s32 (*)(...))DWCi_KB10lSetErase)(z);
        ((s32 (*)(...))DWCi_KB10lSetShift)(z);
    } else {
        if (((s32 (*)(...))isOver)(0x1A) != 0)
            ((s32 (*)(...))DWCi_KB10lSetInput)(z);
        ((s32 (*)(...))DWCi_KB10lSetShift)(0);
    }
    ((s32 (*)(...))DWCi_ChangeScene)(procInit2_15);
}

extern "C" void procInit2_15(void)
{
    s32 v0 = DWCi_KB10lGet();
    if (v0 == 0x1F)
        return;
    DWCi_ChangeScene((s32)procScene_18);
}

extern "C" void procScene_18(void)
{
    input_16();
    draw_18();
}

extern "C" asm s32 input_16(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, #1
    mov r5, #0
    ldr r7, =data_ov016_02158ac4
    bl DWCi_KB10lGet
    mov r6, r0
    cmp r6, #0
    bgt @L_0214190c
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    b @L_02141aa0
@L_0214190c:
    sub r0, r6, #0x10
    cmp r0, #3
    addls pc, pc, r0, lsl #2
    b @L_02141aa0
    b @L_02141930
    b @L_021419cc
    b @L_02141a14
    b @L_02141a30
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02141930:
    ldr r1, [r7]
    ldrb r0, [r1, #0x14]
    cmp r0, #0
    bne @L_0214194c
    ldrb r0, [r1, #0xa]
    cmp r0, #0
    beq @L_02141b8c
@L_0214194c:
    mov r0, #3
    bl DWCi_SNDlPlay
    ldr r2, [r7]
    ldrb r1, [r2, #0x14]
    add r0, r1, r1, lsl #1
    add r0, r0, #2
    add r0, r2, r0
    ldrb r0, [r0, #8]
    cmp r0, #0
    subeq r0, r1, #1
    streqb r0, [r2, #0x14]
    ldr r1, [r7]
    ldrb r0, [r1, #0x14]
    add r2, r1, #8
    mov r1, r5
    add r0, r0, r0, lsl #1
    add r0, r2, r0
    mov r2, #3
    bl MI_CpuFill8
    ldr r1, [r7]
    ldrb r0, [r1, #0x14]
    cmp r0, #0
    ldreqb r0, [r1, #0xa]
    cmpeq r0, #0
    bne @L_021419b8
    mov r0, r5
    bl DWCi_KB10lSetErase
@L_021419b8:
    mov r0, #1
    bl DWCi_KB10lSetInput
    mov r0, #0
@L_021419c4:
    bl DWCi_KB10lSetShift
    b @L_02141b8c
@L_021419cc:
    ldr r1, [r7]
    ldrb r0, [r1, #0x14]
    cmp r0, #3
    bhs @L_02141b8c
    add r0, r0, r0, lsl #1
    add r0, r0, #2
    add r0, r1, r0
    ldrb r0, [r0, #8]
    cmp r0, #0
    beq @L_02141b8c
    mov r0, r4
    bl DWCi_SNDlPlay
    ldr r2, [r7]
    mov r0, r5
    ldrb r1, [r2, #0x14]
    add r1, r1, #1
    strb r1, [r2, #0x14]
    b @L_021419c4
@L_02141a14:
    ldr r1, [r7]
    mov r0, #7
    strb r5, [r1, #0x15]
    bl DWCi_SNDlPlay
    ldr r0, =endScene_19
    bl DWCi_ChangeScene
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02141a30:
    bl isCorrect_2
    cmp r0, #0
    beq @L_02141a50
    mov r0, #6
    bl DWCi_SNDlPlay
    ldr r0, [r7]
    strb r4, [r0, #0x15]
    b @L_02141a64
@L_02141a50:
    ldr r1, [r7]
    mov r2, #2
    mov r0, #9
    strb r2, [r1, #0x15]
    bl DWCi_SNDlPlay
@L_02141a64:
    ldr r0, [r7]
    mov r1, #3
    strb r1, [r0, #0x14]
    ldr r1, [r7]
    ldr r0, =0xc1fffcff
    ldr r2, [r1, #4]
    ldr r1, [r2]
    and r0, r1, r0
    orr r0, r0, #0x200
    str r0, [r2]
    bl dispCaret_2
    bl arrangeAddress
    ldr r0, =endScene_19
    bl DWCi_ChangeScene
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02141aa0:
    ldr r0, [r7]
    ldrb r0, [r0, #0x14]
    cmp r0, #3
    bne @L_02141ac0
    mov r0, #0x1a
    bl isOver
    cmp r0, #0
    bne @L_02141b8c
@L_02141ac0:
    mov r0, #1
    bl DWCi_SNDlPlay
    ldr r1, [r7]
    ldrb r0, [r1, #0x14]
    add r12, r1, #8
    add r5, r0, r0, lsl #1
    add r3, r5, #2
    ldrb r2, [r12, r3]
    cmp r2, #0
    streqb r6, [r12, r3]
    beq @L_02141b3c
    add r1, r5, #1
    ldrb r0, [r12, r1]
    cmp r0, #0
    bne @L_02141b18
    strb r2, [r12, r1]
    mov r0, #0x1a
    strb r6, [r12, r3]
    bl isOver
    cmp r0, #0
    beq @L_02141b3c
    b @L_02141b28
@L_02141b18:
    strb r0, [r12, r5]
    ldrb r0, [r12, r3]
    strb r0, [r12, r1]
    strb r6, [r12, r3]
@L_02141b28:
    ldr r1, [r7]
    ldrb r0, [r1, #0x14]
    cmp r0, #3
    addlo r0, r0, #1
    strlob r0, [r1, #0x14]
@L_02141b3c:
    mov r0, r4
    bl DWCi_KB10lSetErase
    ldr r0, [r7]
    ldrb r0, [r0, #0x14]
    cmp r0, #3
    bhs @L_02141b5c
    mov r0, r4
    b @L_02141b60
@L_02141b5c:
    mov r0, #0
@L_02141b60:
    bl DWCi_KB10lSetShift
    ldr r0, [r7]
    ldrb r0, [r0, #0x14]
    cmp r0, #3
    bne @L_02141b8c
    mov r0, #0x1a
    bl isOver
    cmp r0, #0
    beq @L_02141b8c
    mov r0, #0
    bl DWCi_KB10lSetInput
@L_02141b8c:
    bl drawAddress
    bl dispCaret_2
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" s32 isOver(s32 arg0)
{
    u8 *d = *(u8 **)data_ov016_02158ac4;
    u8 *p = d + 8;
    s32 o = d[0x14] * 3;
    s32 c = p[o];
    u8 buf[4];
    u8 *q;
    s32 i;
    if (c != 0 && c != 0x20)
        return 1;
    q = buf;
    ((s32 (*)(...))MI_CpuCopy8)(p + o, q, 3);
    i = 0;
    buf[3] = i;
    do {
        if (q[i] != 0)
            break;
        q[i] = 0x20;
        i++;
    } while (i < 3);
    return ((s32 (*)(...))atoi)(buf) >= arg0 ? 1 : 0;
}

extern "C" void draw_18(void)
{
}

extern "C" void endScene_19(void)
{
    DWCi_EFFlWait(8);
    DWCi_ChangeScene((s32)endScene1_18);
}

extern "C" void endScene1_18(void)
{
    s32 v0 = DWCi_EFFlCheck(1);
    if (v0 != 0)
        return;
    DWCi_KB10lEnd();
    DWCi_SNDlPlay(0x15);
    DWCi_ChangeScene((s32)endScene2_15);
}

extern "C" s32 endScene2_15(void)
{
    s32 r0;
    s32 r2;
    s32 r12;
    s32 v0;
    s32 v1;
    s32 v3;
    s32 v5;
    v0 = DWCi_KB10lIsInit();
    if (v0 != 0)
        return v0;
    r0 = *(u8 *)(*(u8 * *)(((u8 *)&data_ov016_02158ac4)) + 0x15);
    if (r0 == 0) {
        v1 = DWCi_ChangeScene((s32)((u8 *)&endScene3_2));
        return v1;
    } else {
        r2 = 1;
        r12 = 0;
        if (r0 == 2) {
            DWCi_WINlInitEx(6, 3, r2, (1 - 2), r12);
            v3 = DWCi_ChangeScene((s32)((u8 *)&procError_4));
            return v3;
        } else {
            DWCi_WINlInitEx(0x47, 2, r2, (1 - 2), r12);
            v5 = DWCi_ChangeScene((s32)((u8 *)&procWin_2));
            return v5;
        }
    }
}

extern "C" s32 endScene3_2(void)
{
    s32 local[1];
    s32 r4;
    s32 v10;
    s32 t0;
    DWCi_COMMENTlDelete();
    t0 = *(s32 *)(*(u8 * *)(((u8 *)&data_ov016_02158ac4)) + 0x4);
    DWCi_OBJlDelete(t0);
    DWCi_FNTlDeleteBgLcd(0);
    DWCi_CMNlLoadResource((s32)((u8 *)&data_ov016_02155a40), (s32)((u8 *)&GX_LoadOBJPltt));
    DWCi_GXlInvisible(1, 1);
    DWCi_GXlInvisible(0, 0x15);
    DWCi_GetParam2_((s32)((u8 *)local), 0);
    r4 = *(s32 *)(((u8 *)local));
    if (r4 >= 3) {
        *(s32 *)(((u8 *)local)) = (r4 + 1);
        r4 = (r4 + 1);
    }
    DWCi_SetParam_(2, 1);
    DWCi_SetParam2_(0, (r4 + 3));
    DWCi_ChangeScene((s32)((u8 *)&DWCi_SceneSetList));
    v10 = DWCi_HEAPlFree_((s32)((u8 *)&data_ov016_02158ac4_b));
    return v10;
}

extern "C" asm void drawAddress(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x1c
    ldr r5, =data_ov016_02158ac4
    ldr r0, =data_ov016_02154ae4
    ldr r1, [r5]
    ldrh r7, [r0]
    ldrh r6, [r0, #2]
    mov r3, #0xb
    mov r2, #0x10
    mov r4, #0
    ldr r0, [r1]
    mov r1, r4
    strh r7, [sp, #0x14]
    strh r6, [sp, #0x16]
    strh r3, [sp, #0x18]
    strh r2, [sp, #0x1a]
    bl DWCi_FNTlClear
    ldr r9, =data_ov016_02154ad0
    strh r4, [sp, #0x12]
    mov r8, #2
    mov r7, #0x480
    add r6, sp, #0x10
@L_02141e0c:
    ldr r12, [r5]
    ldrb r1, [r9, r4]
    add r0, r12, r4
    ldrb r3, [r0, #8]
    ldrh r0, [sp, #0x1a]
    ldrh r2, [sp, #0x16]
    strh r3, [sp, #0x10]
    stmia sp, {r0, r8}
    str r7, [sp, #8]
    str r6, [sp, #0xc]
    ldrh r3, [sp, #0x18]
    ldr r0, [r12]
    strh r1, [sp, #0x14]
    bl DWCi_FNTlDrawRect
    add r4, r4, #1
    cmp r4, #0xc
    blt @L_02141e0c
    ldr r0, =data_ov016_02158ac4
    ldr r0, [r0]
    ldr r0, [r0]
    bl DWCi_FNTlRenewBg
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void dispCaret_2(void)
{
    ldr r0, =data_ov016_02158ac4
    ldr r2, [r0]
    ldrb r0, [r2, #0x14]
    ldr r3, [r2, #4]
    cmp r0, #3
    movgt r0, #3
    add r1, r0, r0, lsl #1
    ldr r0, =data_ov016_02154ad0
    add r1, r1, #2
    ldrb r2, [r0, r1]
    ldr r1, [r3]
    ldr r0, =0xfe00ff00
    mov r2, r2, lsl #0x17
    and r0, r1, r0
    orr r0, r0, #0x28
    orr r0, r0, r2, lsr #7
    str r0, [r3]
    bx lr
}

extern "C" s32 procWin_2(void)
{
    s32 r0;
    s32 r1;
    s32 r2;
    s32 v0;
    s32 v3;
    u8 *t0;
    v0 = DWCi_WINlGet();
    t0 = (u8 *)*(s32 *)(((u8 *)&data_ov016_02158ac4));
    *(u8 *)(t0 + 0x15) = v0;
    r1 = (s32)((u8 *)&data_ov016_02158ac4);
    r2 = (s32)t0;
    r0 = *(u8 *)(*(u8 * *)(((u8 *)&data_ov016_02158ac4)) + 0x15);
    switch (r0) {
        default:
            return r0;
        case 0:
            r0 = 7;
            break;
        case 1:
            r0 = 0xE;
            break;
    }
    DWCi_SNDlPlay(r0, r1, r2);
    DWCi_WINlEnd();
    v3 = DWCi_ChangeScene((s32)((u8 *)&procWin1_2));
    return v3;
}

extern "C" void procWin1_2(void)
{
    S02141f20 s = *(S02141f20 *)data_ov016_021559cc;
    s32 i;
    u8 **d;
    if (((s32 (*)(...))DWCi_WINlIsInit)() != 0)
        return;
    d = (u8 **)data_ov016_02158ac4;
    if ((*d)[0x15] == 0) {
        **(u32 **)(*d + 4) &= 0xC1FFFCFF;
        ((s32 (*)(...))DWCi_ChangeScene)(procInit1_18);
        return;
    }
    ((s32 (*)(...))DWCi_GetParam2_)(&i, 0);
    s.f[i](*d + 8);
    ((s32 (*)(...))DWCi_ChangeScene)(endScene3_2);
}

extern "C" void arrangeAddress(void)
{
    s32 i;
    s32 j;
    for (i = 0; i < 4; i++) {
        u8 *p = *(u8 **)data_ov016_02158ac4 + 8 + (i + (i << 1));
        for (j = 0; j < 3; j++) {
            u8 c = p[j];
            if (c != 0x30 && c != 0x20 && c != 0)
                break;
            p[j] = j == 2 ? 0x30 : 0x20;
        }
    }
    ((s32 (*)(...))drawAddress)();
}

extern "C" asm void isCorrect_2(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0xc
    ldr r1, =data_ov016_02154ac8
    ldr r0, =data_ov016_02158ac4
    ldrb r4, [r1]
    ldrb r3, [r1, #1]
    ldrb r2, [r1, #2]
    ldrb r1, [r1, #3]
    mov r5, #0
    ldr r0, [r0]
    strb r3, [sp, #9]
    add r6, sp, #8
    strb r4, [sp, #8]
    strb r2, [sp, #0xa]
    strb r1, [sp, #0xb]
    mov r12, r5
    add r3, r0, #8
@L_0214208c:
    add r2, r12, r12, lsl #1
    ldrb r1, [r3, r2]
    add r4, r3, r2
    cmp r1, #0x20
    beq @L_021420cc
    mov lr, r5
@L_021420a4:
    ldrb r2, [r4, lr]
    ldrb r1, [r6, lr]
    cmp r2, r1
    addhi sp, sp, #0xc
    movhi r0, #0
    ldmhiia sp!, {r3, r4, r5, r6, pc}
    blo @L_021420cc
    add lr, lr, #1
    cmp lr, #3
    blt @L_021420a4
@L_021420cc:
    add r12, r12, #1
    cmp r12, #4
    blt @L_0214208c
    add r4, sp, #0
    add r0, r0, #8
    mov r1, r4
    bl DWCi_SETTINGlConvAddress
    mov r6, #0
    add r0, sp, #4
    mov r1, r6
    bl DWCi_GetParam2_
    ldr r0, [sp, #4]
    cmp r0, #1
    bne @L_02142164
    mov r1, #1
    mov r12, r6
    mov r2, r1
@L_02142110:
    ldrb r3, [r4, r12]
    mov lr, r5
@L_02142118:
    cmp r6, #0
    rsb r0, lr, #7
    beq @L_02142138
    tst r3, r2, lsl r0
    beq @L_02142140
    add sp, sp, #0xc
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_02142138:
    tst r3, r1, lsl r0
    moveq r6, r1
@L_02142140:
    add lr, lr, #1
    cmp lr, #8
    blt @L_02142118
    add r12, r12, #1
    cmp r12, #4
    blt @L_02142110
    add sp, sp, #0xc
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_02142164:
    mov r0, r4
    bl DWC_BACKUPlCheckAddress
    cmp r0, #0
    movne r6, #1
    mov r0, r6
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" void procError_4(void)
{
    s32 v0 = DWCi_WINlGet();
    if (v0 != 0)
        return;
    DWCi_SNDlPlay(6);
    DWCi_WINlEnd();
    DWCi_ChangeScene((s32)procError1_4);
}

extern "C" void procError1_4(void)
{
    s32 v0 = DWCi_WINlIsInit();
    if (v0 != 0)
        return;
    s32 t0 = (*(s32 *)(*(u8 * *)(*(u8 * *)(data_ov016_02158ac4) + 0x4)) & -0x3E000301);
    s32 t1 = *(s32 *)(*(u8 * *)(*(u8 * *)(data_ov016_02158ac4) + 0x4));
    u8 *t2 = *(u8 * *)(*(u8 * *)(data_ov016_02158ac4) + 0x4);
    *(s32 *)(t2) = t0;
    DWCi_ChangeScene((s32)procInit1_18, t0, t1, (s32)t2);
}

extern "C" void DWCi_SceneSetError(void)
{
    initGraphics_19();
    drawMessage();
    DWCi_ChangeScene((s32)procInit_19);
}

extern "C" asm s32 initGraphics_19(...)
{
    stmdb sp!, {r3, lr}
    ldr r0, =data_ov016_02155a58
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

extern "C" asm s32 drawMessage(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x2c
    mov r5, #0
    add r1, sp, #0x18
    mov r0, r5
    mov r4, #2
    bl DWCi_GetParam2_
    ldr r0, =data_ov016_02158ac8
    ldr r2, =0xffffb17d
    ldr r1, [r0]
    cmp r1, r2
    bge @L_021424c8
    sub r0, r2, #1
    cmp r1, r0
    movge r5, r4
    bge @L_021424c8
    sub r0, r2, #2
    cmp r1, r0
    movge r5, #0x13
    bge @L_021424c8
    sub r0, r2, #8
    cmp r1, r0
    movge r5, r4
    bge @L_021424c8
    sub r0, r2, #9
    cmp r1, r0
    movge r5, #0x12
    bge @L_021424c8
    sub r0, r2, #0xa
    cmp r1, r0
    movge r5, r4
    bge @L_021424c8
    sub r0, r2, #0xb
    cmp r1, r0
    movge r5, #3
    bge @L_021424c8
    sub r0, r2, #0x384
    cmp r1, r0
    movge r5, r4
    bge @L_021424c8
    ldr r0, =0xffffa629
    cmp r1, r0
    bge @L_021424c8
    sub r0, r0, #0x3e8
    cmp r1, r0
    movge r5, #0x13
    bge @L_021424c8
    ldr r0, =0xffff3cb1
    cmp r1, r0
    bge @L_021424c8
    sub r2, r0, #3
    cmp r1, r2
    movge r5, #7
    bge @L_021424c8
    sub r2, r0, #4
    cmp r1, r2
    movge r5, #5
    bge @L_021424c8
    sub r2, r0, #0x63
    cmp r1, r2
    bge @L_021424c8
    sub r2, r0, #0x64
    cmp r1, r2
    blt @L_021423a8
    ldr r0, [sp, #0x18]
    cmp r0, #2
    moveq r5, #5
    movne r5, #7
    b @L_021424c8
@L_021423a8:
    ldr r3, =0xffff3866
    cmp r1, r3
    bge @L_021424c8
    sub r2, r3, #1
    cmp r1, r2
    blt @L_021423d4
    ldr r0, [sp, #0x18]
    cmp r0, #2
    moveq r5, #5
    movne r5, #8
    b @L_021424c8
@L_021423d4:
    sub r2, r3, #4
    cmp r1, r2
    movge r5, #9
    bge @L_021424c8
    sub r2, r3, #5
    cmp r1, r2
    movge r5, #5
    bge @L_021424c8
    sub r2, r3, #0x65
    cmp r1, r2
    bge @L_021424c8
    sub r2, r3, #0xc9
    cmp r1, r2
    movge r5, #0x14
    bge @L_021424c8
    sub r2, r3, #0xcc
    cmp r1, r2
    movge r5, #0x15
    bge @L_021424c8
    sub r2, r3, #0xcd
    cmp r1, r2
    movge r5, #4
    bge @L_021424c8
    sub r0, r0, #0x7d0
    cmp r1, r0
    bge @L_021424c8
    sub r0, r3, #0x388
    cmp r1, r0
    movge r5, #0xa
    bge @L_021424c8
    ldr r2, =0xffff34dd
    cmp r1, r2
    movge r5, #0x16
    bge @L_021424c8
    sub r0, r2, #0x60
    cmp r1, r0
    bge @L_021424c8
    sub r0, r2, #0x64
    cmp r1, r0
    movge r5, #0xb
    bge @L_021424c8
    sub r0, r2, #0xc4
    cmp r1, r0
    bge @L_021424c8
    sub r0, r2, #0xc8
    cmp r1, r0
    movge r5, #0xb
    bge @L_021424c8
    sub r0, r2, #0x128
    cmp r1, r0
    bge @L_021424c8
    sub r0, r2, #0x18c
    cmp r1, r0
    movge r5, r4
    bge @L_021424c8
    sub r0, r2, #0x3e4
    cmp r1, r0
    bge @L_021424c8
    sub r0, r2, #0x510
    cmp r1, r0
    movge r5, r4
@L_021424c8:
    bl DWCi_Language
    ldr r1, =data_ov016_02154aec
    mov r9, #0
    ldrb r1, [r1, r0]
    mov r0, r9
    bl DWCi_FNTlFormBgEx
    ldr r1, =DWCiMsgCmn
    mov r8, r0
    ldr r0, [r1]
    mov r1, r5
    bl DWCi_MSGlGet
    ldr r3, =data_ov016_02158ac8
    mov r5, #8
    ldr r3, [r3]
    add r6, sp, #0x10
    mov r7, r0
    ldr r2, =data_ov016_02155a6c
    mov r0, r6
    mov r1, r5
    rsb r3, r3, #0
    bl OS_SNPrintf
    mov r2, r5
    add r5, sp, #0x1c
    mov r1, r6
    mov r0, r5
    bl DWCi_STRlConvertStringAsciiToUnicode
    bl DWCi_Language
    mov r1, r0, lsl #2
    ldr r0, =data_ov016_02154afe
    ldrh r6, [r0, r1]
    bl DWCi_Language
    mov r3, r0, lsl #2
    ldr r1, =data_ov016_02154afc
    mov r0, #0xa
    ldrh r1, [r1, r3]
    stmia sp, {r0, r5, r9}
    mov r2, r6
    mov r0, r8
    mov r3, r4
    bl DWCi_FNTlDrawStringEx
    bl DWCi_CMNlFontFlag
    mov r1, #0x5e
    stmia sp, {r1, r4}
    str r0, [sp, #8]
    mov r0, r8
    mov r1, #0xd
    mov r2, #0x3c
    mov r3, #0xe6
    str r7, [sp, #0xc]
    bl DWCi_FNTlDrawRect
    mov r0, r8
    bl DWCi_FNTlRenewBg
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
}

extern "C" void procInit_19(void)
{
    DWCi_EFFlFade(2, 0, 0x15, 8);
    DWCi_GXlVisible(0, 0x15);
    DWCi_ChangeScene((s32)procInit1_19);
}

extern "C" void procInit1_19(void)
{
    s32 v0 = DWCi_EFFlCheck(1);
    if (v0 != 0)
        return;
    s32 v1 = DWCi_EFFlCheck(0);
    if (v1 != 0)
        return;
    DWCi_CMNlButton(4);
    DWCi_ChangeScene((s32)procInit2_16);
}

extern "C" void procInit2_16(void)
{
    s32 v0 = DWCi_BTNlGet();
    if (v0 == -2)
        return;
    DWCi_BTNlEnable();
    DWCi_ChangeScene((s32)procScene_19);
}

extern "C" void procScene_19(void)
{
    input_17();
    draw_19();
    button_13();
}

extern "C" void input_17(void)
{
    s32 v0 = DWCi_IPTlCheckTrigger(1);
    if (v0 == 0)
        return;
    DWCi_BTNlSet(0);
}

extern "C" void draw_19(void)
{
}

extern "C" asm s32 button_13(...)
{
    stmdb sp!, {r3, lr}
    bl DWCi_BTNlGet
    cmp r0, #0
    ldmneia sp!, {r3, pc}
    mov r0, #6
    bl DWCi_SNDlPlay
    ldr r0, =endScene_20
    bl DWCi_ChangeScene
    ldmia sp!, {r3, pc}
}

extern "C" void endScene_20(void)
{
    DWCi_BTNlDisable();
    DWCi_EFFlWait(8);
    DWCi_ChangeScene((s32)endScene1_19);
}

extern "C" void endScene1_19(void)
{
    s32 v0 = DWCi_EFFlCheck(1);
    if (v0 != 0)
        return;
    DWCi_BTNlEnd();
    DWCi_EFFlFade(3, 1, 1, 8);
    DWCi_EFFlFade(3, 0, 0x15, 8);
    DWCi_ChangeScene((s32)endScene2_16);
}

extern "C" void endScene2_16(void)
{
    s32 local[1];
    s32 r0;
    s32 r4;
    s32 r5;
    s32 v0;
    s32 v1;
    s32 v2;
    r5 = 1;
    v0 = DWCi_EFFlCheck(1);
    if (v0 != 0)
        return;
    r4 = 0;
    v1 = DWCi_EFFlCheck(0);
    if (v1 != 0)
        return;
    v2 = DWCi_BTNlIsEnd();
    if (v2 == 0)
        return;
    DWCi_FNTlDeleteBgLcd(0);
    DWCi_COMMENTlDelete();
    DWCi_GXlInvisible(1, 1);
    DWCi_GXlInvisible(0, 0x15);
    DWCi_GetParam2_(0, (s32)((u8 *)local));
    r0 = 2;
    if (*(s32 *)(((u8 *)local)) != 0) {
        DWCi_SetParam_(r0, r5);
        DWCi_ChangeScene((s32)((u8 *)&DWCi_SceneSetSelectAp));
        return;
    } else {
        DWCi_SetParam_(r0, r4);
        DWCi_SetParam2_(r4, r4);
        DWCi_SetListReturn(r4);
        DWCi_ChangeScene((s32)((u8 *)&DWCi_SceneSetList));
        return;
    }
}

extern "C" void DWCi_SetErrorCode(s32 arg0)
{
    *(s32 *)(data_ov016_02158ac8) = arg0;
}

extern "C" asm void DWCi_SceneSetList(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #4
    bl DWCi_SETTIGNlGet
    mov r6, r0
    mov r0, #0x48
    mov r1, #4
    bl DWCi_HEAPlAllocEx
    ldr r4, =data_ov016_02158acc
    mov r1, #0xc
    str r0, [r4, #8]
    ldrb r2, [r6, #0xf6]
    strb r2, [r0, #0x43]
    ldr r0, [r4, #8]
    strb r1, [r0, #0x42]
    bl calcParam
    bl initGraphics_20
    ldrb r0, [r4, #1]
    cmp r0, #0
    bne @L_02142878
    bl DWCi_Language
    ldrb r2, [r6, #0xf4]
    ldr r1, =data_ov016_02154b1b
    ldrsb r1, [r1, r0]
    mov r0, #0x30
    add r2, r2, #1
    b @L_02142884
@L_02142878:
    mov r0, #0x45
    sub r1, r0, #0x46
    mov r2, #0
@L_02142884:
    bl DWCi_COMMENTlDispEx
    mov r5, #1
    mov r0, r5
    bl DWCi_CMNlStep
    bl DWCi_HLlLoadList
    ldrh r2, [r4, #4]
    mov r0, #0x37
    ldr r1, =0xe1fc780f
    mul r3, r2, r0
    smull r0, r2, r1, r3
    add r2, r3, r2
    mov r0, r3, lsr #0x1f
    add r2, r0, r2, asr #7
    str r2, [sp]
    mov r0, #2
    mov r1, #0x55
    mov r2, #0xf1
    mov r3, #0x41
    bl DWCi_SBlInit
    mov r7, #0
    mov r1, r5
    mov r0, r7
    bl DWCi_FNTlFormBgEx
    ldr r1, [r4, #8]
    mov r5, r7
    str r0, [r1, #0x14]
    mov r8, #0x29
@L_021428f0:
    mov r0, r5
    mov r1, r8
    bl DWCi_CEINlSetExObj
    ldr r1, [r4, #8]
    add r1, r1, r7, lsl #2
    add r7, r7, #1
    str r0, [r1, #0x18]
    cmp r7, #7
    blt @L_021428f0
    ldrb r0, [r6, #0xe7]
    cmp r0, #1
    beq @L_0214292c
    cmp r0, #2
    beq @L_02142938
    b @L_02142964
@L_0214292c:
    mov r0, r5
    mov r1, #0x50
    b @L_02142940
@L_02142938:
    mov r0, r5
    mov r1, #0x51
@L_02142940:
    bl DWCi_CEINlSetExObj
    ldr r1, [r4, #8]
    str r0, [r1, #0x34]
    ldr r0, [r4, #8]
    ldr r1, [r0, #0x34]
    ldrh r0, [r1, #4]
    bic r0, r0, #0xc00
    orr r0, r0, #0xc00
    strh r0, [r1, #4]
@L_02142964:
    mov r5, #0
    ldr r1, =taskVBlank_3
    mov r2, r5
    mov r0, #1
    mov r3, #0x6e
    bl DWCi_TSKlForm
    ldr r2, [r4, #8]
    ldr r1, =taskPushCount
    str r0, [r2, #0x3c]
    mov r0, r5
    mov r2, r5
    mov r3, #0x78
    bl DWCi_TSKlForm
    ldr r1, [r4, #8]
    str r0, [r1]
    bl drawWindow
    bl dispFocus_4
    ldr r0, =procInit_20
    bl DWCi_ChangeScene
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" asm void initGraphics_20(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x44
    ldr r3, =data_ov016_02154c04
    add r4, sp, #0x2b
    mov r2, #0xb
@L_021429e4:
    ldrb r0, [r3, #1]
    ldrb r1, [r3], #2
    subs r2, r2, #1
    strb r0, [r4, #1]
    strb r1, [r4], #2
    bne @L_021429e4
    ldrb r0, [r3]
    ldr r3, =data_ov016_02154bd4
    add r5, sp, #0x16
    strb r0, [r4]
    mov r2, #0xa
@L_02142a10:
    ldrb r0, [r3, #1]
    ldrb r1, [r3], #2
    subs r2, r2, #1
    strb r0, [r5, #1]
    strb r1, [r5], #2
    bne @L_02142a10
    ldrb r0, [r3]
    ldr r4, =data_ov016_02154bec
    add r3, sp, #0
    strb r0, [r5]
    mov r2, #0xb
@L_02142a3c:
    ldrb r0, [r4, #1]
    ldrb r1, [r4], #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_02142a3c
    ldr r4, =0x400000c
    ldr r0, =data_ov016_02155a70
    ldrh r2, [r4]
    ldr r1, =GX_LoadOBJPltt
    and r2, r2, #0x43
    orr r2, r2, #0x218
    orr r2, r2, #0xc00
    strh r2, [r4]
    bl DWCi_CMNlLoadResource
    ldr r0, =data_ov016_02155a84
    ldr r1, =GX_LoadBG3Char
    bl DWCi_CMNlLoadResource
    ldr r0, =data_ov016_02155a9c
    ldr r1, =GX_LoadBG2Char
    bl DWCi_CMNlLoadResource
    add r8, sp, #0x16
    ldr r1, =GX_LoadBGPltt
    mov r0, r8
    bl DWCi_CMNlLoadResource
    ldr r0, =data_ov016_02155ab4
    ldr r1, =GX_LoadBG3Scr
    bl DWCi_CMNlLoadResource
    add r0, sp, #0x2b
    bl DWCi_Char
    mov r7, #0
    mov r6, #4
    mov r1, r7
    mov r2, r6
    bl DWCi_ARClReadEx
    ldr r5, =data_ov016_02158acc
    ldr r1, [r5, #8]
    str r0, [r1, #8]
    ldr r0, [r5, #8]
    ldr r0, [r0, #8]
    bl DWCi_SCREENlInit
    bl DWCi_SCREENlRenew
    mov r0, r8
    bl DWCi_Char
    mov r1, r7
    mov r2, r6
    bl DWCi_ARClReadEx
    ldr r1, [r5, #8]
    str r0, [r1, #0xc]
    add r0, sp, #0
    bl DWCi_Char
    mov r1, r7
    mov r2, r6
    bl DWCi_ARClReadEx
    ldr r2, [r5, #8]
    ldr r1, =0x4001008
    str r0, [r2, #0x10]
    ldrh r0, [r1]
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r1]
    ldrh r0, [r1, #2]
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r1, #2]
    sub r2, r1, #0x1000
    ldrh r0, [r2]
    sub r1, r4, #2
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r2]
    ldrh r0, [r1]
    bic r0, r0, #3
    orr r0, r0, #2
    strh r0, [r1]
    ldrh r0, [r4]
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r4]
    ldrh r0, [r4, #2]
    bic r0, r0, #3
    orr r0, r0, #2
    strh r0, [r4, #2]
    add sp, sp, #0x44
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" s32 calcParam(void)
{
    s32 local[1];
    s32 r0;
    s32 r4;
    DWCi_SETTIGNlGet();
    DWCi_GetParam2_(0, (s32)((u8 *)local));
    r0 = *(s32 *)(((u8 *)local));
    r4 = 0;
    if (r0 == 0) {
        *(u16 *)(data_ov016_02158acc + 0x4) = r4;
        *(u8 *)(data_ov016_02158acc) = r4;
        *(u8 *)(data_ov016_02158acc + 0x2) = r4;
        r0 = (s32)data_ov016_02158acc;
    }
    return r0;
}

extern "C" void procInit_20(void)
{
    DWCi_EFFlFade(2, 1, 1, 8);
    DWCi_EFFlFade(2, 0, 0x1D, 8);
    DWCi_GXlVisible(1, 1);
    DWCi_GXlVisible(0, 0x1D);
    DWCi_ChangeScene((s32)procInit1_20);
}

extern "C" void procInit1_20(void)
{
    s32 v0 = DWCi_EFFlCheck(1);
    if (v0 != 0)
        return;
    s32 v1 = DWCi_EFFlCheck(0);
    if (v1 != 0)
        return;
    DWCi_ChangeScene((s32)procScene_20);
}

extern "C" void procScene_20(void)
{
    input_18();
    draw_20();
}

extern "C" asm s32 input_18(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    ldr r7, =data_ov016_02158acc
    mov r4, #0
    ldr r1, [r7, #8]
    ldr r0, [r1, #0x38]
    cmp r0, #0
    ldreqb r0, [r1, #0x45]
    cmpeq r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    bl inputWinButton
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    mov r6, #1
    mov r0, r6
    bl DWCi_IPTlCheckTrigger
    cmp r0, #0
    beq @L_02142d08
    ldrb r0, [r7]
    bl pushWinButton
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02142d08:
    mov r5, #2
    mov r0, r5
    bl DWCi_IPTlCheckTrigger
    cmp r0, #0
    beq @L_02142d3c
    mov r0, #7
    bl DWCi_SNDlPlay
    ldr r1, [r7, #8]
    mov r2, #0xd
    ldr r0, =endScene_21
    strb r2, [r1, #0x40]
    bl DWCi_ChangeScene
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02142d3c:
    mov r8, #0x200
    mov r0, r8
    bl DWCi_IPTlCheckRepeat
    cmp r0, #0
    beq @L_02142da8
    ldrh r0, [r7, #4]
    cmp r0, #0x91
    bne @L_02142d80
    ldr r0, [r7, #8]
    ldrb r0, [r0, #0x47]
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    mov r0, #9
    bl DWCi_SNDlPlay
    ldr r0, [r7, #8]
    strb r6, [r0, #0x47]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02142d80:
    mov r0, #0x13
    bl DWCi_SNDlPlay
    mov r0, r4
    ldr r1, =taskDown_2
    mov r2, r0
    mov r3, #0x78
    bl DWCi_TSKlForm
    ldr r1, [r7, #8]
    str r0, [r1, #0x38]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02142da8:
    mov r0, r8
    bl DWCi_IPTlCheckRelease
    cmp r0, #0
    ldrne r0, [r7, #8]
    strneb r4, [r0, #0x47]
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    mov r8, #0x100
    mov r0, r8
    bl DWCi_IPTlCheckRepeat
    cmp r0, #0
    beq @L_02142e2c
    ldrh r0, [r7, #4]
    cmp r0, #0
    bne @L_02142e04
    ldr r0, [r7, #8]
    ldrb r0, [r0, #0x47]
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    mov r0, #9
    bl DWCi_SNDlPlay
    ldr r0, [r7, #8]
    strb r6, [r0, #0x47]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02142e04:
    mov r0, #0x13
    bl DWCi_SNDlPlay
    mov r0, r4
    ldr r1, =taskUp_2
    mov r2, r0
    mov r3, #0x78
    bl DWCi_TSKlForm
    ldr r1, [r7, #8]
    str r0, [r1, #0x38]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02142e2c:
    mov r0, r8
    bl DWCi_IPTlCheckRelease
    cmp r0, #0
    ldrne r0, [r7, #8]
    strneb r4, [r0, #0x47]
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    mov r8, #0x40
    mov r0, r8
    bl DWCi_IPTlCheckRepeat
    cmp r0, #0
    beq @L_02142e64
    mov r0, r6
    bl moveFocus_6
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02142e64:
    mov r0, r8
    bl DWCi_IPTlCheckRelease
    cmp r0, #0
    ldrne r0, [r7, #8]
    strneb r4, [r0, #0x47]
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    mov r6, #0x80
    mov r0, r6
    bl DWCi_IPTlCheckRepeat
    cmp r0, #0
    beq @L_02142e9c
    mov r0, #3
    bl moveFocus_6
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02142e9c:
    mov r0, r6
    bl DWCi_IPTlCheckRelease
    cmp r0, #0
    ldrne r0, [r7, #8]
    strneb r4, [r0, #0x47]
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    mov r0, #0x20
    bl DWCi_IPTlCheckRepeat
    cmp r0, #0
    beq @L_02142ed0
    mov r0, r4
    bl moveFocus_6
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02142ed0:
    mov r0, #0x10
    bl DWCi_IPTlCheckRepeat
    cmp r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    mov r0, r5
    bl moveFocus_6
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" s32 inputWinButton(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 r4;
    s32 v1;
    s32 v2;
    s32 v4;
    DWCi_SETTIGNlGet(arg0, arg1, arg2, arg3);
    v1 = isPush();
    if (v1 == 0xE)
        return 0;
    v2 = isEnablePush(v1);
    r4 = v1;
    if (v2 == 0) {
        DWCi_SNDlPlay(9);
        return 1;
    }
    v4 = applyForcus1(r4);
    arg0 = v4;
    switch (r4) {
        case 2:
        case 3:
        case 7:
        case 8:
            pushButtonYesNo();
        case 0:
        case 1:
        case 4:
        case 5:
        case 6:
        default:
            pushWinButton(r4);
            return 1;
    }
}
