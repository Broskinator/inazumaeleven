// (asm for now)

void NNSi_G3dFuncSbc_NOP(void);
void NNSi_G3dFuncSbc_RET(void);
void func_020291c4(void);
void func_0202933c(void);
void func_02029408(void);
void NNSi_G3dFuncSbc_MAT(void);
void func_0202992c(void);
void NNSi_G3dFuncSbc_SHP(void);

void func_0202b608(void);
extern char data_020bf680[];
extern char data_020a48ac[];
extern char data_020bf418[];
extern char data_020ab8d0[];
void func_0202b550(void);
extern char data_020ab8e0[];

asm void NNSi_G3dFuncSbc_NOP(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #0xc]
    cmp r1, #0
    beq @L_0202918c
    blx r1
@L_0202918c:
    ldr r0, [r4]
    add r0, r0, #1
    str r0, [r4]
    ldmia sp!, {r4, pc}
}

asm void NNSi_G3dFuncSbc_RET(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #0x10]
    cmp r1, #0
    beq @L_020291b4
    blx r1
@L_020291b4:
    ldr r0, [r4, #8]
    orr r0, r0, #0x20
    str r0, [r4, #8]
    ldmia sp!, {r4, pc}
}

asm void func_020291c4(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    ldr r2, [r6, #8]
    tst r2, #0x200
    bne @L_0202932c
    ldr r0, [r6, #0x14]
    ldr r1, [r6]
    cmp r0, #0
    ldrb r4, [r1, #1]
    ldrneb r5, [r6, #0x8e]
    orr r2, r2, #4
    add r1, r6, #0x184
    moveq r5, #0
    strb r4, [r6, #0xac]
    str r2, [r6, #8]
    str r1, [r6, #0xb8]
    cmp r5, #1
    bne @L_02029240
    ldr r0, [r6, #8]
    ldr r1, [r6, #0x14]
    bic r2, r0, #0x40
    mov r0, r6
    str r2, [r6, #8]
    blx r1
    ldr r0, [r6, #0x14]
    cmp r0, #0
    ldrneb r5, [r6, #0x8e]
    ldr r0, [r6, #8]
    moveq r5, #0
    and r0, r0, #0x40
    b @L_02029244
@L_02029240:
    mov r0, #0
@L_02029244:
    cmp r0, #0
    bne @L_020292a4
    ldr r12, [r6, #4]
    ldr r1, [r12, #0x18]
    cmp r1, #0
    beq @L_02029290
    mov r0, r4, lsr #5
    add r0, r12, r0, lsl #2
    ldr r0, [r0, #0x4c]
    and r2, r4, #0x1f
    mov r3, #1
    tst r0, r3, lsl r2
    beq @L_02029290
    ldr r0, [r6, #0xb8]
    ldr r3, [r12, #0x1c]
    mov r2, r4
    blx r3
    cmp r0, #0
    bne @L_020292a4
@L_02029290:
    ldr r1, [r6]
    ldr r0, [r6, #0xb8]
    ldrb r1, [r1, #2]
    and r1, r1, #1
    str r1, [r0]
@L_020292a4:
    cmp r5, #2
    bne @L_020292e0
    ldr r0, [r6, #8]
    ldr r1, [r6, #0x14]
    bic r2, r0, #0x40
    mov r0, r6
    str r2, [r6, #8]
    blx r1
    ldr r0, [r6, #0x14]
    cmp r0, #0
    ldrneb r5, [r6, #0x8e]
    ldr r0, [r6, #8]
    moveq r5, #0
    and r0, r0, #0x40
    b @L_020292e4
@L_020292e0:
    mov r0, #0
@L_020292e4:
    cmp r0, #0
    bne @L_0202930c
    ldr r0, [r6, #0xb8]
    ldr r0, [r0]
    cmp r0, #0
    ldr r0, [r6, #8]
    orrne r0, r0, #1
    strne r0, [r6, #8]
    biceq r0, r0, #1
    streq r0, [r6, #8]
@L_0202930c:
    cmp r5, #3
    bne @L_0202932c
    ldr r0, [r6, #8]
    ldr r1, [r6, #0x14]
    bic r2, r0, #0x40
    mov r0, r6
    str r2, [r6, #8]
    blx r1
@L_0202932c:
    ldr r0, [r6]
    add r0, r0, #3
    str r0, [r6]
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_0202933c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    ldr r0, [r4, #8]
    tst r0, #0x200
    bne @L_020293f8
    tst r0, #1
    beq @L_020293f8
    ldr r0, [r4, #0x18]
    cmp r0, #0
    ldrneb r5, [r4, #0x8f]
    moveq r5, #0
    cmp r5, #1
    bne @L_020293a4
    ldr r0, [r4, #8]
    ldr r1, [r4, #0x18]
    bic r2, r0, #0x40
    mov r0, r4
    str r2, [r4, #8]
    blx r1
    ldr r0, [r4, #0x18]
    cmp r0, #0
    ldrneb r5, [r4, #0x8f]
    ldr r0, [r4, #8]
    moveq r5, #0
    and r0, r0, #0x40
    b @L_020293a8
@L_020293a4:
    mov r0, #0
@L_020293a8:
    cmp r0, #0
    bne @L_020293d8
    ldr r0, [r4]
    ldrb r0, [r0, #1]
    str r0, [sp]
    ldr r0, [r4, #8]
    tst r0, #0x100
    bne @L_020293d8
    add r1, sp, #0
    mov r0, #0x14
    mov r2, #1
    bl func_0202b608
@L_020293d8:
    cmp r5, #3
    bne @L_020293f8
    ldr r0, [r4, #8]
    ldr r1, [r4, #0x18]
    bic r2, r0, #0x40
    mov r0, r4
    str r2, [r4, #8]
    blx r1
@L_020293f8:
    ldr r0, [r4]
    add r0, r0, #2
    str r0, [r4]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_02029408(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    mov r8, r0
    ldr r4, [r8, #8]
    ldr r0, [r8, #0x1c]
    orr r5, r4, #8
    str r5, [r8, #8]
    cmp r0, #0
    ldrneb r5, [r8, #0x90]
    mov r6, r3
    mov r9, #0
    add r3, r8, #0xf4
    moveq r5, r9
    mov r4, r1
    mov r7, r2
    strb r6, [r8, #0xad]
    str r3, [r8, #0xb0]
    mov r10, #0x38
    cmp r5, #1
    bne @L_0202948c
    ldr r0, [r8, #8]
    ldr r1, [r8, #0x1c]
    bic r2, r0, #0x40
    mov r0, r8
    str r2, [r8, #8]
    blx r1
    ldr r0, [r8, #0x1c]
    cmp r0, #0
    ldrneb r5, [r8, #0x90]
    ldr r0, [r8, #8]
    moveq r5, #0
    and r0, r0, #0x40
    b @L_02029490
@L_0202948c:
    mov r0, #0
@L_02029490:
    cmp r0, #0
    bne @L_02029754
    ldr r0, [r8, #4]
    ldr r0, [r0, #0x38]
    cmp r0, #0
    beq @L_020294b8
    ldr r1, [r8, #8]
    tst r1, #0x80
    mlaeq r4, r6, r10, r0
    beq @L_02029750
@L_020294b8:
    cmp r4, #0x20
    beq @L_020294c8
    cmp r4, #0x40
    bne @L_020294fc
@L_020294c8:
    mov r1, r6, lsr #5
    add r1, r8, r1, lsl #2
    ldr r1, [r1, #0xbc]
    and r2, r6, #0x1f
    mov r3, #1
    tst r1, r3, lsl r2
    beq @L_020294fc
    mov r1, #0x38
    cmp r0, #0
    mlane r4, r6, r1, r0
    ldreq r0, =data_020bf680
    mlaeq r4, r6, r1, r0
    b @L_02029750
@L_020294fc:
    cmp r0, #0
    mov r2, #0x38
    beq @L_02029534
    add r10, r8, #0xbc
    mov r4, r6, lsr #5
    ldr r3, [r10, r4, lsl #2]
    and r0, r6, #0x1f
    mov r1, #1
    orr r0, r3, r1, lsl r0
    str r0, [r10, r4, lsl #2]
    ldr r0, [r8, #4]
    ldr r0, [r0, #0x38]
    mla r4, r6, r2, r0
    b @L_02029564
@L_02029534:
    cmp r4, #0x40
    addne r4, r8, #0xf4
    bne @L_02029564
    add r1, r8, #0xbc
    mov r0, r6, lsr #5
    ldr r3, =data_020bf680
    ldr r11, [r1, r0, lsl #2]
    and r4, r6, #0x1f
    mov r10, #1
    orr r10, r11, r10, lsl r4
    mla r4, r6, r2, r3
    str r10, [r1, r0, lsl #2]
@L_02029564:
    str r9, [r4]
    ldr r3, [r8, #0xd8]
    cmp r3, #0
    beq @L_020295b4
    adds r2, r3, #4
    beq @L_020295a0
    ldrb r0, [r3, #5]
    cmp r6, r0
    bhs @L_020295a0
    ldrh r1, [r3, #0xa]
    ldrh r0, [r2, r1]
    add r1, r2, r1
    add r1, r1, #4
    mla r1, r0, r6, r1
    b @L_020295a4
@L_020295a0:
    mov r1, #0
@L_020295a4:
    cmp r1, #0
    ldrne r0, [r1]
    addne r0, r3, r0
    bne @L_020295b8
@L_020295b4:
    mov r0, #0
@L_020295b8:
    ldrh r0, [r0, #0x1e]
    ldrh r10, [r7, #0x1e]
    ldr r2, =data_020a48ac
    tst r0, #0x20
    ldrne r0, [r4]
    mov r1, r10, asr #6
    orrne r0, r0, #0x20
    strne r0, [r4]
    ldr r11, =data_020bf418
    and r1, r1, #7
    ldr r9, [r2, r1, lsl #2]
    ldr r3, [r7, #4]
    mov r1, r10, asr #9
    and r1, r1, #7
    ldr r2, [r2, r1, lsl #2]
    ldr r1, [r7, #8]
    ldr lr, [r11, #0x94]
    mvn r12, r9
    and r3, r3, r9
    and r12, lr, r12
    orr r3, r12, r3
    str r3, [r4, #4]
    ldr r12, [r11, #0x98]
    mvn r9, r2
    and r9, r12, r9
    and r1, r1, r2
    orr r1, r9, r1
    str r1, [r4, #8]
    ldr r0, [r7, #0x10]
    ldr r3, [r7, #0xc]
    mvn r1, r0
    ldr r2, [r11, #0x9c]
    and r0, r3, r0
    and r1, r2, r1
    orr r0, r1, r0
    str r0, [r4, #0xc]
    ldr r1, [r7, #0x14]
    ldrh r0, [r7, #0x1c]
    str r1, [r4, #0x10]
    tst r10, #1
    str r0, [r4, #0x14]
    beq @L_020296e8
    tst r10, #2
    ldrne r1, [r4]
    add r0, r7, #0x2c
    orrne r1, r1, #1
    strne r1, [r4]
    bne @L_0202968c
    ldr r2, [r0]
    ldr r1, [r0, #4]
    str r2, [r4, #0x18]
    str r1, [r4, #0x1c]
    add r0, r0, #8
@L_0202968c:
    ldrh r1, [r7, #0x1e]
    tst r1, #4
    ldrne r1, [r4]
    orrne r1, r1, #2
    strne r1, [r4]
    bne @L_020296b8
    ldrsh r2, [r0]
    ldrsh r1, [r0, #2]
    add r0, r0, #4
    strh r2, [r4, #0x20]
    strh r1, [r4, #0x22]
@L_020296b8:
    ldrh r1, [r7, #0x1e]
    tst r1, #8
    ldreq r1, [r0]
    ldreq r0, [r0, #4]
    streq r1, [r4, #0x24]
    streq r0, [r4, #0x28]
    ldrne r0, [r4]
    orrne r0, r0, #4
    strne r0, [r4]
    ldr r0, [r4]
    orr r0, r0, #8
    str r0, [r4]
@L_020296e8:
    ldr r9, [r8, #4]
    ldr r1, [r9, #8]
    cmp r1, #0
    beq @L_02029724
    mov r0, r6, lsr #5
    add r0, r9, r0, lsl #2
    ldr r0, [r0, #0x3c]
    and r2, r6, #0x1f
    mov r3, #1
    tst r0, r3, lsl r2
    beq @L_02029724
    ldr r3, [r9, #0xc]
    mov r0, r4
    mov r2, r6
    blx r3
@L_02029724:
    ldr r0, [r4]
    tst r0, #0x18
    beq @L_02029750
    ldrh r2, [r7, #0x20]
    ldrh r0, [r7, #0x22]
    ldr r1, [r7, #0x24]
    strh r2, [r4, #0x2c]
    strh r0, [r4, #0x2e]
    ldr r0, [r7, #0x28]
    str r1, [r4, #0x30]
    str r0, [r4, #0x34]
@L_02029750:
    str r4, [r8, #0xb0]
@L_02029754:
    cmp r5, #2
    bne @L_02029790
    ldr r0, [r8, #8]
    ldr r1, [r8, #0x1c]
    bic r2, r0, #0x40
    mov r0, r8
    str r2, [r8, #8]
    blx r1
    ldr r0, [r8, #0x1c]
    cmp r0, #0
    ldrneb r5, [r8, #0x90]
    ldr r0, [r8, #8]
    moveq r5, #0
    and r0, r0, #0x40
    b @L_02029794
@L_02029790:
    mov r0, #0
@L_02029794:
    cmp r0, #0
    bne @L_0202983c
    ldr r4, [r8, #0xb0]
    ldr r1, [r4, #0xc]
    tst r1, #0x1f0000
    beq @L_02029830
    ldr r0, [r4]
    tst r0, #0x20
    bicne r0, r1, #0x1f0000
    strne r0, [r4, #0xc]
    ldr r0, [r8, #8]
    bic r0, r0, #2
    str r0, [r8, #8]
    tst r0, #0x100
    bne @L_0202983c
    ldr r0, =0x293130
    ldr r3, =0x2b2a
    str r0, [sp]
    ldr r2, [r4, #4]
    add r1, sp, #4
    str r2, [sp, #4]
    ldr r6, [r4, #8]
    mov r2, #6
    str r6, [sp, #8]
    ldr r6, [r4, #0xc]
    str r6, [sp, #0xc]
    str r3, [sp, #0x10]
    ldr r3, [r4, #0x10]
    str r3, [sp, #0x14]
    ldr r3, [r4, #0x14]
    str r3, [sp, #0x18]
    bl func_0202b608
    ldr r0, [r4]
    tst r0, #0x18
    beq @L_0202983c
    ldr r1, [r8, #0xf0]
    mov r0, r4
    blx r1
    b @L_0202983c
@L_02029830:
    ldr r0, [r8, #8]
    orr r0, r0, #2
    str r0, [r8, #8]
@L_0202983c:
    cmp r5, #3
    addne sp, sp, #0x1c
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r8, #8]
    ldr r1, [r8, #0x1c]
    bic r2, r0, #0x40
    mov r0, r8
    str r2, [r8, #8]
    blx r1
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void NNSi_G3dFuncSbc_MAT(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r2, [r4, #8]
    tst r2, #0x200
    bne @L_02029918
    ldr r0, [r4]
    tst r2, #1
    ldrb r3, [r0, #1]
    bne @L_020298b4
    tst r2, #8
    beq @L_020298b4
    ldrb r0, [r4, #0xad]
    cmp r3, r0
    beq @L_02029918
@L_020298b4:
    ldr lr, [r4, #0xd8]
    cmp lr, #0
    beq @L_02029900
    adds r12, lr, #4
    beq @L_020298ec
    ldrb r0, [lr, #5]
    cmp r3, r0
    bhs @L_020298ec
    ldrh r2, [lr, #0xa]
    ldrh r0, [r12, r2]
    add r2, r12, r2
    add r2, r2, #4
    mla r2, r0, r3, r2
    b @L_020298f0
@L_020298ec:
    mov r2, #0
@L_020298f0:
    cmp r2, #0
    ldrne r0, [r2]
    addne r2, lr, r0
    bne @L_02029904
@L_02029900:
    mov r2, #0
@L_02029904:
    ldrh lr, [r2]
    ldr r12, =data_020ab8d0
    mov r0, r4
    ldr r12, [r12, lr, lsl #2]
    blx r12
@L_02029918:
    ldr r0, [r4]
    add r0, r0, #2
    str r0, [r4]
    ldmia sp!, {r4, pc}
}

asm void func_0202992c(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r0
    ldr r0, [r5, #0x20]
    mov r4, r2
    cmp r0, #0
    ldrneb r6, [r5, #0x91]
    moveq r6, #0
    cmp r6, #1
    bne @L_02029984
    ldr r0, [r5, #8]
    ldr r1, [r5, #0x20]
    bic r2, r0, #0x40
    mov r0, r5
    str r2, [r5, #8]
    blx r1
    ldr r0, [r5, #0x20]
    cmp r0, #0
    ldrneb r6, [r5, #0x91]
    ldr r0, [r5, #8]
    moveq r6, #0
    and r0, r0, #0x40
    b @L_02029988
@L_02029984:
    mov r0, #0
@L_02029988:
    cmp r0, #0
    bne @L_020299ac
    ldr r0, [r5, #8]
    tst r0, #0x100
    bne @L_020299ac
    ldr r0, [r4, #8]
    ldr r1, [r4, #0xc]
    add r0, r4, r0
    bl func_0202b550
@L_020299ac:
    cmp r6, #2
    bne @L_020299dc
    ldr r0, [r5, #8]
    ldr r1, [r5, #0x20]
    bic r2, r0, #0x40
    mov r0, r5
    str r2, [r5, #8]
    blx r1
    ldr r0, [r5, #0x20]
    cmp r0, #0
    ldrneb r6, [r5, #0x91]
    moveq r6, #0
@L_020299dc:
    cmp r6, #3
    ldmneia sp!, {r4, r5, r6, pc}
    ldr r0, [r5, #8]
    ldr r1, [r5, #0x20]
    bic r2, r0, #0x40
    mov r0, r5
    str r2, [r5, #8]
    blx r1
    ldmia sp!, {r4, r5, r6, pc}
}

asm void NNSi_G3dFuncSbc_SHP(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4, #8]
    tst r0, #0x200
    bne @L_02029a8c
    tst r0, #1
    beq @L_02029a8c
    tst r0, #2
    bne @L_02029a8c
    ldr r0, [r4]
    ldr r12, [r4, #0xdc]
    ldrb r3, [r0, #1]
    cmp r12, #0
    beq @L_02029a74
    beq @L_02029a60
    ldrb r0, [r12, #1]
    cmp r3, r0
    bhs @L_02029a60
    ldrh r2, [r12, #6]
    ldrh r0, [r12, r2]
    add r2, r12, r2
    add r2, r2, #4
    mla r2, r0, r3, r2
    b @L_02029a64
@L_02029a60:
    mov r2, #0
@L_02029a64:
    cmp r2, #0
    ldrne r0, [r2]
    addne r2, r12, r0
    bne @L_02029a78
@L_02029a74:
    mov r2, #0
@L_02029a78:
    ldrh lr, [r2]
    ldr r12, =data_020ab8e0
    mov r0, r4
    ldr r12, [r12, lr, lsl #2]
    blx r12
@L_02029a8c:
    ldr r0, [r4]
    add r0, r0, #2
    str r0, [r4]
    ldmia sp!, {r4, pc}
}
