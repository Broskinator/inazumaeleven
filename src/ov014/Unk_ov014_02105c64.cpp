#include "ov014/Unk_ov014_02105c64.hpp"
struct F021084b4 { u8 lo : 4; u8 hi : 4; };
struct K021084b4 { u8 mode : 2; u8 rest : 6; };

extern "C" s32 dacktimer_reschedule(...);
extern "C" s32 dacktimer(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void dacktimer_alarmhandler(void);
extern "C" s32 dhcp_setcommon(...);
extern "C" s32 pad_mem(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void dhcp_send_discover(void);
extern "C" s32 dhcp_send_request(s32 arg0);
extern "C" void dhcp_analyze_response(void);
extern "C" BOOL dhcp_discover_server(void);
extern "C" void dhcp_request_server(void);
extern "C" void dhcp_release_server(void);
extern "C" s32 dns_skipname(u8 *arg0);
extern "C" s32 resolve_common(...);
extern "C" void strtol10(void);
extern "C" s32 rawip(u8 *arg0, u32 *arg1);
extern "C" s32 resolve_sub(s32 arg0, s32 arg1, s32 arg2);
extern "C" void CPS_Resolve(void);
extern "C" s32 WDSGetRssi8(s32 arg0);
extern "C" void WDSScanCallback(void);
extern "C" s32 WDS_GetWorkAreaSize(void);
extern "C" s32 WDS_Initialize(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 WDS_End(s32 arg0);
extern "C" s32 WDS_StartScan(s32 arg0);
extern "C" s32 WDS_EndScan(s32 arg0);
extern "C" s32 WDS_GetApInfoByIndex(...);
extern "C" s32 WDS_GetApInfoAll(s32 arg0);
extern "C" s32 DWCi_AC_GetBeacon(...);
extern "C" s32 DWCi_AC_CheckNintendoSSID(s32 arg0);
extern "C" s32 DWCi_AC_IsSupportWPA(void);
extern "C" s32 CompareList(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 CompareListDiff(u8 *arg0, s32 arg1);
extern "C" void AddList(void);
extern "C" void SetDataListTail(void);
extern "C" void UpDateList(void);
extern "C" void SortList(void);
extern "C" s32 DWCi_AC_CallBackWCM(u8 *arg0);
extern "C" s32 DWCi_AC_CloseNetwork(...);
extern "C" s32 DisConnectAP(void);
extern "C" s32 CloseSocket(void);
extern "C" s32 DWCi_AC_ConnectAP(void);
extern "C" s32 ConnectStart(...);
extern "C" s32 ConnectAP(...);
extern "C" void GetConnectType(void);
extern "C" s32 GetPowerMode(u8 *arg0);
extern "C" s32 GetAuthMode(u8 *arg0);
extern "C" void GetWepKey(void);
extern "C" void DWC_AC_Create(void);
extern "C" void DWC_AC_Process(void);
extern "C" s32 DWC_AC_GetStatus(void);
extern "C" s32 DWC_AC_GetApType(void);
extern "C" s32 DWC_AC_GetApSpotInfo(s32 arg0);
extern "C" u8 DWC_AC_GetSecuritySetting(void);
extern "C" s32 DWC_AC_Destroy(void);
extern "C" s32 DWC_AC_SetSpecifyApEx(...);
extern "C" void DWC_AC_SetSpecifyAp(u8 *arg0, s32 arg1, s32 arg2);
extern "C" void DWCi_AC_InsertApInfo(s32 arg0, s32 arg1);
extern "C" s32 DWCi_AC_InvalidatePriorityWPA(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 DWCi_AC_Alloc(s32 arg0, s32 arg1);
extern "C" s32 DWCi_AC_Free(...);
extern "C" s32 DWCi_AC_FreeAll(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 DWCi_AC_GetMemPtr(...);
extern "C" s32 DWCi_AC_SetPhase(u8 arg0);
extern "C" s32 DWCi_AC_GetPhase(...);
extern "C" void DWCi_AC_SetError(s32 arg0);
extern "C" s32 DWCi_AC_GetError(void);
extern "C" s32 DWCi_AC_SetApType(s32 arg0);
extern "C" s32 DWCi_AC_CopyExSetting(s32 arg0);
extern "C" s32 DWCi_ConvConnectAPType(s32 arg0);
extern "C" void Free_Disused(void);
extern "C" s32 CheckDuplicate(void);
extern "C" s32 CheckEULA(void);
extern "C" s32 CheckWirelessPowerON(void);
extern "C" s32 DWC_InitInetEx(...);
extern "C" void DWC_InitInet(s32 arg0);
extern "C" void DWC_SetRwinSize(void);
extern "C" s32 DWC_ConnectInetAsync(...);
extern "C" s32 DWC_DebugConnectInetExAsync(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
extern "C" s32 DWC_CheckInet(void);

extern "C" char OSi_ThreadInfo[];
extern "C" char data_ov014_02123d8c[];
extern "C" char data_ov014_02124788[];
extern "C" char data_ov014_021247b8[];
extern "C" char SOCLiConfigPtr[];
extern "C" char data_ov014_02126ac8[];
extern "C" char CPSMyMac[];
extern "C" char CPSDnsIp[];
extern "C" char data_ov014_02126b58[];
extern "C" char data_ov014_02126d80[];
extern "C" char data_ov014_02126e40[];
extern "C" char data_ov014_02126fea[];
extern "C" char gWdsWork[];
extern "C" char wcmBuffer[];
extern "C" char _ZZ17DWC_GetInetStatusvE8stateOld[];
extern "C" s32 DC_InvalidateRange(...);
extern "C" void MATH_CalcCRC16(void);
extern "C" s32 MATHi_CRC16InitTableRev(...);
extern "C" void MATHi_CRC16UpdateRev(void);
extern "C" s32 MI_CpuCopy8(...);
extern "C" s32 MI_CpuFill8(...);
extern "C" s32 MIi_CpuCopy32(...);
extern "C" void OS_CancelAlarm(void);
extern "C" void OS_DisableInterrupts(void);
extern "C" void OS_GetTick(void);
extern "C" s32 OS_IsThreadTerminated(...);
extern "C" void OS_RestoreInterrupts(void);
extern "C" void OS_Sleep(void);
extern "C" s32 OS_SleepThread(...);
extern "C" s32 OS_WakeupThreadDirect(...);
extern "C" void OS_SetAlarm(void);
extern "C" void MIi_CpuClear32(void);
extern "C" void MI_CpuCopy(void);
extern "C" void func_020131c0(void);
extern "C" void WM_GetDispersionScanPeriod(void);
extern "C" s32 func_020136b4(...);
extern "C" s32 WM_End(...);
extern "C" void WM_StartScanEx(void);
extern "C" s32 WM_EndScan(...);
extern "C" void CRYPTO_RC4Init(void);
extern "C" void CRYPTO_RC4Encrypt(void);
extern "C" void OS_YieldThread__(void);
extern "C" void get_targetip(void);
extern "C" void maccmp(void);
extern "C" void inq_arpcache(void);
extern "C" void arprequest(void);
extern "C" void _tcp_send_ack(void);
extern "C" s32 CPS_SocDatagramMode(...);
extern "C" s32 CPS_SocBind(...);
extern "C" s32 CPS_SocUse(...);
extern "C" s32 CPS_SocRelease(...);
extern "C" void CPS_SocRead(void);
extern "C" void CPS_SocConsume(void);
extern "C" s32 CPS_SocWrite(...);
extern "C" void CPS_SocGetLength(void);
extern "C" s32 DWC_GetInetStatus(...);
extern "C" void DWCi_AC_Error(void);
extern "C" s32 DWCi_AC_GetResult(...);
extern "C" void DWCi_AC_CheckFreespot(void);
extern "C" void DWCi_AC_GetSearchListNum(void);
extern "C" void DWCi_AC_ConnectRetryAP(void);
extern "C" void DWCi_AC_SearchAP(void);
extern "C" void DWCi_AC_SetStealthChannel(void);
extern "C" s32 DWCi_AC_CheckNintendoShopAP(...);
extern "C" s32 DWCi_AC_GetPostalCode(...);
extern "C" s32 DWCi_AC_CheckNintendoUsbAP(...);
extern "C" void DWCi_AC_Start(void);
extern "C" void DWCi_AC_ConnectTest(void);
extern "C" void DWC_Netcheck_Destroy(void);
extern "C" void DWC_Netcheck_Abort(void);
extern "C" void DWCi_BM_GetApInfo(void);
extern "C" void DWCi_SetError(void);
extern "C" void DWC_Alloc(void);
extern "C" void DWC_Free(void);
extern "C" s32 SOCL_CalmDown(...);
extern "C" s32 SOC_Cleanup(...);
extern "C" void CPS_SetSslHandshakePriority(void);
extern "C" void WCM_Init(void);
extern "C" void WCM_ConnectAsync(void);
extern "C" void WCM_GetPhase(void);
extern "C" void WCMi_BssDescCopy(void);
extern "C" s32 WCM_GetApEssid(...);
extern "C" s32 strncmp(...);

extern "C" void WCM_Finish(void);
extern "C" void WCM_CleanupAsync(void);
extern "C" void WCM_EndSearchAsync(void);
extern "C" void WCM_DisconnectAsync(void);
extern "C" void WCM_TerminateAsync(void);
extern "C" void DWCi_AC_GetNintendoUSBWepKey(void);
extern "C" void DWCi_AC_GetNintendoShopWepKey(void);
extern "C" asm s32 dacktimer_reschedule(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #4
    mvn r5, #0
    bl OS_DisableInterrupts
    mov r7, r0
    bl OS_GetTick
    ldr r1, =OSi_ThreadInfo
    mov r8, r0
    ldr r6, [r1, #8]
    cmp r6, #0
    beq @L_02105d04
    ldr r10, =0x1991b
    mov r4, #1
    mov r9, #0
@L_02105c9c:
    ldr r0, [r6, #0xa4]
    cmp r0, #0
    ldrne r1, [r0]
    cmpne r1, #0
    beq @L_02105cf8
    ldrb r1, [r0, #8]
    cmp r1, #4
    bne @L_02105cf8
    ldrb r1, [r0, #0x32]
    cmp r1, #0
    beq @L_02105cf8
    ldr r1, [r0, #0x2c]
    sub r2, r8, r1
    cmp r2, r10
    blo @L_02105ce4
    mov r1, r4
    bl _tcp_send_ack
    b @L_02105cf8
@L_02105ce4:
    subs r1, r10, r2
    rsc r0, r9, #0
    cmp r0, #0
    cmpeq r1, r5
    sublo r5, r10, r2
@L_02105cf8:
    ldr r6, [r6, #0x68]
    cmp r6, #0
    bne @L_02105c9c
@L_02105d04:
    cmn r5, #1
    beq @L_02105d34
    ldr r6, =data_ov014_02126b58
    mov r0, r6
    bl OS_CancelAlarm
    mov r4, #0
    ldr r3, =dacktimer_alarmhandler
    mov r0, r6
    mov r1, r5
    mov r2, #0
    str r4, [sp]
    bl OS_SetAlarm
@L_02105d34:
    mov r0, r7
    bl OS_RestoreInterrupts
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" s32 dacktimer(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 r4;
    s32 r5;
    s32 v0 = OS_IsThreadTerminated((s32)data_ov014_02126e40, arg1, arg2, arg3);
    if (v0 != 0)
        return v0;
    arg0 = v0;
    r4 = 0;
    r5 = (s32)data_ov014_02126e40;
    do {
        dacktimer_reschedule();
        OS_SleepThread(r4);
        s32 v3 = OS_IsThreadTerminated(r5);
        arg0 = v3;
    } while (arg0 == 0);
    return arg0;
}

extern "C" void dacktimer_alarmhandler(void)
{
    OS_WakeupThreadDirect((s32)data_ov014_02126d80);
}

extern "C" asm s32 dhcp_setcommon(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r6, #0xec
    mov r7, r1
    mov r2, r6
    mov r1, #0
    mov r8, r0
    bl MI_CpuFill8
    mov r5, #6
    add r0, r6, #0x15
    ldr r3, =data_ov014_02126ac8
    strh r0, [r8]
    strb r5, [r8, #2]
    ldr r0, [r3, #0x30]
    ldr r4, =CPSMyMac
    mov r0, r0, lsr #0x10
    mov r0, r0, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r0, r1, lsl #8
    orr r0, r0, r1, asr #8
    strh r0, [r8, #4]
    ldr r1, [r3, #0x30]
    mov r0, r4
    mov r1, r1, lsl #0x10
    mov r2, r1, lsr #0x10
    mov r1, r2, lsl #8
    orr r1, r1, r2, asr #8
    strh r1, [r8, #6]
    ldr r1, [r3, #0x50]
    mov r2, r5
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r12, r1, lsr #0x10
    mov r1, r12, lsl #8
    orr r1, r1, r12, asr #8
    strh r1, [r8, #0xc]
    ldr r3, [r3, #0x50]
    add r1, r8, #0x1c
    mov r3, r3, lsl #0x10
    mov r12, r3, lsr #0x10
    mov r3, r12, lsl #8
    orr r3, r3, r12, asr #8
    strh r3, [r8, #0xe]
    bl MI_CpuCopy
    ldr r0, =0x8263
    ldr r2, =0x6353
    strh r0, [r8, #0xec]
    add r0, r6, #0x49
    mov r1, #0x3d
    strh r2, [r8, #0xee]
    mov r3, #7
    strh r0, [r8, #0xf0]
    mov r6, #1
    strb r7, [r8, #0xf2]
    mov r0, r4
    mov r2, r5
    strb r1, [r8, #0xf3]
    add r1, r8, #0xf6
    strb r3, [r8, #0xf4]
    strb r6, [r8, #0xf5]
    bl MI_CpuCopy
    mov r0, #0xc
    strb r0, [r8, #0xfc]
    mov r2, #0xa
    strb r2, [r8, #0xfd]
    ldr r0, =data_ov014_021247b8
    add r1, r8, #0xfe
    bl MI_CpuCopy
    strb r6, [r8, #0x10a]
    mov r1, #3
    strb r5, [r8, #0x10c]
    add r0, r8, #0xd
    add r0, r0, #0x100
    strb r1, [r8, #0x109]
    strb r1, [r8, #0x10b]
    mov r1, #0x37
    strb r1, [r8, #0x108]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" s32 pad_mem(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 r5;
    s32 r12;
    r5 = arg2;
    r12 = arg0;
    if ((u32)arg3 < (u32)arg1) {
        MI_CpuFill8(r5, r12, (arg1 - arg3));
        r5 = (r5 + (arg1 - arg3));
    }
    return r5;
}

extern "C" asm void dhcp_send_discover(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r5, =data_ov014_02126ac8
    ldr r4, =data_ov014_02126fea
    ldr r2, [r5, #0x80]
    ldr r0, [r5, #0x78]
    ldr r1, [r5, #0x7c]
    umull r12, r3, r2, r0
    mla r3, r2, r1, r3
    ldr r1, [r5, #0x84]
    ldr r2, [r5, #0x88]
    mla r3, r1, r0, r3
    ldr r0, [r5, #0x8c]
    adds r2, r2, r12
    str r2, [r5, #0x78]
    adc r1, r0, r3
    str r1, [r5, #0x7c]
    mov r0, r4
    str r1, [r5, #0x30]
    mov r1, #1
    bl dhcp_setcommon
    ldr r1, [r5, #0x38]
    mov r12, r0
    cmp r1, #0
    beq @L_02105fd8
    mov r0, #0x32
    strb r0, [r12]
    mov r0, #4
    strb r0, [r12, #1]
    ldr r0, [r5, #0x38]
    mov r0, r0, lsr #0x10
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r0, r0, asr #8
    strb r0, [r12, #2]
    ldr r0, [r5, #0x38]
    mov r0, r0, lsr #0x10
    strb r0, [r12, #3]
    ldr r0, [r5, #0x38]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r0, r0, asr #8
    strb r0, [r12, #4]
    ldr r0, [r5, #0x38]
    strb r0, [r12, #5]
    add r12, r12, #6
@L_02105fd8:
    add r2, r12, #1
    mov r5, #0xff
    sub r3, r2, r4
    mov r0, #0
    mov r1, #0x12c
    strb r5, [r12]
    bl pad_mem
    mov r1, r0
    mov r0, r4
    sub r1, r1, r4
    bl CPS_SocWrite
    ldr r0, =data_ov014_02126ac8
    ldr r0, [r0, #0x30]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 dhcp_send_request(s32 arg0)
{
    s32 r4;
    u8 *r12;
    s32 v0;
    s32 v1;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    s32 t5;
    s32 t6;
    s32 t7;
    v0 = dhcp_setcommon((s32)((u8 *)&data_ov014_02126fea), 3);
    r4 = (s32)((u8 *)&data_ov014_02126fea);
    r12 = (u8 *)v0;
    if (arg0 == 0) {
        *(u8 *)(r12) = 0x32;
        *(u8 *)(r12 + 0x1) = 4;
        t0 = (((u16)((u32)*(s32 *)(((u8 *)&data_ov014_02126ac8) + 0x38) >> 0x10)) >> 8);
        *(u8 *)(r12 + 0x2) = t0;
        t1 = ((u32)*(s32 *)(((u8 *)&data_ov014_02126ac8) + 0x38) >> 0x10);
        *(u8 *)(r12 + 0x3) = t1;
        t2 = (((u16)*(s32 *)(((u8 *)&data_ov014_02126ac8) + 0x38)) >> 8);
        *(u8 *)(r12 + 0x4) = t2;
        t3 = *(s32 *)(((u8 *)&data_ov014_02126ac8) + 0x38);
        *(u8 *)(r12 + 0x5) = t3;
        *(u8 *)(r12 + 0x6) = 0x36;
        *(u8 *)(r12 + 0x7) = 4;
        t4 = (((u16)((u32)*(s32 *)(((u8 *)&data_ov014_02126ac8) + 0x1C) >> 0x10)) >> 8);
        *(u8 *)(r12 + 0x8) = t4;
        t5 = ((u32)*(s32 *)(((u8 *)&data_ov014_02126ac8) + 0x1C) >> 0x10);
        *(u8 *)(r12 + 0x9) = t5;
        t6 = (((u16)*(s32 *)(((u8 *)&data_ov014_02126ac8) + 0x1C)) >> 8);
        *(u8 *)(r12 + 0xA) = t6;
        t7 = *(s32 *)(((u8 *)&data_ov014_02126ac8) + 0x1C);
        *(u8 *)(r12 + 0xB) = t7;
        r12 = (u8 *)(r12 + 0xC);
    }
    *(u8 *)(r12) = 0xFF;
    v1 = pad_mem(0, 0x12C, (s32)(r12 + 1), (s32)((r12 + 1) - r4));
    CPS_SocWrite(r4, (v1 - r4));
    return *(s32 *)(((u8 *)&data_ov014_02126ac8) + 0x30);
}

extern "C" asm void dhcp_analyze_response(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    ldr r2, =data_ov014_02124788
    str r0, [sp]
    ldrb r0, [r2, r1]
    rsb r0, r0, r0, lsl #3
    str r0, [sp, #4]
    bl OS_GetTick
    mov r11, r0, lsr #0x10
    orr r11, r11, r1, lsl #16
    mov r4, #0
    b @L_02106440
@L_02106150:
    bl CPS_SocGetLength
    cmp r0, #0
    bne @L_02106164
    bl OS_YieldThread__
    b @L_02106440
@L_02106164:
    add r0, sp, #8
    bl CPS_SocRead
    ldr r1, [sp, #8]
    mov r5, r0
    cmp r1, #0xf0
    bls @L_02106438
    ldrb r0, [r5]
    cmp r0, #2
    bne @L_02106438
    ldrh r3, [r5, #6]
    ldrh r2, [r5, #4]
    mov r0, r3, lsl #8
    mov r1, r2, lsl #8
    orr r2, r1, r2, asr #8
    orr r1, r0, r3, asr #8
    mov r0, r2, lsl #0x10
    mov r1, r1, lsl #0x10
    mov r2, r0, lsr #0x10
    mov r0, r1, lsr #0x10
    orr r1, r0, r2, lsl #16
    ldr r0, [sp]
    cmp r0, r1
    bne @L_02106438
    ldr r1, =CPSMyMac
    add r0, r5, #0x1c
    bl maccmp
    cmp r0, #0
    bne @L_02106438
    ldrb r3, [r5, #0x10]
    ldrb r2, [r5, #0x11]
    ldrb r1, [r5, #0x12]
    ldrb r0, [r5, #0x13]
    orr r3, r2, r3, lsl #8
    ldrb r2, [r5, #0xec]
    orr r1, r0, r1, lsl #8
    mov r0, r3, lsl #0x10
    mov r1, r1, lsl #0x10
    mov r4, r0, lsr #0x10
    mov r0, r1, lsr #0x10
    cmp r2, #0x63
    orr r2, r0, r4, lsl #16
    ldreqb r0, [r5, #0xed]
    ldr r3, [sp, #8]
    mov r4, #3
    cmpeq r0, #0x82
    ldreqb r0, [r5, #0xee]
    add r1, r5, r3
    cmpeq r0, #0x53
    ldreqb r0, [r5, #0xef]
    addeq r3, r5, #0xf0
    cmpeq r0, #0x63
    bne @L_02106438
    ldr lr, =data_ov014_02126ac8
    mov r9, #2
    ldr r0, [lr, #0xc]
    mov r10, #1
    and r12, r0, #2
    mov r0, #0
    b @L_02106424
@L_02106250:
    cmp r5, #0
    beq @L_02106424
    cmp r5, #0x33
    bgt @L_0210628c
    bge @L_0210638c
    cmp r5, #6
    bgt @L_02106418
    cmp r5, #1
    blt @L_02106418
    beq @L_021062a8
    cmp r5, #3
    beq @L_021062dc
    cmp r5, #6
    beq @L_02106310
    b @L_02106418
@L_0210628c:
    cmp r5, #0x35
    bgt @L_0210629c
    beq @L_021063c0
    b @L_02106418
@L_0210629c:
    cmp r5, #0x36
    beq @L_021063e8
    b @L_02106418
@L_021062a8:
    ldrb r8, [r3, #1]
    ldrb r7, [r3, #2]
    ldrb r6, [r3, #3]
    ldrb r5, [r3, #4]
    orr r7, r7, r8, lsl #8
    mov r7, r7, lsl #0x10
    orr r6, r5, r6, lsl #8
    mov r5, r7, lsr #0x10
    mov r6, r6, lsl #0x10
    mov r6, r6, lsr #0x10
    orr r5, r6, r5, lsl #16
    str r5, [lr, #0x10]
    b @L_02106418
@L_021062dc:
    ldrb r8, [r3, #1]
    ldrb r7, [r3, #2]
    ldrb r6, [r3, #3]
    ldrb r5, [r3, #4]
    orr r7, r7, r8, lsl #8
    mov r7, r7, lsl #0x10
    orr r6, r5, r6, lsl #8
    mov r5, r7, lsr #0x10
    mov r6, r6, lsl #0x10
    mov r6, r6, lsr #0x10
    orr r5, r6, r5, lsl #16
    str r5, [lr, #0x2c]
    b @L_02106418
@L_02106310:
    cmp r12, #0
    bne @L_02106418
    ldrb r5, [r3]
    cmp r5, #8
    strlo r0, [lr, #0x74]
    blo @L_02106358
    ldrb r8, [r3, #5]
    ldrb r7, [r3, #6]
    ldrb r6, [r3, #7]
    ldrb r5, [r3, #8]
    orr r7, r7, r8, lsl #8
    mov r7, r7, lsl #0x10
    orr r6, r5, r6, lsl #8
    mov r5, r7, lsr #0x10
    mov r6, r6, lsl #0x10
    mov r6, r6, lsr #0x10
    orr r5, r6, r5, lsl #16
    str r5, [lr, #0x74]
@L_02106358:
    ldrb r8, [r3, #1]
    ldrb r7, [r3, #2]
    ldrb r6, [r3, #3]
    ldrb r5, [r3, #4]
    orr r7, r7, r8, lsl #8
    mov r7, r7, lsl #0x10
    orr r6, r5, r6, lsl #8
    mov r5, r7, lsr #0x10
    mov r6, r6, lsl #0x10
    mov r6, r6, lsr #0x10
    orr r5, r6, r5, lsl #16
    str r5, [lr, #0x70]
    b @L_02106418
@L_0210638c:
    ldrb r8, [r3, #1]
    ldrb r7, [r3, #2]
    ldrb r6, [r3, #3]
    ldrb r5, [r3, #4]
    orr r7, r7, r8, lsl #8
    mov r7, r7, lsl #0x10
    orr r6, r5, r6, lsl #8
    mov r5, r7, lsr #0x10
    mov r6, r6, lsl #0x10
    mov r6, r6, lsr #0x10
    orr r5, r6, r5, lsl #16
    str r5, [lr, #0x3c]
    b @L_02106418
@L_021063c0:
    ldrb r5, [r3, #1]
    cmp r5, #2
    beq @L_021063dc
    cmp r5, #5
    moveq r4, r9
    streq r2, [lr, #0x50]
    b @L_02106418
@L_021063dc:
    mov r4, r10
    str r2, [lr, #0x38]
    b @L_02106418
@L_021063e8:
    ldrb r8, [r3, #1]
    ldrb r7, [r3, #2]
    ldrb r6, [r3, #3]
    ldrb r5, [r3, #4]
    orr r7, r7, r8, lsl #8
    mov r7, r7, lsl #0x10
    orr r6, r5, r6, lsl #8
    mov r5, r7, lsr #0x10
    mov r6, r6, lsl #0x10
    mov r6, r6, lsr #0x10
    orr r5, r6, r5, lsl #16
    str r5, [lr, #0x1c]
@L_02106418:
    ldrb r5, [r3]
    add r5, r5, #1
    add r3, r3, r5
@L_02106424:
    cmp r3, r1
    bhs @L_02106438
    ldrb r5, [r3], #1
    cmp r5, #0xff
    bne @L_02106250
@L_02106438:
    ldr r0, [sp, #8]
    bl CPS_SocConsume
@L_02106440:
    ldr r0, =data_ov014_02126ac8
    ldr r0, [r0, #0x18]
    blx r0
    cmp r0, #0
    beq @L_02106478
    cmp r4, #0
    bne @L_02106478
    bl OS_GetTick
    mov r0, r0, lsr #0x10
    orr r0, r0, r1, lsl #16
    sub r1, r0, r11
    ldr r0, [sp, #4]
    cmp r1, r0
    blt @L_02106150
@L_02106478:
    mov r0, r4
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" BOOL dhcp_discover_server(void)
{
    s32 r;
    s32 i;
    ((void (*)(void))CPS_SocUse)();
    ((void (*)(void))CPS_SocDatagramMode)();
    CPS_SocBind(0x44, 0x43, -1);
    for (i = 0; i < 5; i++) {
        r = ((s32 (*)(s32, s32))dhcp_analyze_response)(((s32 (*)(void))dhcp_send_discover)(), i);
        if (r == 1)
            break;
    }
    ((void (*)(void))CPS_SocRelease)();
    return r == 1 ? TRUE : FALSE;
}

extern "C" asm void dhcp_request_server(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, r1
    mov r5, r0
    bl CPS_SocUse
    bl CPS_SocDatagramMode
    cmp r4, #1
    mov r0, #0x44
    bne @L_02106518
    ldr r1, =data_ov014_02126ac8
    ldr r2, [r1, #0x1c]
    mov r1, #0x43
    b @L_02106520
@L_02106518:
    mov r1, #0x43
    sub r2, r1, #0x44
@L_02106520:
    bl CPS_SocBind
    mov r7, #0
@L_02106528:
    mov r0, r4
    bl dhcp_send_request
    mov r1, r7
    bl dhcp_analyze_response
    movs r6, r0
    cmpne r6, #1
    bne @L_02106550
    add r7, r7, #1
    cmp r7, #5
    blt @L_02106528
@L_02106550:
    bl CPS_SocRelease
    cmp r6, #2
    bne @L_02106584
    ldr r1, =data_ov014_02126ac8
    mov r0, #1
    ldr r2, [r1, #0x3c]
    mov r2, r2, lsr #1
    str r2, [r5]
    ldr r2, [r1, #0x3c]
    add r2, r2, r2, lsl #1
    mov r2, r2, lsr #3
    str r2, [r1, #0x40]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02106584:
    ldr r0, =data_ov014_02126ac8
    cmp r4, #1
    ldr r1, [r0, #0x40]
    mov r1, r1, lsr #1
    str r1, [r0, #0x40]
    str r1, [r5]
    beq @L_021065ac
    cmp r4, #2
    beq @L_021065cc
    b @L_021065d8
@L_021065ac:
    cmp r1, #0x3c
    bhs @L_021065d8
    mov r1, #1
    str r1, [r5]
    ldr r1, [r0, #0x3c]
    mov r1, r1, lsr #3
    str r1, [r0, #0x40]
    b @L_021065d8
@L_021065cc:
    cmp r1, #0x3c
    movlo r0, #1
    strlo r0, [r5]
@L_021065d8:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" void dhcp_release_server(void)
{
    u8 *p;
    u8 *e;
    ((void (*)(void))CPS_SocUse)();
    ((void (*)(void))CPS_SocDatagramMode)();
    CPS_SocBind(0x44, 0x43, *(s32 *)(data_ov014_02126ac8 + 0x1C));
    p = (u8 *)dhcp_setcommon((u8 *)data_ov014_02126fea, 7);
    *p = 0xFF;
    e = (u8 *)pad_mem(0, 0x12C, (s32)(p + 1), (p + 1) - (u8 *)data_ov014_02126fea);
    ((void (*)(void *, s32))CPS_SocWrite)(data_ov014_02126fea, e - (u8 *)data_ov014_02126fea);
    ((void (*)(void))CPS_SocRelease)();
}

extern "C" s32 dns_skipname(u8 *arg0)
{
    s32 r0;
    s32 r2;
    s32 t0;
    u8 t1;
    if (*(u8 *)(arg0) == 0)
        return (s32)(arg0 + 1);
    r0 = (s32)(arg0 + 1);
    r2 = *(u8 *)(arg0);
    do {
        if ((r2 & 0xC0) == 0xC0) {
            return (r0 + 1);
        }
        t0 = r0;
        t1 = *(u8 *)(((u8 *)(r0 + r2)));
        r0 = ((t0 + r2) + 1);
        r2 = *(u8 *)(((u8 *)(t0 + r2)));
    } while (t1 != 0);
    return r0;
}

extern "C" asm s32 resolve_common(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x48
    mov r9, r2
    mov r2, r9, lsl #8
    mov r10, r1
    orr r1, r2, r9, asr #8
    strh r1, [sp, #4]
    cmp r10, #0x20
    mov r6, #0
    movne r1, #1
    strneh r1, [sp, #6]
    ldreq r1, =0x1001
    add r7, sp, #0x10
    streqh r1, [sp, #6]
    mov r1, #0x100
    strh r1, [sp, #8]
    strh r6, [sp, #0xa]
    strh r6, [sp, #0xc]
    strh r6, [sp, #0xe]
    str r6, [sp]
    ldrb r12, [r0], #1
    mov r11, r3
    ldr r8, [sp, #0x70]
    mov r1, r6
    add r2, r7, #1
    cmp r12, #0
    beq @L_02106748
    mov r3, r6
    add r4, sp, #4
@L_021066f0:
    sub r5, r2, r4
    cmp r5, #0x3c
    addgt sp, sp, #0x48
    mvngt r0, #0
    ldmgtia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r12, #0x2e
    addne r6, r6, #1
    movne r1, r6
    strne r6, [sp]
    strneb r12, [r2], #1
    bne @L_0210673c
    cmp r6, #0
    beq @L_0210673c
    strb r6, [r7]
    mov r7, r2
    mov r1, r3
    mov r6, r3
    str r3, [sp]
    add r2, r2, #1
@L_0210673c:
    ldrb r12, [r0], #1
    cmp r12, #0
    bne @L_021066f0
@L_02106748:
    strb r1, [r7]
    mov r4, #0
    strb r4, [r2]
    mov r0, r10, lsr #8
    strb r0, [r2, #1]
    strb r10, [r2, #2]
    add r0, sp, #4
    add r1, r2, #5
    strb r4, [r2, #3]
    mov r3, #1
    sub r1, r1, r0
    strb r3, [r2, #4]
    bl CPS_SocWrite
    bl OS_GetTick
    mov r5, r0, lsr #0x10
    orr r5, r5, r1, lsl #16
    b @L_021068dc
@L_0210678c:
    bl CPS_SocGetLength
    cmp r0, #0
    bne @L_021067a4
    mov r0, #0xa
    bl OS_Sleep
    b @L_021068dc
@L_021067a4:
    add r0, sp, #0
    bl CPS_SocRead
    ldr r1, [sp]
    cmp r1, #0xc
    bls @L_021068d4
    ldrh r3, [r0]
    mov r2, r3, lsl #8
    orr r2, r2, r3, asr #8
    mov r2, r2, lsl #0x10
    cmp r9, r2, lsr #16
    bne @L_021068d4
    ldrb r2, [r0, #3]
    and r2, r2, #0xf
    cmp r2, #3
    mvneq r4, #0
    beq @L_021068d4
    cmp r2, #0
    bne @L_021068d4
    ldrb r3, [r0, #4]
    ldrb r2, [r0, #5]
    add r6, r0, r1
    add r0, r0, #0xc
    orr r1, r2, r3, lsl #8
    mov r1, r1, lsl #0x10
    movs r1, r1, lsr #0x10
    sub r7, r1, #1
    beq @L_02106824
@L_02106810:
    bl dns_skipname
    cmp r7, #0
    add r0, r0, #4
    sub r7, r7, #1
    bne @L_02106810
@L_02106824:
    cmp r0, r6
    bhs @L_021068d4
@L_0210682c:
    bl dns_skipname
    ldrb r7, [r0, #8]
    ldrb r1, [r0, #9]
    ldrb r3, [r0]
    ldrb r2, [r0, #1]
    orr r1, r1, r7, lsl #8
    mov r1, r1, lsl #0x10
    orr r2, r2, r3, lsl #8
    mov r2, r2, lsl #0x10
    cmp r10, r2, lsr #16
    mov r2, r1, lsr #0x10
    bne @L_021068c4
    cmp r10, #0xc
    beq @L_021068a4
    add r4, r0, #8
    add r0, r0, #6
    add r6, r4, r2
    add r1, r0, r2
    ldrb r3, [r0, r2]
    ldrb r0, [r1, #1]
    ldrb r2, [r4, r2]
    ldrb r1, [r6, #1]
    orr r0, r0, r3, lsl #8
    mov r0, r0, lsl #0x10
    orr r1, r1, r2, lsl #8
    mov r1, r1, lsl #0x10
    mov r2, r0, lsr #0x10
    mov r0, r1, lsr #0x10
    orr r4, r0, r2, lsl #16
    b @L_021068d4
@L_021068a4:
    cmp r2, r8
    movhi r4, #2
    bhi @L_021068d4
    mov r1, r11
    add r0, r0, #0xa
    bl MI_CpuCopy
    mov r4, #1
    b @L_021068d4
@L_021068c4:
    add r1, r2, #0xa
    add r0, r0, r1
    cmp r0, r6
    blo @L_0210682c
@L_021068d4:
    ldr r0, [sp]
    bl CPS_SocConsume
@L_021068dc:
    ldr r0, =data_ov014_02126ac8
    ldr r0, [r0, #0x18]
    blx r0
    cmp r0, #0
    beq @L_02106910
    cmp r4, #0
    bne @L_02106910
    bl OS_GetTick
    mov r0, r0, lsr #0x10
    orr r0, r0, r1, lsl #16
    sub r0, r0, r5
    cmp r0, #0xf
    blt @L_0210678c
@L_02106910:
    mov r0, r4
    add sp, sp, #0x48
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void strtol10(void)
{
    str r0, [r1]
    mov r12, #0
    mov r2, #0xa
@L_02106930:
    ldrb r3, [r0]
    sub r3, r3, #0x30
    and r3, r3, #0xff
    cmp r3, #9
    mlals r12, r2, r12, r3
    addls r0, r0, #1
    strls r0, [r1]
    bls @L_02106930
    mov r0, r12
    bx lr
}

extern "C" s32 rawip(u8 *arg0, u32 *arg1)
{
    u32 r = 0;
    s32 i;
    u8 *end;
    for (i = 0; i < 4; i++) {
        u32 v = ((s32 (*)(...))strtol10)(arg0, &end);
        if (arg0 == end)
            return 0;
        arg0 = end;
        if (v > 0xFF || (i != 3 && *arg0++ != '.') || (i == 3 && *arg0 != 0))
            return 0;
        r = v | (r << 8);
    }
    *arg1 = r;
    return 1;
}

extern "C" s32 resolve_sub(s32 arg0, s32 arg1, s32 arg2)
{
    s32 v3;
    if (arg1 == 0) {
        return -1;
    } else {
        CPS_SocUse();
        CPS_SocDatagramMode();
        CPS_SocBind(0, 0x35, arg1);
        v3 = resolve_common(arg0, 1, arg2, 0, 0);
        CPS_SocRelease();
        return v3;
    }
}

extern "C" asm void CPS_Resolve(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10
    ldr r2, =data_ov014_02126ac8
    mov r1, #0
    str r1, [sp, #0xc]
    ldr r8, [r2, #0x80]
    ldr r4, [r2, #0x78]
    str r1, [sp]
    ldr r5, [r2, #0x7c]
    umull r3, r1, r8, r4
    mla r1, r8, r5, r1
    ldr r7, [r2, #0x84]
    ldr r6, [r2, #0x88]
    mla r1, r7, r4, r1
    ldr r4, [r2, #0x8c]
    adds r10, r6, r3
    adc r11, r4, r1
    umull r3, r1, r8, r10
    mla r1, r8, r11, r1
    str r10, [r2, #0x78]
    mla r1, r7, r10, r1
    mov r5, #0
    adds r6, r6, r3
    str r11, [r2, #0x7c]
    mov r7, r5, lsl #0x10
    adc r4, r4, r1
    mov r3, r5, lsl #0x10
    orr r7, r7, r11, lsr #16
    str r6, [r2, #0x78]
    orr r3, r3, r4, lsr #16
    add r1, sp, #0xc
    mov r10, r0
    str r4, [r2, #0x7c]
    strh r7, [sp, #6]
    strh r3, [sp, #8]
    bl rawip
    cmp r0, #0
    ldrne r0, [sp, #0xc]
    addne sp, sp, #0x10
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, #1
    ldr r6, =CPSDnsIp
    strb r0, [sp, #4]
    strb r0, [sp, #5]
    mov r8, r5
    add r11, sp, #6
    add r7, sp, #4
@L_02106b10:
    mov r9, r8
    mvn r4, #0
@L_02106b18:
    ldrb r0, [r7, r9]
    cmp r0, #0
    beq @L_02106b94
    ldr r0, [r6, r9, lsl #2]
    cmp r0, #0
    beq @L_02106b3c
    bl get_targetip
    movs r5, r0
    bne @L_02106b44
@L_02106b3c:
    strb r8, [r7, r9]
    b @L_02106b94
@L_02106b44:
    bl inq_arpcache
    cmp r0, #0
    bne @L_02106b64
    mov r0, r5
    bl arprequest
    cmp r0, #0
    streqb r8, [r7, r9]
    beq @L_02106b94
@L_02106b64:
    mov r0, r9, lsl #1
    ldrh r2, [r11, r0]
    ldr r1, [r6, r9, lsl #2]
    mov r0, r10
    bl resolve_sub
    str r0, [sp, #0xc]
    cmp r0, #0
    beq @L_02106b8c
    cmp r0, r4
    bne @L_02106bb4
@L_02106b8c:
    cmp r0, r4
    streqb r8, [r7, r9]
@L_02106b94:
    add r9, r9, #1
    cmp r9, #2
    blt @L_02106b18
    ldr r0, [sp]
    add r0, r0, #1
    str r0, [sp]
    cmp r0, #3
    blt @L_02106b10
@L_02106bb4:
    ldr r0, [sp, #0xc]
    cmn r0, #1
    moveq r0, #0
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 WDSGetRssi8(s32 arg0)
{
    return (((arg0 & 2) == 0 ? ((arg0 >> 2) + 0x19) : (arg0 >> 2)) & 0xFF);
}

extern "C" asm void WDSScanCallback(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #8
    ldr r7, =gWdsWork
    mov r6, r0
    ldr r0, [r7]
    mov r1, #0x400
    add r0, r0, #0xf00
    bl DC_InvalidateRange
    ldrh r0, [r6, #2]
    cmp r0, #0
    ldreqh r0, [r6, #8]
    cmpeq r0, #5
    bne @L_02106e84
    ldrh r0, [r6, #0xe]
    mov r5, #0
    cmp r0, #0
    bls @L_02106e84
@L_02106c28:
    add r0, r6, r5, lsl #2
    ldr r0, [r0, #0x10]
    ldrb r1, [r0, #0x4a]
    add r1, r1, #0x10
    cmp r1, #0x80
    ldreqh r1, [r0, #0x40]
    cmpeq r1, #1
    ldreq r2, [r0, #0x44]
    ldreq r1, =0x857
    cmpeq r2, r1
    bne @L_02106e74
    ldr r1, [r7]
    mov r8, #0
    add r3, r1, #0x1000
    ldr r2, [r3, #0xa88]
    mov r4, r8
    cmp r2, #0
    bls @L_02106c9c
    ldrh r9, [r0, #0x48]
@L_02106c74:
    add r2, r1, r4, lsl #1
    add r2, r2, #0x1a00
    ldrh r2, [r2, #0x68]
    cmp r2, r9
    moveq r8, #1
    beq @L_02106c9c
    ldr r2, [r3, #0xa88]
    add r4, r4, #1
    cmp r4, r2
    blo @L_02106c74
@L_02106c9c:
    cmp r8, #1
    beq @L_02106e74
    ldr r1, [r7]
    mov r4, #0x70
    add r2, r1, #0x1000
    add r1, r1, #0x348
    ldr r2, [r2, #0xa8c]
    add r1, r1, #0x1000
    mla r1, r2, r4, r1
    mov r2, r4
    add r0, r0, #0x50
    bl MI_CpuCopy8
    add r8, sp, #0
    mov r9, #4
    ldr r0, =data_ov014_02123d8c
    mov r1, r8
    mov r2, r9
    bl MI_CpuCopy8
    add r0, r6, r5, lsl #2
    ldr r0, [r0, #0x10]
    mov r2, r9
    add r1, sp, #4
    add r0, r0, #6
    bl MI_CpuCopy8
    ldr r0, [r7]
    mov r1, r8
    add r0, r0, #0x96
    mov r2, #8
    add r0, r0, #0x1c00
    bl CRYPTO_RC4Init
    ldr r3, [r7]
    mov r2, r4
    add r0, r3, #0x348
    add r8, r0, #0x1000
    add r0, r3, #0x1000
    ldr r1, [r0, #0xa8c]
    add r0, r3, #0x96
    mul r3, r1, r4
    add r1, r8, r3
    add r0, r0, #0x1c00
    add r3, r8, r3
    bl CRYPTO_RC4Encrypt
    ldr r2, [r7]
    mov r8, #0x6e
    add r0, r2, #0x348
    add r10, r0, #0x1000
    add r0, r2, #0x1000
    ldr r1, [r0, #0xa8c]
    add r0, r2, #0x96
    mul r9, r1, r4
    add r1, r2, #0x294
    add r0, r0, #0x1a00
    add r1, r1, #0x1800
    add r2, r10, r9
    mov r3, r8
    bl MATHi_CRC16UpdateRev
    ldr r0, [r7]
    add r1, r10, r9
    add r0, r0, #0x96
    mov r2, r8
    add r0, r0, #0x1a00
    bl MATH_CalcCRC16
    ldr r8, [r7]
    add r1, r8, #0x1000
    ldr r2, [r1, #0xa8c]
    mul r1, r2, r4
    add r2, r8, r1
    add r2, r2, #0x1300
    ldrh r2, [r2, #0xb6]
    cmp r0, r2
    cmpne r2, #0
    beq @L_02106dd8
    add r0, r8, #0x348
    add r0, r0, #0x1000
    mov r2, r4
    add r0, r0, r1
    mov r1, #0
    bl MI_CpuFill8
    b @L_02106e74
@L_02106dd8:
    add r0, r6, r5, lsl #2
    ldr r0, [r0, #0x10]
    ldrh r0, [r0, #2]
    and r0, r0, #0xff
    bl WDSGetRssi8
    add r1, r8, #0x1000
    ldr r1, [r1, #0xa8c]
    ldr r3, =gWdsWork
    add r1, r8, r1, lsl #1
    add r1, r1, #0x1a00
    strh r0, [r1, #0x48]
    ldr r2, [r3]
    add r1, r6, r5, lsl #2
    add r0, r2, #0x1000
    ldr r1, [r1, #0x10]
    ldr r0, [r0, #0xa8c]
    ldrh r1, [r1, #0x48]
    add r0, r2, r0, lsl #1
    add r0, r0, #0x1a00
    strh r1, [r0, #0x68]
    ldr r0, [r3]
    add r2, r0, #0x1000
    ldr r0, [r2, #0xa8c]
    add r0, r0, #1
    mov r1, r0, lsr #0x1f
    rsb r0, r1, r0, lsl #28
    add r0, r1, r0, ror #28
    str r0, [r2, #0xa8c]
    ldr r0, [r3]
    add r0, r0, #0x1000
    ldr r1, [r0, #0xa88]
    add r1, r1, #1
    str r1, [r0, #0xa88]
    ldr r0, [r3]
    add r0, r0, #0x1000
    ldr r1, [r0, #0xa88]
    cmp r1, #0x10
    movgt r1, #0x10
    strgt r1, [r0, #0xa88]
@L_02106e74:
    ldrh r0, [r6, #0xe]
    add r5, r5, #1
    cmp r5, r0
    blo @L_02106c28
@L_02106e84:
    ldr r1, =gWdsWork
    mov r2, #2
    ldr r0, [r1]
    add r0, r0, #0x1000
    str r2, [r0, #0xa90]
    ldr r0, [r1]
    add r0, r0, #0x1000
    ldr r1, [r0, #0x344]
    cmp r1, #0
    addeq sp, sp, #8
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r6
    blx r1
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" s32 WDS_GetWorkAreaSize(void)
{
    return 0x1DA0;
}

extern "C" s32 WDS_Initialize(s32 arg0, s32 arg1, s32 arg2)
{
    s32 r4;
    s32 r5;
    s32 r6;
    s32 v0;
    s32 v3;
    s32 t0;
    u8 *t1;
    u8 *t2;
    s32 t3;
    s32 t4;
    r5 = arg2;
    r6 = arg1;
    if (r6 == 0) {
        return -1;
    } else {
        *(s32 *)(gWdsWork) = arg0;
        v0 = WDS_GetWorkAreaSize();
        t0 = *(s32 *)(gWdsWork);
        MI_CpuFill8(t0, 0, v0);
        t1 = (u8 *)(*(s32 *)(gWdsWork) + 0x1000);
        *(s32 *)(t1 + 0xA90) = 0;
        t2 = (u8 *)(*(s32 *)(gWdsWork) + 0x1A00);
        *(u16 *)(t2 + 0x94) = 0;
        t3 = ((*(s32 *)(gWdsWork) + 0x96) + 0x1A00);
        MATHi_CRC16InitTableRev(t3, 0xA001);
        t4 = *(s32 *)(gWdsWork);
        v3 = func_020136b4(t4, arg1, arg2);
        arg0 = v3;
        r4 = 0;
        if (arg0 == 2) {
            arg0 = 0;
        }
        return arg0;
    }
}

extern "C" s32 WDS_End(s32 arg0)
{
    s32 r4;
    s32 v0;
    u8 *t0;
    if (arg0 == 0) {
        return -1;
    } else {
        t0 = (u8 *)(*(s32 *)(gWdsWork) + 0x1000);
        *(s32 *)(t0 + 0xA90) = 3;
        *(s32 *)(gWdsWork) = 0;
        v0 = WM_End(arg0, (s32)t0, (s32)gWdsWork, 3);
        arg0 = v0;
        r4 = 0;
        if (arg0 == 2) {
            arg0 = 0;
        }
        return arg0;
    }
}

extern "C" s32 WDS_StartScan(s32 arg0)
{
    s32 r;
    if (arg0 == 0)
        return -1;
    *(u8 **)(*(u8 **)gWdsWork + 0x1300) = *(u8 **)gWdsWork + 0xF00;
    *(u16 *)(*(u8 **)gWdsWork + 0x1304) = 0x400;
    *(u16 *)(*(u8 **)gWdsWork + 0x1306) = ((s32 (*)(...))func_020131c0)();
    *(u16 *)(*(u8 **)gWdsWork + 0x1308) = ((s32 (*)(...))WM_GetDispersionScanPeriod)();
    *(u16 *)(*(u8 **)gWdsWork + 0x1310) = 1;
    ((s32 (*)(...))MI_CpuFill8)(*(u8 **)gWdsWork + 0x130A, 0xFF, 6);
    *(s32 *)(*(u8 **)gWdsWork + 0x1344) = arg0;
    *(s32 *)(*(u8 **)gWdsWork + 0x1A90) = 1;
    r = ((s32 (*)(...))WM_StartScanEx)(WDSScanCallback, *(u8 **)gWdsWork + 0x1300);
    if (r == 2)
        r = 0;
    return r;
}

extern "C" s32 WDS_EndScan(s32 arg0)
{
    s32 v0;
    u8 *t0;
    if (arg0 == 0)
        return -1;
    t0 = (u8 *)(*(s32 *)(gWdsWork) + 0x1000);
    *(s32 *)(t0 + 0xA90) = 2;
    v0 = WM_EndScan(arg0, (s32)t0, 2);
    return (v0 == 2 ? 0 : v0);
}

extern "C" asm s32 WDS_GetApInfoByIndex(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r7, =gWdsWork
    mov r6, r0
    ldr r0, [r7]
    mov r5, r1
    add r0, r0, #0x1000
    ldr r1, [r0, #0xa90]
    cmp r1, #2
    mvnne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    cmp r6, #0
    blt @L_021070c8
    ldr r0, [r0, #0xa88]
    cmp r6, r0
    blt @L_021070d0
@L_021070c8:
    mvn r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_021070d0:
    mov r4, #0
    mov r0, r5
    mov r1, r4
    mov r2, #0x78
    bl MI_CpuFill8
    mov r0, #1
    str r0, [r5]
    ldr r0, [r7]
    mov r2, #0x70
    add r0, r0, r6, lsl #1
    add r0, r0, #0x1a00
    ldrh r0, [r0, #0x48]
    add r1, r5, #6
    strh r0, [r5, #4]
    ldr r0, [r7]
    add r0, r0, #0x348
    add r0, r0, #0x1000
    mla r0, r6, r2, r0
    bl MI_CpuCopy8
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" s32 WDS_GetApInfoAll(s32 arg0)
{
    s32 r4;
    u8 *r5;
    s32 r6;
    s32 r7;
    u8 *r8;
    s32 v1;
    r5 = (u8 *)arg0;
    if (*(s32 *)(((u8 *)(*(s32 *)(gWdsWork) + 0x1000)) + 0xA90) != 2) {
        return -1;
    } else {
        MI_CpuFill8(arg0, 0, 0x780);
        arg0 = 0x78;
        r6 = 0;
        do {
            *(s32 *)(r5 + (r6 * arg0)) = 0;
            r6 = (r6 + 1);
        } while (r6 < 0x10);
        r4 = 0;
        r8 = (u8 *)gWdsWork;
        if (*(s32 *)(((u8 *)(*(s32 *)(r8) + 0x1000)) + 0xA88) > 0) {
            r4 = 0;
            do {
                v1 = WDS_GetApInfoByIndex(r4, (s32)((r4 * 0x78) + r5));
                r6 = 0x78;
                r7 = -1;
                r8 = (u8 *)gWdsWork;
                if (v1 == r7)
                    break;
                r4 = (r4 + 1);
                r6 = 0x78;
                r7 = -1;
                r8 = (u8 *)gWdsWork;
            } while (r4 < *(s32 *)(((u8 *)(*(s32 *)(r8) + 0x1000)) + 0xA88));
        }
        return 0;
    }
}

extern "C" asm s32 DWCi_AC_GetBeacon(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r7, r0
    mov r0, #0x10
    mvn r5, #0
    bl DWCi_AC_GetMemPtr
    mov r4, #1
    mov r6, r0
    mov r0, r4
    bl DWCi_AC_GetMemPtr
    ldrb r1, [r0, #0xb]
    bic r1, r1, #0xf
    orr r1, r1, #1
    strb r1, [r0, #0xb]
    bl DWCi_AC_GetPhase
    cmp r0, #3
    beq @L_02107224
    cmp r0, #4
    beq @L_02107278
    cmp r0, #5
    beq @L_021072c4
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02107224:
    ldrh r1, [r7, #0xa]
    ldrb r4, [r6, #0xd11]
    cmp r1, #0
    ldrneb r0, [r7, #0xc]
    cmpne r0, #0
    bne @L_02107248
    ldrh r0, [r7, #0x36]
    bl DWCi_AC_SetStealthChannel
    b @L_02107308
@L_02107248:
    cmp r1, #1
    cmpeq r0, #0x20
    bne @L_02107274
    ldrh r0, [r7, #0x36]
    bl DWCi_AC_SetStealthChannel
@L_0210725c:
    ldrb r1, [r6, #0xd10]
    mov r0, r7
    add r2, r6, #0x300
    bl CompareList
    mov r5, r0
    b @L_02107308
@L_02107274:
    b @L_0210725c
@L_02107278:
    ldrb r2, [r6, #0xd0f]
    mov r1, #0xc0
    mov r0, r7
    mla r1, r2, r1, r6
    add r1, r1, #0x400
    ldrh r2, [r1, #0xa6]
    mov r1, r6
    sub r2, r2, #1
    and r4, r2, #0xff
    bl CompareListDiff
    movs r5, r0
    bmi @L_02107308
    ldrb r1, [r6, #0xd0f]
    add r0, r6, #0x47
    add r2, r0, #0x400
    ldrb r0, [r2, r1, lsl #2]
    orr r0, r0, #0x80
    strb r0, [r2, r1, lsl #2]
    b @L_02107308
@L_021072c4:
    ldrb r0, [r6, #0xd0f]
    add r1, r6, #0x300
    mov r8, #0x24
    mla r2, r0, r8, r1
    mov r1, r4
    mov r0, r7
    ldrb r4, [r6, #0xd11]
    bl CompareList
    movs r5, r0
    bmi @L_02107308
    ldrb r0, [r6, #0xd0f]
    add r2, r6, #0x300
    mul r1, r0, r8
    ldrb r0, [r2, r1]
    bic r0, r0, #0xf
    orr r0, r0, #1
    strb r0, [r2, r1]
@L_02107308:
    cmp r5, #0
    ldmltia sp!, {r4, r5, r6, r7, r8, pc}
    mov r0, r5
    mov r1, r7
    mov r2, r4
    mov r3, r6
    bl AddList
    mov r1, r6
    bl SortList
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" s32 DWCi_AC_CheckNintendoSSID(s32 arg0)
{
    u8 *r4;
    u8 *r5;
    s32 v0;
    s32 v1;
    s32 v2;
    v0 = DWCi_AC_GetMemPtr(0x10);
    r5 = (u8 *)arg0;
    r4 = (u8 *)v0;
    arg0 = ((u32)(*(u8 *)(((u8 *)v0) + 0xD0C) << 0x1C) >> 0x1C);
    if (((arg0 == 0 || arg0 == 4) && ((*(u16 *)(r5 + 0x2C) >> 4) & 1) == 1)) {
        v1 = DWCi_AC_CheckNintendoUsbAP((s32)(r5 + 0xC));
        if (v1 == 1)
            return 6;
    }
    arg0 = ((u32)(*(u8 *)(r4 + 0xD0C) << 0x1C) >> 0x1C);
    if (((arg0 == 0 || arg0 == 5) && ((*(u16 *)(r5 + 0x2C) >> 4) & 1) == 1)) {
        v2 = DWCi_AC_CheckNintendoShopAP((s32)(r5 + 0xC));
        if (v2 == 1)
            return 7;
    }
    return -1;
}

extern "C" s32 DWCi_AC_IsSupportWPA(void)
{
    return 0;
}

extern "C" s32 CompareList(s32 arg0, s32 arg1, s32 arg2)
{
    u8 *r4;
    s32 r5;
    u8 *r6;
    s32 r7;
    s32 r8;
    s32 r9;
    s32 v0;
    s32 v1;
    r6 = (u8 *)arg0;
    r5 = arg1;
    r4 = (u8 *)arg2;
    if (*(u16 *)(r6 + 0xA) == 0x20) {
        v0 = DWCi_AC_CheckNintendoSSID(arg0);
        if (v0 > 0)
            return v0;
    }
    r8 = 0;
    if (r5 > 0) {
        r9 = *(u16 *)(r6 + 0xA);
        r7 = (*(u16 *)(r6 + 0xA) & 0xFF);
        do {
            if (r7 == *(u8 *)(r4 + 0x3)) {
                v1 = strncmp((s32)(r6 + 0xC), (s32)(r4 + 4), r9);
                if (v1 == 0)
                    return *(u8 *)(r4 + 0x1);
            }
            r8 = (r8 + 1);
            r4 = (u8 *)(r4 + 0x24);
        } while (r8 < r5);
    }
    return -1;
}

extern "C" s32 CompareListDiff(u8 *arg0, s32 arg1)
{
    s32 r2;
    s32 r4;
    s32 r5;
    s32 r6;
    s32 r7;
    u8 *r8;
    s32 r10;
    s32 v0;
    s32 v1;
    r2 = *(u16 *)(arg0 + 0xA);
    r8 = (u8 *)arg1;
    if (r2 == 0x20) {
        v0 = ((s32 (*)(...))DWCi_AC_CheckNintendoSSID)((s32)arg0, arg1, r2);
        if (v0 > 0)
            return v0;
    }
    r7 = *(u8 *)(r8 + 0xD12);
    r5 = 0;
    if (r7 > 0) {
        r6 = *(u16 *)(arg0 + 0xA);
        r4 = (s32)((r8 + 0x7C) + 0x400);
        do {
            r10 = 0xC0;
            arg1 = (r5 * 0xC0);
            if ((r6 == *(u16 *)(((u8 *)((r8 + arg1) + 0x400)) + 0x7A) && (v1 = strncmp((s32)(arg0 + 0xC), (r4 + arg1), r6), v1 == 0))) {
                return *(u8 *)(((u8 *)(r8 + (r5 << 2))) + 0x445);
            }
            r5 = (r5 + 1);
        } while (r5 < r7);
    }
    return -1;
}

extern "C" asm void AddList(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x18
    ldrb r4, [r3, #0xd12]
    str r0, [sp]
    mvn r0, #0
    str r3, [sp, #8]
    mov r5, r1
    str r2, [sp, #4]
    cmp r4, #0
    mov r6, #1
    str r0, [sp, #0xc]
    mov r7, #0
    ble @L_02107604
    mov r0, r3
    add r1, r0, #0x7c
    add r2, r0, #0x74
    add r0, r1, #0x400
    str r0, [sp, #0x14]
    add r0, r2, #0x400
    ldrb r11, [r5, #4]
    str r0, [sp, #0x10]
@L_02107534:
    mov r0, #0xc0
    mul r9, r7, r0
    ldr r0, [sp, #0x10]
    mov r2, #0
    add r10, r0, r9
    ldrb r0, [r0, r9]
    mov r8, r2
    mov r3, r2
    cmp r11, r0
    ldreqb r1, [r5, #5]
    ldreqb r0, [r10, #1]
    mov r12, r2
    mov lr, r2
    cmpeq r1, r0
    moveq r8, r6
    cmp r8, #0
    beq @L_02107588
    ldrb r1, [r5, #6]
    ldrb r0, [r10, #2]
    cmp r1, r0
    moveq lr, r6
@L_02107588:
    cmp lr, #0
    beq @L_021075a0
    ldrb r1, [r5, #7]
    ldrb r0, [r10, #3]
    cmp r1, r0
    moveq r12, r6
@L_021075a0:
    cmp r12, #0
    beq @L_021075b8
    ldrb r1, [r5, #8]
    ldrb r0, [r10, #4]
    cmp r1, r0
    moveq r3, r6
@L_021075b8:
    cmp r3, #0
    beq @L_021075d0
    ldrb r0, [r10, #5]
    ldrb r1, [r5, #9]
    cmp r1, r0
    moveq r2, r6
@L_021075d0:
    cmp r2, #0
    beq @L_021075f8
    ldr r0, [sp, #0x14]
    ldrh r2, [r5, #0xa]
    add r1, r0, r9
    add r0, r5, #0xc
    bl strncmp
    cmp r0, #0
    streq r7, [sp, #0xc]
    beq @L_02107604
@L_021075f8:
    add r7, r7, #1
    cmp r7, r4
    blt @L_02107534
@L_02107604:
    ldr r0, [sp, #0xc]
    mov r1, r5
    cmn r0, #1
    bne @L_0210764c
    ldr r0, [sp]
    ldr r2, [sp, #4]
    ldr r3, [sp, #8]
    and r0, r0, #0xff
    bl SetDataListTail
    ldr r0, [sp, #8]
    ldrb r0, [r0, #0xd12]
    cmp r0, #0xa
    addlo r1, r0, #1
    ldrlo r0, [sp, #8]
    strlob r1, [r0, #0xd12]
    mov r0, #0xa
    str r0, [sp, #0xc]
    b @L_02107658
@L_0210764c:
    ldr r2, [sp, #4]
    ldr r3, [sp, #8]
    bl UpDateList
@L_02107658:
    ldr r0, [sp, #0xc]
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void SetDataListTail(void)
{
    stmdb sp!, {r4, lr}
    ldrb lr, [r3, #0xd0c]
    add r12, r3, #0x6c
    strb r0, [r12, #0x401]
    mov r0, lr, lsl #0x1a
    mov r0, r0, lsr #0x1f
    cmp r0, #1
    ldrh r4, [r1, #2]
    bne @L_0210769c
    mov r0, r4, asr #2
    tst r4, #2
    andne r4, r0, #0xff
    addeq r0, r0, #0x19
    andeq r4, r0, #0xff
@L_0210769c:
    ldrb lr, [r12, #0x403]
    mov r0, r1
    and r1, r2, #0x7f
    bic r2, lr, #0x7f
    orr r2, r2, r1
    add r1, r3, #0xbf0
    strb r4, [r12, #0x402]
    strb r2, [r12, #0x403]
    bl WCMi_BssDescCopy
    ldmia sp!, {r4, pc}
}

extern "C" asm void UpDateList(void)
{
    stmdb sp!, {r4, lr}
    ldrb r4, [r3, #0xd0c]
    mov r12, #0xc0
    mul r12, r0, r12
    add lr, r3, #0x44
    mov r4, r4, lsl #0x1a
    add lr, lr, #0x400
    mov r4, r4, lsr #0x1f
    cmp r4, #1
    add r0, lr, r0, lsl #2
    add r3, r3, #0x470
    ldrh r4, [r1, #2]
    bne @L_0210770c
    tst r4, #2
    mov r4, r4, asr #2
    andne r4, r4, #0xff
    addeq r4, r4, #0x19
    andeq r4, r4, #0xff
@L_0210770c:
    ldrb lr, [r0, #2]
    and r4, r4, #0xff
    cmp r4, lr
    bls @L_02107734
    strb r4, [r0, #2]
    ldrb lr, [r0, #3]
    and r2, r2, #0x7f
    bic lr, lr, #0x7f
    orr r2, lr, r2
    strb r2, [r0, #3]
@L_02107734:
    mov r0, r1
    add r1, r3, r12
    mov r2, #0xc0
    bl MIi_CpuCopy32
    ldmia sp!, {r4, pc}
}

extern "C" asm void SortList(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc4
    mov r11, r1
    mov r10, r0
    add r0, r11, #0x44
    add r6, r0, #0x400
    add r7, r11, #0x470
    subs r9, r10, #1
    mov r5, #1
    mov r4, #0xc0
    bmi @L_02107908
@L_02107774:
    ldrb r0, [r11, #0xd0c]
    mov r8, #0
    mov r0, r0, lsl #0x18
    mov r0, r0, lsr #0x1f
    cmp r0, #1
    bne @L_021077c0
    mla r0, r10, r4, r7
    bl DWCi_AC_IsSupportWPA
    cmp r0, #1
    bne @L_021077c0
    add r0, r6, r10, lsl #2
    ldrb r1, [r0, #2]
    add r0, r6, r9, lsl #2
    ldrb r0, [r0, #2]
    cmp r1, r0
    bhs @L_021077b8
    b @L_02107858
@L_021077b8:
    mov r8, r5
    b @L_02107884
@L_021077c0:
    add r1, r6, r10, lsl #2
    ldrb r0, [r1, #1]
    cmp r0, #7
    blo @L_0210782c
    cmp r0, #0xa
    bhi @L_0210782c
    ldrb r0, [r1, #2]
    add r1, r6, r9, lsl #2
    ldrb r3, [r1, #2]
    cmp r0, r3
    blo @L_02107884
    ldrb r2, [r1, #1]
    cmp r2, #7
    blo @L_02107800
    cmp r2, #0xa
    bls @L_02107828
@L_02107800:
    add r0, r6, r9, lsl #2
    ldrb r0, [r0, #3]
    ldrb r12, [r6, r9, lsl #2]
    mov r1, r0, lsl #0x18
    add r2, r12, r2
    add r2, r3, r2
    mov r0, r0, lsl #0x19
    add r0, r2, r0, lsr #25
    adds r0, r0, r1, lsr #31
    bne @L_02107884
@L_02107828:
    b @L_021077b8
@L_0210782c:
    add r0, r6, r10, lsl #2
    ldrb r2, [r0, #2]
    add r1, r6, r9, lsl #2
    ldrb r0, [r1, #2]
    cmp r2, r0
    blo @L_02107870
    ldrb r0, [r11, #0xd0c]
    mov r0, r0, lsl #0x18
    mov r0, r0, lsr #0x1f
    cmp r0, #1
    bne @L_0210786c
@L_02107858:
    mla r0, r9, r4, r7
    bl DWCi_AC_IsSupportWPA
    cmp r0, #0
    moveq r8, r5
    b @L_02107884
@L_0210786c:
    b @L_021077b8
@L_02107870:
    ldrb r0, [r1, #1]
    cmp r0, #7
    blo @L_02107884
    cmp r0, #0xa
    movls r8, r5
@L_02107884:
    cmp r8, #1
    bne @L_02107900
    add r8, r6, r9, lsl #2
    mov r0, r8
    add r1, sp, #0
    mov r2, #4
    bl MIi_CpuCopy32
    mov r1, r8
    add r8, r6, r10, lsl #2
    mov r0, r8
    mov r2, #4
    bl MIi_CpuCopy32
    mov r1, r8
    add r0, sp, #0
    mov r2, #4
    bl MIi_CpuCopy32
    mul r8, r9, r4
    add r0, r7, r8
    add r1, sp, #4
    mov r2, r4
    bl MIi_CpuCopy32
    add r1, r7, r8
    mul r8, r10, r4
    add r0, r7, r8
    mov r2, r4
    bl MIi_CpuCopy32
    add r1, r7, r8
    add r0, sp, #4
    mov r2, r4
    bl MIi_CpuCopy32
    mov r10, r9
@L_02107900:
    subs r9, r9, #1
    bpl @L_02107774
@L_02107908:
    mov r4, #0
    mov r0, r4
    add r1, r6, #0x28
    mov r2, #4
    bl MIi_CpuClear32
    mov r0, r4
    add r1, r7, #0x780
    mov r2, #0xc0
    bl MIi_CpuClear32
    add sp, sp, #0xc4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 DWCi_AC_CallBackWCM(u8 *arg0)
{
    s32 r1;
    u8 *r4;
    s32 v0;
    s32 v1;
    s16 t0;
    s32 t1;
    v0 = DWCi_AC_GetMemPtr(0x10);
    r4 = arg0;
    r1 = *(s16 *)(arg0);
    t0 = *(s16 *)(arg0);
    arg0 = (u8 *)v0;
    if (t0 == 5) {
        if (*(s16 *)(r4 + 0x2) == 0)
            return (s32)arg0;
        r1 = *(s32 *)(r4 + 0x8);
        switch (r1) {
            case 13:
                *(u8 *)(arg0 + 0xD14) = 1;
                return (s32)arg0;
            case 15:
                *(u8 *)(arg0 + 0xD14) = 2;
                return (s32)arg0;
            case 17:
                *(u8 *)(arg0 + 0xD14) = 3;
                return (s32)arg0;
            default:
                *(u8 *)(arg0 + 0xD14) = 4;
                return (s32)arg0;
        }
    } else {
        if (r1 != 7)
            return (s32)arg0;
        t1 = *(s32 *)(r4 + 0x4);
        v1 = DWCi_AC_GetBeacon(t1, r1);
        return v1;
    }
}

extern "C" asm s32 DWCi_AC_CloseNetwork(...)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldrb r0, [r4]
    cmp r0, #0xa
    bhi @L_02107a04
    bl DisConnectAP
    cmp r0, #1
    moveq r0, #0
    streqb r0, [r4]
    moveq r0, #1
    ldmeqia sp!, {r4, pc}
    cmn r0, #1
    bne @L_02107a38
    mov r0, #0x12
    strb r0, [r4]
    mov r0, #1
    ldmia sp!, {r4, pc}
@L_02107a04:
    cmp r0, #0xe
    bne @L_02107a20
    bl DWC_Netcheck_Abort
    bl DWC_Netcheck_Destroy
    mov r0, #0xc
    strb r0, [r4]
    b @L_02107a38
@L_02107a20:
    cmp r0, #0x12
    bhs @L_02107a38
    bl CloseSocket
    cmp r0, #1
    moveq r0, #0xa
    streqb r0, [r4]
@L_02107a38:
    mov r0, #0
    ldmia sp!, {r4, pc}
}

extern "C" s32 DisConnectAP(void)
{
    switch (((s32 (*)(...))WCM_GetPhase)()) {
    case 0:
        return 1;
    case 1:
        ((s32 (*)(...))WCM_Finish)();
        break;
    case 3:
        ((s32 (*)(...))WCM_CleanupAsync)();
        break;
    case 6:
        ((s32 (*)(...))WCM_EndSearchAsync)();
        break;
    case 9:
        ((s32 (*)(...))WCM_DisconnectAsync)();
        break;
    case 12:
        ((s32 (*)(...))WCM_TerminateAsync)();
        break;
    case 11: {
        s32 z = 0;
        ((s32 (*)(...))DWCi_AC_SetError)(z);
        return z - 1;
    }
    }
    return 0;
}

extern "C" s32 CloseSocket(void)
{
    s32 r0;
    s32 v0;
    s32 v1;
    if (*(s32 *)(((u8 *)&SOCLiConfigPtr)) == 0) {
        return 1;
    } else {
        v0 = SOCL_CalmDown();
        if (v0 != 0) {
            return 0;
        } else {
            v1 = SOC_Cleanup();
            r0 = v1;
            if ((r0 == 0 || r0 == -0x27)) {
                r0 = 1;
            } else {
                r0 = 0;
            }
            return r0;
        }
    }
}

extern "C" s32 DWCi_AC_ConnectAP(void)
{
    s32 r0;
    s32 r4;
    s32 v0;
    s32 v2;
    s32 v3;
    v0 = DWCi_AC_GetPhase();
    DWCi_AC_GetMemPtr(0x10);
    r4 = v0;
    switch (r4) {
        case 7:
            v2 = ConnectStart();
            r0 = v2;
            r4 = r0;
            break;
        case 8:
            v3 = ConnectAP();
            r0 = v3;
            r4 = r0;
            break;
    }
    return r4;
}

extern "C" asm s32 ConnectStart(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    ldrb r2, [r5, #0xd13]
    add r3, r5, #0x470
    mov r1, #0xc0
    mla r4, r2, r1, r3
    bl GetConnectType
    add r1, r5, #0xb8
    strb r0, [r5, #0xd0d]
    add r0, r1, #0xc00
    mov r1, #0
    mov r2, #0x52
    bl MI_CpuFill8
    add r2, r5, #0xb8
    ldrb r1, [r5, #0xd0d]
    mov r0, r5
    add r2, r2, #0xc00
    bl GetWepKey
    cmp r0, #0
    ldrb r0, [r5, #0xd0b]
    bic r0, r0, #0xc
    beq @L_02107c0c
    orr r0, r0, #4
    strb r0, [r5, #0xd0b]
    ldrh r0, [r4, #0x2c]
    mov r0, r0, asr #4
    tst r0, #1
    bne @L_02107be0
    ldrb r1, [r5, #0xd13]
    mov r2, #3
    mov r0, #9
    add r1, r5, r1, lsl #2
    strb r2, [r1, #0x444]
    ldmia sp!, {r3, r4, r5, pc}
@L_02107be0:
    ldrb r0, [r5, #0xd0d]
    cmp r0, #6
    ldreqb r0, [r4, #0x15]
    cmpeq r0, #0
    bne @L_02107c3c
    ldrb r1, [r5, #0xd13]
    mov r2, #3
    mov r0, #9
    add r1, r5, r1, lsl #2
    strb r2, [r1, #0x444]
    ldmia sp!, {r3, r4, r5, pc}
@L_02107c0c:
    strb r0, [r5, #0xd0b]
    ldrh r0, [r4, #0x2c]
    mov r0, r0, asr #4
    and r0, r0, #1
    cmp r0, #1
    bne @L_02107c3c
    ldrb r1, [r5, #0xd13]
    mov r2, #3
    mov r0, #9
    add r1, r5, r1, lsl #2
    strb r2, [r1, #0x444]
    ldmia sp!, {r3, r4, r5, pc}
@L_02107c3c:
    mov r0, #0
    strb r0, [r5, #0xd15]
    strb r0, [r5, #0xd14]
    mov r0, #8
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm s32 ConnectAP(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r0
    mov r4, #0
    bl WCM_GetPhase
    ldrb r2, [r8, #0xd13]
    mov r1, #0xc0
    cmp r0, #3
    add r6, r8, #0x470
    smulbb r5, r2, r1
    bne @L_02107d54
    mov r0, r8
    bl GetPowerMode
    ldrb r1, [r8, #0xd15]
    mov r7, r0
    add r0, r1, #1
    and r1, r0, #0xff
    strb r0, [r8, #0xd15]
    cmp r1, #3
    bls @L_02107cb8
    ldrb r0, [r8, #0xd13]
    strb r4, [r8, #0xd15]
    mov r1, #1
    add r0, r8, r0, lsl #2
    strb r1, [r0, #0x444]
    mov r0, #9
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02107cb8:
    cmp r1, #1
    beq @L_02107d30
    ldrb r0, [r8, #0xd14]
    cmp r0, #1
    ldreqb r0, [r8, #0xd0b]
    biceq r0, r0, #0xc
    streqb r0, [r8, #0xd0b]
    beq @L_02107d30
    cmp r0, #2
    bne @L_02107cfc
    ldrb r0, [r8, #0xd13]
    strb r4, [r8, #0xd15]
    mov r1, #3
    add r0, r8, r0, lsl #2
    strb r1, [r0, #0x444]
    mov r0, #9
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02107cfc:
    cmp r0, #3
    bne @L_02107d20
    ldrb r0, [r8, #0xd13]
    strb r4, [r8, #0xd15]
    mov r1, #4
    add r0, r8, r0, lsl #2
    strb r1, [r0, #0x444]
    mov r0, #9
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02107d20:
    cmp r1, #3
    ldreqb r0, [r8, #0xd0b]
    biceq r0, r0, #0xc
    streqb r0, [r8, #0xd0b]
@L_02107d30:
    mov r0, r8
    bl GetAuthMode
    mov r2, r0
    add r1, r8, #0xb8
    add r0, r6, r5
    add r1, r1, #0xc00
    orr r2, r7, r2
    bl WCM_ConnectAsync
    b @L_02107da0
@L_02107d54:
    cmp r0, #9
    bne @L_02107d74
    strb r4, [r8, #0xd15]
    bl OS_GetTick
    str r0, [r8, #0xcb0]
    str r1, [r8, #0xcb4]
    mov r0, #0xa
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02107d74:
    cmp r0, #0xb
    bne @L_02107d8c
    mov r0, r4
    bl DWCi_AC_SetError
    mov r0, #0x11
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02107d8c:
    ble @L_02107da0
    mov r0, #4
    bl DWCi_AC_SetError
    mov r0, #0x11
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02107da0:
    mov r0, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void GetConnectType(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r10, r0
    ldrb r1, [r10, #0xd13]
    mov r9, #0
    add r2, r10, #0x470
    mov r0, #0xc0
    str r9, [sp, #4]
    mla r5, r1, r0, r2
    bl DWCi_AC_GetSearchListNum
    ldrb r1, [r10, #0xd0c]
    mov r8, r0
    mov r0, r1, lsl #0x19
    movs r0, r0, lsr #0x1f
    bne @L_02107ec4
    ldrh r0, [r5, #0xa]
    cmp r0, #0x20
    bne @L_02107e0c
    mov r0, r5
    bl DWCi_AC_CheckNintendoSSID
    cmp r0, #0
    str r0, [sp, #4]
    addgt r9, r9, #1
    strle r9, [sp, #4]
    b @L_02107e2c
@L_02107e0c:
    cmp r0, #8
    bne @L_02107e2c
    mov r0, r5
    bl DWCi_AC_CheckFreespot
    cmp r0, #0
    str r0, [sp, #4]
    addne r9, r9, #1
    streq r9, [sp, #4]
@L_02107e2c:
    cmp r8, #0
    mov r6, #0
    ble @L_02107f28
    add r0, r10, #0x304
    add r4, r10, #0x300
    add r11, r10, #0x10c
    str r0, [sp, #8]
@L_02107e48:
    mov r0, #0x24
    mul r7, r6, r0
    add r0, r10, r7
    str r0, [sp]
    ldrh r2, [r5, #0xa]
    ldrb r0, [r0, #0x303]
    cmp r2, r0
    bne @L_02107eb4
    ldr r1, [sp, #8]
    add r0, r5, #0xc
    add r1, r1, r7
    bl strncmp
    cmp r0, #0
    bne @L_02107eb4
    cmp r9, #0
    ldreq r0, [sp]
    ldreqb r0, [r0, #0x301]
    streq r0, [sp, #4]
    beq @L_02107eb0
    ldrb r0, [r4, r7]
    bic r0, r0, #0xf0
    orr r0, r0, #0x10
    strb r0, [r4, r7]
    ldrb r0, [r11, #0xc00]
    orr r0, r0, #0x40
    strb r0, [r11, #0xc00]
@L_02107eb0:
    add r9, r9, #1
@L_02107eb4:
    add r6, r6, #1
    cmp r6, r8
    blt @L_02107e48
    b @L_02107f28
@L_02107ec4:
    mov r5, r9
    cmp r8, #0
    ble @L_02107f18
    add r3, r10, #0x300
    mov r1, #0x24
@L_02107ed8:
    mul r4, r9, r1
    ldrb r0, [r3, r4]
    mov r2, r0, lsl #0x18
    mov r2, r2, lsr #0x1c
    cmp r2, #1
    bne @L_02107f0c
    cmp r5, #0
    biceq r0, r0, #0xf0
    streqb r0, [r3, r4]
    addeq r0, r10, r4
    ldreqb r0, [r0, #0x301]
    add r5, r5, #1
    streq r0, [sp, #4]
@L_02107f0c:
    add r9, r9, #1
    cmp r9, r8
    blt @L_02107ed8
@L_02107f18:
    cmp r5, #1
    ldreqb r0, [r10, #0xd0c]
    biceq r0, r0, #0x40
    streqb r0, [r10, #0xd0c]
@L_02107f28:
    ldr r0, [sp, #4]
    and r0, r0, #0xff
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 GetPowerMode(u8 *arg0)
{
    if (((u32)(*(u8 *)(arg0 + 0xD0B) << 0x1E) >> 0x1E) == 1) {
        arg0 = (u8 *)0x30000;
    } else {
        arg0 = (u8 *)0x20000;
    }
    return (s32)arg0;
}

extern "C" s32 GetAuthMode(u8 *arg0)
{
    if (((u32)(*(u8 *)(arg0 + 0xD0B) << 0x1C) >> 0x1E) == 1) {
        arg0 = (u8 *)0xC0000;
    } else {
        arg0 = (u8 *)0x80000;
    }
    return (s32)arg0;
}

extern "C" asm void GetWepKey(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r2
    cmp r1, #9
    addls pc, pc, r1, lsl #2
    b @L_02108040
    b @L_02107fb4
    b @L_02107fb0
    b @L_02107fac
    b @L_02107fe0
    b @L_02107fdc
    b @L_02107fd8
    b @L_02107ff4
    b @L_0210801c
    b @L_02108040
    b @L_02108040
@L_02107fac:
    add r0, r0, #0x100
@L_02107fb0:
    add r0, r0, #0x100
@L_02107fb4:
    ldrb r2, [r0, #0xe6]
    add r0, r0, #0x80
    add r1, r4, #2
    mov r2, r2, lsl #0x1e
    mov r3, r2, lsr #0x1e
    mov r2, #0x10
@L_02107fcc:
    strb r3, [r4]
    bl MI_CpuCopy8
    b @L_02108040
@L_02107fd8:
    add r0, r0, #0x100
@L_02107fdc:
    add r0, r0, #0x100
@L_02107fe0:
    mov r3, #1
    add r0, r0, #0xd1
    add r1, r4, #2
    mov r2, #5
    b @L_02107fcc
@L_02107ff4:
    mov r1, #2
    strb r1, [r4]
    ldrb r1, [r0, #0xd13]
    add r0, r0, #0x7c
    add r2, r0, #0x400
    mov r0, #0xc0
    mla r0, r1, r0, r2
    add r1, r4, #2
    bl DWCi_AC_GetNintendoUSBWepKey
    b @L_02108040
@L_0210801c:
    mov r1, #2
    strb r1, [r4]
    ldrb r1, [r0, #0xd13]
    add r0, r0, #0x7c
    add r2, r0, #0x400
    mov r0, #0xc0
    mla r0, r1, r0, r2
    add r1, r4, #2
    bl DWCi_AC_GetNintendoShopWepKey
@L_02108040:
    ldrb r0, [r4]
    cmp r0, #0
    movne r0, #1
    moveq r0, #0
    ldmia sp!, {r4, pc}
}

extern "C" asm void DWC_AC_Create(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    mov r9, #1
    mov r5, #0xcc
    ldr r2, [r10]
    mov r0, r9
    mov r1, r5
    blx r2
    ldr r4, =wcmBuffer
    mov r1, r0
    mov r8, #0
    mov r0, r8
    mov r2, r5
    str r1, [r4, #0xc]
    bl MIi_CpuClear32
    ldr r3, [r4, #0xc]
    ldr r1, [r10]
    ldr r7, =0xd28
    str r1, [r3]
    ldr r2, [r10, #4]
    mov r0, #0x10
    str r2, [r3, #4]
    strb r9, [r3, #9]
    strb r9, [r3, #0x16]
    mov r1, r7
    strb r9, [r3, #8]
    bl DWCi_AC_Alloc
    mov r6, #0x2300
    str r0, [r4, #0x10]
    mov r0, #2
    mov r1, r6
    bl DWCi_AC_Alloc
    mov r5, #0x58
    str r0, [r4]
    mov r0, #4
    mov r1, r5
    bl DWCi_AC_Alloc
    mov r11, #0xc
    str r0, [r4, #4]
    mov r0, #8
    mov r1, r11
    bl DWCi_AC_Alloc
    str r0, [r4, #8]
    ldr r1, [r4, #0x10]
    mov r2, r7
    mov r0, r8
    bl MIi_CpuClear32
    ldr r1, [r4]
    mov r0, r8
    mov r2, r6
    bl MIi_CpuClear32
    ldr r1, [r4, #4]
    mov r2, r5
    mov r0, r8
    bl MIi_CpuClear32
    ldr r1, [r4, #8]
    mov r2, r11
    mov r0, r8
    bl MIi_CpuClear32
    ldrb r1, [r10, #8]
    ldr r0, [r4, #0x10]
    strb r1, [r0, #0xd0a]
    ldrb r2, [r0, #0xd0b]
    ldrb r1, [r10, #9]
    bic r2, r2, #3
    and r1, r1, #3
    orr r1, r2, r1
    strb r1, [r0, #0xd0b]
    ldr r1, [r10, #0xc]
    str r1, [r0, #0xd18]
    ldrb r1, [r10, #0x10]
    strb r1, [r0, #0xd1c]
    ldr r2, [r4, #8]
    ldr r1, [r10]
    str r1, [r2]
    ldr r1, [r10, #4]
    stmib r2, {r1, r8}
    ldrb r2, [r0, #0xd0c]
    ldrb r1, [r10, #0xa]
    bic r2, r2, #0xf
    and r1, r1, #0xf
    orr r1, r2, r1
    strb r1, [r0, #0xd0c]
    and r1, r1, #0xff
    bic r2, r1, #0x10
    ldrb r1, [r10, #0xb]
    mov r1, r1, lsl #0x1c
    mov r1, r1, lsr #0x1c
    mov r1, r1, lsl #0x1f
    orr r1, r2, r1, lsr #27
    strb r1, [r0, #0xd0c]
    and r1, r1, #0xff
    bic r2, r1, #0x20
    ldrb r1, [r10, #0xb]
    mov r1, r1, lsl #0x18
    mov r1, r1, lsr #0x1c
    mov r1, r1, lsl #0x1f
    orr r1, r2, r1, lsr #26
    strb r1, [r0, #0xd0c]
    bl DWCi_BM_GetApInfo
    ldr r0, [r4]
    mov r1, r6
    bl WCM_Init
    cmp r0, #1
    beq @L_02108200
    cmp r0, #4
    ble @L_0210820c
@L_02108200:
    bl DWCi_AC_FreeAll
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0210820c:
    mov r0, r9
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void DWC_AC_Process(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    bl DWCi_AC_GetPhase
    mov r5, r0
    cmp r5, #1
    bne @L_02108264
    bl CheckEULA
    cmp r0, #0
    beq @L_02108258
    bl CheckWirelessPowerON
    cmp r0, #0
    beq @L_02108250
    bl DWCi_AC_Start
@L_0210824c:
    b @L_021082c8
@L_02108250:
    mov r0, #8
    b @L_0210825c
@L_02108258:
    mov r0, #7
@L_0210825c:
    bl DWCi_AC_SetError
    b @L_021082c4
@L_02108264:
    cmp r5, #7
    bhs @L_0210828c
    bl OS_DisableInterrupts
    mov r4, r0
    bl DWCi_AC_SearchAP
    mov r5, r0
    bl DWCi_AC_SetPhase
    mov r0, r4
    bl OS_RestoreInterrupts
    b @L_021082cc
@L_0210828c:
    cmp r5, #9
    bhs @L_0210829c
    bl DWCi_AC_ConnectAP
    b @L_0210824c
@L_0210829c:
    cmp r5, #0xa
    bhs @L_021082ac
    bl DWCi_AC_ConnectRetryAP
    b @L_0210824c
@L_021082ac:
    cmp r5, #0x10
    bhs @L_021082bc
    bl DWCi_AC_ConnectTest
    b @L_0210824c
@L_021082bc:
    cmp r5, #0x11
    bne @L_021082cc
@L_021082c4:
    bl DWCi_AC_Error
@L_021082c8:
    mov r5, r0
@L_021082cc:
    mov r0, r5
    bl DWCi_AC_SetPhase
    cmp r5, #0x10
    bne @L_021082f0
    bl CheckDuplicate
    mov r4, r0
    bl Free_Disused
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
@L_021082f0:
    cmp r5, #0x12
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    bl Free_Disused
    mvn r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 DWC_AC_GetStatus(void)
{
    s32 v0;
    s32 v1;
    v0 = DWCi_AC_GetPhase();
    if ((u32)v0 <= (u32)1)
        return 0;
    if ((u32)v0 < (u32)7)
        return 1;
    if (v0 == 9)
        return 4;
    if ((u32)v0 < (u32)10)
        return 2;
    if (v0 == 0xB)
        return 4;
    if ((u32)v0 < (u32)0x10)
        return 3;
    if (v0 == 0x10)
        return 5;
    if (v0 == 0x11)
        return 4;
    v1 = DWCi_AC_GetResult(v0);
    return v1;
}

extern "C" s32 DWC_AC_GetApType(void)
{
    s32 r0;
    s32 r4;
    s32 v0;
    r4 = 0xFF;
    v0 = DWCi_AC_GetPhase();
    r0 = v0;
    if (((u32)r0 >= (u32)10 && (u32)r0 <= (u32)0x10)) {
        r4 = *(u8 *)(*(u8 * *)(((u8 *)&wcmBuffer) + 0xC) + 0x17);
    }
    return r4;
}

extern "C" s32 DWC_AC_GetApSpotInfo(s32 arg0)
{
    s32 r2;
    s32 r4;
    s32 r5;
    s32 v0;
    r4 = 0;
    v0 = DWCi_AC_GetPhase(arg0);
    r5 = arg0;
    arg0 = v0;
    if ((((u32)arg0 >= (u32)10 && (u32)arg0 <= (u32)0x10) && (r2 = (s32)*(u8 * *)(((u8 *)&wcmBuffer) + 0xC), arg0 = *(u8 *)(*(u8 * *)(((u8 *)&wcmBuffer) + 0xC) + 0x17), (arg0 == 4 || arg0 == 8)))) {
        MI_CpuCopy8((r2 + 0x18), r5, 10);
        r4 = 1;
    }
    return r4;
}

extern "C" u8 DWC_AC_GetSecuritySetting(void)
{
    s32 v0 = DWCi_AC_GetMemPtr(1);
    return *(u8 *)(((u8 *)v0) + 0x23);
}

extern "C" s32 DWC_AC_Destroy(void)
{
    s32 local[1];
    s32 r0;
    s32 v0;
    u8 t0;
    v0 = DWCi_AC_GetPhase();
    *(u8 *)(((u8 *)local)) = v0;
    r0 = (v0 & 0xFF);
    if ((r0 == 0 || r0 == 0x12)) {
        ((s32 (*)(...))DWCi_AC_FreeAll)();
        return 1;
    } else {
        DWCi_AC_CloseNetwork((s32)((u8 *)local));
        t0 = *(u8 *)(((u8 *)local));
        DWCi_AC_SetPhase(t0);
        return 0;
    }
}

extern "C" asm s32 DWC_AC_SetSpecifyApEx(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r0, #1
    mov r6, r1
    mov r5, r2
    bl DWCi_AC_GetMemPtr
    mov r4, r0
    mov r0, #0x10
    bl DWCi_AC_GetMemPtr
    ldr r0, [sp, #0x18]
    mov r2, #0xa
    cmp r0, #0
    beq @L_0210848c
    add r1, r4, #0x18
    bl MI_CpuCopy8
    b @L_02108498
@L_0210848c:
    add r0, r4, #0x18
    mov r1, #0
    bl MI_CpuFill8
@L_02108498:
    ldr r3, [sp, #0x1c]
    mov r0, r7
    mov r1, r6
    mov r2, r5
    strb r3, [r4, #0x22]
    bl DWC_AC_SetSpecifyAp
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" void DWC_AC_SetSpecifyAp(u8 *arg0, s32 arg1, s32 arg2)
{
    u8 *p = (u8 *)((s32 (*)(...))DWCi_AC_GetMemPtr)(0x10);
    s32 i;
    s32 n;
    ((F021084b4 *)(p + 0xD0C))->lo = 1;
    ((s32 (*)(...))MI_CpuFill8)(p, 0, 0xF0);
    for (i = 0; i < 0x20; i++) {
        if (arg0[i] == 0)
            break;
        p[0x40 + i] = arg0[i];
    }
    if (arg1 == 0 || arg2 == 0) {
        ((K021084b4 *)(p + 0xE6))->mode = 0;
        return;
    }
    if (arg2 == 1)
        n = 5;
    else if (arg2 == 2)
        n = 0xD;
    else
        n = 0x10;
    ((s32 (*)(...))MI_CpuCopy8)(arg1, p + 0x80, n);
    ((K021084b4 *)(p + 0xE6))->mode = arg2;
}

extern "C" void DWCi_AC_InsertApInfo(s32 arg0, s32 arg1)
{
    s32 v0 = DWCi_AC_GetMemPtr(0x10, arg1);
    MIi_CpuCopy32(arg1, (v0 + (arg0 << 8)), 0xF0);
}

extern "C" s32 DWCi_AC_InvalidatePriorityWPA(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 v0;
    v0 = DWCi_AC_GetMemPtr(0x10, arg1, arg2, arg3);
    *(u8 *)(((u8 *)v0) + 0xD0C) = (*(u8 *)(((u8 *)v0) + 0xD0C) & -0x81);
    return v0;
}

extern "C" s32 DWCi_AC_Alloc(s32 arg0, s32 arg1)
{
    s32 v0;
    s32 v1;
    s32 t1;
    s32 t2;
    v0 = DWCi_AC_GetMemPtr(1, arg1);
    if ((*(u8 *)(((u8 *)v0) + 0x8) & arg0) != 0)
        return 0;
    t1 = (*(u8 *)(((u8 *)v0) + 0x8) | (arg0 & 0xFF));
    *(u8 *)(((u8 *)v0) + 0x8) = t1;
    t2 = *(s32 *)(((u8 *)v0));
    v1 = ((s32 (*)(...))*(s32 *)(((u8 *)v0)))(1, arg1, t2);
    return v1;
}

extern "C" asm s32 DWCi_AC_Free(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, #1
    mov r7, r0
    mov r0, r4
    mov r6, r1
    mov r5, r2
    bl DWCi_AC_GetMemPtr
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrb r2, [r0, #8]
    tst r2, r7
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mvn r1, r7
    and r1, r1, #0xff
    and r1, r2, r1
    strb r1, [r0, #8]
    ldr r3, [r0, #4]
    mov r0, r4
    mov r1, r6
    mov r2, r5
    blx r3
    cmp r7, #1
    ldreq r0, =wcmBuffer
    moveq r1, #0
    streq r1, [r0, #0xc]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" s32 DWCi_AC_FreeAll(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    u8 *r4;
    s32 r5;
    s32 v0;
    s32 v1;
    s32 v3;
    s32 v5;
    s32 v7;
    v0 = DWCi_AC_GetMemPtr(1, arg1, arg2, arg3);
    if (v0 == 0)
        return v0;
    r4 = (u8 *)v0;
    r5 = 1;
    if ((*(u8 *)(r4 + 0x8) & 0x10) != 0) {
        v1 = DWCi_AC_GetMemPtr(0x10);
        *(u8 *)(r4 + 0x8) = (*(u8 *)(r4 + 0x8) & 0xEF);
        ((s32 (*)(...))*(s32 *)(r4 + 0x4))(r5, v1, 0xD28, *(s32 *)(r4 + 0x4));
    }
    if ((*(u8 *)(r4 + 0x8) & 8) != 0) {
        v3 = DWCi_AC_GetMemPtr(8);
        *(u8 *)(r4 + 0x8) = (*(u8 *)(r4 + 0x8) & 0xF7);
        ((s32 (*)(...))*(s32 *)(r4 + 0x4))(1, v3, 0xC, *(s32 *)(r4 + 0x4));
    }
    if ((*(u8 *)(r4 + 0x8) & 4) != 0) {
        v5 = DWCi_AC_GetMemPtr(4);
        *(u8 *)(r4 + 0x8) = (*(u8 *)(r4 + 0x8) & 0xFB);
        ((s32 (*)(...))*(s32 *)(r4 + 0x4))(1, v5, 0x58, *(s32 *)(r4 + 0x4));
    }
    if ((*(u8 *)(r4 + 0x8) & 2) != 0) {
        v7 = DWCi_AC_GetMemPtr(2);
        *(u8 *)(r4 + 0x8) = (*(u8 *)(r4 + 0x8) & 0xFD);
        ((s32 (*)(...))*(s32 *)(r4 + 0x4))(1, v7, 0x2300, *(s32 *)(r4 + 0x4));
    }
    if ((*(u8 *)(r4 + 0x8) & 1) == 0)
        return *(u8 *)(r4 + 0x8);
    *(u8 *)(r4 + 0x8) = (*(u8 *)(r4 + 0x8) & 0xFE);
    ((s32 (*)(...))*(s32 *)(r4 + 0x4))(1, (s32)r4, 0xCC, *(s32 *)(r4 + 0x4));
    *(s32 *)(wcmBuffer + 0xC) = 0;
    return (s32)wcmBuffer;
}

extern "C" asm s32 DWCi_AC_GetMemPtr(...)
{
    ldr r1, =wcmBuffer
    tst r0, #1
    ldrne r0, [r1, #0xc]
    bxne lr
    tst r0, #2
    ldrne r0, [r1]
    bxne lr
    tst r0, #4
    ldrne r0, [r1, #4]
    bxne lr
    tst r0, #8
    ldrne r0, [r1, #8]
    bxne lr
    tst r0, #0x10
    ldrne r0, [r1, #0x10]
    moveq r0, #0
    bx lr
}

extern "C" s32 DWCi_AC_SetPhase(u8 arg0)
{
    s32 v0;
    s32 v1;
    s32 v2;
    u8 t0;
    u8 t1;
    u8 t2;
    v0 = DWCi_AC_GetMemPtr(1);
    v1 = DWCi_AC_GetMemPtr(0x10);
    *(u8 *)(((u8 *)v0) + 0x9) = arg0;
    if ((u32)arg0 >= (u32)0x10)
        return v1;
    if ((u32)arg0 <= (u32)*(u8 *)(((u8 *)v0) + 0x16))
        return *(u8 *)(((u8 *)v0) + 0x16);
    t0 = *(u8 *)(((u8 *)v0) + 0x16);
    *(u8 *)(((u8 *)v0) + 0x16) = arg0;
    if ((u32)arg0 <= (u32)7)
        return t0;
    t1 = *(u8 *)(((u8 *)v1) + 0xD0D);
    v2 = DWCi_ConvConnectAPType(t1);
    *(u8 *)(((u8 *)v0) + 0x15) = v2;
    t2 = *(u8 *)(((u8 *)(v1 + (*(u8 *)(((u8 *)v1) + 0xD13) << 2))) + 0x444);
    *(u8 *)(((u8 *)v0) + 0x14) = t2;
    return t2;
}

extern "C" asm s32 DWCi_AC_GetPhase(...)
{
    ldr r0, =wcmBuffer
    ldr r0, [r0, #0xc]
    cmp r0, #0
    ldrneb r0, [r0, #9]
    moveq r0, #0
    and r0, r0, #0xff
    bx lr
}

extern "C" void DWCi_AC_SetError(s32 arg0)
{
    s32 v0 = DWCi_AC_GetMemPtr(1);
    *(s32 *)(((u8 *)v0) + 0xC) = arg0;
    s32 v1 = DWCi_AC_GetPhase();
    *(u8 *)(((u8 *)v0) + 0xA) = v1;
}

extern "C" s32 DWCi_AC_GetError(void)
{
    return *(s32 *)(*(u8 * *)(wcmBuffer + 0xC) + 0xC);
}

extern "C" s32 DWCi_AC_SetApType(s32 arg0)
{
    s32 r1;
    s32 r2;
    s32 r5;
    s32 v0;
    s32 v1;
    s32 v4;
    u8 *t0;
    s32 t1;
    r2 = *(u8 *)(*(u8 * *)(((u8 *)&wcmBuffer) + 0xC) + 0x22);
    if (r2 == 0) {
        v0 = DWCi_ConvConnectAPType(arg0);
        r2 = v0;
    }
    t0 = (u8 *)*(s32 *)(((u8 *)&wcmBuffer) + 0xC);
    *(u8 *)(t0 + 0x17) = r2;
    v1 = WCM_GetApEssid(0, (s32)t0);
    arg0 = v1;
    r5 = v1;
    if (r5 != 0) {
        DC_InvalidateRange(arg0, 0x20);
        t1 = (*(s32 *)(((u8 *)&wcmBuffer) + 0xC) + 0x18);
        DWCi_AC_GetPostalCode(r5, t1);
    }
    r1 = 0;
    r2 = *(s32 *)(((u8 *)&wcmBuffer) + 0xC);
    do {
        arg0 = *(s8 *)(((u8 *)(r2 + r1)) + 0x18);
        if ((arg0 < 0x20 || arg0 > 0x7E)) {
            v4 = MI_CpuFill8((r2 + 0x18), 0, 10);
            return v4;
        } else {
            r1 = (r1 + 1);
        }
    } while (r1 < 10);
    return arg0;
}

extern "C" s32 DWCi_AC_CopyExSetting(s32 arg0)
{
    s32 v0;
    s32 v1;
    s32 v2;
    s32 t0;
    v0 = DWCi_AC_GetMemPtr(1);
    v1 = DWCi_AC_GetMemPtr(0x10);
    v2 = DWCi_ConvConnectAPType(arg0);
    t0 = ((u32)(*(u8 *)(((u8 *)(v1 + (v2 << 8))) + 0xE6) << 0x1E) >> 0x1E);
    *(u8 *)(((u8 *)v0) + 0x23) = t0;
    return t0;
}

extern "C" s32 DWCi_ConvConnectAPType(s32 arg0)
{
    if ((u32)arg0 > (u32)2) {
        arg0 = ((arg0 - 3) & 0xFF);
    }
    return arg0;
}

extern "C" void Free_Disused(void)
{
    DWCi_AC_Free(8, *(s32 *)(wcmBuffer + 0x8), 0xC);
    DWCi_AC_Free(0x10, *(s32 *)(wcmBuffer + 0x10), (8 + 0xD20));
}

extern "C" s32 CheckDuplicate(void)
{
    s32 z = 0;
    s32 o;
    u8 *q;
    u8 i;
    u8 me;
    u8 *p;
    u8 n;
    p = *(u8 **)((u8 *)wcmBuffer + 0x10);
    me = p[0xD13];
    q = p + 0x474;
    o = me * 0xC0;
    if (p[0xD0D] >= 6)
        return 1;
    n = p[0xD12];
    for (i = z; i < n; i++) {
        if (i != me && p[(i << 2) + 0x445] < 6) {
            s32 x = i * 0xC0;
            if (((s32 (*)(...))strncmp)(q + o, q + x, *(u16 *)(p + x + 0x47A)) == 0)
                return 2;
        }
    }
    return 1;
}

extern "C" s32 CheckEULA(void)
{
    return 1;
}

extern "C" s32 CheckWirelessPowerON(void)
{
    return 1;
}

extern "C" asm s32 DWC_InitInetEx(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    ldr r4, =_ZZ17DWC_GetInetStatusvE8stateOld
    mov r8, r0
    ldr r2, [r4, #4]
    mov r7, r1
    mov r6, r3
    cmp r2, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    mov r5, #0
    mov r1, r5
    mov r2, #0x68
    bl MI_CpuFill8
    mov r1, #1
    mov r0, r6
    strh r7, [r8, #8]
    strh r1, [r8, #0xa]
    strh r1, [r8, #4]
    strh r5, [r8, #6]
    strb r5, [r8, #0x11]
    str r5, [r8, #0x14]
    strb r5, [r8, #0x10]
    str r8, [r4, #4]
    bl CPS_SetSslHandshakePriority
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" void DWC_InitInet(s32 arg0)
{
    DWC_InitInetEx(arg0, 3, 1, 0x14);
}

extern "C" asm void DWC_SetRwinSize(void)
{
    ldr r1, =_ZZ17DWC_GetInetStatusvE8stateOld
    ldr r1, [r1, #4]
    cmp r1, #0
    cmpne r0, #0x10c0
    bx lr
}

extern "C" asm s32 DWC_ConnectInetAsync(...)
{
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0x14
    ldr r4, =_ZZ17DWC_GetInetStatusvE8stateOld
    ldr r0, [r4, #4]
    cmp r0, #0
    beq @L_02108b94
    ldrh r0, [r0, #4]
    cmp r0, #1
    addne sp, sp, #0x14
    ldmneia sp!, {r4, r5, pc}
    add r5, sp, #0
    mov r1, #0
    mov r0, r5
    mov r2, #0x14
    bl MI_CpuFill8
    ldr r12, [r4, #4]
    ldr r3, =DWC_Alloc
    ldrh r1, [r12, #8]
    ldr r2, =DWC_Free
    mov r0, r5
    strb r1, [sp, #8]
    ldrh r4, [r12, #0xa]
    mov r1, #2
    strb r4, [sp, #9]
    ldr r4, [r12, #0xc]
    str r4, [sp, #0xc]
    str r3, [sp]
    str r2, [sp, #4]
    ldrb r2, [r12, #0x10]
    strb r2, [sp, #0x10]
    strh r1, [r12, #4]
    bl DWC_AC_Create
    cmp r0, #0
    addne sp, sp, #0x14
    ldmneia sp!, {r4, r5, pc}
    ldr r1, =0xffff3be9
    mov r0, #9
    bl DWCi_SetError
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, pc}
@L_02108b94:
    ldr r1, =0xffff3be9
    mov r0, #9
    bl DWCi_SetError
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, pc}
}

extern "C" s32 DWC_DebugConnectInetExAsync(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5)
{
    s32 r6;
    s32 v1;
    s32 v2;
    DWC_ConnectInetAsync(arg0, (s32)arg1, arg2, arg3);
    r6 = (s32)arg1;
    arg1 = (u8 *)*(s32 *)(((u8 *)&_ZZ17DWC_GetInetStatusvE8stateOld) + 0x4);
    if ((s32)arg1 != 0) {
        *(u8 *)(arg1 + 0x11) = 1;
    }
    v1 = DWC_GetInetStatus();
    if (v1 != 2)
        return v1;
    v2 = DWC_AC_SetSpecifyApEx(arg0, r6, arg2, arg3, arg4, arg5);
    return v2;
}

extern "C" s32 DWC_CheckInet(void)
{
    s32 r0;
    u8 *r1;
    s32 r4;
    r1 = (u8 *)*(s32 *)(_ZZ17DWC_GetInetStatusvE8stateOld + 0x4);
    r4 = (s32)_ZZ17DWC_GetInetStatusvE8stateOld;
    if ((s32)r1 == 0) {
        return 0;
    } else {
        r4 = (s32)_ZZ17DWC_GetInetStatusvE8stateOld;
        if (*(s32 *)(r1) != 0) {
            *(u16 *)(r1 + 0x4) = 3;
            DWC_GetInetStatus(3);
            if (*(u8 *)(*(u8 * *)(_ZZ17DWC_GetInetStatusvE8stateOld + 0x4) + 0x11) != 0) {
                r0 = 1;
            } else {
                r0 = 0;
            }
            return r0;
        } else {
            return 0;
        }
    }
}
