// (asm for now)

void STD_CompareString(void);
void STD_CompareNString(void);
void string_put_char(void);
void string_fill_char(void);
void string_put_string(void);
void func_02017278(void);
void STD_TVSNPrintf(void);
void abort(void);
void exit(void);
void __exit(void);
void func_02017c04(void);
void __sys_alloc(void);
void __sys_free(void);
void malloc(void);
void func_02017c64(void);
void __flush_all(void);
void func_02017cdc(void);
void labs(void);
void __convert_from_newlines(void);
void __prep_buffer(void);
void __flush_buffer(void);
void __fwrite(void);
void fflush(void);

void _ll_udiv(void);
void raise(void);
extern char __console_exit[];
void func_0202529c(void);
extern char data_020bf00c[];
void OS_TryLockMutex(void);
extern char OSi_ThreadInfo[];
extern char data_020befc4[];
extern char data_020befe8[];
void OS_LockMutex(void);
extern char data_020beec4[];
void OS_UnlockMutex(void);
void func_02023dd8(void);
extern char data_020ab0c8[];
void _f2d(void);
void OS_AllocFromHeap(void);
void OS_FreeToHeap(void);
extern char data_020aafe0[];
void fwide(void);
void __memrchr(void);
void memcpy(void);
void _u32_div_f(void);

asm void STD_CompareString(void)
{
    stmdb sp!, {r3, lr}
    and r12, r0, #3
    and r2, r1, #3
    teq r12, r2
    mov r2, #0
    bne @L_02017088
    cmp r12, #0
    beq @L_02017058
    cmp r12, #4
    bhs @L_02017058
@L_02017028:
    ldrb r3, [r0, r2]
    ldrb lr, [r1, r2]
    cmp r3, lr
    bne @L_02017040
    cmp r3, #0
    bne @L_02017048
@L_02017040:
    sub r0, r3, lr
    ldmia sp!, {r3, pc}
@L_02017048:
    add r2, r2, #1
    add r3, r2, r12
    cmp r3, #4
    blo @L_02017028
@L_02017058:
    ldr r3, =0x7f7f7f7f
@L_0201705c:
    ldr lr, [r0, r2]
    ldr r12, [r1, r2]
    cmp lr, r12
    bne @L_02017088
    and r12, lr, r3
    add r12, r12, r3
    orr r12, r12, lr
    orr r12, r12, r3
    mvns r12, r12
    addeq r2, r2, #4
    beq @L_0201705c
@L_02017088:
    ldrb r3, [r0, r2]
    ldrb r12, [r1, r2]
    cmp r3, r12
    bne @L_020170a0
    cmp r3, #0
    bne @L_020170a8
@L_020170a0:
    sub r0, r3, r12
    ldmia sp!, {r3, pc}
@L_020170a8:
    add r2, r2, #1
    b @L_02017088
    ldmia sp!, {r3, pc}
}

