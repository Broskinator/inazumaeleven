#include "ov014/Unk_ov014_02111cb8.hpp"
struct T02114224 { u32 v[9]; };
struct A02113acc { u8 len; u8 fam; u16 port; u32 addr; };
struct N02114864 { N02114864 *next; N02114864 *prev; };

extern "C" s32 decodeChar(s32 arg0);
extern "C" s32 DWCi_Ndi_getDecodeLenBASE64(s32 arg0);
extern "C" s32 DWCi_Ndi_getEncodeLenBASE64(s32 arg0);
extern "C" s32 DWCi_Ndi_encodeBASE64(...);
extern "C" void DWCi_Ndi_decodeBASE64(void);
extern "C" s32 strAlloc(s32 arg0);
extern "C" s32 DWCi_NdStartup(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
extern "C" s32 nhttpCleanupCallback(void);
extern "C" void DWCi_NdCleanupAsync(s32 arg0);
extern "C" s32 DWCi_NdCleanupConnectionHandle(...);
extern "C" s32 DWCi_NdSetError(...);
extern "C" s32 DWCi_NdCancelAsync(void);
extern "C" s32 DWCi_Ndi_getApInfo(...);
extern "C" s32 DWCi_Ndi_getDSdesc(s32 arg0, s32 arg1);
extern "C" void DWCi_Ndi_getUserAgent(s32 arg0);
extern "C" void req_callback(void);
extern "C" s32 freeHttpParam(...);
extern "C" void freeHttp(s32 arg0, s32 arg1);
extern "C" void setupHttp(void);
extern "C" s32 runHttp(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 DWCi_NdGetFileListNumAsync(s32 arg0);
extern "C" void DWCi_NdGetFileListAsync(void);
extern "C" void DWCi_NdGetFileAsync(void);
extern "C" s32 DWCi_NdGetProgress(s32 arg0, s32 arg1);
extern "C" s32 DWCi_Ndi_response_count(s32 arg0, u8 *arg1);
extern "C" BOOL DWCi_Ndi_response_contents(s32 arg0, u8 *arg1);
extern "C" void DWCi_Ndi_response_list(void);
extern "C" s32 DWCi_Ndi_initLockGlobal(void);
extern "C" void DWCi_Ndi_exitLockGlobal(void);
extern "C" void DWCi_Ndi_lockGlobal(void);
extern "C" void DWCi_Ndi_unlockGlobal(void);
extern "C" s32 DWCi_Ndi_initHttpCallback(void);
extern "C" void DWCi_Ndi_exitHttpCallback(void);
extern "C" s32 DWCi_Ndi_prepareHttpCallback(void);
extern "C" void DWCi_Ndi_unprepareHttpCallback(void);
extern "C" void DWCi_Ndi_kickThread(s32 arg0);
extern "C" s32 DWCi_Ndi_getMacAddress(...);
extern "C" void DWCi_Ndi_strlen(void);
extern "C" void DWCi_Ndi_strncmp(void);
extern "C" void DWCi_Ndi_memclr(s32 arg0, s32 arg1);
extern "C" void DWCi_Ndi_memcpy(s32 arg0, s32 arg1, s32 arg2);
extern "C" void DWCi_Ndi_strToInt(void);
extern "C" void DWCi_Ndi_intToStr(void);
extern "C" void DWCi_Ndi_intToStrFigure(void);
extern "C" void DWCi_Ndi_hexToStrFigure(void);
extern "C" void NHTTPi_InitMutex(void);
extern "C" void NHTTPi_LockMutex(void);
extern "C" s32 NHTTPi_createCommThread(s32 arg0, s32 arg1, s32 arg2);
extern "C" void NHTTPi_destroyCommThread(s32 arg0, u8 *arg1);
extern "C" void NHTTPi_idleCommThread(s32 arg0);
extern "C" void NHTTPi_kickCommThread(s32 arg0);
extern "C" s32 NHTTPi_CheckCurrentThread(...);
extern "C" void NHTTPi_CommThreadProc(void);
extern "C" s32 NHTTPi_CpsAuthCallback(s32 arg0);
extern "C" s32 NHTTPi_CpsAuthCallbackForDebug(void);
extern "C" void NHTTPi_SetSSLseed(void);
extern "C" s32 NHTTPi_checkKeepAlive(s32 arg0);
extern "C" void NHTTPi_SocOpen(void);
extern "C" s32 NHTTPi_SocClose(...);
extern "C" s32 NHTTPi_SocConnect(s32 arg0, s32 arg1, s32 *arg2, s32 arg3, u32 arg4, s32 arg5);
extern "C" void NHTTPi_SocSSLConnect(void);
extern "C" void NHTTPi_SocRecv_sub(void);
extern "C" s32 NHTTPi_SocRecv(s32 arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
extern "C" void NHTTPi_SocSend_sub(void);
extern "C" s32 NHTTPi_SocSend(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern "C" s32 NHTTPi_SocCancel(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 NHTTPi_resolveHostname(void *arg0, s32 arg1);
extern "C" void NHTTPi_memcpy(s32 arg0, s32 arg1, s32 arg2);
extern "C" void NHTTPi_strlen(void);
extern "C" void NHTTPi_strnlen(void);
extern "C" void NHTTPi_strcmp(void);
extern "C" void NHTTPi_memclr(s32 arg0, s32 arg1);
extern "C" s32 NHTTPi_strnicmp(u8 *arg0, u8 *arg1, s32 arg2);
extern "C" s32 NHTTPi_getUrlEncodedSize(s8 *arg0);
extern "C" s32 NHTTPi_getUrlEncodedSize2(u8 *arg0, s32 arg1);
extern "C" void NHTTPi_encodeUrlChar(void);
extern "C" void NHTTPi_strToHex(void);
extern "C" void NHTTPi_strToInt(void);
extern "C" s32 NHTTPi_intToStr(u8 *arg0, u32 arg1);
extern "C" s32 NHTTPi_compareToken(s8 *a, s8 *b);
extern "C" s32 NHTTPi_strtonum(s8 *arg0, s32 arg1);
extern "C" void NHTTPi_memfind(void);
extern "C" void NHTTPi_InitBgnEndInfo(u8 *arg0);
extern "C" s32 NHTTPi_alloc(s32 arg0, s32 arg1);
extern "C" s32 NHTTPi_free(s32 arg0);
extern "C" void NHTTPi_SetError(u8 *arg0, s32 arg1);
extern "C" void NHTTPi_SetSSLError(u8 *arg0, s32 arg1);
extern "C" s32 NHTTPi_GetSSLError(u8 *arg0);
extern "C" void NHTTPi_Startup(void);
extern "C" s32 NHTTPi_CleanupAsync(s32 arg0, s32 arg1);
extern "C" s32 addHdrList(...);
extern "C" s32 incAscii(s32 arg0);
extern "C" s32 checkTagPost(...);
extern "C" N02114864 *NHTTPi_getHdrFromList(N02114864 **arg0);
extern "C" s32 NHTTPi_AddRequestHeaderField(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 NHTTPi_AddRequestPostDataAscii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void NHTTPi_InitListInfo(u8 *arg0);
extern "C" void NHTTPi_setReqQueue(void);
extern "C" s32 NHTTPi_findReqQueue(...);
extern "C" s32 NHTTPi_freeReqQueue(u8 *arg0, s32 arg1, s32 arg2);
extern "C" s32 NHTTPi_allFreeReqQueue(u8 *arg0, s32 arg1);
extern "C" N02114864 *NHTTPi_getReqFromReqQueue(N02114864 **arg0);
extern "C" void setupGetcharFromHdrRecvBuf(u8 *arg0, s32 arg1, void **arg2, s32 *arg3);
extern "C" void getcharFromHdrRecvBuf(void);
extern "C" void NHTTPi_findNextLineHdrRecvBuf(void);

extern "C" char OSi_ThreadInfo[];
extern "C" char data_ov014_02123e9d[];
extern "C" char data_ov014_02123ea6[];
extern "C" char data_ov014_02123eaf[];
extern "C" char data_ov014_02123ebc[];
extern "C" char data_ov014_02123ecc[];
extern "C" char data_ov014_02123f10[];
extern "C" char data_ov014_02123f90[];
extern "C" char NHTTPi_strMultipartBound[];
extern "C" char data_ov014_02125b44[];
extern "C" char data_ov014_02125c2c[];
extern "C" char data_ov014_02125c44[];
extern "C" char data_ov014_02125c54[];
extern "C" char data_ov014_02125c60[];
extern "C" char data_ov014_02125c6c[];
extern "C" char data_ov014_02125c74[];
extern "C" char data_ov014_02125c80[];
extern "C" char data_ov014_02125c88[];
extern "C" char data_ov014_02125c90[];
extern "C" char data_ov014_02125c98[];
extern "C" char data_ov014_02125ca0[];
extern "C" char data_ov014_02125ca8[];
extern "C" char data_ov014_02125cb0[];
extern "C" char data_ov014_02125cb8[];
extern "C" char data_ov014_02125cc0[];
extern "C" char data_ov014_02125cc8[];
extern "C" char data_ov014_02125cd8[];
extern "C" char data_ov014_02125ce0[];
extern "C" char data_ov014_02125ce4[];
extern "C" char data_ov014_02125cf0[];
extern "C" char DWCi_Ndi_dlcallback[];
extern "C" char data_ov014_02128e4c[];
extern "C" char DWCi_Ndi_dwcgamecd[];
extern "C" char DWCi_Ndi_macaddr[];
extern "C" char DWCi_Ndi_strApinfo[];
extern "C" char data_ov014_02128e92[];
extern "C" char g_MutexHttp[];
extern "C" char g_MutexAttr[];
extern "C" char DWCi_Ndi_password[];
extern "C" char DWCi_Ndi_userAgent[];
extern "C" char data_ov014_02128f14[];
extern "C" char data_ov014_02128f20[];
extern "C" char data_ov014_02128f54[];
extern "C" char data_ov014_02128fb0[];
extern "C" char data_ov014_02129030[];
extern "C" s32 MI_CpuCopy8(...);
extern "C" s32 MI_CpuFill8(...);
extern "C" s32 OS_CreateThread(...);
extern "C" s32 OS_InitMessageQueue(...);
extern "C" s32 OS_InitMutex(...);
extern "C" s32 OS_LockMutex(...);
extern "C" s32 OS_SendMessage(...);
extern "C" void OS_Sleep(void);
extern "C" s32 OS_UnlockMutex(...);
extern "C" s32 OS_WakeupThreadDirect(...);
extern "C" void STD_CompareString(void);
extern "C" void STD_GetStringLength(void);
extern "C" void _ll_udiv(void);
extern "C" s32 OS_SNPrintf(...);
extern "C" s32 OS_JoinThread(...);
extern "C" s32 OS_ReceiveMessage(...);
extern "C" void OS_GetMacAddress(void);
extern "C" s32 OS_GetLowEntropyData(...);
extern "C" void OS_Terminate(void);
extern "C" void STD_GetStringNLength(void);
extern "C" void _u32_div_f(void);
extern "C" void DWC_GetApInfo(void);
extern "C" void DWCi_BM_GetWiFiInfo(void);
extern "C" void DWCi_SetError(void);
extern "C" void DWC_NdGetProgress(void);
extern "C" s32 DWCi_Ndi_freeAttr(...);
extern "C" void getNchar(void);
extern "C" void NHTTPi_InitRequestInfo(void);
extern "C" s32 NHTTPi_destroyRequestObject(...);
extern "C" s32 NHTTPi_cancelAllRequests(...);
extern "C" s32 NHTTPi_IsCreateCommThreadMessageQueueOn(...);
extern "C" s32 NHTTPi_IsCreateCommThreadMessageQueue(...);
extern "C" void NHTTPi_CommThreadProcMain(void);
extern "C" s32 NHTTP_Startup(...);
extern "C" s32 NHTTP_CleanupAsync(...);
extern "C" void NHTTP_AddHeaderField(void);
extern "C" void NHTTP_AddPostDataAscii(void);
extern "C" void NHTTP_GetHeaderField(void);
extern "C" void NHTTP_SetVerifyOption(void);
extern "C" void NHTTP_SetRootCA(void);
extern "C" s32 NHTTPi_Request2Connection(...);
extern "C" s32 NHTTPi_GetConnectionListLength(...);
extern "C" s32 NHTTPi_CompleteCallback(...);
extern "C" s32 NHTTPi_GetSystemInfoP(...);
extern "C" s32 NHTTPi_GetBgnEndInfoP(...);
extern "C" void NHTTPi_GetListInfoP(void);
extern "C" void NHTTPi_GetReqInfoP(void);
extern "C" s32 NHTTPi_GetThreadInfoP(...);
extern "C" void NHTTPi_GetMutexInfoP(void);
extern "C" void NHTTPi_InitConnectionList(void);
extern "C" void NHTTPi_initLockReqList(void);
extern "C" s32 NHTTPi_exitLockReqList(...);
extern "C" s32 NHTTPi_lockReqList(...);
extern "C" s32 NHTTPi_unlockReqList(...);
extern "C" void NHTTP_CreateConnection(void);
extern "C" void NHTTP_DeleteConnection(void);
extern "C" s32 NHTTPi_DeleteConnection(...);
extern "C" s32 NHTTP_StartConnection(...);
extern "C" void NHTTP_CancelConnection(void);
extern "C" void NHTTP_GetConnectionStatus(void);
extern "C" void NHTTP_GetBodyBuffer(void);
extern "C" void NHTTP_GetUserParam(void);
extern "C" void NHTTP_GetConnectionError(void);
extern "C" s32 NHTTP_GetConnectionProgress(...);
extern "C" void SOCLi_TrashSocket(void);
extern "C" s32 SOC_Socket(...);
extern "C" void SOC_Connect(void);
extern "C" s32 SOC_Recv(...);
extern "C" void SOC_Send(void);
extern "C" s32 SOC_Shutdown(...);
extern "C" void SOC_Close(void);
extern "C" void SOC_GetHostByName(void);
extern "C" void SOC_InetAtoN(void);
extern "C" void SOCL_EnableSsl(void);
extern "C" s32 CPS_SslAddRandomSeed(...);
extern "C" void strlen(void);
extern "C" void strncmp(void);

extern "C" s32 decodeChar(s32 arg0)
{
    if (((u32)arg0 >= (u32)0x41 && (u32)arg0 <= (u32)0x5A)) {
        return (arg0 - 0x41);
    } else {
        if (((u32)arg0 >= (u32)0x61 && (u32)arg0 <= (u32)0x7A)) {
            return (arg0 - 0x47);
        } else {
            if (((u32)arg0 >= (u32)0x30 && (u32)arg0 <= (u32)0x39)) {
                return (arg0 + 4);
            } else {
                if (arg0 == 0x2E) {
                    return 0x3E;
                } else {
                    if (arg0 == 0x2D) {
                        arg0 = 0x3F;
                    } else {
                        arg0 = -1;
                    }
                    return arg0;
                }
            }
        }
    }
}

extern "C" s32 DWCi_Ndi_getDecodeLenBASE64(s32 arg0)
{
    return ((arg0 >> 2) + ((arg0 >> 2) << 1));
}

extern "C" s32 DWCi_Ndi_getEncodeLenBASE64(s32 arg0)
{
    return ((arg0 + 2) / 3) * 4;
}

extern "C" asm s32 DWCi_Ndi_encodeBASE64(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r7, r2
    mov r8, r1
    mov r9, r0
    cmp r7, #3
    movgt r2, #3
    mov r1, r8
    add r0, sp, #0
    mov r6, #0
    bl getNchar
    cmp r0, #0
    ble @L_02111e1c
    mov r5, #0
    ldr r10, =data_ov014_02123ecc
    mov r4, r5
    mov r11, #0x2a
@L_02111d78:
    cmp r7, #3
    strltb r5, [sp, #2]
    cmp r7, #2
    strltb r4, [sp, #1]
    ldrb r1, [sp, #2]
    ldrb r2, [sp]
    ldrb r3, [sp, #1]
    mov lr, r1, asr #6
    mov r12, r2, asr #2
    orr lr, lr, r3, lsl #2
    mov r3, r3, asr #4
    and r12, r12, #0xff
    orr r2, r3, r2, lsl #4
    ldrsb r12, [r10, r12]
    and r2, r2, #0x3f
    ldrsb r2, [r10, r2]
    strb r12, [r9]
    and r12, lr, #0x3f
    cmp r0, #1
    strb r2, [r9, #1]
    ldrgtsb r2, [r10, r12]
    and r1, r1, #0x3f
    add r8, r8, r0
    movle r2, r11
    cmp r0, #2
    ldrgtsb r1, [r10, r1]
    strb r2, [r9, #2]
    add r6, r6, #4
    movle r1, #0x2a
    strb r1, [r9, #3]
    add r9, r9, #4
    subs r7, r7, r0
    beq @L_02111e1c
    mov r2, #3
    cmp r7, #3
    movle r2, r7
    add r0, sp, #0
    mov r1, r8
    bl getNchar
    cmp r0, #0
    bgt @L_02111d78
@L_02111e1c:
    mov r1, #0
    mov r0, r6
    strb r1, [r9]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void DWCi_Ndi_decodeBASE64(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #8
    mov r9, r0
    mov r7, r2
    add r0, sp, #3
    mov r6, #0
    mov r2, #4
    mov r8, r1
    bl getNchar
    mov r5, r0
    mov r4, r6
    b @L_02111f48
@L_02111e60:
    ldrb r0, [sp, #3]
    mov r1, #0
    strb r1, [sp]
    strb r1, [sp, #1]
    strb r1, [sp, #2]
    bl decodeChar
    movs r4, r0
    bmi @L_02111ef4
    ldrb r0, [sp, #4]
    mov r1, r4, lsl #2
    strb r1, [sp]
    bl decodeChar
    movs r4, r0
    bmi @L_02111ef4
    ldrsb r2, [sp]
    ldrb r0, [sp, #5]
    mov r1, r4, lsl #0x14
    orr r2, r2, r1, asr #24
    mov r1, r4, lsl #4
    strb r2, [sp]
    strb r1, [sp, #1]
    bl decodeChar
    movs r4, r0
    bmi @L_02111ef4
    ldrsb r2, [sp, #1]
    mov r1, r4, lsl #0x16
    ldrb r0, [sp, #6]
    orr r2, r2, r1, asr #24
    mov r1, r4, lsl #6
    strb r1, [sp, #2]
    strb r2, [sp, #1]
    bl decodeChar
    movs r4, r0
    ldrplsb r1, [sp, #2]
    movpl r0, r4, lsl #0x18
    orrpl r0, r1, r0, asr #24
    strplb r0, [sp, #2]
@L_02111ef4:
    sub r2, r5, #1
    cmp r2, #0
    mov r3, #0
    ble @L_02111f1c
    add r1, sp, #0
@L_02111f08:
    ldrsb r0, [r1, r3]
    add r3, r3, #1
    cmp r3, r2
    strb r0, [r9], #1
    blt @L_02111f08
@L_02111f1c:
    sub r0, r5, #1
    sub r7, r7, #4
    cmp r7, #0
    add r8, r8, r5
    add r6, r6, r0
    ble @L_02111f58
    add r0, sp, #3
    mov r1, r8
    mov r2, #4
    bl getNchar
    mov r5, r0
@L_02111f48:
    cmp r5, #0
    ble @L_02111f58
    cmp r4, #0
    bge @L_02111e60
@L_02111f58:
    mov r1, #0
    mov r0, r6
    strb r1, [r9]
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" s32 strAlloc(s32 arg0)
{
    s32 r4;
    u8 *r5;
    s32 r6;
    s32 v0;
    s32 v1;
    v0 = ((s32 (*)(...))DWCi_Ndi_strlen)();
    v1 = ((s32 (*)(...))*(s32 *)(((u8 *)&DWCi_Ndi_dlcallback) + 0x4))((v0 + 1), 4);
    r6 = arg0;
    r4 = v0;
    arg0 = v1;
    r5 = (u8 *)v1;
    if ((s32)r5 != 0) {
        DWCi_Ndi_memcpy(arg0, r6, r4);
        *(u8 *)(r5 + r4) = 0;
    }
    return (s32)r5;
}

extern "C" s32 DWCi_NdStartup(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6)
{
    s32 r5;
    s32 r9;
    s32 v2;
    s32 v3;
    s32 v4;
    s32 v5;
    s32 v6;
    s32 v7;
    s32 v8;
    s32 v9;
    s32 t0;
    s32 t2;
    *(s32 *)(((u8 *)&DWCi_Ndi_dlcallback) + 0x4) = arg0;
    *(s32 *)(((u8 *)&DWCi_Ndi_dlcallback) + 0x14) = arg1;
    *(s32 *)(((u8 *)&DWCi_Ndi_dlcallback)) = arg6;
    *(s32 *)(((u8 *)&DWCi_Ndi_dlcallback) + 0x3C) = 0;
    *(s32 *)(((u8 *)&DWCi_Ndi_dlcallback) + 0x40) = 0;
    *(s32 *)(((u8 *)&DWCi_Ndi_dlcallback) + 0x44) = 0;
    *(s32 *)(((u8 *)&DWCi_Ndi_dlcallback) + 0xC) = 0;
    *(s32 *)(((u8 *)&DWCi_Ndi_dlcallback) + 0x10) = 0;
    *(s32 *)(((u8 *)&DWCi_Ndi_dlcallback) + 0x18) = 0;
    *(s32 *)(((u8 *)&DWCi_Ndi_dlcallback) + 0x1C) = 0;
    r9 = 0;
    DWCi_Ndi_getMacAddress((u8 *)((u8 *)&DWCi_Ndi_macaddr), arg1, arg2, arg3);
    DWCi_Ndi_getUserAgent((s32)((u8 *)&DWCi_Ndi_userAgent));
    v2 = strAlloc(arg2);
    *(s32 *)(((u8 *)&DWCi_Ndi_dlcallback) + 0x1C) = v2;
    r5 = arg0;
    if (v2 != 0) {
        v3 = strAlloc(arg3);
        *(s32 *)(((u8 *)&DWCi_Ndi_dlcallback) + 0x18) = v3;
        if (v3 != 0) {
            v4 = DWCi_Ndi_encodeBASE64((u8 *)((u8 *)&DWCi_Ndi_dwcgamecd), arg4, 4);
            *(u8 *)(((u8 *)&DWCi_Ndi_dwcgamecd) + v4) = r9;
            v5 = DWCi_Ndi_encodeBASE64((u8 *)((u8 *)&DWCi_Ndi_password), arg5, 0x10);
            *(u8 *)(((u8 *)&DWCi_Ndi_password) + v5) = r9;
            v6 = DWCi_Ndi_initHttpCallback();
            if ((v6 != 0 && (v7 = DWCi_Ndi_initLockGlobal(), v7 != 0))) {
                v8 = NHTTP_Startup(r5, arg1, 0x11);
                arg0 = v8;
                if (arg0 != (0x11 - 0x12)) {
                    v9 = DWCi_Ndi_getApInfo((u8 *)((u8 *)&DWCi_Ndi_strApinfo), (0x11 - 0x12));
                    *(s32 *)(((u8 *)&DWCi_Ndi_dlcallback) + 0xC) = v9;
                    *(s32 *)(((u8 *)&DWCi_Ndi_dlcallback) + 0x8) = 1;
                    return 1;
                } else {
                    ((s32 (*)(...))DWCi_Ndi_exitLockGlobal)(arg0, (0x11 - 0x12));
                }
            }
            t0 = *(s32 *)(((u8 *)&DWCi_Ndi_dlcallback) + 0x18);
            ((s32 (*)(...))*(s32 *)(((u8 *)&DWCi_Ndi_dlcallback) + 0x14))(t0);
            t2 = *(s32 *)(((u8 *)&DWCi_Ndi_dlcallback) + 0x1C);
            ((s32 (*)(...))*(s32 *)(((u8 *)&DWCi_Ndi_dlcallback) + 0x14))(t2);
            DWCi_NdSetError(8, 0);
            return 0;
        }
    }
    arg0 = *(s32 *)(((u8 *)&DWCi_Ndi_dlcallback) + 0x18);
    if (arg0 != 0) {
        ((s32 (*)(...))*(s32 *)(((u8 *)&DWCi_Ndi_dlcallback) + 0x14))(arg0);
    }
    arg0 = *(s32 *)(((u8 *)&DWCi_Ndi_dlcallback) + 0x1C);
    if (arg0 != 0) {
        ((s32 (*)(...))*(s32 *)(((u8 *)&DWCi_Ndi_dlcallback) + 0x14))(arg0);
    }
    DWCi_NdSetError(1, 0);
    return 0;
}

extern "C" s32 nhttpCleanupCallback(void)
{
    s32 v5;
    s32 t0;
    s32 t2;
    DWCi_Ndi_freeAttr();
    DWCi_Ndi_exitLockGlobal();
    DWCi_Ndi_exitHttpCallback();
    t0 = *(s32 *)(DWCi_Ndi_dlcallback + 0x18);
    ((s32 (*)(...))*(s32 *)(DWCi_Ndi_dlcallback + 0x14))(t0);
    t2 = *(s32 *)(DWCi_Ndi_dlcallback + 0x1C);
    ((s32 (*)(...))*(s32 *)(DWCi_Ndi_dlcallback + 0x14))(t2);
    v5 = ((s32 (*)(...))*(s32 *)(DWCi_Ndi_dlcallback + 0x24))();
    return v5;
}

extern "C" void DWCi_NdCleanupAsync(s32 arg0)
{
    *(s32 *)(DWCi_Ndi_dlcallback + 0x8) = 0;
    *(s32 *)(DWCi_Ndi_dlcallback + 0x24) = arg0;
    DWCi_NdCleanupConnectionHandle(*(s32 *)(DWCi_Ndi_dlcallback + 0x10), (s32)DWCi_Ndi_dlcallback, 0);
    NHTTP_CleanupAsync((s32)nhttpCleanupCallback);
}

extern "C" asm s32 DWCi_NdCleanupConnectionHandle(...)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r4, lr}
    mov r4, #1
    bl DWCi_Ndi_lockGlobal
    ldr r0, [sp, #8]
    cmp r0, #0
    beq @L_021121f8
    ldr r0, [sp, #8]
    bl NHTTP_GetConnectionStatus
    ldr r0, [sp, #8]
    bl NHTTP_DeleteConnection
    cmp r0, #0
    moveq r0, #0
    movne r4, #0
    streq r0, [sp, #8]
@L_021121f8:
    bl DWCi_Ndi_unlockGlobal
    mov r0, r4
    ldmia sp!, {r4, lr}
    add sp, sp, #0x10
    bx lr
}

extern "C" asm s32 DWCi_NdSetError(...)
{
    stmdb sp!, {r3, lr}
    cmp r0, #8
    addls pc, pc, r0, lsl #2
    b @L_021122b4
    dcd 0xe8bd8008
    dcd 0xea000006
    dcd 0xea00001e
    dcd 0xea000008
    dcd 0xea00000b
    dcd 0xea000013
    dcd 0xe8bd8008
    dcd 0xea00000c
    dcd 0xea000014
    dcd 0xe59f107c
    dcd 0xe3a00009
    dcd 0xebfffa65
    dcd 0xe8bd8008
    dcd 0xe59f1070
    dcd 0xe3a0000e
    dcd 0xebfffa61
    dcd 0xe8bd8008
    dcd 0xe59f1064
    dcd 0xe3a0000d
    dcd 0xebfffa5d
    dcd 0xe8bd8008
    dcd 0xe59f2058
    dcd 0xe3a0000d
    dcd 0xe0421001
    dcd 0xebfffa58
    dcd 0xe8bd8008
    dcd 0xe59f1040
    dcd 0xe3a0000d
    dcd 0xebfffa54
    dcd 0xe8bd8008
    dcd 0xe59f1038
    dcd 0xe3a00009
    dcd 0xebfffa50
    dcd 0xe8bd8008
    dcd 0xe59f102c
    dcd 0xe3a0000d
    dcd 0xebfffa4c
    dcd 0xe8bd8008
@L_021122b4:
    ldr r1, [pc, #0x18]
    mov r0, #9
    bl DWCi_SetError
    ldmia sp!, {r3, pc}
    dcd 0xffff86e7
    dcd 0xffff86d4
    dcd 0xffff86c0
    dcd 0xffff86e8
    dcd 0xffff86df
    dcd 0xffff86de
}

extern "C" s32 DWCi_NdCancelAsync(void)
{
    s32 x;
    s32 y;
    u8 *d = (u8 *)DWCi_Ndi_dlcallback;
    s32 z;
    if (*(s32 *)(d + 8) == 0)
        return 0;
    z = 0;
    x = z;
    y = z;
    ((s32 (*)(...))DWC_NdGetProgress)(&x, &y);
    if (x == y)
        return z;
    if (((s32 (*)(...))DWCi_Ndi_prepareHttpCallback)() == 0) {
        s32 t;
        ((s32 (*)(...))DWCi_Ndi_lockGlobal)();
        t = *(s32 *)(d + 0x10);
        ((s32 (*)(...))DWCi_Ndi_unlockGlobal)();
        if (((s32 (*)(...))NHTTP_CancelConnection)(t) == 0)
            z = 1;
        return z;
    }
    ((s32 (*)(...))DWCi_Ndi_unprepareHttpCallback)();
    return z;
}

extern "C" asm s32 DWCi_Ndi_getApInfo(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x10
    ldr r5, =data_ov014_02123ebc
    add r3, sp, #0
    mov r4, r0
    mov r2, #6
@L_0211238c:
    ldrb r0, [r5, #1]
    ldrb r1, [r5], #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_0211238c
    ldrb r1, [r5]
    ldr r5, =data_ov014_02128f14
    mov r0, r5
    strb r1, [r3]
    bl DWC_GetApInfo
    cmp r0, #0
    beq @L_02112454
    ldr r1, [r5]
    cmp r1, #0
    blt @L_021123dc
    cmp r1, #0xa
    addlt r0, r1, #0x30
    strltb r0, [sp, #1]
    blt @L_021123f4
@L_021123dc:
    cmp r1, #0xa
    blt @L_021123f4
    cmp r1, #0x64
    bge @L_021123f4
    add r0, sp, #0
    bl DWCi_Ndi_intToStr
@L_021123f4:
    ldr r0, =data_ov014_02128f14
    ldr r0, [r0]
    cmp r0, #4
    beq @L_0211240c
    cmp r0, #8
    bne @L_02112438
@L_0211240c:
    ldr r0, =data_ov014_02128f14
    ldr r0, [r0, #4]
    cmp r0, #0
    blt @L_02112428
    cmp r0, #0xa
    addlt r0, r0, #0x30
    strltb r0, [sp, #3]
@L_02112428:
    ldr r1, =data_ov014_02128f20
    add r0, sp, #4
    mov r2, #9
    bl DWCi_Ndi_memcpy
@L_02112438:
    add r1, sp, #0
    mov r0, r4
    mov r2, #0xd
    bl DWCi_Ndi_encodeBASE64
    add sp, sp, #0x10
    mov r0, #1
    ldmia sp!, {r3, r4, r5, pc}
@L_02112454:
    mov r0, #0
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 DWCi_Ndi_getDSdesc(s32 arg0, s32 arg1)
{
    u8 b[0x14];
    u8 c[0x10];
    s32 z;
    s32 n;
    ((s32 (*)(...))DWCi_Ndi_memclr)(b, 0x14);
    ((s32 (*)(...))DWCi_BM_GetWiFiInfo)(b);
    z = 0;
    if (*(s64 *)b == 0)
        return z;
    n = 0xD;
    if (((s32 (*)(u8 *, s64, s32))DWCi_Ndi_intToStrFigure)(c, *(s64 *)b, n) < 0)
        return z;
    ((s32 (*)(...))DWCi_Ndi_encodeBASE64)(arg1, c, n);
    ((s32 (*)(...))DWCi_Ndi_encodeBASE64)(arg0, 0x2FFFE0C, 4);
    return 1;
}

extern "C" void DWCi_Ndi_getUserAgent(s32 arg0)
{
    OS_SNPrintf(arg0, 0x21, (s32)data_ov014_02125c2c, 5, 3);
}

extern "C" asm void req_callback(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x18
    mov r8, r0
    mov r10, r1
    mov r4, r2
    mov r11, #0
    mvn r7, #0
    bl NHTTP_GetUserParam
    str r0, [sp, #4]
    ldmia r0, {r5, r6}
    ldr r0, [r0, #8]
    cmp r10, #2
    str r0, [sp]
    beq @L_02112770
    cmp r10, #3
    beq @L_0211279c
    cmp r10, #4
    bne @L_0211279c
    mov r0, r8
    bl NHTTP_GetConnectionError
    cmp r0, #8
    moveq r9, #6
    beq @L_02112738
    ldr r1, =data_ov014_02125c44
    add r2, sp, #0x10
    mov r0, r8
    bl NHTTP_GetHeaderField
    cmp r0, #3
    movne r9, #3
    bne @L_02112738
    mov r4, #3
    ldr r0, [sp, #0x10]
    mov r1, r4
    bl DWCi_Ndi_strToInt
    ldr r1, =0x12e
    cmp r0, r1
    bne @L_021126cc
    add r1, sp, #0xc
    add r2, sp, #0x14
    mov r0, r8
    mov r10, r11
    bl NHTTP_GetBodyBuffer
    movs r8, r0
    movmi r9, r4
    bmi @L_02112738
    mov r9, r10
    cmp r8, #0
    ble @L_021126bc
    ldr r4, =data_ov014_02125c54
    mov r11, #8
@L_021125f4:
    mov r2, r9
    ldr r3, [sp, #0xc]
    b @L_02112604
@L_02112600:
    add r9, r9, #1
@L_02112604:
    ldrsb r0, [r3, r9]
    cmp r0, #0x3d
    beq @L_02112618
    cmp r9, r8
    blt @L_02112600
@L_02112618:
    sub r0, r9, r2
    cmp r0, #8
    add r9, r9, #1
    bne @L_02112644
    add r0, r3, r2
    mov r1, r4
    mov r2, r11
    bl DWCi_Ndi_strncmp
    mov r10, #1
    cmp r0, #0
    movne r10, #0
@L_02112644:
    mov r1, r9
    ldr r0, [sp, #0xc]
    b @L_02112654
@L_02112650:
    add r9, r9, #1
@L_02112654:
    ldrsb r2, [r0, r9]
    cmp r2, #0x26
    cmpne r2, #0xd
    cmpne r2, #0
    beq @L_02112670
    cmp r9, r8
    blt @L_02112650
@L_02112670:
    cmp r10, #0
    sub r2, r9, r1
    add r9, r9, #1
    beq @L_021126b4
    cmp r2, #4
    mov r4, #0
    bne @L_021126bc
    add r7, sp, #8
    add r1, r0, r1
    mov r0, r7
    bl DWCi_Ndi_decodeBASE64
    mov r1, r0
    mov r0, r7
    strb r4, [r7, r1]
    bl DWCi_Ndi_strToInt
    mov r7, r0
    b @L_021126bc
@L_021126b4:
    cmp r9, r8
    blt @L_021125f4
@L_021126bc:
    cmp r7, #0
    movlt r9, #3
    movge r9, #7
    b @L_02112738
@L_021126cc:
    cmp r0, #0
    ble @L_021126dc
    cmp r0, #0xc8
    beq @L_021126e4
@L_021126dc:
    mov r9, #3
    b @L_02112738
@L_021126e4:
    cmp r5, #1
    beq @L_02112700
    cmp r5, #2
    beq @L_02112710
    cmp r5, #3
    beq @L_02112720
    b @L_02112738
@L_02112700:
    ldr r1, [sp, #4]
    mov r0, r8
    bl DWCi_Ndi_response_count
    b @L_0211272c
@L_02112710:
    ldr r1, [sp, #4]
    mov r0, r8
    bl DWCi_Ndi_response_list
    b @L_0211272c
@L_02112720:
    ldr r1, [sp, #4]
    mov r0, r8
    bl DWCi_Ndi_response_contents
@L_0211272c:
    cmp r0, #0
    movne r4, r11
    mov r9, r4
@L_02112738:
    ldr r0, [sp, #4]
    bl freeHttpParam
    bl DWCi_Ndi_unprepareHttpCallback
    cmp r6, #0
    beq @L_0211275c
    mov r0, r5
    mov r1, r9
    mov r2, r7
    blx r6
@L_0211275c:
    ldr r0, [sp]
    cmp r0, #0
    beq @L_0211279c
    bl DWCi_Ndi_kickThread
    b @L_0211279c
@L_02112770:
    mov r8, #4
    mov r0, r8
    mov r1, r7
    str r11, [r4, #8]
    bl DWCi_NdSetError
    cmp r6, #0
    beq @L_0211279c
    mov r0, r5
    mov r1, r8
    mov r2, r7
    blx r6
@L_0211279c:
    mov r0, #0
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 freeHttpParam(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r5, =DWCi_Ndi_dlcallback
    movs r4, r0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, [r4]
    cmp r0, #1
    beq @L_02112848
    cmp r0, #2
    beq @L_021127e4
    cmp r0, #3
    beq @L_02112834
    b @L_02112848
@L_021127e4:
    ldr r0, [r4, #0x1c]
    cmp r0, #0
    beq @L_02112800
    ldr r1, [r5, #0x14]
    blx r1
    mov r0, #0
    str r0, [r4, #0x1c]
@L_02112800:
    ldr r0, [r4, #0x18]
    cmp r0, #0
    beq @L_0211281c
    ldr r1, [r5, #0x14]
    blx r1
    mov r0, #0
    str r0, [r4, #0x18]
@L_0211281c:
    ldr r0, [r4, #0x14]
    ldr r1, [r5, #0x14]
    blx r1
    mov r0, #0
    str r0, [r4, #0x14]
    b @L_02112848
@L_02112834:
    ldr r0, [r4, #0xc]
    ldr r1, [r5, #0x14]
    blx r1
    mov r0, #0
    str r0, [r4, #0xc]
@L_02112848:
    ldr r1, [r5, #0x14]
    mov r0, r4
    blx r1
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void freeHttp(s32 arg0, s32 arg1)
{
    DWCi_NdCleanupConnectionHandle(arg1, arg1);
    DWCi_Ndi_unprepareHttpCallback();
    freeHttpParam(arg0);
}

extern "C" asm void setupHttp(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x108
    mov r10, r0
    mov r9, r1
    ldr r0, =data_ov014_02128e4c
    ldr r1, =data_ov014_02128e92
    mov r11, r2
    mov r7, r3
    ldr r8, [sp, #0x134]
    ldr r4, =DWCi_Ndi_dlcallback
    bl DWCi_Ndi_getDSdesc
    cmp r0, #0
    bne @L_021128cc
    mov r4, #0
    mov r1, r4
    mov r0, #8
    bl DWCi_NdSetError
    add sp, sp, #0x108
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_021128cc:
    ldr r2, [r4, #4]
    mov r0, #0x20
    mov r1, #4
    blx r2
    movs r6, r0
    bne @L_02112900
    mov r4, #0
    mov r1, r4
    mov r0, #1
    bl DWCi_NdSetError
    add sp, sp, #0x108
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02112900:
    ldr r0, [r4]
    str r0, [r6, #4]
    mov r0, #0
    str r0, [r6, #8]
    bl DWCi_Ndi_prepareHttpCallback
    cmp r0, #0
    bne @L_0211293c
    mov r0, r6
    bl freeHttpParam
    mov r1, #0
    mov r0, #2
    bl DWCi_NdSetError
    add sp, sp, #0x108
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0211293c:
    ldr r0, [r4, #0x10]
    bl DWCi_NdCleanupConnectionHandle
    cmp r0, #0
    addeq sp, sp, #0x108
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, =req_callback
    mov r5, #1
    stmia sp, {r0, r6}
    ldr r0, [r4, #0x1c]
    ldr r3, [sp, #0x130]
    mov r1, r5
    mov r2, r7
    bl NHTTP_CreateConnection
    movs r7, r0
    bne @L_021129a0
    bl DWCi_Ndi_unprepareHttpCallback
    mov r0, r6
    bl freeHttpParam
    mov r1, #0
    mov r0, #3
    bl DWCi_NdSetError
    add sp, sp, #0x108
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_021129a0:
    ldr r1, =data_ov014_02125b44
    str r6, [r10]
    mov r2, r5
    str r7, [r9]
    bl NHTTP_SetRootCA
    sub r1, r5, #2
    cmp r0, r1
    beq @L_02112cbc
    mov r0, r7
    mov r1, #0
    bl NHTTP_SetVerifyOption
    sub r1, r5, #2
    cmp r0, r1
    beq @L_02112cbc
    ldr r1, =data_ov014_02125c60
    ldr r2, =DWCi_Ndi_userAgent
    mov r0, r7
    bl NHTTP_AddHeaderField
    sub r1, r5, #2
    cmp r0, r1
    beq @L_02112cbc
    ldr r1, =data_ov014_02125c6c
    ldr r2, =DWCi_Ndi_dwcgamecd
    mov r0, r7
    bl NHTTP_AddPostDataAscii
    sub r1, r5, #2
    cmp r0, r1
    beq @L_02112cbc
    ldr r1, =data_ov014_02125c74
    ldr r2, =data_ov014_02128e4c
    mov r0, r7
    bl NHTTP_AddPostDataAscii
    sub r1, r5, #2
    cmp r0, r1
    beq @L_02112cbc
    ldr r1, =data_ov014_02125c80
    ldr r2, =DWCi_Ndi_password
    mov r0, r7
    bl NHTTP_AddPostDataAscii
    sub r1, r5, #2
    cmp r0, r1
    beq @L_02112cbc
    ldr r2, [r4, #0x18]
    ldr r1, =data_ov014_02125c88
    mov r0, r7
    bl NHTTP_AddPostDataAscii
    sub r1, r5, #2
    cmp r0, r1
    beq @L_02112cbc
    ldr r1, =data_ov014_02125c90
    ldr r2, =data_ov014_02128e92
    mov r0, r7
    mov r9, r4
    bl NHTTP_AddPostDataAscii
    sub r1, r5, #2
    cmp r0, r1
    beq @L_02112cbc
    ldr r1, =data_ov014_02125c98
    ldr r2, =DWCi_Ndi_macaddr
    mov r0, r7
    bl NHTTP_AddPostDataAscii
    sub r1, r5, #2
    cmp r0, r1
    beq @L_02112cbc
    ldr r1, =data_ov014_02125ca0
    mov r0, r7
    mov r2, r11
    bl NHTTP_AddPostDataAscii
    sub r1, r5, #2
    cmp r0, r1
    beq @L_02112cbc
    ldr r2, [r4, #0x3c]
    mov r4, #0
    cmp r2, #0
    beq @L_02112ae4
    ldr r1, =data_ov014_02125ca8
    mov r0, r7
    bl NHTTP_AddPostDataAscii
    sub r1, r5, #2
    cmp r0, r1
    beq @L_02112cbc
@L_02112ae4:
    ldr r2, [r9, #0x40]
    cmp r2, #0
    beq @L_02112b04
    ldr r1, =data_ov014_02125cb0
    mov r0, r7
    bl NHTTP_AddPostDataAscii
    cmn r0, #1
    beq @L_02112cbc
@L_02112b04:
    ldr r2, [r9, #0x44]
    cmp r2, #0
    beq @L_02112b24
    ldr r1, =data_ov014_02125cb8
    mov r0, r7
    bl NHTTP_AddPostDataAscii
    cmn r0, #1
    beq @L_02112cbc
@L_02112b24:
    ldr r0, [r9, #0xc]
    cmp r0, #0
    beq @L_02112b48
    ldr r1, =data_ov014_02125cc0
    ldr r2, =DWCi_Ndi_strApinfo
    mov r0, r7
    bl NHTTP_AddPostDataAscii
    cmn r0, #1
    beq @L_02112cbc
@L_02112b48:
    cmp r8, #0
    beq @L_02112bc8
    mov r0, r8
    bl DWCi_Ndi_strlen
    mov r5, r0
    cmp r5, #0x40
    ble @L_02112b88
    mov r1, r4
    mov r0, #5
    bl DWCi_NdSetError
    mov r0, r6
    mov r1, r7
    bl freeHttp
    add sp, sp, #0x108
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02112b88:
    ldr r10, =data_ov014_02128f54
    mov r4, #0x59
    mov r0, r10
    mov r1, r4
    bl DWCi_Ndi_memclr
    mov r0, r10
    mov r1, r8
    mov r2, r5
    bl DWCi_Ndi_encodeBASE64
    ldr r1, =data_ov014_02125cc8
    mov r2, r10
    mov r0, r7
    bl NHTTP_AddPostDataAscii
    sub r1, r4, #0x5a
    cmp r0, r1
    beq @L_02112cbc
@L_02112bc8:
    add r5, sp, #8
    mov r4, #0x80
    ldr r1, =DWCi_Ndi_dwcgamecd
    mov r0, r5
    mov r2, r4
    bl DWCi_Ndi_decodeBASE64
    ldr r1, =data_ov014_02128e4c
    mov r0, r5
    mov r2, r4
    bl DWCi_Ndi_decodeBASE64
    ldr r1, =DWCi_Ndi_password
    mov r0, r5
    mov r2, r4
    bl DWCi_Ndi_decodeBASE64
    ldr r1, [r9, #0x18]
    mov r0, r5
    mov r2, r4
    bl DWCi_Ndi_decodeBASE64
    ldr r1, =data_ov014_02128e92
    mov r0, r5
    mov r2, r4
    bl DWCi_Ndi_decodeBASE64
    ldr r1, =DWCi_Ndi_macaddr
    mov r0, r5
    mov r2, r4
    bl DWCi_Ndi_decodeBASE64
    mov r1, r11
    mov r0, r5
    mov r2, r4
    bl DWCi_Ndi_decodeBASE64
    ldr r1, =DWCi_Ndi_strApinfo
    mov r0, r5
    mov r2, r4
    bl DWCi_Ndi_decodeBASE64
    ldr r1, [r9, #0x3c]
    cmp r1, #0
    beq @L_02112c68
    mov r0, r5
    mov r2, r4
    bl DWCi_Ndi_decodeBASE64
@L_02112c68:
    ldr r1, [r9, #0x40]
    cmp r1, #0
    beq @L_02112c80
    add r0, sp, #8
    mov r2, #0x80
    bl DWCi_Ndi_decodeBASE64
@L_02112c80:
    ldr r1, [r9, #0x44]
    cmp r1, #0
    beq @L_02112c98
    add r0, sp, #8
    mov r2, #0x80
    bl DWCi_Ndi_decodeBASE64
@L_02112c98:
    cmp r8, #0
    beq @L_02112cb0
    ldr r1, =data_ov014_02128f54
    add r0, sp, #8
    mov r2, #0x80
    bl DWCi_Ndi_decodeBASE64
@L_02112cb0:
    add sp, sp, #0x108
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02112cbc:
    mov r0, r6
    mov r1, r7
    bl freeHttp
    mov r4, #0
    mov r1, r4
    mov r0, #1
    bl DWCi_NdSetError
    mov r0, r4
    add sp, sp, #0x108
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 runHttp(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 r4;
    DWCi_Ndi_lockGlobal();
    s32 v1 = NHTTP_StartConnection(arg1);
    r4 = arg1;
    if (v1 != 0) {
        DWCi_NdSetError(3, 0);
        DWCi_Ndi_unlockGlobal();
        return 0;
    }
    *(s32 *)(DWCi_Ndi_dlcallback + 0x10) = r4;
    DWCi_Ndi_unlockGlobal();
    return 1;
}

extern "C" s32 DWCi_NdGetFileListNumAsync(s32 arg0)
{
    s32 *x;
    s32 y;
    s32 z = 0;
    s32 r;
    if (((s32 (*)(...))setupHttp)(&x, &y, data_ov014_02123e9d, data_ov014_02128fb0, 0x80, z) == 0)
        return z;
    r = 1;
    x[0] = r;
    x[3] = arg0;
    if (((s32 (*)(...))runHttp)(x, y) == 0)
        r = z;
    return r;
}

extern "C" asm void DWCi_NdGetFileListAsync(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x20
    mov r10, r2
    ldr r4, =DWCi_Ndi_dlcallback
    mov r6, r10, lsl #8
    cmp r6, #0x80
    movlt r6, #0x80
    mov r11, r0
    mov r9, #4
    mov r5, r1
    ldr r2, [r4, #4]
    mov r0, r6
    mov r1, r9
    blx r2
    movs r7, r0
    bne @L_02112e6c
    mov r4, #0
    mov r1, r4
    mov r0, #1
    bl DWCi_NdSetError
    add sp, sp, #0x20
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02112e6c:
    mov r1, r5
    add r0, sp, #0x14
    bl DWCi_Ndi_intToStr
    mov r5, r0
    bl DWCi_Ndi_getEncodeLenBASE64
    ldr r2, [r4, #4]
    mov r1, r9
    add r0, r0, #1
    blx r2
    movs r8, r0
    bne @L_02112ec0
    ldr r1, [r4, #0x14]
    mov r0, r7
    blx r1
    mov r4, #0
    mov r1, r4
    mov r0, #1
    bl DWCi_NdSetError
    add sp, sp, #0x20
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02112ec0:
    add r1, sp, #0x14
    mov r2, r5
    bl DWCi_Ndi_encodeBASE64
    mov r5, #0
    strb r5, [r8, r0]
    add r0, sp, #0x14
    mov r1, r10
    bl DWCi_Ndi_intToStr
    str r0, [sp, #8]
    bl DWCi_Ndi_getEncodeLenBASE64
    ldr r2, [r4, #4]
    mov r1, r9
    add r0, r0, #1
    blx r2
    movs r9, r0
    bne @L_02112f30
    ldr r1, [r4, #0x14]
    mov r0, r8
    blx r1
    ldr r1, [r4, #0x14]
    mov r0, r7
    blx r1
    mov r1, r5
    mov r0, #1
    bl DWCi_NdSetError
    add sp, sp, #0x20
    mov r0, r5
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02112f30:
    ldr r2, [sp, #8]
    add r1, sp, #0x14
    bl DWCi_Ndi_encodeBASE64
    strb r5, [r9, r0]
    str r6, [sp]
    ldr r2, =data_ov014_02123ea6
    add r0, sp, #0x10
    add r1, sp, #0xc
    mov r3, r7
    str r5, [sp, #4]
    bl setupHttp
    cmp r0, #0
    bne @L_02112f94
    ldr r1, [r4, #0x14]
    mov r0, r9
    blx r1
    ldr r1, [r4, #0x14]
    mov r0, r8
    blx r1
    ldr r1, [r4, #0x14]
    mov r0, r7
    blx r1
    add sp, sp, #0x20
    mov r0, r5
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02112f94:
    ldr r0, [sp, #0xc]
    ldr r1, =data_ov014_02125cd8
    mov r2, r8
    bl NHTTP_AddPostDataAscii
    sub r1, r5, #1
    cmp r0, r1
    beq @L_0211304c
    ldr r0, [sp, #0xc]
    ldr r1, =data_ov014_02125ce0
    mov r2, r9
    bl NHTTP_AddPostDataAscii
    sub r1, r5, #1
    cmp r0, r1
    beq @L_0211304c
    ldr r0, [sp, #0x10]
    mov r1, #2
    str r1, [r0]
    ldr r0, [sp, #0x10]
    str r11, [r0, #0xc]
    ldr r0, [sp, #0x10]
    str r8, [r0, #0x18]
    ldr r0, [sp, #0x10]
    str r9, [r0, #0x1c]
    ldr r0, [sp, #0x10]
    str r10, [r0, #0x10]
    ldr r0, [sp, #0x10]
    str r7, [r0, #0x14]
    ldr r0, [sp, #0x10]
    ldr r1, [sp, #0xc]
    bl runHttp
    cmp r0, #0
    addne sp, sp, #0x20
    movne r0, #1
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [r4, #0x14]
    mov r0, r9
    blx r1
    ldr r1, [r4, #0x14]
    mov r0, r8
    blx r1
    ldr r1, [r4, #0x14]
    mov r0, r7
    blx r1
    add sp, sp, #0x20
    mov r0, r5
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0211304c:
    ldr r4, =DWCi_Ndi_dlcallback
    mov r0, r9
    ldr r1, [r4, #0x14]
    blx r1
    ldr r1, [r4, #0x14]
    mov r0, r8
    blx r1
    ldr r1, [r4, #0x14]
    mov r0, r7
    blx r1
    ldr r0, [sp, #0x10]
    ldr r1, [sp, #0xc]
    bl freeHttp
    mov r4, #0
    mov r1, r4
    mov r0, #1
    bl DWCi_NdSetError
    mov r0, r4
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void DWCi_NdGetFileAsync(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10
    mov r10, r0
    ldr r4, [r10, #0xac]
    mov r9, r1
    mov r8, r3
    cmp r2, r4
    mov r4, #0
    bhs @L_021130e8
    mov r1, r4
    mov r0, #5
    bl DWCi_NdSetError
    add sp, sp, #0x10
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_021130e8:
    bl DWCi_Ndi_strlen
    mov r5, r0
    cmp r5, #0x20
    ble @L_02113110
    mov r1, r4
    mov r0, #5
    bl DWCi_NdSetError
    add sp, sp, #0x10
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02113110:
    cmp r5, #0
    movle r7, r4
    ble @L_02113124
    bl DWCi_Ndi_getEncodeLenBASE64
    mov r7, r0
@L_02113124:
    ldr r11, =DWCi_Ndi_dlcallback
    add r0, r7, #1
    ldr r2, [r11, #4]
    mov r1, #4
    blx r2
    movs r6, r0
    bne @L_0211315c
    mov r4, #0
    mov r1, r4
    mov r0, #1
    bl DWCi_NdSetError
    add sp, sp, #0x10
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0211315c:
    ldr r1, [r10, #0xac]
    ldr r2, =data_ov014_02123eaf
    str r1, [sp]
    add r0, sp, #0xc
    add r1, sp, #8
    mov r3, r9
    str r8, [sp, #4]
    bl setupHttp
    cmp r0, #0
    bne @L_0211319c
    ldr r1, [r11, #0x14]
    mov r0, r6
    blx r1
    add sp, sp, #0x10
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0211319c:
    cmp r7, #0
    ble @L_021131d4
    mov r0, r6
    mov r1, r10
    mov r2, r5
    bl DWCi_Ndi_encodeBASE64
    strb r4, [r6, r0]
    ldr r0, [sp, #8]
    ldr r1, =data_ov014_02125ce4
    mov r2, r6
    bl NHTTP_AddPostDataAscii
    sub r1, r4, #1
    cmp r0, r1
    beq @L_0211322c
@L_021131d4:
    ldr r0, [sp, #0xc]
    mov r1, #3
    str r1, [r0]
    ldr r0, [sp, #0xc]
    str r6, [r0, #0xc]
    ldr r1, [r10, #0xac]
    ldr r0, [sp, #0xc]
    str r1, [r0, #0x10]
    ldr r0, [sp, #0xc]
    ldr r1, [sp, #8]
    bl runHttp
    cmp r0, #0
    addne sp, sp, #0x10
    movne r0, #1
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, =DWCi_Ndi_dlcallback
    mov r0, r6
    ldr r1, [r1, #0x14]
    blx r1
    add sp, sp, #0x10
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0211322c:
    ldr r0, [sp, #0xc]
    ldr r1, [sp, #8]
    bl freeHttp
    ldr r1, [r11, #0x14]
    mov r0, r6
    blx r1
    mov r1, r4
    mov r0, #1
    bl DWCi_NdSetError
    mov r0, r4
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 DWCi_NdGetProgress(s32 arg0, s32 arg1)
{
    s32 r12;
    s32 v0;
    s32 t0;
    r12 = arg0;
    if (*(s32 *)(((u8 *)&DWCi_Ndi_dlcallback) + 0x8) == 0) {
        return 0;
    } else {
        t0 = *(s32 *)(((u8 *)&DWCi_Ndi_dlcallback) + 0x10);
        v0 = NHTTP_GetConnectionProgress(t0, r12, arg1, (u8 *)((u8 *)&DWCi_Ndi_dlcallback));
        if (v0 == 0) {
            arg0 = 1;
        } else {
            arg0 = 0;
        }
        return arg0;
    }
}

extern "C" s32 DWCi_Ndi_response_count(s32 arg0, u8 *arg1)
{
    s32 x, y;
    s32 r = ((s32 (*)(s32, s32 *, s32 *))NHTTP_GetBodyBuffer)(arg0, &x, &y);
    if (r >= 0) {
        **(s32 **)(arg1 + 0xC) = ((s32 (*)(s32, s32))DWCi_Ndi_strToInt)(x, r);
        return **(s32 **)(arg1 + 0xC) >= 0 ? 1 : 0;
    }
    return 0;
}

extern "C" BOOL DWCi_Ndi_response_contents(s32 arg0, u8 *arg1)
{
    s32 x;
    s32 y;
    s32 r = ((s32 (*)(s32, s32 *, s32 *))NHTTP_GetBodyBuffer)(arg0, &x, &y);
    if (r == *(s32 *)(arg1 + 0x10))
        return TRUE;
    return FALSE;
}

extern "C" asm void DWCi_Ndi_response_list(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x80
    ldr r2, [r1, #0x10]
    str r1, [sp]
    mov r1, #0xb0
    mul r1, r2, r1
    mov r4, r0
    ldr r0, [sp]
    mov r2, #0
    ldr r0, [r0, #0xc]
    str r2, [sp, #4]
    bl DWCi_Ndi_memclr
    ldr r1, =data_ov014_02125cf0
    add r2, sp, #0xc
    mov r0, r4
    bl NHTTP_GetHeaderField
    cmp r0, #0
    ble @L_02113398
    ldr r1, [sp, #0xc]
    ldrsb r0, [r1]
    cmp r0, #0x30
    ldreqsb r0, [r1, #1]
    cmpeq r0, #0
    addeq sp, sp, #0x80
    moveq r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02113398:
    add r1, sp, #0x14
    add r2, sp, #0x10
    mov r0, r4
    bl NHTTP_GetBodyBuffer
    mov r4, r0
    cmp r4, #0
    ldrgt r0, [sp]
    movgt r5, #0
    ldrgt r0, [r0, #0x10]
    strgt r5, [sp, #8]
    cmpgt r0, #0
    ble @L_021135a0
@L_021133c8:
    cmp r5, r4
    movge r0, #1
    strge r0, [sp, #4]
    bge @L_021135a0
    ldr r0, [sp]
    mov r6, #0
    ldr r2, [r0, #0xc]
    ldr r0, [sp, #8]
    mov r1, #0xb0
    mla r8, r0, r1, r2
    mov r7, r5
    mov r1, r6
    str r6, [sp, #4]
    bge @L_02113584
    add r10, sp, #0x18
    mov r11, r6
@L_02113408:
    ldr r3, [sp, #0x14]
    ldrsb r0, [r3, r5]
    cmp r0, #0xd
    moveq r1, #1
    beq @L_02113578
    cmp r1, #0
    beq @L_02113474
    cmp r0, #0xa
    bne @L_02113574
    cmp r6, #5
    bne @L_02113458
    sub r0, r5, #1
    sub r1, r0, r7
    cmp r1, #8
    bgt @L_021135a0
    add r0, r3, r7
    bl DWCi_Ndi_strToInt
    cmp r0, #0
    blt @L_021135a0
    str r0, [r8, #0xac]
@L_02113458:
    cmp r6, #5
    movge r0, #1
    strge r0, [sp, #4]
    movlt r0, #0
    add r5, r5, #1
    strlt r0, [sp, #4]
    b @L_02113584
@L_02113474:
    cmp r0, #9
    bne @L_02113574
    cmp r6, #5
    addls pc, pc, r6, lsl #2
    b @L_0211356c
    b @L_021134a0
    b @L_021134bc
    b @L_02113504
    b @L_0211351c
    b @L_02113534
    b @L_0211354c
@L_021134a0:
    sub r2, r5, r7
    cmp r2, #0x20
    bhi @L_021135a0
    add r1, r3, r7
    mov r0, r8
@L_021134b4:
    bl DWCi_Ndi_memcpy
    b @L_0211356c
@L_021134bc:
    sub r9, r5, r7
    mov r0, r9
    bl DWCi_Ndi_getDecodeLenBASE64
    cmp r0, #0x66
    bhi @L_021135a0
    ldr r1, [sp, #0x14]
    mov r2, r9
    mov r0, r10
    add r1, r1, r7
    bl DWCi_Ndi_decodeBASE64
    mov r2, r0
    cmp r2, #0x66
    movhi r2, #0x66
    mov r1, r10
    add r0, r8, #0x22
    bl DWCi_Ndi_memcpy
    strh r11, [r8, #0x86]
    b @L_0211356c
@L_02113504:
    sub r2, r5, r7
    cmp r2, #0xa
    bhi @L_021135a0
    add r1, r3, r7
    add r0, r8, #0x88
    b @L_021134b4
@L_0211351c:
    sub r2, r5, r7
    cmp r2, #0xa
    bhi @L_021135a0
    add r1, r3, r7
    add r0, r8, #0x93
    b @L_021134b4
@L_02113534:
    sub r2, r5, r7
    cmp r2, #0xa
    bhi @L_021135a0
    add r1, r3, r7
    add r0, r8, #0x9e
    b @L_021134b4
@L_0211354c:
    sub r1, r5, r7
    cmp r1, #8
    bgt @L_021135a0
    add r0, r3, r7
    bl DWCi_Ndi_strToInt
    cmp r0, #0
    blt @L_021135a0
    str r0, [r8, #0xac]
@L_0211356c:
    add r6, r6, #1
    add r7, r5, #1
@L_02113574:
    mov r1, #0
@L_02113578:
    add r5, r5, #1
    cmp r5, r4
    blt @L_02113408
@L_02113584:
    ldr r0, [sp]
    ldr r1, [r0, #0x10]
    ldr r0, [sp, #8]
    add r0, r0, #1
    str r0, [sp, #8]
    cmp r0, r1
    blt @L_021133c8
@L_021135a0:
    ldr r0, [sp, #4]
    add sp, sp, #0x80
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 DWCi_Ndi_initLockGlobal(void)
{
    OS_InitMutex((s32)g_MutexAttr);
    return 1;
}

extern "C" void DWCi_Ndi_exitLockGlobal(void)
{
}

extern "C" void DWCi_Ndi_lockGlobal(void)
{
    OS_LockMutex((s32)g_MutexAttr);
}

extern "C" void DWCi_Ndi_unlockGlobal(void)
{
    OS_UnlockMutex((s32)g_MutexAttr);
}

extern "C" s32 DWCi_Ndi_initHttpCallback(void)
{
    OS_InitMutex((s32)g_MutexHttp);
    *(s32 *)(DWCi_Ndi_dlcallback + 0x20) = 0;
    return 1;
}

extern "C" void DWCi_Ndi_exitHttpCallback(void)
{
}

extern "C" s32 DWCi_Ndi_prepareHttpCallback(void)
{
    s32 r4;
    OS_LockMutex((u8 *)((u8 *)&g_MutexHttp));
    r4 = 1;
    if (*(s32 *)(((u8 *)&DWCi_Ndi_dlcallback) + 0x20) != 0) {
        r4 = 0;
    }
    if (r4 != 0) {
        *(s32 *)(((u8 *)&DWCi_Ndi_dlcallback) + 0x20) = 1;
    }
    OS_UnlockMutex((u8 *)((u8 *)&g_MutexHttp));
    return r4;
}

extern "C" void DWCi_Ndi_unprepareHttpCallback(void)
{
    OS_LockMutex((s32)g_MutexHttp);
    *(s32 *)(DWCi_Ndi_dlcallback + 0x20) = 0;
    OS_UnlockMutex((s32)g_MutexHttp, (s32)DWCi_Ndi_dlcallback, 0);
}

extern "C" void DWCi_Ndi_kickThread(s32 arg0)
{
    OS_SendMessage(arg0, 0, 0);
}

extern "C" asm s32 DWCi_Ndi_getMacAddress(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x14
    add r6, sp, #0
    mov r8, r0
    mov r0, r6
    bl OS_GetMacAddress
    mov r7, #0
    add r5, sp, #6
    mov r4, #2
@L_021136d0:
    ldrb r1, [r6, r7]
    mov r2, r4
    add r0, r5, r7, lsl #1
    bl DWCi_Ndi_hexToStrFigure
    add r7, r7, #1
    cmp r7, #6
    blt @L_021136d0
    mov r0, r8
    mov r1, r5
    mov r2, #0xc
    bl DWCi_Ndi_encodeBASE64
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" void DWCi_Ndi_strlen(void)
{
    strlen();
}

extern "C" void DWCi_Ndi_strncmp(void)
{
    strncmp();
}

extern "C" void DWCi_Ndi_memclr(s32 arg0, s32 arg1)
{
    MI_CpuFill8(arg0, 0, arg1);
}

extern "C" void DWCi_Ndi_memcpy(s32 arg0, s32 arg1, s32 arg2)
{
    MI_CpuCopy8(arg1, arg0, arg2, arg0);
}

extern "C" void DWCi_Ndi_strToInt(void)
{
    NHTTPi_strToInt();
}

extern "C" void DWCi_Ndi_intToStr(void)
{
    ((void (*)(void))NHTTPi_intToStr)();
}

extern "C" asm void DWCi_Ndi_intToStrFigure(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r8, r2
    ldr r4, =0x1634578
    ldr r2, =0x5d8a0000
    mov r9, r1
    cmp r8, r4
    mov r10, r0
    mov r11, r3
    mov r5, #0
    cmpeq r9, r2
    subhs r0, r5, #1
    ldmhsia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r4, r5
    mov r0, r5
@L_02113798:
    ldr r1, =data_ov014_02123f10
    add r1, r1, r4, lsl #3
    ldr r6, [r1, #4]
    ldr r1, =data_ov014_02123f10
    cmp r8, r6
    ldr r7, [r1, r4, lsl #3]
    cmpeq r9, r7
    blo @L_021137ec
    mov r0, r9
    mov r1, r8
    mov r2, r7
    mov r3, r6
    bl _ll_udiv
    umull r3, r2, r0, r7
    mla r2, r0, r6, r2
    add r0, r0, #0x30
    subs r9, r9, r3
    strb r0, [r10, r5]
    sbc r8, r8, r2
    mov r0, #1
    b @L_02113808
@L_021137ec:
    cmp r0, #0
    bne @L_02113800
    rsb r1, r4, #0x11
    cmp r1, r11
    bgt @L_0211380c
@L_02113800:
    mov r1, #0x30
    strb r1, [r10, r5]
@L_02113808:
    add r5, r5, #1
@L_0211380c:
    add r4, r4, #1
    cmp r4, #0x10
    blt @L_02113798
    adds r0, r9, #0x30
    strb r0, [r10, r5]
    add r0, r5, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void DWCi_Ndi_hexToStrFigure(void)
{
    stmdb sp!, {r3, lr}
    mov lr, #0
    cmp r2, #8
    subgt r0, lr, #1
    ldmgtia sp!, {r3, pc}
    cmp r2, #1
    mov r12, #1
    blt @L_02113884
@L_02113854:
    sub r3, r2, r12
    mov r3, r3, lsl #2
    mov r3, r1, lsr r3
    and r3, r3, #0xf
    cmp r3, #0xa
    addlo r3, r3, #0x30
    addhs r3, r3, #0x57
    add r12, r12, #1
    strb r3, [r0, lr]
    add lr, lr, #1
    cmp r12, r2
    ble @L_02113854
@L_02113884:
    mov r0, lr
    ldmia sp!, {r3, pc}
}

extern "C" void NHTTPi_InitMutex(void)
{
    OS_InitMutex();
}

extern "C" void NHTTPi_LockMutex(void)
{
    OS_LockMutex();
}

extern "C" s32 NHTTPi_createCommThread(s32 arg0, s32 arg1, s32 arg2)
{
    s32 r4;
    s32 r5;
    s32 r6;
    s32 v0;
    v0 = NHTTPi_IsCreateCommThreadMessageQueue(arg0, arg1, arg2);
    r4 = arg2;
    r5 = arg1;
    r6 = arg0;
    if (v0 == 0) {
        OS_InitMessageQueue(r6, (r6 + 0x20), 3);
        NHTTPi_IsCreateCommThreadMessageQueueOn(r6);
    }
    OS_CreateThread((r6 + 0x2C), (s32)NHTTPi_CommThreadProc, 0, (r4 + 0x2000), 0x2000, r5);
    OS_WakeupThreadDirect((r6 + 0x2C));
    return 1;
}

extern "C" void NHTTPi_destroyCommThread(s32 arg0, u8 *arg1)
{
    *(s32 *)(arg1 + 0x18) = 1;
    NHTTPi_kickCommThread(arg0);
    OS_JoinThread((arg0 + 0x2C));
}

extern "C" void NHTTPi_idleCommThread(s32 arg0)
{
    s32 local[1];
    OS_ReceiveMessage(arg0, (s32)((u8 *)local), 1);
    return;
}

extern "C" void NHTTPi_kickCommThread(s32 arg0)
{
    OS_SendMessage(arg0, 0, 0);
}

extern "C" asm s32 NHTTPi_CheckCurrentThread(...)
{
    stmdb sp!, {r3, lr}
    ldr r2, =OSi_ThreadInfo
    add r0, r0, #0x2c
    ldr r2, [r2, #4]
    cmp r2, #0
    ldmeqia sp!, {r3, pc}
    cmp r1, #0
    bne @L_02113984
    cmp r2, r0
    bne @L_02113994
@L_02113984:
    cmp r1, #0
    ldmeqia sp!, {r3, pc}
    cmp r2, r0
    ldmneia sp!, {r3, pc}
@L_02113994:
    bl OS_Terminate
    ldmia sp!, {r3, pc}
}

extern "C" void NHTTPi_CommThreadProc(void)
{
    NHTTPi_CommThreadProcMain();
}

extern "C" s32 NHTTPi_CpsAuthCallback(s32 arg0)
{
    return ((arg0 & 0x8000) != 0 ? (arg0 & -0x8001) : arg0);
}

extern "C" s32 NHTTPi_CpsAuthCallbackForDebug(void)
{
    return 0;
}

extern "C" void NHTTPi_SetSSLseed(void)
{
    OS_GetLowEntropyData((s32)data_ov014_02129030);
    CPS_SslAddRandomSeed((s32)data_ov014_02129030, 0x20);
}

extern "C" s32 NHTTPi_checkKeepAlive(s32 arg0)
{
    s32 local[1];
    s32 r4;
    s32 r5;
    s32 v0;
    r5 = 0;
    if (arg0 == (r5 - 1)) {
        r5 = (r5 - 1);
    } else {
        r4 = 4;
        v0 = SOC_Recv(arg0, (s32)((u8 *)local), 1, 4);
        if (v0 != (r4 - 10)) {
            r5 = (r4 - 5);
        }
    }
    return r5;
}

extern "C" void NHTTPi_SocOpen(void)
{
    SOC_Socket(2, 1, 0);
}

extern "C" asm s32 NHTTPi_SocClose(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r10, r2
    mov r0, r10
    mov r4, r1
    bl SOC_Close
    movs r8, r0
    beq @L_02113a60
    cmn r8, #0x1a
    bne @L_02113aa0
@L_02113a60:
    mov r9, #0
    mov r7, #0x1f4
    ldr r5, =0x2710
    mvn r6, #0x19
    b @L_02113a84
@L_02113a74:
    mov r0, r7
    bl OS_Sleep
    bl SOCLi_TrashSocket
    add r9, r9, #0x1f4
@L_02113a84:
    mov r0, r10
    bl SOC_Close
    mov r8, r0
    cmp r8, r6
    bne @L_02113aa0
    cmp r9, r5
    ble @L_02113a74
@L_02113aa0:
    cmn r8, #0x1a
    cmpne r4, #0
    ldrne r0, [r4, #0xac]
    cmpne r0, #0
    beq @L_02113ac0
    bl NHTTPi_free
    mov r0, #0
    str r0, [r4, #0xac]
@L_02113ac0:
    mov r0, r8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" s32 NHTTPi_SocConnect(s32 arg0, s32 arg1, s32 *arg2, s32 arg3, u32 arg4, s32 arg5)
{
    A02113acc a;
    s32 x = (u16)arg5;
    a.len = 8;
    a.fam = 2;
    a.port = ((x >> 8) & 0xFF) | ((x << 8) & 0xFF00);
    a.addr = arg4;
    if (arg2[2] != 0 && arg2[3] == 0) {
        s32 r = ((s32 (*)(...))NHTTPi_SocSSLConnect)(arg0, arg1, arg2, arg3);
        if (r < 0)
            return r;
    }
    if (((s32 (*)(...))SOC_Connect)(arg3, &a) < 0)
        return *arg2 != 0 ? -0x3EA : -0x3E9;
    return 0;
}

extern "C" asm void NHTTPi_SocSSLConnect(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r2
    ldr r4, [r7, #0xac]
    mov r5, r3
    cmp r4, #0
    bne @L_02113bb4
    mov r6, #0x830
    mov r0, r6
    mov r1, #4
    bl NHTTPi_alloc
    mov r4, r0
    mov r1, r6
    str r4, [r7, #0xac]
    bl NHTTPi_memclr
@L_02113bb4:
    ldr r0, [r7, #0xc0]
    mov r1, r4
    str r0, [r4, #0x814]
    ldr r0, [r7, #0xc4]
    str r0, [r4, #0x818]
    ldr r0, [r7, #0x28]
    str r0, [r4, #0x800]
    ldr r0, [r7, #0xd8]
    cmp r0, #0
    ldrne r0, =NHTTPi_CpsAuthCallbackForDebug
    ldreq r0, =NHTTPi_CpsAuthCallback
    str r0, [r4, #0x810]
    mov r0, r5
    bl SOCL_EnableSsl
    cmp r0, #0
    mvnlt r0, #0x3e8
    ldmltia sp!, {r3, r4, r5, r6, r7, pc}
    bl NHTTPi_SetSSLseed
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void NHTTPi_SocRecv_sub(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r9, r0
    mov r7, r3
    mov r8, r2
    cmp r7, #0
    add r4, r9, #0x40
    mov r5, #0
    ble @L_02113ccc
    add r0, r9, #0x8000
    ldr r0, [r0, #0x44]
    cmp r0, #0
    bne @L_02113c64
    ldr r3, [sp, #0x20]
    mov r0, r1
    mov r1, r4
    mov r2, #0x8000
    bl SOC_Recv
    cmp r0, #0
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    add r1, r9, #0x8000
    str r0, [r1, #0x44]
    str r5, [r1, #0x40]
@L_02113c64:
    add r0, r9, #0x8000
    ldr r6, [r0, #0x44]
    cmp r6, #0
    beq @L_02113ccc
    add r0, r9, #0x8000
    ldr r1, [r0, #0x40]
    cmp r7, r6
    movls r6, r7
    mov r0, r8
    mov r2, r6
    add r1, r4, r1
    bl NHTTPi_memcpy
    add r0, r9, #0x8000
    ldr r1, [r0, #0x44]
    subs r1, r1, r6
    str r1, [r0, #0x44]
    ldrne r1, [r0, #0x40]
    addne r1, r1, r6
    bne @L_02113cc4
    mov r0, r4
    mov r1, #0x8000
    bl NHTTPi_memclr
    add r0, r9, #0x8000
    mov r1, #0
@L_02113cc4:
    str r1, [r0, #0x40]
    mov r5, r6
@L_02113ccc:
    mov r0, r5
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" s32 NHTTPi_SocRecv(s32 arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5)
{
    s32 h = ((s32 (*)(...))NHTTPi_Request2Connection)(arg0);
    s32 r;
    if (h != 0) {
        r = ((s32 (*)(...))NHTTPi_SocRecv_sub)(h, arg2, arg3, arg4, arg5);
    } else {
        return -0x3E9;
    }
    if (r >= 0)
        return r;
    if (*arg1 != 0)
        return -0x3EA;
    return r == -0x38 ? 0 : -0x3E9;
}

extern "C" void NHTTPi_SocSend_sub(void)
{
    SOC_Send();
}

extern "C" s32 NHTTPi_SocSend(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    s32 r0;
    s32 v0;
    v0 = ((s32 (*)(...))NHTTPi_SocSend_sub)(arg1, arg2, arg3, arg4);
    if (v0 >= 0)
        return v0;
    r0 = v0;
    if (*(s32 *)(arg0) != 0) {
        return -0x3EA;
    } else {
        if (r0 == -0x38) {
            r0 = 0;
        } else {
            r0 = -0x3E9;
        }
        return r0;
    }
}

extern "C" s32 NHTTPi_SocCancel(s32 arg0, s32 arg1, s32 arg2)
{
    s32 r4;
    s32 r5;
    s32 v2;
    NHTTPi_lockReqList(arg0, arg1, arg2);
    r4 = arg2;
    r5 = arg0;
    if (r4 >= 0) {
        SOC_Shutdown(r4, 2);
    }
    v2 = NHTTPi_unlockReqList(r5);
    return v2;
}

extern "C" s32 NHTTPi_resolveHostname(void *arg0, s32 arg1)
{
    s32 v;
    s32 x;
    v = 0;
    if (((s32 (*)(...))SOC_InetAtoN)(arg1, &x, 0) != 0) {
        v = x;
    } else {
        u8 *p = (u8 *)((s32 (*)(...))SOC_GetHostByName)(arg1);
        if (p != 0 && *(s16 *)(p + 0xA) > 0)
            ((s32 (*)(...))NHTTPi_memcpy)(&v, **(s32 **)(p + 0xC), 4);
    }
    return v;
}

extern "C" void NHTTPi_memcpy(s32 arg0, s32 arg1, s32 arg2)
{
    MI_CpuCopy8(arg1, arg0, arg2, arg0);
}

extern "C" void NHTTPi_strlen(void)
{
    STD_GetStringLength();
}

extern "C" void NHTTPi_strnlen(void)
{
    STD_GetStringNLength();
}

extern "C" void NHTTPi_strcmp(void)
{
    STD_CompareString();
}

extern "C" void NHTTPi_memclr(s32 arg0, s32 arg1)
{
    MI_CpuFill8(arg0, 0, arg1);
}

extern "C" s32 NHTTPi_strnicmp(u8 *arg0, u8 *arg1, s32 arg2)
{
    s32 r3;
    s32 r4;
    s32 r5;
    s32 r6;
    s32 r7;
    s32 r8;
    s32 r9;
    s32 r12;
    s32 lr;
    s8 t0;
    r4 = 0;
    if (arg2 > 0) {
        do {
            r3 = 1;
            r5 = 1;
            r12 = 1;
            lr = 1;
            r9 = *(s8 *)(arg0);
            t0 = *(s8 *)(arg0);
            arg0 = (u8 *)(arg0 + 1);
            r8 = *(s8 *)(arg1);
            arg1 = (u8 *)(arg1 + 1);
            if ((((t0 == 0 || r8 == 0) && (r3 = 1, r5 = 1, r12 = 1, lr = 1, r9 == 0)) && r8 == 0)) {
                arg2 = 0;
                break;
            }
            r3 = 1;
            r5 = 1;
            r12 = 1;
            lr = 1;
            r6 = 1;
            if (r8 < 0x41) {
                r6 = r4;
            }
            r3 = 1;
            r5 = 1;
            r12 = 1;
            lr = 1;
            r7 = 1;
            if (r8 > 0x5A) {
                r7 = r4;
            }
            r3 = 1;
            r5 = 1;
            r12 = 1;
            lr = 1;
            if ((r6 & r7) != 0) {
                r8 = (r8 + 0x20);
            }
            r3 = 1;
            r5 = 1;
            r12 = 1;
            lr = 1;
            r6 = 1;
            if (r9 < 0x41) {
                r6 = r4;
            }
            r3 = 1;
            r5 = 1;
            r12 = 1;
            lr = 1;
            r7 = 1;
            if (r9 > 0x5A) {
                r7 = r4;
            }
            r3 = 1;
            r5 = 1;
            r12 = 1;
            lr = 1;
            if ((r6 & r7) != 0) {
                r9 = (r9 + 0x20);
            }
            r3 = 1;
            r5 = 1;
            r12 = 1;
            lr = 1;
        } while ((r9 == r8 && (arg2 = (arg2 - 1), arg2 > 0)));
    }
    return arg2;
}

extern "C" s32 NHTTPi_getUrlEncodedSize(s8 *arg0)
{
    s32 n = 0;
    s32 c = *arg0++;
    while (c != 0) {
        if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == ' ')
            n++;
        else
            n += 3;
        c = *arg0++;
    }
    return n;
}

extern "C" s32 NHTTPi_getUrlEncodedSize2(u8 *arg0, s32 arg1)
{
    s32 r2;
    s32 r3;
    s32 r12;
    r2 = 0;
    r3 = 0;
    r12 = *(s8 *)(arg0);
    arg0 = (u8 *)(arg0 + 1);
    if ((arg1 > 0 && arg1 > 0)) {
        do {
            if (((((r12 >= 0x30 && r12 <= 0x39) || (r12 >= 0x41 && r12 <= 0x5A)) || (r12 >= 0x61 && r12 <= 0x7A)) || r12 == 0x20)) {
                r3 = (r3 + 1);
            } else {
                r3 = (r3 + 3);
            }
            r2 = (r2 + 1);
            r12 = *(s8 *)(arg0);
            arg0 = (u8 *)(arg0 + 1);
        } while (r2 < arg1);
    }
    return r3;
}

extern "C" asm void NHTTPi_encodeUrlChar(void)
{
    cmp r1, #0x20
    moveq r1, #0x2b
    streqb r1, [r0]
    moveq r0, #1
    bxeq lr
    cmp r1, #0x30
    blt @L_02114034
    cmp r1, #0x39
    ble @L_02114054
@L_02114034:
    cmp r1, #0x41
    blt @L_02114044
    cmp r1, #0x5a
    ble @L_02114054
@L_02114044:
    cmp r1, #0x61
    blt @L_02114060
    cmp r1, #0x7a
    bgt @L_02114060
@L_02114054:
    strb r1, [r0]
    mov r0, #1
    bx lr
@L_02114060:
    mov r2, r1, asr #4
    and r3, r2, #0xf
    mov r2, #0x25
    strb r2, [r0]
    cmp r3, #0xa
    addlt r2, r3, #0x30
    addge r2, r3, #0x37
    and r1, r1, #0xf
    cmp r1, #0xa
    addlt r1, r1, #0x30
    addge r1, r1, #0x37
    strb r2, [r0, #1]
    strb r1, [r0, #2]
    mov r0, #3
    bx lr
}

extern "C" asm void NHTTPi_strToHex(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    cmp r1, #8
    mvngt r0, #0
    ldmgtia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    bne @L_021140c0
    ldrsb r2, [r0]
    cmp r2, #0x37
    mvngt r0, #0
    ldmgtia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_021140c0:
    mov r8, #0
    mov r9, r8
    mov r7, r8
    cmp r1, #0
    ble @L_02114180
    mov r6, #1
    mov r5, r8
    mov lr, r8
    mov r4, r6
    mov r3, r6
    mov r12, r6
@L_021140ec:
    ldrsb r11, [r0, r7]
    mov r2, r6
    mov r10, r4
    cmp r11, #0x41
    movlt r2, r5
    cmp r11, #0x5a
    movgt r10, lr
    tst r2, r10
    addne r11, r11, #0x20
    mov r2, r11, lsl #0x18
    mov r2, r2, asr #0x18
    cmp r2, #0x30
    blt @L_02114134
    cmp r2, #0x39
    addle r2, r2, r8, lsl #4
    movle r9, r12
    suble r8, r2, #0x30
    ble @L_02114174
@L_02114134:
    cmp r2, #0x61
    blt @L_02114150
    cmp r2, #0x66
    addle r2, r2, r8, lsl #4
    movle r9, r3
    suble r8, r2, #0x57
    ble @L_02114174
@L_02114150:
    cmp r9, #0
    beq @L_02114164
    cmp r2, #0x20
    cmpne r2, #0
    beq @L_02114180
@L_02114164:
    cmp r9, #0
    cmpeq r2, #0x20
    mvnne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02114174:
    add r7, r7, #1
    cmp r7, r1
    blt @L_021140ec
@L_02114180:
    mov r0, r8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void NHTTPi_strToInt(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    cmp r1, #0xa
    mvngt r0, #0
    ldmgtia sp!, {r3, r4, r5, pc}
    mov r4, #0
    mov r3, r4
    mov lr, r4
    cmp r1, #0
    ble @L_0211421c
    mov r12, #1
    mov r2, #0xa
@L_021141b4:
    cmp r3, #0
    ldrsb r5, [r0, lr]
    beq @L_021141cc
    cmp r5, #0x20
    cmpne r5, #0
    beq @L_0211421c
@L_021141cc:
    cmp r3, #0
    bne @L_021141dc
    cmp r5, #0x20
    beq @L_02114210
@L_021141dc:
    cmp r5, #0x30
    blt @L_021141ec
    cmp r5, #0x39
    ble @L_021141f4
@L_021141ec:
    mvn r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_021141f4:
    mla r3, r4, r2, r5
    mov r5, r4
    sub r4, r3, #0x30
    cmp r5, r4
    mov r3, r12
    mvngt r0, #0
    ldmgtia sp!, {r3, r4, r5, pc}
@L_02114210:
    add lr, lr, #1
    cmp lr, r1
    blt @L_021141b4
@L_0211421c:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 NHTTPi_intToStr(u8 *arg0, u32 arg1)
{
    T02114224 t = *(T02114224 *)data_ov014_02123f90;
    s32 i;
    s32 n = 0;
    s32 started = 0;
    for (i = 0; i < 9; i++) {
        u32 d = t.v[i];
        if (arg1 >= d) {
            u32 q = arg1 / d;
            arg0[n] = q + '0';
            started = 1;
            arg1 -= q * d;
            n++;
        } else if (started != 0) {
            arg0[n] = '0';
            n++;
        }
    }
    arg0[n] = arg1 + '0';
    return n + 1;
}

static inline s32 low021142d0(s32 c) { return ((c >= 0x41) & (c <= 0x5A)) ? c + 0x20 : c; }
extern "C" s32 NHTTPi_compareToken(s8 *a, s8 *b)
{
    s32 cb;
    s32 ca;
    s32 la;
    while (cb = low021142d0(*b), ca = *a, la = low021142d0(ca), la == cb) {
        if (ca == 0 || ca == 0x20)
            return 0;
        a++;
        b++;
    }
    return -1;
}

extern "C" s32 NHTTPi_strtonum(s8 *arg0, s32 arg1)
{
    s32 c = 0;
    s32 v = c;
    while (arg1-- != 0) {
        s8 ch = *arg0;
        if (ch != 0x20 && ch >= 0x30 && ch <= 0x39) {
            v = v * 10 + ch - 0x30;
            c++;
            if (c > 9)
                return -1;
        }
        arg0++;
    }
    if (c == 0)
        v = -1;
    return v;
}

extern "C" asm void NHTTPi_memfind(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    cmp r1, r3
    mvnlt r0, #0
    ldmltia sp!, {r4, r5, r6, r7, r8, pc}
    sub r1, r1, r3
    add r8, r1, #1
    cmp r8, #0
    mov r4, #0
    ble @L_0211444c
    ldrsb r7, [r2]
    mov lr, #1
@L_021143fc:
    ldrsb r1, [r0, r4]
    cmp r7, r1
    bne @L_02114440
    mov r5, lr
    cmp r3, #1
    add r6, r0, r4
    ble @L_02114434
@L_02114418:
    ldrsb r12, [r6, r5]
    ldrsb r1, [r2, r5]
    cmp r12, r1
    bne @L_02114434
    add r5, r5, #1
    cmp r5, r3
    blt @L_02114418
@L_02114434:
    cmp r5, r3
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
@L_02114440:
    add r4, r4, #1
    cmp r4, r8
    blt @L_021143fc
@L_0211444c:
    mvn r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" void NHTTPi_InitBgnEndInfo(u8 *arg0)
{
    *(s32 *)(arg0) = 0;
    *(s32 *)(arg0 + 0x4) = 0;
    *(s32 *)(arg0 + 0x8) = 0;
    *(s32 *)(arg0 + 0xC) = (0 - 1);
    NHTTPi_SetSSLError(arg0, 0);
    NHTTPi_SetError(arg0, 0);
    *(s32 *)(arg0 + 0x18) = 0;
    *(s32 *)(arg0 + 0x1C) = 0;
    *(s32 *)(arg0 + 0x20) = 0;
}

extern "C" s32 NHTTPi_alloc(s32 arg0, s32 arg1)
{
    s32 v0;
    s32 v1;
    s32 t0;
    v0 = NHTTPi_GetSystemInfoP(arg0, arg1);
    if (*(s32 *)(((u8 *)v0)) == 0)
        return 0;
    t0 = *(s32 *)(((u8 *)v0));
    v1 = ((s32 (*)(...))*(s32 *)(((u8 *)v0)))(arg0, arg1, t0);
    return v1;
}

extern "C" s32 NHTTPi_free(s32 arg0)
{
    s32 v0;
    s32 v1;
    s32 t0;
    v0 = NHTTPi_GetSystemInfoP(arg0);
    if (*(s32 *)(((u8 *)v0) + 0x4) == 0)
        return v0;
    t0 = *(s32 *)(((u8 *)v0) + 0x4);
    v1 = ((s32 (*)(...))*(s32 *)(((u8 *)v0) + 0x4))(arg0, t0);
    return v1;
}

extern "C" void NHTTPi_SetError(u8 *arg0, s32 arg1)
{
    *(s32 *)(arg0 + 0x14) = arg1;
}

extern "C" void NHTTPi_SetSSLError(u8 *arg0, s32 arg1)
{
    *(s32 *)(arg0 + 0x10) = arg1;
}

extern "C" s32 NHTTPi_GetSSLError(u8 *arg0)
{
    return *(s32 *)(arg0 + 0x10);
}

extern "C" asm void NHTTPi_Startup(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    mov r9, r1
    mov r8, r2
    mov r7, r3
    bl NHTTPi_GetBgnEndInfoP
    mov r6, r0
    mov r0, r10
    bl NHTTPi_GetListInfoP
    mov r5, r0
    mov r0, r10
    bl NHTTPi_GetReqInfoP
    mov r4, r0
    mov r0, r10
    bl NHTTPi_GetMutexInfoP
    mov r11, r0
    mov r0, r10
    bl NHTTPi_GetThreadInfoP
    str r9, [r6]
    str r8, [r6, #4]
    mov r8, r0
    mov r0, r5
    mov r5, #0
    str r5, [r6, #0x14]
    str r5, [r6, #0x10]
    str r5, [r6, #0x18]
    str r5, [r6, #0x24]
    bl NHTTPi_InitListInfo
    mov r0, r4
    bl NHTTPi_InitRequestInfo
    mov r0, r11
    bl NHTTPi_initLockReqList
    bl NHTTPi_InitConnectionList
    sub r0, r5, #1
    str r0, [r6, #0xc]
    mov r0, #0x2000
    mov r1, #8
    bl NHTTPi_alloc
    str r0, [r6, #0x1c]
    movs r2, r0
    bne @L_021145c0
    mov r0, r6
    mov r1, #1
    bl NHTTPi_SetError
    bl NHTTPi_exitLockReqList
    mov r0, r5
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_021145c0:
    mov r0, r8
    mov r1, r7
    bl NHTTPi_createCommThread
    cmp r0, #0
    movne r0, #1
    strne r0, [r6, #8]
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r6
    mov r1, #9
    bl NHTTPi_SetError
    ldr r0, [r6, #0x1c]
    bl NHTTPi_free
    str r5, [r6, #0x1c]
    bl NHTTPi_exitLockReqList
    mov r0, r5
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 NHTTPi_CleanupAsync(s32 arg0, s32 arg1)
{
    u8 *r5;
    s32 r6;
    s32 v0;
    s32 v1;
    s32 v8;
    s32 t0;
    s32 t1;
    v0 = NHTTPi_GetBgnEndInfoP(arg0, arg1);
    v1 = NHTTPi_GetThreadInfoP(arg0);
    NHTTPi_CheckCurrentThread(v1, 1);
    NHTTPi_cancelAllRequests(arg0);
    NHTTPi_destroyCommThread(v1, (u8 *)v0);
    t0 = *(s32 *)(((u8 *)v0) + 0x1C);
    NHTTPi_free(t0);
    *(s32 *)(((u8 *)v0) + 0x1C) = 0;
    NHTTPi_exitLockReqList();
    *(s32 *)(((u8 *)v0) + 0x8) = 0;
    r5 = (u8 *)v0;
    r6 = arg1;
    if (r6 != 0) {
        ((s32 (*)(...))r6)();
    }
    v8 = NHTTPi_GetConnectionListLength();
    if (*(s32 *)(r5 + 0xC) < 0)
        return v8;
    t1 = *(s32 *)(r5 + 0xC);
    NHTTPi_SocClose(0, 0, t1);
    *(s32 *)(r5 + 0xC) = (0 - 1);
    return (0 - 1);
}

extern "C" asm s32 addHdrList(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r9, r0
    ldr r10, [r9]
    mov r8, r1
    mov r7, r2
    mov r6, r3
    cmp r10, #0
    mov r4, #0
    beq @L_02114708
    ldr r1, [r10, #8]
    mov r0, r7
    mov r5, r10
    bl NHTTPi_compareToken
    cmp r0, #0
    beq @L_02114704
    ldr r5, [r10, #4]
    ldr r0, [r9]
    cmp r5, r0
    beq @L_02114708
@L_021146d8:
    ldr r1, [r5, #8]
    mov r0, r7
    bl NHTTPi_compareToken
    cmp r0, #0
    moveq r4, #1
    beq @L_02114708
    ldr r5, [r5, #4]
    ldr r0, [r9]
    cmp r5, r0
    bne @L_021146d8
    b @L_02114708
@L_02114704:
    mov r4, #1
@L_02114708:
    cmp r4, #0
    strne r6, [r5, #0xc]
    bne @L_0211478c
    mov r0, #0x18
    mov r1, #4
    bl NHTTPi_alloc
    cmp r0, #0
    bne @L_0211473c
    mov r0, r8
    mov r1, #1
    bl NHTTPi_SetError
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_0211473c:
    str r7, [r0, #8]
    str r6, [r0, #0xc]
    mov r1, #0
    str r1, [r0, #0x10]
    str r1, [r0, #0x14]
    ldr r1, [r9]
    cmp r1, #0
    streq r0, [r0, #4]
    streq r0, [r0]
    streq r0, [r9]
    beq @L_0211478c
    ldr r1, [r1]
    str r1, [r0]
    ldr r1, [r9]
    str r1, [r0, #4]
    ldr r1, [r9]
    ldr r1, [r1]
    str r0, [r1, #4]
    ldr r1, [r9]
    str r0, [r1]
@L_0211478c:
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" s32 incAscii(s32 arg0)
{
    arg0 = ((arg0 + 1) & 0xFF);
    if (arg0 == 0x7B) {
        arg0 = 0x30;
    } else {
        if (arg0 == 0x5B) {
            arg0 = 0x61;
        } else {
            if (arg0 == 0x3A) {
                arg0 = 0x41;
            }
        }
    }
    return ((s8)arg0);
}

extern "C" asm s32 checkTagPost(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    mov r9, r1
    mov r8, r2
    mov r0, r9
    mov r1, r8
    add r2, r10, #0x3a
    mov r3, #0x12
    bl NHTTPi_memfind
    cmp r0, #0
    movlt r0, #1
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r11, #0x13
    mov r4, #0x12
@L_02114800:
    ldr r0, =NHTTPi_strMultipartBound
    add r6, r10, r11
    ldrsb r5, [r6, #0x38]
    ldrsb r7, [r0, r11]
@L_02114810:
    and r0, r5, #0xff
    bl incAscii
    mov r5, r0
    strb r5, [r6, #0x38]
    cmp r5, r7
    beq @L_0211484c
    mov r0, r9
    mov r1, r8
    mov r3, r4
    add r2, r10, #0x3a
    bl NHTTPi_memfind
    cmp r0, #0
    bge @L_02114810
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0211484c:
    sub r11, r11, #1
    cmp r11, #2
    bge @L_02114800
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" N02114864 *NHTTPi_getHdrFromList(N02114864 **arg0)
{
    N02114864 *n = *arg0;
    if (n != 0) {
        if (n == n->next) {
            *arg0 = 0;
        } else {
            n->next->prev = n->prev;
            n->prev->next = n->next;
            *arg0 = n->prev;
        }
    }
    return n;
}

extern "C" s32 NHTTPi_AddRequestHeaderField(u8 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    if (*(s32 *)(arg0 + 4) != 0)
        return 0;
    return ((s32 (*)(u8 *, s32, s32, s32))addHdrList)(arg0 + 0x30, arg1, arg2, arg3);
}

extern "C" s32 NHTTPi_AddRequestPostDataAscii(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 r4;
    s32 r5;
    s32 r6;
    s32 r7;
    s32 r8;
    u8 *r9;
    s32 v0;
    s32 v1;
    s32 v2;
    u8 *t0;
    r9 = (u8 *)arg0;
    r4 = 0;
    r8 = arg1;
    r7 = arg2;
    r6 = arg3;
    r5 = 0;
    if (*(s32 *)(r9 + 0x4) != 0) {
        return r4;
    } else {
        if (*(s32 *)(r9 + 0x10) != 0) {
            return r4;
        } else {
            if (r6 != 0) {
                v0 = ((s32 (*)(...))NHTTPi_strlen)(r6);
                r5 = v0;
            }
            v1 = checkTagPost((s32)r9, r6, r5);
            if (v1 != 0) {
                v2 = addHdrList((s32)(r9 + 0x34), r8, r7, r6);
                r4 = v2;
                if (r4 != 0) {
                    t0 = (u8 *)*(s32 *)(*(u8 * *)(r9 + 0x34));
                    *(s32 *)(t0 + 0x10) = r5;
                }
            }
            return r4;
        }
    }
}

extern "C" void NHTTPi_InitListInfo(u8 *arg0)
{
    *(s32 *)(arg0) = 0;
    *(s32 *)(arg0 + 0x4) = 0;
}

extern "C" asm void NHTTPi_setReqQueue(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, r1
    mov r0, #0x14
    mov r1, #4
    mvn r4, #0
    bl NHTTPi_alloc
    cmp r0, #0
    beq @L_021149fc
    ldr r1, [r6]
    cmp r1, #0
    streq r0, [r0]
    streq r0, [r0, #4]
    streq r0, [r6]
    beq @L_021149cc
    ldr r1, [r1]
    str r1, [r0]
    ldr r1, [r6]
    str r1, [r0, #4]
    ldr r1, [r6]
    ldr r1, [r1]
    str r0, [r1, #4]
    ldr r1, [r6]
    str r0, [r1]
@L_021149cc:
    ldr r4, [r6, #4]
    ldr r2, [r6, #4]
    mvn r1, #0
    add r2, r2, #1
    str r2, [r6, #4]
    str r4, [r0, #8]
    str r5, [r0, #0xc]
    str r1, [r0, #0x10]
    ldr r0, [r6, #4]
    cmp r0, #0
    movlt r0, #0
    strlt r0, [r6, #4]
@L_021149fc:
    mov r0, r4
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm s32 NHTTPi_findReqQueue(...)
{
    ldr r3, [r0]
    mov r0, #0
    cmp r3, #0
    bxeq lr
    ldr r2, [r3, #8]
    cmp r2, r1
    moveq r0, r3
    bxeq lr
    ldr r12, [r3, #4]
    cmp r12, r3
    bxeq lr
@L_02114a30:
    ldr r2, [r12, #8]
    cmp r2, r1
    moveq r0, r12
    bxeq lr
    ldr r12, [r12, #4]
    cmp r12, r3
    bne @L_02114a30
    bx lr
}

extern "C" s32 NHTTPi_freeReqQueue(u8 *arg0, s32 arg1, s32 arg2)
{
    u8 *r4;
    u8 *r6;
    s32 r7;
    s32 v0;
    s32 v1;
    u8 *t0;
    s32 t1;
    u8 *t2;
    s32 t3;
    s32 t4;
    s32 t5;
    s32 t6;
    r7 = 0;
    v0 = NHTTPi_findReqQueue((s32)arg0, arg2, arg2);
    r4 = (u8 *)v0;
    if ((s32)r4 != 0) {
        if ((s32)*(u8 * *)(arg0) != *(s32 *)(*(u8 * *)(arg0))) {
            t0 = (u8 *)*(s32 *)(r4);
            t1 = *(s32 *)(r4 + 0x4);
            *(s32 *)(t0 + 0x4) = t1;
            t2 = (u8 *)*(s32 *)(r4 + 0x4);
            t3 = *(s32 *)(r4);
            *(s32 *)(t2) = t3;
            if (*(s32 *)(arg0) == (s32)r4) {
                t4 = *(s32 *)(r4 + 0x4);
                *(s32 *)(arg0) = t4;
            }
        } else {
            *(s32 *)(arg0) = r7;
        }
        t5 = *(s32 *)(r4 + 0xC);
        v1 = NHTTPi_Request2Connection(arg1, t5);
        t6 = *(s32 *)(r4 + 0xC);
        NHTTPi_destroyRequestObject(arg1, t6);
        NHTTPi_free((s32)r4);
        r6 = (u8 *)v1;
        if ((s32)r6 != 0) {
            *(s32 *)(r6 + 0x4) = 8;
            NHTTPi_CompleteCallback(arg1, (s32)r6, 8);
            NHTTPi_DeleteConnection((s32)r6);
        }
        r7 = 1;
    }
    return r7;
}

extern "C" s32 NHTTPi_allFreeReqQueue(u8 *arg0, s32 arg1)
{
    u8 *r0;
    s32 t0;
    if (*(s32 *)(arg0) == 0)
        return *(s32 *)(arg0);
    r0 = (u8 *)*(s32 *)(arg0);
    do {
        t0 = *(s32 *)(r0 + 0x8);
        NHTTPi_freeReqQueue(arg0, arg1, t0);
        r0 = (u8 *)*(s32 *)(arg0);
    } while ((s32)r0 != 0);
    return (s32)r0;
}

extern "C" N02114864 *NHTTPi_getReqFromReqQueue(N02114864 **arg0)
{
    return NHTTPi_getHdrFromList(arg0);
}

extern "C" void setupGetcharFromHdrRecvBuf(u8 *arg0, s32 arg1, void **arg2, s32 *arg3)
{
    s32 n;
    void **p;
    if (arg1 < 0x400) {
        *arg2 = 0;
        *arg3 = arg1;
        return;
    }
    n = (arg1 - 0x400) >> 9;
    p = *(void ***)(arg0 + 0x34);
    while (n-- != 0)
        p = (void **)*p;
    *arg2 = p;
    *arg3 = (arg1 - 0x400) & 0x1FF;
}

extern "C" asm void getcharFromHdrRecvBuf(void)
{
    ldr r3, [r1]
    cmp r3, #0
    bne @L_02114bd8
    ldr r3, [r2]
    cmp r3, #0x400
    addlt r1, r3, #1
    addlt r0, r0, r3
    strlt r1, [r2]
    ldrltsb r0, [r0, #0x38]
    bxlt lr
    mov r3, #0
    ldr r0, [r0, #0x34]
    str r3, [r2]
    str r0, [r1]
    b @L_02114bf4
@L_02114bd8:
    ldr r0, [r2]
    cmp r0, #0x200
    moveq r0, #0
    streq r0, [r2]
    ldreq r0, [r1]
    ldreq r0, [r0]
    streq r0, [r1]
@L_02114bf4:
    ldr r3, [r2]
    add r0, r3, #1
    str r0, [r2]
    ldr r0, [r1]
    add r0, r0, r3
    ldrsb r0, [r0, #4]
    bx lr
}

extern "C" asm void NHTTPi_findNextLineHdrRecvBuf(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    movs r8, r3
    mov r11, r0
    mvnne r0, #0
    mov r10, r1
    mov r9, r2
    strne r0, [r8]
    ldr r7, [sp, #0x30]
    cmp r10, r9
    bge @L_02114d20
    mov r0, r11
    mov r1, r10
    add r2, sp, #4
    add r3, sp, #0
    mvn r6, #0
    mov r5, #0
    bl setupGetcharFromHdrRecvBuf
    cmp r10, r9
    bge @L_02114d20
    sub r4, r9, #1
@L_02114c64:
    mov r0, r11
    add r1, sp, #4
    add r2, sp, #0
    bl getcharFromHdrRecvBuf
    cmp r0, #0x3a
    bne @L_02114c8c
    cmp r8, #0
    ldrne r1, [r8]
    cmpne r1, #0
    strlt r10, [r8]
@L_02114c8c:
    cmp r5, #0
    beq @L_02114cc4
    cmp r0, #0xa
    bne @L_02114cb8
    sub r0, r9, #1
    mov r6, #0
    cmp r10, r0
    addne r6, r10, #1
    cmp r7, #0
    movne r0, #2
    strne r0, [r7]
@L_02114cb8:
    add sp, sp, #8
    mov r0, r6
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02114cc4:
    cmp r0, #0xd
    bne @L_02114ce8
    mov r6, #0
    cmp r10, r4
    addne r6, r10, #1
    mov r5, #1
    cmp r7, #0
    movne r1, r5
    strne r1, [r7]
@L_02114ce8:
    cmp r0, #0xa
    bne @L_02114d14
    sub r0, r9, #1
    cmp r10, r0
    moveq r0, #0
    addne r0, r10, #1
    cmp r7, #0
    movne r1, #1
    add sp, sp, #8
    strne r1, [r7]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02114d14:
    add r10, r10, #1
    cmp r10, r9
    blt @L_02114c64
@L_02114d20:
    mvn r0, #0
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
