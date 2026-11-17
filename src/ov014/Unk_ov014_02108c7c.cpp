#include "ov014/Unk_ov014_02108c7c.hpp"
#include "game/vcall.hpp"
struct E02109958 { u8 a, b, c; u8 lo : 7; u8 hi : 1; };

extern "C" s32 DWC_ProcessInet(s32 arg0);
extern "C" void DWC_GetInetStatus(void);
extern "C" s32 DWC_CleanupInet(void);
extern "C" s32 DWC_CleanupInetAsync(void);
extern "C" s32 DWCi_CheckDisconnected(void);
extern "C" void func_ov014_02109128(void);
extern "C" void DWC_GetApInfo(void);
extern "C" void DWC_UpdateConnection(void);
extern "C" s32 DWCi_AC_Error(void);
extern "C" s32 DWCi_AC_GetResult(void);
extern "C" s32 GetProgramaError(s32 arg0);
extern "C" s32 GetIrregularError(void);
extern "C" s32 GetNotFoundAP(u8 *arg0);
extern "C" s32 GetNotFoundInet(u8 *arg0);
extern "C" s32 DWCi_AC_MakeSearchList(...);
extern "C" s32 DWCi_AC_CheckFreespot(s32 arg0);
extern "C" s32 DWCi_AC_GetSearchListNum(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void MakeAroundList(void);
extern "C" void MakeStealthList(void);
extern "C" void MakeUserList(void);
extern "C" void MakeDifferChannelList(void);
extern "C" u8 CheckDifferChannelStart(u8 *arg0);
extern "C" s32 DWC_AC_StartupGetWDSInfo(s32 arg0, u16 arg1);
extern "C" s32 DWC_AC_ProcessGetWDSInfo(...);
extern "C" void DWC_AC_CancelGetWDSInfo(void);
extern "C" s32 DWC_AC_CleanupGetWDSInfo(s32 arg0);
extern "C" BOOL WDS_IsAvailableForAutoConnect(u8 *arg0);
extern "C" char *WDS_Initialize_CB(void);
extern "C" char *WDS_StartScan_CB(void);
extern "C" char *WDS_EndScan_CB(void);
extern "C" char *WDS_End_CB(void);
extern "C" char *WDS_Error_End_CB(void);
extern "C" void DWCi_AC_ConnectRetryAP(void);
extern "C" void DWCi_AC_SearchAP(void);
extern "C" void DWCi_AC_SetStealthChannel(void);
extern "C" void DWCi_AC_SearchReStart(void);
extern "C" s32 SearchAround1stLap(u8 *arg0);
extern "C" s32 SearchAround2ndLap(...);
extern "C" void SearchAround(void);
extern "C" void SearchDifferChannel(void);
extern "C" void SearchStealth(void);
extern "C" s32 NextSearchCheck(...);
extern "C" void SearchEndCheck(void);
extern "C" s32 CheckStartStealthSearch(u8 *arg0);
extern "C" s8 GetStartChannel(s32 arg0);
extern "C" void GetNextAroundChannel(void);
extern "C" s32 GetNextStealthChannel(...);
extern "C" s32 DWCi_AC_CheckNintendoShopAP(s32 arg0);
extern "C" void DWCi_AC_GetNintendoShopWepKey(s32 arg0, s32 arg1);
extern "C" void DWCi_AC_GetPostalCode(s32 arg0, u8 *arg1);
extern "C" s32 DWCi_AC_CheckNintendoUsbAP(s32 arg0);
extern "C" void DWCi_AC_GetNintendoUSBWepKey(s32 arg0);
extern "C" s32 decodeSSID(...);
extern "C" s32 makeShopWepKey(...);
extern "C" s32 makeUsbWepKey(...);
extern "C" void codetovalue(void);
extern "C" void db64(void);
extern "C" s32 DWCi_AC_Start(void);
extern "C" s32 DWCi_AC_ConnectTest(void);
extern "C" s32 ConnectTestStart(s32 arg0);
extern "C" s32 GetIPAddress(...);
extern "C" s32 ConnectTestCreate(void);
extern "C" s32 ConnectTestProcess(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 ConnectTestEnd(u8 *arg0);
extern "C" s32 ConnectTestRetry(void);
extern "C" s32 MakeSOCConfig(...);
extern "C" void ConvAddress(void);
extern "C" s32 ConvNetMask(s32 arg0);
extern "C" void CheckSetDNS(void);
extern "C" void DWC_Auth_SetCustomNas(s32 arg0);
extern "C" s32 func_ov014_0210b4f4(void);
extern "C" s32 DWC_Auth_Create(u8 *arg0, s32 arg1);
extern "C" s32 DWCi_Auth_StartThread(void);
extern "C" s32 DWC_Auth_Abort(void);
extern "C" s32 DWC_Auth_Destroy(void);
extern "C" void DWC_Auth_Join(void);
extern "C" s32 DWC_Auth_GetError(void);
extern "C" s32 DWC_Auth_GetResult(s32 arg0);
extern "C" s32 DWCi_Auth_Start(...);
extern "C" void DWCi_Auth_Thread(void);

extern "C" char OSi_ThreadInfo[];
extern "C" char data_ov014_02123d90[];
extern "C" char data_ov014_02123d98[];
extern "C" char data_ov014_02123da0[];
extern "C" char data_ov014_02123dac[];
extern "C" char data_ov014_02123de0[];
extern "C" char data_ov014_02123ded[];
extern "C" char data_ov014_02123e00[];
extern "C" char data_ov014_02123e18[];
extern "C" char WCM_Bssid_Any[];
extern "C" char WCM_Essid_Any[];
extern "C" char data_ov014_021247c4[];
extern "C" char data_ov014_021247d0[];
extern "C" char data_ov014_02124838[];
extern "C" char data_ov014_02124844[];
extern "C" char DWCauthhttpparam[];
extern "C" char data_ov014_02124860_b[];
extern "C" char data_ov014_0212487c[];
extern "C" char data_ov014_02126b14[];
extern "C" char _ZZ17DWC_GetInetStatusvE8stateOld[];
extern "C" char gDwcWdsWork[];
extern "C" char DWCiswfcutil[];
extern "C" char data_ov014_02128cb0[];
extern "C" char DWC_auth_wifiinfo[];
extern "C" char SOCLiYieldWait[];
extern "C" void DC_InvalidateRange(void);
extern "C" s32 MI_CpuCopy8(...);
extern "C" s32 MI_CpuFill8(...);
extern "C" s32 OS_CreateThread(...);
extern "C" void OS_DisableInterrupts(void);
extern "C" void OS_GetTick(void);
extern "C" s32 OS_InitMutex(...);
extern "C" s32 OS_IsThreadTerminated(...);
extern "C" s32 OS_LockMutex(...);
extern "C" void OS_RestoreInterrupts(void);
extern "C" s32 OS_Sleep(...);
extern "C" s32 OS_UnlockMutex(...);
extern "C" s32 OS_WakeupThreadDirect(...);
extern "C" void _ll_udiv(void);
extern "C" s32 OS_JoinThread(...);
extern "C" void OS_GetThreadPriority(void);
extern "C" void MIi_CpuClear32(void);
extern "C" void MATH_MD5Init(void);
extern "C" void MATH_MD5Update(void);
extern "C" void MATH_MD5GetHash(void);
extern "C" s32 WDS_GetWorkAreaSize(...);
extern "C" void WDS_End(void);
extern "C" void DWCi_AC_IsSupportWPA(void);
extern "C" void DWCi_AC_CallBackWCM(void);
extern "C" s32 DWCi_AC_CloseNetwork(...);
extern "C" s32 DWC_AC_Process(...);
extern "C" void DWC_AC_GetStatus(void);
extern "C" void DWC_AC_GetApType(void);
extern "C" void DWC_AC_GetApSpotInfo(void);
extern "C" void DWC_AC_GetSecuritySetting(void);
extern "C" s32 DWC_AC_Destroy(...);
extern "C" s32 DWCi_AC_GetMemPtr(...);
extern "C" s32 DWCi_AC_GetPhase(...);
extern "C" s32 DWCi_AC_SetError(...);
extern "C" s32 DWCi_AC_GetError(...);
extern "C" s32 DWCi_AC_SetApType(...);
extern "C" s32 DWCi_AC_CopyExSetting(...);
extern "C" s32 DWCi_ConvConnectAPType(...);
extern "C" void DWC_InitInetEx(void);
extern "C" void DWC_SetRwinSize(void);
extern "C" void DWCi_Auth_ParseHttp(void);
extern "C" void DWCi_Auth_Prepare_FirstPost(void);
extern "C" void DWCi_Auth_SetError(void);
extern "C" void DWC_Http_Create(void);
extern "C" void DWC_Http_FinishHeader(void);
extern "C" void DWC_Http_StartThread(void);
extern "C" s32 DWC_Http_Abort(...);
extern "C" s32 DWC_Http_Destroy(...);
extern "C" s32 DWC_Netcheck_Create(...);
extern "C" s32 DWC_Netcheck_Destroy(...);
extern "C" s32 DWC_Netcheck_Abort(...);
extern "C" s32 DWC_Netcheck_GetError(...);
extern "C" s32 DWC_Netcheck_GetReturnCode(...);
extern "C" void DWCi_BM_GetWiFiInfo(void);
extern "C" void DWCi_SetError(void);
extern "C" s32 DWC_Alloc(...);
extern "C" s32 DWC_Free(...);
extern "C" s32 SOCL_CalmDown(...);
extern "C" void SOC_GetHostID(void);
extern "C" void SOC_SetResolver(void);
extern "C" s32 SOC_Startup(...);
extern "C" s32 SOC_Cleanup(...);
extern "C" void CPS_GetSslHandshakePriority(void);
extern "C" void WCM_StartupAsync(void);
extern "C" void WCM_SearchAsync(void);
extern "C" void WCM_EndSearchAsync(void);
extern "C" s32 WCM_GetPhase(...);
extern "C" void WCM_GetAllowedChannel(void);
extern "C" void WCM_GetApMacAddress(void);
extern "C" void WCM_GetApEssid(void);
extern "C" void WCM_GetLinkLevel(void);
extern "C" s32 memcmp(...);
extern "C" void strcmp(void);
extern "C" s32 strncmp(...);

extern "C" s32 DWC_DebugConnectInetExAsync(...);
extern "C" s32 DWCi_AC_InvalidatePriorityWPA(...);
extern "C" void WCM_DisconnectAsync(void);
extern "C" void WCM_TerminateAsync(void);
extern "C" s32 DWC_ProcessInet(s32 arg0)
{
    u8 *r1;
    s32 v0;
    s32 v5;
    s32 v6;
    u8 *t0;
    s32 t1;
    s32 t3;
    u16 t4;
    s32 t5;
    u8 *t6;
    u8 *t7;
    u8 *t8;
    u8 *t9;
    u16 t10;
    u8 *t11;
    u8 *t12;
    if ((s32)*(u8 * *)(((u8 *)&_ZZ17DWC_GetInetStatusvE8stateOld) + 0x4) == 0)
        return arg0;
    r1 = *(u8 * *)(((u8 *)&_ZZ17DWC_GetInetStatusvE8stateOld) + 0x4);
    arg0 = *(s32 *)(*(u8 * *)(((u8 *)&_ZZ17DWC_GetInetStatusvE8stateOld) + 0x4) + 0x14);
    switch (arg0) {
        case 1:
            *(s32 *)(r1) = 0;
            v0 = DWC_AC_ProcessGetWDSInfo(0, (s32)r1);
            t0 = (u8 *)*(s32 *)(((u8 *)&_ZZ17DWC_GetInetStatusvE8stateOld) + 0x4);
            *(s32 *)(t0 + 0x14) = v0;
            return v0;
        case 2:
            ((s32 (*)(...))DWC_AC_CleanupGetWDSInfo)(arg0, (s32)r1);
            t1 = (s32)(*(u8 * *)(((u8 *)&_ZZ17DWC_GetInetStatusvE8stateOld) + 0x4) + 0x18);
            t3 = (s32)(*(u8 * *)(((u8 *)&_ZZ17DWC_GetInetStatusvE8stateOld) + 0x4) + 0x38);
            t4 = *(u16 *)(*(u8 * *)(((u8 *)&_ZZ17DWC_GetInetStatusvE8stateOld) + 0x4) + 0x5C);
            t5 = *(s32 *)(*(u8 * *)(((u8 *)&_ZZ17DWC_GetInetStatusvE8stateOld) + 0x4) + 0x58);
            DWC_DebugConnectInetExAsync(t1, t3, t5, t4, (s32)(*(u8 * *)(((u8 *)&_ZZ17DWC_GetInetStatusvE8stateOld) + 0x4) + 0x5E), 8);
            DWCi_AC_InvalidatePriorityWPA();
            t6 = (u8 *)*(s32 *)(((u8 *)&_ZZ17DWC_GetInetStatusvE8stateOld) + 0x4);
            *(s32 *)(t6 + 0x14) = 0;
            return (s32)t6;
        case 3:
            ((s32 (*)(...))DWC_AC_CleanupGetWDSInfo)(arg0, (s32)r1);
            t7 = (u8 *)*(s32 *)(((u8 *)&_ZZ17DWC_GetInetStatusvE8stateOld) + 0x4);
            *(s32 *)(t7) = -1;
            t8 = (u8 *)*(s32 *)(((u8 *)&_ZZ17DWC_GetInetStatusvE8stateOld) + 0x4);
            *(u8 *)(t8 + 0x11) = 1;
            arg0 = (s32)t8;
        case 4:
        case 5:
            return arg0;
        case 0:
        default:
            arg0 = *(u16 *)(r1 + 0x4);
            if (arg0 == 2) {
                v5 = DWC_AC_Process(arg0, (s32)r1);
                t9 = (u8 *)*(s32 *)(((u8 *)&_ZZ17DWC_GetInetStatusvE8stateOld) + 0x4);
                *(s32 *)(t9) = v5;
                return v5;
            } else {
                if (arg0 != 4)
                    return arg0;
                if (*(u16 *)(r1 + 0x6) == 0)
                    return *(u16 *)(r1 + 0x6);
                t10 = *(u16 *)(r1 + 0x6);
                v6 = WCM_GetPhase(t10, (s32)r1);
                if (v6 == 9)
                    return v6;
                t11 = (u8 *)*(s32 *)(((u8 *)&_ZZ17DWC_GetInetStatusvE8stateOld) + 0x4);
                *(u16 *)(t11 + 0x6) = 0;
                t12 = (u8 *)*(s32 *)(((u8 *)&_ZZ17DWC_GetInetStatusvE8stateOld) + 0x4);
                *(u16 *)(t12 + 0x4) = 6;
                return (s32)t12;
            }
    }
}

extern "C" asm void DWC_GetInetStatus(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    ldr r4, =_ZZ17DWC_GetInetStatusvE8stateOld
    mov r5, #1
    ldr r1, [r4, #4]
    cmp r1, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r1, #0x14]
    cmp r0, #5
    addls pc, pc, r0, lsl #2
    b @L_02108e4c
    b @L_02108e4c
    b @L_02108e00
    b @L_02108e08
    b @L_02108e10
    b @L_02108e3c
    b @L_02108e44
@L_02108e00:
    mov r0, #2
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02108e08:
    mov r0, #2
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02108e10:
    bl DWC_ProcessInet
    ldr r1, [r4]
    mov r0, #5
    bl DWCi_SetError
    ldr r1, [r4, #4]
    mov r0, #7
    strh r0, [r1, #4]
    ldr r1, [r4, #4]
    mov r2, #4
    str r2, [r1, #0x14]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02108e3c:
    mov r0, #7
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02108e44:
    mov r0, #5
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02108e4c:
    ldrh r0, [r1, #4]
    cmp r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    bl DWC_AC_GetStatus
    mov r6, r0
    cmp r6, #5
    bne @L_02108e88
    ldr r1, [r4, #4]
    mov r0, #4
    strh r0, [r1, #4]
    ldr r1, [r4, #4]
    strh r5, [r1, #6]
    ldr r1, [r4, #4]
    strb r5, [r1, #0x11]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02108e88:
    cmp r6, #0
    bge @L_02108fa8
    cmn r6, #0xa
    blt @L_02108ebc
    ldr r0, [r4, #4]
    ldr r1, =0xffff3be9
    strb r5, [r0, #0x11]
    mov r0, #9
    bl DWCi_SetError
    ldr r1, [r4, #4]
    mov r0, #8
    strh r0, [r1, #4]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02108ebc:
    ldr r0, =0xffff3a59
    cmp r6, r0
    subne r0, r0, #0x64
    cmpne r6, r0
    bne @L_02108ef4
    ldr r0, [r4, #4]
    mov r1, r6
    strb r5, [r0, #0x11]
    mov r0, #5
    bl DWCi_SetError
    ldr r1, [r4, #4]
    mov r0, #7
    strh r0, [r1, #4]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02108ef4:
    ldr r10, [r4, #4]
    ldrb r0, [r10, #0x11]
    cmp r0, #0
    bne @L_02108f80
    ldrh r7, [r10, #8]
    bl CPS_GetSslHandshakePriority
    ldr r1, [r4, #4]
    mov r11, r0
    ldrb r8, [r1, #0x10]
    ldr r9, [r1, #0xc]
    str r6, [r4]
    bl DWC_CleanupInet
    mov r1, r11, lsl #0x10
    mov r3, r1, lsr #0x10
    mov r0, r10
    mov r1, r7
    mov r2, #1
    bl DWC_InitInetEx
    ldr r0, [r4, #4]
    cmp r9, #0
    strb r8, [r0, #0x10]
    beq @L_02108f54
    mov r0, r9
    bl DWC_SetRwinSize
@L_02108f54:
    ldr r0, [r4, #4]
    mov r1, r7
    add r0, r0, #0x18
    bl DWC_AC_StartupGetWDSInfo
    ldr r0, [r4, #4]
    mov r1, #0
    str r5, [r0, #0x14]
    ldr r0, [r4, #4]
    str r1, [r0]
    mov r0, #2
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02108f80:
    ldr r0, [r4]
    cmp r0, r6
    movlt r6, r0
    mov r1, r6
    mov r0, #5
    bl DWCi_SetError
    ldr r1, [r4, #4]
    mov r0, #7
    strh r0, [r1, #4]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02108fa8:
    mov r0, #2
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 DWC_CleanupInet(void)
{
    u8 *r1;
    s32 v1;
    s32 v3;
    s32 v5;
    if (*(s32 *)(((u8 *)&_ZZ17DWC_GetInetStatusvE8stateOld) + 0x4) == 0)
        return (s32)((u8 *)&_ZZ17DWC_GetInetStatusvE8stateOld);
    r1 = (u8 *)*(s32 *)(((u8 *)&_ZZ17DWC_GetInetStatusvE8stateOld) + 0x4);
    if (*(u16 *)(r1 + 0x4) == 1) {
        if (*(s32 *)(r1 + 0x14) == 1) {
            DWC_AC_CancelGetWDSInfo();
            do {
                v1 = DWC_AC_ProcessGetWDSInfo();
            } while ((u32)(v1 - 2) > (u32)2);
            ((s32 (*)(...))DWC_AC_CleanupGetWDSInfo)();
        }
        *(s32 *)(((u8 *)&_ZZ17DWC_GetInetStatusvE8stateOld) + 0x4) = 0;
        return (s32)((u8 *)&_ZZ17DWC_GetInetStatusvE8stateOld);
    } else {
        v3 = DWC_AC_Destroy();
        if (v3 == 0) {
            do {
                OS_Sleep(10);
                v5 = DWC_AC_Destroy();
            } while (v5 == 0);
        }
        *(s32 *)(((u8 *)&_ZZ17DWC_GetInetStatusvE8stateOld) + 0x4) = 0;
        return (s32)((u8 *)&_ZZ17DWC_GetInetStatusvE8stateOld);
    }
}

extern "C" s32 DWC_CleanupInetAsync(void)
{
    s32 r0;
    u8 *r1;
    s32 r5;
    s32 v1;
    s32 v3;
    u8 *t0;
    r5 = 0;
    r1 = (u8 *)*(s32 *)(((u8 *)&_ZZ17DWC_GetInetStatusvE8stateOld) + 0x4);
    if ((s32)r1 == 0) {
        return 1;
    } else {
        r0 = *(u16 *)(r1 + 0x4);
        if (r0 == 8) {
            return 1;
        } else {
            if (r0 == 1) {
                r0 = *(s32 *)(r1 + 0x14);
                if (r0 == 1) {
                    ((s32 (*)(...))DWC_AC_CancelGetWDSInfo)(r0, (s32)r1);
                    t0 = (u8 *)*(s32 *)(((u8 *)&_ZZ17DWC_GetInetStatusvE8stateOld) + 0x4);
                    *(s32 *)(t0 + 0x14) = 5;
                    return r5;
                } else {
                    if (r0 == 5) {
                        v1 = DWC_AC_ProcessGetWDSInfo(r0, (s32)r1);
                        r0 = v1;
                        if (r0 == 1) {
                            return r5;
                        } else {
                            r0 = (r0 - 2);
                            if ((u32)r0 <= (u32)2) {
                                DWC_AC_CleanupGetWDSInfo(r0);
                            }
                        }
                    }
                    *(s32 *)(((u8 *)&_ZZ17DWC_GetInetStatusvE8stateOld) + 0x4) = r5;
                    return 1;
                }
            } else {
                *(u16 *)(r1 + 0x4) = 5;
                v3 = DWC_AC_Destroy(5, (s32)r1);
                if (v3 != 0) {
                    *(s32 *)(((u8 *)&_ZZ17DWC_GetInetStatusvE8stateOld) + 0x4) = r5;
                    r0 = 1;
                } else {
                    r0 = r5;
                }
                return r0;
            }
        }
    }
}

extern "C" s32 DWCi_CheckDisconnected(void)
{
    u8 *r0;
    r0 = (u8 *)*(s32 *)(_ZZ17DWC_GetInetStatusvE8stateOld + 0x4);
    if ((s32)r0 != 0) {
        if (*(u16 *)(r0 + 0x4) == 6)
            return 1;
    }
    return 0;
}

extern "C" void func_ov014_02109128(void)
{
    WCM_GetLinkLevel();
}

extern "C" asm void DWC_GetApInfo(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0xc
    mov r7, #0
    mov r1, r7
    mov r2, #0x40
    mov r4, r0
    bl MI_CpuFill8
    mov r0, #0xff
    str r0, [r4, #4]
    bl DWC_GetInetStatus
    cmp r0, #4
    addne sp, sp, #0xc
    movne r0, r7
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, pc}
    bl DWC_AC_GetApType
    str r0, [r4]
    cmp r0, #0xff
    beq @L_02109184
    cmp r0, #0x63
    ble @L_02109198
@L_02109184:
    mov r0, #0x63
    str r0, [r4]
    add sp, sp, #0xc
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02109198:
    bl OS_DisableInterrupts
    mov r8, r0
    bl WCM_GetApMacAddress
    mov r5, #6
    mov r6, r0
    mov r1, r5
    bl DC_InvalidateRange
    cmp r6, #0
    bne @L_021091d0
    mov r0, r8
    bl OS_RestoreInterrupts
    add sp, sp, #0xc
    mov r0, r7
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_021091d0:
    mov r0, r6
    mov r2, r5
    add r1, r4, #0x37
    bl MI_CpuCopy8
    ldr r0, [r4]
    cmp r0, #2
    bhi @L_0210922c
    add r0, sp, #0
    bl WCM_GetApEssid
    mov r5, r0
    mov r1, #0x20
    bl DC_InvalidateRange
    cmp r5, #0
    bne @L_0210921c
    mov r0, r8
    bl OS_RestoreInterrupts
    add sp, sp, #0xc
    mov r0, r7
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_0210921c:
    ldrh r2, [sp]
    mov r0, r5
    add r1, r4, #0x16
    bl MI_CpuCopy8
@L_0210922c:
    mov r0, r8
    bl OS_RestoreInterrupts
    add r0, sp, #2
    bl DWC_AC_GetApSpotInfo
    cmp r0, #0
    beq @L_02109280
    ldrb r1, [sp, #2]
    mov r0, #0
    cmp r1, #0x30
    blo @L_0210925c
    cmp r1, #0x39
    movls r0, #1
@L_0210925c:
    sub r3, r1, #0x30
    cmp r0, #0
    moveq r3, #0xff
    add r0, sp, #3
    add r1, r4, #0xc
    mov r2, #9
    str r3, [r4, #4]
    bl MI_CpuCopy8
    b @L_02109288
@L_02109280:
    mov r0, #0xff
    str r0, [r4, #4]
@L_02109288:
    bl DWC_AC_GetSecuritySetting
    str r0, [r4, #8]
    mov r0, #1
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" asm void DWC_UpdateConnection(void)
{
    stmdb sp!, {r4, lr}
    bl DWC_ProcessInet
    bl DWCi_CheckDisconnected
    cmp r0, #0
    beq @L_021092fc
    bl DWC_AC_GetApType
    mov r4, r0
    cmp r4, #0xff
    beq @L_021092c8
    cmp r4, #0x63
    bls @L_021092cc
@L_021092c8:
    mov r4, #0x63
@L_021092cc:
    bl WCM_GetPhase
    cmp r0, #0xb
    bne @L_021092e4
    ldr r1, =0xffff298c
    mov r0, #9
    b @L_021092ec
@L_021092e4:
    ldr r1, =0xffff2d10
    mov r0, #8
@L_021092ec:
    sub r1, r1, r4
    bl DWCi_SetError
    mov r0, #1
    ldmia sp!, {r4, pc}
@L_021092fc:
    mov r0, #0
    ldmia sp!, {r4, pc}
}

extern "C" s32 DWCi_AC_Error(void)
{
    s32 v0 = DWCi_AC_GetMemPtr(1);
    s32 v1 = DWCi_AC_CloseNetwork((v0 + 10));
    return (v1 == 1 ? 0x12 : 0x11);
}

extern "C" s32 DWCi_AC_GetResult(void)
{
    s32 r0;
    s32 r4;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;
    s32 v4;
    s32 v5;
    v0 = DWCi_AC_GetMemPtr(1);
    v1 = DWCi_AC_GetError();
    r0 = v1;
    r4 = v0;
    if (r0 < 4) {
        v2 = ((s32 (*)(...))GetProgramaError)();
        return v2;
    } else {
        if (r0 < 5) {
            v3 = GetIrregularError();
            return v3;
        } else {
            if (r0 == 5) {
                v4 = GetNotFoundAP((u8 *)r4);
                return v4;
            } else {
                if (r0 == 7)
                    return -0xC5A7;
                if (r0 == 8)
                    return -0xC60B;
                v5 = GetNotFoundInet((u8 *)r4);
                return v5;
            }
        }
    }
}

extern "C" s32 GetProgramaError(s32 arg0)
{
    switch (arg0) {
        case 1:
            return -9;
        case 0:
            return -10;
        case 2:
            return -8;
        case 3:
            return -7;
        default:
            return 0;
    }
}

extern "C" s32 GetIrregularError(void)
{
    return -6;
}

extern "C" s32 GetNotFoundAP(u8 *arg0)
{
    if (((u32)(*(u8 *)(arg0 + 0xB) << 0x1C) >> 0x1C) == 0) {
        arg0 = (u8 *)-0xC3B3;
    } else {
        arg0 = (u8 *)-0xC79B;
    }
    return (s32)arg0;
}

extern "C" s32 GetNotFoundInet(u8 *arg0)
{
    s32 r1;
    s32 r2;
    s32 r3;
    r1 = *(u8 *)(arg0 + 0x22);
    r2 = *(u8 *)(arg0 + 0x16);
    if (r1 == 0) {
        r1 = *(u8 *)(arg0 + 0x15);
    }
    r1 = (r1 & 0xFF);
    if ((u32)r2 < (u32)10) {
        arg0 = (u8 *)*(u8 *)(arg0 + 0x14);
        if ((s32)arg0 == 3) {
            r3 = (-0xC79C - r1);
        } else {
            if ((s32)arg0 == 4) {
                r3 = ((0 - 0xC800) - r1);
            } else {
                r3 = (-0xC864 - r1);
            }
        }
    } else {
        if ((u32)r2 < (u32)0xD) {
            r3 = (-0xCB20 - r1);
        } else {
            r3 = *(s32 *)(arg0 + 0x10);
            if (r3 == 0) {
                r3 = (-0xC350 - r1);
            } else {
                if (((u32)(*(u8 *)(arg0 + 0xB) << 0x18) >> 0x1C) == 1) {
                    r3 = (-0xCDDC - r1);
                } else {
                    if (r3 == -1) {
                        r3 = (-0xCB84 - r1);
                    } else {
                        if (r3 == (-1 - 1)) {
                            r3 = (-0xCBE8 - r1);
                        } else {
                            if (r3 == (-1 - 2)) {
                                r3 = (-0xCC4C - r1);
                            } else {
                                if (r3 == (-1 - 3)) {
                                    r3 = (-0xCF08 - r1);
                                } else {
                                    if (r3 == (-1 - 4)) {
                                        r3 = (-0xCF6C - r1);
                                    } else {
                                        if (r3 == (-1 - 5)) {
                                            r3 = (-0xCFD0 - r1);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return r3;
}

extern "C" asm s32 DWCi_AC_MakeSearchList(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    mov r0, #0x10
    bl DWCi_AC_GetMemPtr
    mov r5, r0
    cmp r4, #0
    beq @L_02109570
    cmp r4, #1
    beq @L_02109590
    cmp r4, #2
    beq @L_021095b8
    b @L_021095e8
@L_02109570:
    add r1, r5, #0x300
    mov r0, #0
    mov r2, #0x144
    bl MIi_CpuClear32
    mov r0, r5
    bl MakeAroundList
    strb r0, [r5, #0xd10]
    b @L_021095e8
@L_02109590:
    bl MakeDifferChannelList
    strb r0, [r5, #0xd10]
    mov r0, r5
    bl CheckDifferChannelStart
    strb r0, [r5, #0xd0f]
    ldrb r0, [r5, #0xd10]
    cmp r0, #0
    bne @L_021095e8
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_021095b8:
    mov r4, #0
    mov r0, r4
    add r1, r5, #0x300
    mov r2, #0x144
    bl MIi_CpuClear32
    mov r0, r5
    strb r4, [r5, #0xd0f]
    bl MakeStealthList
    strb r0, [r5, #0xd10]
    tst r0, #0xff
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, pc}
@L_021095e8:
    mov r0, #1
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 DWCi_AC_CheckFreespot(s32 arg0)
{
    s32 r5;
    s32 v0;
    s32 v1;
    v0 = DWCi_AC_GetMemPtr(0x10);
    r5 = arg0;
    arg0 = ((u32)(*(u8 *)(((u8 *)v0) + 0xD0C) << 0x1C) >> 0x1C);
    if ((arg0 == 0 || arg0 == 6)) {
        v1 = strncmp((r5 + 0xC), (s32)((u8 *)&data_ov014_02123d98), 8);
        if (v1 == 0)
            return 8;
    }
    return 0;
}

extern "C" s32 DWCi_AC_GetSearchListNum(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 v0 = DWCi_AC_GetMemPtr(0x10, arg1, arg2, arg3);
    arg0 = v0;
    arg1 = 0x24;
    arg3 = 0;
    do {
        if (*(u8 *)(((u8 *)((arg3 * arg1) + arg0)) + 0x303) == 0)
            break;
        arg3 = ((arg3 + 1) & 0xFF);
    } while ((u32)arg3 < (u32)9);
    return arg3;
}

extern "C" asm void MakeAroundList(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r0
    add r4, r5, #0x300
    bl MakeUserList
    ldrb r1, [r5, #0xd0c]
    mov r6, r0
    mov r0, #0x24
    mla r4, r6, r0, r4
    mov r1, r1, lsl #0x1c
    movs r0, r1, lsr #0x1c
    cmpne r0, #6
    bne @L_021096d4
    mov r5, #8
    ldr r0, =data_ov014_02123d98
    mov r2, r5
    add r1, r4, #4
    bl MI_CpuCopy8
    strb r5, [r4, #3]
    add r0, r6, #1
    strb r5, [r4, #1]
    and r6, r0, #0xff
@L_021096d4:
    mov r0, r6
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void MakeStealthList(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r0
    add r5, r6, #0x300
    bl MakeUserList
    ldrb r1, [r6, #0xd0c]
    mov r4, r0
    mov r0, #0x24
    mla r5, r4, r0, r5
    mov r1, r1, lsl #0x1c
    movs r0, r1, lsr #0x1c
    cmpne r0, #4
    bne @L_0210973c
    mov r7, #8
    ldr r0, =data_ov014_021247c4
    mov r2, r7
    add r1, r5, #4
    bl MI_CpuCopy8
    add r0, r4, #1
    strb r7, [r5, #3]
    mov r1, #6
    strb r1, [r5, #1]
    and r4, r0, #0xff
    add r5, r5, #0x24
@L_0210973c:
    ldrb r0, [r6, #0xd0c]
    mov r0, r0, lsl #0x1c
    movs r0, r0, lsr #0x1c
    cmpne r0, #7
    bne @L_0210977c
    mov r7, #8
    ldr r0, =data_ov014_02123d90
    mov r2, r7
    add r1, r5, #4
    bl MI_CpuCopy8
    add r0, r4, #1
    strb r7, [r5, #3]
    mov r1, #9
    strb r1, [r5, #1]
    and r4, r0, #0xff
    add r5, r5, #0x24
@L_0210977c:
    ldrb r0, [r6, #0xd0c]
    mov r0, r0, lsl #0x1c
    movs r0, r0, lsr #0x1c
    cmpne r0, #8
    bne @L_021097b8
    mov r6, #0xb
    ldr r0, =data_ov014_02123da0
    mov r2, r6
    add r1, r5, #4
    bl MI_CpuCopy8
    add r0, r4, #1
    strb r6, [r5, #3]
    mov r1, #0xa
    strb r1, [r5, #1]
    and r4, r0, #0xff
@L_021097b8:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void MakeUserList(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r2, #0
    mov r3, r0
    mov r1, r2
    add r12, r0, #0x300
@L_021097e0:
    ldrb r4, [r0, #0xd0c]
    mov r4, r4, lsl #0x1c
    movs r5, r4, lsr #0x1c
    beq @L_021097fc
    add r4, r1, #1
    cmp r5, r4
    bne @L_021098b8
@L_021097fc:
    ldrb r4, [r3, #0xe7]
    cmp r4, #0xff
    beq @L_021098b8
    mov r6, #0
@L_0210980c:
    add r4, r3, r6
    ldrb lr, [r4, #0x40]
    cmp lr, #0
    beq @L_02109834
    add r4, r6, #1
    add r5, r12, r6
    and r6, r4, #0xff
    strb lr, [r5, #4]
    cmp r6, #0x20
    blo @L_0210980c
@L_02109834:
    cmp r6, #0
    strneb r6, [r12, #3]
    movne r4, #1
    strneb r1, [r12, #1]
    moveq r4, #0
    cmp r4, #0
    addne r2, r2, #1
    ldrb r4, [r3, #0xe7]
    andne r2, r2, #0xff
    addne r12, r12, #0x24
    cmp r4, #1
    bne @L_021098b8
    mov r6, #0
@L_02109868:
    add r4, r3, r6
    ldrb r5, [r4, #0x60]
    cmp r5, #0
    beq @L_02109890
    add lr, r6, #1
    add r4, r12, r6
    and r6, lr, #0xff
    strb r5, [r4, #4]
    cmp r6, #0x20
    blo @L_02109868
@L_02109890:
    cmp r6, #0
    movne r4, #1
    strneb r6, [r12, #3]
    addne lr, r1, #3
    moveq r4, #0
    strneb lr, [r12, #1]
    cmp r4, #0
    addne r2, r2, #1
    andne r2, r2, #0xff
    addne r12, r12, #0x24
@L_021098b8:
    add r1, r1, #1
    cmp r1, #3
    add r3, r3, #0x100
    blt @L_021097e0
    mov r0, r2
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void MakeDifferChannelList(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldrb r1, [r0, #0xd12]
    mov r2, #0
    mov r3, r2
    cmp r1, #0
    ble @L_02109950
    add r1, r0, #0x47
    add r1, r1, #0x400
    mov r12, #0xc0
@L_021098f4:
    add r4, r0, r3, lsl #2
    ldrb r4, [r4, #0x444]
    cmp r4, #0
    bne @L_02109934
    mla r4, r3, r12, r0
    add lr, r4, #0x400
    ldrh r4, [lr, #0xa6]
    ldrb lr, [r1, r3, lsl #2]
    sub r5, r4, #1
    mov r4, lr, lsl #0x19
    cmp r5, r4, lsr #25
    bicne lr, lr, #0x80
    addne r2, r2, #1
    strneb lr, [r1, r3, lsl #2]
    andne r2, r2, #0xff
    bne @L_02109940
@L_02109934:
    ldrb lr, [r1, r3, lsl #2]
    orr lr, lr, #0x80
    strb lr, [r1, r3, lsl #2]
@L_02109940:
    ldrb lr, [r0, #0xd12]
    add r3, r3, #1
    cmp r3, lr
    blt @L_021098f4
@L_02109950:
    mov r0, r2
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" u8 CheckDifferChannelStart(u8 *arg0)
{
    u8 i;
    u8 r = 0;
    for (i = 0; i < arg0[0xD12]; i++) {
        if (!((E02109958 *)(arg0 + 0x444))[i].hi) {
            r = i;
            break;
        }
    }
    return r;
}

extern "C" s32 DWC_AC_StartupGetWDSInfo(s32 arg0, u16 arg1)
{
    s32 v0 = WDS_GetWorkAreaSize(arg0, arg1);
    s32 v1 = DWC_Alloc(1, v0);
    *(s32 *)(gDwcWdsWork + 0x4) = v1;
    s32 v2 = DWC_Alloc(1, 0x794);
    *(s32 *)(gDwcWdsWork) = v2;
    MI_CpuFill8(v2, 0, 0x794);
    *(s32 *)(*(u8 * *)(gDwcWdsWork)) = arg0;
    *(u16 *)(*(u8 * *)(gDwcWdsWork) + 0x4) = arg1;
    *(s32 *)(gDwcWdsWork + 0x8) = 0;
    return 1;
}

extern "C" asm s32 DWC_AC_ProcessGetWDSInfo(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    ldr r5, [pc, #0x2c0]
    ldr r0, [r5, #4]
    cmp r0, #0
    ldrne r2, [r5]
    cmpne r2, #0
    moveq r0, #3
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r1, [r5, #8]
    mov r6, #1
    cmp r1, #0xb
    addls pc, pc, r1, lsl #2
    b @L_02109cd0
    dcd 0xea00000a
    dcd 0xea0000a1
    dcd 0xea00000d
    dcd 0xea00009f
    dcd 0xea00001f
    dcd 0xea000032
    dcd 0xea00009c
    dcd 0xea000037
    dcd 0xea00009a
    dcd 0xea000066
    dcd 0xea00008f
    dcd 0xea000096
    dcd 0xe5856008
    dcd 0xe1d220b4
    dcd 0xe59f125c
    dcd 0xebfff515
    dcd 0xea00008d
    dcd 0xe59f0254
    dcd 0xe3a01003
    dcd 0xe5851008
    dcd 0xebfff541
    dcd 0xe3500000
    dcd 0x1a00000a
    dcd 0xe5951000
    dcd 0xe591000c
    dcd 0xe5912008
    dcd 0xe3500000
    dcd 0x03520000
    dcd 0x1a000086
    dcd 0xebfbf7e0
    dcd 0xe5952000
    dcd 0xe5820008
    dcd 0xe582100c
    dcd 0xea000081
    dcd 0xe3a0000a
    dcd 0xe5850008
    dcd 0xea00007e
    dcd 0xebfbf7d8
    dcd 0xe5954000
    dcd 0xe3a03000
    dcd 0xe5942008
    dcd 0xe594400c
    dcd 0xe0507002
    dcd 0xe0c10004
    dcd 0xe1a01300
    dcd 0xe59f21e8
    dcd 0xe1811d27
    dcd 0xe1a00307
    dcd 0xebfc62f3
    dcd 0xe59f21dc
    dcd 0xe3510000
    dcd 0x01500002
    dcd 0x33a00002
    dcd 0x35850008
    dcd 0x23a00005
    dcd 0x25850008
    dcd 0xea00006a
    dcd 0xe59f01c0
    dcd 0xe3a01006
    dcd 0xe5851008
    dcd 0xebfff547
    dcd 0xe3500000
    dcd 0x13a0000a
    dcd 0xea000060
    dcd 0xe2820010
    dcd 0xebfff577
    dcd 0xe3500000
    dcd 0x13a0000a
    dcd 0xe3a04000
    dcd 0x15850008
    dcd 0xe59f9178
    dcd 0xe2441001
    dcd 0xe5990000
    dcd 0xe1a05004
    dcd 0xe5801790
    dcd 0xe3a08078
@L_02109b70:
    mul r7, r4, r8
    ldr r2, [r9]
    add r1, r2, r7
    ldr r0, [r1, #0x10]
    cmp r0, #0
    beq @L_02109bd4
    ldrb r0, [r1, #0x7c]
    tst r0, #2
    beq @L_02109bd4
    ldrb r0, [r1, #0x7b]
    cmp r0, #3
    bhi @L_02109bd4
    add r0, r2, #0x36
    add r0, r0, r7
    bl WDS_IsAvailableForAutoConnect
    cmp r0, #0
    beq @L_02109bd4
    ldr r1, [r9]
    add r0, r1, r7
    ldrh r0, [r0, #0x14]
    cmp r0, r5
    strhs r4, [r1, #0x790]
    ldrhs r0, [r9]
    addhs r0, r0, r7
    ldrhsh r5, [r0, #0x14]
@L_02109bd4:
    add r4, r4, #1
    cmp r4, #0x10
    blt @L_02109b70
    ldr r4, [pc, #0xf0]
    mov r1, #8
    ldr r0, [pc, #0x100]
    str r1, [r4, #8]
    bl WDS_End
    cmp r0, #0
    movne r0, #0xb
    strne r0, [r4, #8]
    b @L_02109cd0
    dcd 0xe5921790
    dcd 0xe3510000
    dcd 0xb3a0000b
    dcd 0xb5850008
    dcd 0xba00002d
    dcd 0xe2820016
    dcd 0xe3a04078
    dcd 0xe0200491
    dcd 0xe3a06020
    dcd 0xe5921000
    dcd 0xe1a02006
    dcd 0xebfbfe0b
    dcd 0xe5950000
    dcd 0xe1a02006
    dcd 0xe5901000
    dcd 0xe5903790
    dcd 0xe280005a
    dcd 0xe0200493
    dcd 0xe2811020
    dcd 0xebfbfe03
    dcd 0xe5951000
    dcd 0xe3a0200a
    dcd 0xe5913790
    dcd 0xe5910000
    dcd 0xe0211493
    dcd 0xe5d1107b
    dcd 0xe5801040
    dcd 0xe5951000
    dcd 0xe5913790
    dcd 0xe5910000
    dcd 0xe0211493
    dcd 0xe1d118b2
    dcd 0xe1c014b4
    dcd 0xe5950000
    dcd 0xe5901000
    dcd 0xe5903790
    dcd 0xe2800036
    dcd 0xe0200493
    dcd 0xe2811046
    dcd 0xebfbfdef
    dcd 0xe3a06002
    dcd 0xea000008
    dcd 0xe59f0040
    dcd 0xe3a01008
    dcd 0xe5851008
    dcd 0xebfff4a7
    dcd 0xe3500000
    dcd 0x13a0000b
    dcd 0x15850008
    dcd 0xea000000
    dcd 0xe3a06003
@L_02109cd0:
    mov r0, r6
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    dcd gDwcWdsWork
    dcd WDS_Initialize_CB
    dcd WDS_StartScan_CB
    dcd 0x000082ea
    dcd 0x00000bb8
    dcd WDS_EndScan_CB
    dcd WDS_End_CB
    dcd WDS_Error_End_CB
}

extern "C" void DWC_AC_CancelGetWDSInfo(void)
{
    if (*(s32 *)(gDwcWdsWork + 0x8) == 4)
        *(s32 *)(gDwcWdsWork + 0x8) = 5;
    return;
}

extern "C" s32 DWC_AC_CleanupGetWDSInfo(s32 arg0)
{
    s32 r1;
    s32 v0;
    s32 v1;
    s32 t0;
    r1 = *(s32 *)(((u8 *)&gDwcWdsWork) + 0x4);
    if (r1 != 0) {
        v0 = DWC_Free(1, r1, 0);
        *(s32 *)(((u8 *)&gDwcWdsWork) + 0x4) = 0;
        arg0 = v0;
    }
    if (*(s32 *)(((u8 *)&gDwcWdsWork)) == 0)
        return arg0;
    t0 = *(s32 *)(((u8 *)&gDwcWdsWork));
    v1 = DWC_Free(1, t0, 0);
    *(s32 *)(((u8 *)&gDwcWdsWork)) = 0;
    return v1;
}

extern "C" BOOL WDS_IsAvailableForAutoConnect(u8 *arg0)
{
    s32 i;
    for (i = 0; i < 10; i++) {
        if (arg0[i] < 0x20 || arg0[i] > 0x7E)
            return FALSE;
    }
    return TRUE;
}

extern "C" char *WDS_Initialize_CB(void)
{
    *(s32 *)(gDwcWdsWork + 0x8) = 2;
    return gDwcWdsWork;
}

extern "C" char *WDS_StartScan_CB(void)
{
    *(s32 *)(gDwcWdsWork + 0x8) = 4;
    return gDwcWdsWork;
}

extern "C" char *WDS_EndScan_CB(void)
{
    *(s32 *)(gDwcWdsWork + 0x8) = 7;
    return gDwcWdsWork;
}

extern "C" char *WDS_End_CB(void)
{
    *(s32 *)(gDwcWdsWork + 0x8) = 9;
    return gDwcWdsWork;
}

extern "C" char *WDS_Error_End_CB(void)
{
    *(s32 *)(gDwcWdsWork + 0x8) = 0xB;
    return gDwcWdsWork;
}

extern "C" asm void DWCi_AC_ConnectRetryAP(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r0, #0x10
    bl DWCi_AC_GetMemPtr
    mov r4, r0
    mov r5, #9
    bl WCM_GetPhase
    cmp r0, #0xc
    addls pc, pc, r0, lsl #2
    b @L_02109ecc
    b @L_02109ecc
    b @L_02109ecc
    b @L_02109ecc
    b @L_02109e58
    b @L_02109ecc
    b @L_02109ecc
    b @L_02109ea4
    b @L_02109ecc
    b @L_02109ecc
    b @L_02109eac
    b @L_02109ecc
    b @L_02109ec0
    b @L_02109eb4
@L_02109e58:
    ldrb r0, [r4, #0xd0c]
    ldrb r5, [r4, #0xd0e]
    mov r0, r0, lsl #0x19
    mov r0, r0, lsr #0x1f
    cmp r0, #1
    bne @L_02109e88
    ldrb r0, [r4, #0xd13]
    mov r1, #0
    mov r5, #7
    add r0, r4, r0, lsl #2
    strb r1, [r0, #0x444]
    b @L_02109ecc
@L_02109e88:
    cmp r5, #3
    blo @L_02109ecc
    cmp r5, #5
    bhi @L_02109ecc
    mov r0, r5
    bl DWCi_AC_SearchReStart
    b @L_02109ecc
@L_02109ea4:
    bl WCM_EndSearchAsync
    b @L_02109ecc
@L_02109eac:
    bl WCM_DisconnectAsync
    b @L_02109ecc
@L_02109eb4:
    bl WCM_TerminateAsync
    mov r0, #4
    b @L_02109ec4
@L_02109ec0:
    mov r0, #0
@L_02109ec4:
    bl DWCi_AC_SetError
    mov r5, #0x11
@L_02109ecc:
    mov r0, r5
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void DWCi_AC_SearchAP(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r0, #0x10
    bl DWCi_AC_GetMemPtr
    mov r4, r0
    bl DWCi_AC_GetPhase
    mov r5, r0
    bl WCM_GetPhase
    cmp r5, #2
    cmpeq r0, #3
    bne @L_02109f48
    bl WCM_GetAllowedChannel
    mov r2, #0
    mov r1, #0x1000
@L_02109f08:
    tst r0, r1, asr r2
    bne @L_02109f1c
    add r2, r2, #1
    cmp r2, #0xc
    ble @L_02109f08
@L_02109f1c:
    rsb r0, r2, #0xd
    add r1, r4, #0xd00
    strh r0, [r1, #0x1e]
    mov r2, #0x12c
    mov r0, r4
    strh r2, [r1, #0x22]
    mov r2, #0x96
    strh r2, [r1, #0x24]
    bl SearchAround1stLap
@L_02109f40:
    mov r5, r0
    b @L_02109ff0
@L_02109f48:
    cmp r5, #6
    bne @L_02109f60
    mov r0, r4
    mov r1, r5
    bl SearchEndCheck
    b @L_02109f40
@L_02109f60:
    cmp r0, #3
    beq @L_02109f70
    cmp r0, #6
    bne @L_02109fc4
@L_02109f70:
    mov r0, r4
    mov r1, r5
    bl SearchEndCheck
    mov r5, r0
    cmp r5, #7
    beq @L_02109ff0
    cmp r5, #3
    bne @L_02109f9c
    mov r0, r4
    bl SearchAround
    b @L_02109f40
@L_02109f9c:
    cmp r5, #4
    bne @L_02109fb0
    mov r0, r4
    bl SearchDifferChannel
    b @L_02109f40
@L_02109fb0:
    cmp r5, #5
    bne @L_02109ff0
    mov r0, r4
    bl SearchStealth
    b @L_02109f40
@L_02109fc4:
    cmp r0, #0xb
    bne @L_02109fdc
    mov r0, #0
    bl DWCi_AC_SetError
    mov r0, #0x11
    ldmia sp!, {r3, r4, r5, pc}
@L_02109fdc:
    ble @L_02109ff0
    mov r0, #4
    bl DWCi_AC_SetError
    mov r0, #0x11
    ldmia sp!, {r3, r4, r5, pc}
@L_02109ff0:
    mov r0, r5
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void DWCi_AC_SetStealthChannel(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    mov r0, #0x10
    bl DWCi_AC_GetMemPtr
    add r1, r0, #0xd00
    ldrh r1, [r1, #0x1e]
    add r0, r0, #0xd00
    ldrh r3, [r0, #0x16]
    cmp r4, r1
    movhi r4, r1
    sub r1, r4, #1
    mov r2, #1
    orr r1, r3, r2, lsl r1
    strh r1, [r0, #0x16]
    ldmia sp!, {r4, pc}
}

extern "C" asm void DWCi_AC_SearchReStart(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r0
    mov r0, #0x10
    bl DWCi_AC_GetMemPtr
    mov r4, r0
    cmp r5, #3
    beq @L_0210a064
    cmp r5, #4
    beq @L_0210a094
    cmp r5, #5
    beq @L_0210a13c
    ldmia sp!, {r4, r5, r6, pc}
@L_0210a064:
    bl OS_GetTick
    str r0, [r4, #0xcb0]
    str r1, [r4, #0xcb4]
    add r0, r4, #0xd00
    ldrsb r2, [r0, #0x11]
    ldr r1, =data_ov014_02123dac
    ldr r0, =WCM_Bssid_Any
    ldr r2, [r1, r2, lsl #2]
    ldr r1, =WCM_Essid_Any
    orr r2, r2, #0x200000
    bl WCM_SearchAsync
    ldmia sp!, {r4, r5, r6, pc}
@L_0210a094:
    ldrb r1, [r4, #0xd0f]
    mov r0, #0xc0
    mov r5, #1
    mla r0, r1, r0, r4
    add r0, r0, #0x400
    ldrh r0, [r0, #0xa6]
    sub r0, r0, #1
    mov r0, r5, lsl r0
    mov r6, r0, lsl #0x10
    bl WCM_GetAllowedChannel
    tst r0, r6, lsr #16
    moveq r5, #0
    cmp r5, #1
    bne @L_0210a120
    bl OS_GetTick
    str r0, [r4, #0xcb0]
    str r1, [r4, #0xcb4]
    ldrb r2, [r4, #0xd0f]
    mov r0, #0xc0
    add r1, r4, #0x74
    smulbb r5, r2, r0
    add r0, r4, r5
    add r0, r0, #0x400
    ldrh r2, [r0, #0xa6]
    add r0, r4, #0x7c
    add r4, r1, #0x400
    sub r1, r2, #1
    orr r1, r1, #0x300000
    add r3, r0, #0x400
    mov r2, r1, lsl #0x10
    add r0, r4, r5
    add r1, r3, r5
    mov r2, r2, lsr #0x10
    bl WCM_SearchAsync
    ldmia sp!, {r4, r5, r6, pc}
@L_0210a120:
    ldrb r1, [r4, #0xd0f]
    add r0, r4, #0x47
    add r2, r0, #0x400
    ldrb r0, [r2, r1, lsl #2]
    orr r0, r0, #0x80
    strb r0, [r2, r1, lsl #2]
    ldmia sp!, {r4, r5, r6, pc}
@L_0210a13c:
    bl OS_GetTick
    str r0, [r4, #0xcb0]
    str r1, [r4, #0xcb4]
    add r2, r4, #0xd00
    ldrb r3, [r4, #0xd0f]
    add r1, r4, #0x304
    mov r0, #0x24
    mla r1, r3, r0, r1
    ldrsb r3, [r2, #0x11]
    ldr r2, =data_ov014_02123dac
    ldr r0, =WCM_Bssid_Any
    ldr r2, [r2, r3, lsl #2]
    orr r2, r2, #0x300000
    bl WCM_SearchAsync
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 SearchAround1stLap(u8 *arg0)
{
    *(u64 *)(arg0 + 0xCB0) = ((u64 (*)(void))OS_GetTick)();
    arg0[0xD11] = ((u8 (*)(s32))GetStartChannel)(0);
    *(u64 *)(arg0 + 0xCB0) = ((u64 (*)(void))OS_GetTick)();
    ((void (*)(void *, void *, u32))WCM_SearchAsync)(WCM_Bssid_Any, WCM_Essid_Any,
        ((u32 *)data_ov014_02123dac)[*(s8 *)(arg0 + 0xD11)] | 0x200000);
    return 3;
}

extern "C" asm s32 SearchAround2ndLap(...)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldrb r2, [r4, #0xd0b]
    mov r0, #0
    strb r0, [r4, #0xd15]
    mov r1, r2, lsl #0x18
    mov r1, r1, lsr #0x1c
    add r1, r1, #1
    and r1, r1, #0xff
    bic r2, r2, #0xf0
    mov r1, r1, lsl #0x1c
    orr r1, r2, r1, lsr #24
    strb r1, [r4, #0xd0b]
    bl DWCi_AC_MakeSearchList
    mov r0, #1
    bl GetStartChannel
    strb r0, [r4, #0xd11]
    mov r0, #3
    ldmia sp!, {r4, pc}
}

extern "C" asm void SearchAround(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    bl OS_GetTick
    ldr r2, [r4, #0xcb0]
    mov r5, #0
    subs r12, r0, r2
    ldr r0, [r4, #0xcb4]
    ldr r2, =0x82ea
    sbc r0, r1, r0
    mov r1, r0, lsl #6
    mov r3, r5
    orr r1, r1, r12, lsr #26
    mov r0, r12, lsl #6
    bl _ll_udiv
    add r2, r4, #0xd00
    ldrh r3, [r2, #0x22]
    cmp r1, r3, asr #31
    cmpeq r0, r3
    blo @L_0210a2d8
    ldrsb r0, [r2, #0x11]
    bl GetNextAroundChannel
    strb r0, [r4, #0xd11]
    add r0, r4, #0xd00
    ldrsb r1, [r0, #0x11]
    sub r0, r5, #1
    cmp r1, r0
    bne @L_0210a2ac
    mov r0, r4
    mov r1, #3
    bl NextSearchCheck
    ldmia sp!, {r3, r4, r5, pc}
@L_0210a2ac:
    bl OS_GetTick
    add r2, r4, #0xd00
    ldrsb r3, [r2, #0x11]
    ldr r2, =data_ov014_02123dac
    str r0, [r4, #0xcb0]
    ldr r2, [r2, r3, lsl #2]
    str r1, [r4, #0xcb4]
    ldr r0, =WCM_Bssid_Any
    ldr r1, =WCM_Essid_Any
    orr r2, r2, #0x200000
    bl WCM_SearchAsync
@L_0210a2d8:
    mov r0, #3
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void SearchDifferChannel(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    bl OS_GetTick
    ldr r2, [r4, #0xcb0]
    ldr r3, [r4, #0xcb4]
    subs r5, r0, r2
    sbc r0, r1, r3
    mov r1, r0, lsl #6
    ldr r2, =0x82ea
    orr r1, r1, r5, lsr #26
    mov r0, r5, lsl #6
    mov r3, #0
    bl _ll_udiv
    add r2, r4, #0xd00
    ldrh r2, [r2, #0x24]
    cmp r1, r2, asr #31
    cmpeq r0, r2
    bhs @L_0210a354
    ldrb r0, [r4, #0xd0f]
    add r0, r4, r0, lsl #2
    ldrb r0, [r0, #0x447]
    mov r0, r0, lsl #0x18
    mov r0, r0, lsr #0x1f
    cmp r0, #1
    bne @L_0210a46c
@L_0210a354:
    ldrb r1, [r4, #0xd0f]
    add r0, r4, #0x47
    add r2, r0, #0x400
    ldrb r0, [r2, r1, lsl #2]
    orr r0, r0, #0x80
    strb r0, [r2, r1, lsl #2]
    ldrb r2, [r4, #0xd12]
    ldrb r1, [r4, #0xd0f]
    cmp r1, r2
    bhs @L_0210a3ac
@L_0210a37c:
    add r0, r4, r1, lsl #2
    ldrb r0, [r0, #0x447]
    mov r0, r0, lsl #0x18
    movs r0, r0, lsr #0x1f
    beq @L_0210a3ac
    ldrb r0, [r4, #0xd0f]
    ldrb r2, [r4, #0xd12]
    add r0, r0, #1
    and r1, r0, #0xff
    strb r0, [r4, #0xd0f]
    cmp r1, r2
    blo @L_0210a37c
@L_0210a3ac:
    cmp r2, r1
    bhi @L_0210a3cc
    mov r2, #0
    mov r0, r4
    mov r1, #4
    strb r2, [r4, #0xd0f]
    bl NextSearchCheck
    ldmia sp!, {r4, r5, r6, pc}
@L_0210a3cc:
    mov r0, #0xc0
    mla r0, r1, r0, r4
    add r0, r0, #0x400
    ldrh r0, [r0, #0xa6]
    mov r6, #1
    sub r0, r0, #1
    mov r0, r6, lsl r0
    mov r5, r0, lsl #0x10
    bl WCM_GetAllowedChannel
    tst r0, r5, lsr #16
    moveq r6, #0
    cmp r6, #1
    bne @L_0210a454
    bl OS_GetTick
    ldrb r5, [r4, #0xd0f]
    mov r2, #0xc0
    add r3, r4, #0x74
    smulbb r2, r5, r2
    add r5, r4, r2
    str r0, [r4, #0xcb0]
    str r1, [r4, #0xcb4]
    add r0, r5, #0x400
    ldrh r1, [r0, #0xa6]
    add r0, r4, #0x7c
    add r5, r3, #0x400
    sub r1, r1, #1
    orr r1, r1, #0x300000
    add r4, r0, #0x400
    mov r3, r1, lsl #0x10
    add r0, r5, r2
    add r1, r4, r2
    mov r2, r3, lsr #0x10
    bl WCM_SearchAsync
    b @L_0210a46c
@L_0210a454:
    ldrb r1, [r4, #0xd0f]
    add r0, r4, #0x47
    add r2, r0, #0x400
    ldrb r0, [r2, r1, lsl #2]
    orr r0, r0, #0x80
    strb r0, [r2, r1, lsl #2]
@L_0210a46c:
    mov r0, #4
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void SearchStealth(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl OS_GetTick
    ldr r2, [r4, #0xcb0]
    ldr r3, [r4, #0xcb4]
    subs r12, r0, r2
    sbc r0, r1, r3
    mov r1, r0, lsl #6
    ldr r2, =0x82ea
    orr r1, r1, r12, lsr #26
    mov r0, r12, lsl #6
    mov r3, #0
    bl _ll_udiv
    add r2, r4, #0xd00
    ldrh r2, [r2, #0x24]
    cmp r1, r2, asr #31
    cmpeq r0, r2
    bhs @L_0210a4e0
    ldrb r1, [r4, #0xd0f]
    mov r0, #0x24
    mla r0, r1, r0, r4
    ldrb r0, [r0, #0x300]
    mov r0, r0, lsl #0x1c
    mov r0, r0, lsr #0x1c
    cmp r0, #1
    bne @L_0210a594
@L_0210a4e0:
    ldrb r1, [r4, #0xd0f]
    mov r0, #0x24
    add r2, r4, #0x300
    smulbb r1, r1, r0
    ldrb r0, [r2, r1]
    bic r0, r0, #0xf
    strb r0, [r2, r1]
    ldrb r0, [r4, #0xd0f]
    ldrb r1, [r4, #0xd10]
    add r2, r0, #1
    and r0, r2, #0xff
    strb r2, [r4, #0xd0f]
    cmp r1, r0
    bhi @L_0210a534
    ldrb r1, [r4, #0xd15]
    mov r0, #0
    strb r0, [r4, #0xd0f]
    add r0, r1, #1
    strb r0, [r4, #0xd15]
    bl GetNextStealthChannel
    strb r0, [r4, #0xd11]
@L_0210a534:
    add r0, r4, #0xd00
    ldrsb r0, [r0, #0x11]
    cmp r0, #0
    bge @L_0210a55c
    mov r2, #0
    mov r0, r4
    mov r1, #5
    strb r2, [r4, #0xd15]
    bl NextSearchCheck
    ldmia sp!, {r4, pc}
@L_0210a55c:
    bl OS_GetTick
    add r3, r4, #0xd00
    ldrb r12, [r4, #0xd0f]
    add lr, r4, #0x304
    mov r2, #0x24
    str r1, [r4, #0xcb4]
    str r0, [r4, #0xcb0]
    mla r1, r12, r2, lr
    ldrsb r3, [r3, #0x11]
    ldr r2, =data_ov014_02123dac
    ldr r0, =WCM_Bssid_Any
    ldr r2, [r2, r3, lsl #2]
    orr r2, r2, #0x300000
    bl WCM_SearchAsync
@L_0210a594:
    mov r0, #5
    ldmia sp!, {r4, pc}
}

extern "C" asm s32 NextSearchCheck(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r1
    mov r5, r0
    cmp r4, #3
    beq @L_0210a5d0
    cmp r4, #4
    beq @L_0210a628
    cmp r4, #5
    beq @L_0210a62c
    b @L_0210a64c
@L_0210a5d0:
    ldrb r1, [r5, #0xd12]
    cmp r1, #0
    bne @L_0210a5ec
    add r1, r5, #0xd00
    ldrh r1, [r1, #0x16]
    cmp r1, #0
    beq @L_0210a60c
@L_0210a5ec:
    mov r0, #1
    bl DWCi_AC_MakeSearchList
    cmp r0, #1
    moveq r4, #4
    beq @L_0210a64c
    mov r0, r5
@L_0210a604:
    bl CheckStartStealthSearch
    b @L_0210a648
@L_0210a60c:
    ldrb r1, [r5, #0xd0b]
    mov r1, r1, lsl #0x18
    mov r1, r1, lsr #0x1c
    cmp r1, #1
    movhs r4, #6
    bhs @L_0210a64c
    b @L_0210a644
@L_0210a628:
    b @L_0210a604
@L_0210a62c:
    ldrb r1, [r5, #0xd0b]
    mov r1, r1, lsl #0x18
    mov r1, r1, lsr #0x1c
    cmp r1, #1
    movhs r4, #6
    bhs @L_0210a64c
@L_0210a644:
    bl SearchAround2ndLap
@L_0210a648:
    mov r4, r0
@L_0210a64c:
    mov r0, r4
    bl DWCi_AC_SearchReStart
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void SearchEndCheck(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r1
    mov r6, r0
    cmp r5, #0x11
    moveq r0, r5
    ldmeqia sp!, {r4, r5, r6, pc}
    ldrb r1, [r6, #0xd12]
    mov r4, #0
    cmp r1, #0
    bls @L_0210a6a4
@L_0210a684:
    add r0, r6, r4, lsl #2
    ldrb r0, [r0, #0x444]
    cmp r0, #0
    beq @L_0210a6a4
    add r0, r4, #1
    and r4, r0, #0xff
    cmp r4, r1
    blo @L_0210a684
@L_0210a6a4:
    cmp r5, #6
    bne @L_0210a6d4
    cmp r1, r4
    bne @L_0210a760
    cmp r4, #0
    bne @L_0210a6c4
    mov r0, #5
    b @L_0210a6c8
@L_0210a6c4:
    mov r0, #6
@L_0210a6c8:
    bl DWCi_AC_SetError
    mov r0, #0x11
    ldmia sp!, {r4, r5, r6, pc}
@L_0210a6d4:
    cmp r1, #0
    moveq r0, r5
    ldmeqia sp!, {r4, r5, r6, pc}
    cmp r1, r4
    moveq r0, r5
    ldmeqia sp!, {r4, r5, r6, pc}
    ldrb r0, [r6, #0xd0c]
    mov r0, r0, lsl #0x1a
    mov r0, r0, lsr #0x1f
    cmp r0, #1
    bne @L_0210a714
    add r0, r6, r4, lsl #2
    ldrb r0, [r0, #0x446]
    cmp r0, #0x14
    movlo r0, r5
    ldmloia sp!, {r4, r5, r6, pc}
@L_0210a714:
    add r0, r6, r4, lsl #2
    ldrb r0, [r0, #0x445]
    cmp r0, #7
    blo @L_0210a730
    cmp r0, #0xa
    movls r0, r5
    ldmlsia sp!, {r4, r5, r6, pc}
@L_0210a730:
    ldrb r0, [r6, #0xd0c]
    mov r0, r0, lsl #0x18
    mov r0, r0, lsr #0x1f
    cmp r0, #1
    bne @L_0210a760
    add r1, r6, #0x470
    mov r0, #0xc0
    mla r0, r4, r0, r1
    bl DWCi_AC_IsSupportWPA
    cmp r0, #0
    moveq r0, r5
    ldmeqia sp!, {r4, r5, r6, pc}
@L_0210a760:
    strb r4, [r6, #0xd13]
    bl WCM_EndSearchAsync
    cmp r0, #1
    strneb r5, [r6, #0xd0e]
    movne r5, #7
    mov r0, r5
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 CheckStartStealthSearch(u8 *arg0)
{
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;
    if ((*(u16 *)(arg0 + 0xD16) != 0 && (v0 = DWCi_AC_MakeSearchList(2), v0 == 1))) {
        v1 = GetNextStealthChannel();
        *(u8 *)(arg0 + 0xD11) = v1;
        if (*(s8 *)(arg0 + 0xD11) >= 0) {
            return 5;
        } else {
            *(u8 *)(arg0 + 0xD15) = 0;
            v2 = NextSearchCheck((s32)arg0, 5, 0);
            return v2;
        }
    } else {
        if ((u32)((u32)(*(u8 *)(arg0 + 0xD0B) << 0x18) >> 0x1C) >= (u32)1) {
            return 6;
        } else {
            v3 = SearchAround2ndLap((s32)arg0);
            return v3;
        }
    }
}

extern "C" s8 GetStartChannel(s32 arg0)
{
    u8 *p = (u8 *)((s32 (*)(...))DWCi_AC_GetMemPtr)(0x10);
    s32 i;
    u16 m;
    if (arg0 == 0) {
        i = 0;
        m = 1;
    } else {
        i = 1;
        m = 2;
    }
    for (; i <= *(u16 *)(p + 0xD1E); i += 2) {
        s32 r = ((s32 (*)(...))WCM_GetAllowedChannel)();
        if (((r & m) ? 1 : 0) == 1)
            break;
        m <<= 2;
    }
    if (i > *(u16 *)(p + 0xD1E))
        return arg0 != 0 ? 1 : 0;
    return i;
}

extern "C" asm void GetNextAroundChannel(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r9, r0
    mov r0, #0x10
    bl DWCi_AC_GetMemPtr
    add r1, r9, #2
    mov r7, r0
    mov r0, r1, lsl #0x18
    add r4, r7, #0xd00
    ldrh r2, [r4, #0x1e]
    mov r9, r0, asr #0x18
    mov r1, #1
    mov r1, r1, lsl r9
    mov r1, r1, lsl #0x10
    cmp r2, r0, asr #24
    mov r8, r1, lsr #0x10
    blt @L_0210a920
    mov r5, #0
    mov r6, #1
@L_0210a8e8:
    bl WCM_GetAllowedChannel
    tst r0, r8
    movne r0, r6
    moveq r0, r5
    cmp r0, #1
    beq @L_0210a920
    ldrh r2, [r4, #0x1e]
    add r0, r9, #2
    mov r1, r0, lsl #0x18
    mov r0, r8, lsl #0x12
    cmp r2, r1, asr #24
    mov r8, r0, lsr #0x10
    mov r9, r1, asr #0x18
    bge @L_0210a8e8
@L_0210a920:
    add r0, r7, #0xd00
    ldrh r0, [r0, #0x1e]
    cmp r9, r0
    mvngt r9, #0
    mov r0, r9
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm s32 GetNextStealthChannel(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r5, #0x10
    mov r0, r5
    bl DWCi_AC_GetMemPtr
    mov r6, r0
    add r4, r6, #0xd00
    ldrh r9, [r4, #0x16]
    cmp r9, #0
    subeq r0, r5, #0x11
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrh r0, [r4, #0x1e]
    mov r7, #0
    mov r8, r7
    cmp r0, #0
    ble @L_0210a9e0
    mov r11, r7
    mov r5, #1
@L_0210a97c:
    tst r9, r5, lsl r7
    mov r10, r5, lsl r7
    beq @L_0210a9cc
    ldrb r0, [r6, #0xd15]
    cmp r8, r0
    bne @L_0210a9c4
    bl WCM_GetAllowedChannel
    mov r1, r10, lsl #0x10
    tst r0, r1, lsr #16
    movne r0, r5
    moveq r0, r11
    cmp r0, #1
    moveq r0, r7, lsl #0x18
    moveq r0, r0, asr #0x18
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r0, [r6, #0xd15]
    add r0, r0, #1
    strb r0, [r6, #0xd15]
@L_0210a9c4:
    add r0, r8, #1
    and r8, r0, #0xff
@L_0210a9cc:
    ldrh r0, [r4, #0x1e]
    add r1, r7, #1
    and r7, r1, #0xff
    cmp r7, r0
    blt @L_0210a97c
@L_0210a9e0:
    mvn r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 DWCi_AC_CheckNintendoShopAP(s32 arg0)
{
    s32 local[6];
    decodeSSID(arg0, (s32)((u8 *)local));
    s32 v1 = memcmp((s32)((u8 *)local), (s32)data_ov014_02124838, 8);
    return (v1 == 0 ? 1 : 0);
}

extern "C" void DWCi_AC_GetNintendoShopWepKey(s32 arg0, s32 arg1)
{
    s32 local[6];
    decodeSSID(arg0, (s32)((u8 *)local));
    makeShopWepKey((s32)((u8 *)local), arg1);
}

extern "C" void DWCi_AC_GetPostalCode(s32 arg0, u8 *arg1)
{
    u8 buf[0x18];
    ((void (*)(s32, u8 *))decodeSSID)(arg0, buf);
    if (((s32 (*)(u8 *, u8 *, s32))memcmp)(buf, (u8 *)data_ov014_02124838, 8) != 0)
        return;
    ((void (*)(u8 *, u8 *, s32))MI_CpuCopy8)(buf + 8, arg1, 10);
}

extern "C" s32 DWCi_AC_CheckNintendoUsbAP(s32 arg0)
{
    s32 v0 = memcmp(arg0, (s32)data_ov014_02124844, 8);
    return (v0 == 0 ? 1 : 0);
}

extern "C" void DWCi_AC_GetNintendoUSBWepKey(s32 arg0)
{
    makeUsbWepKey((arg0 + 0xC));
}

extern "C" asm s32 decodeSSID(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x18
    ldr lr, =data_ov014_02123e00
    add r12, sp, #0
    mov r4, r1
    mov r3, #0xc
@L_0210aaec:
    ldrb r1, [lr, #1]
    ldrb r2, [lr], #2
    subs r3, r3, #1
    strb r1, [r12, #1]
    strb r2, [r12], #2
    bne @L_0210aaec
    mov r1, r4
    mov r2, #0x20
    mov r3, #0x18
    bl db64
    ldr r0, =data_ov014_021247d0
    mov r3, #0
@L_0210ab1c:
    ldr r1, [r0, #8]
    ldrb r2, [r4, r3]
    ldrsb r1, [r1, r3]
    eor r1, r2, r1
    strb r1, [r4, r3]
    add r3, r3, #1
    cmp r3, #0x18
    blt @L_0210ab1c
    mov r6, #0
    add r12, sp, #0
    mov r1, #0xff
@L_0210ab48:
    and r2, r6, #0xff
    ldrb r0, [r12, r2]
    mov lr, r2
    ldrb r5, [r4, r6]
    cmp r0, #0xff
    beq @L_0210ab8c
@L_0210ab60:
    add r0, r12, lr
    ldrb lr, [r12, lr]
    ldrb r2, [r12, r2]
    ldrb r3, [r4, lr]
    strb r1, [r0]
    ldrb r0, [r12, lr]
    strb r5, [r4, r2]
    mov r2, lr
    mov r5, r3
    cmp r0, #0xff
    bne @L_0210ab60
@L_0210ab8c:
    add r6, r6, #1
    cmp r6, #0x18
    blt @L_0210ab48
    ldr r0, =data_ov014_021247d0
    mov r3, #0
@L_0210aba0:
    ldr r1, [r0]
    ldrb r2, [r4, r3]
    ldrsb r1, [r1, r3]
    eor r1, r2, r1
    strb r1, [r4, r3]
    add r3, r3, #1
    cmp r3, #0x18
    blt @L_0210aba0
    add sp, sp, #0x18
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm s32 makeShopWepKey(...)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x6c
    add r4, sp, #0x14
    mov r6, r0
    mov r0, r4
    mov r5, r1
    bl MATH_MD5Init
    mov r0, r4
    mov r1, r6
    mov r2, #0x18
    bl MATH_MD5Update
    add r1, sp, #0
    mov r0, r4
    bl MATH_MD5GetHash
    add r0, sp, #3
    mov r1, r5
    mov r2, #0xd
    bl MI_CpuCopy8
    add sp, sp, #0x6c
    ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" asm s32 makeUsbWepKey(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x10
    ldr lr, =0x92492493
    mov r4, r1
    mov r1, #0
    mov r12, #7
@L_0210ac38:
    smull r2, r3, lr, r1
    add r3, r1, r3
    mov r2, r1, lsr #0x1f
    add r3, r2, r3, asr #2
    smull r2, r3, r12, r3
    sub r3, r1, r2
    add r2, r0, r3
    ldrb r3, [r0, r1]
    ldrb r2, [r2, #0xd]
    eor r2, r3, r2
    strb r2, [r4, r1]
    add r1, r1, #1
    cmp r1, #0xd
    blt @L_0210ac38
    mov r5, #0
@L_0210ac74:
    add r3, r4, r5
    add r1, r0, r5
    ldrb r2, [r3, #3]
    ldrb r1, [r1, #0xd]
    add r5, r5, #1
    cmp r5, #7
    eor r1, r2, r1
    strb r1, [r3, #3]
    blt @L_0210ac74
    ldr r0, =data_ov014_021247d0
    mov r3, #0
@L_0210aca0:
    ldr r1, [r0, #4]
    ldrb r2, [r4, r3]
    ldrsb r1, [r1, r3]
    eor r1, r2, r1
    strb r1, [r4, r3]
    add r3, r3, #1
    cmp r3, #0xd
    blt @L_0210aca0
    add r5, sp, #0
    mov r0, r4
    mov r1, r5
    mov r2, #0xd
    bl MI_CpuCopy8
    ldr r1, =data_ov014_02123de0
    mov r3, #0
@L_0210acdc:
    ldrb r2, [r5, r3]
    ldrb r0, [r1, r3]
    add r3, r3, #1
    cmp r3, #0xd
    strb r2, [r4, r0]
    blt @L_0210acdc
    ldr r0, =data_ov014_021247d0
    mov r3, #0
@L_0210acfc:
    ldr r1, [r0, #0xc]
    ldrb r2, [r4, r3]
    ldrsb r1, [r1, r3]
    eor r1, r2, r1
    strb r1, [r4, r3]
    add r3, r3, #1
    cmp r3, #0xd
    blt @L_0210acfc
    ldr r2, =data_ov014_02123ded
    mov r5, #0
@L_0210ad24:
    ldrb r3, [r4, r5]
    mov r0, r3, asr #4
    and r1, r0, #0xf
    and r0, r3, #0xf
    ldrb r1, [r2, r1]
    ldrb r0, [r2, r0]
    orr r0, r0, r1, lsl #4
    strb r0, [r4, r5]
    add r5, r5, #1
    cmp r5, #0xd
    blt @L_0210ad24
    mov r1, #0
@L_0210ad54:
    add r0, r4, r1
    ldrb r3, [r4, r1]
    ldrb r2, [r0, #6]
    eor r2, r3, r2
    strb r2, [r4, r1]
    ldrb r3, [r0, #3]
    ldrb r2, [r0, #9]
    eor r2, r3, r2
    strb r2, [r0, #3]
    ldrb r3, [r0, #6]
    and r2, r2, #0xff
    eor r2, r3, r2
    strb r2, [r0, #6]
    ldrb r3, [r0, #9]
    ldrb r2, [r4, r1]
    eor r2, r3, r2
    strb r2, [r0, #9]
    ldrb r0, [r4, r1]
    ldrb r2, [r4, #0xc]
    add r1, r1, #1
    cmp r1, #3
    eor r0, r2, r0
    strb r0, [r4, #0xc]
    blt @L_0210ad54
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void codetovalue(void)
{
    cmp r0, #0x41
    blo @L_0210ade0
    cmp r0, #0x5a
    subls r0, r0, #0x41
    bxls lr
@L_0210ade0:
    cmp r0, #0x61
    blo @L_0210adf8
    cmp r0, #0x7a
    subls r0, r0, #0x61
    addls r0, r0, #0x1a
    bxls lr
@L_0210adf8:
    cmp r0, #0x30
    blo @L_0210ae10
    cmp r0, #0x39
    subls r0, r0, #0x30
    addls r0, r0, #0x34
    bxls lr
@L_0210ae10:
    cmp r0, #0x2b
    moveq r0, #0x3e
    bxeq lr
    cmp r0, #0x2f
    moveq r0, #0x3f
    bxeq lr
    cmp r0, #0x3d
    movne r0, #1
    moveq r0, #0
    rsb r0, r0, #0
    bx lr
}

extern "C" asm void db64(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    add r4, r2, r2, lsl #1
    str r0, [sp]
    cmp r3, r4, lsr #2
    mov r0, r4, lsr #2
    andhs r7, r2, #3
    str r1, [sp, #4]
    str r0, [sp, #8]
    subhs r11, r2, r7
    bhs @L_0210ae74
    add sp, sp, #0x14
    mvn r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0210ae74:
    cmp r11, #0
    mov r8, #0
    ble @L_0210aefc
    add r5, sp, #0x10
    mov r4, #6
@L_0210ae88:
    ldr r0, [sp]
    mov r6, #0
    mov r9, r6
    add r10, r0, r8
@L_0210ae98:
    ldrb r0, [r10, r9]
    bl codetovalue
    rsb r1, r9, #3
    mul r2, r1, r4
    orr r6, r6, r0, lsl r2
    add r9, r9, #1
    cmp r9, #4
    blt @L_0210ae98
    mov r0, r8, asr #1
    add r0, r8, r0, lsr #30
    mov r0, r0, asr #2
    add r1, r0, r0, lsl #1
    ldr r0, [sp, #4]
    mov r2, #0
    str r6, [sp, #0x10]
    add r1, r0, r1
@L_0210aed8:
    rsb r0, r2, #2
    ldrb r0, [r5, r0]
    strb r0, [r1, r2]
    add r2, r2, #1
    cmp r2, #3
    blt @L_0210aed8
    add r8, r8, #4
    cmp r8, r11
    blt @L_0210ae88
@L_0210aefc:
    cmp r7, #0
    beq @L_0210af88
    mov r5, #0
    mov r6, r5
    str r5, [sp, #0xc]
    ble @L_0210af4c
    ldr r0, [sp]
    mov r9, r5
    add r4, r0, r11
    mov r8, #6
@L_0210af24:
    ldrb r0, [r4, r6]
    bl codetovalue
    rsb r1, r6, #3
    mul r2, r1, r8
    orr r5, r5, r0, lsl r2
    add r6, r6, #1
    cmp r6, r7
    orr r9, r9, r5
    blt @L_0210af24
    str r9, [sp, #0xc]
@L_0210af4c:
    cmp r7, #0
    mov r3, #0
    ble @L_0210af88
    add r1, r11, r11, lsl #1
    mov r0, r1, asr #1
    add r1, r1, r0, lsr #30
    ldr r0, [sp, #4]
    add r2, r0, r1, asr #2
    add r1, sp, #0xc
@L_0210af70:
    rsb r0, r3, #2
    ldrb r0, [r1, r0]
    strb r0, [r2, r3]
    add r3, r3, #1
    cmp r3, r7
    blt @L_0210af70
@L_0210af88:
    ldr r0, [sp, #8]
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 DWCi_AC_Start(void)
{
    s32 b[4];
    s32 a = ((s32 (*)(...))WCM_GetPhase)();
    u8 *p = (u8 *)((s32 (*)(...))DWCi_AC_GetMemPtr)(0x10);
    if (a == 1) {
        s32 r;
        b[0] = p[0xD0A];
        b[1] = 0;
        b[2] = 0;
        b[3] = 0;
        ((s32 (*)(...))DWCi_AC_MakeSearchList)(0);
        r = ((s32 (*)(...))WCM_StartupAsync)(b, DWCi_AC_CallBackWCM);
        if (r == 1 || r >= 4) {
            ((s32 (*)(...))DWCi_AC_SetError)(1);
            return 0x11;
        }
    } else {
        return 1;
    }
    return 2;
}

extern "C" s32 DWCi_AC_ConnectTest(void)
{
    s32 r0;
    s32 r4;
    u8 *r5;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;
    s32 v4;
    s32 v5;
    s32 v6;
    s32 v7;
    s32 v8;
    u8 *t0;
    v0 = DWCi_AC_GetPhase();
    v1 = DWCi_AC_GetMemPtr(0x10);
    v2 = WCM_GetPhase();
    r4 = v0;
    r5 = (u8 *)v1;
    if (v2 == 9) {
        r0 = (r4 - 10);
        switch (r0) {
            case 0:
                v3 = ConnectTestStart((s32)r5);
                r0 = v3;
                r4 = r0;
                break;
            case 2:
                v4 = GetIPAddress((s32)r5);
                r0 = v4;
                r4 = r0;
                break;
            case 3:
                v5 = ConnectTestCreate();
                r0 = v5;
                r4 = r0;
                break;
            case 4:
                v6 = ((s32 (*)(...))ConnectTestProcess)((s32)r5);
                r0 = v6;
                r4 = r0;
                break;
            case 5:
                v7 = ConnectTestEnd(r5);
                r0 = v7;
                r4 = r0;
                break;
            case 1:
                v8 = ConnectTestRetry();
                r0 = v8;
                r4 = r0;
                break;
        }
    } else {
        switch (r4) {
            case 15:
                v7 = ConnectTestEnd(r5);
                r0 = v7;
                r4 = r0;
                break;
            case 11:
                v8 = ConnectTestRetry();
                r0 = v8;
                r4 = r0;
                break;
            case 14:
                DWC_Netcheck_Abort();
                DWC_Netcheck_Destroy();
            default:
                t0 = (u8 *)(r5 + (*(u8 *)(r5 + 0xD13) << 2));
                *(u8 *)(t0 + 0x444) = 2;
                r4 = 0xB;
                break;
        }
    }
    return r4;
}

extern "C" s32 ConnectTestStart(s32 arg0)
{
    s32 v0;
    s32 v1;
    s32 v3;
    v0 = DWCi_AC_GetMemPtr(1);
    v1 = DWCi_AC_GetMemPtr(4);
    MakeSOCConfig(v0, arg0, v1);
    *(s32 *)(SOCLiYieldWait) = 4;
    v3 = SOC_Startup(v1, (s32)SOCLiYieldWait);
    if (v3 == 0) {
        return 0xC;
    } else {
        DWCi_AC_SetError(2);
        return 0x11;
    }
}

extern "C" asm s32 GetIPAddress(...)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl SOC_GetHostID
    cmp r0, #0
    beq @L_0210b18c
    mov r0, r4
    bl CheckSetDNS
    ldrb r0, [r4, #0xd0c]
    mov r0, r0, lsl #0x1b
    mov r0, r0, lsr #0x1f
    cmp r0, #1
    moveq r0, #0xf
    movne r0, #0xd
    ldmia sp!, {r4, pc}
@L_0210b18c:
    bl OS_GetTick
    ldr r2, [r4, #0xcb0]
    mov r3, #0
    subs r12, r0, r2
    ldr r0, [r4, #0xcb4]
    ldr r2, =0x1ff6210
    sbc r0, r1, r0
    mov r1, r0, lsl #6
    orr r1, r1, r12, lsr #26
    mov r0, r12, lsl #6
    bl _ll_udiv
    cmp r1, #0
    cmpeq r0, #0xa
    movlo r0, #0xc
    ldmloia sp!, {r4, pc}
    ldrb r1, [r4, #0xd13]
    mov r2, #1
    mov r0, #0xb
    add r1, r4, r1, lsl #2
    strb r2, [r1, #0x444]
    ldmia sp!, {r4, pc}
}

extern "C" s32 ConnectTestCreate(void)
{
    s32 v1;
    DWCi_AC_GetMemPtr(8);
    v1 = DWC_Netcheck_Create();
    if (v1 == 0)
        return 0xE;
    DWCi_AC_SetError(3);
    return 0x11;
}

extern "C" s32 ConnectTestProcess(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    u8 *r4;
    s32 r5;
    u8 *r6;
    s32 v0 = DWCi_AC_GetMemPtr(1, arg1, arg2, arg3);
    s32 v1 = DWC_Netcheck_GetError();
    r4 = (u8 *)v0;
    r5 = v1;
    r6 = (u8 *)arg0;
    if (r5 != 0) {
        s32 v2 = DWCi_ConvConnectAPType(*(u8 *)(r6 + 0xD0D));
        arg0 = v2;
        arg1 = *(u8 *)(r4 + 0x15);
        if (arg1 == arg0) {
            s32 v3 = DWC_Netcheck_GetReturnCode();
            *(s32 *)(r4 + 0x10) = v3;
            arg0 = v3;
        }
        DWC_Netcheck_Destroy();
        if (r5 != 0xB) {
            *(u8 *)(((u8 *)(r6 + (*(u8 *)(r6 + 0xD13) << 2))) + 0x444) = 1;
            *(u8 *)(r4 + 0xB) = (*(s32 *)(data_ov014_02126b14) == 4 ? ((*(u8 *)(r4 + 0xB) & -0xF1) | 0x10) : (*(u8 *)(r4 + 0xB) & -0xF1));
            return 0xB;
        }
        return 0xF;
    }
    return 0xE;
}

extern "C" s32 ConnectTestEnd(u8 *arg0)
{
    DWCi_AC_SetApType(*(u8 *)(arg0 + 0xD0D));
    DWCi_AC_CopyExSetting(*(u8 *)(arg0 + 0xD0D));
    return 0x10;
}

extern "C" s32 ConnectTestRetry(void)
{
    s32 r0;
    s32 v0;
    s32 v1;
    v0 = SOCL_CalmDown();
    if (v0 != 0) {
        return 0xB;
    } else {
        v1 = SOC_Cleanup();
        r0 = v1;
        if ((r0 == 0 || r0 == -0x27)) {
            r0 = 9;
        } else {
            r0 = 0xB;
        }
        return r0;
    }
}

extern "C" asm s32 MakeSOCConfig(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r4, r2
    mov r5, r1
    ldr r0, =data_ov014_02123e18
    mov r1, r4
    mov r2, #0x58
    bl MI_CpuCopy8
    ldr r0, [r6]
    str r0, [r4, #4]
    ldr r0, [r6, #4]
    str r0, [r4, #8]
    ldrb r0, [r5, #0xd0d]
    cmp r0, #6
    ldmhsia sp!, {r4, r5, r6, pc}
    bl DWCi_ConvConnectAPType
    add r5, r5, r0, lsl #8
    ldrb r0, [r5, #0xc0]
    cmp r0, #0
    mov r0, #0
    beq @L_0210b380
    str r0, [r4, #0xc]
    add r0, r5, #0xc0
    bl ConvAddress
    str r0, [r4, #0x10]
    ldrb r0, [r5, #0xd0]
    bl ConvNetMask
    str r0, [r4, #0x14]
    add r0, r5, #0xc4
    bl ConvAddress
    str r0, [r4, #0x18]
    add r0, r5, #0xc8
    bl ConvAddress
    str r0, [r4, #0x1c]
    add r0, r5, #0xcc
    bl ConvAddress
    b @L_0210b398
@L_0210b380:
    mov r1, #1
    str r1, [r4, #0xc]
    str r0, [r4, #0x10]
    str r0, [r4, #0x14]
    str r0, [r4, #0x18]
    str r0, [r4, #0x1c]
@L_0210b398:
    str r0, [r4, #0x20]
    mov r1, #0x240
    mov r0, #0
    str r1, [r4, #0x2c]
    str r0, [r4, #0x30]
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void ConvAddress(void)
{
    ldrb r3, [r0]
    ldrb r2, [r0, #1]
    ldrb r1, [r0, #2]
    mov r3, r3, lsl #0x18
    orr r3, r3, #0
    orr r2, r3, r2, lsl #16
    ldrb r0, [r0, #3]
    orr r1, r2, r1, lsl #8
    orr r3, r1, r0
    mov r1, r3, lsr #0x18
    mov r0, r3, lsr #8
    mov r2, r3, lsl #8
    mov r3, r3, lsl #0x18
    and r1, r1, #0xff
    and r0, r0, #0xff00
    and r2, r2, #0xff0000
    orr r0, r1, r0
    and r1, r3, #0xff000000
    orr r0, r2, r0
    orr r0, r1, r0
    bx lr
}

extern "C" s32 ConvNetMask(s32 arg0)
{
    s32 r0;
    s32 r3;
    r3 = -1;
    r0 = 0;
    if ((0x20 - arg0) > 0) {
        do {
            r0 = (r0 + 1);
            r3 = (r3 << 1);
        } while (r0 < (0x20 - arg0));
    }
    return (((r3 << 0x18) & -0x1000000) | (((r3 << 8) & 0xFF0000) | ((((u32)r3 >> 0x18) & 0xFF) | (((u32)r3 >> 8) & 0xFF00))));
}

extern "C" asm void CheckSetDNS(void)
{
    stmdb sp!, {r4, lr}
    sub sp, sp, #8
    mov r4, r0
    ldrb r0, [r4, #0xd0d]
    cmp r0, #6
    addhs sp, sp, #8
    ldmhsia sp!, {r4, pc}
    bl DWCi_ConvConnectAPType
    add r4, r4, r0, lsl #8
    ldrb r0, [r4, #0xc0]
    ldrb r2, [r4, #0xc8]
    ldrb r1, [r4, #0xc9]
    cmp r0, #0
    ldrb r3, [r4, #0xca]
    add r1, r2, r1
    ldrb r2, [r4, #0xcb]
    add r1, r3, r1
    addne sp, sp, #8
    add r0, r2, r1
    ldmneia sp!, {r4, pc}
    cmp r0, #0
    addeq sp, sp, #8
    ldmeqia sp!, {r4, pc}
    add r0, r4, #0xc8
    bl ConvAddress
    str r0, [sp, #4]
    add r0, r4, #0xcc
    bl ConvAddress
    str r0, [sp]
    add r0, sp, #4
    add r1, sp, #0
    bl SOC_SetResolver
    add sp, sp, #8
    ldmia sp!, {r4, pc}
}

extern "C" void DWC_Auth_SetCustomNas(s32 arg0)
{
    *(s32 *)(DWCauthhttpparam) = arg0;
}

extern "C" s32 func_ov014_0210b4f4(void)
{
    return *(s32 *)(DWCauthhttpparam);
}

extern "C" s32 DWC_Auth_Create(u8 *arg0, s32 arg1)
{
    s32 r2;
    u8 *r5;
    s32 r7;
    s32 r8;
    s32 v0;
    s32 v3;
    u8 *t0;
    s32 t1;
    u8 *t2;
    u8 *t4;
    u8 *t5;
    u8 *t6;
    u8 *t7;
    r5 = arg0;
    r2 = *(s32 *)(arg0 + 0x40);
    if (*(s32 *)(((u8 *)&DWCiswfcutil) + 0x4) != 0) {
        return 2;
    } else {
        r7 = 0x13F4;
        r8 = 0;
        v0 = ((s32 (*)(...))r2)(0, 0x13F4);
        *(s32 *)(((u8 *)&DWCiswfcutil) + 0x4) = v0;
        arg0 = (u8 *)v0;
        if ((s32)arg0 == 0) {
            return 2;
        } else {
            MI_CpuFill8((s32)arg0, r8, r7);
            t0 = (u8 *)(*(s32 *)(((u8 *)&DWCiswfcutil) + 0x4) + 0x1000);
            *(s32 *)(t0 + 0x314) = arg1;
            *(s32 *)(((u8 *)&DWCiswfcutil) + 0x8) = r8;
            t1 = ((*(s32 *)(((u8 *)&DWCiswfcutil) + 0x4) + 8) + 0x1000);
            MI_CpuFill8(t1, r8, 0x1C4);
            t2 = (u8 *)(*(s32 *)(((u8 *)&DWCiswfcutil) + 0x4) + 0x1000);
            *(s32 *)(t2 + 0x8) = 0x4E84;
            t4 = (u8 *)((*(s32 *)(((u8 *)&DWCiswfcutil) + 0x4) + 0x1CC) + 0x1000);
            t5 = (u8 *)*(s32 *)(((u8 *)&DWCiswfcutil) + 0x4);
            *(WN<18> *)(t4) = *(WN<18> *)(r5);
            *(u16 *)(t5 + 0x11FE) = 0;
            t6 = (u8 *)(*(s32 *)(((u8 *)&DWCiswfcutil) + 0x4) + 0x1000);
            *(u8 *)(t6 + 0x20B) = 0;
            v3 = DWCi_Auth_Start(1);
            t7 = (u8 *)(*(s32 *)(((u8 *)&DWCiswfcutil) + 0x4) + 0x1000);
            *(s32 *)(t7 + 0x4) = v3;
            if (*(s32 *)(*(u8 * *)(((u8 *)&DWCiswfcutil) + 0x4) + 0x1004) != 0)
                return *(s32 *)(*(u8 * *)(((u8 *)&DWCiswfcutil) + 0x4) + 0x1004);
            *(s32 *)(((u8 *)&DWCiswfcutil)) = 0;
            DWCi_Auth_StartThread();
            return 0;
        }
    }
}

extern "C" s32 DWCi_Auth_StartThread(void)
{
    s32 r1;
    s32 v1;
    s32 v3;
    s32 t0;
    u8 *t1;
    s32 t2;
    s32 t3;
    s32 t5;
    t0 = ((*(s32 *)(DWCiswfcutil + 0x4) + 0x3D8) + 0x1000);
    OS_InitMutex(t0);
    t1 = (u8 *)(*(s32 *)(DWCiswfcutil + 0x4) + 0x1000);
    *(s32 *)(t1 + 0x3F0) = 0;
    r1 = *(s32 *)(DWCiswfcutil + 0x4);
    if (*(s32 *)(((u8 *)(r1 + 0x1000)) + 0x384) != 0) {
        v1 = OS_IsThreadTerminated(((r1 + 0x318) + 0x1000));
        if (v1 == 0)
            return v1;
    }
    t2 = ((*(s32 *)(DWCiswfcutil + 0x4) + 0x318) + 0x1000);
    t3 = (*(s32 *)(DWCiswfcutil + 0x4) + 0x1000);
    OS_CreateThread(t2, (s32)DWCi_Auth_Thread, (s32)data_ov014_02128cb0, t3, 0x1000, 0x10);
    t5 = ((*(s32 *)(DWCiswfcutil + 0x4) + 0x318) + 0x1000);
    v3 = OS_WakeupThreadDirect(t5);
    return v3;
}

extern "C" s32 DWC_Auth_Abort(void)
{
    s32 v3;
    s32 v4;
    s32 t0;
    u8 *t1;
    s32 t2;
    s32 t3;
    s32 t4;
    s32 t5;
    if (*(s32 *)(DWCiswfcutil + 0x4) == 0)
        return *(s32 *)(DWCiswfcutil + 0x4);
    t0 = ((*(s32 *)(DWCiswfcutil + 0x4) + 0x3D8) + 0x1000);
    OS_LockMutex(t0);
    t1 = (u8 *)(*(s32 *)(DWCiswfcutil + 0x4) + 0x1000);
    *(s32 *)(t1 + 0x3F0) = 1;
    t2 = ((*(s32 *)(DWCiswfcutil + 0x4) + 0x3D8) + 0x1000);
    OS_UnlockMutex(t2, 1);
    if (*(s32 *)(((u8 *)(*(s32 *)(DWCiswfcutil + 0x4) + 0x1000)) + 0x314) != 0) {
        DWC_Http_Abort();
    }
    if (*(s32 *)(((u8 *)(*(s32 *)(DWCiswfcutil + 0x4) + 0x1000)) + 0x384) == 0)
        return *(s32 *)(((u8 *)(*(s32 *)(DWCiswfcutil + 0x4) + 0x1000)) + 0x384);
    t3 = ((*(s32 *)(DWCiswfcutil + 0x4) + 0x318) + 0x1000);
    t4 = *(s32 *)(DWCiswfcutil + 0x4);
    v3 = OS_IsThreadTerminated(t3, t4);
    if (v3 != 0)
        return v3;
    t5 = ((*(s32 *)(DWCiswfcutil + 0x4) + 0x318) + 0x1000);
    v4 = OS_JoinThread(t5);
    return v4;
}

extern "C" s32 DWC_Auth_Destroy(void)
{
    s32 r6;
    s32 v1;
    s32 t0;
    if (*(s32 *)(DWCiswfcutil + 0x4) == 0)
        return *(s32 *)(DWCiswfcutil + 0x4);
    r6 = *(s32 *)(((u8 *)(*(s32 *)(DWCiswfcutil + 0x4) + 0x1000)) + 0x210);
    if (*(s32 *)(((u8 *)(*(s32 *)(DWCiswfcutil + 0x4) + 0x1000)) + 0x314) != 0) {
        DWC_Http_Destroy();
    }
    t0 = *(s32 *)(DWCiswfcutil + 0x4);
    v1 = ((s32 (*)(...))r6)(0, t0, 0);
    *(s32 *)(DWCiswfcutil + 0x4) = 0;
    return v1;
}

extern "C" void DWC_Auth_Join(void)
{
    if (*(s32 *)(((u8 *)(*(s32 *)(DWCiswfcutil + 0x4) + 0x1000)) + 0x384) == 0)
        return;
    s32 v0 = OS_IsThreadTerminated(((*(s32 *)(DWCiswfcutil + 0x4) + 0x318) + 0x1000), *(s32 *)(DWCiswfcutil + 0x4));
    if (v0 != 0)
        return;
    OS_JoinThread(((*(s32 *)(DWCiswfcutil + 0x4) + 0x318) + 0x1000));
}

extern "C" s32 DWC_Auth_GetError(void)
{
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    if (*(s32 *)(DWCiswfcutil + 0x4) == 0)
        return 0x16;
    t0 = ((*(s32 *)(DWCiswfcutil + 0x4) + 0x3D8) + 0x1000);
    OS_LockMutex(t0);
    t1 = ((*(s32 *)(DWCiswfcutil + 0x4) + 0x3D8) + 0x1000);
    t2 = *(s32 *)(((u8 *)(*(s32 *)(DWCiswfcutil + 0x4) + 0x1000)) + 0x4);
    t3 = (*(s32 *)(DWCiswfcutil + 0x4) + 0x1000);
    OS_UnlockMutex(t1, t3);
    return t2;
}

extern "C" s32 DWC_Auth_GetResult(s32 arg0)
{
    s32 r1;
    u8 *r4;
    s32 t0;
    r4 = (u8 *)arg0;
    if (*(s32 *)(((u8 *)&DWCiswfcutil) + 0x4) == 0) {
        MI_CpuFill8(arg0, 0, 0x1C4);
    }
    t0 = ((*(s32 *)(((u8 *)&DWCiswfcutil) + 0x4) + 8) + 0x1000);
    MI_CpuCopy8(t0, (s32)r4, 0x1C4);
    r1 = *(s32 *)(r4);
    if ((r1 < 0x4E20 || r1 >= 0x7530)) {
        *(s32 *)(r4) = 0x5206;
    }
    r1 = *(s32 *)(r4);
    arg0 = 0x4E84;
    if (r1 >= arg0) {
        *(s32 *)(r4) = (0 - r1);
        arg0 = (0 - r1);
    }
    return arg0;
}

extern "C" asm s32 DWCi_Auth_Start(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r5, =DWCauthhttpparam
    mov r4, r0
    ldr r0, [r5]
    ldr r1, =data_ov014_0212487c
    bl strcmp
    cmp r0, #0
    movne r0, #1
    strne r0, [r5, #0x14]
    ldr r0, =DWCiswfcutil
    ldr r2, =DWCauthhttpparam
    ldr r0, [r0, #4]
    ldr r1, =data_ov014_02124860_b
    add r0, r0, #0x1000
    ldr r3, [r0, #0x20c]
    str r3, [r2, #0xc]
    ldr r3, [r0, #0x210]
    str r3, [r2, #0x10]
    ldr r0, [r0, #0x314]
    bl DWC_Http_Create
    cmp r0, #0
    movne r0, #4
    ldmneia sp!, {r3, r4, r5, pc}
    cmp r4, #1
    bne @L_0210b93c
    ldr r0, =DWC_auth_wifiinfo
    bl DWCi_BM_GetWiFiInfo
@L_0210b93c:
    ldr r4, =DWCiswfcutil
    ldr r1, [r4, #4]
    add r0, r1, #0x1000
    add r2, r1, #0x1cc
    ldr r0, [r0, #0x314]
    add r1, r1, #0x1200
    add r2, r2, #0x1000
    bl DWCi_Auth_Prepare_FirstPost
    ldr r1, [r4, #4]
    add r1, r1, #0x1000
    str r0, [r1, #4]
    ldr r0, [r4, #4]
    add r0, r0, #0x1000
    ldr r1, [r0, #4]
    cmp r1, #0
    movne r0, #4
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r0, [r0, #0x314]
    bl DWC_Http_FinishHeader
    cmp r0, #0
    movne r0, #4
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r0, =OSi_ThreadInfo
    ldr r0, [r0, #4]
    bl OS_GetThreadPriority
    ldr r1, [r4, #4]
    mov r2, r0
    add r0, r1, #0x1000
    ldr r0, [r0, #0x314]
    sub r1, r2, #1
    bl DWC_Http_StartThread
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void DWCi_Auth_Thread(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r8, #0
@L_0210b9e0:
    ldr r0, [pc, #0x29c]
    ldr r0, [r0, #4]
    add r0, r0, #0x1000
    ldr r1, [r0, #0x314]
    add r0, r1, #0x1000
    ldr r0, [r0, #0xbe0]
    cmp r0, #0
    beq @L_0210ba30
    add r0, r1, #0x374
    add r0, r0, #0x1800
    bl OS_IsThreadTerminated
    cmp r0, #0
    bne @L_0210ba30
    ldr r0, [pc, #0x268]
    ldr r0, [r0, #4]
    add r0, r0, #0x1000
    ldr r0, [r0, #0x314]
    add r0, r0, #0x374
    add r0, r0, #0x1800
    bl OS_JoinThread
@L_0210ba30:
    ldr r0, [pc, #0x24c]
    ldr r0, [r0, #4]
    add r0, r0, #0x1000
    ldr r1, [r0, #0x314]
    add r1, r1, #0x1000
    ldr r1, [r1, #0x20]
    cmp r1, #8
    beq @L_0210bac4
    ldr r1, [pc, #0x230]
    str r1, [r0, #8]
    ldr r0, [pc, #0x224]
    ldr r0, [r0, #4]
    add r0, r0, #0x1000
    ldr r0, [r0, #0x314]
    add r0, r0, #0x1000
    ldr r0, [r0, #0x20]
    cmp r0, #7
    bne @L_0210ba84
    mov r0, #0x14
    bl DWCi_Auth_SetError
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0210ba84:
    cmp r8, #2
    ble @L_0210bac0
    cmp r0, #2
    bne @L_0210baa0
    mov r0, #9
    bl DWCi_Auth_SetError
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0210baa0:
    cmp r0, #3
    bne @L_0210bab4
    mov r0, #0xb
    bl DWCi_Auth_SetError
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0210bab4:
    mov r0, #0xd
    bl DWCi_Auth_SetError
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0210bac0:
    b @L_0210bb24
@L_0210bac4:
    bl DWCi_Auth_ParseHttp
    cmp r0, #0x10
    beq @L_0210baec
    cmp r0, #0x11
    beq @L_0210bb0c
    cmp r0, #0x15
    bne @L_0210bb14
    mov r0, #0x15
    bl DWCi_Auth_SetError
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0210baec:
    cmp r8, #2
    ble @L_0210bb00
    mov r0, #0x10
    bl DWCi_Auth_SetError
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0210bb00:
    add r8, r8, #1
    mov r11, #0
    b @L_0210bb2c
@L_0210bb0c:
    bl DWCi_Auth_SetError
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0210bb14:
    cmp r8, #2
    blt @L_0210bb24
    bl DWCi_Auth_SetError
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0210bb24:
    add r8, r8, #1
    mov r11, #1
@L_0210bb2c:
    bl OS_GetTick
    mov r9, r0
    mov r10, r1
    bl OS_GetTick
    subs r2, r0, r9
    sbc r0, r1, r10
    mov r1, r0, lsl #6
    ldr r7, [pc, #0x13c]
    orr r1, r1, r2, lsr #26
    mov r0, r2, lsl #6
    mov r3, #0
    mov r2, r7
    bl _ll_udiv
    ldr r6, [pc, #0x128]
    cmp r1, #0
    cmpeq r0, r6
    bhs @L_0210bc08
    ldr r4, [pc, #0x10c]
    mov r5, #0
@L_0210bb78:
    ldr r0, [r4, #4]
    add r0, r0, #0x3d8
    add r0, r0, #0x1000
    bl OS_LockMutex
    ldr r2, [r4, #4]
    add r0, r2, #0x1000
    ldr r1, [r0, #0x3f0]
    cmp r1, #1
    bne @L_0210bbc4
    ldr r2, [pc, #0xe4]
    ldr r1, [pc, #0xdc]
    str r2, [r0, #8]
    ldr r0, [r1, #4]
    add r0, r0, #0x3d8
    add r0, r0, #0x1000
    bl OS_UnlockMutex
    mov r0, #0x14
    bl DWCi_Auth_SetError
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0210bbc4:
    add r0, r2, #0x3d8
    add r0, r0, #0x1000
    bl OS_UnlockMutex
    mov r0, r6
    bl OS_Sleep
    bl OS_GetTick
    subs r2, r0, r9
    sbc r0, r1, r10
    mov r1, r0, lsl #6
    orr r1, r1, r2, lsr #26
    mov r0, r2, lsl #6
    mov r2, r7
    mov r3, r5
    bl _ll_udiv
    cmp r1, #0
    cmpeq r0, r6
    blo @L_0210bb78
@L_0210bc08:
    ldr r4, [pc, #0x74]
    ldr r0, [r4, #4]
    add r0, r0, #0x1000
    ldr r0, [r0, #0x314]
    bl DWC_Http_Destroy
    ldr r0, [r4, #4]
    add r0, r0, #0x3d8
    add r0, r0, #0x1000
    bl OS_LockMutex
    mov r0, r11
    bl DWCi_Auth_Start
    ldr r1, [r4, #4]
    add r1, r1, #0x1000
    str r0, [r1, #4]
    ldr r2, [r4, #4]
    add r0, r2, #0x1000
    ldr r1, [r0, #4]
    cmp r1, #0
    beq @L_0210bc70
    ldr r1, [pc, #0x2c]
    str r1, [r0, #8]
    ldr r0, [r4, #4]
    add r0, r0, #0x3d8
    add r0, r0, #0x1000
    bl OS_UnlockMutex
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0210bc70:
    add r0, r2, #0x3d8
    add r0, r0, #0x1000
    bl OS_UnlockMutex
    b @L_0210b9e0
    dcd 0xe8bd8ff8
    dcd DWCiswfcutil
    dcd 0x00004e84
    dcd 0x000082ea
    dcd 0x00001388
}
