// (asm for now)

void MB_CommSetParentStateCallback(void);
void func_ov089_02174268(void);
void func_ov089_021742e4(void);
void func_ov089_02174334(void);
void MBi_CommChangeParentState(void);
void MBi_CommChangeParentStateCallbackOnly(void);
void func_ov089_02174484(void);
void func_ov089_02174904(void);
void MBi_CommParentRecvData(void);
void func_ov089_02174e70(void);
void func_ov089_02174eac(void);
void func_ov089_0217503c(void);
void func_ov089_021750d8(void);
void func_ov089_02175350(void);
void MBi_calc_sendblock(void);
void func_ov089_02175568(void);
void IsChildAidValid(void);
void MBi_CommCallParentError(void);
void func_ov089_021755b0(void);
void func_ov089_02175634(void);

void OS_DisableInterrupts(void);
extern char data_ov089_021792e0[];
void OS_RestoreInterrupts(void);
void MI_CpuCopy8(void);
void MI_CpuFill8(void);
void func_ov089_02178eec(void);
void func_ov089_02176538(void);
void func_ov089_02178928(void);
void func_ov089_0217893c(void);
void func_ov089_02178950(void);
void MB_SendGameInfoBeacon(void);
void MIi_CpuClearFast(void);
void func_ov089_02178fa4(void);
extern char data_ov089_02179220[];
void func_020130d0(void);
void func_ov089_02178f2c(void);
void MBi_BlockHeaderEnd(void);
extern char data_ov089_021791e0[];
void FS_FindArchive(void);
void FS_InitFile(void);
void func_0200c68c(void);
void FS_ReadFile(void);
void FS_CloseFile(void);
void MBi_get_blockinfo(void);
void MBi_ReadFromCache(void);
void MBi_IsTaskBusy(void);
void func_0200878c(void);
void func_ov089_02178cf4(void);
void MIi_CpuClear16(void);
void func_0200c814(void);
void FS_SeekFile(void);
void func_02010d8c(void);
extern char data_ov089_021791a0[];
extern char data_ov089_021791e4[];
extern char data_ov089_021791b8[];
extern char data_ov089_021791e8[];
void func_02012234(void);
void func_ov089_02178a08(void);
void MBi_AttachCacheBuffer(void);
void func_0200e4f8(void);
void MBi_ReadSegmentHeader(void);
void AutoloadCallback(void);
void DC_FlushRange(void);

