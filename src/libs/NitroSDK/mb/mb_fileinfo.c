// (asm for now)

void MBi_ReadSegmentHeader(void);
void MB_RegisterFile(void);
void MBi_MakeDownloadFileInfo(void);
void MBi_SetSegmentInfo(void);
void MBi_MakeBlockInfoTable(void);
void MBi_get_blockinfo(void);
void MBi_IsAbleToRecv(void);
void IsAbleToLoad(void);

void MI_CpuFill8(void);
void MI_CpuCopy8(void);
void OS_DisableInterrupts(void);
void MBi_IsStarted(void);
void OS_RestoreInterrupts(void);
extern char mbc[];
void MBi_MakeGameInfo(void);
void MB_AddGameInfo(void);
extern char data_ov089_02179224[];
void MBi_IsTaskAvailable(void);
void MBi_InitTaskInfo(void);
void MBi_InitTaskThread(void);
extern char MBi_defaultLoadSegList[];
void OS_Terminate(void);
void _u32_div_f(void);

asm void MBi_ReadSegmentHeader(void)
{
    stmdb sp!, {r3, lr}
    mov lr, r1
    ldr r12, [r0]
    ldr r1, [r0, #0xc]
    cmp lr, #0x4000
    movlo lr, #0x4000
    cmp r2, #0x8000
    movhi r2, #0x8000
    cmp lr, r12
    add r1, r12, r1
    movlo lr, r12
    cmp r2, r1
    movhi r2, r1
    cmp lr, r2
    ldmhsia sp!, {r3, pc}
    cmp r3, #0
    beq @L_02175bbc
    ldr r0, [r0, #8]
    sub r2, r2, lr
    add r0, r0, lr
    mov r1, #0
    bl MI_CpuFill8
    ldmia sp!, {r3, pc}
@L_02175bbc:
    ldr r3, [r0, #4]
    ldr r1, [r0, #8]
    add r0, r3, lr
    add r1, r1, lr
    sub r2, r2, lr
    bl MI_CpuCopy8
    ldmia sp!, {r3, pc}
}

asm void MB_RegisterFile(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r7, r0
    mov r6, r1
    mov r10, #0xff
    bl OS_DisableInterrupts
    mov r4, r0
    bl MBi_IsStarted
    cmp r0, #0
    bne @L_02175c0c
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02175c0c:
    ldr r0, =mbc
    ldr r0, [r0]
    add r1, r0, #0x1000
    ldrb r1, [r1, #0x524]
    add r1, r1, #1
    cmp r1, #0x10
    ble @L_02175c38
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02175c38:
    ldr r1, =0x5d4
    mov r5, #0
@L_02175c40:
    mla r2, r5, r1, r0
    add r2, r2, #0x1000
    ldr r3, [r2, #0xd40]
    cmp r3, r7
    bne @L_02175c64
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02175c64:
    ldrb r2, [r2, #0xd52]
    cmp r2, #0
    moveq r10, r5
    beq @L_02175c84
    add r2, r5, #1
    and r5, r2, #0xff
    cmp r5, #0x10
    blo @L_02175c40
@L_02175c84:
    cmp r5, #0x10
    bne @L_02175c9c
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02175c9c:
    ldr r1, =0x5d4
    ldr r8, =mbc
    mul r5, r10, r1
    add r0, r0, r5
    add r0, r0, #0x1000
    str r7, [r0, #0xd40]
    ldr r0, [r8]
    mov r1, r6
    add r0, r0, #0x388
    add r0, r0, #0x1400
    add r9, r0, r5
    mov r0, r9
    bl MBi_MakeDownloadFileInfo
    add r0, r7, #0x1c
    add r1, r9, #0xc4
    mov r2, #0x20
    bl MI_CpuCopy8
    ldr r0, [r8]
    mov r1, r9
    add r0, r0, #0x12c
    add r0, r0, #0x1c00
    add r0, r0, r5
    bl MBi_MakeBlockInfoTable
    cmp r0, #0
    bne @L_02175d10
    mov r0, r4
    bl OS_RestoreInterrupts
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02175d10:
    ldr r2, [r8]
    mov r1, r7
    add r0, r2, #0x6c
    add r0, r0, #0x1800
    add r0, r0, r5
    add r2, r2, #0x1300
    bl MBi_MakeGameInfo
    ldr r0, [r8]
    add r0, r0, r5
    add r0, r0, #0x1000
    strb r10, [r0, #0xd21]
    ldr r0, [r8]
    add r0, r0, #0x6c
    add r0, r0, #0x1800
    add r0, r0, r5
    bl MB_AddGameInfo
    ldr r2, =data_ov089_02179224
    ldr r1, [r8]
    ldrb r0, [r2]
    add r1, r1, r5
    add r1, r1, #0x1000
    strb r0, [r1, #0xd1f]
    ldr r1, [r8]
    mov r3, #1
    add r1, r1, r5
    add r1, r1, #0x1d00
    strh r3, [r1, #0x4e]
    ldr r1, [r8]
    add r7, r6, #0x1e8
    add r1, r1, r5
    add r1, r1, #0x1000
    str r6, [r1, #0xd44]
    ldr r1, [r8]
    add r3, r6, #0x258
    add r1, r1, r5
    add r1, r1, #0x1000
    str r7, [r1, #0xd54]
    ldr r1, [r8]
    add r6, r0, #1
    add r0, r1, r5
    add r0, r0, #0x1000
    str r3, [r0, #0xd58]
    ldr r0, [r8]
    strb r6, [r2]
    add r0, r0, r5
    add r0, r0, #0x1000
    ldr r0, [r0, #0xd54]
    ldr r0, [r0, #0x6c]
    cmp r0, #0
    beq @L_02175e08
    bl MBi_IsTaskAvailable
    cmp r0, #0
    bne @L_02175e08
    ldr r0, [r8]
    add r0, r0, #0xce0
    add r0, r0, #0x7000
    bl MBi_InitTaskInfo
    ldr r0, [r8]
    mov r1, #0x800
    add r0, r0, #0x4e0
    add r0, r0, #0x7000
    bl MBi_InitTaskThread
@L_02175e08:
    ldr r2, =mbc
    mov r6, #1
    ldr r1, [r2]
    mov r0, r4
    add r1, r1, r5
    add r1, r1, #0x1000
    strb r6, [r1, #0xd52]
    ldr r1, [r2]
    add r1, r1, #0x1000
    ldrb r2, [r1, #0x524]
    add r2, r2, #1
    strb r2, [r1, #0x524]
    bl OS_RestoreInterrupts
    mov r0, r6
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void MBi_MakeDownloadFileInfo(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r4, r1
    mov r5, r0
    mov r2, #0x22c0000
    ldr r1, [r4, #0x24]
    str r2, [sp]
    ldr r0, [r4, #0x34]
    ldr r7, =MBi_defaultLoadSegList
    str r1, [r5]
    str r0, [r5, #4]
    add r8, r5, #0xc
    mov r9, #0
    add r6, sp, #0
@L_02175e84:
    mov r0, r4
    mov r1, r7
    mov r2, r8
    mov r3, r6
    bl MBi_SetSegmentInfo
    add r9, r9, #1
    cmp r9, #3
    add r8, r8, #0x10
    add r7, r7, #4
    blt @L_02175e84
    add r0, r4, #0x160
    add r1, r5, #0x3c
    mov r2, #0x88
    bl MI_CpuCopy8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void MBi_SetSegmentInfo(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r1, [r1]
    mov r7, r0
    mov r6, r2
    mov r5, r3
    cmp r1, #0
    beq @L_02175ef4
    cmp r1, #1
    beq @L_02175f3c
    cmp r1, #2
    beq @L_02175ff8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02175ef4:
    ldr r2, [r7, #0x28]
    cmp r2, #0x2000000
    blo @L_02175f34
    cmp r2, #0x22c0000
    bhs @L_02175f34
    ldr r1, [r7, #0x2c]
    add r0, r2, r1
    cmp r0, #0x22c0000
    bhi @L_02175f34
    ldr r0, [r6, #0xc]
    str r1, [r6, #8]
    bic r0, r0, #1
    str r2, [r6, #4]
    str r2, [r6]
    str r0, [r6, #0xc]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02175f34:
    bl OS_Terminate
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02175f3c:
    ldr r12, [r7, #0x38]
    ldr r1, [r7, #0x3c]
    mov r2, #0
    mov r4, r2
    cmp r12, #0x2000000
    add r3, r12, r1
    blo @L_02175f84
    ldr r0, =0x23fe800
    cmp r12, r0
    bhs @L_02175f84
    cmp r3, #0x2300000
    bls @L_02175fb0
    cmp r3, r0
    bhs @L_02175f80
    cmp r1, #0x40000
    movls r4, #1
    bls @L_02175fb0
@L_02175f80:
    b @L_02175fac
@L_02175f84:
    ldr r1, =0x37f8000
    cmp r12, r1
    blo @L_02175fac
    add r0, r1, #0x17000
    cmp r12, r0
    bhs @L_02175fac
    cmp r3, r0
    movls r4, #1
    movhi r2, #1
    b @L_02175fb0
@L_02175fac:
    mov r2, #1
@L_02175fb0:
    cmp r2, #1
    bne @L_02175fbc
    bl OS_Terminate
@L_02175fbc:
    ldr r1, [r7, #0x3c]
    ldr r0, [r7, #0x38]
    cmp r4, #0
    stmib r6, {r0, r1}
    streq r0, [r6]
    ldrne r0, [r5]
    strne r0, [r6]
    ldrne r0, [r5]
    addne r0, r0, r1
    strne r0, [r5]
    ldr r0, [r6, #0xc]
    bic r0, r0, #1
    orr r0, r0, #1
    str r0, [r6, #0xc]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02175ff8:
    ldr r0, [r6, #0xc]
    ldr r1, =0x27ffe00
    mov r2, #0x160
    stmib r6, {r1, r2}
    bic r0, r0, #1
    str r1, [r6]
    str r0, [r6, #0xc]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void MBi_MakeBlockInfoTable(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r10, r0
    add r6, r10, #0xc
    cmp r1, #0
    mov r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r2, r0
@L_02176040:
    str r0, [r10, r2, lsl #2]
    add r3, r1, r2, lsl #4
    add r2, r2, #1
    ldr r3, [r3, #0x14]
    and r2, r2, #0xff
    cmp r2, #3
    add r0, r0, r3
    blo @L_02176040
    mov r9, #0
    ldr r4, =mbc
    strh r9, [r6]
    add r5, r1, #0xc
@L_02176070:
    ldr r0, [r4]
    add r7, r5, r9, lsl #4
    add r0, r0, #0x1000
    ldr r1, [r0, #0x318]
    ldr r8, [r7, #8]
    add r0, r8, r1
    sub r0, r0, #1
    bl _u32_div_f
    mov r1, r9, lsl #1
    ldrh r3, [r6, r1]
    mov r2, r0, lsl #0x10
    ldr r1, [r7, #4]
    add r2, r3, r2, lsr #16
    mov r3, r2, lsl #0x10
    mov r0, r9
    mov r2, r8
    mov r7, r3, lsr #0x10
    bl IsAbleToLoad
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r9, #2
    addlo r0, r6, r9, lsl #1
    strloh r7, [r0, #2]
    add r0, r9, #1
    and r9, r0, #0xff
    strhsh r7, [r10, #0x12]
    cmp r9, #3
    blo @L_02176070
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

asm void MBi_get_blockinfo(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldrh r4, [r1, #0x12]
    cmp r2, r4
    movhs r0, #0
    ldmhsia sp!, {r3, r4, r5, pc}
    mov r12, #2
@L_02176108:
    add r4, r1, r12, lsl #1
    ldrh r4, [r4, #0xc]
    cmp r2, r4
    bhs @L_02176128
    sub r4, r12, #1
    mov r12, r4, lsl #0x18
    movs r12, r12, asr #0x18
    bpl @L_02176108
@L_02176128:
    cmp r12, #0
    movlt r0, #0
    ldmltia sp!, {r3, r4, r5, pc}
    ldr r4, =mbc
    add r5, r1, r12, lsl #1
    ldr lr, [r4]
    ldrh r5, [r5, #0xc]
    add lr, lr, #0x1000
    ldr lr, [lr, #0x318]
    sub r5, r2, r5
    mul r2, r5, lr
    add r3, r3, #0xc
    add r5, r3, r12, lsl #4
    ldr r3, [r5, #8]
    sub lr, r3, r2
    str lr, [r0, #4]
    ldr r3, [r4]
    add r3, r3, #0x1000
    ldr r3, [r3, #0x318]
    cmp lr, r3
    strhi r3, [r0, #4]
    ldr r1, [r1, r12, lsl #2]
    add r1, r2, r1
    str r1, [r0, #8]
    ldr r1, [r5]
    add r1, r2, r1
    str r1, [r0]
    strb r12, [r0, #0xc]
    mov r0, #1
    ldmia sp!, {r3, r4, r5, pc}
}

asm void MBi_IsAbleToRecv(void)
{
    ldr r3, =MBi_defaultLoadSegList
    ldr r0, [r3, r0, lsl #2]
    cmp r0, #0
    beq @L_021761e8
    cmp r0, #1
    beq @L_02176204
    cmp r0, #2
    bne @L_02176238
    ldr r0, =0x27ffe00
    cmp r1, r0
    blo @L_02176240
    add r1, r1, r2
    add r0, r0, #0x160
    cmp r1, r0
    bhi @L_02176240
    mov r0, #1
    bx lr
@L_021761e8:
    cmp r1, #0x2000000
    blo @L_02176240
    add r0, r1, r2
    cmp r0, #0x22c0000
    bhi @L_02176240
    mov r0, #1
    bx lr
@L_02176204:
    cmp r1, #0x22c0000
    blo @L_0217621c
    add r0, r1, r2
    cmp r0, #0x2300000
    movls r0, #1
    bxls lr
@L_0217621c:
    cmp r1, #0x2000000
    blo @L_02176240
    add r0, r1, r2
    cmp r0, #0x2300000
    bhi @L_02176240
    mov r0, #1
    bx lr
@L_02176238:
    mov r0, #0
    bx lr
@L_02176240:
    mov r0, #0
    bx lr
}

asm void IsAbleToLoad(void)
{
    stmdb sp!, {r3, lr}
    ldr r3, =MBi_defaultLoadSegList
    ldr r3, [r3, r0, lsl #2]
    cmp r3, #0
    beq @L_02176274
    cmp r3, #1
    beq @L_0217627c
    cmp r3, #2
    bne @L_02176300
@L_02176274:
    bl MBi_IsAbleToRecv
    ldmia sp!, {r3, pc}
@L_0217627c:
    cmp r1, #0x2000000
    blo @L_021762d4
    ldr r0, =0x23fe800
    cmp r1, r0
    bhs @L_021762d4
    cmp r1, #0x2300000
    add r1, r1, r2
    bhs @L_021762a8
    cmp r1, #0x2300000
    movhi r0, #0
    ldmhiia sp!, {r3, pc}
@L_021762a8:
    cmp r1, #0x2300000
    movls r0, #1
    ldmlsia sp!, {r3, pc}
    ldr r0, =0x23fe800
    cmp r1, r0
    bhs @L_021762cc
    cmp r2, #0x40000
    movls r0, #1
    ldmlsia sp!, {r3, pc}
@L_021762cc:
    mov r0, #0
    ldmia sp!, {r3, pc}
@L_021762d4:
    ldr r3, =0x37f8000
    cmp r1, r3
    blo @L_02176308
    add r0, r3, #0x17000
    cmp r1, r0
    bhs @L_02176308
    add r1, r1, r2
    cmp r1, r0
    movls r0, #1
    movhi r0, #0
    ldmia sp!, {r3, pc}
@L_02176300:
    mov r0, #0
    ldmia sp!, {r3, pc}
@L_02176308:
    mov r0, #0
    ldmia sp!, {r3, pc}
}
