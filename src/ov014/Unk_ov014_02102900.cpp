#include "ov014/Unk_ov014_02102900.hpp"
struct E02103ad8 { s32 a; s32 b; u32 c; };
struct P02103ad8 { u8 pad[0x70]; E02103ad8 arr[3]; };

extern "C" void _send_tcp(void);
extern "C" void reply_arp(u8 *arg0);
extern "C" void dispatch_arp(void);
extern "C" void reply_icmp(void);
extern "C" void process_icmp_reply(void);
extern "C" s32 valid_IP(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void dispatch_icmp(void);
extern "C" void check_listener(void);
extern "C" s32 check_socket(u8 *arg0, u16 *arg1, u8 *arg2);
extern "C" s32 find_socket(...);
extern "C" void parse_mss(void);
extern "C" s32 no_need_inq(void);
extern "C" s32 _tcp_send_handshake(...);
extern "C" s32 _tcp_send_ack(...);
extern "C" void _tcp_send_finack(s32 arg0);
extern "C" s32 _tcp_send_rst(...);
extern "C" s32 dt_syn_LISTEN(...);
extern "C" s32 find_specific_socket(s32 arg0, s32 arg1, u8 *arg2);
extern "C" void dt_syn(void);
extern "C" void dt_synack(void);
extern "C" void mark_rwin_chunk(P02103ad8 *arg0, s32 arg1);
extern "C" void merge_rwin_chunks(void);
extern "C" void pull_rwin_chunks(void);
extern "C" void push_rwin_chunks(void);
extern "C" void dt_ack(void);
extern "C" s32 dt_fin(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 dt_rst(void);
extern "C" void dispatch_tcp(void);
extern "C" void dispatch_udp(void);
extern "C" void check_frag(void);
extern "C" void dispatch_ip(void);
extern "C" void tcpip(void);
extern "C" s32 CPS_SocGetEport(...);
extern "C" void get_seqno(void);
extern "C" void CPS_SocRegister(s32 arg0);
extern "C" s32 CPS_SocUnRegister(void);
extern "C" s32 CPS_SocDatagramMode(void);
extern "C" void CPS_SocBind(u16 arg0, u16 arg1, s32 arg2);
extern "C" void CPS_SocUse(void);
extern "C" void CPS_SocRelease(void);
extern "C" void CPS_SocDup(u8 *arg0);
extern "C" void CPS_SetUdpCallback(s32 arg0);
extern "C" s32 CPSi_TcpConnectRaw(...);
extern "C" s32 CPS_TcpConnect(void);
extern "C" s32 CPSi_TcpShutdownRaw(...);
extern "C" s32 CPS_TcpShutdown(void);
extern "C" void CPS_TcpClose(void);
extern "C" s32 udp_read_raw(s32 arg0, u8 *arg1, s32 arg2, s32 arg3);
extern "C" s32 CPSi_TcpReadRaw(s32 arg0, s32 arg1);
extern "C" s32 CPS_SocRead(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3);
extern "C" s32 CPSi_SocConsumeRaw(...);
extern "C" void CPS_SocConsume(s32 arg0);
extern "C" s32 tcp_write_do(...);
extern "C" s32 tcp_write_do2(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
extern "C" void CPSi_TcpWrite2Raw(void);
extern "C" s32 CPSi_SocWrite2(...);
extern "C" s32 CPS_SocWrite(s32 arg0, s32 arg1);
extern "C" s32 CPS_SocGetLength(void);
extern "C" s32 CPS_SocFlush(void);
extern "C" s32 garprequest(...);
extern "C" s32 set_fixed_ip(void);
extern "C" void scavenger(void);

extern "C" char OSi_ThreadInfo[];
extern "C" char data_ov014_02126ac8[];
extern "C" char CPSMyMac[];
extern "C" char data_ov014_02126ba6[];
extern "C" char data_ov014_02126be0[];
extern "C" char data_ov014_02126c40[];
extern "C" char data_ov014_02126ce0[];
extern "C" char data_ov014_02126f00[];
extern "C" char data_ov014_02126fc0[];
extern "C" char data_ov014_02127140[];
extern "C" char data_ov014_021272c0[];
extern "C" void MI_CpuFill8(void);
extern "C" s32 OS_DisableInterrupts(...);
extern "C" void OS_GetTick(void);
extern "C" s32 OS_RestoreInterrupts(...);
extern "C" void OS_Sleep(void);
extern "C" s32 OS_SleepThread(...);
extern "C" s32 OS_WakeupThreadDirect(...);
extern "C" s32 OS_YieldThread(...);
extern "C" void OS_Terminate(void);
extern "C" void MI_CpuCopy(void);
extern "C" s32 MI_CpuMove(...);
extern "C" s32 reset_network_vars(...);
extern "C" void OS_YieldThread__(void);
extern "C" void calc_checksum_do(void);
extern "C" void invert_checksum(void);
extern "C" void calc_checksum(void);
extern "C" void check_tcpudpsum(void);
extern "C" s32 get_targetip(...);
extern "C" s32 is_broadcast(...);
extern "C" s32 is_multicast(...);
extern "C" void ip_isme(void);
extern "C" void maccmp(void);
extern "C" void send_packet(void);
extern "C" void receive_packet(void);
extern "C" void throw_packet(void);
extern "C" s32 inq_arpcache(...);
extern "C" void send_arprequest(void);
extern "C" void reg_arpcache(void);
extern "C" void send_ip(void);
extern "C" void send_ping(void);
extern "C" void send_udp(void);
extern "C" void dacktimer_reschedule(void);
extern "C" void dhcp_release_server(void);
extern "C" s32 CPSi_SslConnect(...);
extern "C" s32 CPSi_SslRead(...);
extern "C" s32 CPSi_SslConsume(...);
extern "C" s32 CPSi_SslGetLength(...);
extern "C" void CPSi_SslWrite2(void);
extern "C" s32 CPSi_SslShutdown(...);
extern "C" void CPSi_SslClose(void);
extern "C" void CPSi_SslPeriodical(void);

extern "C" void dhcp_discover_server(void);
extern "C" void dhcp_request_server(void);
extern "C" asm void _send_tcp(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    mov r11, r3
    mov r8, r2
    str r0, [sp, #8]
    tst r11, #5
    ldreqb r0, [r8, #8]
    str r1, [sp, #0xc]
    cmpeq r0, #0
    addeq sp, sp, #0x14
    moveq r0, r1
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, =OSi_ThreadInfo
    ldr r1, =data_ov014_02126f00
    ldr r0, [r0, #4]
    cmp r0, r1
    ldreq r7, =data_ov014_02126ba6
    ldrne r0, [r8, #0x58]
    addne r7, r0, #0x22
    ands r0, r11, #2
    str r0, [sp, #0x10]
    movne r4, #0x1c
    bne @L_02102b40
    tst r11, #0x10
    ldrneb r0, [r8, #0x33]
    cmpne r0, #0
    ldrne r0, [r8, #0x70]
    cmpne r0, #0
    beq @L_02102b3c
    mvn r4, #0
    mov r5, r4
    mov r6, #0
    bl OS_DisableInterrupts
@L_02102984:
    mov r1, #0xc
    mla r9, r4, r1, r8
    mov lr, #0
    mov r2, r1
    b @L_021029d4
@L_02102998:
    cmp r5, #0
    blt @L_021029b4
    mla r3, r5, r2, r8
    ldr r12, [r3, #0x78]
    ldr r3, [r10, #0x78]
    cmp r12, r3
    bhs @L_021029d0
@L_021029b4:
    cmp r4, #0
    blt @L_021029cc
    ldr r10, [r10, #0x78]
    ldr r3, [r9, #0x78]
    cmp r10, r3
    bhs @L_021029d0
@L_021029cc:
    mov r5, lr
@L_021029d0:
    add lr, lr, #1
@L_021029d4:
    cmp lr, #4
    bge @L_021029ec
    mla r10, lr, r1, r8
    ldr r3, [r10, #0x70]
    cmp r3, #0
    bne @L_02102998
@L_021029ec:
    cmp r5, #0
    blt @L_02102ac8
    mov r3, #0xc
    mla r2, r5, r3, r8
    ldr r9, [r8, #0x24]
    ldr r4, [r2, #0x70]
    ldr r1, [r8, #0x50]
    add r4, r9, r4
    sub r1, r4, r1
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r9, r1, lsr #0x10
    mov r4, r9, lsl #8
    add r1, r7, r6, lsl #3
    orr r4, r4, r9, asr #8
    strh r4, [r1, #0x18]
    ldr r10, [r8, #0x24]
    ldr r9, [r2, #0x70]
    ldr r4, [r8, #0x50]
    add r9, r10, r9
    sub r4, r9, r4
    mov r4, r4, lsl #0x10
    mov r9, r4, lsr #0x10
    mov r4, r9, lsl #8
    orr r4, r4, r9, asr #8
    strh r4, [r1, #0x1a]
    ldr r10, [r8, #0x24]
    ldr r9, [r2, #0x70]
    ldr r4, [r8, #0x50]
    add r9, r10, r9
    sub r9, r9, r4
    ldr r4, [r2, #0x74]
    add r6, r6, #1
    add r4, r9, r4
    mov r4, r4, lsr #0x10
    mov r4, r4, lsl #0x10
    mov r9, r4, lsr #0x10
    mov r4, r9, lsl #8
    orr r4, r4, r9, asr #8
    strh r4, [r1, #0x1c]
    ldr r9, [r8, #0x24]
    ldr r4, [r2, #0x70]
    ldr r2, [r2, #0x74]
    add r10, r9, r4
    ldr r9, [r8, #0x50]
    mov r4, r5
    sub r5, r10, r9
    add r2, r5, r2
    mov r2, r2, lsl #0x10
    mov r9, r2, lsr #0x10
    sub r5, r3, #0xd
    mov r2, r9, lsl #8
    orr r2, r2, r9, asr #8
    strh r2, [r1, #0x1e]
    b @L_02102984
@L_02102ac8:
    bl OS_RestoreInterrupts
    mov r0, r6, lsl #3
    ldr r1, =0x1010500
    add r2, r0, #2
    orr r2, r2, r1
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r4, r1, lsr #0x10
    mov r1, r2, lsl #0x10
    mov r3, r4, lsl #8
    orr r3, r3, r4, asr #8
    mov r2, r1, lsr #0x10
    mov r1, r2, lsl #8
    strh r3, [r7, #0x14]
    orr r1, r1, r2, asr #8
    strh r1, [r7, #0x16]
    ldr r1, =data_ov014_02126ac8
    ldrh r2, [r8, #0x3a]
    ldrh r1, [r1, #4]
    add r4, r0, #0x18
    cmp r2, r1
    movhs r2, r1
    sub r1, r2, #4
    sub r1, r1, r0
    ldr r0, [sp, #0xc]
    cmp r0, r1
    bichi r0, r1, #1
    strhi r0, [sp, #0xc]
    b @L_02102b40
@L_02102b3c:
    mov r4, #0x14
@L_02102b40:
    ldr r0, =data_ov014_02126ac8
    ldr r1, [sp, #0xc]
    ldr r3, [r0, #0x50]
    add r1, r4, r1
    mov r2, r1, lsl #0x10
    mov r1, r3, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r3, r1, lsr #0x10
    mov r1, r3, lsl #8
    orr r1, r1, r3, asr #8
    strh r1, [r7, #-0xc]
    ldr r1, [r0, #0x50]
    mov r3, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r2, r1, lsr #0x10
    mov r1, r2, lsl #8
    orr r1, r1, r2, asr #8
    strh r1, [r7, #-0xa]
    ldr r1, [r8, #0x1c]
    mov r2, r3, lsl #8
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r5, r1, lsr #0x10
    mov r1, r5, lsl #8
    orr r1, r1, r5, asr #8
    strh r1, [r7, #-8]
    ldr r1, [r8, #0x1c]
    mov r5, #0x600
    mov r1, r1, lsl #0x10
    mov r6, r1, lsr #0x10
    mov r1, r6, lsl #8
    orr r1, r1, r6, asr #8
    strh r1, [r7, #-6]
    orr r1, r2, r3, asr #8
    strh r5, [r7, #-4]
    strh r1, [r7, #-2]
    ldrh r5, [r8, #0xa]
    mov r3, r4, lsl #2
    mov r2, #0
    mov r1, r5, lsl #8
    orr r1, r1, r5, asr #8
    strh r1, [r7]
    ldr r1, [sp, #0x10]
    ldrh r5, [r8, #0x18]
    cmp r1, #0
    mov r1, r5, lsl #8
    orr r1, r1, r5, asr #8
    strh r1, [r7, #2]
    ldr r1, [r8, #0x34]
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r5, r1, lsr #0x10
    mov r1, r5, lsl #8
    orr r1, r1, r5, asr #8
    strh r1, [r7, #4]
    ldr r1, [r8, #0x34]
    mov r1, r1, lsl #0x10
    mov r5, r1, lsr #0x10
    mov r1, r5, lsl #8
    orr r1, r1, r5, asr #8
    strh r1, [r7, #6]
    ldr r6, [r8, #0x24]
    mov r1, r6, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r5, r1, lsr #0x10
    mov r1, r5, lsl #8
    str r6, [r8, #0x28]
    orr r1, r1, r5, asr #8
    strh r1, [r7, #8]
    ldr r6, [r8, #0x24]
    mov r1, r6, lsl #0x10
    mov r5, r1, lsr #0x10
    mov r1, r5, lsl #8
    str r6, [r8, #0x28]
    orr r1, r1, r5, asr #8
    strh r1, [r7, #0xa]
    strb r3, [r7, #0xc]
    strb r11, [r7, #0xd]
    ldr r3, [r8, #0x48]
    ldr r1, [r8, #0x50]
    sub r1, r3, r1
    strh r1, [r8, #0x30]
    ldrh r3, [r8, #0x30]
    mov r1, r3, lsl #8
    orr r1, r1, r3, asr #8
    strh r1, [r7, #0xe]
    strh r2, [r7, #0x10]
    strh r2, [r7, #0x12]
    beq @L_02102cf0
    ldrh r1, [r0, #4]
    ldr r3, =0x101
    mov r2, #0x204
    add r1, r1, #0x2040000
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r5, r1, lsr #0x10
    mov r1, r5, lsl #8
    orr r1, r1, r5, asr #8
    strh r1, [r7, #0x14]
    ldrh r0, [r0, #4]
    add r0, r0, #0x2040000
    mov r0, r0, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r0, r1, lsl #8
    orr r0, r0, r1, asr #8
    strh r0, [r7, #0x16]
    strh r3, [r7, #0x18]
    strh r2, [r7, #0x1a]
@L_02102cf0:
    tst r11, #0x10
    mov r0, #0
    beq @L_02102d08
    strb r0, [r8, #0x32]
    bl OS_GetTick
    str r0, [r8, #0x2c]
@L_02102d08:
    sub r0, r7, #0xc
    add r1, r4, #0xc
    mov r2, #0
    bl calc_checksum_do
    mov r2, r0
    ldr r0, [sp, #8]
    ldr r1, [sp, #0xc]
    bl calc_checksum_do
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    bl invert_checksum
    mov r1, r0, lsl #8
    orr r0, r1, r0, asr #8
    strh r0, [r7, #0x10]
    ldr r1, [r8, #0x34]
    ldr r0, [sp, #0xc]
    tst r11, #3
    add r0, r1, r0
    str r0, [r8, #0x34]
    addne r0, r0, #1
    strne r0, [r8, #0x34]
    ldr r5, [r8, #0x1c]
    mov r1, r4
    ldr r2, [sp, #8]
    ldr r3, [sp, #0xc]
    mov r0, r7
    str r5, [sp]
    mov r4, #6
    str r4, [sp, #4]
    bl send_ip
    ldr r0, [sp, #0xc]
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

static inline u16 sw02102da4(u16 v) { return (v >> 8) | (v << 8); }
extern "C" void reply_arp(u8 *arg0)
{
    *(u16 *)(arg0 + 6) = 0x200;
    ((s32 (*)(...))MI_CpuCopy)(arg0 + 8, arg0 + 0x12, 0xA);
    ((s32 (*)(...))MI_CpuCopy)(CPSMyMac, arg0 + 8, 6);
    *(u16 *)(arg0 + 0xE) = sw02102da4((u16)(*(u32 *)((u8 *)data_ov014_02126ac8 + 0x50) >> 16));
    *(u16 *)(arg0 + 0x10) = sw02102da4((u16)*(u32 *)((u8 *)data_ov014_02126ac8 + 0x50));
    ((s32 (*)(...))MI_CpuCopy)(arg0 + 0x12, arg0 - 0xE, 6);
    ((s32 (*)(...))MI_CpuCopy)(CPSMyMac, arg0 - 8, 6);
    ((s32 (*)(...))send_packet)(arg0 - 0xE, 0x2A, 0, 0);
}

extern "C" asm void dispatch_arp(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r0
    cmp r1, #0x1c
    ldmloia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r1, =CPSMyMac
    add r0, r6, #8
    bl maccmp
    cmp r0, #0
    ldrne r0, =data_ov014_02126ac8
    ldrne r0, [r0, #0x50]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrh r0, [r6]
    cmp r0, #0x100
    ldreqh r0, [r6, #2]
    cmpeq r0, #8
    ldreqh r1, [r6, #4]
    ldreq r0, =0x406
    cmpeq r1, r0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldrh r1, [r6, #6]
    mov r0, r1, lsl #8
    orr r0, r0, r1, asr #8
    mov r0, r0, lsl #0x10
    mov r4, r0, lsr #0x10
    cmp r4, #1
    beq @L_02102ec8
    cmp r4, #2
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
@L_02102ec8:
    ldrh r5, [r6, #0x10]
    ldrh r3, [r6, #0xe]
    ldrh lr, [r6, #0x1a]
    mov r0, r5, lsl #8
    mov r1, r3, lsl #8
    orr r3, r1, r3, asr #8
    orr r1, r0, r5, asr #8
    mov r0, r3, lsl #0x10
    mov r1, r1, lsl #0x10
    ldrh r12, [r6, #0x18]
    ldr r2, =data_ov014_02126ac8
    mov r3, r0, lsr #0x10
    mov r1, r1, lsr #0x10
    ldr r0, [r2, #0x50]
    orr r1, r1, r3, lsl #16
    mov r3, r12, lsl #8
    mov r2, lr, lsl #8
    orr r12, r3, r12, asr #8
    orr r3, r2, lr, asr #8
    mov r2, r12, lsl #0x10
    mov r3, r3, lsl #0x10
    mov r12, r2, lsr #0x10
    mov r2, r3, lsr #0x10
    mov r5, #1
    cmp r1, r0
    movne r5, #0
    orr r2, r2, r12, lsl #16
    mov r7, #1
    cmp r0, r2
    movne r7, #0
    cmp r5, #0
    bne @L_02102f54
    mov r2, r7
    add r0, r6, #8
    bl reg_arpcache
@L_02102f54:
    cmp r4, #1
    bne @L_02102f70
    cmp r7, #0
    beq @L_02102f70
    mov r0, r6
    bl reply_arp
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02102f70:
    cmp r4, #2
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    cmp r7, #0
    cmpne r5, #0
    ldrne r0, =data_ov014_02126ac8
    movne r1, #1
    strneb r1, [r0, #1]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void reply_icmp(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #8
    mov r6, r0
    ldrh r4, [r6, #0xe]
    ldrh r3, [r6, #0xc]
    mov r5, r1
    mov r0, r4, lsl #8
    mov r1, r3, lsl #8
    orr r3, r1, r3, asr #8
    orr r1, r0, r4, asr #8
    mov r0, r3, lsl #0x10
    mov r1, r1, lsl #0x10
    mov r3, r0, lsr #0x10
    mov r0, r1, lsr #0x10
    orr r0, r0, r3, lsl #16
    mov r4, r2
    bl get_targetip
    movs r7, r0
    addeq sp, sp, #8
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    bl inq_arpcache
    cmp r0, #0
    bne @L_02103008
    mov r0, r7
    bl send_arprequest
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02103008:
    ldrh r0, [r5, #2]
    mov r2, #0
    strb r2, [r5]
    add r0, r0, #8
    add r0, r0, r0, lsr #16
    strh r0, [r5, #2]
    ldrh r12, [r6, #0xe]
    ldrh r6, [r6, #0xc]
    mov r0, r5
    mov r1, r12, lsl #8
    mov r3, r6, lsl #8
    orr r5, r3, r6, asr #8
    orr r3, r1, r12, asr #8
    mov r1, r5, lsl #0x10
    mov r3, r3, lsl #0x10
    mov r5, r1, lsr #0x10
    mov r1, r3, lsr #0x10
    orr r5, r1, r5, lsl #16
    mov r1, r4
    mov r3, r2
    str r5, [sp]
    mov r4, #1
    str r4, [sp, #4]
    bl send_ip
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void process_icmp_reply(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r0
    mov r7, r1
    mov r6, r2
    bl OS_DisableInterrupts
    ldr r1, =OSi_ThreadInfo
    mov r5, r0
    ldr r1, [r1, #8]
    cmp r1, #0
    beq @L_02103160
@L_02103098:
    ldr r4, [r1, #0xa4]
    cmp r4, #0
    ldrne r3, [r4]
    cmpne r3, #0
    beq @L_02103154
    ldrb r0, [r4, #8]
    cmp r0, #0xb
    ldreqh r2, [r7, #4]
    moveq r0, r3, lsl #0x10
    cmpeq r2, r0, lsr #16
    ldreqh r2, [r4, #0xa]
    ldreqh r0, [r7, #6]
    cmpeq r2, r0
    ldreq r0, [r4, #0x50]
    cmpeq r0, #0
    bne @L_02103154
    ldrh lr, [r8, #0xe]
    ldrh r12, [r8, #0xc]
    ldr r0, [r4, #0x1c]
    mov r2, lr, lsl #8
    mov r3, r12, lsl #8
    orr r12, r3, r12, asr #8
    orr r3, r2, lr, asr #8
    mov r2, r12, lsl #0x10
    mov r3, r3, lsl #0x10
    mov r12, r2, lsr #0x10
    mov r2, r3, lsr #0x10
    orr r2, r2, r12, lsl #16
    cmp r0, r2
    bne @L_02103154
    ldr r1, [r4, #0x48]
    sub r0, r6, #8
    cmp r0, r1
    strhi r1, [r4, #0x50]
    strls r0, [r4, #0x50]
    ldr r1, [r4, #0x4c]
    ldr r2, [r4, #0x50]
    add r0, r7, #8
    bl MI_CpuCopy
    ldr r0, [r4, #4]
    cmp r0, #3
    bne @L_02103160
    mov r0, #0
    str r0, [r4, #4]
    ldr r0, [r4]
    bl OS_WakeupThreadDirect
    b @L_02103160
@L_02103154:
    ldr r1, [r1, #0x68]
    cmp r1, #0
    bne @L_02103098
@L_02103160:
    mov r0, r5
    bl OS_RestoreInterrupts
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" s32 valid_IP(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 r4;
    s32 r5;
    r4 = arg1;
    r5 = arg0;
    if (r5 != 0) {
        s32 v0 = is_broadcast();
        if (v0 == 0) {
            s32 v1 = is_multicast(r5);
            if (v1 == 0) {
                if (r4 != 0) {
                    s32 v2 = is_broadcast(r4);
                    if (v2 == 0) {
                        s32 v3 = is_multicast(r4);
                        if (v3 == 0)
                            return 1;
                    }
                }
            }
        }
    }
    return 0;
}

extern "C" asm void dispatch_icmp(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r4, r2
    mov r6, r0
    mov r5, r1
    cmp r4, #8
    ldmloia sp!, {r4, r5, r6, r7, r8, pc}
    mov r0, r5
    mov r1, r4
    bl calc_checksum
    ldr r1, =0xffff
    cmp r0, r1
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    ldrh r0, [r6, #0x12]
    ldrh r8, [r6, #0x10]
    ldrh r7, [r6, #0xe]
    ldrh lr, [r6, #0xc]
    mov r2, r8, lsl #8
    orr r2, r2, r8, asr #8
    mov r12, lr, lsl #8
    mov r2, r2, lsl #0x10
    mov r3, r7, lsl #8
    orr lr, r12, lr, asr #8
    mov r1, r0, lsl #8
    orr r12, r3, r7, asr #8
    orr r3, r1, r0, asr #8
    mov r0, lr, lsl #0x10
    mov r1, r12, lsl #0x10
    mov r12, r0, lsr #0x10
    mov r0, r1, lsr #0x10
    mov r3, r3, lsl #0x10
    mov r2, r2, lsr #0x10
    mov r1, r3, lsr #0x10
    orr r0, r0, r12, lsl #16
    orr r1, r1, r2, lsl #16
    bl valid_IP
    cmp r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldrb r0, [r5]
    cmp r0, #0
    beq @L_0210327c
    cmp r0, #8
    beq @L_02103290
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0210327c:
    mov r0, r6
    mov r1, r5
    mov r2, r4
    bl process_icmp_reply
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02103290:
    mov r0, r6
    mov r1, r5
    mov r2, r4
    bl reply_icmp
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void check_listener(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r2, =OSi_ThreadInfo
    ldr r12, [r2, #8]
    cmp r12, #0
    beq @L_02103370
@L_021032bc:
    ldr r3, [r12, #0xa4]
    cmp r3, #0
    ldrne r2, [r3]
    cmpne r2, #0
    beq @L_02103364
    ldrb r2, [r3, #8]
    cmp r2, #1
    bne @L_02103364
    ldrh r5, [r1, #2]
    ldrh r4, [r3, #0xa]
    mov r2, r5, lsl #8
    orr r2, r2, r5, asr #8
    mov r2, r2, lsl #0x10
    cmp r4, r2, lsr #16
    bne @L_02103364
    ldrh r5, [r3, #0x18]
    cmp r5, #0
    beq @L_0210331c
    ldrh r4, [r1]
    mov r2, r4, lsl #8
    orr r2, r2, r4, asr #8
    mov r2, r2, lsl #0x10
    cmp r5, r2, lsr #16
    bne @L_02103364
@L_0210331c:
    ldr r2, [r3, #0x1c]
    cmp r2, #0
    beq @L_0210335c
    ldrh r6, [r0, #0xe]
    ldrh r5, [r0, #0xc]
    mov r4, r6, lsl #8
    mov lr, r5, lsl #8
    orr lr, lr, r5, asr #8
    orr r4, r4, r6, asr #8
    mov lr, lr, lsl #0x10
    mov r4, r4, lsl #0x10
    mov lr, lr, lsr #0x10
    mov r4, r4, lsr #0x10
    orr r4, r4, lr, lsl #16
    cmp r2, r4
    bne @L_02103364
@L_0210335c:
    mov r0, r3
    ldmia sp!, {r4, r5, r6, pc}
@L_02103364:
    ldr r12, [r12, #0x68]
    cmp r12, #0
    bne @L_021032bc
@L_02103370:
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
}

static inline u16 s0210337c(u16 x) { return (u16)((x >> 8) | (x << 8)); }
extern "C" s32 check_socket(u8 *arg0, u16 *arg1, u8 *arg2)
{
    s32 r = 0;
    s32 a = 0;
    s32 c = 0;
    s32 b = 0;
    if (arg2[8] != 0xA && arg2[8] != 0xB)
        a = 1;
    if (a != 0) {
        if (*(u16 *)(arg2 + 0xA) == s0210337c(arg1[1]))
            b = 1;
    }
    if (b != 0) {
        if (*(u16 *)(arg2 + 0x18) == s0210337c(arg1[0]))
            c = 1;
    }
    if (c != 0) {
        if (*(u32 *)(arg2 + 0x1C) == (u32)((s0210337c(*(u16 *)(arg0 + 0xC)) << 16) | s0210337c(*(u16 *)(arg0 + 0xE))))
            r = 1;
    }
    return r;
}

extern "C" asm s32 find_socket(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r2, =OSi_ThreadInfo
    mov r7, r0
    ldr r5, [r2, #8]
    mov r6, r1
    cmp r5, #0
    beq @L_02103488
@L_0210344c:
    ldr r4, [r5, #0xa4]
    cmp r4, #0
    ldrne r0, [r4]
    cmpne r0, #0
    beq @L_0210347c
    mov r0, r7
    mov r1, r6
    mov r2, r4
    bl check_socket
    cmp r0, #0
    movne r0, r4
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
@L_0210347c:
    ldr r5, [r5, #0x68]
    cmp r5, #0
    bne @L_0210344c
@L_02103488:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void parse_mss(void)
{
    stmdb sp!, {r3, lr}
    mov r2, #0x218
    strh r2, [r1, #0x3a]
    ldrb r2, [r0, #0xc]
    add r0, r0, #0x14
    and r3, r2, #0xf0
    mov r2, r3, asr #1
    add r2, r3, r2, lsr #30
    mov r2, r2, asr #2
    sub r2, r2, #0x14
    cmp r2, #0
    sub lr, r2, #1
    ldmleia sp!, {r3, pc}
    mov r3, #1
@L_021034cc:
    ldrb r2, [r0], #1
    cmp r2, #4
    addls pc, pc, r2, lsl #2
    b @L_02103548
    b @L_021034f0
    b @L_02103568
    b @L_021034f4
    b @L_02103548
    b @L_02103524
@L_021034f0:
    ldmia sp!, {r3, pc}
@L_021034f4:
    cmp lr, #2
    ldmleia sp!, {r3, pc}
    ldrb r2, [r0]
    cmp r2, #4
    ldmneia sp!, {r3, pc}
    ldrb r12, [r0, #1]
    ldrb r2, [r0, #2]
    add r0, r0, #3
    sub lr, lr, #3
    orr r2, r2, r12, lsl #8
    strh r2, [r1, #0x3a]
    b @L_02103568
@L_02103524:
    cmp lr, #0
    ldmleia sp!, {r3, pc}
    ldrb r2, [r0]
    cmp r2, #2
    ldmneia sp!, {r3, pc}
    strb r3, [r1, #0x33]
    add r0, r0, #1
    sub lr, lr, #1
    b @L_02103568
@L_02103548:
    cmp lr, #0
    ldmleia sp!, {r3, pc}
    ldrb r2, [r0]
    cmp r2, #2
    ldmloia sp!, {r3, pc}
    sub r2, r2, #1
    sub lr, lr, r2
    add r0, r0, r2
@L_02103568:
    cmp lr, #0
    sub lr, lr, #1
    bgt @L_021034cc
    ldmia sp!, {r3, pc}
}

extern "C" s32 no_need_inq(void)
{
    s32 v0;
    s32 v1;
    v0 = get_targetip();
    if (v0 == 0)
        return 1;
    v1 = inq_arpcache(v0);
    return v1;
}

extern "C" asm s32 _tcp_send_handshake(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    ldr r0, [r5, #0x1c]
    mov r4, r1
    bl no_need_inq
    cmp r0, #0
    ldreq r0, =OSi_ThreadInfo
    ldreq r1, =data_ov014_02126f00
    ldreq r0, [r0, #4]
    cmpeq r0, r1
    beq @L_021035d8
    mov r0, #0
    mov r1, r0
    mov r2, r5
    mov r3, r4
    bl _send_tcp
    ldmia sp!, {r3, r4, r5, pc}
@L_021035d8:
    ldr r0, [r5, #0x1c]
    bl get_targetip
    bl send_arprequest
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm s32 _tcp_send_ack(...)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    cmp r1, #2
    beq @L_0210366c
    ldr r2, [r4, #0x28]
    ldr r0, [r4, #0x24]
    cmp r2, r0
    bne @L_0210362c
    ldr r2, [r4, #0x48]
    ldr r0, [r4, #0x50]
    ldrh r3, [r4, #0x30]
    sub r0, r2, r0
    mov r0, r0, lsl #0x10
    cmp r3, r0, lsr #16
    ldmeqia sp!, {r4, pc}
@L_0210362c:
    cmp r1, #1
    beq @L_0210366c
    ldrb r0, [r4, #0x32]
    add r1, r0, #1
    and r0, r1, #0xff
    strb r1, [r4, #0x32]
    cmp r0, #2
    bhs @L_0210366c
    bl OS_GetTick
    ldr r2, [r4, #0x2c]
    ldr r1, =0x1991b
    sub r0, r0, r2
    cmp r0, r1
    bhs @L_0210366c
    bl dacktimer_reschedule
    ldmia sp!, {r4, pc}
@L_0210366c:
    mov r0, r4
    mov r1, #0x10
    bl _tcp_send_handshake
    ldmia sp!, {r4, pc}
}

extern "C" void _tcp_send_finack(s32 arg0)
{
    _tcp_send_handshake(arg0, 0x11);
}

extern "C" asm s32 _tcp_send_rst(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    ldr r5, =data_ov014_02126ce0
    mov r4, #0
    mov r8, r0
    mov r7, r1
    mov r6, r2
    mov r0, r5
    mov r1, r4
    mov r2, #0xa0
    bl MI_CpuFill8
    ldrh r1, [r7, #2]
    mov r0, r1, lsl #8
    orr r0, r0, r1, asr #8
    strh r0, [r5, #0xa]
    ldrh r1, [r7]
    mov r0, r1, lsl #8
    orr r0, r0, r1, asr #8
    strh r0, [r5, #0x18]
    ldrh r3, [r8, #0xe]
    ldrh r2, [r8, #0xc]
    mov r0, r3, lsl #8
    mov r1, r2, lsl #8
    orr r2, r1, r2, asr #8
    orr r1, r0, r3, asr #8
    mov r0, r2, lsl #0x10
    mov r1, r1, lsl #0x10
    mov r2, r0, lsr #0x10
    mov r0, r1, lsr #0x10
    orr r0, r0, r2, lsl #16
    str r0, [r5, #0x1c]
    ldrb r0, [r7, #0xd]
    tst r0, #0x10
    beq @L_02103754
    ldrh r4, [r7, #0xa]
    ldrh r3, [r7, #8]
    mov r0, r5
    mov r1, r4, lsl #8
    mov r2, r3, lsl #8
    orr r3, r2, r3, asr #8
    orr r2, r1, r4, asr #8
    mov r1, r3, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r3, r1, lsr #0x10
    mov r1, r2, lsr #0x10
    orr r2, r1, r3, lsl #16
    mov r1, #4
    str r2, [r5, #0x34]
    bl _tcp_send_handshake
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02103754:
    str r4, [r5, #0x34]
    ldrh r2, [r7, #4]
    ldrh r3, [r7, #6]
    tst r0, #3
    mov r1, r2, lsl #8
    mov r0, r3, lsl #8
    orr r2, r1, r2, asr #8
    orr r1, r0, r3, asr #8
    mov r0, r2, lsl #0x10
    mov r1, r1, lsl #0x10
    mov r2, r0, lsr #0x10
    mov r0, r1, lsr #0x10
    orr r0, r0, r2, lsl #16
    add r0, r6, r0
    str r0, [r5, #0x24]
    addne r0, r0, #1
    strne r0, [r5, #0x24]
    mov r0, r5
    mov r1, #0x14
    bl _tcp_send_handshake
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm s32 dt_syn_LISTEN(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r2
    mov r2, #3
    mov r6, r0
    mov r5, r1
    strb r2, [r4, #8]
    bl OS_GetTick
    mov r0, r0, lsr #0x10
    orr r0, r0, r1, lsl #16
    str r0, [r4, #0x10]
    ldrh r12, [r6, #0x12]
    ldrh r3, [r6, #0x10]
    mov r0, r5
    mov r1, r12, lsl #8
    mov r2, r3, lsl #8
    orr r3, r2, r3, asr #8
    orr r2, r1, r12, asr #8
    mov r1, r3, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r3, r1, lsr #0x10
    mov r1, r2, lsr #0x10
    orr r1, r1, r3, lsl #16
    str r1, [r4, #0x14]
    ldrh r3, [r5]
    mov r1, r4
    mov r2, r3, lsl #8
    orr r2, r2, r3, asr #8
    strh r2, [r4, #0x18]
    ldrh r12, [r6, #0xe]
    ldrh r6, [r6, #0xc]
    mov r2, r12, lsl #8
    mov r3, r6, lsl #8
    orr r6, r3, r6, asr #8
    orr r3, r2, r12, asr #8
    mov r2, r6, lsl #0x10
    mov r3, r3, lsl #0x10
    mov r6, r2, lsr #0x10
    mov r2, r3, lsr #0x10
    orr r2, r2, r6, lsl #16
    str r2, [r4, #0x1c]
    ldrh r6, [r5, #6]
    ldrh r5, [r5, #4]
    mov r2, r6, lsl #8
    mov r3, r5, lsl #8
    orr r5, r3, r5, asr #8
    orr r3, r2, r6, asr #8
    mov r2, r5, lsl #0x10
    mov r3, r3, lsl #0x10
    mov r5, r2, lsr #0x10
    mov r2, r3, lsr #0x10
    orr r2, r2, r5, lsl #16
    add r2, r2, #1
    str r2, [r4, #0x24]
    bl parse_mss
    mov r0, r4
    mov r1, #0x12
    bl _tcp_send_handshake
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 find_specific_socket(s32 arg0, s32 arg1, u8 *arg2)
{
    s32 r4;
    s32 r5;
    s32 r6;
    s32 v0;
    s32 t0;
    v0 = find_socket(arg0, arg1, (s32)arg2);
    r6 = arg0;
    r5 = arg1;
    r4 = (s32)arg2;
    arg2 = (u8 *)v0;
    if ((s32)arg2 != 0) {
        arg0 = *(u8 *)(arg2 + 0x8);
        if (arg0 == 1) {
            arg0 = r6;
            arg1 = r5;
            dt_syn_LISTEN(arg0, arg1, (s32)arg2);
        } else {
            if (arg0 == 3) {
                t0 = (*(s32 *)(arg2 + 0x34) - 1);
                *(s32 *)(arg2 + 0x34) = t0;
                arg0 = r6;
                arg1 = r5;
                dt_syn_LISTEN(arg0, arg1, (s32)arg2);
            } else {
                _tcp_send_rst(r6, r5, r4);
            }
        }
        return 1;
    } else {
        return 0;
    }
}

extern "C" asm void dt_syn(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r4, r0
    ldrh r0, [r4, #0x12]
    ldrh r8, [r4, #0x10]
    ldrh r7, [r4, #0xe]
    ldrh r6, [r4, #0xc]
    mov r12, r8, lsl #8
    orr r12, r12, r8, asr #8
    mov r5, r6, lsl #8
    mov r12, r12, lsl #0x10
    mov lr, r7, lsl #8
    orr r6, r5, r6, asr #8
    mov r3, r0, lsl #8
    orr r5, lr, r7, asr #8
    orr lr, r3, r0, asr #8
    mov r0, r6, lsl #0x10
    mov r3, r5, lsl #0x10
    mov r5, r0, lsr #0x10
    mov r0, r3, lsr #0x10
    mov lr, lr, lsl #0x10
    orr r0, r0, r5, lsl #16
    mov r12, r12, lsr #0x10
    mov r3, lr, lsr #0x10
    mov r6, r1
    orr r1, r3, r12, lsl #16
    mov r5, r2
    bl valid_IP
    cmp r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    mov r0, r4
    mov r1, r6
    mov r2, r5
    bl find_specific_socket
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    mov r0, r4
    mov r1, r6
    bl check_listener
    movs r2, r0
    beq @L_021039bc
    mov r0, r4
    mov r1, r6
    bl dt_syn_LISTEN
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_021039bc:
    bl OS_YieldThread
    mov r0, r4
    mov r1, r6
    bl check_listener
    movs r2, r0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    mov r0, r4
    mov r1, r6
    bl dt_syn_LISTEN
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void dt_synack(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r5, r1
    mov r6, r2
    bl find_socket
    movs r4, r0
    beq @L_02103a0c
    ldrb r0, [r4, #8]
    cmp r0, #2
    beq @L_02103a20
@L_02103a0c:
    mov r0, r7
    mov r1, r5
    mov r2, r6
    bl _tcp_send_rst
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02103a20:
    bl OS_YieldThread
    ldrh r12, [r5, #6]
    ldrh r3, [r5, #4]
    mov r0, r5
    mov r1, r12, lsl #8
    mov r2, r3, lsl #8
    orr r3, r2, r3, asr #8
    orr r2, r1, r12, asr #8
    mov r1, r3, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r3, r1, lsr #0x10
    mov r1, r2, lsr #0x10
    orr r1, r1, r3, lsl #16
    add r1, r1, #1
    str r1, [r4, #0x24]
    ldrh lr, [r5, #0xa]
    ldrh r12, [r5, #8]
    mov r1, r4
    mov r2, lr, lsl #8
    mov r3, r12, lsl #8
    orr r12, r3, r12, asr #8
    orr r3, r2, lr, asr #8
    mov r2, r12, lsl #0x10
    mov r3, r3, lsl #0x10
    mov r12, r2, lsr #0x10
    mov r2, r3, lsr #0x10
    orr r2, r2, r12, lsl #16
    str r2, [r4, #0x3c]
    ldrh r3, [r5, #0xe]
    mov r2, r3, lsl #8
    orr r2, r2, r3, asr #8
    strh r2, [r4, #0x38]
    bl parse_mss
    mov r0, r4
    mov r1, #2
    bl _tcp_send_ack
    mov r0, #4
    strb r0, [r4, #8]
    ldr r0, [r4, #4]
    cmp r0, #1
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, #0
    str r0, [r4, #4]
    ldr r0, [r4]
    bl OS_WakeupThreadDirect
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" void mark_rwin_chunk(P02103ad8 *arg0, s32 arg1)
{
    s32 i;
    u32 max;
    max = 0;
    i = 0;
    while (i < 3 && arg0->arr[i].a != 0) {
        if (max < arg0->arr[i].c)
            max = arg0->arr[i].c;
        i++;
    }
    arg0->arr[arg1].c = max + 1;
}

extern "C" asm void merge_rwin_chunks(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
@L_02103b30:
    ldr r2, [r4, #0x70]
    cmp r2, #0
    beq @L_02103b74
    ldr r12, [r4, #0x50]
    cmp r12, r2
    blo @L_02103b74
    ldr r0, [r4, #0x74]
    mov r1, #0
    add r2, r2, r0
    ldr r3, [r4, #0x24]
    sub r0, r2, r12
    add r3, r3, r0
    mov r0, r4
    str r3, [r4, #0x24]
    str r2, [r4, #0x50]
    str r1, [r4, #0x70]
    bl pull_rwin_chunks
@L_02103b74:
    mov lr, #0
    mov r0, #0xc
@L_02103b7c:
    mla r12, lr, r0, r4
    ldr r3, [r12, #0x70]
    cmp r3, #0
    ldrne r2, [r12, #0x7c]
    cmpne r2, #0
    beq @L_02103bc8
    ldr r1, [r12, #0x74]
    add r1, r3, r1
    cmp r1, r2
    blo @L_02103bc8
    ldr r1, [r12, #0x80]
    mov r0, r4
    add r1, r2, r1
    sub r1, r1, r3
    str r1, [r12, #0x74]
    mov r1, #0
    str r1, [r12, #0x7c]
    bl pull_rwin_chunks
    b @L_02103b30
@L_02103bc8:
    add lr, lr, #1
    cmp lr, #3
    blt @L_02103b7c
    ldmia sp!, {r4, pc}
}

extern "C" asm void pull_rwin_chunks(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, #0
    mov r6, r0
    mov r12, r5
    mov r3, #0xc
@L_02103bec:
    mla r4, r5, r3, r6
    ldr r0, [r4, #0x70]
    add r5, r5, #1
    cmp r0, #0
    addeq r0, r4, #0x7c
    addeq lr, r4, #0x70
    ldmeqia r0, {r0, r1, r2}
    stmeqia lr, {r0, r1, r2}
    streq r12, [r4, #0x7c]
    cmp r5, #3
    blt @L_02103bec
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void push_rwin_chunks(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r1
    mov r5, r0
    cmp r4, #2
    mov lr, #2
    bgt @L_02103c58
    mov r3, #0xc
@L_02103c38:
    mla r1, lr, r3, r5
    add r0, r1, #0x70
    sub lr, lr, #1
    add r12, r1, #0x7c
    ldmia r0, {r0, r1, r2}
    stmia r12, {r0, r1, r2}
    cmp lr, r4
    bge @L_02103c38
@L_02103c58:
    mov r0, #0xc
    mla r0, r4, r0, r5
    mov r1, #0
    str r1, [r0, #0x70]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void dt_ack(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    mov r5, r1
    mov r4, r2
    mov r7, #0
    bl find_socket
    movs r6, r0
    bne @L_02103ca0
    mov r0, r10
    mov r1, r5
    mov r2, r4
    bl _tcp_send_rst
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02103ca0:
    ldrh r8, [r5, #0xa]
    ldrh r3, [r5, #8]
    ldr r2, [r6, #0x3c]
    mov r0, r8, lsl #8
    mov r1, r3, lsl #8
    orr r3, r1, r3, asr #8
    orr r1, r0, r8, asr #8
    mov r0, r3, lsl #0x10
    mov r1, r1, lsl #0x10
    mov r3, r0, lsr #0x10
    mov r0, r1, lsr #0x10
    orr r1, r0, r3, lsl #16
    sub r0, r1, r2
    ldrb r8, [r5, #0xd]
    cmp r0, #0
    strgt r1, [r6, #0x3c]
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
    orr r9, r0, r2, lsl #16
    bl OS_DisableInterrupts
    ldrb r1, [r6, #8]
    str r0, [sp]
    cmp r1, #4
    bne @L_02103ecc
    ldr r2, [r6, #0x24]
    cmp r2, r9
    beq @L_02103ecc
    ldr r1, [r6, #0x50]
    add r0, r1, r9
    sub r7, r0, r2
    cmp r1, r7
    ldrlo r0, [r6, #0x48]
    cmplo r7, r0
    bhs @L_02103eb4
    sub r0, r0, r7
    cmp r4, r0
    movhi r4, r0
    cmp r4, #0
    beq @L_02103eb4
    add r9, r7, r4
    mov r8, #0
@L_02103d64:
    mov r0, #0xc
    mul r11, r8, r0
    add r10, r6, r11
@L_02103d70:
    ldr r2, [r10, #0x70]
    cmp r2, #0
    bne @L_02103dbc
    ldrb r0, [r5, #0xc]
    ldr r1, [r6, #0x4c]
    mov r2, r4
    and r0, r0, #0xf0
    add r0, r5, r0, lsr #2
    add r1, r1, r7
    bl MI_CpuCopy
    add r2, r6, r11
    str r7, [r2, #0x70]
    mov r0, r6
    mov r1, r8
    str r4, [r2, #0x74]
@L_02103dac:
    bl mark_rwin_chunk
    mov r0, r6
    bl merge_rwin_chunks
    b @L_02103eb4
@L_02103dbc:
    ldr r0, [r10, #0x74]
    cmp r7, r2
    add r1, r2, r0
    bhs @L_02103e20
    cmp r2, r9
    bhi @L_02103e20
    ldrb r0, [r5, #0xc]
    add r4, r6, #0x70
    ldr r1, [r6, #0x4c]
    ldr r2, [r4, r11]
    and r0, r0, #0xf0
    add r0, r5, r0, lsr #2
    add r1, r1, r7
    sub r2, r2, r7
    bl MI_CpuCopy
    add r2, r6, #0x74
    ldr r0, [r4, r11]
    ldr r1, [r2, r11]
    sub r0, r0, r7
    add r0, r1, r0
    str r0, [r2, r11]
    mov r0, r6
    mov r1, r8
    str r7, [r4, r11]
    b @L_02103dac
@L_02103e20:
    cmp r7, r1
    bhi @L_02103e80
    cmp r1, r9
    bhs @L_02103e80
    ldrb r0, [r5, #0xc]
    ldr r3, [r6, #0x4c]
    sub r4, r9, r1
    and r0, r0, #0xf0
    add r0, r5, r0, lsr #2
    add r0, r0, r1
    mov r2, r4
    sub r0, r0, r7
    add r1, r3, r1
    bl MI_CpuCopy
    add r2, r6, #0x74
    ldr r1, [r2, r11]
    mov r0, r6
    add r1, r1, r4
    str r1, [r2, r11]
    bl merge_rwin_chunks
    mov r0, r6
    mov r1, r8
    bl mark_rwin_chunk
    b @L_02103eb4
@L_02103e80:
    cmp r2, r7
    bhi @L_02103e90
    cmp r9, r1
    bls @L_02103eb4
@L_02103e90:
    cmp r7, r2
    bhs @L_02103ea8
    mov r0, r6
    mov r1, r8
    bl push_rwin_chunks
    b @L_02103d70
@L_02103ea8:
    add r8, r8, #1
    cmp r8, #4
    blt @L_02103d64
@L_02103eb4:
    ldr r0, [sp]
    bl OS_RestoreInterrupts
    mov r0, r6
    mov r1, #2
    bl _tcp_send_ack
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02103ecc:
    ldrh r1, [r5, #0xe]
    mov r0, r1, lsl #8
    orr r0, r0, r1, asr #8
    strh r0, [r6, #0x38]
    ldrb r0, [r6, #8]
    cmp r0, #9
    addls pc, pc, r0, lsl #2
    b @L_02104160
    b @L_02103f14
    b @L_02104160
    b @L_02103f14
    b @L_02103f30
    b @L_02103f64
    b @L_02104160
    b @L_02104144
    b @L_021040d4
    b @L_021040d4
    b @L_02104144
@L_02103f14:
    ldr r0, [sp]
    bl OS_RestoreInterrupts
    mov r0, r10
    mov r1, r5
    mov r2, r4
    bl _tcp_send_rst
    b @L_02104184
@L_02103f30:
    mov r0, #4
    strb r0, [r6, #8]
    ldr r0, [r6, #4]
    cmp r0, #1
    bne @L_02103f50
    str r7, [r6, #4]
    ldr r0, [r6]
    bl OS_WakeupThreadDirect
@L_02103f50:
    cmp r4, #0
    bne @L_02103f64
    ldr r0, [sp]
    bl OS_RestoreInterrupts
    b @L_02104184
@L_02103f64:
    ldr r0, [r6, #0x40]
    add r0, r0, #1
    str r0, [r6, #0x40]
    ldr r1, [r6, #0x50]
    ldr r0, [r6, #0x48]
    sub r0, r0, r1
    cmp r4, r0
    movhi r9, #0
    movhi r4, r0
    movls r9, #1
    cmp r4, #0
    beq @L_02104064
    ldr r2, [r6, #0x70]
    cmp r2, #0
    beq @L_0210400c
    add r0, r1, r4
    cmp r2, r0
    bhi @L_0210400c
    tst r8, #1
    ldrb r0, [r5, #0xc]
    ldr r3, [r6, #0x4c]
    bne @L_02103fe8
    and r0, r0, #0xf0
    sub r2, r2, r1
    add r0, r5, r0, lsr #2
    add r1, r3, r1
    bl MI_CpuCopy
    ldr r2, [r6, #0x70]
    ldr r1, [r6, #0x74]
    ldr r0, [r6, #0x50]
    add r1, r2, r1
    sub r4, r1, r0
    b @L_02103ffc
@L_02103fe8:
    and r0, r0, #0xf0
    mov r2, r4
    add r0, r5, r0, lsr #2
    add r1, r3, r1
    bl MI_CpuCopy
@L_02103ffc:
    mov r0, r6
    str r7, [r6, #0x70]
    bl pull_rwin_chunks
    b @L_02104028
@L_0210400c:
    ldrb r0, [r5, #0xc]
    ldr r3, [r6, #0x4c]
    mov r2, r4
    and r0, r0, #0xf0
    add r0, r5, r0, lsr #2
    add r1, r3, r1
    bl MI_CpuCopy
@L_02104028:
    ldr r1, [r6, #0x50]
    mov r0, r6
    add r1, r1, r4
    str r1, [r6, #0x50]
    ldr r1, [r6, #0x24]
    mov r5, #0
    add r1, r1, r4
    str r1, [r6, #0x24]
    bl merge_rwin_chunks
    ldr r0, [r6, #4]
    cmp r0, #2
    bne @L_02104064
    str r5, [r6, #4]
    ldr r0, [r6]
    bl OS_WakeupThreadDirect
@L_02104064:
    cmp r9, #0
    beq @L_021040b8
    tst r8, #1
    beq @L_021040b8
    ldr r1, [r6, #0x24]
    ldr r0, [sp]
    add r1, r1, #1
    str r1, [r6, #0x24]
    mov r1, #6
    strb r1, [r6, #8]
    bl OS_RestoreInterrupts
    mov r0, r6
    bl _tcp_send_finack
    cmp r4, #0
    ldreq r0, [r6, #4]
    cmpeq r0, #2
    bne @L_02104184
@L_021040a8:
    str r7, [r6, #4]
    ldr r0, [r6]
    bl OS_WakeupThreadDirect
    b @L_02104184
@L_021040b8:
    ldr r0, [sp]
    bl OS_RestoreInterrupts
    cmp r4, #0
    beq @L_02104184
    mov r0, r6
    mov r1, #0
    b @L_02104180
@L_021040d4:
    tst r8, #1
    beq @L_02104114
    ldr r1, [r6, #0x24]
    add r0, r4, #1
    add r1, r1, r0
    ldr r0, [sp]
    str r1, [r6, #0x24]
    bl OS_RestoreInterrupts
    mov r0, r6
    mov r1, #2
    bl _tcp_send_ack
    strb r7, [r6, #8]
    ldr r0, [r6, #4]
    cmp r0, #2
    bne @L_02104184
    b @L_021040a8
@L_02104114:
    ldr r0, [sp]
    mov r1, #8
    strb r1, [r6, #8]
    bl OS_RestoreInterrupts
    cmp r4, #0
    beq @L_02104184
    ldr r1, [r6, #0x24]
    mov r0, r6
    add r2, r1, r4
    mov r1, #2
    str r2, [r6, #0x24]
    b @L_02104180
@L_02104144:
    ldr r0, [sp]
    strb r7, [r6, #8]
    bl OS_RestoreInterrupts
    ldr r0, [r6, #4]
    cmp r0, #2
    bne @L_02104184
    b @L_021040a8
@L_02104160:
    ldr r0, [sp]
    bl OS_RestoreInterrupts
    tst r8, #1
    ldrne r0, [r6, #0x24]
    mov r1, #2
    addne r0, r0, #1
    strne r0, [r6, #0x24]
    mov r0, r6
@L_02104180:
    bl _tcp_send_ack
@L_02104184:
    bl OS_YieldThread
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 dt_fin(s32 arg0, s32 arg1, s32 arg2)
{
    u8 *r4;
    s32 r6;
    s32 r7;
    s32 v0;
    s32 v1;
    s32 v3;
    s32 v6;
    s32 v8;
    s32 v10;
    s32 t0;
    s32 t1;
    s32 t3;
    s32 t4;
    v0 = find_socket(arg0, arg1, arg2);
    if (v0 == 0)
        return v0;
    v1 = OS_DisableInterrupts();
    r7 = arg0;
    arg0 = v1;
    r6 = arg1;
    r4 = (u8 *)v0;
    arg1 = *(u8 *)(((u8 *)v0) + 0x8);
    switch (arg1) {
        case 7:
            t0 = (*(s32 *)(r4 + 0x24) + 1);
            *(s32 *)(r4 + 0x24) = t0;
            *(u8 *)(r4 + 0x8) = 9;
            OS_RestoreInterrupts(arg0, 9, t0);
            v3 = _tcp_send_ack((s32)r4, 2);
            return v3;
        case 8:
            t1 = (*(s32 *)(r4 + 0x24) + 1);
            *(s32 *)(r4 + 0x24) = t1;
            OS_RestoreInterrupts(arg0, t1);
            _tcp_send_ack((s32)r4, 2);
            *(u8 *)(r4 + 0x8) = 0;
            if (*(s32 *)(r4 + 0x4) != 2)
                return *(s32 *)(r4 + 0x4);
            *(s32 *)(r4 + 0x4) = 0;
            t3 = *(s32 *)(r4);
            v6 = OS_WakeupThreadDirect(t3, 0);
            return v6;
        case 4:
            t4 = (*(s32 *)(r4 + 0x24) + 1);
            *(s32 *)(r4 + 0x24) = t4;
            *(u8 *)(r4 + 0x8) = 6;
            OS_RestoreInterrupts(arg0, 6, t4);
            v8 = ((s32 (*)(...))_tcp_send_finack)((s32)r4);
            return v8;
        default:
            OS_RestoreInterrupts(arg0, arg1);
            v10 = _tcp_send_rst(r7, r6, arg2);
            return v10;
    }
}

extern "C" s32 dt_rst(void)
{
    s32 v0;
    s32 v2;
    s32 t1;
    v0 = find_socket();
    if (v0 == 0)
        return v0;
    OS_YieldThread();
    *(u8 *)(((u8 *)v0) + 0x8) = 0;
    if ((u32)(*(s32 *)(((u8 *)v0) + 0x4) - 1) > (u32)1)
        return (*(s32 *)(((u8 *)v0) + 0x4) - 1);
    *(s32 *)(((u8 *)v0) + 0x4) = 0;
    t1 = *(s32 *)(((u8 *)v0));
    v2 = OS_WakeupThreadDirect(t1, 0);
    return v2;
}

extern "C" asm void dispatch_tcp(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r2
    mov r6, r0
    mov r5, r1
    cmp r4, #0x14
    ldmloia sp!, {r4, r5, r6, pc}
    ldrb r0, [r5, #0xc]
    and r0, r0, #0xf0
    cmp r0, #0x50
    ldmltia sp!, {r4, r5, r6, pc}
    cmp r4, r0, lsr #2
    ldmloia sp!, {r4, r5, r6, pc}
    mov r0, r5
    mov r1, r4
    mov r2, r6
    mov r3, #6
    bl check_tcpudpsum
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    ldrb r0, [r5, #0xc]
    ldrb r2, [r5, #0xd]
    and r1, r0, #0xf0
    and r0, r2, #0x17
    cmp r0, #0x10
    sub r4, r4, r1, lsr #2
    bgt @L_0210433c
    cmp r0, #0x10
    bge @L_02104394
    cmp r0, #2
    bgt @L_021043bc
    cmp r0, #1
    blt @L_021043bc
    beq @L_021043a8
    cmp r0, #2
    beq @L_0210435c
    b @L_021043bc
@L_0210433c:
    cmp r0, #0x12
    bgt @L_021043bc
    cmp r0, #0x11
    blt @L_021043bc
    beq @L_02104394
    cmp r0, #0x12
    beq @L_02104378
    b @L_021043bc
@L_0210435c:
    tst r2, #0x28
    ldmneia sp!, {r4, r5, r6, pc}
    mov r0, r6
    mov r1, r5
    mov r2, r4
    bl dt_syn
    ldmia sp!, {r4, r5, r6, pc}
@L_02104378:
    tst r2, #0x28
    ldmneia sp!, {r4, r5, r6, pc}
    mov r0, r6
    mov r1, r5
    mov r2, r4
    bl dt_synack
    ldmia sp!, {r4, r5, r6, pc}
@L_02104394:
    mov r0, r6
    mov r1, r5
    mov r2, r4
    bl dt_ack
    ldmia sp!, {r4, r5, r6, pc}
@L_021043a8:
    mov r0, r6
    mov r1, r5
    mov r2, r4
    bl dt_fin
    ldmia sp!, {r4, r5, r6, pc}
@L_021043bc:
    tst r2, #4
    mov r0, r6
    mov r1, r5
    beq @L_021043d4
    bl dt_rst
    ldmia sp!, {r4, r5, r6, pc}
@L_021043d4:
    mov r2, r4
    bl _tcp_send_rst
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void dispatch_udp(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r6, r2
    mov r8, r0
    mov r7, r1
    cmp r6, #8
    ldmloia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldrh r0, [r7, #6]
    cmp r0, #0
    beq @L_02104420
    mov r0, r7
    mov r1, r6
    mov r2, r8
    mov r3, #0x11
    bl check_tcpudpsum
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_02104420:
    bl OS_DisableInterrupts
    ldr r1, =OSi_ThreadInfo
    mov r5, r0
    ldr r1, [r1, #8]
    cmp r1, #0
    beq @L_021045e4
    mvn r12, #0
@L_0210443c:
    ldr r4, [r1, #0xa4]
    cmp r4, #0
    ldrne r0, [r4]
    cmpne r0, #0
    beq @L_021045d8
    ldrb r0, [r4, #8]
    cmp r0, #0xa
    bne @L_021045d8
    ldrh r3, [r7, #2]
    ldrh r2, [r4, #0xa]
    mov r0, r3, lsl #8
    orr r0, r0, r3, asr #8
    mov r0, r0, lsl #0x10
    cmp r2, r0, lsr #16
    bne @L_021045d8
    ldrh r3, [r4, #0x18]
    cmp r3, #0
    beq @L_0210449c
    ldrh r2, [r7]
    mov r0, r2, lsl #8
    orr r0, r0, r2, asr #8
    mov r0, r0, lsl #0x10
    cmp r3, r0, lsr #16
    bne @L_021045d8
@L_0210449c:
    ldr r0, [r4, #0x1c]
    cmp r0, #0
    cmpne r0, r12
    beq @L_021044e0
    ldrh r9, [r8, #0xe]
    ldrh lr, [r8, #0xc]
    mov r2, r9, lsl #8
    mov r3, lr, lsl #8
    orr lr, r3, lr, asr #8
    orr r3, r2, r9, asr #8
    mov r2, lr, lsl #0x10
    mov r3, r3, lsl #0x10
    mov lr, r2, lsr #0x10
    mov r2, r3, lsr #0x10
    orr r2, r2, lr, lsl #16
    cmp r0, r2
    bne @L_021045d8
@L_021044e0:
    ldrh r3, [r8, #0x12]
    ldrh r2, [r8, #0x10]
    mov r0, r3, lsl #8
    mov r1, r2, lsl #8
    orr r2, r1, r2, asr #8
    orr r1, r0, r3, asr #8
    mov r0, r2, lsl #0x10
    mov r1, r1, lsl #0x10
    mov r2, r0, lsr #0x10
    mov r0, r1, lsr #0x10
    orr r0, r0, r2, lsl #16
    str r0, [r4, #0x14]
    ldr r0, [r4, #0x1c]
    cmp r0, #0
    bne @L_0210455c
    ldrh r3, [r8, #0xe]
    ldrh r2, [r8, #0xc]
    mov r0, r3, lsl #8
    mov r1, r2, lsl #8
    orr r2, r1, r2, asr #8
    orr r1, r0, r3, asr #8
    mov r0, r2, lsl #0x10
    mov r1, r1, lsl #0x10
    mov r2, r0, lsr #0x10
    mov r0, r1, lsr #0x10
    orr r0, r0, r2, lsl #16
    str r0, [r4, #0x1c]
    ldrh r1, [r7]
    mov r0, r1, lsl #8
    orr r0, r0, r1, asr #8
    strh r0, [r4, #0x18]
@L_0210455c:
    ldr r0, [r4, #0x50]
    cmp r0, #0
    bne @L_021045e4
    ldr r1, [r4, #0x48]
    sub r0, r6, #8
    cmp r0, r1
    strhi r1, [r4, #0x50]
    strls r0, [r4, #0x50]
    ldr r1, [r4, #0x4c]
    ldr r2, [r4, #0x50]
    add r0, r7, #8
    bl MI_CpuCopy
    ldr r0, [r4, #4]
    cmp r0, #3
    bne @L_021045ac
    mov r0, #0
    str r0, [r4, #4]
    ldr r0, [r4]
    bl OS_WakeupThreadDirect
    b @L_021045e4
@L_021045ac:
    ldr r3, [r4, #0x44]
    cmp r3, #0
    beq @L_021045e4
    ldr r0, [r4, #0x4c]
    ldr r1, [r4, #0x50]
    mov r2, r4
    blx r3
    cmp r0, #0
    movne r0, #0
    strne r0, [r4, #0x50]
    b @L_021045e4
@L_021045d8:
    ldr r1, [r1, #0x68]
    cmp r1, #0
    bne @L_0210443c
@L_021045e4:
    mov r0, r5
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void check_frag(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r6, #0
    mov r10, r0
    str r6, [r1]
    ldrh r3, [r10, #6]
    str r1, [sp]
    ldr r2, =0x3fff
    mov r1, r3, lsl #8
    orr r1, r1, r3, asr #8
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    str r1, [sp, #8]
    tst r1, r2
    addeq sp, sp, #0xc
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrh r3, [r10, #0xe]
    ldrh r2, [r10, #0xc]
    ldrb r4, [r10]
    mov r0, r3, lsl #8
    mov r1, r2, lsl #8
    orr r2, r1, r2, asr #8
    orr r1, r0, r3, asr #8
    mov r3, r4, lsl #0x1c
    mov r0, r2, lsl #0x10
    mov r1, r1, lsl #0x10
    mov r2, r0, lsr #0x10
    mov r1, r1, lsr #0x10
    ldrh r4, [r10, #4]
    ldr r7, =data_ov014_021272c0
    mov r0, r6
    mov r5, r3, lsr #0x1a
    orr r9, r1, r2, lsl #16
@L_02104678:
    ldrh r2, [r7, #4]
    cmp r2, #0
    beq @L_0210469c
    ldr r1, [r7]
    cmp r1, r9
    bne @L_0210469c
    ldrh r1, [r7, #6]
    cmp r1, r4
    beq @L_021046b8
@L_0210469c:
    add r0, r0, #1
    cmp r2, #0
    cmpeq r6, #0
    moveq r6, r7
    cmp r0, #8
    add r7, r7, #0x38
    blo @L_02104678
@L_021046b8:
    ldrh r2, [r10, #2]
    cmp r0, #8
    ldr r1, =0x1fff
    mov r0, r2, lsl #8
    orr r0, r0, r2, asr #8
    mov r0, r0, lsl #0x10
    rsb r0, r5, r0, lsr #16
    str r0, [sp, #4]
    ldr r0, [sp, #8]
    and r11, r0, r1
    ldr r0, [sp, #4]
    add r8, r0, r11, lsl #3
    bne @L_02104774
    cmp r6, #0
    beq @L_021046fc
    cmp r8, #0x1000
    bls @L_02104708
@L_021046fc:
    add sp, sp, #0xc
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02104708:
    ldr r1, =data_ov014_02126ac8
    add r0, r5, #0xe
    ldr r1, [r1, #0x14]
    add r0, r0, #0x1000
    mov r7, r6
    blx r1
    cmp r0, #0
    str r0, [r6, #0x34]
    addeq sp, sp, #0xc
    mov r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    str r9, [r6]
    strh r4, [r6, #6]
    strh r0, [r6, #8]
    bl OS_GetTick
    mov r0, r0, lsr #0x10
    orr r0, r0, r1, lsl #16
    str r0, [r6, #0x2c]
    ldr r1, [r6, #0x34]
    mov r0, r10
    add r1, r1, #0xe
    add r1, r1, r5
    str r1, [r6, #0x30]
    ldr r1, [r6, #0x34]
    mov r2, r5
    add r1, r1, #0xe
    bl MI_CpuCopy
@L_02104774:
    ldrh r0, [r7, #4]
    mov r6, #0
    cmp r0, #8
    beq @L_02104790
    cmp r8, #0x1000
    mov r4, r6
    bls @L_021047b0
@L_02104790:
    ldr r1, =data_ov014_02126ac8
    strh r6, [r7, #4]
    ldr r0, [r7, #0x34]
    ldr r1, [r1, #0x44]
    blx r1
    add sp, sp, #0xc
    mov r0, r6
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_021047b0:
    ldr r0, [sp, #4]
    ldr r2, [sp, #4]
    add r1, r0, #7
    ldr r0, [sp, #8]
    add r3, r11, r1, lsr #3
    tst r0, #0x2000
    streqh r8, [r7, #0xa]
    streqh r3, [r7, #8]
    ldrh r1, [r7, #4]
    add r0, r10, r5
    add r1, r7, r1, lsl #1
    strh r11, [r1, #0xc]
    ldrh r1, [r7, #4]
    add r1, r7, r1, lsl #1
    strh r3, [r1, #0x1c]
    ldrh r1, [r7, #4]
    add r1, r1, #1
    strh r1, [r7, #4]
    ldr r1, [r7, #0x30]
    add r1, r1, r11, lsl #3
    bl MI_CpuCopy
    ldrh r3, [r7, #8]
    cmp r3, #0
    addeq sp, sp, #0xc
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrh r2, [r7, #4]
    mov r6, #0
    mov r5, r6
    cmp r2, #0
    bls @L_0210485c
@L_0210482c:
    add r1, r7, r5, lsl #1
    ldrh r0, [r1, #0xc]
    cmp r0, r6
    bhi @L_02104850
    ldrh r0, [r1, #0x1c]
    cmp r6, r0
    movlo r6, r0
    movlo r5, r4
    blo @L_02104854
@L_02104850:
    add r5, r5, #1
@L_02104854:
    cmp r5, r2
    blo @L_0210482c
@L_0210485c:
    cmp r6, r3
    addlo sp, sp, #0xc
    movlo r0, #0
    ldmloia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r3, [r7, #0x34]
    ldrh r2, [r7, #0xa]
    ldrb r0, [r3, #0xe]
    mov r1, #1
    mov r0, r0, lsl #0x1c
    add r0, r2, r0, lsr #26
    mov r0, r0, lsl #0x10
    mov r2, r0, lsr #0x10
    mov r0, r2, lsl #8
    orr r0, r0, r2, asr #8
    strh r0, [r3, #0x10]
    ldr r0, [sp]
    strh r4, [r7, #4]
    str r1, [r0]
    add r0, r3, #0xe
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void dispatch_ip(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, r0
    ldrh r7, [r4, #0xe]
    ldrh r6, [r4, #0xc]
    ldrh lr, [r4, #0x12]
    ldrh r5, [r4, #0x10]
    mov r2, r6, lsl #8
    mov r3, lr, lsl #8
    mov r12, r5, lsl #8
    mov r0, r7, lsl #8
    orr r5, r12, r5, asr #8
    orr lr, r3, lr, asr #8
    orr r3, r2, r6, asr #8
    orr r12, r0, r7, asr #8
    mov r0, r5, lsl #0x10
    mov r2, lr, lsl #0x10
    mov r3, r3, lsl #0x10
    mov r12, r12, lsl #0x10
    mov lr, r0, lsr #0x10
    mov r0, r2, lsr #0x10
    mov r3, r3, lsr #0x10
    mov r2, r12, lsr #0x10
    orr r0, r0, lr, lsl #16
    orr r2, r2, r3, lsl #16
    cmp r0, r2
    beq @L_02104a04
    cmp r1, #0x14
    ldmloia sp!, {r3, r4, r5, r6, r7, pc}
    ldrb r2, [r4]
    and r12, r2, #0xf
    cmp r12, #5
    ldmltia sp!, {r3, r4, r5, r6, r7, pc}
    ldrh r3, [r4, #2]
    mov r2, r3, lsl #8
    orr r2, r2, r3, asr #8
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    cmp r2, r12, lsl #2
    ldmltia sp!, {r3, r4, r5, r6, r7, pc}
    cmp r1, r2
    ldmloia sp!, {r3, r4, r5, r6, r7, pc}
    bl ip_isme
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrb r1, [r4]
    mov r0, r4
    mov r1, r1, lsl #0x1c
    mov r1, r1, lsr #0x1a
    bl calc_checksum
    ldr r1, =0xffff
    cmp r0, r1
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldrh r12, [r4, #0x12]
    ldrh r3, [r4, #0x10]
    ldr r2, =data_ov014_02126ac8
    mov r0, r12, lsl #8
    mov r1, r3, lsl #8
    orr r3, r1, r3, asr #8
    orr r1, r0, r12, asr #8
    mov r0, r3, lsl #0x10
    mov r1, r1, lsl #0x10
    mov r3, r0, lsr #0x10
    mov r0, r1, lsr #0x10
    ldr r1, [r2, #0x50]
    orr r0, r0, r3, lsl #16
    cmp r1, r0
    bne @L_02104a04
    ldrh r12, [r4, #0xe]
    ldrh r3, [r4, #0xc]
    sub r0, r4, #8
    mov r1, r12, lsl #8
    mov r2, r3, lsl #8
    orr r3, r2, r3, asr #8
    orr r2, r1, r12, asr #8
    mov r1, r3, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r3, r1, lsr #0x10
    mov r1, r2, lsr #0x10
    orr r1, r1, r3, lsl #16
    mov r2, #1
    bl reg_arpcache
@L_02104a04:
    add r1, sp, #0
    mov r0, r4
    bl check_frag
    movs r4, r0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrh r2, [r4, #2]
    ldrb r3, [r4]
    ldrb r12, [r4, #9]
    mov r1, r2, lsl #8
    orr r1, r1, r2, asr #8
    mov r1, r1, lsl #0x10
    mov r3, r3, lsl #0x1c
    mov r2, r1, lsr #0x10
    cmp r12, #0x11
    add r1, r4, r3, lsr #26
    sub r2, r2, r3, lsr #26
    bne @L_02104a50
    bl dispatch_udp
    b @L_02104a7c
@L_02104a50:
    ldr r3, =data_ov014_02126ac8
    ldr r3, [r3, #0x50]
    cmp r3, #0
    beq @L_02104a7c
    cmp r12, #1
    bne @L_02104a70
    bl dispatch_icmp
    b @L_02104a7c
@L_02104a70:
    cmp r12, #6
    bne @L_02104a7c
    bl dispatch_tcp
@L_02104a7c:
    ldr r0, [sp]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r1, =data_ov014_02126ac8
    sub r0, r4, #0xe
    ldr r1, [r1, #0x44]
    blx r1
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void tcpip(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r5, =0x806
    add r4, sp, #0
@L_02104ab0:
    mov r0, r4
    bl receive_packet
    ldr r3, [sp]
    cmp r3, #0x22
    bls @L_02104b08
    ldrh r2, [r0, #0xc]
    mov r1, r2, lsl #8
    orr r1, r1, r2, asr #8
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    cmp r1, #0x800
    beq @L_02104aec
    cmp r1, r5
    beq @L_02104afc
    b @L_02104b08
@L_02104aec:
    add r0, r0, #0xe
    sub r1, r3, #0xe
    bl dispatch_ip
    b @L_02104b08
@L_02104afc:
    add r0, r0, #0xe
    sub r1, r3, #0xe
    bl dispatch_arp
@L_02104b08:
    bl throw_packet
    b @L_02104ab0
}

extern "C" asm s32 CPS_SocGetEport(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    ldr r0, =OSi_ThreadInfo
    ldr r2, =data_ov014_02126ac8
    ldr r0, [r0, #8]
    ldr r1, =0x1388
    mov r4, #0x400
    mov r3, #1
    mov r5, #0
@L_02104b34:
    ldrh r12, [r2, #6]
    mov r6, r5
    add r12, r12, #1
    strh r12, [r2, #6]
    ldrh r12, [r2, #6]
    cmp r12, #0x400
    blo @L_02104b58
    cmp r12, r1
    blo @L_02104b5c
@L_02104b58:
    strh r4, [r2, #6]
@L_02104b5c:
    mov r7, r0
    cmp r0, #0
    beq @L_02104b9c
    ldrh r8, [r2, #6]
@L_02104b6c:
    ldr lr, [r7, #0xa4]
    cmp lr, #0
    ldrne r12, [lr]
    cmpne r12, #0
    beq @L_02104b90
    ldrh r12, [lr, #0xa]
    cmp r12, r8
    moveq r6, r3
    beq @L_02104b9c
@L_02104b90:
    ldr r7, [r7, #0x68]
    cmp r7, #0
    bne @L_02104b6c
@L_02104b9c:
    cmp r6, #0
    bne @L_02104b34
    ldr r0, =data_ov014_02126ac8
    ldrh r0, [r0, #6]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void get_seqno(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, =data_ov014_02126ac8
    ldr r12, [r1, #0x80]
    ldr r0, [r1, #0x78]
    ldr r2, [r1, #0x7c]
    umull lr, r3, r12, r0
    mla r3, r12, r2, r3
    ldr r2, [r1, #0x84]
    ldr r12, [r1, #0x88]
    mla r3, r2, r0, r3
    ldr r0, [r1, #0x8c]
    adds r2, r12, lr
    str r2, [r1, #0x78]
    adc r0, r0, r3
    str r0, [r1, #0x7c]
    ldmia sp!, {r3, pc}
}

extern "C" void CPS_SocRegister(s32 arg0)
{
    *(s32 *)(*(u8 * *)(OSi_ThreadInfo + 0x4) + 0xA4) = arg0;
}

extern "C" s32 CPS_SocUnRegister(void)
{
    u8 *t0 = (u8 *)*(s32 *)(OSi_ThreadInfo + 0x4);
    *(s32 *)(t0 + 0xA4) = 0;
    return (s32)t0;
}

extern "C" s32 CPS_SocDatagramMode(void)
{
    s32 r0;
    u8 *r1;
    r0 = (s32)*(u8 * *)(OSi_ThreadInfo + 0x4);
    r1 = (u8 *)*(s32 *)(*(u8 * *)(OSi_ThreadInfo + 0x4) + 0xA4);
    if ((s32)r1 != 0) {
        *(u8 *)(r1 + 0x8) = 10;
        *(s32 *)(r1 + 0x50) = 0;
        r0 = 0;
    }
    return r0;
}

extern "C" void CPS_SocBind(u16 arg0, u16 arg1, s32 arg2)
{
    u8 *r4;
    s32 v0;
    u16 t0;
    if (*(s32 *)(*(u8 * *)(OSi_ThreadInfo + 0x4) + 0xA4) == 0)
        return;
    r4 = (u8 *)*(s32 *)(*(u8 * *)(OSi_ThreadInfo + 0x4) + 0xA4);
    if (arg2 == 0x7F000001) {
        arg2 = *(s32 *)(data_ov014_02126ac8 + 0x50);
    }
    *(u16 *)(r4 + 0x1A) = arg1;
    t0 = *(u16 *)(r4 + 0x1A);
    *(u16 *)(r4 + 0x18) = t0;
    *(s32 *)(r4 + 0x20) = arg2;
    *(s32 *)(r4 + 0x1C) = arg2;
    if (arg0 != 0) {
        *(u16 *)(r4 + 0xA) = arg0;
        return;
    } else {
        v0 = CPS_SocGetEport();
        *(u16 *)(r4 + 0xA) = v0;
        return;
    }
}

extern "C" void CPS_SocUse(void)
{
    u8 *g = *(u8 **)((u8 *)OSi_ThreadInfo + 4);
    u8 *p = *(u8 **)(g + 0xA4);
    if (p == 0)
        return;
    *(u8 **)p = g;
    p[8] = 0;
    *(s32 *)(p + 0x50) = 0;
    ((void (*)(u8 *, s32, s32))MI_CpuFill8)(p + 0x70, 0, 0x30);
    *(s32 *)(p + 0x6C) = 0;
    *(s32 *)(p + 0x44) = 0;
    p[0x33] = 0;
}

extern "C" void CPS_SocRelease(void)
{
    if ((s32)*(u8 * *)(*(u8 * *)(OSi_ThreadInfo + 0x4) + 0xA4) != 0)
        *(s32 *)(*(u8 * *)(*(u8 * *)(OSi_ThreadInfo + 0x4) + 0xA4)) = 0;
    return;
}

extern "C" void CPS_SocDup(u8 *arg0)
{
    *(s32 *)(arg0 + 0xA4) = *(s32 *)(*(u8 * *)(OSi_ThreadInfo + 0x4) + 0xA4);
}

extern "C" void CPS_SetUdpCallback(s32 arg0)
{
    if ((s32)*(u8 * *)(*(u8 * *)(OSi_ThreadInfo + 0x4) + 0xA4) != 0)
        *(s32 *)(*(u8 * *)(*(u8 * *)(OSi_ThreadInfo + 0x4) + 0xA4) + 0x44) = arg0;
    return;
}

extern "C" asm s32 CPSi_TcpConnectRaw(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    bl get_seqno
    mov r7, #0
    ldr r4, =data_ov014_02126ac8
    mov r8, r0
    mov r5, #1
    mov r11, r7
    mov r6, #2
@L_02104d78:
    str r8, [r10, #0x34]
    strb r6, [r10, #8]
    bl OS_GetTick
    mov r2, r0, lsr #0x10
    orr r2, r2, r1, lsl #16
    mov r0, r10
    mov r1, r6
    str r2, [r10, #0x10]
    bl _tcp_send_handshake
    bl OS_DisableInterrupts
    ldrb r1, [r10, #8]
    mov r9, r0
    cmp r1, #2
    bne @L_02104dc8
    ldr r0, [r4, #0x50]
    cmp r0, #0
    beq @L_02104dc8
    mov r0, r11
    str r5, [r10, #4]
    bl OS_SleepThread
@L_02104dc8:
    mov r0, r9
    bl OS_RestoreInterrupts
    ldrb r0, [r10, #8]
    cmp r0, #4
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r4, #0x50]
    cmp r0, #0
    beq @L_02104df8
    add r7, r7, #1
    cmp r7, #3
    blo @L_02104d78
@L_02104df8:
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 CPS_TcpConnect(void)
{
    u8 *r0;
    s32 r1;
    s32 v0;
    s32 v1;
    r0 = (u8 *)*(s32 *)(*(u8 * *)(((u8 *)&OSi_ThreadInfo) + 0x4) + 0xA4);
    if ((s32)r0 != 0) {
        r1 = *(u8 *)(r0 + 0x9);
        if (r1 != 0) {
            v0 = CPSi_SslConnect((s32)r0, r1);
            return v0;
        } else {
            v1 = CPSi_TcpConnectRaw((s32)r0, r1);
            return v1;
        }
    } else {
        return 1;
    }
}

extern "C" asm s32 CPSi_TcpShutdownRaw(...)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl OS_YieldThread
    bl OS_DisableInterrupts
    ldrb r2, [r4, #8]
    add r1, r2, #0xfd
    and r1, r1, #0xff
    cmp r1, #1
    bhi @L_02104e80
    mov r1, #7
    strb r1, [r4, #8]
    bl OS_RestoreInterrupts
    mov r0, r4
    bl _tcp_send_finack
    ldmia sp!, {r4, pc}
@L_02104e80:
    cmp r2, #0
    beq @L_02104e9c
    bl OS_RestoreInterrupts
    mov r0, r4
    mov r1, #2
    bl _tcp_send_ack
    ldmia sp!, {r4, pc}
@L_02104e9c:
    bl OS_RestoreInterrupts
    ldmia sp!, {r4, pc}
}

extern "C" s32 CPS_TcpShutdown(void)
{
    u8 *r4;
    s32 v1;
    if (*(s32 *)(*(u8 * *)(OSi_ThreadInfo + 0x4) + 0xA4) == 0)
        return (s32)*(u8 * *)(OSi_ThreadInfo + 0x4);
    r4 = (u8 *)*(s32 *)(*(u8 * *)(OSi_ThreadInfo + 0x4) + 0xA4);
    if (*(u8 *)(r4 + 0x9) != 0) {
        CPSi_SslShutdown((s32)r4);
    }
    v1 = CPSi_TcpShutdownRaw((s32)r4);
    return v1;
}

extern "C" void CPS_TcpClose(void)
{
    u8 *p = *(u8 **)(*(u8 **)((u8 *)OSi_ThreadInfo + 4) + 0xA4);
    u8 *d;
    s32 t;
    if (p == 0)
        return;
    if (p[9] != 0)
        ((s32 (*)(...))CPSi_SslClose)(p);
    t = (s32)(((u64 (*)(void))OS_GetTick)() >> 16);
    d = (u8 *)data_ov014_02126ac8;
    while ((*(s32 (**)(void))(d + 0x18))() != 0 && p[8] != 0 && (s32)(((u64 (*)(void))OS_GetTick)() >> 16) - t < 0x27)
        ((s32 (*)(...))OS_YieldThread__)();
    p[8] = 0;
}

extern "C" s32 udp_read_raw(s32 arg0, u8 *arg1, s32 arg2, s32 arg3)
{
    s32 r4;
    s32 r5;
    s32 r6;
    s32 r7;
    u8 *r8;
    u8 *r9;
    s32 v0 = OS_DisableInterrupts(arg0, (s32)arg1, arg2, arg3);
    r6 = *(s32 *)(arg1 + 0x50);
    r7 = v0;
    r8 = arg1;
    r9 = (u8 *)arg0;
    if (r6 == 0) {
        r4 = 0;
        r5 = 3;
        do {
            *(s32 *)(r8 + 0x4) = r5;
            OS_SleepThread(r4);
            r6 = *(s32 *)(r8 + 0x50);
        } while (r6 == 0);
    }
    OS_RestoreInterrupts(r7);
    *(s32 *)(r9) = r6;
    return *(s32 *)(r8 + 0x4C);
}

extern "C" s32 CPSi_TcpReadRaw(s32 arg0, s32 arg1)
{
    u8 *r4;
    u8 *r5;
    s32 r6;
    s32 r7;
    s32 r8;
    s32 v1;
    s32 t0;
    r4 = (u8 *)arg1;
    r5 = (u8 *)arg0;
    if (*(u8 *)(r4 + 0x8) == 4) {
        _tcp_send_ack((s32)r4, 1);
    }
    if ((*(s32 *)(r4 + 0x50) == 0 && *(u8 *)(r4 + 0x8) == 4)) {
        v1 = OS_DisableInterrupts();
        r8 = v1;
        r7 = 2;
        r6 = 0;
        while ((*(s32 *)(r4 + 0x50) == 0 && *(u8 *)(r4 + 0x8) == 4)) {
            *(s32 *)(r4 + 0x4) = r7;
            OS_SleepThread(r6);
        }
        OS_RestoreInterrupts(r8);
    } else {
        OS_YieldThread();
    }
    t0 = *(s32 *)(r4 + 0x50);
    *(s32 *)(r5) = t0;
    if (t0 != 0) {
        arg0 = *(s32 *)(r4 + 0x4C);
    } else {
        arg0 = 0;
    }
    return arg0;
}

extern "C" s32 CPS_SocRead(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3)
{
    s32 v0;
    s32 v1;
    s32 v2;
    arg1 = (u8 *)*(s32 *)(*(u8 * *)(((u8 *)&OSi_ThreadInfo) + 0x4) + 0xA4);
    if ((s32)arg1 != 0) {
        arg2 = ((*(u8 *)(arg1 + 0x8) + 0xF6) & 0xFF);
        if ((u32)arg2 <= (u32)1) {
            v0 = udp_read_raw((s32)arg0, arg1, arg2, arg3);
            return v0;
        } else {
            if (*(u8 *)(arg1 + 0x9) != 0) {
                v1 = CPSi_SslRead();
                return v1;
            } else {
                v2 = CPSi_TcpReadRaw((s32)arg0, (s32)arg1);
                return v2;
            }
        }
    } else {
        *(s32 *)(arg0) = 0;
        return 0;
    }
}

extern "C" asm s32 CPSi_SocConsumeRaw(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r7, r1
    mov r9, r0
    mov r8, #0
    bl OS_DisableInterrupts
    ldr r6, [r7, #0x50]
    ldr r1, [r7, #0x48]
    mov r4, r0
    cmp r6, r1
    mov r5, r8
    bne @L_021050ec
    cmp r9, #0
    movne r5, #1
@L_021050ec:
    cmp r9, r6
    strhs r8, [r7, #0x50]
    bhs @L_0210510c
    ldr r1, [r7, #0x4c]
    sub r2, r6, r9
    add r0, r1, r9
    str r2, [r7, #0x50]
    bl MI_CpuMove
@L_0210510c:
    ldr r2, [r7, #0x70]
    cmp r2, #0
    beq @L_021051cc
    ldr r0, [r7, #0x50]
    subs r6, r6, r0
    beq @L_021051cc
    mov r3, #0
    mov r0, #0xc
    b @L_02105134
@L_02105130:
    add r3, r3, #1
@L_02105134:
    cmp r3, #4
    bge @L_0210514c
    mla r1, r3, r0, r7
    ldr r1, [r1, #0x70]
    cmp r1, #0
    bne @L_02105130
@L_0210514c:
    cmp r2, r6
    bls @L_021051b8
    sub r1, r3, #1
    mov r0, #0xc
    mla r0, r1, r0, r7
    ldr r12, [r7, #0x4c]
    ldr r3, [r0, #0x70]
    ldr r1, [r0, #0x74]
    add r0, r12, r2
    add r3, r3, r1
    sub r1, r0, r6
    sub r2, r3, r2
    bl MI_CpuMove
    mov r3, #0
    mov r0, #0xc
    b @L_0210519c
@L_0210518c:
    ldr r1, [r2, #0x70]
    add r3, r3, #1
    sub r1, r1, r6
    str r1, [r2, #0x70]
@L_0210519c:
    cmp r3, #4
    bge @L_021051cc
    mla r2, r3, r0, r7
    ldr r1, [r2, #0x70]
    cmp r1, #0
    bne @L_0210518c
    b @L_021051cc
@L_021051b8:
    add r0, r7, #0x70
    mov r1, #0
    mov r2, #0x30
    bl MI_CpuFill8
    bl OS_Terminate
@L_021051cc:
    mov r0, r4
    bl OS_RestoreInterrupts
    ldrb r0, [r7, #8]
    cmp r0, #0xa
    cmpne r0, #0xb
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r0, [r7, #0x50]
    cmp r0, #0
    beq @L_021051f8
    cmp r5, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_021051f8:
    mov r0, r7
    mov r1, #0
    bl _tcp_send_ack
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" void CPS_SocConsume(s32 arg0)
{
    s32 r1;
    s32 r2;
    if ((s32)*(u8 * *)(*(u8 * *)(((u8 *)&OSi_ThreadInfo) + 0x4) + 0xA4) == 0)
        return;
    r1 = (s32)*(u8 * *)(*(u8 * *)(((u8 *)&OSi_ThreadInfo) + 0x4) + 0xA4);
    r2 = *(u8 *)(*(u8 * *)(*(u8 * *)(((u8 *)&OSi_ThreadInfo) + 0x4) + 0xA4) + 0x9);
    if (r2 != 0) {
        CPSi_SslConsume(arg0, r1, r2);
        return;
    } else {
        CPSi_SocConsumeRaw(arg0, r1, r2);
        return;
    }
}

extern "C" asm s32 tcp_write_do(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r8, r2
    ldr r6, [r8, #0x40]
    movs r11, r3
    mov r10, r0
    movne r5, #1
    mov r0, r6, lsl #1
    mov r9, r1
    ldreqh r5, [r8, #0x38]
    add r7, r0, #4
    b @L_021052e0
@L_0210526c:
    ldr r0, =data_ov014_02126ac8
    ldrh r4, [r8, #0x3a]
    ldrh r0, [r0, #4]
    ldr r1, [r8, #0x40]
    cmp r4, r5
    movhs r4, r5
    cmp r0, r4
    movlo r4, r0
    cmp r11, #0
    biceq r4, r4, #1
    cmp r9, r4
    sub r0, r1, r6
    movlo r4, r9
    adds r0, r7, r0
    moveq r4, #0
    mov r6, r1
    sub r7, r0, #1
    cmp r4, #0
    beq @L_021052f4
    mov r0, r10
    mov r1, r4
    mov r2, r8
    mov r3, #0x18
    bl _send_tcp
    mov r4, r0
    bl OS_YieldThread
    sub r5, r5, r4
    add r10, r10, r4
    sub r9, r9, r4
@L_021052e0:
    cmp r9, #0
    beq @L_021052f4
    ldrb r0, [r8, #8]
    cmp r0, #4
    beq @L_0210526c
@L_021052f4:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 tcp_write_do2(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5)
{
    s32 v0;
    s32 v1;
    v0 = tcp_write_do(arg0, arg1, arg4, arg5);
    if ((v0 == 0 || arg3 == 0))
        return v0;
    v1 = tcp_write_do(arg2, arg3, arg4, 0);
    return v1;
}

extern "C" asm void CPSi_TcpWrite2Raw(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    mov r4, #0
    mov r11, r0
    ldr r8, [sp, #0x38]
    mov r0, r4
    str r4, [sp, #0x10]
    mov r10, r1
    mov r9, r2
    str r3, [sp, #8]
    mov r6, r4
    str r0, [r8, #0x40]
    bl OS_GetTick
    mov r0, r0, lsr #0x10
    orr r0, r0, r1, lsl #16
    str r0, [sp, #0xc]
    b @L_021054f4
@L_02105380:
    ldr r7, [r8, #0x34]
    ldr r3, [sp, #8]
    str r8, [sp]
    mov r0, r11
    mov r1, r10
    mov r2, r9
    str r6, [sp, #4]
    bl tcp_write_do2
    bl OS_GetTick
    mov r5, r0, lsr #0x10
    ldr r4, =data_ov014_02126ac8
    orr r5, r5, r1, lsl #16
@L_021053b0:
    bl OS_YieldThread__
    ldr r0, [r4, #0x18]
    blx r0
    cmp r0, #0
    beq @L_02105408
    ldrb r0, [r8, #8]
    cmp r0, #4
    bne @L_02105408
    ldr r1, [r8, #0x34]
    ldr r0, [r8, #0x3c]
    cmp r1, r0
    beq @L_02105408
    bl OS_GetTick
    mov r0, r0, lsr #0x10
    orr r0, r0, r1, lsl #16
    sub r0, r0, r5
    cmp r0, #0xf
    bge @L_02105408
    cmp r6, #0
    ldrneh r0, [r8, #0x38]
    cmpne r0, #0
    beq @L_021053b0
@L_02105408:
    ldr r1, [r8, #0x3c]
    ldr r0, [r8, #0x34]
    sub r5, r1, r7
    sub r0, r0, r7
    cmp r5, r0
    movhi r5, #0
    ldr r0, [sp, #0x10]
    cmp r5, #0
    add r0, r0, r5
    str r0, [sp, #0x10]
    beq @L_02105444
    bl OS_GetTick
    mov r0, r0, lsr #0x10
    orr r0, r0, r1, lsl #16
    str r0, [sp, #0xc]
@L_02105444:
    ldr r0, [r8, #0x3c]
    str r0, [r8, #0x34]
    ldrb r0, [r8, #8]
    cmp r0, #4
    ldreqh r0, [r8, #0x38]
    cmpeq r0, #0
    cmpeq r5, #0
    bne @L_021054c8
    cmp r6, #0
    bne @L_021054cc
    bl OS_GetTick
    mov r7, r0, lsr #0x10
    orr r7, r7, r1, lsl #16
    ldr r4, =data_ov014_02126ac8
    b @L_02105490
@L_02105480:
    bl OS_YieldThread__
    ldrh r0, [r8, #0x38]
    cmp r0, #0
    bne @L_021054b8
@L_02105490:
    ldr r0, [r4, #0x18]
    blx r0
    cmp r0, #0
    beq @L_021054b8
    bl OS_GetTick
    mov r0, r0, lsr #0x10
    orr r0, r0, r1, lsl #16
    sub r0, r0, r7
    cmp r0, #0xf
    blt @L_02105480
@L_021054b8:
    ldrh r0, [r8, #0x38]
    cmp r0, #0
    moveq r6, #1
    b @L_021054cc
@L_021054c8:
    mov r6, #0
@L_021054cc:
    cmp r5, r10
    addlo r11, r11, r5
    sublo r10, r10, r5
    blo @L_021054f4
    sub r1, r5, r10
    ldr r0, [sp, #8]
    add r11, r9, r1
    mov r9, #0
    sub r10, r0, r1
    str r9, [sp, #8]
@L_021054f4:
    ldr r0, =data_ov014_02126ac8
    ldr r0, [r0, #0x18]
    blx r0
    cmp r0, #0
    cmpne r10, #0
    beq @L_02105534
    ldrb r0, [r8, #8]
    cmp r0, #4
    bne @L_02105534
    bl OS_GetTick
    mov r2, r0, lsr #0x10
    ldr r0, [sp, #0xc]
    orr r2, r2, r1, lsl #16
    sub r0, r2, r0
    cmp r0, #0x9f
    blt @L_02105380
@L_02105534:
    ldr r0, [sp, #0x10]
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 CPSi_SocWrite2(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r12, =OSi_ThreadInfo
    mov r7, r1
    ldr r12, [r12, #4]
    mov r6, r2
    ldr r4, [r12, #0xa4]
    mov r5, r3
    cmp r4, #0
    beq @L_02105604
    ldrb r12, [r4, #8]
    cmp r12, #0xa
    bne @L_021055a4
    cmp r7, #0
    beq @L_02105584
    mov r2, r4
    bl send_udp
@L_02105584:
    cmp r5, #0
    beq @L_0210559c
    mov r0, r6
    mov r1, r5
    mov r2, r4
    bl send_udp
@L_0210559c:
    add r0, r7, r5
    b @L_021055f4
@L_021055a4:
    cmp r12, #0xb
    bne @L_021055d8
    cmp r7, #0
    beq @L_021055bc
    mov r2, r4
    bl send_ping
@L_021055bc:
    cmp r5, #0
    beq @L_021055d4
    mov r0, r6
    mov r1, r5
    mov r2, r4
    bl send_ping
@L_021055d4:
    b @L_0210559c
@L_021055d8:
    ldrb r12, [r4, #9]
    cmp r12, #0
    str r4, [sp]
    beq @L_021055f0
    bl CPSi_SslWrite2
    b @L_021055f4
@L_021055f0:
    bl CPSi_TcpWrite2Raw
@L_021055f4:
    ldr r1, =data_ov014_02126ac8
    ldrb r1, [r1]
    cmp r1, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
@L_02105604:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" s32 CPS_SocWrite(s32 arg0, s32 arg1)
{
    s32 r2;
    s32 r4;
    u8 *r5;
    s32 v0;
    s32 v2;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    r5 = (u8 *)*(s32 *)(*(u8 * *)(((u8 *)&OSi_ThreadInfo) + 0x4) + 0xA4);
    if ((s32)r5 != 0) {
        r4 = *(s32 *)(r5 + 0x6C);
        if (r4 != 0) {
            t0 = *(s32 *)(r5 + 0x68);
            v0 = CPSi_SocWrite2(t0, r4, arg0, arg1);
            r2 = *(s32 *)(r5 + 0x6C);
            r4 = v0;
            if ((u32)r4 < (u32)r2) {
                t1 = (*(s32 *)(r5 + 0x68) + r4);
                t2 = *(s32 *)(r5 + 0x68);
                MI_CpuMove(t1, t2, (r2 - r4));
                t3 = (*(s32 *)(r5 + 0x6C) - r4);
                *(s32 *)(r5 + 0x6C) = t3;
                return 0;
            } else {
                *(s32 *)(r5 + 0x6C) = 0;
                return (r4 - r2);
            }
        } else {
            v2 = CPSi_SocWrite2(arg0, arg1, 0, 0);
            return v2;
        }
    } else {
        return 0;
    }
}

extern "C" s32 CPS_SocGetLength(void)
{
    u8 *r4;
    s32 v1;
    r4 = (u8 *)*(s32 *)(*(u8 * *)(OSi_ThreadInfo + 0x4) + 0xA4);
    if ((s32)r4 != 0) {
        if (*(u8 *)(r4 + 0x8) == 4) {
            _tcp_send_ack((s32)r4, 1);
        }
        if (*(u8 *)(r4 + 0x9) != 0) {
            v1 = CPSi_SslGetLength((s32)r4);
            return v1;
        } else {
            if (*(s32 *)(r4 + 0x50) != 0)
                return *(s32 *)(r4 + 0x50);
            if (*(u8 *)(r4 + 0x8) == 4)
                return *(s32 *)(r4 + 0x50);
            return ((u32)((*(u8 *)(r4 + 0x8) + 0xF6) & 0xFF) > (u32)1 ? -1 : *(s32 *)(r4 + 0x50));
        }
    } else {
        return 0;
    }
}

extern "C" s32 CPS_SocFlush(void)
{
    s32 v0;
    s32 t0;
    s32 t1;
    u8 *t2;
    if ((s32)*(u8 * *)(*(u8 * *)(OSi_ThreadInfo + 0x4) + 0xA4) == 0)
        return (s32)*(u8 * *)(OSi_ThreadInfo + 0x4);
    if (*(s32 *)(*(u8 * *)(*(u8 * *)(OSi_ThreadInfo + 0x4) + 0xA4) + 0x6C) == 0)
        return (s32)*(u8 * *)(OSi_ThreadInfo + 0x4);
    t0 = *(s32 *)(*(u8 * *)(*(u8 * *)(OSi_ThreadInfo + 0x4) + 0xA4) + 0x68);
    t1 = *(s32 *)(*(u8 * *)(*(u8 * *)(OSi_ThreadInfo + 0x4) + 0xA4) + 0x6C);
    t2 = *(u8 * *)(*(u8 * *)(OSi_ThreadInfo + 0x4) + 0xA4);
    v0 = CPSi_SocWrite2(t0, t1, 0, 0);
    *(s32 *)(t2 + 0x6C) = 0;
    return v0;
}

extern "C" asm s32 garprequest(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r4, =data_ov014_02126ac8
    ldr r0, [r4, #0x50]
    bl send_arprequest
    mov r0, #0x64
    bl OS_Sleep
    ldr r0, [r4, #0x50]
    bl send_arprequest
    bl OS_GetTick
    mov r6, r0, lsr #0x10
    orr r6, r6, r1, lsl #16
    mov r5, #0x64
    b @L_021057b4
@L_0210579c:
    ldrb r0, [r4, #1]
    cmp r0, #0
    movne r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    mov r0, r5
    bl OS_Sleep
@L_021057b4:
    ldr r0, [r4, #0x18]
    blx r0
    cmp r0, #0
    beq @L_021057dc
    bl OS_GetTick
    mov r0, r0, lsr #0x10
    orr r0, r0, r1, lsl #16
    sub r0, r0, r6
    cmp r0, #0x17
    blt @L_0210579c
@L_021057dc:
    mov r0, #1
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 set_fixed_ip(void)
{
    s32 v1;
    s32 v2;
    s32 t0;
    s32 t1;
    t0 = *(s32 *)(data_ov014_02126ac8 + 0x28);
    ((s32 (*)(...))*(s32 *)(data_ov014_02126ac8 + 0x28))(t0);
    if (*(s32 *)(data_ov014_02126ac8 + 0x50) == 0)
        return *(s32 *)(data_ov014_02126ac8 + 0x50);
    t1 = *(s32 *)(data_ov014_02126ac8 + 0x50);
    v1 = garprequest(t1);
    if (v1 != 0)
        return v1;
    v2 = reset_network_vars(4);
    return v2;
}

extern "C" asm void scavenger(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    ldr r4, =data_ov014_02126c40
    mov r5, #0
    ldr r3, =data_ov014_02126ac8
    mov r0, r4
    mov r1, r5
    mov r2, #0xa0
    str r5, [r3, #0x58]
    bl MI_CpuFill8
    mov r2, #0x180
    ldr r0, =data_ov014_02127140
    str r2, [r4, #0x48]
    str r0, [r4, #0x4c]
    ldr r1, =data_ov014_02126fc0
    str r2, [r4, #0x54]
    mov r0, r4
    str r1, [r4, #0x58]
    bl CPS_SocRegister
    mov r6, #1
    ldr r0, =data_ov014_02126ac8
    str r6, [sp, #4]
    str r6, [sp]
    str r6, [r0, #0x4c]
@L_02105880:
    mov r0, #0x3e8
    bl OS_Sleep
    ldr r0, =data_ov014_02126ac8
    ldr r0, [r0, #0x58]
    cmp r0, #0
    bne @L_02105c1c
    bl OS_GetTick
    mov r7, r0, lsr #0x10
    ldr r0, =data_ov014_02126ac8
    orr r7, r7, r1, lsl #16
    ldr r0, [r0, #0x18]
    blx r0
    cmp r0, #0
    beq @L_02105a80
    ldr r0, [sp, #4]
    subs r0, r0, #1
    str r0, [sp, #4]
    bne @L_02105a94
    ldr r0, =data_ov014_02126ac8
    ldr r0, [r0, #0xc]
    tst r0, #1
    beq @L_021058ec
    cmp r5, #0
    bne @L_02105a94
    bl set_fixed_ip
    mov r5, #1
    b @L_02105a94
@L_021058ec:
    cmp r5, #3
    addls pc, pc, r5, lsl #2
    b @L_02105a94
    b @L_02105908
    b @L_021059a0
    b @L_02105a08
    b @L_02105a94
@L_02105908:
    ldr r0, [sp]
    cmp r0, #0
    ldrne r0, =data_ov014_02126ac8
    movne r1, #2
    strne r1, [r0, #0x4c]
    movne r0, #0
    strne r0, [sp]
    bl dhcp_discover_server
    cmp r0, #0
    beq @L_02105948
    mov r4, #0
    add r0, sp, #4
    mov r1, r4
    bl dhcp_request_server
    cmp r0, #0
    bne @L_0210594c
@L_02105948:
    b @L_02105978
@L_0210594c:
    ldr r0, =data_ov014_02126ac8
    ldr r0, [r0, #0x48]
    cmp r0, #0
    beq @L_02105968
    blx r0
    cmp r0, #0
    moveq r4, #1
@L_02105968:
    cmp r4, #0
    beq @L_02105984
@L_02105970:
    mov r0, #5
    bl reset_network_vars
@L_02105978:
    bl set_fixed_ip
@L_0210597c:
    mov r5, #3
    b @L_02105a94
@L_02105984:
    mov r5, #1
    bl garprequest
    cmp r0, #0
    bne @L_02105a94
@L_02105994:
    mov r0, #4
    bl reset_network_vars
    b @L_0210597c
@L_021059a0:
    add r0, sp, #4
    mov r1, #1
    bl dhcp_request_server
    cmp r0, #0
    bne @L_021059c4
    ldr r0, [sp, #4]
    cmp r0, #0x3c
    movlo r5, #2
    blo @L_02105a94
@L_021059c4:
    ldr r0, =data_ov014_02126ac8
    ldr r0, [r0, #0x48]
    cmp r0, #0
    beq @L_021059e8
    blx r0
    cmp r0, #0
    moveq r0, #1
    movne r0, #0
    b @L_021059ec
@L_021059e8:
    mov r0, #0
@L_021059ec:
    cmp r0, #0
    beq @L_021059f8
    b @L_02105970
@L_021059f8:
    bl garprequest
    cmp r0, #0
    bne @L_02105a94
    b @L_02105994
@L_02105a08:
    add r0, sp, #4
    mov r1, #2
    bl dhcp_request_server
    cmp r0, #0
    beq @L_02105a64
    ldr r0, =data_ov014_02126ac8
    ldr r0, [r0, #0x48]
    cmp r0, #0
    beq @L_02105a40
    blx r0
    cmp r0, #0
    moveq r0, #1
    movne r0, #0
    b @L_02105a44
@L_02105a40:
    mov r0, #0
@L_02105a44:
    cmp r0, #0
    beq @L_02105a50
    b @L_02105970
@L_02105a50:
    mov r5, #1
    bl garprequest
    cmp r0, #0
    bne @L_02105a94
    b @L_02105994
@L_02105a64:
    ldr r0, [sp, #4]
    cmp r0, #0x3c
    bhs @L_02105a94
    mov r0, #3
    bl reset_network_vars
    mov r6, #1
    b @L_02105a8c
@L_02105a80:
    mov r6, #1
    mov r0, r6
    bl reset_network_vars
@L_02105a8c:
    str r6, [sp, #4]
    mov r5, #0
@L_02105a94:
    ldr r0, =data_ov014_02126be0
    ldr r4, =0x3bd
    mov r2, #0
    mov r8, #0xc
@L_02105aa4:
    mul r1, r2, r8
    ldr r3, [r0, r1]
    add r1, r0, r1
    cmp r3, #0
    ldrneh r3, [r1, #0xa]
    add r2, r2, #1
    subne r3, r7, r3
    movne r3, r3, lsl #0x10
    cmpne r4, r3, asr #16
    movlt r3, #0
    strlt r3, [r1]
    cmp r2, #8
    blt @L_02105aa4
    ldr r0, =data_ov014_02126ac8
    mov r9, #1
    ldr r0, [r0, #0x2c]
    mov r8, #0
    cmp r0, #0
    beq @L_02105b00
    subs r6, r6, #1
    bne @L_02105b00
    bl send_arprequest
    mov r6, #0x69
@L_02105b00:
    ldr r0, =OSi_ThreadInfo
    ldr r4, [r0, #8]
    cmp r4, #0
    beq @L_02105bb0
@L_02105b10:
    ldr r0, [r4, #0xa4]
    cmp r0, #0
    ldrne r1, [r0]
    cmpne r1, #0
    beq @L_02105ba4
    ldrb r2, [r0, #8]
    cmp r2, #3
    bne @L_02105b58
    ldr r1, [r0, #0x10]
    sub r1, r7, r1
    cmp r1, #0x27
    ble @L_02105b58
    strb r9, [r0, #8]
    ldrh r1, [r0, #0x1a]
    strh r1, [r0, #0x18]
    ldr r1, [r0, #0x20]
    str r1, [r0, #0x1c]
    b @L_02105ba4
@L_02105b58:
    cmp r2, #2
    bne @L_02105b84
    ldr r1, [r0, #0x10]
    sub r1, r7, r1
    cmp r1, #0x27
    ble @L_02105b84
    ldr r1, [r0, #4]
    cmp r1, #1
    bne @L_02105ba4
    strb r8, [r0, #8]
    b @L_02105b98
@L_02105b84:
    cmp r2, #4
    beq @L_02105ba4
    ldr r1, [r0, #4]
    cmp r1, #2
    bne @L_02105ba4
@L_02105b98:
    str r8, [r0, #4]
    ldr r0, [r0]
    bl OS_WakeupThreadDirect
@L_02105ba4:
    ldr r4, [r4, #0x68]
    cmp r4, #0
    bne @L_02105b10
@L_02105bb0:
    mov r10, #0
    ldr r11, =data_ov014_02126ac8
    ldr r4, =data_ov014_021272c0
    mov r9, r10
@L_02105bc0:
    mov r0, #0x38
    mla r8, r9, r0, r4
    ldrh r0, [r8, #4]
    cmp r0, #0
    ldrne r0, [r8, #0x2c]
    subne r0, r7, r0
    cmpne r0, #0xef
    ble @L_02105bf0
    ldr r0, [r8, #0x34]
    ldr r1, [r11, #0x44]
    blx r1
    strh r10, [r8, #4]
@L_02105bf0:
    add r9, r9, #1
    cmp r9, #8
    blt @L_02105bc0
    mov r0, r7
    bl CPSi_SslPeriodical
    ldr r0, =data_ov014_02126ac8
    ldr r0, [r0, #0x34]
    cmp r0, #0
    beq @L_02105880
    blx r0
    b @L_02105880
@L_02105c1c:
    ldr r0, =data_ov014_02126ac8
    ldr r0, [r0, #0xc]
    tst r0, #1
    bne @L_02105c38
    cmp r5, #3
    beq @L_02105c38
    bl dhcp_release_server
@L_02105c38:
    bl CPS_SocUnRegister
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
