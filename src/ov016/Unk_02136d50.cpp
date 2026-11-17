#include "ov016/Unk_02136d50.hpp"
static inline void inl_02139ce8(u8 *arg0, s32 arg1, s32 *arg2, s32 *arg3)
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
static inline void inl_02138344(u8 *arg0, s32 arg1, s32 *arg2, s32 *arg3)
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
static inline void inl_021382cc(u8 *arg0, s32 arg1, s32 *arg2, s32 *arg3)
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
static inline void inl_02138254(u8 *arg0, s32 arg1, s32 *arg2, s32 *arg3)
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
static inline void inl_021381dc(u8 *arg0, s32 arg1, s32 *arg2, s32 *arg3)
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

extern "C" void DWCi_ANIMElInitEx(void);
extern "C" void DWCi_ANIMElEnd(void);
extern "C" s32 taskAnime(void);
extern "C" s32 DWCi_BTNlInit(...);
extern "C" void DWCi_BTNlEnd(void);
extern "C" s8 DWCi_BTNlGet(void);
extern "C" void DWCi_BTNlSet(u8 arg0);
extern "C" void DWCi_BTNlSetForce(u8 arg0);
extern "C" s32 DWCi_BTNlIsEnd(void);
extern "C" s32 DWCi_BTNlEnable(void);
extern "C" s32 DWCi_BTNlDisable(void);
extern "C" void disp(void);
extern "C" void taskStart(void *arg0);
extern "C" void taskStart1(s32 arg0);
extern "C" void taskMain(void);
extern "C" void taskEnd(u8 *arg0);
extern "C" s32 taskEnd1(s32 arg0);
extern "C" void taskRelease(void);
extern "C" char *func_ov016_0213757c(void);
extern "C" s32 DWCi_COMMENTlDispEx(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 DWCi_COMMENTlDelete(void);
extern "C" s32 DWCi_Char(...);
extern "C" s32 DWCi_CMNlLoadResource(s32 arg0, s32 arg1);
extern "C" s32 DWCi_CMNlStep(s32 arg0);
extern "C" s32 DWCi_CMNlButton(s32 arg0);
extern "C" void DWCi_CMNlMsgDraw(s32 arg0);
extern "C" s32 DWCi_CMNlMsgNameDraw(s32 arg0, s32 arg1);
extern "C" s32 DWCi_CMNlFontFlag(...);
extern "C" void func_ov016_02137914(void);
extern "C" void DWCi_FOCUSlEnd(void);
extern "C" void DWCi_FOCUSlDisp(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void DWCi_FOCUSlDisp4(void);
extern "C" s32 DWCi_FOCUSlDelete(...);
extern "C" s32 func_ov016_02137b18(void);
extern "C" void DWCi_HLlEnd(void);
extern "C" s32 DWCi_HLlLoad(...);
extern "C" void DWCi_HLlLoadSet(void);
extern "C" void DWCi_HLlLoadList(void);
extern "C" void taskLoad(s32 arg0);
extern "C" s32 DWCi_ICONlInit(u8 arg0);
extern "C" void DWCi_ICONlEnd(void);
extern "C" void taskRenew(void);
extern "C" void DWCi_KBlInit(void);
extern "C" void DWCi_KBlEnd(void);
extern "C" u8 DWCi_KBlGet(void);
extern "C" void DWCi_KBlSetErase(u8 arg0);
extern "C" void DWCi_KBlSetInput(u8 arg0);
extern "C" s32 DWCi_KBlIsInit(void);
extern "C" void taskStart0(void *arg0);
extern "C" void taskStart1_2(void *arg0);
extern "C" void taskStart2(void *arg0);
extern "C" void taskStart3(void *arg0);
extern "C" void taskStart4(void *arg0);
extern "C" void taskMain_2(void);
extern "C" s32 touchTrigger(...);
extern "C" s32 touchRelease(...);
extern "C" void pushCaps(void);
extern "C" void pushShift(void);
extern "C" s32 func_ov016_02138914(...);
extern "C" void exchangeBack(u8 arg0);
extern "C" s32 func_ov016_02138b48(...);
extern "C" void disp_2(void);
extern "C" s32 changePage(...);
extern "C" s32 changeColor(...);
extern "C" s32 dispFocus(void);
extern "C" void moveFocus(void);
extern "C" void taskEnd0(void);
extern "C" void taskEnd1_2(void);
extern "C" void taskEnd2(void);
extern "C" void taskEnd3(void);
extern "C" void taskEnd4(void);
extern "C" s32 taskEnd5(s32 arg0);
extern "C" void DWCi_KB10lInit(void);
extern "C" void DWCi_KB10lEnd(void);
extern "C" u8 DWCi_KB10lGet(void);
extern "C" void DWCi_KB10lSetErase(u8 arg0);
extern "C" void DWCi_KB10lSetInput(u8 arg0);
extern "C" void DWCi_KB10lSetShift(u8 arg0);
extern "C" s32 DWCi_KB10lIsInit(void);
extern "C" void taskStart0_2(void);
extern "C" void taskStart1_3(void *arg0);

extern "C" char data_ov016_021544f4[];
extern "C" char data_ov016_02154500[];
extern "C" char data_ov016_02154504[];
extern "C" char data_ov016_0215450c[];
extern "C" char data_ov016_0215450e[];
extern "C" char data_ov016_02154514[];
extern "C" char data_ov016_02154522[];
extern "C" char data_ov016_02154540[];
extern "C" char data_ov016_02154548[];
extern "C" char data_ov016_02154564[];
extern "C" char data_ov016_02154566[];
extern "C" char data_ov016_02154580[];
extern "C" char data_ov016_0215458c[];
extern "C" char data_ov016_02154594[];
extern "C" char data_ov016_02154596[];
extern "C" char data_ov016_02154598[];
extern "C" char data_ov016_0215459a[];
extern "C" char data_ov016_0215459d[];
extern "C" char data_ov016_021545a6[];
extern "C" char data_ov016_021545aa[];
extern "C" char data_ov016_021545ae[];
extern "C" char data_ov016_021545b4[];
extern "C" char data_ov016_021545bc[];
extern "C" char data_ov016_021545c0[];
extern "C" char data_ov016_021545cc[];
extern "C" char data_ov016_021545d0[];
extern "C" char data_ov016_021545dc[];
extern "C" char data_ov016_021545e4[];
extern "C" char data_ov016_021545ec[];
extern "C" char data_ov016_021545f4[];
extern "C" char data_ov016_021546b0[];
extern "C" char data_ov016_021546b2[];
extern "C" char data_ov016_02154784[];
extern "C" char data_ov016_0215485a[];
extern "C" char data_ov016_0215485c[];
extern "C" char data_ov016_02154892[];
extern "C" char data_ov016_0215495c[];
extern "C" char DWCi_R_SCR[];
extern "C" char data_ov016_02155110[];
extern "C" char data_ov016_021552f4[];
extern "C" char data_ov016_02155344[];
extern "C" char data_ov016_02155358[];
extern "C" char data_ov016_02155364[];
extern "C" char data_ov016_02155370[];
extern "C" char data_ov016_021589e4[];
extern "C" char data_ov016_021589e4_b[];
extern "C" char data_ov016_021589e8[];
extern "C" char data_ov016_021589e8_b[];
extern "C" char data_ov016_021589ec[];
extern "C" char data_ov016_021589f0[];
extern "C" char data_ov016_02158a30[];
extern "C" char data_ov016_02158a34[];
extern "C" char data_ov016_02158a38[];
extern "C" char data_ov016_02158a38_b[];
extern "C" char data_ov016_02158a3c[];
extern "C" char data_ov016_02158a3c_b[];
extern "C" char data_ov016_02158a40[];
extern "C" char DWCiMsgCmn[];
extern "C" s32 DC_FlushRange(...);
extern "C" s32 FX_DivS32(...);
extern "C" s32 FX_ModS32(...);
extern "C" void MIi_CpuCopyFast(void);
extern "C" void GXS_LoadBG0Scr(void);
extern "C" s32 GX_LoadBG1Scr(...);
extern "C" char GX_LoadBG1Char[];
extern "C" void func_020131c0(void);
extern "C" void WM_GetLinkLevel(void);
extern "C" void taskStart2_2(void);
extern "C" void disp_3(void);
extern "C" void taskEnd0_2(void);
extern "C" s32 DWCi_GetParam_(...);
extern "C" s32 DWCi_Language(...);
extern "C" s32 DWCi_Entry(...);
extern "C" s32 DWCi_MSGlGet(...);
extern "C" void DWCi_MSGlGetEx(void);
extern "C" s32 DWCi_SETTIGNlGet(...);
extern "C" s32 DWCi_SNDlPlay(...);
extern "C" s32 DWCi_STEPlBegin(...);
extern "C" s32 DWCi_STEPlChange(...);
extern "C" s32 DWCi_ARClReadEx(...);
extern "C" s32 DWCi_ARClRelease(...);
extern "C" void DWCi_CELLlForm(void);
extern "C" s32 DWCi_CELLlDelete(...);
extern "C" s32 DWCi_CELLlGetObj(...);
extern "C" void DWCi_CELLlSetEffect(void);
extern "C" void DWCi_CELLlSetPalette(void);
extern "C" s32 DWCi_CELLlSetPosition(...);
extern "C" s32 DWCi_CELLlSetPriority(...);
extern "C" void DWCi_CELLlGetPosition(void);
extern "C" s32 DWCi_CEINlSet(...);
extern "C" s32 DWCi_CEINlSetExObj(...);
extern "C" void DWCi_CEINlSetExCell(void);
extern "C" void DWCi_FNTlFormEx(void);
extern "C" s32 DWCi_FNTlDelete(...);
extern "C" s32 DWCi_FNTlFormBgEx(...);
extern "C" s32 DWCi_FNTlDeleteBgLcd(...);
extern "C" s32 DWCi_FNTlDraw(...);
extern "C" s32 DWCi_FNTlDrawRect(...);
extern "C" void DWCi_FNTlDisp(void);
extern "C" s32 DWCi_FNTlRenewBg(...);
extern "C" void DWCi_Coord2Rect(void);
extern "C" s32 DWCi_HEAPlAllocEx(...);
extern "C" s32 DWCi_HEAPlFree_(...);
extern "C" void DWCi_IPTlCheckTrigger(void);
extern "C" void DWCi_IPTlCheckRepeat(void);
extern "C" void DWCi_IPTlCheckRelease(void);
extern "C" void DWCi_TPlCheck(void);
extern "C" void DWCi_TPlCheckTrigger(void);
extern "C" void DWCi_TPlCheckRelease(void);
extern "C" s32 DWCi_OBJlDelete(...);
extern "C" s32 DWCi_TSKlForm(...);
extern "C" s32 DWCi_TSKlChangeFunc(...);
extern "C" s32 DWCi_TSKlDelete(...);
extern "C" s32 DWCi_TSKlDeleteEx(...);
extern "C" void strncpy(void);

extern "C" asm void DWCi_ANIMElInitEx(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r0, #0xc
    mov r1, #4
    bl DWCi_HEAPlAllocEx
    ldr r5, =data_ov016_021589e4
    mov r4, #0
    str r0, [r5]
    strb r6, [r0, #8]
    mov r0, r4
    mov r1, #0x47
    bl DWCi_CEINlSetExObj
    ldr r2, [r5]
    ldr r1, =data_ov016_021544f4
    str r0, [r2, #4]
    ldr r0, [r5]
    ldrb lr, [r1, r6]
    ldr r6, [r0, #4]
    ldr r12, =0xfe00ff00
    mov r2, r4
    ldrh r3, [r6, #4]
    mov r0, #1
    ldr r1, =taskAnime
    bic r3, r3, #0xc00
    orr r3, r3, #0x400
    strh r3, [r6, #4]
    ldr r4, [r5]
    mov r3, #0x78
    ldr r6, [r4, #4]
    ldr r4, [r6]
    bic r4, r4, #0xc00
    str r4, [r6]
    ldrh r4, [r6, #4]
    bic r4, r4, #0xf000
    orr r4, r4, lr, lsl #12
    strh r4, [r6, #4]
    ldr r4, [r5]
    ldr lr, [r4, #4]
    ldr r4, [lr]
    and r4, r4, r12
    orr r4, r4, #0x8b
    orr r4, r4, #0xe60000
    str r4, [lr]
    bl DWCi_TSKlForm
    ldr r1, [r5]
    str r0, [r1]
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" void DWCi_ANIMElEnd(void)
{
    DWCi_TSKlDeleteEx(1, *(s32 *)(*(u8 * *)(data_ov016_021589e4)));
    DWCi_OBJlDelete(*(s32 *)(*(u8 * *)(data_ov016_021589e4) + 0x4));
    DWCi_HEAPlFree_((s32)data_ov016_021589e4_b);
}

extern "C" s32 taskAnime(void)
{
    s32 v0;
    s32 v1;
    s32 t0;
    u8 *t1;
    u8 t2;
    s32 t3;
    u8 *t4;
    s32 t5;
    u8 t6;
    u8 *t7;
    s32 t8;
    s32 t10;
    s32 t11;
    u8 *t12;
    t0 = (*(u8 *)(*(u8 * *)(data_ov016_021589e4) + 0x9) + 1);
    v0 = FX_ModS32(t0, 0x28);
    t1 = (u8 *)*(s32 *)(data_ov016_021589e4);
    *(u8 *)(t1 + 0x9) = v0;
    t2 = *(u8 *)(*(u8 * *)(data_ov016_021589e4) + 0x9);
    v1 = FX_DivS32(t2, 5, (s32)t1);
    t3 = *(s32 *)(*(u8 * *)(data_ov016_021589e4) + 0x4);
    DWCi_CEINlSet(0, (v1 + 0x47), t3);
    t4 = *(u8 * *)(*(u8 * *)(data_ov016_021589e4) + 0x4);
    t5 = ((*(u16 *)(*(u8 * *)(*(u8 * *)(data_ov016_021589e4) + 0x4) + 0x4) & -0xC01) | 0x400);
    *(u16 *)(t4 + 0x4) = t5;
    t6 = *(u8 *)(data_ov016_021544f4 + *(u8 *)(*(u8 * *)(data_ov016_021589e4) + 0x8));
    t7 = *(u8 * *)(*(u8 * *)(data_ov016_021589e4) + 0x4);
    t8 = (*(s32 *)(*(u8 * *)(*(u8 * *)(data_ov016_021589e4) + 0x4)) & -0xC01);
    *(s32 *)(t7) = t8;
    t10 = ((*(u16 *)(t7 + 0x4) & -0xF001) | (t6 << 0xC));
    *(u16 *)(t7 + 0x4) = t10;
    t11 = (((*(s32 *)(*(u8 * *)(*(u8 * *)(data_ov016_021589e4) + 0x4)) & -0x1FF0100) | 0x8B) | 0xE60000);
    t12 = *(u8 * *)(*(u8 * *)(data_ov016_021589e4) + 0x4);
    *(s32 *)(t12) = t11;
    return t11;
}

extern "C" asm s32 DWCi_BTNlInit(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r5, #4
    mov r4, r0
    ldr r2, =data_ov016_02154504
    mov r1, r5
    mov r0, #0x1c
    ldrb r7, [r2, r4]
    bl DWCi_HEAPlAllocEx
    ldr r9, =data_ov016_021589e8
    sub r1, r5, #6
    str r0, [r9]
    strb r1, [r0, #0x16]
    ldr r0, [r9]
    cmp r7, #0
    strb r4, [r0, #0x17]
    mov r8, #0
    ble @L_02136fa4
    ldr r0, =data_ov016_02154514
    mov r6, r8
    add r5, r0, r4, lsl #1
    mov r4, #1
    mvn r10, #0
@L_02136f6c:
    ldrb r1, [r8, r5]
    mov r0, r6
    mov r2, r4
    bl DWCi_CEINlSetExCell
    ldr r2, [r9]
    mov r1, r10
    str r0, [r2, r8, lsl #2]
    ldr r0, [r9]
    mov r2, r4
    ldr r0, [r0, r8, lsl #2]
    bl DWCi_CELLlSetPriority
    add r8, r8, #1
    cmp r8, r7
    blt @L_02136f6c
@L_02136fa4:
    mov r5, #1
    mov r6, #0
    mov r0, r6
    mov r1, r5
    mov r2, r5
    bl DWCi_CEINlSetExCell
    ldr r4, =data_ov016_021589e8
    mov r2, r5
    ldr r3, [r4]
    sub r1, r5, #2
    str r0, [r3, #8]
    ldr r0, [r4]
    ldr r0, [r0, #8]
    bl DWCi_CELLlSetPriority
    mov r0, #0xc0
    bl disp
    mov r0, r6
    mov r2, r6
    ldr r1, =taskStart
    mov r3, #0x78
    bl DWCi_TSKlForm
    ldr r1, [r4]
    str r0, [r1, #0xc]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" void DWCi_BTNlEnd(void)
{
    u8 *t0 = (u8 *)*(s32 *)(data_ov016_021589e8);
    *(u8 *)(t0 + 0x19) = 1;
    s32 t1 = *(s32 *)(*(u8 * *)(data_ov016_021589e8) + 0xC);
    DWCi_TSKlChangeFunc(t1, (s32)taskEnd, (s32)t0, 1);
}

extern "C" s8 DWCi_BTNlGet(void)
{
    return *(s8 *)(*(u8 * *)(data_ov016_021589e8) + 0x16);
}

extern "C" void DWCi_BTNlSet(u8 arg0)
{
    if (*(s8 *)(*(u8 * *)(data_ov016_021589e8) + 0x16) == -1)
        *(u8 *)(*(u8 * *)(data_ov016_021589e8) + 0x16) = arg0;
    return;
}

extern "C" void DWCi_BTNlSetForce(u8 arg0)
{
    *(u8 *)(*(u8 * *)(data_ov016_021589e8) + 0x16) = arg0;
}

extern "C" s32 DWCi_BTNlIsEnd(void)
{
    u8 *r0;
    r0 = (u8 *)*(s32 *)(data_ov016_021589e8);
    if ((s32)r0 == 0) {
        return 1;
    } else {
        if (*(u8 *)(r0 + 0x19) == 0) {
            r0 = (u8 *)1;
        } else {
            r0 = (u8 *)0;
        }
        return (s32)r0;
    }
}

extern "C" s32 DWCi_BTNlEnable(void)
{
    u8 *t0 = (u8 *)*(s32 *)(data_ov016_021589e8);
    *(u8 *)(t0 + 0x18) = 0;
    return (s32)t0;
}

extern "C" s32 DWCi_BTNlDisable(void)
{
    u8 *t0 = (u8 *)*(s32 *)(data_ov016_021589e8);
    *(u8 *)(t0 + 0x18) = 1;
    return (s32)t0;
}

extern "C" asm void disp(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    ldr r9, =data_ov016_021589e8
    mov r8, r0
    ldr r2, [r9]
    ldr r0, =data_ov016_02154504
    ldrb r1, [r2, #0x17]
    mvn r5, #0
    mov r7, #0
    ldrb r6, [r0, r1]
    ldr r0, [r2, #8]
    mov r1, r5
    mov r2, r7
    mov r3, r8
    bl DWCi_CELLlSetPosition
    cmp r6, #0
    ldmleia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r4, =data_ov016_02154522
    ldr r10, =data_ov016_0215450c
@L_0213712c:
    ldr r0, [r9]
    mov r1, r5
    ldrb r2, [r0, #0x17]
    ldr r0, [r0, r7, lsl #2]
    add r3, r8, #4
    add r2, r4, r2, lsl #1
    ldrb r2, [r7, r2]
    mov r2, r2, lsl #2
    ldrh r2, [r10, r2]
    bl DWCi_CELLlSetPosition
    add r7, r7, #1
    cmp r7, r6
    blt @L_0213712c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" void taskStart(void *arg0)
{
    s32 x;
    s32 y;
    ((s32 (*)(...))DWCi_CELLlGetPosition)(*(s32 *)(*(u8 **)data_ov016_021589e8 + 8), 0, &x, &y);
    y -= 4;
    ((s32 (*)(...))disp)(y);
    if (y > 0xA8)
        return;
    ((s32 (*)(...))disp)(0xA8);
    ((s32 (*)(...))DWCi_TSKlChangeFunc)(arg0, taskStart1);
}

extern "C" void taskStart1(s32 arg0)
{
    *(s8 *)(*(u8 **)data_ov016_021589e8 + 0x16) = -1;
    (*(u16 *)(*(u8 **)data_ov016_021589e8 + 0x14))++;
    if (*(u16 *)(*(u8 **)data_ov016_021589e8 + 0x14) < 4)
        return;
    *(u16 *)(*(u8 **)data_ov016_021589e8 + 0x14) = 0;
    ((void (*)(s32, void *))DWCi_TSKlChangeFunc)(arg0, (void *)taskMain);
}

extern "C" asm void taskMain(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #8
    ldr r5, =data_ov016_021589e8
    ldr r1, =data_ov016_02154504
    ldr r3, [r5]
    ldrb r2, [r3, #0x17]
    ldrb r0, [r3, #0x18]
    ldrb r4, [r1, r2]
    cmp r0, #0
    bne @L_02137374
    ldrsb r0, [r3, #0x16]
    cmn r0, #1
    addne sp, sp, #8
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r4, #0
    mov r8, #0
    ble @L_02137374
    ldr r7, =data_ov016_0215450c
    ldr r6, =data_ov016_02154522
    ldr r10, =data_ov016_02154500
    add r9, sp, #0
@L_02137284:
    ldr r0, [r5]
    mov r1, r10
    ldrb r0, [r0, #0x17]
    mov r2, r9
    add r0, r6, r0, lsl #1
    ldrb r0, [r8, r0]
    add r0, r7, r0, lsl #2
    bl DWCi_Coord2Rect
    mov r0, r9
    bl DWCi_TPlCheckTrigger
    cmp r0, #0
    beq @L_02137368
    ldr r9, =data_ov016_021589e8
    ldr r2, [r9]
    ldr r0, [r2, #0x10]
    cmp r0, #0
    bne @L_02137374
    ldrb r1, [r2, #0x17]
    ldr r0, =data_ov016_02154514
    mov r5, #0
    add r0, r0, r1, lsl #1
    ldrb r4, [r8, r0]
    ldr r0, [r2, r8, lsl #2]
    mov r1, r5
    bl DWCi_CELLlGetObj
    mov r2, r0
    mov r0, r5
    add r1, r4, #1
    bl DWCi_CEINlSet
    ldr r0, [r9]
    ldr r3, =data_ov016_0215450e
    ldrb r2, [r0, #0x17]
    sub r4, r5, #1
    ldr r0, [r0, r8, lsl #2]
    add r2, r6, r2, lsl #1
    ldrb r2, [r8, r2]
    mov r1, r4
    mov r6, r2, lsl #2
    ldrh r2, [r7, r6]
    ldrh r3, [r3, r6]
    bl DWCi_CELLlSetPosition
    ldr r0, [r9]
    mov r1, r4
    ldr r0, [r0, r8, lsl #2]
    mov r2, #1
    bl DWCi_CELLlSetPriority
    ldr r1, =taskRelease
    mov r0, r5
    mov r2, r5
    mov r3, #0x6e
    bl DWCi_TSKlForm
    ldr r1, [r9]
    add sp, sp, #8
    str r0, [r1, #0x10]
    ldr r0, [r9]
    strb r8, [r0, #0x16]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02137368:
    add r8, r8, #1
    cmp r8, r4
    blt @L_02137284
@L_02137374:
    ldr r0, =data_ov016_021589e8
    mvn r1, #0
    ldr r0, [r0]
    strb r1, [r0, #0x16]
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" void taskEnd(u8 *arg0)
{
    s32 a, b;
    ((void (*)(s32, s32, s32 *, s32 *))DWCi_CELLlGetPosition)(*(s32 *)(*(u8 **)data_ov016_021589e8 + 8), 0, &a, &b);
    b += 4;
    ((void (*)(s32))disp)(b);
    if (b < 0xC0)
        return;
    ((void (*)(u8 *, void *))DWCi_TSKlChangeFunc)(arg0, (void *)taskEnd1);
}

extern "C" s32 taskEnd1(s32 arg0)
{
    s32 r1;
    u8 *r4;
    s32 r5;
    s32 v4;
    s32 t0;
    r4 = (u8 *)0;
    DWCi_TSKlDelete(0, arg0);
    r1 = *(s32 *)(*(u8 * *)(((u8 *)&data_ov016_021589e8)) + 0x10);
    if (r1 != 0) {
        DWCi_TSKlDelete((s32)r4, r1);
    }
    r4 = (u8 *)((u8 *)&data_ov016_021589e8);
    r5 = 0;
    do {
        arg0 = *(s32 *)(*(u8 * *)(r4) + (r5 << 2));
        if (arg0 != 0) {
            DWCi_CELLlDelete(arg0);
        }
        r5 = (r5 + 1);
    } while (r5 < 2);
    t0 = *(s32 *)(*(u8 * *)(((u8 *)&data_ov016_021589e8)) + 0x8);
    DWCi_CELLlDelete(t0);
    v4 = DWCi_HEAPlFree_((u8 *)((u8 *)&data_ov016_021589e8_b));
    return v4;
}

extern "C" asm void taskRelease(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    ldr r4, =data_ov016_021589e8
    str r0, [sp]
    ldr r1, [r4]
    ldrh r0, [r1, #0x14]
    add r0, r0, #1
    strh r0, [r1, #0x14]
    ldr r1, [r4]
    ldrh r0, [r1, #0x14]
    cmp r0, #0x10
    ldmloia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r1, [r1, #0x17]
    ldr r0, =data_ov016_02154504
    mov r9, #0
    ldrb r8, [r0, r1]
    cmp r8, #0
    ble @L_0213752c
    ldr r7, =data_ov016_02154514
    mov r6, r9
    mvn r5, #0
    mov r11, #1
@L_021374e0:
    ldr r0, [r4]
    mov r1, r6
    ldrb r2, [r0, #0x17]
    ldr r0, [r0, r9, lsl #2]
    add r2, r7, r2, lsl #1
    ldrb r10, [r9, r2]
    bl DWCi_CELLlGetObj
    mov r2, r0
    mov r0, r6
    mov r1, r10
    bl DWCi_CEINlSet
    ldr r0, [r4]
    mov r1, r5
    ldr r0, [r0, r9, lsl #2]
    mov r2, r11
    bl DWCi_CELLlSetPriority
    add r9, r9, #1
    cmp r9, r8
    blt @L_021374e0
@L_0213752c:
    mov r0, #0xa8
    bl disp
    ldr r1, =data_ov016_021589e8
    mov r0, #0
    ldr r2, [r1]
    sub r3, r0, #1
    strh r0, [r2, #0x14]
    ldr r2, [r1]
    strb r3, [r2, #0x16]
    ldr r2, [r1]
    ldr r1, [r2, #0x10]
    cmp r1, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [sp]
    str r0, [r2, #0x10]
    bl DWCi_TSKlDelete
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" char *func_ov016_0213757c(void)
{
    *(u8 *)(data_ov016_021589ec) = 0;
    return data_ov016_021589ec;
}

extern "C" s32 DWCi_COMMENTlDispEx(s32 arg0, s32 arg1, s32 arg2)
{
    s32 h;
    s32 t;
    if (*(u8 *)data_ov016_021589ec != 0)
        return 0;
    ((s32 (*)(...))DWCi_CMNlLoadResource)(data_ov016_02155110, GXS_LoadBG0Scr);
    *(volatile u32 *)0x4001010 = 0x1920000;
    h = ((s32 (*)(...))DWCi_FNTlFormBgEx)(1, 0);
    t = ((s32 (*)(...))DWCi_MSGlGetEx)(*(s32 *)DWCiMsgCmn, arg0, arg1, arg2);
    ((s32 (*)(...))DWCi_FNTlDrawRect)(h, 0x14, 0, 0xD8, 0x40, 2, ((s32 (*)(...))DWCi_CMNlFontFlag)(), t);
    ((s32 (*)(...))DWCi_FNTlRenewBg)(h);
    *(u8 *)data_ov016_021589ec = 1;
    return 1;
}

extern "C" s32 DWCi_COMMENTlDelete(void)
{
    if (*(u8 *)(data_ov016_021589ec) == 0)
        return 0;
    DWCi_FNTlDeleteBgLcd(1);
    *(u8 *)(data_ov016_021589ec) = 0;
    return 1;
}

extern "C" asm s32 DWCi_Char(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r4, =data_ov016_021589f0
    mov r5, r0
    mov r0, r4
    mov r1, r5
    mov r2, #0x3f
    bl strncpy
    ldrb r0, [r5, #5]
    cmp r0, #0x78
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, pc}
    bl DWCi_Language
    ldrb r1, [r5, #5]
    cmp r1, #0x79
    bne @L_021376e8
    cmp r0, #0
    movne r0, r4
    ldmneia sp!, {r3, r4, r5, pc}
@L_021376e8:
    ldr r1, =data_ov016_02154540
    ldrb r1, [r1, r0]
    ldr r0, =data_ov016_021589f0
    strb r1, [r0, #5]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 DWCi_CMNlLoadResource(s32 arg0, s32 arg1)
{
    s32 local[1];
    s32 v0;
    s32 v1;
    s32 v4;
    s32 t0;
    s32 t1;
    v0 = DWCi_Char(arg0, arg1);
    v1 = DWCi_ARClReadEx(v0, (s32)((u8 *)local), 4);
    t0 = *(s32 *)(((u8 *)local));
    DC_FlushRange(v1, t0);
    t1 = *(s32 *)(((u8 *)local));
    ((s32 (*)(...))arg1)(v1, 0, t1);
    v4 = DWCi_ARClRelease(v1);
    return v4;
}

extern "C" s32 DWCi_CMNlStep(s32 arg0)
{
    s32 local[1];
    s32 r4;
    s32 v1;
    s32 v2;
    DWCi_GetParam_((s32)((u8 *)local), 0);
    r4 = arg0;
    arg0 = *(s32 *)(((u8 *)local));
    if (arg0 == 1) {
        v1 = DWCi_STEPlBegin(r4);
        return v1;
    } else {
        if (arg0 != 2)
            return arg0;
        v2 = DWCi_STEPlChange(r4);
        return v2;
    }
}

extern "C" s32 DWCi_CMNlButton(s32 arg0)
{
    s32 local[1];
    s32 v1;
    DWCi_GetParam_(0, (s32)((u8 *)local));
    if (*(s32 *)(((u8 *)local)) != 1)
        return *(s32 *)(((u8 *)local));
    v1 = DWCi_BTNlInit(arg0);
    return v1;
}

extern "C" void DWCi_CMNlMsgDraw(s32 arg0)
{
    s32 v0 = DWCi_FNTlFormBgEx(0, 0);
    s32 v1 = DWCi_MSGlGet(*(s32 *)(DWCiMsgCmn), arg0);
    s32 v2 = DWCi_CMNlFontFlag();
    DWCi_FNTlDrawRect(v0, 0xD, 0x28, 0xE6, 0x70, 2, v2, v1);
    DWCi_FNTlRenewBg(v0);
}

extern "C" s32 DWCi_CMNlMsgNameDraw(s32 arg0, s32 arg1)
{
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v4;
    s32 v5;
    s32 v7;
    s32 t0;
    u16 t1;
    u16 t2;
    v0 = DWCi_FNTlFormBgEx(0, 0);
    t0 = *(s32 *)(((u8 *)&DWCiMsgCmn));
    v1 = DWCi_MSGlGet(t0, arg1);
    v2 = DWCi_CMNlFontFlag();
    DWCi_FNTlDrawRect(v0, 0xD, 0x3C, 0xE6, 0x5E, 2, v2, v1);
    v4 = DWCi_Language();
    v5 = DWCi_Language();
    t1 = *(u16 *)(((u8 *)&data_ov016_02154564) + (v4 << 2));
    t2 = *(u16 *)(((u8 *)&data_ov016_02154566) + (v5 << 2));
    DWCi_FNTlDraw(v0, t1, t2, 2, (0xD + 0x1FC), arg0);
    v7 = DWCi_FNTlRenewBg(v0);
    return v7;
}

extern "C" asm s32 DWCi_CMNlFontFlag(...)
{
    stmdb sp!, {r3, lr}
    bl DWCi_Language
    ldr r1, =data_ov016_02154548
    ldr r0, [r1, r0, lsl #2]
    ldmia sp!, {r3, pc}
}

extern "C" void func_ov016_02137914(void)
{
    s32 v0 = DWCi_HEAPlAllocEx(0x10, 4);
    *(s32 *)(data_ov016_02158a30) = v0;
}

extern "C" void DWCi_FOCUSlEnd(void)
{
    DWCi_FOCUSlDelete();
    DWCi_HEAPlFree_((s32)data_ov016_02158a30);
}

extern "C" void DWCi_FOCUSlDisp(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 i;
    ((s32 (*)(...))DWCi_FOCUSlDelete)();
    for (i = 0; i < 2; i++) {
        (*(s32 **)data_ov016_02158a30)[i] = ((s32 (*)(...))DWCi_CEINlSetExCell)(0, ((u8 (*)[2])data_ov016_02154580)[arg0][i], 1);
        ((s32 (*)(...))DWCi_CELLlSetPriority)((*(s32 **)data_ov016_02158a30)[i], -1, 1);
    }
    ((s32 (*)(...))DWCi_CELLlSetPosition)((*(s32 **)data_ov016_02158a30)[0], -1, arg1, arg3);
    ((s32 (*)(...))DWCi_CELLlSetPosition)((*(s32 **)data_ov016_02158a30)[1], -1, arg2, arg3);
}

extern "C" asm void DWCi_FOCUSlDisp4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    mov r10, r0
    mov r11, r1
    str r2, [sp]
    str r3, [sp, #4]
    mov r8, #6
    bl DWCi_FOCUSlDelete
    mov r9, #0
    ldr r4, =data_ov016_02158a30
    mov r7, r9
    mov r6, #1
    mvn r5, #0
@L_02137a2c:
    mov r0, r7
    mov r1, r8
    mov r2, r6
    bl DWCi_CEINlSetExCell
    ldr r2, [r4]
    mov r1, r5
    str r0, [r2, r9, lsl #2]
    ldr r0, [r4]
    mov r2, r6
    ldr r0, [r0, r9, lsl #2]
    bl DWCi_CELLlSetPriority
    add r9, r9, #1
    cmp r9, #4
    add r8, r8, #1
    blt @L_02137a2c
    ldr r4, =data_ov016_02158a30
    ldr r3, [sp]
    ldr r0, [r4]
    mov r1, r5
    ldr r0, [r0]
    mov r2, r10
    bl DWCi_CELLlSetPosition
    ldr r0, [r4]
    ldr r3, [sp]
    ldr r0, [r0, #4]
    mov r1, r5
    mov r2, r11
    bl DWCi_CELLlSetPosition
    ldr r0, [r4]
    ldr r3, [sp, #4]
    ldr r0, [r0, #8]
    mov r2, r10
    mov r1, r5
    bl DWCi_CELLlSetPosition
    ldr r0, [r4]
    ldr r3, [sp, #4]
    ldr r0, [r0, #0xc]
    mov r1, r5
    mov r2, r11
    bl DWCi_CELLlSetPosition
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 DWCi_FOCUSlDelete(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, #0
    ldr r4, =data_ov016_02158a30
    mov r5, r6
@L_02137ae8:
    ldr r0, [r4]
    ldr r0, [r0, r6, lsl #2]
    cmp r0, #0
    beq @L_02137b04
    bl DWCi_CELLlDelete
    ldr r0, [r4]
    str r5, [r0, r6, lsl #2]
@L_02137b04:
    add r6, r6, #1
    cmp r6, #4
    blt @L_02137ae8
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 func_ov016_02137b18(void)
{
    s32 r0;
    s32 v0;
    s32 v2;
    s32 v3;
    s32 v4;
    s32 t0;
    s32 t1;
    v0 = DWCi_HEAPlAllocEx(0xC0, 4);
    *(s32 *)(((u8 *)&data_ov016_02158a34)) = v0;
    ((s32 (*)(...))DWCi_CMNlLoadResource)((u8 *)((u8 *)&data_ov016_02155344), (u8 *)((u8 *)&GX_LoadBG1Char), (u8 *)((u8 *)&data_ov016_02158a34));
    v2 = DWCi_Entry();
    r0 = v2;
    switch (r0) {
        default:
            return r0;
        case 0:
            t0 = *(s32 *)(((u8 *)&data_ov016_021552f4));
            v3 = DWCi_CMNlLoadResource(t0, (s32)((u8 *)&GX_LoadBG1Scr));
            return v3;
        case 1:
            t1 = *(s32 *)(((u8 *)&data_ov016_021552f4) + 0x4);
            v4 = DWCi_CMNlLoadResource(t1, (s32)((u8 *)&GX_LoadBG1Scr));
            return v4;
    }
}

extern "C" void DWCi_HLlEnd(void)
{
    DWCi_HEAPlFree_((s32)data_ov016_02158a34);
}

extern "C" asm s32 DWCi_HLlLoad(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r1, =data_ov016_021552f4
    ldr r0, [r1, r0, lsl #2]
    bl DWCi_Char
    mov r5, #0
    mov r1, r5
    mov r2, #4
    bl DWCi_ARClReadEx
    ldr r1, =data_ov016_02158a34
    mov r4, r0
    ldr r1, [r1]
    mov r2, #0xc0
    bl MIi_CpuCopyFast
    mov r0, r4
    bl DWCi_ARClRelease
    mov r2, r5
    mov r0, #1
    ldr r1, =taskLoad
    mov r3, #0x78
    bl DWCi_TSKlForm
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void DWCi_HLlLoadSet(void)
{
    s32 v0 = DWCi_SETTIGNlGet();
    DWCi_HLlLoad((*(u8 *)(((u8 *)v0) + 0xF4) + 5));
}

extern "C" void DWCi_HLlLoadList(void)
{
    s32 v0 = DWCi_SETTIGNlGet();
    DWCi_HLlLoad((*(u8 *)(((u8 *)v0) + 0xF4) + 2));
}

extern "C" void taskLoad(s32 arg0)
{
    DC_FlushRange(*(s32 *)(data_ov016_02158a34), 0xC0);
    GX_LoadBG1Scr(*(s32 *)(data_ov016_02158a34), 0, 0xC0);
    DWCi_TSKlDelete(1, arg0);
}

extern "C" s32 DWCi_ICONlInit(u8 arg0)
{
    s32 v0;
    s32 v1;
    s32 v2;
    u8 t0;
    u8 *t1;
    u8 *t2;
    s32 t4;
    u8 *t5;
    s32 t6;
    u8 *t7;
    if (*(s32 *)(data_ov016_02158a38) != 0)
        return *(s32 *)(data_ov016_02158a38);
    v0 = DWCi_HEAPlAllocEx(0xC, 4);
    *(s32 *)(data_ov016_02158a38) = v0;
    t0 = *(u8 *)(data_ov016_0215458c + (arg0 << 2));
    *(u8 *)(((u8 *)v0) + 0x8) = arg0;
    v1 = DWCi_CEINlSetExObj(0, t0);
    t1 = (u8 *)*(s32 *)(data_ov016_02158a38);
    *(s32 *)(t1) = v1;
    t2 = *(u8 * *)(*(u8 * *)(data_ov016_02158a38));
    t4 = (((*(s32 *)(*(u8 * *)(*(u8 * *)(data_ov016_02158a38))) & -0x1FF0100) | 0x26) | 0xE50000);
    *(s32 *)(t2) = t4;
    t5 = *(u8 * *)(*(u8 * *)(data_ov016_02158a38));
    t6 = ((*(u16 *)(*(u8 * *)(*(u8 * *)(data_ov016_02158a38)) + 0x4) & -0xC01) | 0x800);
    *(u16 *)(t5 + 0x4) = t6;
    v2 = DWCi_TSKlForm(0, (s32)taskRenew, 0, 0x78);
    t7 = (u8 *)*(s32 *)(data_ov016_02158a38);
    *(s32 *)(t7 + 0x4) = v2;
    return v2;
}

extern "C" void DWCi_ICONlEnd(void)
{
    if ((s32)*(u8 * *)(data_ov016_02158a38) == 0)
        return;
    s32 t0 = *(s32 *)(*(u8 * *)(data_ov016_02158a38) + 0x4);
    DWCi_TSKlDeleteEx(0, t0);
    s32 t1 = *(s32 *)(*(u8 * *)(data_ov016_02158a38));
    DWCi_OBJlDelete(t1);
    DWCi_HEAPlFree_((s32)data_ov016_02158a38_b);
}

extern "C" asm void taskRenew(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r0, =0x4000208
    mov r4, #0
    ldrh r6, [r0]
    strh r4, [r0]
    bl func_020131c0
    cmp r0, #0x8000
    beq @L_02137d8c
    bl WM_GetLinkLevel
    mov r4, r0
@L_02137d8c:
    ldr r2, =0x4000208
    ldr r5, =data_ov016_02158a38
    ldrh r0, [r2]
    ldr r1, =data_ov016_0215458c
    mov r0, #0
    strh r6, [r2]
    ldr r2, [r5]
    ldrsb r3, [r2, #8]
    ldr r2, [r2]
    add r1, r1, r3, lsl #2
    ldrb r1, [r4, r1]
    bl DWCi_CEINlSet
    ldr r1, [r5]
    ldr r0, =0xfe00ff00
    ldr r2, [r1]
    ldr r1, [r2]
    and r0, r1, r0
    orr r0, r0, #0x26
    orr r0, r0, #0xe50000
    str r0, [r2]
    ldr r0, [r5]
    ldr r1, [r0]
    ldrh r0, [r1, #4]
    bic r0, r0, #0xc00
    orr r0, r0, #0x800
    strh r0, [r1, #4]
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void DWCi_KBlInit(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x20
    add r4, sp, #0x18
    mov r5, #0
    strh r5, [r4, #4]
    mov r3, #0x11
    strh r5, [r4, #6]
    mov r2, #0x12
    mov r0, #0x128
    mov r1, #4
    strh r5, [r4]
    strh r5, [r4, #2]
    strh r3, [sp, #0x1c]
    strh r2, [sp, #0x1e]
    bl DWCi_HEAPlAllocEx
    ldr r8, =data_ov016_02158a3c
    mov r1, #0xff
    str r0, [r8]
    strb r1, [r0, #0x11c]
    ldr r0, [r8]
    mov r1, #1
    strb r5, [r0, #0x121]
    ldr r0, [r8]
    ldr r7, =0xc1fffcff
    strb r1, [r0, #0x123]
    ldr r0, [r8]
    mov r6, r5
    strb r1, [r0, #0x124]
    mov r4, #0x34
@L_02137e7c:
    mov r0, r6
    mov r1, r4
    bl DWCi_CEINlSetExObj
    ldr r1, [r8]
    add r1, r1, r5, lsl #2
    str r0, [r1, #0x30]
    ldr r0, [r8]
    add r0, r0, r5, lsl #2
    ldr r1, [r0, #0x30]
    ldr r0, [r1]
    and r0, r0, r7
    orr r0, r0, #0x200
    str r0, [r1]
    ldr r0, [r8]
    add r0, r0, r5, lsl #2
    ldr r1, [r0, #0x30]
    add r5, r5, #1
    ldrh r0, [r1, #4]
    cmp r5, #0x2f
    bic r0, r0, #0xc00
    orr r0, r0, #0xc00
    strh r0, [r1, #4]
    blt @L_02137e7c
    ldr r4, =data_ov016_0215459d
    ldr r7, =data_ov016_02158a3c
    ldr r5, =0xc1fffcff
    mov r9, #0
@L_02137ee8:
    ldrb r1, [r4, r6]
    mov r0, r9
    bl DWCi_CEINlSetExObj
    ldr r1, [r7]
    add r1, r1, r6, lsl #2
    str r0, [r1, #0xec]
    ldr r0, [r7]
    add r0, r0, r6, lsl #2
    ldr r1, [r0, #0xec]
    ldr r0, [r1]
    and r0, r0, r5
    orr r0, r0, #0x200
    str r0, [r1]
    ldr r0, [r7]
    add r0, r0, r6, lsl #2
    ldr r1, [r0, #0xec]
    add r6, r6, #1
    ldrh r0, [r1, #4]
    cmp r6, #4
    bic r0, r0, #0xc00
    orr r0, r0, #0xc00
    strh r0, [r1, #4]
    blt @L_02137ee8
    ldr r8, =data_ov016_02154598
    ldr r4, =data_ov016_02158a3c
    mov r10, #0
    mov r7, #1
    mvn r6, #0
    mov r5, #0x200
    mov r11, #3
@L_02137f60:
    ldrb r1, [r8, r9]
    mov r0, r10
    mov r2, r7
    bl DWCi_CEINlSetExCell
    ldr r2, [r4]
    mov r1, r6
    add r2, r2, r9, lsl #2
    str r0, [r2, #0xfc]
    ldr r0, [r4]
    mov r2, r5
    add r0, r0, r9, lsl #2
    ldr r0, [r0, #0xfc]
    mov r3, r10
    bl DWCi_CELLlSetEffect
    ldr r0, [r4]
    mov r1, r6
    add r0, r0, r9, lsl #2
    ldr r0, [r0, #0xfc]
    mov r2, r11
    bl DWCi_CELLlSetPriority
    add r9, r9, #1
    cmp r9, #2
    blt @L_02137f60
    ldr r4, =data_ov016_02158a3c
    strh r10, [sp, #0x12]
@L_02137fc4:
    ldr r6, =data_ov016_02155364
    mov r9, #0
    mov r11, #2
@L_02137fd0:
    add r0, sp, #0x14
    str r0, [sp]
    mov r0, #0
    mov r1, #0x1c
    mov r2, #2
    mov r3, r0
    str r0, [sp, #4]
    bl DWCi_FNTlFormEx
    mov r1, #0
    strh r1, [sp, #0x18]
    ldr r1, [r4]
    mov r2, r9, lsl #2
    add r1, r1, r10, lsl #4
    str r0, [r1, r9, lsl #2]
    mov r0, #0xc
    mul r7, r9, r0
    mov r8, #0
    add r5, r2, r10, lsl #4
@L_02138018:
    ldr r1, [r6, r10, lsl #2]
    mov r0, r7, lsl #1
    ldrh r2, [r1, r0]
    ldrh r0, [sp, #0x1e]
    ldrh r1, [sp, #0x18]
    strh r2, [sp, #0x10]
    stmia sp, {r0, r11}
    mov r0, #0x480
    str r0, [sp, #8]
    add r0, sp, #0x10
    str r0, [sp, #0xc]
    ldr r0, [r4]
    ldrh r2, [sp, #0x1a]
    ldrh r3, [sp, #0x1c]
    ldr r0, [r0, r5]
    bl DWCi_FNTlDrawRect
    ldrh r0, [sp, #0x18]
    add r8, r8, #1
    cmp r8, #0xc
    add r0, r0, #0x12
    add r7, r7, #1
    strh r0, [sp, #0x18]
    blt @L_02138018
    cmp r10, #0
    bne @L_02138098
    ldr r1, [sp, #0x14]
    mov r0, #0
    mov r2, #1
    bl DWCi_CELLlForm
    ldr r1, [r4]
    add r1, r1, r9, lsl #2
    str r0, [r1, #0x104]
@L_02138098:
    add r9, r9, #1
    cmp r9, #4
    blt @L_02137fd0
    add r10, r10, #1
    cmp r10, #3
    ldr r6, =data_ov016_02158a3c
    mov r5, #0
    blt @L_02137fc4
    mov r4, #1
    mov r0, r5
    mov r2, r4
    mov r1, #0x40
    bl DWCi_CEINlSetExCell
    ldr r1, [r6]
    sub r4, r4, #2
    str r0, [r1, #0x114]
    ldr r0, [r6]
    mov r1, r4
    ldr r0, [r0, #0x114]
    mov r3, r5
    mov r2, #0x200
    bl DWCi_CELLlSetEffect
    ldr r0, [r6]
    mov r1, r4
    ldr r0, [r0, #0x114]
    mov r2, #2
    bl DWCi_CELLlSetPriority
    ldr r1, =taskStart0
    mov r0, r5
    mov r2, r5
    mov r3, #0x78
    bl DWCi_TSKlForm
    ldr r3, [r6]
    mov r1, r5
    str r0, [r3, #0x118]
    ldr r0, [r6]
    mov r2, #0xc0
    ldrb r0, [r0, #0x11d]
    bl disp_2
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void DWCi_KBlEnd(void)
{
    DWCi_CELLlDelete(*(s32 *)(*(u8 * *)(data_ov016_02158a3c) + 0x114));
    DWCi_TSKlChangeFunc(*(s32 *)(*(u8 * *)(data_ov016_02158a3c) + 0x118), (s32)taskEnd0);
}

extern "C" u8 DWCi_KBlGet(void)
{
    return *(u8 *)(*(u8 * *)(data_ov016_02158a3c) + 0x11C);
}

extern "C" void DWCi_KBlSetErase(u8 arg0)
{
    *(u8 *)(*(u8 * *)(data_ov016_02158a3c) + 0x123) = arg0;
}

extern "C" void DWCi_KBlSetInput(u8 arg0)
{
    *(u8 *)(*(u8 * *)(data_ov016_02158a3c) + 0x124) = arg0;
}

extern "C" s32 DWCi_KBlIsInit(void)
{
    return (*(s32 *)(data_ov016_02158a3c) != 0 ? 1 : 0);
}

extern "C" void taskStart0(void *arg0)
{
    s32 x;
    s32 y;
    inl_021381dc(*(u8 **)data_ov016_02158a3c + 0x28, 0, &x, &y);
    y -= 0xC;
    if (y > 0x51) {
        ((s32 (*)(...))disp_2)((*(u8 **)data_ov016_02158a3c)[0x11D], 0, y);
        return;
    }
    ((s32 (*)(...))disp_2)((*(u8 **)data_ov016_02158a3c)[0x11D], 0, 0x51);
    ((s32 (*)(...))disp_2)((*(u8 **)data_ov016_02158a3c)[0x11D], 1, 0xC0);
    ((s32 (*)(...))DWCi_TSKlChangeFunc)(arg0, taskStart1_2);
}

extern "C" void taskStart1_2(void *arg0)
{
    s32 x;
    s32 y;
    inl_02138254(*(u8 **)data_ov016_02158a3c + 0x58, 0, &x, &y);
    y -= 0xC;
    if (y > 0x67) {
        ((s32 (*)(...))disp_2)((*(u8 **)data_ov016_02158a3c)[0x11D], 1, y);
        return;
    }
    ((s32 (*)(...))disp_2)((*(u8 **)data_ov016_02158a3c)[0x11D], 1, 0x67);
    ((s32 (*)(...))disp_2)((*(u8 **)data_ov016_02158a3c)[0x11D], 2, 0xC0);
    ((s32 (*)(...))DWCi_TSKlChangeFunc)(arg0, taskStart2);
}

extern "C" void taskStart2(void *arg0)
{
    s32 x;
    s32 y;
    inl_021382cc(*(u8 **)data_ov016_02158a3c + 0x88, 0, &x, &y);
    y -= 0xC;
    if (y > 0x7D) {
        ((s32 (*)(...))disp_2)((*(u8 **)data_ov016_02158a3c)[0x11D], 2, y);
        return;
    }
    ((s32 (*)(...))disp_2)((*(u8 **)data_ov016_02158a3c)[0x11D], 2, 0x7D);
    ((s32 (*)(...))disp_2)((*(u8 **)data_ov016_02158a3c)[0x11D], 3, 0xC0);
    ((s32 (*)(...))DWCi_TSKlChangeFunc)(arg0, taskStart3);
}

extern "C" void taskStart3(void *arg0)
{
    s32 x;
    s32 y;
    inl_02138344(*(u8 **)data_ov016_02158a3c + 0xB8, 0, &x, &y);
    y -= 0xC;
    if (y > 0x93) {
        ((s32 (*)(...))disp_2)((*(u8 **)data_ov016_02158a3c)[0x11D], 3, y);
        return;
    }
    ((s32 (*)(...))disp_2)((*(u8 **)data_ov016_02158a3c)[0x11D], 3, 0x93);
    ((s32 (*)(...))disp_2)((*(u8 **)data_ov016_02158a3c)[0x11D], 4, 0xC0);
    ((s32 (*)(...))DWCi_TSKlChangeFunc)(arg0, taskStart4);
}

extern "C" void taskStart4(void *arg0)
{
    s32 x;
    s32 y;
    ((s32 (*)(...))DWCi_CELLlGetPosition)(*(s32 *)(*(u8 **)data_ov016_02158a3c + 0xFC), 0, &x, &y);
    y -= 0xC;
    if (y > 0xAA) {
        ((s32 (*)(...))disp_2)((*(u8 **)data_ov016_02158a3c)[0x11D], 4, y);
        return;
    }
    ((s32 (*)(...))disp_2)((*(u8 **)data_ov016_02158a3c)[0x11D], 4, 0xAA);
    ((s32 (*)(...))dispFocus)();
    ((s32 (*)(...))DWCi_TSKlChangeFunc)(arg0, taskMain_2);
}

extern "C" void taskMain_2(void)
{
    touchTrigger();
    touchRelease();
    func_ov016_02138914();
    func_ov016_02138b48();
}

extern "C" asm s32 touchTrigger(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #8
    ldr r0, =DWCi_R_SCR
    ldr r5, =data_ov016_02158a3c
    bl DWCi_TPlCheckTrigger
    cmp r0, #0
    addeq sp, sp, #8
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, [r5]
    mvn r1, #0
    ldr r8, =data_ov016_021545f4
    ldr r7, =data_ov016_021545aa
    strb r1, [r0, #0x11e]
    mov r4, #0
    add r6, sp, #0
@L_0213848c:
    mov r1, r7
    mov r2, r6
    add r0, r8, r4, lsl #2
    bl DWCi_Coord2Rect
    mov r0, r6
    bl DWCi_TPlCheckTrigger
    cmp r0, #0
    beq @L_021384e4
    ldr r0, [r5]
    ldrb r0, [r0, #0x124]
    cmp r0, #0
    bne @L_021384cc
    mov r0, #9
    bl DWCi_SNDlPlay
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_021384cc:
    mov r0, #0
    bl DWCi_SNDlPlay
    ldr r0, [r5]
    add sp, sp, #8
    strb r4, [r0, #0x11e]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_021384e4:
    add r4, r4, #1
    cmp r4, #0x2f
    blt @L_0213848c
    ldr r8, =data_ov016_021545bc
    ldr r7, =data_ov016_021545cc
    mov r4, #0
    add r6, sp, #0
@L_02138500:
    mov r2, r6
    add r0, r8, r4, lsl #2
    add r1, r7, r4, lsl #2
    bl DWCi_Coord2Rect
    mov r0, r6
    bl DWCi_TPlCheckTrigger
    cmp r0, #0
    beq @L_02138578
    cmp r4, #3
    ldreq r0, [r5]
    ldreqb r0, [r0, #0x123]
    cmpeq r0, #0
    beq @L_02138548
    cmp r4, #2
    ldreq r0, [r5]
    ldreqb r0, [r0, #0x124]
    cmpeq r0, #0
    bne @L_02138558
@L_02138548:
    mov r0, #9
    bl DWCi_SNDlPlay
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02138558:
    ldr r0, =data_ov016_02155370
    ldr r0, [r0, r4, lsl #2]
    bl DWCi_SNDlPlay
    ldr r0, [r5]
    add r1, r4, #0x2f
    strb r1, [r0, #0x11e]
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02138578:
    add r4, r4, #1
    cmp r4, #4
    blt @L_02138500
    ldr r7, =data_ov016_021545b4
    ldr r6, =data_ov016_021545a6
    mov r8, #0
    add r4, sp, #0
@L_02138594:
    mov r1, r6
    mov r2, r4
    add r0, r7, r8, lsl #2
    bl DWCi_Coord2Rect
    mov r0, r4
    bl DWCi_TPlCheckTrigger
    cmp r0, #0
    beq @L_021385d0
    mov r0, #0
    bl DWCi_SNDlPlay
    ldr r0, [r5]
    add r1, r8, #0x33
    strb r1, [r0, #0x11e]
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_021385d0:
    add r8, r8, #1
    cmp r8, #2
    blt @L_02138594
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm s32 touchRelease(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #8
    ldr r1, =data_ov016_02158a3c
    ldr r0, =DWCi_R_SCR
    ldr r1, [r1]
    mov r5, #0
    strb r5, [r1, #0x11c]
    bl DWCi_TPlCheckRelease
    cmp r0, #0
    addeq sp, sp, #8
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r4, =data_ov016_02158a3c
    ldr r8, =data_ov016_021545f4
    ldr r7, =data_ov016_021545aa
    add r6, sp, #0
@L_02138644:
    mov r1, r7
    mov r2, r6
    add r0, r8, r5, lsl #2
    bl DWCi_Coord2Rect
    mov r0, r6
    bl DWCi_TPlCheckRelease
    cmp r0, #0
    beq @L_021386bc
    ldr r2, [r4]
    add r0, r2, #0x100
    ldrsb r0, [r0, #0x1e]
    cmp r0, r5
    addne sp, sp, #8
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    ldrb r1, [r2, #0x11d]
    ldr r0, =data_ov016_02155358
    ldr r0, [r0, r1, lsl #2]
    ldrb r0, [r0, r5]
    strb r0, [r2, #0x11c]
    ldr r0, [r4]
    ldrb r0, [r0, #0x11d]
    cmp r0, #1
    bne @L_021386a8
    mov r0, #0
    bl changePage
@L_021386a8:
    ldr r0, [r4]
    strb r5, [r0, #0x121]
    bl dispFocus
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_021386bc:
    add r5, r5, #1
    cmp r5, #0x2f
    blt @L_02138644
    ldr r8, =data_ov016_021545bc
    ldr r7, =data_ov016_021545cc
    mov r5, #2
    add r6, sp, #0
@L_021386d8:
    mov r2, r6
    add r0, r8, r5, lsl #2
    add r1, r7, r5, lsl #2
    bl DWCi_Coord2Rect
    mov r0, r6
    bl DWCi_TPlCheckRelease
    cmp r0, #0
    beq @L_02138750
    ldr r2, [r4]
    add r1, r5, #0x2f
    add r0, r2, #0x100
    ldrsb r0, [r0, #0x1e]
    cmp r0, r1
    addne sp, sp, #8
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, =data_ov016_021545ae
    ldrb r0, [r0, r5]
    strb r0, [r2, #0x11c]
    ldr r0, [r4]
    ldrb r0, [r0, #0x11d]
    cmp r0, #1
    bne @L_02138738
    mov r0, #0
    bl changePage
@L_02138738:
    ldr r0, [r4]
    add r1, r5, #0x2f
    strb r1, [r0, #0x121]
    bl dispFocus
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02138750:
    add r5, r5, #1
    cmp r5, #4
    blt @L_021386d8
    ldr r8, =data_ov016_021545b4
    ldr r7, =data_ov016_021545a6
    mov r5, #0
    add r6, sp, #0
@L_0213876c:
    mov r1, r7
    mov r2, r6
    add r0, r8, r5, lsl #2
    bl DWCi_Coord2Rect
    mov r0, r6
    bl DWCi_TPlCheckRelease
    cmp r0, #0
    beq @L_021387c8
    ldr r2, [r4]
    add r1, r5, #0x33
    add r0, r2, #0x100
    ldrsb r0, [r0, #0x1e]
    cmp r0, r1
    addne sp, sp, #8
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, =data_ov016_0215459a
    ldrb r0, [r0, r5]
    strb r0, [r2, #0x11c]
    ldr r0, [r4]
    strb r1, [r0, #0x121]
    bl dispFocus
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_021387c8:
    add r5, r5, #1
    cmp r5, #2
    blt @L_0213876c
    ldr r0, =data_ov016_021545bc
    ldr r1, =data_ov016_021545cc
    mov r2, r6
    bl DWCi_Coord2Rect
    mov r0, r6
    bl DWCi_TPlCheckRelease
    cmp r0, #0
    beq @L_02138828
    ldr r0, [r4]
    add r0, r0, #0x100
    ldrsb r0, [r0, #0x1e]
    cmp r0, #0x2f
    addne sp, sp, #8
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    bl pushCaps
    ldr r0, [r4]
    mov r1, #0x2f
    strb r1, [r0, #0x121]
    bl dispFocus
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02138828:
    ldr r0, =data_ov016_021545c0
    ldr r1, =data_ov016_021545d0
    mov r2, r6
    bl DWCi_Coord2Rect
    mov r0, r6
    bl DWCi_TPlCheckRelease
    cmp r0, #0
    addeq sp, sp, #8
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, [r4]
    add r0, r0, #0x100
    ldrsb r0, [r0, #0x1e]
    cmp r0, #0x30
    addne sp, sp, #8
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    bl pushShift
    ldr r0, [r4]
    mov r1, #0x30
    strb r1, [r0, #0x121]
    bl dispFocus
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" void pushCaps(void)
{
    changePage((*(u8 *)(*(u8 * *)(data_ov016_02158a3c) + 0x11D) == 2 ? 0 : 2));
    DWCi_SNDlPlay(1);
}

extern "C" void pushShift(void)
{
    changePage((*(u8 *)(*(u8 * *)(data_ov016_02158a3c) + 0x11D) != 1 ? 1 : 0));
    DWCi_SNDlPlay(1);
}

extern "C" asm s32 func_ov016_02138914(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #8
    ldr r0, =DWCi_R_SCR
    bl DWCi_TPlCheck
    cmp r0, #0
    beq @L_02138abc
    ldr r7, =data_ov016_021545f4
    ldr r6, =data_ov016_021545aa
    mov r4, #0
    add r5, sp, #0
@L_0213893c:
    mov r1, r6
    mov r2, r5
    add r0, r7, r4, lsl #2
    bl DWCi_Coord2Rect
    mov r0, r5
    bl DWCi_TPlCheck
    cmp r0, #0
    beq @L_0213897c
    ldr r0, =data_ov016_02158a3c
    ldr r0, [r0]
    add r0, r0, #0x100
    ldrsb r0, [r0, #0x1e]
    cmp r0, r4
    bne @L_02138abc
    mov r0, r4
    b @L_02138ac0
@L_0213897c:
    add r4, r4, #1
    cmp r4, #0x2f
    blt @L_0213893c
    ldr r7, =data_ov016_021545bc
    ldr r6, =data_ov016_021545cc
    mov r4, #2
    add r5, sp, #0
@L_02138998:
    mov r2, r5
    add r0, r7, r4, lsl #2
    add r1, r6, r4, lsl #2
    bl DWCi_Coord2Rect
    mov r0, r5
    bl DWCi_TPlCheck
    cmp r0, #0
    beq @L_02138a54
    ldr r5, =data_ov016_02158a3c
    add r0, r4, #0x2f
    ldr r1, [r5]
    add r1, r1, #0x100
    ldrsb r1, [r1, #0x1e]
    cmp r1, r0
    bne @L_02138abc
    bl exchangeBack
    cmp r4, #3
    addne sp, sp, #8
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r1, [r5]
    ldrb r0, [r1, #0x122]
    add r0, r0, #1
    strb r0, [r1, #0x122]
    ldr r1, [r5]
    ldrb r0, [r1, #0x122]
    cmp r0, #0x28
    addlo sp, sp, #8
    ldmloia sp!, {r3, r4, r5, r6, r7, pc}
    ldrb r0, [r1, #0x123]
    cmp r0, #0
    bne @L_02138a34
    mov r4, #9
    mov r0, r4
    bl DWCi_SNDlPlay
    ldr r0, [r5]
    sub r1, r4, #0xa
    strb r1, [r0, #0x11e]
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02138a34:
    mov r0, #0x80
    strb r0, [r1, #0x11c]
    ldr r1, [r5]
    add sp, sp, #8
    ldrb r0, [r1, #0x122]
    sub r0, r0, #7
    strb r0, [r1, #0x122]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02138a54:
    add r4, r4, #1
    cmp r4, #4
    blt @L_02138998
    ldr r6, =data_ov016_021545b4
    ldr r5, =data_ov016_021545a6
    mov r7, #0
    add r4, sp, #0
@L_02138a70:
    mov r1, r5
    mov r2, r4
    add r0, r6, r7, lsl #2
    bl DWCi_Coord2Rect
    mov r0, r4
    bl DWCi_TPlCheck
    cmp r0, #0
    beq @L_02138ab0
    ldr r1, =data_ov016_02158a3c
    add r0, r7, #0x33
    ldr r1, [r1]
    add r1, r1, #0x100
    ldrsb r1, [r1, #0x1e]
    cmp r1, r0
    bne @L_02138abc
    b @L_02138ac0
@L_02138ab0:
    add r7, r7, #1
    cmp r7, #2
    blt @L_02138a70
@L_02138abc:
    mvn r0, #0
@L_02138ac0:
    bl exchangeBack
    ldr r0, =data_ov016_02158a3c
    mov r1, #0
    ldr r0, [r0]
    strb r1, [r0, #0x122]
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" void exchangeBack(u8 arg0)
{
    if (arg0 == *(s8 *)(((u8 *)(*(s32 *)(data_ov016_02158a3c) + 0x100)) + 0x1F))
        return;
    changeColor(arg0, 1);
    s8 t0 = *(s8 *)(((u8 *)(*(s32 *)(data_ov016_02158a3c) + 0x100)) + 0x1F);
    changeColor(t0, 0);
    u8 *t1 = (u8 *)*(s32 *)(data_ov016_02158a3c);
    *(u8 *)(t1 + 0x11F) = arg0;
}

extern "C" asm s32 func_ov016_02138b48(...)
{
    stmdb sp!, {r4, lr}
    mov r0, #0x20
    bl DWCi_IPTlCheckRepeat
    cmp r0, #0
    beq @L_02138b64
    mov r0, #0
    bl moveFocus
@L_02138b64:
    mov r0, #0x40
    bl DWCi_IPTlCheckRepeat
    cmp r0, #0
    beq @L_02138b7c
    mov r0, #1
    bl moveFocus
@L_02138b7c:
    mov r0, #0x10
    bl DWCi_IPTlCheckRepeat
    cmp r0, #0
    beq @L_02138b94
    mov r0, #2
    bl moveFocus
@L_02138b94:
    mov r0, #0x80
    bl DWCi_IPTlCheckRepeat
    cmp r0, #0
    beq @L_02138bac
    mov r0, #3
    bl moveFocus
@L_02138bac:
    mov r0, #1
    bl DWCi_IPTlCheckTrigger
    cmp r0, #0
    beq @L_02138cc4
    ldr r2, =data_ov016_02158a3c
    ldr r0, [r2]
    add r1, r0, #0x100
    ldrsb r4, [r1, #0x21]
    cmp r4, #0x2f
    bge @L_02138c1c
    ldrb r1, [r0, #0x124]
    cmp r1, #0
    bne @L_02138bec
    mov r0, #9
    bl DWCi_SNDlPlay
    ldmia sp!, {r4, pc}
@L_02138bec:
    ldrb r3, [r0, #0x11d]
    ldr r1, =data_ov016_02155358
    ldr r1, [r1, r3, lsl #2]
    ldrb r1, [r1, r4]
    strb r1, [r0, #0x11c]
    ldr r0, [r2]
    ldrb r0, [r0, #0x11d]
    cmp r0, #1
    ldmneia sp!, {r4, pc}
    mov r0, #0
    bl changePage
    ldmia sp!, {r4, pc}
@L_02138c1c:
    sub r1, r4, #0x2f
    cmp r1, #4
    bge @L_02138cb4
    cmp r1, #3
    addls pc, pc, r1, lsl #2
    b @L_02138c84
    b @L_02138c44
    b @L_02138c4c
    b @L_02138c54
    b @L_02138c6c
@L_02138c44:
    bl pushCaps
    ldmia sp!, {r4, pc}
@L_02138c4c:
    bl pushShift
    ldmia sp!, {r4, pc}
@L_02138c54:
    ldrb r1, [r0, #0x124]
    cmp r1, #0
    bne @L_02138c84
    mov r0, #9
    bl DWCi_SNDlPlay
    ldmia sp!, {r4, pc}
@L_02138c6c:
    ldrb r1, [r0, #0x123]
    cmp r1, #0
    bne @L_02138c84
    mov r0, #9
    bl DWCi_SNDlPlay
    ldmia sp!, {r4, pc}
@L_02138c84:
    ldrb r0, [r0, #0x11d]
    cmp r0, #1
    bne @L_02138c98
    mov r0, #0
    bl changePage
@L_02138c98:
    ldr r1, =data_ov016_021545ae
    sub r2, r4, #0x2f
    ldr r0, =data_ov016_02158a3c
    ldrb r1, [r1, r2]
    ldr r0, [r0]
    strb r1, [r0, #0x11c]
    ldmia sp!, {r4, pc}
@L_02138cb4:
    ldr r1, =data_ov016_0215459a
    sub r2, r4, #0x33
    ldrb r1, [r1, r2]
    strb r1, [r0, #0x11c]
@L_02138cc4:
    mov r4, #2
    mov r0, r4
    bl DWCi_IPTlCheckRepeat
    cmp r0, #0
    beq @L_02138d1c
    ldr r4, =data_ov016_02158a3c
    ldr r1, [r4]
    ldrb r0, [r1, #0x123]
    cmp r0, #0
    bne @L_02138d10
    ldrb r0, [r1, #0x125]
    cmp r0, #0
    ldmneia sp!, {r4, pc}
    mov r0, #9
    bl DWCi_SNDlPlay
    ldr r0, [r4]
    mov r1, #1
    strb r1, [r0, #0x125]
    ldmia sp!, {r4, pc}
@L_02138d10:
    mov r0, #0x80
    strb r0, [r1, #0x11c]
    b @L_02138d38
@L_02138d1c:
    mov r0, r4
    bl DWCi_IPTlCheckRelease
    cmp r0, #0
    ldrne r0, =data_ov016_02158a3c
    movne r1, #0
    ldrne r0, [r0]
    strneb r1, [r0, #0x125]
@L_02138d38:
    mov r0, #0x400
    bl DWCi_IPTlCheckTrigger
    cmp r0, #0
    beq @L_02138d4c
    bl pushCaps
@L_02138d4c:
    mov r0, #0x800
    bl DWCi_IPTlCheckTrigger
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    bl pushShift
    ldmia sp!, {r4, pc}
}

extern "C" asm void disp_2(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x18
    ldr r4, =data_ov016_021545e4
    ldr lr, =data_ov016_021545ec
    ldrb r5, [r4, #4]
    ldrb r9, [r4]
    ldrb r8, [r4, #1]
    strb r5, [sp, #0x16]
    mov r5, r1
    mov r1, #0xc
    mul r1, r5, r1
    ldrb r7, [r4, #2]
    ldrb r6, [r4, #3]
    strb r9, [sp, #0x12]
    str r1, [sp, #4]
    ldrb r12, [lr]
    ldrb r11, [lr, #1]
    ldrb r4, [lr, #2]
    ldrb r10, [lr, #3]
    ldrb r9, [lr, #4]
    ldr r3, =data_ov016_021545dc
    strb r8, [sp, #0x13]
    strb r7, [sp, #0x14]
    strb r6, [sp, #0x15]
    add r1, sp, #0x12
    ldrb lr, [r3]
    ldrb r8, [r3, #1]
    ldrb r7, [r3, #2]
    ldrb r6, [r3, #3]
    ldrb r3, [r3, #4]
    ldrb r1, [r1, r5]
    strb r12, [sp, #0xd]
    strb r4, [sp, #0xf]
    strb lr, [sp, #8]
    strb r11, [sp, #0xe]
    mov r4, r2
    ldr r12, [sp, #4]
    strb r10, [sp, #0x10]
    strb r9, [sp, #0x11]
    strb r8, [sp, #9]
    strb r7, [sp, #0xa]
    strb r6, [sp, #0xb]
    strb r3, [sp, #0xc]
    cmp r1, #0
    mov lr, #0
    ble @L_02138e9c
    add r1, sp, #0x12
    ldrb r9, [r1, r5]
    ldr r1, =data_ov016_021545f4
    ldr r8, =data_ov016_02158a3c
    ldr r11, =0xc1fffcff
    ldr r7, =0xfe00ff00
    and r6, r4, #0xff
@L_02138e48:
    ldr r2, [r8]
    mov r3, r12, lsl #2
    add r2, r2, r12, lsl #2
    ldr r2, [r2, #0x30]
    ldrh r3, [r1, r3]
    ldr r10, [r2]
    add lr, lr, #1
    and r10, r10, r11
    str r10, [r2]
    mov r2, r3, lsl #0x17
    cmp lr, r9
    ldr r3, [r8]
    add r3, r3, r12, lsl #2
    ldr r3, [r3, #0x30]
    add r12, r12, #1
    ldr r10, [r3]
    and r10, r10, r7
    orr r10, r10, r6
    orr r2, r10, r2, lsr #7
    str r2, [r3]
    blt @L_02138e48
@L_02138e9c:
    cmp r5, #4
    bge @L_02138edc
    ldr r1, =data_ov016_02158a3c
    ldr r3, =data_ov016_021545f4
    ldr r6, [r1]
    ldr r1, [sp, #4]
    mov r2, #2
    mov r1, r1, lsl #2
    str r2, [sp]
    add r0, r6, r0, lsl #4
    add r2, r6, r5, lsl #2
    ldrh r1, [r3, r1]
    ldr r3, [r2, #0x104]
    ldr r0, [r0, r5, lsl #2]
    mov r2, r4
    bl DWCi_FNTlDisp
@L_02138edc:
    add r0, r5, #3
    mov r1, #4
    bl FX_ModS32
    add r7, sp, #0xd
    ldrb r1, [r7, r5]
    mov r6, #0
    cmp r1, #0
    ble @L_02138f64
    ldr r2, =data_ov016_021545bc
    mov r1, r0, lsl #2
    ldrh r0, [r2, r1]
    ldrb r10, [r7, r5]
    ldr r9, =data_ov016_02158a3c
    ldr r7, =0xc1fffcff
    ldr r8, =0xfe00ff00
    and r3, r4, #0xff
    mov r2, r0, lsl #0x17
@L_02138f20:
    ldr r0, [r9]
    add r6, r6, #1
    add r0, r1, r0
    ldr r11, [r0, #0xec]
    cmp r6, r10
    ldr r0, [r11]
    and r0, r0, r7
    str r0, [r11]
    ldr r0, [r9]
    add r0, r1, r0
    ldr r0, [r0, #0xec]
    ldr r11, [r0]
    and r11, r11, r8
    orr r11, r11, r3
    orr r11, r11, r2, lsr #7
    str r11, [r0]
    blt @L_02138f20
@L_02138f64:
    add r1, sp, #8
    ldrb r0, [r1, r5]
    mov r7, #0
    cmp r0, #0
    addle sp, sp, #0x18
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r10, =data_ov016_021545b4
    ldr r8, =data_ov016_02158a3c
    mov r9, r0
    mvn r6, #0
    mov r5, r7
@L_02138f90:
    ldr r0, [r8]
    mov r1, r6
    add r0, r0, r7, lsl #2
    ldr r0, [r0, #0xfc]
    mov r2, r5
    mov r3, r5
    bl DWCi_CELLlSetEffect
    ldr r0, [r8]
    mov r1, r7, lsl #2
    add r0, r0, r7, lsl #2
    ldrh r2, [r10, r1]
    ldr r0, [r0, #0xfc]
    mov r1, r6
    mov r3, r4
    bl DWCi_CELLlSetPosition
    add r7, r7, #1
    cmp r7, r9
    blt @L_02138f90
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 changePage(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    ldr r1, =data_ov016_02158a3c
    mov r5, #0
    ldr r1, [r1]
    mov r7, r0
    ldr r9, =data_ov016_021545f4
    mov r6, r5
    mov r4, r5
    strb r7, [r1, #0x11d]
    mov r8, #0xc
@L_0213902c:
    mul r0, r4, r8
    add r0, r9, r0, lsl #2
    ldrh r2, [r0, #2]
    mov r0, r7
    mov r1, r4
    bl disp_2
    add r4, r4, #1
    cmp r4, #4
    blt @L_0213902c
    cmp r7, #2
    moveq r5, #1
    beq @L_02139064
    cmp r7, #1
    moveq r6, #1
@L_02139064:
    mov r1, r5
    mov r0, #0x2f
    bl changeColor
    mov r1, r6
    mov r0, #0x30
    bl changeColor
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm s32 changeColor(...)
{
    stmdb sp!, {r3, lr}
    cmp r0, #0
    ldmltia sp!, {r3, pc}
    cmp r0, #0x2f
    bge @L_021390d4
    ldr r2, =data_ov016_02158a3c
    ldr r3, =data_ov016_02154594
    ldr r2, [r2]
    ldrb r1, [r3, r1]
    add r0, r2, r0, lsl #2
    ldr r2, [r0, #0x30]
    ldr r0, [r2]
    bic r0, r0, #0xc00
    str r0, [r2]
    ldrh r0, [r2, #4]
    bic r0, r0, #0xf000
    orr r0, r0, r1, lsl #12
    strh r0, [r2, #4]
    ldmia sp!, {r3, pc}
@L_021390d4:
    sub r12, r0, #0x2f
    cmp r12, #4
    bge @L_02139118
    ldr r0, =data_ov016_02158a3c
    ldr r2, =data_ov016_02154594
    ldr r3, [r0]
    ldrb r0, [r2, r1]
    add r1, r3, r12, lsl #2
    ldr r2, [r1, #0xec]
    ldr r1, [r2]
    bic r1, r1, #0xc00
    str r1, [r2]
    ldrh r1, [r2, #4]
    bic r1, r1, #0xf000
    orr r0, r1, r0, lsl #12
    strh r0, [r2, #4]
    ldmia sp!, {r3, pc}
@L_02139118:
    ldr r2, =data_ov016_02158a3c
    ldr r3, =data_ov016_02154596
    ldr r2, [r2]
    sub r0, r0, #0x33
    add r0, r2, r0, lsl #2
    ldrb r3, [r3, r1]
    ldr r0, [r0, #0xfc]
    mvn r1, #0
    mov r2, #0
    bl DWCi_CELLlSetPalette
    ldmia sp!, {r3, pc}
}

extern "C" s32 dispFocus(void)
{
    u8 *r1;
    s32 r4;
    s32 v0;
    s32 v3;
    s32 t0;
    s32 t1;
    s32 t2;
    u16 t4;
    u16 t5;
    r1 = (u8 *)*(s32 *)(((u8 *)&data_ov016_02158a3c));
    switch ((*(s8 *)(r1 + 0x121) - 0x2F)) {
        case 0:
            r4 = 0x42;
            break;
        case 1:
            r4 = 0x41;
            break;
        case 2:
            r4 = 0x43;
            break;
        case 3:
            r4 = 0x41;
            break;
        case 4:
        case 5:
            r4 = 0x45;
            break;
        default:
            r4 = 0x40;
            break;
    }
    t0 = *(s32 *)(r1 + 0x114);
    v0 = DWCi_CELLlGetObj(t0, 0);
    DWCi_CEINlSet(0, r4, v0);
    t1 = *(s32 *)(*(u8 * *)(((u8 *)&data_ov016_02158a3c)) + 0x114);
    DWCi_CELLlSetPriority(t1, (0 - 1), 2);
    t2 = *(s32 *)(*(u8 * *)(((u8 *)&data_ov016_02158a3c)) + 0x114);
    t4 = *(u16 *)(((u8 *)&data_ov016_021546b0) + (*(s8 *)(*(u8 * *)(((u8 *)&data_ov016_02158a3c)) + 0x121) << 2));
    t5 = *(u16 *)(((u8 *)&data_ov016_021546b2) + (*(s8 *)(*(u8 * *)(((u8 *)&data_ov016_02158a3c)) + 0x121) << 2));
    v3 = DWCi_CELLlSetPosition(t2, (0 - 1), t4, t5);
    return v3;
}

extern "C" asm void moveFocus(void)
{
    stmdb sp!, {r3, lr}
    ldr r2, =data_ov016_02158a3c
    ldr r3, =data_ov016_02154784
    ldr r12, [r2]
    add r1, r12, #0x100
    ldrsb lr, [r1, #0x21]
    add r1, r3, lr, lsl #2
    ldrsb r1, [r0, r1]
    strb r1, [r12, #0x121]
    ldr r1, [r2]
    add r2, r1, #0x100
    ldrsb r3, [r2, #0x21]
    cmp r3, #0x2e
    cmpeq r0, #3
    streqb lr, [r1, #0x120]
    beq @L_021395f0
    cmp r3, #0x33
    bne @L_02139284
    cmp r0, #1
    cmpne r0, #3
    streqb lr, [r1, #0x120]
    beq @L_021395f0
@L_02139284:
    cmp r3, #0x34
    bne @L_021392a8
    cmp r0, #1
    beq @L_0213929c
    cmp r0, #3
    bne @L_021392a8
@L_0213929c:
    cmp lr, #0x2e
    strneb lr, [r1, #0x120]
    b @L_021395f0
@L_021392a8:
    mvn r2, #0
    cmp r3, r2
    bne @L_021392d8
    add r0, r1, #0x100
    ldrsb r0, [r0, #0x20]
    cmp r0, #0x23
    cmpne r0, #0x32
    moveq r0, #0x23
    streqb r0, [r1, #0x121]
    movne r0, #0x22
    strneb r0, [r1, #0x121]
    b @L_021395f0
@L_021392d8:
    sub r0, r2, #1
    cmp r3, r0
    bne @L_02139380
    add r0, r1, #0x100
    ldrsb r0, [r0, #0x20]
    cmp r0, #0x26
    bgt @L_02139330
    bge @L_02139360
    cmp r0, #5
    bgt @L_02139324
    cmp r0, #0
    addge pc, pc, r0, lsl #2
    b @L_02139378
    b @L_02139350
    b @L_02139358
    b @L_02139378
    b @L_02139360
    b @L_02139368
    b @L_02139370
@L_02139324:
    cmp r0, #0x24
    beq @L_02139358
    b @L_02139378
@L_02139330:
    cmp r0, #0x28
    bgt @L_02139348
    bge @L_02139370
    cmp r0, #0x27
    beq @L_02139368
    b @L_02139378
@L_02139348:
    cmp r0, #0x31
    bne @L_02139378
@L_02139350:
    mov r0, #0x31
    b @L_021395ec
@L_02139358:
    mov r0, #0x24
    b @L_021395ec
@L_02139360:
    mov r0, #0x26
    b @L_021395ec
@L_02139368:
    mov r0, #0x27
    b @L_021395ec
@L_02139370:
    mov r0, #0x28
    b @L_021395ec
@L_02139378:
    mov r0, #0x25
    b @L_021395ec
@L_02139380:
    sub r0, r2, #2
    cmp r3, r0
    bne @L_02139460
    add r0, r1, #0x100
    ldrsb r0, [r0, #0x20]
    cmp r0, #0x23
    bgt @L_021393f0
    bge @L_02139450
    cmp r0, #0xb
    bgt @L_021393e4
    cmp r0, #0
    addge pc, pc, r0, lsl #2
    b @L_02139458
    b @L_02139458
    b @L_02139458
    b @L_02139458
    b @L_02139458
    b @L_02139458
    b @L_02139458
    b @L_02139430
    b @L_02139438
    b @L_02139458
    b @L_02139440
    b @L_02139448
    b @L_02139450
@L_021393e4:
    cmp r0, #0x22
    beq @L_02139450
    b @L_02139458
@L_021393f0:
    cmp r0, #0x2a
    bgt @L_02139408
    bge @L_02139438
    cmp r0, #0x29
    beq @L_02139430
    b @L_02139458
@L_02139408:
    cmp r0, #0x32
    bgt @L_02139458
    cmp r0, #0x2c
    blt @L_02139458
    beq @L_02139440
    cmp r0, #0x2d
    beq @L_02139448
    cmp r0, #0x32
    beq @L_02139450
    b @L_02139458
@L_02139430:
    mov r0, #0x29
    b @L_021395ec
@L_02139438:
    mov r0, #0x2a
    b @L_021395ec
@L_02139440:
    mov r0, #0x2c
    b @L_021395ec
@L_02139448:
    mov r0, #0x2d
    b @L_021395ec
@L_02139450:
    mov r0, #0x2e
    b @L_021395ec
@L_02139458:
    mov r0, #0x2b
    b @L_021395ec
@L_02139460:
    sub r0, r2, #3
    cmp r3, r0
    bne @L_02139508
    add r0, r1, #0x100
    ldrsb r0, [r0, #0x20]
    cmp r0, #0x26
    bgt @L_021394b8
    bge @L_021394e8
    cmp r0, #5
    bgt @L_021394ac
    cmp r0, #0
    addge pc, pc, r0, lsl #2
    b @L_02139500
    b @L_021394d8
    b @L_021394e0
    b @L_02139500
    b @L_021394e8
    b @L_021394f0
    b @L_021394f8
@L_021394ac:
    cmp r0, #0x24
    beq @L_021394e0
    b @L_02139500
@L_021394b8:
    cmp r0, #0x28
    bgt @L_021394d0
    bge @L_021394f8
    cmp r0, #0x27
    beq @L_021394f0
    b @L_02139500
@L_021394d0:
    cmp r0, #0x31
    bne @L_02139500
@L_021394d8:
    mov r0, #0
    b @L_021395ec
@L_021394e0:
    mov r0, #1
    b @L_021395ec
@L_021394e8:
    mov r0, #3
    b @L_021395ec
@L_021394f0:
    mov r0, #4
    b @L_021395ec
@L_021394f8:
    mov r0, #5
    b @L_021395ec
@L_02139500:
    mov r0, #2
    b @L_021395ec
@L_02139508:
    sub r0, r2, #4
    cmp r3, r0
    bne @L_021395f0
    add r0, r1, #0x100
    ldrsb r0, [r0, #0x20]
    cmp r0, #0x23
    bgt @L_02139578
    bge @L_021395e0
    cmp r0, #0xb
    bgt @L_0213956c
    cmp r0, #0
    addge pc, pc, r0, lsl #2
    b @L_021395e8
    b @L_021395e8
    b @L_021395e8
    b @L_021395e8
    b @L_021395e8
    b @L_021395e8
    b @L_021395e8
    b @L_021395b8
    b @L_021395c0
    b @L_021395e8
    b @L_021395c8
    b @L_021395d0
    b @L_021395d8
@L_0213956c:
    cmp r0, #0x22
    beq @L_021395d8
    b @L_021395e8
@L_02139578:
    cmp r0, #0x2a
    bgt @L_02139590
    bge @L_021395c0
    cmp r0, #0x29
    beq @L_021395b8
    b @L_021395e8
@L_02139590:
    cmp r0, #0x32
    bgt @L_021395e8
    cmp r0, #0x2c
    blt @L_021395e8
    beq @L_021395c8
    cmp r0, #0x2d
    beq @L_021395d0
    cmp r0, #0x32
    beq @L_021395e0
    b @L_021395e8
@L_021395b8:
    mov r0, #6
    b @L_021395ec
@L_021395c0:
    mov r0, #7
    b @L_021395ec
@L_021395c8:
    mov r0, #9
    b @L_021395ec
@L_021395d0:
    mov r0, #0xa
    b @L_021395ec
@L_021395d8:
    mov r0, #0xb
    b @L_021395ec
@L_021395e0:
    mov r0, #0x32
    b @L_021395ec
@L_021395e8:
    mov r0, #8
@L_021395ec:
    strb r0, [r1, #0x121]
@L_021395f0:
    bl dispFocus
    mov r0, #8
    bl DWCi_SNDlPlay
    ldmia sp!, {r3, pc}
}

extern "C" asm void taskEnd0(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #8
    ldr r4, =data_ov016_02158a3c
    mov r5, r0
    ldr r0, [r4]
    mov r1, #0
    ldr r0, [r0, #0xfc]
    bl DWCi_CELLlGetObj
    ldr r1, [r0]
    ldr r0, [r4]
    and r1, r1, #0xff
    add r4, r1, #0xc
    ldrb r0, [r0, #0x11d]
    mov r2, r4
    mov r1, #4
    bl disp_2
    cmp r4, #0xc0
    addlt sp, sp, #8
    ldmltia sp!, {r3, r4, r5, pc}
    ldr r1, =taskEnd1_2
    mov r0, r5
    bl DWCi_TSKlChangeFunc
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void taskEnd1_2(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #8
    ldr r1, =data_ov016_02158a3c
    mov r5, r0
    ldr r0, [r1]
    mov r1, #3
    ldr r2, [r0, #0xc0]
    ldrb r0, [r0, #0x11d]
    ldr r2, [r2]
    and r2, r2, #0xff
    add r4, r2, #0xc
    mov r2, r4
    bl disp_2
    cmp r4, #0xc0
    addlt sp, sp, #8
    ldmltia sp!, {r3, r4, r5, pc}
    ldr r1, =taskEnd2
    mov r0, r5
    bl DWCi_TSKlChangeFunc
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void taskEnd2(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #8
    ldr r1, =data_ov016_02158a3c
    mov r5, r0
    ldr r0, [r1]
    mov r1, #2
    ldr r2, [r0, #0x90]
    ldrb r0, [r0, #0x11d]
    ldr r2, [r2]
    and r2, r2, #0xff
    add r4, r2, #0xc
    mov r2, r4
    bl disp_2
    cmp r4, #0xc0
    addlt sp, sp, #8
    ldmltia sp!, {r3, r4, r5, pc}
    ldr r1, =taskEnd3
    mov r0, r5
    bl DWCi_TSKlChangeFunc
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void taskEnd3(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #8
    ldr r1, =data_ov016_02158a3c
    mov r5, r0
    ldr r0, [r1]
    mov r1, #1
    ldr r2, [r0, #0x60]
    ldrb r0, [r0, #0x11d]
    ldr r2, [r2]
    and r2, r2, #0xff
    add r4, r2, #0xc
    mov r2, r4
    bl disp_2
    cmp r4, #0xc0
    addlt sp, sp, #8
    ldmltia sp!, {r3, r4, r5, pc}
    ldr r1, =taskEnd4
    mov r0, r5
    bl DWCi_TSKlChangeFunc
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void taskEnd4(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #8
    ldr r1, =data_ov016_02158a3c
    mov r5, r0
    ldr r0, [r1]
    mov r1, #0
    ldr r2, [r0, #0x30]
    ldrb r0, [r0, #0x11d]
    ldr r2, [r2]
    and r2, r2, #0xff
    add r4, r2, #0xc
    mov r2, r4
    bl disp_2
    cmp r4, #0xc0
    addlt sp, sp, #8
    ldmltia sp!, {r3, r4, r5, pc}
    ldr r1, =taskEnd5
    mov r0, r5
    bl DWCi_TSKlChangeFunc
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 taskEnd5(s32 arg0)
{
    s32 r4;
    s32 r5;
    s32 r6;
    s32 r7;
    s32 v6;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    DWCi_TSKlDelete(0, arg0);
    r5 = 0;
    do {
        r6 = 0;
        do {
            t0 = *(s32 *)(((u8 *)(*(s32 *)(data_ov016_02158a3c) + (r5 << 4))) + (r6 << 2));
            DWCi_FNTlDelete(t0);
            if (r5 == 0) {
                t1 = *(s32 *)(((u8 *)(*(s32 *)(data_ov016_02158a3c) + (r6 << 2))) + 0x104);
                DWCi_CELLlDelete(t1);
            }
            r6 = (r6 + 1);
        } while (r6 < 4);
        r4 = 0;
        r5 = (r5 + 1);
        r7 = (s32)data_ov016_02158a3c;
    } while (r5 < 3);
    r5 = 0;
    do {
        t2 = *(s32 *)(((u8 *)(*(s32 *)(data_ov016_02158a3c) + (r5 << 2))) + 0xFC);
        DWCi_CELLlDelete(t2);
        r4 = (s32)data_ov016_02158a3c;
        r5 = (r5 + 1);
    } while (r5 < 2);
    r5 = 0;
    do {
        t3 = *(s32 *)(((u8 *)(*(s32 *)(data_ov016_02158a3c) + (r5 << 2))) + 0xEC);
        DWCi_OBJlDelete(t3);
        r4 = (s32)data_ov016_02158a3c;
        r5 = (r5 + 1);
    } while (r5 < 4);
    r5 = 0;
    do {
        t4 = *(s32 *)(((u8 *)(*(s32 *)(data_ov016_02158a3c) + (r5 << 2))) + 0x30);
        DWCi_OBJlDelete(t4);
        r4 = (s32)data_ov016_02158a3c;
        r5 = (r5 + 1);
    } while (r5 < 0x2F);
    v6 = DWCi_HEAPlFree_((s32)data_ov016_02158a3c_b);
    return v6;
}

extern "C" asm void DWCi_KB10lInit(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x20
    ldr r0, =data_ov016_0215495c
    mov r3, #0x1c
    ldrh r5, [r0]
    ldrh r4, [r0, #2]
    mov r2, #0x14
    mov r0, #0x6c
    mov r1, #4
    strh r5, [sp, #0x18]
    strh r4, [sp, #0x1a]
    strh r3, [sp, #0x1c]
    strh r2, [sp, #0x1e]
    bl DWCi_HEAPlAllocEx
    ldr r8, =data_ov016_02158a40
    mov r5, #0
    mov r1, #0x1f
    str r0, [r8]
    strb r1, [r0, #0x60]
    ldr r0, [r8]
    mov r1, #1
    strb r5, [r0, #0x63]
    ldr r0, [r8]
    ldr r7, =0xc1fffcff
    strb r1, [r0, #0x66]
    ldr r0, [r8]
    mov r6, r5
    strb r1, [r0, #0x67]
    ldr r0, [r8]
    mov r4, #0x36
    strb r1, [r0, #0x68]
@L_0213993c:
    mov r0, r6
    mov r1, r4
    bl DWCi_CEINlSetExObj
    ldr r1, [r8]
    add r1, r1, r5, lsl #2
    str r0, [r1, #0x10]
    ldr r0, [r8]
    add r0, r0, r5, lsl #2
    ldr r1, [r0, #0x10]
    ldr r0, [r1]
    and r0, r0, r7
    orr r0, r0, #0x200
    str r0, [r1]
    ldr r0, [r8]
    add r0, r0, r5, lsl #2
    ldr r1, [r0, #0x10]
    add r5, r5, #1
    ldrh r0, [r1, #4]
    cmp r5, #0xa
    bic r0, r0, #0xc00
    orr r0, r0, #0xc00
    strh r0, [r1, #4]
    blt @L_0213993c
    ldr r4, =data_ov016_0215485a
    ldr r7, =data_ov016_02158a40
    ldr r5, =0xc1fffcff
    mov r9, #0
@L_021399a8:
    ldrb r1, [r4, r6]
    mov r0, r9
    bl DWCi_CEINlSetExObj
    ldr r1, [r7]
    add r1, r1, r6, lsl #2
    str r0, [r1, #0x38]
    ldr r0, [r7]
    add r0, r0, r6, lsl #2
    ldr r1, [r0, #0x38]
    ldr r0, [r1]
    and r0, r0, r5
    orr r0, r0, #0x200
    str r0, [r1]
    ldr r0, [r7]
    add r0, r0, r6, lsl #2
    ldr r1, [r0, #0x38]
    add r6, r6, #1
    ldrh r0, [r1, #4]
    cmp r6, #2
    bic r0, r0, #0xc00
    orr r0, r0, #0xc00
    strh r0, [r1, #4]
    blt @L_021399a8
    ldr r8, =data_ov016_0215485c
    ldr r4, =data_ov016_02158a40
    mov r10, #0
    mov r7, #1
    mvn r6, #0
    mov r5, #0x200
    mov r11, #3
@L_02139a20:
    ldrb r1, [r8, r9]
    mov r0, r10
    mov r2, r7
    bl DWCi_CEINlSetExCell
    ldr r2, [r4]
    mov r1, r6
    add r2, r2, r9, lsl #2
    str r0, [r2, #0x40]
    ldr r0, [r4]
    mov r2, r5
    add r0, r0, r9, lsl #2
    ldr r0, [r0, #0x40]
    mov r3, r10
    bl DWCi_CELLlSetEffect
    ldr r0, [r4]
    mov r1, r6
    add r0, r0, r9, lsl #2
    ldr r0, [r0, #0x40]
    mov r2, r11
    bl DWCi_CELLlSetPriority
    add r9, r9, #1
    cmp r9, #2
    blt @L_02139a20
    ldr r4, =data_ov016_02158a40
    strh r10, [sp, #0x12]
@L_02139a84:
    add r0, sp, #0x14
    mov r9, #0
    str r0, [sp]
    mov r0, r9
    mov r3, r9
    mov r1, #0xc
    mov r2, #4
    str r9, [sp, #4]
    bl DWCi_FNTlFormEx
    ldr r1, [r4]
    ldr r7, =data_ov016_02154892
    strh r9, [sp, #0x18]
    str r0, [r1, r10, lsl #2]
    add r8, r10, r10, lsl #1
    mov r6, #2
    mov r5, #0x480
    add r11, sp, #0x10
@L_02139ac8:
    mov r0, r8, lsl #1
    ldrh r2, [r7, r0]
    ldrh r0, [sp, #0x1e]
    ldrh r1, [sp, #0x18]
    strh r2, [sp, #0x10]
    stmia sp, {r0, r6}
    str r5, [sp, #8]
    str r11, [sp, #0xc]
    ldr r0, [r4]
    ldrh r2, [sp, #0x1a]
    ldrh r3, [sp, #0x1c]
    ldr r0, [r0, r10, lsl #2]
    bl DWCi_FNTlDrawRect
    ldrh r0, [sp, #0x18]
    add r9, r9, #1
    cmp r9, #3
    add r0, r0, #0x20
    strh r0, [sp, #0x18]
    add r8, r8, #1
    blt @L_02139ac8
    mov r5, #0
    ldr r1, [sp, #0x14]
    mov r0, r5
    mov r2, r5
    bl DWCi_CELLlForm
    ldr r7, =data_ov016_02158a40
    ldr r1, [r7]
    add r1, r1, r10, lsl #2
    add r10, r10, #1
    str r0, [r1, #0x48]
    cmp r10, #4
    blt @L_02139a84
    mov r4, #1
    mov r0, r5
    mov r2, r4
    mov r1, #0x44
    bl DWCi_CEINlSetExCell
    ldr r1, [r7]
    sub r4, r4, #2
    str r0, [r1, #0x58]
    ldr r0, [r7]
    mov r1, r4
    ldr r0, [r0, #0x58]
    mov r3, r5
    mov r2, #0x200
    bl DWCi_CELLlSetEffect
    ldr r0, [r7]
    mov r1, r4
    ldr r0, [r0, #0x58]
    mov r2, r6
    bl DWCi_CELLlSetPriority
    mov r0, r5
    ldr r1, =taskStart0_2
    mov r2, r5
    mov r3, #0x78
    bl DWCi_TSKlForm
    ldr r2, [r7]
    mov r1, #0xc0
    str r0, [r2, #0x5c]
    mov r0, r5
    bl disp_3
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void DWCi_KB10lEnd(void)
{
    DWCi_CELLlDelete(*(s32 *)(*(u8 * *)(data_ov016_02158a40) + 0x58));
    DWCi_TSKlChangeFunc(*(s32 *)(*(u8 * *)(data_ov016_02158a40) + 0x5C), (s32)taskEnd0_2);
}

extern "C" u8 DWCi_KB10lGet(void)
{
    return *(u8 *)(*(u8 * *)(data_ov016_02158a40) + 0x60);
}

extern "C" void DWCi_KB10lSetErase(u8 arg0)
{
    *(u8 *)(*(u8 * *)(data_ov016_02158a40) + 0x66) = arg0;
}

extern "C" void DWCi_KB10lSetInput(u8 arg0)
{
    *(u8 *)(*(u8 * *)(data_ov016_02158a40) + 0x67) = arg0;
}

extern "C" void DWCi_KB10lSetShift(u8 arg0)
{
    *(u8 *)(*(u8 * *)(data_ov016_02158a40) + 0x68) = arg0;
}

extern "C" s32 DWCi_KB10lIsInit(void)
{
    return (*(s32 *)(data_ov016_02158a40) != 0 ? 1 : 0);
}

extern "C" asm void taskStart0_2(void)
{
    stmdb sp!, {r4, lr}
    sub sp, sp, #8
    ldr r1, =data_ov016_02158a40
    mov r4, r0
    ldr r0, [r1]
    ldr r0, [r0, #0x10]
    ldr r0, [r0]
    and r0, r0, #0xff
    sub r1, r0, #0xc
    cmp r1, #0x4c
    mov r0, #0
    ble @L_02139cb8
    bl disp_3
    add sp, sp, #8
    ldmia sp!, {r4, pc}
@L_02139cb8:
    mov r1, #0x4c
    bl disp_3
    mov r0, #1
    mov r1, #0xc0
    bl disp_3
    ldr r1, =taskStart1_3
    mov r0, r4
    bl DWCi_TSKlChangeFunc
    add sp, sp, #8
    ldmia sp!, {r4, pc}
}

extern "C" void taskStart1_3(void *arg0)
{
    s32 x;
    s32 y;
    inl_02139ce8(*(u8 **)data_ov016_02158a40 + 0x14, 0, &x, &y);
    y -= 0xC;
    if (y > 0x63) {
        ((s32 (*)(...))disp_3)(1, y);
        return;
    }
    ((s32 (*)(...))disp_3)(1, 0x63);
    ((s32 (*)(...))disp_3)(2, 0xC0);
    ((s32 (*)(...))DWCi_TSKlChangeFunc)(arg0, taskStart2_2);
}
