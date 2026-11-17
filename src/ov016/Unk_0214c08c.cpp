#include "ov016/Unk_0214c08c.hpp"

extern "C" void taskEnd1_5(void *arg0);
extern "C" void taskEnd2_4(s32 arg0);
extern "C" void taskEnd3_4(s32 arg0);
extern "C" s32 DWCi_MOV_MBP_MemInit(s32 arg0);
extern "C" s32 DWCi_MOV_MBP_Init(...);
extern "C" void DWCi_MOV_MBP_Start(s32 arg0, s32 arg1);
extern "C" s32 DWCi_MOV_MBP_RegistFile(...);
extern "C" void DWCi_MOV_MBP_AcceptChild(s32 arg0);
extern "C" void DWCi_MOV_MBP_KickChild(void);
extern "C" void DWCi_MOV_MBP_StartDownload(void);
extern "C" s32 DWCi_MOV_MBP_StartDownloadAll(...);
extern "C" s32 DWCi_MOV_MBP_IsBootableAll(void);
extern "C" void DWCi_MOV_MBP_StartRebootAll(void);
extern "C" void DWCi_MOV_MBP_Cancel(void);
extern "C" void MBPi_CheckAllReboot(void);
extern "C" void ParentStateCallback(void);
extern "C" void DWCi_MOV_MBP_ChangeState(u16 arg0);
extern "C" u16 DWCi_MOV_MBP_GetState(void);
extern "C" void DWCi_MOV_MBP_GetChildBmp(void);
extern "C" s32 DWCi_MOV_MBP_GetChildState(s32 arg0);
extern "C" s32 DWCi_MOV_MBP_GetChildInfo(...);
extern "C" s32 DWCi_MOV_MBP_GetPlayerNo(...);
extern "C" s32 DWCi_MOV_WH_MemInit(u8 *arg0);
extern "C" s32 DWCi_MOV_WH_ChangeSysState(...);
extern "C" s32 DWCi_MOV_WH_SetError(...);
extern "C" s32 DWCi_MOV_WH_StateInSetParentParam(...);
extern "C" s32 DWCi_MOV_WH_StateOutSetParentParam(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 WCi_MOV_WH_StateInSetParentWEPKey(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 DWCi_MOV_WH_StateOutSetParentWEPKey(u8 *arg0);
extern "C" s32 DWCi_MOV_WH_StateInStartParent(void);
extern "C" void DWCi_MOV_WH_StateOutStartParent(void);
extern "C" s32 DWCi_MOV_WH_StateInStartParentMP(void);
extern "C" s32 DWCi_MOV_WH_StateOutStartParentMP(u8 *arg0);
extern "C" s32 DWCi_MOV_WH_StateInStartParentKeyShare(void);
extern "C" s32 DWCi_MOV_WH_StateInEndParentKeyShare(void);
extern "C" s32 DWCi_MOV_WH_StateInEndParentMP(void);
extern "C" void DWCi_MOV_WH_StateOutEndParentMP(u8 *arg0);
extern "C" s32 DWCi_MOV_WH_StateInEndParent(...);
extern "C" s32 DWCi_MOV_WH_StateOutEndParent(u8 *arg0);
extern "C" s32 DWCi_MOV_WH_StateInEndChildKeyShare(void);
extern "C" s32 DWCi_MOV_WH_StateInEndChildMP(void);
extern "C" s32 DWCi_MOV_WH_StateOutEndChildMP(u8 *arg0);
extern "C" s32 DWCi_MOV_WH_StateInEndChild(...);
extern "C" s32 DWCi_MOV_WH_StateOutEndChild(u8 *arg0);
extern "C" s32 DWCi_MOV_WH_StateInReset(...);
extern "C" s32 DWCi_MOV_WH_StateOutReset(s32 arg0);
extern "C" s32 DWCi_MOV_WH_StateOutEnd(u8 *arg0);
extern "C" void DWCi_MOV_WH_SetGgid(s32 arg0);
extern "C" u16 DWCi_MOV_WH_GetBitmap(void);
extern "C" s32 DWCi_MOV_WH_GetSystemState(void);
extern "C" void DWCi_MOV_WH_StartMeasureChannel(void);
extern "C" s32 DWCi_MOV_WH_StateInMeasureChannel(s32 arg0);
extern "C" void DWCi_MOV_WH_StateOutMeasureChannel(void);
extern "C" void WHi_MeasureChannel(s32 arg0, s32 arg1);
extern "C" s32 DWCi_MOV_WH_GetMeasureChannel(void);
extern "C" s32 SelectChannel(...);
extern "C" s32 DWCi_MOV_WH_Initialize(...);
extern "C" void DWCi_MOV_WH_IndicateHandler(u8 *arg0);
extern "C" s32 DWCi_MOV_WH_StateInInitialize(void);
extern "C" s32 DWCi_MOV_WH_StateOutInitialize(u8 *arg0);
extern "C" s32 DWCi_MOV_WH_ParentConnect(s32 arg0, s32 arg1, s32 arg2);
extern "C" void DWCi_MOV_WH_SetJudgeAcceptFunc(s32 arg0);
extern "C" void DWCi_MOV_WH_GetSharedDataAdr(s32 arg0);
extern "C" s32 DWCi_MOV_WH_StepDS(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void DWCi_MOV_WH_Reset(void);
extern "C" s32 DWCi_MOV_WH_Finalize(...);
extern "C" s32 DWCi_MOV_WH_End(void);
extern "C" void DWCi_MOVInit(s32 arg0, u8 *arg1);
extern "C" s32 DWCi_MOVFinalize(void);
extern "C" s32 _DWCi_MOVPrepare(...);
extern "C" s32 DWCi_MOVStartAdmitChild(void);
extern "C" s32 DWCi_MOVStartDownloadandBootChild(void);
extern "C" void DWCi_MOVFramework(void);
extern "C" void DWCi_MOVGetStatus(void);
extern "C" void DWCi_GetChildInfo(void);
extern "C" void _DWCi_MOVSearchChannel(void);
extern "C" void _DWCi_MOVStartWaitChild(void);
extern "C" void _DWCi_MOV_WaitandDownloadandBoot_Child(void);
extern "C" s32 _DWCi_MOV_ReadyMovUserID(void);
extern "C" void _DWCi_MOV_MovUserID(void);
extern "C" s32 _DWCi_MOV_EraseFlashData(void);
extern "C" s32 _DWCi_MOVEnd(void);
extern "C" s32 JudgeConnectableChild(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 Parent_InitDataShare(void);
extern "C" void Parent_StepDataShare(void);
extern "C" void Parent_data_receive_progress(void);
extern "C" u16 Parent_get_child_data_kind(void);
extern "C" void func_ov016_0214ed80(void);
extern "C" void DWCi_ARClEnd(void);
extern "C" s32 func_ov016_0214efa8(s32 arg0, s32 arg1);
extern "C" s32 cbRead(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void cbReadRom(s32 arg0);
extern "C" s32 func_ov016_0214f074(void);
extern "C" void DWCi_ARClReadEx(void);

extern "C" char data_ov016_02154ea2[];
extern "C" char data_ov016_02154f5c[];
extern "C" char data_ov016_02155ec4[];
extern "C" char data_ov016_02155ec4_b[];
extern "C" char data_ov016_0215627c[];
extern "C" char data_ov016_021562a4[];
extern "C" char data_ov016_021562ac[];
extern "C" char data_ov016_021562b0[];
extern "C" char data_ov016_021562dc[];
extern "C" char data_ov016_02156308[];
extern "C" char data_ov016_02156328[];
extern "C" char data_ov016_02156358[];
extern "C" char data_ov016_02156380[];
extern "C" char data_ov016_02156398[];
extern "C" char data_ov016_021563b0[];
extern "C" char data_ov016_021563c8[];
extern "C" char data_ov016_021563e0[];
extern "C" char data_ov016_021563fc[];
extern "C" char data_ov016_0215642c[];
extern "C" char data_ov016_02156460[];
extern "C" char data_ov016_02156484[];
extern "C" char data_ov016_021564a8[];
extern "C" char data_ov016_021564c0[];
extern "C" char data_ov016_021564c8[];
extern "C" char data_ov016_021564d0[];
extern "C" char data_ov016_02158b38[];
extern "C" char data_ov016_02158b38_b[];
extern "C" char data_ov016_02158b3c[];
extern "C" char data_ov016_02158b40[];
extern "C" char data_ov016_02158b48[];
extern "C" char data_ov016_02158b4c[];
extern "C" char data_ov016_02158b4c_b[];
extern "C" s32 CARD_UnlockRom(...);
extern "C" void FS_CloseFile(void);
extern "C" void FS_InitFile(void);
extern "C" void FS_ReadFile(void);
extern "C" void FS_SetArchiveProc(void);
extern "C" s32 FS_UnloadArchiveTables(...);
extern "C" s32 G2x_ChangeBlendBrightness_(...);
extern "C" s32 MI_CpuCopy8(...);
extern "C" s32 MI_CpuFill8(...);
extern "C" void MI_UncompressLZ8(void);
extern "C" s32 OS_DisableInterrupts(...);
extern "C" void OS_GetLockID(void);
extern "C" s32 OS_GetTick(...);
extern "C" s32 OS_RestoreInterrupts(...);
extern "C" s32 WM_SetIndCallback(...);
extern "C" s32 WM_StartKeySharing(...);
extern "C" s32 OS_ReleaseLockID(...);
extern "C" void OS_SPrintf(void);
extern "C" void OS_GetMacAddress(void);
extern "C" s32 OS_Terminate(...);
extern "C" void FS_InitArchive(void);
extern "C" void FS_RegisterArchiveName(void);
extern "C" s32 FS_ReleaseArchiveName(...);
extern "C" s32 FS_NotifyArchiveAsyncEnd(...);
extern "C" void FS_OpenFile(void);
extern "C" void FS_GetLength(void);
extern "C" s32 FS_ChangeDir(...);
extern "C" void FS_LoadArchive(void);
extern "C" s32 FS_UnloadArchive(...);
extern "C" void FS_LoadArchiveTables(void);
extern "C" s32 FS_GetArchiveBase(...);
extern "C" void FS_GetFileImageTop(void);
extern "C" s32 CARD_LockRom(...);
extern "C" s32 CARDi_ReadRom(...);
extern "C" s32 func_020131c0(...);
extern "C" s32 WM_GetDispersionBeaconPeriod(...);
extern "C" void WM_GetNextTgid(void);
extern "C" s32 func_020136b4(...);
extern "C" void WM_Reset(void);
extern "C" s32 WM_End(...);
extern "C" void WM_SetParentParameter(void);
extern "C" s32 WM_StartParent(...);
extern "C" void WM_EndParent(void);
extern "C" void WM_Disconnect(void);
extern "C" s32 WM_StartMP(...);
extern "C" s32 WM_EndMP(...);
extern "C" s32 WM_StartDataSharing(...);
extern "C" s32 WM_StepDataSharing(...);
extern "C" s32 WM_GetSharedDataAddress(...);
extern "C" s32 WM_EndKeySharing(...);
extern "C" s32 WM_SetWEPKey(...);
extern "C" s32 WM_MeasureChannel(...);
extern "C" s32 DWCi_BACKUPlRead(...);
extern "C" s32 DWCi_SETTINGlGetMemMap(...);
extern "C" void disp_5(void);
extern "C" void cmpBack(void);
extern "C" void DWCi_CELLlDelete(void);
extern "C" void DWCi_CELLlGetPosition(void);
extern "C" void DWCi_QUElFormEx(void);
extern "C" void DWCi_QUElPopBack(void);
extern "C" void DWCi_FNTlDelete(void);
extern "C" void DWCi_HEAPlAllocEx(void);
extern "C" s32 DWCi_HEAPlFree_(...);
extern "C" s32 DWCi_TSKlChangeFunc(...);
extern "C" void DWCi_TSKlDelete(void);
extern "C" void func_ov087_02174240(void);
extern "C" s32 MB_CommGetChildUser(...);
extern "C" s32 MB_CommIsBootable(...);
extern "C" void MB_CommResponseRequest(void);
extern "C" void MB_GetSegmentLength(void);
extern "C" void MB_ReadSegment(void);
extern "C" void MB_RegisterFile(void);
extern "C" void MB_Init(void);
extern "C" void MB_SetParentCommParam(void);
extern "C" s32 MB_StartParentFromIdle(...);
extern "C" s32 MB_EndToIdle(...);
extern "C" void MB_DisconnectChild(void);

extern "C" void taskEnd1_5(void *arg0)
{
    s32 x;
    s32 y;
    ((s32 (*)(...))DWCi_CELLlGetPosition)(**(s32 **)data_ov016_02158b38, 0, &x, &y);
    y += 0xC;
    ((s32 (*)(...))disp_5)(y);
    if (y < 0xC0)
        return;
    if ((*(u8 **)data_ov016_02158b38)[0x1E] != 0)
        ((s32 (*)(...))DWCi_TSKlChangeFunc)(arg0, taskEnd2_4);
    else
        ((s32 (*)(...))DWCi_TSKlChangeFunc)(arg0, taskEnd3_4);
}

extern "C" void taskEnd2_4(s32 arg0)
{
    s32 t0 = (*(s8 *)(*(u8 * *)(((u8 *)&data_ov016_02158b38)) + 0x1A) + 1);
    u8 *t1 = *(u8 * *)(((u8 *)&data_ov016_02158b38));
    *(u8 *)(t1 + 0x1A) = t0;
    s8 t2 = *(s8 *)(*(u8 * *)(((u8 *)&data_ov016_02158b38)) + 0x1A);
    G2x_ChangeBlendBrightness_(0x4000050, t2);
    if (*(s8 *)(*(u8 * *)(((u8 *)&data_ov016_02158b38)) + 0x1A) < 0)
        return;
    DWCi_TSKlChangeFunc(arg0, (s32)((u8 *)&taskEnd3_4));
}

extern "C" void taskEnd3_4(s32 arg0)
{
    u8 *p;
    s32 i;
    *(volatile u32 *)0x4000000 &= ~0xE000;
    ((s32 (*)(...))DWCi_CELLlDelete)(**(s32 **)data_ov016_02158b38);
    ((s32 (*)(...))DWCi_CELLlDelete)((*(s32 **)data_ov016_02158b38)[1]);
    p = *(u8 **)data_ov016_02158b38;
    for (i = 0; i < ((u8 *)data_ov016_02154ea2)[p[0x1C]]; i++) {
        if (*(s32 *)(p + (i << 2) + 8) != 0)
            ((s32 (*)(...))DWCi_CELLlDelete)(*(s32 *)(p + (i << 2) + 8));
        p = *(u8 **)data_ov016_02158b38;
    }
    ((s32 (*)(...))DWCi_FNTlDelete)(*(s32 *)(p + 0x10));
    ((s32 (*)(...))DWCi_TSKlDelete)(1, arg0);
    ((s32 (*)(...))DWCi_HEAPlFree_)(data_ov016_02158b38_b);
}

extern "C" s32 DWCi_MOV_MBP_MemInit(s32 arg0)
{
    *(s32 *)(data_ov016_02158b3c) = arg0;
    DWCi_MOV_WH_MemInit((u8 *)((arg0 + 0x160) + 0x1B000));
    u8 *t0 = (u8 *)(*(s32 *)(data_ov016_02158b3c) + 0x1B000);
    *(s32 *)(t0 + 0x140) = 0;
    u8 *t1 = (u8 *)(*(s32 *)(data_ov016_02158b3c) + 0x1B000);
    *(s32 *)(t1 + 0x144) = 0;
    return (s32)t1;
}

extern "C" asm s32 DWCi_MOV_MBP_Init(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x28
    ldrb r3, [sp, #0x12]
    mov r4, r1
    ldr r2, =0x2fffc80
    bic r1, r3, #0xf
    orr r1, r1, #1
    strb r1, [sp, #0x12]
    ldrb r3, [r2, #0x1a]
    mov r5, r0
    add r0, r2, #6
    add r1, sp, #0x14
    mov r2, #0x14
    strb r3, [sp, #0x13]
    bl MI_CpuCopy8
    ldrb r2, [sp, #0x12]
    ldr r0, =data_ov016_02158b3c
    add lr, sp, #4
    mov r1, #0
    ldr r0, [r0]
    bic r2, r2, #0xf0
    mov r12, r0
    strb r2, [sp, #0x12]
    strh r1, [lr]
    strh r1, [lr, #2]
    strh r1, [lr, #4]
    strh r1, [lr, #6]
    strh r1, [lr, #8]
    strh r1, [lr, #0xa]
    strh r1, [lr, #0xc]
    mov r3, #3
@L_0214c2d0:
    ldrh r1, [lr, #2]
    ldrh r2, [lr], #4
    subs r3, r3, #1
    strh r1, [r12, #2]
    strh r2, [r12], #4
    bne @L_0214c2d0
    ldrh r2, [lr]
    add r1, r0, #0x40
    add r1, r1, #0x10000
    strh r2, [r12]
    add r0, r0, #0x1b000
    str r1, [r0, #0x140]
    mov r1, #2
    str r1, [sp]
    ldr r0, =data_ov016_02158b3c
    add r1, sp, #0x12
    ldr r0, [r0]
    mov r2, r5
    add r0, r0, #0x1b000
    ldr r0, [r0, #0x140]
    mov r3, r4
    bl MB_Init
    cmp r0, #0
    beq @L_0214c334
    bl OS_Terminate
@L_0214c334:
    mov r4, #1
    mov r1, r4
    mov r0, #0x100
    bl MB_SetParentCommParam
    ldr r0, =ParentStateCallback
    bl func_ov087_02174240
    mov r0, r4
    bl DWCi_MOV_MBP_ChangeState
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void DWCi_MOV_MBP_Start(s32 arg0, s32 arg1)
{
    s32 r5;
    s32 v1;
    s32 v3;
    DWCi_MOV_MBP_ChangeState(2);
    v1 = MB_StartParentFromIdle(arg1);
    r5 = arg0;
    if (v1 != 0) {
        DWCi_MOV_MBP_ChangeState(7);
        return;
    } else {
        v3 = DWCi_MOV_MBP_RegistFile(r5);
        if (v3 != 0)
            return;
        OS_Terminate();
        return;
    }
}

extern "C" asm s32 DWCi_MOV_MBP_RegistFile(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x48
    mov r6, r0
    ldr r0, [r6]
    mov r5, #0
    cmp r0, #0
    moveq r4, r5
    beq @L_0214c3f8
    add r4, sp, #0
    mov r0, r4
    bl FS_InitFile
    ldr r1, [r6]
    mov r0, r4
    bl FS_OpenFile
    cmp r0, #0
    addeq sp, sp, #0x48
    moveq r0, r5
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
@L_0214c3f8:
    mov r0, r4
    bl MB_GetSegmentLength
    cmp r0, #0
    beq @L_0214c460
    ldr r7, =data_ov016_02158b3c
    ldr r0, [r7]
    add r1, r0, #0x2c
    add r0, r0, #0x1b000
    str r1, [r0, #0x144]
    ldr r0, [r7]
    add r0, r0, #0x1b000
    ldr r1, [r0, #0x144]
    cmp r1, #0
    beq @L_0214c460
    mov r0, r4
    mov r2, #0x10000
    bl MB_ReadSegment
    cmp r0, #0
    beq @L_0214c460
    ldr r1, [r7]
    mov r0, r6
    add r1, r1, #0x1b000
    ldr r1, [r1, #0x144]
    bl MB_RegisterFile
    cmp r0, #0
    movne r5, #1
@L_0214c460:
    add r0, sp, #0
    cmp r4, r0
    bne @L_0214c470
    bl FS_CloseFile
@L_0214c470:
    mov r0, r5
    add sp, sp, #0x48
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" void DWCi_MOV_MBP_AcceptChild(s32 arg0)
{
    s32 k = 1;
    u16 m;
    s32 e;
    if (((s32 (*)(...))MB_CommResponseRequest)(arg0, k) != 0)
        return;
    m = ~(k << arg0);
    e = ((s32 (*)(...))OS_DisableInterrupts)();
    (*(u16 **)data_ov016_02158b3c)[1] &= m;
    (*(u16 **)data_ov016_02158b3c)[2] &= m;
    (*(u16 **)data_ov016_02158b3c)[3] &= m;
    (*(u16 **)data_ov016_02158b3c)[4] &= m;
    (*(u16 **)data_ov016_02158b3c)[5] &= m;
    (*(u16 **)data_ov016_02158b3c)[6] &= m;
    ((s32 (*)(...))OS_RestoreInterrupts)(e);
    ((s32 (*)(...))MB_DisconnectChild)(arg0);
}

extern "C" asm void DWCi_MOV_MBP_KickChild(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r1, #0
    mov r4, r0
    bl MB_CommResponseRequest
    cmp r0, #0
    bne @L_0214c5bc
    mov r0, #1
    mvn r0, r0, lsl r4
    mov r5, r0, lsl #0x10
    bl OS_DisableInterrupts
    ldr r1, =data_ov016_02158b3c
    ldr r3, [r1]
    ldrh r2, [r3, #2]
    and r2, r2, r5, lsr #16
    strh r2, [r3, #2]
    ldr r3, [r1]
    ldrh r2, [r3, #4]
    and r2, r2, r5, lsr #16
    strh r2, [r3, #4]
    ldr r3, [r1]
    ldrh r2, [r3, #6]
    and r2, r2, r5, lsr #16
    strh r2, [r3, #6]
    ldr r3, [r1]
    ldrh r2, [r3, #8]
    and r2, r2, r5, lsr #16
    strh r2, [r3, #8]
    ldr r3, [r1]
    ldrh r2, [r3, #0xa]
    and r2, r2, r5, lsr #16
    strh r2, [r3, #0xa]
    ldr r2, [r1]
    ldrh r1, [r2, #0xc]
    and r1, r1, r5, lsr #16
    strh r1, [r2, #0xc]
    bl OS_RestoreInterrupts
    mov r0, r4
    bl MB_DisconnectChild
    ldmia sp!, {r3, r4, r5, pc}
@L_0214c5bc:
    bl OS_DisableInterrupts
    ldr r2, =data_ov016_02158b3c
    mov r1, #1
    ldr r5, [r2]
    mvn r1, r1, lsl r4
    ldrh r3, [r5, #4]
    mov r1, r1, lsl #0x10
    and r3, r3, r1, lsr #16
    strh r3, [r5, #4]
    ldr r3, [r2]
    ldrh r2, [r3, #2]
    and r1, r2, r1, lsr #16
    strh r1, [r3, #2]
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void DWCi_MOV_MBP_StartDownload(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r1, #2
    mov r4, r0
    bl MB_CommResponseRequest
    cmp r0, #0
    bne @L_0214c698
    mov r0, #1
    mvn r0, r0, lsl r4
    mov r5, r0, lsl #0x10
    bl OS_DisableInterrupts
    ldr r1, =data_ov016_02158b3c
    ldr r3, [r1]
    ldrh r2, [r3, #2]
    and r2, r2, r5, lsr #16
    strh r2, [r3, #2]
    ldr r3, [r1]
    ldrh r2, [r3, #4]
    and r2, r2, r5, lsr #16
    strh r2, [r3, #4]
    ldr r3, [r1]
    ldrh r2, [r3, #6]
    and r2, r2, r5, lsr #16
    strh r2, [r3, #6]
    ldr r3, [r1]
    ldrh r2, [r3, #8]
    and r2, r2, r5, lsr #16
    strh r2, [r3, #8]
    ldr r3, [r1]
    ldrh r2, [r3, #0xa]
    and r2, r2, r5, lsr #16
    strh r2, [r3, #0xa]
    ldr r2, [r1]
    ldrh r1, [r2, #0xc]
    and r1, r1, r5, lsr #16
    strh r1, [r2, #0xc]
    bl OS_RestoreInterrupts
    mov r0, r4
    bl MB_DisconnectChild
    ldmia sp!, {r3, r4, r5, pc}
@L_0214c698:
    bl OS_DisableInterrupts
    mov r12, #1
    ldr r2, =data_ov016_02158b3c
    mvn r1, r12, lsl r4
    ldr r5, [r2]
    mov r1, r1, lsl #0x10
    ldrh r3, [r5, #6]
    mov r4, r12, lsl r4
    and r1, r3, r1, lsr #16
    strh r1, [r5, #6]
    ldr r3, [r2]
    mov r1, r4, lsl #0x10
    ldrh r2, [r3, #8]
    orr r1, r2, r1, lsr #16
    strh r1, [r3, #8]
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm s32 DWCi_MOV_MBP_StartDownloadAll(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r0, #3
    bl DWCi_MOV_MBP_ChangeState
    mov r5, #1
    ldr r7, =data_ov016_02158b3c
    mov r4, r5
@L_0214c6f8:
    ldr r1, [r7]
    ldrh r0, [r1, #2]
    tst r0, r4, lsl r5
    beq @L_0214c7a4
    ldrh r0, [r1, #4]
    tst r0, r4, lsl r5
    bne @L_0214c7a4
    ldrh r0, [r1, #6]
    tst r0, r4, lsl r5
    bne @L_0214c79c
    mvn r0, r4, lsl r5
    mov r6, r0, lsl #0x10
    bl OS_DisableInterrupts
    ldr r2, [r7]
    ldrh r1, [r2, #2]
    and r1, r1, r6, lsr #16
    strh r1, [r2, #2]
    ldr r2, [r7]
    ldrh r1, [r2, #4]
    and r1, r1, r6, lsr #16
    strh r1, [r2, #4]
    ldr r2, [r7]
    ldrh r1, [r2, #6]
    and r1, r1, r6, lsr #16
    strh r1, [r2, #6]
    ldr r2, [r7]
    ldrh r1, [r2, #8]
    and r1, r1, r6, lsr #16
    strh r1, [r2, #8]
    ldr r2, [r7]
    ldrh r1, [r2, #0xa]
    and r1, r1, r6, lsr #16
    strh r1, [r2, #0xa]
    ldr r2, [r7]
    ldrh r1, [r2, #0xc]
    and r1, r1, r6, lsr #16
    strh r1, [r2, #0xc]
    bl OS_RestoreInterrupts
    mov r0, r5
    bl MB_DisconnectChild
    b @L_0214c7a4
@L_0214c79c:
    mov r0, r5
    bl DWCi_MOV_MBP_StartDownload
@L_0214c7a4:
    add r0, r5, #1
    mov r0, r0, lsl #0x10
    mov r5, r0, lsr #0x10
    cmp r5, #0x10
    blo @L_0214c6f8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" s32 DWCi_MOV_MBP_IsBootableAll(void)
{
    u8 *r4;
    s32 r5;
    s32 r6;
    s32 v0;
    if (*(u16 *)(*(u8 * *)(data_ov016_02158b3c) + 0x2) == 0)
        return 0;
    r4 = (u8 *)data_ov016_02158b3c;
    r5 = 1;
    r6 = 1;
    do {
        if ((*(u16 *)(*(u8 * *)(r4) + 0x2) & (r5 << r6)) != 0) {
            v0 = MB_CommIsBootable(r6);
            if (v0 == 0)
                return 0;
        }
        r6 = ((u32)((r6 + 1) << 0x10) >> 0x10);
    } while ((u32)r6 < (u32)0x10);
    return 1;
}

extern "C" asm void DWCi_MOV_MBP_StartRebootAll(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r7, #1
    ldr r4, =data_ov016_02158b3c
    mov r8, #0
    mov r5, #3
    mov r6, r7
@L_0214c840:
    ldr r0, [r4]
    mov r9, r6, lsl r7
    ldrh r0, [r0, #0xa]
    tst r0, r6, lsl r7
    beq @L_0214c8e8
    mov r0, r7
    mov r1, r5
    bl MB_CommResponseRequest
    cmp r0, #0
    movne r0, r9, lsl #0x10
    orrne r8, r8, r0, lsr #16
    bne @L_0214c8e8
    mvn r0, r9
    mov r9, r0, lsl #0x10
    bl OS_DisableInterrupts
    ldr r2, [r4]
    ldrh r1, [r2, #2]
    and r1, r1, r9, lsr #16
    strh r1, [r2, #2]
    ldr r2, [r4]
    ldrh r1, [r2, #4]
    and r1, r1, r9, lsr #16
    strh r1, [r2, #4]
    ldr r2, [r4]
    ldrh r1, [r2, #6]
    and r1, r1, r9, lsr #16
    strh r1, [r2, #6]
    ldr r2, [r4]
    ldrh r1, [r2, #8]
    and r1, r1, r9, lsr #16
    strh r1, [r2, #8]
    ldr r2, [r4]
    ldrh r1, [r2, #0xa]
    and r1, r1, r9, lsr #16
    strh r1, [r2, #0xa]
    ldr r2, [r4]
    ldrh r1, [r2, #0xc]
    and r1, r1, r9, lsr #16
    strh r1, [r2, #0xc]
    bl OS_RestoreInterrupts
    mov r0, r7
    bl MB_DisconnectChild
@L_0214c8e8:
    add r0, r7, #1
    mov r0, r0, lsl #0x10
    mov r7, r0, lsr #0x10
    cmp r7, #0x10
    blo @L_0214c840
    cmp r8, #0
    bne @L_0214c910
    mov r0, #7
    bl DWCi_MOV_MBP_ChangeState
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0214c910:
    mov r0, #4
    bl DWCi_MOV_MBP_ChangeState
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" void DWCi_MOV_MBP_Cancel(void)
{
    DWCi_MOV_MBP_ChangeState(6);
    MB_EndToIdle();
}

extern "C" void MBPi_CheckAllReboot(void)
{
    u16 *p = *(u16 **)data_ov016_02158b3c;
    if (p[0] == 4 && p[1] == p[6])
        ((void (*)(void))MB_EndToIdle)();
}

extern "C" asm void ParentStateCallback(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    ldr r4, =data_ov016_02158b3c
    mov r8, r0
    mov r7, r2
    cmp r1, #0xe
    mov r5, #1
    addls pc, pc, r1, lsl #2
    b @L_0214cc74
    b @L_0214cc74
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
    b @L_0214c9c0
    b @L_0214ca44
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
    b @L_0214cb78
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
    b @L_0214cbac
    b @L_0214cac8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
    b @L_0214cbe4
    b @L_0214cc34
    b @L_0214cb30
@L_0214c9c0:
    bl DWCi_MOV_MBP_GetState
    cmp r0, #2
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r6, [r4]
    bl OS_DisableInterrupts
    mov r1, r5, lsl r8
    ldrh r2, [r6, #2]
    mov r1, r1, lsl #0x10
    orr r1, r2, r1, lsr #16
    strh r1, [r6, #2]
    bl OS_RestoreInterrupts
    sub r2, r8, #1
    mov r0, #0x1e
    mul r0, r2, r0
    ldr r1, [r4]
    add r2, r1, #0x24
    ldrb r1, [r7, #0xa]
    add r3, r2, r0
    strb r1, [r2, r0]
    ldrb r1, [r7, #0xb]
    strb r1, [r3, #1]
    ldrb r1, [r7, #0xc]
    strb r1, [r3, #2]
    ldrb r1, [r7, #0xd]
    strb r1, [r3, #3]
    ldrb r1, [r7, #0xe]
    strb r1, [r3, #4]
    ldrb r1, [r7, #0xf]
    strb r1, [r3, #5]
    ldr r1, [r4]
    add r0, r1, r0
    strh r8, [r0, #0x2a]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0214ca44:
    bl DWCi_MOV_MBP_GetChildState
    cmp r0, #6
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    mvn r0, r5, lsl r8
    mov r5, r0, lsl #0x10
    bl OS_DisableInterrupts
    ldr r2, [r4]
    ldrh r1, [r2, #2]
    and r1, r1, r5, lsr #16
    strh r1, [r2, #2]
    ldr r2, [r4]
    ldrh r1, [r2, #4]
    and r1, r1, r5, lsr #16
    strh r1, [r2, #4]
    ldr r2, [r4]
    ldrh r1, [r2, #6]
    and r1, r1, r5, lsr #16
    strh r1, [r2, #6]
    ldr r2, [r4]
    ldrh r1, [r2, #8]
    and r1, r1, r5, lsr #16
    strh r1, [r2, #8]
    ldr r2, [r4]
    ldrh r1, [r2, #0xa]
    and r1, r1, r5, lsr #16
    strh r1, [r2, #0xa]
    ldr r2, [r4]
    ldrh r1, [r2, #0xc]
    and r1, r1, r5, lsr #16
    strh r1, [r2, #0xc]
    bl OS_RestoreInterrupts
    bl MBPi_CheckAllReboot
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0214cac8:
    bl DWCi_MOV_MBP_GetState
    cmp r0, #2
    beq @L_0214cae0
    mov r0, r8
    bl DWCi_MOV_MBP_KickChild
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0214cae0:
    ldr r3, [r4]
    mov r0, r5, lsl r8
    ldrh r2, [r3, #4]
    mov r1, r0, lsl #0x10
    mov r0, r8
    orr r1, r2, r1, lsr #16
    strh r1, [r3, #4]
    bl DWCi_MOV_MBP_AcceptChild
    mov r0, r8
    bl MB_CommGetChildUser
    cmp r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r1, [r4]
    sub r2, r8, #1
    add r3, r1, #0xe
    mov r1, #0x1e
    mla r1, r2, r1, r3
    mov r2, #0x16
    bl MI_CpuCopy8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0214cb30:
    ldr r2, [r4]
    mvn r0, r5, lsl r8
    ldrh r1, [r2, #4]
    mov r0, r0, lsl #0x10
    mov r3, r5, lsl r8
    and r0, r1, r0, lsr #16
    strh r0, [r2, #4]
    ldr r2, [r4]
    mov r0, r3, lsl #0x10
    ldrh r1, [r2, #6]
    orr r0, r1, r0, lsr #16
    strh r0, [r2, #6]
    bl DWCi_MOV_MBP_GetState
    cmp r0, #3
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    mov r0, r8
    bl DWCi_MOV_MBP_StartDownload
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0214cb78:
    ldr r2, [r4]
    mvn r0, r5, lsl r8
    ldrh r1, [r2, #8]
    mov r0, r0, lsl #0x10
    mov r3, r5, lsl r8
    and r0, r1, r0, lsr #16
    strh r0, [r2, #8]
    ldr r2, [r4]
    mov r0, r3, lsl #0x10
    ldrh r1, [r2, #0xa]
    orr r0, r1, r0, lsr #16
    strh r0, [r2, #0xa]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0214cbac:
    ldr r2, [r4]
    mvn r0, r5, lsl r8
    ldrh r1, [r2, #0xa]
    mov r0, r0, lsl #0x10
    mov r3, r5, lsl r8
    and r0, r1, r0, lsr #16
    strh r0, [r2, #0xa]
    ldr r2, [r4]
    mov r0, r3, lsl #0x10
    ldrh r1, [r2, #0xc]
    orr r0, r1, r0, lsr #16
    strh r0, [r2, #0xc]
    bl MBPi_CheckAllReboot
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0214cbe4:
    bl DWCi_MOV_MBP_GetState
    cmp r0, #4
    bne @L_0214cbf8
    mov r0, #5
    b @L_0214cbfc
@L_0214cbf8:
    mov r0, #0
@L_0214cbfc:
    bl DWCi_MOV_MBP_ChangeState
    ldr r0, [r4]
    add r0, r0, #0x1b000
    ldr r1, [r0, #0x144]
    cmp r1, #0
    movne r1, #0
    strne r1, [r0, #0x144]
    ldr r0, [r4]
    add r0, r0, #0x1b000
    ldr r1, [r0, #0x140]
    cmp r1, #0
    movne r1, #0
    strne r1, [r0, #0x140]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0214cc34:
    ldrh r0, [r7]
    cmp r0, #8
    bgt @L_0214cc60
    ldmgeia sp!, {r4, r5, r6, r7, r8, pc}
    cmp r0, #2
    ldmgtia sp!, {r4, r5, r6, r7, r8, pc}
    cmp r0, #1
    ldmltia sp!, {r4, r5, r6, r7, r8, pc}
    cmpne r0, #2
    beq @L_0214cc68
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0214cc60:
    cmp r0, #9
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
@L_0214cc68:
    mov r0, #7
    bl DWCi_MOV_MBP_ChangeState
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0214cc74:
    bl OS_Terminate
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" void DWCi_MOV_MBP_ChangeState(u16 arg0)
{
    *(u16 *)(*(u8 * *)(data_ov016_02158b3c)) = arg0;
}

extern "C" u16 DWCi_MOV_MBP_GetState(void)
{
    return *(u16 *)(*(u8 * *)(data_ov016_02158b3c));
}

extern "C" asm void DWCi_MOV_MBP_GetChildBmp(void)
{
    ldr r2, =data_ov016_02158b3c
    ldr r1, =data_ov016_02155ec4
    ldr r12, [r2]
    ldr r2, =data_ov016_02155ec4_b
    add r3, r12, #2
    str r3, [r1]
    add r3, r12, #4
    str r3, [r1, #4]
    add r3, r12, #6
    str r3, [r1, #8]
    add r3, r12, #8
    str r3, [r1, #0xc]
    add r3, r12, #0xa
    str r3, [r1, #0x10]
    add r3, r12, #0xc
    str r3, [r1, #0x14]
    ldr r0, [r2, r0, lsl #2]
    ldrh r0, [r0]
    bx lr
}

extern "C" s32 DWCi_MOV_MBP_GetChildState(s32 arg0)
{
    s32 local[4];
    s32 r0;
    s32 r1;
    s32 r2;
    s32 r3;
    s32 r4;
    s32 r5;
    s32 r6;
    s32 v0;
    v0 = OS_DisableInterrupts(arg0);
    r0 = v0;
    r4 = 1;
    r2 = (s32)*(u8 * *)(((u8 *)&data_ov016_02158b3c));
    r3 = (1 << arg0);
    r1 = *(u16 *)(*(u8 * *)(((u8 *)&data_ov016_02158b3c)) + 0x2);
    r5 = ((1 << arg0) << 0x10);
    r6 = v0;
    if ((r1 & ((u32)r5 >> 0x10)) == 0) {
        OS_RestoreInterrupts(r0, r1, r2, r3);
        return 0;
    } else {
        MI_CpuCopy8(r2, (s32)((u8 *)local), 0xE, r3);
        OS_RestoreInterrupts(r6);
        if ((*(u16 *)(((u8 *)local) + 0x4) & ((u32)r5 >> 0x10)) != 0) {
            return 2;
        } else {
            if ((*(u16 *)(((u8 *)local) + 0x6) & ((u32)r5 >> 0x10)) != 0) {
                return 3;
            } else {
                if ((*(u16 *)(((u8 *)local) + 0x8) & ((u32)r5 >> 0x10)) != 0) {
                    return 4;
                } else {
                    if ((*(u16 *)(((u8 *)local) + 0xA) & ((u32)r5 >> 0x10)) != 0) {
                        return 5;
                    } else {
                        if ((*(u16 *)(((u8 *)local) + 0xC) & ((u32)r5 >> 0x10)) != 0) {
                            r4 = 6;
                        }
                        return r4;
                    }
                }
            }
        }
    }
}

extern "C" asm s32 DWCi_MOV_MBP_GetChildInfo(...)
{
    ldr r1, =data_ov016_02158b3c
    mov r2, #1
    ldr r3, [r1]
    ldrh r1, [r3, #2]
    tst r1, r2, lsl r0
    subne r1, r0, #1
    addne r2, r3, #0xe
    movne r0, #0x1e
    mlane r0, r1, r0, r2
    moveq r0, #0
    bx lr
}

extern "C" asm s32 DWCi_MOV_MBP_GetPlayerNo(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    ldr r1, =data_ov016_02158b3c
    mov lr, #1
    ldr r5, [r1]
    mov r12, lr
    ldrh r4, [r5, #2]
    add r1, r5, #0x24
    mov r6, #0x1e
@L_0214ce18:
    tst r4, r12, lsl lr
    beq @L_0214ce80
    sub r2, lr, #1
    mul r3, r2, r6
    ldrb r8, [r0]
    ldrb r7, [r1, r3]
    add r2, r1, r3
    cmp r8, r7
    ldreqb r8, [r0, #1]
    ldreqb r7, [r2, #1]
    cmpeq r8, r7
    ldreqb r8, [r0, #2]
    ldreqb r7, [r2, #2]
    cmpeq r8, r7
    ldreqb r8, [r0, #3]
    ldreqb r7, [r2, #3]
    cmpeq r8, r7
    ldreqb r8, [r0, #4]
    ldreqb r7, [r2, #4]
    cmpeq r8, r7
    ldreqb r7, [r0, #5]
    ldreqb r2, [r2, #5]
    cmpeq r7, r2
    addeq r0, r5, r3
    ldreqh r0, [r0, #0x2a]
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
@L_0214ce80:
    add r2, lr, #1
    mov r2, r2, lsl #0x10
    mov lr, r2, lsr #0x10
    cmp lr, #2
    blo @L_0214ce18
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" s32 DWCi_MOV_WH_MemInit(u8 *arg0)
{
    *(s32 *)(data_ov016_02158b40 + 0x4) = (s32)arg0;
    *(s32 *)(arg0 + 0x40) = 0;
    u8 *t0 = (u8 *)(*(s32 *)(data_ov016_02158b40 + 0x4) + 0x1000);
    *(s32 *)(t0 + 0x3A8) = 0;
    u8 *t1 = (u8 *)(*(s32 *)(data_ov016_02158b40 + 0x4) + 0x1000);
    *(s32 *)(t1 + 0x3AC) = 0;
    u8 *t2 = (u8 *)(*(s32 *)(data_ov016_02158b40 + 0x4) + 0x1000);
    *(s32 *)(t2 + 0x3B0) = 0;
    return (s32)t2;
}

extern "C" asm s32 DWCi_MOV_WH_ChangeSysState(...)
{
    stmdb sp!, {r4, lr}
    ldr r1, =data_ov016_02158b40
    mov r4, r0
    ldr r3, [r1]
    cmp r3, #0
    beq @L_0214cf10
    ldr r1, [r1, #4]
    ldr r0, =data_ov016_0215627c
    ldr r2, [r1, #0x40]
    ldr r1, =data_ov016_021562a4
    ldr r2, [r0, r2, lsl #2]
    mov r0, #0x8000000
    blx r3
@L_0214cf10:
    ldr r0, =data_ov016_02158b40
    ldr r1, [r0, #4]
    str r4, [r1, #0x40]
    ldr r3, [r0]
    cmp r3, #0
    ldmeqia sp!, {r4, pc}
    ldr r1, [r0, #4]
    ldr r0, =data_ov016_0215627c
    ldr r2, [r1, #0x40]
    ldr r1, =data_ov016_021562ac
    ldr r2, [r0, r2, lsl #2]
    mov r0, #0x8000000
    blx r3
    ldmia sp!, {r4, pc}
}

extern "C" asm s32 DWCi_MOV_WH_SetError(...)
{
    ldr r1, =data_ov016_02158b40
    ldr r2, [r1, #4]
    ldr r1, [r2, #0x40]
    sub r1, r1, #9
    cmp r1, #1
    strhi r0, [r2, #0x54]
    bx lr
}

extern "C" asm s32 DWCi_MOV_WH_StateInSetParentParam(...)
{
    stmdb sp!, {r3, lr}
    mov r0, #3
    bl DWCi_MOV_WH_ChangeSysState
    ldr r1, =data_ov016_02158b40
    ldr r0, =DWCi_MOV_WH_StateOutSetParentParam
    ldr r1, [r1, #4]
    bl WM_SetParentParameter
    cmp r0, #2
    moveq r0, #1
    ldmeqia sp!, {r3, pc}
    bl DWCi_MOV_WH_SetError
    mov r0, #9
    bl DWCi_MOV_WH_ChangeSysState
    mov r0, #0
    ldmia sp!, {r3, pc}
}

extern "C" s32 DWCi_MOV_WH_StateOutSetParentParam(u8 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 v1;
    s32 v2;
    s32 v3;
    s32 v4;
    s32 v5;
    if (*(u16 *)(arg0 + 0x2) != 0) {
        DWCi_MOV_WH_SetError();
        v1 = DWCi_MOV_WH_ChangeSysState(9);
        return v1;
    } else {
        arg0 = (u8 *)*(s32 *)(((u8 *)(*(s32 *)(((u8 *)&data_ov016_02158b40) + 0x4) + 0x1000)) + 0x3AC);
        if ((s32)arg0 != 0) {
            v2 = WCi_MOV_WH_StateInSetParentWEPKey((s32)arg0, arg1, arg2, arg3);
            if (v2 != 0)
                return v2;
            v3 = DWCi_MOV_WH_ChangeSysState(9);
            return v3;
        } else {
            v4 = DWCi_MOV_WH_StateInStartParent();
            if (v4 != 0)
                return v4;
            v5 = DWCi_MOV_WH_ChangeSysState(9);
            return v5;
        }
    }
}

extern "C" s32 WCi_MOV_WH_StateInSetParentWEPKey(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 v1;
    s32 v2;
    DWCi_MOV_WH_ChangeSysState(3, arg1, arg2, arg3);
    v1 = ((s32 (*)(...))*(s32 *)(((u8 *)(*(s32 *)(data_ov016_02158b40 + 0x4) + 0x1000)) + 0x3AC))((*(s32 *)(data_ov016_02158b40 + 0x4) + 0x13C0), *(s32 *)(data_ov016_02158b40 + 0x4), *(s32 *)(((u8 *)(*(s32 *)(data_ov016_02158b40 + 0x4) + 0x1000)) + 0x3AC));
    v2 = WM_SetWEPKey((s32)DWCi_MOV_WH_StateOutSetParentWEPKey, v1, (*(s32 *)(data_ov016_02158b40 + 0x4) + 0x13C0));
    if (v2 == 2)
        return 1;
    DWCi_MOV_WH_SetError(v2);
    DWCi_MOV_WH_ChangeSysState(9);
    return 0;
}

extern "C" s32 DWCi_MOV_WH_StateOutSetParentWEPKey(u8 *arg0)
{
    s32 v1;
    s32 v2;
    s32 v3;
    if (*(u16 *)(arg0 + 0x2) != 0) {
        DWCi_MOV_WH_SetError();
        v1 = DWCi_MOV_WH_ChangeSysState(9);
        return v1;
    } else {
        v2 = DWCi_MOV_WH_StateInStartParent();
        if (v2 != 0)
            return v2;
        v3 = DWCi_MOV_WH_ChangeSysState(9);
        return v3;
    }
}

extern "C" s32 DWCi_MOV_WH_StateInStartParent(void)
{
    u8 *r4;
    s32 v0;
    u8 *t0;
    u8 *t1;
    if ((u32)(*(s32 *)(*(u8 * *)(data_ov016_02158b40 + 0x4) + 0x40) - 4) <= (u32)2)
        return 1;
    v0 = WM_StartParent((s32)DWCi_MOV_WH_StateOutStartParent);
    r4 = (u8 *)data_ov016_02158b40;
    if (v0 != 2) {
        DWCi_MOV_WH_SetError();
        return 0;
    } else {
        t0 = (u8 *)*(s32 *)(r4 + 0x4);
        *(u16 *)(t0 + 0x50) = 0;
        t1 = (u8 *)*(s32 *)(r4 + 0x4);
        *(u16 *)(t1 + 0x52) = 1;
        return 1;
    }
}

extern "C" asm void DWCi_MOV_WH_StateOutStartParent(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    ldrh r2, [r4, #0x10]
    ldrh r0, [r4, #2]
    mov r1, #1
    mov r1, r1, lsl r2
    cmp r0, #0
    mov r5, r1, lsl #0x10
    ldr r6, =data_ov016_02158b40
    beq @L_0214d158
    bl DWCi_MOV_WH_SetError
    mov r0, #9
    bl DWCi_MOV_WH_ChangeSysState
    ldmia sp!, {r4, r5, r6, pc}
@L_0214d158:
    ldrh r0, [r4, #8]
    cmp r0, #7
    bgt @L_0214d188
    bge @L_0214d194
    cmp r0, #2
    bgt @L_0214d250
    cmp r0, #0
    blt @L_0214d250
    beq @L_0214d238
    cmp r0, #2
    ldmeqia sp!, {r4, r5, r6, pc}
    b @L_0214d250
@L_0214d188:
    cmp r0, #9
    beq @L_0214d204
    b @L_0214d250
@L_0214d194:
    ldr r3, [r6]
    cmp r3, #0
    beq @L_0214d1ac
    ldr r1, =data_ov016_021562b0
    mov r0, #0x8000000
    blx r3
@L_0214d1ac:
    ldr r0, [r6, #4]
    ldr r1, [r0, #0x4c]
    cmp r1, #0
    beq @L_0214d1f0
    mov r0, r4
    blx r1
    cmp r0, #0
    bne @L_0214d1f0
    ldrh r1, [r4, #0x10]
    mov r0, #0
    bl WM_Disconnect
    cmp r0, #2
    ldmeqia sp!, {r4, r5, r6, pc}
    bl DWCi_MOV_WH_SetError
    mov r0, #9
    bl DWCi_MOV_WH_ChangeSysState
    ldmia sp!, {r4, r5, r6, pc}
@L_0214d1f0:
    ldr r1, [r6, #4]
    ldrh r0, [r1, #0x52]
    orr r0, r0, r5, lsr #16
    strh r0, [r1, #0x52]
    ldmia sp!, {r4, r5, r6, pc}
@L_0214d204:
    ldr r3, [r6]
    cmp r3, #0
    beq @L_0214d21c
    ldr r1, =data_ov016_021562dc
    mov r0, #0x8000000
    blx r3
@L_0214d21c:
    ldr r2, [r6, #4]
    mvn r0, r5, lsr #16
    ldrh r1, [r2, #0x52]
    mov r0, r0, lsl #0x10
    and r0, r1, r0, lsr #16
    strh r0, [r2, #0x52]
    ldmia sp!, {r4, r5, r6, pc}
@L_0214d238:
    bl DWCi_MOV_WH_StateInStartParentMP
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    mov r0, #9
    bl DWCi_MOV_WH_ChangeSysState
    ldmia sp!, {r4, r5, r6, pc}
@L_0214d250:
    ldr r3, [r6]
    cmp r3, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldr r1, =data_ov016_02156308
    mov r2, r0
    mov r0, #0x8000000
    blx r3
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 DWCi_MOV_WH_StateInStartParentMP(void)
{
    s32 v1;
    s32 t0;
    s32 t1;
    s32 t2;
    if ((u32)(*(s32 *)(*(u8 * *)(((u8 *)&data_ov016_02158b40) + 0x4) + 0x40) - 4) <= (u32)2) {
        return 1;
    } else {
        DWCi_MOV_WH_ChangeSysState(4);
        t0 = (*(s32 *)(((u8 *)&data_ov016_02158b40) + 0x4) + 0xF80);
        t1 = ((u16)*(s32 *)(((u8 *)(*(s32 *)(((u8 *)&data_ov016_02158b40) + 0x4) + 0x1000)) + 0x2A4));
        t2 = ((*(s32 *)(((u8 *)&data_ov016_02158b40) + 0x4) + 0x60) + 0x1000);
        v1 = WM_StartMP((s32)((u8 *)&DWCi_MOV_WH_StateOutStartParentMP), t2, t1, t0, ((u16)*(s32 *)(((u8 *)(*(s32 *)(((u8 *)&data_ov016_02158b40) + 0x4) + 0x1000)) + 0x2A0)), 1);
        if (v1 == 2) {
            return 1;
        } else {
            DWCi_MOV_WH_SetError();
            return 0;
        }
    }
}

extern "C" s32 DWCi_MOV_WH_StateOutStartParentMP(u8 *arg0)
{
    u8 *r1;
    s32 r2;
    s32 v1;
    s32 v2;
    s32 v4;
    s32 v5;
    s32 v7;
    s32 v8;
    s32 v9;
    s32 v10;
    r1 = (u8 *)*(u16 *)(arg0 + 0x2);
    if ((s32)r1 != 0) {
        DWCi_MOV_WH_SetError((s32)r1, (s32)r1);
        v1 = DWCi_MOV_WH_ChangeSysState(9);
        return v1;
    } else {
        r2 = *(u16 *)(arg0 + 0x4);
        arg0 = (u8 *)(*(u16 *)(arg0 + 0x4) - 10);
        switch ((s32)arg0) {
            case 0:
                r1 = *(u8 * *)(((u8 *)&data_ov016_02158b40) + 0x4);
                arg0 = (u8 *)*(s32 *)(*(u8 * *)(((u8 *)&data_ov016_02158b40) + 0x4) + 0x44);
                if ((s32)arg0 == 2) {
                    arg0 = (u8 *)*(s32 *)(r1 + 0x40);
                    if ((s32)arg0 == 4) {
                        v2 = ((s32 (*)(...))DWCi_MOV_WH_StateInStartParentKeyShare)((s32)arg0, (s32)r1, r2);
                        if (v2 != 0)
                            return v2;
                        r2 = *(s32 *)(((u8 *)&data_ov016_02158b40));
                        if (r2 != 0) {
                            ((s32 (*)(...))r2)(0x8000000, (u8 *)((u8 *)&data_ov016_02156328));
                        }
                        v4 = DWCi_MOV_WH_ChangeSysState(9);
                        return v4;
                    } else {
                        if ((s32)arg0 == 6) {
                            return (s32)arg0;
                        }
                    }
                } else {
                    if ((s32)arg0 == 4) {
                        v5 = WM_StartDataSharing((s32)((r1 + 0x3E0) + 0x1000), 0xD, 7, 0x44, 1);
                        if (v5 != 0) {
                            DWCi_MOV_WH_SetError();
                            v7 = DWCi_MOV_WH_ChangeSysState(9);
                            return v7;
                        } else {
                            v8 = DWCi_MOV_WH_ChangeSysState(5);
                            return v8;
                        }
                    }
                }
                v9 = DWCi_MOV_WH_ChangeSysState(4, (s32)r1, r2);
                return v9;
            case 2:
            case 3:
            default:
                if (*(s32 *)(((u8 *)&data_ov016_02158b40)) == 0)
                    return (s32)((u8 *)&data_ov016_02158b40);
                v10 = ((s32 (*)(...))*(s32 *)(((u8 *)&data_ov016_02158b40)))(0x8000000, (u8 *)((u8 *)&data_ov016_02156308), r2);
                arg0 = (u8 *)v10;
            case 1:
                return (s32)arg0;
        }
    }
}

extern "C" s32 DWCi_MOV_WH_StateInStartParentKeyShare(void)
{
    s32 v1;
    s32 t0;
    DWCi_MOV_WH_ChangeSysState(6);
    t0 = (*(s32 *)(data_ov016_02158b40 + 0x4) + 0x1E00);
    v1 = WM_StartKeySharing(t0, 0xD);
    if (v1 == 2)
        return 1;
    DWCi_MOV_WH_SetError(v1);
    return 0;
}

extern "C" s32 DWCi_MOV_WH_StateInEndParentKeyShare(void)
{
    s32 v0;
    s32 t0;
    t0 = (*(s32 *)(data_ov016_02158b40 + 0x4) + 0x1E00);
    v0 = WM_EndKeySharing(t0);
    if (v0 == 2)
        return 1;
    DWCi_MOV_WH_SetError(v0);
    return 0;
}

extern "C" s32 DWCi_MOV_WH_StateInEndParentMP(void)
{
    s32 v1;
    DWCi_MOV_WH_ChangeSysState(3);
    v1 = WM_EndMP((s32)DWCi_MOV_WH_StateOutEndParentMP);
    if (v1 == 2)
        return 1;
    DWCi_MOV_WH_SetError(v1);
    return 0;
}

extern "C" void DWCi_MOV_WH_StateOutEndParentMP(u8 *arg0)
{
    s32 r2;
    s32 v2;
    if (*(u16 *)(arg0 + 0x2) != 0) {
        DWCi_MOV_WH_SetError();
        DWCi_MOV_WH_Reset();
        return;
    } else {
        v2 = DWCi_MOV_WH_StateInEndParent();
        if (v2 != 0)
            return;
        r2 = *(s32 *)(data_ov016_02158b40);
        if (r2 != 0) {
            ((s32 (*)(...))r2)(0x8000000, (s32)data_ov016_02156358);
        }
        DWCi_MOV_WH_Reset();
        return;
    }
}

extern "C" asm s32 DWCi_MOV_WH_StateInEndParent(...)
{
    stmdb sp!, {r3, lr}
    ldr r0, =DWCi_MOV_WH_StateOutEndParent
    bl WM_EndParent
    cmp r0, #2
    moveq r0, #1
    ldmeqia sp!, {r3, pc}
    bl DWCi_MOV_WH_SetError
    mov r0, #0
    ldmia sp!, {r3, pc}
}

extern "C" s32 DWCi_MOV_WH_StateOutEndParent(u8 *arg0)
{
    s32 v0;
    s32 v1;
    if (*(u16 *)(arg0 + 0x2) != 0) {
        v0 = DWCi_MOV_WH_SetError();
        return v0;
    } else {
        v1 = DWCi_MOV_WH_ChangeSysState(1);
        return v1;
    }
}

extern "C" s32 DWCi_MOV_WH_StateInEndChildKeyShare(void)
{
    s32 v1;
    s32 t0;
    if (*(s32 *)(*(u8 * *)(data_ov016_02158b40 + 0x4) + 0x40) != 6)
        return 0;
    DWCi_MOV_WH_ChangeSysState(3);
    t0 = (*(s32 *)(data_ov016_02158b40 + 0x4) + 0x1E00);
    v1 = WM_EndKeySharing(t0);
    if (v1 == 2)
        return 1;
    DWCi_MOV_WH_SetError(v1);
    return 0;
}

extern "C" s32 DWCi_MOV_WH_StateInEndChildMP(void)
{
    s32 v1;
    DWCi_MOV_WH_ChangeSysState(3);
    v1 = WM_EndMP((s32)DWCi_MOV_WH_StateOutEndChildMP);
    if (v1 == 2)
        return 1;
    DWCi_MOV_WH_SetError(v1);
    return 0;
}

extern "C" s32 DWCi_MOV_WH_StateOutEndChildMP(u8 *arg0)
{
    s32 v1;
    s32 v2;
    s32 v3;
    if (*(u16 *)(arg0 + 0x2) != 0) {
        DWCi_MOV_WH_SetError();
        v1 = DWCi_MOV_WH_Finalize();
        return v1;
    } else {
        v2 = DWCi_MOV_WH_StateInEndChild();
        if (v2 != 0)
            return v2;
        v3 = DWCi_MOV_WH_ChangeSysState(9);
        return v3;
    }
}

extern "C" asm s32 DWCi_MOV_WH_StateInEndChild(...)
{
    stmdb sp!, {r4, lr}
    mov r0, #3
    bl DWCi_MOV_WH_ChangeSysState
    mov r4, #0
    ldr r0, =DWCi_MOV_WH_StateOutEndChild
    mov r1, r4
    bl WM_Disconnect
    cmp r0, #2
    moveq r0, #1
    ldmeqia sp!, {r4, pc}
    bl DWCi_MOV_WH_SetError
    bl DWCi_MOV_WH_Reset
    mov r0, r4
    ldmia sp!, {r4, pc}
}

extern "C" s32 DWCi_MOV_WH_StateOutEndChild(u8 *arg0)
{
    s32 v0;
    s32 v1;
    if (*(u16 *)(arg0 + 0x2) != 0) {
        v0 = DWCi_MOV_WH_SetError();
        return v0;
    } else {
        v1 = DWCi_MOV_WH_ChangeSysState(1);
        return v1;
    }
}

extern "C" asm s32 DWCi_MOV_WH_StateInReset(...)
{
    stmdb sp!, {r3, lr}
    mov r0, #3
    bl DWCi_MOV_WH_ChangeSysState
    ldr r0, =DWCi_MOV_WH_StateOutReset
    bl WM_Reset
    cmp r0, #2
    moveq r0, #1
    ldmeqia sp!, {r3, pc}
    bl DWCi_MOV_WH_SetError
    mov r0, #0
    ldmia sp!, {r3, pc}
}

extern "C" s32 DWCi_MOV_WH_StateOutReset(s32 arg0)
{
    u8 *r4;
    s32 v1;
    s32 v2;
    u16 t0;
    r4 = (u8 *)arg0;
    if (*(u16 *)(r4 + 0x2) != 0) {
        DWCi_MOV_WH_ChangeSysState(9);
        t0 = *(u16 *)(r4 + 0x2);
        v1 = DWCi_MOV_WH_SetError(t0);
        return v1;
    } else {
        v2 = DWCi_MOV_WH_ChangeSysState(1);
        return v2;
    }
}

extern "C" s32 DWCi_MOV_WH_StateOutEnd(u8 *arg0)
{
    s32 v0;
    s32 v1;
    if (*(u16 *)(arg0 + 0x2) != 0) {
        v0 = DWCi_MOV_WH_ChangeSysState(10);
        return v0;
    } else {
        v1 = DWCi_MOV_WH_ChangeSysState(0);
        return v1;
    }
}

extern "C" void DWCi_MOV_WH_SetGgid(s32 arg0)
{
    *(s32 *)(*(u8 * *)(data_ov016_02158b40 + 0x4) + 0x8) = arg0;
}

extern "C" u16 DWCi_MOV_WH_GetBitmap(void)
{
    return *(u16 *)(*(u8 * *)(data_ov016_02158b40 + 0x4) + 0x52);
}

extern "C" s32 DWCi_MOV_WH_GetSystemState(void)
{
    return *(s32 *)(*(u8 * *)(data_ov016_02158b40 + 0x4) + 0x40);
}

extern "C" asm void DWCi_MOV_WH_StartMeasureChannel(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #8
    add r0, sp, #0
    bl OS_GetMacAddress
    ldr r2, =0x2fffc3c
    ldrh r0, [sp]
    ldr r3, [r2]
    ldrh r2, [sp, #2]
    add r0, r0, r3
    ldr r1, =data_ov016_02158b40
    add r2, r2, r0
    ldrh r3, [sp, #4]
    ldr r0, [r1, #4]
    mov r4, #0
    add r2, r3, r2
    str r2, [r0, #0x58]
    ldr r3, [r1, #4]
    ldr r0, =0x10dcd
    ldr r2, [r3, #0x58]
    mul r0, r2, r0
    add r0, r0, #0x39
    add r0, r0, #0x3000
    str r0, [r3, #0x58]
    ldr r0, [r1, #4]
    mov r2, #0x65
    strh r4, [r0, #0x5c]
    ldr r1, [r1, #4]
    mov r0, #3
    strh r2, [r1, #0x5e]
    bl DWCi_MOV_WH_ChangeSysState
    mov r5, #1
    mov r0, r5
    bl DWCi_MOV_WH_StateInMeasureChannel
    cmp r0, #0x18
    bne @L_0214d820
    mov r0, #0x18
    bl DWCi_MOV_WH_SetError
    mov r0, #9
    bl DWCi_MOV_WH_ChangeSysState
    add sp, sp, #8
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
@L_0214d820:
    cmp r0, #2
    addeq sp, sp, #8
    moveq r0, r5
    ldmeqia sp!, {r3, r4, r5, pc}
    bl DWCi_MOV_WH_SetError
    mov r0, #9
    bl DWCi_MOV_WH_ChangeSysState
    mov r0, r4
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 DWCi_MOV_WH_StateInMeasureChannel(s32 arg0)
{
    s32 r2;
    s32 r4;
    s32 v0;
    s32 v5;
    v0 = func_020131c0(arg0);
    r4 = arg0;
    arg0 = v0;
    if (arg0 == 0x8000) {
        DWCi_MOV_WH_SetError(3);
        DWCi_MOV_WH_ChangeSysState(9);
        return 3;
    } else {
        if (arg0 == 0) {
            DWCi_MOV_WH_SetError(0x16);
            DWCi_MOV_WH_ChangeSysState(9);
            return 0x18;
        } else {
            if ((arg0 & (1 << (r4 - 1))) == 0) {
                do {
                    r2 = 1;
                    r4 = ((u16)(r4 + 1));
                    if ((u32)r4 > (u32)0x10) {
                        return 0x18;
                    }
                } while ((arg0 & (r2 << (r4 - 1))) == 0);
            }
            v5 = ((s32 (*)(...))WHi_MeasureChannel)((s32)((u8 *)&DWCi_MOV_WH_StateOutMeasureChannel), r4);
            return ((u16)v5);
        }
    }
}

extern "C" asm void DWCi_MOV_WH_StateOutMeasureChannel(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldrh r0, [r4, #2]
    cmp r0, #0
    beq @L_0214d918
    bl DWCi_MOV_WH_SetError
    mov r0, #9
    bl DWCi_MOV_WH_ChangeSysState
    ldmia sp!, {r4, pc}
@L_0214d918:
    ldr r0, =data_ov016_02158b40
    ldr r12, [r0]
    cmp r12, #0
    beq @L_0214d93c
    ldrh r2, [r4, #8]
    ldrh r3, [r4, #0xa]
    ldr r1, =data_ov016_021563b0
    mov r0, #0x8000000
    blx r12
@L_0214d93c:
    ldr r1, =data_ov016_02158b40
    ldrh r12, [r4, #0xa]
    ldr r3, [r1, #4]
    ldrh r0, [r4, #8]
    ldrh r2, [r3, #0x5e]
    cmp r2, r12
    bls @L_0214d974
    strh r12, [r3, #0x5e]
    sub r2, r0, #1
    mov r3, #1
    mov r2, r3, lsl r2
    ldr r1, [r1, #4]
    strh r2, [r1, #0x60]
    b @L_0214d994
@L_0214d974:
    bne @L_0214d994
    sub r1, r0, #1
    mov r2, #1
    mov r1, r2, lsl r1
    ldrh r2, [r3, #0x60]
    mov r1, r1, lsl #0x10
    orr r1, r2, r1, lsr #16
    strh r1, [r3, #0x60]
@L_0214d994:
    add r0, r0, #1
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    bl DWCi_MOV_WH_StateInMeasureChannel
    cmp r0, #0x18
    bne @L_0214d9b8
    mov r0, #7
    bl DWCi_MOV_WH_ChangeSysState
    ldmia sp!, {r4, pc}
@L_0214d9b8:
    cmp r0, #2
    ldmeqia sp!, {r4, pc}
    mov r0, #9
    bl DWCi_MOV_WH_ChangeSysState
    ldmia sp!, {r4, pc}
}

extern "C" void WHi_MeasureChannel(s32 arg0, s32 arg1)
{
    WM_MeasureChannel(arg0, 3, 0x11, arg1, 0x1E);
}

extern "C" s32 DWCi_MOV_WH_GetMeasureChannel(void)
{
    s32 r3;
    s32 r4;
    s32 v2;
    u16 t0;
    u8 *t1;
    u16 t2;
    if (*(s32 *)(*(u8 * *)(data_ov016_02158b40 + 0x4) + 0x40) != 7) {
        OS_Terminate();
    }
    DWCi_MOV_WH_ChangeSysState(1);
    t0 = *(u16 *)(*(u8 * *)(data_ov016_02158b40 + 0x4) + 0x60);
    v2 = SelectChannel(t0);
    t1 = (u8 *)*(s32 *)(data_ov016_02158b40 + 0x4);
    *(u16 *)(t1 + 0x5C) = v2;
    r3 = *(s32 *)(data_ov016_02158b40);
    r4 = (s32)data_ov016_02158b40;
    if (r3 != 0) {
        t2 = *(u16 *)(*(u8 * *)(data_ov016_02158b40 + 0x4) + 0x5C);
        ((s32 (*)(...))r3)(0x8000000, (s32)data_ov016_021563c8, t2);
    }
    return *(u16 *)(*(u8 * *)(data_ov016_02158b40 + 0x4) + 0x5C);
}

extern "C" asm s32 SelectChannel(...)
{
    stmdb sp!, {r4, lr}
    mov r3, #0
    mov r1, r3
    mov r12, r3
    mov r4, #1
@L_0214da7c:
    tst r0, r4, lsl r12
    beq @L_0214da9c
    add r3, r12, #1
    add r2, r1, #1
    mov r1, r3, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r3, r1, asr #0x10
    mov r1, r2, lsr #0x10
@L_0214da9c:
    add r2, r12, #1
    mov r2, r2, lsl #0x10
    mov r12, r2, asr #0x10
    cmp r12, #0x10
    blt @L_0214da7c
    cmp r1, #1
    movls r0, r3
    ldmlsia sp!, {r4, pc}
    ldr r12, =data_ov016_02158b40
    ldr r3, =0x10dcd
    ldr r4, [r12, #4]
    mov r2, #0
    ldr lr, [r4, #0x58]
    mul r3, lr, r3
    add r3, r3, #0x39
    add r3, r3, #0x3000
    str r3, [r4, #0x58]
    ldr r3, [r12, #4]
    ldr r3, [r3, #0x58]
    and r3, r3, #0xff
    mul r3, r1, r3
    mov r1, r3, lsl #8
    mov r3, r1, lsr #0x10
@L_0214daf8:
    tst r0, #1
    beq @L_0214db20
    cmp r3, #0
    addeq r0, r2, #1
    moveq r0, r0, lsl #0x10
    moveq r0, r0, asr #0x10
    ldmeqia sp!, {r4, pc}
    sub r1, r3, #1
    mov r1, r1, lsl #0x10
    mov r3, r1, lsr #0x10
@L_0214db20:
    add r1, r2, #1
    mov r1, r1, lsl #0x10
    mov r0, r0, lsl #0xf
    mov r2, r1, asr #0x10
    cmp r2, #0x10
    mov r0, r0, lsr #0x10
    blt @L_0214daf8
    mov r0, #0
    ldmia sp!, {r4, pc}
}

extern "C" asm s32 DWCi_MOV_WH_Initialize(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r1, =data_ov016_02158b40
    mov r5, #0
    ldr r0, [r1, #4]
    mov r4, #1
    add r0, r0, #0x1000
    str r5, [r0, #0x2a4]
    ldr r0, [r1, #4]
    add r0, r0, #0x1000
    str r5, [r0, #0x2a0]
    ldr r0, [r1, #4]
    str r5, [r0, #0x48]
    ldr r0, [r1, #4]
    strh r5, [r0, #0x50]
    ldr r0, [r1, #4]
    strh r4, [r0, #0x52]
    ldr r0, [r1, #4]
    str r5, [r0, #0x54]
    ldr r0, [r1, #4]
    str r5, [r0]
    ldr r0, [r1, #4]
    strh r5, [r0, #4]
    ldr r0, [r1, #4]
    str r5, [r0, #0x4c]
    bl DWCi_MOV_WH_StateInInitialize
    cmp r0, #0
    moveq r0, r5
    movne r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void DWCi_MOV_WH_IndicateHandler(u8 *arg0)
{
    if (*(u16 *)(arg0 + 0x2) != 8)
        return;
    DWCi_MOV_WH_ChangeSysState(9);
    OS_Terminate();
}

extern "C" s32 DWCi_MOV_WH_StateInInitialize(void)
{
    s32 v1;
    s32 t0;
    DWCi_MOV_WH_ChangeSysState(3);
    t0 = (*(s32 *)(data_ov016_02158b40 + 0x4) + 0x80);
    v1 = func_020136b4(t0, (s32)DWCi_MOV_WH_StateOutInitialize, 2);
    if (v1 == 2)
        return 1;
    DWCi_MOV_WH_SetError(v1);
    DWCi_MOV_WH_ChangeSysState(10);
    return 0;
}

extern "C" s32 DWCi_MOV_WH_StateOutInitialize(u8 *arg0)
{
    s32 v1;
    s32 v2;
    s32 v4;
    s32 v5;
    if (*(u16 *)(arg0 + 0x2) != 0) {
        DWCi_MOV_WH_SetError();
        v1 = DWCi_MOV_WH_ChangeSysState(10);
        return v1;
    } else {
        v2 = WM_SetIndCallback((s32)DWCi_MOV_WH_IndicateHandler);
        if (v2 != 0) {
            DWCi_MOV_WH_SetError();
            v4 = DWCi_MOV_WH_ChangeSysState(10);
            return v4;
        } else {
            v5 = DWCi_MOV_WH_ChangeSysState(1);
            return v5;
        }
    }
}

extern "C" s32 DWCi_MOV_WH_ParentConnect(s32 arg0, s32 arg1, s32 arg2)
{
    s32 r3;
    u8 *r4;
    s32 r5;
    s32 r6;
    s32 r7;
    s32 v4;
    s32 v5;
    u8 *t0;
    u8 *t1;
    s32 t2;
    s32 t3;
    u8 *t4;
    u8 *t5;
    u8 *t6;
    u8 *t7;
    u8 *t8;
    u8 *t9;
    u8 *t10;
    u8 *t11;
    u8 *t12;
    u8 *t13;
    u8 *t14;
    r4 = (u8 *)data_ov016_02158b40;
    r5 = arg2;
    r6 = arg1;
    r7 = arg0;
    if (*(s32 *)(*(u8 * *)(r4 + 0x4) + 0x40) != 1) {
        OS_Terminate();
    }
    t0 = (u8 *)(*(s32 *)(r4 + 0x4) + 0x1000);
    *(s32 *)(t0 + 0x2A4) = 0x180;
    t1 = (u8 *)(*(s32 *)(r4 + 0x4) + 0x1000);
    *(s32 *)(t1 + 0x2A0) = 0xE0;
    r3 = *(s32 *)(r4);
    if (r3 != 0) {
        t2 = *(s32 *)(((u8 *)(*(s32 *)(r4 + 0x4) + 0x1000)) + 0x2A4);
        ((s32 (*)(...))r3)(0x8000000, (s32)data_ov016_02156380, t2);
    }
    r3 = *(s32 *)(r4);
    if (r3 != 0) {
        t3 = *(s32 *)(((u8 *)(*(s32 *)(r4 + 0x4) + 0x1000)) + 0x2A0);
        ((s32 (*)(...))r3)(0x8000000, (s32)data_ov016_02156398, t3);
    }
    t4 = (u8 *)*(s32 *)(r4 + 0x4);
    *(s32 *)(t4 + 0x44) = r7;
    DWCi_MOV_WH_ChangeSysState(3, (s32)t4);
    t5 = (u8 *)*(s32 *)(r4 + 0x4);
    *(u16 *)(t5 + 0xC) = r6;
    t6 = (u8 *)*(s32 *)(r4 + 0x4);
    *(u16 *)(t6 + 0x32) = r5;
    v4 = WM_GetDispersionBeaconPeriod((s32)t6);
    t7 = (u8 *)*(s32 *)(r4 + 0x4);
    *(u16 *)(t7 + 0x18) = v4;
    t8 = (u8 *)*(s32 *)(r4 + 0x4);
    *(u16 *)(t8 + 0x34) = 0xD0;
    t9 = (u8 *)*(s32 *)(r4 + 0x4);
    *(u16 *)(t9 + 0x36) = 0x44;
    t10 = (u8 *)*(s32 *)(r4 + 0x4);
    *(u16 *)(t10 + 0x10) = 2;
    t11 = (u8 *)*(s32 *)(r4 + 0x4);
    *(u16 *)(t11 + 0x16) = 0;
    t12 = (u8 *)*(s32 *)(r4 + 0x4);
    *(u16 *)(t12 + 0x12) = 0;
    t13 = (u8 *)*(s32 *)(r4 + 0x4);
    *(u16 *)(t13 + 0xE) = 1;
    t14 = (u8 *)*(s32 *)(r4 + 0x4);
    *(u16 *)(t14 + 0x14) = (r7 != 2 ? 0 : 1);
    if (((r7 == 0 || r7 == 2) || r7 == 4)) {
        v5 = DWCi_MOV_WH_StateInSetParentParam();
        return v5;
    } else {
        r3 = *(s32 *)(r4);
        if (r3 != 0) {
            ((s32 (*)(...))r3)(0x8000000, (s32)data_ov016_021563e0, r7);
        }
        return 0;
    }
}

extern "C" void DWCi_MOV_WH_SetJudgeAcceptFunc(s32 arg0)
{
    *(s32 *)(*(u8 * *)(data_ov016_02158b40 + 0x4) + 0x4C) = arg0;
}

extern "C" void DWCi_MOV_WH_GetSharedDataAdr(s32 arg0)
{
    WM_GetSharedDataAddress(((*(s32 *)(data_ov016_02158b40 + 0x4) + 0x3E0) + 0x1000), (*(s32 *)(data_ov016_02158b40 + 0x4) + 0x1C00), arg0);
}

extern "C" s32 DWCi_MOV_WH_StepDS(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    u8 *r4;
    s32 r5;
    s32 v0;
    v0 = WM_StepDataSharing(((*(s32 *)(data_ov016_02158b40 + 0x4) + 0x3E0) + 0x1000), arg0, (*(s32 *)(data_ov016_02158b40 + 0x4) + 0x1C00), arg3);
    arg0 = v0;
    r4 = (u8 *)data_ov016_02158b40;
    r5 = v0;
    if (r5 == 7) {
        arg2 = *(s32 *)(r4);
        if (arg2 != 0) {
            ((s32 (*)(...))arg2)(0x8000000, (s32)data_ov016_021563fc);
        }
        return 0;
    }
    if (r5 == 5) {
        arg2 = *(s32 *)(r4);
        if (arg2 != 0) {
            ((s32 (*)(...))arg2)(0x8000000, (s32)data_ov016_0215642c);
        }
        DWCi_MOV_WH_SetError(r5);
        return 0;
    }
    if (r5 == 0)
        return 1;
    DWCi_MOV_WH_SetError(arg0);
    return 0;
}

extern "C" void DWCi_MOV_WH_Reset(void)
{
    s32 v0 = DWCi_MOV_WH_StateInReset();
    if (v0 != 0)
        return;
    DWCi_MOV_WH_ChangeSysState(10);
}

extern "C" asm s32 DWCi_MOV_WH_Finalize(...)
{
    stmdb sp!, {r3, lr}
    ldr r0, =data_ov016_02158b40
    ldr r1, [r0, #4]
    ldr r2, [r1, #0x40]
    cmp r2, #1
    bne @L_0214df08
    ldr r2, [r0]
    cmp r2, #0
    ldmeqia sp!, {r3, pc}
    ldr r1, =data_ov016_02156460
    mov r0, #0x8000000
    blx r2
    ldmia sp!, {r3, pc}
@L_0214df08:
    ldr r3, [r0]
    cmp r3, #0
    beq @L_0214df20
    ldr r1, =data_ov016_02156484
    mov r0, #0x8000000
    blx r3
@L_0214df20:
    ldr r0, =data_ov016_02158b40
    ldr r0, [r0, #4]
    ldr r0, [r0, #0x40]
    cmp r0, #6
    cmpne r0, #5
    cmpne r0, #4
    mov r0, #3
    beq @L_0214df4c
    bl DWCi_MOV_WH_ChangeSysState
    bl DWCi_MOV_WH_Reset
    ldmia sp!, {r3, pc}
@L_0214df4c:
    bl DWCi_MOV_WH_ChangeSysState
    ldr r0, =data_ov016_02158b40
    ldr r0, [r0, #4]
    ldr r0, [r0, #0x44]
    cmp r0, #5
    addls pc, pc, r0, lsl #2
    ldmia sp!, {r3, pc}
    b @L_0214dfbc
    b @L_0214df94
    b @L_0214dfa8
    b @L_0214df80
    b @L_0214dfbc
    b @L_0214df94
@L_0214df80:
    bl DWCi_MOV_WH_StateInEndChildKeyShare
    cmp r0, #0
    ldmneia sp!, {r3, pc}
    bl DWCi_MOV_WH_Reset
    ldmia sp!, {r3, pc}
@L_0214df94:
    bl DWCi_MOV_WH_StateInEndChildMP
    cmp r0, #0
    ldmneia sp!, {r3, pc}
    bl DWCi_MOV_WH_Reset
    ldmia sp!, {r3, pc}
@L_0214dfa8:
    bl DWCi_MOV_WH_StateInEndParentKeyShare
    cmp r0, #0
    ldmneia sp!, {r3, pc}
    bl DWCi_MOV_WH_Reset
    ldmia sp!, {r3, pc}
@L_0214dfbc:
    bl DWCi_MOV_WH_StateInEndParentMP
    cmp r0, #0
    ldmneia sp!, {r3, pc}
    bl DWCi_MOV_WH_Reset
    ldmia sp!, {r3, pc}
}

extern "C" s32 DWCi_MOV_WH_End(void)
{
    s32 v2;
    if (*(s32 *)(*(u8 * *)(data_ov016_02158b40 + 0x4) + 0x40) != 1) {
        OS_Terminate();
    }
    DWCi_MOV_WH_ChangeSysState(3);
    v2 = WM_End((s32)DWCi_MOV_WH_StateOutEnd);
    if (v2 == 2)
        return 1;
    DWCi_MOV_WH_ChangeSysState(9);
    return 0;
}

extern "C" void DWCi_MOVInit(s32 arg0, u8 *arg1)
{
    *(s32 *)(data_ov016_02158b48) = arg0;
    DWCi_MOV_MBP_MemInit((arg0 + 0xB00));
    u8 *t0 = (u8 *)(*(s32 *)(data_ov016_02158b48) + 0x600);
    *(u16 *)(t0 + 0x48) = 0;
    u8 *t1 = (u8 *)(*(s32 *)(data_ov016_02158b48) + 0x600);
    *(u16 *)(t1 + 0x4A) = 0;
    u8 *t2 = (u8 *)*(s32 *)(data_ov016_02158b48);
    *(u8 *)(t2 + 0xA90) = 1;
    u8 *t3 = (u8 *)*(s32 *)(data_ov016_02158b48);
    *(u8 *)(t3 + 0xA91) = 1;
    u8 *t4 = (u8 *)*(s32 *)(data_ov016_02158b48);
    *(s32 *)(t4 + 0xA9C) = 0;
    Parent_InitDataShare();
    u8 *t5 = (u8 *)*(s32 *)(data_ov016_02158b48);
    s32 t6 = *(s32 *)(arg1);
    *(s32 *)(t5 + 0xAB4) = t6;
    u8 *t7 = (u8 *)*(s32 *)(data_ov016_02158b48);
    s32 t8 = *(s32 *)(arg1 + 0x4);
    *(s32 *)(t7 + 0xAB8) = t8;
    u8 *t9 = (u8 *)*(s32 *)(data_ov016_02158b48);
    s32 t10 = *(s32 *)(arg1 + 0x8);
    *(s32 *)(t9 + 0xABC) = t10;
    u8 *t11 = (u8 *)*(s32 *)(data_ov016_02158b48);
    s32 t12 = *(s32 *)(arg1 + 0xC);
    *(s32 *)(t11 + 0xAC0) = t12;
    u8 *t13 = (u8 *)*(s32 *)(data_ov016_02158b48);
    s32 t14 = *(s32 *)(arg1 + 0x10);
    *(s32 *)(t13 + 0xAC4) = t14;
    u8 *t15 = (u8 *)*(s32 *)(data_ov016_02158b48);
    s32 t16 = *(s32 *)(arg1 + 0x14);
    *(s32 *)(t15 + 0xAC8) = t16;
    u8 *t17 = (u8 *)*(s32 *)(data_ov016_02158b48);
    u8 t18 = *(u8 *)(arg1 + 0x18);
    *(u8 *)(t17 + 0xA92) = t18;
    u8 *t19 = (u8 *)*(s32 *)(data_ov016_02158b48);
    *(u8 *)(t19 + 0xACC) = 2;
    OS_GetTick((s32)t19, 2, t18);
    s32 t20 = ((*(s32 *)(data_ov016_02158b48) + 0x24C) + 0x400);
    DWCi_BACKUPlRead(t20);
    OS_GetTick();
    s32 v5 = DWCi_SETTINGlGetMemMap();
    u8 *t21 = (u8 *)*(s32 *)(data_ov016_02158b48);
    *(s32 *)(t21 + 0xAA4) = v5;
}

extern "C" s32 DWCi_MOVFinalize(void)
{
    s32 r0;
    s32 r1;
    u8 *r2;
    u8 *t0;
    u8 *t1;
    u8 *t2;
    r2 = *(u8 * *)(((u8 *)&data_ov016_02158b48));
    r1 = *(u8 *)(*(u8 * *)(((u8 *)&data_ov016_02158b48)) + 0xA90);
    if (((((r1 == 1 || r1 == 0x14) || r1 == 0x17) || r1 == 0x1A) || r1 == 0x1D)) {
        *(u8 *)(r2 + 0xA90) = 0x22;
        t0 = (u8 *)*(s32 *)(((u8 *)&data_ov016_02158b48));
        *(u8 *)(t0 + 0xAAC) = 0;
        return 1;
    } else {
        if ((((r1 == 4 || r1 == 5) || r1 == 6) || r1 == 0xD)) {
            if ((r1 == 4 && (u32)*(s32 *)(r2 + 0xA98) < (u32)6)) {
                return 0;
            } else {
                MB_EndToIdle();
                t1 = (u8 *)*(s32 *)(((u8 *)&data_ov016_02158b48));
                *(u8 *)(t1 + 0xA90) = 0x10;
                t2 = (u8 *)*(s32 *)(((u8 *)&data_ov016_02158b48));
                *(u8 *)(t2 + 0xAAC) = 2;
                return 1;
            }
        } else {
            if ((u32)((r1 + 0xF7) & 0xFF) <= (u32)1) {
                *(u8 *)(r2 + 0xA90) = 0x20;
                return 1;
            } else {
                if (r1 == 0xC) {
                    *(u8 *)(r2 + 0xA90) = 0x22;
                    r0 = 1;
                } else {
                    r0 = 0;
                }
                return r0;
            }
        }
    }
}

extern "C" asm s32 _DWCi_MOVPrepare(...)
{
    stmdb sp!, {r4, lr}
    ldr r4, =data_ov016_02158b48
    ldr r0, [r4]
    ldr r0, [r0, #0xac8]
    bl DWCi_MOV_WH_SetGgid
    ldr r0, [r4]
    mov r1, #1
    strb r1, [r0, #0xa90]
    bl WM_GetNextTgid
    ldr r1, [r4]
    mov r2, #0x40
    add r1, r1, #0x600
    strh r0, [r1, #0x48]
    ldr r1, [r4]
    ldr r0, [r1, #0xaa4]
    add r1, r1, #0xa50
    bl MI_CpuCopy8
    ldr r0, [r4]
    mov r1, #0
    strb r1, [r0, #0xa93]
    ldr r0, [r4]
    str r1, [r0, #0x204]
    ldr r0, [r4]
    add r0, r0, #0x600
    ldrh r1, [r0, #0x48]
    add r1, r1, #1
    strh r1, [r0, #0x48]
    ldmia sp!, {r4, pc}
}

extern "C" s32 DWCi_MOVStartAdmitChild(void)
{
    u8 t0;
    u8 *t1;
    if (((*(u8 *)(*(u8 * *)(data_ov016_02158b48) + 0xA90) != 1 && *(u8 *)(*(u8 * *)(data_ov016_02158b48) + 0xA90) != 0x1A) && *(u8 *)(*(u8 * *)(data_ov016_02158b48) + 0xA90) != 0x1D))
        return 0;
    t0 = *(u8 *)(*(u8 * *)(data_ov016_02158b48) + 0xA90);
    _DWCi_MOVPrepare(t0);
    DWCi_MOV_WH_Initialize();
    t1 = (u8 *)*(s32 *)(data_ov016_02158b48);
    *(u8 *)(t1 + 0xA90) = 2;
    return 1;
}

extern "C" s32 DWCi_MOVStartDownloadandBootChild(void)
{
    u8 *r1;
    r1 = (u8 *)*(s32 *)(data_ov016_02158b48);
    if (*(u8 *)(r1 + 0xA90) != 5) {
        return 0;
    } else {
        *(u8 *)(r1 + 0xA90) = 6;
        DWCi_MOV_MBP_StartDownloadAll(6);
        return 1;
    }
}

extern "C" asm void DWCi_MOVFramework(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r5, =data_ov016_02158b48
    mov r4, #0
    ldr r0, [r5]
    ldrb r1, [r0, #0xa90]
    cmp r1, #0x22
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r3, r4, r5, pc}
    ldmia sp!, {r3, r4, r5, pc}
    b @L_0214e380
    b @L_0214e3b0
    b @L_0214e3b8
    b @L_0214e3cc
    b @L_0214e3e0
    b @L_0214e3e0
    b @L_0214e3e8
    b @L_0214e3f0
    b @L_0214e3f0
    b @L_0214e3f0
    b @L_0214e3f8
    ldmia sp!, {r3, r4, r5, pc}
    ldmia sp!, {r3, r4, r5, pc}
    ldmia sp!, {r3, r4, r5, pc}
    ldmia sp!, {r3, r4, r5, pc}
    b @L_0214e400
    b @L_0214e414
    b @L_0214e430
    b @L_0214e44c
    ldmia sp!, {r3, r4, r5, pc}
    b @L_0214e480
    b @L_0214e49c
    ldmia sp!, {r3, r4, r5, pc}
    b @L_0214e4d0
    b @L_0214e4ec
    ldmia sp!, {r3, r4, r5, pc}
    b @L_0214e520
    b @L_0214e53c
    ldmia sp!, {r3, r4, r5, pc}
    b @L_0214e5f8
    ldmia sp!, {r3, r4, r5, pc}
    b @L_0214e5a8
    b @L_0214e5c4
    ldmia sp!, {r3, r4, r5, pc}
@L_0214e380:
    ldrb r1, [r0, #0xaac]
    cmp r1, #1
    bne @L_0214e398
    strb r4, [r0, #0xaac]
    bl DWCi_MOVStartAdmitChild
    ldmia sp!, {r3, r4, r5, pc}
@L_0214e398:
    cmp r1, #2
    streqb r4, [r0, #0xaac]
    ldreq r0, [r5]
    moveq r1, #0x22
    streqb r1, [r0, #0xa90]
    ldmia sp!, {r3, r4, r5, pc}
@L_0214e3b0:
    bl _DWCi_MOVSearchChannel
    ldmia sp!, {r3, r4, r5, pc}
@L_0214e3b8:
    bl _DWCi_MOVStartWaitChild
    ldr r0, [r5]
    mov r1, #4
    strb r1, [r0, #0xa90]
    ldmia sp!, {r3, r4, r5, pc}
@L_0214e3cc:
    ldr r1, [r0, #0xa98]
    add r1, r1, #1
    str r1, [r0, #0xa98]
    bl _DWCi_MOV_WaitandDownloadandBoot_Child
    ldmia sp!, {r3, r4, r5, pc}
@L_0214e3e0:
    bl _DWCi_MOV_WaitandDownloadandBoot_Child
    ldmia sp!, {r3, r4, r5, pc}
@L_0214e3e8:
    bl _DWCi_MOV_ReadyMovUserID
    ldmia sp!, {r3, r4, r5, pc}
@L_0214e3f0:
    bl _DWCi_MOV_MovUserID
    ldmia sp!, {r3, r4, r5, pc}
@L_0214e3f8:
    bl _DWCi_MOV_EraseFlashData
    ldmia sp!, {r3, r4, r5, pc}
@L_0214e400:
    str r4, [r0, #0xa9c]
    ldr r0, [r5]
    mov r1, #0x11
    strb r1, [r0, #0xa90]
    ldmia sp!, {r3, r4, r5, pc}
@L_0214e414:
    ldr r2, [r0, #0xa9c]
    add r1, r2, #1
    str r1, [r0, #0xa9c]
    cmp r2, #0x1e
    ldmlsia sp!, {r3, r4, r5, pc}
    bl _DWCi_MOVEnd
    ldmia sp!, {r3, r4, r5, pc}
@L_0214e430:
    bl MB_EndToIdle
    ldr r0, [r5]
    mov r1, #0x16
    str r4, [r0, #0xa9c]
    ldr r0, [r5]
    strb r1, [r0, #0xa90]
    ldmia sp!, {r3, r4, r5, pc}
@L_0214e44c:
    ldr r2, [r0, #0xa9c]
    add r1, r2, #1
    str r1, [r0, #0xa9c]
    cmp r2, #0x1e
    ldmlsia sp!, {r3, r4, r5, pc}
    bl DWCi_MOV_WH_GetSystemState
    cmp r0, #1
    ldmneia sp!, {r3, r4, r5, pc}
    bl DWCi_MOV_WH_End
    ldr r0, [r5]
    mov r1, #0x14
    strb r1, [r0, #0xa90]
    ldmia sp!, {r3, r4, r5, pc}
@L_0214e480:
    bl DWCi_MOV_WH_Finalize
    ldr r0, [r5]
    mov r1, #0x16
    str r4, [r0, #0xa9c]
    ldr r0, [r5]
    strb r1, [r0, #0xa90]
    ldmia sp!, {r3, r4, r5, pc}
@L_0214e49c:
    ldr r2, [r0, #0xa9c]
    add r1, r2, #1
    str r1, [r0, #0xa9c]
    cmp r2, #0x1e
    ldmlsia sp!, {r3, r4, r5, pc}
    bl DWCi_MOV_WH_GetSystemState
    cmp r0, #1
    ldmneia sp!, {r3, r4, r5, pc}
    bl DWCi_MOV_WH_End
    ldr r0, [r5]
    mov r1, #0x17
    strb r1, [r0, #0xa90]
    ldmia sp!, {r3, r4, r5, pc}
@L_0214e4d0:
    bl DWCi_MOV_WH_Finalize
    ldr r0, [r5]
    mov r1, #0x19
    str r4, [r0, #0xa9c]
    ldr r0, [r5]
    strb r1, [r0, #0xa90]
    ldmia sp!, {r3, r4, r5, pc}
@L_0214e4ec:
    ldr r2, [r0, #0xa9c]
    add r1, r2, #1
    str r1, [r0, #0xa9c]
    cmp r2, #0x1e
    ldmlsia sp!, {r3, r4, r5, pc}
    bl DWCi_MOV_WH_GetSystemState
    cmp r0, #1
    ldmneia sp!, {r3, r4, r5, pc}
    bl DWCi_MOV_WH_End
    ldr r0, [r5]
    mov r1, #0x1a
    strb r1, [r0, #0xa90]
    ldmia sp!, {r3, r4, r5, pc}
@L_0214e520:
    bl DWCi_MOV_WH_Finalize
    ldr r0, [r5]
    mov r1, #0x1c
    str r4, [r0, #0xa9c]
    ldr r0, [r5]
    strb r1, [r0, #0xa90]
    ldmia sp!, {r3, r4, r5, pc}
@L_0214e53c:
    ldr r2, [r0, #0xa9c]
    add r1, r2, #1
    str r1, [r0, #0xa9c]
    cmp r2, #0x1e
    ldmlsia sp!, {r3, r4, r5, pc}
    bl DWCi_MOV_WH_GetSystemState
    cmp r0, #1
    bne @L_0214e570
    bl DWCi_MOV_WH_End
    ldr r0, [r5]
    mov r1, #0x1d
    strb r1, [r0, #0xa90]
    ldmia sp!, {r3, r4, r5, pc}
@L_0214e570:
    ldr r1, [r5]
    ldr r0, =0x88888889
    ldr r3, [r1, #0xa9c]
    mov r2, #0x1e
    umull r0, r1, r3, r0
    mov r1, r1, lsr #4
    umull r0, r1, r2, r1
    sub r1, r3, r0
    cmp r1, #1
    ldmneia sp!, {r3, r4, r5, pc}
    cmp r3, #0x37
    ldmlsia sp!, {r3, r4, r5, pc}
    bl DWCi_MOV_WH_Finalize
    ldmia sp!, {r3, r4, r5, pc}
@L_0214e5a8:
    bl DWCi_MOV_WH_Finalize
    ldr r0, [r5]
    mov r1, #0x21
    str r4, [r0, #0xa9c]
    ldr r0, [r5]
    strb r1, [r0, #0xa90]
    ldmia sp!, {r3, r4, r5, pc}
@L_0214e5c4:
    ldr r2, [r0, #0xa9c]
    add r1, r2, #1
    str r1, [r0, #0xa9c]
    cmp r2, #0x1e
    ldmlsia sp!, {r3, r4, r5, pc}
    bl DWCi_MOV_WH_GetSystemState
    cmp r0, #1
    ldmneia sp!, {r3, r4, r5, pc}
    bl DWCi_MOV_WH_End
    ldr r0, [r5]
    mov r1, #0x22
    strb r1, [r0, #0xa90]
    ldmia sp!, {r3, r4, r5, pc}
@L_0214e5f8:
    bl DWCi_MOV_WH_Finalize
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void DWCi_MOVGetStatus(void)
{
    ldr r2, =data_ov016_02158b48
    ldr r3, [r2]
    ldrb r3, [r3, #0xa90]
    strb r3, [r0]
    ldr r0, [r2]
    ldrb r2, [r0, #0xa90]
    ldrb r0, [r0, #0xa91]
    cmp r2, r0
    movne r0, #1
    moveq r0, #0
    strb r0, [r1]
    ldr r0, =data_ov016_02158b48
    ldr r1, [r0]
    ldrb r0, [r1, #0xa90]
    strb r0, [r1, #0xa91]
    bx lr
}

extern "C" void DWCi_GetChildInfo(void)
{
    MB_CommGetChildUser(1);
}

extern "C" void _DWCi_MOVSearchChannel(void)
{
    switch (((s32 (*)(...))DWCi_MOV_WH_GetSystemState)()) {
    case 1:
        ((s32 (*)(...))DWCi_MOV_WH_StartMeasureChannel)();
        break;
    case 7:
        *(u16 *)(*(u8 **)data_ov016_02158b48 + 0x64A) = ((s32 (*)(...))DWCi_MOV_WH_GetMeasureChannel)();
        *(s32 *)(*(u8 **)data_ov016_02158b48 + 0xA98) = 0;
        (*(u8 **)data_ov016_02158b48)[0xA90] = 3;
        break;
    case 0:
        *(s32 *)(*(u8 **)data_ov016_02158b48 + 0xA98) = 0;
        (*(u8 **)data_ov016_02158b48)[0xA90] = 3;
        break;
    case 9:
        ((s32 (*)(...))DWCi_MOV_WH_Reset)();
        break;
    case 3:
        break;
    default:
        ((s32 (*)(...))OS_Terminate)();
        break;
    }
}

extern "C" void _DWCi_MOVStartWaitChild(void)
{
    DWCi_MOV_MBP_Init(*(s32 *)(*(u8 * *)(data_ov016_02158b48) + 0xAC8), *(u16 *)(((u8 *)(*(u8 * *)(data_ov016_02158b48) + 0x600)) + 0x48), (s32)*(u8 * *)(data_ov016_02158b48));
}

extern "C" asm void _DWCi_MOV_WaitandDownloadandBoot_Child(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r4, =data_ov016_02158b48
    bl DWCi_MOV_MBP_GetState
    cmp r0, #7
    addls pc, pc, r0, lsl #2
    ldmia sp!, {r3, r4, r5, pc}
    b @L_0214e864
    b @L_0214e760
    b @L_0214e77c
    b @L_0214e7f8
    ldmia sp!, {r3, r4, r5, pc}
    b @L_0214e840
    ldmia sp!, {r3, r4, r5, pc}
    b @L_0214e850
@L_0214e760:
    ldr r2, [r4]
    add r0, r2, #0x600
    ldrh r1, [r0, #0x4a]
    add r0, r2, #0x2b4
    add r0, r0, #0x800
    bl DWCi_MOV_MBP_Start
    ldmia sp!, {r3, r4, r5, pc}
@L_0214e77c:
    mov r5, #2
    mov r0, r5
    bl DWCi_MOV_MBP_GetChildBmp
    cmp r0, #0
    ldrne r0, [r4]
    movne r1, #5
    strneb r1, [r0, #0xa90]
    ldmneia sp!, {r3, r4, r5, pc}
    mov r0, #3
    bl DWCi_MOV_MBP_GetChildBmp
    cmp r0, #0
    bne @L_0214e7bc
    mov r0, #4
    bl DWCi_MOV_MBP_GetChildBmp
    cmp r0, #0
    beq @L_0214e7cc
@L_0214e7bc:
    ldr r0, [r4]
    mov r1, #6
    strb r1, [r0, #0xa90]
    ldmia sp!, {r3, r4, r5, pc}
@L_0214e7cc:
    ldr r0, [r4]
    ldrb r0, [r0, #0xa90]
    cmp r0, #5
    ldmneia sp!, {r3, r4, r5, pc}
    mov r0, r5
    bl DWCi_MOV_MBP_GetChildBmp
    cmp r0, #0
    ldreq r0, [r4]
    moveq r1, #0xd
    streqb r1, [r0, #0xa90]
    ldmia sp!, {r3, r4, r5, pc}
@L_0214e7f8:
    bl DWCi_MOV_MBP_IsBootableAll
    cmp r0, #0
    beq @L_0214e80c
    bl DWCi_MOV_MBP_StartRebootAll
    ldmia sp!, {r3, r4, r5, pc}
@L_0214e80c:
    ldr r0, [r4]
    ldrb r0, [r0, #0xa90]
    add r0, r0, #0xfa
    and r0, r0, #0xff
    cmp r0, #1
    ldmhiia sp!, {r3, r4, r5, pc}
    mov r0, #3
    bl DWCi_MOV_MBP_GetChildBmp
    cmp r0, #0
    ldreq r0, [r4]
    moveq r1, #0x12
    streqb r1, [r0, #0xa90]
    ldmia sp!, {r3, r4, r5, pc}
@L_0214e840:
    ldr r0, [r4]
    mov r1, #7
    strb r1, [r0, #0xa90]
    ldmia sp!, {r3, r4, r5, pc}
@L_0214e850:
    bl DWCi_MOV_MBP_Cancel
    ldr r0, [r4]
    mov r1, #1
    strb r1, [r0, #0xa90]
    ldmia sp!, {r3, r4, r5, pc}
@L_0214e864:
    bl DWCi_MOV_WH_GetSystemState
    cmp r0, #0
    beq @L_0214e88c
    cmp r0, #1
    beq @L_0214e884
    cmp r0, #3
    ldmeqia sp!, {r3, r4, r5, pc}
    b @L_0214e89c
@L_0214e884:
    bl DWCi_MOV_WH_End
    ldmia sp!, {r3, r4, r5, pc}
@L_0214e88c:
    ldr r0, [r4]
    mov r1, #0x1f
    strb r1, [r0, #0xa90]
    ldmia sp!, {r3, r4, r5, pc}
@L_0214e89c:
    ldr r0, [r4]
    mov r1, #0x1f
    strb r1, [r0, #0xa90]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 _DWCi_MOV_ReadyMovUserID(void)
{
    Parent_InitDataShare();
    DWCi_MOV_WH_SetJudgeAcceptFunc((s32)JudgeConnectableChild);
    u8 *t0 = (u8 *)*(s32 *)(data_ov016_02158b48);
    *(u8 *)(t0 + 0xA90) = 8;
    return (s32)t0;
}

extern "C" asm void _DWCi_MOV_MovUserID(void)
{
    stmdb sp!, {r4, lr}
    bl DWCi_MOV_WH_GetSystemState
    cmp r0, #6
    addls pc, pc, r0, lsl #2
    ldmia sp!, {r4, pc}
    ldmia sp!, {r4, pc}
    b @L_0214e90c
    ldmia sp!, {r4, pc}
    ldmia sp!, {r4, pc}
    b @L_0214e938
    b @L_0214e938
    b @L_0214e938
@L_0214e90c:
    ldr r1, =data_ov016_02158b48
    mov r0, #4
    ldr r1, [r1]
    add r1, r1, #0x600
    ldrh r3, [r1, #0x48]
    ldrh r2, [r1, #0x4a]
    add r1, r3, #1
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl DWCi_MOV_WH_ParentConnect
    ldmia sp!, {r4, pc}
@L_0214e938:
    ldr r4, =data_ov016_02158b48
    mov r0, #0
    ldr r2, [r4]
    add r1, r2, #0x200
    ldrh r1, [r1]
    ldr r12, [r2, #0xaa4]
    mov r3, r1, lsr #0x1f
    rsb r2, r3, r1, lsl #28
    add r2, r3, r2, ror #28
    add r2, r12, r2, lsl #6
    bl Parent_StepDataShare
    bl Parent_data_receive_progress
    ldr r1, [r4]
    ldrb r0, [r1, #0xa90]
    cmp r0, #0x1b
    ldmeqia sp!, {r4, pc}
    ldr r0, [r1, #0x204]
    cmp r0, #0x1e0
    movhi r0, #0x1b
    strhib r0, [r1, #0xa90]
    ldmhiia sp!, {r4, pc}
    bl Parent_get_child_data_kind
    cmp r0, #0x10
    beq @L_0214e9a4
    bl Parent_get_child_data_kind
    cmp r0, #0x20
    bne @L_0214e9bc
@L_0214e9a4:
    bl Parent_get_child_data_kind
    ldr r0, =data_ov016_02158b48
    mov r1, #0xa
    ldr r0, [r0]
    strb r1, [r0, #0xa90]
    ldmia sp!, {r4, pc}
@L_0214e9bc:
    bl Parent_get_child_data_kind
    cmp r0, #0x40
    ldreq r0, [r4]
    moveq r1, #0xb
    streqb r1, [r0, #0xa90]
    ldmeqia sp!, {r4, pc}
    bl Parent_get_child_data_kind
    cmp r0, #0xff
    ldreq r0, [r4]
    moveq r1, #0x1b
    streqb r1, [r0, #0xa90]
    ldmeqia sp!, {r4, pc}
    bl Parent_get_child_data_kind
    cmp r0, #0x50
    ldreq r0, [r4]
    moveq r1, #0x15
    streqb r1, [r0, #0xa90]
    ldmeqia sp!, {r4, pc}
    bl Parent_get_child_data_kind
    cmp r0, #0x60
    ldreq r0, [r4]
    moveq r1, #0x18
    streqb r1, [r0, #0xa90]
    ldmeqia sp!, {r4, pc}
    bl Parent_get_child_data_kind
    cmp r0, #0x70
    ldreq r0, [r4]
    moveq r1, #0x1b
    streqb r1, [r0, #0xa90]
    ldmeqia sp!, {r4, pc}
    bl Parent_get_child_data_kind
    cmp r0, #0
    ldreq r0, [r4]
    moveq r1, #8
    streqb r1, [r0, #0xa90]
    ldmeqia sp!, {r4, pc}
    bl Parent_get_child_data_kind
    cmp r0, #0xbd
    ldr r0, [r4]
    moveq r1, #9
    streqb r1, [r0, #0xa90]
    movne r1, #0x1f
    strneb r1, [r0, #0xa90]
    ldmia sp!, {r4, pc}
}

extern "C" s32 _DWCi_MOV_EraseFlashData(void)
{
    u8 *t0 = (u8 *)*(s32 *)(data_ov016_02158b48);
    *(u8 *)(t0 + 0xA90) = 0xC;
    return (s32)t0;
}

extern "C" s32 _DWCi_MOVEnd(void)
{
    s32 v0;
    u8 *t0;
    v0 = DWCi_MOV_WH_GetSystemState();
    if (v0 != 1)
        return 0;
    DWCi_MOV_WH_End();
    t0 = (u8 *)*(s32 *)(data_ov016_02158b48);
    *(u8 *)(t0 + 0xA90) = 1;
    return 1;
}

extern "C" s32 JudgeConnectableChild(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 v0;
    s32 v1;
    v0 = DWCi_MOV_MBP_GetPlayerNo((arg0 + 10), arg1, arg2, arg3);
    if (v0 == 0)
        return 0;
    v1 = DWCi_MOV_MBP_GetChildInfo(v0);
    *(s32 *)(((u8 *)(*(s32 *)(data_ov016_02158b48) + ((v0 - 1) << 2))) + 0xAA0) = v1;
    return 1;
}

extern "C" s32 Parent_InitDataShare(void)
{
    s32 t0 = (*(s32 *)(data_ov016_02158b48) + 0x100);
    MI_CpuFill8(t0, 0, 0x100);
    s32 t1 = *(s32 *)(data_ov016_02158b48);
    MI_CpuFill8(t1, 0, 0x100);
    u8 *t2 = (u8 *)*(s32 *)(data_ov016_02158b48);
    *(s32 *)(t2 + 0xAB0) = (s32)t2;
    return (s32)t2;
}

extern "C" asm void Parent_StepDataShare(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    ldr r3, =data_ov016_02158b48
    ldr r5, [r3]
    ldrb r4, [r5, #0xa93]
    cmp r4, #1
    bne @L_0214eb80
    ldr r4, [r5, #0xab0]
    strh r0, [r4]
    ldr r4, [r3]
    mov r0, r2
    ldr r4, [r4, #0xab0]
    mov r2, #0x40
    strh r1, [r4, #2]
    ldr r1, [r3]
    ldr r1, [r1, #0xab0]
    add r1, r1, #4
    bl MI_CpuCopy8
    b @L_0214ebac
@L_0214eb80:
    ldr r0, [r5, #0x204]
    mov r1, #0xbc
    add r0, r0, #1
    str r0, [r5, #0x204]
    ldr r0, [r3]
    ldr r0, [r0, #0xab0]
    strh r1, [r0]
    ldr r0, [r3]
    ldrb r1, [r0, #0xa92]
    ldr r0, [r0, #0xab0]
    strb r1, [r0, #4]
@L_0214ebac:
    bl DWCi_MOV_WH_GetSystemState
    cmp r0, #5
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r4, =data_ov016_02158b48
    ldr r0, [r4]
    bl DWCi_MOV_WH_StepDS
    ldr r1, [r4]
    cmp r0, #0
    ldreq r0, [r1, #0x204]
    addeq r0, r0, #4
    streq r0, [r1, #0x204]
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldrb r0, [r1, #0xa93]
    cmp r0, #0
    ldreq r0, [r1, #0x204]
    addeq r0, r0, #1
    streq r0, [r1, #0x204]
    beq @L_0214ec14
    mov r0, #0
    str r0, [r1, #0x204]
    bl DWCi_MOV_WH_GetBitmap
    cmp r0, #3
    ldrne r0, [r4]
    movne r1, #0x1b
    strneb r1, [r0, #0xa90]
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0214ec14:
    mov r7, #0
    mov r6, #0x44
    ldr r9, =data_ov016_02158b48
    mov r4, r7
    mov r5, #1
    mov r8, r6
@L_0214ec2c:
    mov r0, r7
    bl DWCi_MOV_WH_GetSharedDataAdr
    cmp r0, #0
    ldreq r0, [r9]
    addeq r0, r0, r7, lsl #2
    streq r4, [r0, #0x208]
    beq @L_0214ec68
    ldr r1, [r9]
    mov r2, r6
    add r1, r1, #0x100
    mla r1, r7, r8, r1
    bl MI_CpuCopy8
    ldr r0, [r9]
    add r0, r0, r7, lsl #2
    str r5, [r0, #0x208]
@L_0214ec68:
    add r0, r7, #1
    mov r0, r0, lsl #0x10
    mov r7, r0, lsr #0x10
    cmp r7, #2
    blo @L_0214ec2c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void Parent_data_receive_progress(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r12, #0
    ldr r4, =data_ov016_02158b48
    mov r0, #1
    mov r5, r12
    mov r1, #0xbc
    mov r2, r12
    mov lr, #0x44
@L_0214eca4:
    ldr r3, [r4]
    add r6, r3, r12, lsl #2
    ldr r6, [r6, #0x208]
    cmp r6, #0
    beq @L_0214ed54
    mul r7, r12, lr
    cmp r12, #1
    add r8, r3, #0x100
    bne @L_0214ed54
    ldrb r6, [r3, #0xa93]
    cmp r6, #1
    bne @L_0214ed24
    ldrh r6, [r8, r7]
    cmp r6, #0x10
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r6, [r3, #0xa94]
    add r6, r6, #1
    str r6, [r3, #0xa94]
    ldr r6, [r4]
    ldr r3, [r6, #0xa94]
    tst r3, #1
    bne @L_0214ed54
    add r3, r6, #0x200
    ldrh r6, [r3]
    add r6, r6, #1
    strh r6, [r3]
    ldr r3, [r4]
    add r3, r3, #0x200
    ldrh r6, [r3]
    cmp r6, #0x24
    strhsh r2, [r3]
    b @L_0214ed54
@L_0214ed24:
    add r3, r3, #0x200
    strh r1, [r3, #2]
    ldrh r3, [r8, r7]
    cmp r3, #0xbd
    bne @L_0214ed54
    ldr r3, [r4]
    strb r0, [r3, #0xa93]
    ldr r3, [r4]
    add r3, r3, #0x200
    strh r5, [r3]
    ldr r3, [r4]
    str r5, [r3, #0xa94]
@L_0214ed54:
    add r12, r12, #1
    cmp r12, #0x10
    blt @L_0214eca4
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" u16 Parent_get_child_data_kind(void)
{
    return *(u16 *)(((u8 *)(*(s32 *)(data_ov016_02158b48) + 0x100)) + 0x44);
}

extern "C" asm void func_ov016_0214ed80(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0xe8
    mov r0, #0xe8
    mov r1, #4
    bl DWCi_HEAPlAllocEx
    ldr r1, =data_ov016_02158b4c
    add r4, sp, #0xa0
    str r0, [r1]
    mov r0, r4
    bl FS_InitFile
    ldr r1, =data_ov016_021564a8
    mov r0, r4
    bl FS_OpenFile
    cmp r0, #0
    bne @L_0214edc0
    bl OS_Terminate
@L_0214edc0:
    bl OS_GetLockID
    ldr r5, =data_ov016_02158b4c
    add r7, sp, #0xa0
    ldr r1, [r5]
    strh r0, [r1, #0xe4]
    mov r0, r7
    bl FS_GetFileImageTop
    mov r6, #8
    mov r4, r0
    add r1, sp, #0x18
    mov r0, r7
    mov r2, r6
    bl FS_ReadFile
    add r1, sp, #0x10
    mov r2, r6
    mov r0, r7
    bl FS_ReadFile
    mov r0, r7
    bl FS_CloseFile
    ldr r0, [r5]
    add r0, r0, #0x88
    bl FS_InitArchive
    ldr r0, [r5]
    ldr r1, =data_ov016_02154f5c
    add r0, r0, #0x88
    mov r2, #3
    bl FS_RegisterArchiveName
    cmp r0, #0
    bne @L_0214ee38
    bl OS_Terminate
@L_0214ee38:
    ldr r5, =data_ov016_02158b4c
    ldr r1, =func_ov016_0214efa8
    ldr r0, [r5]
    ldr r2, =0x602
    add r0, r0, #0x88
    bl FS_SetArchiveProc
    ldr r0, [sp, #0x18]
    ldr r1, =cbRead
    str r0, [sp]
    ldr r2, [sp, #0x1c]
    ldr r0, =func_ov016_0214f074
    str r2, [sp, #4]
    str r1, [sp, #8]
    str r0, [sp, #0xc]
    ldr r0, [r5]
    ldr r2, [sp, #0x10]
    ldr r3, [sp, #0x14]
    mov r1, r4
    add r0, r0, #0x88
    bl FS_LoadArchive
    cmp r0, #0
    bne @L_0214ee94
    bl OS_Terminate
@L_0214ee94:
    ldr r4, =data_ov016_02158b4c
    mov r1, #0
    ldr r0, [r4]
    mov r2, r1
    add r0, r0, #0x88
    bl FS_LoadArchiveTables
    mov r5, #4
    mov r1, r5
    mov r6, r0
    bl DWCi_HEAPlAllocEx
    ldr r1, [r4]
    mov r2, r6
    str r0, [r1]
    ldr r0, [r4]
    ldr r1, [r0], #0x88
    bl FS_LoadArchiveTables
    ldr r0, [r4]
    mov r2, r5
    add r1, r0, #4
    mov r0, #0x20
    bl DWCi_QUElFormEx
    ldr r1, [r4]
    add r4, sp, #0x20
    str r0, [r1, #0x84]
    ldr r1, =data_ov016_021564c0
    ldr r2, =data_ov016_02154f5c
    mov r0, r4
    bl OS_SPrintf
    mov r0, r4
    bl FS_ChangeDir
    add sp, sp, #0xe8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" void DWCi_ARClEnd(void)
{
    FS_ChangeDir((s32)data_ov016_021564c8);
    s32 t0 = (*(s32 *)(data_ov016_02158b4c) + 0x88);
    FS_UnloadArchiveTables(t0);
    s32 t1 = (*(s32 *)(data_ov016_02158b4c) + 0x88);
    FS_UnloadArchive(t1);
    s32 t2 = (*(s32 *)(data_ov016_02158b4c) + 0x88);
    FS_ReleaseArchiveName(t2);
    u16 t3 = *(u16 *)(*(u8 * *)(data_ov016_02158b4c) + 0xE4);
    OS_ReleaseLockID(t3);
    u8 *t4 = (u8 *)*(s32 *)(data_ov016_02158b4c);
    *(u16 *)(t4 + 0xE4) = 0;
    s32 t5 = *(s32 *)(data_ov016_02158b4c);
    DWCi_HEAPlFree_(t5);
    u8 *t6 = (u8 *)*(s32 *)(data_ov016_02158b4c);
    *(s32 *)(t6) = 0;
    DWCi_HEAPlFree_((s32)data_ov016_02158b4c_b, (s32)t6);
}

extern "C" s32 func_ov016_0214efa8(s32 arg0, s32 arg1)
{
    u16 t0;
    u16 t1;
    switch (arg1) {
        case 9:
            t0 = *(u16 *)(*(u8 * *)(((u8 *)&data_ov016_02158b4c)) + 0xE4);
            CARD_LockRom(t0);
            return 0;
        case 10:
            t1 = *(u16 *)(*(u8 * *)(((u8 *)&data_ov016_02158b4c)) + 0xE4);
            CARD_UnlockRom(t1);
            return 0;
        case 1:
            return 4;
        default:
            return 0x102;
    }
}

extern "C" s32 cbRead(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 v0;
    v0 = FS_GetArchiveBase(arg0, arg1, arg2, arg3);
    CARDi_ReadRom((1 - 2), (arg2 + v0), arg1, arg3, (s32)((u8 *)&cbReadRom), arg0, 1);
    return 0x100;
}

extern "C" void cbReadRom(s32 arg0)
{
    FS_NotifyArchiveAsyncEnd(arg0, 0);
}

extern "C" s32 func_ov016_0214f074(void)
{
    return 1;
}

extern "C" asm void DWCi_ARClReadEx(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x4c
    ldr r3, =data_ov016_02158b4c
    mov r6, r0
    ldr r0, [r3]
    mov r5, r1
    ldr r0, [r0, #0x84]
    mov r4, r2
    bl DWCi_QUElPopBack
    add r7, sp, #4
    mov r0, r7
    bl FS_InitFile
    mov r0, r7
    mov r1, r6
    bl FS_OpenFile
    cmp r0, #0
    bne @L_0214f0c4
    bl OS_Terminate
@L_0214f0c4:
    add r0, sp, #4
    bl FS_GetLength
    mov r7, #2
    mov r8, r0
    cmp r5, #0
    ldr r1, =data_ov016_021564d0
    mov r0, r6
    mov r2, r7
    strne r8, [r5]
    bl cmpBack
    cmp r0, #0
    sub r7, r7, #6
    moveq r7, r4
    mov r0, r8
    mov r1, r7
    bl DWCi_HEAPlAllocEx
    mov r1, r0
    add r6, sp, #4
    mov r2, r8
    mov r0, r6
    str r1, [sp]
    bl FS_ReadFile
    mov r0, r6
    bl FS_CloseFile
    cmp r7, #0
    ldrgt r0, [sp]
    addgt sp, sp, #0x4c
    ldmgtia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldr r0, [sp]
    cmp r5, #0
    ldr r0, [r0]
    mov r1, r4
    mov r0, r0, lsr #8
    strne r0, [r5]
    bl DWCi_HEAPlAllocEx
    mov r4, r0
    ldr r0, [sp]
    mov r1, r4
    bl MI_UncompressLZ8
    add r0, sp, #0
    bl DWCi_HEAPlFree_
    mov r0, r4
    add sp, sp, #0x4c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}
