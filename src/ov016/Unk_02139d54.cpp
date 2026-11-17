#include "ov016/Unk_02139d54.hpp"
#include "game/vcall.hpp"
static inline void inl_02139dc0(u8 *arg0, s32 arg1, s32 *arg2, s32 *arg3)
{
    s32 t0;
    u8 *t2;
    s32 t3;
    t0 = ((u32)(*(s32 *)(*(u8 **)(arg0 + 0x8) + (arg1 << 3)) & 0x1FF0000) >> 0x10);
    t2 = *(u8 **)(arg0 + 0x8);
    *(s32 *)(arg2) = t0;
    t3 = (*(s32 *)(t2 + (arg1 << 3)) & 0xFF);
    *(s32 *)(arg3) = t3;
}
static inline void inl_02139d54(u8 *arg0, s32 arg1, s32 *arg2, s32 *arg3)
{
    s32 t0;
    u8 *t2;
    s32 t3;
    t0 = ((u32)(*(s32 *)(*(u8 **)(arg0 + 0x8) + (arg1 << 3)) & 0x1FF0000) >> 0x10);
    t2 = *(u8 **)(arg0 + 0x8);
    *(s32 *)(arg2) = t0;
    t3 = (*(s32 *)(t2 + (arg1 << 3)) & 0xFF);
    *(s32 *)(arg3) = t3;
}

extern "C" void func_020226e0(void);     // (a second entry of _ll_udiv: see lcf_symbols.txt)

