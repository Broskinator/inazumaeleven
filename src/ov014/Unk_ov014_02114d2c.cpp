#include "ov014/Unk_ov014_02114d2c.hpp"

extern "C" s32 NHTTPi_skipSpaceHdrRecvBuf(s32 arg0, s32 arg1, s32 arg2);
extern "C" void NHTTPi_compareTokenN_HdrRecvBuf(void);
extern "C" s32 NHTTPi_loadFromHdrRecvBuf(...);
extern "C" s32 NHTTPi_isRecvBufFull(u8 *arg0, s32 arg1);
extern "C" void NHTTPi_RecvBuf(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4);
extern "C" s32 NHTTPi_RecvBufN(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
extern "C" void NHTTPi_InitRequestInfo(u8 *arg0);
extern "C" void NHTTPi_CreateRequest(void);
extern "C" s32 NHTTPi_DestroyRequest(u8 *arg0, u8 *arg1);
extern "C" s32 deleteStrList(u8 *arg0);
extern "C" s32 NHTTPi_destroyRequestObject(u8 *arg0, u8 *arg1);
extern "C" s32 NHTTPi_SendRequestAsync(s32 arg0, u8 *arg1);
extern "C" s32 NHTTPi_CancelRequestAsync(s32 arg0, s32 arg1);
extern "C" s32 NHTTPi_cancelAllRequests(s32 arg0);
extern "C" void NHTTPi_DestroyResponse(s32 arg0, u8 *arg1);
extern "C" s32 NHTTPi_getHeaderValue(...);
extern "C" s32 NHTTP_GetResponseHeaderField(u8 *arg0, s32 arg1, u8 *arg2);
extern "C" void NHTTPi_InitThreadInfo(s32 arg0);
extern "C" void NHTTPi_IsCreateCommThreadMessageQueueOn(u8 *arg0);
extern "C" void NHTTPi_IsCreateCommThreadMessageQueueOff(u8 *arg0);
extern "C" s32 NHTTPi_IsCreateCommThreadMessageQueue(u8 *arg0);
extern "C" s32 NHTTPi_CheckHeaderEnd(u8 *arg0, s32 arg1);
extern "C" void NHTTPi_SaveBuf(void);
extern "C" void NHTTPi_SkipLineBuf(void);
extern "C" void NHTTPi_GetPostContentlength(void);
extern "C" void NHTTPi_SendPostData(void);
extern "C" void NHTTPi_BufFull(void);
extern "C" s32 NHTTPi_SendData(...);
extern "C" s32 NHTTPi_SendProxyAuthorization(s32 arg0);
extern "C" s32 NHTTPi_SendBasicAuthorization(s32 arg0);
extern "C" s32 NHTTPi_SendProxyConnectMethod(u8 *arg0);
extern "C" void NHTTPi_RecvProxyConnectHeader(void);
extern "C" s32 NHTTPi_SendHeaderList(s32 arg0);
extern "C" void NHTTPi_SendProcPostDataRaw(void);
extern "C" void NHTTPi_SendProcPostDataBinary(void);
extern "C" void NHTTPi_SendProcPostDataAscii(void);
extern "C" s32 NHTTPi_ThreadInit(u8 *arg0);
extern "C" void NHTTPi_ThreadReqEnd(void);
extern "C" s32 NHTTPi_ThreadExecReqQueue(u8 *arg0);
extern "C" void NHTTPi_ThreadHostAddrProc(void);
extern "C" void NHTTPi_ThreadConnectProc(void);
extern "C" void NHTTPi_ThreadProxyProc(void);
extern "C" void NHTTPi_ThreadSendProc(void);
extern "C" void NHTTPi_ThreadRecvHeaderProc(void);
extern "C" void NHTTPi_ThreadParseHeaderProc(void);
extern "C" void NHTTPi_ThreadRecvBodyProc(void);

extern "C" char NHTTPi_strMultipartBound[];
extern "C" char data_ov014_02123fcc[];
extern "C" char data_ov014_02123ff3[];
extern "C" char data_ov014_02124020[];
extern "C" char data_ov014_02124054[];
extern "C" char data_ov014_02125d00[];
extern "C" char data_ov014_02125d08[];
extern "C" char data_ov014_02125d14[];
extern "C" char data_ov014_02125d24[];
extern "C" char data_ov014_02125d40[];
extern "C" char data_ov014_02125d44[];
extern "C" char data_ov014_02125d5c[];
extern "C" char data_ov014_02125d68[];
extern "C" char data_ov014_02125d6c[];
extern "C" char data_ov014_02125d78[];
extern "C" char data_ov014_02125d80[];
extern "C" char data_ov014_02125da8[];
extern "C" char data_ov014_02125db0[];
extern "C" char data_ov014_02125db4[];
extern "C" char data_ov014_02125dc8[];
extern "C" char data_ov014_02125dcc[];
extern "C" char data_ov014_02125dd4[];
extern "C" char data_ov014_02125dd8[];
extern "C" char data_ov014_02125ddc[];
extern "C" char data_ov014_02125de4[];
extern "C" char data_ov014_02125dec[];
extern "C" char data_ov014_02125df4[];
extern "C" char data_ov014_02125df8[];
extern "C" char data_ov014_02125e08[];
extern "C" char data_ov014_02125e14[];
extern "C" char data_ov014_02125e20[];
extern "C" char data_ov014_02125e34[];
extern "C" s32 NHTTPi_idleCommThread(...);
extern "C" s32 NHTTPi_kickCommThread(...);
extern "C" void NHTTPi_checkKeepAlive(void);
extern "C" void NHTTPi_SocOpen(void);
extern "C" void NHTTPi_SocClose(void);
extern "C" void NHTTPi_SocConnect(void);
extern "C" void NHTTPi_SocSSLConnect(void);
extern "C" s32 NHTTPi_SocRecv(...);
extern "C" s32 NHTTPi_SocSend(...);
extern "C" s32 NHTTPi_SocCancel(...);
extern "C" void NHTTPi_resolveHostname(void);
extern "C" void NHTTPi_memcpy(void);
extern "C" s32 NHTTPi_strlen(...);
extern "C" void NHTTPi_strnlen(void);
extern "C" s32 NHTTPi_strcmp(...);
extern "C" s32 NHTTPi_memclr(...);
extern "C" void NHTTPi_strnicmp(void);
extern "C" void NHTTPi_getUrlEncodedSize(void);
extern "C" void NHTTPi_getUrlEncodedSize2(void);
extern "C" void NHTTPi_encodeUrlChar(void);
extern "C" void NHTTPi_strToHex(void);
extern "C" void NHTTPi_strToInt(void);
extern "C" s32 NHTTPi_intToStr(...);
extern "C" void NHTTPi_strtonum(void);
extern "C" s32 NHTTPi_alloc(...);
extern "C" s32 NHTTPi_free(...);
extern "C" s32 NHTTPi_SetError(...);
extern "C" void NHTTPi_GetSSLError(void);
extern "C" s32 NHTTPi_getHdrFromList(...);
extern "C" s32 NHTTPi_setReqQueue(...);
extern "C" s32 NHTTPi_freeReqQueue(...);
extern "C" s32 NHTTPi_allFreeReqQueue(...);
extern "C" s32 NHTTPi_getReqFromReqQueue(...);
extern "C" void setupGetcharFromHdrRecvBuf(void);
extern "C" void getcharFromHdrRecvBuf(void);
extern "C" void NHTTPi_findNextLineHdrRecvBuf(void);
extern "C" void NHTTPi_NotifyCompletion(void);
extern "C" s32 NHTTPi_Request2Connection(...);
extern "C" void NHTTPi_Response2Connection(void);
extern "C" void NHTTPi_PostSendCallback(void);
extern "C" void NHTTPi_BufferFullCallback(void);
extern "C" void NHTTPi_ReceivedCallback(void);
extern "C" void NHTTPi_CompleteCallback(void);
extern "C" s32 NHTTPi_GetSystemInfoP(...);
extern "C" s32 NHTTPi_GetBgnEndInfoP(...);
extern "C" s32 NHTTPi_GetListInfoP(...);
extern "C" s32 NHTTPi_GetReqInfoP(...);
extern "C" s32 NHTTPi_GetThreadInfoP(...);
extern "C" s32 NHTTPi_GetMutexInfoP(...);
extern "C" void NHTTPi_SetVirtualContentLength(void);
extern "C" s32 NHTTPi_lockReqList(...);
extern "C" s32 NHTTPi_unlockReqList(...);
extern "C" void NHTTPi_DeleteConnection(void);

extern "C" s32 NHTTPi_skipSpaceHdrRecvBuf(s32 arg0, s32 arg1, s32 arg2)
{
    s32 a;
    s32 b;
    if (arg1 < arg2) {
        ((s32 (*)(...))setupGetcharFromHdrRecvBuf)(arg0, arg1, &a, &b);
        for (; arg1 < arg2; arg1++) {
            if (((s32 (*)(...))getcharFromHdrRecvBuf)(arg0, &a, &b) != 0x20)
                return arg1;
        }
    }
    return -1;
}

extern "C" asm void NHTTPi_compareTokenN_HdrRecvBuf(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    mov r9, r1
    mov r4, r2
    mov r10, r0
    mov r8, r3
    cmp r9, r4
    ldr r7, [sp, #0x30]
    bge @L_02114e74
    add r2, sp, #4
    add r3, sp, #0
    bl setupGetcharFromHdrRecvBuf
    mov r0, r10
    add r1, sp, #4
    add r2, sp, #0
    bl getcharFromHdrRecvBuf
    mov r5, #1
    sub r6, r4, #1
    mov r4, #0
    mov r11, r5
    b @L_02114e24
@L_02114df0:
    cmp r1, #0
    cmpne r1, #0x20
    cmpne r1, r7
    cmpne r9, r6
    addeq sp, sp, #8
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    add r1, sp, #4
    add r2, sp, #0
    bl getcharFromHdrRecvBuf
    add r9, r9, #1
    add r8, r8, #1
@L_02114e24:
    ldrsb r1, [r8]
    mov r2, r5
    mov r3, r11
    cmp r1, #0x41
    movlt r2, r4
    cmp r1, #0x5a
    movgt r3, #0
    tst r2, r3
    moveq r2, r1
    addne r2, r1, #0x20
    mov r3, #1
    cmp r0, #0x41
    movlt r3, #0
    mov r12, #1
    cmp r0, #0x5a
    movgt r12, #0
    tst r3, r12
    addne r0, r0, #0x20
    cmp r0, r2
    beq @L_02114df0
@L_02114e74:
    mvn r0, #0
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 NHTTPi_loadFromHdrRecvBuf(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r4, r0
    mov r7, r2
    mov r6, r3
    ldr r0, [r4]
    add r2, r7, r6
    mov r8, r1
    cmp r2, r0
    bgt @L_02114f60
    cmp r6, #0
    beq @L_02114f58
    cmp r7, #0x400
    bge @L_02114ee0
    rsb r5, r7, #0x400
    cmp r6, r5
    movle r5, r6
    add r1, r4, #0x38
    mov r0, r8
    mov r2, r5
    add r1, r1, r7
    bl NHTTPi_memcpy
    add r7, r7, r5
    sub r6, r6, r5
    add r8, r8, r5
@L_02114ee0:
    cmp r6, #0
    beq @L_02114f58
    sub r2, r7, #0x400
    ldr r0, =0x1ff
    movs r1, r2, asr #9
    and r7, r2, r0
    sub r0, r1, #1
    ldr r4, [r4, #0x34]
    beq @L_02114f14
@L_02114f04:
    cmp r0, #0
    sub r0, r0, #1
    ldr r4, [r4]
    bne @L_02114f04
@L_02114f14:
    cmp r6, #0
    beq @L_02114f58
    ldr r9, =0x1ff
@L_02114f20:
    rsb r5, r7, #0x200
    cmp r6, r5
    movle r5, r6
    add r1, r4, #4
    mov r0, r8
    mov r2, r5
    add r1, r1, r7
    bl NHTTPi_memcpy
    add r0, r7, r5
    and r7, r0, r9
    subs r6, r6, r5
    add r8, r8, r5
    ldr r4, [r4]
    bne @L_02114f20
@L_02114f58:
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_02114f60:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" s32 NHTTPi_isRecvBufFull(u8 *arg0, s32 arg1)
{
    return ((u32)*(s32 *)(arg0 + 0x1C) <= (u32)arg1 ? 1 : 0);
}

extern "C" void NHTTPi_RecvBuf(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4)
{
    s32 t0;
    t0 = (*(s32 *)(*(u8 * *)(arg1 + 0x2C) + 0x28) + arg3);
    NHTTPi_SocRecv(arg0, (s32)arg1, arg2, t0, (*(s32 *)(*(u8 * *)(arg1 + 0x2C) + 0x1C) - arg3), arg4);
    return;
}

extern "C" s32 NHTTPi_RecvBufN(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5)
{
    s32 r1;
    u8 *r4;
    s32 v0;
    s32 v1;
    s32 t0;
    s32 t1;
    t0 = *(s32 *)(arg1 + 0x2C);
    v0 = NHTTPi_isRecvBufFull((u8 *)t0, arg3);
    r4 = (u8 *)t0;
    if (v0 != 0) {
        return -0x3EB;
    } else {
        r1 = (*(s32 *)(r4 + 0x1C) - arg3);
        if (arg4 <= r1) {
            r1 = arg4;
        }
        t1 = (*(s32 *)(r4 + 0x28) + arg3);
        v1 = NHTTPi_SocRecv(arg0, (s32)arg1, arg2, t1, r1, arg5);
        return v1;
    }
}

extern "C" void NHTTPi_InitRequestInfo(u8 *arg0)
{
    *(s32 *)(arg0) = 0;
}

extern "C" asm void NHTTPi_CreateRequest(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x208
    mov r8, r1
    movs r1, r2
    cmpne r1, #1
    str r2, [sp, #4]
    str r0, [sp]
    mov r6, r3
    mov r4, #4
    mov r7, #0
    cmpne r1, #2
    beq @L_02115074
    mov r1, #0xb
@L_02115070:
    b @L_02115094
@L_02115074:
    mov r5, #0x258
    mov r0, r5
    mov r1, r4
    bl NHTTPi_alloc
    movs r7, r0
    bne @L_0211509c
@L_0211508c:
    ldr r0, [sp]
    mov r1, #1
@L_02115094:
    bl NHTTPi_SetError
    b @L_021154c8
@L_0211509c:
    mov r1, r5
    bl NHTTPi_memclr
    rsb r9, r4, #0x440
    mov r0, r9
    mov r1, r4
    bl NHTTPi_alloc
    str r0, [r7, #0x2c]
    cmp r0, #0
    bne @L_021150c4
    b @L_0211508c
@L_021150c4:
    mov r1, r9
    bl NHTTPi_memclr
    ldr r0, [r7, #0x2c]
    ldr r2, [sp, #0x230]
    str r6, [r0, #0x28]
    ldr r0, [r7, #0x2c]
    ldr r1, [sp, #0x238]
    str r2, [r0, #0x1c]
    ldr r0, [r7, #0x2c]
    ldr r3, [sp, #0x23c]
    str r1, [r0, #0x2c]
    ldr r2, [r7, #0x2c]
    mov r0, r8
    sub r1, r5, #0x59
    str r3, [r2, #0x30]
    bl NHTTPi_strnlen
    mov r5, r0
    cmp r5, #7
    bgt @L_02115114
    b @L_02115178
@L_02115114:
    add r6, sp, #8
    mov r1, #0x200
    mov r0, r6
    bl NHTTPi_memclr
    mov r0, r6
    mov r1, r8
    mov r2, r5
    bl NHTTPi_memcpy
    mov r8, #7
    mov r0, #0x50
    str r0, [r7, #0x20]
    ldr r1, =data_ov014_02125d00
    mov r0, r6
    mov r2, r8
    bl NHTTPi_strnicmp
    cmp r0, #0
    beq @L_02115190
    mov r8, #8
    ldr r1, =data_ov014_02125d08
    mov r0, r6
    mov r2, r8
    mov r6, #1
    bl NHTTPi_strnicmp
    cmp r0, #0
    beq @L_02115184
@L_02115178:
    ldr r0, [sp]
    mov r1, r4
    b @L_02115070
@L_02115184:
    str r6, [r7, #8]
    rsb r0, r6, #0x1bc
    str r0, [r7, #0x20]
@L_02115190:
    add r0, sp, #8
    sub r4, r5, r8
    cmp r4, #0
    add r6, r0, r8
    bgt @L_021151b0
@L_021151a4:
    ldr r0, [sp]
    mov r1, #4
    b @L_02115094
@L_021151b0:
    mov r5, #0
    mov r9, r5
    mov r10, r5
    mov r11, #2
    b @L_0211521c
@L_021151c4:
    cmp r10, #2
    subeq r10, r10, #1
    beq @L_02115218
    cmp r10, #1
    bne @L_0211520c
    sub r0, r5, #1
    mov r1, r11
    add r0, r6, r0
    bl NHTTPi_strToHex
    mov r0, r0, lsl #0x18
    movs r0, r0, asr #0x18
    sub r10, r10, #1
    bpl @L_021151fc
    b @L_021151a4
@L_021151fc:
    cmp r0, #0x2f
    bne @L_02115218
    sub r9, r9, #1
    b @L_02115230
@L_0211520c:
    cmp r0, #0x25
    moveq r10, #2
    addeq r9, r9, #1
@L_02115218:
    add r5, r5, #1
@L_0211521c:
    cmp r5, r4
    bge @L_02115230
    ldrsb r0, [r6, r5]
    cmp r0, #0x2f
    bne @L_021151c4
@L_02115230:
    cmp r10, #0
    mov r1, #4
    beq @L_02115244
    ldr r0, [sp]
    b @L_02115070
@L_02115244:
    add r0, r8, r4
    sub r5, r0, r9, lsl #1
    add r0, r5, #1
    bl NHTTPi_alloc
    str r0, [r7, #0x24]
    cmp r0, #0
    bne @L_02115264
    b @L_0211508c
@L_02115264:
    add r1, r5, #1
    bl NHTTPi_memclr
    ldr r0, [r7, #0x24]
    add r1, sp, #8
    mov r2, r8
    bl NHTTPi_memcpy
    mov r9, #0
    mov r5, r9
    mov r10, r9
    mov r11, r9
    cmp r4, #0
    ble @L_02115314
@L_02115294:
    cmp r10, #2
    subeq r10, r10, #1
    beq @L_02115308
    cmp r10, #1
    bne @L_021152e0
    sub r0, r9, #1
    add r0, r6, r0
    mov r1, #2
    bl NHTTPi_strToHex
    mov r0, r0, lsl #0x18
    mov r1, r0, asr #0x18
    ldr r0, [r7, #0x24]
    cmp r1, #0x2f
    add r0, r8, r0
    add r0, r5, r0
    sub r10, r10, #1
    strb r1, [r0, #-1]
    moveq r11, #1
    b @L_02115308
@L_021152e0:
    ldrsb r1, [r6, r9]
    cmp r1, #0x2f
    moveq r11, #1
    cmp r11, #0
    cmpeq r1, #0x25
    ldrne r0, [r7, #0x24]
    moveq r10, #2
    addne r0, r8, r0
    strneb r1, [r5, r0]
    add r5, r5, #1
@L_02115308:
    add r9, r9, #1
    cmp r9, r4
    blt @L_02115294
@L_02115314:
    ldr r2, [r7, #0x24]
    mov r0, #0
    add r1, r8, r5
    strb r0, [r2, r1]
    ldr r1, [r7, #0x24]
    cmp r5, #0
    add r2, r1, r8
    mov r4, r0
    ble @L_0211535c
@L_02115338:
    ldrsb r1, [r2, r0]
    cmp r1, #0x2f
    cmpne r1, #0x3a
    addeq r1, r0, r8
    streq r1, [r7, #0x14]
    beq @L_0211535c
    add r0, r0, #1
    cmp r0, r5
    blt @L_02115338
@L_0211535c:
    cmp r0, r5
    addeq r0, r0, r8
    streq r0, [r7, #0x14]
    streq r0, [r7, #0x18]
    beq @L_02115408
    ldrsb r1, [r2, r0]
    cmp r1, #0x2f
    ldreq r0, [r7, #0x14]
    streq r0, [r7, #0x18]
    beq @L_02115408
    cmp r1, #0x3a
    bne @L_02115408
    cmp r0, r5
    bge @L_021153b4
@L_02115394:
    ldrsb r1, [r2, r0]
    cmp r1, #0x2f
    addeq r1, r0, r8
    streq r1, [r7, #0x18]
    beq @L_021153b4
    add r0, r0, #1
    cmp r0, r5
    blt @L_02115394
@L_021153b4:
    cmp r0, r5
    addeq r0, r0, r8
    streq r0, [r7, #0x18]
    beq @L_02115408
    ldr r1, [r7, #0x14]
    ldr r0, [r7, #0x24]
    add r2, r1, #1
    ldr r1, [r7, #0x18]
    add r0, r0, r2
    sub r1, r1, r2
    bl NHTTPi_strtonum
    cmp r0, #0
    ldrlt r0, [r7, #0x20]
    blt @L_021153fc
    ldr r1, =0xffff
    cmp r0, r1
    ble @L_021153fc
    b @L_021151a4
@L_021153fc:
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    str r0, [r7, #0x20]
@L_02115408:
    ldr r0, [r7, #8]
    mov r2, #8
    cmp r0, #0
    ldr r0, [r7, #0x14]
    moveq r2, #7
    sub r5, r0, r2
    mov r1, #4
    add r0, r5, #1
    bl NHTTPi_alloc
    str r0, [r7, #0x28]
    cmp r0, #0
    bne @L_0211543c
    b @L_0211508c
@L_0211543c:
    add r1, r5, #1
    bl NHTTPi_memclr
    ldr r0, [r7, #8]
    mov r3, #8
    cmp r0, #0
    ldr r1, [r7, #0x24]
    moveq r3, #7
    ldr r0, [r7, #0x28]
    mov r2, r5
    add r1, r1, r3
    bl NHTTPi_memcpy
    ldr r1, =NHTTPi_strMultipartBound
    add r0, r7, #0x38
    mov r2, #0x14
    bl NHTTPi_memcpy
    ldr r0, [sp, #4]
    ldr r2, [sp, #0x234]
    str r0, [r7, #0x1c]
    str r4, [r7, #0xac]
    str r4, [r7, #0xb0]
    str r4, [r7, #0xb4]
    str r4, [r7, #0xb8]
    str r4, [r7, #0xbc]
    str r4, [r7, #0xc0]
    str r4, [r7, #0xc4]
    str r4, [r7, #0xcc]
    str r4, [r7, #0xd0]
    str r4, [r7, #0xd8]
    ldr r1, [r7, #0x2c]
    add sp, sp, #0x208
    str r2, [r1, #0x438]
    str r4, [r7, #0xc]
    mov r0, r7
    str r4, [r7, #0x248]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_021154c8:
    cmp r7, #0
    beq @L_02115508
    ldr r0, [r7, #0x24]
    cmp r0, #0
    beq @L_021154e0
    bl NHTTPi_free
@L_021154e0:
    ldr r0, [r7, #0x28]
    cmp r0, #0
    beq @L_021154f0
    bl NHTTPi_free
@L_021154f0:
    ldr r0, [r7, #0x2c]
    cmp r0, #0
    beq @L_02115500
    bl NHTTPi_free
@L_02115500:
    mov r0, r7
    bl NHTTPi_free
@L_02115508:
    mov r0, #0
    add sp, sp, #0x208
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 NHTTPi_DestroyRequest(u8 *arg0, u8 *arg1)
{
    s32 r4;
    s32 v0;
    s32 v1;
    s32 v3;
    s32 t0;
    v0 = NHTTPi_GetMutexInfoP((s32)arg0, arg1);
    v1 = NHTTPi_Request2Connection(v0, arg1);
    arg0 = (u8 *)v1;
    r4 = v0;
    if ((s32)arg0 != 0) {
        *(s32 *)(arg0 + 0x14) = 0;
    }
    t0 = *(s32 *)(arg1 + 0x2C);
    NHTTPi_free(t0);
    v3 = NHTTPi_destroyRequestObject((u8 *)r4, arg1);
    return v3;
}

extern "C" s32 deleteStrList(u8 *arg0)
{
    s32 r4;
    u8 *r6;
    s32 v0;
    s32 v1;
    s32 t0;
    if ((s32)arg0 == 0)
        return (s32)arg0;
    r4 = 0;
    r6 = arg0;
    do {
        arg0 = (u8 *)*(s32 *)(r6);
        if ((s32)r6 != (s32)arg0) {
            t0 = *(s32 *)(arg0);
            v0 = NHTTPi_free();
            *(s32 *)(r6) = t0;
            arg0 = (u8 *)v0;
        } else {
            v1 = NHTTPi_free((s32)r6);
            arg0 = (u8 *)v1;
            r6 = (u8 *)r4;
        }
    } while ((s32)r6 != 0);
    return (s32)arg0;
}

extern "C" s32 NHTTPi_destroyRequestObject(u8 *arg0, u8 *arg1)
{
    s32 v0;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    v0 = NHTTPi_Request2Connection((s32)arg0, arg1);
    arg0 = (u8 *)v0;
    if ((s32)arg0 != 0) {
        *(s32 *)(arg0 + 0x10) = 0;
    }
    t0 = *(s32 *)(arg1 + 0x30);
    deleteStrList((u8 *)t0);
    t1 = *(s32 *)(arg1 + 0x34);
    deleteStrList((u8 *)t1);
    t2 = *(s32 *)(arg1 + 0x24);
    NHTTPi_free(t2);
    t3 = *(s32 *)(arg1 + 0x28);
    NHTTPi_free(t3);
    NHTTPi_free((s32)arg1);
    return 1;
}

extern "C" s32 NHTTPi_SendRequestAsync(s32 arg0, u8 *arg1)
{
    s32 r4;
    s32 r5;
    s32 r6;
    s32 r7;
    u8 *r8;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v5;
    s32 v6;
    v0 = NHTTPi_GetBgnEndInfoP(arg0, (s32)arg1);
    v1 = NHTTPi_GetThreadInfoP(arg0);
    v2 = NHTTPi_GetMutexInfoP(arg0);
    r7 = arg0;
    r8 = arg1;
    r5 = v0;
    r4 = v1;
    arg0 = v2;
    arg1 = (u8 *)*(s32 *)(arg1 + 0x4);
    r6 = v2;
    if ((s32)arg1 != 0) {
        NHTTPi_SetError(r5, 0xB);
        return (0xB - 0xC);
    } else {
        NHTTPi_lockReqList(arg0, (s32)arg1);
        v5 = NHTTPi_GetListInfoP(r7);
        v6 = NHTTPi_setReqQueue(v5, (s32)r8);
        r7 = v6;
        if (r7 >= 0) {
            *(s32 *)(r8 + 0x4) = 1;
            NHTTPi_kickCommThread(r4, 1);
        } else {
            NHTTPi_SetError(r5, 1);
        }
        NHTTPi_unlockReqList(r6);
        return r7;
    }
}

extern "C" s32 NHTTPi_CancelRequestAsync(s32 arg0, s32 arg1)
{
    s32 r4;
    s32 r5;
    u8 *r6;
    s32 v0;
    s32 v1;
    s32 v4;
    s32 v5;
    s32 t0;
    u8 *t1;
    s32 t2;
    s32 t3;
    r4 = 0;
    v0 = NHTTPi_GetReqInfoP(arg0, arg1);
    v1 = NHTTPi_GetMutexInfoP(arg0);
    t0 = *(s32 *)(((u8 *)v0));
    NHTTPi_lockReqList();
    r6 = (u8 *)t0;
    r5 = v1;
    if ((((s32)r6 != 0 && *(s32 *)(r6 + 0x8) == arg1) && *(s32 *)(*(u8 * *)(r6 + 0xC)) == 0)) {
        t1 = (u8 *)*(s32 *)(r6 + 0xC);
        *(s32 *)(t1) = 1;
        t2 = *(s32 *)(r6 + 0xC);
        t3 = *(s32 *)(r6 + 0x10);
        r4 = 1;
        NHTTPi_SocCancel(r5, t2, t3);
    }
    if (r4 == 0) {
        v4 = NHTTPi_GetListInfoP(arg0);
        v5 = NHTTPi_freeReqQueue(v4, r5, arg1);
        r4 = v5;
    }
    NHTTPi_unlockReqList(r5);
    return r4;
}

extern "C" s32 NHTTPi_cancelAllRequests(s32 arg0)
{
    s32 r4;
    s32 r5;
    u8 *r6;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v6;
    s32 t0;
    u8 *t1;
    s32 t2;
    s32 t3;
    v0 = NHTTPi_GetReqInfoP(arg0);
    v1 = NHTTPi_GetListInfoP(arg0);
    v2 = NHTTPi_GetMutexInfoP(arg0);
    t0 = *(s32 *)(((u8 *)v0));
    NHTTPi_lockReqList();
    r4 = v2;
    r5 = v1;
    r6 = (u8 *)t0;
    if (((s32)r6 != 0 && *(s32 *)(*(u8 * *)(r6 + 0xC)) == 0)) {
        t1 = (u8 *)*(s32 *)(r6 + 0xC);
        *(s32 *)(t1) = 1;
        t2 = *(s32 *)(r6 + 0xC);
        t3 = *(s32 *)(r6 + 0x10);
        NHTTPi_SocCancel(r4, t2, t3);
    }
    NHTTPi_allFreeReqQueue(r5, r4);
    v6 = NHTTPi_unlockReqList(r4);
    return v6;
}

extern "C" void NHTTPi_DestroyResponse(s32 arg0, u8 *arg1)
{
    u8 *p = *(u8 **)(arg1 + 0x34);
    u8 *q;
    while (p != 0) {
        u8 *n = *(u8 **)p;
        ((s32 (*)(...))NHTTPi_free)(p);
        p = n;
        *(u8 **)(arg1 + 0x34) = n;
    }
    if (*(s32 *)(arg1 + 0x20) != 0)
        ((s32 (*)(...))NHTTPi_free)(*(s32 *)(arg1 + 0x20));
    if (*(s32 *)(arg1 + 0x24) != 0)
        ((s32 (*)(...))NHTTPi_free)(*(s32 *)(arg1 + 0x24));
    if (*(s32 *)(arg1 + 0x30) != 0) {
        ((s32 (*)(...))*(s32 *)(arg1 + 0x30))(*(s32 *)(arg1 + 0x28), NHTTPi_free, *(s32 *)(arg1 + 0x438));
        *(s32 *)(arg1 + 0x28) = 0;
        *(s32 *)(arg1 + 0x1C) = 0;
    }
    q = (u8 *)((s32 (*)(...))NHTTPi_Response2Connection)(arg0, arg1);
    if (q != 0)
        *(s32 *)(q + 0x14) = 0;
    ((s32 (*)(...))NHTTPi_free)(arg1);
}

extern "C" asm s32 NHTTPi_getHeaderValue(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r10, r0
    mov r3, #0
    mov r11, r2
    mov r9, r1
    add r5, sp, #8
    str r3, [sp, #4]
    add r6, sp, #4
    ldr r2, [r10]
    mov r3, r5
    mov r1, #0xc
    str r6, [sp]
    bl NHTTPi_findNextLineHdrRecvBuf
    mov r7, r0
    cmp r7, #0
    ble @L_02115954
    mov r4, #0
@L_02115880:
    ldr r2, [r10]
    mov r0, r10
    mov r1, r7
    mov r3, r5
    str r6, [sp]
    bl NHTTPi_findNextLineHdrRecvBuf
    ldr r2, [sp, #8]
    mov r8, r0
    cmp r2, #0
    ble @L_02115948
    mov r0, r10
    mov r1, r7
    mov r3, r9
    str r4, [sp]
    bl NHTTPi_compareTokenN_HdrRecvBuf
    cmp r0, #0
    bne @L_02115948
    ldr r1, [sp, #8]
    ldr r0, [r10]
    add r1, r1, #1
    cmp r1, r0
    bge @L_0211593c
    ldr r2, [r10]
    mov r0, r10
    mov r3, r4
    str r6, [sp]
    bl NHTTPi_findNextLineHdrRecvBuf
    cmp r0, #0
    ldrle r4, [r10]
    ble @L_02115910
    ldr r1, [sp, #4]
    cmp r0, r1
    addlt sp, sp, #0xc
    mvnlt r0, #0
    ldmltia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    sub r4, r0, r1
@L_02115910:
    ldr r1, [sp, #8]
    mov r0, r10
    mov r2, r4
    add r1, r1, #1
    bl NHTTPi_skipSpaceHdrRecvBuf
    cmp r0, #0
    movlt r0, r4
    str r0, [r11]
    add sp, sp, #0xc
    sub r0, r4, r0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0211593c:
    add sp, sp, #0xc
    mov r0, r4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02115948:
    mov r7, r8
    cmp r8, #0
    bgt @L_02115880
@L_02115954:
    mvn r0, #0
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 NHTTP_GetResponseHeaderField(u8 *arg0, s32 arg1, u8 *arg2)
{
    s32 local[1];
    u8 *r5;
    s32 r6;
    s32 r7;
    s32 v1;
    s32 v2;
    s32 v4;
    s32 v5;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    r5 = arg0;
    if (*(s32 *)(r5 + 0x14) == 0) {
        return -1;
    } else {
        if (*(s32 *)(r5 + 0x24) != 0) {
            NHTTPi_free();
            *(s32 *)(r5 + 0x24) = 0;
        }
        v1 = NHTTPi_getHeaderValue((s32)r5, arg1, (s32)((u8 *)local));
        r7 = v1;
        if (r7 >= 0) {
            r6 = 4;
            v2 = NHTTPi_alloc((r7 + 1), 4);
            *(s32 *)(r5 + 0x24) = v2;
            arg0 = (u8 *)v2;
            if ((s32)arg0 == 0) {
                return (r6 - 5);
            } else {
                *(u8 *)(arg0 + r7) = 0;
                t0 = *(s32 *)(r5 + 0x24);
                t1 = *(s32 *)(((u8 *)local));
                NHTTPi_loadFromHdrRecvBuf((s32)r5, t0, t1, r7);
                t2 = *(s32 *)(r5 + 0x24);
                *(s32 *)(arg2) = t2;
                return r7;
            }
        } else {
            v4 = NHTTPi_strcmp((s32)((u8 *)&data_ov014_02125d14), arg1);
            if (v4 == 0) {
                r6 = 4;
                v5 = NHTTPi_alloc(4, 4);
                *(s32 *)(r5 + 0x24) = v5;
                arg0 = (u8 *)v5;
                if ((s32)arg0 == 0) {
                    return (r6 - 5);
                } else {
                    *(u8 *)(arg0 + 0x3) = 0;
                    t3 = *(s32 *)(r5 + 0x24);
                    NHTTPi_loadFromHdrRecvBuf((s32)r5, t3, 9, 3);
                    t4 = *(s32 *)(r5 + 0x24);
                    *(s32 *)(arg2) = t4;
                    return 3;
                }
            } else {
                return -1;
            }
        }
    }
}

extern "C" void NHTTPi_InitThreadInfo(s32 arg0)
{
    NHTTPi_IsCreateCommThreadMessageQueueOff((u8 *)arg0);
}

extern "C" void NHTTPi_IsCreateCommThreadMessageQueueOn(u8 *arg0)
{
    *(s32 *)(arg0 + 0xEC) = 1;
}

extern "C" void NHTTPi_IsCreateCommThreadMessageQueueOff(u8 *arg0)
{
    *(s32 *)(arg0 + 0xEC) = 0;
}

extern "C" s32 NHTTPi_IsCreateCommThreadMessageQueue(u8 *arg0)
{
    return *(s32 *)(arg0 + 0xEC);
}

extern "C" s32 NHTTPi_CheckHeaderEnd(u8 *arg0, s32 arg1)
{
    s32 r2;
    r2 = *(s8 *)(arg0 + ((arg1 - 2) & 3));
    if ((r2 == 0xD && *(s8 *)(arg0 + ((arg1 - 1) & 3)) == 0xD)) {
        return 1;
    } else {
        if ((r2 == 10 && *(s8 *)(arg0 + ((arg1 - 1) & 3)) == 10)) {
            return 1;
        } else {
            if ((((*(s8 *)(arg0 + ((arg1 - 4) & 3)) == 0xD && *(s8 *)(arg0 + ((arg1 - 3) & 3)) == 10) && r2 == 0xD) && *(s8 *)(arg0 + ((arg1 - 1) & 3)) == 10)) {
                arg0 = (u8 *)1;
            } else {
                arg0 = (u8 *)0;
            }
            return (s32)arg0;
        }
    }
}

extern "C" asm void NHTTPi_SaveBuf(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    ldr r4, [sp, #0x34]
    mov r10, r0
    mov r0, r4
    str r4, [sp, #4]
    mov r9, r1
    mov r8, r2
    mov r7, r3
    cmp r0, #0
    ldr r6, [sp, #0x30]
    ble @L_02115bd8
    mov r11, #0
@L_02115b50:
    ldr r0, [r10]
    cmp r0, #0
    addne sp, sp, #8
    mvnne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r7]
    mov r1, r6
    rsb r5, r0, #0x4000
    cmp r4, r5
    movle r5, r4
    mov r2, r5
    add r0, r9, r0
    bl NHTTPi_memcpy
    ldr r0, [r7]
    add r6, r6, r5
    add r0, r0, r5
    str r0, [r7]
    cmp r0, #0x4000
    sub r4, r4, r5
    bne @L_02115bd0
    mov r0, r10
    mov r1, r8
    mov r2, r9
    mov r3, #0x4000
    str r11, [sp]
    bl NHTTPi_SocSend
    cmp r0, #0
    addle sp, sp, #8
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [r7]
    sub r0, r1, r0
    str r0, [r7]
@L_02115bd0:
    cmp r4, #0
    bgt @L_02115b50
@L_02115bd8:
    ldr r0, [sp, #4]
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void NHTTPi_SkipLineBuf(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r7, #0
    mov r10, r0
    mov r9, r1
    mov r8, r2
    mov r6, r7
    strb r7, [sp, #8]
    strb r7, [sp, #9]
    mov r5, #1
    mov r11, r7
    add r4, sp, #8
    b @L_02115c44
@L_02115c18:
    mov r0, r10
    mov r1, r9
    mov r2, r8
    add r3, r4, r3
    stmia sp, {r5, r11}
    bl NHTTPi_SocRecv
    cmp r0, #0
    addle sp, sp, #0xc
    ldmleia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r7, r7, r0
    add r6, r6, #1
@L_02115c44:
    and r3, r6, #1
    ldrsb r0, [r4, r3]
    cmp r0, #0xd
    subeq r0, r6, #1
    andeq r0, r0, #1
    ldreqsb r0, [r4, r0]
    cmpeq r0, #0xa
    bne @L_02115c18
    mov r0, r7
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void NHTTPi_GetPostContentlength(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    ldr r6, [sp, #0x28]
    mov r10, r0
    mov r9, r1
    mov r8, r2
    mov r7, r3
    mov r4, #0
    bl NHTTPi_Request2Connection
    movs r5, r0
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    str r4, [r5, #0x24]
    mov r11, r4
@L_02115ca4:
    ldr r0, [r9]
    cmp r0, #0
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    mov r1, r5
    mov r2, r8
    mov r3, r4
    str r11, [r5, #0x28]
    bl NHTTPi_PostSendCallback
    cmp r0, #0
    movlt r0, r11
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [r5, #0x28]
    ldr r0, [r5, #0x24]
    cmp r1, #0
    beq @L_02115d30
    cmp r0, #0
    moveq r0, r11
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r6, #0
    add r4, r4, r1
    cmpne r6, #1
    beq @L_02115d10
    cmp r6, #2
    beq @L_02115d1c
    b @L_02115ca4
@L_02115d10:
    ldr r0, [r7]
    add r0, r0, r1
    b @L_02115d28
@L_02115d1c:
    bl NHTTPi_getUrlEncodedSize2
    ldr r1, [r7]
    add r0, r1, r0
@L_02115d28:
    str r0, [r7]
    b @L_02115ca4
@L_02115d30:
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void NHTTPi_SendPostData(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    mov r11, r2
    ldr r2, [sp, #0x48]
    ldr r9, [sp, #0x40]
    str r2, [sp, #0x48]
    mov r2, #0
    ldr r8, [sp, #0x44]
    str r0, [sp, #8]
    mov r10, r1
    str r3, [sp, #0xc]
    str r2, [sp, #0x14]
    bl NHTTPi_Request2Connection
    str r0, [sp, #0x10]
    cmp r0, #0
    addeq sp, sp, #0x1c
    moveq r0, #3
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [sp, #0x14]
    add r4, sp, #0x18
    str r1, [r0, #0x24]
@L_02115d8c:
    ldr r0, [r10]
    cmp r0, #0
    addne sp, sp, #0x1c
    movne r0, #3
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [sp, #0x10]
    mov r3, #0
    mov r2, r1
    str r3, [r2, #0x28]
    ldr r0, [sp, #8]
    ldr r2, [sp, #0xc]
    ldr r3, [sp, #0x14]
    bl NHTTPi_PostSendCallback
    cmp r0, #0
    addlt sp, sp, #0x1c
    movlt r0, #3
    ldmltia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0x10]
    ldr r5, [r0, #0x28]
    ldr r6, [r0, #0x24]
    cmp r5, #0
    beq @L_02115ec8
    cmp r6, #0
    addeq sp, sp, #0x1c
    moveq r0, #3
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0x48]
    cmp r0, #0
    ldr r0, [sp, #0x14]
    add r0, r0, r5
    str r0, [sp, #0x14]
    ldrne r0, [sp, #0x48]
    cmpne r0, #1
    beq @L_02115e20
    cmp r0, #2
    beq @L_02115e5c
    b @L_02115d8c
@L_02115e20:
    str r6, [sp]
    mov r0, r10
    mov r1, r11
    mov r2, r9
    mov r3, r8
    str r5, [sp, #4]
    bl NHTTPi_SaveBuf
    cmp r0, #0
    addlt sp, sp, #0x1c
    movlt r0, #1
    ldmltia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    bne @L_02115d8c
    add sp, sp, #0x1c
    mov r0, #2
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02115e5c:
    cmp r5, #0
    mov r7, #0
    bls @L_02115d8c
@L_02115e68:
    mov r0, r4
    mov r1, #3
    bl NHTTPi_memclr
    ldrsb r1, [r6, r7]
    mov r0, r4
    bl NHTTPi_encodeUrlChar
    str r4, [sp]
    str r0, [sp, #4]
    mov r0, r10
    mov r1, r11
    mov r2, r9
    mov r3, r8
    bl NHTTPi_SaveBuf
    cmp r0, #0
    addlt sp, sp, #0x1c
    movlt r0, #1
    ldmltia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    addeq sp, sp, #0x1c
    moveq r0, #2
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r7, r7, #1
    cmp r7, r5
    blo @L_02115e68
    b @L_02115d8c
@L_02115ec8:
    mov r0, #0
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void NHTTPi_BufFull(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r1
    ldr r1, [r5, #4]
    mov r6, r0
    mov r0, r5
    mov r4, #0
    bl NHTTPi_isRecvBufFull
    ldr r1, [r5, #0x1c]
    cmp r1, #0
    ldrne r1, [r5, #0x28]
    cmpne r1, #0
    beq @L_02115f0c
    cmp r0, #0
    beq @L_02115f50
@L_02115f0c:
    mov r0, r6
    mov r1, r5
    bl NHTTPi_Response2Connection
    movs r1, r0
    beq @L_02115f54
    mov r0, r6
    bl NHTTPi_BufferFullCallback
    ldr r0, [r5, #0x28]
    cmp r0, #0
    ldrne r0, [r5, #0x1c]
    cmpne r0, #0
    beq @L_02115f54
    ldr r1, [r5, #4]
    mov r0, r5
    bl NHTTPi_isRecvBufFull
    cmp r0, #0
    b @L_02115f50
@L_02115f50:
    moveq r4, #1
@L_02115f54:
    mov r0, r4
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm s32 NHTTPi_SendData(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #8
    mov r9, r0
    mov r8, r1
    mov r7, r2
    bl NHTTPi_GetSystemInfoP
    mov r6, r0
    bl NHTTPi_GetBgnEndInfoP
    mov r5, r0
    mov r0, r6
    bl NHTTPi_GetThreadInfoP
    mov r4, r0
    mov r0, r6
    bl NHTTPi_GetReqInfoP
    ldr r0, [r0]
    cmp r7, #0
    ldr r0, [r0, #0xc]
    addeq sp, sp, #8
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    str r8, [sp]
    str r7, [sp, #4]
    ldr r2, [r5, #0xc]
    add r1, r4, #0x100
    add r3, r9, #0x324
    bl NHTTPi_SaveBuf
    cmp r0, #0
    addlt sp, sp, #8
    movlt r0, #1
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    moveq r0, #2
    movne r0, #0
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" s32 NHTTPi_SendProxyAuthorization(s32 arg0)
{
    s32 v1;
    s32 v2;
    s32 v3;
    s32 v4;
    u8 *t0;
    s32 t1;
    NHTTPi_GetSystemInfoP(arg0);
    v1 = NHTTPi_GetReqInfoP();
    if (*(s32 *)(*(u8 * *)(*(u8 * *)(((u8 *)v1)) + 0xC) + 0x244) == 0)
        return 0;
    t0 = *(u8 * *)(*(u8 * *)(((u8 *)v1)) + 0xC);
    v2 = NHTTPi_SendData(arg0, (s32)data_ov014_02125d24, 0x1B);
    if (v2 != 0)
        return v2;
    t1 = *(s32 *)(t0 + 0x244);
    v3 = NHTTPi_SendData(arg0, (t0 + 0x1E8), t1);
    if (v3 != 0)
        return v3;
    v4 = NHTTPi_SendData(arg0, (s32)data_ov014_02125d40, 2);
    return (v4 == 0 ? 0 : v4);
}

extern "C" s32 NHTTPi_SendBasicAuthorization(s32 arg0)
{
    s32 v1;
    s32 v2;
    s32 v3;
    s32 v4;
    u8 *t0;
    s32 t1;
    NHTTPi_GetSystemInfoP(arg0);
    v1 = NHTTPi_GetReqInfoP();
    if (*(s32 *)(*(u8 * *)(*(u8 * *)(((u8 *)v1)) + 0xC) + 0xA8) == 0)
        return 0;
    t0 = *(u8 * *)(*(u8 * *)(((u8 *)v1)) + 0xC);
    v2 = NHTTPi_SendData(arg0, (s32)data_ov014_02125d44, 0x15);
    if (v2 != 0)
        return v2;
    t1 = *(s32 *)(t0 + 0xA8);
    v3 = NHTTPi_SendData(arg0, (t0 + 0x4C), t1);
    if (v3 != 0)
        return v3;
    v4 = NHTTPi_SendData(arg0, (s32)data_ov014_02125d40, 2);
    return (v4 == 0 ? 0 : v4);
}

extern "C" s32 NHTTPi_SendProxyConnectMethod(u8 *arg0)
{
    s32 local[2];
    s32 r3;
    s32 r4;
    u8 *r7;
    s32 r8;
    s32 r9;
    s32 r11;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;
    s32 v4;
    s32 v5;
    s32 v6;
    s32 v7;
    s32 v8;
    s32 v9;
    s32 v10;
    s32 v11;
    s32 v12;
    s32 v13;
    s32 v14;
    s32 v15;
    s32 v16;
    s32 v18;
    u8 *t0;
    u8 *t1;
    s32 t2;
    s32 t3;
    s32 t4;
    s32 t5;
    s32 t6;
    s32 t7;
    v0 = NHTTPi_GetSystemInfoP((s32)arg0);
    v1 = NHTTPi_GetReqInfoP();
    t0 = (u8 *)*(s32 *)(*(u8 * *)(((u8 *)v1)) + 0xC);
    t1 = *(u8 * *)(((u8 *)v1));
    v2 = NHTTPi_GetThreadInfoP(v0, t1);
    v3 = NHTTPi_GetBgnEndInfoP(v0);
    t2 = *(s32 *)(t0 + 0x20);
    v4 = NHTTPi_intToStr((s32)((u8 *)local), t2);
    v5 = NHTTPi_SendData((s32)arg0, (u8 *)((u8 *)&data_ov014_02125d5c), 8);
    if (v5 != 0)
        return v5;
    t3 = (*(s32 *)(t0 + 0x24) + 8);
    t4 = (*(s32 *)(t0 + 0x14) - 8);
    v6 = NHTTPi_SendData((s32)arg0, t3, t4);
    if (v6 != 0)
        return v6;
    r11 = 1;
    v7 = NHTTPi_SendData((s32)arg0, (u8 *)((u8 *)&data_ov014_02125d68), 1);
    if (v7 != 0)
        return v7;
    v8 = NHTTPi_SendData((s32)arg0, (s32)((u8 *)local), v4);
    if (v8 != 0)
        return v8;
    v9 = NHTTPi_SendData((s32)arg0, (u8 *)((u8 *)&data_ov014_02125d6c), 0xB);
    if (v9 != 0)
        return v9;
    v10 = NHTTPi_SendData((s32)arg0, (u8 *)((u8 *)&data_ov014_02125d78), 6);
    if (v10 != 0)
        return v10;
    t5 = (*(s32 *)(t0 + 0x24) + 8);
    t6 = (*(s32 *)(t0 + 0x14) - 8);
    v11 = NHTTPi_SendData((s32)arg0, t5, t6);
    if (v11 != 0)
        return v11;
    v12 = NHTTPi_SendData((s32)arg0, (u8 *)((u8 *)&data_ov014_02125d68), 1);
    if (v12 != 0)
        return v12;
    v13 = NHTTPi_SendData((s32)arg0, (s32)((u8 *)local), v4);
    if (v13 != 0)
        return v13;
    r4 = 2;
    v14 = NHTTPi_SendData((s32)arg0, (u8 *)((u8 *)&data_ov014_02125d40), 2);
    if (v14 != 0)
        return v14;
    v15 = NHTTPi_SendData((s32)arg0, (u8 *)((u8 *)&data_ov014_02125d80), 0x25);
    if (v15 != 0)
        return v15;
    v16 = NHTTPi_SendProxyAuthorization((s32)arg0);
    if (v16 != 0)
        return v16;
    NHTTPi_SendData((s32)arg0, (u8 *)((u8 *)&data_ov014_02125d40), 2);
    r9 = (s32)t0;
    r8 = v2;
    r7 = (u8 *)v3;
    r3 = *(s32 *)(arg0 + 0x324);
    if (r3 > 0) {
        t7 = *(s32 *)(r7 + 0xC);
        v18 = NHTTPi_SocSend(r9, t7, (r8 + 0x100), r3, 0);
        if (v18 < 0) {
            return r11;
        } else {
            if (v18 == 0) {
                return r4;
            }
        }
    }
    *(s32 *)(arg0 + 0x324) = 0;
    NHTTPi_memclr((r8 + 0x100), 0x4000);
    return 0;
}

extern "C" asm void NHTTPi_RecvProxyConnectHeader(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x210
    bl NHTTPi_GetSystemInfoP
    mov r6, r0
    bl NHTTPi_GetReqInfoP
    mov r5, r0
    mov r0, r6
    bl NHTTPi_GetThreadInfoP
    str r0, [sp, #0xc]
    mov r0, r6
    bl NHTTPi_GetBgnEndInfoP
    mov r4, r0
    mov r0, r6
    bl NHTTPi_GetMutexInfoP
    ldr r2, [r5]
    mov r1, #0
    ldr r6, [r2, #0xc]
    str r1, [sp, #8]
    ldr r7, [r6, #0x2c]
    mov r5, r0
    mov r8, r1
@L_0211636c:
    rsb r0, r8, #0x200
    str r0, [sp]
    mov r0, #0
    str r0, [sp, #4]
    add r9, sp, #0x10
    ldr r2, [r4, #0xc]
    mov r0, r5
    mov r1, r6
    add r3, r9, r8
    bl NHTTPi_SocRecv
    mov r11, r0
    add r0, sp, #0x19
    mov r1, #3
    add r8, r8, r11
    bl NHTTPi_strToInt
    str r0, [r7, #0x18]
    ldr r1, =data_ov014_02125da8
    mov r0, r9
    mov r2, #5
    bl NHTTPi_strnicmp
    cmp r0, #0
    ldreqsb r0, [sp, #0x18]
    mov r12, #0
    mov lr, r12
    cmpeq r0, #0x20
    ldreq r0, [r7, #0x18]
    cmpeq r0, #0xc8
    moveq r0, #1
    streq r0, [sp, #8]
    cmp r8, #0
    ble @L_0211647c
    mov r9, #1
    add r3, sp, #0x10
    mov r1, r9
    mov r2, r9
@L_021163f8:
    cmp r12, #1
    ble @L_0211641c
    add r10, r3, r12
    ldrsb r0, [r10, #-1]
    cmp r0, #0xd
    ldreqsb r0, [r10]
    cmpeq r0, #0xd
    moveq lr, r2
    beq @L_02116470
@L_0211641c:
    cmp r12, #1
    ble @L_02116440
    add r10, r3, r12
    ldrsb r0, [r10, #-1]
    cmp r0, #0xa
    ldreqsb r0, [r10]
    cmpeq r0, #0xa
    moveq lr, r1
    beq @L_02116470
@L_02116440:
    cmp r12, #3
    ble @L_02116470
    add r0, r3, r12
    ldrsb r10, [r0, #-3]
    cmp r10, #0xd
    ldreqsb r10, [r0, #-2]
    cmpeq r10, #0xa
    ldreqsb r10, [r0, #-1]
    cmpeq r10, #0xd
    ldreqsb r0, [r0]
    cmpeq r0, #0xa
    moveq lr, r9
@L_02116470:
    add r12, r12, #1
    cmp r12, r8
    blt @L_021163f8
@L_0211647c:
    cmp lr, #0
    mov r0, #1
    beq @L_021164a0
    ldr r0, [sp, #8]
    add sp, sp, #0x210
    cmp r0, #0
    movne r0, #1
    moveq r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_021164a0:
    cmp r11, #0
    mov r9, #0
    addlt sp, sp, #0x210
    movlt r0, r9
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r8, #0x200
    blt @L_0211636c
    stmia sp, {r0, r9}
    ldr r3, [sp, #0xc]
    ldr r2, [r4, #0xc]
    mov r0, r5
    mov r1, r6
    add r3, r3, #0x100
    bl NHTTPi_SocRecv
    cmp r0, #0
    addlt sp, sp, #0x210
    movlt r0, r9
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    beq @L_0211636c
    mov r0, r9
    add sp, sp, #0x210
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 NHTTPi_SendHeaderList(s32 arg0)
{
    s32 r7;
    u8 *r8;
    s32 v1;
    s32 v2;
    s32 v3;
    s32 v4;
    s32 v5;
    s32 v6;
    s32 v7;
    s32 v8;
    s32 v10;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    s32 t5;
    NHTTPi_GetSystemInfoP(arg0);
    v1 = NHTTPi_GetReqInfoP();
    t0 = (*(s32 *)(*(u8 * *)(((u8 *)v1)) + 0xC) + 0x30);
    t1 = *(s32 *)(*(u8 * *)(((u8 *)v1)) + 0xC);
    v2 = NHTTPi_getHdrFromList(t0);
    r7 = t1;
    r8 = (u8 *)v2;
    if ((s32)r8 != 0) {
        do {
            t2 = *(s32 *)(r8 + 0x8);
            v3 = NHTTPi_strlen(t2);
            t3 = *(s32 *)(r8 + 0x8);
            v4 = NHTTPi_SendData(arg0, t3, v3);
            if (v4 != 0)
                return v4;
            v5 = NHTTPi_SendData(arg0, (u8 *)((u8 *)&data_ov014_02125db0), 2);
            if (v5 != 0)
                return v5;
            t4 = *(s32 *)(r8 + 0xC);
            v6 = NHTTPi_strlen(t4);
            t5 = *(s32 *)(r8 + 0xC);
            v7 = NHTTPi_SendData(arg0, t5, v6);
            if (v7 != 0)
                return v7;
            v8 = NHTTPi_SendData(arg0, (u8 *)((u8 *)&data_ov014_02125d40), 2);
            if (v8 != 0)
                return v8;
            NHTTPi_free((s32)r8);
            v10 = NHTTPi_getHdrFromList((r7 + 0x30));
            r8 = (u8 *)v10;
        } while ((s32)r8 != 0);
    }
    return 0;
}

extern "C" asm void NHTTPi_SendProcPostDataRaw(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x1c
    mov r8, r0
    bl NHTTPi_GetSystemInfoP
    mov r7, r0
    bl NHTTPi_GetMutexInfoP
    mov r5, r0
    mov r0, r7
    bl NHTTPi_GetReqInfoP
    ldr r1, [r0]
    mov r0, r7
    ldr r6, [r1, #0xc]
    bl NHTTPi_GetThreadInfoP
    mov r4, r0
    mov r0, r7
    bl NHTTPi_GetBgnEndInfoP
    mov r7, r0
    mov r2, #0
    str r2, [sp, #0xc]
    ldr r0, [r6, #0x24c]
    cmp r0, #0
    bne @L_02116648
    add r3, sp, #0xc
    mov r0, r5
    mov r1, r6
    str r2, [sp]
    bl NHTTPi_GetPostContentlength
    cmp r0, #0
    bne @L_02116650
    add sp, sp, #0x1c
    mov r0, #3
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02116648:
    ldr r0, [r6, #0x250]
    str r0, [sp, #0xc]
@L_02116650:
    add r10, sp, #0x10
    ldr r1, [sp, #0xc]
    mov r0, r10
    bl NHTTPi_intToStr
    mov r9, r0
    ldr r1, =data_ov014_02125db4
    mov r0, r8
    mov r2, #0x10
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r8
    mov r1, r10
    mov r2, r9
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r10, =data_ov014_02125d40
    mov r9, #2
    mov r0, r8
    mov r1, r10
    mov r2, r9
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r8
    mov r1, r10
    mov r2, r9
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r1, [r6, #0x24c]
    cmp r1, #0
    bne @L_02116720
    ldr r0, [r7, #0xc]
    add r2, r8, #0x324
    str r0, [sp]
    mov r0, r5
    mov r1, r6
    str r2, [sp, #4]
    mov r3, #0
    add r2, r4, #0x100
    str r3, [sp, #8]
    bl NHTTPi_SendPostData
    cmp r0, #0
    beq @L_02116738
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02116720:
    ldr r2, [r6, #0x250]
    mov r0, r8
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02116738:
    mov r0, #0
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void NHTTPi_SendProcPostDataBinary(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    mov r10, r0
    bl NHTTPi_GetSystemInfoP
    mov r4, r0
    bl NHTTPi_GetMutexInfoP
    mov r6, r0
    mov r0, r4
    bl NHTTPi_GetReqInfoP
    ldr r1, [r0]
    mov r0, r4
    ldr r7, [r1, #0xc]
    bl NHTTPi_GetThreadInfoP
    mov r11, r0
    mov r0, r4
    bl NHTTPi_GetBgnEndInfoP
    mov r1, #0
    str r1, [sp, #0xc]
    ldr r5, [r7, #0x34]
    mov r8, r0
    cmp r5, #0
    beq @L_0211684c
    mov r4, #1
    add r9, sp, #0xc
@L_021167ac:
    add r1, r1, #0x16
    str r1, [sp, #0xc]
    ldr r0, [r5, #8]
    bl NHTTPi_strlen
    ldr r1, [sp, #0xc]
    add r0, r0, #0x29
    add r1, r1, r0
    str r1, [sp, #0xc]
    ldr r0, [r5, #0x14]
    cmp r0, #0
    addne r1, r1, #0x4b
    add r1, r1, #2
    str r1, [sp, #0xc]
    ldr r0, [r5, #0xc]
    cmp r0, #0
    bne @L_02116818
    str r4, [sp]
    ldr r2, [r5, #8]
    mov r0, r6
    mov r1, r7
    mov r3, r9
    bl NHTTPi_GetPostContentlength
    cmp r0, #0
    bne @L_02116824
    add sp, sp, #0x1c
    mov r0, #3
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02116818:
    ldr r0, [r5, #0x10]
    add r1, r1, r0
    str r1, [sp, #0xc]
@L_02116824:
    ldr r0, [sp, #0xc]
    add r1, r0, #2
    str r1, [sp, #0xc]
    ldr r0, [r7, #0x34]
    ldr r0, [r0]
    cmp r5, r0
    beq @L_0211684c
    ldr r5, [r5, #4]
    cmp r5, #0
    bne @L_021167ac
@L_0211684c:
    add r9, sp, #0x10
    add r1, r1, #0x18
    mov r0, r9
    str r1, [sp, #0xc]
    bl NHTTPi_intToStr
    mov r4, r0
    ldr r1, =data_ov014_02123ff3
    mov r0, r10
    mov r2, #0x2c
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    add r1, r7, #0x3a
    mov r2, #0x12
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r5, =data_ov014_02125d40
    mov r0, r10
    mov r1, r5
    mov r2, #2
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, =data_ov014_02125db4
    mov r0, r10
    mov r2, #0x10
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    mov r1, r9
    mov r2, r4
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    mov r1, r5
    mov r2, #2
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    mov r1, r5
    mov r2, #2
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r9, [r7, #0x34]
    cmp r9, #0
    beq @L_02116aa4
    add r4, r10, #0x324
@L_0211693c:
    mov r0, r10
    add r1, r7, #0x38
    mov r2, #0x14
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    mov r1, r5
    mov r2, #2
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, =data_ov014_02123fcc
    mov r0, r10
    mov r2, #0x26
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r9, #8]
    bl NHTTPi_strlen
    mov r2, r0
    ldr r1, [r9, #8]
    mov r0, r10
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, =data_ov014_02125dc8
    mov r0, r10
    mov r2, #3
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r9, #0x14]
    cmp r0, #0
    beq @L_021169f8
    ldr r1, =data_ov014_02124054
    mov r0, r10
    mov r2, #0x4b
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_021169f8:
    mov r0, r10
    mov r1, r5
    mov r2, #2
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [r9, #0xc]
    cmp r1, #0
    bne @L_02116a54
    ldr r1, [r8, #0xc]
    mov r0, r6
    stmia sp, {r1, r4}
    mov r1, #1
    str r1, [sp, #8]
    ldr r3, [r9, #8]
    mov r1, r7
    add r2, r11, #0x100
    bl NHTTPi_SendPostData
    cmp r0, #0
    beq @L_02116a6c
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02116a54:
    ldr r2, [r9, #0x10]
    mov r0, r10
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02116a6c:
    mov r0, r10
    mov r1, r5
    mov r2, #2
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r7, #0x34]
    ldr r0, [r0]
    cmp r9, r0
    beq @L_02116aa4
    ldr r9, [r9, #4]
    cmp r9, #0
    bne @L_0211693c
@L_02116aa4:
    mov r0, r10
    add r1, r7, #0x38
    mov r2, #0x14
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, =data_ov014_02125dcc
    mov r0, r10
    mov r2, #4
    bl NHTTPi_SendData
    cmp r0, #0
    moveq r0, #0
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void NHTTPi_SendProcPostDataAscii(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    mov r5, r0
    bl NHTTPi_GetSystemInfoP
    mov r4, r0
    bl NHTTPi_GetMutexInfoP
    mov r7, r0
    mov r0, r4
    bl NHTTPi_GetReqInfoP
    ldr r1, [r0]
    mov r0, r4
    ldr r8, [r1, #0xc]
    bl NHTTPi_GetThreadInfoP
    mov r11, r0
    mov r0, r4
    bl NHTTPi_GetBgnEndInfoP
    mov r1, #0
    str r1, [sp, #0xc]
    ldr r6, [r8, #0x34]
    mov r9, r0
    cmp r6, #0
    beq @L_02116be4
    mov r4, #2
    add r10, sp, #0xc
@L_02116b5c:
    ldr r0, [r6, #8]
    bl NHTTPi_getUrlEncodedSize
    ldr r1, [sp, #0xc]
    add r0, r1, r0
    add r0, r0, #1
    str r0, [sp, #0xc]
    ldr r0, [r6, #0xc]
    cmp r0, #0
    bne @L_02116bac
    str r4, [sp]
    ldr r2, [r6, #8]
    mov r0, r7
    mov r1, r8
    mov r3, r10
    bl NHTTPi_GetPostContentlength
    cmp r0, #0
    bne @L_02116bbc
    add sp, sp, #0x1c
    mov r0, #3
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02116bac:
    bl NHTTPi_getUrlEncodedSize
    ldr r1, [sp, #0xc]
    add r0, r1, r0
    str r0, [sp, #0xc]
@L_02116bbc:
    ldr r0, [r8, #0x34]
    ldr r0, [r0]
    cmp r6, r0
    beq @L_02116be4
    ldr r0, [sp, #0xc]
    add r0, r0, #1
    str r0, [sp, #0xc]
    ldr r6, [r6, #4]
    cmp r6, #0
    bne @L_02116b5c
@L_02116be4:
    add r6, sp, #0x10
    ldr r1, [sp, #0xc]
    mov r0, r6
    bl NHTTPi_intToStr
    mov r4, r0
    ldr r1, =data_ov014_02124020
    mov r0, r5
    mov r2, #0x31
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, =data_ov014_02125db4
    mov r0, r5
    mov r2, #0x10
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r5
    mov r1, r6
    mov r2, r4
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r6, =data_ov014_02125d40
    mov r4, #2
    mov r0, r5
    mov r1, r6
    mov r2, r4
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r5
    mov r1, r6
    mov r2, r4
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r4, [r8, #0x34]
    cmp r4, #0
    beq @L_02116dd8
@L_02116c98:
    ldr r1, [r4, #8]
    mov r10, #0
    ldrsb r0, [r1]
    cmp r0, #0
    beq @L_02116cec
    add r6, sp, #0x10
@L_02116cb0:
    ldrsb r1, [r1, r10]
    mov r0, r6
    bl NHTTPi_encodeUrlChar
    mov r2, r0
    mov r0, r5
    mov r1, r6
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [r4, #8]
    add r10, r10, #1
    ldrsb r0, [r1, r10]
    cmp r0, #0
    bne @L_02116cb0
@L_02116cec:
    ldr r1, =data_ov014_02125dd4
    mov r0, r5
    mov r2, #1
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [r4, #0xc]
    cmp r1, #0
    bne @L_02116d50
    ldr r1, [r9, #0xc]
    add r0, r5, #0x324
    str r1, [sp]
    str r0, [sp, #4]
    mov r0, #2
    str r0, [sp, #8]
    ldr r3, [r4, #8]
    mov r0, r7
    mov r1, r8
    add r2, r11, #0x100
    bl NHTTPi_SendPostData
    cmp r0, #0
    beq @L_02116da0
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02116d50:
    ldrsb r0, [r1]
    mov r10, #0
    cmp r0, #0
    beq @L_02116da0
    add r6, sp, #0x10
@L_02116d64:
    ldrsb r1, [r1, r10]
    mov r0, r6
    bl NHTTPi_encodeUrlChar
    mov r2, r0
    mov r0, r5
    mov r1, r6
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [r4, #0xc]
    add r10, r10, #1
    ldrsb r0, [r1, r10]
    cmp r0, #0
    bne @L_02116d64
@L_02116da0:
    ldr r0, [r8, #0x34]
    ldr r0, [r0]
    cmp r4, r0
    beq @L_02116dd8
    ldr r1, =data_ov014_02125dd8
    mov r0, r5
    mov r2, #1
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #0x1c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r4, [r4, #4]
    cmp r4, #0
    bne @L_02116c98
@L_02116dd8:
    mov r0, #0
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 NHTTPi_ThreadInit(u8 *arg0)
{
    *(s32 *)(arg0) = -1;
    NHTTPi_memclr((arg0 + 4), 0x100);
    NHTTPi_memclr((arg0 + 0x104), 0x200);
    *(s32 *)(arg0 + 0x314) = -1;
    *(s32 *)(arg0 + 0x318) = -1;
    *(s32 *)(arg0 + 0x324) = 0;
    *(s32 *)(arg0 + 0x338) = 0;
    *(s32 *)(arg0 + 0x33C) = 0;
    *(s32 *)(arg0 + 0x334) = 0;
    *(s32 *)(arg0 + 0x32C) = 0;
    *(s32 *)(arg0 + 0x330) = 0;
    return 0;
}

extern "C" asm void NHTTPi_ThreadReqEnd(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    bl NHTTPi_GetSystemInfoP
    mov r6, r0
    bl NHTTPi_GetBgnEndInfoP
    mov r4, r0
    mov r0, r6
    bl NHTTPi_GetReqInfoP
    mov r5, r0
    mov r0, r6
    bl NHTTPi_GetMutexInfoP
    ldr r1, [r5]
    mov r6, r0
    ldr r7, [r1, #0xc]
    mov r1, r7
    ldr r8, [r7, #0x2c]
    bl NHTTPi_Request2Connection
    mov r9, r0
    ldr r0, [r7]
    cmp r0, #0
    movne r0, #0
    strne r0, [r10, #0x338]
    movne r1, #8
    ldr r0, [r10, #0x338]
    strne r1, [r10, #0x330]
    cmp r0, #0
    bne @L_02116ee0
    ldr r2, [r4, #0xc]
    cmp r2, #0
    blt @L_02116ee0
    mov r0, r6
    mov r1, r7
    bl NHTTPi_SocClose
    cmp r0, #0
    movlt r0, #0xa
    strlt r0, [r10, #0x330]
    mvn r0, #0
    str r0, [r4, #0xc]
@L_02116ee0:
    ldr r0, [r10, #0x330]
    cmp r0, #0
    moveq r0, #1
    streq r0, [r8, #0x10]
    beq @L_02116f1c
    mov r11, #0
    str r11, [r8, #0x10]
    ldr r1, [r10, #0x330]
    mov r0, r4
    bl NHTTPi_SetError
    ldr r1, [r8, #0x28]
    add r0, r10, #0x104
    cmp r1, r0
    streq r11, [r8, #0x28]
    streq r11, [r8, #0x1c]
@L_02116f1c:
    cmp r9, #0
    ldrne r0, [r10, #0x330]
    strne r0, [r9, #4]
    mov r0, r6
    bl NHTTPi_lockReqList
    ldr r0, [r5]
    bl NHTTPi_free
    mov r1, #0
    mov r0, r6
    str r1, [r5]
    bl NHTTPi_unlockReqList
    mov r0, r6
    mov r1, r7
    bl NHTTPi_destroyRequestObject
    cmp r9, #0
    ldrne r0, [r8, #0x10]
    mov r1, r9
    cmpne r0, #0
    movne r0, #5
    strne r0, [r9]
    mov r0, r6
    bl NHTTPi_CompleteCallback
    cmp r9, #0
    beq @L_02116f84
    mov r0, r9
    bl NHTTPi_NotifyCompletion
@L_02116f84:
    mov r0, r9
    bl NHTTPi_DeleteConnection
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 NHTTPi_ThreadExecReqQueue(u8 *arg0)
{
    u8 *r4;
    s32 r5;
    s32 r6;
    s32 v0;
    s32 v1;
    s32 v4;
    s32 v5;
    s32 t0;
    v0 = NHTTPi_GetSystemInfoP((s32)arg0);
    v1 = NHTTPi_GetMutexInfoP();
    NHTTPi_lockReqList();
    NHTTPi_GetListInfoP(v0);
    v4 = NHTTPi_getReqFromReqQueue();
    r4 = (u8 *)v4;
    r5 = v0;
    r6 = v1;
    if ((s32)r4 == 0) {
        *(s32 *)(arg0) = -1;
    } else {
        v5 = NHTTPi_GetReqInfoP(r5);
        t0 = *(s32 *)(r4 + 0x8);
        *(s32 *)(arg0) = t0;
        *(s32 *)(((u8 *)v5)) = (s32)r4;
    }
    NHTTPi_unlockReqList(r6);
    if (*(s32 *)(arg0) >= 0) {
        return 1;
    } else {
        NHTTPi_GetThreadInfoP(r5);
        NHTTPi_idleCommThread();
        return 0;
    }
}

extern "C" asm void NHTTPi_ThreadHostAddrProc(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r0
    bl NHTTPi_GetSystemInfoP
    bl NHTTPi_GetReqInfoP
    ldr r0, [r0]
    ldr r4, [r0, #0xc]
    ldr r0, [r4, #0xc]
    ldr r6, [r4, #0x28]
    cmp r0, #0
    addne r6, r4, #0xe4
    mov r0, r6
    bl NHTTPi_strlen
    cmp r0, #0
    beq @L_02117054
    mov r0, r6
    add r1, r5, #4
    bl NHTTPi_strcmp
    cmp r0, #0
    beq @L_02117090
@L_02117054:
    mov r0, r4
    mov r1, r6
    bl NHTTPi_resolveHostname
    str r0, [r5, #0x314]
    cmp r0, #0
    bne @L_02117098
    ldr r0, [r4, #0xc]
    cmp r0, #0
    movne r0, #0xc
    strne r0, [r5, #0x330]
    movne r0, #0
    moveq r0, #4
    streq r0, [r5, #0x330]
    moveq r0, #0
    ldmia sp!, {r4, r5, r6, pc}
@L_02117090:
    ldr r0, [r5, #0x318]
    str r0, [r5, #0x314]
@L_02117098:
    add r0, r5, #4
    mov r1, #0x100
    bl NHTTPi_memclr
    mov r0, r6
    mov r1, #0xff
    bl NHTTPi_strnlen
    mov r2, r0
    mov r1, r6
    add r0, r5, #4
    bl NHTTPi_memcpy
    ldr r0, [r4, #0x20]
    ldr r1, [r5, #0x314]
    str r0, [r5, #0x31c]
    ldr r0, [r4, #0xc]
    cmp r0, #0
    ldrne r0, [r4, #0x1e4]
    strne r0, [r5, #0x31c]
    ldr r0, [r5, #0x318]
    cmp r1, r0
    ldreq r1, [r5, #0x31c]
    ldreq r0, [r5, #0x320]
    cmpeq r1, r0
    bne @L_02117100
    ldr r0, [r4, #8]
    cmp r0, #1
    bne @L_02117108
@L_02117100:
    mov r0, #0
    str r0, [r5, #0x338]
@L_02117108:
    ldr r1, [r5, #0x314]
    ldr r0, [r5, #0x31c]
    str r1, [r5, #0x318]
    str r0, [r5, #0x320]
    mov r0, #1
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void NHTTPi_ThreadConnectProc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #8
    mov r8, r0
    mov r9, #0
    bl NHTTPi_GetSystemInfoP
    mov r6, r0
    bl NHTTPi_GetBgnEndInfoP
    mov r4, r0
    mov r0, r6
    bl NHTTPi_GetReqInfoP
    mov r5, r0
    ldr r1, [r5]
    mov r0, r6
    ldr r6, [r1, #0xc]
    bl NHTTPi_GetMutexInfoP
    ldr r1, [r8, #0x338]
    mov r7, r0
    cmp r1, #1
    bne @L_0211717c
    ldr r0, [r4, #0xc]
    bl NHTTPi_checkKeepAlive
    cmn r0, #1
    streq r9, [r8, #0x338]
@L_0211717c:
    ldr r0, [r8, #0x338]
    cmp r0, #0
    bne @L_0211728c
    ldr r2, [r4, #0xc]
    cmp r2, #0
    blt @L_021171c4
    mov r0, r7
    mov r1, r6
    bl NHTTPi_SocClose
    cmp r0, #0
    bge @L_021171c4
    mvn r0, #0
    str r0, [r4, #0xc]
    mov r0, #0xa
    str r0, [r8, #0x330]
    add sp, sp, #8
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_021171c4:
    mov r0, r6
    bl NHTTPi_SocOpen
    cmp r0, #0
    str r0, [r4, #0xc]
    movlt r0, #3
    strlt r0, [r8, #0x330]
    addlt sp, sp, #8
    movlt r0, #0
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r7
    bl NHTTPi_lockReqList
    ldr r2, [r4, #0xc]
    ldr r1, [r5]
    mov r0, r7
    str r2, [r1, #0x10]
    bl NHTTPi_unlockReqList
    ldr r0, [r6]
    cmp r0, #0
    addne sp, sp, #8
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r1, [r8, #0x314]
    mov r0, r4
    str r1, [sp]
    ldr r2, [r8, #0x31c]
    mov r1, r7
    str r2, [sp, #4]
    ldr r3, [r4, #0xc]
    mov r2, r6
    bl NHTTPi_SocConnect
    cmp r0, #0
    bge @L_021172a8
    ldr r0, [r6, #0xc]
    cmp r0, #0
    movne r0, #0xd
    strne r0, [r8, #0x330]
    addne sp, sp, #8
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r4
    bl NHTTPi_GetSSLError
    cmp r0, #0
    movne r0, #0xe
    strne r0, [r8, #0x330]
    movne r0, #0
    moveq r0, #5
    streq r0, [r8, #0x330]
    add sp, sp, #8
    moveq r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0211728c:
    mov r0, r7
    bl NHTTPi_lockReqList
    ldr r2, [r4, #0xc]
    ldr r1, [r5]
    mov r0, r7
    str r2, [r1, #0x10]
    bl NHTTPi_unlockReqList
@L_021172a8:
    mov r0, #1
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void NHTTPi_ThreadProxyProc(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r6, r0
    bl NHTTPi_GetSystemInfoP
    mov r7, r0
    bl NHTTPi_GetBgnEndInfoP
    mov r4, r0
    mov r0, r7
    bl NHTTPi_GetReqInfoP
    mov r5, r0
    mov r0, r7
    bl NHTTPi_GetMutexInfoP
    ldr r2, [r5]
    mov r7, #0
    ldr r5, [r2, #0xc]
    mov r1, #0xa
    str r7, [r6, #0x324]
    str r1, [r6, #0x330]
    ldr r1, [r5, #8]
    mov r8, r0
    cmp r1, #0
    ldrne r0, [r5, #0xc]
    cmpne r0, #0
    beq @L_021173b8
    mov r0, r6
    bl NHTTPi_SendProxyConnectMethod
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    mov r0, r6
    bl NHTTPi_RecvProxyConnectHeader
    cmp r0, #0
    moveq r0, #1
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r3, [r4, #0xc]
    mov r0, r4
    mov r1, r8
    mov r2, r5
    bl NHTTPi_SocSSLConnect
    cmp r0, #0
    beq @L_021173b8
    sub r1, r7, #0x3ec
    cmp r0, r1
    bne @L_02117378
    mov r0, r4
    bl NHTTPi_GetSSLError
    cmp r0, #0
    movne r0, #0x10
    strne r0, [r6, #0x330]
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02117378:
    mvn r1, #0x3ec
    cmp r0, r1
    mov r0, r4
    bne @L_021173a0
    bl NHTTPi_GetSSLError
    cmp r0, #0
    movne r0, #0x11
    strne r0, [r6, #0x330]
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_021173a0:
    bl NHTTPi_GetSSLError
    cmp r0, #0
    movne r0, #0xe
    strne r0, [r6, #0x330]
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_021173b8:
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void NHTTPi_ThreadSendProc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #4
    mov r4, r0
    mov r5, #0
    bl NHTTPi_GetSystemInfoP
    mov r6, r0
    bl NHTTPi_GetReqInfoP
    ldr r1, [r0]
    mov r0, r6
    ldr r8, [r1, #0xc]
    bl NHTTPi_GetMutexInfoP
    mov r7, r0
    mov r0, r6
    bl NHTTPi_GetBgnEndInfoP
    mov r9, r0
    mov r0, r7
    mov r1, r8
    bl NHTTPi_Request2Connection
    mov r7, r0
    mov r0, r6
    bl NHTTPi_GetThreadInfoP
    mov r6, r0
    ldr r0, [r8, #0x24]
    bl NHTTPi_strlen
    mov r1, #0xa
    mov r10, r0
    cmp r7, #0
    str r1, [r4, #0x330]
    movne r1, #2
    strne r1, [r7]
    str r5, [r4, #0x324]
    ldr r1, [r8, #0x1c]
    mov r0, r5
    cmp r1, #0
    beq @L_02117460
    cmp r1, #1
    beq @L_02117470
    cmp r1, #2
    beq @L_02117478
    b @L_02117488
@L_02117460:
    ldr r1, =data_ov014_02125ddc
    mov r0, r4
    mov r2, #4
    b @L_02117484
@L_02117470:
    ldr r1, =data_ov014_02125de4
    b @L_0211747c
@L_02117478:
    ldr r1, =data_ov014_02125dec
@L_0211747c:
    mov r0, r4
    mov r2, #5
@L_02117484:
    bl NHTTPi_SendData
@L_02117488:
    cmp r0, #0
    addne sp, sp, #4
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, [r8, #0xc]
    cmp r0, #0
    beq @L_021174cc
    ldr r0, [r8, #8]
    cmp r0, #0
    bne @L_021174cc
    ldr r1, [r8, #0x24]
    mov r0, r4
    mov r2, r10
    bl NHTTPi_SendData
    cmp r0, #0
    beq @L_02117518
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_021174cc:
    ldr r2, [r8, #0x18]
    cmp r10, r2
    ble @L_021174fc
    ldr r1, [r8, #0x24]
    mov r0, r4
    add r1, r1, r2
    sub r2, r10, r2
    bl NHTTPi_SendData
    cmp r0, #0
    beq @L_02117518
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_021174fc:
    ldr r1, =data_ov014_02125df4
    mov r0, r4
    mov r2, #1
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #4
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02117518:
    ldr r1, =data_ov014_02125d6c
    mov r0, r4
    mov r2, #0xb
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #4
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, [r8, #8]
    ldr r1, =data_ov014_02125d78
    cmp r0, #0
    mov r7, #8
    mov r0, r4
    mov r2, #6
    moveq r7, #7
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #4
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r1, [r8, #0x24]
    ldr r2, [r8, #0x14]
    mov r0, r4
    add r1, r1, r7
    sub r2, r2, r7
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #4
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r1, =data_ov014_02125d40
    mov r0, r4
    mov r2, #2
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #4
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, [r8, #0xc]
    cmp r0, #0
    beq @L_021175cc
    ldr r0, [r8, #8]
    cmp r0, #0
    bne @L_021175cc
    mov r0, r4
    bl NHTTPi_SendProxyAuthorization
    cmp r0, #0
    addne sp, sp, #4
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_021175cc:
    mov r0, r4
    bl NHTTPi_SendBasicAuthorization
    cmp r0, #0
    addne sp, sp, #4
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r4
    bl NHTTPi_SendHeaderList
    cmp r0, #0
    addne sp, sp, #4
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, [r8, #0x1c]
    cmp r0, #1
    bne @L_021176a4
    ldr r0, [r8, #0x10]
    cmp r0, #0
    beq @L_02117618
    mov r0, r4
    bl NHTTPi_SendProcPostDataRaw
    b @L_02117688
@L_02117618:
    ldr r0, [r8, #0xd4]
    cmp r0, #0
    bne @L_02117664
    ldr r3, [r8, #0x34]
    mov r1, #0
    mov r2, r3
    cmp r3, #0
    beq @L_02117670
@L_02117638:
    ldr r0, [r2, #0x14]
    cmp r0, #0
    movne r1, #1
    bne @L_02117670
    ldr r0, [r3]
    cmp r2, r0
    beq @L_02117670
    ldr r2, [r2, #4]
    cmp r2, #0
    bne @L_02117638
    b @L_02117670
@L_02117664:
    mov r1, #1
    cmp r0, #2
    movne r1, #0
@L_02117670:
    cmp r1, #0
    mov r0, r4
    beq @L_02117684
    bl NHTTPi_SendProcPostDataBinary
    b @L_02117688
@L_02117684:
    bl NHTTPi_SendProcPostDataAscii
@L_02117688:
    cmp r0, #0
    beq @L_021176c0
    cmp r0, #3
    moveq r1, #3
    add sp, sp, #4
    streq r1, [r4, #0x330]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_021176a4:
    ldr r1, =data_ov014_02125d40
    mov r0, r4
    mov r2, #2
    bl NHTTPi_SendData
    cmp r0, #0
    addne sp, sp, #4
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_021176c0:
    ldr r3, [r4, #0x324]
    mov r10, #0
    cmp r3, #0
    ble @L_02117708
    str r10, [sp]
    ldr r1, [r9, #0xc]
    mov r0, r8
    add r2, r6, #0x100
    bl NHTTPi_SocSend
    mov r7, r0
    add r0, r6, #0x100
    mov r1, #0x4000
    str r10, [r4, #0x324]
    bl NHTTPi_memclr
    cmp r7, #0
    movlt r10, #1
    cmp r7, #0
    moveq r10, #2
@L_02117708:
    add r0, r6, #0x100
    mov r1, #0x4000
    str r5, [r4, #0x324]
    bl NHTTPi_memclr
    mov r0, r10
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void NHTTPi_ThreadRecvHeaderProc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10
    mov r10, r0
    bl NHTTPi_GetSystemInfoP
    mov r7, r0
    bl NHTTPi_GetReqInfoP
    ldr r1, [r0]
    mov r0, r7
    ldr r4, [r1, #0xc]
    ldr r5, [r4, #0x2c]
    bl NHTTPi_GetMutexInfoP
    mov r1, r4
    mov r6, r0
    bl NHTTPi_Request2Connection
    mov r8, r0
    mov r0, r7
    bl NHTTPi_GetBgnEndInfoP
    add r1, sp, #0xc
    mov r11, #0
    mov r7, r0
    cmp r8, #0
    strb r11, [r1]
    strb r11, [r1, #1]
    strb r11, [r1, #2]
    strb r11, [r1, #3]
    movne r0, #3
    strne r0, [r8]
    str r11, [r5]
    add r0, r10, #0x304
    mov r1, #0xe
    bl NHTTPi_memclr
    ldr r8, [r5, #0x34]
    add r0, r5, #0x38
    str r11, [r10, #0x328]
    str r0, [sp, #8]
@L_021177cc:
    ldr r0, [r4]
    cmp r0, #0
    addne sp, sp, #0x10
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [r10, #0x328]
    cmp r1, #0x400
    bge @L_02117820
    ldr r0, [sp, #8]
    add r3, r0, r1
    mov r0, #1
    stmia sp, {r0, r11}
    ldr r2, [r7, #0xc]
    mov r0, r6
    mov r1, r4
    bl NHTTPi_SocRecv
    ldr r2, [r10, #0x328]
    add r1, r5, r2
    ldrsb r3, [r1, #0x38]
    and r2, r2, #3
    b @L_021178a4
@L_02117820:
    ldr r0, =0x1ff
    ands r9, r1, r0
    bne @L_02117874
    cmp r8, #0
    mov r0, #0x204
    mov r1, #4
    beq @L_0211784c
    bl NHTTPi_alloc
    str r0, [r8]
    mov r8, r0
    b @L_02117858
@L_0211784c:
    bl NHTTPi_alloc
    mov r8, r0
    str r8, [r5, #0x34]
@L_02117858:
    cmp r8, #0
    moveq r0, #1
    streq r0, [r10, #0x330]
    addeq sp, sp, #0x10
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    str r11, [r8]
@L_02117874:
    mov r0, #1
    stmia sp, {r0, r11}
    add r3, r8, #4
    ldr r2, [r7, #0xc]
    mov r0, r6
    mov r1, r4
    add r3, r3, r9
    bl NHTTPi_SocRecv
    add r1, r8, r9
    ldrsb r3, [r1, #4]
    ldr r1, [r10, #0x328]
    and r2, r1, #3
@L_021178a4:
    add r1, sp, #0xc
    strb r3, [r1, r2]
    cmp r0, #0
    movle r0, #0xa
    strle r0, [r10, #0x330]
    addle sp, sp, #0x10
    movle r0, #0
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [r10, #0x328]
    add r1, r1, r0
    add r0, sp, #0xc
    str r1, [r10, #0x328]
    bl NHTTPi_CheckHeaderEnd
    cmp r0, #0
    beq @L_021177cc
    ldr r0, [r10, #0x328]
    str r0, [r5]
    ldr r0, [r5]
    cmp r0, #0
    moveq r0, #7
    streq r0, [r10, #0x330]
    moveq r0, #0
    movne r0, #1
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void NHTTPi_ThreadParseHeaderProc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0xc
    mov r8, r0
    mov r9, #7
    bl NHTTPi_GetSystemInfoP
    mov r4, r0
    bl NHTTPi_GetReqInfoP
    ldr r1, [r0]
    mov r0, r4
    ldr r6, [r1, #0xc]
    ldr r7, [r6, #0x2c]
    bl NHTTPi_GetThreadInfoP
    mov r4, #0
    mov r5, r0
    mov r0, r7
    add r1, r8, #0x304
    mov r2, r4
    mov r3, #0xe
    bl NHTTPi_loadFromHdrRecvBuf
    cmp r0, #0
    moveq r1, r9
    addeq sp, sp, #0xc
    moveq r0, r4
    streq r1, [r8, #0x330]
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r1, =data_ov014_02125da8
    add r0, r8, #0x304
    mov r2, #5
    bl NHTTPi_strnicmp
    cmp r0, #0
    addne sp, sp, #0xc
    movne r0, r4
    strne r9, [r8, #0x330]
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    add r0, r8, #0x300
    ldrsb r0, [r0, #0xc]
    cmp r0, #0x20
    addne sp, sp, #0xc
    movne r0, r4
    strne r9, [r8, #0x330]
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    add r0, r8, #0xd
    add r0, r0, #0x300
    mov r1, #3
    bl NHTTPi_strToInt
    cmp r0, #0
    str r0, [r7, #0x18]
    addlt sp, sp, #0xc
    movlt r0, r4
    strlt r9, [r8, #0x330]
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    str r4, [sp]
    mov r10, #0xc
    ldr r2, [r7]
    add r3, sp, #8
    mov r0, r7
    mov r1, r10
    bl NHTTPi_findNextLineHdrRecvBuf
    cmp r0, #0
    movlt r1, r9
    addlt sp, sp, #0xc
    movlt r0, r4
    strlt r1, [r8, #0x330]
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r1, =data_ov014_02125df8
    add r2, sp, #4
    mov r0, r7
    mov r9, r4
    bl NHTTPi_getHeaderValue
    movs r3, r0
    addeq sp, sp, #0xc
    str r3, [r8, #0x32c]
    moveq r0, r4
    streq r4, [r8, #0x330]
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r3, #0x4000
    mov r1, #7
    addgt sp, sp, #0xc
    movgt r0, r4
    strgt r1, [r8, #0x330]
    ldmgtia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r3, #0
    ble @L_02117aac
    ldr r2, [sp, #4]
    mov r0, r7
    add r1, r5, #0x100
    bl NHTTPi_loadFromHdrRecvBuf
    cmp r0, #0
    moveq r1, #7
    addeq sp, sp, #0xc
    moveq r0, r4
    streq r1, [r8, #0x330]
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r1, [r8, #0x32c]
    add r0, r5, #0x100
    mov r5, #7
    bl NHTTPi_strToInt
    cmp r0, #0
    str r0, [r8, #0x32c]
    addlt sp, sp, #0xc
    movlt r0, r4
    strlt r5, [r8, #0x330]
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    b @L_02117ab0
@L_02117aac:
    sub r0, r10, #0xd
@L_02117ab0:
    str r0, [r7, #0xc]
    ldr r0, [r6, #8]
    mov r4, #7
    cmp r0, #0
    strne r9, [r8, #0x338]
    bne @L_02117b34
    ldr r1, =data_ov014_02125e08
    add r2, sp, #4
    mov r0, r7
    bl NHTTPi_getHeaderValue
    movs r2, r0
    moveq r0, #0
    addeq sp, sp, #0xc
    streq r4, [r8, #0x330]
    streq r0, [r8, #0x338]
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r2, #0x4000
    strgt r9, [r8, #0x338]
    bgt @L_02117b34
    cmp r2, #0
    ble @L_02117b30
    ldr r1, [sp, #4]
    ldr r3, =data_ov014_02125e14
    mov r0, r7
    add r2, r1, r2
    str r9, [sp]
    bl NHTTPi_compareTokenN_HdrRecvBuf
    cmp r0, #0
    moveq r0, #1
    streq r0, [r8, #0x338]
    strne r9, [r8, #0x338]
    b @L_02117b34
@L_02117b30:
    str r9, [r8, #0x338]
@L_02117b34:
    ldr r1, =data_ov014_02125e20
    add r2, sp, #4
    mov r0, r7
    bl NHTTPi_getHeaderValue
    movs r2, r0
    addeq sp, sp, #0xc
    str r2, [r8, #0x33c]
    streq r4, [r8, #0x330]
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r2, #0x4000
    strgt r9, [r8, #0x33c]
    bgt @L_02117ba4
    cmp r2, #0
    ble @L_02117b9c
    ldr r1, [sp, #4]
    ldr r3, =data_ov014_02125e34
    mov r4, #0x3b
    mov r0, r7
    add r2, r1, r2
    str r4, [sp]
    bl NHTTPi_compareTokenN_HdrRecvBuf
    cmp r0, #0
    moveq r0, #1
    movne r0, #0
    b @L_02117ba0
@L_02117b9c:
    mov r0, #0
@L_02117ba0:
    str r0, [r8, #0x33c]
@L_02117ba4:
    str r9, [r8, #0x330]
    mov r0, #1
    str r0, [r7, #0x14]
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void NHTTPi_ThreadRecvBodyProc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10
    mov r10, r0
    mov r9, #0
    bl NHTTPi_GetSystemInfoP
    mov r8, r0
    bl NHTTPi_GetReqInfoP
    ldr r1, [r0]
    mov r0, r8
    ldr r4, [r1, #0xc]
    ldr r5, [r4, #0x2c]
    bl NHTTPi_GetBgnEndInfoP
    mov r6, r0
    mov r0, r8
    bl NHTTPi_GetMutexInfoP
    mov r1, r4
    mov r7, r0
    bl NHTTPi_Request2Connection
    str r0, [sp, #8]
    mov r0, r8
    bl NHTTPi_GetThreadInfoP
    add r8, r0, #0x100
    ldr r0, [r4, #0x1c]
    cmp r0, #2
    ldrne r0, [r5, #0x18]
    cmpne r0, #0xcc
    cmpne r0, #0x130
    beq @L_02117c50
    cmp r0, #0x64
    blt @L_02117c5c
    cmp r0, #0xc8
    bge @L_02117c5c
@L_02117c50:
    add sp, sp, #0x10
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02117c5c:
    ldr r0, [sp, #8]
    mov r1, #0
    bl NHTTPi_SetVirtualContentLength
    ldr r0, [sp, #8]
    cmp r0, #0
    movne r1, #4
    strne r1, [r0]
    ldr r1, [r10, #0x32c]
    cmp r1, #0
    blt @L_02117d8c
    ldr r0, [sp, #8]
    bl NHTTPi_SetVirtualContentLength
    ldr r0, [r10, #0x32c]
    cmp r0, #0
    ble @L_02117d4c
    add r8, r10, #0x104
    mov r11, #6
@L_02117ca0:
    ldr r0, [r10, #0x330]
    cmp r0, #6
    beq @L_02117ccc
    mov r0, r7
    mov r1, r5
    bl NHTTPi_BufFull
    cmp r0, #0
    streq r11, [r10, #0x330]
    streq r8, [r5, #0x28]
    moveq r0, #0x200
    streq r0, [r5, #0x1c]
@L_02117ccc:
    ldr r0, [r10, #0x330]
    ldr r1, [r10, #0x32c]
    cmp r0, #6
    stmia sp, {r1, r9}
    mov r0, r7
    ldr r2, [r6, #0xc]
    bne @L_02117cf4
    mov r1, r4
    mov r3, r9
    b @L_02117cfc
@L_02117cf4:
    ldr r3, [r5, #4]
    mov r1, r4
@L_02117cfc:
    bl NHTTPi_RecvBufN
    cmp r0, #0
    addlt sp, sp, #0x10
    movlt r0, #0
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    beq @L_02117d4c
    ldr r1, [r10, #0x330]
    cmp r1, #6
    beq @L_02117d38
    ldr r1, [r5, #4]
    add r1, r1, r0
    str r1, [r5, #4]
    ldr r1, [r5, #8]
    add r1, r1, r0
    str r1, [r5, #8]
@L_02117d38:
    ldr r1, [r10, #0x32c]
    sub r0, r1, r0
    str r0, [r10, #0x32c]
    cmp r0, #0
    bgt @L_02117ca0
@L_02117d4c:
    ldr r0, [r10, #0x330]
    cmp r0, #6
    beq @L_02118074
    ldr r0, [r10, #0x32c]
    cmp r0, #0
    beq @L_02117d84
    ldr r1, [r5, #4]
    mov r0, r5
    bl NHTTPi_isRecvBufFull
    cmp r0, #0
    movne r0, #6
    moveq r0, #0xa
    str r0, [r10, #0x330]
    b @L_02118074
@L_02117d84:
    str r9, [r10, #0x330]
    b @L_02118074
@L_02117d8c:
    ldr r0, [r10, #0x33c]
    mov r1, #0xa
    str r1, [r10, #0x330]
    cmp r0, #0
    beq @L_02117fc8
    sub r9, r1, #0xb
@L_02117da4:
    mov r1, #0
    strb r1, [sp, #0xc]
    strb r1, [sp, #0xd]
    str r1, [r10, #0x328]
    cmp r1, #0x4000
    bge @L_02117e98
@L_02117dbc:
    mov r0, #1
    str r0, [sp]
    mov r0, #0
    str r0, [sp, #4]
    add r3, r8, r1
    ldr r2, [r6, #0xc]
    mov r0, r7
    mov r1, r4
    bl NHTTPi_SocRecv
    cmp r0, #0
    addlt sp, sp, #0x10
    movlt r0, #0
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r11, [r10, #0x328]
    add r1, sp, #0xc
    ldrsb r0, [r8, r11]
    and r2, r11, #1
    strb r0, [r1, r2]
    cmp r0, #0x3b
    beq @L_02117e28
    cmp r0, #0xa
    subeq r1, r11, #1
    andeq r2, r1, #1
    addeq r1, sp, #0xc
    ldreqsb r1, [r1, r2]
    cmpeq r1, #0xd
    bne @L_02117e84
@L_02117e28:
    cmp r0, #0xa
    subeq r11, r11, #1
    beq @L_02117e54
    ldr r2, [r6, #0xc]
    mov r0, r7
    mov r1, r4
    bl NHTTPi_SkipLineBuf
    cmp r0, #0
    addle sp, sp, #0x10
    movle r0, #0
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02117e54:
    cmp r11, #0
    addeq sp, sp, #0x10
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r8
    mov r1, r11
    bl NHTTPi_strToHex
    movs r9, r0
    bpl @L_02117e98
    add sp, sp, #0x10
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02117e84:
    ldr r0, [r10, #0x328]
    add r1, r0, #1
    str r1, [r10, #0x328]
    cmp r1, #0x4000
    blt @L_02117dbc
@L_02117e98:
    ldr r0, [r10, #0x328]
    mov r11, #0
    cmp r0, #0x4000
    moveq r0, #7
    streq r0, [r10, #0x330]
    addeq sp, sp, #0x10
    moveq r0, r11
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r9, #0
    ble @L_02117fb0
    ldr r0, [sp, #8]
    mov r1, r9
    bl NHTTPi_SetVirtualContentLength
    cmp r9, #0
    ble @L_02117da4
    add r11, r10, #0x104
@L_02117ed8:
    ldr r0, [r10, #0x330]
    cmp r0, #6
    beq @L_02117f08
    mov r0, r7
    mov r1, r5
    bl NHTTPi_BufFull
    cmp r0, #0
    moveq r0, #6
    streq r0, [r10, #0x330]
    streq r11, [r5, #0x28]
    moveq r0, #0x200
    streq r0, [r5, #0x1c]
@L_02117f08:
    ldr r0, [r10, #0x330]
    mov r1, r4
    cmp r0, #6
    str r9, [sp]
    mov r0, #0
    str r0, [sp, #4]
    mov r0, r7
    bne @L_02117f34
    ldr r2, [r6, #0xc]
    mov r3, #0
    b @L_02117f3c
@L_02117f34:
    ldr r2, [r6, #0xc]
    ldr r3, [r5, #4]
@L_02117f3c:
    bl NHTTPi_RecvBufN
    cmp r0, #0
    addle sp, sp, #0x10
    movle r0, #0
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [r5, #4]
    subs r9, r9, r0
    add r1, r1, r0
    str r1, [r5, #4]
    ldr r1, [r5, #8]
    add r0, r1, r0
    str r0, [r5, #8]
    bne @L_02117fa4
    mov r0, #2
    str r0, [sp]
    mov r0, #0
    str r0, [sp, #4]
    ldr r2, [r6, #0xc]
    mov r0, r7
    mov r1, r4
    mov r3, r8
    bl NHTTPi_SocRecv
    cmp r0, #0
    addle sp, sp, #0x10
    movle r0, #0
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02117fa4:
    cmp r9, #0
    bgt @L_02117ed8
    b @L_02117da4
@L_02117fb0:
    ldr r2, [r6, #0xc]
    mov r0, r7
    mov r1, r4
    bl NHTTPi_SkipLineBuf
    str r11, [r10, #0x330]
    b @L_02118074
@L_02117fc8:
    add r8, r10, #0x104
    mov r11, #6
@L_02117fd0:
    mov r0, r7
    mov r1, r5
    bl NHTTPi_BufFull
    cmp r0, #0
    streq r11, [r10, #0x330]
    streq r8, [r5, #0x28]
    moveq r0, #0x200
    streq r0, [r5, #0x1c]
    ldr r0, [r10, #0x330]
    cmp r0, #6
    bne @L_02118014
    str r9, [sp]
    ldr r2, [r6, #0xc]
    mov r0, r7
    mov r1, r4
    mov r3, r9
    b @L_0211802c
@L_02118014:
    mov r0, #0
    str r0, [sp]
    ldr r2, [r6, #0xc]
    ldr r3, [r5, #4]
    mov r0, r7
    mov r1, r4
@L_0211802c:
    bl NHTTPi_RecvBuf
    cmp r0, #0
    addlt sp, sp, #0x10
    movlt r0, #0
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    bne @L_02118058
    ldr r1, [r10, #0x330]
    mov r0, #0
    cmp r1, #6
    strne r0, [r10, #0x330]
    b @L_02118074
@L_02118058:
    ldr r1, [r5, #4]
    add r1, r1, r0
    str r1, [r5, #4]
    ldr r1, [r5, #8]
    add r0, r1, r0
    str r0, [r5, #8]
    b @L_02117fd0
@L_02118074:
    mov r0, r7
    mov r1, r5
    bl NHTTPi_Response2Connection
    ldr r2, [r10, #0x330]
    mov r1, r0
    cmp r2, #0
    bne @L_021180a0
    cmp r1, #0
    beq @L_021180a0
    mov r0, r7
    bl NHTTPi_ReceivedCallback
@L_021180a0:
    mov r0, #1
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