asm void STD_CompareNString(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    cmp r2, #0
    beq @L_02017194
    and r5, r0, #3
    and r3, r1, #3
    teq r5, r3
    mov r3, #0
    bne @L_02017160
    cmp r5, #0
    beq @L_0201711c
    b @L_02017108
@L_020170e4:
    ldrb r4, [r0, r3]
    ldrb r12, [r1, r3]
    cmp r4, r12
    bne @L_020170fc
    cmp r4, #0
    bne @L_02017104
@L_020170fc:
    sub r0, r4, r12
    ldmia sp!, {r3, r4, r5, pc}
@L_02017104:
    add r3, r3, #1
@L_02017108:
    add r4, r3, r5
    cmp r4, #4
    bhs @L_0201711c
    cmp r3, r2
    blt @L_020170e4
@L_0201711c:
    sub r5, r2, #4
    cmp r3, r5
    bgt @L_02017160
    ldr r12, =0x7f7f7f7f
@L_0201712c:
    ldr r4, [r0, r3]
    ldr lr, [r1, r3]
    cmp r4, lr
    bne @L_02017160
    and lr, r4, r12
    add lr, lr, r12
    orr lr, lr, r4
    orr lr, lr, r12
    mvns lr, lr
    bne @L_02017160
    add r3, r3, #4
    cmp r3, r5
    ble @L_0201712c
@L_02017160:
    cmp r3, r2
    bge @L_02017194
@L_02017168:
    ldrb r4, [r0, r3]
    ldrb r5, [r1, r3]
    cmp r4, r5
    bne @L_02017180
    cmp r4, #0
    bne @L_02017188
@L_02017180:
    sub r0, r4, r5
    ldmia sp!, {r3, r4, r5, pc}
@L_02017188:
    add r3, r3, #1
    cmp r3, r2
    blt @L_02017168
@L_02017194:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

asm void string_put_char(void)
{
    ldr r2, [r0]
    cmp r2, #0
    ldrne r2, [r0, #4]
    strneb r1, [r2]
    ldrne r1, [r0]
    subne r1, r1, #1
    strne r1, [r0]
    ldr r1, [r0, #4]
    add r1, r1, #1
    str r1, [r0, #4]
    bx lr
}

asm void string_fill_char(void)
{
    stmdb sp!, {r3, lr}
    cmp r2, #0
    ldmleia sp!, {r3, pc}
    ldr lr, [r0]
    mov r12, #0
    cmp lr, r2
    movhi lr, r2
    cmp lr, #0
    bls @L_02017204
@L_020171f0:
    ldr r3, [r0, #4]
    strb r1, [r3, r12]
    add r12, r12, #1
    cmp r12, lr
    blo @L_020171f0
@L_02017204:
    ldr r3, [r0]
    ldr r1, [r0, #4]
    sub r3, r3, lr
    add r1, r1, r2
    str r3, [r0]
    str r1, [r0, #4]
    ldmia sp!, {r3, pc}
}

asm void string_put_string(void)
{
    stmdb sp!, {r4, lr}
    cmp r2, #0
    ldmleia sp!, {r4, pc}
    ldr r4, [r0]
    mov lr, #0
    cmp r4, r2
    movhi r4, r2
    cmp r4, #0
    bls @L_0201725c
@L_02017244:
    ldrsb r12, [r1, lr]
    ldr r3, [r0, #4]
    strb r12, [r3, lr]
    add lr, lr, #1
    cmp lr, r4
    blo @L_02017244
@L_0201725c:
    ldr r3, [r0]
    ldr r1, [r0, #4]
    sub r3, r3, r4
    add r1, r1, r2
    str r3, [r0]
    str r1, [r0, #4]
    ldmia sp!, {r4, pc}
}

asm void func_02017278(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, lr}
    add r3, sp, #0x10
    bic r3, r3, #3
    ldr r2, [sp, #0x10]
    add r3, r3, #4
    bl STD_TVSNPrintf
    ldmia sp!, {r3, lr}
    add sp, sp, #0x10
    bx lr
}

asm void STD_TVSNPrintf(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x30
    mov r10, r2
    ldrsb r2, [r10]
    str r1, [sp]
    mov r11, r3
    str r1, [sp, #0xc]
    str r0, [sp, #0x14]
    str r0, [sp, #0x10]
    cmp r2, #0
    beq @L_02017a38
@L_020172cc:
    ldrsb r1, [r10]
    and r0, r1, #0xff
    eor r0, r0, #0x20
    sub r0, r0, #0xa1
    cmp r0, #0x3c
    bhs @L_02017308
    add r0, sp, #0xc
    bl string_put_char
    ldrsb r1, [r10, #1]!
    cmp r1, #0
    beq @L_02017a2c
@L_020172f8:
    add r0, sp, #0xc
    add r10, r10, #1
    bl string_put_char
    b @L_02017a2c
@L_02017308:
    cmp r1, #0x25
    beq @L_02017314
    b @L_020172f8
@L_02017314:
    mov r5, #0
    mov r6, r5
    mov r2, r10
    sub r7, r5, #1
    mov r0, #0xa
    mov r3, #0x57
@L_0201732c:
    ldrsb r4, [r10, #1]!
    cmp r4, #0x20
    bgt @L_02017340
    beq @L_0201737c
    b @L_02017394
@L_02017340:
    cmp r4, #0x30
    bgt @L_02017394
    cmp r4, #0x2b
    blt @L_02017394
    beq @L_02017368
    cmp r4, #0x2d
    beq @L_02017384
    cmp r4, #0x30
    beq @L_0201738c
    b @L_02017394
@L_02017368:
    ldrsb r1, [r10, #-1]
    cmp r1, #0x20
    bne @L_02017394
    orr r5, r5, #2
    b @L_0201732c
@L_0201737c:
    orr r5, r5, #1
    b @L_0201732c
@L_02017384:
    orr r5, r5, #8
    b @L_0201732c
@L_0201738c:
    orr r5, r5, #0x10
    b @L_0201732c
@L_02017394:
    cmp r4, #0x2a
    bne @L_020173b8
    add r11, r11, #4
    ldr r6, [r11, #-4]
    add r10, r10, #1
    cmp r6, #0
    rsblt r6, r6, #0
    orrlt r5, r5, #8
    b @L_020173e0
@L_020173b8:
    mov r1, #0xa
    b @L_020173cc
@L_020173c0:
    ldrsb r4, [r10], #1
    mla r4, r6, r1, r4
    sub r6, r4, #0x30
@L_020173cc:
    ldrsb r4, [r10]
    cmp r4, #0x30
    blt @L_020173e0
    cmp r4, #0x39
    ble @L_020173c0
@L_020173e0:
    ldrsb r1, [r10]
    cmp r1, #0x2e
    bne @L_0201743c
    ldrsb r1, [r10, #1]!
    mov r7, #0
    cmp r1, #0x2a
    bne @L_02017414
    add r11, r11, #4
    ldr r7, [r11, #-4]
    add r10, r10, #1
    cmp r7, #0
    mvnlt r7, #0
    b @L_0201743c
@L_02017414:
    mov r1, #0xa
    b @L_02017428
@L_0201741c:
    ldrsb r4, [r10], #1
    mla r4, r7, r1, r4
    sub r7, r4, #0x30
@L_02017428:
    ldrsb r4, [r10]
    cmp r4, #0x30
    blt @L_0201743c
    cmp r4, #0x39
    ble @L_0201741c
@L_0201743c:
    ldrsb r1, [r10]
    cmp r1, #0x68
    beq @L_02017454
    cmp r1, #0x6c
    beq @L_0201746c
    b @L_02017480
@L_02017454:
    ldrsb r1, [r10, #1]!
    cmp r1, #0x68
    orrne r5, r5, #0x40
    addeq r10, r10, #1
    orreq r5, r5, #0x100
    b @L_02017480
@L_0201746c:
    ldrsb r1, [r10, #1]!
    cmp r1, #0x6c
    orrne r5, r5, #0x20
    addeq r10, r10, #1
    orreq r5, r5, #0x80
@L_02017480:
    ldrsb r1, [r10]
    cmp r1, #0x69
    bgt @L_020174c4
    cmp r1, #0x63
    blt @L_020174a8
    beq @L_0201752c
    cmp r1, #0x64
    cmpne r1, #0x69
    beq @L_02017680
    b @L_02017664
@L_020174a8:
    cmp r1, #0x25
    bgt @L_020174b8
    beq @L_02017654
    b @L_02017664
@L_020174b8:
    cmp r1, #0x58
    beq @L_02017518
    b @L_02017664
@L_020174c4:
    cmp r1, #0x70
    bgt @L_020174dc
    bge @L_02017520
    cmp r1, #0x6f
    beq @L_02017504
    b @L_02017664
@L_020174dc:
    cmp r1, #0x78
    bgt @L_02017664
    cmp r1, #0x73
    blt @L_02017664
    beq @L_020175a0
    cmp r1, #0x75
    beq @L_02017510
    cmp r1, #0x78
    beq @L_02017678
    b @L_02017664
@L_02017504:
    orr r5, r5, #0x1000
    mov r0, #8
    b @L_02017680
@L_02017510:
    orr r5, r5, #0x1000
    b @L_02017680
@L_02017518:
    mov r3, #0x37
    b @L_02017678
@L_02017520:
    orr r5, r5, #4
    mov r7, #8
    b @L_02017678
@L_0201752c:
    cmp r7, #0
    add r4, sp, #0xc
    bge @L_02017664
    add r11, r11, #4
    tst r5, #8
    ldr r7, [r11, #-4]
    beq @L_0201756c
    mov r1, r7, lsl #0x18
    mov r0, r4
    mov r1, r1, asr #0x18
    bl string_put_char
    mov r0, r4
    sub r2, r6, #1
    mov r1, #0x20
    bl string_fill_char
    b @L_0201759c
@L_0201756c:
    tst r5, #0x10
    movne r0, #0x30
    moveq r0, #0x20
    mov r1, r0, lsl #0x18
    mov r0, r4
    mov r1, r1, asr #0x18
    sub r2, r6, #1
    bl string_fill_char
    mov r1, r7, lsl #0x18
    mov r0, r4
    mov r1, r1, asr #0x18
    bl string_put_char
@L_0201759c:
    b @L_02017a28
@L_020175a0:
    add r11, r11, #4
    cmp r7, #0
    ldr r8, [r11, #-4]
    add r9, sp, #0xc
    mov r4, #0
    bge @L_020175dc
    ldrsb r0, [r8]
    cmp r0, #0
    beq @L_020175f0
@L_020175c4:
    add r4, r4, #1
    ldrsb r0, [r8, r4]
    cmp r0, #0
    bne @L_020175c4
    b @L_020175f0
@L_020175d8:
    add r4, r4, #1
@L_020175dc:
    cmp r4, r7
    bge @L_020175f0
    ldrsb r0, [r8, r4]
    cmp r0, #0
    bne @L_020175d8
@L_020175f0:
    tst r5, #8
    sub r6, r6, r4
    beq @L_02017620
    mov r0, r9
    mov r1, r8
    mov r2, r4
    bl string_put_string
    mov r0, r9
    mov r2, r6
    mov r1, #0x20
    bl string_fill_char
    b @L_02017650
@L_02017620:
    tst r5, #0x10
    movne r0, #0x30
    moveq r0, #0x20
    mov r1, r0, lsl #0x18
    mov r0, r9
    mov r2, r6
    mov r1, r1, asr #0x18
    bl string_fill_char
    mov r0, r9
    mov r1, r8
    mov r2, r4
    bl string_put_string
@L_02017650:
    b @L_02017a28
@L_02017654:
    add r0, r2, #1
    cmp r0, r10
    bne @L_02017664
    b @L_020172f8
@L_02017664:
    mov r1, r2
    add r0, sp, #0xc
    sub r2, r10, r2
    bl string_put_string
    b @L_02017a2c
@L_02017678:
    orr r5, r5, #0x1000
    mov r0, #0x10
@L_02017680:
    tst r5, #8
    bicne r5, r5, #0x10
    cmp r7, #0
    bicge r5, r5, #0x10
    movlt r7, #1
    mov r4, #0
    tst r5, #0x1000
    beq @L_02017740
    tst r5, #0x100
    addne r11, r11, #4
    ldrne r2, [r11, #-4]
    movne r1, #0
    andne r8, r2, #0xff
    bne @L_020176f4
    tst r5, #0x40
    beq @L_020176d8
    add r11, r11, #4
    ldr r2, [r11, #-4]
    mov r1, #0
    mov r2, r2, lsl #0x10
    mov r8, r2, lsr #0x10
    b @L_020176f4
@L_020176d8:
    tst r5, #0x80
    addne r11, r11, #8
    ldrne r1, [r11, #-4]
    ldrne r8, [r11, #-8]
    addeq r11, r11, #4
    ldreq r8, [r11, #-4]
    moveq r1, #0
@L_020176f4:
    bic r5, r5, #3
    tst r5, #4
    beq @L_02017808
    cmp r0, #0x10
    bne @L_0201772c
    cmp r1, #0
    cmpeq r8, #0
    beq @L_02017808
    add r4, r3, #0x21
    mov r2, #0x30
    strb r4, [sp, #8]
    strb r2, [sp, #9]
    mov r4, #2
    b @L_02017808
@L_0201772c:
    cmp r0, #8
    moveq r2, #0x30
    streqb r2, [sp, #8]
    moveq r4, #1
    b @L_02017808
@L_02017740:
    tst r5, #0x100
    beq @L_02017760
    add r11, r11, #4
    ldr r1, [r11, #-4]
    mov r1, r1, lsl #0x18
    mov r8, r1, asr #0x18
@L_02017758:
    mov r1, r8, asr #0x1f
    b @L_02017798
@L_02017760:
    tst r5, #0x40
    beq @L_0201777c
    add r11, r11, #4
    ldr r1, [r11, #-4]
    mov r1, r1, lsl #0x10
    mov r8, r1, asr #0x10
    b @L_02017758
@L_0201777c:
    tst r5, #0x80
    addne r11, r11, #8
    ldrne r8, [r11, #-8]
    ldrne r1, [r11, #-4]
    addeq r11, r11, #4
    ldreq r8, [r11, #-4]
    moveq r1, r8, asr #0x1f
@L_02017798:
    mov r2, #0
    and r9, r2, #0
    cmp r9, #0
    and r9, r1, #0x80000000
    cmpeq r9, #0
    beq @L_020177d0
    mvn r8, r8
    mov r4, #0x2d
    strb r4, [sp, #8]
    mvn r1, r1
    adds r8, r8, #1
    adc r1, r1, r2
    mov r4, #1
    b @L_02017808
@L_020177d0:
    cmp r1, r2
    cmpeq r8, r2
    bne @L_020177e4
    cmp r7, #0
    beq @L_02017808
@L_020177e4:
    tst r5, #2
    movne r2, #0x2b
    strneb r2, [sp, #8]
    movne r4, #1
    bne @L_02017808
    tst r5, #1
    movne r2, #0x20
    strneb r2, [sp, #8]
    movne r4, #1
@L_02017808:
    cmp r0, #8
    mov r9, #0
    beq @L_02017828
    cmp r0, #0xa
    beq @L_02017868
    cmp r0, #0x10
    beq @L_02017900
    b @L_02017944
@L_02017828:
    cmp r1, r9
    cmpeq r8, r9
    beq @L_02017944
    add r0, sp, #0x18
@L_02017838:
    and r2, r8, #7
    mov r8, r8, lsr #3
    add r2, r2, #0x30
    strb r2, [r0, r9]
    mov r2, r1, lsr #3
    cmp r2, #0
    orr r8, r8, r1, lsl #29
    mov r1, r2
    cmpeq r8, #0
    add r9, r9, #1
    bne @L_02017838
    b @L_02017944
@L_02017868:
    mov r0, r9
    cmp r0, r9
    cmpeq r1, r9
    bne @L_020178b4
    cmp r8, #0
    mov r3, #0xa
    beq @L_02017944
    ldr r2, =0xcccccccd
    add r12, sp, #0x18
@L_0201788c:
    umull r1, r0, r8, r2
    movs r0, r0, lsr #3
    mul r1, r0, r3
    sub r1, r8, r1
    mov r8, r0
    add r0, r1, #0x30
    strb r0, [r12, r9]
    add r9, r9, #1
    bne @L_0201788c
    b @L_02017944
@L_020178b4:
    cmp r1, r9
    cmpeq r8, r9
    beq @L_02017944
@L_020178c0:
    mov r0, r8
    mov r2, #0xa
    mov r3, #0
    bl _ll_udiv
    mov r2, #0xa
    umull r3, r2, r0, r2
    subs r2, r8, r3
    add r3, r2, #0x30
    add r2, sp, #0x18
    strb r3, [r2, r9]
    cmp r1, #0
    cmpeq r0, #0
    mov r8, r0
    add r9, r9, #1
    bne @L_020178c0
    b @L_02017944
@L_02017900:
    cmp r1, r9
    cmpeq r8, r9
    beq @L_02017944
    add r0, sp, #0x18
@L_02017910:
    and r12, r8, #0xf
    mov r8, r8, lsr #4
    mov r2, r1, lsr #4
    orr r8, r8, r1, lsl #28
    cmp r12, #0xa
    mov r1, r2
    addlt r2, r12, #0x30
    addge r2, r12, r3
    strb r2, [r0, r9]
    cmp r1, #0
    cmpeq r8, #0
    add r9, r9, #1
    bne @L_02017910
@L_02017944:
    cmp r4, #0
    add r0, sp, #0x18
    add r8, sp, #0xc
    ble @L_0201796c
    ldrsb r1, [sp, #8]
    cmp r1, #0x30
    moveq r1, #0x30
    streqb r1, [r0, r9]
    addeq r9, r9, #1
    moveq r4, #0
@L_0201796c:
    tst r5, #0x10
    subne r0, r6, r9
    sub r7, r7, r9
    subne r0, r0, r4
    cmpne r7, r0
    movlt r7, r0
    cmp r7, #0
    subgt r6, r6, r7
    add r0, r4, r9
    sub r6, r6, r0
    ands r0, r5, #8
    str r0, [sp, #4]
    bne @L_020179b0
    add r0, sp, #0xc
    mov r2, r6
    mov r1, #0x20
    bl string_fill_char
@L_020179b0:
    cmp r4, #0
    ble @L_020179d4
    add r5, sp, #8
@L_020179bc:
    sub r4, r4, #1
    ldrsb r1, [r5, r4]
    mov r0, r8
    bl string_put_char
    cmp r4, #0
    bgt @L_020179bc
@L_020179d4:
    add r5, sp, #0xc
    mov r2, r7
    mov r0, r5
    mov r1, #0x30
    bl string_fill_char
    cmp r9, #0
    ble @L_02017a0c
    add r4, sp, #0x18
@L_020179f4:
    sub r9, r9, #1
    ldrsb r1, [r4, r9]
    mov r0, r5
    bl string_put_char
    cmp r9, #0
    bgt @L_020179f4
@L_02017a0c:
    ldr r0, [sp, #4]
    cmp r0, #0
    beq @L_02017a28
    add r0, sp, #0xc
    mov r2, r6
    mov r1, #0x20
    bl string_fill_char
@L_02017a28:
    add r10, r10, #1
@L_02017a2c:
    ldrsb r0, [r10]
    cmp r0, #0
    bne @L_020172cc
@L_02017a38:
    ldr r0, [sp, #0xc]
    mov r2, #0
    cmp r0, #0
    ldrne r0, [sp, #0x10]
    strneb r2, [r0]
    bne @L_02017a64
    ldr r0, [sp]
    cmp r0, #0
    ldrne r1, [sp, #0x14]
    addne r0, r1, r0
    strneb r2, [r0, #-1]
@L_02017a64:
    ldr r1, [sp, #0x10]
    ldr r0, [sp, #0x14]
    sub r0, r1, r0
    add sp, sp, #0x30
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void abort(void)
{
    stmdb sp!, {r4, lr}
    mov r4, #1
    mov r0, r4
    bl raise
    ldr r1, =__console_exit
    mov r0, r4
    str r4, [r1, #0xc]
    bl exit
    ldmia sp!, {r4, pc}
}

asm void exit(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r4, =__console_exit
    mov r5, r0
    ldr r0, [r4, #0xc]
    cmp r0, #0
    bne @L_02017ad8
    bl func_0202529c
    ldr r0, [r4, #4]
    cmp r0, #0
    beq @L_02017ad8
    blx r0
    mov r0, #0
    str r0, [r4, #4]
@L_02017ad8:
    mov r0, r5
    bl __exit
    ldmia sp!, {r3, r4, r5, pc}
}

asm void __exit(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r6, =data_020bf00c
    mov r0, r6
    bl OS_TryLockMutex
    cmp r0, #0
    bne @L_02017b24
    ldr r0, =OSi_ThreadInfo
    ldr r1, =data_020befc4
    ldr r2, [r0, #4]
    ldr r0, =data_020befe8
    ldr r3, [r2, #0x6c]
    mov r2, #1
    str r3, [r1]
    str r2, [r0]
    b @L_02017b70
@L_02017b24:
    ldr r4, =OSi_ThreadInfo
    ldr r5, =data_020befc4
    ldr r0, [r4, #4]
    ldr r1, [r5]
    ldr r0, [r0, #0x6c]
    cmp r1, r0
    ldreq r0, =data_020befe8
    ldreq r1, [r0]
    addeq r1, r1, #1
    streq r1, [r0]
    beq @L_02017b70
    mov r0, r6
    bl OS_LockMutex
    ldr r1, [r4, #4]
    ldr r0, =data_020befe8
    ldr r2, [r1, #0x6c]
    mov r1, #1
    str r2, [r5]
    str r1, [r0]
@L_02017b70:
    ldr r4, =__console_exit
    ldr r0, [r4, #8]
    cmp r0, #0
    ble @L_02017ba4
    ldr r5, =data_020beec4
@L_02017b84:
    ldr r0, [r4, #8]
    sub r1, r0, #1
    ldr r0, [r5, r1, lsl #2]
    str r1, [r4, #8]
    blx r0
    ldr r0, [r4, #8]
    cmp r0, #0
    bgt @L_02017b84
@L_02017ba4:
    ldr r0, =data_020befe8
    ldr r1, [r0]
    subs r1, r1, #1
    str r1, [r0]
    bne @L_02017bc0
    ldr r0, =data_020bf00c
    bl OS_UnlockMutex
@L_02017bc0:
    ldr r4, =__console_exit
    ldr r0, [r4]
    cmp r0, #0
    beq @L_02017bdc
    blx r0
    mov r0, #0
    str r0, [r4]
@L_02017bdc:
    mov r0, #0
    bl fflush
    bl func_02023dd8
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_02017c04(void)
{
    ldr r0, =data_020ab0c8
    ldr r12, =_f2d
    ldr r0, [r0]
    bx r12
}

asm void __sys_alloc(void)
{
    mov r2, r0
    mov r0, #0
    ldr r12, =OS_AllocFromHeap
    sub r1, r0, #1
    bx r12
}

asm void __sys_free(void)
{
    mov r2, r0
    mov r0, #0
    ldr r12, =OS_FreeToHeap
    sub r1, r0, #1
    bx r12
}

asm void malloc(void)
{
    stmdb sp!, {r3, lr}
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, pc}
    bl __sys_alloc
    ldmia sp!, {r3, pc}
}

asm void func_02017c64(void)
{
    stmdb sp!, {r3, lr}
    cmp r0, #0
    ldmeqia sp!, {r3, pc}
    bl __sys_free
    ldmia sp!, {r3, pc}
}

asm void __flush_all(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    ldr r0, =data_020aafe0
    mov r4, #0
    mov r5, #1
    mov r8, r0
    mvn r9, #0
    mov r7, r4
    mov r6, #0x4c
@L_02017c98:
    ldr r1, [r0, #4]
    mov r1, r1, lsl #0x16
    movs r1, r1, lsr #0x1d
    beq @L_02017cb4
    bl fflush
    cmp r0, #0
    movne r4, r9
@L_02017cb4:
    cmp r5, #3
    mullt r0, r5, r6
    addlt r0, r8, r0
    movge r0, r7
    addlt r5, r5, #1
    cmp r0, #0
    bne @L_02017c98
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void func_02017cdc(void)
{
    cmp r0, #0
    rsblt r0, r0, #0
    bx lr
}

asm void labs(void)
{
    cmp r0, #0
    rsblt r0, r0, #0
    bx lr
}

asm void __convert_from_newlines(void)
{
    bx lr
}

asm void __prep_buffer(void)
{
    ldr r2, [r0, #0x18]
    ldr r1, [r0, #0x2c]
    ldr r12, [r0, #0x1c]
    ldr r3, [r0, #0x20]
    and r1, r2, r1
    sub r1, r3, r1
    str r12, [r0, #0x24]
    str r1, [r0, #0x28]
    str r2, [r0, #0x34]
    bx lr
}

asm void __flush_buffer(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    ldr r2, [r5, #0x24]
    ldr r0, [r5, #0x1c]
    mov r4, r1
    subs r2, r2, r0
    beq @L_02017d94
    ldr r1, [r5, #4]
    str r2, [r5, #0x28]
    mov r1, r1, lsl #0x13
    movs r1, r1, lsr #0x1f
    bne @L_02017d58
    add r1, r5, #0x28
    bl __convert_from_newlines
@L_02017d58:
    ldr r0, [r5]
    ldr r1, [r5, #0x1c]
    ldr r3, [r5, #0x48]
    ldr r12, [r5, #0x40]
    add r2, r5, #0x28
    blx r12
    cmp r4, #0
    ldrne r1, [r5, #0x28]
    strne r1, [r4]
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r1, [r5, #0x18]
    ldr r0, [r5, #0x28]
    add r0, r1, r0
    str r0, [r5, #0x18]
@L_02017d94:
    mov r0, r5
    bl __prep_buffer
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

asm void __fwrite(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    mov r9, r3
    mov r10, r0
    str r1, [sp]
    mov r1, #0
    mov r0, r9
    mov r5, r2
    mov r4, r1
    bl fwide
    cmp r0, #0
    bne @L_02017de0
    mov r0, r9
    mvn r1, #0
    bl fwide
@L_02017de0:
    ldr r0, [sp]
    muls r5, r0, r5
    beq @L_02017e08
    ldrb r0, [r9, #0xd]
    cmp r0, #0
    bne @L_02017e08
    ldr r1, [r9, #4]
    mov r0, r1, lsl #0x16
    movs r0, r0, lsr #0x1d
    bne @L_02017e14
@L_02017e08:
    add sp, sp, #8
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02017e14:
    mov r0, r1, lsl #0x13
    movs r0, r0, lsr #0x1f
    movne r0, r1, lsl #0x19
    movne r0, r0, lsr #0x1e
    cmpne r0, #2
    ldr r1, [r9, #8]
    cmpne r0, #1
    mov r8, #1
    mov r0, r1, lsl #0x1d
    movne r8, #0
    movs r0, r0, lsr #0x1d
    bne @L_02017e6c
    ldr r0, [r9, #4]
    mov r0, r0, lsl #0x1b
    mov r0, r0, lsr #0x1d
    tst r0, #2
    beq @L_02017e6c
    bic r0, r1, #7
    orr r1, r0, #1
    mov r0, r9
    str r1, [r9, #8]
    bl __prep_buffer
@L_02017e6c:
    ldr r0, [r9, #8]
    mov r0, r0, lsl #0x1d
    mov r0, r0, lsr #0x1d
    cmp r0, #1
    movne r1, #1
    movne r0, #0
    addne sp, sp, #8
    strneb r1, [r9, #0xd]
    strne r0, [r9, #0x28]
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r5, #0
    mov r6, #0
    beq @L_02017fbc
    ldr r0, [r9, #0x1c]
    ldr r2, [r9, #0x24]
    cmp r2, r0
    bne @L_02017eb8
    cmp r8, #0
    beq @L_02017fbc
@L_02017eb8:
    ldr r1, [r9, #0x20]
    sub r0, r2, r0
    sub r0, r1, r0
    str r0, [r9, #0x28]
    mov r11, #0
@L_02017ecc:
    ldr r2, [r9, #0x28]
    mov r7, r4
    str r2, [sp, #4]
    cmp r2, r5
    strhi r5, [sp, #4]
    ldr r0, [r9, #4]
    movhi r2, r5
    mov r0, r0, lsl #0x19
    mov r0, r0, lsr #0x1e
    cmp r0, #1
    bne @L_02017f1c
    cmp r2, #0
    beq @L_02017f1c
    mov r0, r10
    mov r1, #0xa
    bl __memrchr
    movs r7, r0
    addne r0, r7, #1
    subne r2, r0, r10
    strne r2, [sp, #4]
@L_02017f1c:
    ldr r2, [sp, #4]
    cmp r2, #0
    beq @L_02017f5c
    ldr r0, [r9, #0x24]
    mov r1, r10
    bl memcpy
    ldr r0, [sp, #4]
    ldr r1, [r9, #0x24]
    ldr r2, [r9, #0x28]
    add r1, r1, r0
    str r1, [r9, #0x24]
    ldr r1, [sp, #4]
    add r10, r10, r0
    sub r1, r2, r1
    str r1, [r9, #0x28]
    sub r5, r5, r0
@L_02017f5c:
    ldr r0, [r9, #0x28]
    cmp r0, #0
    beq @L_02017f80
    cmp r7, #0
    bne @L_02017f80
    ldr r0, [r9, #4]
    mov r0, r0, lsl #0x19
    movs r0, r0, lsr #0x1e
    bne @L_02017fa4
@L_02017f80:
    mov r0, r9
    mov r1, r11
    bl __flush_buffer
    cmp r0, #0
    movne r0, #1
    movne r5, r11
    strneb r0, [r9, #0xd]
    strne r11, [r9, #0x28]
    bne @L_02017fbc
@L_02017fa4:
    ldr r0, [sp, #4]
    cmp r5, #0
    add r6, r6, r0
    beq @L_02017fbc
    cmp r8, #0
    bne @L_02017ecc
@L_02017fbc:
    cmp r5, #0
    beq @L_0201801c
    cmp r8, #0
    bne @L_0201801c
    ldr r7, [r9, #0x1c]
    ldr r8, [r9, #0x20]
    add r2, r10, r5
    add r1, sp, #4
    mov r0, r9
    str r10, [r9, #0x1c]
    str r5, [r9, #0x20]
    str r2, [r9, #0x24]
    bl __flush_buffer
    cmp r0, #0
    movne r0, #1
    strne r4, [r9, #0x28]
    strneb r0, [r9, #0xd]
    ldreq r0, [sp, #4]
    addeq r6, r6, r0
    mov r0, r9
    str r7, [r9, #0x1c]
    str r8, [r9, #0x20]
    bl __prep_buffer
    str r4, [r9, #0x28]
@L_0201801c:
    ldr r0, [r9, #4]
    ldr r1, [sp]
    mov r0, r0, lsl #0x19
    mov r0, r0, lsr #0x1e
    cmp r0, #2
    mov r0, r6
    strne r4, [r9, #0x28]
    bl _u32_div_f
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void fflush(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    movs r4, r0
    bne @L_02018058
    bl __flush_all
    ldmia sp!, {r3, r4, r5, pc}
@L_02018058:
    ldrb r0, [r4, #0xd]
    cmp r0, #0
    bne @L_02018074
    ldr r0, [r4, #4]
    mov r1, r0, lsl #0x16
    movs r1, r1, lsr #0x1d
    bne @L_0201807c
@L_02018074:
    mvn r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_0201807c:
    mov r0, r0, lsl #0x1b
    mov r0, r0, lsr #0x1d
    cmp r0, #1
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, [r4, #8]
    mov r1, r0, lsl #0x1d
    mov r1, r1, lsr #0x1d
    cmp r1, #3
    bichs r0, r0, #7
    orrhs r0, r0, #2
    strhs r0, [r4, #8]
    ldr r0, [r4, #8]
    mov r0, r0, lsl #0x1d
    mov r0, r0, lsr #0x1d
    cmp r0, #2
    moveq r0, #0
    streq r0, [r4, #0x28]
    ldr r0, [r4, #8]
    mov r1, r0, lsl #0x1d
    mov r1, r1, lsr #0x1d
    cmp r1, #1
    bicne r0, r0, #7
    strne r0, [r4, #8]
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r5, #0
    mov r0, r4
    mov r1, r5
    bl __flush_buffer
    cmp r0, #0
    movne r0, #1
    strneb r0, [r4, #0xd]
    strne r5, [r4, #0x28]
    subne r0, r0, #2
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r1, [r4, #8]
    mov r0, r5
    bic r1, r1, #7
    str r1, [r4, #8]
    str r5, [r4, #0x18]
    str r5, [r4, #0x28]
    ldmia sp!, {r3, r4, r5, pc}
}
