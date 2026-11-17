#include "ov014/Unk_ov014_0211b0e0.hpp"

extern "C" s32 WBT_CancelCurrentCommand(s32 arg0);
extern "C" s32 SOCL_Resolve(...);
extern "C" s32 SOCL_InetAtoH(...);
extern "C" s32 SOCL_SetResolver(...);
extern "C" s32 SOCL_GetHostID(void);
extern "C" void SOCL_GetStatus(void);
extern "C" s32 SOCLi_GetReadBufferOccpiedSize(u8 *arg0);
extern "C" s32 SOCLi_RoundUp4(s32 arg0);
extern "C" void SOCLi_InitResource(void);
extern "C" s32 SOCLi_IsIPv4ValidDNSAddr(...);
extern "C" s32 SOCLi_IsIPv4ValidNodeAddr(...);
extern "C" s32 SOCLi_CheckNConfig(void);
extern "C" void SOCLi_SocketRegister(s32 arg0);
extern "C" void SOCLi_SocketRegisterList(u8 *arg0, u8 *arg1);
extern "C" void SOCLi_SocketRegisterTrash(s32 arg0);
extern "C" void SOCLi_SocketUnregister(s32 arg0);
extern "C" s32 SOCLi_SocketUnregisterList(...);
extern "C" s32 SOCLi_SocketGetNextPtr(...);
extern "C" void SOCLi_SocketUnregisterTrash(s32 arg0);
extern "C" s32 SOCL_SocketIsInvalid(...);
extern "C" s32 SOC_Socket(s32 arg0, s32 arg1);
extern "C" void SOC_Bind(s32 arg0, u8 *arg1);
extern "C" void SOC_Connect(s32 arg0, u8 *arg1);
extern "C" void SOC_Recv(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 SOC_RecvFrom(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 *arg4);
extern "C" void SOC_Send(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void SOC_SendTo(void);
extern "C" void SOC_Shutdown(void);
extern "C" void SOC_Close(void);
extern "C" s32 SOC_GetHostByName(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 SOC_GetHostID(void);
extern "C" s32 SOC_SetResolver(u8 *arg0, u8 *arg1);
extern "C" s32 AllocFunc_SOCL(u8 *arg0);
extern "C" void FreeFunc_SOCL(u8 *arg0);
extern "C" void SOC_Startup(void);
extern "C" void SOC_Cleanup(void);
extern "C" s32 SOC_InetAtoN(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void SOC_U32to4U8(u32 arg0, u8 *arg1);
extern "C" void SOC_Poll(void);
extern "C" s32 SOCL_EnableSsl(s32 arg0, s32 arg1);
extern "C" s32 SOCLi_ExecEnableSslCommand(s32 arg0, s32 arg1);
extern "C" s32 SOCLi_EnableSslCallBack(u8 *arg0);
extern "C" s32 find_session_from_id(u8 *arg0);
extern "C" void find_session_from_IP(u8 *arg0, s32 arg1, u16 arg2);
extern "C" s32 cache_session(...);
extern "C" s32 purge_session(s32 arg0);
extern "C" s32 date2sec(void);
extern "C" s32 CPS_GetSslHandshakePriority(void);
extern "C" void CPS_SetSslHandshakePriority(s32 arg0);
extern "C" s32 enter_computebound(void);
extern "C" void exit_computebound(s32 arg0);
extern "C" void CPS_SetRootCa(s32 arg0, s32 arg1);
extern "C" char **get_rootCA(u8 *arg0, char *arg1);
extern "C" u32 cert_item_len(u8 **arg0);
extern "C" void make_dn(s8 *arg0, s8 *arg1, s32 arg2);
extern "C" s32 parse_time(u8 *arg0, s32 arg1);
extern "C" void cert_item(void);
extern "C" void validate_signature(void);
extern "C" void auth_cert(void);
extern "C" s32 chars_till_end(u8 *arg0);
extern "C" void compare_fqdn(void);
extern "C" void rcv_certificate(void);
extern "C" void rcv_server_hello(void);
extern "C" s32 has_method(...);
extern "C" s32 select_method(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 version_ok(s32 arg0);
extern "C" void client_hello_v2(void);
extern "C" void client_hello(s32 arg0, u8 *arg1);
extern "C" s32 decrypt_premaster_secret(...);
extern "C" void create_ms_sub(s32 arg0, s32 arg1, u8 *arg2);
extern "C" s32 create_master_secret(...);
extern "C" s32 create_key_block(...);
extern "C" s32 rcv_client_key_exchange(u8 *arg0, s32 arg1);
extern "C" s32 finished_md5(...);
extern "C" s32 finished_sha1(...);
extern "C" void rcv_finished(u8 *arg0, s32 arg1);
extern "C" s32 add1_be8(...);
extern "C" s32 decrypt(s32 arg0, s32 arg1, s32 arg2);
extern "C" void make_plaintext(void);
extern "C" s32 make_ciphertext(u8 *arg0, u8 *arg1);
extern "C" s32 tcp_read_raw_nbytes(u8 *arg0, s32 arg1, s32 arg2);
extern "C" void update_digest(s32 arg0, s32 arg1, s32 arg2);
extern "C" void parse_record_in_buf(void);

extern "C" char OSi_ThreadInfo[];
extern "C" char SOCLiConfigPtr[];
extern "C" char data_ov014_02125e48[];
extern "C" char SOCLSocketParamTCP[];
extern "C" char data_ov014_02125e98[];
extern "C" char data_ov014_02125ea0[];
extern "C" char data_ov014_02125ee4[];
extern "C" char data_ov014_02125ee8[];
extern "C" char data_ov014_02125eec[];
extern "C" char data_ov014_02125ef0[];
extern "C" char data_ov014_02125ef8[];
extern "C" char data_ov014_02126ad4[];
extern "C" char CPSNetMask[];
extern "C" char CPSiAlloc[];
extern "C" char CPSGatewayIp[];
extern "C" char CPSiFree[];
extern "C" char CPSMyIp[];
extern "C" char CPSDnsIp[];
extern "C" char SOCLiRequestedIP[];
extern "C" char data_ov014_0212d1e8[];
extern "C" char SOCLi_Resource[];
extern "C" char SOCLiSocketList[];
extern "C" char SOCLiSocketListTrash[];
extern "C" char _ZZ17SOC_GetHostByNamePKcE6hostip_1[];
extern "C" char data_ov014_0212d25c_b[];
extern "C" char data_ov014_0212d274[];
extern "C" char data_ov014_0212d27c[];
extern "C" char data_ov014_0212d2ac[];
extern "C" char data_ov014_0212d2e4[];
extern "C" char session[];
extern "C" s32 MI_CpuCopy8(...);
extern "C" s32 MI_CpuFill8(...);
extern "C" s32 OS_DisableInterrupts(...);
extern "C" void OS_GetTick(void);
extern "C" void OS_LockMutex(void);
extern "C" s32 OS_RestoreInterrupts(...);
extern "C" s32 OS_Sleep(...);
extern "C" void OS_UnlockMutex(void);
extern "C" s32 OS_SetThreadPriority(...);
extern "C" s32 OS_GetThreadPriority(...);
extern "C" s32 OS_GetProcMode(...);
extern "C" void RTC_GetDate(void);
extern "C" void RTC_GetTime(void);
extern "C" void RTC_ConvertDateTimeToSecond(void);
extern "C" s32 STD_CopyLString(...);
extern "C" void CPS_SocRegister(void);
extern "C" void CPS_SocUnRegister(void);
extern "C" void CPSi_TcpReadRaw(void);
extern "C" void CPSi_SocConsumeRaw(void);
extern "C" void CPS_Resolve(void);
extern "C" void SOCL_Startup(void);
extern "C" s32 SOCLi_CreateCommandPacket(...);
extern "C" s32 SOCLi_ExecCommandPacketInRecvPipe(...);
extern "C" s32 SOCL_CreateSocket(...);
extern "C" s32 SOCL_Bind(...);
extern "C" s32 SOCL_Connect(...);
extern "C" s32 SOCL_ReadFrom(...);
extern "C" s32 SOCL_WriteTo(...);
extern "C" void SOCLi_GetWriteBufferFreeSize(void);
extern "C" void SOCL_Shutdown(void);
extern "C" void SOCL_Close(void);
extern "C" void SOCL_Cleanup(void);
extern "C" void CPS_SetSsl(void);
extern "C" s32 CPSi_md5_init(...);
extern "C" s32 CPSi_md5_calc(...);
extern "C" s32 CPSi_md5_result(...);
extern "C" s32 CPSi_sha1_init(...);
extern "C" s32 CPSi_sha1_calc(...);
extern "C" s32 CPSi_sha1_result(...);
extern "C" void CPSi_rc4_init(void);
extern "C" s32 CPSi_rc4_crypt(...);
extern "C" void CPSi_big_sign(void);
extern "C" void CPSi_big_add(void);
extern "C" void CPSi_big_negate(void);
extern "C" void CPSi_big_sub(void);
extern "C" void CPSi_big_mult(void);
extern "C" void CPSi_big_div(void);
extern "C" void CPSi_big_power(void);
extern "C" void CPSi_big_montpower(void);
extern "C" void CPSi_big_from_char(void);
extern "C" void CPSi_char_from_big(void);
extern "C" s32 memcmp(...);
extern "C" void strcmp(void);
extern "C" void strlen(void);

extern "C" asm s32 SOCL_Resolve(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0xa0
    ldr r8, =SOCLiConfigPtr
    mov r7, r0
    ldr r0, [r8]
    cmp r0, #0
    addeq sp, sp, #0xa0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    cmp r7, #0
    addeq sp, sp, #0xa0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r6, =0x1708
    ldr r1, [r0, #0x18]
    mov r0, r6
    blx r1
    movs r5, r0
    addeq sp, sp, #0xa0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    add r4, sp, #0
    mov r1, #0
    mov r0, r4
    mov r2, #0xa0
    bl MI_CpuFill8
    add r0, r5, #0x368
    add r2, r0, #0x800
    ldr r1, =0xb9e
    sub r3, r6, #0xba0
    mov r0, r4
    str r5, [sp, #0x4c]
    str r3, [sp, #0x48]
    str r2, [sp, #0x58]
    str r1, [sp, #0x54]
    bl CPS_SocRegister
    mov r0, r7
    bl CPS_Resolve
    mov r4, r0
    bl CPS_SocUnRegister
    ldr r1, [r8]
    mov r0, r5
    ldr r1, [r1, #0x1c]
    blx r1
    mov r0, r4
    add sp, sp, #0xa0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm s32 SOCL_InetAtoH(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r5, r0
    bl OS_DisableInterrupts
    ldr r4, =CPSDnsIp
    mov r6, r0
    ldmia r4, {r7, r8}
    mov r1, #0
    str r1, [r4]
    mov r0, r5
    str r1, [r4, #4]
    bl CPS_Resolve
    mov r5, r0
    mov r0, r6
    stmia r4, {r7, r8}
    bl OS_RestoreInterrupts
    mov r0, r5
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm s32 SOCL_SetResolver(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    bl SOCL_GetHostID
    cmp r0, #0
    mvneq r0, #0x26
    ldmeqia sp!, {r3, r4, r5, pc}
    cmp r5, #0
    ldrne r0, =data_ov014_02126ad4
    ldr r1, =CPSDnsIp
    ldrne r2, [r0]
    str r5, [r1]
    orrne r2, r2, #2
    strne r2, [r0]
    strne r4, [r1, #4]
    bne @L_0211b248
    ldr r0, =data_ov014_02126ad4
    mov r2, #0
    ldr r3, [r0]
    bic r3, r3, #2
    str r3, [r0]
    str r2, [r1, #4]
@L_0211b248:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 SOCL_GetHostID(void)
{
    s32 r2;
    s32 v0;
    r2 = *(s32 *)(CPSMyIp);
    if (r2 == 0) {
        if ((*(s32 *)(data_ov014_0212d1e8) & 3) == 1) {
            v0 = OS_GetProcMode();
            if (v0 != 0x12) {
                OS_Sleep(10);
            }
        }
    } else {
        if (*(s32 *)(SOCLiRequestedIP) == 0)
            *(s32 *)(SOCLiRequestedIP) = r2;
    }
    return *(s32 *)(CPSMyIp);
}

extern "C" asm void SOCL_GetStatus(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, #0
    mov r5, r0
    bl SOCL_SocketIsInvalid
    cmp r0, #0
    orrne r4, r4, #0x80
    bne @L_0211b388
    ldrsh r0, [r5, #0xac]
    tst r0, #0x40
    ldrsb r0, [r5, #0xaf]
    orrne r4, r4, #0x20
    cmp r0, #1
    beq @L_0211b300
    ldrsh r0, [r5, #0xac]
    tst r0, #4
    beq @L_0211b330
@L_0211b300:
    bl OS_DisableInterrupts
    mov r6, r0
    mov r0, r5
    bl SOCLi_GetReadBufferOccpiedSize
    cmp r0, #0
    mov r0, r5
    orrgt r4, r4, #1
    bl SOCLi_GetWriteBufferFreeSize
    cmp r0, #0
    mov r0, r6
    orrgt r4, r4, #8
    bl OS_RestoreInterrupts
@L_0211b330:
    ldrsb r0, [r5, #0xaf]
    mov r1, #1
    cmp r0, #0
    cmpne r0, #4
    movne r1, #0
    cmp r1, #0
    beq @L_0211b388
    ldrsh r0, [r5, #0xac]
    tst r0, #4
    ldrneb r0, [r5, #8]
    cmpne r0, #4
    beq @L_0211b370
    tst r4, #1
    ldreqsh r0, [r5, #0xac]
    biceq r0, r0, #6
    streqh r0, [r5, #0xac]
@L_0211b370:
    ldrsh r0, [r5, #0xac]
    tst r0, #2
    bne @L_0211b388
    ldrsh r0, [r5, #0xac]
    tst r0, #4
    orreq r4, r4, #0x40
@L_0211b388:
    mov r0, r4
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 SOCLi_GetReadBufferOccpiedSize(u8 *arg0)
{
    s32 r1;
    u8 *r2;
    s32 r3;
    r2 = (u8 *)*(s32 *)(arg0 + 0xA0);
    r3 = 0;
    if ((s32)r2 != 0) {
        r1 = *(s8 *)(arg0 + 0xAF);
        if (r1 == 1) {
            r3 = 0;
            arg0 = (u8 *)*(s32 *)(r2 + 0x104);
            if ((s32)arg0 != 0) {
                r3 = *(u16 *)(arg0 + 0x4);
            }
        } else {
            if ((r1 == 0 || (r3 = 0, r1 == 4))) {
                r3 = (*(s32 *)(arg0 + 0x50) - *(s32 *)(r2 + 0xF8));
            }
        }
    }
    return r3;
}

extern "C" s32 SOCLi_RoundUp4(s32 arg0)
{
    return ((arg0 + 3) & -4);
}

extern "C" void SOCLi_InitResource(void)
{
    MI_CpuFill8((s32)SOCLi_Resource, 0, 8);
}

extern "C" asm s32 SOCLi_IsIPv4ValidDNSAddr(...)
{
    stmdb sp!, {r4, lr}
    mov r12, #0
    sub r3, r12, #1
    cmp r1, r3
    cmpne r1, #0
    mov lr, r12
    mov r4, r12
    cmpne r2, r1
    beq @L_0211b464
    eor r3, r2, r1
    tst r0, r3
    bne @L_0211b43c
    mvn r3, r0
    tst r1, r3
    beq @L_0211b464
@L_0211b43c:
    eor r2, r2, r1
    tst r0, r2
    mov r3, #1
    bne @L_0211b45c
    mvn r2, r0
    and r0, r1, r2
    teq r2, r0
    moveq r3, #0
@L_0211b45c:
    cmp r3, #0
    movne r4, #1
@L_0211b464:
    cmp r4, #0
    beq @L_0211b478
    and r0, r1, #0xff000000
    teq r0, #0x7f000000
    movne lr, #1
@L_0211b478:
    cmp lr, #0
    beq @L_0211b48c
    and r0, r1, #0xf0000000
    teq r0, #0xe0000000
    movne r12, #1
@L_0211b48c:
    mov r0, r12
    ldmia sp!, {r4, pc}
}

extern "C" asm s32 SOCLi_IsIPv4ValidNodeAddr(...)
{
    stmdb sp!, {r3, lr}
    mvn r3, r0
    mov r0, #0
    and r2, r1, r3
    teq r3, r2
    mov lr, r0
    cmpne r2, #0
    movne lr, #1
    mov r12, r0
    cmp lr, #0
    beq @L_0211b4cc
    and r2, r1, #0xff000000
    teq r2, #0x7f000000
    movne r12, #1
@L_0211b4cc:
    cmp r12, #0
    ldmeqia sp!, {r3, pc}
    and r1, r1, #0xf0000000
    teq r1, #0xe0000000
    movne r0, #1
    ldmia sp!, {r3, pc}
}

extern "C" s32 SOCLi_CheckNConfig(void)
{
    s32 r0;
    s32 r1;
    s32 r2;
    s32 r4;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    s32 t5;
    s32 t6;
    s32 t7;
    r4 = 0;
    r0 = *(s32 *)(((u8 *)&CPSNetMask));
    if ((r0 == 0 || (r2 = (~r0), (r2 & (r2 + 1)) != 0))) {
        return 0;
    } else {
        t0 = *(s32 *)(((u8 *)&CPSMyIp));
        v0 = SOCLi_IsIPv4ValidNodeAddr(r0, t0, r2);
        if (v0 == 0) {
            return r4;
        } else {
            r1 = *(s32 *)(((u8 *)&CPSGatewayIp));
            if (r1 != 0) {
                t1 = *(s32 *)(((u8 *)&CPSNetMask));
                v1 = SOCLi_IsIPv4ValidNodeAddr(t1, r1);
                if (((v1 == 0 || (r2 = *(s32 *)(((u8 *)&CPSNetMask)), (r2 != -1 && (*(s32 *)(((u8 *)&CPSMyIp)) & r2) != (*(s32 *)(((u8 *)&CPSGatewayIp)) & r2)))) || *(s32 *)(((u8 *)&CPSMyIp)) == *(s32 *)(((u8 *)&CPSGatewayIp)))) {
                    *(s32 *)(((u8 *)&CPSGatewayIp)) = r4;
                }
            }
            t2 = *(s32 *)(((u8 *)&CPSNetMask));
            t3 = *(s32 *)(((u8 *)&CPSDnsIp));
            t4 = *(s32 *)(((u8 *)&CPSMyIp));
            v2 = SOCLi_IsIPv4ValidDNSAddr(t2, t3, t4);
            if (v2 == 0) {
                *(s32 *)(((u8 *)&CPSDnsIp)) = r4;
            }
            t5 = *(s32 *)(((u8 *)&CPSNetMask));
            t6 = *(s32 *)(((u8 *)&CPSDnsIp) + 0x4);
            t7 = *(s32 *)(((u8 *)&CPSMyIp));
            v3 = SOCLi_IsIPv4ValidDNSAddr(t5, t6, t7);
            if (v3 == 0) {
                *(s32 *)(((u8 *)&CPSDnsIp) + 0x4) = r4;
            }
            return 1;
        }
    }
}

extern "C" void SOCLi_SocketRegister(s32 arg0)
{
    SOCLi_SocketRegisterList((u8 *)SOCLiSocketList, (u8 *)arg0);
}

extern "C" void SOCLi_SocketRegisterList(u8 *arg0, u8 *arg1)
{
    *(s32 *)(arg1 + 0xB8) = *(s32 *)(arg0);
    *(s32 *)(arg0) = (s32)arg1;
}

extern "C" void SOCLi_SocketRegisterTrash(s32 arg0)
{
    SOCLi_SocketRegisterList((u8 *)SOCLiSocketListTrash, (u8 *)arg0);
}

extern "C" void SOCLi_SocketUnregister(s32 arg0)
{
    SOCLi_SocketUnregisterList((s32)SOCLiSocketList, arg0);
}

extern "C" asm s32 SOCLi_SocketUnregisterList(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, r1
    bl OS_DisableInterrupts
    mov r4, r0
    mov r0, r6
    mov r1, r5
    bl SOCLi_SocketGetNextPtr
    cmp r0, #0
    ldrne r1, [r5, #0xb8]
    strne r1, [r0]
    mov r0, r4
    bl OS_RestoreInterrupts
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm s32 SOCLi_SocketGetNextPtr(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    bl OS_DisableInterrupts
    ldr r1, [r5]
    cmp r1, #0
    beq @L_0211b6bc
@L_0211b698:
    cmp r1, r4
    bne @L_0211b6ac
    bl OS_RestoreInterrupts
    mov r0, r5
    ldmia sp!, {r3, r4, r5, pc}
@L_0211b6ac:
    add r5, r1, #0xb8
    ldr r1, [r1, #0xb8]
    cmp r1, #0
    bne @L_0211b698
@L_0211b6bc:
    bl OS_RestoreInterrupts
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void SOCLi_SocketUnregisterTrash(s32 arg0)
{
    SOCLi_SocketUnregisterList((s32)SOCLiSocketListTrash, arg0);
}

extern "C" asm s32 SOCL_SocketIsInvalid(...)
{
    stmdb sp!, {r3, lr}
    mov r1, r0
    cmp r1, #0
    ble @L_0211b700
    ldr r0, =SOCLiSocketList
    bl SOCLi_SocketGetNextPtr
    cmp r0, #0
    bne @L_0211b708
@L_0211b700:
    mov r0, #1
    ldmia sp!, {r3, pc}
@L_0211b708:
    mov r0, #0
    ldmia sp!, {r3, pc}
}

extern "C" s32 WBT_CancelCurrentCommand(s32 arg0)
{
    s32 v0 = SOCLi_SocketGetNextPtr((s32)SOCLiSocketListTrash, arg0);
    return (v0 != 0 ? 1 : 0);
}

extern "C" s32 SOC_Socket(s32 arg0, s32 arg1)
{
    s32 v0;
    s32 v1;
    if (arg1 == 1) {
        v0 = SOCL_CreateSocket((s32)SOCLSocketParamTCP);
        return v0;
    } else {
        v1 = SOCL_CreateSocket((s32)data_ov014_02125e48);
        return v1;
    }
}

extern "C" void SOC_Bind(s32 arg0, u8 *arg1)
{
    s32 t0 = ((u16)(((*(u16 *)(arg1 + 0x2) >> 8) & 0xFF) | ((*(u16 *)(arg1 + 0x2) << 8) & 0xFF00)));
    s32 t1 = ((*(u16 *)(arg1 + 0x2) >> 8) & 0xFF);
    SOCL_Bind(arg0, t0, t1);
}

extern "C" void SOC_Connect(s32 arg0, u8 *arg1)
{
    s32 t0;
    s32 t1;
    t0 = ((u16)(((*(u16 *)(arg1 + 0x2) >> 8) & 0xFF) | ((*(u16 *)(arg1 + 0x2) << 8) & 0xFF00)));
    t1 = (((*(s32 *)(arg1 + 0x4) << 0x18) & -0x1000000) | (((*(s32 *)(arg1 + 0x4) << 8) & 0xFF0000) | ((((u32)*(s32 *)(arg1 + 0x4) >> 0x18) & 0xFF) | (((u32)*(s32 *)(arg1 + 0x4) >> 8) & 0xFF00))));
    SOCL_Connect(arg0, t0, t1);
    return;
}

extern "C" void SOC_Recv(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    SOCL_ReadFrom(arg0, arg1, arg2, 0, 0, arg3);
}

extern "C" s32 SOC_RecvFrom(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 *arg4)
{
    u32 ip;
    u16 port;
    s32 r = ((s32 (*)(...))SOCL_ReadFrom)(arg0, arg1, arg2, &port, &ip, arg3);
    if (r < 0)
        return r;
    if (arg4 == 0)
        return r;
    *(u16 *)(arg4 + 2) = (u16)((((s32)port >> 8) & 0xFF) | ((port << 8) & 0xFF00));
    *(u32 *)(arg4 + 4) = ((ip << 24) & 0xFF000000) | (((ip << 8) & 0xFF0000) | (((ip >> 24) & 0xFF) | ((ip >> 8) & 0xFF00)));
    return r;
}

extern "C" void SOC_Send(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    SOCL_WriteTo(arg0, arg1, arg2, 0, 0, arg3);
}

extern "C" asm void SOC_SendTo(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #8
    ldr r5, [sp, #0x20]
    cmp r5, #0
    moveq r5, #0
    moveq r4, r5
    beq @L_0211b930
    ldrh r4, [r5, #2]
    ldr r6, [r5, #4]
    mov r7, r4, asr #8
    mov r12, r4, lsl #8
    mov r4, r6, lsr #0x18
    mov lr, r6, lsr #8
    mov r5, r6, lsl #8
    mov r6, r6, lsl #0x18
    and r7, r7, #0xff
    and r12, r12, #0xff00
    orr r7, r7, r12
    and r4, r4, #0xff
    and lr, lr, #0xff00
    and r5, r5, #0xff0000
    orr r4, r4, lr
    mov r12, r7, lsl #0x10
    orr r4, r5, r4
    and r6, r6, #0xff000000
    mov r5, r12, lsr #0x10
    orr r4, r6, r4
@L_0211b930:
    str r4, [sp]
    str r3, [sp, #4]
    mov r3, r5
    bl SOCL_WriteTo
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" void SOC_Shutdown(void)
{
    SOCL_Shutdown();
}

extern "C" void SOC_Close(void)
{
    SOCL_Close();
}

extern "C" s32 SOC_GetHostByName(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 v0;
    v0 = SOCL_Resolve(arg0, arg1, arg2, arg3);
    if (v0 == 0)
        return 0;
    MI_CpuFill8((s32)data_ov014_0212d2e4, 0, 0x101);
    STD_CopyLString((s32)data_ov014_0212d2e4, arg0, 0x101);
    *(s32 *)(_ZZ17SOC_GetHostByNamePKcE6hostip_1 + 0x20) = (s32)data_ov014_0212d2e4;
    *(s32 *)(_ZZ17SOC_GetHostByNamePKcE6hostip_1 + 0x24) = 0;
    *(u16 *)(_ZZ17SOC_GetHostByNamePKcE6hostip_1 + 0x28) = 2;
    *(u16 *)(_ZZ17SOC_GetHostByNamePKcE6hostip_1 + 0x2A) = 4;
    *(s32 *)(_ZZ17SOC_GetHostByNamePKcE6hostip_1 + 0x2C) = (s32)data_ov014_0212d274;
    *(s32 *)(_ZZ17SOC_GetHostByNamePKcE6hostip_1 + 0x18) = (s32)data_ov014_0212d25c_b;
    *(s32 *)(_ZZ17SOC_GetHostByNamePKcE6hostip_1 + 0x1C) = 0;
    *(s32 *)(_ZZ17SOC_GetHostByNamePKcE6hostip_1) = (((v0 << 0x18) & -0x1000000) | (((v0 << 8) & 0xFF0000) | ((((u32)v0 >> 0x18) & 0xFF) | (((u32)v0 >> 8) & 0xFF00))));
    return (s32)data_ov014_0212d27c;
}

extern "C" s32 SOC_GetHostID(void)
{
    s32 v0;
    v0 = SOCL_GetHostID();
    return (((v0 << 0x18) & -0x1000000) | (((v0 << 8) & 0xFF0000) | ((((u32)v0 >> 0x18) & 0xFF) | (((u32)v0 >> 8) & 0xFF00))));
}

extern "C" s32 SOC_SetResolver(u8 *arg0, u8 *arg1)
{
    s32 v0;
    s32 t0;
    s32 t1;
    t0 = (((*(s32 *)(arg0) << 0x18) & -0x1000000) | (((*(s32 *)(arg0) << 8) & 0xFF0000) | ((((u32)*(s32 *)(arg0) >> 0x18) & 0xFF) | (((u32)*(s32 *)(arg0) >> 8) & 0xFF00))));
    t1 = (((*(s32 *)(arg1) << 0x18) & -0x1000000) | (((*(s32 *)(arg1) << 8) & 0xFF0000) | ((((u32)*(s32 *)(arg1) >> 0x18) & 0xFF) | (((u32)*(s32 *)(arg1) >> 8) & 0xFF00))));
    v0 = SOCL_SetResolver(t0, t1);
    return v0;
}

extern "C" s32 AllocFunc_SOCL(u8 *arg0)
{
    s32 r4;
    s32 v0;
    v0 = ((s32 (*)(...))*(s32 *)(((u8 *)&_ZZ17SOC_GetHostByNamePKcE6hostip_1) + 0xC))(0, (s32)(arg0 + 4));
    r4 = (s32)(arg0 + 4);
    arg0 = (u8 *)v0;
    if ((s32)arg0 != 0) {
        *(s32 *)(arg0) = r4;
        arg0 = (u8 *)(arg0 + 4);
    }
    return (s32)arg0;
}

extern "C" void FreeFunc_SOCL(u8 *arg0)
{
    s32 t0;
    s32 t1;
    if (arg0 == 0)
        return;
    t0 = *(s32 *)(arg0 - 0x4);
    t1 = *(s32 *)(_ZZ17SOC_GetHostByNamePKcE6hostip_1 + 0x4);
    ((s32 (*)(...))*(s32 *)(_ZZ17SOC_GetHostByNamePKcE6hostip_1 + 0x4))(0, (arg0 - 4), t0, t1);
    return;
}

extern "C" asm void SOC_Startup(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    ldr r1, [r0, #0xc]
    ldr r5, [r0, #0x14]
    cmp r1, #1
    ldr r1, [r0, #0x10]
    ldr r12, [r0, #0x18]
    mov r7, r1, lsr #0x18
    mov r6, r1, lsr #8
    mov r8, r1, lsl #8
    mov r10, #1
    mov r9, r1, lsl #0x18
    mov r1, r12, lsr #0x18
    str r1, [sp]
    mov r4, r5, lsl #8
    and r7, r7, #0xff
    and r6, r6, #0xff00
    orr r7, r7, r6
    mov r6, r12, lsr #8
    and r8, r8, #0xff0000
    str r6, [sp, #4]
    ldr r3, [r0, #0x1c]
    orr r7, r8, r7
    and r1, r9, #0xff000000
    mov lr, r5, lsr #0x18
    orr r1, r1, r7
    mov r7, r5, lsl #0x18
    mov r11, r5, lsr #8
    mov r8, r3, lsr #0x18
    str r8, [sp, #8]
    ldr r6, =_ZZ17SOC_GetHostByNamePKcE6hostip_1
    movne r10, #0
    str r10, [r6, #0x50]
    str r1, [r6, #0x54]
    mov r5, r12, lsl #8
    mov r10, r12, lsl #0x18
    and r8, r11, #0xff00
    and r11, r10, #0xff000000
    and r10, r5, #0xff0000
    ldr r5, [sp]
    ldr r12, [sp, #4]
    and r9, lr, #0xff
    orr r8, r9, r8
    and r4, r4, #0xff0000
    and r5, r5, #0xff
    and r12, r12, #0xff00
    orr r5, r5, r12
    orr r5, r10, r5
    ldr r2, [r0, #0x20]
    orr r4, r4, r8
    and r7, r7, #0xff000000
    orr r7, r7, r4
    mov r8, r2, lsr #0x18
    mov r4, r2, lsr #8
    str r7, [r6, #0x58]
    orr r5, r11, r5
    ldr r10, [sp, #8]
    mov r1, r3, lsr #8
    and r11, r10, #0xff
    mov r9, r3, lsl #8
    and r10, r1, #0xff00
    mov r7, r3, lsl #0x18
    mov r3, r2, lsl #8
    and r1, r9, #0xff0000
    orr r9, r11, r10
    mov r2, r2, lsl #0x18
    and r10, r7, #0xff000000
    and r8, r8, #0xff
    and r4, r4, #0xff00
    orr r7, r1, r9
    orr r1, r8, r4
    and r3, r3, #0xff0000
    str r5, [r6, #0x5c]
    orr r4, r10, r7
    and r2, r2, #0xff000000
    orr r1, r3, r1
    orr r1, r2, r1
    str r4, [r6, #0x60]
    str r1, [r6, #0x64]
    ldr r2, =AllocFunc_SOCL
    ldr r1, =FreeFunc_SOCL
    str r2, [r6, #0x68]
    str r1, [r6, #0x6c]
    ldr r2, [r0, #4]
    ldr r1, [r0, #8]
    str r2, [r6, #0xc]
    str r1, [r6, #4]
    mov r1, #0x40
    str r1, [r6, #0x70]
    ldr r2, [r0, #0x2c]
    ldr r1, [r0, #0x30]
    str r2, [r6, #0x80]
    ldr r0, =data_ov014_0212d2ac
    str r1, [r6, #0x84]
    bl SOCL_Startup
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void SOC_Cleanup(void)
{
    SOCL_Cleanup();
}

extern "C" s32 SOC_InetAtoN(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    u8 *r4;
    s32 v0 = SOCL_InetAtoH(arg0, arg1, arg2, arg3);
    if (v0 == 0)
        return 0;
    arg0 = v0;
    r4 = (u8 *)arg1;
    if ((s32)r4 != 0) {
        *(s32 *)(r4) = (((arg0 << 0x18) & -0x1000000) | (((arg0 << 8) & 0xFF0000) | ((((u32)arg0 >> 0x18) & 0xFF) | (((u32)arg0 >> 8) & 0xFF00))));
    }
    return 1;
}

extern "C" void SOC_U32to4U8(u32 arg0, u8 *arg1)
{
    arg1[0] = arg0 >> 24;
    arg1[1] = arg0 >> 16;
    arg1[2] = arg0 >> 8;
    arg1[3] = arg0;
}

extern "C" asm void SOC_Poll(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    movs r10, r1
    mov r9, r2
    mov r8, r3
    str r0, [sp]
    cmpne r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mvn r0, #0
    cmp r8, r0
    cmpeq r9, r0
    movne r11, #1
    moveq r11, #0
@L_0211bd6c:
    mov r6, #0
    ldr r4, [sp]
    mov r5, r6
    cmp r10, #0
    bls @L_0211bdac
@L_0211bd80:
    ldrsh r1, [r4, #4]
    ldr r0, [r4]
    orr r7, r1, #0xe0
    bl SOCL_GetStatus
    ands r0, r7, r0
    strh r0, [r4, #6]
    add r5, r5, #1
    addne r6, r6, #1
    cmp r5, r10
    add r4, r4, #8
    blo @L_0211bd80
@L_0211bdac:
    cmp r6, #0
    bgt @L_0211bde0
    cmp r11, #0
    beq @L_0211bdc8
    rsbs r0, r9, #0
    rscs r0, r8, #0
    bge @L_0211bde0
@L_0211bdc8:
    mov r0, #1
    bl OS_Sleep
    ldr r0, =0x20b
    subs r9, r9, r0
    sbc r8, r8, #0
    b @L_0211bd6c
@L_0211bde0:
    mov r0, r6
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 SOCL_EnableSsl(s32 arg0, s32 arg1)
{
    s32 r0;
    s32 r1;
    s32 r4;
    u8 *r5;
    s32 v0;
    s32 v1;
    v0 = SOCL_SocketIsInvalid(arg0, arg1);
    r5 = (u8 *)arg0;
    r4 = arg1;
    if (v0 != 0) {
        return -0x1C;
    } else {
        r0 = *(s8 *)(r5 + 0xAF);
        r1 = 1;
        if ((r0 != 0 && r0 != 4)) {
            r1 = 0;
        }
        if (r1 == 0) {
            return -0x1C;
        } else {
            r1 = 0;
            if (((s32)r5 != 0 && (*(s16 *)(r5 + 0xAC) & 1) != 0)) {
                r1 = 1;
            }
            if (r1 == 0) {
                return -0x27;
            } else {
                if ((*(s16 *)(r5 + 0xAC) & 2) != 0) {
                    return -0x1C;
                } else {
                    v1 = SOCLi_ExecEnableSslCommand((s32)r5, r4);
                    return v1;
                }
            }
        }
    }
}

extern "C" s32 SOCLi_ExecEnableSslCommand(s32 arg0, s32 arg1)
{
    s32 v0;
    s32 v1;
    v0 = SOCLi_CreateCommandPacket((s32)SOCLi_EnableSslCallBack, arg0, 1);
    if (v0 == 0)
        return (1 - 0x22);
    *(s32 *)(((u8 *)v0) + 0x10) = arg1;
    v1 = SOCLi_ExecCommandPacketInRecvPipe(arg0, v0);
    return v1;
}

extern "C" s32 SOCLi_EnableSslCallBack(u8 *arg0)
{
    u8 *p = *(u8 **)(arg0 + 4);
    u8 *m = *(u8 **)(p + 0xA0);
    u8 *n = *(u8 **)(m + 0xC4);
    ((s32 (*)(...))OS_LockMutex)(m + 0xE0);
    if (*(s32 *)(arg0 + 0x10) != 0) {
        *(s32 *)(n + 0xC) = *(s32 *)(arg0 + 0x10);
        ((s32 (*)(...))CPS_SetSsl)(1);
        p[0xAF] = 4;
    } else {
        s32 z = 0;
        p[0xAF] = z;
        ((s32 (*)(...))CPS_SetSsl)(z);
        *(s32 *)(n + 0xC) = z;
    }
    ((s32 (*)(...))OS_UnlockMutex)(m + 0xE0);
    return 0;
}

extern "C" s32 find_session_from_id(u8 *arg0)
{
    s32 r5;
    u8 *r6;
    s32 r7;
    s32 v0;
    s32 v1;
    s32 v3;
    v0 = OS_DisableInterrupts((s32)arg0);
    *(u8 *)(arg0 + 0x30) = 0;
    r5 = 0;
    r7 = v0;
    do {
        r6 = (u8 *)((r5 * 0x5C) + ((u8 *)&session));
        if (((*(u8 *)(r6 + 0x5A) != 0 && *(s32 *)(r6 + 0x54) == 0) && *(u16 *)(r6 + 0x58) == 0)) {
            v1 = memcmp((s32)r6, (s32)(arg0 + 0x74), 0x20);
            if (v1 == 0) {
                MI_CpuCopy8((s32)(r6 + 0x20), (s32)arg0, 0x30);
                *(u8 *)(arg0 + 0x30) = 1;
                break;
            }
        }
        r5 = (r5 + 1);
    } while (r5 < 4);
    v3 = OS_RestoreInterrupts(r7);
    return v3;
}

extern "C" void find_session_from_IP(u8 *arg0, s32 arg1, u16 arg2)
{
    u8 *e;
    s32 s = ((s32 (*)(...))OS_DisableInterrupts)();
    s32 i;
    arg0[0x30] = 0;
    for (i = 0; i < 4; i++) {
        e = (u8 *)session + i * 0x5C;
        if (e[0x5A] != 0 && *(s32 *)(e + 0x54) == arg1 && *(u16 *)(e + 0x58) == arg2) {
            ((s32 (*)(...))MI_CpuCopy8)(e, arg0 + 0x74, 0x20);
            ((s32 (*)(...))MI_CpuCopy8)(e + 0x20, arg0, 0x30);
            *(s32 *)(e + 0x50) = (s32)(((u64 (*)(void))OS_GetTick)() >> 16);
            arg0[0x30] = 1;
            break;
        }
    }
    ((s32 (*)(...))OS_RestoreInterrupts)(s);
}

extern "C" asm s32 cache_session(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r8, r0
    mov r7, r1
    mov r6, r2
    bl OS_DisableInterrupts
    mov r11, r0
    bl OS_GetTick
    mov r5, r0, lsr #0x10
    ldr r4, =session
    mov r3, #0
    mov r2, r3
    orr r5, r5, r1, lsl #16
    mov r0, r4
    mvn r9, #0
    mov lr, #0x5c
@L_0211c088:
    mla r1, r2, lr, r0
    ldrb r12, [r1, #0x5a]
    cmp r12, #0
    cmpne r7, #0
    beq @L_0211c0c0
    ldr r10, [r1, #0x54]
    cmp r7, r10
    bne @L_0211c0c0
    cmp r6, #0
    beq @L_0211c0c0
    ldrh r10, [r1, #0x58]
    cmp r6, r10
    moveq r4, r1
    beq @L_0211c0f8
@L_0211c0c0:
    cmp r3, r9
    beq @L_0211c0ec
    cmp r12, #0
    moveq r3, r9
    moveq r4, r1
    beq @L_0211c0ec
    ldr r10, [r1, #0x50]
    sub r10, r5, r10
    cmp r10, r3
    movhi r3, r10
    movhi r4, r1
@L_0211c0ec:
    add r2, r2, #1
    cmp r2, #4
    blt @L_0211c088
@L_0211c0f8:
    mov r1, r4
    add r0, r8, #0x74
    mov r2, #0x20
    bl MI_CpuCopy8
    mov r0, r8
    add r1, r4, #0x20
    mov r2, #0x30
    bl MI_CpuCopy8
    str r5, [r4, #0x50]
    mov r0, #1
    strb r0, [r4, #0x5a]
    str r7, [r4, #0x54]
    mov r0, r11
    strh r6, [r4, #0x58]
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 purge_session(s32 arg0)
{
    s32 r5;
    u8 *r6;
    s32 r7;
    s32 v0;
    s32 v1;
    s32 v2;
    v0 = OS_DisableInterrupts(arg0);
    r7 = v0;
    r5 = 0;
    do {
        r6 = (u8 *)((r5 * 0x5C) + ((u8 *)&session));
        if (*(u8 *)(r6 + 0x5A) != 0) {
            v1 = memcmp((s32)r6, (arg0 + 0x74), 0x20);
            if (v1 == 0) {
                *(u8 *)(r6 + 0x5A) = 0;
                break;
            }
        }
        r5 = (r5 + 1);
    } while (r5 < 4);
    v2 = OS_RestoreInterrupts(r7);
    return v2;
}

extern "C" s32 date2sec(void)
{
    u8 a[0x10];
    u8 b[0xC];
    ((void (*)(u8 *))RTC_GetDate)(a);
    ((void (*)(u8 *))RTC_GetTime)(b);
    return ((s32 (*)(u8 *, u8 *))RTC_ConvertDateTimeToSecond)(a, b) + 0x386D4380;
}

extern "C" s32 CPS_GetSslHandshakePriority(void)
{
    return *(s32 *)(data_ov014_02125e98 + 0x4);
}

extern "C" void CPS_SetSslHandshakePriority(s32 arg0)
{
    *(s32 *)(data_ov014_02125e98 + 0x4) = arg0;
}

extern "C" s32 enter_computebound(void)
{
    s32 v0;
    s32 t0;
    s32 t1;
    if ((u32)*(s32 *)(data_ov014_02125e98 + 0x4) >= (u32)0x20)
        return -1;
    t0 = *(s32 *)(OSi_ThreadInfo + 0x4);
    v0 = OS_GetThreadPriority(t0);
    t1 = *(s32 *)(data_ov014_02125e98 + 0x4);
    OS_SetThreadPriority(t0, t1);
    return v0;
}

extern "C" void exit_computebound(s32 arg0)
{
    if ((u32)arg0 >= (u32)0x20)
        return;
    OS_SetThreadPriority(*(s32 *)(OSi_ThreadInfo + 0x4), arg0);
}

extern "C" void CPS_SetRootCa(s32 arg0, s32 arg1)
{
    u8 *r2;
    r2 = (u8 *)*(s32 *)(*(u8 * *)(OSi_ThreadInfo + 0x4) + 0xA4);
    if ((s32)r2 != 0) {
        r2 = (u8 *)*(s32 *)(r2 + 0xC);
        if ((s32)r2 != 0) {
            *(s32 *)(r2 + 0x814) = arg0;
            *(s32 *)(r2 + 0x818) = arg1;
        }
    }
    return;
}

extern "C" char **get_rootCA(u8 *arg0, char *arg1)
{
    s32 i;
    char ***arr;
    s32 n = *(s32 *)(arg0 + 0x818);
    i = 0;
    if (n > 0) {
        arr = *(char ****)(arg0 + 0x814);
        do {
            char **e = arr[i];
            if (((s32 (*)(char *, char *))strcmp)(*e, arg1) == 0)
                return e;
            i++;
        } while (i < n);
    }
    return 0;
}

extern "C" u32 cert_item_len(u8 **arg0)
{
    u8 *p = *arg0;
    u32 v = *p++;
    if (v & 0x80) {
        s32 n = v & 0x7F;
        v = 0;
        while (n-- != 0) {
            if (v & 0xFF000000)
                return -1;
            v = (v << 8) + *p++;
        }
    }
    *arg0 = p;
    return v;
}

extern "C" void make_dn(s8 *arg0, s8 *arg1, s32 arg2)
{
    s8 *s = arg0;
    if (*arg0 != 0) {
        while (*++arg0 != 0)
            ;
        if (arg0 - s >= 0xFF)
            return;
        arg0[0] = 0x2C;
        arg0[1] = 0x20;
        arg0 += 2;
    }
    while (arg2-- != 0 && arg0 - s < 0xFF)
        *arg0++ = *arg1++;
    *arg0 = 0;
}

extern "C" s32 parse_time(u8 *arg0, s32 arg1)
{
    u32 y = arg0[0] * 10 + arg0[1] - 0x210;
    s32 v;
    arg0 += 2;
    if (arg1 == 0x17) {
        if (y < 0x32)
            v = y + 0x7D0;
        else
            v = y + 0x76C;
    } else {
        v = y * 0x64 + (arg0[0] * 10 + arg0[1] - 0x210);
        arg0 += 2;
    }
    return (v << 16) + ((arg0[0] * 10 + arg0[1] - 0x210) << 8) + (arg0[2] * 10 + arg0[3] - 0x210);
}

extern "C" asm void cert_item(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    mov r11, r1
    ldr r4, [r11]
    add r5, sp, #4
    add r1, r4, #1
    mov r9, r0
    str r1, [sp, #4]
    mov r0, r5
    mov r7, r2
    mov r6, r3
    ldr r8, [sp, #0x30]
    ldrb r10, [r4]
    bl cert_item_len
    movs r4, r0
    bmi @L_0211c46c
    cmp r4, #0x7d0
    ble @L_0211c478
@L_0211c46c:
    add sp, sp, #8
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0211c478:
    and r1, r10, #0x1f
    cmp r1, #0x18
    addls pc, pc, r1, lsl #2
    b @L_0211c854
    b @L_0211c854
    b @L_0211c854
    b @L_0211c4ec
    b @L_0211c5d0
    b @L_0211c854
    b @L_0211c854
    b @L_0211c640
    b @L_0211c854
    b @L_0211c854
    b @L_0211c854
    b @L_0211c854
    b @L_0211c854
    b @L_0211c6cc
    b @L_0211c854
    b @L_0211c854
    b @L_0211c854
    b @L_0211c788
    b @L_0211c808
    b @L_0211c854
    b @L_0211c6cc
    b @L_0211c6cc
    b @L_0211c854
    b @L_0211c6cc
    b @L_0211c73c
    b @L_0211c73c
@L_0211c4ec:
    ldrb r0, [r9, #0x5ad]
    cmp r0, #0
    beq @L_0211c5cc
    cmp r6, #0
    bne @L_0211c564
    ldr r0, [sp, #4]
    ldrb r1, [r0]
    cmp r1, #0
    bne @L_0211c528
@L_0211c510:
    add r0, r0, #1
    str r0, [sp, #4]
    ldrb r1, [r0]
    sub r4, r4, #1
    cmp r1, #0
    beq @L_0211c510
@L_0211c528:
    cmp r8, #0
    beq @L_0211c544
    cmp r8, #2
    streq r4, [r9, #0x484]
    ldreq r0, [sp, #4]
    streq r0, [r9, #0x488]
    b @L_0211c5cc
@L_0211c544:
    cmp r4, #0x100
    bgt @L_0211c5cc
    add r1, r9, #0x94
    mov r2, r4
    add r1, r1, #0x400
    bl MI_CpuCopy8
    str r4, [r9, #0x594]
    b @L_0211c5cc
@L_0211c564:
    cmp r6, #1
    bne @L_0211c5cc
    ldr r0, [sp, #4]
    ldrb r1, [r0]
    cmp r1, #0
    bne @L_0211c594
@L_0211c57c:
    add r0, r0, #1
    str r0, [sp, #4]
    ldrb r1, [r0]
    sub r4, r4, #1
    cmp r1, #0
    beq @L_0211c57c
@L_0211c594:
    cmp r8, #0
    beq @L_0211c5b0
    cmp r8, #2
    streq r4, [r9, #0x48c]
    ldreq r0, [sp, #4]
    streq r0, [r9, #0x490]
    b @L_0211c5cc
@L_0211c5b0:
    cmp r4, #8
    bgt @L_0211c5cc
    add r1, r9, #0x198
    mov r2, r4
    add r1, r1, #0x400
    bl MI_CpuCopy8
    str r4, [r9, #0x5a0]
@L_0211c5cc:
    b @L_0211c8ac
@L_0211c5d0:
    cmp r7, #1
    mov r5, #0
    bne @L_0211c5f4
    cmp r8, #2
    ldrne r1, [sp, #4]
    subne r0, r4, #1
    addne r1, r1, #1
    strne r1, [r9, #0x5a4]
    strne r0, [r9, #0x5a8]
@L_0211c5f4:
    ldrb r0, [r9, #0x5ad]
    cmp r0, #0
    beq @L_0211c63c
    ldr r0, [sp, #4]
    add r1, sp, #4
    add r0, r0, #1
    str r0, [sp, #4]
    mov r0, r9
    mov r2, r7
    mov r3, r5
    str r8, [sp]
    bl cert_item
    cmp r0, #0
    addne sp, sp, #8
    movne r0, #1
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    strb r5, [r9, #0x5ad]
    b @L_0211c8b8
@L_0211c63c:
    b @L_0211c8ac
@L_0211c640:
    ldr r6, [sp, #4]
    ldr r10, =data_ov014_02125ea0
    mov r5, #0
@L_0211c64c:
    ldr r7, [r10, r5, lsl #2]
    mov r0, r7
    bl strlen
    mov r2, r0
    mov r0, r6
    mov r1, r7
    bl memcmp
    cmp r0, #0
    bne @L_0211c6bc
    cmp r5, #5
    addls pc, pc, r5, lsl #2
    b @L_0211c6c8
    b @L_0211c6c8
    b @L_0211c694
    b @L_0211c694
    b @L_0211c6a4
    b @L_0211c6a4
    b @L_0211c6b0
@L_0211c694:
    cmp r8, #0
    streq r5, [r9, #0x45c]
    strb r5, [r9, #0x5ad]
    b @L_0211c6c8
@L_0211c6a4:
    cmp r8, #2
    strne r5, [r9, #0x458]
    b @L_0211c6c8
@L_0211c6b0:
    cmp r8, #2
    strneb r5, [r9, #0x5ae]
    b @L_0211c6c8
@L_0211c6bc:
    add r5, r5, #1
    cmp r5, #6
    blt @L_0211c64c
@L_0211c6c8:
    b @L_0211c8ac
@L_0211c6cc:
    cmp r8, #2
    mov r5, #0
    beq @L_0211c734
    ldrb r0, [r9, #0x5ac]
    cmp r0, #0
    beq @L_0211c724
    ldr r1, [sp, #4]
    mov r2, r4
    add r0, r9, #0x6b0
    bl make_dn
    ldrb r0, [r9, #0x5ae]
    cmp r0, #5
    bne @L_0211c734
    cmp r4, #0x4f
    bgt @L_0211c734
    ldr r0, [sp, #4]
    mov r2, r4
    add r1, r9, #0x7b0
    bl MI_CpuCopy8
    add r0, r9, r4
    strb r5, [r0, #0x7b0]
    b @L_0211c734
@L_0211c724:
    ldr r1, [sp, #4]
    mov r2, r4
    add r0, r9, #0x5b0
    bl make_dn
@L_0211c734:
    strb r5, [r9, #0x5ae]
    b @L_0211c8ac
@L_0211c73c:
    cmp r8, #2
    mov r5, #1
    mov r7, #0
    beq @L_0211c774
    ldr r0, [sp, #4]
    bl parse_time
    cmp r6, #0
    ldr r1, [r9, #0x80c]
    bne @L_0211c76c
    cmp r1, r0
    strhsb r5, [r9, #0x5af]
    b @L_0211c774
@L_0211c76c:
    cmp r1, r0
    strhib r7, [r9, #0x5af]
@L_0211c774:
    ldr r0, [sp, #4]
    add r0, r0, r4
    str r0, [sp, #4]
    strb r5, [r9, #0x5ac]
    b @L_0211c8b8
@L_0211c788:
    cmp r7, #0
    cmpeq r6, #0
    bne @L_0211c7a0
    cmp r8, #2
    ldrne r0, [sp, #4]
    strne r0, [r9, #0x460]
@L_0211c7a0:
    ldr r0, [sp, #4]
    mov r5, #0
    add r10, r0, r4
    cmp r0, r10
    bhs @L_0211c7f0
    add r4, sp, #4
@L_0211c7b8:
    mov r0, r9
    mov r1, r4
    mov r3, r5
    add r2, r7, #1
    str r8, [sp]
    bl cert_item
    cmp r0, #0
    add r5, r5, #1
    addne sp, sp, #8
    movne r0, #1
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #4]
    cmp r0, r10
    blo @L_0211c7b8
@L_0211c7f0:
    cmp r7, #1
    cmpeq r6, #0
    bne @L_0211c8b8
    cmp r8, #2
    strne r0, [r9, #0x464]
    b @L_0211c8b8
@L_0211c808:
    ldr r0, [sp, #4]
    mov r6, #0
    add r4, r0, r4
    cmp r0, r4
    bhs @L_0211c8b8
@L_0211c81c:
    mov r0, r9
    mov r1, r5
    mov r3, r6
    add r2, r7, #1
    str r8, [sp]
    bl cert_item
    cmp r0, #0
    addne sp, sp, #8
    movne r0, #1
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #4]
    cmp r0, r4
    blo @L_0211c81c
    b @L_0211c8b8
@L_0211c854:
    cmp r10, #0xa0
    mov r5, #0
    bne @L_0211c8ac
    ldr r0, [sp, #4]
    add r6, r0, r4
    cmp r0, r6
    bhs @L_0211c8b8
    add r4, sp, #4
@L_0211c874:
    mov r0, r9
    mov r1, r4
    mov r3, r5
    add r2, r7, #1
    str r8, [sp]
    bl cert_item
    cmp r0, #0
    addne sp, sp, #8
    movne r0, #1
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #4]
    cmp r0, r6
    blo @L_0211c874
    b @L_0211c8b8
@L_0211c8ac:
    ldr r0, [sp, #4]
    add r0, r0, r4
    str r0, [sp, #4]
@L_0211c8b8:
    ldr r1, [sp, #4]
    mov r0, #0
    str r1, [r11]
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void validate_signature(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #4
    mov r8, r0
    ldr r0, [r8, #0x5a4]
    mov r7, r1
    cmp r0, #0
    ldrne r0, [r8, #0x5a8]
    cmpne r0, #0
    ldrne r0, [r7, #0x10]
    cmpne r0, #0
    ldrne r0, [r7, #0xc]
    cmpne r0, #0
    ldrne r0, [r7, #8]
    cmpne r0, #0
    ldrne r0, [r7, #4]
    cmpne r0, #0
    addeq sp, sp, #4
    moveq r0, #2
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r0, lsl #1
    ldr r1, =CPSiAlloc
    add r0, r0, r0, lsr #31
    mov r5, r0, asr #1
    ldr r1, [r1]
    mov r0, r5, lsl #3
    blx r1
    movs r4, r0
    addeq sp, sp, #4
    moveq r0, #2
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    add r6, r4, r5, lsl #1
    add r9, r6, r5, lsl #1
    ldr r1, [r8, #0x5a4]
    ldr r2, [r8, #0x5a8]
    mov r0, r6
    mov r3, r5
    add r10, r9, r5, lsl #1
    bl CPSi_big_from_char
    ldr r1, [r7, #0x10]
    ldr r2, [r7, #0xc]
    mov r0, r9
    mov r3, r5
    bl CPSi_big_from_char
    ldr r1, [r7, #8]
    ldr r2, [r7, #4]
    mov r0, r10
    mov r3, r5
    bl CPSi_big_from_char
    bl enter_computebound
    mov r2, r9
    mov r9, r0
    mov r0, r4
    mov r1, r6
    mov r3, r5
    str r10, [sp]
    bl CPSi_big_power
    mov r0, r9
    bl exit_computebound
    ldr r2, [r7, #4]
    mov r0, r6
    mov r1, r4
    mov r3, r5
    bl CPSi_char_from_big
    ldrb r0, [r4, r5, lsl #1]
    mov r5, #0
    cmp r0, #0
    ldreqb r0, [r6, #1]
    cmpeq r0, #1
    movne r5, #2
    bne @L_0211ca54
    ldr r3, [r7, #4]
    mov r2, #2
    cmp r3, #2
    ble @L_0211ca10
@L_0211c9f8:
    ldrb r0, [r6, r2]
    cmp r0, #0xff
    bne @L_0211ca10
    add r2, r2, #1
    cmp r2, r3
    blt @L_0211c9f8
@L_0211ca10:
    add r1, r2, #1
    cmp r1, r3
    bge @L_0211ca50
    ldrb r0, [r6, r2]
    cmp r0, #0
    ldreqb r0, [r6, r1]
    cmpeq r0, #0x30
    bne @L_0211ca50
    ldr r2, [r8, #0x47c]
    add r0, r8, #0x68
    add r1, r6, r3
    add r0, r0, #0x400
    sub r1, r1, r2
    bl memcmp
    cmp r0, #0
    beq @L_0211ca54
@L_0211ca50:
    mov r5, #2
@L_0211ca54:
    ldr r1, =CPSiFree
    mov r0, r4
    ldr r1, [r1]
    blx r1
    mov r0, r5
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void auth_cert(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    ldrb r0, [r5, #0x5af]
    mov r4, #0
    cmp r0, #0
    ldr r0, [r5, #0x45c]
    moveq r4, #0x8000
    cmn r0, #1
    orreq r0, r4, #4
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, [r5, #0x458]
    cmp r0, #3
    beq @L_0211cab8
    cmp r0, #4
    beq @L_0211caf0
    b @L_0211cb24
@L_0211cab8:
    add r0, r5, #0x3fc
    bl CPSi_md5_init
    ldr r1, [r5, #0x460]
    ldr r2, [r5, #0x464]
    add r0, r5, #0x3fc
    sub r2, r2, r1
    bl CPSi_md5_calc
    add r1, r5, #0x68
    add r0, r5, #0x3fc
    add r1, r1, #0x400
    bl CPSi_md5_result
    mov r0, #0x10
@L_0211cae8:
    str r0, [r5, #0x47c]
    b @L_0211cb2c
@L_0211caf0:
    add r0, r5, #0x348
    bl CPSi_sha1_init
    ldr r1, [r5, #0x460]
    ldr r2, [r5, #0x464]
    add r0, r5, #0x348
    sub r2, r2, r1
    bl CPSi_sha1_calc
    add r1, r5, #0x68
    add r0, r5, #0x348
    add r1, r1, #0x400
    bl CPSi_sha1_result
    mov r0, #0x14
    b @L_0211cae8
@L_0211cb24:
    orr r0, r4, #3
    ldmia sp!, {r3, r4, r5, pc}
@L_0211cb2c:
    mov r0, r5
    add r1, r5, #0x5b0
    bl get_rootCA
    movs r1, r0
    orreq r0, r4, #1
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r0, r5
    bl validate_signature
    orr r0, r4, r0
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 chars_till_end(u8 *arg0)
{
    s32 r1;
    s32 r2;
    r2 = (s32)arg0;
    while ((*(s8 *)(arg0) != 0x2E && *(s8 *)(arg0) != 0)) {
        arg0 = (u8 *)(arg0 + 1);
    }
    return (s32)(arg0 - r2);
}

extern "C" asm void compare_fqdn(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, r1
    b @L_0211cb98
@L_0211cb8c:
    cmp r1, #0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
@L_0211cb98:
    ldrsb r0, [r5], #1
    ldrsb r1, [r6], #1
    cmp r1, r0
    beq @L_0211cb8c
    cmp r0, #0x2a
    movne r0, #1
    ldmneia sp!, {r4, r5, r6, pc}
    sub r6, r6, #1
    mov r0, r6
    bl chars_till_end
    mov r4, r0
    mov r0, r5
    bl chars_till_end
    cmp r0, r4
    movgt r0, #1
    ldmgtia sp!, {r4, r5, r6, pc}
    sub r0, r4, r0
    add r6, r6, r0
    b @L_0211cb98
    dcd 0xe8bd8070
}

extern "C" asm void rcv_certificate(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x18
    ldr r4, [sp, #0x44]
    mov r10, r0
    ldrb r3, [r4, #2]
    ldrb r2, [r4]
    ldrb r1, [r4, #1]
    add r0, r4, #3
    mvn r5, #0
    str r0, [sp, #0x44]
    add r1, r1, r2, lsl #8
    add r0, sp, #8
    str r5, [r10, #0x45c]
    add r8, r3, r1, lsl #8
    bl RTC_GetDate
    mov r6, #0
    ldr r1, [sp, #8]
    ldr r0, [sp, #0xc]
    ldr r2, [sp, #0x10]
    add r1, r1, #0x7d0
    mov r0, r0, lsl #8
    add r0, r0, r1, lsl #16
    add r0, r2, r0
    mov r9, r6
    str r0, [r10, #0x80c]
    strb r6, [r10, #0x6b0]
    str r6, [r10, #0x5a0]
    str r6, [r10, #0x594]
    mov r11, #2
    mov r4, r6
@L_0211cc64:
    ldr r1, [sp, #0x44]
    mov r0, r10
    ldrb r2, [r1, #2]
    ldrb r12, [r1]
    ldrb r3, [r1, #1]
    add r7, r1, #3
    add r1, sp, #0x44
    str r7, [sp, #0x44]
    add r3, r3, r12, lsl #8
    add r3, r2, r3, lsl #8
    add r2, r3, #3
    sub r8, r8, r2
    str r5, [r10, #0x458]
    strb r4, [r10, #0x5ad]
    strb r4, [r10, #0x5ac]
    strb r4, [r10, #0x5af]
    strb r4, [r10, #0x6b0]
    strb r4, [r10, #0x5b0]
    strb r4, [r10, #0x7b0]
    ldr r7, [sp, #0x44]
    mov r2, r4
    str r3, [r10, #0x808]
    str r7, [r10, #0x804]
    mov r3, r4
    str r6, [sp]
    bl cert_item
    cmp r0, #0
    bne @L_0211ccec
    ldr r0, [r10, #0x594]
    cmp r0, #0x33
    blo @L_0211ccec
    ldr r0, [r10, #0x5a0]
    cmp r0, #0
    bne @L_0211cd04
@L_0211ccec:
    mov r0, #9
    add sp, sp, #0x18
    strb r0, [r10, #0x455]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
@L_0211cd04:
    mov r0, r10
    bl auth_cert
    mov r7, r0
    cmp r9, #0
    bne @L_0211cd34
    ldr r0, [r10, #0x800]
    cmp r0, #0
    beq @L_0211cd34
    add r1, r10, #0x7b0
    bl compare_fqdn
    cmp r0, #0
    orrne r7, r7, #0x4000
@L_0211cd34:
    and r6, r7, #0xff
    cmp r6, #1
    bne @L_0211cda4
    cmp r8, #0
    beq @L_0211cda4
    ldr r1, [sp, #0x44]
    mov r2, #0
    add r1, r1, #3
    str r1, [sp, #4]
    mov r1, #0
    strb r1, [r10, #0x5ad]
    mov r0, r10
    add r1, sp, #4
    mov r3, r2
    str r11, [sp]
    bl cert_item
    cmp r0, #0
    movne r0, #9
    addne sp, sp, #0x18
    strneb r0, [r10, #0x455]
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    addne sp, sp, #0x10
    bxne lr
    mov r0, r10
    add r1, r10, #0x480
    bl validate_signature
    bic r1, r7, #0xff
    orr r7, r1, r0
@L_0211cda4:
    ldr r3, [r10, #0x810]
    cmp r3, #0
    beq @L_0211cdc4
    mov r0, r7
    mov r1, r10
    mov r2, r9
    blx r3
    mov r7, r0
@L_0211cdc4:
    cmp r6, #0
    add r9, r9, #1
    beq @L_0211cde4
    cmp r7, #0
    bne @L_0211cde4
    cmp r8, #0
    movne r6, #1
    bne @L_0211cc64
@L_0211cde4:
    cmp r7, #0
    moveq r0, #3
    streqb r0, [r10, #0x455]
    movne r0, #9
    strneb r0, [r10, #0x455]
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
}

extern "C" asm void rcv_server_hello(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r7, #0x20
    mov r6, r0
    mov r5, r1
    mov r2, r7
    add r0, r5, #2
    add r1, r6, #0x54
    bl MI_CpuCopy8
    ldrb r8, [r6, #0x30]
    ldrb r4, [r5, #0x22]
    add r5, r5, #0x23
    cmp r8, #0
    beq @L_0211ce64
    cmp r4, #0x20
    bne @L_0211ce64
    mov r1, r5
    mov r2, r7
    add r0, r6, #0x74
    bl memcmp
    cmp r0, #0
    moveq r0, #1
    streqb r0, [r6, #0x31]
    beq @L_0211cea0
@L_0211ce64:
    cmp r8, #0
    beq @L_0211ce74
    mov r0, r6
    bl purge_session
@L_0211ce74:
    cmp r4, #0
    moveq r0, #0
    beq @L_0211ce94
    mov r0, r5
    add r1, r6, #0x74
    mov r2, #0x20
    bl MI_CpuCopy8
    mov r0, #1
@L_0211ce94:
    strb r0, [r6, #0x30]
    mov r0, #0
    strb r0, [r6, #0x31]
@L_0211cea0:
    add r0, r5, r4
    ldrb r1, [r5, r4]
    ldrb r0, [r0, #1]
    add r0, r0, r1, lsl #8
    strh r0, [r6, #0x32]
    ldrh r0, [r6, #0x32]
    cmp r0, #4
    cmpne r0, #5
    movne r0, #9
    strneb r0, [r6, #0x455]
    moveq r0, #2
    streqb r0, [r6, #0x455]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm s32 has_method(...)
{
    stmdb sp!, {r4, lr}
    cmp r1, #0
    mov r4, #0
    ble @L_0211cf18
@L_0211cee4:
    ldrb lr, [r0]
    ldrb r12, [r0, #1]
    cmp r2, #3
    add lr, r12, lr, lsl #8
    ldreqb r12, [r0, #2]
    addeq lr, r12, lr, lsl #8
    cmp lr, r3
    moveq r0, #1
    ldmeqia sp!, {r4, pc}
    add r4, r4, #1
    cmp r4, r1
    add r0, r0, r2
    blt @L_0211cee4
@L_0211cf18:
    mov r0, #0
    ldmia sp!, {r4, pc}
}

extern "C" s32 select_method(s32 arg0, s32 arg1, s32 arg2)
{
    s32 r4;
    s32 r5;
    s32 r6;
    s32 r7;
    s32 r8;
    s32 v0;
    u16 t0;
    r5 = 0;
    do {
        t0 = *(u16 *)(data_ov014_02125e98 + (r5 << 1));
        v0 = has_method(arg0, arg1, arg2, t0);
        r6 = arg2;
        r7 = arg1;
        r8 = arg0;
        if (v0 != 0) {
            return *(u16 *)(data_ov014_02125e98 + (r5 << 1));
        } else {
            r4 = (s32)data_ov014_02125e98;
            r5 = (r5 + 1);
            r6 = arg2;
            r7 = arg1;
            r8 = arg0;
        }
    } while ((u32)r5 < (u32)2);
    return 0;
}

extern "C" s32 version_ok(s32 arg0)
{
    return (arg0 == 3 ? 1 : 0);
}

extern "C" asm void client_hello_v2(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r1
    mov r7, r0
    ldrb r0, [r6]
    ldrb r1, [r6, #1]
    bl version_ok
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrb r2, [r6, #2]
    ldrb r1, [r6, #3]
    ldr r3, =0x55555556
    add r0, r6, #8
    add r4, r1, r2, lsl #8
    smull r2, r1, r3, r4
    add r1, r1, r4, lsr #31
    mov r2, #3
    bl select_method
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x10
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    strh r0, [r7, #0x32]
    ldrb r5, [r6, #4]
    ldrb r3, [r6, #5]
    ldrb r2, [r6, #6]
    ldrb r0, [r6, #7]
    mov r1, #0
    add r3, r3, r5, lsl #8
    add r5, r0, r2, lsl #8
    add r0, r4, #8
    strb r1, [r7, #0x30]
    cmp r5, #0x20
    add r4, r0, r3
    blt @L_0211d01c
    add r0, r6, r4
    add r1, r7, #0x34
    mov r2, #0x20
    b @L_0211d038
@L_0211d01c:
    add r0, r7, #0x34
    rsb r2, r5, #0x20
    bl MI_CpuFill8
    add r1, r7, #0x54
    mov r2, r5
    add r0, r6, r4
    sub r1, r1, r5
@L_0211d038:
    bl MI_CpuCopy8
    mov r0, #1
    strb r0, [r7, #0x455]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" void client_hello(s32 arg0, u8 *arg1)
{
    u8 *r4;
    s32 r5;
    s32 r6;
    u8 *r7;
    s32 v0;
    s32 v4;
    u8 t0;
    u8 t1;
    s32 t2;
    u8 t3;
    t0 = *(u8 *)(arg1);
    t1 = *(u8 *)(arg1 + 0x1);
    v0 = ((s32 (*)(...))version_ok)(t0, t1);
    if (v0 == 0)
        return;
    r5 = 0x20;
    MI_CpuCopy8((s32)(arg1 + 2), (arg0 + 0x34), 0x20);
    r4 = (u8 *)arg0;
    r6 = *(u8 *)(arg1 + 0x22);
    r7 = (u8 *)(arg1 + 0x23);
    if (r6 != 0x20) {
        *(u8 *)(r4 + 0x30) = 0;
    } else {
        MI_CpuCopy8((s32)r7, (s32)(r4 + 0x74), r5);
        find_session_from_id(r4);
    }
    t2 = ((*(u8 *)(((u8 *)(r7 + r6)) + 0x1) + (*(u8 *)(r7 + r6) << 8)) / 2);
    t3 = *(u8 *)(r7 + r6);
    v4 = ((s32 (*)(...))select_method)((s32)((r7 + r6) + 2), t2, 2, t3);
    *(u16 *)(r4 + 0x32) = ((u16)v4);
    if (((u16)v4) != 0) {
        *(u8 *)(r4 + 0x455) = 1;
    }
    return;
}

extern "C" asm s32 decrypt_premaster_secret(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x18
    movs r10, r2
    str r0, [sp, #8]
    ldrne r0, [r10]
    mov r11, r1
    cmpne r0, #0
    addeq sp, sp, #0x18
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r0, lsl #1
    add r0, r0, r0, lsr #31
    mov r0, r0, asr #1
    add r4, r0, #1
    mov r0, #0x14
    mul r0, r4, r0
    ldr r1, =CPSiAlloc
    ldr r1, [r1]
    blx r1
    movs r5, r0
    addeq sp, sp, #0x18
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r6, r5, r4, lsl #1
    add r7, r6, r4, lsl #1
    add r1, r7, r4, lsl #1
    str r1, [sp, #0x10]
    add r1, r1, r4, lsl #1
    add r8, r1, r4, lsl #1
    str r1, [sp, #0xc]
    ldr r2, [r10]
    add r9, r8, r4, lsl #1
    mov r1, r11
    mov r3, r4
    add r11, r9, r4, lsl #1
    bl CPSi_big_from_char
    ldr r1, [r10, #0x1c]
    ldr r2, [r10, #0x18]
    mov r0, r6
    mov r3, r4
    bl CPSi_big_from_char
    ldr r1, [r10, #0xc]
    ldr r2, [r10, #8]
    mov r0, r8
    mov r3, r4
    bl CPSi_big_from_char
    bl enter_computebound
    str r0, [sp, #0x14]
    ldr r0, [sp, #0x10]
    str r8, [sp]
    mov r1, r5
    mov r2, r6
    mov r3, r4
    bl CPSi_big_montpower
    ldr r1, [r10, #0x24]
    ldr r2, [r10, #0x20]
    mov r0, r6
    mov r3, r4
    bl CPSi_big_from_char
    ldr r1, [r10, #0x14]
    ldr r2, [r10, #0x10]
    mov r0, r8
    mov r3, r4
    bl CPSi_big_from_char
    ldr r0, [sp, #0xc]
    mov r1, r5
    mov r2, r6
    mov r3, r4
    str r8, [sp]
    bl CPSi_big_montpower
    ldr r0, [sp, #0x14]
    bl exit_computebound
    ldr r1, [sp, #0x10]
    ldr r2, [sp, #0xc]
    mov r0, r5
    mov r3, r4
    bl CPSi_big_sub
    ldr r1, [r10, #0x2c]
    ldr r2, [r10, #0x28]
    mov r0, r6
    mov r3, r4
    bl CPSi_big_from_char
    mov r0, r7
    mov r1, r5
    mov r2, r6
    mov r3, r4
    bl CPSi_big_mult
    ldr r1, [r10, #0x14]
    ldr r2, [r10, #0x10]
    mov r0, r6
    mov r3, r4
    bl CPSi_big_from_char
    mov r0, r5
    mov r1, r7
    mov r2, r6
    mov r3, r4
    bl CPSi_big_mult
    ldr r2, [sp, #0xc]
    mov r0, r7
    mov r1, r5
    mov r3, r4
    bl CPSi_big_add
    ldr r1, [r10, #4]
    ldr r2, [r10]
    mov r0, r6
    mov r3, r4
    bl CPSi_big_from_char
    mov r0, r7
    mov r1, r4
    bl CPSi_big_sign
    cmp r0, #0
    bge @L_0211d2e0
    mov r0, r7
    mov r1, r4
    bl CPSi_big_negate
    mov r1, r7
    mov r2, r6
    mov r3, r9
    mov r0, #0
    stmia sp, {r4, r11}
    bl CPSi_big_div
    mov r0, r9
    mov r1, r6
    mov r2, r9
    mov r3, r4
    bl CPSi_big_sub
    b @L_0211d2f8
@L_0211d2e0:
    mov r1, r7
    mov r2, r6
    mov r3, r9
    mov r0, #0
    stmia sp, {r4, r11}
    bl CPSi_big_div
@L_0211d2f8:
    ldr r0, [sp, #8]
    mov r1, r9
    mov r3, r4
    mov r2, #0x30
    bl CPSi_char_from_big
    ldr r1, =CPSiFree
    mov r0, r5
    ldr r1, [r1]
    blx r1
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void create_ms_sub(s32 arg0, s32 arg1, u8 *arg2)
{
    u8 b[0x14];
    s32 n;
    ((s32 (*)(...))CPSi_sha1_init)(arg2 + 0x348);
    ((s32 (*)(...))CPSi_sha1_calc)(arg2 + 0x348, arg1, ((s32 (*)(...))strlen)(arg1));
    n = 0x30;
    ((s32 (*)(...))CPSi_sha1_calc)(arg2 + 0x348, arg2, n);
    ((s32 (*)(...))CPSi_sha1_calc)(arg2 + 0x348, arg2 + 0x34, 0x40);
    ((s32 (*)(...))CPSi_sha1_result)(arg2 + 0x348, b);
    ((s32 (*)(...))CPSi_md5_init)(arg2 + 0x3FC);
    ((s32 (*)(...))CPSi_md5_calc)(arg2 + 0x3FC, arg2, n);
    ((s32 (*)(...))CPSi_md5_calc)(arg2 + 0x3FC, b, 0x14);
    ((s32 (*)(...))CPSi_md5_result)(arg2 + 0x3FC, arg0);
}

extern "C" asm s32 create_master_secret(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x30
    mov r5, r0
    add r4, sp, #0
    ldr r1, =data_ov014_02125ee4
    mov r0, r4
    mov r2, r5
    bl create_ms_sub
    ldr r1, =data_ov014_02125ee8
    add r0, sp, #0x10
    mov r2, r5
    bl create_ms_sub
    ldr r1, =data_ov014_02125eec
    add r0, sp, #0x20
    mov r2, r5
    bl create_ms_sub
    mov r0, r4
    mov r1, r5
    mov r2, #0x30
    bl MI_CpuCopy8
    add sp, sp, #0x30
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm s32 create_key_block(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x20
    mov r10, r0
    ldrh r0, [r10, #0x32]
    cmp r0, #4
    beq @L_0211d468
    cmp r0, #5
    moveq r0, #0x14
    streq r0, [sp, #4]
    moveq r0, #0x10
    streq r0, [sp]
    moveq r2, #0
    b @L_0211d478
@L_0211d468:
    mov r0, #0x10
    str r0, [sp, #4]
    str r0, [sp]
    mov r2, #0
@L_0211d478:
    ldr r1, [sp, #4]
    ldr r0, [sp]
    mov r7, #0
    add r0, r1, r0
    add r0, r2, r0
    mov r9, r0, lsl #1
    cmp r9, #0
    ble @L_0211d55c
    add r11, r10, #0x74
    add r5, sp, #8
    mov r4, #1
@L_0211d4a4:
    add r0, r10, #0x348
    bl CPSi_sha1_init
    add r0, r7, #0x41
    add r6, r7, #1
    strb r0, [sp, #8]
    cmp r6, #0
    mov r8, #0
    ble @L_0211d4e0
@L_0211d4c4:
    add r0, r10, #0x348
    mov r1, r5
    mov r2, r4
    bl CPSi_sha1_calc
    add r8, r8, #1
    cmp r8, r6
    blt @L_0211d4c4
@L_0211d4e0:
    mov r1, r10
    add r0, r10, #0x348
    mov r2, #0x30
    bl CPSi_sha1_calc
    add r0, r10, #0x348
    add r1, r10, #0x54
    mov r2, #0x20
    bl CPSi_sha1_calc
    add r0, r10, #0x348
    add r1, r10, #0x34
    mov r2, #0x20
    bl CPSi_sha1_calc
    add r0, r10, #0x348
    add r1, sp, #9
    bl CPSi_sha1_result
    add r0, r10, #0x3fc
    bl CPSi_md5_init
    add r0, r10, #0x3fc
    mov r1, r10
    mov r2, #0x30
    bl CPSi_md5_calc
    add r0, r10, #0x3fc
    add r1, sp, #9
    mov r2, #0x14
    bl CPSi_md5_calc
    add r0, r10, #0x3fc
    add r1, r11, r7, lsl #4
    bl CPSi_md5_result
    add r7, r7, #1
    cmp r9, r7, lsl #4
    bgt @L_0211d4a4
@L_0211d55c:
    ldrb r0, [r10, #0x454]
    add r4, r10, #0x74
    cmp r0, #0
    beq @L_0211d598
    ldr r0, [sp, #4]
    str r4, [r10, #0x1d4]
    add r2, r4, r0
    add r3, r4, r0, lsl #1
    add r1, r2, r0
    ldr r0, [sp]
    str r3, [r10, #0x1d8]
    add r0, r1, r0
    str r2, [r10, #0xbc]
    str r0, [r10, #0xc0]
    b @L_0211d5c0
@L_0211d598:
    ldr r0, [sp, #4]
    str r4, [r10, #0xbc]
    add r2, r4, r0
    add r3, r4, r0, lsl #1
    add r1, r2, r0
    ldr r0, [sp]
    str r3, [r10, #0xc0]
    add r0, r1, r0
    str r2, [r10, #0x1d4]
    str r0, [r10, #0x1d8]
@L_0211d5c0:
    mov r4, #0x10
    ldr r1, [r10, #0x1d8]
    mov r2, r4
    add r0, r10, #0x1e0
    bl CPSi_rc4_init
    ldr r1, [r10, #0xc0]
    mov r2, r4
    add r0, r10, #0xc8
    bl CPSi_rc4_init
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 rcv_client_key_exchange(u8 *arg0, s32 arg1)
{
    s32 t0 = *(s32 *)(arg0 + 0x81C);
    decrypt_premaster_secret((s32)arg0, arg1, t0);
    create_master_secret((s32)arg0);
    cache_session((s32)arg0, 0, 0);
    create_key_block((s32)arg0);
    *(u8 *)(arg0 + 0x455) = 5;
    return 5;
}

extern "C" asm s32 finished_md5(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x30
    mov r7, r0
    ldrb r0, [r7, #0x454]
    mov r6, r1
    teq r0, r2
    mov r2, #4
    beq @L_0211d650
    ldr r1, =data_ov014_02125ef0
    b @L_0211d654
@L_0211d650:
    ldr r1, =data_ov014_02125ef8
@L_0211d654:
    add r0, r7, #0x3a4
    bl CPSi_md5_calc
    mov r5, #0x30
    mov r1, r7
    mov r2, r5
    add r0, r7, #0x3a4
    bl CPSi_md5_calc
    add r4, sp, #0
    mov r2, r5
    mov r0, r4
    mov r1, #0x36
    bl MI_CpuFill8
    mov r1, r4
    mov r2, r5
    add r0, r7, #0x3a4
    bl CPSi_md5_calc
    mov r1, r6
    add r0, r7, #0x3a4
    bl CPSi_md5_result
    add r0, r7, #0x3a4
    bl CPSi_md5_init
    add r0, r7, #0x3a4
    mov r1, r7
    mov r2, r5
    bl CPSi_md5_calc
    mov r0, r4
    mov r1, #0x5c
    mov r2, r5
    bl MI_CpuFill8
    mov r1, r4
    mov r2, r5
    add r0, r7, #0x3a4
    bl CPSi_md5_calc
    add r0, r7, #0x3a4
    mov r1, r6
    mov r2, #0x10
    bl CPSi_md5_calc
    add r0, r7, #0x3a4
    mov r1, r6
    bl CPSi_md5_result
    add sp, sp, #0x30
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm s32 finished_sha1(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x28
    mov r8, r0
    ldrb r0, [r8, #0x454]
    mov r7, r1
    teq r0, r2
    mov r2, #4
    beq @L_0211d72c
    ldr r1, =data_ov014_02125ef0
    b @L_0211d730
@L_0211d72c:
    ldr r1, =data_ov014_02125ef8
@L_0211d730:
    add r0, r8, #0x2ec
    bl CPSi_sha1_calc
    mov r6, #0x30
    mov r1, r8
    mov r2, r6
    add r0, r8, #0x2ec
    bl CPSi_sha1_calc
    add r5, sp, #0
    mov r4, #0x28
    mov r0, r5
    mov r2, r4
    mov r1, #0x36
    bl MI_CpuFill8
    mov r1, r5
    mov r2, r4
    add r0, r8, #0x2ec
    bl CPSi_sha1_calc
    add r0, r8, #0x2ec
    mov r1, r7
    bl CPSi_sha1_result
    add r0, r8, #0x2ec
    bl CPSi_sha1_init
    mov r2, r6
    add r0, r8, #0x2ec
    mov r1, r8
    bl CPSi_sha1_calc
    mov r0, r5
    mov r1, #0x5c
    mov r2, r4
    bl MI_CpuFill8
    mov r1, r5
    mov r2, r4
    add r0, r8, #0x2ec
    bl CPSi_sha1_calc
    add r0, r8, #0x2ec
    mov r1, r7
    mov r2, #0x14
    bl CPSi_sha1_calc
    add r0, r8, #0x2ec
    mov r1, r7
    bl CPSi_sha1_result
    add sp, sp, #0x28
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" void rcv_finished(u8 *arg0, s32 arg1)
{
    s32 local[5];
    s32 r6;
    s32 r7;
    s32 r8;
    s32 v3;
    s32 v7;
    MI_CpuCopy8((s32)(arg0 + 0x3A4), (s32)(arg0 + 0x3FC), 0x58);
    finished_md5((s32)arg0, (s32)((u8 *)local), 1);
    MI_CpuCopy8((s32)(arg0 + 0x3FC), (s32)(arg0 + 0x3A4), 0x58);
    v3 = memcmp(arg1, (s32)((u8 *)local), 0x10);
    r6 = 1;
    r7 = (s32)((u8 *)local);
    r8 = arg1;
    if (v3 != 0) {
        *(u8 *)(arg0 + 0x455) = 9;
        return;
    } else {
        MI_CpuCopy8((s32)(arg0 + 0x2EC), (s32)(arg0 + 0x348), 0x5C);
        finished_sha1((s32)arg0, r7, 1);
        MI_CpuCopy8((s32)(arg0 + 0x348), (s32)(arg0 + 0x2EC), 0x5C);
        v7 = memcmp((arg1 + 0x10), r7, 0x14);
        if (v7 != 0) {
            *(u8 *)(arg0 + 0x455) = 9;
        } else {
            *(u8 *)(arg0 + 0x455) = 6;
        }
        return;
    }
}

extern "C" asm s32 add1_be8(...)
{
    mov r2, #8
@L_0211d8b8:
    ldrb r1, [r0, #-1]!
    add r1, r1, #1
    ands r1, r1, #0xff
    strb r1, [r0]
    bxne lr
    subs r2, r2, #1
    bne @L_0211d8b8
    bx lr
}

extern "C" s32 decrypt(s32 arg0, s32 arg1, s32 arg2)
{
    CPSi_rc4_crypt((arg0 + 0x1E0), arg1, arg2);
    return arg2;
}

extern "C" asm void make_plaintext(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x44
    mov r6, r1
    ldrb r3, [r6, #3]
    ldrb r2, [r6, #4]
    mov r7, r0
    add r1, r6, #5
    add r2, r2, r3, lsl #8
    bl decrypt
    ldrh r1, [r7, #0x32]
    mov r4, r0
    cmp r1, #4
    beq @L_0211d930
    cmp r1, #5
    beq @L_0211da1c
    b @L_0211db04
@L_0211d930:
    sub r4, r4, #0x10
    mov r0, r4, asr #8
    strb r0, [r6, #3]
    strb r4, [r6, #4]
    add r0, r7, #0x3fc
    bl CPSi_md5_init
    mov r5, #0x10
    ldr r1, [r7, #0x1d4]
    mov r2, r5
    add r0, r7, #0x3fc
    bl CPSi_md5_calc
    add r10, sp, #0
    mov r9, #0x30
    mov r0, r10
    mov r1, #0x36
    mov r2, r9
    bl MI_CpuFill8
    add r0, r7, #0x3fc
    mov r1, r10
    mov r2, r9
    bl CPSi_md5_calc
    add r0, r7, #0x3fc
    add r1, r7, #0x2e4
    mov r2, #8
    bl CPSi_md5_calc
    add r0, r7, #0x3fc
    mov r1, r6
    mov r2, #1
    bl CPSi_md5_calc
    add r0, r7, #0x3fc
    add r1, r6, #3
    add r2, r4, #2
    bl CPSi_md5_calc
    add r8, sp, #0x30
    add r0, r7, #0x3fc
    mov r1, r8
    bl CPSi_md5_result
    add r0, r7, #0x3fc
    bl CPSi_md5_init
    ldr r1, [r7, #0x1d4]
    add r0, r7, #0x3fc
    mov r2, r5
    bl CPSi_md5_calc
    mov r0, r10
    mov r1, #0x5c
    mov r2, r9
    bl MI_CpuFill8
    mov r1, r10
    mov r2, r9
    add r0, r7, #0x3fc
    bl CPSi_md5_calc
    add r0, r7, #0x3fc
    mov r1, r8
    mov r2, r5
    bl CPSi_md5_calc
    mov r1, r8
    add r0, r7, #0x3fc
    bl CPSi_md5_result
    b @L_0211db04
@L_0211da1c:
    sub r4, r4, #0x14
    mov r0, r4, asr #8
    strb r0, [r6, #3]
    strb r4, [r6, #4]
    add r0, r7, #0x348
    bl CPSi_sha1_init
    mov r5, #0x14
    ldr r1, [r7, #0x1d4]
    mov r2, r5
    add r0, r7, #0x348
    bl CPSi_sha1_calc
    add r10, sp, #0
    mov r9, #0x28
    mov r0, r10
    mov r1, #0x36
    mov r2, r9
    bl MI_CpuFill8
    add r0, r7, #0x348
    mov r1, r10
    mov r2, r9
    bl CPSi_sha1_calc
    add r0, r7, #0x348
    add r1, r7, #0x2e4
    mov r2, #8
    bl CPSi_sha1_calc
    add r0, r7, #0x348
    mov r1, r6
    mov r2, #1
    bl CPSi_sha1_calc
    add r0, r7, #0x348
    add r1, r6, #3
    add r2, r4, #2
    bl CPSi_sha1_calc
    add r8, sp, #0x30
    add r0, r7, #0x348
    mov r1, r8
    bl CPSi_sha1_result
    add r0, r7, #0x348
    bl CPSi_sha1_init
    ldr r1, [r7, #0x1d4]
    add r0, r7, #0x348
    mov r2, r5
    bl CPSi_sha1_calc
    mov r0, r10
    mov r1, #0x5c
    mov r2, r9
    bl MI_CpuFill8
    mov r1, r10
    mov r2, r9
    add r0, r7, #0x348
    bl CPSi_sha1_calc
    add r0, r7, #0x348
    mov r1, r8
    mov r2, r5
    bl CPSi_sha1_calc
    mov r1, r8
    add r0, r7, #0x348
    bl CPSi_sha1_result
@L_0211db04:
    add r0, r6, #5
    add r1, sp, #0x30
    mov r2, r5
    add r0, r0, r4
    bl memcmp
    cmp r0, #0
    movne r0, #9
    strneb r0, [r7, #0x455]
    add r0, r7, #0x2ec
    bl add1_be8
    add r0, r4, #5
    add sp, sp, #0x44
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" s32 make_ciphertext(u8 *arg0, u8 *arg1)
{
    s32 local[12];
    s32 r2;
    s32 r4;
    s32 r5;
    u8 *r6;
    u8 *r7;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    r6 = arg1;
    r7 = arg0;
    arg0 = (u8 *)*(u16 *)(arg0 + 0x32);
    r2 = *(u8 *)(arg1 + 0x3);
    r4 = (s32)(arg1 + 5);
    r5 = (*(u8 *)(arg1 + 0x4) + (*(u8 *)(arg1 + 0x3) << 8));
    arg1 = (u8 *)*(u8 *)(arg1 + 0x4);
    switch ((s32)arg0) {
        case 4:
            CPSi_md5_init((s32)(r7 + 0x3FC), (s32)arg1, r2);
            t0 = *(s32 *)(r7 + 0xBC);
            CPSi_md5_calc((s32)(r7 + 0x3FC), t0, 0x10);
            MI_CpuFill8((s32)((u8 *)local), 0x36, 0x30);
            CPSi_md5_calc((s32)(r7 + 0x3FC), (s32)((u8 *)local), 0x30);
            CPSi_md5_calc((s32)(r7 + 0x3FC), (s32)(r7 + 0x1CC), 8);
            CPSi_md5_calc((s32)(r7 + 0x3FC), (s32)r6, 1);
            CPSi_md5_calc((s32)(r7 + 0x3FC), (s32)(r6 + 3), (r5 + 2));
            CPSi_md5_result((s32)(r7 + 0x3FC), (r4 + r5));
            CPSi_md5_init((s32)(r7 + 0x3FC));
            t1 = *(s32 *)(r7 + 0xBC);
            CPSi_md5_calc((s32)(r7 + 0x3FC), t1, 0x10);
            MI_CpuFill8((s32)((u8 *)local), 0x5C, 0x30);
            CPSi_md5_calc((s32)(r7 + 0x3FC), (s32)((u8 *)local), 0x30);
            CPSi_md5_calc((s32)(r7 + 0x3FC), (r4 + r5), 0x10);
            CPSi_md5_result((s32)(r7 + 0x3FC), (r4 + r5));
            r5 = (r5 + 0x10);
            break;
        case 5:
            CPSi_sha1_init((s32)(r7 + 0x348), (s32)arg1, r2);
            t2 = *(s32 *)(r7 + 0xBC);
            CPSi_sha1_calc((s32)(r7 + 0x348), t2, 0x14);
            MI_CpuFill8((s32)((u8 *)local), 0x36, 0x28);
            CPSi_sha1_calc((s32)(r7 + 0x348), (s32)((u8 *)local), 0x28);
            CPSi_sha1_calc((s32)(r7 + 0x348), (s32)(r7 + 0x1CC), 8);
            CPSi_sha1_calc((s32)(r7 + 0x348), (s32)r6, 1);
            CPSi_sha1_calc((s32)(r7 + 0x348), (s32)(r6 + 3), (r5 + 2));
            CPSi_sha1_result((s32)(r7 + 0x348), (r4 + r5));
            CPSi_sha1_init((s32)(r7 + 0x348));
            t3 = *(s32 *)(r7 + 0xBC);
            CPSi_sha1_calc((s32)(r7 + 0x348), t3, 0x14);
            MI_CpuFill8((s32)((u8 *)local), 0x5C, 0x28);
            CPSi_sha1_calc((s32)(r7 + 0x348), (s32)((u8 *)local), 0x28);
            CPSi_sha1_calc((s32)(r7 + 0x348), (r4 + r5), 0x14);
            CPSi_sha1_result((s32)(r7 + 0x348), (r4 + r5));
            r5 = (r5 + 0x14);
            break;
    }
    *(u8 *)(r6 + 0x3) = (r5 >> 8);
    *(u8 *)(r6 + 0x4) = r5;
    CPSi_rc4_crypt((s32)(r7 + 0xC8), (s32)(r6 + 5), r5, (r5 >> 8));
    add1_be8((s32)(r7 + 0x1D4));
    return (r5 + 5);
}

extern "C" s32 tcp_read_raw_nbytes(u8 *arg0, s32 arg1, s32 arg2)
{
    u32 n;
    do {
        void *s = (void *)((s32 (*)(...))CPSi_TcpReadRaw)(&n, arg2);
        if (n == 0)
            return -1;
        if (n > arg1)
            n = arg1;
        ((s32 (*)(...))MI_CpuCopy8)(s, arg0, n);
        ((s32 (*)(...))CPSi_SocConsumeRaw)(n, arg2);
        arg1 -= n;
        arg0 += n;
    } while (arg1 > 0);
    return 0;
}

extern "C" void update_digest(s32 arg0, s32 arg1, s32 arg2)
{
    CPSi_sha1_calc((arg0 + 0x2EC), arg1, arg2);
    CPSi_md5_calc((arg0 + 0x3A4), arg1, arg2);
}

extern "C" asm void parse_record_in_buf(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r9, r0
    ldrb r2, [r9, #0x455]
    mov r10, r1
    mov r4, #9
    cmp r2, #9
    bne @L_0211de1c
    ldr r1, [pc, #0x2f0]
    mov r0, r10
    ldr r1, [r1]
    blx r1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0211de1c:
    ldrb r3, [r10, #3]
    ldrb r1, [r10, #4]
    ldr r0, [r9, #0x1d4]
    ldrb r5, [r10]
    add r1, r1, r3, lsl #8
    cmp r0, #0
    add r6, r1, #5
    beq @L_0211de94
    add r0, r2, #0xf9
    and r0, r0, #0xff
    cmp r0, #1
    bhi @L_0211de54
    cmp r5, #0x15
    bne @L_0211de64
@L_0211de54:
    cmp r5, #0x15
    bne @L_0211de94
    cmp r6, #7
    bls @L_0211de94
@L_0211de64:
    mov r0, r9
    mov r1, r10
    bl make_plaintext
    ldrb r2, [r9, #0x455]
    mov r6, r0
    cmp r2, #9
    bne @L_0211de94
    ldr r1, [pc, #0x278]
    mov r0, r10
    ldr r1, [r1]
    blx r1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0211de94:
    sub r0, r5, #0x14
    cmp r0, #3
    add r5, r10, #5
    sub r6, r6, #5
    addls pc, pc, r0, lsl #2
    b @L_0211e0e8
    dcd 0xea000002
    dcd 0xea00000c
    dcd 0xea000011
    dcd 0xea00007f
    dcd 0xe59901d4
    dcd 0xe3500000
    dcd 0x05c94455
    dcd 0x0a000087
    dcd 0xe2890fb9
    dcd 0xe3a01000
    dcd 0xe3a02008
    dcd 0xebfbad03
    dcd 0xe3a00007
    dcd 0xe5c90455
    dcd 0xea000080
    dcd 0xe3560002
    dcd 0x1a000002
    dcd 0xe5d50000
    dcd 0xe3500002
    dcd 0x1a00007b
    dcd 0xea000079
    dcd 0xe3560004
    dcd 0x35c94455
    dcd 0x3a000077
    dcd 0xe3a0b000
@L_0211df10:
    ldrb r3, [r5, #1]
    ldrb r7, [r5, #2]
    ldrb r1, [r5, #3]
    mov r3, r3, lsl #0x10
    add r3, r3, r7, lsl #8
    add r8, r1, r3
    ldrb r0, [r5]
    cmp r8, r6
    movhi r0, #9
    strhib r0, [r9, #0x455]
    bhi @L_0211e0ec
    cmp r0, #0xb
    add r5, r5, #4
    bgt @L_0211df70
    cmp r0, #0xb
    bge @L_0211e00c
    cmp r0, #2
    bgt @L_0211e078
    cmp r0, #1
    blt @L_0211e078
    beq @L_0211dfa0
    cmp r0, #2
    beq @L_0211dfe8
    b @L_0211e078
@L_0211df70:
    sub r0, r0, #0xd
    cmp r0, #7
    addls pc, pc, r0, lsl #2
    b @L_0211e078
    b @L_0211e034
    b @L_0211e04c
    b @L_0211e078
    b @L_0211dfc8
    b @L_0211e078
    b @L_0211e078
    b @L_0211e078
    b @L_0211e068
@L_0211dfa0:
    ldrb r0, [r9, #0x454]
    cmp r0, #0
    beq @L_0211dfc4
    cmp r2, #0
    bne @L_0211dfc4
    mov r0, r9
    mov r1, r5
    bl client_hello
    b @L_0211e07c
@L_0211dfc4:
    b @L_0211e078
@L_0211dfc8:
    ldrb r0, [r9, #0x454]
    cmp r0, #0
    streqb r4, [r9, #0x455]
    beq @L_0211e07c
    mov r0, r9
    mov r1, r5
    bl rcv_client_key_exchange
    b @L_0211e07c
@L_0211dfe8:
    cmp r8, #0x26
    ldrgeb r0, [r9, #0x454]
    cmpge r0, #0
    strneb r4, [r9, #0x455]
    bne @L_0211e07c
    mov r0, r9
    mov r1, r5
    bl rcv_server_hello
    b @L_0211e07c
@L_0211e00c:
    cmp r2, #2
    ldreqb r0, [r9, #0x454]
    cmpeq r0, #0
    strneb r4, [r9, #0x455]
    bne @L_0211e07c
    mov r0, r9
    mov r1, r5
    bl rcv_certificate
    strb r11, [r9, #0x5ac]
    b @L_0211e07c
@L_0211e034:
    cmp r2, #3
    ldreqb r0, [r9, #0x454]
    cmpeq r0, #0
    moveq r0, #1
    streqb r0, [r9, #0x5ac]
    b @L_0211e060
@L_0211e04c:
    ldrb r0, [r9, #0x454]
    cmp r0, #0
    cmpeq r2, #3
    moveq r0, #4
    streqb r0, [r9, #0x455]
@L_0211e060:
    strneb r4, [r9, #0x455]
    b @L_0211e07c
@L_0211e068:
    mov r0, r9
    mov r1, r5
    bl rcv_finished
    b @L_0211e07c
@L_0211e078:
    strb r4, [r9, #0x455]
@L_0211e07c:
    ldrb r0, [r9, #0x455]
    cmp r0, #9
    beq @L_0211e0a4
    add r7, r8, #4
    mov r0, r9
    sub r1, r5, #4
    mov r2, r7
    bl update_digest
    add r5, r5, r8
    sub r6, r6, r7
@L_0211e0a4:
    cmp r6, #0
    beq @L_0211e0ec
    ldrb r2, [r9, #0x455]
    cmp r2, #9
    bne @L_0211df10
    b @L_0211e0ec
    dcd 0xe3520008
    dcd 0x15c94455
    dcd 0x1a000008
    dcd 0xe2861005
    dcd 0xe3a02005
    dcd 0xe3a00001
    dcd 0xe589a824
    dcd 0xe589282c
    dcd 0xe5891828
    dcd 0xe5c90456
    dcd 0xe8bd8ff8
@L_0211e0e8:
    strb r4, [r9, #0x455]
@L_0211e0ec:
    ldr r1, [pc, #0xc]
    mov r0, r10
    ldr r1, [r1]
    blx r1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    dcd CPSiFree
}
