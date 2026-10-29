// (asm for now)

void func_0202b608(void);
void func_02009bc8(void);
extern char data_020a48cc[];
extern char data_020a48cd[];
extern char data_020a48ce[];
extern char data_020a48cf[];
extern char data_020ab960[];
extern char data_020ab96c[];
void G3X_GetClipMtx(void);
extern char data_020bf418[];
void func_02028830(void);
extern char data_020bf464[];
void MTX_Copy43To44_(void);
void func_02001644(void);
void func_02002024(void);
extern char data_020ab934[];
void MIi_CpuSend32(void);
void func_02028864(void);
extern char data_020ab93c[];
void func_0202878c(void);
extern char data_020ab930[];
extern char data_020ab9a8[];
extern char data_020ab9b4[];
extern char data_020ab984[];
void func_02002084(void);
void func_02001fa4(void);
extern char data_020ab97c[];
extern char data_020ab978[];
void MIi_CpuClearFast(void);
extern char data_020c0a80[];
void G3_MultMtx43(void);
void G3_MultMtx33(void);
extern char data_020c0ac0[];
void G3X_GetVectorMtx(void);
void G3_LoadMtx43(void);
void func_0202b550(void);
extern char data_020ab8c0[];
extern char data_020ab8cc[];
void func_0202b6e4(void);
extern char data_020bf4d4[];
extern char data_020ab8c4[];
extern char data_020ab8f0[];
extern char data_020bf4f8[];
extern char data_020c2380[];
void NNS_G3dGeWaitSendDL(void);

