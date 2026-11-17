#include "ov014/Unk_ov014_021180ac.hpp"
struct M0211ae24 { s32 a; s32 b; s32 c; };

extern "C" void NHTTPi_CommThreadProcMain(void);
extern "C" s32 NHTTP_Startup(s32 arg0, s32 arg1, s32 arg2);
extern "C" void NHTTP_CleanupAsync(s32 arg0);
extern "C" void NHTTP_AddHeaderField(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 NHTTP_AddRequestHeaderField(...);
extern "C" s32 NHTTP_AddPostDataAscii(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 NHTTP_GetHeaderField(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 NHTTP_SetVerifyOption(u8 *arg0, s32 arg1);
extern "C" void NHTTP_SetRootCA(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 NHTTP_SetRequestRootCA(...);
extern "C" s32 NHTTPi_GetStaticResource(...);
extern "C" s32 NHTTPi_WaitForCompletion(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void NHTTPi_NotifyCompletion(u8 *arg0);
extern "C" s32 NHTTPi_ControlConnectionList(...);
extern "C" s32 NHTTPi_CommitConnectionList(s32 arg0, s32 arg1);
extern "C" s32 NHTTPi_OmitConnectionList(s32 arg0, s32 arg1);
extern "C" s32 NHTTPi_Connection2Response(u8 *arg0, s32 arg1);
extern "C" void NHTTPi_Request2Connection(s32 arg0, s32 arg1);
extern "C" void NHTTPi_Response2Connection(s32 arg0, s32 arg1);
extern "C" void NHTTPi_GetConnection(s32 arg0, s32 arg1);
extern "C" s32 NHTTPi_GetRequest(...);
extern "C" s32 NHTTPi_GetResponse(...);
extern "C" s32 NHTTPi_GetConnectionListLength(...);
extern "C" s32 NHTTPi_PostSendCallback(s32 arg0, u8 *arg1, s32 arg2, s32 arg3);
extern "C" void NHTTPi_BufferFullCallback(s32 arg0, u8 *arg1);
extern "C" void NHTTPi_ReceivedCallback(s32 arg0, u8 *arg1);
extern "C" s32 NHTTPi_CompleteCallback(s32 arg0, u8 *arg1);
extern "C" s32 NHTTPi_SetPostDataBuffer(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 NHTTPi_SetBodyBuffer(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern "C" void NHTTPi_InitSystemInfo(s32 arg0);
extern "C" s32 NHTTPi_GetSystemInfoP(...);
extern "C" void NHTTPi_GetBgnEndInfoP(void);
extern "C" s32 NHTTPi_GetListInfoP(s32 arg0);
extern "C" s32 NHTTPi_GetReqInfoP(s32 arg0);
extern "C" s32 NHTTPi_GetThreadInfoP(s32 arg0);
extern "C" s32 NHTTPi_GetMutexInfoP(s32 arg0);
extern "C" void NHTTPi_SetVirtualContentLength(u8 *arg0, s32 arg1);
extern "C" s32 NHTTPi_InitConnectionList(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void NHTTPi_InitMutexInfo(u8 *arg0);
extern "C" s32 NHTTPi_initLockReqList(u8 *arg0);
extern "C" void NHTTPi_exitLockReqList(void);
extern "C" void NHTTPi_lockReqList(void);
extern "C" void NHTTPi_unlockReqList(void);
extern "C" s32 NHTTPi_addRef(s32 arg0, s32 arg1);
extern "C" s32 NHTTPi_decRef(s32 arg0, s32 arg1);
extern "C" void NHTTP_CreateConnection(void);
extern "C" s32 NHTTP_DeleteConnection(s32 arg0);
extern "C" s32 NHTTPi_DeleteConnection(...);
extern "C" s32 NHTTP_WaitForConnection(s32 arg0);
extern "C" s32 NHTTP_StartConnection(s32 arg0);
extern "C" s32 NHTTP_CancelConnection(s32 arg0);
extern "C" s32 NHTTP_GetConnectionStatus(u8 *arg0);
extern "C" s32 NHTTP_GetBodyBuffer(u8 *arg0, s32 arg1, u8 *arg2);
extern "C" s32 NHTTP_GetUserParam(u8 *arg0);
extern "C" s32 NHTTP_GetConnectionError(u8 *arg0);
extern "C" s32 NHTTP_GetConnectionProgress(s32 arg0, s32 *arg1, s32 *arg2);
extern "C" s32 SOCL_Startup(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 SOCLi_StartupSOCL(...);
extern "C" s32 SOCLi_StartupCPS(...);
extern "C" void SOCLi_SetMyIP(void);
extern "C" char *SOCLi_DhcpTimeout(void);
extern "C" s32 SOCL_LinkIsOn(void);
extern "C" void SOCLi_StartupCommandPacketQueue(void);
extern "C" s32 SOCLi_CleanupCommandPacketQueue(void);
extern "C" s32 SOCLi_AllocCommandPacket(...);
extern "C" void SOCLi_CreateCommandPacket(s32 arg0, u8 *arg1, u8 arg2);
extern "C" s32 SOCLi_FreeCommandPacket(s32 arg0);
extern "C" s32 SOCLi_GetCtrlPipe(...);
extern "C" s32 SOCLi_SendCommandPacket(...);
extern "C" void SOCLi_SendCommandPacketToCtrlPipe(s32 arg0, s32 arg1);
extern "C" s32 SOCLi_ExecCommandPacket(...);
extern "C" void SOCLi_ExecCommandPacketInRecvPipe(u8 *arg0);
extern "C" void SOCLi_ExecCommandPacketInSendPipe(u8 *arg0);
extern "C" void SOCLi_ExecCommandPacketInCtrlPipe(s32 arg0, s32 arg1);
extern "C" void SOCLi_CommandPacketHandler(void);
extern "C" void func_ov014_021194f0(void);
extern "C" void SOCL_CreateSocket(void);
extern "C" s32 SOCLi_CreateSocketCallBack(u8 *arg0);
extern "C" void *SOCLi_StartupSocket(s32 arg0);
extern "C" s32 SOCLi_GetSizeSocket(u8 *arg0);
extern "C" s32 SOCLi_GetSizeCommandPipe(u8 *arg0);
extern "C" void SOCLi_InitSocket(void);
extern "C" s32 SOCLi_InitSocketBuffer(s32 arg0, u8 *arg1, s32 arg2);
extern "C" void SOCLi_InitCommandPipe(void);
extern "C" s32 SOCL_Bind(s32 arg0, s32 arg1);
extern "C" void SOCL_Connect(void);
extern "C" s32 SOCLi_ExecBindCommand(u8 *arg0);
extern "C" void SOCLi_BindCallBack(void);
extern "C" void SOCL_ReadFrom(void);
extern "C" s32 SOCLi_ReadAndConsumeBuffer(u8 *arg0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6);
extern "C" s32 SOCLi_ReadBuffer(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
extern "C" s32 SOCLi_CopyCPSBuffer(...);
extern "C" void SOCLi_ReadCPSBuffer(void);
extern "C" s32 SOCLi_ExecReadCommand(...);
extern "C" void SOCLi_ReadCallBack(void);
extern "C" s32 SOCLi_ConsumeBuffer(u8 *arg0);
extern "C" void SOCLi_ConsumeCallBack(u8 *arg0);
extern "C" s32 SOCLi_ConsumeCPSBuffer(...);
extern "C" void SOCLi_ReadUdpBuffer(void);
extern "C" void SOCLi_UdpRecvCallback(void);
extern "C" void SOCL_WriteTo(void);
extern "C" void SOCLi_WriteBuffer(void);
extern "C" s32 SOCLi_AllocWriteBuffer(u8 *arg0, s32 arg1, s32 arg2, u8 *arg3, s32 arg4);
extern "C" s32 SOCLi_GetWriteBufferFreeSize(...);
extern "C" void SOCLi_ExecWriteCommand(void);
extern "C" void SOCLi_WriteCallBack(void);
extern "C" void SOCLi_GetOptimumSendBufLen(void);
extern "C" s32 SOCLi_MemCpy(s32 arg0, s32 arg1, s32 *arg2);
extern "C" void SOCL_Shutdown(void);
extern "C" s32 SOCLi_ShutdownCallBack(u8 *arg0);
extern "C" s32 SOCL_IsClosed(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void SOCL_Close(void);
extern "C" s32 SOCLi_CloseCallBack(u8 *arg0);
extern "C" s32 SOCLi_CleanupSocket(...);
extern "C" void SOCLi_FreeCommandPipe(u8 *arg0);
extern "C" s32 SOCLi_TrashSocket(void);
extern "C" s32 SOCL_Cleanup(void);
extern "C" void SOCLi_CleanupCPS(void);
extern "C" s32 SOCL_CloseAll(void);
extern "C" s32 SOCL_CalmDown(...);

extern "C" char OSi_ThreadInfo[];
extern "C" char SOCLiConfigPtr[];
extern "C" char data_ov014_02125e44[];
extern "C" char SOCLSocketParamTCP[];
extern "C" char data_ov014_02125e78[];
extern "C" char CPSNetMask[];
extern "C" char CPSGatewayIp[];
extern "C" char CPSMyIp[];
extern "C" char CPSDnsIp[];
extern "C" char l_nhttp_connection_list_p[];
extern "C" char data_ov014_02129058[];
extern "C" char data_ov014_02129080[];
extern "C" char SOCLiYieldWait[];
extern "C" char SOCLiRequestedIP[];
extern "C" char SOCLiUDPSendSocket[];
extern "C" char SOCLiCPSConfig[];
extern "C" char SOCLiCommandPackets[];
extern "C" char SOCLiCommandPacketQueue[];
extern "C" char data_ov014_0212d244[];
extern "C" char SOCLi_Resource[];
extern "C" char SOCLiSocketList[];
extern "C" char SOCLiSocketListTrash[];
extern "C" void MI_CpuFill8(void);
extern "C" void OS_CreateThread(void);
extern "C" s32 OS_DisableInterrupts(...);
extern "C" void OS_EnableScheduler(void);
extern "C" void OS_InitMessageQueue(void);
extern "C" void OS_InitMutex(void);
extern "C" void OS_LockMutex(void);
extern "C" s32 OS_RestoreInterrupts(...);
extern "C" s32 OS_SendMessage(...);
extern "C" s32 OS_Sleep(...);
extern "C" s32 OS_SleepThread(...);
extern "C" void OS_TryLockMutex(void);
extern "C" void OS_UnlockMutex(void);
extern "C" s32 OS_WakeupThread(...);
extern "C" void OS_WakeupThreadDirect(void);
extern "C" s32 WBT_CancelCurrentCommand(...);
extern "C" s32 OSi_ReferSymbol(...);
extern "C" s32 OS_JoinThread(...);
extern "C" void OS_RescheduleThread(void);
extern "C" void OS_DisableScheduler(void);
extern "C" void OS_ReceiveMessage(void);
extern "C" void OS_ReadMessage(void);
extern "C" void OS_GetProcMode(void);
extern "C" void MI_CpuCopy(void);
extern "C" void _s32_div_f(void);
extern "C" s32 CPS_SetCheckNConfigCallback(...);
extern "C" void CPS_Startup(void);
extern "C" void CPS_CalmDown(void);
extern "C" s32 CPS_SetScavengerCallback(...);
extern "C" s32 CPS_Cleanup(...);
extern "C" void CPS_SetThreadPriority(void);
extern "C" void CPSi_RecvCallbackFunc(void);
extern "C" void CPS_SocGetEport(void);
extern "C" s32 CPS_SocRegister(...);
extern "C" s32 CPS_SocUnRegister(...);
extern "C" void CPS_SocBind(void);
extern "C" s32 CPS_SocRelease(...);
extern "C" void CPS_TcpConnect(void);
extern "C" s32 CPS_TcpShutdown(...);
extern "C" s32 CPS_TcpClose(...);
extern "C" void CPS_SocRead(void);
extern "C" void CPS_SocConsume(void);
extern "C" void CPS_SocWrite(void);
extern "C" s32 NHTTPi_InitMutex(...);
extern "C" void NHTTPi_LockMutex(void);
extern "C" s32 NHTTPi_CheckCurrentThread(...);
extern "C" void NHTTPi_memclr(void);
extern "C" s32 NHTTPi_InitBgnEndInfo(...);
extern "C" void NHTTPi_alloc(void);
extern "C" void NHTTPi_free(void);
extern "C" void NHTTPi_SetError(void);
extern "C" s32 NHTTPi_Startup(...);
extern "C" s32 NHTTPi_CleanupAsync(...);
extern "C" void NHTTPi_AddRequestHeaderField(void);
extern "C" s32 NHTTPi_AddRequestPostDataAscii(...);
extern "C" s32 NHTTPi_InitListInfo(...);
extern "C" s32 NHTTPi_InitRequestInfo(...);
extern "C" void NHTTPi_CreateRequest(void);
extern "C" void NHTTPi_DestroyRequest(void);
extern "C" s32 NHTTPi_SendRequestAsync(...);
extern "C" s32 NHTTPi_CancelRequestAsync(...);
extern "C" void NHTTPi_DestroyResponse(void);
extern "C" s32 NHTTP_GetResponseHeaderField(...);
extern "C" s32 NHTTPi_InitThreadInfo(...);
extern "C" void NHTTPi_ThreadInit(void);
extern "C" void NHTTPi_ThreadReqEnd(void);
extern "C" void NHTTPi_ThreadExecReqQueue(void);
extern "C" void NHTTPi_ThreadHostAddrProc(void);
extern "C" void NHTTPi_ThreadConnectProc(void);
extern "C" void NHTTPi_ThreadProxyProc(void);
extern "C" void NHTTPi_ThreadSendProc(void);
extern "C" void NHTTPi_ThreadRecvHeaderProc(void);
extern "C" void NHTTPi_ThreadParseHeaderProc(void);
extern "C" void NHTTPi_ThreadRecvBodyProc(void);
extern "C" s32 SOCLi_RoundUp4(...);
extern "C" s32 SOCLi_InitResource(...);
extern "C" void SOCLi_CheckNConfig(void);
extern "C" void SOCLi_SocketRegister(void);
extern "C" s32 SOCLi_SocketRegisterTrash(...);
extern "C" s32 SOCLi_SocketUnregister(...);
extern "C" void SOCLi_SocketUnregisterTrash(void);
extern "C" s32 SOCL_SocketIsInvalid(...);
extern "C" s32 WCM_GetApMacAddress(...);
extern "C" s32 WCM_SetRecvDCFCallback(...);

extern "C" s32 CPS_SocDup(...);
extern "C" s32 CPS_SocUse(...);
extern "C" s32 CPS_SocDatagramMode(...);
extern "C" s32 CPS_SetUdpCallback(...);
extern "C" asm void NHTTPi_CommThreadProcMain(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x340
    bl NHTTPi_GetSystemInfoP
    mov r4, r0
    bl NHTTPi_GetBgnEndInfoP
    mov r8, r0
    mov r0, r4
    bl NHTTPi_GetReqInfoP
    add r7, sp, #0
    mov r9, r0
    mov r0, r7
    bl NHTTPi_ThreadInit
    ldr r0, [r8, #0x18]
    cmp r0, #0
    addne sp, sp, #0x340
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r4, #1
    mov r6, #0
    mov r5, r4
@L_021180f8:
    ldr r0, [sp, #0x334]
    cmp r0, #0
    bne @L_02118140
    mov r0, r7
    bl NHTTPi_ThreadExecReqQueue
    cmp r0, #0
    beq @L_0211820c
    ldr r0, [r9]
    ldr r0, [r0, #0xc]
    ldr r0, [r0]
    cmp r0, #0
    mov r0, r7
    beq @L_02118130
@L_0211812c:
    b @L_02118208
@L_02118130:
    bl NHTTPi_ThreadHostAddrProc
    cmp r0, #0
    bne @L_02118140
    b @L_02118204
@L_02118140:
    ldr r0, [sp, #0x334]
    cmp r0, #1
    mov r0, r7
    streq r6, [sp, #0x334]
    bl NHTTPi_ThreadConnectProc
    cmp r0, #0
    mov r0, r7
    bne @L_02118164
    b @L_0211812c
@L_02118164:
    bl NHTTPi_ThreadProxyProc
    cmp r0, #0
    beq @L_0211818c
    cmp r0, #1
    beq @L_02118188
    cmp r0, #2
    bne @L_0211818c
    str r5, [sp, #0x334]
    b @L_0211820c
@L_02118188:
    b @L_02118204
@L_0211818c:
    mov r0, r7
    bl NHTTPi_ThreadSendProc
    cmp r0, #3
    addls pc, pc, r0, lsl #2
    b @L_021181bc
    b @L_021181bc
    b @L_021181b8
    b @L_021181b0
    b @L_021181b8
@L_021181b0:
    str r4, [sp, #0x334]
    b @L_0211820c
@L_021181b8:
    b @L_02118204
@L_021181bc:
    ldr r0, [r9]
    ldr r0, [r0, #0xc]
    ldr r0, [r0]
    cmp r0, #0
    mov r0, r7
    beq @L_021181d8
    b @L_0211812c
@L_021181d8:
    bl NHTTPi_ThreadRecvHeaderProc
    cmp r0, #0
    mov r0, r7
    bne @L_021181ec
    b @L_0211812c
@L_021181ec:
    bl NHTTPi_ThreadParseHeaderProc
    cmp r0, #0
    mov r0, r7
    bne @L_02118200
    b @L_0211812c
@L_02118200:
    bl NHTTPi_ThreadRecvBodyProc
@L_02118204:
    mov r0, r7
@L_02118208:
    bl NHTTPi_ThreadReqEnd
@L_0211820c:
    ldr r0, [r8, #0x18]
    cmp r0, #0
    beq @L_021180f8
    add sp, sp, #0x340
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" s32 NHTTP_Startup(s32 arg0, s32 arg1, s32 arg2)
{
    s32 v0;
    s32 v1;
    v0 = NHTTPi_GetSystemInfoP(arg0, arg1, arg2);
    v1 = NHTTPi_Startup(v0, arg0, arg1, arg2);
    if (v1 == 0) {
        arg0 = 1;
    } else {
        arg0 = 0;
    }
    return (0 - arg0);
}

extern "C" void NHTTP_CleanupAsync(s32 arg0)
{
    s32 v0 = NHTTPi_GetSystemInfoP(arg0);
    NHTTPi_CleanupAsync(v0, arg0);
}

extern "C" void NHTTP_AddHeaderField(s32 arg0, s32 arg1, s32 arg2)
{
    s32 v0 = NHTTPi_GetSystemInfoP(arg0, arg1, arg2);
    s32 v1 = NHTTPi_GetMutexInfoP(v0);
    s32 v2 = NHTTPi_GetRequest(v1, arg0);
    NHTTP_AddRequestHeaderField(v2, arg1, arg2);
}

extern "C" asm s32 NHTTP_AddRequestHeaderField(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, r1
    mov r4, r2
    bl NHTTPi_GetSystemInfoP
    bl NHTTPi_GetBgnEndInfoP
    mov r1, r0
    cmp r6, #0
    mvneq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldr r0, [r6, #4]
    cmp r0, #0
    mvnne r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    mov r0, r6
    mov r2, r5
    mov r3, r4
    bl NHTTPi_AddRequestHeaderField
    cmp r0, #0
    moveq r0, #1
    movne r0, #0
    rsb r0, r0, #0
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 NHTTP_AddPostDataAscii(s32 arg0, s32 arg1, s32 arg2)
{
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;
    s32 v4;
    v0 = NHTTPi_GetSystemInfoP(arg0, arg1, arg2);
    v1 = ((s32 (*)(...))NHTTPi_GetBgnEndInfoP)();
    v2 = NHTTPi_GetMutexInfoP(v0);
    v3 = NHTTPi_GetRequest(v2, arg0);
    v4 = NHTTPi_AddRequestPostDataAscii(v3, v1, arg1, arg2);
    if (v4 == 0) {
        arg0 = 1;
    } else {
        arg0 = 0;
    }
    return (0 - arg0);
}

extern "C" s32 NHTTP_GetHeaderField(s32 arg0, s32 arg1, s32 arg2)
{
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;
    v0 = NHTTPi_GetSystemInfoP(arg0, arg1, arg2);
    v1 = NHTTPi_GetMutexInfoP(v0);
    v2 = NHTTPi_GetResponse(v1, arg0);
    if (v2 == 0)
        return -1;
    v3 = NHTTP_GetResponseHeaderField(v2, arg1, arg2);
    return v3;
}

extern "C" s32 NHTTP_SetVerifyOption(u8 *arg0, s32 arg1)
{
    s32 r4;
    s32 v0;
    s32 v1;
    s32 v2;
    v0 = NHTTPi_GetSystemInfoP((s32)arg0, arg1);
    v1 = NHTTPi_GetMutexInfoP(v0);
    v2 = NHTTPi_GetRequest(v1, (s32)arg0);
    arg0 = (u8 *)v2;
    r4 = arg1;
    if ((s32)arg0 == 0) {
        arg0 = (u8 *)-1;
    } else {
        *(s32 *)(arg0 + 0xD0) = arg1;
        arg0 = (u8 *)0;
    }
    return (s32)arg0;
}

extern "C" void NHTTP_SetRootCA(s32 arg0, s32 arg1, s32 arg2)
{
    s32 v0 = NHTTPi_GetSystemInfoP(arg0, arg1, arg2);
    s32 v1 = NHTTPi_GetMutexInfoP(v0);
    s32 v2 = NHTTPi_GetRequest(v1, arg0);
    NHTTP_SetRequestRootCA(v2, arg1, arg2);
}

extern "C" asm s32 NHTTP_SetRequestRootCA(...)
{
    cmp r0, #0
    mvneq r0, #0
    bxeq lr
    mov r3, #0
    str r3, [r0, #0xc8]
    str r3, [r0, #0xdc]
    str r1, [r0, #0xc0]
    str r2, [r0, #0xc4]
    mov r0, r3
    bx lr
}

extern "C" asm s32 NHTTPi_GetStaticResource(...)
{
    stmdb sp!, {r4, lr}
    ldr r0, =l_nhttp_connection_list_p
    ldr r4, =data_ov014_02129058
    ldr r0, [r0, #8]
    cmp r0, #0
    bne @L_02118448
    add r0, r4, #4
    bl NHTTPi_InitMutex
    mov r1, #0
    mov r0, #1
    str r1, [r4, #0x20]
    str r1, [r4, #0x1c]
    str r0, [r4]
@L_02118448:
    mov r0, r4
    ldmia sp!, {r4, pc}
}

extern "C" s32 NHTTPi_WaitForCompletion(u8 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 r4;
    u8 *r5;
    s32 v0 = NHTTPi_GetStaticResource((s32)arg0, arg1, arg2, arg3);
    if (*(s32 *)(arg0 + 0xC) == 0)
        return v0;
    arg1 = *(s32 *)(arg0 + 0xC);
    r4 = v0;
    r5 = arg0;
    do {
        OS_SleepThread((r4 + 0x1C));
        arg0 = (u8 *)*(s32 *)(r5 + 0xC);
    } while ((s32)arg0 != 0);
    return (s32)arg0;
}

extern "C" void NHTTPi_NotifyCompletion(u8 *arg0)
{
    s32 v0 = NHTTPi_GetStaticResource(arg0);
    *(s32 *)(arg0 + 0xC) = 0;
    OS_WakeupThread((v0 + 0x1C), 0);
}

extern "C" asm s32 NHTTPi_ControlConnectionList(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r2
    mov r7, r0
    mov r6, r1
    mov r4, #0
    bl NHTTPi_lockReqList
    cmp r5, #3
    bne @L_021184e4
    ldr r0, [pc, #0xa0]
    mov r4, r6
    ldr r1, [r0]
    str r1, [r6, #0x20]
    str r6, [r0]
    b @L_02118564
@L_021184e4:
    ldr r0, [pc, #0x88]
    ldr r1, [pc, #0x88]
    ldr r2, [r0]
    cmp r2, #0
    beq @L_02118564
@L_021184f8:
    cmp r5, #4
    addls pc, pc, r5, lsl #2
    b @L_02118548
    dcd 0xea000003
    dcd 0xea000004
    dcd 0xea000005
    dcd 0xea00000c
    dcd 0xea000007
    dcd 0xe1520006
    dcd 0xea000003
    dcd 0xe5920010
    dcd 0xea000000
    dcd 0xe5920014
    dcd 0xe1500006
    dcd 0x01a04002
    dcd 0xea000003
    dcd 0xe1520006
    dcd 0x05914000
    dcd 0x05940020
    dcd 0x05810000
@L_02118548:
    cmp r4, #0
    bne @L_02118564
    ldr r0, [r1]
    ldr r2, [r0, #0x20]
    add r1, r0, #0x20
    cmp r2, #0
    bne @L_021184f8
@L_02118564:
    mov r0, r7
    bl NHTTPi_unlockReqList
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
    dcd l_nhttp_connection_list_p
    dcd l_nhttp_connection_list_p
}

extern "C" s32 NHTTPi_CommitConnectionList(s32 arg0, s32 arg1)
{
    s32 v0;
    v0 = NHTTPi_ControlConnectionList(arg0, arg1, 3);
    if (v0 == 0) {
        arg0 = 1;
    } else {
        arg0 = 0;
    }
    return (0 - arg0);
}

extern "C" s32 NHTTPi_OmitConnectionList(s32 arg0, s32 arg1)
{
    s32 v0;
    v0 = NHTTPi_ControlConnectionList(arg0, arg1, 4);
    if (v0 == 0) {
        arg0 = 1;
    } else {
        arg0 = 0;
    }
    return (0 - arg0);
}

extern "C" s32 NHTTPi_Connection2Response(u8 *arg0, s32 arg1)
{
    s32 v0;
    v0 = ((s32 (*)(...))NHTTPi_GetConnection)((s32)arg0, arg1);
    arg0 = (u8 *)v0;
    if ((s32)arg0 != 0) {
        arg0 = (u8 *)*(s32 *)(arg0 + 0x14);
    } else {
        arg0 = (u8 *)0;
    }
    return (s32)arg0;
}

extern "C" void NHTTPi_Request2Connection(s32 arg0, s32 arg1)
{
    NHTTPi_ControlConnectionList(arg0, arg1, 1);
}

extern "C" void NHTTPi_Response2Connection(s32 arg0, s32 arg1)
{
    NHTTPi_ControlConnectionList(arg0, arg1, 2);
}

extern "C" void NHTTPi_GetConnection(s32 arg0, s32 arg1)
{
    NHTTPi_ControlConnectionList(arg0, arg1, 0);
}

extern "C" asm s32 NHTTPi_GetRequest(...)
{
    stmdb sp!, {r4, lr}
    mov r4, r1
    bl NHTTPi_GetConnection
    cmp r0, #0
    ldrne r4, [r0, #0x10]
    mov r0, r4
    ldmia sp!, {r4, pc}
}

extern "C" asm s32 NHTTPi_GetResponse(...)
{
    stmdb sp!, {r4, lr}
    mov r4, r1
    bl NHTTPi_GetConnection
    cmp r0, #0
    ldrne r4, [r0, #0x14]
    mov r0, r4
    ldmia sp!, {r4, pc}
}

extern "C" asm s32 NHTTPi_GetConnectionListLength(...)
{
    ldr r1, =l_nhttp_connection_list_p
    mov r0, #0
    ldr r1, [r1]
    cmp r1, #0
    bxeq lr
@L_02118650:
    ldr r1, [r1, #0x20]
    add r0, r0, #1
    cmp r1, #0
    bne @L_02118650
    bx lr
}

extern "C" s32 NHTTPi_PostSendCallback(s32 arg0, u8 *arg1, s32 arg2, s32 arg3)
{
    s32 local[4];
    s32 r6;
    s32 r7;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 t0;
    s32 t1;
    r6 = -1;
    v0 = ((s32 (*)(...))NHTTPi_GetConnection)(arg0, (s32)arg1);
    r7 = arg3;
    if (((v0 != 0 && (v1 = NHTTPi_Connection2Response((u8 *)arg0, (s32)arg1), v1 != 0)) && (arg3 = *(s32 *)(arg1 + 0x1C), arg3 != 0))) {
        *(s32 *)(((u8 *)local)) = arg2;
        *(s32 *)(((u8 *)local) + 0x4) = *(s32 *)(arg1 + 0x24);
        *(s32 *)(((u8 *)local) + 0x8) = *(s32 *)(arg1 + 0x28);
        *(s32 *)(((u8 *)local) + 0xC) = r7;
        v2 = ((s32 (*)(...))arg3)((s32)arg1, 1, (s32)((u8 *)local));
        t0 = *(s32 *)(((u8 *)local) + 0x4);
        t1 = *(s32 *)(((u8 *)local) + 0x8);
        NHTTPi_SetPostDataBuffer((u8 *)arg0, (s32)arg1, t0, t1);
        r6 = v2;
    }
    return r6;
}

extern "C" void NHTTPi_BufferFullCallback(s32 arg0, u8 *arg1)
{
    s32 buf[3];
    u8 *e;
    void (*f)(u8 *, s32, s32 *);
    if (((s32 (*)(...))NHTTPi_GetConnection)(arg0, arg1) == 0)
        return;
    e = (u8 *)((s32 (*)(...))NHTTPi_Connection2Response)(arg0, arg1);
    if (e == 0 || (f = *(void (**)(u8 *, s32, s32 *))(arg1 + 0x1C)) == 0)
        return;
    buf[0] = *(s32 *)(e + 0x28);
    buf[1] = *(s32 *)(e + 0x1C);
    buf[2] = *(s32 *)(e + 4);
    f(arg1, 2, buf);
    ((s32 (*)(...))NHTTPi_SetBodyBuffer)(arg0, arg1, buf[0], buf[1], buf[2]);
}

extern "C" void NHTTPi_ReceivedCallback(s32 arg0, u8 *arg1)
{
    s32 buf[3];
    u8 *e;
    void (*f)(u8 *, s32, s32 *);
    if (((s32 (*)(...))NHTTPi_GetConnection)(arg0, arg1) == 0)
        return;
    e = (u8 *)((s32 (*)(...))NHTTPi_Connection2Response)(arg0, arg1);
    if (e == 0 || (f = *(void (**)(u8 *, s32, s32 *))(arg1 + 0x1C)) == 0)
        return;
    buf[0] = *(s32 *)(e + 0x28);
    buf[1] = *(s32 *)(e + 0x1C);
    buf[2] = *(s32 *)(e + 4);
    f(arg1, 3, buf);
    ((s32 (*)(...))NHTTPi_SetBodyBuffer)(arg0, arg1, buf[0], buf[1], buf[2]);
}

extern "C" s32 NHTTPi_CompleteCallback(s32 arg0, u8 *arg1)
{
    s32 v0;
    s32 v1;
    v0 = ((s32 (*)(...))NHTTPi_GetConnection)(arg0, (s32)arg1);
    if (v0 == 0)
        return v0;
    if (*(s32 *)(arg1 + 0x1C) == 0)
        return v0;
    v1 = ((s32 (*)(...))*(s32 *)(arg1 + 0x1C))((s32)arg1, 4, 0);
    return v1;
}

extern "C" s32 NHTTPi_SetPostDataBuffer(u8 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 v0;
    v0 = ((s32 (*)(...))NHTTPi_GetConnection)((s32)arg0, arg1);
    arg0 = (u8 *)v0;
    if ((s32)arg0 == 0) {
        arg0 = (u8 *)-1;
    } else {
        *(s32 *)(arg0 + 0x24) = arg2;
        *(s32 *)(arg0 + 0x28) = arg3;
        arg0 = (u8 *)0;
    }
    return (s32)arg0;
}

extern "C" s32 NHTTPi_SetBodyBuffer(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    s32 r6;
    s32 v0;
    s32 v1;
    v0 = ((s32 (*)(...))NHTTPi_GetConnection)((s32)arg0, arg1);
    r6 = (s32)arg0;
    arg1 = v0;
    if (arg1 != 0) {
        v1 = NHTTPi_Connection2Response((u8 *)r6, arg1);
        arg0 = (u8 *)v1;
        if ((s32)arg0 == 0) {
            return -1;
        } else {
            *(s32 *)(arg0 + 0x28) = arg2;
            *(s32 *)(arg0 + 0x1C) = arg3;
            *(s32 *)(arg0 + 0x4) = arg4;
            return 0;
        }
    } else {
        return -1;
    }
}

extern "C" void NHTTPi_InitSystemInfo(s32 arg0)
{
    NHTTPi_GetBgnEndInfoP();
    NHTTPi_InitBgnEndInfo();
    NHTTPi_GetListInfoP(arg0);
    NHTTPi_InitListInfo();
    NHTTPi_GetReqInfoP(arg0);
    NHTTPi_InitRequestInfo();
    s32 v6 = NHTTPi_GetMutexInfoP(arg0);
    NHTTPi_InitMutexInfo((u8 *)v6);
    NHTTPi_GetThreadInfoP(arg0);
    NHTTPi_InitThreadInfo();
}

extern "C" asm s32 NHTTPi_GetSystemInfoP(...)
{
    stmdb sp!, {r4, lr}
    ldr r1, =l_nhttp_connection_list_p
    ldr r4, [r1, #4]
    cmp r4, #0
    bne @L_02118920
    ldr r4, =data_ov014_02129080
    mov r0, r4
    str r4, [r1, #4]
    bl NHTTPi_InitSystemInfo
@L_02118920:
    mov r0, r4
    ldmia sp!, {r4, pc}
}

extern "C" void NHTTPi_GetBgnEndInfoP(void)
{
}

extern "C" s32 NHTTPi_GetListInfoP(s32 arg0)
{
    return (arg0 + 0x28);
}

extern "C" s32 NHTTPi_GetReqInfoP(s32 arg0)
{
    return (arg0 + 0x30);
}

extern "C" s32 NHTTPi_GetThreadInfoP(s32 arg0)
{
    return (arg0 + 0x50);
}

extern "C" s32 NHTTPi_GetMutexInfoP(s32 arg0)
{
    return (arg0 + 0x34);
}

extern "C" void NHTTPi_SetVirtualContentLength(u8 *arg0, s32 arg1)
{
    if ((s32)arg0 != 0)
        *(s32 *)(arg0 + 0x2C) = arg1;
    return;
}

extern "C" s32 NHTTPi_InitConnectionList(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    arg0 = *(s32 *)(l_nhttp_connection_list_p);
    if (arg0 != 0) {
        NHTTPi_GetConnectionListLength();
    }
    *(s32 *)(l_nhttp_connection_list_p) = 0;
    return (s32)l_nhttp_connection_list_p;
}

extern "C" void NHTTPi_InitMutexInfo(u8 *arg0)
{
    *(s32 *)(arg0 + 0x18) = 0;
}

extern "C" s32 NHTTPi_initLockReqList(u8 *arg0)
{
    if (*(s32 *)(arg0 + 0x18) != 0)
        return (s32)arg0;
    NHTTPi_InitMutex((s32)arg0, *(s32 *)(arg0 + 0x18));
    *(s32 *)(arg0 + 0x18) = 1;
    return 1;
}

extern "C" void NHTTPi_exitLockReqList(void)
{
}

extern "C" void NHTTPi_lockReqList(void)
{
    NHTTPi_LockMutex();
}

extern "C" void NHTTPi_unlockReqList(void)
{
    OS_UnlockMutex();
}

extern "C" s32 NHTTPi_addRef(s32 arg0, s32 arg1)
{
    NHTTPi_lockReqList();
    s32 t0 = (*(s32 *)(((u8 *)(arg1 + 0x8000)) + 0x48) + 1);
    *(s32 *)(((u8 *)(arg1 + 0x8000)) + 0x48) = t0;
    ((s32 (*)(...))NHTTPi_unlockReqList)(arg0, (arg1 + 0x8000), t0);
    return *(s32 *)(((u8 *)(arg1 + 0x8000)) + 0x48);
}

extern "C" s32 NHTTPi_decRef(s32 arg0, s32 arg1)
{
    NHTTPi_lockReqList();
    s32 t0 = (*(s32 *)(((u8 *)(arg1 + 0x8000)) + 0x48) - 1);
    *(s32 *)(((u8 *)(arg1 + 0x8000)) + 0x48) = t0;
    ((s32 (*)(...))NHTTPi_unlockReqList)(arg0, (arg1 + 0x8000), t0);
    return *(s32 *)(((u8 *)(arg1 + 0x8000)) + 0x48);
}

extern "C" asm void NHTTP_CreateConnection(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10
    mov r10, r0
    mov r9, r1
    mov r8, r2
    mov r7, r3
    bl NHTTPi_GetSystemInfoP
    mov r4, r0
    bl NHTTPi_GetBgnEndInfoP
    mov r6, r0
    mov r0, r4
    bl NHTTPi_GetMutexInfoP
    ldr r11, =0x804c
    mov r5, r0
    mov r0, r11
    mov r1, #0x20
    bl NHTTPi_alloc
    movs r4, r0
    bne @L_02118aa4
    mov r0, r6
    mov r1, #1
    bl NHTTPi_SetError
    add sp, sp, #0x10
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02118aa4:
    mov r1, r11
    bl NHTTPi_memclr
    ldr r0, [sp, #0x3c]
    str r7, [sp]
    str r0, [sp, #4]
    mov r7, #0
    str r7, [sp, #8]
    mov r0, r6
    mov r1, r10
    mov r2, r9
    mov r3, r8
    str r7, [sp, #0xc]
    bl NHTTPi_CreateRequest
    str r0, [r4, #0x10]
    cmp r0, #0
    bne @L_02118af8
    mov r0, r4
    bl NHTTPi_free
    add sp, sp, #0x10
    mov r0, r7
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02118af8:
    ldr r1, [r0, #0x2c]
    ldr r0, [sp, #0x38]
    str r1, [r4, #0x14]
    str r7, [r4]
    str r0, [r4, #0x1c]
    str r7, [r4, #0x24]
    mov r0, r5
    mov r1, r4
    str r7, [r4, #0x28]
    sub r2, r7, #1
    str r2, [r4, #0x18]
    bl NHTTPi_CommitConnectionList
    mov r0, #0xf
    stmib r4, {r0, r7}
    mov r5, #1
    mov r0, r4
    mov r1, r7
    str r5, [r4, #0xc]
    bl NHTTPi_SetVirtualContentLength
    str r7, [r4, #0x30]
    add r2, r4, #0x8000
    str r7, [r2, #0x40]
    add r0, r4, #0x40
    mov r1, #0x8000
    str r7, [r2, #0x44]
    bl NHTTPi_memclr
    add r1, r4, #0x8000
    mov r0, r4
    str r5, [r1, #0x48]
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 NHTTP_DeleteConnection(s32 arg0)
{
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;
    v0 = NHTTPi_GetSystemInfoP(arg0);
    v1 = NHTTPi_GetMutexInfoP(v0);
    v2 = ((s32 (*)(...))NHTTPi_GetConnection)(v1, arg0);
    if (v2 == 0) {
        return -1;
    } else {
        v3 = NHTTPi_DeleteConnection();
        return v3;
    }
}

extern "C" asm s32 NHTTPi_DeleteConnection(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r0
    bl NHTTPi_GetSystemInfoP
    mov r6, r0
    bl NHTTPi_GetMutexInfoP
    mov r4, r0
    mov r0, r6
    bl NHTTPi_GetThreadInfoP
    cmp r5, #0
    mvneq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    add r0, r5, #0x8000
    ldr r0, [r0, #0x48]
    cmp r0, #0
    ble @L_02118bfc
    ldr r1, [r5, #0x18]
    cmp r1, #0
    blt @L_02118bfc
    mov r0, r6
    bl NHTTPi_CancelRequestAsync
    mvn r0, #0
    str r0, [r5, #0x18]
@L_02118bfc:
    mov r0, r4
    mov r1, r5
    bl NHTTPi_decRef
    cmp r0, #0
    movgt r0, #0
    ldmgtia sp!, {r4, r5, r6, pc}
    ldr r1, [r5, #0x10]
    cmp r1, #0
    beq @L_02118c34
    ldr r0, [r1, #4]
    cmp r0, #0
    bne @L_02118c34
    mov r0, r6
    bl NHTTPi_DestroyRequest
@L_02118c34:
    ldr r0, [r5, #0x14]
    cmp r0, #0
    beq @L_02118c60
    ldr r0, [r5, #0x10]
    cmp r0, #0
    beq @L_02118c54
    mov r0, r5
    bl NHTTP_WaitForConnection
@L_02118c54:
    ldr r1, [r5, #0x14]
    mov r0, r4
    bl NHTTPi_DestroyResponse
@L_02118c60:
    mov r0, r4
    mov r1, r5
    bl NHTTPi_OmitConnectionList
    mov r0, r5
    bl NHTTPi_free
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 NHTTP_WaitForConnection(s32 arg0)
{
    s32 r5;
    s32 r6;
    s32 r7;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;
    s32 v4;
    s32 v6;
    v0 = NHTTPi_GetSystemInfoP(arg0);
    v1 = ((s32 (*)(...))NHTTPi_GetThreadInfoP)();
    v2 = NHTTPi_GetMutexInfoP(v0);
    v3 = ((s32 (*)(...))NHTTPi_GetConnection)(v2, arg0);
    r7 = v1;
    r6 = v3;
    if (r6 == 0) {
        return -1;
    } else {
        v4 = NHTTP_GetConnectionStatus((u8 *)arg0);
        NHTTPi_CheckCurrentThread(r7, 1);
        r5 = v4;
        if (((r5 != (1 - 2) && r5 != 0) && (v6 = NHTTP_GetConnectionError((u8 *)arg0), v6 == 0xF))) {
            ((s32 (*)(...))NHTTPi_WaitForCompletion)(r6);
        }
        return 0;
    }
}

extern "C" s32 NHTTP_StartConnection(s32 arg0)
{
    u8 *r4;
    s32 r5;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;
    s32 t0;
    v0 = NHTTPi_GetSystemInfoP(arg0);
    v1 = NHTTPi_GetMutexInfoP(v0);
    v2 = ((s32 (*)(...))NHTTPi_GetConnection)(v1, arg0);
    if (v2 == 0)
        return -1;
    if (*(s32 *)(((u8 *)v2) + 0x10) == 0)
        return -1;
    t0 = *(s32 *)(((u8 *)v2) + 0x10);
    v3 = NHTTPi_SendRequestAsync(v0, t0);
    *(s32 *)(((u8 *)v2) + 0x18) = v3;
    r5 = v1;
    r4 = (u8 *)v2;
    if (v3 >= 0) {
        *(s32 *)(r4) = 1;
        ((s32 (*)(...))NHTTPi_addRef)(r5, (s32)r4, 1);
    }
    return 0;
}

extern "C" s32 NHTTP_CancelConnection(s32 arg0)
{
    s32 v0;
    s32 v1;
    s32 v2;
    s32 t0;
    v0 = NHTTPi_GetSystemInfoP(arg0);
    v1 = NHTTPi_GetMutexInfoP(v0);
    v2 = ((s32 (*)(...))NHTTPi_GetConnection)(v1, arg0);
    if (v2 == 0)
        return -1;
    if (*(s32 *)(((u8 *)v2) + 0x18) < 0)
        return -1;
    t0 = *(s32 *)(((u8 *)v2) + 0x18);
    NHTTPi_CancelRequestAsync(v0, t0);
    return 0;
}

extern "C" s32 NHTTP_GetConnectionStatus(u8 *arg0)
{
    s32 v0;
    s32 v1;
    s32 v2;
    v0 = NHTTPi_GetSystemInfoP((s32)arg0);
    v1 = NHTTPi_GetMutexInfoP(v0);
    v2 = ((s32 (*)(...))NHTTPi_GetConnection)(v1, (s32)arg0);
    arg0 = (u8 *)v2;
    if ((s32)arg0 == 0) {
        arg0 = (u8 *)-1;
    } else {
        arg0 = (u8 *)*(s32 *)(arg0);
    }
    return (s32)arg0;
}

extern "C" s32 NHTTP_GetBodyBuffer(u8 *arg0, s32 arg1, u8 *arg2)
{
    s32 r4;
    u8 *r6;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;
    s32 t0;
    s32 t1;
    v0 = NHTTPi_GetSystemInfoP((s32)arg0, arg1, (s32)arg2);
    v1 = NHTTPi_GetMutexInfoP(v0);
    v2 = ((s32 (*)(...))NHTTPi_GetConnection)(v1, (s32)arg0);
    r6 = (u8 *)arg1;
    r4 = v1;
    arg1 = v2;
    if (arg1 != 0) {
        v3 = NHTTPi_Connection2Response((u8 *)r4, arg1);
        arg0 = (u8 *)v3;
        if ((s32)arg0 == 0) {
            return -1;
        } else {
            t0 = *(s32 *)(arg0 + 0x28);
            *(s32 *)(r6) = t0;
            t1 = *(s32 *)(arg0 + 0x1C);
            *(s32 *)(arg2) = t1;
            return *(s32 *)(arg0 + 0x4);
        }
    } else {
        return -1;
    }
}

extern "C" s32 NHTTP_GetUserParam(u8 *arg0)
{
    s32 r1;
    s32 r4;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;
    v0 = NHTTPi_GetSystemInfoP((s32)arg0);
    v1 = NHTTPi_GetMutexInfoP(v0);
    v2 = ((s32 (*)(...))NHTTPi_GetConnection)(v1, (s32)arg0);
    r4 = v1;
    r1 = v2;
    if (r1 != 0) {
        v3 = NHTTPi_Connection2Response((u8 *)r4, r1);
        arg0 = (u8 *)v3;
        if ((s32)arg0 != 0) {
            arg0 = (u8 *)*(s32 *)(arg0 + 0x438);
        } else {
            arg0 = (u8 *)0;
        }
        return (s32)arg0;
    } else {
        return 0;
    }
}

extern "C" s32 NHTTP_GetConnectionError(u8 *arg0)
{
    s32 v0;
    s32 v1;
    s32 v2;
    v0 = NHTTPi_GetSystemInfoP((s32)arg0);
    v1 = NHTTPi_GetMutexInfoP(v0);
    v2 = ((s32 (*)(...))NHTTPi_GetConnection)(v1, (s32)arg0);
    arg0 = (u8 *)v2;
    if ((s32)arg0 != 0) {
        arg0 = (u8 *)*(s32 *)(arg0 + 0x4);
    } else {
        arg0 = (u8 *)-1;
    }
    return (s32)arg0;
}

extern "C" s32 NHTTP_GetConnectionProgress(s32 arg0, s32 *arg1, s32 *arg2)
{
    s32 ctx = ((s32 (*)(...))NHTTPi_GetMutexInfoP)(((s32 (*)(...))NHTTPi_GetSystemInfoP)());
    s32 r = ((s32 (*)(...))NHTTPi_GetConnection)(ctx, arg0);
    u8 *e;
    if (r != 0) {
        e = (u8 *)((s32 (*)(...))NHTTPi_Connection2Response)(ctx, r);
        if (e != 0) {
            *arg1 = *(s32 *)(e + 8);
            *arg2 = *(u32 *)(e + 0xC) == 0xFFFFFFFF ? 0 : *(s32 *)(e + 0xC);
            return 0;
        }
        return -1;
    }
    return -1;
}

extern "C" s32 SOCL_Startup(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    u8 *r4;
    s32 r5;
    OSi_ReferSymbol(0x2000C20, arg1, arg2, arg3);
    if (*(s32 *)(SOCLiConfigPtr) != 0)
        return 0;
    SOCLi_InitResource(*(s32 *)(SOCLiConfigPtr));
    *(s32 *)(SOCLiConfigPtr) = arg0;
    SOCLi_StartupCPS();
    s32 v3 = SOCLi_StartupSOCL();
    arg0 = v3;
    r4 = (u8 *)SOCLiConfigPtr;
    r5 = v3;
    if (r5 < 0) {
        SOCLi_CleanupCPS();
        *(s32 *)(r4) = 0;
    }
    return r5;
}

extern "C" asm s32 SOCLi_StartupSOCL(...)
{
    stmdb sp!, {r4, lr}
    ldr r0, =SOCLiConfigPtr
    ldr r0, [r0]
    ldr r0, [r0, #0x20]
    bl SOCLi_StartupCommandPacketQueue
    movs r4, r0
    bmi @L_02118f98
    ldr r0, =data_ov014_02125e78
    bl SOCL_CreateSocket
    ldr r1, =SOCLiYieldWait
    str r0, [r1, #0xc]
@L_02118f98:
    mov r0, r4
    ldmia sp!, {r4, pc}
}

extern "C" asm s32 SOCLi_StartupCPS(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r7, =SOCLiConfigPtr
    ldr r5, =SOCLiCPSConfig
    mov r4, #0
    ldr r6, [r7]
    mov r0, r5
    mov r1, r4
    mov r2, #0x30
    bl MI_CpuFill8
    ldr r2, [r6, #0x18]
    ldr r0, =SOCLiYieldWait
    ldr r1, =SOCL_LinkIsOn
    str r2, [r0, #0x14]
    ldr r2, [r6, #0x1c]
    str r2, [r0, #0x18]
    str r1, [r0, #0x20]
    str r4, [r0, #0x24]
    str r4, [r0, #0x28]
    ldr r1, [r0]
    str r1, [r0, #0x3c]
    ldr r0, [r6, #0x24]
    cmp r0, #0
    ldreq r0, [r7, #4]
    str r0, [r5, #0x20]
    ldr r0, [r6, #0x28]
    cmp r0, #0
    bne @L_0211902c
    ldr r1, =SOCLiConfigPtr
    ldr r0, [r5, #0x20]
    ldr r1, [r1]
    ldr r1, [r1, #0x18]
    blx r1
@L_0211902c:
    str r0, [r5, #0x1c]
    ldr r2, [r6, #0x30]
    ldr r0, =0x5dc
    cmp r2, #0
    moveq r2, #0x240
    cmp r2, r0
    movgt r2, r0
    bgt @L_02119054
    cmp r2, #0x240
    movlt r2, #0x240
@L_02119054:
    ldr r7, [r6, #0x34]
    ldr r1, =SOCLSocketParamTCP
    sub r4, r2, #0x28
    cmp r7, #0
    moveq r7, #0x10c0
    ldr r0, =CPSMyIp
    mov r3, #0
    strh r7, [r1, #2]
    mov r2, r4, lsl #1
    strh r2, [r1, #4]
    str r4, [r5, #0x24]
    str r3, [r0]
    ldr r0, [r6]
    mov r2, #1
    cmp r0, #0
    ldreq r0, =SOCLiYieldWait
    ldreq r1, =SOCLi_SetMyIP
    streq r3, [r0, #8]
    streq r2, [r5]
    streq r1, [r5, #0xc]
    beq @L_021190c4
    ldr r1, =SOCLi_DhcpTimeout
    ldr r0, =SOCLiYieldWait
    str r3, [r5]
    str r1, [r5, #0xc]
    str r2, [r0, #8]
    ldr r0, [r0, #4]
    str r0, [r5, #0x28]
@L_021190c4:
    ldr r0, [r6, #0x2c]
    cmp r0, #0
    moveq r0, #0xb
    bl CPS_SetThreadPriority
    ldr r0, =CPSi_RecvCallbackFunc
    bl WCM_SetRecvDCFCallback
    ldr r0, =SOCLi_TrashSocket
    bl CPS_SetScavengerCallback
    ldr r0, =SOCLi_CheckNConfig
    bl CPS_SetCheckNConfigCallback
    mov r0, r5
    bl CPS_Startup
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void SOCLi_SetMyIP(void)
{
    ldr r0, =SOCLiConfigPtr
    ldr r1, =CPSMyIp
    ldr r12, [r0]
    ldr r0, =CPSNetMask
    ldr r3, [r12, #4]
    ldr r2, =CPSGatewayIp
    str r3, [r1]
    ldr r3, [r12, #8]
    ldr r1, =CPSDnsIp
    str r3, [r0]
    ldr r3, [r12, #0xc]
    ldr r0, =SOCLiYieldWait
    str r3, [r2]
    ldr r2, [r12, #0x10]
    str r2, [r1]
    ldr r2, [r12, #0x14]
    str r2, [r1, #4]
    ldr r1, [r0, #8]
    orr r1, r1, #2
    str r1, [r0, #8]
    bx lr
}

extern "C" char *SOCLi_DhcpTimeout(void)
{
    s32 t0 = (*(s32 *)(((u8 *)&SOCLiYieldWait) + 0x8) | 2);
    *(s32 *)(((u8 *)&SOCLiYieldWait) + 0x8) = t0;
    return (char *)((u8 *)&SOCLiYieldWait);
}

extern "C" s32 SOCL_LinkIsOn(void)
{
    s32 v0 = WCM_GetApMacAddress();
    return (v0 != 0 ? 1 : 0);
}

extern "C" asm void SOCLi_StartupCommandPacketQueue(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r0
    mov r6, #0x2c
    mul r1, r5, r6
    ldr r0, =SOCLiConfigPtr
    mov r2, r5, lsl #2
    add r2, r2, #3
    ldr r0, [r0]
    add r1, r1, #3
    bic r4, r2, #3
    bic r2, r1, #3
    ldr r1, [r0, #0x18]
    add r0, r2, r4
    blx r1
    movs r7, r0
    subeq r0, r6, #0x2d
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r0, =SOCLiCommandPacketQueue
    mov r1, r7
    mov r2, r5
    bl OS_InitMessageQueue
    cmp r5, #0
    add r4, r7, r4
    ble @L_0211923c
@L_02119224:
    mov r0, r4
    bl SOCLi_FreeCommandPacket
    sub r5, r5, #1
    cmp r5, #0
    add r4, r4, #0x2c
    bgt @L_02119224
@L_0211923c:
    ldr r1, =SOCLiCommandPackets
    mov r0, #0
    str r7, [r1]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" s32 SOCLi_CleanupCommandPacketQueue(void)
{
    s32 t0;
    s32 t1;
    if (*(s32 *)(SOCLiCommandPackets + 0x20) < *(s32 *)(SOCLiCommandPackets + 0x18))
        return -1;
    t0 = *(s32 *)(SOCLiCommandPackets);
    t1 = *(s32 *)(*(u8 * *)(SOCLiConfigPtr) + 0x1C);
    ((s32 (*)(...))*(s32 *)(*(u8 * *)(SOCLiConfigPtr) + 0x1C))(t0, t1);
    *(s32 *)(SOCLiCommandPackets) = 0;
    return 0;
}

extern "C" asm s32 SOCLi_AllocCommandPacket(...)
{
    stmdb sp!, {r3, lr}
    mov r2, r0
    ldr r0, =SOCLiCommandPacketQueue
    add r1, sp, #0
    bl OS_ReceiveMessage
    cmp r0, #0
    ldrne r0, [sp]
    moveq r0, #0
    ldmia sp!, {r3, pc}
}

extern "C" void SOCLi_CreateCommandPacket(s32 arg0, u8 *arg1, u8 arg2)
{
    s32 v0 = SOCLi_AllocCommandPacket(arg2, (s32)arg1, arg2);
    if (v0 == 0)
        return;
    *(s32 *)(((u8 *)v0)) = arg0;
    *(s32 *)(((u8 *)v0) + 0x4) = (s32)arg1;
    *(s32 *)(((u8 *)v0) + 0x8) = 0;
    s8 t0 = *(s8 *)(arg1 + 0xAF);
    *(u8 *)(((u8 *)v0) + 0xC) = t0;
    *(u8 *)(((u8 *)v0) + 0xD) = arg2;
}

extern "C" s32 SOCLi_FreeCommandPacket(s32 arg0)
{
    s32 v0;
    if (arg0 == 0)
        return arg0;
    v0 = OS_SendMessage((s32)SOCLiCommandPacketQueue, arg0, 0);
    return v0;
}

extern "C" asm s32 SOCLi_GetCtrlPipe(...)
{
    ldr r1, [r0, #0xa0]
    cmp r1, #0
    ldreq r1, [r0, #0xa4]
    mov r0, r1
    bx lr
}

extern "C" asm s32 SOCLi_SendCommandPacket(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    movs r5, r1
    beq @L_02119350
    ldrsb r1, [r5, #0xd]
    tst r1, #1
    beq @L_02119358
@L_02119350:
    mov r2, #1
    b @L_0211935c
@L_02119358:
    mov r2, #0
@L_0211935c:
    mov r1, r5
    bl OS_SendMessage
    movs r4, r0
    bne @L_02119374
    mov r0, r5
    bl SOCLi_FreeCommandPacket
@L_02119374:
    mov r0, #0
    cmp r4, #0
    mvneq r0, #0x29
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void SOCLi_SendCommandPacketToCtrlPipe(s32 arg0, s32 arg1)
{
    s32 v0 = SOCLi_GetCtrlPipe(arg0, arg1);
    SOCLi_SendCommandPacket(v0, arg1);
}

extern "C" asm s32 SOCLi_ExecCommandPacket(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x28
    mov r6, r1
    ldrsb r2, [r6, #0xd]
    mov r7, r0
    cmp r2, #1
    bne @L_021193f4
    add r5, sp, #8
    mov r4, #1
    add r1, sp, #0
    mov r0, r5
    mov r2, r4
    bl OS_InitMessageQueue
    mov r0, r7
    mov r1, r6
    str r5, [r6, #8]
    bl SOCLi_SendCommandPacket
    add r1, sp, #4
    mov r0, r5
    mov r2, r4
    bl OS_ReceiveMessage
    b @L_02119404
@L_021193f4:
    mov r2, #0
    str r2, [r6, #8]
    bl SOCLi_SendCommandPacket
    str r0, [sp, #4]
@L_02119404:
    ldr r0, [sp, #4]
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" void SOCLi_ExecCommandPacketInRecvPipe(u8 *arg0)
{
    SOCLi_ExecCommandPacket(*(s32 *)(arg0 + 0xA0));
}

extern "C" void SOCLi_ExecCommandPacketInSendPipe(u8 *arg0)
{
    SOCLi_ExecCommandPacket(*(s32 *)(arg0 + 0xA4));
}

extern "C" void SOCLi_ExecCommandPacketInCtrlPipe(s32 arg0, s32 arg1)
{
    s32 v0 = SOCLi_GetCtrlPipe(arg0, arg1);
    SOCLi_ExecCommandPacket(v0, arg1);
}

extern "C" asm void SOCLi_CommandPacketHandler(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #4
    mov r4, #0
    mov r9, r0
    mov r10, r4
    add r6, sp, #0
    mov r5, #1
@L_02119464:
    mov r0, r9
    mov r1, r6
    mov r2, r5
    bl OS_ReadMessage
    ldr r0, [sp]
    cmp r0, #0
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r1, [r0]
    blx r1
    mov r8, r0
    bl OS_DisableInterrupts
    mov r7, r0
    bl OS_DisableScheduler
    mov r0, r9
    mov r1, r4
    mov r2, r4
    bl OS_ReceiveMessage
    ldr r0, [sp]
    ldr r0, [r0, #4]
    cmp r0, #0
    strne r8, [r0, #0xa8]
    ldr r0, [sp]
    ldr r0, [r0, #8]
    cmp r0, #0
    beq @L_021194d8
    mov r1, r8
    mov r2, r10
    bl OS_SendMessage
@L_021194d8:
    ldr r0, [sp]
    bl SOCLi_FreeCommandPacket
    bl OS_EnableScheduler
    mov r0, r7
    bl OS_RestoreInterrupts
    b @L_02119464
}

extern "C" asm void func_ov014_021194f0(void)
{
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void SOCL_CreateSocket(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r1, =SOCLiConfigPtr
    ldr r1, [r1]
    cmp r1, #0
    mvneq r0, #0x26
    ldmeqia sp!, {r3, r4, r5, pc}
    bl SOCLi_StartupSocket
    movs r4, r0
    mvneq r0, #0x30
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r5, #1
    ldr r0, =SOCLi_CreateSocketCallBack
    mov r1, r4
    mov r2, r5
    bl SOCLi_CreateCommandPacket
    mov r1, r0
    mov r0, r4
    bl SOCLi_ExecCommandPacketInCtrlPipe
    cmp r4, #0
    mov r1, #0
    beq @L_02119558
    ldrsh r0, [r4, #0xac]
    tst r0, #1
    movne r1, r5
@L_02119558:
    cmp r1, #0
    beq @L_02119598
    ldrsb r0, [r4, #0xaf]
    mov r1, #1
    cmp r0, #0
    cmpne r0, #4
    movne r1, #0
    cmp r1, #0
    ldrne r0, =SOCLi_Resource
    ldrne r1, [r0]
    addne r1, r1, #1
    strne r1, [r0]
    ldreq r0, =SOCLi_Resource
    ldreq r1, [r0, #4]
    addeq r1, r1, #1
    streq r1, [r0, #4]
@L_02119598:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 SOCLi_CreateSocketCallBack(u8 *arg0)
{
    s32 r1;
    u8 *r4;
    u8 *t0;
    t0 = (u8 *)*(s32 *)(arg0 + 0x4);
    CPS_SocRegister((s32)t0);
    r4 = t0;
    arg0 = (u8 *)*(s8 *)(t0 + 0xAF);
    r1 = *(s32 *)(t0 + 0xA4);
    switch ((s32)arg0) {
        case 0:
        case 4:
            CPS_SocDup((r1 + 0x20), r1);
            CPS_SocUse();
            break;
        case 1:
            CPS_SocUse((s32)arg0, r1);
            CPS_SocDatagramMode();
            CPS_SetUdpCallback((s32)((u8 *)&SOCLi_UdpRecvCallback));
            break;
        case 2:
            CPS_SocDatagramMode((s32)arg0, r1);
            break;
    }
    *(u16 *)(r4 + 0xAC) = 1;
    return 0;
}

extern "C" void *SOCLi_StartupSocket(s32 arg0)
{
    s32 n;
    void *p;
    s32 s;
    n = ((s32 (*)(...))SOCLi_GetSizeSocket)(arg0);
    s = ((s32 (*)(...))OS_DisableInterrupts)();
    p = (*(void *(**)(s32))(*(u8 **)SOCLiConfigPtr + 0x18))(n);
    if (p != 0) {
        ((s32 (*)(...))MI_CpuFill8)(p, 0, n);
        ((s32 (*)(...))SOCLi_InitSocket)(p, arg0);
        ((s32 (*)(...))SOCLi_SocketRegister)(p);
    }
    ((s32 (*)(...))OS_RestoreInterrupts)(s);
    return p;
}

extern "C" s32 SOCLi_GetSizeSocket(u8 *arg0)
{
    s32 n = 0xBC;
    if (*(u16 *)(arg0 + 2) != 0) {
        n += 0x114;
        n += ((s32 (*)(...))SOCLi_RoundUp4)(*(u16 *)(arg0 + 2));
        n += ((s32 (*)(...))SOCLi_RoundUp4)(*(u16 *)(arg0 + 8));
        n += ((s32 (*)(...))SOCLi_GetSizeCommandPipe)(arg0 + 0x10);
    }
    if (*(u16 *)(arg0 + 6) != 0) {
        n += 0x110;
        n += ((s32 (*)(...))SOCLi_RoundUp4)(*(u16 *)(arg0 + 6));
        n += ((s32 (*)(...))SOCLi_RoundUp4)(*(u16 *)(arg0 + 0xA));
        n += ((s32 (*)(...))SOCLi_RoundUp4)(*(u16 *)(arg0 + 0xC));
        n += ((s32 (*)(...))SOCLi_GetSizeCommandPipe)(arg0 + 0x14);
    }
    return n;
}

extern "C" s32 SOCLi_GetSizeCommandPipe(u8 *arg0)
{
    s32 v0 = SOCLi_RoundUp4((*(u8 *)(arg0 + 0x3) << 2));
    s32 v1 = SOCLi_RoundUp4(*(u16 *)(arg0));
    return (v0 + v1);
}

extern "C" asm void SOCLi_InitSocket(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r1
    ldrh r1, [r6, #2]
    ldrsb r2, [r6]
    mov r7, r0
    ldrsb r0, [r6, #1]
    strb r2, [r7, #0xaf]
    cmp r1, #0
    strb r0, [r7, #0xae]
    add r5, r7, #0xbc
    beq @L_021197b0
    ldrh r3, [r6, #4]
    mov r1, r5
    add r0, r5, #0x114
    add r2, r6, #0x10
    mov r4, r5
    str r5, [r7, #0xa0]
    strh r3, [r5, #0xfc]
    bl SOCLi_InitCommandPipe
    ldrh r2, [r6, #2]
    add r1, r7, #0x48
    bl SOCLi_InitSocketBuffer
    ldrh r2, [r6, #8]
    add r1, r7, #0x5c
    bl SOCLi_InitSocketBuffer
    mov r2, #0
    ldrh r3, [r6, #0xe]
    add r1, r4, #0x100
    mov r5, r0
    strh r3, [r1, #0xa]
    str r2, [r4, #0x110]
    str r2, [r4, #0x10c]
@L_021197b0:
    ldrh r0, [r6, #6]
    cmp r0, #0
    ldreq r0, =SOCLiUDPSendSocket
    ldreq r0, [r0]
    ldreq r0, [r0, #0xa4]
    streq r0, [r7, #0xa4]
    beq @L_0211981c
    str r5, [r7, #0xa4]
    mov r1, r5
    add r0, r5, #0x110
    add r2, r6, #0x14
    mov r4, r5
    str r7, [r5, #0x10c]
    bl SOCLi_InitCommandPipe
    ldrh r2, [r6, #6]
    add r1, r7, #0x54
    bl SOCLi_InitSocketBuffer
    ldrh r2, [r6, #0xa]
    add r1, r7, #0x64
    bl SOCLi_InitSocketBuffer
    ldrh r2, [r6, #0xc]
    add r1, r5, #0xf8
    bl SOCLi_InitSocketBuffer
    mov r1, #0
    str r1, [r4, #0x108]
    mov r5, r0
    str r1, [r4, #0x104]
@L_0211981c:
    mov r0, r5
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" s32 SOCLi_InitSocketBuffer(s32 arg0, u8 *arg1, s32 arg2)
{
    s32 r3;
    s32 v0;
    r3 = arg0;
    if (arg2 == 0) {
        r3 = 0;
    }
    *(s32 *)(arg1) = arg2;
    *(s32 *)(arg1 + 0x4) = r3;
    v0 = SOCLi_RoundUp4(arg2);
    return (arg0 + v0);
}

extern "C" asm void SOCLi_InitCommandPipe(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #8
    mov r5, r2
    mov r7, r0
    mov r0, r5
    mov r6, r1
    bl SOCLi_GetSizeCommandPipe
    mov r4, r0
    ldrb r2, [r5, #3]
    mov r0, r6
    mov r1, r7
    bl OS_InitMessageQueue
    add r0, r6, #0xe0
    bl OS_InitMutex
    ldrh r2, [r5]
    ldrb r1, [r5, #2]
    add r0, r6, #0x20
    str r2, [sp]
    str r1, [sp, #4]
    ldr r1, =SOCLi_CommandPacketHandler
    mov r2, r6
    add r3, r7, r4
    bl OS_CreateThread
    add r0, r6, #0x20
    bl OS_WakeupThreadDirect
    add r0, r7, r4
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" s32 SOCL_Bind(s32 arg0, s32 arg1)
{
    s32 r0;
    s32 r1;
    s32 r4;
    u8 *r5;
    s32 v0;
    s32 v1;
    v0 = SOCL_SocketIsInvalid(arg0, arg1);
    r0 = 0;
    if (v0 != 0)
        return -0x1C;
    r5 = (u8 *)arg0;
    r4 = arg1;
    r1 = 0;
    if ((s32)r5 != 0) {
        r0 = *(s16 *)(r5 + 0xAC);
        r1 = ((*(s16 *)(r5 + 0xAC) & 1) != 0 ? 1 : r1);
    }
    if (r1 == 0)
        return -0x27;
    if ((*(s16 *)(r5 + 0xAC) & 2) != 0)
        return -7;
    *(u16 *)(r5 + 0xB0) = r4;
    if (*(s8 *)(r5 + 0xAF) != 1)
        return 0;
    v1 = SOCLi_ExecBindCommand(r5);
    return v1;
}

extern "C" asm void SOCL_Connect(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, r1
    mov r4, r2
    bl SOCL_SocketIsInvalid
    cmp r0, #0
    bne @L_0211995c
    ldrsh r0, [r6, #0xac]
    tst r0, #8
    beq @L_02119964
@L_0211995c:
    mvn r0, #0x1b
    ldmia sp!, {r4, r5, r6, pc}
@L_02119964:
    cmp r6, #0
    mov r1, #0
    beq @L_0211997c
    ldrsh r0, [r6, #0xac]
    tst r0, #1
    movne r1, #1
@L_0211997c:
    cmp r1, #0
    mvneq r0, #0x26
    ldmeqia sp!, {r4, r5, r6, pc}
    ldrsb r0, [r6, #0xaf]
    mov r1, #1
    cmp r0, #0
    cmpne r0, #4
    movne r1, #0
    cmp r1, #0
    beq @L_02119a64
    and r0, r4, #0xf0000000
    cmp r0, #0xe0000000
    beq @L_021199f0
    ldr r0, =CPSMyIp
    ldr r1, =CPSNetMask
    ldr r0, [r0]
    ldr r1, [r1]
    eor r0, r0, r4
    tst r1, r0
    beq @L_021199d4
    cmn r4, #1
    b @L_021199e0
@L_021199d4:
    mvn r1, r1
    and r0, r1, r4
    cmp r1, r0
@L_021199e0:
    moveq r0, #1
    movne r0, #0
    cmp r0, #0
    beq @L_021199f8
@L_021199f0:
    mvn r0, #0x1b
    ldmia sp!, {r4, r5, r6, pc}
@L_021199f8:
    ldrsh r0, [r6, #0xac]
    tst r0, #4
    beq @L_02119a18
    ldrsb r0, [r6, #0xae]
    cmp r0, #1
    mvneq r0, #0x1d
    movne r0, #0
    ldmia sp!, {r4, r5, r6, pc}
@L_02119a18:
    ldrsh r0, [r6, #0xac]
    tst r0, #2
    beq @L_02119a3c
    ldrsh r0, [r6, #0xac]
    tst r0, #0x40
    ldrne r0, [r6, #0xa8]
    ldreq r0, =data_ov014_02125e44
    ldreq r0, [r0]
    ldmia sp!, {r4, r5, r6, pc}
@L_02119a3c:
    strh r5, [r6, #0xb2]
    mov r0, r6
    str r4, [r6, #0xb4]
    bl SOCLi_ExecBindCommand
    ldrsb r1, [r6, #0xae]
    cmp r1, #1
    ldmeqia sp!, {r4, r5, r6, pc}
    cmp r0, #0
    mvnge r0, #0x19
    ldmia sp!, {r4, r5, r6, pc}
@L_02119a64:
    strh r5, [r6, #0xb2]
    str r4, [r6, #0xb4]
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 SOCLi_ExecBindCommand(u8 *arg0)
{
    u8 *r1;
    s32 v0;
    s32 v1;
    s8 t0;
    u16 t1;
    u16 t2;
    s32 t3;
    s32 t4;
    t0 = *(s8 *)(arg0 + 0xAE);
    v0 = ((s32 (*)(...))SOCLi_CreateCommandPacket)((s32)((u8 *)&SOCLi_BindCallBack), arg0, t0);
    r1 = (u8 *)v0;
    if ((s32)r1 == 0) {
        return -0x21;
    } else {
        t1 = *(u16 *)(arg0 + 0xB0);
        *(u16 *)(r1 + 0x10) = t1;
        t2 = *(u16 *)(arg0 + 0xB2);
        *(u16 *)(r1 + 0x12) = t2;
        t3 = *(s32 *)(arg0 + 0xB4);
        *(s32 *)(r1 + 0x14) = t3;
        t4 = (*(s16 *)(arg0 + 0xAC) | 2);
        *(u16 *)(arg0 + 0xAC) = t4;
        v1 = ((s32 (*)(...))SOCLi_ExecCommandPacketInRecvPipe)((s32)arg0, (s32)r1, t4);
        return v1;
    }
}

extern "C" asm void SOCLi_BindCallBack(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    ldr r4, [r7, #4]
    mov r6, #0
    ldr r5, [r4, #0xa0]
    add r0, r5, #0xe0
    bl OS_LockMutex
    ldrh r0, [r7, #0x10]
    ldrh r1, [r7, #0x12]
    ldr r2, [r7, #0x14]
    bl CPS_SocBind
    str r6, [r5, #0xf8]
    ldrsb r0, [r7, #0xc]
    cmp r0, #0
    cmpne r0, #4
    bne @L_02119b20
    bl CPS_TcpConnect
    mov r6, r0
@L_02119b20:
    add r0, r5, #0xe0
    bl OS_UnlockMutex
    cmp r6, #0
    ldrnesh r1, [r4, #0xac]
    mvnne r0, #0x4b
    moveq r0, #0
    orrne r1, r1, #0x40
    strneh r1, [r4, #0xac]
    ldreqsh r1, [r4, #0xac]
    orreq r1, r1, #4
    streqh r1, [r4, #0xac]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void SOCL_ReadFrom(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0xc
    mov r9, r0
    mov r8, r1
    mov r7, r2
    mov r6, r3
    bl SOCL_SocketIsInvalid
    cmp r0, #0
    addne sp, sp, #0xc
    mvnne r0, #0x1b
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, pc}
    ldr r0, [sp, #0x2c]
    tst r0, #4
    bne @L_02119b94
    ldrsb r0, [r9, #0xae]
    cmp r0, #0
    bne @L_02119bb0
@L_02119b94:
    ldrsb r0, [r9, #0xaf]
    cmp r0, #4
    addeq sp, sp, #0xc
    mvneq r0, #0x1b
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, pc}
    mov r5, #0
    b @L_02119bc8
@L_02119bb0:
    bl OS_GetProcMode
    cmp r0, #0x12
    addeq sp, sp, #0xc
    mvneq r0, #0x1b
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, pc}
    mov r5, #1
@L_02119bc8:
    cmp r9, #0
    mov r1, #0
    beq @L_02119be0
    ldrsh r0, [r9, #0xac]
    tst r0, #1
    movne r1, #1
@L_02119be0:
    cmp r1, #0
    addeq sp, sp, #0xc
    mvneq r0, #0x26
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, pc}
    ldrsb r0, [r9, #0xaf]
    mov r1, #1
    cmp r0, #0
    cmpne r0, #4
    movne r1, #0
    cmp r1, #0
    beq @L_02119c30
    ldrsh r0, [r9, #0xac]
    tst r0, #4
    beq @L_02119c24
    ldrsh r0, [r9, #0xac]
    tst r0, #8
    beq @L_02119c30
@L_02119c24:
    add sp, sp, #0xc
    mvn r0, #0x37
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
@L_02119c30:
    ldr r4, [r9, #0xa0]
    tst r5, #1
    add r0, r4, #0xe0
    bne @L_02119c58
    bl OS_TryLockMutex
    cmp r0, #0
    bne @L_02119c5c
    add sp, sp, #0xc
    mvn r0, #5
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
@L_02119c58:
    bl OS_LockMutex
@L_02119c5c:
    ldr r0, [sp, #0x28]
    ldr r12, [sp, #0x2c]
    str r0, [sp]
    mov r0, r9
    mov r1, r8
    mov r2, r7
    mov r3, r6
    stmib sp, {r5, r12}
    bl SOCLi_ReadAndConsumeBuffer
    mov r5, r0
    add r0, r4, #0xe0
    bl OS_UnlockMutex
    mov r0, r5
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
}

extern "C" s32 SOCLi_ReadAndConsumeBuffer(u8 *arg0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6)
{
    u8 *p = *(u8 **)(arg0 + 0xA0);
    s32 f = (a6 & 2) && p != 0;
    s32 old;
    s32 r;
    if (f != 0) {
        old = ((s8 *)p)[0xFE];
        p[0xFE] = 1;
    }
    if (((s8 *)arg0)[0xAF] == 1) {
        r = ((s32 (*)(...))SOCLi_ReadUdpBuffer)(arg0, a1, a2, a3, a4, a5);
    } else {
        r = ((s32 (*)(...))SOCLi_ReadBuffer)(arg0, a1, a2, a3, a4, a5);
        if (r >= 0)
            ((s32 (*)(...))SOCLi_ConsumeBuffer)(arg0);
    }
    if (f != 0)
        p[0xFE] = old;
    return r;
}

extern "C" s32 SOCLi_ReadBuffer(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5)
{
    s32 v0;
    s32 v1;
    s32 v2;
    if (*(s8 *)(arg0 + 0xAF) == 4) {
        v0 = SOCLi_ExecReadCommand((s32)arg0, arg1, arg2, arg3, arg4);
        return v0;
    } else {
        v1 = SOCLi_CopyCPSBuffer((s32)arg0, arg1, arg2, arg3, arg4);
        if (v1 != -6)
            return v1;
        if ((arg5 & 1) == 0)
            return v1;
        v2 = SOCLi_ExecReadCommand((s32)arg0, arg1, arg2, arg3, arg4);
        return v2;
    }
}

extern "C" asm s32 SOCLi_CopyCPSBuffer(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x10
    mov r9, r0
    mov r8, r1
    mov r7, r2
    mov r6, r3
    bl OS_DisableInterrupts
    add r1, sp, #8
    mov r4, r0
    str r1, [sp]
    add r1, sp, #0xc
    mov r0, r9
    add r2, sp, #6
    add r3, sp, #4
    bl SOCLi_ReadCPSBuffer
    cmp r0, #0
    beq @L_02119e48
    ldr r5, [sp, #0xc]
    cmp r5, #0
    mvneq r5, #5
    beq @L_02119e64
    ldrsb r1, [r9, #0xaf]
    cmp r7, r5
    mov r2, #1
    movgt r7, r5
    cmp r1, #0
    cmpne r1, #4
    movne r2, #0
    cmp r2, #0
    mov r1, r8
    mov r2, r7
    movne r5, r7
    bl MI_CpuCopy
    ldr r1, [r9, #0xa0]
    ldrsb r0, [r1, #0xfe]
    cmp r0, #0
    bne @L_02119e64
    ldr r0, [r1, #0xf8]
    add r0, r0, r5
    str r0, [r1, #0xf8]
    b @L_02119e64
@L_02119e48:
    ldr r0, [sp, #0xc]
    mov r5, #0
    cmp r0, #0
    ldrsh r0, [r9, #0xac]
    mvnne r5, #0x1b
    bic r0, r0, #6
    strh r0, [r9, #0xac]
@L_02119e64:
    cmp r5, #0
    blt @L_02119e98
    cmp r6, #0
    ldrne r1, [sp, #0x30]
    cmpne r1, #0
    ldrneh r0, [sp, #4]
    strneh r0, [r6]
    ldrne r0, [sp, #8]
    strne r0, [r1]
    ldrh r0, [r9, #0xb0]
    cmp r0, #0
    ldreqh r0, [sp, #6]
    streqh r0, [r9, #0xb0]
@L_02119e98:
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, r5
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void SOCLi_ReadCPSBuffer(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r0, [r0, #0xa0]
    ldr r4, [r0, #0xc4]
    ldr r5, [r0, #0xf8]
    ldr r0, [r4, #0x50]
    subs lr, r0, r5
    bmi @L_02119f04
    ldrh r12, [r4, #0xa]
    ldr r0, [sp, #0x10]
    cmp lr, #0
    strh r12, [r2]
    ldrh r2, [r4, #0x18]
    strh r2, [r3]
    ldr r2, [r4, #0x1c]
    str r2, [r0]
    str lr, [r1]
    bne @L_02119f14
    ldrb r0, [r4, #8]
    cmp r0, #4
    beq @L_02119f14
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_02119f04:
    mvn r0, #0
    str r0, [r1]
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_02119f14:
    ldr r0, [r4, #0x4c]
    add r0, r0, r5
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm s32 SOCLi_ExecReadCommand(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r6, r1
    mov r5, r2
    ldr r0, =SOCLi_ReadCallBack
    mov r1, r7
    mov r2, #1
    mov r4, r3
    bl SOCLi_CreateCommandPacket
    mov r1, r0
    str r6, [r1, #0x10]
    str r5, [r1, #0x14]
    ldr r2, [sp, #0x18]
    str r4, [r1, #0x18]
    mov r0, r7
    str r2, [r1, #0x1c]
    bl SOCLi_ExecCommandPacketInRecvPipe
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void SOCLi_ReadCallBack(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    ldr r7, [r0, #4]
    ldr r1, [r0, #0x10]
    ldr r8, [r7, #0xa0]
    str r1, [sp, #0xc]
    ldr r1, [r0, #0x18]
    ldr r10, [r0, #0x14]
    ldr r0, [r0, #0x1c]
    ldr r9, [r8, #0xf8]
    str r1, [sp, #8]
    str r0, [sp, #4]
    mov r4, #0
    mov r5, #1
    mov r11, #0xa
    add r6, sp, #0x10
@L_02119fac:
    mov r0, r6
    bl CPS_SocRead
    cmp r0, #0
    beq @L_0211a000
    ldr r1, [sp, #0x10]
    sub r1, r1, r9
    cmp r1, #0
    bgt @L_0211a000
    ldrsb r0, [r7, #0xaf]
    mov r1, r5
    cmp r0, #0
    cmpne r0, #4
    movne r1, r4
    cmp r1, #0
    ldrneb r0, [r7, #8]
    cmpne r0, #4
    movne r0, #0
    bne @L_0211a000
    mov r0, r11
    bl OS_Sleep
    b @L_02119fac
@L_0211a000:
    ldrsh r1, [r7, #0xac]
    tst r1, #0x80
    addne sp, sp, #0x14
    mvnne r0, #0xe
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrsb r1, [r7, #0xaf]
    cmp r1, #4
    bne @L_0211a05c
    cmp r0, #0
    addeq sp, sp, #0x14
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [sp, #0x10]
    cmp r10, r1
    movhi r10, r1
    ldr r1, [sp, #0xc]
    mov r2, r10
    bl MI_CpuCopy
    mov r0, r10
    bl CPS_SocConsume
    add sp, sp, #0x14
    mov r0, r10
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0211a05c:
    cmp r0, #0
    moveq r4, #0
    beq @L_0211a088
    ldr r4, [sp, #4]
    ldr r1, [sp, #0xc]
    ldr r3, [sp, #8]
    mov r0, r7
    mov r2, r10
    str r4, [sp]
    bl SOCLi_CopyCPSBuffer
    mov r4, r0
@L_0211a088:
    cmp r4, #0
    addle sp, sp, #0x14
    movle r0, r4
    ldmleia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrh r0, [r8, #0xfc]
    ldr r1, [r8, #0xf8]
    cmp r1, r0
    blt @L_0211a0b0
    mov r0, r7
    bl SOCLi_ConsumeCPSBuffer
@L_0211a0b0:
    mov r0, r4
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 SOCLi_ConsumeBuffer(u8 *arg0)
{
    s32 v0;
    s32 v1;
    if (*(s32 *)(*(u8 * *)(arg0 + 0xA0) + 0xF8) < *(u16 *)(*(u8 * *)(arg0 + 0xA0) + 0xFC))
        return 0;
    v0 = ((s32 (*)(...))SOCLi_CreateCommandPacket)((s32)((u8 *)&SOCLi_ConsumeCallBack), arg0, 0);
    if (v0 == 0)
        return (0 - 0x21);
    v1 = ((s32 (*)(...))SOCLi_ExecCommandPacketInRecvPipe)((s32)arg0, v0);
    return v1;
}

extern "C" void SOCLi_ConsumeCallBack(u8 *arg0)
{
    SOCLi_ConsumeCPSBuffer(*(s32 *)(arg0 + 0x4));
}

extern "C" asm s32 SOCLi_ConsumeCPSBuffer(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r4, [r0, #0xa0]
    bl OS_DisableInterrupts
    ldr r6, [r4, #0xf8]
    mov r5, r0
    cmp r6, #0
    beq @L_0211a148
    mov r1, #0
    mov r0, r6
    str r1, [r4, #0xf8]
    bl CPS_SocConsume
@L_0211a148:
    mov r0, r5
    bl OS_RestoreInterrupts
    mov r0, r6
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void SOCLi_ReadUdpBuffer(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r10, r0
    ldr r6, [r10, #0xa0]
    str r1, [sp]
    str r2, [sp, #4]
    mov r11, r3
    bl OS_DisableInterrupts
    ldr r7, [r6, #0x104]
    str r0, [sp, #8]
    cmp r7, #0
    bne @L_0211a1f0
    ldr r0, [sp, #0x34]
    mov r4, #1
    and r9, r0, #1
    mov r5, #0
@L_0211a198:
    cmp r9, #0
    mvneq r8, #5
    beq @L_0211a1f0
    add r0, r6, #0x10c
    bl OS_SleepThread
    mov r0, r10
    bl SOCL_SocketIsInvalid
    cmp r0, #0
    bne @L_0211a1dc
    mov r1, r5
    cmp r10, #0
    beq @L_0211a1d4
    ldrsh r0, [r10, #0xac]
    tst r0, #1
    movne r1, r4
@L_0211a1d4:
    cmp r1, #0
    bne @L_0211a1e4
@L_0211a1dc:
    mvn r8, #0x37
    b @L_0211a1f0
@L_0211a1e4:
    ldr r7, [r6, #0x104]
    cmp r7, #0
    beq @L_0211a198
@L_0211a1f0:
    cmp r7, #0
    beq @L_0211a284
    ldrh r1, [r7, #4]
    ldr r0, [sp, #4]
    cmp r0, r1
    strgt r1, [sp, #4]
    ldr r1, [sp]
    ldr r2, [sp, #4]
    add r0, r7, #0xc
    bl MI_CpuCopy
    cmp r11, #0
    ldrneh r0, [r7, #6]
    ldr r1, [sp, #0x30]
    strneh r0, [r11]
    cmp r1, #0
    ldrne r0, [r7, #8]
    strne r0, [r1]
    ldrsb r0, [r6, #0xfe]
    ldrh r8, [r7, #4]
    cmp r0, #0
    bne @L_0211a284
    ldr r0, [r7]
    ldr r1, =SOCLiConfigPtr
    str r0, [r6, #0x104]
    ldr r0, [r7]
    cmp r0, #0
    moveq r0, #0
    streq r0, [r6, #0x100]
    ldr r1, [r1]
    mov r0, r7
    ldr r1, [r1, #0x1c]
    blx r1
    add r1, r6, #0x100
    ldrh r2, [r1, #8]
    mov r0, r8, lsl #0x10
    sub r0, r2, r0, lsr #16
    strh r0, [r1, #8]
@L_0211a284:
    ldr r0, [sp, #8]
    bl OS_RestoreInterrupts
    mov r0, r8
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void SOCLi_UdpRecvCallback(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r7, r2
    ldr r4, [r7, #0xa0]
    mov r9, r0
    mov r8, r1
    bl OS_DisableInterrupts
    add r1, r4, #0x100
    ldrh r2, [r1, #8]
    ldrh r1, [r1, #0xa]
    mov r6, r0
    add r0, r2, r8
    cmp r1, r0
    blo @L_0211a368
    ldr r1, =SOCLiConfigPtr
    add r0, r8, #0xc
    ldr r1, [r1]
    ldr r1, [r1, #0x18]
    blx r1
    movs r5, r0
    beq @L_0211a354
    add r1, r4, #0x100
    ldrh r3, [r1, #8]
    mov r0, r8, lsl #0x10
    mov r2, #0
    add r3, r3, r0, lsr #16
    strh r3, [r1, #8]
    str r2, [r5]
    mov r0, r0, lsr #0x10
    strh r0, [r5, #4]
    ldrh r1, [r7, #0x18]
    mov r0, r9
    mov r2, r8
    strh r1, [r5, #6]
    ldr r3, [r7, #0x1c]
    add r1, r5, #0xc
    str r3, [r5, #8]
    bl MI_CpuCopy
    ldr r0, [r4, #0x100]
    cmp r0, #0
    ldrne r0, [r4, #0x100]
    strne r5, [r0]
    str r5, [r4, #0x100]
    ldr r0, [r4, #0x104]
    cmp r0, #0
    streq r5, [r4, #0x104]
    b @L_0211a378
@L_0211a354:
    ldr r0, =data_ov014_0212d244
    ldr r1, [r0]
    add r1, r1, #1
    str r1, [r0]
    b @L_0211a378
@L_0211a368:
    ldr r0, =data_ov014_0212d244
    ldr r1, [r0, #4]
    add r1, r1, #1
    str r1, [r0, #4]
@L_0211a378:
    ldrh r0, [r7, #0xb0]
    ldrh r2, [r7, #0x1a]
    ldr r1, [r7, #0x20]
    cmp r0, #0
    ldreqh r0, [r7, #0xa]
    strh r2, [r7, #0x18]
    str r1, [r7, #0x1c]
    streqh r0, [r7, #0xb0]
    add r0, r4, #0x10c
    bl OS_WakeupThread
    mov r0, r6
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void SOCL_WriteTo(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #8
    mov r8, r0
    mov r7, r1
    mov r6, r2
    mov r5, r3
    bl SOCL_SocketIsInvalid
    cmp r0, #0
    addne sp, sp, #8
    mvnne r0, #0x1b
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    cmp r8, #0
    mov r1, #0
    beq @L_0211a3fc
    ldrsh r0, [r8, #0xac]
    tst r0, #1
    movne r1, #1
@L_0211a3fc:
    cmp r1, #0
    addeq sp, sp, #8
    mvneq r0, #0x26
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldrsb r0, [r8, #0xaf]
    mov r1, #1
    cmp r0, #0
    cmpne r0, #4
    movne r1, #0
    cmp r1, #0
    beq @L_0211a44c
    ldrsh r0, [r8, #0xac]
    tst r0, #4
    beq @L_0211a440
    ldrsh r0, [r8, #0xac]
    tst r0, #8
    beq @L_0211a44c
@L_0211a440:
    add sp, sp, #8
    mvn r0, #0x37
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0211a44c:
    ldr r0, [sp, #0x24]
    ldr r4, [r8, #0xa4]
    tst r0, #4
    bne @L_0211a468
    ldrsb r0, [r8, #0xae]
    cmp r0, #0
    bne @L_0211a488
@L_0211a468:
    add r0, r4, #0xe0
    bl OS_TryLockMutex
    cmp r0, #0
    addeq sp, sp, #8
    mvneq r0, #5
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    mov r12, #0
    b @L_0211a494
@L_0211a488:
    add r0, r4, #0xe0
    bl OS_LockMutex
    mov r12, #1
@L_0211a494:
    ldr r1, [sp, #0x20]
    mov r0, r8
    str r1, [sp]
    mov r1, r7
    mov r2, r6
    mov r3, r5
    str r12, [sp, #4]
    bl SOCLi_WriteBuffer
    mov r5, r0
    add r0, r4, #0xe0
    bl OS_UnlockMutex
    mov r0, r5
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void SOCLi_WriteBuffer(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x18
    mov r10, r0
    ldr r4, [r10, #0xa4]
    ldrsb r0, [r10, #0xaf]
    ldr r4, [r4, #0x10c]
    mov r9, r1
    str r3, [sp, #0xc]
    cmp r0, #1
    mov r8, r2
    ldr r7, [sp, #0x40]
    ldr r6, [sp, #0x44]
    ldr r0, [r4, #0x54]
    mov r5, #0
    bne @L_0211a524
    sub r0, r0, #0x2a
    cmp r8, r0
    addgt sp, sp, #0x18
    subgt r0, r5, #0x23
    ldmgtia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    str r8, [sp, #0x10]
    b @L_0211a534
@L_0211a524:
    sub r0, r0, #0x36
    str r0, [sp, #0x10]
    cmp r8, r0
    strle r8, [sp, #0x10]
@L_0211a534:
    cmp r8, #0
    ble @L_0211a5c4
    and r11, r6, #1
@L_0211a540:
    ldr r2, [sp, #0x10]
    mov r0, r10
    mov r1, r8
    add r3, sp, #0x14
    str r6, [sp]
    bl SOCLi_AllocWriteBuffer
    mov r4, r0
    cmp r4, #0
    ble @L_0211a5a0
    ldr r0, [sp, #0xc]
    mov r1, r9
    stmia sp, {r0, r7}
    str r6, [sp, #8]
    ldr r3, [sp, #0x14]
    mov r0, r10
    mov r2, r4
    bl SOCLi_ExecWriteCommand
    cmp r0, #0
    addle sp, sp, #0x18
    mvnle r0, #5
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r9, r9, r4
    sub r8, r8, r4
    add r5, r5, r4
@L_0211a5a0:
    cmp r11, #0
    bne @L_0211a5bc
    cmp r4, #0
    bgt @L_0211a5c4
    add sp, sp, #0x18
    mvn r0, #5
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0211a5bc:
    cmp r8, #0
    bgt @L_0211a540
@L_0211a5c4:
    mov r0, r5
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 SOCLi_AllocWriteBuffer(u8 *arg0, s32 arg1, s32 arg2, u8 *arg3, s32 arg4)
{
    s32 r0;
    u8 *r4;
    s32 r5;
    s32 r8;
    s32 r11;
    s32 v0;
    s32 v1;
    r8 = arg2;
    r4 = (u8 *)*(s32 *)(arg0 + 0xA4);
    if (r8 > arg1) {
        r8 = arg1;
    }
    v0 = OS_DisableInterrupts();
    r11 = v0;
    for (;;) {
        v1 = SOCLi_GetWriteBufferFreeSize((s32)arg0);
        r5 = v1;
        if (r5 >= r8) {
            r0 = *(u16 *)(r4 + 0x100);
            if (r5 >= arg1) {
                r5 = arg1;
            }
            *(s32 *)(arg3) = r0;
            break;
        }
        if ((arg4 & 1) == 0) {
            r5 = 0;
            break;
        }
        OS_SleepThread((s32)(r4 + 0x104));
    }
    OS_RestoreInterrupts(r11);
    return r5;
}

extern "C" asm s32 SOCLi_GetWriteBufferFreeSize(...)
{
    ldr r2, [r0, #0xa4]
    add r0, r2, #0x100
    ldrh r1, [r0]
    ldrh r0, [r0, #2]
    ldr r2, [r2, #0xf8]
    sub r0, r0, r1
    subs r0, r0, #1
    addmi r0, r0, r2
    bx lr
}

extern "C" asm void SOCLi_ExecWriteCommand(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r9, r0
    ldr r4, [r9, #0xa4]
    mov r6, r1
    mov r8, r2
    ldr r1, [r4, #0x10c]
    ldr r2, [sp, #0x28]
    ldr r0, =SOCLi_WriteCallBack
    mov r7, r3
    bl SOCLi_CreateCommandPacket
    movs r5, r0
    mvneq r0, #0x20
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r0, [sp, #0x28]
    add r2, r7, r8
    tst r0, #1
    ldrnesb r0, [r9, #0xaf]
    cmpne r0, #1
    movne r0, #3
    strneb r0, [r5, #0xd]
    moveq r0, #0
    streqb r0, [r5, #0xd]
    ldr r0, [r4, #0xf8]
    ldr r1, [r4, #0xfc]
    cmp r2, r0
    bge @L_0211a700
    add r0, r1, r7
    str r0, [r5, #0x10]
    str r8, [r5, #0x14]
    mov r0, #0
    str r0, [r5, #0x18]
    mov r7, r2
    str r0, [r5, #0x1c]
    b @L_0211a728
@L_0211a700:
    add r2, r1, r7
    sub r0, r0, r7
    str r2, [r5, #0x10]
    str r0, [r5, #0x14]
    sub r7, r8, r0
    str r1, [r5, #0x18]
    mov r2, r7
    add r0, r6, r0
    str r7, [r5, #0x1c]
    bl MI_CpuCopy
@L_0211a728:
    ldr r1, [r5, #0x10]
    ldr r2, [r5, #0x14]
    mov r0, r6
    bl MI_CpuCopy
    add r0, r4, #0x100
    ldrh r6, [r0]
    strh r7, [r5, #0x20]
    ldrh r1, [r5, #0x20]
    strh r1, [r0]
    ldrsb r0, [r9, #0xaf]
    cmp r0, #1
    bne @L_0211a7b4
    ldrh r0, [r9, #0xb0]
    cmp r0, #0
    bne @L_0211a774
    bl CPS_SocGetEport
    strh r0, [r9, #0xb0]
    ldrh r0, [r9, #0xb0]
    strh r0, [r9, #0xa]
@L_0211a774:
    ldrh r0, [r9, #0xb0]
    strh r0, [r5, #0x24]
    ldr r1, [r9, #0xb4]
    cmp r1, #0
    beq @L_0211a794
    ldr r0, [sp, #0x24]
    cmp r0, #0
    beq @L_0211a7a8
@L_0211a794:
    ldr r1, [sp, #0x24]
    ldrh r0, [sp, #0x20]
    str r1, [r5, #0x28]
@L_0211a7a0:
    strh r0, [r5, #0x26]
    b @L_0211a7bc
@L_0211a7a8:
    str r1, [r5, #0x28]
    ldrh r0, [r9, #0xb2]
    b @L_0211a7a0
@L_0211a7b4:
    mov r0, #0
    str r0, [r5, #0x28]
@L_0211a7bc:
    ldr r0, [r4, #0x10c]
    mov r1, r5
    bl SOCLi_ExecCommandPacketInSendPipe
    cmp r0, #0
    addne r0, r4, #0x100
    movne r8, #0
    strneh r6, [r0]
    mov r0, r8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void SOCLi_WriteCallBack(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r9, r0
    ldr r5, [r9, #4]
    mov r7, #0
    ldrsb r1, [r5, #0xaf]
    ldr r6, [r5, #0xa4]
    cmp r1, #2
    bne @L_0211a814
    ldrsh r0, [r5, #0xac]
    tst r0, #8
    subne r0, r7, #0x1c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_0211a814:
    cmp r1, #0
    cmpne r1, #4
    bne @L_0211a82c
    ldrsh r0, [r5, #0xac]
    tst r0, #4
    beq @L_0211a8fc
@L_0211a82c:
    ldr r2, [r9, #0x28]
    cmp r2, #0
    beq @L_0211a844
    ldrh r0, [r9, #0x24]
    ldrh r1, [r9, #0x26]
    bl CPS_SocBind
@L_0211a844:
    ldrsb r1, [r5, #0xaf]
    mov r0, #1
    mov r8, #0x36
    cmp r1, #0
    cmpne r1, #4
    movne r0, #0
    cmp r0, #0
    moveq r8, #0x2a
    cmp r1, #0
    cmpne r1, #4
    ldrne r0, [r5, #0x54]
    ldr r4, [r5, #0x58]
    subne r10, r0, r8
    bne @L_0211a88c
    ldr r0, [r5, #0x54]
    sub r0, r0, r8
    bl SOCLi_GetOptimumSendBufLen
    mov r10, r0
@L_0211a88c:
    mov r1, r10
    mov r2, r9
    add r0, r4, r8
    bl SOCLi_MemCpy
    mov r1, r0
    cmp r1, #0
    ble @L_0211a900
    add r0, r4, r8
    bl CPS_SocWrite
    cmp r0, #0
    bgt @L_0211a8f4
    ldrsb r0, [r5, #0xaf]
    mov r1, #1
    cmp r0, #0
    cmpne r0, #4
    movne r1, #0
    cmp r1, #0
    beq @L_0211a8f0
    ldrsh r0, [r5, #0xac]
    bic r0, r0, #0xe
    strh r0, [r5, #0xac]
    ldrsh r0, [r5, #0xac]
    orr r0, r0, #0x80
    strh r0, [r5, #0xac]
    bl CPS_TcpClose
@L_0211a8f0:
    b @L_0211a8fc
@L_0211a8f4:
    add r7, r7, r0
    b @L_0211a88c
@L_0211a8fc:
    mvn r7, #0x4b
@L_0211a900:
    ldrh r2, [r9, #0x20]
    add r1, r6, #0x100
    add r0, r6, #0x104
    strh r2, [r1, #2]
    bl OS_WakeupThread
    mov r0, r7
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void SOCLi_GetOptimumSendBufLen(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r1, =OSi_ThreadInfo
    mov r4, r0
    ldr r0, [r1, #4]
    ldr r5, [r0, #0xa4]
    bl OS_DisableInterrupts
    cmp r5, #0
    beq @L_0211a974
    ldrh r3, [r5, #0x3a]
    cmp r3, #0
    ldrneh r2, [r5, #0x38]
    cmpne r2, #0
    beq @L_0211a970
    ldr r1, =SOCLiCPSConfig
    cmp r3, r2
    ldr r1, [r1, #0x24]
    movgt r3, r2
    cmp r3, r1
    movgt r3, r1
    mov r5, r3, lsl #1
    b @L_0211a980
@L_0211a970:
    b @L_0211a974
@L_0211a974:
    ldr r1, =SOCLiCPSConfig
    ldr r1, [r1, #0x24]
    mov r5, r1, lsl #1
@L_0211a980:
    bl OS_RestoreInterrupts
    cmp r5, #0
    ble @L_0211a9a4
    mov r0, r4
    mov r1, r5
    bl _s32_div_f
    cmp r0, #0
    mulgt r0, r5, r0
    ldmgtia sp!, {r3, r4, r5, pc}
@L_0211a9a4:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 SOCLi_MemCpy(s32 arg0, s32 arg1, s32 *arg2)
{
    s32 a = arg2[5];
    s32 b = arg2[7];
    if (a > arg1) {
        a = arg1;
        b = 0;
    } else if (b > arg1 - a) {
        b = arg1 - a;
    }
    if (a > 0) {
        ((s32 (*)(...))MI_CpuCopy)(arg2[4], arg0, a);
        arg2[4] += a;
        arg2[5] -= a;
    }
    if (b > 0) {
        ((s32 (*)(...))MI_CpuCopy)(arg2[6], arg0 + a, b);
        arg2[6] += b;
        arg2[7] -= b;
    }
    return a + b;
}

extern "C" asm void SOCL_Shutdown(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    bl SOCL_SocketIsInvalid
    cmp r0, #0
    mvnne r0, #0x1b
    ldmneia sp!, {r3, r4, r5, pc}
    cmp r4, #0
    mov r1, #0
    beq @L_0211aa7c
    ldrsh r0, [r4, #0xac]
    tst r0, #1
    movne r1, #1
@L_0211aa7c:
    cmp r1, #0
    mvneq r0, #0x26
    ldmeqia sp!, {r3, r4, r5, pc}
    ldrsh r0, [r4, #0xac]
    tst r0, #4
    beq @L_0211aaa0
    ldrsh r0, [r4, #0xac]
    tst r0, #8
    beq @L_0211aaa8
@L_0211aaa0:
    mvn r0, #0x37
    ldmia sp!, {r3, r4, r5, pc}
@L_0211aaa8:
    ldrsh r0, [r4, #0xac]
    orr r0, r0, #8
    strh r0, [r4, #0xac]
    ldr r5, [r4, #0xa4]
    cmp r5, #0
    ldrne r1, [r5, #0x10c]
    cmpne r1, #0
    beq @L_0211aaec
    ldrsb r2, [r4, #0xae]
    ldr r0, =SOCLi_ShutdownCallBack
    bl SOCLi_CreateCommandPacket
    movs r1, r0
    mvneq r0, #0x20
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, [r5, #0x10c]
    bl SOCLi_ExecCommandPacketInSendPipe
    ldmia sp!, {r3, r4, r5, pc}
@L_0211aaec:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 SOCLi_ShutdownCallBack(u8 *arg0)
{
    s32 r1;
    arg0 = (u8 *)*(s8 *)(*(u8 * *)(arg0 + 0x4) + 0xAF);
    r1 = 1;
    if (((s32)arg0 != 0 && (s32)arg0 != 4)) {
        r1 = 0;
    }
    if (r1 != 0) {
        CPS_TcpShutdown();
    }
    return 0;
}

extern "C" s32 SOCL_IsClosed(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 r4;
    r4 = arg0;
    if (r4 >= 0) {
        s32 v0 = SOCL_SocketIsInvalid();
        if (v0 != 0) {
            s32 v1 = WBT_CancelCurrentCommand(r4);
            if (v1 == 0)
                return 1;
        }
    }
    return 0;
}

extern "C" asm void SOCL_Close(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    cmp r4, #0
    mov r5, #0
    mvnle r0, #0x1b
    ldmleia sp!, {r4, r5, r6, pc}
    bl OS_DisableInterrupts
    mov r6, r0
    mov r0, r4
    bl WBT_CancelCurrentCommand
    cmp r0, #0
    beq @L_0211ab9c
    mov r0, r6
    bl OS_RestoreInterrupts
    mvn r0, #0x19
    ldmia sp!, {r4, r5, r6, pc}
@L_0211ab9c:
    mov r0, r4
    bl SOCL_SocketIsInvalid
    cmp r0, #0
    beq @L_0211abbc
    mov r0, r6
    bl OS_RestoreInterrupts
    mov r0, r5
    ldmia sp!, {r4, r5, r6, pc}
@L_0211abbc:
    cmp r4, #0
    mov r1, r5
    beq @L_0211abd4
    ldrsh r0, [r4, #0xac]
    tst r0, #1
    movne r1, #1
@L_0211abd4:
    cmp r1, #0
    bne @L_0211abec
    mov r0, r6
    bl OS_RestoreInterrupts
    mvn r0, #0x26
    ldmia sp!, {r4, r5, r6, pc}
@L_0211abec:
    ldrsh r0, [r4, #0xac]
    tst r0, #0x10
    mov r0, r6
    beq @L_0211ac08
    bl OS_RestoreInterrupts
    mvn r0, #0x19
    ldmia sp!, {r4, r5, r6, pc}
@L_0211ac08:
    bl OS_RestoreInterrupts
    ldrsh r0, [r4, #0xac]
    mov r1, #1
    orr r0, r0, #0x18
    strh r0, [r4, #0xac]
    ldrsb r0, [r4, #0xaf]
    cmp r0, #0
    cmpne r0, #4
    movne r1, #0
    cmp r1, #0
    ldreq r0, =SOCLi_Resource
    ldreq r1, [r0, #4]
    subeq r1, r1, #1
    streq r1, [r0, #4]
    beq @L_0211ac60
    ldr r0, [r4, #0xa4]
    mov r1, #0
    bl SOCLi_SendCommandPacket
    ldr r0, =SOCLi_Resource
    ldr r1, [r0]
    sub r1, r1, #1
    str r1, [r0]
@L_0211ac60:
    ldr r0, =SOCLi_CloseCallBack
    mov r1, r4
    mov r2, #1
    bl SOCLi_CreateCommandPacket
    mov r1, r0
    mov r0, r4
    str r5, [r1, #8]
    bl SOCLi_SendCommandPacketToCtrlPipe
    mov r0, r5
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 SOCLi_CloseCallBack(u8 *arg0)
{
    s32 r1;
    u8 *r4;
    s32 r6;
    s32 v6;
    s32 t0;
    s32 t1;
    s32 t2;
    r4 = *(u8 * *)(arg0 + 0x4);
    r1 = 1;
    arg0 = (u8 *)*(s8 *)(*(u8 * *)(arg0 + 0x4) + 0xAF);
    if (((s32)arg0 != 0 && (s32)arg0 != 4)) {
        r1 = 0;
    }
    if (r1 != 0) {
        t0 = (*(s32 *)(r4 + 0xA4) + 0x20);
        OS_JoinThread(t0, r1);
        CPS_TcpShutdown();
        CPS_TcpClose();
        CPS_SocRelease();
    }
    CPS_SocUnRegister();
    t1 = (*(s16 *)(r4 + 0xAC) & -7);
    *(u16 *)(r4 + 0xAC) = t1;
    r6 = 0;
    r1 = 0;
    if (*(s8 *)(r4 + 0xAF) == 2) {
        arg0 = (u8 *)*(s32 *)(r4 + 0xA4);
    } else {
        arg0 = (u8 *)*(s32 *)(r4 + 0xA0);
    }
    SOCLi_SendCommandPacket((s32)arg0, r1);
    v6 = OS_DisableInterrupts();
    SOCLi_SocketUnregister((s32)r4);
    SOCLi_SocketRegisterTrash((s32)r4);
    OS_RestoreInterrupts(v6);
    t2 = (*(s16 *)(r4 + 0xAC) | 0x20);
    *(u16 *)(r4 + 0xAC) = t2;
    return r6;
}

extern "C" asm s32 SOCLi_CleanupSocket(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    movs r4, r0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldrsb r2, [r4, #0xaf]
    mov r0, #0
    mov r1, #1
    cmp r2, #0
    cmpne r2, #4
    movne r1, r0
    strh r0, [r4, #0xac]
    cmp r1, #0
    beq @L_0211ad6c
    ldr r0, [r4, #0xa4]
    bl SOCLi_FreeCommandPipe
    ldr r0, [r4, #0xa0]
    b @L_0211ade4
@L_0211ad6c:
    cmp r2, #1
    bne @L_0211add8
    ldr r0, [r4, #0xa0]
    ldr r0, [r0, #0x104]
    cmp r0, #0
    beq @L_0211ada4
    ldr r5, =SOCLiConfigPtr
@L_0211ad88:
    ldr r1, [r5]
    ldr r6, [r0]
    ldr r1, [r1, #0x1c]
    blx r1
    mov r0, r6
    cmp r6, #0
    bne @L_0211ad88
@L_0211ada4:
    ldr r0, [r4, #0xa0]
    mov r1, #0
    add r0, r0, #0x100
    strh r1, [r0, #8]
    ldr r0, [r4, #0xa0]
    str r1, [r0, #0x100]
    ldr r0, [r4, #0xa0]
    str r1, [r0, #0x104]
    ldr r0, [r4, #0xa0]
    add r0, r0, #0x10c
    bl OS_WakeupThread
    ldr r0, [r4, #0xa0]
    b @L_0211ade4
@L_0211add8:
    cmp r2, #2
    bne @L_0211ade8
    ldr r0, [r4, #0xa4]
@L_0211ade4:
    bl SOCLi_FreeCommandPipe
@L_0211ade8:
    bl OS_DisableInterrupts
    mov r5, r0
    mov r0, r4
    bl SOCLi_SocketUnregister
    mov r0, r4
    bl SOCLi_SocketUnregisterTrash
    ldr r1, =SOCLiConfigPtr
    mov r0, r4
    ldr r1, [r1]
    ldr r1, [r1, #0x1c]
    blx r1
    mov r0, r5
    bl OS_RestoreInterrupts
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" void SOCLi_FreeCommandPipe(u8 *arg0)
{
    s32 s;
    M0211ae24 *m;
    if (arg0 == 0)
        return;
    ((s32 (*)(...))OS_JoinThread)(arg0 + 0x20);
    s = ((s32 (*)(...))OS_DisableInterrupts)();
    ((s32 (*)(...))OS_DisableScheduler)();
    while (((s32 (*)(...))OS_ReceiveMessage)(arg0, &m, 0) != 0) {
        if (m != 0) {
            if (m->c != 0)
                ((s32 (*)(...))OS_SendMessage)(m->c, -0xB, 0);
            ((s32 (*)(...))SOCLi_FreeCommandPacket)(m);
        }
    }
    ((s32 (*)(...))OS_EnableScheduler)();
    ((s32 (*)(...))OS_RescheduleThread)();
    ((s32 (*)(...))OS_RestoreInterrupts)(s);
}

extern "C" s32 SOCLi_TrashSocket(void)
{
    u8 *r4;
    s32 r5;
    s32 v0;
    s32 v2;
    v0 = OS_DisableInterrupts();
    r4 = (u8 *)SOCLiSocketListTrash;
    r5 = v0;
    if (*(s32 *)(r4) != 0) {
        do {
            SOCLi_CleanupSocket();
        } while (*(s32 *)(r4) != 0);
    }
    v2 = OS_RestoreInterrupts(r5);
    return v2;
}

extern "C" s32 SOCL_Cleanup(void)
{
    u8 *r1;
    s32 r4;
    s32 r5;
    s32 v0;
    s32 v2;
    s32 v3;
    s32 t0;
    s32 t1;
    s32 t2;
    r1 = (u8 *)SOCLiRequestedIP;
    if (*(s32 *)(r1) == 0) {
        t0 = *(s32 *)(CPSMyIp);
        *(s32 *)(r1) = t0;
    }
    v0 = SOCL_CalmDown();
    r4 = -0x1A;
    if (v0 == r4) {
        r5 = 0x64;
        do {
            OS_Sleep(r5);
            v2 = SOCL_CalmDown();
        } while (v2 == r4);
    }
    v3 = SOCLi_CleanupCommandPacketQueue();
    r4 = v3;
    if (r4 >= 0) {
        SOCLi_CleanupCPS();
        r1 = (u8 *)*(s32 *)(SOCLiConfigPtr);
        if (*(s32 *)(r1 + 0x28) == 0) {
            t1 = *(s32 *)(SOCLiCPSConfig + 0x1C);
            t2 = *(s32 *)(r1 + 0x1C);
            ((s32 (*)(...))*(s32 *)(r1 + 0x1C))(t1, t2);
        }
        *(s32 *)(SOCLiConfigPtr) = 0;
        SOCLi_InitResource((s32)SOCLiConfigPtr, 0);
    }
    return r4;
}

extern "C" void SOCLi_CleanupCPS(void)
{
    CPS_Cleanup();
    CPS_SetScavengerCallback(0);
    CPS_SetCheckNConfigCallback(0);
    WCM_SetRecvDCFCallback(0);
}

extern "C" s32 SOCL_CloseAll(void)
{
    u8 *p;
    for (;;) {
        s32 s = ((s32 (*)(...))OS_DisableInterrupts)();
        for (p = *(u8 **)SOCLiSocketList; p != 0; p = *(u8 **)(p + 0xB8)) {
            if (p != *(u8 **)SOCLiUDPSendSocket && !(*(s16 *)(p + 0xAC) & 0x10))
                break;
        }
        ((s32 (*)(...))OS_RestoreInterrupts)(s);
        if (p == 0)
            break;
        ((s32 (*)(...))SOCL_Close)(p);
    }
    p = *(u8 **)SOCLiSocketList;
    if (p == 0 || (p == *(u8 **)SOCLiUDPSendSocket && *(s32 *)(p + 0xB8) == 0)) {
        if (*(s32 *)SOCLiSocketListTrash == 0)
            return 0;
    }
    return -0x1A;
}

extern "C" asm s32 SOCL_CalmDown(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r4, =SOCLiUDPSendSocket
    ldr r0, [r4]
    cmp r0, #0
    beq @L_0211b0b8
    bl SOCL_CloseAll
    movs r5, r0
    bne @L_0211b0b0
    ldr r0, [r4]
    bl SOCL_Close
    ldr r0, [r4]
    bl SOCL_IsClosed
    cmp r0, #0
    movne r0, #0
    strne r0, [r4]
    mvn r5, #0x19
@L_0211b0b0:
    bl SOCLi_TrashSocket
    b @L_0211b0d4
@L_0211b0b8:
    bl CPS_CalmDown
    cmp r0, #0
    mvneq r5, #0x19
    beq @L_0211b0d4
    mov r5, #0
    mov r0, r5
    bl WCM_SetRecvDCFCallback
@L_0211b0d4:
    mov r0, r5
    ldmia sp!, {r3, r4, r5, pc}
}
