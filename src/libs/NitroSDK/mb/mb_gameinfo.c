// (asm for now)

void mystrlen(void);
void MB_AddGameInfo(void);
void MB_InitSendGameInfoStatus(void);
void MBi_ClearSendStatus(void);
void MB_SendGameInfoBeacon(void);
void MBi_ReadyBeaconSendStatus(void);
void MBi_InitSendFixedBeacon(void);
void MBi_SendFixedBeacon(void);
void MBi_InitSendVolatBeacon(void);
void MBi_SendVolatBeacon(void);
void MBi_CheckMBParent(void);

extern char mbgameinfo_sUnlockFunc[];
void MBi_GetGgid(void);
void MBi_GetTgid(void);
extern char mbgameinfo_bsendBuff[];
void WM_SetGameInfo(void);
extern char data_ov089_0217926e[];
void MIi_CpuClear16(void);
void MIi_CpuCopy16(void);
extern char data_ov089_02179268[];
void MBi_calc_cksum(void);
extern char data_ov089_021792c8[];
extern char data_ov089_02179270[];

asm void mystrlen(void)
{
    ldrh r1, [r0], #2
    mov r2, #0
    cmp r1, #0
    beq @L_021765c8
@L_021765b8:
    ldrh r1, [r0], #2
    add r2, r2, #1
    cmp r1, #0
    bne @L_021765b8
@L_021765c8:
    mov r0, r2
    bx lr
}