asm void func_02029aa0(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    mov r10, r0
    ldr r2, [r10]
    ldr r0, [r10, #8]
    ldrb r7, [r2, #1]
    orr r0, r0, #0x10
    mov r9, r1
    strb r7, [r10, #0xae]
    str r0, [r10, #8]
    tst r0, #0x400
    mov r6, #0
    mov r4, #4
    beq @L_02029b30
    cmp r9, #0x40
    cmpne r9, #0x60
    addeq r4, r4, #1
    cmp r9, #0x20
    beq @L_02029af4
    cmp r9, #0x60
    bne @L_02029b1c
@L_02029af4:
    tst r0, #0x100
    add r4, r4, #1
    bne @L_02029b1c
    ldr r0, [r10]
    add r1, sp, #0x10
    ldrb r3, [r0, #4]
    mov r0, #0x14
    mov r2, #1
    str r3, [sp, #0x10]
    bl func_0202b608
@L_02029b1c:
    ldr r0, [r10]
    add sp, sp, #0x14
    add r0, r0, r4
    str r0, [r10]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02029b30:
    cmp r9, #0x40
    beq @L_02029b40
    cmp r9, #0x60
    bne @L_02029b78
@L_02029b40:
    ldr r0, [r10]
    cmp r9, #0x40
    ldreqb r0, [r0, #4]
    add r4, r4, #1
    streq r0, [sp, #0xc]
    ldrneb r0, [r0, #5]
    strne r0, [sp, #0xc]
    ldr r0, [r10, #8]
    tst r0, #0x100
    bne @L_02029b78
    add r1, sp, #0xc
    mov r0, #0x14
    mov r2, #1
    bl func_0202b608
@L_02029b78:
    ldr r0, [r10, #0x24]
    add r1, r10, #0x12c
    cmp r0, #0
    ldrneb r8, [r10, #0x92]
    str r1, [r10, #0xb4]
    moveq r8, #0
    cmp r8, #1
    bne @L_02029bcc
    ldr r0, [r10, #8]
    ldr r1, [r10, #0x24]
    bic r2, r0, #0x40
    mov r0, r10
    str r2, [r10, #8]
    blx r1
    ldr r0, [r10, #0x24]
    cmp r0, #0
    ldrneb r8, [r10, #0x92]
    ldr r0, [r10, #8]
    moveq r8, #0
    and r0, r0, #0x40
    b @L_02029bd0
@L_02029bcc:
    mov r0, #0
@L_02029bd0:
    cmp r0, #0
    bne @L_02029e04
    ldr r0, [r10, #4]
    ldr r1, [r0, #0x34]
    cmp r1, #0
    beq @L_02029c04
    mov r0, #0x58
    mla r5, r7, r0, r1
    ldr r0, [r10, #8]
    tst r0, #0x80
    moveq r0, #1
    movne r0, #0
    b @L_02029c0c
@L_02029c04:
    add r5, r10, #0x12c
    mov r0, #0
@L_02029c0c:
    cmp r0, #0
    bne @L_02029e00
    str r6, [r5]
    ldr r0, [r10, #4]
    ldr r1, [r0, #0x10]
    cmp r1, #0
    beq @L_02029c40
    ldr r3, [r0, #0x14]
    mov r0, r5
    mov r2, r7
    blx r3
    cmp r0, #0
    bne @L_02029e00
@L_02029c40:
    ldr r2, [r10, #0xd4]
    cmp r2, #0
    beq @L_02029c88
    beq @L_02029c74
    ldrb r0, [r2, #1]
    cmp r7, r0
    bhs @L_02029c74
    ldrh r1, [r2, #6]
    ldrh r0, [r2, r1]
    add r1, r2, r1
    add r1, r1, #4
    mla r1, r0, r7, r1
    b @L_02029c78
@L_02029c74:
    mov r1, #0
@L_02029c78:
    cmp r1, #0
    ldrne r0, [r1]
    addne r7, r2, r0
    bne @L_02029c8c
@L_02029c88:
    mov r7, #0
@L_02029c8c:
    ldrh r0, [r7]
    add r6, r7, #4
    tst r0, #1
    ldrne r0, [r5]
    orrne r0, r0, #4
    strne r0, [r5]
    bne @L_02029cc4
    ldr r0, [r6]
    str r0, [r5, #0x4c]
    ldr r0, [r6, #4]
    str r0, [r5, #0x50]
    ldr r0, [r6, #8]
    add r6, r6, #0xc
    str r0, [r5, #0x54]
@L_02029cc4:
    ldrh r0, [r7]
    tst r0, #2
    ldrne r0, [r5]
    orrne r0, r0, #2
    strne r0, [r5]
    bne @L_02029de8
    tst r0, #8
    beq @L_02029d9c
    and r1, r0, #0xf0
    mov r11, r1, asr #4
    ldrsh r1, [r6]
    add r0, r5, #0x28
    str r1, [sp]
    ldrsh r1, [r6, #2]
    str r1, [sp, #4]
    bl func_02009bc8
    ldrh r0, [r7]
    ldr r2, =data_020a48cc
    ldr r1, =data_020a48cd
    tst r0, #0x100
    mov r0, #0x1000
    ldrb r2, [r2, r11, lsl #2]
    ldrb r1, [r1, r11, lsl #2]
    rsbne r0, r0, #0
    add r3, r5, r11, lsl #2
    str r0, [r3, #0x28]
    ldr r0, [sp]
    add r2, r5, r2, lsl #2
    str r0, [r2, #0x28]
    ldr r0, [sp, #4]
    add r1, r5, r1, lsl #2
    str r0, [r1, #0x28]
    ldrh r0, [r7]
    add r6, r6, #4
    tst r0, #0x200
    ldrne r0, [sp, #4]
    rsbne r0, r0, #0
    strne r0, [sp, #4]
    ldr r0, =data_020a48ce
    ldrb r0, [r0, r11, lsl #2]
    add r1, r5, r0, lsl #2
    ldr r0, [sp, #4]
    str r0, [r1, #0x28]
    ldrh r0, [r7]
    tst r0, #0x400
    ldrne r0, [sp]
    rsbne r0, r0, #0
    strne r0, [sp]
    ldr r0, =data_020a48cf
    ldrb r0, [r0, r11, lsl #2]
    add r1, r5, r0, lsl #2
    ldr r0, [sp]
    str r0, [r1, #0x28]
    b @L_02029de8
@L_02029d9c:
    ldrsh r0, [r7, #2]
    str r0, [r5, #0x28]
    ldrsh r0, [r6]
    str r0, [r5, #0x2c]
    ldrsh r0, [r6, #2]
    str r0, [r5, #0x30]
    ldrsh r0, [r6, #4]
    str r0, [r5, #0x34]
    ldrsh r0, [r6, #6]
    str r0, [r5, #0x38]
    ldrsh r0, [r6, #8]
    str r0, [r5, #0x3c]
    ldrsh r0, [r6, #0xa]
    str r0, [r5, #0x40]
    ldrsh r0, [r6, #0xc]
    str r0, [r5, #0x44]
    ldrsh r0, [r6, #0xe]
    add r6, r6, #0x10
    str r0, [r5, #0x48]
@L_02029de8:
    ldrh r3, [r7]
    ldr r2, [r10]
    ldr r7, [r10, #0xe8]
    mov r0, r5
    mov r1, r6
    blx r7
@L_02029e00:
    str r5, [r10, #0xb4]
@L_02029e04:
    cmp r8, #2
    bne @L_02029e40
    ldr r0, [r10, #8]
    ldr r1, [r10, #0x24]
    bic r2, r0, #0x40
    mov r0, r10
    str r2, [r10, #8]
    blx r1
    ldr r0, [r10, #0x24]
    cmp r0, #0
    ldrneb r8, [r10, #0x92]
    ldr r0, [r10, #8]
    moveq r8, #0
    and r0, r0, #0x40
    b @L_02029e44
@L_02029e40:
    mov r0, #0
@L_02029e44:
    cmp r0, #0
    bne @L_02029e64
    ldr r0, [r10, #8]
    tst r0, #0x100
    bne @L_02029e64
    ldr r0, [r10, #0xb4]
    ldr r1, [r10, #0xec]
    blx r1
@L_02029e64:
    mov r0, #0
    str r0, [r10, #0xb4]
    cmp r8, #3
    bne @L_02029e94
    ldr r0, [r10, #8]
    ldr r1, [r10, #0x24]
    bic r2, r0, #0x40
    mov r0, r10
    str r2, [r10, #8]
    blx r1
    ldr r0, [r10, #8]
    and r0, r0, #0x40
@L_02029e94:
    cmp r9, #0x20
    beq @L_02029ea4
    cmp r9, #0x60
    bne @L_02029ed8
@L_02029ea4:
    cmp r0, #0
    add r4, r4, #1
    bne @L_02029ed8
    ldr r0, [r10, #8]
    tst r0, #0x100
    bne @L_02029ed8
    ldr r0, [r10]
    add r1, sp, #8
    ldrb r3, [r0, #4]
    mov r0, #0x13
    mov r2, #1
    str r3, [sp, #8]
    bl func_0202b608
@L_02029ed8:
    ldr r0, [r10]
    add r0, r0, r4
    str r0, [r10]
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_02029efc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc8
    mov r10, r0
    ldr r0, [r10, #8]
    mov r9, r1
    tst r0, #0x200
    mov r4, #0
    mov r5, #2
    ldr r6, =data_020ab960
    ldr r7, =data_020ab96c
    beq @L_02029f54
    cmp r9, #0x40
    cmpne r9, #0x60
    addeq r5, r5, #1
    cmp r9, #0x20
    cmpne r9, #0x60
    ldr r0, [r10]
    addeq r5, r5, #1
    add r0, r0, r5
    add sp, sp, #0xc8
    str r0, [r10]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02029f54:
    cmp r9, #0x40
    beq @L_02029f64
    cmp r9, #0x60
    bne @L_02029f98
@L_02029f64:
    tst r0, #0x100
    add r5, r5, #1
    bne @L_02029f98
    ldr r0, [r10]
    cmp r9, #0x40
    ldreqb r0, [r0, #2]
    add r1, sp, #4
    mov r2, #1
    streq r0, [sp, #4]
    ldrneb r0, [r0, #3]
    strne r0, [sp, #4]
    mov r0, #0x14
    bl func_0202b608
@L_02029f98:
    ldr r0, [r10, #0x28]
    cmp r0, #0
    ldrneb r8, [r10, #0x93]
    moveq r8, #0
    cmp r8, #1
    bne @L_02029fe4
    ldr r0, [r10, #8]
    ldr r1, [r10, #0x28]
    bic r2, r0, #0x40
    mov r0, r10
    str r2, [r10, #8]
    blx r1
    ldr r0, [r10, #0x28]
    cmp r0, #0
    ldrneb r8, [r10, #0x93]
    ldr r0, [r10, #8]
    moveq r8, #0
    and r1, r0, #0x40
    b @L_02029fe8
@L_02029fe4:
    mov r1, #0
@L_02029fe8:
    ldr r0, [r10, #8]
    tst r0, #0x100
    cmpeq r1, #0
    bne @L_0202a138
    bl func_0202b4c4
    ldr r1, =0x151110
    ldr r0, =0x4000400
    str r1, [r0]
    str r4, [r0]
    str r4, [r0]
    add r4, sp, #0x88
@L_0202a014:
    mov r0, r4
    bl G3X_GetClipMtx
    cmp r0, #0
    bne @L_0202a014
    ldr r0, =data_020bf418
    ldr r0, [r0, #0xfc]
    tst r0, #1
    beq @L_0202a040
    bl func_02028830
    add r11, sp, #0x48
    b @L_0202a050
@L_0202a040:
    tst r0, #2
    beq @L_0202a068
    ldr r0, =data_020bf464
    add r11, sp, #8
@L_0202a050:
    mov r1, r11
    bl MTX_Copy43To44_
    mov r0, r4
    mov r1, r11
    mov r2, r4
    bl func_02001644
@L_0202a068:
    ldr r3, [sp, #0xb8]
    ldr r2, [sp, #0xbc]
    ldr r1, [sp, #0xc0]
    add r0, sp, #0x88
    str r3, [r6]
    str r2, [r6, #4]
    str r1, [r6, #8]
    bl func_02002024
    str r0, [r7]
    add r0, sp, #0x98
    bl func_02002024
    str r0, [r7, #4]
    add r0, sp, #0xa8
    bl func_02002024
    ldr r1, =data_020bf418
    str r0, [r7, #8]
    ldr r0, [r1, #0xfc]
    tst r0, #1
    beq @L_0202a0fc
    ldr r4, =0x4000400
    ldr r3, =0x171012
    ldr r0, =data_020ab934
    mov r1, r4
    mov r2, #8
    str r3, [r4]
    bl MIi_CpuSend32
    bl func_02028864
@L_0202a0d4:
    mov r1, r4
    mov r2, #0x30
    bl MIi_CpuSend32
    ldr r1, =0x1b19
    ldr r0, =data_020ab93c
    str r1, [r4]
    mov r1, r4
    mov r2, #0x3c
    bl MIi_CpuSend32
    b @L_0202a138
@L_0202a0fc:
    tst r0, #2
    beq @L_0202a128
    ldr r4, =0x4000400
    ldr r3, =0x171012
    ldr r0, =data_020ab934
    mov r1, r4
    mov r2, #8
    str r3, [r4]
    bl MIi_CpuSend32
    bl func_0202878c
    b @L_0202a0d4
@L_0202a128:
    ldr r0, =data_020ab930
    ldr r1, =0x4000400
    mov r2, #0x48
    bl MIi_CpuSend32
@L_0202a138:
    cmp r8, #3
    movne r0, #0
    bne @L_0202a164
    ldr r0, [r10, #8]
    ldr r1, [r10, #0x28]
    bic r2, r0, #0x40
    mov r0, r10
    str r2, [r10, #8]
    blx r1
    ldr r0, [r10, #8]
    and r0, r0, #0x40
@L_0202a164:
    cmp r9, #0x20
    beq @L_0202a174
    cmp r9, #0x60
    bne @L_0202a1a8
@L_0202a174:
    cmp r0, #0
    add r5, r5, #1
    bne @L_0202a1a8
    ldr r0, [r10, #8]
    tst r0, #0x100
    bne @L_0202a1a8
    ldr r0, [r10]
    add r1, sp, #0
    ldrb r3, [r0, #2]
    mov r0, #0x13
    mov r2, #1
    str r3, [sp]
    bl func_0202b608
@L_0202a1a8:
    ldr r0, [r10]
    add r0, r0, r5
    str r0, [r10]
    add sp, sp, #0xc8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_0202a1e8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc8
    mov r10, r0
    ldr r0, [r10, #8]
    mov r9, r1
    tst r0, #0x200
    mov r4, #0
    mov r5, #2
    ldr r11, =data_020ab9a8
    ldr r6, =data_020ab9b4
    ldr r7, =data_020ab984
    beq @L_0202a244
    cmp r9, #0x40
    cmpne r9, #0x60
    addeq r5, r5, #1
    cmp r9, #0x20
    cmpne r9, #0x60
    ldr r0, [r10]
    addeq r5, r5, #1
    add r0, r0, r5
    add sp, sp, #0xc8
    str r0, [r10]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0202a244:
    cmp r9, #0x40
    beq @L_0202a254
    cmp r9, #0x60
    bne @L_0202a288
@L_0202a254:
    tst r0, #0x100
    add r5, r5, #1
    bne @L_0202a288
    ldr r0, [r10]
    cmp r9, #0x40
    ldreqb r0, [r0, #2]
    add r1, sp, #4
    mov r2, #1
    streq r0, [sp, #4]
    ldrneb r0, [r0, #3]
    strne r0, [sp, #4]
    mov r0, #0x14
    bl func_0202b608
@L_0202a288:
    ldr r0, [r10, #0x2c]
    cmp r0, #0
    ldrneb r8, [r10, #0x94]
    moveq r8, #0
    cmp r8, #1
    bne @L_0202a2d4
    ldr r0, [r10, #8]
    ldr r1, [r10, #0x2c]
    bic r2, r0, #0x40
    mov r0, r10
    str r2, [r10, #8]
    blx r1
    ldr r0, [r10, #0x2c]
    cmp r0, #0
    ldrneb r8, [r10, #0x94]
    ldr r0, [r10, #8]
    moveq r8, #0
    and r1, r0, #0x40
    b @L_0202a2d8
@L_0202a2d4:
    mov r1, #0
@L_0202a2d8:
    ldr r0, [r10, #8]
    tst r0, #0x100
    cmpeq r1, #0
    bne @L_0202a484
    bl func_0202b4c4
    ldr r1, =0x151110
    ldr r0, =0x4000400
    str r1, [r0]
    str r4, [r0]
    str r4, [r0]
    add r4, sp, #0x88
@L_0202a304:
    mov r0, r4
    bl G3X_GetClipMtx
    cmp r0, #0
    bne @L_0202a304
    ldr r0, =data_020bf418
    ldr r0, [r0, #0xfc]
    tst r0, #1
    beq @L_0202a33c
    bl func_02028830
    add r1, sp, #0x48
    bl MTX_Copy43To44_
    add r1, sp, #0x48
    mov r0, r4
    b @L_0202a358
@L_0202a33c:
    tst r0, #2
    beq @L_0202a360
    ldr r0, =data_020bf464
    add r1, sp, #8
    bl MTX_Copy43To44_
    mov r0, r4
    add r1, sp, #8
@L_0202a358:
    mov r2, r4
    bl func_02001644
@L_0202a360:
    ldr r3, [sp, #0xb8]
    ldr r2, [sp, #0xbc]
    ldr r1, [sp, #0xc0]
    add r0, sp, #0x88
    str r3, [r11]
    str r2, [r11, #4]
    str r1, [r11, #8]
    bl func_02002024
    str r0, [r6]
    add r0, sp, #0x98
    bl func_02002024
    str r0, [r6, #4]
    add r0, sp, #0xa8
    bl func_02002024
    ldr r1, [sp, #0xa0]
    str r0, [r6, #8]
    ldr r0, [sp, #0x9c]
    str r1, [r7, #0x14]
    ldr r1, [sp, #0x98]
    str r0, [r7, #0x10]
    str r0, [r7]
    mov r0, #0
    str r0, [r7, #8]
    rsb r0, r1, #0
    str r1, [r7, #0xc]
    str r0, [r7, #4]
    mov r0, r7
    mov r1, r7
    bl func_02002084
    add r0, r7, #0xc
    mov r1, r0
    bl func_02002084
    mov r0, r7
    add r1, r7, #0xc
    add r2, r7, #0x18
    bl func_02001fa4
    ldr r0, =data_020bf418
    ldr r0, [r0, #0xfc]
    tst r0, #1
    beq @L_0202a448
    ldr r4, =0x4000400
    ldr r3, =0x171012
    ldr r0, =data_020ab97c
    mov r1, r4
    mov r2, #8
    str r3, [r4]
    bl MIi_CpuSend32
    bl func_02028864
@L_0202a420:
    mov r1, r4
    mov r2, #0x30
    bl MIi_CpuSend32
    ldr r1, =0x1b19
    ldr r0, =data_020ab984
    str r1, [r4]
    mov r1, r4
    mov r2, #0x3c
    bl MIi_CpuSend32
    b @L_0202a484
@L_0202a448:
    tst r0, #2
    beq @L_0202a474
    ldr r4, =0x4000400
    ldr r3, =0x171012
    ldr r0, =data_020ab97c
    mov r1, r4
    mov r2, #8
    str r3, [r4]
    bl MIi_CpuSend32
    bl func_0202878c
    b @L_0202a420
@L_0202a474:
    ldr r0, =data_020ab978
    ldr r1, =0x4000400
    mov r2, #0x48
    bl MIi_CpuSend32
@L_0202a484:
    cmp r8, #3
    movne r0, #0
    bne @L_0202a4b0
    ldr r0, [r10, #8]
    ldr r1, [r10, #0x2c]
    bic r2, r0, #0x40
    mov r0, r10
    str r2, [r10, #8]
    blx r1
    ldr r0, [r10, #8]
    and r0, r0, #0x40
@L_0202a4b0:
    cmp r9, #0x20
    beq @L_0202a4c0
    cmp r9, #0x60
    bne @L_0202a4f4
@L_0202a4c0:
    cmp r0, #0
    add r5, r5, #1
    bne @L_0202a4f4
    ldr r0, [r10, #8]
    tst r0, #0x100
    bne @L_0202a4f4
    ldr r0, [r10]
    add r1, sp, #0
    ldrb r3, [r0, #2]
    mov r0, #0x13
    mov r2, #1
    str r3, [sp]
    bl func_0202b608
@L_0202a4f4:
    ldr r0, [r10]
    add r0, r0, r5
    str r0, [r10]
    add sp, sp, #0xc8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_0202a534(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x104
    ldr r1, [r0, #4]
    ldr r6, [r0]
    ldr r7, [r1, #4]
    ldrb r2, [r6, #2]
    ldr r3, [r7, #0x10]
    mov r5, #0
    str r0, [sp]
    str r2, [sp, #0x10]
    add r3, r7, r3
    add r1, sp, #0xb0
    mov r0, r5
    mov r2, #0x54
    mov r4, r5
    str r3, [sp, #0x14]
    add r6, r6, #3
    bl MIi_CpuClearFast
    bl func_0202b4c4
    ldr r1, =0x4000440
    mov r0, #1
    str r5, [r1]
    str r0, [r1, #0xc]
    str r5, [r1, #0x14]
    mov r0, #2
    str r0, [r1]
    ldr r0, [sp, #0x10]
    str r5, [sp, #0xc]
    cmp r0, #0
    bls @L_0202aa18
@L_0202a5ac:
    ldrb r11, [r6, #1]
    mov r1, #0x64
    ldr r0, [sp]
    smulbb r1, r11, r1
    mov r2, r11, lsr #5
    str r1, [sp, #4]
    add r0, r0, r2, lsl #2
    ldr r3, =data_020c0a80
    ldr r2, [sp, #4]
    ldr r9, [r0, #0xcc]
    add r7, r3, r2
    and r1, r11, #0x1f
    mov r2, #1
    ands r3, r9, r2, lsl r1
    str r3, [sp, #8]
    bne @L_0202a618
    ldr r9, [r0, #0xcc]
    ldr r3, =0x4000450
    orr r1, r9, r2, lsl r1
    str r1, [r0, #0xcc]
    ldr r0, [sp, #0x14]
    mov r1, #0x54
    mla r0, r11, r1, r0
    ldrb r9, [r6]
    str r9, [r3]
    str r2, [r3, #-0x10]
    bl G3_MultMtx43
@L_0202a618:
    ldr r0, [sp, #0xc]
    cmp r0, #0
    beq @L_0202a840
    ldr r0, [sp, #0xe0]
    ldmia r8, {r9, lr}
    str r0, [sp, #0x18]
    mov r0, r9, asr #0x1f
    str r0, [sp, #0x20]
    ldr r0, [sp, #0xe4]
    ldr r12, [r8, #8]
    str r0, [sp, #0x24]
    mov r0, lr, asr #0x1f
    str r0, [sp, #0x28]
    ldr r0, [sp, #0xe8]
    ldr r3, [r8, #0xc]
    str r0, [sp, #0x2c]
    ldr r0, [sp, #0xec]
    ldr r2, [r8, #0x10]
    str r0, [sp, #0x34]
    mov r0, r12, asr #0x1f
    str r0, [sp, #0x30]
    ldr r0, [sp, #0xf0]
    ldr r1, [r8, #0x14]
    str r0, [sp, #0x3c]
    mov r0, r3, asr #0x1f
    str r0, [sp, #0x38]
    ldr r0, [sp, #0xf4]
    str r0, [sp, #0x44]
    mov r0, r2, asr #0x1f
    str r0, [sp, #0x40]
    ldr r0, [sp, #0xf8]
    str r0, [sp, #0x4c]
    mov r0, r1, asr #0x1f
    str r0, [sp, #0x48]
    ldr r0, [r8, #0x18]
    str r0, [sp, #0x50]
    ldr r0, [sp, #0xfc]
    str r0, [sp, #0x58]
    ldr r0, [sp, #0x50]
    mov r0, r0, asr #0x1f
    str r0, [sp, #0x54]
    ldr r0, [r8, #0x1c]
    str r0, [sp, #0xa8]
    ldr r0, [r8, #0x20]
    ldr r8, [sp, #0xa8]
    mov r8, r8, asr #0x1f
    str r8, [sp, #0x5c]
    ldr r8, [sp, #0x100]
    str r8, [sp, #0x60]
    mov r8, r0, asr #0x1f
    str r8, [sp, #0x64]
    umull r10, r8, r5, r9
    str r10, [sp, #0x1c]
    ldr r10, [sp, #0x20]
    mla r8, r5, r10, r8
    mla r8, r4, r9, r8
    ldr r9, [sp, #0x1c]
    mov r9, r9, lsr #0xc
    orr r9, r9, r8, lsl #20
    ldr r8, [sp, #0x18]
    adds r8, r8, r9
    str r8, [sp, #0xe0]
    umull r10, r9, r5, lr
    ldr r8, [sp, #0x28]
    mov r10, r10, lsr #0xc
    mla r9, r5, r8, r9
    mla r9, r4, lr, r9
    ldr r8, [sp, #0x24]
    orr r10, r10, r9, lsl #20
    adds r8, r8, r10
    str r8, [sp, #0xe4]
    umull r10, r9, r5, r12
    ldr r8, [sp, #0x30]
    mov r10, r10, lsr #0xc
    mla r9, r5, r8, r9
    mla r9, r4, r12, r9
    ldr r8, [sp, #0x2c]
    orr r10, r10, r9, lsl #20
    adds r8, r8, r10
    str r8, [sp, #0xe8]
    ldr r8, [sp, #0x38]
    umull r10, r9, r5, r3
    mla r9, r5, r8, r9
    mla r9, r4, r3, r9
    mov r8, r10, lsr #0xc
    ldr r3, [sp, #0x34]
    orr r8, r8, r9, lsl #20
    adds r3, r3, r8
    str r3, [sp, #0xec]
    ldr r3, [sp, #0x40]
    umull r9, r8, r5, r2
    mla r8, r5, r3, r8
    mla r8, r4, r2, r8
    mov r3, r9, lsr #0xc
    ldr r2, [sp, #0x3c]
    orr r3, r3, r8, lsl #20
    adds r2, r2, r3
    str r2, [sp, #0xf0]
    ldr r2, [sp, #0x48]
    umull r8, r3, r5, r1
    mla r3, r5, r2, r3
    mla r3, r4, r1, r3
    mov r2, r8, lsr #0xc
    ldr r1, [sp, #0x44]
    orr r2, r2, r3, lsl #20
    adds r1, r1, r2
    str r1, [sp, #0xf4]
    ldr r1, [sp, #0x50]
    umull r3, r2, r5, r1
    ldr r1, [sp, #0x54]
    mov r3, r3, lsr #0xc
    mla r2, r5, r1, r2
    ldr r1, [sp, #0x50]
    mla r2, r4, r1, r2
    ldr r1, [sp, #0x4c]
    orr r3, r3, r2, lsl #20
    adds r1, r1, r3
    str r1, [sp, #0xf8]
    ldr r1, [sp, #0xa8]
    umull r3, r2, r5, r1
    ldr r1, [sp, #0x5c]
    mov r3, r3, lsr #0xc
    mla r2, r5, r1, r2
    ldr r1, [sp, #0xa8]
    mla r2, r4, r1, r2
    ldr r1, [sp, #0x58]
    orr r3, r3, r2, lsl #20
    adds r1, r1, r3
    str r1, [sp, #0xfc]
    ldr r1, [sp, #0x64]
    umull r3, r2, r5, r0
    mla r2, r5, r1, r2
    mla r2, r4, r0, r2
    mov r1, r3, lsr #0xc
    ldr r0, [sp, #0x60]
    orr r1, r1, r2, lsl #20
    adds r0, r0, r1
    str r0, [sp, #0x100]
@L_0202a840:
    ldr r0, [sp, #8]
    cmp r0, #0
    bne @L_0202a87c
@L_0202a84c:
    mov r0, r7
    bl G3X_GetClipMtx
    cmp r0, #0
    bne @L_0202a84c
    ldr r0, [sp, #0x14]
    mov r1, #0x54
    mla r0, r11, r1, r0
    ldr r1, =0x4000440
    mov r2, #2
    add r0, r0, #0x30
    str r2, [r1]
    bl G3_MultMtx33
@L_0202a87c:
    ldrb r0, [r6, #2]
    ldr r1, =data_020c0ac0
    ldr r3, [r7]
    mov r5, r0, lsl #4
    ldr r0, [sp, #4]
    ldmib r7, {r2, r10}
    add r8, r1, r0
    smull r1, r0, r5, r3
    mov r3, r1, lsr #0xc
    orr r3, r3, r0, lsl #20
    smull r1, r0, r5, r2
    mov r2, r1, lsr #0xc
    orr r2, r2, r0, lsl #20
    smull r1, r0, r5, r10
    mov r1, r1, lsr #0xc
    ldr r9, [r7, #0x10]
    orr r1, r1, r0, lsl #20
    smull r0, r9, r5, r9
    mov r0, r0, lsr #0xc
    ldr r10, [sp, #0xb4]
    ldr r11, [sp, #0xb0]
    adds r2, r10, r2
    str r2, [sp, #0xb4]
    adds r3, r11, r3
    str r3, [sp, #0xb0]
    ldr r3, [sp, #0xb8]
    ldr r4, [r7, #0x14]
    adds r1, r3, r1
    orr r0, r0, r9, lsl #20
    smull r9, r4, r5, r4
    ldr r2, [sp, #0xbc]
    mov r9, r9, lsr #0xc
    adds r0, r2, r0
    str r0, [sp, #0xbc]
    orr r9, r9, r4, lsl #20
    ldr r0, [sp, #0xc0]
    str r1, [sp, #0xb8]
    adds r0, r0, r9
    str r0, [sp, #0xc0]
    ldr r0, [r7, #0x18]
    ldr r2, [sp, #0xc4]
    smull r1, r0, r5, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #20
    adds r0, r2, r1
    str r0, [sp, #0xc4]
    ldr r0, [r7, #0x20]
    ldr r3, [sp, #0xc8]
    smull r1, r0, r5, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #20
    adds r0, r3, r1
    str r0, [sp, #0xc8]
    ldr r0, [r7, #0x24]
    ldr r2, [sp, #0xcc]
    smull r1, r0, r5, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #20
    adds r0, r2, r1
    str r0, [sp, #0xcc]
    ldr r0, [r7, #0x28]
    ldr r3, [sp, #0xd0]
    smull r1, r0, r5, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #20
    adds r0, r3, r1
    str r0, [sp, #0xd0]
    ldr r0, [r7, #0x30]
    ldr r2, [sp, #0xd4]
    smull r1, r0, r5, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #20
    adds r0, r2, r1
    ldr r1, [r7, #0x34]
    str r0, [sp, #0xd4]
    smull r2, r1, r5, r1
    mov r2, r2, lsr #0xc
    ldr r3, [sp, #0xd8]
    orr r2, r2, r1, lsl #20
    adds r1, r3, r2
    ldr r0, [r7, #0x38]
    str r1, [sp, #0xd8]
    smull r1, r0, r5, r0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #20
    ldr r0, [sp, #0xdc]
    mov r4, r5, asr #0x1f
    adds r0, r0, r1
    str r0, [sp, #0xdc]
    ldr r0, [sp, #8]
    add r6, r6, #3
    cmp r0, #0
    bne @L_0202aa00
@L_0202a9f0:
    mov r0, r8
    bl G3X_GetVectorMtx
    cmp r0, #0
    bne @L_0202a9f0
@L_0202aa00:
    ldr r0, [sp, #0xc]
    add r1, r0, #1
    ldr r0, [sp, #0x10]
    str r1, [sp, #0xc]
    cmp r1, r0
    blo @L_0202a5ac
@L_0202aa18:
    ldmia r8, {r0, r11}
    ldr r10, [r8, #8]
    ldr r9, [r8, #0xc]
    ldr r7, [r8, #0x10]
    ldr r6, [r8, #0x14]
    ldr r3, [r8, #0x18]
    ldr r2, [r8, #0x1c]
    ldr r1, [r8, #0x20]
    umull r12, r8, r5, r0
    mov lr, r12, lsr #0xc
    ldr r12, [sp, #0xe0]
    str r12, [sp, #0x68]
    mov r12, r0, asr #0x1f
    mla r8, r5, r12, r8
    mla r8, r4, r0, r8
    orr lr, lr, r8, lsl #20
    umull r12, r8, r5, r11
    ldr r0, [sp, #0x68]
    str r12, [sp, #0x6c]
    adds r0, r0, lr
    str r0, [sp, #0xe0]
    mov r0, r11, asr #0x1f
    str r0, [sp, #0xac]
    ldr r12, [sp, #0xac]
    ldr r0, [sp, #0xe8]
    mla r8, r5, r12, r8
    mla r8, r4, r11, r8
    ldr r11, [sp, #0x6c]
    str r0, [sp, #0x70]
    mov r11, r11, lsr #0xc
    mov r0, r10, asr #0x1f
    str r0, [sp, #0x74]
    ldr r0, [sp, #0xec]
    ldr lr, [sp, #0xe4]
    orr r11, r11, r8, lsl #20
    adds r8, lr, r11
    str r8, [sp, #0xe4]
    str r0, [sp, #0x78]
    mov r0, r9, asr #0x1f
    str r0, [sp, #0x7c]
    ldr r0, [sp, #0xf0]
    ldr r8, [sp, #0x74]
    umull r12, r11, r5, r10
    mla r11, r5, r8, r11
    mla r11, r4, r10, r11
    mov r10, r12, lsr #0xc
    str r0, [sp, #0x80]
    mov r0, r7, asr #0x1f
    str r0, [sp, #0x84]
    ldr r0, [sp, #0xf4]
    ldr r8, [sp, #0x70]
    orr r10, r10, r11, lsl #20
    adds r8, r8, r10
    str r8, [sp, #0xe8]
    str r0, [sp, #0x88]
    mov r0, r6, asr #0x1f
    str r0, [sp, #0x8c]
    ldr r0, [sp, #0xf8]
    ldr r8, [sp, #0x7c]
    umull r11, r10, r5, r9
    mla r10, r5, r8, r10
    mla r10, r4, r9, r10
    mov r9, r11, lsr #0xc
    str r0, [sp, #0x90]
    mov r0, r3, asr #0x1f
    str r0, [sp, #0x94]
    ldr r0, [sp, #0xfc]
    ldr r8, [sp, #0x78]
    orr r9, r9, r10, lsl #20
    adds r8, r8, r9
    str r8, [sp, #0xec]
    str r0, [sp, #0x98]
    mov r0, r2, asr #0x1f
    str r0, [sp, #0x9c]
    ldr r0, [sp, #0x100]
    ldr r8, [sp, #0x84]
    umull r10, r9, r5, r7
    mla r9, r5, r8, r9
    mla r9, r4, r7, r9
    mov r8, r10, lsr #0xc
    str r0, [sp, #0xa0]
    mov r0, r1, asr #0x1f
    str r0, [sp, #0xa4]
    ldr r7, [sp, #0x80]
    orr r8, r8, r9, lsl #20
    adds r7, r7, r8
    str r7, [sp, #0xf0]
    ldr r7, [sp, #0x8c]
    umull r9, r8, r5, r6
    mla r8, r5, r7, r8
    mla r8, r4, r6, r8
    mov r7, r9, lsr #0xc
    ldr r6, [sp, #0x88]
    orr r7, r7, r8, lsl #20
    adds r6, r6, r7
    str r6, [sp, #0xf4]
    ldr r6, [sp, #0x94]
    umull r8, r7, r5, r3
    mla r7, r5, r6, r7
    mla r7, r4, r3, r7
    mov r6, r8, lsr #0xc
    ldr r3, [sp, #0x90]
    orr r6, r6, r7, lsl #20
    adds r3, r3, r6
    str r3, [sp, #0xf8]
    ldr r3, [sp, #0x9c]
    umull r7, r6, r5, r2
    mla r6, r5, r3, r6
    mla r6, r4, r2, r6
    mov r3, r7, lsr #0xc
    ldr r2, [sp, #0x98]
    orr r3, r3, r6, lsl #20
    adds r2, r2, r3
    str r2, [sp, #0xfc]
    ldr r2, [sp, #0xa4]
    umull r6, r3, r5, r1
    mla r3, r5, r2, r3
    mla r3, r4, r1, r3
    mov r2, r6, lsr #0xc
    ldr r1, [sp, #0xa0]
    orr r2, r2, r3, lsl #20
    adds r1, r1, r2
    add r0, sp, #0xe0
    str r1, [sp, #0x100]
    bl G3_LoadMtx43
    ldr r4, =0x4000440
    mov r5, #1
    add r0, sp, #0xb0
    str r5, [r4]
    bl G3_LoadMtx43
    mov r0, #0
    str r0, [r4]
    str r5, [r4, #0x10]
    mov r0, #2
    str r0, [r4]
    ldr r0, [sp]
    ldr r0, [r0]
    ldrb r0, [r0, #1]
    str r0, [r4, #0xc]
    ldr r0, [sp]
    ldr r1, [r0]
    ldrb r0, [r1, #2]
    add r0, r0, #1
    add r0, r0, r0, lsl #1
    add r1, r1, r0
    ldr r0, [sp]
    str r1, [r0]
    add sp, sp, #0x104
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_0202ac7c(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r0
    ldr r0, [r5, #0x34]
    cmp r0, #0
    ldrneb r4, [r5, #0x96]
    moveq r4, #0
    cmp r4, #1
    bne @L_0202acd0
    ldr r0, [r5, #8]
    ldr r1, [r5, #0x34]
    bic r2, r0, #0x40
    mov r0, r5
    str r2, [r5, #8]
    blx r1
    ldr r0, [r5, #0x34]
    cmp r0, #0
    ldrneb r4, [r5, #0x96]
    ldr r0, [r5, #8]
    moveq r4, #0
    and r1, r0, #0x40
    b @L_0202acd4
@L_0202acd0:
    mov r1, #0
@L_0202acd4:
    ldr r0, [r5, #8]
    tst r0, #0x100
    cmpeq r1, #0
    bne @L_0202ad28
    ldr r0, [r5]
    ldrb r12, [r0, #1]
    ldrb r3, [r0, #2]
    ldrb lr, [r0, #3]
    ldrb r2, [r0, #5]
    ldrb r1, [r0, #6]
    orr r3, r12, r3, lsl #8
    ldrb r6, [r0, #4]
    orr r12, r3, lr, lsl #16
    ldrb r3, [r0, #7]
    orr r1, r2, r1, lsl #8
    orr r6, r12, r6, lsl #24
    ldrb r2, [r0, #8]
    orr r1, r1, r3, lsl #16
    add r0, r0, r6
    orr r1, r1, r2, lsl #24
    bl func_0202b550
@L_0202ad28:
    cmp r4, #3
    bne @L_0202ad48
    ldr r0, [r5, #8]
    ldr r1, [r5, #0x34]
    bic r2, r0, #0x40
    mov r0, r5
    str r2, [r5, #8]
    blx r1
@L_0202ad48:
    ldr r0, [r5]
    add r0, r0, #9
    str r0, [r5]
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_0202ad58(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #0xc
    mov r4, r0
    ldr r0, [r4, #8]
    tst r0, #0x100
    bne @L_0202adac
    tst r0, #0x200
    bne @L_0202adac
    cmp r1, #0
    ldreq r0, [r4, #0xe0]
    add r1, sp, #0
    streq r0, [sp, #8]
    streq r0, [sp, #4]
    streq r0, [sp]
    ldrne r0, [r4, #0xe4]
    mov r2, #3
    strne r0, [sp, #8]
    strne r0, [sp, #4]
    strne r0, [sp]
    mov r0, #0x1b
    bl func_0202b608
@L_0202adac:
    ldr r0, [r4]
    add r0, r0, #1
    str r0, [r4]
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, pc}
}

asm void func_0202adc0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x44
    mov r8, r0
    ldr r0, [r8, #8]
    mov r5, #1
    tst r0, #0x200
    bne @L_0202b0e8
    tst r0, #1
    beq @L_0202b0e8
    ldr r2, [r8, #0xb0]
    ldr r0, [r2, #0x10]
    and r1, r0, #0xc0000000
    cmp r1, #0x80000000
    beq @L_0202ae30
    bic r0, r0, #0xc0000000
    str r0, [r2, #0x10]
    ldr r3, [r8, #0xb0]
    ldr r0, =data_020ab8c0
    ldr r2, [r3, #0x10]
    ldr r1, =data_020ab8cc
    orr r2, r2, #0x80000000
    str r2, [r3, #0x10]
    ldr r3, [r8, #0xb0]
    mov r2, r5
    ldr r3, [r3, #0x10]
    str r3, [r0, #0xc]
    ldr r0, [r0, #8]
    bl func_0202b608
@L_0202ae30:
    mov r0, #3
    str r0, [sp, #0x10]
    add r1, sp, #0x10
    mov r0, #0x10
    mov r2, #1
    bl func_0202b608
    ldr r0, [r8, #0x3c]
    cmp r0, #0
    ldrneb r7, [r8, #0x98]
    moveq r7, #0
    cmp r7, #1
    bne @L_0202ae94
    ldr r0, [r8, #8]
    ldr r1, [r8, #0x3c]
    bic r2, r0, #0x40
    mov r0, r8
    str r2, [r8, #8]
    blx r1
    ldr r0, [r8, #0x3c]
    cmp r0, #0
    ldrneb r7, [r8, #0x98]
    ldr r0, [r8, #8]
    moveq r7, #0
    and r0, r0, #0x40
    b @L_0202ae98
@L_0202ae94:
    mov r0, #0
@L_0202ae98:
    cmp r0, #0
    bne @L_0202af10
    ldr r0, [r8, #0xb0]
    add r1, sp, #0x14
    ldrh r6, [r0, #0x2e]
    ldrh r4, [r0, #0x2c]
    mov r3, #0x10000
    rsb r0, r6, #0
    mov r12, r0, lsl #0xf
    mov lr, r4, lsl #0xf
    mov r0, #0x1b
    mov r2, #3
    str lr, [sp, #0x14]
    str r12, [sp, #0x18]
    str r3, [sp, #0x1c]
    bl func_0202b608
    mov r0, r6, lsl #0x13
    mov r1, r0, asr #0x10
    mov r0, r4, lsl #0x13
    mov r1, r1, lsl #0x10
    mov r0, r0, asr #0x10
    mov r1, r1, lsr #0x10
    mov r0, r0, lsl #0x10
    mov r1, r1, lsl #0x10
    orr r3, r1, r0, lsr #16
    add r1, sp, #0xc
    mov r0, #0x22
    mov r2, #1
    str r3, [sp, #0xc]
    bl func_0202b608
@L_0202af10:
    cmp r7, #2
    bne @L_0202af4c
    ldr r0, [r8, #8]
    ldr r1, [r8, #0x3c]
    bic r2, r0, #0x40
    mov r0, r8
    str r2, [r8, #8]
    blx r1
    ldr r0, [r8, #0x3c]
    cmp r0, #0
    ldrneb r7, [r8, #0x98]
    ldr r0, [r8, #8]
    moveq r7, #0
    and r0, r0, #0x40
    b @L_0202af50
@L_0202af4c:
    mov r0, #0
@L_0202af50:
    cmp r0, #0
    bne @L_0202afe4
    ldr r0, [r8]
    ldr r4, [r8, #0xd8]
    ldrb r3, [r0, #1]
    cmp r4, #0
    beq @L_0202afac
    adds r2, r4, #4
    beq @L_0202af98
    ldrb r0, [r4, #5]
    cmp r3, r0
    bhs @L_0202af98
    ldrh r1, [r4, #0xa]
    ldrh r0, [r2, r1]
    add r1, r2, r1
    add r1, r1, #4
    mla r1, r0, r3, r1
    b @L_0202af9c
@L_0202af98:
    mov r1, #0
@L_0202af9c:
    cmp r1, #0
    ldrne r0, [r1]
    addne r0, r4, r0
    bne @L_0202afb0
@L_0202afac:
    mov r0, #0
@L_0202afb0:
    ldrh r2, [r0, #0x1e]
    tst r2, #0x2000
    beq @L_0202afe4
    add r1, r0, #0x2c
    tst r2, #2
    addeq r1, r1, #8
    tst r2, #4
    addeq r1, r1, #4
    tst r2, #8
    addeq r1, r1, #8
    mov r0, #0x18
    mov r2, #0x10
    bl func_0202b608
@L_0202afe4:
    cmp r7, #3
    movne r0, #0
    bne @L_0202b010
    ldr r0, [r8, #8]
    ldr r1, [r8, #0x3c]
    bic r2, r0, #0x40
    mov r0, r8
    str r2, [r8, #8]
    blx r1
    ldr r0, [r8, #8]
    and r0, r0, #0x40
@L_0202b010:
    cmp r0, #0
    bne @L_0202b0d0
    mov r6, #0x10
    mov r3, #2
    add r1, sp, #8
    mov r0, r6
    mov r2, r5
    str r3, [sp, #8]
    bl func_0202b608
    add r4, sp, #0x20
    mov r0, #0
    mov r1, r4
    bl func_0202b6e4
    mov r3, #3
    add r1, sp, #4
    mov r0, r6
    mov r2, r5
    str r3, [sp, #4]
    bl func_0202b608
    ldr r0, =data_020bf418
    ldr r0, [r0, #0xfc]
    tst r0, #1
    beq @L_0202b0a8
    mov r6, #0x1a
    mov r5, #9
    ldr r1, =data_020bf464
    mov r0, r6
    mov r2, r5
    bl func_0202b608
    ldr r1, =data_020bf4d4
@L_0202b088:
    mov r0, r6
    mov r2, r5
    bl func_0202b608
    mov r0, r6
    mov r1, r4
    mov r2, r5
    bl func_0202b608
    b @L_0202b0d0
@L_0202b0a8:
    tst r0, #2
    beq @L_0202b0c0
    mov r6, #0x1a
    mov r5, #9
    ldr r1, =data_020bf464
    b @L_0202b088
@L_0202b0c0:
    mov r1, r4
    mov r0, #0x1a
    mov r2, #9
    bl func_0202b608
@L_0202b0d0:
    mov r3, #2
    add r1, sp, #0
    mov r0, #0x10
    mov r2, #1
    str r3, [sp]
    bl func_0202b608
@L_0202b0e8:
    ldr r0, [r8]
    add r0, r0, #3
    str r0, [r8]
    add sp, sp, #0x44
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

asm void func_0202b110(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x80
    mov r5, r0
    ldr r0, [r5, #8]
    mov r6, #0
    tst r0, #0x200
    bne @L_0202b490
    tst r0, #1
    beq @L_0202b490
    add r0, sp, #0x50
    mov r1, r6
    bl func_0202b6e4
    mov r0, #0x1e
    mov r4, #1
    str r0, [sp, #0xc]
    add r1, sp, #0xc
    mov r2, r4
    mov r0, #0x13
    bl func_0202b608
    ldr r2, [r5, #0xb0]
    ldr r0, [r2, #0x10]
    and r1, r0, #0xc0000000
    cmp r1, #0xc0000000
    beq @L_0202b1a8
    bic r0, r0, #0xc0000000
    str r0, [r2, #0x10]
    ldr r3, [r5, #0xb0]
    ldr r0, =data_020ab8c0
    ldr r2, [r3, #0x10]
    ldr r1, =data_020ab8c4
    orr r2, r2, #0xc0000000
    str r2, [r3, #0x10]
    ldr r3, [r5, #0xb0]
    mov r2, r4
    ldr r3, [r3, #0x10]
    str r3, [r0, #4]
    ldr r0, [r0]
    bl func_0202b608
@L_0202b1a8:
    ldr r0, [r5, #0x40]
    cmp r0, #0
    ldrneb r4, [r5, #0x99]
    moveq r4, #0
    cmp r4, #1
    bne @L_0202b1f4
    ldr r0, [r5, #8]
    ldr r1, [r5, #0x40]
    bic r2, r0, #0x40
    mov r0, r5
    str r2, [r5, #8]
    blx r1
    ldr r0, [r5, #0x40]
    cmp r0, #0
    ldrneb r4, [r5, #0x99]
    ldr r0, [r5, #8]
    moveq r4, #0
    and r0, r0, #0x40
    b @L_0202b1f8
@L_0202b1f4:
    mov r0, #0
@L_0202b1f8:
    cmp r0, #0
    bne @L_0202b23c
    ldr r0, [r5, #0xb0]
    ldr r1, =data_020ab8f0
    ldrh r7, [r0, #0x2e]
    ldrh r3, [r0, #0x2c]
    mov r0, #0x16
    rsb r2, r7, #0
    mov r3, r3, lsl #0xf
    str r3, [r1]
    mov r2, r2, lsl #0xf
    str r2, [r1, #0x14]
    str r3, [r1, #0x30]
    mov r3, r7, lsl #0xf
    mov r2, #0x10
    str r3, [r1, #0x34]
    bl func_0202b608
@L_0202b23c:
    cmp r4, #2
    bne @L_0202b278
    ldr r0, [r5, #8]
    ldr r1, [r5, #0x40]
    bic r2, r0, #0x40
    mov r0, r5
    str r2, [r5, #8]
    blx r1
    ldr r0, [r5, #0x40]
    cmp r0, #0
    ldrneb r4, [r5, #0x99]
    ldr r0, [r5, #8]
    moveq r4, #0
    and r0, r0, #0x40
    b @L_0202b27c
@L_0202b278:
    mov r0, #0
@L_0202b27c:
    cmp r0, #0
    bne @L_0202b310
    ldr r0, [r5]
    ldr r7, [r5, #0xd8]
    ldrb r3, [r0, #1]
    cmp r7, #0
    beq @L_0202b2d8
    adds r2, r7, #4
    beq @L_0202b2c4
    ldrb r0, [r7, #5]
    cmp r3, r0
    bhs @L_0202b2c4
    ldrh r1, [r7, #0xa]
    ldrh r0, [r2, r1]
    add r1, r2, r1
    add r1, r1, #4
    mla r1, r0, r3, r1
    b @L_0202b2c8
@L_0202b2c4:
    mov r1, #0
@L_0202b2c8:
    cmp r1, #0
    ldrne r0, [r1]
    addne r0, r7, r0
    bne @L_0202b2dc
@L_0202b2d8:
    mov r0, #0
@L_0202b2dc:
    ldrh r2, [r0, #0x1e]
    tst r2, #0x2000
    beq @L_0202b310
    add r1, r0, #0x2c
    tst r2, #2
    addeq r1, r1, #8
    tst r2, #4
    addeq r1, r1, #4
    tst r2, #8
    addeq r1, r1, #8
    mov r0, #0x18
    mov r2, #0x10
    bl func_0202b608
@L_0202b310:
    cmp r4, #3
    movne r0, #0
    bne @L_0202b33c
    ldr r0, [r5, #8]
    ldr r1, [r5, #0x40]
    bic r2, r0, #0x40
    mov r0, r5
    str r2, [r5, #8]
    blx r1
    ldr r0, [r5, #8]
    and r0, r0, #0x40
@L_0202b33c:
    cmp r0, #0
    bne @L_0202b45c
    ldr r0, =data_020bf418
    ldr r0, [r0, #0xfc]
    tst r0, #1
    beq @L_0202b384
    ldr r1, =data_020bf4f8
    mov r0, #0x1c
    mov r2, #3
    bl func_0202b608
    ldr r1, =data_020bf4d4
    mov r0, #0x1a
    mov r2, #9
    bl func_0202b608
    add r1, sp, #0x50
    mov r0, #0x19
    mov r2, #0xc
    b @L_0202b3c4
@L_0202b384:
    tst r0, #2
    beq @L_0202b39c
    add r1, sp, #0x50
    mov r0, #0x19
    mov r2, #0xc
    b @L_0202b3c4
@L_0202b39c:
    bl func_0202878c
    mov r4, #0xc
    mov r7, #0x19
    mov r1, r0
    mov r0, r7
    mov r2, r4
    bl func_0202b608
    add r1, sp, #0x50
    mov r0, r7
    mov r2, r4
@L_0202b3c4:
    bl func_0202b608
    bl func_0202b4c4
    ldr r0, =0x4000440
    str r6, [r0]
    str r6, [r0, #4]
    str r6, [r0, #0x14]
    add r6, sp, #0x10
@L_0202b3e0:
    mov r0, r6
    bl G3X_GetClipMtx
    cmp r0, #0
    bne @L_0202b3e0
    ldr r2, =0x4000448
    mov r4, #1
    str r4, [r2]
    mov r0, #3
    str r0, [r2, #-8]
    mov r1, r6
    mov r0, #0x16
    mov r2, #0x10
    bl func_0202b608
    ldr r0, [sp, #0x44]
    ldr r1, [sp, #0x40]
    mov r0, r0, asr #4
    mov r0, r0, lsl #8
    mov r2, r1, asr #4
    mov r1, r0, asr #0x10
    mov r0, r2, lsl #8
    mov r1, r1, lsl #0x10
    mov r0, r0, asr #0x10
    mov r1, r1, lsr #0x10
    mov r0, r0, lsl #0x10
    mov r1, r1, lsl #0x10
    orr r3, r1, r0, lsr #16
    add r1, sp, #8
    mov r2, r4
    mov r0, #0x22
    str r3, [sp, #8]
    bl func_0202b608
@L_0202b45c:
    mov r4, #1
    mov r3, #2
    add r1, sp, #4
    mov r2, r4
    mov r0, #0x10
    str r3, [sp, #4]
    bl func_0202b608
    mov r3, #0x1e
    add r1, sp, #0
    mov r2, r4
    mov r0, #0x14
    str r3, [sp]
    bl func_0202b608
@L_0202b490:
    ldr r0, [r5]
    add r0, r0, #3
    str r0, [r5]
    add sp, sp, #0x80
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_0202b4c4(void)
{
    stmdb sp!, {r4, lr}
    ldr r0, =data_020c2380
    ldr r0, [r0, #4]
    cmp r0, #0
    beq @L_0202b4dc
    bl NNS_G3dGeWaitSendDL
@L_0202b4dc:
    ldr r4, =data_020c2380
    ldr r0, [r4]
    cmp r0, #0
    ldrne r2, [r0]
    cmpne r2, #0
    ldmeqia sp!, {r4, pc}
    ldr r1, =0x4000400
    add r0, r0, #4
    mov r2, r2, lsl #2
    bl MIi_CpuSend32
    ldr r0, [r4]
    mov r1, #0
    str r1, [r0]
    ldmia sp!, {r4, pc}
}