extern "C" void taskStart2_2(void *arg0);
extern "C" void taskStart3_2(void *arg0);
extern "C" void taskStart4_2(void *arg0);
extern "C" void taskMain_3(void);
extern "C" s32 touchTrigger_2(...);
extern "C" s32 touchRelease_2(...);
extern "C" s32 touch_2(...);
extern "C" s32 exchangeBack_2(u8 arg0);
extern "C" s32 key_2(...);
extern "C" void disp_3(void);
extern "C" s32 changeColor_2(...);
extern "C" void dispFocus_2(void);
extern "C" void moveFocus_2(s32 arg0);
extern "C" void taskEnd0_2(void);
extern "C" void taskEnd1_3(void);
extern "C" void taskEnd2_2(void);
extern "C" void taskEnd3_2(void);
extern "C" void taskEnd4_2(void);
extern "C" s32 taskEnd5_2(s32 arg0);
extern "C" void DWCi_AOSSlInit(void);
extern "C" s32 DWCi_AOSSlEnd(s32 arg0);
extern "C" s32 DWCi_AOSSlStart(void);
extern "C" void aossAlloc(s32 arg0);
extern "C" void aossFree(void);
extern "C" s32 func_ov016_0213aea0(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 func_ov016_0213af40(...);
extern "C" s32 func_ov016_0213afbc(void);
extern "C" s32 initGraph(...);
extern "C" s32 procEnd(void);
extern "C" void DWCi_ChangeScene(s32 arg0);
extern "C" void DWCi_SetParam_(s32 arg0, s32 arg1);
extern "C" s32 DWCi_GetParam_(u8 *arg0, u8 *arg1);
extern "C" void DWCi_SetParam2_(s32 arg0, s32 arg1);
extern "C" s32 DWCi_GetParam2_(u8 *arg0, u8 *arg1);
extern "C" u8 DWCi_Language(void);
extern "C" s32 DWCi_Entry(void);
extern "C" s32 DWCi_Flag(s32 arg0);
extern "C" char *DWCi_EndUtility(void);
extern "C" s32 kDWCi_Language(void);
extern "C" void func_ov016_0213b474(void);
extern "C" void DWCi_MSGlEnd(void);
extern "C" u8 *func_ov016_0213b4c0(s32 arg0);
extern "C" void DWCi_MSGlRelease(u8 *arg0);
extern "C" s32 DWCi_MSGlGet(u8 *arg0, s32 arg1);
extern "C" s32 DWCi_MSGlGetEx(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 DWCi_MOVlInit(s32 arg0);
extern "C" void DWCi_MOVlEnd(void);
extern "C" void taskEnd_2(s32 arg0);
extern "C" s32 DWCi_MOVlIsEnd(void);
extern "C" void DWCi_MOVlChangeCallback(s32 arg0);
extern "C" void DWCi_MOVlAdmitChild(void);
extern "C" s32 DWCi_MOVlGetChild(void);
extern "C" void taskFramework(void);
extern "C" s32 DWCi_RAKUlInit(void);
extern "C" s32 DWCi_RAKUlEnd(void);
extern "C" void DWCi_RAKUlGetState(void);
extern "C" void DWCi_RAKUlSetResult(void);
extern "C" void cbConfig(void);
extern "C" void memAlloc(s32 arg0);
extern "C" void memFree(void);
extern "C" void DWCi_SceneEnd(void);
extern "C" void endScene(void);
extern "C" void func_ov016_0213bc08(void);
extern "C" void procFade(void);
extern "C" s32 procWait(void);
extern "C" void DWCi_SceneMenu(void);
extern "C" s32 initGraphics(...);
extern "C" void procInit(void);
extern "C" void procInit1(void);
extern "C" void procInit2(void);
extern "C" void procScene(void);
extern "C" s32 input(...);
extern "C" void func_ov016_0213c20c(void);
extern "C" s32 button(...);
extern "C" void endScene_2(void);
extern "C" void endScene1(void);
extern "C" s32 endScene2(void);
extern "C" s32 moveFocus_3(s32 arg0);
extern "C" void dispPushButton(void);
extern "C" void DWCi_SceneOptErase(void);
extern "C" s32 initGraphics_2(...);
extern "C" void procInit_2(void);
extern "C" void procInit1_2(void);
extern "C" void procInit2_2(void);
extern "C" void procScene_2(void);
extern "C" s32 input_2(...);
extern "C" void draw_2(void);
extern "C" s32 button_2(...);
extern "C" void endScene_3(void);
extern "C" void endScene1_2(void);
extern "C" void endScene2_2(void);
extern "C" void procConfirm(void);
extern "C" void procConfirm1(void);
extern "C" void DWCi_SceneOptErase1(void);
extern "C" s32 initGraphics_3(...);
extern "C" void procInit_3(void);
extern "C" void procInit1_3(void);
extern "C" void procInit2_3(void);
extern "C" void procScene_3(void);
extern "C" void input_3(void);
extern "C" void draw_3(void);
extern "C" s32 button_3(...);
extern "C" void endScene_4(void);
extern "C" void endScene1_3(void);
extern "C" void endScene2_3(void);
extern "C" void DWCi_SceneOptInfo(void);
extern "C" s32 initGraphics_4(...);
extern "C" s32 drawInfo(...);
extern "C" void procInit_4(void);

extern "C" char data_ov016_02154858[];
extern "C" char data_ov016_0215485e[];
extern "C" char data_ov016_02154860[];
extern "C" char data_ov016_02154863[];
extern "C" char data_ov016_02154866[];
extern "C" char data_ov016_0215486e[];
extern "C" char data_ov016_02154872[];
extern "C" char data_ov016_02154876[];
extern "C" char data_ov016_0215487e[];
extern "C" char data_ov016_02154886[];
extern "C" char data_ov016_021548ac[];
extern "C" char data_ov016_021548d4[];
extern "C" char data_ov016_021548d6[];
extern "C" char data_ov016_0215490c[];
extern "C" char data_ov016_02154944[];
extern "C" char data_ov016_0215494c[];
extern "C" char data_ov016_02154954[];
extern "C" char data_ov016_02154964[];
extern "C" char data_ov016_02154970[];
extern "C" char data_ov016_02154974[];
extern "C" char data_ov016_02154984[];
extern "C" char data_ov016_02154986[];
extern "C" char data_ov016_02154988[];
extern "C" char data_ov016_0215498a[];
extern "C" char data_ov016_02154994[];
extern "C" char DWCi_R_SCR[];
extern "C" char data_ov016_0215553c[];
extern "C" char data_ov016_021555a0[];
extern "C" char data_ov016_0215562c[];
extern "C" char data_ov016_02155648[];
extern "C" char data_ov016_02155658[];
extern "C" char data_ov016_0215566c[];
extern "C" char data_ov016_02155680[];
extern "C" char data_ov016_02155694[];
extern "C" char data_ov016_021556a8[];
extern "C" char data_ov016_021556c0[];
extern "C" char data_ov016_021556d8[];
extern "C" char data_ov016_021556f0[];
extern "C" char data_ov016_02155708[];
extern "C" char data_ov016_02155720[];
extern "C" char data_ov016_02155738[];
extern "C" char data_ov016_0215574c[];
extern "C" char data_ov016_02155760[];
extern "C" char data_ov016_02155778[];
extern "C" char data_ov016_02155790[];
extern "C" char data_ov016_021557a4[];
extern "C" char data_ov016_021557b8[];
extern "C" char data_ov016_021557cc[];
extern "C" char data_ov016_021557e0[];
extern "C" char data_ov016_02155800[];
extern "C" char data_ov016_02155814[];
extern "C" char data_ov016_02158a40[];
extern "C" char data_ov016_02158a40_b[];
extern "C" char data_ov016_02158a44[];
extern "C" char data_ov016_02158a48[];
extern "C" char data_ov016_02158a4c[];
extern "C" char data_ov016_02158a6c[];
extern "C" char data_ov016_02158a70[];
extern "C" char data_ov016_02158a70_b[];
extern "C" char data_ov016_02158a74[];
extern "C" char DWCiMsgCmn[];
extern "C" char data_ov016_02158a7c[];
extern "C" char data_ov016_02158a84[];
extern "C" void GXS_SetGraphicsMode(void);
extern "C" void GX_SetBankForSubOBJ(void);
extern "C" void GX_SetGraphicsMode(void);
extern "C" void GXx_SetMasterBrightness_(void);
extern "C" void MI_CpuCopy8(void);
extern "C" void MIi_CpuClear16(void);
extern "C" void MIi_CpuCopy16(void);
extern "C" s32 OS_Sleep(...);
extern "C" void _ll_udiv(void);
extern "C" s32 func_020023fc(...);
extern "C" s32 GX_VBlankIntr(...);
extern "C" s32 GX_DispOff(...);
extern "C" void GX_DispOn(void);
extern "C" void G2x_SetBlendBrightness_(void);
extern "C" void GX_LoadBGPltt(void);
extern "C" void GXS_LoadBGPltt(void);
extern "C" void GX_LoadOBJPltt(void);
extern "C" void GXS_LoadOBJPltt(void);
extern "C" void GX_LoadOBJ(void);
extern "C" void GXS_LoadOBJ(void);
extern "C" void GXS_LoadBG1Scr(void);
extern "C" void GX_LoadBG2Scr(void);
extern "C" void GXS_LoadBG1Char(void);
extern "C" void GX_LoadBG2Char(void);
extern "C" void GX_SetBankForBG(void);
extern "C" void GX_SetBankForOBJ(void);
extern "C" void GX_SetBankForSubBG(void);
extern "C" void OS_SNPrintf(void);
extern "C" s32 OS_IsTickAvailable(...);
extern "C" s32 OS_IsAlarmAvailable(...);
extern "C" s32 OS_SpinWaitSysCycles(...);
extern "C" s32 OS_WaitVBlankIntr(...);
extern "C" void OS_GetMacAddress(void);
extern "C" s32 OS_Terminate(...);
extern "C" s32 FS_Init(...);
extern "C" s32 TP_Init(...);
extern "C" s32 PM_ForceToPowerOff(...);
extern "C" s32 PM_SetLCDPower(...);
extern "C" s32 RTC_Init(...);
extern "C" s32 DWC_Auth_SetCustomNas(...);
extern "C" s32 func_ov014_0210b4f4(...);
extern "C" void DWCi_BM_GetWiFiInfo(void);
extern "C" s32 DWC_BM_Init(...);
extern "C" s32 func_ov016_02130700(...);
extern "C" void func_ov016_02132a14(void);
extern "C" s32 func_ov016_02132ad8(...);
extern "C" s32 func_ov016_02136b6c(...);
extern "C" s32 func_ov016_02136c54(...);
extern "C" void func_ov016_02136d20(void);
extern "C" s32 DWCi_BTNlEnd(...);
extern "C" s32 DWCi_BTNlGet(...);
extern "C" s32 DWCi_BTNlSet(...);
extern "C" s32 DWCi_BTNlIsEnd(...);
extern "C" s32 DWCi_BTNlEnable(...);
extern "C" s32 DWCi_BTNlDisable(...);
extern "C" void func_ov016_0213757c(void);
extern "C" s32 DWCi_COMMENTlDispEx(...);
extern "C" s32 DWCi_COMMENTlDelete(...);
extern "C" void DWCi_Char(void);
extern "C" void DWCi_CMNlLoadResource(void);
extern "C" s32 DWCi_CMNlButton(...);
extern "C" s32 DWCi_CMNlMsgDraw(...);
extern "C" void func_ov016_02137914(void);
extern "C" s32 DWCi_FOCUSlEnd(...);
extern "C" s32 DWCi_FOCUSlDisp4(...);
extern "C" s32 DWCi_FOCUSlDelete(...);
extern "C" void func_ov016_02137b18(void);
extern "C" s32 DWCi_HLlEnd(...);
extern "C" s32 DWCi_HLlLoad(...);
extern "C" void procInit1_4(void);
extern "C" void DWCi_SceneOptMenu(void);
extern "C" void DWCi_SceneSetSelectAp(void);
extern "C" void DWCi_SCREENlCopyPalette(void);
extern "C" void func_ov016_021498c4(void);
extern "C" s32 DWCi_SETTIGNlEnd(...);
extern "C" void DWCi_SETTINGlSetRaku(void);
extern "C" s32 DWCi_SETTINGlSetAoss(...);
extern "C" s32 DWCi_SETTINGlEraseAll(...);
extern "C" s32 func_ov016_0214a3d0(...);
extern "C" s32 DWCi_SNDlEnd(...);
extern "C" s32 DWCi_SNDlPlay(...);
extern "C" s32 DWCi_STEPlChangeScr(...);
extern "C" void DWCi_WINlInitEx(void);
extern "C" s32 DWCi_WINlEnd(...);
extern "C" s32 DWCi_WINlGet(...);
extern "C" s32 DWCi_WINlIsInit(...);
extern "C" s32 DWCi_MOVInit(...);
extern "C" s32 DWCi_MOVFinalize(...);
extern "C" s32 DWCi_MOVStartAdmitChild(...);
extern "C" void DWCi_MOVStartDownloadandBootChild(void);
extern "C" void DWCi_MOVFramework(void);
extern "C" void DWCi_MOVGetStatus(void);
extern "C" void DWCi_GetChildInfo(void);
extern "C" s32 func_ov016_0214ed80(...);
extern "C" s32 DWCi_ARClEnd(...);
extern "C" void DWCi_ARClReadEx(void);
extern "C" s32 DWCi_ARClRelease(...);
extern "C" void DWCi_CELLlInit(void);
extern "C" s32 DWCi_CELLlEnd(...);
extern "C" s32 DWCi_CELLlDelete(...);
extern "C" void DWCi_CELLlGetObj(void);
extern "C" void DWCi_CELLlSetEffect(void);
extern "C" void DWCi_CELLlSetPalette(void);
extern "C" void DWCi_CELLlSetPosition(void);
extern "C" void DWCi_CELLlSetPriority(void);
extern "C" void DWCi_CELLlGetPosition(void);
extern "C" void func_ov016_0214f794(void);
extern "C" s32 DWCi_CEINlRelease(...);
extern "C" void DWCi_CEINlSet(void);
extern "C" s32 DWCi_QUElFormEx(...);
extern "C" s32 DWCi_QUElPushBack(...);
extern "C" void DWCi_QUElPopBack(void);
extern "C" s32 func_ov016_0214fa30(...);
extern "C" s32 DWCi_EFFlEnd(...);
extern "C" s32 DWCi_EFFlCheck(...);
extern "C" s32 DWCi_EFFlFade(...);
extern "C" s32 DWCi_EFFlWait(...);
extern "C" void DWCi_FNTlInit(void);
extern "C" s32 DWCi_FNTlEnd(...);
extern "C" s32 DWCi_FNTlDelete(...);
extern "C" void DWCi_FNTlFormBgEx(void);
extern "C" s32 DWCi_FNTlDeleteBgLcd(...);
extern "C" void DWCi_FNTlDrawRect(void);
extern "C" void DWCi_FNTlDisp(void);
extern "C" void DWCi_FNTlRenewBg(void);
extern "C" void DWCi_Coord2Rect(void);
extern "C" s32 DWCi_GXlVisible(...);
extern "C" s32 DWCi_GXlInvisible(...);
extern "C" s32 func_ov016_02150874(...);
extern "C" s32 DWCi_HEAPlEnd(...);
extern "C" s32 DWCi_HEAPlAllocEx(...);
extern "C" s32 DWCi_HEAPlFree_(...);
extern "C" void DWCi_HEAPlFree2(void);
extern "C" s32 func_ov016_021509cc(...);
extern "C" s32 DWCi_IPTlEnd(...);
extern "C" s32 DWCi_IPTlRead(...);
extern "C" s32 DWCi_IPTlCheckTrigger(...);
extern "C" void DWCi_IPTlCheckRepeat(void);
extern "C" void DWCi_IPTlCheckRelease(void);
extern "C" void DWCi_TPlCheck(void);
extern "C" void DWCi_TPlCheckTrigger(void);
extern "C" void DWCi_TPlCheckRelease(void);
extern "C" s32 func_ov016_021510dc(...);
extern "C" s32 func_ov016_0215118c(...);
extern "C" s32 DWCi_ITRlEnd(...);
extern "C" void DWCi_OBJlInit(void);
extern "C" s32 DWCi_OBJlEnd(...);
extern "C" s32 DWCi_OBJlDelete(...);
extern "C" void DWCi_OVRlInit(void);
extern "C" void DWCi_STRlConvertStringAsciiToUnicode(void);
extern "C" s32 func_ov016_02151788(...);
extern "C" s32 DWCi_RepairVram(...);
extern "C" s32 DWCi_SetLedWireless(...);
extern "C" s32 DWCi_SetLedNormal(...);
extern "C" s32 func_ov016_02151998(...);
extern "C" s32 DWCi_TSKlEnd(...);
extern "C" s32 DWCi_TSKlAct(...);
extern "C" s32 DWCi_TSKlForm(...);
extern "C" void DWCi_TSKlChangeFunc(void);
extern "C" s32 DWCi_TSKlDelete(...);
extern "C" s32 DWCi_TSKlOperate(...);

extern "C" void taskStart2_2(void *arg0)
{
    s32 x;
    s32 y;
    inl_02139d54(*(u8 **)data_ov016_02158a40 + 0x20, 0, &x, &y);
    y -= 0xC;
    if (y > 0x7A) {
        ((s32 (*)(...))disp_3)(2, y);
        return;
    }
    ((s32 (*)(...))disp_3)(2, 0x7A);
    ((s32 (*)(...))disp_3)(3, 0xC0);
    ((s32 (*)(...))DWCi_TSKlChangeFunc)(arg0, taskStart3_2);
}

extern "C" void taskStart3_2(void *arg0)
{
    s32 x;
    s32 y;
    inl_02139dc0(*(u8 **)data_ov016_02158a40 + 0x2C, 0, &x, &y);
    y -= 0xC;
    if (y > 0x91) {
        ((s32 (*)(...))disp_3)(3, y);
        return;
    }
    ((s32 (*)(...))disp_3)(3, 0x91);
    ((s32 (*)(...))disp_3)(4, 0xC0);
    ((s32 (*)(...))DWCi_TSKlChangeFunc)(arg0, taskStart4_2);
}

extern "C" void taskStart4_2(void *arg0)
{
    s32 x;
    s32 y;
    ((s32 (*)(...))DWCi_CELLlGetPosition)(*(s32 *)(*(u8 **)data_ov016_02158a40 + 0x40), 0, &x, &y);
    y -= 0xC;
    if (y > 0xAA) {
        ((s32 (*)(...))disp_3)(4, y);
        return;
    }
    ((s32 (*)(...))disp_3)(4, 0xAA);
    ((s32 (*)(...))dispFocus_2)();
    ((s32 (*)(...))DWCi_TSKlChangeFunc)(arg0, taskMain_3);
}

extern "C" void taskMain_3(void)
{
    touchTrigger_2();
    touchRelease_2();
    touch_2();
    key_2();
}

extern "C" asm s32 touchTrigger_2(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #8
    ldr r0, =DWCi_R_SCR
    ldr r5, =data_ov016_02158a40
    bl DWCi_TPlCheckTrigger
    cmp r0, #0
    addeq sp, sp, #8
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, [r5]
    mvn r1, #0
    ldr r8, =data_ov016_021548ac
    ldr r7, =data_ov016_02154866
    strb r1, [r0, #0x61]
    mov r4, #0
    add r6, sp, #0
@L_02139ef4:
    mov r1, r7
    mov r2, r6
    add r0, r8, r4, lsl #2
    bl DWCi_Coord2Rect
    mov r0, r6
    bl DWCi_TPlCheckTrigger
    cmp r0, #0
    beq @L_02139f4c
    ldr r0, [r5]
    ldrb r0, [r0, #0x67]
    cmp r0, #0
    bne @L_02139f34
    mov r0, #9
    bl DWCi_SNDlPlay
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02139f34:
    mov r0, #0
    bl DWCi_SNDlPlay
    ldr r0, [r5]
    add sp, sp, #8
    strb r4, [r0, #0x61]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02139f4c:
    add r4, r4, #1
    cmp r4, #0xa
    blt @L_02139ef4
    ldr r8, =data_ov016_02154876
    ldr r7, =data_ov016_0215486e
    mov r4, #0
    add r6, sp, #0
@L_02139f68:
    mov r1, r7
    mov r2, r6
    add r0, r8, r4, lsl #2
    bl DWCi_Coord2Rect
    mov r0, r6
    bl DWCi_TPlCheckTrigger
    cmp r0, #0
    beq @L_02139fdc
    cmp r4, #0
    ldreq r0, [r5]
    ldreqb r0, [r0, #0x66]
    cmpeq r0, #0
    beq @L_02139fb0
    cmp r4, #1
    ldreq r0, [r5]
    ldreqb r0, [r0, #0x68]
    cmpeq r0, #0
    bne @L_02139fc0
@L_02139fb0:
    mov r0, #9
    bl DWCi_SNDlPlay
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02139fc0:
    mov r0, #0
    bl DWCi_SNDlPlay
    ldr r0, [r5]
    add r1, r4, #0xa
    strb r1, [r0, #0x61]
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02139fdc:
    add r4, r4, #1
    cmp r4, #2
    blt @L_02139f68
    ldr r7, =data_ov016_0215487e
    ldr r6, =data_ov016_02154872
    mov r8, #0
    add r4, sp, #0
@L_02139ff8:
    mov r1, r6
    mov r2, r4
    add r0, r7, r8, lsl #2
    bl DWCi_Coord2Rect
    mov r0, r4
    bl DWCi_TPlCheckTrigger
    cmp r0, #0
    beq @L_0213a034
    mov r0, #0
    bl DWCi_SNDlPlay
    ldr r0, [r5]
    add r1, r8, #0xc
    strb r1, [r0, #0x61]
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0213a034:
    add r8, r8, #1
    cmp r8, #2
    blt @L_02139ff8
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm s32 touchRelease_2(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #8
    ldr r1, =data_ov016_02158a40
    ldr r0, =DWCi_R_SCR
    ldr r1, [r1]
    mov r4, #0
    strb r4, [r1, #0x60]
    bl DWCi_TPlCheckRelease
    cmp r0, #0
    addeq sp, sp, #8
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r7, =data_ov016_021548ac
    ldr r6, =data_ov016_02154866
    add r5, sp, #0
@L_0213a0a0:
    mov r1, r6
    mov r2, r5
    add r0, r7, r4, lsl #2
    bl DWCi_Coord2Rect
    mov r0, r5
    bl DWCi_TPlCheckRelease
    cmp r0, #0
    beq @L_0213a0f8
    ldr r0, =data_ov016_02158a40
    ldr r2, [r0]
    ldrsb r1, [r2, #0x61]
    cmp r1, r4
    addne sp, sp, #8
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r1, =data_ov016_02154886
    ldrb r1, [r1, r4]
    strb r1, [r2, #0x60]
    ldr r0, [r0]
    strb r4, [r0, #0x63]
    bl dispFocus_2
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0213a0f8:
    add r4, r4, #1
    cmp r4, #0xa
    blt @L_0213a0a0
    ldr r7, =data_ov016_02154876
    ldr r6, =data_ov016_0215486e
    mov r4, #0
    add r5, sp, #0
@L_0213a114:
    mov r1, r6
    mov r2, r5
    add r0, r7, r4, lsl #2
    bl DWCi_Coord2Rect
    mov r0, r5
    bl DWCi_TPlCheckRelease
    cmp r0, #0
    beq @L_0213a170
    ldr r0, =data_ov016_02158a40
    add r2, r4, #0xa
    ldr r3, [r0]
    ldrsb r1, [r3, #0x61]
    cmp r1, r2
    addne sp, sp, #8
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r1, =data_ov016_02154863
    ldrb r1, [r1, r4]
    strb r1, [r3, #0x60]
    ldr r0, [r0]
    strb r2, [r0, #0x63]
    bl dispFocus_2
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0213a170:
    add r4, r4, #1
    cmp r4, #2
    blt @L_0213a114
    ldr r7, =data_ov016_0215487e
    ldr r6, =data_ov016_02154872
    mov r4, #0
    add r5, sp, #0
@L_0213a18c:
    mov r1, r6
    mov r2, r5
    add r0, r7, r4, lsl #2
    bl DWCi_Coord2Rect
    mov r0, r5
    bl DWCi_TPlCheckRelease
    cmp r0, #0
    beq @L_0213a1e8
    ldr r0, =data_ov016_02158a40
    add r2, r4, #0xc
    ldr r3, [r0]
    ldrsb r1, [r3, #0x61]
    cmp r1, r2
    addne sp, sp, #8
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r1, =data_ov016_02154860
    ldrb r1, [r1, r4]
    strb r1, [r3, #0x60]
    ldr r0, [r0]
    strb r2, [r0, #0x63]
    bl dispFocus_2
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0213a1e8:
    add r4, r4, #1
    cmp r4, #2
    blt @L_0213a18c
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm s32 touch_2(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #8
    ldr r0, =DWCi_R_SCR
    bl DWCi_TPlCheck
    cmp r0, #0
    beq @L_0213a3c0
    ldr r6, =data_ov016_021548ac
    ldr r5, =data_ov016_02154866
    mov r7, #0
    add r4, sp, #0
@L_0213a250:
    mov r1, r5
    mov r2, r4
    add r0, r6, r7, lsl #2
    bl DWCi_Coord2Rect
    mov r0, r4
    bl DWCi_TPlCheck
    cmp r0, #0
    beq @L_0213a28c
    ldr r0, =data_ov016_02158a40
    ldr r0, [r0]
    ldrsb r0, [r0, #0x61]
    cmp r0, r7
    bne @L_0213a3c0
    mov r0, r7
    b @L_0213a3c4
@L_0213a28c:
    add r7, r7, #1
    cmp r7, #0xa
    blt @L_0213a250
    ldr r6, =data_ov016_02154876
    ldr r5, =data_ov016_0215486e
    mov r7, #0
    add r4, sp, #0
@L_0213a2a8:
    mov r1, r5
    mov r2, r4
    add r0, r6, r7, lsl #2
    bl DWCi_Coord2Rect
    mov r0, r4
    bl DWCi_TPlCheck
    cmp r0, #0
    beq @L_0213a35c
    ldr r4, =data_ov016_02158a40
    add r0, r7, #0xa
    ldr r1, [r4]
    ldrsb r1, [r1, #0x61]
    cmp r1, r0
    bne @L_0213a3c0
    bl exchangeBack_2
    cmp r7, #0
    bne @L_0213a3c8
    ldr r1, [r4]
    ldrb r0, [r1, #0x65]
    add r0, r0, #1
    strb r0, [r1, #0x65]
    ldr r1, [r4]
    ldrb r0, [r1, #0x65]
    cmp r0, #0x28
    addlo sp, sp, #8
    ldmloia sp!, {r3, r4, r5, r6, r7, pc}
    ldrb r0, [r1, #0x66]
    cmp r0, #0
    bne @L_0213a33c
    mov r5, #9
    mov r0, r5
    bl DWCi_SNDlPlay
    ldr r0, [r4]
    sub r1, r5, #0xa
    strb r1, [r0, #0x61]
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0213a33c:
    mov r0, #0x10
    strb r0, [r1, #0x60]
    ldr r1, [r4]
    add sp, sp, #8
    ldrb r0, [r1, #0x65]
    sub r0, r0, #7
    strb r0, [r1, #0x65]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0213a35c:
    add r7, r7, #1
    cmp r7, #2
    blt @L_0213a2a8
    ldr r6, =data_ov016_0215487e
    ldr r5, =data_ov016_02154872
    mov r7, #0
    add r4, sp, #0
@L_0213a378:
    mov r1, r5
    mov r2, r4
    add r0, r6, r7, lsl #2
    bl DWCi_Coord2Rect
    mov r0, r4
    bl DWCi_TPlCheck
    cmp r0, #0
    beq @L_0213a3b4
    ldr r1, =data_ov016_02158a40
    add r0, r7, #0xc
    ldr r1, [r1]
    ldrsb r1, [r1, #0x61]
    cmp r1, r0
    bne @L_0213a3c0
    b @L_0213a3c4
@L_0213a3b4:
    add r7, r7, #1
    cmp r7, #2
    blt @L_0213a378
@L_0213a3c0:
    mvn r0, #0
@L_0213a3c4:
    bl exchangeBack_2
@L_0213a3c8:
    ldr r0, =data_ov016_02158a40
    mov r1, #0
    ldr r0, [r0]
    strb r1, [r0, #0x65]
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" s32 exchangeBack_2(u8 arg0)
{
    if (arg0 == *(s8 *)(*(u8 * *)(data_ov016_02158a40) + 0x62))
        return arg0;
    changeColor_2(arg0, 1);
    s8 t0 = *(s8 *)(*(u8 * *)(data_ov016_02158a40) + 0x62);
    changeColor_2(t0, 0);
    u8 *t1 = (u8 *)*(s32 *)(data_ov016_02158a40);
    *(u8 *)(t1 + 0x62) = arg0;
    return (s32)t1;
}

extern "C" asm s32 key_2(...)
{
    stmdb sp!, {r4, lr}
    mov r0, #0x20
    bl DWCi_IPTlCheckRepeat
    cmp r0, #0
    beq @L_0213a460
    mov r0, #0
    bl moveFocus_2
@L_0213a460:
    mov r0, #0x40
    bl DWCi_IPTlCheckRepeat
    cmp r0, #0
    beq @L_0213a478
    mov r0, #1
    bl moveFocus_2
@L_0213a478:
    mov r0, #0x10
    bl DWCi_IPTlCheckRepeat
    cmp r0, #0
    beq @L_0213a490
    mov r0, #2
    bl moveFocus_2
@L_0213a490:
    mov r0, #0x80
    bl DWCi_IPTlCheckRepeat
    cmp r0, #0
    beq @L_0213a4a8
    mov r0, #3
    bl moveFocus_2
@L_0213a4a8:
    mov r0, #1
    bl DWCi_IPTlCheckTrigger
    cmp r0, #0
    beq @L_0213a550
    ldr r0, =data_ov016_02158a40
    ldr r0, [r0]
    ldrsb r2, [r0, #0x63]
    cmp r2, #0xa
    bge @L_0213a4f0
    ldrb r1, [r0, #0x67]
    cmp r1, #0
    ldrne r1, =data_ov016_02154886
    ldrneb r1, [r1, r2]
    strneb r1, [r0, #0x60]
    ldmneia sp!, {r4, pc}
    mov r0, #9
    bl DWCi_SNDlPlay
    ldmia sp!, {r4, pc}
@L_0213a4f0:
    sub r1, r2, #0xa
    cmp r1, #2
    bge @L_0213a540
    cmp r1, #0
    ldreqb r1, [r0, #0x66]
    cmpeq r1, #0
    beq @L_0213a520
    sub r1, r2, #0xa
    cmp r1, #1
    ldreqb r1, [r0, #0x68]
    cmpeq r1, #0
    bne @L_0213a52c
@L_0213a520:
    mov r0, #9
    bl DWCi_SNDlPlay
    ldmia sp!, {r4, pc}
@L_0213a52c:
    ldr r1, =data_ov016_02154863
    sub r2, r2, #0xa
    ldrb r1, [r1, r2]
    strb r1, [r0, #0x60]
    ldmia sp!, {r4, pc}
@L_0213a540:
    ldr r1, =data_ov016_02154860
    sub r2, r2, #0xc
    ldrb r1, [r1, r2]
    strb r1, [r0, #0x60]
@L_0213a550:
    mov r4, #2
    mov r0, r4
    bl DWCi_IPTlCheckRepeat
    cmp r0, #0
    beq @L_0213a5a8
    ldr r4, =data_ov016_02158a40
    ldr r1, [r4]
    ldrb r0, [r1, #0x66]
    cmp r0, #0
    bne @L_0213a59c
    ldrb r0, [r1, #0x69]
    cmp r0, #0
    ldmneia sp!, {r4, pc}
    mov r0, #9
    bl DWCi_SNDlPlay
    ldr r0, [r4]
    mov r1, #1
    strb r1, [r0, #0x69]
    ldmia sp!, {r4, pc}
@L_0213a59c:
    mov r0, #0x10
    strb r0, [r1, #0x60]
    ldmia sp!, {r4, pc}
@L_0213a5a8:
    mov r0, r4
    bl DWCi_IPTlCheckRelease
    cmp r0, #0
    ldrne r0, =data_ov016_02158a40
    movne r1, #0
    ldrne r0, [r0]
    strneb r1, [r0, #0x69]
    ldmia sp!, {r4, pc}
}

extern "C" asm void disp_3(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    ldr r3, =data_ov016_0215494c
    ldr r2, =data_ov016_02154944
    ldr r11, =data_ov016_02154954
    ldrb r10, [r3]
    ldrb r9, [r3, #1]
    ldrb r8, [r3, #2]
    ldrb r7, [r3, #3]
    ldrb r6, [r3, #4]
    mov r4, r0
    ldrb r0, [r2]
    ldrb r3, [r11, #3]
    strb r9, [sp, #0x17]
    strb r8, [sp, #0x18]
    strb r7, [sp, #0x19]
    add r7, r4, r4, lsl #1
    strb r6, [sp, #0x1a]
    ldrb r5, [r11]
    ldrb lr, [r11, #1]
    ldrb r12, [r11, #2]
    ldrb r11, [r11, #4]
    str r0, [sp, #8]
    ldrb r0, [r2, #1]
    ldrb r9, [r2, #2]
    ldrb r8, [r2, #3]
    ldrb r2, [r2, #4]
    strb r3, [sp, #0x14]
    ldr r3, [sp, #8]
    strb r5, [sp, #0x11]
    strb r10, [sp, #0x16]
    add r6, sp, #0x16
    str r7, [sp, #4]
    ldrb r7, [r6, r4]
    mov r5, r1
    strb lr, [sp, #0x12]
    cmp r7, #0
    ldr r1, [sp, #4]
    strb r12, [sp, #0x13]
    strb r11, [sp, #0x15]
    strb r3, [sp, #0xc]
    strb r0, [sp, #0xd]
    strb r9, [sp, #0xe]
    strb r8, [sp, #0xf]
    strb r2, [sp, #0x10]
    mov r7, #0
    ble @L_0213a700
    ldrb r11, [r6, r4]
    ldr r0, =data_ov016_021548ac
    ldr r10, =data_ov016_02158a40
    ldr r6, =0xc1fffcff
    ldr r9, =0xfe00ff00
    and r8, r5, #0xff
@L_0213a6ac:
    ldr r2, [r10]
    mov r3, r1, lsl #2
    add r2, r2, r1, lsl #2
    ldr r2, [r2, #0x10]
    ldrh r3, [r0, r3]
    ldr r12, [r2]
    add r7, r7, #1
    and r12, r12, r6
    str r12, [r2]
    ldr r12, [r10]
    mov r2, r3, lsl #0x17
    add r3, r12, r1, lsl #2
    ldr r3, [r3, #0x10]
    cmp r7, r11
    ldr r12, [r3]
    add r1, r1, #1
    and r12, r12, r9
    orr r12, r12, r8
    orr r2, r12, r2, lsr #7
    str r2, [r3]
    blt @L_0213a6ac
@L_0213a700:
    cmp r4, #4
    bge @L_0213a73c
    ldr r0, =data_ov016_02158a40
    ldr r1, =data_ov016_021548ac
    ldr r3, [r0]
    ldr r0, [sp, #4]
    mov r2, #2
    mov r0, r0, lsl #2
    str r2, [sp]
    ldrh r1, [r1, r0]
    add r2, r3, r4, lsl #2
    ldr r0, [r3, r4, lsl #2]
    ldr r3, [r2, #0x48]
    mov r2, r5
    bl DWCi_FNTlDisp
@L_0213a73c:
    add r1, sp, #0x11
    ldrb r0, [r1, r4]
    mov r6, #0
    cmp r0, #0
    ble @L_0213a7b8
    mov r10, r0
    ldr r0, =data_ov016_02154876
    ldr r9, =data_ov016_02158a40
    ldr r7, =0xc1fffcff
    ldr r8, =0xfe00ff00
    and r3, r5, #0xff
@L_0213a768:
    ldr r1, [r9]
    mov r2, r6, lsl #2
    add r1, r1, r6, lsl #2
    ldr r11, [r1, #0x38]
    ldrh r1, [r0, r2]
    ldr r2, [r11]
    and r2, r2, r7
    str r2, [r11]
    ldr r2, [r9]
    mov r1, r1, lsl #0x17
    add r2, r2, r6, lsl #2
    ldr r2, [r2, #0x38]
    add r6, r6, #1
    ldr r11, [r2]
    cmp r6, r10
    and r11, r11, r8
    orr r11, r11, r3
    orr r1, r11, r1, lsr #7
    str r1, [r2]
    blt @L_0213a768
@L_0213a7b8:
    add r1, sp, #0xc
    ldrb r0, [r1, r4]
    mov r7, #0
    cmp r0, #0
    addle sp, sp, #0x1c
    ldmleia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r10, =data_ov016_0215487e
    ldr r8, =data_ov016_02158a40
    mov r9, r0
    mvn r6, #0
    mov r4, r7
@L_0213a7e4:
    ldr r0, [r8]
    mov r1, r6
    add r0, r0, r7, lsl #2
    ldr r0, [r0, #0x40]
    mov r2, r4
    mov r3, r4
    bl DWCi_CELLlSetEffect
    ldr r0, [r8]
    mov r1, r7, lsl #2
    add r0, r0, r7, lsl #2
    ldrh r2, [r10, r1]
    ldr r0, [r0, #0x40]
    mov r1, r6
    mov r3, r5
    bl DWCi_CELLlSetPosition
    add r7, r7, #1
    cmp r7, r9
    blt @L_0213a7e4
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 changeColor_2(...)
{
    stmdb sp!, {r3, lr}
    cmp r0, #0
    ldmltia sp!, {r3, pc}
    cmp r0, #0xa
    bge @L_0213a8a4
    ldr r2, =data_ov016_02158a40
    ldr r3, =data_ov016_0215485e
    ldr r2, [r2]
    ldrb r1, [r3, r1]
    add r0, r2, r0, lsl #2
    ldr r2, [r0, #0x10]
    ldr r0, [r2]
    bic r0, r0, #0xc00
    str r0, [r2]
    ldrh r0, [r2, #4]
    bic r0, r0, #0xf000
    orr r0, r0, r1, lsl #12
    strh r0, [r2, #4]
    ldmia sp!, {r3, pc}
@L_0213a8a4:
    sub r12, r0, #0xa
    cmp r12, #2
    bge @L_0213a8e8
    ldr r0, =data_ov016_02158a40
    ldr r2, =data_ov016_0215485e
    ldr r3, [r0]
    ldrb r0, [r2, r1]
    add r1, r3, r12, lsl #2
    ldr r2, [r1, #0x38]
    ldr r1, [r2]
    bic r1, r1, #0xc00
    str r1, [r2]
    ldrh r1, [r2, #4]
    bic r1, r1, #0xf000
    orr r0, r1, r0, lsl #12
    strh r0, [r2, #4]
    ldmia sp!, {r3, pc}
@L_0213a8e8:
    ldr r2, =data_ov016_02158a40
    ldr r3, =data_ov016_02154858
    ldr r2, [r2]
    sub r0, r0, #0xc
    add r0, r2, r0, lsl #2
    ldrb r3, [r3, r1]
    ldr r0, [r0, #0x40]
    mvn r1, #0
    mov r2, #0
    bl DWCi_CELLlSetPalette
    ldmia sp!, {r3, pc}
}

extern "C" asm void dispFocus_2(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r0, =data_ov016_02158a40
    mov r4, #0x44
    ldr r1, [r0]
    mov r5, #0
    ldrsb r0, [r1, #0x63]
    cmp r0, #0xb
    ldr r0, [r1, #0x58]
    movgt r4, #0x45
    mov r1, r5
    bl DWCi_CELLlGetObj
    mov r2, r0
    mov r0, r5
    mov r1, r4
    bl DWCi_CEINlSet
    ldr r4, =data_ov016_02158a40
    sub r5, r5, #1
    ldr r0, [r4]
    mov r1, r5
    ldr r0, [r0, #0x58]
    mov r2, #2
    bl DWCi_CELLlSetPriority
    ldr r0, [r4]
    ldr r2, =data_ov016_021548d4
    ldrsb r3, [r0, #0x63]
    ldr r0, [r0, #0x58]
    mov r1, r5
    mov r4, r3, lsl #2
    ldr r3, =data_ov016_021548d6
    ldrh r2, [r2, r4]
    ldrh r3, [r3, r4]
    bl DWCi_CELLlSetPosition
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void moveFocus_2(s32 arg0)
{
    u8 *q = *(u8 **)data_ov016_02158a40;
    s32 old = *(s8 *)(q + 0x63);
    s32 c;
    u8 *p;
    s32 m;
    *(s8 *)(q + 0x63) = *(s8 *)(arg0 + ((u8 *)data_ov016_0215490c + (old << 2)));
    p = *(u8 **)data_ov016_02158a40;
    c = *(s8 *)(p + 0x63);
    m = -1;
    if (c == 0xD && (arg0 == 1 || arg0 == 3)) {
        *(s8 *)(p + 0x64) = old;
    } else if (c == m) {
        s32 d = *(s8 *)(p + 0x64);
        if (d == 1 || d == 0xA)
            *(s8 *)(p + 0x63) = 0xA;
        else
            *(s8 *)(p + 0x63) = 0xB;
    } else if (c == m - 1) {
        s32 d = *(s8 *)(p + 0x64);
        if (d == 1 || d == 0xA)
            *(s8 *)(p + 0x63) = 1;
        else
            *(s8 *)(p + 0x63) = 2;
    }
    ((s32 (*)(...))dispFocus_2)();
    ((s32 (*)(...))DWCi_SNDlPlay)(8);
}

extern "C" asm void taskEnd0_2(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #8
    ldr r1, =data_ov016_02158a40
    mov r5, r0
    ldr r0, [r1]
    mov r1, #0
    ldr r0, [r0, #0x40]
    bl DWCi_CELLlGetObj
    ldr r1, [r0]
    mov r0, #4
    and r1, r1, #0xff
    add r4, r1, #0xc
    mov r1, r4
    bl disp_3
    cmp r4, #0xc0
    addlt sp, sp, #8
    ldmltia sp!, {r3, r4, r5, pc}
    ldr r1, =taskEnd1_3
    mov r0, r5
    bl DWCi_TSKlChangeFunc
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void taskEnd1_3(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #8
    ldr r1, =data_ov016_02158a40
    mov r5, r0
    ldr r1, [r1]
    mov r0, #3
    ldr r1, [r1, #0x34]
    ldr r1, [r1]
    and r1, r1, #0xff
    add r4, r1, #0xc
    mov r1, r4
    bl disp_3
    cmp r4, #0xc0
    addlt sp, sp, #8
    ldmltia sp!, {r3, r4, r5, pc}
    ldr r1, =taskEnd2_2
    mov r0, r5
    bl DWCi_TSKlChangeFunc
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void taskEnd2_2(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #8
    ldr r1, =data_ov016_02158a40
    mov r5, r0
    ldr r1, [r1]
    mov r0, #2
    ldr r1, [r1, #0x28]
    ldr r1, [r1]
    and r1, r1, #0xff
    add r4, r1, #0xc
    mov r1, r4
    bl disp_3
    cmp r4, #0xc0
    addlt sp, sp, #8
    ldmltia sp!, {r3, r4, r5, pc}
    ldr r1, =taskEnd3_2
    mov r0, r5
    bl DWCi_TSKlChangeFunc
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void taskEnd3_2(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #8
    ldr r1, =data_ov016_02158a40
    mov r5, r0
    ldr r1, [r1]
    mov r0, #1
    ldr r1, [r1, #0x1c]
    ldr r1, [r1]
    and r1, r1, #0xff
    add r4, r1, #0xc
    mov r1, r4
    bl disp_3
    cmp r4, #0xc0
    addlt sp, sp, #8
    ldmltia sp!, {r3, r4, r5, pc}
    ldr r1, =taskEnd4_2
    mov r0, r5
    bl DWCi_TSKlChangeFunc
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void taskEnd4_2(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #8
    ldr r1, =data_ov016_02158a40
    mov r5, r0
    ldr r1, [r1]
    mov r0, #0
    ldr r1, [r1, #0x10]
    ldr r1, [r1]
    and r1, r1, #0xff
    add r4, r1, #0xc
    mov r1, r4
    bl disp_3
    cmp r4, #0xc0
    addlt sp, sp, #8
    ldmltia sp!, {r3, r4, r5, pc}
    ldr r1, =taskEnd5_2
    mov r0, r5
    bl DWCi_TSKlChangeFunc
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 taskEnd5_2(s32 arg0)
{
    s32 r4;
    s32 r5;
    s32 v6;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    DWCi_TSKlDelete(0, arg0);
    r5 = 0;
    do {
        t0 = *(s32 *)(((u8 *)(*(s32 *)(data_ov016_02158a40) + (r5 << 2))) + 0x48);
        DWCi_CELLlDelete(t0);
        t1 = *(s32 *)(*(u8 * *)(data_ov016_02158a40) + (r5 << 2));
        DWCi_FNTlDelete(t1);
        r4 = (s32)data_ov016_02158a40;
        r5 = (r5 + 1);
    } while (r5 < 4);
    r5 = 0;
    do {
        t2 = *(s32 *)(((u8 *)(*(s32 *)(data_ov016_02158a40) + (r5 << 2))) + 0x40);
        DWCi_CELLlDelete(t2);
        r4 = (s32)data_ov016_02158a40;
        r5 = (r5 + 1);
    } while (r5 < 2);
    r5 = 0;
    do {
        t3 = *(s32 *)(((u8 *)(*(s32 *)(data_ov016_02158a40) + (r5 << 2))) + 0x38);
        DWCi_OBJlDelete(t3);
        r4 = (s32)data_ov016_02158a40;
        r5 = (r5 + 1);
    } while (r5 < 2);
    r5 = 0;
    do {
        t4 = *(s32 *)(((u8 *)(*(s32 *)(data_ov016_02158a40) + (r5 << 2))) + 0x10);
        DWCi_OBJlDelete(t4);
        r4 = (s32)data_ov016_02158a40;
        r5 = (r5 + 1);
    } while (r5 < 10);
    v6 = DWCi_HEAPlFree_((s32)data_ov016_02158a40_b);
    return v6;
}

extern "C" asm void DWCi_AOSSlInit(void)
{
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0x104
    mov r0, #0x26c
    mov r1, #4
    bl DWCi_HEAPlAllocEx
    ldr r5, =data_ov016_02158a44
    add r4, sp, #0
    str r0, [r5, #4]
    mov r0, #0
    mov r1, r4
    mov r2, #0x104
    strb r0, [r5]
    bl MIi_CpuClear16
    mov r3, #0x50
    mov r2, #0xc
    ldr r0, =data_ov016_02154964
    add r1, sp, #4
    strb r3, [sp]
    strh r2, [sp, #2]
    bl MI_CpuCopy8
    ldr r0, [r5, #4]
    mov r1, #3
    strh r1, [r0]
    ldr r5, [r5, #4]
    mov r2, #0x41
    add r3, r5, #2
@L_0213ad40:
    ldrh r1, [r4]
    ldrh r0, [r4, #2]
    add r4, r4, #4
    subs r2, r2, #1
    strh r0, [r3, #2]
    strh r1, [r3], #4
    bne @L_0213ad40
    ldr r1, =data_ov016_02158a44
    mov r3, #1
    add r0, r5, #0x100
    strh r3, [r0, #6]
    ldr r0, [r1, #4]
    sub r2, r3, #2
    add r0, r0, #0x100
    strh r2, [r0, #8]
    ldr r0, [r1, #4]
    add r0, r0, #0x100
    strh r3, [r0, #0xa]
    ldr r0, [r1, #4]
    add r0, r0, #0x100
    strh r2, [r0, #0xc]
    ldr r0, [r1, #4]
    add r0, r0, #0x100
    strh r2, [r0, #0xe]
    ldr r0, [r1, #4]
    add r0, r0, #0x110
    bl OS_GetMacAddress
    ldr r0, =aossAlloc
    ldr r1, =aossFree
    bl func_ov016_02132a14
    cmp r0, #0
    addeq sp, sp, #0x104
    ldmeqia sp!, {r4, r5, pc}
    bl OS_Terminate
    add sp, sp, #0x104
    ldmia sp!, {r4, r5, pc}
}

extern "C" s32 DWCi_AOSSlEnd(s32 arg0)
{
    u8 *r2;
    s32 v2;
    func_ov016_02132ad8(arg0);
    if (arg0 != 0) {
        arg0 = (s32)data_ov016_02158a44;
        r2 = (u8 *)*(s32 *)(data_ov016_02158a44 + 0x4);
        if ((*(u8 *)(r2 + 0x116) == 0 && *(u8 *)(data_ov016_02158a44) == 1)) {
            DWCi_SETTINGlSetAoss(((r2 + 0x17) + 0x100));
        }
    }
    v2 = DWCi_HEAPlFree_((s32)data_ov016_02158a48);
    return v2;
}

extern "C" s32 DWCi_AOSSlStart(void)
{
    s32 r0;
    s32 v0;
    s32 t0;
    t0 = *(s32 *)(((u8 *)&data_ov016_02158a44) + 0x4);
    v0 = func_ov016_02130700(t0);
    if (v0 == 0) {
        *(u8 *)(((u8 *)&data_ov016_02158a44)) = 1;
        return 1;
    } else {
        r0 = *(u8 *)(*(u8 * *)(((u8 *)&data_ov016_02158a44) + 0x4) + 0x116);
        if ((r0 == 1 || (u32)((r0 + 0xFD) & 0xFF) <= (u32)2)) {
            return 0;
        } else {
            return 2;
        }
    }
}

extern "C" void aossAlloc(s32 arg0)
{
    DWCi_HEAPlAllocEx(arg0, 0x20);
}

extern "C" void aossFree(void)
{
    DWCi_HEAPlFree2();
}

extern "C" s32 func_ov016_0213aea0(s32 arg0, s32 arg1, s32 arg2)
{
    u8 *r4;
    s32 r6;
    s32 v0;
    s32 v1;
    s32 t0;
    *(s32 *)(data_ov016_02158a4c + 0x4) = arg0;
    v0 = func_ov016_0213af40(arg1, arg2, arg2);
    if (v0 == 0)
        return -1;
    v1 = func_ov014_0210b4f4(v0);
    DWC_Auth_SetCustomNas((s32)data_ov016_0215553c);
    *(u8 *)(data_ov016_02158a4c + 0x1) = 0;
    ((s32 (*)(...))func_ov016_0213afbc)(0);
    initGraph();
    func_ov016_0214a3d0();
    DWCi_ChangeScene((s32)func_ov016_0213bc08);
    r6 = v1;
    do {
        DWCi_IPTlRead();
        t0 = *(s32 *)(data_ov016_02158a4c + 0xC);
        ((s32 (*)(...))*(s32 *)(data_ov016_02158a4c + 0xC))(t0);
        DWCi_TSKlAct(0);
        func_ov016_021510dc();
        DWCi_SetLedWireless();
        OS_WaitVBlankIntr();
        r4 = (u8 *)data_ov016_02158a4c;
    } while (*(u8 *)(r4 + 0x1) == 0);
    procEnd();
    DWC_Auth_SetCustomNas(r6);
    return 0;
}

extern "C" asm s32 func_ov016_0213af40(...)
{
    ldr r2, =data_ov016_02158a4c
    cmp r0, #0
    strb r0, [r2]
    str r1, [r2, #8]
    blt @L_0213af5c
    cmp r0, #6
    ble @L_0213af64
@L_0213af5c:
    mov r0, #0
    bx lr
@L_0213af64:
    mov r2, r1, lsl #0x1c
    mov r2, r2, lsr #0x1c
    cmp r2, #1
    movhi r0, #0
    bxhi lr
    mov r1, r1, lsr #4
    tst r1, #2
    movne r0, #0
    bxne lr
    cmp r0, #0
    beq @L_0213af9c
    tst r1, #1
    movne r0, #0
    bxne lr
@L_0213af9c:
    cmp r0, #0
    bne @L_0213afb0
    tst r1, #1
    moveq r0, #0
    bxeq lr
@L_0213afb0:
    mov r0, #1
    bx lr
}

extern "C" s32 func_ov016_0213afbc(void)
{
    s32 local[1];
    s32 v1;
    s32 v3;
    s32 v18;
    s32 v20;
    u16 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    t0 = *(u16 *)(((u8 *)0x4000208));
    *(u16 *)(((u8 *)0x4000208)) = 0;
    GX_DispOff(0, t0, 0x4000208);
    t1 = (*(s32 *)(((u8 *)0x4001000)) & -0x10001);
    *(s32 *)(((u8 *)0x4001000)) = t1;
    v1 = OS_IsTickAvailable(t1, 0x4001000);
    if (v1 == 0) {
        OS_Terminate();
    }
    v3 = OS_IsAlarmAvailable();
    if (v3 == 0) {
        OS_Terminate();
    }
    GX_VBlankIntr(0);
    func_020023fc();
    FS_Init((0 - 1));
    TP_Init();
    RTC_Init();
    GX_DispOff();
    t2 = (*(s32 *)(((u8 *)0x4001000)) & -0x10001);
    *(s32 *)(((u8 *)0x4001000)) = t2;
    func_ov016_02151788(t2, 0x4001000);
    t3 = *(s32 *)(data_ov016_02158a4c + 0x4);
    func_ov016_02150874(t3);
    func_ov016_0215118c();
    func_ov016_02151998();
    func_ov016_0214ed80();
    func_ov016_021509cc();
    func_ov016_0214fa30();
    v18 = DWCi_HEAPlAllocEx(0x700, 0x20);
    *(s32 *)(((u8 *)local)) = v18;
    DWC_BM_Init();
    v20 = DWCi_HEAPlFree_((s32)((u8 *)local));
    return v20;
}

extern "C" asm s32 initGraph(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r0, #0
    bl GX_VBlankIntr
    mov r0, #1
    bl GX_SetBankForBG
    mov r0, #2
    bl GX_SetBankForOBJ
    mov r1, #0
    mov r0, #1
    mov r2, r1
    bl GX_SetGraphicsMode
    mov r10, #0x4000000
    ldr r1, [r10]
    add r0, r10, #0x6c
    bic r1, r1, #0x1f00
    str r1, [r10]
    ldr r2, [r10]
    mov r1, #0
    bic r2, r2, #0xe000
    str r2, [r10]
    bl GXx_SetMasterBrightness_
    ldr r1, [r10]
    ldr r4, =0xffcfffef
    ldr r11, =0xffbf
    and r1, r1, r4
    orr r1, r1, #0x10
    orr r1, r1, #0x200000
    str r1, [r10]
    ldrh r1, [r10, #8]
    ldr r0, =0x200010
    and r1, r1, r11
    strh r1, [r10, #8]
    ldrh r2, [r10, #0xa]
    add r5, r0, #0x3e00000
    add r0, r10, #0x50
    and r2, r2, r11
    strh r2, [r10, #0xa]
    ldrh r3, [r10, #0xc]
    mov r1, #0x3f
    mov r2, #0x10
    and r3, r3, r11
    strh r3, [r10, #0xc]
    ldrh r3, [r10, #0xe]
    and r3, r3, r11
    strh r3, [r10, #0xe]
    mov r3, #0
    str r3, [r5]
    str r3, [r10, #0x14]
    str r3, [r10, #0x18]
    str r3, [r10, #0x1c]
    bl G2x_SetBlendBrightness_
    mov r0, #0x80
    bl GX_SetBankForSubBG
    mov r0, #0x100
    bl GX_SetBankForSubOBJ
    mov r0, #0
    bl GXS_SetGraphicsMode
    add r9, r10, #0x1000
    ldr r0, [r9]
    ldr r8, =0x400106c
    bic r0, r0, #0x1f00
    str r0, [r9]
    ldr r1, [r9]
    mov r0, r8
    bic r1, r1, #0xe000
    str r1, [r9]
    mov r1, #0
    bl GXx_SetMasterBrightness_
    ldr r0, [r9]
    sub r7, r8, #0x64
    and r0, r0, r4
    orr r0, r0, #0x10
    str r0, [r9]
    ldrh r0, [r7]
    sub r6, r8, #0x62
    sub r5, r8, #0x60
    and r0, r0, r11
    strh r0, [r7]
    ldrh r0, [r6]
    sub r4, r8, #0x5e
    mov r1, #0x3f
    and r0, r0, r11
    strh r0, [r6]
    ldrh r3, [r5]
    mov r2, #0x10
    sub r0, r8, #0x1c
    and r3, r3, r11
    strh r3, [r5]
    ldrh r3, [r4]
    and r3, r3, r11
    strh r3, [r4]
    mov r3, #0
    str r3, [r8, #-0x5c]
    str r3, [r8, #-0x58]
    str r3, [r8, #-0x54]
    str r3, [r8, #-0x50]
    bl G2x_SetBlendBrightness_
    ldrh r0, [r10, #8]
    and r0, r0, #0x43
    orr r0, r0, #0xc00
    strh r0, [r10, #8]
    ldrh r0, [r10, #0xa]
    and r0, r0, #0x43
    orr r0, r0, #0x108
    orr r0, r0, #0xc00
    strh r0, [r10, #0xa]
    ldrh r0, [r10, #0xc]
    and r0, r0, #0x43
    orr r0, r0, #0xe10
    strh r0, [r10, #0xc]
    ldrh r0, [r10, #0xe]
    and r0, r0, #0x43
    orr r0, r0, #0xf10
    strh r0, [r10, #0xe]
    ldrh r0, [r7]
    and r0, r0, #0x43
    orr r0, r0, #0xc00
    strh r0, [r7]
    ldrh r0, [r6]
    and r0, r0, #0x43
    orr r0, r0, #0xd00
    strh r0, [r6]
    ldrh r0, [r5]
    and r0, r0, #0x43
    orr r0, r0, #0xe00
    strh r0, [r5]
    ldrh r0, [r4]
    and r0, r0, #0x43
    orr r0, r0, #0xf00
    strh r0, [r4]
    ldr r0, [r10]
    add r1, r10, #0x304
    bic r0, r0, #0x38000000
    str r0, [r10]
    ldr r0, [r10]
    bic r0, r0, #0x7000000
    str r0, [r10]
    ldrh r0, [r1]
    bic r0, r0, #0x8000
    strh r0, [r1]
    bl DWCi_FNTlInit
    bl DWCi_OBJlInit
    bl DWCi_OVRlInit
    bl DWCi_CELLlInit
    bl GX_DispOn
    ldr r1, [r9]
    mov r0, #1
    orr r1, r1, #0x10000
    str r1, [r9]
    bl GX_VBlankIntr
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 procEnd(void)
{
    s32 v13;
    s32 t0;
    GX_DispOff();
    t0 = (*(s32 *)(((u8 *)0x4001000)) & -0x10001);
    *(s32 *)(((u8 *)0x4001000)) = t0;
    DWCi_SetLedNormal(t0, 0x4001000);
    PM_SetLCDPower(1);
    DWCi_IPTlEnd();
    DWCi_ITRlEnd();
    DWCi_SNDlEnd();
    DWCi_CELLlEnd();
    DWCi_OBJlEnd();
    DWCi_FNTlEnd();
    DWCi_EFFlEnd();
    DWCi_ARClEnd();
    DWCi_TSKlEnd();
    DWCi_HEAPlEnd();
    v13 = DWCi_RepairVram();
    return v13;
}

extern "C" void DWCi_ChangeScene(s32 arg0)
{
    *(s32 *)(data_ov016_02158a4c + 0xC) = arg0;
}

extern "C" void DWCi_SetParam_(s32 arg0, s32 arg1)
{
    *(s32 *)(data_ov016_02158a4c + 0x10) = arg0;
    *(s32 *)(data_ov016_02158a4c + 0x14) = arg1;
}

extern "C" s32 DWCi_GetParam_(u8 *arg0, u8 *arg1)
{
    s32 t0;
    s32 t1;
    if ((s32)arg0 != 0) {
        t0 = *(s32 *)(data_ov016_02158a4c + 0x10);
        *(s32 *)(arg0) = t0;
    }
    if ((s32)arg1 != 0) {
        t1 = *(s32 *)(data_ov016_02158a4c + 0x14);
        *(s32 *)(arg1) = t1;
        arg0 = (u8 *)t1;
    }
    return (s32)arg0;
}

extern "C" void DWCi_SetParam2_(s32 arg0, s32 arg1)
{
    *(s32 *)(data_ov016_02158a4c + 0x18) = arg0;
    *(s32 *)(data_ov016_02158a4c + 0x1C) = arg1;
}

extern "C" s32 DWCi_GetParam2_(u8 *arg0, u8 *arg1)
{
    s32 t0;
    s32 t1;
    if ((s32)arg0 != 0) {
        t0 = *(s32 *)(data_ov016_02158a4c + 0x18);
        *(s32 *)(arg0) = t0;
    }
    if ((s32)arg1 != 0) {
        t1 = *(s32 *)(data_ov016_02158a4c + 0x1C);
        *(s32 *)(arg1) = t1;
        arg0 = (u8 *)t1;
    }
    return (s32)arg0;
}

extern "C" u8 DWCi_Language(void)
{
    return *(u8 *)(data_ov016_02158a4c);
}

extern "C" s32 DWCi_Entry(void)
{
    return ((u32)(*(s32 *)(data_ov016_02158a4c + 0x8) << 0x1C) >> 0x1C);
}

extern "C" s32 DWCi_Flag(s32 arg0)
{
    if ((arg0 & ((u32)*(s32 *)(data_ov016_02158a4c + 0x8) >> 4)) != 0) {
        arg0 = 1;
    } else {
        arg0 = 0;
    }
    return arg0;
}

extern "C" char *DWCi_EndUtility(void)
{
    *(u8 *)(data_ov016_02158a4c + 0x1) = 1;
    return data_ov016_02158a4c;
}

extern "C" s32 kDWCi_Language(void)
{
    u8 *r0;
    s32 r1;
    if (*(u8 *)(data_ov016_02158a4c) == 6)
        return 0x38;
    r0 = (u8 *)data_ov016_02158a4c;
    r1 = *(u8 *)(data_ov016_02158a4c);
    if (r1 == 1) {
        if ((((u32)*(s32 *)(r0 + 0x8) >> 4) & 2) == 0)
            return 0x37;
    }
    return ((r1 + 0x31) & 0xFF);
}

extern "C" void func_ov016_0213b474(void)
{
    s32 v0 = DWCi_HEAPlAllocEx(0x64, 4);
    *(s32 *)(data_ov016_02158a6c) = v0;
    s32 v1 = DWCi_QUElFormEx(8, v0, 0xC);
    *(s32 *)(*(u8 * *)(data_ov016_02158a6c) + 0x60) = v1;
}

extern "C" void DWCi_MSGlEnd(void)
{
    DWCi_HEAPlFree_((s32)data_ov016_02158a6c);
}

extern "C" u8 *func_ov016_0213b4c0(s32 arg0)
{
    s32 size;
    u8 *e = ((u8 *(*)(s32))DWCi_QUElPopBack)(*(s32 *)(*(u8 **)data_ov016_02158a6c + 0x60));
    u8 *d = ((u8 *(*)(s32, s32 *, s32))DWCi_ARClReadEx)(arg0, &size, 4);
    u8 *h = d + 0x20;
    *(u8 **)(e + 8) = d;
    *(u8 **)e = h + 0x10;
    *(u8 **)(e + 4) = h + *(s32 *)(h + 4) + 8;
    return e;
}

extern "C" void DWCi_MSGlRelease(u8 *arg0)
{
    DWCi_ARClRelease(*(s32 *)(arg0 + 0x8));
    DWCi_QUElPushBack(*(s32 *)(*(u8 * *)(data_ov016_02158a6c) + 0x60), (s32)arg0);
}

extern "C" s32 DWCi_MSGlGet(u8 *arg0, s32 arg1)
{
    return (*(s32 *)(arg0 + 0x4) + *(s32 *)(*(u8 * *)(arg0) + (((u16)arg1) << 2)));
}

extern "C" s32 DWCi_MSGlGetEx(u8 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    arg0 = (u8 *)(*(s32 *)(arg0 + 0x4) + *(s32 *)(*(u8 * *)(arg0) + (((u16)arg1) << 2)));
    if (arg2 >= 0) {
        *(u16 *)(arg0 + (arg2 << 1)) = (arg3 + 0x30);
    }
    return (s32)arg0;
}

extern "C" s32 DWCi_MOVlInit(s32 arg0)
{
    s32 local[7];
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;
    s32 v5;
    s32 v7;
    u8 *t0;
    u8 *t1;
    s32 t2;
    s32 t3;
    s32 t4;
    u8 *t5;
    v0 = DWCi_HEAPlAllocEx(0x1E2A4, 0x20);
    *(s32 *)(((u8 *)&data_ov016_02158a70)) = v0;
    *(s32 *)(((u8 *)(v0 + 0x1E000)) + 0x298) = arg0;
    t0 = (u8 *)(*(s32 *)(((u8 *)&data_ov016_02158a70)) + 0x1E000);
    *(u8 *)(t0 + 0x2A0) = 0;
    t1 = (u8 *)(*(s32 *)(((u8 *)&data_ov016_02158a70)) + 0x1E000);
    *(u8 *)(t1 + 0x2A1) = 0;
    *(WN<7> *)(((u8 *)local)) = *(WN<7> *)(((u8 *)&data_ov016_021555a0));
    t2 = *(s32 *)(((u8 *)&DWCiMsgCmn));
    v1 = DWCi_MSGlGet((u8 *)t2, 0);
    *(s32 *)(((u8 *)local) + 0x4) = v1;
    t3 = *(s32 *)(((u8 *)&DWCiMsgCmn));
    v2 = DWCi_MSGlGet((u8 *)t3, 1);
    *(s32 *)(((u8 *)local) + 0x8) = v2;
    v3 = kDWCi_Language();
    *(u8 *)(((u8 *)local) + 0x18) = v3;
    t4 = *(s32 *)(((u8 *)&data_ov016_02158a70));
    DWCi_MOVInit(t4, (s32)((u8 *)local));
    v5 = DWCi_MOVStartAdmitChild();
    if (v5 == 0) {
        OS_Terminate();
    }
    v7 = DWCi_TSKlForm(0, (s32)((u8 *)&taskFramework), 0, 0x78);
    t5 = (u8 *)(*(s32 *)(((u8 *)&data_ov016_02158a70)) + 0x1E000);
    *(s32 *)(t5 + 0x29C) = v7;
    return v7;
}

extern "C" void DWCi_MOVlEnd(void)
{
    DWCi_TSKlForm(0, (s32)taskEnd_2, 0, 0x78);
}

extern "C" void taskEnd_2(s32 arg0)
{
    s32 v0 = DWCi_MOVFinalize(arg0);
    if (v0 == 0)
        return;
    u8 *t0 = (u8 *)(*(s32 *)(data_ov016_02158a70) + 0x1E000);
    *(u8 *)(t0 + 0x2A1) = 1;
    DWCi_TSKlDelete(0, arg0, (s32)t0, 1);
}

extern "C" s32 DWCi_MOVlIsEnd(void)
{
    return (*(s32 *)(data_ov016_02158a70) == 0 ? 1 : 0);
}

extern "C" void DWCi_MOVlChangeCallback(s32 arg0)
{
    *(s32 *)(((u8 *)(*(s32 *)(data_ov016_02158a70) + 0x1E000)) + 0x298) = arg0;
}

extern "C" void DWCi_MOVlAdmitChild(void)
{
    DWCi_MOVStartDownloadandBootChild();
}

extern "C" s32 DWCi_MOVlGetChild(void)
{
    return ((*(s32 *)(data_ov016_02158a70) + 0x2280) + 0x1C000);
}

extern "C" asm void taskFramework(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    mov r5, r0
    mov r4, #1
    bl DWCi_MOVFramework
    ldr r6, =data_ov016_02158a70
    ldr r0, [r6]
    add r0, r0, #0x1e000
    ldrb r1, [r0, #0x2a0]
    cmp r1, #0
    beq @L_0213b77c
    ldrb r1, [r0, #0x2a1]
    cmp r1, #0
    bne @L_0213b77c
    ldr r1, [r0, #0x298]
    cmp r1, #0
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    mov r0, #0
    blx r1
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0213b77c:
    add r0, sp, #1
    add r1, sp, #0
    bl DWCi_MOVGetStatus
    ldrb r0, [sp, #1]
    cmp r0, #0x1a
    bgt @L_0213b810
    bge @L_0213b900
    cmp r0, #0x14
    bgt @L_0213b800
    cmp r0, #0
    addge pc, pc, r0, lsl #2
    b @L_0213b98c
    b @L_0213b98c
    b @L_0213b98c
    b @L_0213b98c
    b @L_0213b98c
    b @L_0213b98c
    b @L_0213b834
    b @L_0213b98c
    b @L_0213b98c
    b @L_0213b98c
    b @L_0213b98c
    b @L_0213b98c
    b @L_0213b98c
    b @L_0213b93c
    b @L_0213b888
    b @L_0213b98c
    b @L_0213b98c
    b @L_0213b98c
    b @L_0213b98c
    b @L_0213b98c
    b @L_0213b98c
    b @L_0213b8c4
@L_0213b800:
    cmp r0, #0x17
    beq @L_0213b8c4
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0213b810:
    cmp r0, #0x1d
    bgt @L_0213b824
    beq @L_0213b900
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0213b824:
    cmp r0, #0x22
    beq @L_0213b978
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0213b834:
    ldrb r0, [sp]
    cmp r0, #0
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    ldr r0, [r6]
    add r5, r0, #0x2280
    bl DWCi_GetChildInfo
    add r1, r5, #0x1c000
    mov r2, #0x16
    bl MIi_CpuCopy16
    ldr r0, [r6]
    add r0, r0, #0x1e000
    ldr r1, [r0, #0x298]
    cmp r1, #0
    addeq sp, sp, #4
    streqb r4, [r0, #0x2a0]
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    mov r0, #0
    blx r1
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0213b888:
    ldrb r0, [sp]
    cmp r0, #0
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    ldr r0, [r6]
    add r0, r0, #0x1e000
    ldr r1, [r0, #0x298]
    cmp r1, #0
    addeq sp, sp, #4
    streqb r4, [r0, #0x2a0]
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    mov r0, #1
    blx r1
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0213b8c4:
    ldrb r0, [sp]
    cmp r0, #0
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    ldr r0, [r6]
    add r0, r0, #0x1e000
    ldr r1, [r0, #0x298]
    cmp r1, #0
    addeq sp, sp, #4
    streqb r4, [r0, #0x2a0]
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    mov r0, #3
    blx r1
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0213b900:
    ldrb r0, [sp]
    cmp r0, #0
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    ldr r0, [r6]
    add r0, r0, #0x1e000
    ldr r1, [r0, #0x298]
    cmp r1, #0
    addeq sp, sp, #4
    streqb r4, [r0, #0x2a0]
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    mov r0, #4
    blx r1
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0213b93c:
    ldrb r0, [sp]
    cmp r0, #0
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    ldr r0, [r6]
    add r0, r0, #0x1e000
    ldr r1, [r0, #0x298]
    cmp r1, #0
    addeq sp, sp, #4
    streqb r4, [r0, #0x2a0]
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    mov r0, #2
    blx r1
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0213b978:
    mov r1, r5
    mov r0, #0
    bl DWCi_TSKlDelete
    ldr r0, =data_ov016_02158a70_b
    bl DWCi_HEAPlFree_
@L_0213b98c:
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" s32 DWCi_RAKUlInit(void)
{
    s32 v0;
    s32 v1;
    s32 v3;
    v0 = DWCi_HEAPlAllocEx(0xC, (0xC - 0x10));
    *(s32 *)(data_ov016_02158a74) = v0;
    v1 = func_ov016_02136b6c(0xF, 0x40, (s32)cbConfig, (s32)memAlloc, (s32)memFree, 0x800);
    if (v1 != 1) {
        OS_Terminate();
    }
    v3 = OS_Sleep(10);
    return v3;
}

extern "C" s32 DWCi_RAKUlEnd(void)
{
    s32 v0;
    s32 v2;
    v0 = func_ov016_02136c54();
    if (v0 != 1) {
        OS_Terminate();
    }
    v2 = DWCi_HEAPlFree_((s32)data_ov016_02158a74);
    return v2;
}

extern "C" asm void DWCi_RAKUlGetState(void)
{
    stmdb sp!, {r3, lr}
    sub sp, sp, #0xe8
    ldr r1, =data_ov016_02158a74
    ldr r1, [r1]
    ldr r1, [r1]
    cmp r1, #7
    addls pc, pc, r1, lsl #2
    b @L_0213bad8
    b @L_0213ba6c
    b @L_0213ba6c
    b @L_0213ba78
    b @L_0213ba6c
    b @L_0213ba84
    b @L_0213ba6c
    b @L_0213ba90
    b @L_0213bad4
@L_0213ba6c:
    add sp, sp, #0xe8
    mov r0, #0
    ldmia sp!, {r3, pc}
@L_0213ba78:
    add sp, sp, #0xe8
    mov r0, #1
    ldmia sp!, {r3, pc}
@L_0213ba84:
    add sp, sp, #0xe8
    mov r0, #2
    ldmia sp!, {r3, pc}
@L_0213ba90:
    add r0, sp, #0
    bl func_ov016_02136d20
    cmp r0, #1
    beq @L_0213baa4
    bl OS_Terminate
@L_0213baa4:
    ldr r0, [sp, #0x20]
    cmp r0, #0
    blt @L_0213bac8
    cmp r0, #3
    ldrle r0, [sp, #0x24]
    cmple r0, #1
    addeq sp, sp, #0xe8
    moveq r0, #3
    ldmeqia sp!, {r3, pc}
@L_0213bac8:
    add sp, sp, #0xe8
    mov r0, #5
    ldmia sp!, {r3, pc}
@L_0213bad4:
    mov r0, #4
@L_0213bad8:
    add sp, sp, #0xe8
    ldmia sp!, {r3, pc}
}

extern "C" void DWCi_RAKUlSetResult(void)
{
    u8 buf[0xE8];
    if (((s32 (*)(u8 *))func_ov016_02136d20)(buf) != 1)
        ((void (*)(void))OS_Terminate)();
    ((void (*)(u8 *))DWCi_SETTINGlSetRaku)(buf);
}

extern "C" asm void cbConfig(void)
{
    ldr r3, =data_ov016_02158a74
    ldmia r0, {r0, r1, r2}
    ldr r3, [r3]
    stmia r3, {r0, r1, r2}
    bx lr
}

extern "C" void memAlloc(s32 arg0)
{
    DWCi_HEAPlAllocEx(arg0, 0x20);
}

extern "C" void memFree(void)
{
    DWCi_HEAPlFree2();
}

extern "C" void DWCi_SceneEnd(void)
{
    DWCi_EFFlFade(3, 1, 0x3F, 0x14);
    DWCi_EFFlFade(3, 0, 0x3F, 0x14);
    DWCi_ChangeScene((s32)endScene);
}

extern "C" void endScene(void)
{
    s32 v0 = DWCi_EFFlCheck(1);
    if (v0 != 0)
        return;
    s32 v1 = DWCi_EFFlCheck(0);
    if (v1 != 0)
        return;
    DWCi_TSKlOperate(0, 0);
    DWCi_TSKlOperate(1, 0);
    DWCi_CEINlRelease(1);
    DWCi_CEINlRelease(0);
    DWCi_HLlEnd();
    DWCi_FOCUSlEnd();
    DWCi_MSGlRelease((u8 *)*(s32 *)(DWCiMsgCmn));
    DWCi_MSGlEnd();
    DWCi_SETTIGNlEnd();
    DWCi_EndUtility();
}

extern "C" asm void func_ov016_0213bc08(void)
{
    stmdb sp!, {r4, lr}
    bl func_ov016_021498c4
    bl func_ov016_0213b474
    bl func_ov016_02137914
    bl func_ov016_02137b18
    bl func_ov016_0213757c
    bl DWCi_Language
    cmp r0, #1
    bne @L_0213bc44
    mov r0, #2
    bl DWCi_Flag
    cmp r0, #0
    beq @L_0213bc44
    ldr r0, =data_ov016_02155648
    b @L_0213bc50
@L_0213bc44:
    bl DWCi_Language
    ldr r1, =data_ov016_0215562c
    ldr r0, [r1, r0, lsl #2]
@L_0213bc50:
    bl func_ov016_0213b4c0
    ldr r1, =DWCiMsgCmn
    str r0, [r1]
    ldr r0, =data_ov016_02155658
    bl DWCi_Char
    mov r1, r0
    mov r0, #1
    bl func_ov016_0214f794
    ldr r0, =data_ov016_0215566c
    bl DWCi_Char
    mov r1, r0
    mov r0, #0
    bl func_ov016_0214f794
    ldr r0, =data_ov016_02155680
    ldr r1, =GXS_LoadBG1Char
    bl DWCi_CMNlLoadResource
    ldr r0, =data_ov016_02155694
    ldr r1, =GXS_LoadBGPltt
    bl DWCi_CMNlLoadResource
    ldr r0, =data_ov016_021556a8
    ldr r1, =GXS_LoadOBJ
    bl DWCi_CMNlLoadResource
    ldr r0, =data_ov016_021556c0
    ldr r1, =GXS_LoadOBJPltt
    bl DWCi_CMNlLoadResource
    ldr r0, =data_ov016_021556d8
    ldr r1, =GX_LoadBG2Char
    bl DWCi_CMNlLoadResource
    ldr r0, =data_ov016_021556f0
    ldr r1, =GX_LoadBGPltt
    bl DWCi_CMNlLoadResource
    ldr r0, =data_ov016_02155708
    ldr r1, =GX_LoadOBJ
    bl DWCi_CMNlLoadResource
    ldr r0, =data_ov016_02155720
    ldr r1, =GX_LoadOBJPltt
    bl DWCi_CMNlLoadResource
    bl DWCi_Entry
    cmp r0, #0
    beq @L_0213bcfc
    cmp r0, #1
    beq @L_0213bd04
    b @L_0213bd10
@L_0213bcfc:
    ldr r0, =data_ov016_02155738
    b @L_0213bd08
@L_0213bd04:
    ldr r0, =data_ov016_0215574c
@L_0213bd08:
    ldr r1, =GXS_LoadBG1Scr
    bl DWCi_CMNlLoadResource
@L_0213bd10:
    ldr r2, =0x400100a
    mov r4, #2
    ldrh r0, [r2]
    sub r3, r2, #0x1000
    mov r1, r4
    bic r0, r0, #3
    orr r0, r0, #3
    strh r0, [r2]
    ldrh r2, [r3]
    mov r0, #1
    bic r2, r2, #3
    orr r2, r2, #3
    strh r2, [r3]
    ldrh r2, [r3]
    bic r2, r2, #3
    orr r2, r2, #3
    strh r2, [r3]
    bl DWCi_GXlVisible
    mov r1, r4
    mov r0, #0
    bl DWCi_GXlVisible
    ldr r0, =procFade
    bl DWCi_ChangeScene
    ldmia sp!, {r4, pc}
}

extern "C" void procFade(void)
{
    DWCi_EFFlFade(2, 1, 2, 0x14);
    DWCi_EFFlFade(2, 0, 2, 0x14);
    DWCi_ChangeScene((s32)procWait);
}

extern "C" s32 procWait(void)
{
    s32 r0;
    s32 r4;
    s32 r5;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v4;
    s32 v6;
    r5 = 1;
    v0 = DWCi_EFFlCheck(1);
    if (v0 != 0)
        return v0;
    r4 = 0;
    v1 = DWCi_EFFlCheck(0);
    if (v1 != 0)
        return v1;
    v2 = DWCi_Entry();
    r0 = v2;
    switch (r0) {
        default:
            return r0;
        case 0:
            DWCi_SetParam_(r4, r5);
            v4 = ((s32 (*)(...))DWCi_ChangeScene)((s32)((u8 *)&DWCi_SceneMenu));
            return v4;
        case 1:
            DWCi_SetParam_(r5, r5);
            v6 = ((s32 (*)(...))DWCi_ChangeScene)((s32)((u8 *)&DWCi_SceneSetSelectAp));
            return v6;
    }
}

extern "C" void DWCi_SceneMenu(void)
{
    u16 t0;
    u16 t1;
    u16 t2;
    u16 t3;
    initGraphics();
    DWCi_HLlLoad(0);
    DWCi_COMMENTlDispEx(0x2E, (0x2E - 0x2F), 0);
    DWCi_STEPlChangeScr(4);
    t0 = *(u16 *)(data_ov016_02154984 + (*(u8 *)(data_ov016_02158a7c) << 3));
    t1 = *(u16 *)(data_ov016_0215498a + (*(u8 *)(data_ov016_02158a7c) << 3));
    t2 = *(u16 *)(data_ov016_02154988 + (*(u8 *)(data_ov016_02158a7c) << 3));
    t3 = *(u16 *)(data_ov016_02154986 + (*(u8 *)(data_ov016_02158a7c) << 3));
    DWCi_FOCUSlDisp4(t0, t2, t3, t1);
    DWCi_ChangeScene((s32)procInit);
    return;
}

extern "C" asm s32 initGraphics(...)
{
    stmdb sp!, {r3, lr}
    sub sp, sp, #0x18
    ldr r12, =data_ov016_02154994
    add r3, sp, #0
    mov r2, #0xb
@L_0213bf2c:
    ldrb r0, [r12, #1]
    ldrb r1, [r12], #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_0213bf2c
    ldr r0, =data_ov016_02155760
    ldr r1, =GX_LoadBG2Char
    bl DWCi_CMNlLoadResource
    ldr r0, =data_ov016_02155778
    ldr r1, =GX_LoadBGPltt
    bl DWCi_CMNlLoadResource
    ldr r0, =data_ov016_02155790
    ldr r1, =GX_LoadBG2Scr
    bl DWCi_CMNlLoadResource
    add r0, sp, #0
    bl DWCi_Char
    mov r1, #0
    mov r2, #4
    bl DWCi_ARClReadEx
    ldr r1, =data_ov016_02158a7c
    ldr r2, =0x4001008
    str r0, [r1, #4]
    ldrh r0, [r2]
    ldr r1, =0x400000a
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
    add sp, sp, #0x18
    ldmia sp!, {r3, pc}
}

extern "C" void procInit(void)
{
    DWCi_EFFlFade(2, 1, 1, 8);
    DWCi_EFFlFade(2, 0, 0x14, 8);
    DWCi_GXlVisible(1, 1);
    DWCi_GXlVisible(0, 0x14);
    DWCi_ChangeScene((s32)procInit1);
}

extern "C" void procInit1(void)
{
    s32 v0 = DWCi_EFFlCheck(1);
    if (v0 != 0)
        return;
    s32 v1 = DWCi_EFFlCheck(0);
    if (v1 != 0)
        return;
    DWCi_CMNlButton(0);
    DWCi_ChangeScene((s32)procInit2);
}

extern "C" void procInit2(void)
{
    s32 v0 = DWCi_BTNlGet();
    if (v0 == -2)
        return;
    DWCi_BTNlEnable();
    DWCi_ChangeScene((s32)procScene);
}

extern "C" void procScene(void)
{
    input();
    func_ov016_0213c20c();
    button();
}

extern "C" asm s32 input(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r5, =data_ov016_02154974
    mov r4, #0
@L_0213c0e8:
    add r0, r5, r4, lsl #3
    bl DWCi_TPlCheckTrigger
    cmp r0, #0
    beq @L_0213c138
    mov r0, #1
    bl DWCi_BTNlSet
    and r1, r4, #0xff
    mov r5, r1, lsl #3
    ldr r0, =data_ov016_02154984
    ldr r1, =data_ov016_02154988
    ldr r2, =data_ov016_02154986
    ldr r3, =data_ov016_0215498a
    ldr r12, =data_ov016_02158a7c
    ldrh r0, [r0, r5]
    ldrh r1, [r1, r5]
    ldrh r2, [r2, r5]
    ldrh r3, [r3, r5]
    strb r4, [r12]
    bl DWCi_FOCUSlDisp4
    ldmia sp!, {r3, r4, r5, pc}
@L_0213c138:
    add r4, r4, #1
    cmp r4, #2
    blo @L_0213c0e8
    mov r5, #1
    mov r0, r5
    bl DWCi_IPTlCheckTrigger
    cmp r0, #0
    beq @L_0213c164
    mov r0, r5
    bl DWCi_BTNlSet
    ldmia sp!, {r3, r4, r5, pc}
@L_0213c164:
    mov r4, #2
    mov r0, r4
    bl DWCi_IPTlCheckTrigger
    cmp r0, #0
    beq @L_0213c184
    mov r0, #0
    bl DWCi_BTNlSet
    ldmia sp!, {r3, r4, r5, pc}
@L_0213c184:
    mov r0, #0x40
    bl DWCi_IPTlCheckRepeat
    cmp r0, #0
    beq @L_0213c1a0
    mov r0, r5
    bl moveFocus_3
    ldmia sp!, {r3, r4, r5, pc}
@L_0213c1a0:
    mov r0, #0x80
    bl DWCi_IPTlCheckRepeat
    cmp r0, #0
    beq @L_0213c1bc
    mov r0, #3
    bl moveFocus_3
    ldmia sp!, {r3, r4, r5, pc}
@L_0213c1bc:
    mov r0, #0x20
    bl DWCi_IPTlCheckRepeat
    cmp r0, #0
    beq @L_0213c1d8
    mov r0, #0
    bl moveFocus_3
    ldmia sp!, {r3, r4, r5, pc}
@L_0213c1d8:
    mov r0, #0x10
    bl DWCi_IPTlCheckRepeat
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r0, r4
    bl moveFocus_3
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void func_ov016_0213c20c(void)
{
}

extern "C" asm s32 button(...)
{
    stmdb sp!, {r3, lr}
    bl DWCi_BTNlGet
    cmp r0, #0
    beq @L_0213c22c
    cmp r0, #1
    beq @L_0213c240
    ldmia sp!, {r3, pc}
@L_0213c22c:
    mov r0, #7
    bl DWCi_SNDlPlay
    ldr r0, =DWCi_SceneEnd
    bl DWCi_ChangeScene
    ldmia sp!, {r3, pc}
@L_0213c240:
    mov r0, #6
    bl DWCi_SNDlPlay
    bl dispPushButton
    ldr r0, =endScene_2
    bl DWCi_ChangeScene
    ldmia sp!, {r3, pc}
}

extern "C" void endScene_2(void)
{
    DWCi_BTNlDisable();
    DWCi_EFFlWait(8);
    DWCi_ChangeScene((s32)endScene1);
}

extern "C" void endScene1(void)
{
    s32 v0 = DWCi_EFFlCheck(1);
    if (v0 != 0)
        return;
    DWCi_EFFlFade(3, 1, 1, 8);
    DWCi_EFFlFade(3, 0, 0x16, 8);
    DWCi_ChangeScene((s32)endScene2);
}

extern "C" s32 endScene2(void)
{
    s32 r0;
    s32 r5;
    s32 r6;
    s32 v0;
    s32 v1;
    s32 v8;
    s32 v10;
    s32 t0;
    r6 = 1;
    v0 = DWCi_EFFlCheck(1);
    if (v0 != 0)
        return v0;
    r5 = 0;
    v1 = DWCi_EFFlCheck(0);
    if (v1 != 0)
        return v1;
    DWCi_FOCUSlDelete();
    DWCi_COMMENTlDelete();
    t0 = *(s32 *)(((u8 *)&data_ov016_02158a7c) + 0x4);
    DWCi_ARClRelease(t0);
    DWCi_GXlInvisible(1, 1);
    DWCi_GXlInvisible(0, 0x14);
    r0 = *(u8 *)(((u8 *)&data_ov016_02158a7c));
    switch (r0) {
        default:
            return r0;
        case 0:
            DWCi_SetParam_(r6, r5);
            v8 = ((s32 (*)(...))DWCi_ChangeScene)((s32)((u8 *)&DWCi_SceneSetSelectAp));
            return v8;
        case 1:
            DWCi_SetParam_(r5, r5);
            v10 = ((s32 (*)(...))DWCi_ChangeScene)((s32)((u8 *)&DWCi_SceneOptMenu));
            return v10;
    }
}

extern "C" s32 moveFocus_3(s32 arg0)
{
    s32 v1;
    s32 t0;
    u16 t1;
    u16 t3;
    u16 t4;
    u16 t5;
    if ((arg0 == 1 || arg0 == 3))
        return arg0;
    t0 = (*(u8 *)(data_ov016_02158a7c) ^ 1);
    *(u8 *)(data_ov016_02158a7c) = t0;
    DWCi_SNDlPlay(8, t0);
    t1 = *(u16 *)(data_ov016_02154984 + (*(u8 *)(data_ov016_02158a7c) << 3));
    t3 = *(u16 *)(data_ov016_02154986 + (*(u8 *)(data_ov016_02158a7c) << 3));
    t4 = *(u16 *)(data_ov016_02154988 + (*(u8 *)(data_ov016_02158a7c) << 3));
    t5 = *(u16 *)(data_ov016_0215498a + (*(u8 *)(data_ov016_02158a7c) << 3));
    v1 = DWCi_FOCUSlDisp4(t1, t4, t3, t5);
    return v1;
}

extern "C" asm void dispPushButton(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, =data_ov016_02154970
    ldr r0, =data_ov016_02158a7c
    ldrb r3, [r1]
    ldrb r2, [r1, #1]
    ldrb r1, [r0]
    add r12, sp, #0
    strb r3, [sp]
    strb r2, [sp, #1]
    ldrb r1, [r12, r1]
    ldr r0, [r0, #4]
    mov r2, r1
    bl DWCi_SCREENlCopyPalette
    ldmia sp!, {r3, pc}
}

extern "C" void DWCi_SceneOptErase(void)
{
    *(u8 *)(data_ov016_02158a84) = 0;
    initGraphics_2((s32)data_ov016_02158a84);
    DWCi_HLlLoad(0x12);
    DWCi_COMMENTlDispEx(0x3B, (0x3B - 0x3C), 0);
    DWCi_CMNlMsgDraw(0x17);
    DWCi_ChangeScene((s32)procInit_2);
}

extern "C" asm s32 initGraphics_2(...)
{
    stmdb sp!, {r3, lr}
    ldr r0, =data_ov016_021557a4
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

extern "C" void procInit_2(void)
{
    DWCi_EFFlFade(2, 1, 1, 8);
    DWCi_EFFlFade(2, 0, 0x15, 8);
    DWCi_GXlVisible(1, 1);
    DWCi_GXlVisible(0, 0x15);
    DWCi_ChangeScene((s32)procInit1_2);
}

extern "C" void procInit1_2(void)
{
    s32 v0 = DWCi_EFFlCheck(1);
    if (v0 != 0)
        return;
    s32 v1 = DWCi_EFFlCheck(0);
    if (v1 != 0)
        return;
    DWCi_CMNlButton(3);
    DWCi_ChangeScene((s32)procInit2_2);
}

extern "C" void procInit2_2(void)
{
    s32 v0 = DWCi_BTNlGet();
    if (v0 == -2)
        return;
    DWCi_BTNlEnable();
    DWCi_ChangeScene((s32)procScene_2);
}

extern "C" void procScene_2(void)
{
    input_2();
    draw_2();
    button_2();
}

extern "C" asm s32 input_2(...)
{
    stmdb sp!, {r4, lr}
    mov r4, #1
    mov r0, r4
    bl DWCi_IPTlCheckTrigger
    cmp r0, #0
    beq @L_0213c5f4
    mov r0, r4
    bl DWCi_BTNlSet
@L_0213c5f4:
    mov r0, #2
    bl DWCi_IPTlCheckTrigger
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    mov r0, #0
    bl DWCi_BTNlSet
    ldmia sp!, {r4, pc}
}

extern "C" void draw_2(void)
{
}

extern "C" asm s32 button_2(...)
{
    stmdb sp!, {r3, lr}
    bl DWCi_BTNlGet
    cmp r0, #0
    beq @L_0213c630
    cmp r0, #1
    beq @L_0213c644
    ldmia sp!, {r3, pc}
@L_0213c630:
    mov r0, #7
    bl DWCi_SNDlPlay
    ldr r0, =endScene_3
    bl DWCi_ChangeScene
    ldmia sp!, {r3, pc}
@L_0213c644:
    mov r0, #6
    bl DWCi_SNDlPlay
    mov r2, #1
    mov r1, #0
    sub r3, r2, #2
    mov r0, #0x18
    str r1, [sp]
    bl DWCi_WINlInitEx
    bl DWCi_BTNlDisable
    ldr r0, =procConfirm
    bl DWCi_ChangeScene
    ldmia sp!, {r3, pc}
}

extern "C" void endScene_3(void)
{
    DWCi_BTNlDisable();
    DWCi_EFFlWait(8);
    DWCi_ChangeScene((s32)endScene1_2);
}

extern "C" void endScene1_2(void)
{
    s32 r4;
    s32 v0;
    v0 = DWCi_EFFlCheck(1);
    if (v0 != 0)
        return;
    DWCi_BTNlEnd();
    r4 = 1;
    if (*(u8 *)(data_ov016_02158a84) == 0) {
        DWCi_EFFlFade(3, r4, r4, 8);
    }
    DWCi_EFFlFade(3, 0, 0x15, 8);
    DWCi_ChangeScene((s32)endScene2_2);
    return;
}

extern "C" void endScene2_2(void)
{
    s32 v0;
    s32 v1;
    s32 v2;
    v0 = DWCi_EFFlCheck(0);
    if (v0 != 0)
        return;
    if (*(u8 *)(((u8 *)&data_ov016_02158a84)) == 0) {
        v1 = DWCi_EFFlCheck(1);
        if (v1 != 0)
            return;
    }
    v2 = DWCi_BTNlIsEnd();
    if (v2 == 0)
        return;
    DWCi_FNTlDeleteBgLcd(0);
    if (*(u8 *)(((u8 *)&data_ov016_02158a84)) == 0) {
        DWCi_COMMENTlDelete();
        DWCi_GXlInvisible(1, 1);
    }
    DWCi_GXlInvisible(0, 0x15);
    if (*(u8 *)(((u8 *)&data_ov016_02158a84)) == 0) {
        DWCi_SetParam_(0, 1);
        DWCi_ChangeScene((s32)((u8 *)&DWCi_SceneOptMenu));
        return;
    } else {
        DWCi_SetParam_(0, 1);
        DWCi_ChangeScene((s32)((u8 *)&DWCi_SceneOptErase1));
        return;
    }
}

extern "C" void procConfirm(void)
{
    s32 r0;
    s32 v0;
    v0 = DWCi_WINlGet();
    r0 = v0;
    if (r0 != 0) {
        if (r0 != 1)
            return;
        DWCi_SNDlPlay(0xE);
        *(u8 *)(data_ov016_02158a84) = 1;
    } else {
        DWCi_SNDlPlay(7);
    }
    DWCi_WINlEnd();
    DWCi_ChangeScene((s32)procConfirm1);
    return;
}

extern "C" void procConfirm1(void)
{
    s32 v0 = DWCi_WINlIsInit();
    if (v0 != 0)
        return;
    DWCi_ChangeScene((s32)endScene_3);
}

extern "C" void DWCi_SceneOptErase1(void)
{
    initGraphics_3();
    DWCi_CMNlMsgDraw(0x19);
    DWCi_SETTINGlEraseAll();
    DWCi_ChangeScene((s32)procInit_3);
}

extern "C" asm s32 initGraphics_3(...)
{
    stmdb sp!, {r3, lr}
    ldr r0, =data_ov016_021557b8
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

extern "C" void procInit_3(void)
{
    DWCi_EFFlFade(2, 0, 0x15, 8);
    DWCi_GXlVisible(0, 0x15);
    DWCi_ChangeScene((s32)procInit1_3);
}

extern "C" void procInit1_3(void)
{
    s32 v0 = DWCi_EFFlCheck(0);
    if (v0 != 0)
        return;
    DWCi_CMNlButton(5);
    DWCi_ChangeScene((s32)procInit2_3);
}

extern "C" void procInit2_3(void)
{
    s32 v0 = DWCi_BTNlGet();
    if (v0 == -2)
        return;
    DWCi_BTNlEnable();
    DWCi_ChangeScene((s32)procScene_3);
}

extern "C" void procScene_3(void)
{
    input_3();
    draw_3();
    button_3();
}

extern "C" void input_3(void)
{
    s32 v0 = DWCi_IPTlCheckTrigger(1);
    if (v0 == 0)
        return;
    DWCi_BTNlSet(0);
}

extern "C" void draw_3(void)
{
}

extern "C" asm s32 button_3(...)
{
    stmdb sp!, {r3, lr}
    bl DWCi_BTNlGet
    cmp r0, #0
    ldmneia sp!, {r3, pc}
    mov r0, #6
    bl DWCi_SNDlPlay
    ldr r0, =endScene_4
    bl DWCi_ChangeScene
    ldmia sp!, {r3, pc}
}

extern "C" void endScene_4(void)
{
    DWCi_BTNlDisable();
    DWCi_EFFlWait(8);
    DWCi_ChangeScene((s32)endScene1_3);
}

extern "C" void endScene1_3(void)
{
    s32 v0 = DWCi_EFFlCheck(1);
    if (v0 != 0)
        return;
    DWCi_EFFlFade(3, 1, 0x3F, 0x40);
    DWCi_EFFlFade(3, 0, 0x3F, 0x40);
    DWCi_ChangeScene((s32)endScene2_3);
}

extern "C" void endScene2_3(void)
{
    s32 v0 = DWCi_EFFlCheck(1);
    if (v0 != 0)
        return;
    s32 v1 = DWCi_EFFlCheck(0);
    if (v1 != 0)
        return;
    OS_SpinWaitSysCycles(0x800000);
    PM_ForceToPowerOff();
}

extern "C" void DWCi_SceneOptInfo(void)
{
    initGraphics_4();
    DWCi_HLlLoad(0x11);
    DWCi_COMMENTlDispEx(0x3A, (0x3A - 0x3B), 0);
    drawInfo();
    DWCi_ChangeScene((s32)procInit_4);
}

extern "C" asm s32 initGraphics_4(...)
{
    stmdb sp!, {r3, lr}
    ldr r0, =data_ov016_021557cc
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

extern "C" asm s32 drawInfo(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x7c
    mov r5, #0
    mov r0, r5
    mov r1, r5
    bl DWCi_FNTlFormBgEx
    mov r6, r0
    add r0, sp, #0x14
    bl OS_GetMacAddress
    ldrb r0, [sp, #0x15]
    add r10, sp, #0x1a
    mov r9, #0x14
    str r0, [sp]
    ldrb r1, [sp, #0x16]
    ldr r2, =data_ov016_021557e0
    mov r0, r10
    str r1, [sp, #4]
    ldrb r3, [sp, #0x17]
    mov r1, r9
    str r3, [sp, #8]
    ldrb r3, [sp, #0x18]
    str r3, [sp, #0xc]
    ldrb r3, [sp, #0x19]
    str r3, [sp, #0x10]
    ldrb r3, [sp, #0x14]
    bl OS_SNPrintf
    add r8, sp, #0x2e
    mov r1, r10
    mov r0, r8
    mov r2, r9
    bl DWCi_STRlConvertStringAsciiToUnicode
    mov r0, #0x1c
    str r0, [sp]
    mov r0, #2
    str r0, [sp, #4]
    mov r0, #0x480
    str r0, [sp, #8]
    mov r0, r6
    mov r1, #8
    mov r2, #0x40
    mov r3, #0xf0
    str r8, [sp, #0xc]
    bl DWCi_FNTlDrawRect
    add r0, sp, #0x68
    bl DWCi_BM_GetWiFiInfo
    ldr r7, [sp, #0x6c]
    ldr r4, [sp, #0x68]
    cmp r7, #0
    cmpeq r4, #0
    beq @L_0213ccc0
    mov r8, #0xa
    mov r0, r4
    mov r1, r7
    mov r2, r8
    mov r3, r5
    bl func_020226e0
    mov r1, #0x3e8
    umull r9, r1, r0, r1
    mov r0, r4
    mov r1, r7
    mov r2, r8
    mov r3, r5
    str r9, [sp, #0x64]
    bl _ll_udiv
    ldr r9, =0x2710
    mov r4, r0
    mov r7, r1
    mov r8, r5
    add r10, sp, #0x58
@L_0213cc38:
    mov r0, r4
    mov r1, r7
    mov r2, r9
    mov r3, r8
    bl func_020226e0
    rsb r1, r5, #2
    str r0, [r10, r1, lsl #2]
    mov r0, r4
    mov r1, r7
    mov r2, r9
    mov r3, r8
    bl _ll_udiv
    add r5, r5, #1
    mov r4, r0
    mov r7, r1
    cmp r5, #3
    blt @L_0213cc38
    ldr r1, [sp, #0x5c]
    ldr r0, [sp, #0x60]
    str r1, [sp]
    mov r4, #0x14
    add r5, sp, #0x1a
    str r0, [sp, #4]
    ldr r7, [sp, #0x64]
    ldr r3, [sp, #0x58]
    ldr r2, =data_ov016_02155800
    mov r0, r5
    mov r1, r4
    str r7, [sp, #8]
    bl OS_SNPrintf
    add r0, sp, #0x2e
    mov r1, r5
    mov r2, r4
    b @L_0213ccdc
@L_0213ccc0:
    ldr r2, =data_ov016_02155814
    mov r0, r10
    mov r1, r9
    bl OS_SNPrintf
    mov r0, r8
    mov r1, r10
    mov r2, r9
@L_0213ccdc:
    bl DWCi_STRlConvertStringAsciiToUnicode
    mov r0, #0x1c
    str r0, [sp]
    mov r0, #2
    str r0, [sp, #4]
    mov r0, #0x480
    str r0, [sp, #8]
    add r4, sp, #0x2e
    mov r0, r6
    mov r1, #8
    mov r2, #0x78
    mov r3, #0xf0
    str r4, [sp, #0xc]
    bl DWCi_FNTlDrawRect
    mov r0, r6
    bl DWCi_FNTlRenewBg
    add sp, sp, #0x7c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" void procInit_4(void)
{
    DWCi_EFFlFade(2, 1, 1, 8);
    DWCi_EFFlFade(2, 0, 0x15, 8);
    DWCi_GXlVisible(1, 1);
    DWCi_GXlVisible(0, 0x15);
    DWCi_ChangeScene((s32)procInit1_4);
}