asm void MB_CommSetParentStateCallback(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl OS_DisableInterrupts
    ldr r1, =data_ov089_021792e0
    ldr r1, [r1]
    add r1, r1, #0x1000
    str r4, [r1, #0x4e4]
    bl OS_RestoreInterrupts
    ldmia sp!, {r4, pc}
}

asm void func_ov089_02174268(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    bl OS_DisableInterrupts
    ldr r4, =data_ov089_021792e0
    mov r5, r0
    ldr r0, [r4]
    cmp r0, #0
    beq @L_021742d0
    mov r0, r6
    bl IsChildAidValid
    cmp r0, #0
    beq @L_021742d0
    ldr r3, [r4]
    sub r1, r6, #1
    add r0, r3, #0x1340
    mov r2, #0x16
    mla r0, r1, r2, r0
    add r1, r3, #0x72
    add r1, r1, #0x1700
    bl MI_CpuCopy8
    mov r0, r5
    bl OS_RestoreInterrupts
    ldr r0, [r4]
    add r0, r0, #0x72
    add r0, r0, #0x1700
    ldmia sp!, {r4, r5, r6, pc}
@L_021742d0:
    mov r0, r5
    bl OS_RestoreInterrupts
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_ov089_021742e4(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r4, =data_ov089_021792e0
    mov r5, r0
    ldr r1, [r4]
    cmp r1, #0
    beq @L_02174328
    bl IsChildAidValid
    cmp r0, #0
    beq @L_02174328
    ldr r1, [r4]
    sub r0, r5, #1
    add r0, r1, r0, lsl #2
    add r0, r0, #0x1000
    ldr r0, [r0, #0x4e8]
    cmp r0, #7
    moveq r0, #1
    ldmeqia sp!, {r3, r4, r5, pc}
@L_02174328:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_ov089_02174334(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r4, r1
    mov r7, r0
    bl OS_DisableInterrupts
    mov r6, r0
    cmp r4, #3
    addls pc, pc, r4, lsl #2
    b @L_02174394
    dcd 0xea000002
    dcd 0xea000004
    dcd 0xea000006
    dcd 0xea000008
    dcd 0xe3a0500a
    dcd 0xe3a04004
    dcd 0xea00000c
    dcd 0xe3a0500a
    dcd 0xe3a04003
    dcd 0xea000009
    dcd 0xe3a0500e
    dcd 0xe3a04002
    dcd 0xea000006
    dcd 0xe3a05007
    dcd 0xe3a04005
    dcd 0xea000003
@L_02174394:
    mov r0, r6
    bl OS_RestoreInterrupts
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
    dcd 0xe59f8060
    dcd 0xe5980000
    dcd 0xe3500000
    dcd 0x0a000011
    dcd 0xe1a00007
    dcd 0xeb00046f
    dcd 0xe3500000
    dcd 0x0a00000d
    dcd 0xe5981000
    dcd 0xe2472001
    dcd 0xe0810102
    dcd 0xe2800a01
    dcd 0xe59004e8
    dcd 0xe1550000
    dcd 0x1a000006
    dcd 0xe0810082
    dcd 0xe2801c17
    dcd 0xe1a00006
    dcd 0xe1c145b4
    dcd 0xebfa4ffc
    dcd 0xe3a00001
    dcd 0xe8bd81f0
    dcd 0xe1a00006
    dcd 0xebfa4ff8
    dcd 0xe3a00000
    dcd 0xe8bd81f0
    dcd data_ov089_021792e0
}

asm void MBi_CommChangeParentState(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, r1
    mov r4, r2
    bl IsChildAidValid
    cmp r0, #0
    beq @L_02174444
    ldr r0, =data_ov089_021792e0
    sub r1, r6, #1
    ldr r0, [r0]
    add r0, r0, r1, lsl #2
    add r0, r0, #0x1000
    str r5, [r0, #0x4e8]
@L_02174444:
    mov r0, r6
    mov r1, r5
    mov r2, r4
    bl MBi_CommChangeParentStateCallbackOnly
    ldmia sp!, {r4, r5, r6, pc}
}

asm void MBi_CommChangeParentStateCallbackOnly(void)
{
    stmdb sp!, {r3, lr}
    ldr r3, =data_ov089_021792e0
    ldr r3, [r3]
    add r3, r3, #0x1000
    ldr r3, [r3, #0x4e4]
    cmp r3, #0
    ldmeqia sp!, {r3, pc}
    blx r3
    ldmia sp!, {r3, pc}
}

asm void func_ov089_02174484(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r7, r0
    mov r6, r1
    cmp r7, #0x19
    ldr r8, [pc, #0x460]
    mov r5, #0
    bgt @L_021744e8
    cmp r7, #0x19
    bge @L_02174724
    cmp r7, #0x11
    bgt @L_021744dc
    bge @L_021748b4
    cmp r7, #3
    bgt @L_021748b4
    cmp r7, #0
    blt @L_021748b4
    beq @L_02174520
    cmp r7, #1
    beq @L_02174540
    cmp r7, #3
    beq @L_02174718
    b @L_021748b4
@L_021744dc:
    cmp r7, #0x15
    beq @L_0217450c
    b @L_021748b4
@L_021744e8:
    cmp r7, #0xff
    bgt @L_02174500
    bge @L_021747bc
    cmp r7, #0x1c
    beq @L_0217472c
    b @L_021748b4
@L_02174500:
    cmp r7, #0x100
    beq @L_0217481c
    b @L_021748b4
@L_0217450c:
    mov r2, r6
    mov r0, r5
    mov r1, #1
@L_02174518:
    bl MBi_CommChangeParentState
    b @L_021748b4
@L_02174520:
    ldrh r0, [r6, #0x10]
    cmp r0, #0
    beq @L_021748b4
    cmp r0, #0x10
    bhs @L_021748b4
    mov r2, r6
    mov r1, #2
    b @L_02174518
@L_02174540:
    ldrh r0, [r6, #0x10]
    cmp r0, #0
    beq @L_021748b4
    cmp r0, #0x10
    bhs @L_021748b4
    ldr r1, [r8]
    sub r0, r0, #1
    add r0, r1, r0, lsl #1
    add r0, r0, #0x1400
    strh r5, [r0, #0x8a]
    ldr r0, [r8]
    ldrh r1, [r6, #0x10]
    add r0, r0, #0xa8
    mov r4, #4
    add r3, r0, #0x1400
    sub r0, r1, #1
    mov r1, r5
    mov r2, r4
    add r0, r3, r0, lsl #2
    bl MI_CpuFill8
    ldr r1, [r8]
    ldrh r0, [r6, #0x10]
    add r2, r1, #0x1340
    mov r9, #0x16
    sub r1, r0, #1
    mla r0, r1, r9, r2
    mov r1, r5
    mov r2, r9
    bl MI_CpuFill8
    ldrh r0, [r6, #0x10]
    bl func_ov089_02178eec
    ldrh r0, [r6, #0x10]
    ldr r2, [r8]
    sub r1, r9, #0x17
    sub r0, r0, #1
    add r0, r2, r0, lsl #1
    add r0, r0, #0x1700
    strh r5, [r0, #0x54]
    ldrh r12, [r6, #0x10]
    ldr r3, [r8]
    sub r2, r12, #1
    add r0, r3, r2
    add r0, r0, #0x1500
    ldrsb r0, [r0, #0x26]
    cmp r0, r1
    beq @L_02174670
    and r1, r0, #0xff
    add r0, r4, #0x5d0
    mul r0, r1, r0
    mov r1, #1
    add r3, r3, r0
    add r4, r3, #0x1d00
    mvn r3, r1, lsl r12
    ldrh r9, [r4, #0x4e]
    mov r3, r3, lsl #0x10
    mov r12, r1, lsl r12
    and r9, r9, r3, lsr #16
    strh r9, [r4, #0x4e]
    ldr r9, [r8]
    mov r4, r12, lsl #0x10
    add r9, r9, r0
    add r9, r9, #0x1d00
    ldrh lr, [r9, #0x50]
    sub r12, r1, #2
    orr r1, lr, r4, lsr #16
    strh r1, [r9, #0x50]
    ldr r1, [r8]
    add r1, r1, r2
    add r1, r1, #0x1000
    strb r12, [r1, #0x526]
    ldr r1, [r8]
    add r0, r1, r0
    add r0, r0, #0x1d00
    ldrh r1, [r0, #0x4c]
    and r1, r1, r3, lsr #16
    strh r1, [r0, #0x4c]
@L_02174670:
    ldr r4, [pc, #0x284]
    ldrh r2, [r6, #0x10]
    ldr r3, [r4]
    mov r0, #1
    add r1, r3, #0x1500
    ldrh r1, [r1, #0x36]
    tst r1, r0, lsl r2
    beq @L_021746c0
    add r1, r3, #0x1000
    ldrb r2, [r1, #0x535]
    sub r2, r2, #1
    strb r2, [r1, #0x535]
    ldr r1, [r4]
    ldrh r2, [r6, #0x10]
    add r1, r1, #0x1500
    ldrh r3, [r1, #0x36]
    mvn r0, r0, lsl r2
    mov r0, r0, lsl #0x10
    and r0, r3, r0, lsr #16
    strh r0, [r1, #0x36]
@L_021746c0:
    ldrh r0, [r6, #0x10]
    ldr r2, [r4]
    sub r1, r0, #1
    add r1, r2, r1, lsl #2
    add r1, r1, #0x1000
    ldr r1, [r1, #0x4e8]
    cmp r1, #8
    bne @L_021746ec
    mov r1, #9
    mov r2, #0
    bl MBi_CommChangeParentState
@L_021746ec:
    ldrh r0, [r6, #0x10]
    mov r2, r6
    mov r1, #3
    bl MBi_CommChangeParentState
    ldrh r0, [r6, #0x10]
    ldr r1, [r4]
    sub r0, r0, #1
    add r0, r1, r0, lsl #2
    add r0, r0, #0x1000
    str r5, [r0, #0x4e8]
    b @L_021748b4
@L_02174718:
    mov r0, r6
    bl MBi_CommParentRecvData
    b @L_021748b4
@L_02174724:
    bl func_ov089_02175350
    b @L_021748b4
@L_0217472c:
    ldr r4, [pc, #0x1cc]
    mov r6, r5
@L_02174734:
    mul r9, r6, r4
    ldr r1, [r8]
    add r2, r1, r9
    add r0, r2, #0x1000
    ldrb r0, [r0, #0xd52]
    cmp r0, #0
    addne r2, r2, #0x1d00
    ldrneh r3, [r2, #0x50]
    cmpne r3, #0
    beq @L_02174784
    add r0, r1, #0x6c
    add r0, r0, #0x1800
    ldrh r2, [r2, #0x4e]
    add r0, r0, r9
    add r1, r1, #0x1340
    bl func_ov089_02176538
    ldr r0, [r8]
    add r0, r0, r9
    add r0, r0, #0x1d00
    strh r5, [r0, #0x50]
@L_02174784:
    add r0, r6, #1
    and r6, r0, #0xff
    cmp r6, #0x10
    blo @L_02174734
    bl func_ov089_02178928
    mov r5, r0
    bl func_ov089_0217893c
    mov r4, r0
    bl func_ov089_02178950
    mov r2, r0
    mov r0, r5
    mov r1, r4
    bl MB_SendGameInfoBeacon
    b @L_021748b4
@L_021747bc:
    ldrh r0, [r6, #2]
    cmp r0, #0xf
    addls pc, pc, r0, lsl #2
    b @L_02174818
    dcd 0xea000011
    dcd 0xea00000d
    dcd 0xea00000f
    dcd 0xea00000e
    dcd 0xea00000a
    dcd 0xea000009
    dcd 0xea000008
    dcd 0xea00000a
    dcd 0xea000006
    dcd 0xea000005
    dcd 0xea000007
    dcd 0xea000006
    dcd 0xea000005
    dcd 0xea000004
    dcd 0xea000003
    dcd 0xea000002
    dcd 0xe1a00005
    dcd 0xe3a01009
    dcd 0xea000025
@L_02174818:
    b @L_021748a8
@L_0217481c:
    ldrh r0, [r6]
    cmp r0, #0x1d
    addls pc, pc, r0, lsl #2
    b @L_021748a8
    dcd 0xea00001c
    dcd 0xea00001c
    dcd 0xea00001b
    dcd 0xea00001a
    dcd 0xea000019
    dcd 0xea000018
    dcd 0xea000017
    dcd 0xea000015
    dcd 0xea000014
    dcd 0xea000014
    dcd 0xea000013
    dcd 0xea000012
    dcd 0xea000011
    dcd 0xea00000f
    dcd 0xea00000e
    dcd 0xea00000d
    dcd 0xea00000d
    dcd 0xea00000b
    dcd 0xea00000a
    dcd 0xea00000a
    dcd 0xea000009
    dcd 0xea000007
    dcd 0xea000007
    dcd 0xea000006
    dcd 0xea000005
    dcd 0xea000003
    dcd 0xea000003
    dcd 0xea000002
    dcd 0xea000001
    dcd 0xeaffffff
    dcd 0xeaffffd8
@L_021748a8:
    mov r0, #0
    mov r1, #8
    bl MBi_CommCallParentError
@L_021748b4:
    ldr r4, [pc, #0x40]
    mov r5, #0
    cmp r7, #0x11
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r1, [r4]
    mov r2, #0x7d00
    add r0, r1, #0x1000
    ldr r6, [r0, #0x4e4]
    mov r0, r5
    bl MIi_CpuClearFast
    str r5, [r4]
    cmp r6, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r5
    mov r2, r5
    mov r1, #0xc
    blx r6
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    dcd data_ov089_021792e0
    dcd 0x000005d4
}

asm void func_ov089_02174904(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x34
    ldr r9, [pc, #0x4a4]
    movs r6, r1
    ldr r7, [pc, #0x4a0]
    addeq sp, sp, #0x34
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r6, #0xf
    addhi sp, sp, #0x34
    ldmhiia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r1, sp, #0x20
    mov r2, r6
    add r0, r0, #0xa
    bl func_ov089_02178fa4
    ldrb r8, [sp, #0x20]
    ldr r1, [r9]
    sub r3, r6, #1
    add r2, r1, r3, lsl #2
    add r2, r2, #0x1000
    ldr r4, [r2, #0x4e8]
    mov r5, r0
    cmp r8, #0xb
    addls pc, pc, r8, lsl #2
    b @L_02174db0
    dcd 0xea000111
    dcd 0xea000110
    dcd 0xea00010f
    dcd 0xea00010e
    dcd 0xea00010d
    dcd 0xea00010c
    dcd 0xea00010b
    dcd 0xea000003
    dcd 0xea0000a2
    dcd 0xea0000cb
    dcd 0xea0000e4
    dcd 0xea000106
    dcd 0xe3550000
    dcd 0xe3a0a001
    dcd 0xe1a08009
    dcd 0x028dd034
    dcd 0x08bd8ff0
    dcd 0xe3540002
    dcd 0x1a000022
    dcd 0xe28d1000
    dcd 0xe3a0201d
    dcd 0xebfa52a9
    dcd 0xe5991000
    dcd 0xe2460001
    dcd 0xe0811100
    dcd 0xe59d2000
    dcd 0xe2811a01
    dcd 0xe58124a8
    dcd 0xe5991000
    dcd 0xe1dd21ba
    dcd 0xe0811080
    dcd 0xe2811b05
    dcd 0xe1c128ba
    dcd 0xe5991000
    dcd 0xe3a0b016
    dcd 0xe2811d4d
    dcd 0xe0211b90
    dcd 0xe28d0004
    dcd 0xe1a0200b
    dcd 0xebfa5297
    dcd 0xe5990000
    dcd 0xe2463001
    dcd 0xe2801d4d
    dcd 0xe0000b93
    dcd 0xe7d19000
    dcd 0xe20630ff
    dcd 0xe1a03e03
    dcd 0xe3c990f0
    dcd 0xe1893c23
    dcd 0xe7c13000
    dcd 0xe28d2004
    dcd 0xe1a00006
    dcd 0xe3a0100a
    dcd 0xebfffe74
    dcd 0xe354000a
    dcd 0x128dd034
    dcd 0x18bd8ff0
    dcd 0xe5d5501c
    dcd 0xe3a01000
    dcd 0xe3550010
    dcd 0x2a00000d
    dcd 0xe5984000
    dcd 0xe0204795
    dcd 0xe2802a01
    dcd 0xe5d23d52
    dcd 0xe3530000
    dcd 0x0a000007
    dcd 0xe2463001
    dcd 0xe0844103
    dcd 0xe5923d40
    dcd 0xe2842a01
    dcd 0xe59244a8
    dcd 0xe5932014
    dcd 0xe1540002
    dcd 0x0a000006
    dcd 0xe5981000
    dcd 0xe2460001
    dcd 0xe0810080
    dcd 0xe2800c17
    dcd 0xe3a01004
    dcd 0xe1c015b4
    dcd 0xea00001b
    dcd 0xe1a03001
    dcd 0xe2800c1d
    dcd 0xea000005
@L_02174ab8:
    ldrh r2, [r0, #0x4e]
    tst r2, r10, lsl r3
    addne r1, r1, #1
    add r2, r3, #1
    andne r1, r1, #0xff
    and r3, r2, #0xff
    cmp r3, #0x10
    blo @L_02174ab8
    ldr r2, [r8]
    mla r0, r5, r7, r2
    add r0, r0, #0x1000
    ldr r0, [r0, #0xd40]
    ldrb r0, [r0, #0x18]
    cmp r1, r0
    blo @L_02174b1c
    sub r0, r6, #1
    add r1, r2, r0, lsl #1
    add r3, r1, #0x1700
    mov r2, #0
    mov r0, r6
    mov r1, #0xb
    strh r2, [r3, #0x54]
    bl MBi_CommChangeParentState
    add sp, sp, #0x34
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02174b1c:
    ldr r9, [r8]
    sub r4, r6, #1
    add r0, r9, r4, lsl #1
    add r3, r0, #0x1700
    ldrh r0, [r3, #0x54]
    mov r1, #1
    cmp r0, #3
    beq @L_02174b4c
    cmp r0, #4
    beq @L_02174bf8
    add sp, sp, #0x34
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02174b4c:
    add r0, r9, #0x1500
    ldrh r0, [r0, #0x36]
    mov r2, r1, lsl r6
    tst r0, r1, lsl r6
    addne sp, sp, #0x34
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r0, r9, #0x1000
    ldrb r1, [r0, #0x535]
    mov r9, r2, lsl #0x10
    mul r3, r5, r7
    add r1, r1, #1
    strb r1, [r0, #0x535]
    ldr r0, [r8]
    mov r2, #0
    add r1, r0, #0x1500
    ldrh r7, [r1, #0x36]
    mov r0, r6
    orr r6, r7, r9, lsr #16
    strh r6, [r1, #0x36]
    ldr r6, [r8]
    mov r1, #5
    add r6, r6, r4
    add r6, r6, #0x1000
    strb r5, [r6, #0x526]
    ldr r5, [r8]
    add r5, r5, #0x4e
    add r6, r5, #0x1d00
    ldrh r5, [r6, r3]
    orr r5, r5, r9, lsr #16
    strh r5, [r6, r3]
    ldr r5, [r8]
    add r5, r5, #0xd50
    add r6, r5, #0x1000
    ldrh r5, [r6, r3]
    orr r5, r5, r9, lsr #16
    strh r5, [r6, r3]
    ldr r3, [r8]
    add r3, r3, r4, lsl #1
    add r3, r3, #0x1700
    strh r2, [r3, #0x54]
    bl MBi_CommChangeParentState
    add sp, sp, #0x34
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02174bf8:
    mov r2, #0
    mov r0, r6
    mov r1, #4
    strh r2, [r3, #0x54]
    bl MBi_CommChangeParentState
    add sp, sp, #0x34
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    dcd 0xe3540005
    dcd 0xe3a05001
    dcd 0xe1a02007
    dcd 0x1a000005
    dcd 0xe1a00006
    dcd 0xe3a0100e
    dcd 0xe3a02000
    dcd 0xebfffdf6
    dcd 0xe28dd034
    dcd 0xe8bd8ff0
    dcd 0xe354000e
    dcd 0x00810083
    dcd 0x02800c17
    dcd 0x01d005b4
    dcd 0x03500002
    dcd 0x128dd034
    dcd 0x18bd8ff0
    dcd 0xe0810003
    dcd 0xe2800a01
    dcd 0xe5d07526
    dcd 0xe2810f53
    dcd 0xe0040297
    dcd 0xe2807b07
    dcd 0xe1a00615
    dcd 0xe19710b4
    dcd 0xe1a00800
    dcd 0xe3a02000
    dcd 0xe1810820
    dcd 0xe18700b4
    dcd 0xe5991000
    dcd 0xe1a00006
    dcd 0xe0811004
    dcd 0xe2811c1d
    dcd 0xe1c124b8
    dcd 0xe5994000
    dcd 0xe3a01006
    dcd 0xe0843083
    dcd 0xe2833c17
    dcd 0xe1c325b4
    dcd 0xebfffdd6
    dcd 0xe28dd034
    dcd 0xe8bd8ff0
    dcd 0xe3540006
    dcd 0xe3a04001
    dcd 0xe1a06007
    dcd 0x128dd034
    dcd 0x18bd8ff0
    dcd 0xe0810003
    dcd 0xe2800a01
    dcd 0xe5d05526
    dcd 0xe35500ff
    dcd 0x028dd034
    dcd 0x08bd8ff0
    dcd 0xe0201695
    dcd 0xe2800c1d
    dcd 0xe1d004ba
    dcd 0xe1dd12b2
    dcd 0xeb00021a
    dcd 0xe5991000
    dcd 0xe59f20b8
    dcd 0xe0211695
    dcd 0xe2811c1d
    dcd 0xe1c104ba
    dcd 0xe5920000
    dcd 0xe28dd034
    dcd 0xe1800514
    dcd 0xe5820000
    dcd 0xe8bd8ff0
    dcd 0xe3540006
    dcd 0xe3a02001
    dcd 0x1a000013
    dcd 0xe0810003
    dcd 0xe2800a01
    dcd 0xe5d00526
    dcd 0xe35000ff
    dcd 0x028dd034
    dcd 0x08bd8ff0
    dcd 0xe0040790
    dcd 0xe2810f53
    dcd 0xe2805b07
    dcd 0xe1e00612
    dcd 0xe1a01800
    dcd 0xe19520b4
    dcd 0xe1a00006
    dcd 0xe0023821
    dcd 0xe3a01007
    dcd 0xe3a02000
    dcd 0xe18530b4
    dcd 0xebfffda5
    dcd 0xe28dd034
    dcd 0xe8bd8ff0
    dcd 0xe3540007
    dcd 0x00810083
    dcd 0x02803c17
    dcd 0x01d305b4
    dcd 0x03500005
    dcd 0x128dd034
    dcd 0x18bd8ff0
    dcd 0xe3a02000
    dcd 0xe1a00006
    dcd 0xe3a01008
    dcd 0xe1c325b4
    dcd 0xebfffd97
@L_02174db0:
    add sp, sp, #0x34
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    dcd data_ov089_021792e0
    dcd 0x000005d4
    dcd data_ov089_02179220
}

asm void MBi_CommParentRecvData(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r12, #0
    ldr r2, =data_ov089_021792e0
    ldr r1, =0x5d4
    mov r4, r0
    mov r3, r12
@L_02174ddc:
    ldr r0, [r2]
    mla r5, r12, r1, r0
    add r0, r5, #0x1000
    ldrb r0, [r0, #0xd52]
    cmp r0, #0
    addne r0, r5, #0x1d00
    strneh r3, [r0, #0x4a]
    add r0, r12, #1
    mov r0, r0, lsl #0x10
    mov r12, r0, lsr #0x10
    cmp r12, #0x10
    blo @L_02174ddc
    ldr r0, =data_ov089_02179220
    mov r1, #0
    ldr r5, =0xffff
    str r1, [r0]
    mov r6, #1
@L_02174e20:
    mov r0, r4
    mov r1, r6
    bl func_020130d0
    cmp r0, #0
    ldrneh r1, [r0]
    cmpne r1, r5
    cmpne r1, #0
    beq @L_02174e48
    mov r1, r6
    bl func_ov089_02174904
@L_02174e48:
    add r0, r6, #1
    mov r0, r0, lsl #0x10
    mov r6, r0, lsr #0x10
    cmp r6, #0xf
    bls @L_02174e20
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_ov089_02174e70(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #8
    ldr r4, =data_ov089_021792e0
    mov r5, r1
    ldr r1, [r4]
    strb r0, [sp]
    add r0, sp, #0
    bl func_ov089_02178f2c
    ldr r2, [r4]
    mov r1, r5
    mov r0, #6
    bl MBi_BlockHeaderEnd
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_ov089_02174eac(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x18
    add r4, sp, #6
    mov r6, #0
    mov r0, r4
    mov r1, r6
    mov r2, #0x10
    mvn r5, #0
    bl MI_CpuFill8
    ldr r1, =data_ov089_021792e0
    mov r0, #1
    ldr r1, [r1]
@L_02174edc:
    add r2, r1, r0, lsl #2
    add r2, r2, #0x1000
    ldr r2, [r2, #0x4e4]
    cmp r2, #5
    bne @L_02174f08
    add r2, r1, r0
    add r2, r2, #0x1500
    ldrsb r3, [r2, #0x25]
    ldrb r2, [r4, r3]
    add r2, r2, #1
    strb r2, [r4, r3]
@L_02174f08:
    add r0, r0, #1
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    cmp r0, #0xf
    bls @L_02174edc
    ldr r2, =data_ov089_021791e0
    ldr r4, =0x5d4
    ldrb r3, [r2]
    mov r0, #0
    add r12, sp, #6
@L_02174f30:
    add r2, r3, #1
    mov r3, r2, lsr #0x1f
    rsb r2, r3, r2, lsl #28
    add r2, r3, r2, ror #28
    and r3, r2, #0xff
    mla r2, r3, r4, r1
    add r2, r2, #0x1000
    ldrb r2, [r2, #0xd52]
    cmp r2, #0
    ldrneb r2, [r12, r3]
    cmpne r2, #0
    movne r0, r3, lsl #0x18
    movne r5, r0, asr #0x18
    bne @L_02174f78
    add r0, r0, #1
    and r0, r0, #0xff
    cmp r0, #0x10
    blo @L_02174f30
@L_02174f78:
    cmn r5, #1
    addeq sp, sp, #0x18
    moveq r0, #0x15
    ldmeqia sp!, {r4, r5, r6, pc}
    ldr r2, =data_ov089_021791e0
    mov r0, #1
    strb r5, [r2]
    mov r3, r0
@L_02174f98:
    add r2, r1, r0, lsl #2
    add r2, r2, #0x1000
    ldr r2, [r2, #0x4e4]
    cmp r2, #5
    addeq r2, r1, r0
    addeq r2, r2, #0x1500
    ldreqsb r2, [r2, #0x25]
    cmpeq r5, r2
    moveq r2, r3, lsl r0
    add r0, r0, #1
    mov r0, r0, lsl #0x10
    moveq r2, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    orreq r6, r6, r2, lsr #16
    cmp r0, #0xf
    bls @L_02174f98
    mov r2, #3
    add r0, sp, #0
    strb r2, [sp]
    strh r5, [sp, #2]
    bl func_ov089_02178f2c
    movs r1, r0
    beq @L_02175014
    ldr r0, =data_ov089_021792e0
    ldr r3, =0x5d4
    ldr r0, [r0]
    mov r2, #0xe4
    add r0, r0, #0x388
    add r0, r0, #0x1400
    mla r0, r5, r3, r0
    bl MI_CpuCopy8
@L_02175014:
    ldr r0, =data_ov089_021792e0
    mov r1, r6
    ldr r2, [r0]
    mov r0, #0xea
    bl MBi_BlockHeaderEnd
    add sp, sp, #0x18
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_ov089_0217503c(void)
{
    stmdb sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4c
    ldr r4, [r0, #0x14]
    ldr r5, [r0, #0x10]
    ldr r1, [r4, #0x14]
    add r0, r4, #0x10
    ldr r7, [r5, #4]
    bl FS_FindArchive
    movs r6, r0
    ldreq r6, [r4, #0x18]
    add r4, sp, #4
    mov r0, r4
    bl FS_InitFile
    ldr r2, [r5]
    mvn r12, #0
    mov r0, r4
    mov r1, r6
    add r3, r2, r7
    str r12, [sp]
    bl func_0200c68c
    cmp r0, #0
    beq @L_021750b8
    ldr r1, [r5, #8]
    mov r0, r4
    mov r2, r7
    bl FS_ReadFile
    cmp r7, r0
    moveq r0, #2
    streq r0, [r5, #0xc]
    add r0, sp, #4
    bl FS_CloseFile
@L_021750b8:
    ldr r0, [r5, #0xc]
    cmp r0, #2
    movne r0, #0
    strne r0, [r5]
    movne r0, #2
    strne r0, [r5, #0xc]
    add sp, sp, #0x4c
    ldmia sp!, {r4, r5, r6, r7, pc}
}

asm void func_ov089_021750d8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x18
    ldr r5, =data_ov089_021792e0
    ldr r0, [r5]
    add r0, r0, #0x1000
    ldrb r0, [r0, #0x524]
    cmp r0, #0
    addeq sp, sp, #0x18
    moveq r0, #0x15
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r4, =0x5d4
    mov r1, #0
@L_02175108:
    ldr r0, [r5]
    add r3, r0, #0x1000
    ldrb r0, [r3, #0x525]
    add r0, r0, #1
    mov r2, r0, lsr #0x1f
    rsb r0, r2, r0, lsl #28
    add r0, r2, r0, ror #28
    strb r0, [r3, #0x525]
    ldr r2, [r5]
    add r0, r2, #0x1000
    ldrb r0, [r0, #0x525]
    mla r3, r0, r4, r2
    add r2, r3, #0x1000
    ldrb r2, [r2, #0xd52]
    cmp r2, #0
    addne r2, r3, #0x1d00
    ldrneh r2, [r2, #0x4c]
    cmpne r2, #0
    bne @L_02175164
    add r1, r1, #1
    and r1, r1, #0xff
    cmp r1, #0x10
    blo @L_02175108
@L_02175164:
    cmp r1, #0x10
    addeq sp, sp, #0x18
    moveq r0, #0x15
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    bl MBi_calc_sendblock
    ldr r5, =data_ov089_021792e0
    ldr r4, =0x5d4
    ldr r7, [r5]
    add r0, sp, #8
    add r1, r7, #0x1000
    ldrb r2, [r1, #0x525]
    add r1, r7, #0x12c
    add r3, r7, #0x388
    mul r6, r2, r4
    add r2, r7, r6
    add r2, r2, #0x1d00
    add r1, r1, #0x1c00
    add r3, r3, #0x1400
    ldrh r2, [r2, #0x48]
    add r1, r1, r6
    add r3, r3, r6
    bl MBi_get_blockinfo
    cmp r0, #0
    addeq sp, sp, #0x18
    moveq r0, #0x15
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldr r1, [r5]
    mov r0, #4
    strb r0, [sp]
    add r2, r1, #0x1000
    ldrb r3, [r2, #0x525]
    add r0, sp, #0
    strh r3, [sp, #2]
    ldrb r3, [r2, #0x525]
    mla r2, r3, r4, r1
    add r2, r2, #0x1d00
    ldrh r2, [r2, #0x48]
    strh r2, [sp, #4]
    bl func_ov089_02178f2c
    ldr r6, [r5]
    ldrb r1, [sp, #0x14]
    add r2, r6, #0x1000
    ldrb r2, [r2, #0x525]
    ldr r12, [sp, #0x10]
    ldr r3, [sp, #0xc]
    mla r6, r2, r4, r6
    add r2, r6, r1, lsl #2
    add r7, r6, #0x1000
    ldr r6, [r7, #0xd58]
    add r2, r2, #0x1000
    ldr r2, [r2, #0xd2c]
    ldr r1, [r6, r1, lsl #2]
    sub r2, r12, r2
    add r6, r2, r1
    ldr r7, [r7, #0xd54]
    mov r2, r0
    mov r0, r7
    mov r1, r6
    bl MBi_ReadFromCache
    cmp r0, #0
    bne @L_02175318
    ldr r0, [r5]
    add r0, r0, #0xce0
    add r4, r0, #0x7000
    mov r0, r4
    bl MBi_IsTaskBusy
    cmp r0, #0
    bne @L_0217530c
    ldr r0, [r7]
    cmp r0, #0
    subne r0, r0, #1
    strne r0, [r7]
    bne @L_0217530c
    mov r5, #0
    mov r3, r5
    add r2, r7, #0x30
@L_02175294:
    add r0, r2, r3, lsl #4
    ldr r0, [r0, #0xc]
    cmp r0, #2
    bne @L_021752c0
    cmp r5, #0
    beq @L_021752bc
    ldr r1, [r5]
    ldr r0, [r2, r3, lsl #4]
    cmp r1, r0
    bls @L_021752c0
@L_021752bc:
    add r5, r2, r3, lsl #4
@L_021752c0:
    add r3, r3, #1
    cmp r3, #4
    blt @L_02175294
    cmp r5, #0
    bne @L_021752d8
    bl func_0200878c
@L_021752d8:
    mov r0, #2
    str r0, [r7]
    mov r0, #1
    str r0, [r5, #0xc]
    bic r0, r6, #0x1f
    str r0, [r5]
    str r5, [r4, #0x10]
    ldr r1, =func_ov089_0217503c
    mov r0, r4
    mov r2, #0
    mov r3, #4
    str r7, [r4, #0x14]
    bl func_ov089_02178cf4
@L_0217530c:
    add sp, sp, #0x18
    mov r0, #0x15
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02175318:
    ldr r2, [r5]
    ldr r1, [sp, #0xc]
    add r0, r2, #0x1000
    ldrb r3, [r0, #0x525]
    add r0, r1, #6
    mla r1, r3, r4, r2
    add r1, r1, #0x1d00
    ldrh r1, [r1, #0x4c]
    bl MBi_BlockHeaderEnd
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_ov089_02175350(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0xc
    mov r4, #1
    add r1, sp, #0
    mov r0, #0
    mov r2, #0xa
    mov r5, r4
    mov r6, r4
    mov r7, r4
    mov r8, r4
    bl MIi_CpuClear16
    ldr r1, [pc, #0x160]
    mov r0, r4
    ldr r1, [r1]
@L_02175388:
    add r2, r1, r0, lsl #2
    add r2, r2, #0x1000
    ldr r2, [r2, #0x4e4]
    cmp r2, #0xb
    addls pc, pc, r2, lsl #2
    b @L_02175444
    dcd 0xea000027
    dcd 0xea000026
    dcd 0xea000008
    dcd 0xea000024
    dcd 0xea000012
    dcd 0xea00000b
    dcd 0xea000021
    dcd 0xea000020
    dcd 0xea000014
    dcd 0xea00001e
    dcd 0xea00001d
    dcd 0xea000017
    dcd 0xe1a02018
    dcd 0xe1dd30b0
    dcd 0xe1a02802
    dcd 0xe1832822
    dcd 0xe1cd20b0
    dcd 0xea000016
    dcd 0xe1a02017
    dcd 0xe1dd30b2
    dcd 0xe1a02802
    dcd 0xe1832822
    dcd 0xe1cd20b2
    dcd 0xea000010
    dcd 0xe1a02016
    dcd 0xe1dd30b4
    dcd 0xe1a02802
    dcd 0xe1832822
    dcd 0xe1cd20b4
    dcd 0xea00000a
    dcd 0xe1a02015
    dcd 0xe1dd30b6
    dcd 0xe1a02802
    dcd 0xe1832822
    dcd 0xe1cd20b6
    dcd 0xea000004
    dcd 0xe1a02014
    dcd 0xe1dd30b8
    dcd 0xe1a02802
    dcd 0xe1832822
    dcd 0xe1cd20b8
@L_02175444:
    add r0, r0, #1
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    cmp r0, #0xf
    bls @L_02175388
    ldrh r1, [sp, #6]
    cmp r1, #0
    beq @L_02175470
    mov r0, #5
@L_02175468:
    bl func_ov089_02174e70
    b @L_021754c4
@L_02175470:
    ldrh r1, [sp]
    cmp r1, #0
    beq @L_02175484
    mov r0, #1
    b @L_02175468
@L_02175484:
    ldrh r1, [sp, #8]
    cmp r1, #0
    beq @L_02175498
    mov r0, #6
    b @L_02175468
@L_02175498:
    ldrh r1, [sp, #4]
    cmp r1, #0
    beq @L_021754ac
    mov r0, #2
    b @L_02175468
@L_021754ac:
    ldrh r0, [sp, #2]
    cmp r0, #0
    beq @L_021754c0
    bl func_ov089_02174eac
    b @L_021754c4
@L_021754c0:
    bl func_ov089_021750d8
@L_021754c4:
    cmp r0, #0x15
    addne sp, sp, #0xc
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldr r1, [pc, #0x10]
    mov r0, #0
    bl func_ov089_02174e70
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
    dcd data_ov089_021792e0
    dcd 0x0000ffff
}

asm void MBi_calc_sendblock(void)
{
    ldr r1, =data_ov089_02179220
    mov r2, #1
    ldr r1, [r1]
    tst r1, r2, lsl r0
    bxeq lr
    ldr r2, =data_ov089_021792e0
    ldr r1, =0x5d4
    ldr r2, [r2]
    mla r12, r0, r1, r2
    add r0, r12, #0x1000
    ldrb r0, [r0, #0xd52]
    cmp r0, #0
    addne r0, r12, #0x1d00
    ldrneh r1, [r0, #0x4c]
    cmpne r1, #0
    bxeq lr
    ldrh r2, [r0, #0x48]
    ldrh r3, [r0, #0x4a]
    cmp r3, r2
    bhi @L_02175550
    add r1, r3, #2
    cmp r2, r1
    addle r1, r2, #1
    strleh r1, [r0, #0x48]
    bxle lr
@L_02175550:
    add r0, r12, #0x1d00
    strh r3, [r0, #0x48]
    bx lr
}

asm void func_ov089_02175568(void)
{
    cmp r1, r0
    movls r1, r0
    mov r0, r1, lsl #0x10
    mov r0, r0, lsr #0x10
    bx lr
}

asm void IsChildAidValid(void)
{
    cmp r0, #1
    blo @L_02175590
    cmp r0, #0xf
    movls r0, #1
    bxls lr
@L_02175590:
    mov r0, #0
    bx lr
}

asm void MBi_CommCallParentError(void)
{
    stmdb sp!, {r3, lr}
    strh r1, [sp]
    add r2, sp, #0
    mov r1, #0xd
    bl MBi_CommChangeParentStateCallbackOnly
    ldmia sp!, {r3, pc}
}

asm void func_ov089_021755b0(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x60
    mov r5, #0
    movs r8, r0
    mov r6, r5
    beq @L_02175600
    bl func_0200c814
    add r4, sp, #0
    mov r7, r0
    mov r0, r8
    mov r1, r4
    mov r2, #0x60
    bl FS_ReadFile
    cmp r0, #0x60
    mov r0, r8
    mov r1, r7
    mov r2, #0
    movhs r5, r4
    bl FS_SeekFile
    b @L_02175604
@L_02175600:
    ldr r5, =0x2fffe00
@L_02175604:
    cmp r5, #0
    beq @L_02175624
    ldr r1, [r5, #0x2c]
    ldr r0, [r5, #0x3c]
    add r1, r1, #0x268
    add r6, r1, r0
    cmp r6, #0x10000
    movlo r6, #0x10000
@L_02175624:
    mov r0, r6
    add sp, sp, #0x60
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void func_ov089_02175634(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x6c
    movs r10, r0
    mov r0, #0
    mov r9, r1
    str r2, [sp, #4]
    str r0, [sp, #0x10]
    bne @L_02175678
    bl func_02010d8c
    ldrb r0, [r0, #0x12]
    tst r0, #2
    ldreq r1, =data_ov089_021791a0
    ldreq r0, =data_ov089_021791e4
    streq r1, [r0]
    ldrne r1, =data_ov089_021791b8
    ldrne r0, =data_ov089_021791e4
    strne r1, [r0]
@L_02175678:
    ldr r0, [sp, #4]
    cmp r0, #0x164
    blo @L_02175b38
    mov r6, #0
    str r6, [sp, #0xc]
    mov r11, r6
    cmp r10, #0
    add r5, r9, #0x160
    sub r4, r0, #0x160
    beq @L_021756d4
    mov r0, r10
    bl func_0200c814
    str r0, [sp, #8]
    mov r0, r10
    mov r1, r9
    mov r2, #0x160
    bl FS_ReadFile
    cmp r0, #0x160
    ldr r7, [r9, #0x80]
    movlt r4, r6
    cmp r7, #0
    moveq r7, #0x1000000
    b @L_02175760
@L_021756d4:
    ldr r0, =0x2fffe00
    add r10, sp, #0x24
    ldr r7, [r0, #0x80]
    mov r0, #1
    str r0, [sp, #0xc]
    cmp r7, #0
    mov r0, r10
    moveq r7, #0x1000000
    bl FS_InitFile
    mov r8, #3
    ldr r0, =data_ov089_021791e8
    mov r1, r8
    bl FS_FindArchive
    sub r1, r8, #4
    str r1, [sp]
    mov r1, r0
    mov r0, r10
    mov r2, #0
    add r3, r7, #0x88
    bl func_0200c68c
    cmp r0, #0
    addeq sp, sp, #0x6c
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    bl func_0200c814
    str r0, [sp, #8]
    ldr r0, =0x2fffe00
    mov r1, r9
    mov r2, #0x160
    bl MI_CpuCopy8
    ldr r0, [r9, #0x60]
    orr r0, r0, #0x6000
    orr r0, r0, #0x400000
    str r0, [r9, #0x60]
@L_02175760:
    cmp r4, #0x88
    blo @L_021757b8
    ldr r0, [sp, #0xc]
    cmp r0, #0
    beq @L_02175788
    bl func_02012234
    mov r1, r5
    mov r2, #0x88
    bl MI_CpuCopy8
    b @L_021757ac
@L_02175788:
    ldr r1, [sp, #8]
    mov r0, r10
    add r1, r1, r7
    mov r2, #0
    bl FS_SeekFile
    mov r0, r10
    mov r1, r5
    mov r2, #0x88
    bl FS_ReadFile
@L_021757ac:
    add r5, r5, #0x88
    sub r4, r4, #0x88
    b @L_021757bc
@L_021757b8:
    mov r4, #0
@L_021757bc:
    cmp r4, #0x70
    blo @L_02175834
    mov r0, r5
    mov r6, r5
    bl func_ov089_02178a08
    mov r0, #3
    mov r7, #0
    str r0, [sp]
    mov r0, r6
    mov r1, r7
    mov r2, #0x160
    mov r3, r9
    add r5, r5, #0x70
    sub r4, r4, #0x70
    bl MBi_AttachCacheBuffer
    ldr r8, [r10, #8]
    b @L_02175804
@L_02175800:
    add r7, r7, #1
@L_02175804:
    cmp r7, #3
    bge @L_02175818
    ldrsb r0, [r8, r7]
    cmp r0, #0
    bne @L_02175800
@L_02175818:
    mov r0, r8
    mov r2, r7
    add r1, r6, #0x10
    bl MI_CpuCopy8
    str r7, [r6, #0x14]
    str r8, [r6, #0x18]
    b @L_02175838
@L_02175834:
    mov r4, #0
@L_02175838:
    cmp r4, #0x10
    movlo r4, #0
    blo @L_02175890
    mov r1, #0
    mov r0, r10
    str r1, [r5]
    mov r11, r5
    bl func_0200e4f8
    ldr r1, [sp, #8]
    ldr r2, [r9, #0x20]
    add r1, r1, r0
    add r1, r2, r1
    mov r0, r10
    str r1, [r5, #4]
    bl func_0200e4f8
    ldr r1, [sp, #8]
    ldr r2, [r9, #0x30]
    add r0, r1, r0
    add r0, r2, r0
    str r0, [r5, #8]
    add r5, r5, #0x10
    sub r4, r4, #0x10
@L_02175890:
    ldr r1, [r9, #0x2c]
    ldr r0, [r9, #0x3c]
    add r0, r1, r0
    cmp r4, r0
    blo @L_02175958
    mov r0, r10
    bl func_0200e4f8
    mov r4, r0
    ldr r1, [r11, #4]
    ldr r0, [sp, #0xc]
    mov r8, r5
    cmp r0, #0
    sub r1, r1, r4
    ldr r7, [r9, #0x2c]
    beq @L_021758e0
    cmp r1, #0x8000
    rsblo r0, r1, #0x8000
    sublo r7, r7, r0
    addlo r8, r5, r0
    movlo r1, #0x8000
@L_021758e0:
    mov r0, r10
    mov r2, #0
    bl FS_SeekFile
    mov r1, r8
    mov r2, r7
    mov r0, r10
    bl FS_ReadFile
    mov r8, #3
    str r8, [sp]
    ldr r1, [r11, #4]
    ldr r2, [r9, #0x2c]
    mov r0, r6
    mov r3, r5
    bl MBi_AttachCacheBuffer
    ldr r1, [r11, #8]
    mov r2, #0
    ldr r7, [r9, #0x2c]
    mov r0, r10
    sub r1, r1, r4
    bl FS_SeekFile
    ldr r2, [r9, #0x3c]
    mov r0, r10
    add r1, r5, r7
    bl FS_ReadFile
    str r8, [sp]
    add r3, r5, r7
    ldr r1, [r11, #8]
    mov r0, r6
    ldr r2, [r9, #0x3c]
    b @L_02175a50
@L_02175958:
    cmp r4, #0xcc00
    blo @L_02175a5c
    mov r0, r10
    bl func_0200e4f8
    ldr r8, [r11, #4]
    mov r4, r0
    ldr r0, [sp, #0xc]
    mov r11, r5
    cmp r0, #0
    sub r1, r8, r4
    mov r7, #0x4400
    beq @L_0217599c
    cmp r1, #0x8000
    rsblo r0, r1, #0x8000
    sublo r7, r7, r0
    addlo r11, r5, r0
    movlo r1, #0x8000
@L_0217599c:
    mov r0, r10
    mov r2, #0
    bl FS_SeekFile
    mov r1, r11
    mov r2, r7
    mov r0, r10
    bl FS_ReadFile
    mov r0, #3
    mov r11, #0x4400
    str r0, [sp]
    mov r0, r6
    mov r1, r8
    mov r2, r11
    mov r3, r5
    bl MBi_AttachCacheBuffer
    add r1, r8, #0x4400
    mov r0, r10
    sub r1, r1, r4
    mov r2, #0
    bl FS_SeekFile
    mov r0, r10
    add r1, r5, #0x4400
    mov r2, r11
    bl FS_ReadFile
    mov r7, #2
    mov r0, r6
    add r1, r8, #0x4400
    mov r2, r11
    add r3, r5, #0x4400
    str r7, [sp]
    bl MBi_AttachCacheBuffer
    add r1, r8, #0x8800
    mov r2, #0
    mov r0, r10
    sub r1, r1, r4
    bl FS_SeekFile
    mov r0, r10
    add r1, r5, #0x8800
    mov r2, r11
    bl FS_ReadFile
    str r7, [sp]
    add r1, r8, #0x8800
    mov r2, r11
    add r3, r5, #0x8800
    mov r0, r6
@L_02175a50:
    bl MBi_AttachCacheBuffer
    mov r0, #1
    str r0, [sp, #0x10]
@L_02175a5c:
    ldr r1, [sp, #8]
    mov r0, r10
    mov r2, #0
    bl FS_SeekFile
    ldr r0, [sp, #0xc]
    cmp r0, #0
    beq @L_02175b20
    add r0, sp, #0x24
    bl FS_CloseFile
    ldr r0, [sp, #0x10]
    cmp r0, #0
    beq @L_02175b20
    ldr r2, [r9, #0x20]
    ldr r0, =data_ov089_021791e4
    str r2, [sp, #0x14]
    ldr r1, [r9, #0x28]
    add r4, sp, #0x14
    sub r1, r1, r2
    str r1, [sp, #0x18]
    ldr r1, [r6, #0x48]
    ldr r5, [r0]
    sub r1, r1, r2
    str r1, [sp, #0x1c]
    ldr r1, [sp, #4]
    mov r0, r4
    str r1, [sp, #0x20]
    mov r1, #0x4000
    mov r2, #0x8000
    mov r3, #1
    bl MBi_ReadSegmentHeader
    ldr r0, [r5, #4]
    cmp r0, #0
    beq @L_02175b08
    mov r7, #0
@L_02175ae4:
    ldmia r5, {r1, r2}
    mov r0, r4
    mov r3, r7
    add r2, r1, r2
    bl MBi_ReadSegmentHeader
    add r5, r5, #8
    ldr r0, [r5, #4]
    cmp r0, #0
    bne @L_02175ae4
@L_02175b08:
    ldr r1, [r9, #0x28]
    ldr r2, =AutoloadCallback
    ldr r3, [r6, #0x48]
    ldr r0, =0xe12fff1e
    sub r1, r2, r1
    str r0, [r3, r1]
@L_02175b20:
    ldr r0, [sp, #0x10]
    cmp r0, #0
    beq @L_02175b38
    ldr r1, [sp, #4]
    mov r0, r9
    bl DC_FlushRange
@L_02175b38:
    ldr r0, [sp, #0x10]
    add sp, sp, #0x6c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
