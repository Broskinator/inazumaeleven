#include "ov014/Unk_ov014_021211a8.hpp"

extern "C" s32 WCM_CleanupAsync(void);
extern "C" void WCM_SearchAsync(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 WCM_BeginSearchAsync(...);
extern "C" s32 WCM_EndSearchAsync(...);
extern "C" void WCM_ConnectAsync(void);
extern "C" void WCM_DisconnectAsync(void);
extern "C" void WCM_TerminateAsync(void);
extern "C" u8 WCM_GetPhase(void);
extern "C" u32 WCM_UpdateOption(u32 arg0);
extern "C" s32 WCM_GetAllowedChannel(void);
extern "C" s32 WCMi_GetSystemWork(void);
extern "C" void WcmConfigure(void);
extern "C" s32 WcmInitOption(void);
extern "C" u16 WCMi_GetNextScanChannel(s32 arg0);
extern "C" s32 WCMi_Notify(...);
extern "C" s32 WCMi_NotifyEx(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern "C" s32 WCMi_SetPhase(...);
extern "C" s32 WCMi_ResetKeepAliveAlarm(void);
extern "C" void WcmKeepAliveAlarm(void);
extern "C" s32 WCMi_GetDefaultDeviceId(void);
extern "C" s32 WCM_ClearApList(void);
extern "C" s32 WCM_CountApList(void);
extern "C" void WCM_LockApList(void);
extern "C" void func_ov014_02121cd0(void);
extern "C" u8 *WCM_PointApListEx(s32 arg0);
extern "C" void WCMi_EntryApList(u8 *arg0, u16 arg1);
extern "C" s32 WcmAllocApList(...);
extern "C" s32 WcmGetOldestApList(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3);
extern "C" s32 WcmSearchApList(...);
extern "C" u8 *WcmSearchIndexedApList(s32 arg0);
extern "C" s32 WcmAppendApList(...);
extern "C" s32 WCMi_BssDescCopy(...);
extern "C" void WCMi_InitCpsif(void);
extern "C" void WCMi_CpsifRecvCallback(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" char *WCMi_GetCpsifWork(void);
extern "C" u8 *WCM_GetApMacAddress(void);
extern "C" u8 *WCM_GetApEssid(u16 *arg0);
extern "C" void WCM_SetRecvDCFCallback(s32 arg0);
extern "C" void WCM_SendDCFDataEx(void);
extern "C" void WCMi_CpsifUnlockMutexInIRQ(u8 *arg0);
extern "C" void WCMi_CpsifSetMacAddress(s32 arg0);
extern "C" void WCMi_MergeToBuffer(void);
extern "C" s32 WcmCompareMemory(...);
extern "C" void WCM_CompareBssID(s32 arg0, s32 arg1);
extern "C" s32 WCM_GetLinkLevel(void);
extern "C" s32 WCM_CalcLinkLevel(s32 arg0);
extern "C" void WCMi_GetRssiAverage(void);
extern "C" s32 WCMi_ShelterRssi(...);
extern "C" void WCMi_WmifStartupAsync(void);
extern "C" s32 WCMi_WmifCleanupAsync(void);
extern "C" s32 WCMi_WmifBeginSearchAsync(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 WCMi_WmifConnectAsync(void);
extern "C" s32 WCMi_WmifDisconnectAsync(void);
extern "C" void WCMi_WmifTerminateAsync(void);
extern "C" s32 WCMi_WmifSetDCFData(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 WCMi_WmifGetAllowedChannel(...);
extern "C" void WcmWmReset(void);
extern "C" void WcmWmcbIndication(u16 *arg0);
extern "C" void WcmWmcbCommon(void);
extern "C" void WcmWmcbScanEx(void);
extern "C" s32 WcmWmcbEndScan(u8 *arg0);
extern "C" void WcmWmcbConnect(void);
extern "C" s32 WcmWmcbDisconnect(u8 *arg0);
extern "C" s32 WcmWmcbStartDCF(u8 *arg0);
extern "C" void WcmWmcbEndDCF(void);
extern "C" void WcmWmcbReset(void);
extern "C" s32 WcmEditScanExParam(...);
extern "C" s32 WcmWmcbSetDCFData(u8 *arg0);
extern "C" void WcmWmcbSetDCFDataAsync(void);

extern "C" char WCM_Bssid_Any[];
extern "C" char WCM_Essid_Any[];
extern "C" char data_ov014_021240d0[];
extern "C" char data_ov014_021240d4[];
extern "C" char WCMi_OverridedDeviceId[];
extern "C" char wcmCpsifw[];
extern "C" char data_ov014_0212d588[];
extern "C" char data_ov014_0212d5ac[];
extern "C" char data_ov014_0212d5b4[];
extern "C" char data_ov014_0212d5b5[];
extern "C" s32 DC_InvalidateRange(...);
extern "C" void DC_StoreRange(void);
extern "C" void MI_CpuCopy8(void);
extern "C" s32 MI_CpuFill8(...);
extern "C" void MIi_CpuClearFast(void);
extern "C" void MIi_CpuCopyFast(void);
extern "C" s32 OS_CancelAlarm(...);
extern "C" s32 OS_DisableInterrupts(...);
extern "C" s32 OS_InitMutex(...);
extern "C" void OS_LockMutex(void);
extern "C" s32 OS_RestoreInterrupts(...);
extern "C" void OS_UnlockMutex(void);
extern "C" s32 OS_WakeupThread(...);
extern "C" void WMi_GetStatusAddress(void);
extern "C" s32 OS_SetAlarm(...);
extern "C" void MI_CpuComp8(void);
extern "C" s32 MI_CpuCopy(...);
extern "C" void WM_Init(void);
extern "C" void WM_Finish(void);
extern "C" void func_020131c0(void);
extern "C" void WM_GetDispersionScanPeriod(void);
extern "C" void WM_Disable(void);
extern "C" void WM_PowerOff(void);
extern "C" s32 WM_Reset(...);
extern "C" s32 WM_StartScanEx(...);
extern "C" void WM_SetDCFData(void);
extern "C" void WM_EndDCF(void);
extern "C" void WM_SetLifeTime(void);
extern "C" void MATH_CountPopulation(void);
extern "C" void _s32_div_f(void);
extern "C" void _u32_div_f(void);

extern "C" void WM_SetIndCallback(void);
extern "C" void OS_GetMacAddress(void);
extern "C" void WM_Enable(void);
extern "C" void OS_SleepThread(void);
extern "C" void WM_PowerOn(void);
extern "C" void WM_SetBeaconIndication(void);
extern "C" void WM_SetWEPKeyEx(void);
extern "C" void WM_StartConnectEx(void);
extern "C" void WM_EndScan(void);
extern "C" void WM_Disconnect(void);
extern "C" s32 WCM_CleanupAsync(void)
{
    s32 s = ((s32 (*)(...))OS_DisableInterrupts)();
    u8 *p = *(u8 **)((u8 *)WCMi_OverridedDeviceId + 4);
    s32 r;
    if (p == 0) {
        ((s32 (*)(...))OS_RestoreInterrupts)(s);
        return 1;
    }
    switch (p[0x12DE]) {
    case 4:
        ((s32 (*)(...))OS_RestoreInterrupts)(s);
        return 2;
    case 1:
        ((s32 (*)(...))OS_RestoreInterrupts)(s);
        return 0;
    default:
        ((s32 (*)(...))OS_RestoreInterrupts)(s);
        return 1;
    case 3:
        if (p[0x12DF] == 1)
            r = ((s32 (*)(...))WCMi_WmifCleanupAsync)();
        else
            r = 7;
        ((s32 (*)(...))OS_RestoreInterrupts)(s);
        return r;
    }
}

extern "C" void WCM_SearchAsync(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    if ((arg0 == 0 || arg1 == 0)) {
        WCM_EndSearchAsync();
        return;
    }
    WCM_BeginSearchAsync();
    return;
}

extern "C" asm s32 WCM_BeginSearchAsync(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r6, r1
    mov r5, r2
    bl OS_DisableInterrupts
    ldr r1, =WCMi_OverridedDeviceId
    mov r4, r0
    ldr r1, [r1, #4]
    cmp r1, #0
    bne @L_02121294
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02121294:
    add r0, r1, #0x1000
    ldrb r0, [r0, #0x2df]
    cmp r0, #1
    movne r5, #7
    bne @L_021212bc
    mov r0, r7
    mov r1, r6
    mov r2, r5
    bl WCMi_WmifBeginSearchAsync
    mov r5, r0
@L_021212bc:
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, r5
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm s32 WCM_EndSearchAsync(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    bl OS_DisableInterrupts
    ldr r5, =WCMi_OverridedDeviceId
    mov r4, r0
    ldr r1, [r5, #4]
    cmp r1, #0
    bne @L_021212f8
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r3, r4, r5, pc}
@L_021212f8:
    add r1, r1, #0x1000
    ldrb r1, [r1, #0x2de]
    cmp r1, #3
    beq @L_02121344
    cmp r1, #6
    beq @L_0212131c
    cmp r1, #7
    beq @L_02121338
    b @L_02121350
@L_0212131c:
    mov r0, #7
    bl WCMi_SetPhase
    ldr r0, [r5, #4]
    mov r1, #4
    add r0, r0, #0x1200
    strh r1, [r0, #0xda]
    b @L_0212135c
@L_02121338:
    bl OS_RestoreInterrupts
    mov r0, #2
    ldmia sp!, {r3, r4, r5, pc}
@L_02121344:
    bl OS_RestoreInterrupts
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_02121350:
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r3, r4, r5, pc}
@L_0212135c:
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #3
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void WCM_ConnectAsync(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r0
    mov r7, r1
    mov r6, r2
    bl OS_DisableInterrupts
    mov r4, r0
    bl WCMi_GetSystemWork
    movs r5, r0
    bne @L_021213a4
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_021213a4:
    add r0, r5, #0x1000
    ldrb r0, [r0, #0x2de]
    cmp r0, #3
    beq @L_021213c8
    cmp r0, #8
    beq @L_021214c4
    cmp r0, #9
    beq @L_021214d4
    b @L_021214e4
@L_021213c8:
    cmp r8, #0
    bne @L_021213e0
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_021213e0:
    ldrh r0, [r8, #0x3c]
    cmp r0, #0
    beq @L_021213fc
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_021213fc:
    cmp r7, #0
    beq @L_02121494
    ldrb r1, [r7]
    cmp r1, #3
    bhi @L_0212141c
    ldrb r0, [r7, #1]
    cmp r0, #4
    bhs @L_0212142c
@L_0212141c:
    add r3, r5, #0x1000
    ldrb r0, [r3, #0x291]
    cmp r0, #0x40
    bls @L_0212143c
@L_0212142c:
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0212143c:
    strb r1, [r3, #0x290]
    ldrb r0, [r7]
    cmp r0, #0
    bne @L_0212145c
    add r0, r5, #0x1240
    mov r1, #0
    mov r2, #0x50
    b @L_021214a0
@L_0212145c:
    cmp r0, #3
    bhi @L_02121480
    ldrb r12, [r7, #1]
    add r0, r7, #2
    add r1, r5, #0x1240
    mov r2, #0x50
    strb r12, [r3, #0x291]
@L_02121478:
    bl MI_CpuCopy8
    b @L_021214a4
@L_02121480:
    ldrb r2, [r7, #1]
    add r0, r7, #2
    add r1, r5, #0x1240
    strb r2, [r3, #0x291]
    b @L_02121478
@L_02121494:
    add r0, r5, #0x1240
    mov r1, #0
    mov r2, #0x54
@L_021214a0:
    bl MI_CpuFill8
@L_021214a4:
    add r1, r5, #0x2e0
    mov r0, r8
    add r1, r1, #0x1000
    mov r2, #0xc0
    bl MI_CpuCopy8
    mov r0, r6
    bl WCM_UpdateOption
    b @L_021214f4
@L_021214c4:
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #2
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_021214d4:
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_021214e4:
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_021214f4:
    add r0, r5, #0x1000
    ldrb r0, [r0, #0x2df]
    cmp r0, #1
    movne r5, #7
    bne @L_02121510
    bl WCMi_WmifConnectAsync
    mov r5, r0
@L_02121510:
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, r5
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void WCM_DisconnectAsync(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    bl OS_DisableInterrupts
    ldr r6, =WCMi_OverridedDeviceId
    mov r4, r0
    ldr r1, [r6, #4]
    mov r5, #0
    cmp r1, #0
    bne @L_0212154c
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r4, r5, r6, pc}
@L_0212154c:
    add r1, r1, #0x1000
    ldrb r2, [r1, #0x2de]
    cmp r2, #3
    beq @L_02121578
    cmp r2, #9
    beq @L_02121590
    cmp r2, #0xa
    bne @L_02121584
    bl OS_RestoreInterrupts
    mov r0, #2
    ldmia sp!, {r4, r5, r6, pc}
@L_02121578:
    bl OS_RestoreInterrupts
    mov r0, r5
    ldmia sp!, {r4, r5, r6, pc}
@L_02121584:
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r4, r5, r6, pc}
@L_02121590:
    ldrb r0, [r1, #0x2dd]
    cmp r0, #1
    bne @L_021215b8
    mov r0, #0xa
    bl WCMi_SetPhase
    ldr r0, [r6, #4]
    mov r1, #6
    add r0, r0, #0x1200
    strh r1, [r0, #0xda]
    b @L_021215d0
@L_021215b8:
    ldrb r0, [r1, #0x2df]
    cmp r0, #1
    movne r5, #7
    bne @L_021215d0
    bl WCMi_WmifDisconnectAsync
    mov r5, r0
@L_021215d0:
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, r5
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void WCM_TerminateAsync(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    bl OS_DisableInterrupts
    ldr r6, =WCMi_OverridedDeviceId
    mov r4, r0
    ldr r1, [r6, #4]
    mov r5, #0
    cmp r1, #0
    bne @L_02121610
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r4, r5, r6, pc}
@L_02121610:
    add r1, r1, #0x1000
    ldrb r2, [r1, #0x2de]
    cmp r2, #0xd
    addls pc, pc, r2, lsl #2
    b @L_0212169c
    b @L_0212169c
    b @L_02121668
    b @L_0212169c
    b @L_021216ac
    b @L_0212169c
    b @L_0212169c
    b @L_02121674
    b @L_0212169c
    b @L_0212169c
    b @L_021216ac
    b @L_0212169c
    b @L_0212169c
    b @L_021216ac
    b @L_0212165c
@L_0212165c:
    bl OS_RestoreInterrupts
    mov r0, #2
    ldmia sp!, {r4, r5, r6, pc}
@L_02121668:
    bl OS_RestoreInterrupts
    mov r0, r5
    ldmia sp!, {r4, r5, r6, pc}
@L_02121674:
    mov r0, #0xd
    bl WCMi_SetPhase
    ldr r1, [r6, #4]
    mov r2, #9
    add r1, r1, #0x1200
    mov r0, r4
    strh r2, [r1, #0xda]
    bl OS_RestoreInterrupts
    mov r0, #3
    ldmia sp!, {r4, r5, r6, pc}
@L_0212169c:
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r4, r5, r6, pc}
@L_021216ac:
    ldrb r0, [r1, #0x2dd]
    cmp r0, #1
    bne @L_021216d4
    mov r0, #0xd
    bl WCMi_SetPhase
    ldr r0, [r6, #4]
    mov r1, #9
    add r0, r0, #0x1200
    strh r1, [r0, #0xda]
    b @L_021216ec
@L_021216d4:
    ldrb r0, [r1, #0x2df]
    cmp r0, #1
    movne r5, #7
    bne @L_021216ec
    bl WCMi_WmifTerminateAsync
    mov r5, r0
@L_021216ec:
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, r5
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" u8 WCM_GetPhase(void)
{
    s32 m = ((s32 (*)(void))OS_DisableInterrupts)();
    u8 r = 0;
    if (*(u8 **)((u8 *)WCMi_OverridedDeviceId + 4) != 0)
        r = *(*(u8 **)((u8 *)WCMi_OverridedDeviceId + 4) + 0x12DE);
    ((void (*)(s32))OS_RestoreInterrupts)(m);
    return r;
}

extern "C" u32 WCM_UpdateOption(u32 arg0)
{
    s32 e = ((s32 (*)(...))OS_DisableInterrupts)();
    u8 *p = *(u8 **)((u8 *)WCMi_OverridedDeviceId + 4);
    u32 m = 0;
    u32 o = *(u32 *)(p + 0x12D4);
    if (p == 0) {
        ((s32 (*)(...))OS_RestoreInterrupts)(e);
        return m;
    }
    if (arg0 & 0x8000) {
        m |= 0x3FFE;
        if ((arg0 & 0x3FFE) == 0)
            arg0 |= 0xA082;
    }
    if (arg0 & 0x20000)
        m |= 0x10000;
    if (arg0 & 0x80000)
        m |= 0x40000;
    if (arg0 & 0x200000)
        m |= 0x100000;
    if (arg0 & 0x800000)
        m |= 0x400000;
    *(u32 *)(p + 0x12D4) = arg0 | (o & ~m);
    ((s32 (*)(...))OS_RestoreInterrupts)(e);
    return o;
}

extern "C" s32 WCM_GetAllowedChannel(void)
{
    u8 *r0;
    s32 r1;
    s32 v0;
    s32 v1;
    v0 = WCMi_GetSystemWork();
    r0 = (u8 *)(v0 + 0x1000);
    r1 = *(u8 *)(((u8 *)(v0 + 0x1000)) + 0x2DE);
    if ((((u32)r1 >= (u32)3 && (u32)r1 <= (u32)10) && (r0 = (u8 *)*(u8 *)(r0 + 0x2DF), (s32)r0 == 1))) {
        v1 = WCMi_WmifGetAllowedChannel((s32)r0, r1);
        return v1;
    } else {
        return 0;
    }
}

extern "C" s32 WCMi_GetSystemWork(void)
{
    return *(s32 *)(WCMi_OverridedDeviceId + 0x4);
}

extern "C" asm void WcmConfigure(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    movs r5, r0
    mov r4, r1
    bne @L_02121868
    ldr r1, =WCMi_OverridedDeviceId
    mov r3, #3
    ldr r0, [r1, #4]
    mov r2, #0
    add r0, r0, #0x1000
    str r3, [r0, #0x2c0]
    ldr r0, [r1, #4]
    add r0, r0, #0x1000
    str r2, [r0, #0x2c4]
    ldr r0, [r1, #4]
    add r0, r0, #0x1000
    str r2, [r0, #0x2c8]
    ldr r0, [r1, #4]
    add r0, r0, #0x1000
    str r2, [r0, #0x2cc]
    b @L_02121920
@L_02121868:
    ldr r1, =WCMi_OverridedDeviceId
    ldr r2, [r5]
    ldr r0, [r1, #4]
    and r2, r2, #3
    add r0, r0, #0x1000
    str r2, [r0, #0x2c0]
    ldr r3, [r5, #4]
    ldr r0, [r5, #8]
    and r2, r3, #3
    rsb r2, r2, #4
    and r2, r2, #3
    add r2, r2, #0xc
    cmp r2, r0
    ldr r0, [r1, #4]
    bls @L_021218c0
    mov r2, #0
    add r0, r0, #0x1000
    str r2, [r0, #0x2c4]
    ldr r0, [r1, #4]
    add r0, r0, #0x1000
    str r2, [r0, #0x2c8]
    b @L_0212190c
@L_021218c0:
    add r2, r3, #3
    bic r2, r2, #3
    add r0, r0, #0x1000
    str r2, [r0, #0x2c4]
    ldr r2, [r5, #4]
    ldr r0, [r1, #4]
    and r2, r2, #3
    rsb r2, r2, #4
    ldr r3, [r5, #8]
    and r2, r2, #3
    sub r2, r3, r2
    add r0, r0, #0x1000
    str r2, [r0, #0x2c8]
    ldr r0, [r1, #4]
    mov r1, #0
    add r2, r0, #0x1000
    ldr r0, [r2, #0x2c4]
    ldr r2, [r2, #0x2c8]
    bl MI_CpuFill8
@L_0212190c:
    ldr r0, =WCMi_OverridedDeviceId
    ldr r1, [r5, #0xc]
    ldr r0, [r0, #4]
    add r0, r0, #0x1000
    str r1, [r0, #0x2cc]
@L_02121920:
    ldr r0, =WCMi_OverridedDeviceId
    ldr r0, [r0, #4]
    add r0, r0, #0x1000
    str r4, [r0, #0x2d0]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 WcmInitOption(void)
{
    u8 *t0 = (u8 *)(*(s32 *)(WCMi_OverridedDeviceId + 0x4) + 0x1000);
    *(s32 *)(t0 + 0x2D4) = 0xAAA082;
    return (s32)t0;
}

extern "C" u16 WCMi_GetNextScanChannel(s32 arg0)
{
    s32 i;
    for (i = 0; i < 13; i++) {
        s32 c = (arg0 + i) % 13;
        if ((*(u32 *)(*(u8 **)((u8 *)WCMi_OverridedDeviceId + 4) + 0x12D4) & (1 << (c + 1))) && (((s32 (*)(...))WCM_GetAllowedChannel)() & (1 << c)))
            break;
    }
    return (arg0 + i) % 13 + 1;
}

extern "C" asm s32 WCMi_Notify(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r12, =WCMi_OverridedDeviceId
    mov r5, r0
    ldr r0, [r12, #4]
    mov r4, r1
    add r1, r0, #0x1200
    ldrsh r0, [r1, #0xda]
    mov r12, #0
    mov lr, r2
    strh r12, [r1, #0xda]
    str r3, [sp]
    mov r1, r5
    mov r2, r4
    mov r3, lr
    bl WCMi_NotifyEx
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 WCMi_NotifyEx(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    s32 local[4];
    s32 v0;
    s32 t0;
    if (*(s32 *)(*(u8 * *)(((u8 *)&WCMi_OverridedDeviceId) + 0x4) + 0x12D0) == 0)
        return arg0;
    *(u16 *)(((u8 *)local)) = arg0;
    *(s32 *)(((u8 *)local) + 0x4) = arg2;
    *(s32 *)(((u8 *)local) + 0x8) = arg3;
    *(s32 *)(((u8 *)local) + 0xC) = arg4;
    *(u16 *)(((u8 *)local) + 0x2) = arg1;
    t0 = *(s32 *)(*(u8 * *)(((u8 *)&WCMi_OverridedDeviceId) + 0x4) + 0x12D0);
    v0 = ((s32 (*)(...))*(s32 *)(*(u8 * *)(((u8 *)&WCMi_OverridedDeviceId) + 0x4) + 0x12D0))((s32)((u8 *)local), t0, arg2, arg3);
    return v0;
}

extern "C" asm s32 WCMi_SetPhase(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl OS_DisableInterrupts
    ldr r1, =WCMi_OverridedDeviceId
    mov r4, r0
    ldr r1, [r1, #4]
    add r0, r1, #0x1000
    ldrb r0, [r0, #0x2de]
    cmp r0, #9
    bne @L_02121ac8
    cmp r5, #9
    beq @L_02121ac8
    add r0, r1, #0x294
    add r0, r0, #0x1000
    bl OS_CancelAlarm
@L_02121ac8:
    ldr r0, =WCMi_OverridedDeviceId
    ldr r0, [r0, #4]
    add r0, r0, #0x1000
    ldrb r1, [r0, #0x2de]
    cmp r1, #0xb
    strneb r5, [r0, #0x2de]
    cmp r5, #9
    bne @L_02121b1c
    ldr r5, =WCMi_OverridedDeviceId
    ldr r0, [r5, #4]
    add r0, r0, #0x294
    add r0, r0, #0x1000
    bl OS_CancelAlarm
    mov r2, #0
    str r2, [sp]
    ldr r0, [r5, #4]
    ldr r1, =0x22f5341
    add r0, r0, #0x294
    ldr r3, =WcmKeepAliveAlarm
    add r0, r0, #0x1000
    bl OS_SetAlarm
@L_02121b1c:
    mov r0, r4
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 WCMi_ResetKeepAliveAlarm(void)
{
    s32 r1;
    s32 r4;
    s32 v0;
    s32 v3;
    s32 t0;
    v0 = OS_DisableInterrupts();
    t0 = ((*(s32 *)(WCMi_OverridedDeviceId + 0x4) + 0x294) + 0x1000);
    OS_CancelAlarm(t0);
    r4 = v0;
    r1 = *(s32 *)(WCMi_OverridedDeviceId + 0x4);
    if (*(u8 *)(((u8 *)(r1 + 0x1000)) + 0x2DE) == 9) {
        OS_SetAlarm(((r1 + 0x294) + 0x1000), 0x22F5341, 0, (s32)WcmKeepAliveAlarm, 0);
    }
    v3 = OS_RestoreInterrupts(r4);
    return v3;
}

extern "C" void WcmKeepAliveAlarm(void)
{
    WCMi_ResetKeepAliveAlarm();
}

extern "C" s32 WCMi_GetDefaultDeviceId(void)
{
    return 1;
}

extern "C" s32 WCM_ClearApList(void)
{
    u8 *r0;
    u8 *r1;
    s32 r2;
    s32 r4;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v4;
    v0 = OS_DisableInterrupts();
    v1 = WCMi_GetSystemWork();
    r0 = (u8 *)v1;
    r4 = v0;
    if ((s32)r0 == 0) {
        v2 = OS_RestoreInterrupts(r4);
        return v2;
    } else {
        r1 = (u8 *)(r0 + 0x1000);
        r0 = (u8 *)*(s32 *)(r0 + 0x12C4);
        if (((s32)r0 != 0 && (r2 = *(s32 *)(r1 + 0x2C8), r2 > 0))) {
            MI_CpuFill8((s32)r0, 0, r2);
        }
        v4 = OS_RestoreInterrupts(r4);
        return v4;
    }
}

extern "C" s32 WCM_CountApList(void)
{
    u8 *r0;
    u8 *r1;
    s32 r4;
    s32 r5;
    s32 v0;
    s32 v1;
    s32 t0;
    v0 = OS_DisableInterrupts();
    v1 = WCMi_GetSystemWork();
    r0 = (u8 *)v1;
    r4 = v0;
    r5 = 0;
    if ((s32)r0 == 0) {
        OS_RestoreInterrupts(r4);
        return r5;
    } else {
        r1 = (u8 *)*(s32 *)(r0 + 0x12C4);
        t0 = *(s32 *)(r0 + 0x12C4);
        r0 = (u8 *)(r0 + 0x1000);
        if (t0 != 0) {
            r5 = ((u32)*(s32 *)(r0 + 0x2C8) > (u32)0xC ? *(s32 *)(r1) : r5);
        }
        OS_RestoreInterrupts(r4, (s32)r1);
        return r5;
    }
}

extern "C" asm void WCM_LockApList(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl OS_DisableInterrupts
    mov r4, r0
    bl WCMi_GetSystemWork
    cmp r0, #0
    bne @L_02121c84
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_02121c84:
    add r1, r0, #0x1000
    cmp r5, #0
    ldrb r1, [r1, #0x2dc]
    mov r5, #1
    beq @L_02121cac
    cmp r1, #0
    moveq r5, #0
    add r0, r0, #0x1000
    mov r1, #1
    b @L_02121cbc
@L_02121cac:
    cmp r1, #0
    moveq r5, #0
    add r0, r0, #0x1000
    mov r1, #0
@L_02121cbc:
    strb r1, [r0, #0x2dc]
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, r5
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void func_ov014_02121cd0(void)
{
    ((void (*)(...))WCM_PointApListEx)();
}

extern "C" u8 *WCM_PointApListEx(s32 arg0)
{
    s32 s = OS_DisableInterrupts();
    u8 *n;
    if (((s32 (*)(void))WCMi_GetSystemWork)() == 0) {
        OS_RestoreInterrupts(s);
        return 0;
    }
    n = WcmSearchIndexedApList(arg0);
    if (n == 0) {
        OS_RestoreInterrupts(s);
        return 0;
    }
    OS_RestoreInterrupts(s);
    return n + 0x10;
}

extern "C" void WCMi_EntryApList(u8 *arg0, u16 arg1)
{
    s32 r0;
    s32 r1;
    u8 *r6;
    u8 *r7;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;
    v0 = WCMi_GetSystemWork();
    if (v0 == 0)
        return;
    if (*(u8 *)(((u8 *)(v0 + 0x1000)) + 0x2DC) != 0)
        return;
    r6 = (u8 *)v0;
    r1 = *(u8 *)(((u8 *)(v0 + 0x1000)) + 0x2DC);
    if (*(u8 *)(r6 + 0x12DF) == 1) {
        if (*(u16 *)(arg0 + 0x3C) != 0)
            return;
    }
    v1 = WcmSearchApList((s32)(arg0 + 4), r1);
    r7 = (u8 *)v1;
    if ((s32)r7 == 0) {
        v2 = WcmAllocApList();
        r7 = (u8 *)v2;
    }
    if (((s32)r7 == 0 && (r0 = *(s32 *)(r6 + 0x12CC), r0 == 1))) {
        v3 = ((s32 (*)(...))WcmGetOldestApList)(r0);
        r7 = (u8 *)v3;
    }
    if ((s32)r7 == 0)
        return;
    WCMi_BssDescCopy((s32)arg0, (s32)(r7 + 0x10));
    *(u16 *)(r7 + 0x2) = arg1;
    WcmAppendApList((s32)r7);
    return;
}

extern "C" asm s32 WcmAllocApList(...)
{
    stmdb sp!, {r4, lr}
    bl WCMi_GetSystemWork
    add r2, r0, #0x1000
    ldr r1, [r2, #0x2c4]
    mov r0, #0
    cmp r1, #0
    ldmeqia sp!, {r4, pc}
    ldr r3, [r2, #0x2c8]
    cmp r3, #0xc
    ldmlsia sp!, {r4, pc}
    ldr r2, =0x4ec4ec4f
    sub r3, r3, #0xc
    umull r2, r12, r3, r2
    movs r12, r12, lsr #6
    ldmeqia sp!, {r4, pc}
    ldr r2, [r1]
    cmp r12, r2
    ldmlsia sp!, {r4, pc}
    mov lr, r0
    cmp r12, #0
    bls @L_02121e48
    add r4, r1, #0xc
    mov r2, #0xd0
@L_02121e28:
    mul r0, lr, r2
    ldrb r3, [r4, r0]
    add r0, r4, r0
    cmp r3, #0
    beq @L_02121e48
    add lr, lr, #1
    cmp lr, r12
    blo @L_02121e28
@L_02121e48:
    cmp lr, r12
    ldmhsia sp!, {r4, pc}
    mov r2, #1
    strb r2, [r0]
    ldr r3, [r1]
    mov r2, #0
    str r3, [r0, #4]
    str r2, [r0, #0xc]
    ldr r2, [r1, #8]
    str r2, [r0, #8]
    str r0, [r1, #8]
    ldr r2, [r0, #8]
    cmp r2, #0
    strne r0, [r2, #0xc]
    streq r0, [r1, #4]
    ldr r2, [r1]
    add r2, r2, #1
    str r2, [r1]
    ldmia sp!, {r4, pc}
}

extern "C" s32 WcmGetOldestApList(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3)
{
    s32 v0 = WCMi_GetSystemWork();
    arg0 = (u8 *)(v0 + 0x1000);
    arg1 = (u8 *)*(s32 *)(((u8 *)(v0 + 0x1000)) + 0x2C4);
    if ((s32)arg1 != 0) {
        if ((u32)*(s32 *)(arg0 + 0x2C8) > (u32)0xC)
            return *(s32 *)(arg1 + 0x4);
    }
    return 0;
}

extern "C" asm s32 WcmSearchApList(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl WCMi_GetSystemWork
    add r0, r0, #0x1000
    mov r4, #0
    cmp r5, #0
    ldr r1, [r0, #0x2c4]
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, pc}
    cmp r1, #0
    beq @L_02121f2c
    ldr r0, [r0, #0x2c8]
    cmp r0, #0xc
    bls @L_02121f2c
    ldr r4, [r1, #4]
    cmp r4, #0
    beq @L_02121f2c
@L_02121f0c:
    mov r1, r5
    add r0, r4, #0x14
    bl WCM_CompareBssID
    cmp r0, #0
    bne @L_02121f2c
    ldr r4, [r4, #0xc]
    cmp r4, #0
    bne @L_02121f0c
@L_02121f2c:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" u8 *WcmSearchIndexedApList(s32 arg0)
{
    u8 *s = ((u8 *(*)(void))WCMi_GetSystemWork)();
    u8 *n = 0;
    u8 *h = *(u8 **)(s + 0x12C4);
    if (h != 0 && *(u32 *)(s + 0x12C8) > 0xC) {
        for (n = *(u8 **)(h + 4); n != 0; n = *(u8 **)(n + 0xC)) {
            if (*(s32 *)(n + 4) == arg0)
                break;
        }
    }
    return n;
}

extern "C" asm s32 WcmAppendApList(...)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl WCMi_GetSystemWork
    add r1, r0, #0x1000
    ldr r0, [r1, #0x2c4]
    cmp r4, #0
    cmpne r0, #0
    ldmeqia sp!, {r4, pc}
    ldr r1, [r1, #0x2c8]
    cmp r1, #0xc
    ldmlsia sp!, {r4, pc}
    ldr r3, [r0, #4]
    cmp r3, #0
    beq @L_02122000
@L_02121fc0:
    cmp r3, r4
    bne @L_02121ff4
    ldr r2, [r3, #8]
    ldr r1, [r3, #0xc]
    cmp r2, #0
    strne r1, [r2, #0xc]
    streq r1, [r0, #4]
    ldr r2, [r3, #0xc]
    ldr r1, [r3, #8]
    cmp r2, #0
    strne r1, [r2, #8]
    streq r1, [r0, #8]
    b @L_02122000
@L_02121ff4:
    ldr r3, [r3, #0xc]
    cmp r3, #0
    bne @L_02121fc0
@L_02122000:
    mov r1, #0
    str r1, [r4, #0xc]
    ldr r1, [r0, #8]
    str r1, [r4, #8]
    str r4, [r0, #8]
    ldr r1, [r4, #8]
    cmp r1, #0
    strne r4, [r1, #0xc]
    streq r4, [r0, #4]
    cmp r3, #0
    ldreq r1, [r0]
    streq r1, [r4, #4]
    ldreq r1, [r0]
    addeq r1, r1, #1
    streq r1, [r0]
    ldmia sp!, {r4, pc}
}

extern "C" asm s32 WCMi_BssDescCopy(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10
    mov r11, r0
    mov r4, r1
    bl WCMi_GetSystemWork
    mov r6, #0
    str r0, [sp]
    mov r0, r6
    mov r1, r4
    mov r2, #0xc0
    bl MIi_CpuClearFast
    mov r5, #0x40
    mov r0, r11
    mov r1, r4
    mov r2, r5
    bl MIi_CpuCopyFast
    ldr r0, [sp]
    strh r6, [r4, #0x3e]
    add r0, r0, #0x1000
    ldrb r0, [r0, #0x2df]
    ldr r1, =data_ov014_021240d0
    mov r7, #0
    cmp r0, #1
    moveq r0, #0x20
    streqh r0, [r4]
    strneh r5, [r4]
    ldrb r3, [r1]
    ldrb r2, [r1, #1]
    ldr r0, =data_ov014_021240d4
    strb r3, [sp, #9]
    strb r2, [sp, #0xa]
    ldrb r5, [r1, #2]
    ldrb r3, [r1, #3]
    ldrb r2, [r0]
    ldrb r1, [r0, #1]
    strb r5, [sp, #0xb]
    strb r2, [sp, #4]
    strb r3, [sp, #0xc]
    strb r1, [sp, #5]
    ldrb r1, [r0, #3]
    ldrb r2, [r0, #2]
    mov r8, r7
    strb r1, [sp, #7]
    strb r2, [sp, #6]
    ldrb r0, [r0, #4]
    add r5, r11, #0x40
    add r6, r4, #0x40
    strb r0, [sp, #8]
    ldrh r0, [r11, #0x3e]
    cmp r0, #0
    bls @L_021221b8
@L_0212210c:
    ldrb r0, [r5]
    ldrb r9, [r5, #1]
    cmp r0, #0x32
    cmpne r0, #0x2a
    cmpne r0, #0x2f
    cmpne r0, #7
    cmpne r0, #0x30
    bne @L_02122130
    b @L_02122168
@L_02122130:
    cmp r0, #0xdd
    bne @L_02122198
    add r1, sp, #9
    mov r2, #4
    add r0, r5, #2
    bl MI_CpuComp8
    cmp r0, #0
    beq @L_02122168
    add r1, sp, #4
    mov r2, #5
    add r0, r5, #2
    bl MI_CpuComp8
    cmp r0, #0
    bne @L_02122198
@L_02122168:
    add r10, r9, #2
    mov r0, r5
    mov r1, r6
    and r2, r10, #0xff
    bl MI_CpuCopy
    ldrh r0, [r4, #0x3e]
    and r1, r10, #0xff
    add r1, r7, r1
    add r0, r0, #1
    add r6, r6, r10
    and r7, r1, #0xff
    strh r0, [r4, #0x3e]
@L_02122198:
    ldrh r1, [r11, #0x3e]
    add r0, r8, #1
    add r2, r9, #2
    add r5, r5, r2
    mov r0, r0, lsl #0x10
    cmp r1, r0, lsr #16
    mov r8, r0, lsr #0x10
    bhi @L_0212210c
@L_021221b8:
    ldr r0, [sp]
    add r0, r0, #0x1000
    ldrb r0, [r0, #0x2df]
    cmp r0, #1
    ldreqh r1, [r4]
    moveq r0, r7, lsl #0x10
    addeq r0, r1, r0, lsr #16
    ldrneh r0, [r4]
    addne r0, r0, r7
    strh r0, [r4]
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void WCMi_InitCpsif(void)
{
    if (*(u8 *)(wcmCpsifw) != 0)
        return;
    *(u8 *)(wcmCpsifw) = 1;
    *(u16 *)(wcmCpsifw + 0x24) = 0;
    MI_CpuFill8((s32)data_ov014_0212d5ac, 0, 6);
    *(s32 *)(wcmCpsifw + 0x8) = 0;
    *(s32 *)(wcmCpsifw + 0x4) = 0;
    OS_InitMutex((s32)data_ov014_0212d588);
}

extern "C" void WCMi_CpsifRecvCallback(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    if (*(s32 *)(wcmCpsifw + 0x28) == 0)
        return;
    ((s32 (*)(...))*(s32 *)(wcmCpsifw + 0x28))(arg0, arg1, arg2, arg3);
    return;
}

extern "C" char *WCMi_GetCpsifWork(void)
{
    return wcmCpsifw;
}

extern "C" u8 *WCM_GetApMacAddress(void)
{
    u8 *r = 0;
    u8 *p = ((u8 *(*)(void))WCMi_GetSystemWork)();
    s32 irq = OS_DisableInterrupts();
    if (p != 0 && p[0x12DE] == 9 && p[0x12DD] == 0)
        r = p + 0x12E4;
    OS_RestoreInterrupts(irq);
    return r;
}

extern "C" u8 *WCM_GetApEssid(u16 *arg0)
{
    u8 *r = 0;
    u16 v = 0;
    u8 *s = ((u8 *(*)(void))WCMi_GetSystemWork)();
    s32 e = OS_DisableInterrupts();
    if (s != 0 && *(u8 *)(s + 0x12DE) == 9 && *(u8 *)(s + 0x12DD) == 0) {
        v = *(u16 *)(s + 0x12EA);
        r = s + 0x12EC;
    }
    OS_RestoreInterrupts(e);
    if (arg0 != 0)
        *arg0 = v;
    return r;
}

extern "C" void WCM_SetRecvDCFCallback(s32 arg0)
{
    s32 v0 = OS_DisableInterrupts(arg0);
    *(s32 *)(wcmCpsifw + 0x28) = arg0;
    OS_RestoreInterrupts(v0, (s32)wcmCpsifw);
}

extern "C" asm void WCM_SendDCFDataEx(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #8
    mov r9, r0
    mov r8, r1
    mov r7, r2
    mov r6, r3
    bl OS_DisableInterrupts
    mov r5, r0
    bl WCMi_GetSystemWork
    cmp r0, #0
    bne @L_02122370
    mov r0, r5
    bl OS_RestoreInterrupts
    add sp, sp, #8
    mvn r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02122370:
    ldr r10, =data_ov014_0212d588
    mov r0, r10
    bl OS_LockMutex
    bl WCMi_GetSystemWork
    movs r4, r0
    bne @L_021223a4
    mov r0, r10
    bl OS_UnlockMutex
    mov r0, r5
    bl OS_RestoreInterrupts
    add sp, sp, #8
    mvn r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_021223a4:
    add r0, r4, #0x1000
    ldrb r1, [r0, #0x2de]
    cmp r1, #9
    bne @L_021223c0
    ldrb r1, [r0, #0x2dd]
    cmp r1, #1
    bne @L_021223dc
@L_021223c0:
    ldr r0, =data_ov014_0212d588
    bl OS_UnlockMutex
    mov r0, r5
    bl OS_RestoreInterrupts
    add sp, sp, #8
    mvn r0, #3
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_021223dc:
    ldr r1, [sp, #0x28]
    str r6, [sp]
    str r1, [sp, #4]
    ldrb r0, [r0, #0x2df]
    mov r1, r4
    mov r2, r8
    mov r3, r7
    bl WCMi_MergeToBuffer
    add r1, r4, #0x1000
    ldrb r1, [r1, #0x2df]
    cmp r1, #1
    bne @L_02122424
    mov r2, r0, lsl #0x10
    mov r0, r9
    mov r1, r4
    mov r2, r2, lsr #0x10
    mov r3, #0
    bl WCMi_WmifSetDCFData
@L_02122424:
    ldr r0, =data_ov014_0212d588
    bl OS_UnlockMutex
    mov r0, r5
    bl OS_RestoreInterrupts
    ldr r0, [sp, #0x28]
    add r0, r7, r0
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" void WCMi_CpsifUnlockMutexInIRQ(u8 *arg0)
{
    if (*(s32 *)(arg0 + 8) != 0x1FF8000)
        return;
    if (--*(s32 *)(arg0 + 0xC) != 0)
        return;
    *(s32 *)(arg0 + 8) = 0;
    ((void (*)(u8 *))OS_WakeupThread)(arg0);
}

extern "C" void WCMi_CpsifSetMacAddress(s32 arg0)
{
    MI_CpuCopy(arg0, (s32)data_ov014_0212d5ac, 6);
}

extern "C" asm void WCMi_MergeToBuffer(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r3
    mov r0, r2
    mov r2, r5
    mov r6, r1
    ldr r4, [sp, #0x14]
    bl MI_CpuCopy
    ldr r0, [sp, #0x10]
    cmp r0, #0
    ldrne r2, [sp, #0x14]
    cmpne r2, #0
    beq @L_021224d0
    add r1, r6, r5
    bl MI_CpuCopy
@L_021224d0:
    add r0, r5, r4
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm s32 WcmCompareMemory(...)
{
    stmdb sp!, {r3, lr}
    cmp r2, #0
    mov lr, #0
    bls @L_02122508
@L_021224e8:
    ldrb r12, [r0, lr]
    ldrb r3, [r1, lr]
    cmp r12, r3
    movne r0, #0
    ldmneia sp!, {r3, pc}
    add lr, lr, #1
    cmp lr, r2
    blo @L_021224e8
@L_02122508:
    mov r0, #1
    ldmia sp!, {r3, pc}
}

extern "C" void WCM_CompareBssID(s32 arg0, s32 arg1)
{
    WcmCompareMemory(arg0, arg1, 6);
}

extern "C" s32 WCM_GetLinkLevel(void)
{
    s32 irq = OS_DisableInterrupts();
    u8 *p = ((u8 *(*)(void))WCMi_GetSystemWork)();
    s32 r = 0;
    if (p != 0 && p[0x12DE] == 9) {
        ((void (*)(void))WCMi_GetRssiAverage)();
        r = ((s32 (*)(void))WCM_CalcLinkLevel)();
    }
    OS_RestoreInterrupts(irq);
    return r;
}

extern "C" s32 WCM_CalcLinkLevel(s32 arg0)
{
    s32 v0;
    v0 = WCMi_GetSystemWork();
    if ((u32)arg0 >= (u32)0x1C)
        return 3;
    if ((u32)arg0 >= (u32)0x16)
        return 2;
    return ((u32)arg0 < (u32)0x10 ? 0 : 1);
}

extern "C" asm void WCMi_GetRssiAverage(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, =data_ov014_0212d5b4
    mov r0, #0
    ldrb r1, [r1]
    cmp r1, #0x10
    bls @L_021225e0
    ldr r2, =data_ov014_0212d5b5
    mov r3, r0
@L_021225bc:
    ldrb r1, [r2, r3]
    add r3, r3, #1
    cmp r3, #0x10
    add r0, r0, r1
    blt @L_021225bc
    mov r1, r0, asr #3
    add r0, r0, r1, lsr #28
    mov r0, r0, asr #4
    b @L_0212260c
@L_021225e0:
    cmp r1, #0
    beq @L_0212260c
    mov r12, r0
    ble @L_02122608
    ldr r3, =data_ov014_0212d5b5
@L_021225f4:
    ldrb r2, [r3, r12]
    add r12, r12, #1
    cmp r12, r1
    add r0, r0, r2
    blt @L_021225f4
@L_02122608:
    bl _s32_div_f
@L_0212260c:
    and r0, r0, #0xff
    ldmia sp!, {r3, pc}
}

extern "C" asm s32 WCMi_ShelterRssi(...)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl WCMi_GetSystemWork
    ldr r2, =data_ov014_0212d5b4
    mov r0, r4, asr #2
    ldrb r12, [r2]
    tst r4, #2
    addeq r0, r0, #0x19
    mov r1, r12, lsr #0x1f
    and lr, r0, #0xff
    rsb r0, r1, r12, lsl #28
    ldr r3, =data_ov014_0212d5b5
    add r0, r1, r0, ror #28
    strb lr, [r3, r0]
    add r0, r12, #1
    cmp r12, #0x10
    movhs r1, r0, lsr #0x1f
    rsbhs r0, r1, r0, lsl #28
    addhs r0, r1, r0, ror #28
    addhs r0, r0, #0x10
    strb r0, [r2]
    ldmia sp!, {r4, pc}
}

extern "C" asm void WCMi_WmifStartupAsync(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #8
    bl WCMi_GetSystemWork
    mov r5, r0
    add r0, r5, #0x1000
    ldr r1, [r0, #0x2c0]
    add r0, r5, #0x3a0
    mov r1, r1, lsl #0x10
    add r0, r0, #0x1000
    mov r1, r1, lsr #0x10
    bl WM_Init
    cmp r0, #6
    addls pc, pc, r0, lsl #2
    b @L_021226f0
    b @L_02122704
    b @L_021226f0
    b @L_021226f0
    b @L_021226d0
    b @L_021226e4
    b @L_021226f0
    b @L_021226f0
@L_021226d0:
    mov r0, #0xb
    bl WCMi_SetPhase
    add sp, sp, #8
    mov r0, #7
    ldmia sp!, {r3, r4, r5, pc}
@L_021226e4:
    add sp, sp, #8
    mov r0, #5
    ldmia sp!, {r3, r4, r5, pc}
@L_021226f0:
    mov r0, #0xb
    bl WCMi_SetPhase
    add sp, sp, #8
    mov r0, #7
    ldmia sp!, {r3, r4, r5, pc}
@L_02122704:
    ldr r0, =WcmWmcbIndication
    bl WM_SetIndCallback
    cmp r0, #0
    beq @L_02122728
    mov r0, #0xb
    bl WCMi_SetPhase
    add sp, sp, #8
    mov r0, #7
    ldmia sp!, {r3, r4, r5, pc}
@L_02122728:
    add r4, sp, #0
    mov r0, r4
    bl OS_GetMacAddress
    mov r0, r4
    bl WCMi_CpsifSetMacAddress
    ldr r0, =WcmWmcbCommon
    bl WM_Enable
    cmp r0, #2
    beq @L_02122760
    cmp r0, #3
    beq @L_0212278c
    cmp r0, #8
    beq @L_02122778
    b @L_0212278c
@L_02122760:
    mov r0, #2
    bl WCMi_SetPhase
    add r0, r5, #0x1200
    mov r1, #1
    strh r1, [r0, #0xda]
    b @L_021227a0
@L_02122778:
    mov r0, #0xc
    bl WCMi_SetPhase
    add sp, sp, #8
    mov r0, #1
    ldmia sp!, {r3, r4, r5, pc}
@L_0212278c:
    mov r0, #0xb
    bl WCMi_SetPhase
    add sp, sp, #8
    mov r0, #7
    ldmia sp!, {r3, r4, r5, pc}
@L_021227a0:
    mov r0, #3
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 WCMi_WmifCleanupAsync(void)
{
    u8 *p = (u8 *)((s32 (*)(...))WCMi_GetSystemWork)();
    switch (((s32 (*)(...))WM_PowerOff)(WcmWmcbCommon)) {
    case 2:
        ((s32 (*)(...))WCMi_SetPhase)(4);
        *(u16 *)(p + 0x12DA) = 2;
        break;
    case 8:
        return 4;
    case 3:
    default:
        ((s32 (*)(...))WCMi_SetPhase)(0xB);
        return 7;
    }
    return 3;
}

extern "C" s32 WCMi_WmifBeginSearchAsync(s32 arg0, s32 arg1, s32 arg2)
{
    u8 *r4;
    s32 r7;
    s32 v0;
    s32 v5;
    s32 t0;
    u16 t1;
    s32 t2;
    v0 = WCMi_GetSystemWork();
    r7 = arg0;
    r4 = (u8 *)v0;
    arg0 = *(u8 *)(((u8 *)(v0 + 0x1000)) + 0x2DE);
    switch (arg0) {
        case 5:
            WcmEditScanExParam(r7, arg1, arg2);
            return 2;
        case 6:
            WcmEditScanExParam(r7, arg1, arg2);
            return 0;
        default:
            return 1;
        case 3:
            WcmEditScanExParam(r7, arg1, arg2);
            t0 = *(s32 *)(r4 + 0x22A0);
            t1 = *(u16 *)(r4 + 0x22A4);
            DC_InvalidateRange(t0, t1);
            t2 = (*(s32 *)(r4 + 0x22E4) + 1);
            *(s32 *)(r4 + 0x22E4) = t2;
            v5 = WM_StartScanEx((s32)((u8 *)&WcmWmcbScanEx), (s32)((r4 + 0x2A0) + 0x2000));
            arg0 = v5;
            switch (arg0) {
                case 2:
                    WCMi_SetPhase(5);
                    *(u16 *)(r4 + 0x12DA) = 3;
                    return 3;
                case 8:
                    return 4;
                case 3:
                default:
                    WCMi_SetPhase(0xB);
                    return 7;
            }
    }
}

extern "C" s32 WCMi_WmifConnectAsync(void)
{
    u8 *p = (u8 *)((s32 (*)(...))WCMi_GetSystemWork)();
    if (p[0x12DE] == 3)
        *(u16 *)(p + 0x1310) = *(u16 *)(p + 0x130E) | 3;
    switch (((s32 (*)(...))WM_SetLifeTime)(WcmWmcbCommon, 0xFFFF, 0x50, 0xFFFF, 0xFFFF)) {
    case 2:
        ((s32 (*)(...))WCMi_SetPhase)(8);
        *(u16 *)(p + 0x12DA) = 5;
        break;
    case 8:
        return 4;
    case 3:
    default:
        ((s32 (*)(...))WCMi_SetPhase)(0xB);
        return 7;
    }
    return 3;
}

extern "C" s32 WCMi_WmifDisconnectAsync(void)
{
    u8 *p = (u8 *)((s32 (*)(...))WCMi_GetSystemWork)();
    switch (((s32 (*)(...))WM_EndDCF)(WcmWmcbEndDCF)) {
    case 2:
        ((s32 (*)(...))WCMi_SetPhase)(0xA);
        *(u16 *)(p + 0x12DA) = 6;
        break;
    case 8:
        return 4;
    case 3:
    default:
        ((s32 (*)(...))WCMi_SetPhase)(0xB);
        return 7;
    }
    return 3;
}

extern "C" asm void WCMi_WmifTerminateAsync(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    bl WCMi_GetSystemWork
    mov r5, r0
    bl WMi_GetStatusAddress
    mov r4, r0
    mov r1, #2
    bl DC_InvalidateRange
    ldrh r0, [r4]
    cmp r0, #0
    beq @L_02122a7c
    cmp r0, #1
    beq @L_02122aa0
    cmp r0, #2
    beq @L_02122aac
    b @L_02122ab8
@L_02122a7c:
    bl WM_Finish
    cmp r0, #0
    bne @L_02122acc
    mov r0, #1
    bl WCMi_SetPhase
    add r1, r5, #0x1200
    mov r0, #0
    strh r0, [r1, #0xda]
    ldmia sp!, {r3, r4, r5, pc}
@L_02122aa0:
    ldr r0, =WcmWmcbCommon
    bl WM_Disable
    b @L_02122acc
@L_02122aac:
    ldr r0, =WcmWmcbCommon
    bl WM_PowerOff
    b @L_02122acc
@L_02122ab8:
    ldr r0, =WcmWmcbReset
    add r1, r5, #0x1000
    mov r2, #1
    strb r2, [r1, #0x2dd]
    bl WM_Reset
@L_02122acc:
    cmp r0, #2
    beq @L_02122ae8
    cmp r0, #3
    beq @L_02122b08
    cmp r0, #8
    beq @L_02122b00
    b @L_02122b08
@L_02122ae8:
    mov r0, #0xd
    bl WCMi_SetPhase
    add r0, r5, #0x1200
    mov r1, #9
    strh r1, [r0, #0xda]
    b @L_02122b18
@L_02122b00:
    mov r0, #4
    ldmia sp!, {r3, r4, r5, pc}
@L_02122b08:
    mov r0, #0xb
    bl WCMi_SetPhase
    mov r0, #7
    ldmia sp!, {r3, r4, r5, pc}
@L_02122b18:
    mov r0, #3
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 WCMi_WmifSetDCFData(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    u8 *p = (u8 *)((s32 (*)(...))WCMi_GetCpsifWork)();
    s32 r;
    if (arg3 == 0) {
        r = ((s32 (*)(...))WM_SetDCFData)(WcmWmcbSetDCFData, arg0, arg1, arg2);
    } else {
        *(s32 *)(p + 0x2C) = arg3;
        r = ((s32 (*)(...))WM_SetDCFData)(WcmWmcbSetDCFDataAsync, arg0, arg1, arg2);
    }
    switch (r) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    default:
        return -5;
    case 2:
        break;
    }
    if (arg3 == 0) {
        ((s32 (*)(...))OS_SleepThread)(p + 4);
        if (*(u16 *)(p + 0x24) != 0)
            return -5;
    }
    return arg2;
}

extern "C" asm s32 WCMi_WmifGetAllowedChannel(...)
{
    stmdb sp!, {r3, lr}
    bl func_020131c0
    cmp r0, #0
    mov r3, #0x8000
    mov r2, #1
    moveq r0, #0
    ldmeqia sp!, {r3, pc}
    tst r0, #0x8000
    bne @L_02122c1c
@L_02122c04:
    mov r1, r3, asr #1
    orr r1, r1, #0x8000
    mov r1, r1, lsl #0x10
    mov r3, r1, lsr #0x10
    tst r3, r0
    beq @L_02122c04
@L_02122c1c:
    tst r0, #1
    bne @L_02122c3c
@L_02122c24:
    mov r1, r2, lsl #1
    orr r1, r1, #1
    mov r1, r1, lsl #0x10
    mov r2, r1, lsr #0x10
    tst r2, r0
    beq @L_02122c24
@L_02122c3c:
    mov r0, r3, lsl #0x11
    mov r1, r2, lsr #1
    orr r0, r1, r0, lsr #16
    mvn r0, r0
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    ldmia sp!, {r3, pc}
}

extern "C" void WcmWmReset(void)
{
    s32 v0 = WCMi_GetSystemWork();
    if (*(u8 *)(((u8 *)(v0 + 0x1000)) + 0x2DD) != 0)
        return;
    *(u8 *)(((u8 *)(v0 + 0x1000)) + 0x2DD) = 1;
    s32 v1 = WM_Reset((s32)WcmWmcbReset, (v0 + 0x1000), 1);
    if (v1 == 2)
        return;
    WCMi_SetPhase(0xB);
    WCMi_Notify(7, 0, 0, (7 + 0x248));
}

extern "C" void WcmWmcbIndication(u16 *arg0)
{
    u8 *p = (u8 *)((s32 (*)(...))WCMi_GetSystemWork)();
    if (arg0[1] != 8 || arg0[2] != 0x16 || arg0[3] != 0x25)
        return;
    switch (p[0x12DE]) {
    case 8:
        ((s32 (*)(...))WCMi_SetPhase)(0xC);
        break;
    case 9:
    case 12:
        ((s32 (*)(...))WcmWmReset)();
        break;
    case 10:
        ((s32 (*)(...))WCMi_SetPhase)(0xC);
        break;
    }
}

extern "C" asm void WcmWmcbCommon(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    mov r6, r0
    mov r5, #0x14
    bl WCMi_GetSystemWork
    ldrh r1, [r6, #2]
    mov r4, r0
    cmp r1, #4
    addls pc, pc, r1, lsl #2
    b @L_02122f7c
    b @L_02122d5c
    b @L_02122f44
    b @L_02122f7c
    b @L_02122f7c
    b @L_02122f7c
@L_02122d5c:
    ldrh r0, [r6]
    cmp r0, #0x19
    bgt @L_02122d94
    bge @L_02122e50
    cmp r0, #6
    addls pc, pc, r0, lsl #2
    b @L_02122eb8
    b @L_02122eb8
    b @L_02122eb8
    b @L_02122eb8
    b @L_02122db0
    b @L_02122dbc
    b @L_02122e10
    b @L_02122e34
@L_02122d94:
    cmp r0, #0x1d
    bgt @L_02122da4
    beq @L_02122e40
    b @L_02122eb8
@L_02122da4:
    cmp r0, #0x27
    beq @L_02122e6c
    b @L_02122eb8
@L_02122db0:
    ldr r0, =WcmWmcbCommon
    bl WM_PowerOn
    b @L_02122eb4
@L_02122dbc:
    bl WM_Finish
    cmp r0, #0
    bne @L_02122dec
    mov r0, #1
    bl WCMi_SetPhase
    mov r0, #0
    mov r1, r0
    mov r2, r0
    mov r3, #0x2a4
    bl WCMi_Notify
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_02122dec:
    mov r0, #0xb
    bl WCMi_SetPhase
    mov r0, #7
    mov r1, #0
    mov r2, r1
    rsb r3, r0, #0x2b4
    bl WCMi_Notify
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_02122e10:
    mov r0, #3
    bl WCMi_SetPhase
    mov r0, #0
    mov r1, r0
    mov r2, r0
    mov r3, #0x2b4
    bl WCMi_Notify
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_02122e34:
    ldr r0, =WcmWmcbCommon
    bl WM_Disable
    b @L_02122eb4
@L_02122e40:
    ldr r0, =WcmWmcbCommon
    mov r1, #0
    bl WM_SetBeaconIndication
    b @L_02122eb4
@L_02122e50:
    add r0, r4, #0x1000
    ldrb r1, [r0, #0x290]
    ldrb r2, [r0, #0x291]
    ldr r0, =WcmWmcbCommon
    add r3, r4, #0x1240
    bl WM_SetWEPKeyEx
    b @L_02122eb4
@L_02122e6c:
    add r0, r4, #0x1000
    ldr r1, [r0, #0x2d4]
    mov r2, #1
    and r0, r1, #0xc0000
    cmp r0, #0xc0000
    and r0, r1, #0x30000
    movne r2, #0
    cmp r0, #0x30000
    mov r0, r2, lsl #0x10
    mov r12, r0, lsr #0x10
    mov r3, #1
    add r1, r4, #0x2e0
    ldr r0, =WcmWmcbConnect
    moveq r3, #0
    add r1, r1, #0x1000
    mov r2, #0
    str r12, [sp]
    bl WM_StartConnectEx
@L_02122eb4:
    mov r5, r0
@L_02122eb8:
    cmp r5, #2
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    cmp r5, #3
    beq @L_02122f0c
    cmp r5, #8
    bne @L_02122f0c
    mov r0, #0xc
    bl WCMi_SetPhase
    add r0, r4, #0x1200
    ldrsh r0, [r0, #0xda]
    mov r2, #0
    mov r3, #0x2f0
    cmp r0, #5
    addeq r0, r4, #0x2e0
    addeq r1, r0, #0x1000
    movne r1, #0
    mov r0, #1
    bl WCMi_Notify
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_02122f0c:
    mov r0, #0xb
    bl WCMi_SetPhase
    add r0, r4, #0x1200
    ldrsh r0, [r0, #0xda]
    mov r2, #0
    cmp r0, #5
    addeq r0, r4, #0x2e0
    addeq r1, r0, #0x1000
    mov r0, #7
    movne r1, #0
    rsb r3, r0, #0x300
    bl WCMi_Notify
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_02122f44:
    mov r0, #0xc
    bl WCMi_SetPhase
    add r0, r4, #0x1200
    ldrsh r0, [r0, #0xda]
    mov r2, #0
    cmp r0, #5
    addeq r0, r4, #0x2e0
    addeq r1, r0, #0x1000
    mov r0, #1
    movne r1, #0
    rsb r3, r0, #0x320
    bl WCMi_Notify
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_02122f7c:
    mov r0, #0xb
    bl WCMi_SetPhase
    add r0, r4, #0x1200
    ldrsh r0, [r0, #0xda]
    mov r2, #0
    cmp r0, #5
    addeq r0, r4, #0x2e0
    addeq r1, r0, #0x1000
    mov r0, #7
    movne r1, #0
    rsb r3, r0, #0x330
    bl WCMi_Notify
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" asm void WcmWmcbScanEx(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r4, r0
    mov r5, #0
    mov r6, #0x14
    bl WCMi_GetSystemWork
    ldrh r1, [r4, #2]
    mov r8, r0
    cmp r1, #4
    addls pc, pc, r1, lsl #2
    b @L_0212320c
    b @L_02122ff8
    b @L_02123204
    b @L_0212320c
    b @L_0212320c
    b @L_0212320c
@L_02122ff8:
    add r0, r8, #0x1000
    ldrb r0, [r0, #0x2de]
    cmp r0, #5
    bne @L_02123028
    mov r7, #6
    mov r0, r7
    bl WCMi_SetPhase
    mov r0, r5
    mov r1, r0
    mov r2, r0
    add r3, r7, #0x340
    bl WCMi_Notify
@L_02123028:
    add r0, r8, #0x1000
    ldrb r0, [r0, #0x2de]
    cmp r0, #6
    beq @L_0212304c
    cmp r0, #7
    beq @L_02123198
    cmp r0, #0xd
    beq @L_021231a4
    b @L_021231ac
@L_0212304c:
    add r0, r8, #0x1200
    mov r1, #7
    strh r1, [r0, #0xda]
    ldrh r0, [r4, #8]
    cmp r0, #5
    bne @L_021230c8
    add r1, r8, #0x2200
    add r0, r8, #0x2000
    ldrh r1, [r1, #0xa4]
    ldr r0, [r0, #0x2a0]
    bl DC_InvalidateRange
    mov r9, #0
    mov r7, #0x35c
    mov r6, #7
    b @L_021230bc
@L_02123088:
    add r0, r4, r9, lsl #1
    add r2, r4, r9, lsl #2
    ldrh r1, [r0, #0x50]
    ldr r0, [r2, #0x10]
    bl WCMi_EntryApList
    str r7, [sp]
    add r0, r4, r9, lsl #2
    ldr r2, [r0, #0x10]
    mov r0, r6
    mov r1, r5
    mov r3, r4
    bl WCMi_NotifyEx
    add r9, r9, #1
@L_021230bc:
    ldrh r0, [r4, #0xe]
    cmp r9, r0
    blt @L_02123088
@L_021230c8:
    add r0, r8, #0x1000
    ldr r1, [r0, #0x2d4]
    and r0, r1, #0xc00000
    cmp r0, #0xc00000
    bne @L_02123124
    ldr r0, =0x3ffe
    and r0, r1, r0
    bl MATH_CountPopulation
    movs r1, r0
    beq @L_02123124
    add r0, r8, #0x2000
    ldr r0, [r0, #0x2e4]
    bl _u32_div_f
    cmp r1, #0
    bne @L_02123124
    ldr r0, =0x36a
    mov r1, #0
    str r0, [sp]
    add r0, r8, #0x2000
    ldr r2, [r0, #0x2e4]
    mov r3, r1
    mov r0, #8
    bl WCMi_NotifyEx
@L_02123124:
    ldrh r0, [r4, #0xa]
    clz r0, r0
    rsb r0, r0, #0x20
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    bl WCMi_GetNextScanChannel
    ldr r2, =0x1
    add r1, r8, #0x2200
    mov r0, r2, lsl r0
    mov r0, r0, asr #1
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    strh r0, [r1, #0xa6]
    add r1, r8, #0x2200
    add r0, r8, #0x2000
    ldrh r1, [r1, #0xa4]
    ldr r0, [r0, #0x2a0]
    bl DC_StoreRange
    add r0, r8, #0x2e4
    add r3, r0, #0x2000
    ldr r0, [r3]
    add r1, r8, #0x2a0
    add r2, r0, #1
    ldr r0, =WcmWmcbScanEx
    add r1, r1, #0x2000
    str r2, [r3]
    bl WM_StartScanEx
@L_02123190:
    mov r6, r0
    b @L_021231ac
@L_02123198:
    ldr r0, =WcmWmcbEndScan
    bl WM_EndScan
    b @L_02123190
@L_021231a4:
    bl WcmWmReset
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_021231ac:
    cmp r6, #2
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    cmp r6, #3
    beq @L_021231e4
    cmp r6, #8
    bne @L_021231e4
    mov r0, #0xc
    bl WCMi_SetPhase
    mov r0, #1
    mov r1, #0
    mov r2, r1
    add r3, r0, #0x394
    bl WCMi_Notify
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_021231e4:
    mov r0, #0xb
    bl WCMi_SetPhase
    mov r1, #0
    ldr r3, =0x39e
    mov r2, r1
    mov r0, #7
    bl WCMi_Notify
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_02123204:
    bl WcmWmReset
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0212320c:
    mov r0, #0xb
    bl WCMi_SetPhase
    mov r0, #7
    mov r1, #0
    mov r2, r1
    add r3, r0, #0x3a8
    bl WCMi_Notify
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" s32 WcmWmcbEndScan(u8 *arg0)
{
    s32 v1;
    s32 v2;
    s32 v4;
    arg0 = (u8 *)*(u16 *)(arg0 + 0x2);
    switch ((s32)arg0) {
        case 0:
            WCMi_SetPhase(3);
            v1 = WCMi_Notify(0, 0, 0, (0x3C8 - 3));
            return v1;
        case 1:
            v2 = ((s32 (*)(...))WcmWmReset)((s32)arg0);
            return v2;
        case 2:
        case 3:
        case 4:
        default:
            WCMi_SetPhase(0xB);
            v4 = WCMi_Notify(7, 0, 0, (0x3DC - 7));
            return v4;
    }
}

extern "C" asm void WcmWmcbConnect(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r0
    mov r6, #0
    bl WCMi_GetSystemWork
    ldrh r1, [r5, #2]
    mov r4, r0
    cmp r1, #0xc
    addls pc, pc, r1, lsl #2
    b @L_021234b0
    b @L_02123310
    b @L_02123494
    b @L_021234b0
    b @L_021234b0
    b @L_021234b0
    b @L_021234b0
    b @L_021234a0
    b @L_021234b0
    b @L_021234b0
    b @L_021234b0
    b @L_021234b0
    b @L_021234a0
    b @L_021234a0
@L_02123310:
    ldrh r0, [r5, #8]
    cmp r0, #9
    bgt @L_02123350
    cmp r0, #0
    addge pc, pc, r0, lsl #2
    b @L_02123470
    b @L_02123470
    dcd 0xea00004f
    dcd 0xea00004e
    dcd 0xea00004d
    dcd 0xea00004c
    dcd 0xea00004b
    dcd 0xe8bd8070
    dcd 0xea00001b
    dcd 0xea000003
    dcd 0xea000002
@L_02123350:
    cmp r0, #0x1a
    ldmeqia sp!, {r4, r5, r6, pc}
    b @L_02123470
    dcd 0xe2840a01
    dcd 0xe5d002de
    dcd 0xe2400008
    dcd 0xe3500004
    dcd 0x908ff100
    ldmia sp!, {r4, r5, r6, pc}
    b @L_02123390
    b @L_0212339c
    b @L_02123388
    ldmia sp!, {r4, r5, r6, pc}
    b @L_021233b0
@L_02123388:
    add r0, r4, #0x2200
    strh r6, [r0, #0xe8]
@L_02123390:
    mov r0, #0xc
    bl WCMi_SetPhase
    ldmia sp!, {r4, r5, r6, pc}
@L_0212339c:
    add r0, r4, #0x2200
    strh r6, [r0, #0xe8]
    add r0, r4, #0x1200
    mov r1, #6
    strh r1, [r0, #0xda]
@L_021233b0:
    bl WcmWmReset
    ldmia sp!, {r4, r5, r6, pc}
    dcd 0xe2840a01
    dcd 0xe5d002de
    dcd 0xe350000c
    dcd 0x1a000003
    dcd 0xe3a00008
    dcd 0xebfff9ae
    dcd 0xebfffe20
    dcd 0xe8bd8070
    dcd 0xe1d550ba
    dcd 0xe3550001
    dcd 0x3a000020
    dcd 0xe59f00e8
    dcd 0xe1550000
    dcd 0x8a00001d
    dcd 0xe59f00e0
    dcd 0xe2843c22
    dcd 0xe2841c06
    dcd 0xe3a02e62
    dcd 0xe1c35eb8
    dcd 0xebfbc388
    dcd 0xe3500002
    dcd 0x08bd8070
    dcd 0xe3500003
    dcd 0x0a00000a
    dcd 0xe3500008
    dcd 0x1a000008
    dcd 0xe3a0000c
    dcd 0xebfff998
    dcd 0xe2840e2e
    dcd 0xe2801a01
    dcd 0xe3a00001
    dcd 0xe1a02006
    dcd 0xe3a03e43
    dcd 0xebfff96c
    dcd 0xe8bd8070
    dcd 0xe3a0000b
    dcd 0xebfff98f
    dcd 0xe2841e2e
    dcd 0xe3a00007
    dcd 0xe2811a01
    dcd 0xe2603d11
    dcd 0xe3a02000
    dcd 0xebfff963
    dcd 0xe8bd8070
    dcd 0xebfffdfa
    dcd 0xe8bd8070
@L_02123470:
    mov r0, #0xb
    bl WCMi_SetPhase
    add r1, r4, #0x2e0
    mov r0, #7
    ldrh r2, [r5, #8]
    add r1, r1, #0x1000
    add r3, r0, #0x440
    bl WCMi_Notify
    ldmia sp!, {r4, r5, r6, pc}
@L_02123494:
    ldrh r1, [r5, #0xe]
    add r0, r4, #0x2200
    strh r1, [r0, #0xea]
@L_021234a0:
    mov r0, #8
    bl WCMi_SetPhase
    bl WcmWmReset
    ldmia sp!, {r4, r5, r6, pc}
@L_021234b0:
    mov r0, #0xb
    bl WCMi_SetPhase
    add r0, r4, #0x2e0
    ldr r3, [pc, #0x18]
    add r1, r0, #0x1000
    mov r0, #7
    mov r2, #0
    bl WCMi_Notify
    ldmia sp!, {r4, r5, r6, pc}
    dcd 0x000007d7
    dcd WcmWmcbStartDCF
    dcd 0x0000045e
}

extern "C" s32 WcmWmcbDisconnect(u8 *arg0)
{
    s32 r1;
    u8 *r5;
    s32 v0;
    s32 v2;
    s32 v4;
    s32 v6;
    s32 v8;
    v0 = WCMi_GetSystemWork();
    r1 = *(u16 *)(arg0 + 0x2);
    r5 = (u8 *)v0;
    switch (r1) {
        case 0:
            if (*(u8 *)(r5 + 0x12DE) == 0xC) {
                WCMi_SetPhase(10, r1);
                v2 = ((s32 (*)(...))WcmWmReset)();
                return v2;
            } else {
                *(u16 *)(r5 + 0x22E8) = 0;
                WCMi_SetPhase(3, (s32)(r5 + 0x2200));
                v4 = WCMi_Notify(0, (s32)((r5 + 0x2E0) + 0x1000), 0, 0x481);
                return v4;
            }
        case 1:
        case 3:
            WCMi_SetPhase(10, r1);
            v6 = ((s32 (*)(...))WcmWmReset)();
            return v6;
        case 2:
        case 4:
        default:
            WCMi_SetPhase(0xB, r1);
            v8 = WCMi_Notify(7, (s32)((r5 + 0x2E0) + 0x1000), 0, 0x493);
            return v8;
    }
}

extern "C" s32 WcmWmcbStartDCF(u8 *arg0)
{
    s32 r1;
    u8 *r4;
    u8 *r5;
    s32 v0;
    s32 v2;
    s32 v4;
    s32 v7;
    s32 v9;
    s32 v11;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    u16 t4;
    s32 t5;
    u16 t6;
    v0 = WCMi_GetSystemWork();
    r4 = arg0;
    r1 = *(u16 *)(arg0 + 0x2);
    r5 = (u8 *)v0;
    if (r1 == 0) {
        arg0 = (u8 *)*(u16 *)(r4 + 0x4);
        switch ((s32)arg0) {
            case 14:
                if (*(u8 *)(r5 + 0x12DE) == 0xC) {
                    WCMi_SetPhase(8, r1);
                    v2 = ((s32 (*)(...))WcmWmReset)();
                    return v2;
                } else {
                    WCMi_SetPhase(9, r1);
                    v4 = WCMi_Notify(0, (s32)((r5 + 0x2E0) + 0x1000), 0, (0x4C0 - 9));
                    return v4;
                }
            case 15:
                t0 = ((*(u16 *)(*(u8 * *)(r4 + 0x8) + 0xE) >> 8) & 0xFF);
                WCMi_ShelterRssi(t0, r1);
                t1 = *(s32 *)(r4 + 0x8);
                DC_InvalidateRange(t1, 0x620);
                t2 = (s32)(*(u8 * *)(r4 + 0x8) + 0x1E);
                t3 = (s32)(*(u8 * *)(r4 + 0x8) + 0x2C);
                t4 = *(u16 *)(*(u8 * *)(r4 + 0x8) + 0x6);
                t5 = (s32)(*(u8 * *)(r4 + 0x8) + 0x18);
                v7 = ((s32 (*)(...))WCMi_CpsifRecvCallback)(t2, t5, t3, t4);
                return v7;
            default:
                WCMi_SetPhase(0xB, r1);
                t6 = *(u16 *)(r4 + 0x4);
                v9 = WCMi_Notify(7, (s32)((r5 + 0x2E0) + 0x1000), t6, 0x4C6);
                return v9;
        }
    } else {
        WCMi_SetPhase(0xB, r1);
        v11 = WCMi_Notify(7, (s32)((r5 + 0x2E0) + 0x1000), 0, 0x4D1);
        return v11;
    }
}

extern "C" asm void WcmWmcbEndDCF(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    bl WCMi_GetSystemWork
    ldrh r1, [r4, #2]
    mov r5, r0
    cmp r1, #4
    addls pc, pc, r1, lsl #2
    b @L_0212378c
    b @L_021236dc
    b @L_0212377c
    b @L_0212378c
    b @L_0212377c
    b @L_0212378c
@L_021236dc:
    add r0, r5, #0x1000
    ldrb r0, [r0, #0x2de]
    cmp r0, #0xc
    bne @L_021236fc
    mov r0, #0xa
    bl WCMi_SetPhase
    bl WcmWmReset
    ldmia sp!, {r3, r4, r5, pc}
@L_021236fc:
    mov r4, #0
    ldr r0, =WcmWmcbDisconnect
    mov r1, r4
    bl WM_Disconnect
    cmp r0, #2
    ldmeqia sp!, {r3, r4, r5, pc}
    cmp r0, #3
    beq @L_02123748
    cmp r0, #8
    bne @L_02123758
    mov r0, #0xc
    bl WCMi_SetPhase
    add r0, r5, #0x2e0
    add r1, r0, #0x1000
    ldr r3, =0x4fa
    mov r2, r4
    mov r0, #1
    bl WCMi_Notify
    ldmia sp!, {r3, r4, r5, pc}
@L_02123748:
    mov r0, #0xa
    bl WCMi_SetPhase
    bl WcmWmReset
    ldmia sp!, {r3, r4, r5, pc}
@L_02123758:
    mov r0, #0xb
    bl WCMi_SetPhase
    add r0, r5, #0x2e0
    add r1, r0, #0x1000
    ldr r3, =0x506
    mov r2, r4
    mov r0, #7
    bl WCMi_Notify
    ldmia sp!, {r3, r4, r5, pc}
@L_0212377c:
    mov r0, #0xa
    bl WCMi_SetPhase
    bl WcmWmReset
    ldmia sp!, {r3, r4, r5, pc}
@L_0212378c:
    mov r0, #0xb
    bl WCMi_SetPhase
    add r1, r5, #0x2e0
    mov r0, #7
    add r1, r1, #0x1000
    rsb r3, r0, #0x520
    mov r2, #0
    bl WCMi_Notify
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void WcmWmcbReset(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    mov r4, r0
    mov r5, #3
    bl WCMi_GetSystemWork
    ldrh r1, [r4, #2]
    mov r4, r0
    cmp r1, #0
    bne @L_02123a68
    add r1, r4, #0x1000
    mov r6, #0
    strb r6, [r1, #0x2dd]
    add r0, r4, #0x2200
    strh r6, [r0, #0xe8]
    ldrb r2, [r1, #0x2de]
    cmp r2, #0xd
    addls pc, pc, r2, lsl #2
    b @L_02123a40
    b @L_02123a40
    b @L_02123a40
    b @L_02123a40
    b @L_02123a40
    b @L_02123a40
    b @L_0212383c
    b @L_0212383c
    b @L_02123860
    b @L_02123884
    b @L_02123984
    b @L_021239ac
    b @L_02123a40
    b @L_02123984
    b @L_021239d4
@L_0212383c:
    mov r0, r5
    bl WCMi_SetPhase
    ldr r3, =0x53c
    mov r1, r6
    mov r2, r6
    mov r0, #1
    bl WCMi_Notify
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_02123860:
    mov r0, r5
    bl WCMi_SetPhase
    ldr r3, =0x542
    mov r0, r6
    mov r1, r6
    mov r2, r6
    bl WCMi_Notify
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_02123884:
    ldrh r5, [r0, #0xea]
    strh r6, [r0, #0xea]
    cmp r5, #0x12
    bne @L_0212395c
    add r0, r4, #0x1300
    ldrh r2, [r0, #0x10]
    and r3, r2, #0x24
    cmp r3, #0x24
    beq @L_0212395c
    orr r2, r2, #0x24
    strh r2, [r0, #0x10]
    ldr r1, [r1, #0x2d4]
    mov r3, #1
    and r0, r1, #0xc0000
    cmp r0, #0xc0000
    and r0, r1, #0x30000
    moveq r6, #1
    cmp r0, #0x30000
    mov r0, r6, lsl #0x10
    mov r6, r0, lsr #0x10
    add r1, r4, #0x2e0
    ldr r0, =WcmWmcbConnect
    moveq r3, #0
    add r1, r1, #0x1000
    mov r2, #0
    str r6, [sp]
    bl WM_StartConnectEx
    cmp r0, #2
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    cmp r0, #3
    beq @L_02123934
    cmp r0, #8
    bne @L_02123934
    mov r0, #0xc
    bl WCMi_SetPhase
    add r0, r4, #0x2e0
    add r1, r0, #0x1000
    ldr r3, =0x563
    mov r2, r5
    mov r0, #1
    bl WCMi_Notify
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_02123934:
    mov r0, #0xb
    bl WCMi_SetPhase
    add r0, r4, #0x2e0
    ldr r3, =0x56c
    mov r2, r5
    add r1, r0, #0x1000
    mov r0, #7
    bl WCMi_Notify
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0212395c:
    mov r0, #3
    bl WCMi_SetPhase
    add r0, r4, #0x2e0
    add r1, r0, #0x1000
    ldr r3, =0x574
    mov r2, r5
    mov r0, #1
    bl WCMi_Notify
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_02123984:
    mov r0, r5
    bl WCMi_SetPhase
    add r1, r4, #0x2e0
    ldr r3, =0x57c
    mov r0, r6
    add r1, r1, #0x1000
    mov r2, #1
    bl WCMi_Notify
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_021239ac:
    mov r0, r5
    bl WCMi_SetPhase
    add r1, r4, #0x2e0
    mov r0, r6
    mov r2, r6
    add r1, r1, #0x1000
    add r3, r5, #0x580
    bl WCMi_Notify
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_021239d4:
    ldr r0, =WcmWmcbCommon
    bl WM_PowerOff
    cmp r0, #2
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    cmp r0, #3
    beq @L_02123a1c
    cmp r0, #8
    bne @L_02123a1c
    mov r0, #0xc
    bl WCMi_SetPhase
    mov r0, #1
    mov r1, r6
    mov r2, r6
    add r3, r0, #0x590
    bl WCMi_Notify
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_02123a1c:
    mov r0, #0xb
    bl WCMi_SetPhase
    mov r1, #0
    ldr r3, =0x59a
    mov r2, r1
    mov r0, #7
    bl WCMi_Notify
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_02123a40:
    mov r0, #0xb
    bl WCMi_SetPhase
    add r0, r4, #0x1000
    ldrb r2, [r0, #0x2de]
    mov r0, #7
    mov r1, #0
    mov r3, #0x5a0
    bl WCMi_Notify
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_02123a68:
    mov r0, #0xb
    bl WCMi_SetPhase
    mov r0, #7
    mov r1, #0
    mov r2, r1
    add r3, r0, #0x5a0
    bl WCMi_Notify
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" asm s32 WcmEditScanExParam(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r2
    mov r7, r0
    mov r6, r1
    mov r4, #0
    bl WCMi_GetSystemWork
    mov r5, r0
    mov r0, r8
    bl WCM_UpdateOption
    add r1, r5, #0x600
    add r0, r5, #0x2000
    str r1, [r0, #0x2a0]
    add r1, r5, #0x2200
    mov r2, #0x400
    mov r0, r4
    strh r2, [r1, #0xa4]
    bl WCMi_GetNextScanChannel
    mov r1, #1
    mov r0, r1, lsl r0
    mov r1, r0, asr #1
    add r0, r5, #0x2200
    strh r1, [r0, #0xa6]
    add r0, r5, #0x1200
    ldrh r0, [r0, #0xd8]
    cmp r0, #0
    bne @L_02123b1c
    bl WM_GetDispersionScanPeriod
@L_02123b1c:
    add r1, r5, #0x2200
    strh r0, [r1, #0xa8]
    add r0, r5, #0x1000
    ldr r0, [r0, #0x2d4]
    mov r1, #1
    and r0, r0, #0x300000
    cmp r0, #0x300000
    moveq r1, #0
    add r0, r5, #0x2200
    strh r1, [r0, #0xb0]
    cmp r7, #0
    add r1, r5, #0xaa
    mov r2, #6
    bne @L_02123b5c
    ldr r0, =WCM_Bssid_Any
    b @L_02123b60
@L_02123b5c:
    mov r0, r7
@L_02123b60:
    add r1, r1, #0x2200
    bl MI_CpuCopy8
    cmp r6, #0
    ldrne r0, =WCM_Essid_Any
    add r1, r5, #0x2b4
    cmpne r6, r0
    mov r2, #0x20
    bne @L_02123b98
    ldr r0, =WCM_Essid_Any
    add r1, r1, #0x2000
    bl MI_CpuCopy8
    add r0, r5, #0x2200
    strh r4, [r0, #0xb2]
    b @L_02123bc8
@L_02123b98:
    mov r0, r6
    add r1, r1, #0x2000
    bl MI_CpuCopy8
    mov r1, #0
@L_02123ba8:
    ldrb r0, [r6, r1]
    cmp r0, #0
    beq @L_02123bc0
    add r1, r1, #1
    cmp r1, #0x20
    blt @L_02123ba8
@L_02123bc0:
    add r0, r5, #0x2200
    strh r1, [r0, #0xb2]
@L_02123bc8:
    add r0, r5, #0x2000
    str r4, [r0, #0x2e4]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" s32 WcmWmcbSetDCFData(u8 *arg0)
{
    s32 r1;
    s32 r4;
    char *v0;
    s32 v2;
    u16 t0;
    u16 t1;
    v0 = WCMi_GetCpsifWork();
    if (*(u16 *)(arg0) != 0x12)
        return (s32)v0;
    t0 = *(u16 *)(arg0 + 0x2);
    t1 = *(u16 *)(arg0);
    *(u16 *)(((u8 *)v0) + 0x24) = t0;
    r1 = t1;
    r4 = (s32)v0;
    arg0 = (u8 *)*(u16 *)(arg0 + 0x2);
    if ((s32)arg0 == 0) {
        ((s32 (*)(...))WCMi_ResetKeepAliveAlarm)((s32)arg0, r1);
    }
    v2 = OS_WakeupThread((r4 + 4));
    return v2;
}

extern "C" asm void WcmWmcbSetDCFDataAsync(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r0
    bl WCMi_GetCpsifWork
    ldrh r1, [r5]
    mov r4, r0
    cmp r1, #0x12
    ldmneia sp!, {r4, r5, r6, pc}
    ldrh r0, [r5, #2]
    strh r0, [r4, #0x24]
    ldrh r0, [r5, #2]
    cmp r0, #0
    bne @L_02123c50
    bl WCMi_ResetKeepAliveAlarm
@L_02123c50:
    ldrh r0, [r4, #0x24]
    mov r5, #0
    cmp r0, #0
    beq @L_02123c64
    mvn r5, #4
@L_02123c64:
    ldr r6, [r4, #0x2c]
    mov r1, #0
    add r0, r4, #0xc
    str r1, [r4, #0x2c]
    bl WCMi_CpsifUnlockMutexInIRQ
    mov r0, r5
    blx r6
    ldmia sp!, {r4, r5, r6, pc}
}