asm void MB_AddGameInfo(void)
{
    ldr r1, =mbgameinfo_sUnlockFunc
    ldr r2, [r1, #0x18]
    cmp r2, #0
    streq r0, [r1, #0x18]
    beq @L_02176604
    ldr r1, [r2, #0x4bc]
    cmp r1, #0
    beq @L_02176600
@L_021765f0:
    mov r2, r1
    ldr r1, [r1, #0x4bc]
    cmp r1, #0
    bne @L_021765f0
@L_02176600:
    str r0, [r2, #0x4bc]
@L_02176604:
    mov r1, #0
    str r1, [r0, #0x4bc]
    bx lr
}

asm void MB_InitSendGameInfoStatus(void)
{
    ldr r0, =mbgameinfo_sUnlockFunc
    mov r2, #0
    str r2, [r0, #0x18]
    str r2, [r0, #0x1c]
    mov r1, #1
    strb r1, [r0, #0x24]
    ldr r12, =MBi_ClearSendStatus
    str r2, [r0, #0x14]
    bx r12
}

asm void MBi_ClearSendStatus(void)
{
    ldr r0, =mbgameinfo_sUnlockFunc
    mov r1, #0
    strb r1, [r0, #0x25]
    strb r1, [r0, #0x26]
    strb r1, [r0, #0x27]
    strb r1, [r0, #0x28]
    strb r1, [r0, #0x29]
    bx lr
}

asm void MB_SendGameInfoBeacon(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r4, [pc, #0x7c]
    mov r7, r0
    mov r6, r1
    mov r5, r2
@L_02176678:
    ldrb r0, [r4, #0x24]
    cmp r0, #6
    addls pc, pc, r0, lsl #2
    b @L_02176678
    dcd 0xea000005
    dcd 0xea000004
    dcd 0xea000007
    dcd 0xea000008
    dcd 0xea00000c
    dcd 0xea00000d
    dcd 0xeafffff4
    dcd 0xeb000011
    dcd 0xe3500000
    dcd 0x1afffff1
    dcd 0xe8bd80f8
    dcd 0xeb000035
    dcd 0xeaffffee
    dcd 0xe1a00007
    dcd 0xe1a01006
    dcd 0xe1a02005
    dcd 0xeb000043
    dcd 0xe8bd80f8
    dcd 0xeb00009a
    dcd 0xeaffffe7
    dcd 0xe1a00007
    dcd 0xe1a01006
    dcd 0xe1a02005
    dcd 0xeb0000a1
    dcd 0xe8bd80f8
    dcd mbgameinfo_sUnlockFunc
}

asm void MBi_ReadyBeaconSendStatus(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #8
    ldr r0, =mbgameinfo_sUnlockFunc
    ldr r1, [r0, #0x18]
    cmp r1, #0
    bne @L_02176744
    bl MBi_GetGgid
    mov r5, r0
    bl MBi_GetTgid
    mov r4, #0
    str r0, [sp]
    mov r12, #8
    ldr r1, =mbgameinfo_bsendBuff
    mov r0, r4
    mov r3, r5
    mov r2, #0x70
    str r12, [sp, #4]
    bl WM_SetGameInfo
    add sp, sp, #8
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
@L_02176744:
    ldr r0, [r0, #0x1c]
    ldr r4, =mbgameinfo_sUnlockFunc
    cmp r0, #0
    ldrne r0, [r0, #0x4bc]
    cmpne r0, #0
    ldreq r0, =mbgameinfo_sUnlockFunc
    ldreq r0, [r0, #0x18]
    str r0, [r4, #0x1c]
    bl MBi_ClearSendStatus
    ldr r0, [r4, #0x1c]
    mov r1, #2
    ldrb r2, [r0, #0x4b4]
    mov r0, #1
    strb r2, [r4, #0x26]
    strb r1, [r4, #0x24]
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, pc}
}

asm void MBi_InitSendFixedBeacon(void)
{
    ldr r0, =mbgameinfo_sUnlockFunc
    ldrb r1, [r0, #0x24]
    cmp r1, #2
    bxne lr
    ldr r2, [r0, #0x1c]
    ldrb r1, [r2, #0x4b2]
    cmp r1, #0
    moveq r1, #9
    streqb r1, [r0, #0x28]
    streq r2, [r0, #0x20]
    movne r1, #4
    strneb r1, [r0, #0x28]
    addne r1, r2, #0x220
    strne r1, [r0, #0x20]
    ldr r0, =mbgameinfo_sUnlockFunc
    mov r1, #3
    strb r1, [r0, #0x24]
    bx lr
}

asm void MBi_SendFixedBeacon(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #8
    ldr r3, =mbgameinfo_sUnlockFunc
    mov r6, r0
    ldr r4, [r3, #0x1c]
    ldr r0, [r3, #0x20]
    add r7, r4, #0x358
    add r3, r0, #0x62
    cmp r3, r7
    mov r5, r1
    ldrls r0, =mbgameinfo_bsendBuff
    movls r1, #0x62
    mov r4, r2
    strlsb r1, [r0, #0xc]
    bls @L_0217683c
    sub r7, r7, r0
    and r1, r7, #0xff
    ldr r0, =data_ov089_0217926e
    ldr r3, =mbgameinfo_bsendBuff
    rsb r2, r1, #0x62
    add r1, r0, r1
    mov r0, #0
    strb r7, [r3, #0xc]
    bl MIi_CpuClear16
@L_0217683c:
    ldr r8, =mbgameinfo_bsendBuff
    ldr r7, =mbgameinfo_sUnlockFunc
    ldrb r2, [r8, #0xc]
    ldr r0, [r7, #0x20]
    ldr r1, =data_ov089_0217926e
    bl MIi_CpuCopy16
    ldrb r0, [r7, #0x27]
    ldr r2, [r7, #0x1c]
    mov r3, #0
    strb r0, [r8, #0xa]
    ldrb r12, [r7, #0x28]
    ldr r0, =data_ov089_02179268
    mov r1, #0x68
    strb r12, [r8, #0xb]
    ldrb lr, [r8, #4]
    ldrb r12, [r2, #0x4b2]
    bic lr, lr, #3
    and r12, r12, #3
    orr r12, lr, r12
    strb r12, [r8, #4]
    ldrb lr, [r2, #0x4b3]
    and r12, r12, #0xff
    bic r12, r12, #0xfc
    strb lr, [r8, #5]
    ldrb lr, [r7, #0x26]
    strb lr, [r8, #6]
    ldr lr, [r2, #0x4b8]
    str lr, [r8]
    ldrb r2, [r2, #0x4b5]
    mov r2, r2, lsl #0x1a
    orr r2, r12, r2, lsr #24
    strb r2, [r8, #4]
    ldrb r12, [r7, #0x29]
    add r2, r12, #1
    strb r2, [r7, #0x29]
    strb r12, [r8, #7]
    strh r3, [r8, #8]
    bl MBi_calc_cksum
    strh r0, [r8, #8]
    ldrb r0, [r7, #0x27]
    mov r3, r6
    mov r2, #0x70
    add r1, r0, #1
    strb r1, [r7, #0x27]
    ldrb r0, [r7, #0x28]
    and r1, r1, #0xff
    cmp r1, r0
    ldrlo r0, [r7, #0x20]
    ldr r1, =mbgameinfo_bsendBuff
    addlo r0, r0, #0x62
    strlo r0, [r7, #0x20]
    movhs r0, #4
    strhsb r0, [r7, #0x24]
    orr r0, r4, #3
    and r4, r0, #0xff
    str r5, [sp]
    mov r0, #0
    str r4, [sp, #4]
    bl WM_SetGameInfo
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void MBi_InitSendVolatBeacon(void)
{
    ldr r1, =mbgameinfo_sUnlockFunc
    mov r3, #1
    ldr r0, [r1, #0x1c]
    mov r2, #5
    add r0, r0, #0x400
    strh r3, [r0, #0xb0]
    ldr r0, [r1, #0x1c]
    ldrb r0, [r0, #0x4b4]
    strb r0, [r1, #0x26]
    strb r2, [r1, #0x24]
    bx lr
}

asm void MBi_SendVolatBeacon(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    ldr r7, =mbgameinfo_sUnlockFunc
    str r0, [sp, #8]
    ldr r0, [r7, #0x1c]
    ldrb r3, [r7, #0x26]
    ldrb r0, [r0, #0x4b4]
    str r1, [sp, #0xc]
    str r2, [sp, #0x10]
    cmp r3, r0
    beq @L_021769a0
    bl MBi_InitSendVolatBeacon
@L_021769a0:
    ldr r2, =mbgameinfo_bsendBuff
    ldrb r0, [r2, #4]
    bic r0, r0, #3
    orr r1, r0, #2
    strb r1, [r2, #4]
    ldr r0, [r7, #0x1c]
    and r1, r1, #0xff
    ldrb r3, [r0, #0x4b3]
    bic r4, r1, #0xfc
    add r1, r0, #0x300
    strb r3, [r2, #5]
    ldrb r3, [r7, #0x26]
    strb r3, [r2, #6]
    ldr r3, [r0, #0x4b8]
    str r3, [r2]
    ldrb r3, [r0, #0x4b5]
    mov r3, r3, lsl #0x1a
    orr r3, r4, r3, lsr #24
    strb r3, [r2, #4]
    ldrb r4, [r7, #0x29]
    add r3, r4, #1
    strb r3, [r7, #0x29]
    strb r4, [r2, #7]
    ldrb r3, [r0, #0x358]
    strb r3, [r2, #0xa]
    ldrh r3, [r1, #0x5a]
    strh r3, [r2, #0xc]
    ldrh r1, [r1, #0x5c]
    strh r1, [r2, #0xe]
    ldr r1, [r7, #0x10]
    cmp r1, #0
    bne @L_02176a34
    ldr r1, [r7, #0x14]
    cmp r1, #0
    beq @L_02176a34
    ldr r0, [r0, #0x4b8]
    blx r1
@L_02176a34:
    mov r9, #0
    ldr r2, [r7, #0x1c]
    ldr r0, =data_ov089_021792c8
    b @L_02176a54
@L_02176a44:
    add r1, r2, r9
    ldrb r1, [r1, #0x4a8]
    strb r1, [r0, r9]
    add r9, r9, #1
@L_02176a54:
    cmp r9, #8
    blt @L_02176a44
    ldr r11, =data_ov089_02179270
    mov r10, #0
    mov r0, r10
    mov r1, r11
    mov r2, #0x58
    bl MIi_CpuClear16
    ldr r1, [r7, #0x1c]
    mov r4, #0x16
    add r0, r1, #0x400
    add r1, r1, #0x300
    ldrh r2, [r0, #0xb0]
    ldrh r0, [r1, #0x5a]
    mov r9, r10
    mov r8, #2
    eor r0, r2, r0
    mov r6, r0, lsl #0x10
    mov r5, r4
    b @L_02176af8
@L_02176aa4:
    mov r0, r8, lsl r9
    tst r0, r6, lsr #16
    beq @L_02176af4
    ldr r0, [r7, #0x1c]
    mla r1, r10, r5, r11
    add r0, r0, #0x5e
    add r0, r0, #0x300
    mla r0, r9, r4, r0
    mov r2, #0x16
    bl MIi_CpuCopy16
    ldr r1, [r7, #0x1c]
    mov r0, r8, lsl r9
    add r1, r1, #0x400
    add r10, r10, #1
    ldrh r2, [r1, #0xb0]
    mov r0, r0, lsl #0x10
    cmp r10, #4
    orr r0, r2, r0, lsr #16
    strh r0, [r1, #0xb0]
    beq @L_02176b00
@L_02176af4:
    add r9, r9, #1
@L_02176af8:
    cmp r9, #0xf
    blt @L_02176aa4
@L_02176b00:
    cmp r10, #4
    ldr r4, =mbgameinfo_sUnlockFunc
    bhs @L_02176b24
    mov r0, #0x16
    mul r1, r10, r0
    ldr r2, =data_ov089_02179270
    ldrb r0, [r2, r1]
    bic r0, r0, #0xf0
    strb r0, [r2, r1]
@L_02176b24:
    ldr r5, =mbgameinfo_bsendBuff
    mov r1, #0
    strh r1, [r5, #8]
    ldr r0, =data_ov089_02179268
    mov r1, #0x68
    bl MBi_calc_cksum
    strh r0, [r5, #8]
    ldr r1, [r4, #0x1c]
    ldr r3, [sp, #8]
    add r0, r1, #0x400
    add r1, r1, #0x300
    ldrh r2, [r0, #0xb0]
    ldrh r0, [r1, #0x5a]
    ldr r1, =mbgameinfo_bsendBuff
    cmp r2, r0
    moveq r0, #1
    streqb r0, [r4, #0x24]
    ldr r0, [sp, #0x10]
    orr r2, r0, #3
    ldr r0, [sp, #0xc]
    and r5, r2, #0xff
    str r0, [sp]
    mov r0, #0
    mov r2, #0x70
    str r5, [sp, #4]
    bl WM_SetGameInfo
    ldr r0, [r4, #0x10]
    cmp r0, #1
    addne sp, sp, #0x14
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [r4, #0x14]
    cmp r1, #0
    addeq sp, sp, #0x14
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r4, #0x1c]
    ldr r0, [r0, #0x4b8]
    blx r1
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void MBi_CheckMBParent(void)
{
    ldrh r1, [r0, #0x40]
    cmp r1, #1
    bne @L_02176bec
    ldrb r0, [r0, #0x4b]
    tst r0, #2
    bne @L_02176bf4
@L_02176bec:
    mov r0, #0
    bx lr
@L_02176bf4:
    mov r0, #1
    bx lr
}
