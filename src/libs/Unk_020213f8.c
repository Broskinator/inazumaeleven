// (asm for now)

extern char data_020bf3e4[];
void func_0175a918(void);
void func_013168ec(void);
void func_00b0e8a8(void);
void func_0070a490(void);
void func_00306880(void);
void func_0175ad6c(void);
void func_01316d40(void);
void func_00b0ecfc(void);
void func_0070a8e4(void);
void func_00306cd4(void);
void __FindExceptionTable(void);
void func_02025ab8(void);
void func_0202599c(void);
void func_020259f8(void);
void _ZSt9terminatev(void);
void func_02025348(void);
void _ZSt10unexpectedv(void);
void func_02025b58(void);
extern char data_020ab6e4[];
extern char data_020ab6d8[];
extern char data_020ab6fc[];
void func_02025b10(void);
void func_02025ae0(void);
void _ZdlPv(void);
extern char data_020ab6ac[];
extern char data_020bf410[];
void func_02017a7c(void);

asm void func_020213f8(void)
{
    stmdb sp!, {r4, lr}
    eors r12, r1, r3
    eormi r3, r3, #0x80000000
    bmi @L_02021738
    subs r12, r0, r2
    sbcs lr, r1, r3
    bhs @L_02021424
    adds r2, r2, r12
    adc r3, r3, lr
    subs r0, r0, r12
    sbc r1, r1, lr
@L_02021424:
    mov lr, #0x80000000
    mov r12, r1, lsr #0x14
    orr r1, lr, r1, lsl #11
    orr r1, r1, r0, lsr #21
    mov r0, r0, lsl #0xb
    movs r4, r12, lsl #0x15
    cmnne r4, #0x200000
    beq @L_02021520
    mov r4, r3, lsr #0x14
    orr r3, lr, r3, lsl #11
    orr r3, r3, r2, lsr #21
    mov r2, r2, lsl #0xb
    movs lr, r4, lsl #0x15
    beq @L_02021568
@L_0202145c:
    subs r4, r12, r4
    beq @L_020214b4
    cmp r4, #0x20
    ble @L_02021498
    cmp r4, #0x38
    movge r4, #0x3f
    sub r4, r4, #0x20
    rsb lr, r4, #0x20
    orrs lr, r2, r3, lsl lr
    mov r2, r3, lsr r4
    orrne r2, r2, #1
    adds r0, r0, r2
    adcs r1, r1, #0
    blo @L_020214dc
    b @L_020214c0
@L_02021498:
    rsb lr, r4, #0x20
    movs lr, r2, lsl lr
    rsb lr, r4, #0x20
    mov r2, r2, lsr r4
    orr r2, r2, r3, lsl lr
    mov r3, r3, lsr r4
    orrne r2, r2, #1
@L_020214b4:
    adds r0, r0, r2
    adcs r1, r1, r3
    blo @L_020214dc
@L_020214c0:
    add r12, r12, #1
    and r4, r0, #1
    rrxs r1, r1
    orr r0, r4, r0, rrx
    mov lr, r12, lsl #0x15
    cmn lr, #0x200000
    beq @L_020216ec
@L_020214dc:
    movs r2, r0, lsl #0x15
    mov r0, r0, lsr #0xb
    orr r0, r0, r1, lsl #21
    add r1, r1, r1
    mov r1, r1, lsr #0xc
    orr r1, r1, r12, lsl #20
    tst r2, #0x80000000
    ldmeqia sp!, {r4, lr}
    bxeq lr
    movs r2, r2, lsl #1
    andseq r2, r0, #1
    ldmeqia sp!, {r4, lr}
    bxeq lr
    adds r0, r0, #1
    adc r1, r1, #0
    ldmia sp!, {r4, lr}
    bx lr
@L_02021520:
    cmp r12, #0x800
    movge lr, #0x80000000
    movlt lr, #0
    bics r12, r12, #0x800
    beq @L_0202158c
    orrs r4, r0, r1, lsl #1
    bne @L_020216c8
    mov r4, r3, lsr #0x14
    mov r3, r3, lsl #0xb
    orr r3, r3, r2, lsr #21
    mov r2, r2, lsl #0xb
    movs r4, r4, lsl #0x15
    beq @L_020216b4
    cmn r4, #0x200000
    bne @L_020216b4
    orrs r4, r2, r3, lsl #1
    beq @L_020216b4
    b @L_020216c8
@L_02021568:
    cmp r4, #0x800
    movge lr, #0x80000000
    movlt lr, #0
    bic r12, r12, #0x800
    bics r4, r4, #0x800
    beq @L_020215f8
    orrs r4, r2, r3, lsl #1
    bne @L_020216c8
    b @L_020216b4
@L_0202158c:
    orrs r4, r0, r1, lsl #1
    beq @L_020215cc
    mov r12, #1
    bic r1, r1, #0x80000000
    mov r4, r3, lsr #0x14
    mov r3, r3, lsl #0xb
    orr r3, r3, r2, lsr #21
    mov r2, r2, lsl #0xb
    movs r4, r4, lsl #0x15
    cmnne r4, #0x200000
    mov r4, r4, lsr #0x15
    orr r4, r4, lr, lsr #20
    beq @L_02021568
    orr r3, r3, #0x80000000
    orr r12, r12, lr, lsr #20
    b @L_0202145c
@L_020215cc:
    mov r12, r3, lsr #0x14
    mov r1, r3, lsl #0xb
    orr r1, r1, r2, lsr #21
    mov r0, r2, lsl #0xb
    movs r4, r12, lsl #0x15
    beq @L_02021680
    cmn r4, #0x200000
    bne @L_02021680
    orrs r4, r0, r1, lsl #1
    beq @L_020216b4
    b @L_020216cc
@L_020215f8:
    orrs r4, r2, r3, lsl #1
    beq @L_02021690
    mov r4, #1
    bic r3, r3, #0x80000000
    cmp r1, #0
    bpl @L_0202161c
    orr r12, r12, lr, lsr #20
    orr r4, r4, lr, lsr #20
    b @L_0202145c
@L_0202161c:
    adds r0, r0, r2
    adcs r1, r1, r3
    blo @L_0202163c
    add r12, r12, #1
    and r4, r0, #1
    rrxs r1, r1
    rrx r0, r0
    orr r0, r0, r4
@L_0202163c:
    cmp r1, #0
    subsge r12, r12, #1
    movs r2, r0, lsl #0x15
    mov r0, r0, lsr #0xb
    orr r0, r0, r1, lsl #21
    add r1, r1, r1
    orr r1, lr, r1, lsr #12
    orr r1, r1, r12, lsl #20
    ldmeqia sp!, {r4, lr}
    bxeq lr
    tst r2, #0x80000000
    ldmeqia sp!, {r4, lr}
    bxeq lr
    movs r2, r2, lsl #1
    andseq r2, r0, #1
    ldmeqia sp!, {r4, lr}
    bxeq lr
@L_02021680:
    mov r1, r3
    mov r0, r2
    ldmia sp!, {r4, lr}
    bx lr
@L_02021690:
    cmp r1, #0
    subsge r12, r12, #1
    mov r0, r0, lsr #0xb
    orr r0, r0, r1, lsl #21
    add r1, r1, r1
    orr r1, lr, r1, lsr #12
    orr r1, r1, r12, lsl #20
    ldmia sp!, {r4, lr}
    bx lr
@L_020216b4:
    ldr r1, =0x7ff00000
    orr r1, lr, r1
    mov r0, #0
    ldmia sp!, {r4, lr}
    bx lr
@L_020216c8:
    mov r1, r3
@L_020216cc:
    mvn r0, #0
    bic r1, r0, #0x80000000
    ldmia sp!, {r4, lr}
    bx lr
    mvn r0, #0
    bic r1, r0, #0x80000000
    ldmia sp!, {r4, lr}
    bx lr
@L_020216ec:
    cmp r12, #0x800
    movge lr, #0x80000000
    movlt lr, #0
    ldr r1, =0x7ff00000
    orr r1, lr, r1
    mov r0, #0
    ldmia sp!, {r4, lr}
    bx lr
}

asm void func_02021728(void)
{
    stmdb sp!, {r4, lr}
    eors r12, r1, r3
    eormi r3, r3, #0x80000000
    bmi @L_02021408
    subs r12, r0, r2
    sbcs lr, r1, r3
    bhs @L_02021758
    eor lr, lr, #0x80000000
    adds r2, r2, r12
    adc r3, r3, lr
    subs r0, r0, r12
    sbc r1, r1, lr
@L_02021758:
    mov lr, #0x80000000
    mov r12, r1, lsr #0x14
    orr r1, lr, r1, lsl #11
    orr r1, r1, r0, lsr #21
    mov r0, r0, lsl #0xb
    movs r4, r12, lsl #0x15
    cmnne r4, #0x200000
    beq @L_0202195c
    mov r4, r3, lsr #0x14
    orr r3, lr, r3, lsl #11
    orr r3, r3, r2, lsr #21
    mov r2, r2, lsl #0xb
    movs lr, r4, lsl #0x15
    beq @L_020219a4
@L_02021790:
    subs r4, r12, r4
    beq @L_02021838
    cmp r4, #0x20
    ble @L_020217cc
    cmp r4, #0x38
    movge r4, #0x3f
    sub r4, r4, #0x20
    rsb lr, r4, #0x20
    orrs lr, r2, r3, lsl lr
    mov r2, r3, lsr r4
    orrne r2, r2, #1
    subs r0, r0, r2
    sbcs r1, r1, #0
    bmi @L_020217f4
    b @L_020218e4
@L_020217cc:
    rsb lr, r4, #0x20
    movs lr, r2, lsl lr
    rsb lr, r4, #0x20
    mov r2, r2, lsr r4
    orr r2, r2, r3, lsl lr
    mov r3, r3, lsr r4
    orrne r2, r2, #1
    subs r0, r0, r2
    sbcs r1, r1, r3
    bpl @L_020218e4
@L_020217f4:
    movs r2, r0, lsl #0x15
    mov r0, r0, lsr #0xb
    orr r0, r0, r1, lsl #21
    add r1, r1, r1
    mov r1, r1, lsr #0xc
    orr r1, r1, r12, lsl #20
    tst r2, #0x80000000
    ldmeqia sp!, {r4, lr}
    bxeq lr
    movs r2, r2, lsl #1
    andseq r2, r0, #1
    ldmeqia sp!, {r4, lr}
    bxeq lr
    adds r0, r0, #1
    adc r1, r1, #0
    ldmia sp!, {r4, lr}
    bx lr
@L_02021838:
    subs r0, r0, r2
    sbc r1, r1, r3
    orrs lr, r1, r0
    beq @L_02021ac8
    mov lr, r12, lsl #0x14
    and lr, lr, #0x80000000
    bic r12, r12, #0x800
    cmp r1, #0
    bmi @L_020218c0
    bne @L_02021870
    sub r12, r12, #0x20
    movs r1, r0
    mov r0, #0
    bmi @L_0202188c
@L_02021870:
    clz r4, r1
    movs r1, r1, lsl r4
    rsb r4, r4, #0x20
    orr r1, r1, r0, lsr r4
    rsb r4, r4, #0x20
    mov r0, r0, lsl r4
    sub r12, r12, r4
@L_0202188c:
    cmp r12, #0
    bgt @L_020218c8
    rsb r12, r12, #0xc
    cmp r12, #0x20
    movge r0, r1
    movge r1, #0
    subge r12, r12, #0x20
    rsb r4, r12, #0x20
    mov r0, r0, lsr r12
    orr r0, r0, r1, lsl r4
    orr r1, lr, r1, lsr r12
    ldmia sp!, {r4, lr}
    bx lr
@L_020218c0:
    cmp r1, #0
    subsge r12, r12, #1
@L_020218c8:
    mov r0, r0, lsr #0xb
    orr r0, r0, r1, lsl #21
    add r1, r1, r1
    orr r1, lr, r1, lsr #12
    orr r1, r1, r12, lsl #20
    ldmia sp!, {r4, lr}
    bx lr
@L_020218e4:
    mov lr, r12, lsl #0x14
    and lr, lr, #0x80000000
    bic r12, r12, #0x800
    cmp r1, #0
    bne @L_02021908
    sub r12, r12, #0x20
    movs r1, r0
    mov r0, #0
    bmi @L_02021924
@L_02021908:
    clz r4, r1
    movs r1, r1, lsl r4
    rsb r4, r4, #0x20
    orr r1, r1, r0, lsr r4
    rsb r4, r4, #0x20
    mov r0, r0, lsl r4
    sub r12, r12, r4
@L_02021924:
    cmp r12, #0
    orrgt r12, r12, lr, lsr #20
    bgt @L_020217f4
    rsb r12, r12, #0xc
    cmp r12, #0x20
    movge r0, r1
    movge r1, #0
    subge r12, r12, #0x20
    rsb r4, r12, #0x20
    mov r0, r0, lsr r12
    orr r0, r0, r1, lsl r4
    orr r1, lr, r1, lsr r12
    ldmia sp!, {r4, lr}
    bx lr
@L_0202195c:
    cmp r12, #0x800
    movge lr, #0x80000000
    movlt lr, #0
    bics r12, r12, #0x800
    beq @L_020219c8
    orrs r4, r0, r1, lsl #1
    bne @L_02021aa4
    mov r4, r3, lsr #0x14
    mov r3, r3, lsl #0xb
    orr r3, r3, r2, lsr #21
    mov r2, r2, lsl #0xb
    movs r4, r4, lsl #0x15
    beq @L_02021a90
    cmn r4, #0x200000
    bne @L_02021a90
    orrs r4, r2, r3, lsl #1
    beq @L_02021ab8
    b @L_02021aa4
@L_020219a4:
    cmp r4, #0x800
    movge lr, #0x80000000
    movlt lr, #0
    bic r12, r12, #0x800
    bics r4, r4, #0x800
    beq @L_02021a40
    orrs r4, r2, r3, lsl #1
    bne @L_02021aa4
    b @L_02021a90
@L_020219c8:
    orrs r4, r0, r1, lsl #1
    beq @L_02021a08
    mov r12, #1
    bic r1, r1, #0x80000000
    mov r4, r3, lsr #0x14
    mov r3, r3, lsl #0xb
    orr r3, r3, r2, lsr #21
    mov r2, r2, lsl #0xb
    movs r4, r4, lsl #0x15
    cmnne r4, #0x200000
    mov r4, r4, lsr #0x15
    orr r4, r4, lr, lsr #20
    beq @L_020219a4
    orr r3, r3, #0x80000000
    orr r12, r12, lr, lsr #20
    b @L_02021790
@L_02021a08:
    mov r12, r3, lsr #0x14
    mov r1, r3, lsl #0xb
    orr r1, r1, r2, lsr #21
    mov r0, r2, lsl #0xb
    movs r4, r12, lsl #0x15
    beq @L_02021a34
    cmn r4, #0x200000
    bne @L_02021a5c
    orrs r4, r0, r1, lsl #1
    bne @L_02021aa8
    b @L_02021a90
@L_02021a34:
    orrs r4, r0, r1, lsl #1
    beq @L_02021ac8
    b @L_02021a5c
@L_02021a40:
    orrs r4, r2, r3, lsl #1
    beq @L_02021a6c
    mov r4, #1
    bic r3, r3, #0x80000000
    orr r12, r12, lr, lsr #20
    orr r4, r4, lr, lsr #20
    b @L_02021790
@L_02021a5c:
    mov r1, r3
    mov r0, r2
    ldmia sp!, {r4, lr}
    bx lr
@L_02021a6c:
    cmp r1, #0
    subsge r12, r12, #1
    mov r0, r0, lsr #0xb
    orr r0, r0, r1, lsl #21
    add r1, r1, r1
    orr r1, lr, r1, lsr #12
    orr r1, r1, r12, lsl #20
    ldmia sp!, {r4, lr}
    bx lr
@L_02021a90:
    ldr r1, =0x7ff00000
    orr r1, lr, r1
    mov r0, #0
    ldmia sp!, {r4, lr}
    bx lr
@L_02021aa4:
    mov r1, r3
@L_02021aa8:
    mvn r0, #0
    bic r1, r0, #0x80000000
    ldmia sp!, {r4, lr}
    bx lr
@L_02021ab8:
    mvn r0, #0
    bic r1, r0, #0x80000000
    ldmia sp!, {r4, lr}
    bx lr
@L_02021ac8:
    mov r1, #0
    mov r0, #0
    ldmia sp!, {r4, lr}
    bx lr
}

asm void func_02021adc(void)
{
    stmdb sp!, {r4, r5, r6, r7, lr}
    eor lr, r1, r3
    and lr, lr, #0x80000000
    mov r12, r1, lsr #0x14
    mov r1, r1, lsl #0xb
    orr r1, r1, r0, lsr #21
    mov r0, r0, lsl #0xb
    movs r6, r12, lsl #0x15
    cmnne r6, #0x200000
    beq @L_02021be4
    orr r1, r1, #0x80000000
    bic r12, r12, #0x800
    mov r4, r3, lsr #0x14
    mov r3, r3, lsl #0xb
    orr r3, r3, r2, lsr #21
    mov r2, r2, lsl #0xb
    movs r5, r4, lsl #0x15
    cmnne r5, #0x200000
    beq @L_02021c2c
    orr r3, r3, #0x80000000
    bic r4, r4, #0x800
@L_02021b30:
    add r12, r4, r12
    umull r5, r4, r0, r2
    umull r7, r6, r0, r3
    adds r4, r7, r4
    adc r6, r6, #0
    umull r7, r0, r1, r2
    adds r4, r7, r4
    adcs r0, r0, r6
    umull r7, r2, r1, r3
    adc r1, r2, #0
    adds r0, r0, r7
    adc r1, r1, #0
    orrs r4, r4, r5
    orrne r0, r0, #1
    cmp r1, #0
    blt @L_02021b7c
    sub r12, r12, #1
    adds r0, r0, r0
    adc r1, r1, r1
@L_02021b7c:
    add r12, r12, #2
    subs r12, r12, #0x400
    bmi @L_02021d18
    beq @L_02021d18
    mov r6, r12, lsl #0x14
    cmn r6, #0x100000
    bmi @L_02021e18
    movs r2, r0, lsl #0x15
    mov r0, r0, lsr #0xb
    orr r0, r0, r1, lsl #21
    add r1, r1, r1
    orr r1, lr, r1, lsr #12
    orr r1, r1, r12, lsl #20
    ldmeqia sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    tst r2, #0x80000000
    ldmeqia sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    movs r2, r2, lsl #1
    andseq r2, r0, #1
    ldmeqia sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    adds r0, r0, #1
    adc r1, r1, #0
    ldmia sp!, {r4, r5, r6, r7, lr}
    bx lr
@L_02021be4:
    bics r12, r12, #0x800
    beq @L_02021c40
    orrs r6, r0, r1, lsl #1
    bne @L_02021dcc
    mov r4, r3, lsr #0x14
    mov r3, r3, lsl #0xb
    orr r3, r3, r2, lsr #21
    mov r2, r2, lsl #0xb
    movs r5, r4, lsl #0x15
    beq @L_02021c20
    cmn r5, #0x200000
    bne @L_02021db8
    orrs r5, r2, r3, lsl #1
    beq @L_02021db8
    b @L_02021dcc
@L_02021c20:
    orrs r5, r3, r2
    beq @L_02021de0
    b @L_02021db8
@L_02021c2c:
    bics r4, r4, #0x800
    beq @L_02021cd4
    orrs r6, r2, r3, lsl #1
    bne @L_02021dcc
    b @L_02021db8
@L_02021c40:
    orrs r6, r0, r1, lsl #1
    beq @L_02021ca8
    mov r12, #1
    cmp r1, #0
    bne @L_02021c64
    sub r12, r12, #0x20
    movs r1, r0
    mov r0, #0
    bmi @L_02021c80
@L_02021c64:
    clz r6, r1
    movs r1, r1, lsl r6
    rsb r6, r6, #0x20
    orr r1, r1, r0, lsr r6
    rsb r6, r6, #0x20
    mov r0, r0, lsl r6
    sub r12, r12, r6
@L_02021c80:
    mov r4, r3, lsr #0x14
    mov r3, r3, lsl #0xb
    orr r3, r3, r2, lsr #21
    mov r2, r2, lsl #0xb
    movs r5, r4, lsl #0x15
    cmnne r5, #0x200000
    beq @L_02021c2c
    orr r3, r3, #0x80000000
    bic r4, r4, #0x800
    b @L_02021b30
@L_02021ca8:
    mov r4, r3, lsr #0x14
    mov r3, r3, lsl #0xb
    orr r3, r3, r2, lsr #21
    mov r2, r2, lsl #0xb
    movs r5, r4, lsl #0x15
    beq @L_02021e2c
    cmn r5, #0x200000
    bne @L_02021e2c
    orrs r6, r2, r3, lsl #1
    beq @L_02021de0
    b @L_02021dcc
@L_02021cd4:
    orrs r5, r2, r3, lsl #1
    beq @L_02021e2c
    mov r4, #1
    cmp r3, #0
    bne @L_02021cf8
    sub r4, r4, #0x20
    movs r3, r2
    mov r2, #0
    bmi @L_02021b30
@L_02021cf8:
    clz r6, r3
    movs r3, r3, lsl r6
    rsb r6, r6, #0x20
    orr r3, r3, r2, lsr r6
    rsb r6, r6, #0x20
    mov r2, r2, lsl r6
    sub r4, r4, r6
    b @L_02021b30
@L_02021d18:
    cmn r12, #0x34
    beq @L_02021db0
    bmi @L_02021e08
    mov r2, r1
    mov r3, r0
    add r4, r12, #0x34
    cmp r4, #0x20
    movge r2, r3
    movge r3, #0
    subge r4, r4, #0x20
    rsb r5, r4, #0x20
    mov r2, r2, lsl r4
    orr r2, r2, r3, lsr r5
    movs r3, r3, lsl r4
    orrne r2, r2, #1
    rsb r12, r12, #0xc
    cmp r12, #0x20
    movge r0, r1
    movge r1, #0
    subge r12, r12, #0x20
    rsb r4, r12, #0x20
    mov r0, r0, lsr r12
    orr r0, r0, r1, lsl r4
    orr r1, lr, r1, lsr r12
    cmp r2, #0
    ldmeqia sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    tst r2, #0x80000000
    ldmeqia sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    movs r2, r2, lsl #1
    andseq r2, r0, #1
    ldmeqia sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    adds r0, r0, #1
    adc r1, r1, #0
    ldmia sp!, {r4, r5, r6, r7, lr}
    bx lr
@L_02021db0:
    orr r0, r0, r1, lsl #1
    b @L_02021df0
@L_02021db8:
    ldr r1, =0x7ff00000
    orr r1, lr, r1
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, lr}
    bx lr
@L_02021dcc:
    mov r1, r3
    mvn r0, #0
    bic r1, r0, #0x80000000
    ldmia sp!, {r4, r5, r6, r7, lr}
    bx lr
@L_02021de0:
    mvn r0, #0
    bic r1, r0, #0x80000000
    ldmia sp!, {r4, r5, r6, r7, lr}
    bx lr
@L_02021df0:
    movs r2, r0
    mov r1, lr
    mov r0, #0
    addne r0, r0, #1
    ldmia sp!, {r4, r5, r6, r7, lr}
    bx lr
@L_02021e08:
    mov r1, lr
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, lr}
    bx lr
@L_02021e18:
    ldr r1, =0x7ff00000
    orr r1, lr, r1
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, lr}
    bx lr
@L_02021e2c:
    mov r1, lr
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, lr}
    bx lr
}

asm void _d2f(void)
{
    and r2, r1, #0x80000000
    mov r12, r1, lsr #0x14
    bics r12, r12, #0x800
    beq @L_02021eb8
    mov r3, r12, lsl #0x15
    cmn r3, #0x200000
    bhs @L_02021e9c
    subs r12, r12, #0x380
    bls @L_02021ec8
    cmp r12, #0xff
    bge @L_02021f38
    mov r1, r1, lsl #0xc
    orr r3, r2, r1, lsr #9
    orr r3, r3, r0, lsr #29
    movs r1, r0, lsl #3
    orr r0, r3, r12, lsl #23
    bxeq lr
    tst r1, #0x80000000
    bxeq lr
    movs r1, r1, lsl #1
    andseq r1, r0, #1
    addne r0, r0, #1
    bx lr
@L_02021e9c:
    orrs r3, r0, r1, lsl #12
    bne @L_02021eb0
    mov r0, #0xff000000
    orr r0, r2, r0, lsr #1
    bx lr
@L_02021eb0:
    mvn r0, #0x80000000
    bx lr
@L_02021eb8:
    orrs r3, r0, r1, lsl #12
    bne @L_02021f30
    mov r0, r2
    bx lr
@L_02021ec8:
    cmn r12, #0x17
    beq @L_02021f1c
    bmi @L_02021f30
    mov r1, r1, lsl #0xb
    orr r1, r1, #0x80000000
    mov r3, r1, lsr #8
    orr r3, r3, r0, lsr #29
    rsb r12, r12, #1
    movs r1, r0, lsl #3
    orr r0, r2, r3, lsr r12
    rsb r12, r12, #0x20
    mov r3, r3, lsl r12
    orrne r3, r3, #1
    movs r1, r3
    bxeq lr
    tst r1, #0x80000000
    bxeq lr
    movs r1, r1, lsl #1
    andseq r1, r0, #1
    addne r0, r0, #1
    bx lr
@L_02021f1c:
    orr r0, r0, r1, lsl #12
    movs r1, r0
    mov r0, r2
    addne r0, r0, #1
    bx lr
@L_02021f30:
    mov r0, r2
    bx lr
@L_02021f38:
    mov r0, #0xff000000
    orr r0, r2, r0, lsr #1
    bx lr
}

asm void func_02021f44(void)
{
    ands r2, r0, #0x80000000
    rsbmi r0, r0, #0
    cmp r0, #0
    mov r1, #0
    bxeq lr
    mov r3, #0x400
    add r3, r3, #0x1e
    clz r12, r0
    movs r0, r0, lsl r12
    sub r3, r3, r12
    movs r1, r0
    mov r0, r1, lsl #0x15
    add r1, r1, r1
    orr r1, r2, r1, lsr #12
    orr r1, r1, r3, lsl #20
    bx lr
}

asm void func_02021f84(void)
{
    cmp r0, #0
    mov r1, #0
    bxeq lr
    mov r3, #0x400
    add r3, r3, #0x1e
    bmi @L_02021fa8
    clz r12, r0
    movs r0, r0, lsl r12
    sub r3, r3, r12
@L_02021fa8:
    mov r1, r0
    mov r0, r1, lsl #0x15
    add r1, r1, r1
    mov r1, r1, lsr #0xc
    orr r1, r1, r3, lsl #20
    bx lr
}

asm void func_02021fc0(void)
{
    mov r12, #0x200000
    cmn r12, r1, lsl #1
    bhs @L_02022034
    cmn r12, r3, lsl #1
    bhs @L_02022048
@L_02021fd4:
    orrs r12, r3, r1
    bmi @L_02022004
    cmp r1, r3
    cmpeq r0, r2
    movhs r0, #1
    movlo r0, #0
    bx lr
@L_02021ff0:
    mov r0, #0
    mrs r12, apsr
    bic r12, r12, #0x20000000
    msr apsr_nzcvq, r12
    bx lr
@L_02022004:
    orr r12, r0, r12, lsl #1
    orrs r12, r12, r2
    moveq r0, #1
    mrs r12, apsr
    orr r12, r12, #0x20000000
    msr apsr_nzcvq, r12
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    movhs r0, #1
    movlo r0, #0
    bx lr
@L_02022034:
    bne @L_02021ff0
    cmp r0, #0
    bhi @L_02021ff0
    cmn r12, r3, lsl #1
    blo @L_02021fd4
@L_02022048:
    bne @L_02021ff0
    cmp r2, #0
    bhi @L_02021ff0
    b @L_02021fd4
}

asm void func_02022058(void)
{
    mov r12, #0x200000
    cmn r12, r1, lsl #1
    bhs @L_020220cc
    cmn r12, r3, lsl #1
    bhs @L_020220e0
@L_0202206c:
    orrs r12, r3, r1
    bmi @L_0202209c
    cmp r1, r3
    cmpeq r0, r2
    movhi r0, #1
    movls r0, #0
    bx lr
@L_02022088:
    mov r0, #0
    mrs r12, apsr
    bic r12, r12, #0x20000000
    msr apsr_nzcvq, r12
    bx lr
@L_0202209c:
    orr r12, r0, r12, lsl #1
    orrs r12, r12, r2
    moveq r0, #0
    mrs r12, apsr
    bic r12, r12, #0x20000000
    msr apsr_nzcvq, r12
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    movhi r0, #1
    movls r0, #0
    bx lr
@L_020220cc:
    bne @L_02022088
    cmp r0, #0
    bhi @L_02022088
    cmn r12, r3, lsl #1
    blo @L_0202206c
@L_020220e0:
    bne @L_02022088
    cmp r2, #0
    bhi @L_02022088
    b @L_0202206c
}

asm void func_020220f0(void)
{
    mov r12, #0x200000
    cmn r12, r1, lsl #1
    bhs @L_02022170
    cmn r12, r3, lsl #1
    bhs @L_02022184
@L_02022104:
    orrs r12, r3, r1
    bmi @L_02022138
    cmp r1, r3
    cmpeq r0, r2
    movls r0, #1
    movhi r0, #0
    bx lr
@L_02022120:
    mov r0, #0
    mrs r12, apsr
    bic r12, r12, #0x40000000
    orr r12, r12, #0x20000000
    msr apsr_nzcvq, r12
    bx lr
@L_02022138:
    orr r12, r0, r12, lsl #1
    orrs r12, r12, r2
    moveq r0, #1
    bne @L_0202215c
    mrs r12, apsr
    bic r12, r12, #0x20000000
    orr r12, r12, #0x40000000
    msr apsr_nzcvq, r12
    bxeq lr
@L_0202215c:
    cmp r3, r1
    cmpeq r2, r0
    movls r0, #1
    movhi r0, #0
    bx lr
@L_02022170:
    bne @L_02022120
    cmp r0, #0
    bhi @L_02022120
    cmn r12, r3, lsl #1
    blo @L_02022104
@L_02022184:
    bne @L_02022120
    cmp r2, #0
    bhi @L_02022120
    b @L_02022104
}

asm void func_02022194(void)
{
    mov r12, #0x200000
    cmn r12, r1, lsl #1
    bhs @L_0202220c
    cmn r12, r3, lsl #1
    bhs @L_02022220
@L_020221a8:
    orrs r12, r3, r1
    bmi @L_020221d8
    cmp r1, r3
    cmpeq r0, r2
    movlo r0, #1
    movhs r0, #0
    bx lr
@L_020221c4:
    mov r0, #0
    mrs r12, apsr
    orr r12, r12, #0x20000000
    msr apsr_nzcvq, r12
    bx lr
@L_020221d8:
    orr r12, r0, r12, lsl #1
    orrs r12, r12, r2
    moveq r0, #0
    bne @L_020221f8
    mrs r12, apsr
    orr r12, r12, #0x20000000
    msr apsr_nzcvq, r12
    bxeq lr
@L_020221f8:
    cmp r3, r1
    cmpeq r2, r0
    movlo r0, #1
    movhs r0, #0
    bx lr
@L_0202220c:
    bne @L_020221c4
    cmp r0, #0
    bhi @L_020221c4
    cmn r12, r3, lsl #1
    blo @L_020221a8
@L_02022220:
    bne @L_020221c4
    cmp r2, #0
    bhi @L_020221c4
    b @L_020221a8
}

asm void func_02022230(void)
{
    mov r12, #0x200000
    cmn r12, r1, lsl #1
    bhs @L_02022298
    cmn r12, r3, lsl #1
    bhs @L_020222ac
@L_02022244:
    orrs r12, r3, r1
    bmi @L_02022274
    cmp r1, r3
    cmpeq r0, r2
    moveq r0, #1
    movne r0, #0
    bx lr
@L_02022260:
    mov r0, #0
    mrs r12, apsr
    bic r12, r12, #0x40000000
    msr apsr_nzcvq, r12
    bx lr
@L_02022274:
    orr r12, r0, r12, lsl #1
    orrs r12, r12, r2
    moveq r0, #1
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    moveq r0, #1
    movne r0, #0
    bx lr
@L_02022298:
    bne @L_02022260
    cmp r0, #0
    bhi @L_02022260
    cmn r12, r3, lsl #1
    blo @L_02022244
@L_020222ac:
    bne @L_02022260
    cmp r2, #0
    bhi @L_02022260
    b @L_02022244
}

asm void func_020222bc(void)
{
    mov r12, #0x200000
    cmn r12, r1, lsl #1
    bhs @L_02022324
    cmn r12, r3, lsl #1
    bhs @L_02022338
@L_020222d0:
    orrs r12, r3, r1
    bmi @L_02022300
    cmp r1, r3
    cmpeq r0, r2
    movne r0, #1
    moveq r0, #0
    bx lr
@L_020222ec:
    mov r0, #1
    mrs r12, apsr
    bic r12, r12, #0x40000000
    msr apsr_nzcvq, r12
    bx lr
@L_02022300:
    orr r12, r0, r12, lsl #1
    orrs r12, r12, r2
    moveq r0, #0
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    movne r0, #1
    moveq r0, #0
    bx lr
@L_02022324:
    bne @L_020222ec
    cmp r0, #0
    bhi @L_020222ec
    cmn r12, r3, lsl #1
    blo @L_020222d0
@L_02022338:
    bne @L_020222ec
    cmp r2, #0
    bhi @L_020222ec
    b @L_020222d0
}

asm void func_02022348(void)
{
    mov r3, #0xff000000
    cmp r3, r0, lsl #1
    cmphs r3, r1, lsl #1
    blo @L_02022390
    cmp r0, #0
    bicmi r0, r0, #0x80000000
    rsbmi r0, r0, #0
    cmp r1, #0
    bicmi r1, r1, #0x80000000
    rsbmi r1, r1, #0
    cmp r0, r1
    movgt r0, #1
    movle r0, #0
    mrs r12, apsr
    bicle r12, r12, #0x20000000
    orrgt r12, r12, #0x20000000
    msr apsr_nzcvq, r12
    bx lr
@L_02022390:
    mov r0, #0
    mrs r12, apsr
    bic r12, r12, #0x20000000
    msr apsr_nzcvq, r12
    bx lr
}

asm void func_020223a4(void)
{
    mov r3, #0xff000000
    cmp r3, r0, lsl #1
    cmphs r3, r1, lsl #1
    blo @L_020223ec
    cmp r0, #0
    bicmi r0, r0, #0x80000000
    rsbmi r0, r0, #0
    cmp r1, #0
    bicmi r1, r1, #0x80000000
    rsbmi r1, r1, #0
    cmp r0, r1
    movlt r0, #1
    movge r0, #0
    mrs r12, apsr
    orrge r12, r12, #0x20000000
    biclt r12, r12, #0x20000000
    msr apsr_nzcvq, r12
    bx lr
@L_020223ec:
    mov r0, #0
    mrs r12, apsr
    orr r12, r12, #0x20000000
    msr apsr_nzcvq, r12
    bx lr
}

asm void func_02022400(void)
{
    and r2, r0, #0x80000000
    mov r12, r0, lsr #0x17
    mov r3, r0, lsl #9
    ands r12, r12, #0xff
    beq @L_02022430
    cmp r12, #0xff
    beq @L_0202245c
@L_0202241c:
    add r12, r12, #0x380
    mov r0, r3, lsl #0x14
    orr r1, r2, r3, lsr #12
    orr r1, r1, r12, lsl #20
    bx lr
@L_02022430:
    cmp r3, #0
    bne @L_02022444
    mov r1, r2
    mov r0, #0
    bx lr
@L_02022444:
    mov r3, r3, lsr #1
    clz r12, r3
    movs r3, r3, lsl r12
    rsb r12, r12, #1
    add r3, r3, r3
    b @L_0202241c
@L_0202245c:
    cmp r3, #0
    bhi @L_02022474
    ldr r1, =0x7ff00000
    orr r1, r1, r2
    mov r0, #0
    bx lr
@L_02022474:
    mvn r0, #0
    bic r1, r0, #0x80000000
    bx lr
}

asm void func_02022484(void)
{
    ands r2, r0, #0x80000000
    rsbmi r0, r0, #0
    cmp r0, #0
    bxeq lr
    clz r3, r0
    movs r0, r0, lsl r3
    rsb r3, r3, #0x9e
    ands r1, r0, #0xff
    add r0, r0, r0
    orr r0, r2, r0, lsr #9
    orr r0, r0, r3, lsl #23
    bxeq lr
    tst r1, #0x80
    bxeq lr
    ands r3, r1, #0x7f
    andseq r3, r0, #1
    addne r0, r0, #1
    bx lr
}

asm void func_020224cc(void)
{
    cmp r0, #0
    bxeq lr
    mov r3, #0x9e
    bmi @L_020224e8
    clz r12, r0
    movs r0, r0, lsl r12
    sub r3, r3, r12
@L_020224e8:
    ands r2, r0, #0xff
    add r0, r0, r0
    mov r0, r0, lsr #9
    orr r0, r0, r3, lsl #23
    bxeq lr
    tst r2, #0x80
    bxeq lr
    ands r1, r2, #0x7f
    andseq r1, r0, #1
    addne r0, r0, #1
    bx lr
}

asm void func_02022514(void)
{
    stmdb sp!, {r4, r5, r6, r7, r11, r12, lr}
    mov r4, r1
    orr r4, r4, #1
    b @L_02022534
    stmdb sp!, {r4, r5, r6, r7, r11, r12, lr}
    eor r4, r1, r3
    mov r4, r4, asr #1
    mov r4, r4, lsl #1
@L_02022534:
    orrs r5, r3, r2
    bne @L_02022544
    ldmia sp!, {r4, r5, r6, r7, r11, r12, lr}
    bx lr
@L_02022544:
    mov r5, r0, lsr #0x1f
    add r5, r5, r1
    mov r6, r2, lsr #0x1f
    add r6, r6, r3
    orrs r6, r5, r6
    bne @L_02022578
    mov r1, r2
    bl func_0202273c
    ands r4, r4, #1
    movne r0, r1
    mov r1, r0, asr #0x1f
    ldmia sp!, {r4, r5, r6, r7, r11, r12, lr}
    bx lr
@L_02022578:
    cmp r1, #0
    bge @L_02022588
    rsbs r0, r0, #0
    rsc r1, r1, #0
@L_02022588:
    cmp r3, #0
    bge @L_02022598
    rsbs r2, r2, #0
    rsc r3, r3, #0
@L_02022598:
    orrs r5, r1, r0
    beq @L_020226bc
    mov r5, #0
    mov r6, #1
    cmp r3, #0
    bmi @L_020225c4
@L_020225b0:
    add r5, r5, #1
    adds r2, r2, r2
    adcs r3, r3, r3
    bpl @L_020225b0
    add r6, r6, r5
@L_020225c4:
    cmp r1, #0
    blt @L_020225e4
@L_020225cc:
    cmp r6, #1
    beq @L_020225e4
    sub r6, r6, #1
    adds r0, r0, r0
    adcs r1, r1, r1
    bpl @L_020225cc
@L_020225e4:
    mov r7, #0
    mov r12, #0
    mov r11, #0
    b @L_0202260c
@L_020225f4:
    orr r12, r12, #1
    subs r6, r6, #1
    beq @L_02022664
    adds r0, r0, r0
    adcs r1, r1, r1
    adcs r7, r7, r7
@L_0202260c:
    subs r0, r0, r2
    sbcs r1, r1, r3
    sbcs r7, r7, #0
    adds r12, r12, r12
    adc r11, r11, r11
    cmp r7, #0
    bge @L_020225f4
@L_02022628:
    subs r6, r6, #1
    beq @L_0202265c
    adds r0, r0, r0
    adcs r1, r1, r1
    adc r7, r7, r7
    adds r0, r0, r2
    adcs r1, r1, r3
    adc r7, r7, #0
    adds r12, r12, r12
    adc r11, r11, r11
    cmp r7, #0
    bge @L_020225f4
    b @L_02022628
@L_0202265c:
    adds r0, r0, r2
    adc r1, r1, r3
@L_02022664:
    ands r7, r4, #1
    moveq r0, r12
    moveq r1, r11
    beq @L_0202269c
    subs r7, r5, #0x20
    movge r0, r1, lsr r7
    bge @L_020226c0
    rsb r7, r5, #0x20
    mov r0, r0, lsr r5
    orr r0, r0, r1, lsl r7
    mov r1, r1, lsr r5
    b @L_0202269c
    mov r0, r1, lsr r7
    mov r1, #0
@L_0202269c:
    cmp r4, #0
    blt @L_020226ac
    ldmia sp!, {r4, r5, r6, r7, r11, r12, lr}
    bx lr
@L_020226ac:
    rsbs r0, r0, #0
    rsc r1, r1, #0
    ldmia sp!, {r4, r5, r6, r7, r11, r12, lr}
    bx lr
@L_020226bc:
    mov r0, #0
@L_020226c0:
    mov r1, #0
    cmp r4, #0
    blt @L_020226ac
    ldmia sp!, {r4, r5, r6, r7, r11, r12, lr}
    bx lr
}

asm void _ll_udiv(void)
{
    stmdb sp!, {r4, r5, r6, r7, r11, r12, lr}
    mov r4, #0
    b @L_020226e8
    stmdb sp!, {r4, r5, r6, r7, r11, r12, lr}
    mov r4, #1
@L_020226e8:
    orrs r5, r3, r2
    bne @L_020226f8
    ldmia sp!, {r4, r5, r6, r7, r11, r12, lr}
    bx lr
@L_020226f8:
    orrs r5, r1, r3
    bne @L_02022598
    mov r1, r2
    bl .L_02022950
    cmp r4, #0
    movne r0, r1
    mov r1, #0
    ldmia sp!, {r4, r5, r6, r7, r11, r12, lr}
    bx lr
}

asm void func_0202271c(void)
{
    stmdb sp!, {r4, r5, lr}
    umull r5, r4, r0, r2
    mla r4, r0, r3, r4
    mla r4, r2, r1, r4
    mov r1, r4
    mov r0, r5
    ldmia sp!, {r4, r5, lr}
    bx lr
}

asm void func_0202273c(void)
{
    eor r12, r0, r1
    and r12, r12, #0x80000000
    cmp r0, #0
    rsblt r0, r0, #0
    addlt r12, r12, #1
    cmp r1, #0
    rsblt r1, r1, #0
    beq @L_02022934
    cmp r0, r1
    movlo r1, r0
    movlo r0, #0
    blo @L_02022934
    mov r2, #0x1c
    mov r3, r0, lsr #4
    cmp r1, r3, lsr #12
    suble r2, r2, #0x10
    movle r3, r3, lsr #0x10
    cmp r1, r3, lsr #4
    suble r2, r2, #8
    movle r3, r3, lsr #8
    cmp r1, r3
    suble r2, r2, #4
    movle r3, r3, lsr #4
    mov r0, r0, lsl r2
    rsb r1, r1, #0
    adds r0, r0, r0
    add r2, r2, r2, lsl #1
    add pc, pc, r2, lsl #2
    mov r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    mov r1, r3
@L_02022934:
    ands r3, r12, #0x80000000
    rsbne r0, r0, #0
    ands r3, r12, #1
    rsbne r1, r1, #0
    bx lr
}

asm void func_02022948(void)
{
    cmp r1, #0
    bxeq lr
    cmp r0, r1
    movlo r1, r0
    movlo r0, #0
    bxlo lr
    mov r2, #0x1c
    mov r3, r0, lsr #4
    cmp r1, r3, lsr #12
    suble r2, r2, #0x10
    movle r3, r3, lsr #0x10
    cmp r1, r3, lsr #4
    suble r2, r2, #8
    movle r3, r3, lsr #8
    cmp r1, r3
    suble r2, r2, #4
    movle r3, r3, lsr #4
    mov r0, r0, lsl r2
    rsb r1, r1, #0
    adds r0, r0, r0
    add r2, r2, r2, lsl #1
    add pc, pc, r2, lsl #2
    mov r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    adcs r3, r1, r3, lsl #1
    sublo r3, r3, r1
    adcs r0, r0, r0
    mov r1, r3
    bx lr
}

asm void func_02022b2c(void)
{
    bic r1, r0, #0x80000000
    mov r2, #0x9e
    subs r2, r2, r1, lsr #23
    ble @L_02022b54
    mov r1, r1, lsl #8
    orr r1, r1, #0x80000000
    cmp r0, #0
    mov r0, r1, lsr r2
    rsbmi r0, r0, #0
    bx lr
@L_02022b54:
    mvn r0, r0, asr #31
    add r0, r0, #0x80000000
    bx lr
}

asm void func_02022b60(void)
{
    bic r3, r1, #0x80000000
    ldr r2, =0x41e
    subs r2, r2, r3, lsr #20
    ble @L_02022b9c
    cmp r2, #0x20
    bge @L_02022b94
    mov r3, r1, lsl #0xb
    orr r3, r3, #0x80000000
    orr r3, r3, r0, lsr #21
    cmp r1, #0
    mov r0, r3, lsr r2
    rsbmi r0, r0, #0
    bx lr
@L_02022b94:
    mov r0, #0
    bx lr
@L_02022b9c:
    mvn r0, r1, asr #31
    add r0, r0, #0x80000000
    bx lr
}

asm void func_02022bac(void)
{
    tst r1, #0x80000000
    bne @L_02022be4
    ldr r2, =0x41e
    subs r2, r2, r1, lsr #20
    blt @L_02022bf8
    cmp r2, #0x20
    bge @L_02022bdc
    mov r3, r1, lsl #0xb
    orr r3, r3, #0x80000000
    orr r3, r3, r0, lsr #21
    mov r0, r3, lsr r2
    bx lr
@L_02022bdc:
    mov r0, #0
    bx lr
@L_02022be4:
    cmn r1, #0x100000
    cmpeq r0, #0
    movls r0, #0
    mvnhi r0, #0
    bx lr
@L_02022bf8:
    mvn r0, #0
    bx lr
}

asm void func_02022c04(void)
{
    tst r1, #0x80000000
    bne @L_02022c68
    ldr r2, =0x43e
    subs r2, r2, r1, lsr #20
    blt @L_02022c80
    cmp r2, #0x40
    bge @L_02022c5c
    mov r12, r1, lsl #0xb
    orr r12, r12, #0x80000000
    orr r12, r12, r0, lsr #21
    cmp r2, #0x20
    ble @L_02022c44
    sub r2, r2, #0x20
    mov r1, #0
    mov r0, r12, lsr r2
    bx lr
@L_02022c44:
    mov r3, r0, lsl #0xb
    mov r1, r12, lsr r2
    mov r0, r3, lsr r2
    rsb r2, r2, #0x20
    orr r0, r0, r12, lsl r2
    bx lr
@L_02022c5c:
    mov r1, #0
    mov r0, #0
    bx lr
@L_02022c68:
    cmn r1, #0x100000
    cmpeq r0, #0
    bhi @L_02022c80
    mov r1, #0
    mov r0, #0
    bx lr
@L_02022c80:
    mvn r1, #0
    mvn r0, #0
    bx lr
}

asm void func_02022c90(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r2, =0x7ff00000
    cmp r1, r2
    bhs @L_02022ddc
    movs r12, r1, lsr #0x14
    beq @L_02022d88
    bic r1, r1, r2
    orr r1, r1, #0x100000
@L_02022cb0:
    movs r12, r12, asr #1
    bhs @L_02022cc4
    sub r12, r12, #1
    movs r0, r0, lsl #1
    adc r1, r1, r1
@L_02022cc4:
    movs r3, r0, lsl #1
    adc r1, r1, r1
    mov r2, #0
    mov r4, #0
    mov lr, #0x200000
@L_02022cd8:
    add r6, r4, lr
    cmp r6, r1
    addle r4, r6, lr
    suble r1, r1, r6
    addle r2, r2, lr
    movs r3, r3, lsl #1
    adc r1, r1, r1
    movs lr, lr, lsr #1
    bne @L_02022cd8
    mov r0, #0
    mov r5, #0
    cmp r1, r4
    cmpeq r3, #0x80000000
    blo @L_02022d20
    subs r3, r3, #0x80000000
    sbc r1, r1, r4
    add r4, r4, #1
    mov r0, #0x80000000
@L_02022d20:
    movs r3, r3, lsl #1
    adc r1, r1, r1
    mov lr, #0x40000000
@L_02022d2c:
    add r6, r5, lr
    cmp r4, r1
    cmpeq r6, r3
    bhi @L_02022d4c
    add r5, r6, lr
    subs r3, r3, r6
    sbc r1, r1, r4
    add r0, r0, lr
@L_02022d4c:
    movs r3, r3, lsl #1
    adc r1, r1, r1
    movs lr, lr, lsr #1
    bne @L_02022d2c
    orrs r1, r1, r3
    biceq r0, r0, #1
    movs r1, r2, lsr #1
    rrxs r0, r0
    adcs r0, r0, #0
    adc r1, r1, #0
    add r1, r1, #0x20000000
    sub r1, r1, #0x100000
    add r1, r1, r12, lsl #20
    ldmia sp!, {r4, r5, r6, lr}
    bx lr
@L_02022d88:
    cmp r1, #0
    bne @L_02022db8
    cmp r0, #0
    ldmeqia sp!, {r4, r5, r6, lr}
    bxeq lr
    mvn r12, #0x13
    clz r5, r0
    movs r0, r0, lsl r5
    sub r12, r12, r5
    mov r1, r0, lsr #0xb
    mov r0, r0, lsl #0x15
    b @L_02022cb0
@L_02022db8:
    clz r2, r1
    movs r1, r1, lsl r2
    rsb r2, r2, #0x2b
    mov r1, r1, lsr #0xb
    orr r1, r1, r0, lsr r2
    rsb r2, r2, #0x20
    mov r0, r0, lsl r2
    rsb r12, r2, #1
    b @L_02022cb0
@L_02022ddc:
    tst r1, #0x80000000
    beq @L_02022df8
    bics r3, r1, #0x80000000
    cmpeq r0, #0
    ldmeqia sp!, {r4, r5, r6, lr}
    bxeq lr
    b @L_02022e04
@L_02022df8:
    orrs r2, r0, r1, lsl #12
    ldmeqia sp!, {r4, r5, r6, lr}
    bxeq lr
@L_02022e04:
    ldr r2, =0x7ff80000
    orr r1, r1, r2
    ldr r3, =data_020bf3e4
    mov r4, #0x21
    str r4, [r3]
    ldmia sp!, {r4, r5, r6, lr}
    bx lr
}

asm void func_02022e2c(void)
{
    eor r2, r0, r1
    and r2, r2, #0x80000000
    mov r12, #0xff
    ands r3, r12, r0, lsr #23
    mov r0, r0, lsl #8
    cmpne r3, #0xff
    beq @L_02022ea8
    orr r0, r0, #0x80000000
    ands r12, r12, r1, lsr #23
    mov r1, r1, lsl #8
    cmpne r12, #0xff
    beq @L_02022ee8
    orr r1, r1, #0x80000000
@L_02022e60:
    add r12, r3, r12
    umull r1, r3, r0, r1
    movs r0, r3
    addpl r0, r0, r0
    subpl r12, r12, #1
    subs r12, r12, #0x7f
    bmi @L_02022f74
    cmp r12, #0xfe
    bge @L_02022fe0
    ands r3, r0, #0xff
    orr r0, r2, r0, lsr #8
    add r0, r0, r12, lsl #23
    tst r3, #0x80
    bxeq lr
    orrs r1, r1, r3, lsl #25
    andseq r3, r0, #1
    addne r0, r0, #1
    bx lr
@L_02022ea8:
    cmp r3, #0
    beq @L_02022efc
    movs r0, r0, lsl #1
    bne @L_02022fd0
    mov r12, r1, lsr #0x17
    mov r1, r1, lsl #9
    ands r12, r12, #0xff
    beq @L_02022edc
    cmp r12, #0xff
    blt @L_02022fc4
    cmp r1, #0
    beq @L_02022fc4
    b @L_02022fd0
@L_02022edc:
    cmp r1, #0
    beq @L_02022fd8
    b @L_02022fc4
@L_02022ee8:
    cmp r12, #0
    beq @L_02022f58
@L_02022ef0:
    movs r1, r1, lsl #1
    bne @L_02022fd0
    b @L_02022fc4
@L_02022efc:
    movs r0, r0, lsl #1
    beq @L_02022f34
    mov r0, r0, lsr #1
    clz r3, r0
    movs r0, r0, lsl r3
    rsb r3, r3, #1
    mov r12, r1, lsr #0x17
    mov r1, r1, lsl #8
    ands r12, r12, #0xff
    beq @L_02022f58
    cmp r12, #0xff
    beq @L_02022ef0
    orr r1, r1, #0x80000000
    b @L_02022e60
@L_02022f34:
    mov r12, r1, lsr #0x17
    mov r1, r1, lsl #9
    ands r12, r12, #0xff
    beq @L_02023004
    cmp r12, #0xff
    blt @L_02023004
    cmp r1, #0
    beq @L_02022fd8
    b @L_02022fd0
@L_02022f58:
    movs r1, r1, lsl #1
    beq @L_02023004
    mov r1, r1, lsr #1
    clz r12, r1
    movs r1, r1, lsl r12
    rsb r12, r12, #1
    b @L_02022e60
@L_02022f74:
    cmn r12, #0x18
    beq @L_02022fbc
    bmi @L_02022ffc
    cmp r1, #0
    orrne r0, r0, #1
    mov r3, r0
    mov r0, r0, lsr #8
    rsb r12, r12, #0
    orr r0, r2, r0, lsr r12
    rsb r12, r12, #0x18
    movs r1, r3, lsl r12
    bxeq lr
    tst r1, #0x80000000
    bxeq lr
    movs r1, r1, lsl #1
    andseq r1, r0, #1
    addne r0, r0, #1
    bx lr
@L_02022fbc:
    mov r0, r0, lsl #1
    b @L_02022fec
@L_02022fc4:
    mov r0, #0xff000000
    orr r0, r2, r0, lsr #1
    bx lr
@L_02022fd0:
    mvn r0, #0x80000000
    bx lr
@L_02022fd8:
    mvn r0, #0x80000000
    bx lr
@L_02022fe0:
    mov r0, #0xff000000
    orr r0, r2, r0, lsr #1
    bx lr
@L_02022fec:
    movs r1, r0
    mov r0, r2
    addne r0, r0, #1
    bx lr
@L_02022ffc:
    mov r0, r2
    bx lr
@L_02023004:
    mov r0, r2
    bx lr
}

asm void func_0202300c(void)
{
    eors r2, r0, r1
    eormi r1, r1, #0x80000000
    bmi @L_02023248
    subs r12, r0, r1
    sublo r0, r0, r12
    addlo r1, r1, r12
    mov r2, #0x80000000
    mov r3, r0, lsr #0x17
    orr r0, r2, r0, lsl #8
    ands r12, r3, #0xff
    cmpne r12, #0xff
    beq @L_020230ac
    mov r12, r1, lsr #0x17
    orr r1, r2, r1, lsl #8
    ands r2, r12, #0xff
    beq @L_020230ec
@L_0202304c:
    subs r12, r3, r12
    beq @L_02023064
    rsb r2, r12, #0x20
    movs r2, r1, lsl r2
    mov r1, r1, lsr r12
    orrne r1, r1, #1
@L_02023064:
    adds r0, r0, r1
    blo @L_02023084
    and r1, r0, #1
    orr r0, r1, r0, rrx
    add r3, r3, #1
    and r2, r3, #0xff
    cmp r2, #0xff
    beq @L_020231f4
@L_02023084:
    ands r1, r0, #0xff
    add r0, r0, r0
    mov r0, r0, lsr #9
    orr r0, r0, r3, lsl #23
    tst r1, #0x80
    bxeq lr
    ands r1, r1, #0x7f
    andseq r1, r0, #1
    addne r0, r0, #1
    bx lr
@L_020230ac:
    cmp r3, #0x100
    movge r2, #0x80000000
    movlt r2, #0
    ands r3, r3, #0xff
    beq @L_02023110
    movs r0, r0, lsl #1
    bne @L_02023220
    mov r12, r1, lsr #0x17
    mov r1, r1, lsl #9
    ands r12, r12, #0xff
    beq @L_02023214
    cmp r12, #0xff
    blt @L_02023214
    cmp r1, #0
    beq @L_02023214
    b @L_02023220
@L_020230ec:
    cmp r3, #0x100
    movge r2, #0x80000000
    movlt r2, #0
    and r3, r3, #0xff
    ands r12, r12, #0xff
    beq @L_0202316c
@L_02023104:
    movs r1, r1, lsl #1
    bne @L_02023220
    b @L_02023214
@L_02023110:
    movs r0, r0, lsl #1
    beq @L_02023148
    mov r3, #1
    mov r0, r0, lsr #1
    mov r12, r1, lsr #0x17
    mov r1, r1, lsl #8
    ands r12, r12, #0xff
    beq @L_0202316c
    cmp r12, #0xff
    beq @L_02023104
    orr r1, r1, #0x80000000
    orr r3, r3, r2, lsr #23
    orr r12, r12, r2, lsr #23
    b @L_0202304c
@L_02023148:
    mov r3, r1, lsr #0x17
    mov r0, r1, lsl #9
    ands r3, r3, #0xff
    beq @L_020231d4
    cmp r3, #0xff
    blt @L_020231d4
    cmp r0, #0
    beq @L_02023214
    b @L_0202320c
@L_0202316c:
    movs r1, r1, lsl #1
    beq @L_020231dc
    mov r1, r1, lsr #1
    mov r12, #1
    orr r3, r3, r2, lsr #23
    orr r12, r12, r2, lsr #23
    cmp r0, #0
    bmi @L_0202304c
    adds r0, r0, r1
    blo @L_020231a0
    and r1, r0, #1
    orr r0, r1, r0, rrx
    add r12, r12, #1
@L_020231a0:
    cmp r0, #0
    subge r12, r12, #1
    ands r1, r0, #0xff
    add r0, r0, r0
    mov r0, r0, lsr #9
    orr r0, r0, r12, lsl #23
    bxeq lr
    tst r1, #0x80
    bxeq lr
    ands r1, r1, #0x7f
    andseq r1, r0, #1
    addne r0, r0, #1
    bx lr
@L_020231d4:
    mov r0, r1
    bx lr
@L_020231dc:
    cmp r0, #0
    subsge r3, r3, #1
    add r0, r0, r0
    orr r0, r2, r0, lsr #9
    orr r0, r0, r3, lsl #23
    bx lr
@L_020231f4:
    cmp r3, #0x100
    movge r2, #0x80000000
    movlt r2, #0
    mov r0, #0xff000000
    orr r0, r2, r0, lsr #1
    bx lr
@L_0202320c:
    mvn r0, #0x80000000
    bx lr
@L_02023214:
    mov r0, #0xff000000
    orr r0, r2, r0, lsr #1
    bx lr
@L_02023220:
    mvn r0, #0x80000000
    bx lr
}

asm void func_02023228(void)
{
    mvn r0, #0x80000000
    bx lr
}

asm void func_0202323c(void)
{
    eors r2, r0, r1
    eormi r1, r1, #0x80000000
    bmi @L_02023018
    subs r12, r0, r1
    eorlo r12, r12, #0x80000000
    sublo r0, r0, r12
    addlo r1, r1, r12
    mov r2, #0x80000000
    mov r3, r0, lsr #0x17
    orr r0, r2, r0, lsl #8
    ands r12, r3, #0xff
    cmpne r12, #0xff
    beq @L_02023364
    mov r12, r1, lsr #0x17
    orr r1, r2, r1, lsl #8
    ands r2, r12, #0xff
    beq @L_020233a4
@L_02023280:
    subs r12, r3, r12
    beq @L_020232c8
    rsb r2, r12, #0x20
    movs r2, r1, lsl r2
    mov r1, r1, lsr r12
    orrne r1, r1, #1
    subs r0, r0, r1
    bpl @L_0202330c
    ands r1, r0, #0xff
    add r0, r0, r0
    mov r0, r0, lsr #9
    orr r0, r0, r3, lsl #23
    tst r1, #0x80
    bxeq lr
    ands r1, r1, #0x7f
    andseq r1, r0, #1
    addne r0, r0, #1
    bx lr
@L_020232c8:
    subs r0, r0, r1
    beq @L_02023470
    mov r2, r3, lsl #0x17
    and r2, r2, #0x80000000
    bic r3, r3, #0x100
    clz r12, r0
    movs r0, r0, lsl r12
    sub r3, r3, r12
    cmp r3, #0
    bgt @L_020232fc
    rsb r3, r3, #9
    orr r0, r2, r0, lsr r3
    bx lr
@L_020232fc:
    add r0, r0, r0
    orr r0, r2, r0, lsr #9
    orr r0, r0, r3, lsl #23
    bx lr
@L_0202330c:
    mov r2, r3, lsl #0x17
    and r2, r2, #0x80000000
    bic r3, r3, #0x100
    clz r12, r0
    movs r0, r0, lsl r12
    sub r3, r3, r12
    cmp r3, #0
    bgt @L_02023338
    rsb r3, r3, #9
    orr r0, r2, r0, lsr r3
    bx lr
@L_02023338:
    ands r1, r0, #0xff
    add r0, r0, r0
    orr r0, r2, r0, lsr #9
    orr r0, r0, r3, lsl #23
    bxeq lr
    tst r1, #0x80
    bxeq lr
    ands r1, r1, #0x7f
    andseq r1, r0, #1
    addne r0, r0, #1
    bx lr
@L_02023364:
    cmp r3, #0x100
    movge r2, #0x80000000
    movlt r2, #0
    ands r3, r3, #0xff
    beq @L_020233cc
    movs r0, r0, lsl #1
    bne @L_020234a4
    mov r12, r1, lsr #0x17
    mov r1, r1, lsl #9
    ands r12, r12, #0xff
    beq @L_02023498
    cmp r12, #0xff
    blt @L_02023498
    cmp r1, #0
    beq @L_020234ac
    b @L_020234a4
@L_020233a4:
    cmp r12, #0x100
    movge r2, #0x80000000
    movlt r2, #0
    and r3, r3, #0xff
    ands r12, r12, #0xff
    beq @L_02023434
@L_020233bc:
    eor r2, r2, #0x80000000
    movs r1, r1, lsl #1
    bne @L_020234a4
    b @L_02023498
@L_020233cc:
    movs r0, r0, lsl #1
    beq @L_02023404
    mov r0, r0, lsr #1
    mov r3, #1
    mov r12, r1, lsr #0x17
    mov r1, r1, lsl #8
    ands r12, r12, #0xff
    beq @L_02023434
    cmp r12, #0xff
    beq @L_020233bc
    orr r1, r1, #0x80000000
    orr r3, r3, r2, lsr #23
    orr r12, r12, r2, lsr #23
    b @L_02023280
@L_02023404:
    mov r3, r1, lsr #0x17
    mov r0, r1, lsl #9
    ands r2, r3, #0xff
    beq @L_02023428
    cmp r2, #0xff
    blt @L_02023450
    cmp r0, #0
    bne @L_02023490
    b @L_02023498
@L_02023428:
    cmp r0, #0
    beq @L_02023470
    b @L_02023450
@L_02023434:
    movs r1, r1, lsl #1
    beq @L_02023458
    mov r1, r1, lsr #1
    mov r12, #1
    orr r12, r12, r2, lsr #23
    orr r3, r3, r2, lsr #23
    b @L_02023280
@L_02023450:
    mov r0, r1
    bx lr
@L_02023458:
    cmp r0, #0
    subsge r3, r3, #1
    add r0, r0, r0
    orr r0, r2, r0, lsr #9
    orr r0, r0, r3, lsl #23
    bx lr
@L_02023470:
    mov r0, #0
    bx lr
    cmp r0, #0
    subsge r3, r3, #1
    add r0, r0, r0
    mov r0, r0, lsr #9
    orr r0, r0, r3, lsl #23
    bx lr
@L_02023490:
    mvn r0, #0x80000000
    bx lr
@L_02023498:
    mov r0, #0xff000000
    orr r0, r2, r0, lsr #1
    bx lr
@L_020234a4:
    mvn r0, #0x80000000
    bx lr
@L_020234ac:
    mvn r0, #0x80000000
    bx lr
}

asm void func_020234c0(void)
{
    stmdb sp!, {lr}
    mov r12, #0xff
    ands r3, r12, r0, lsr #23
    cmpne r3, #0xff
    beq @L_02023694
    ands r12, r12, r1, lsr #23
    cmpne r12, #0xff
    beq @L_020236d0
    orr r1, r1, #0x800000
    orr r0, r0, #0x800000
    bic r2, r0, #0xff000000
    bic lr, r1, #0xff000000
@L_020234f0:
    cmp r2, lr
    movlo r2, r2, lsl #1
    sublo r3, r3, #1
    teq r0, r1
    sub r0, pc, #0x94
    ldrb r1, [r0, lr, lsr #15]
    rsb lr, lr, #0
    mov r0, lr, asr #1
    mul r0, r1, r0
    add r0, r0, #0x80000000
    mov r0, r0, lsr #6
    mul r0, r1, r0
    mov r0, r0, lsr #0xe
    mul r1, lr, r0
    sub r12, r3, r12
    mov r1, r1, lsr #0xc
    mul r1, r0, r1
    mov r0, r0, lsl #0xe
    add r0, r0, r1, lsr #15
    umull r1, r0, r2, r0
    mov r3, r0
    orrmi r0, r0, #0x80000000
    adds r12, r12, #0x7e
    bmi @L_02023798
    cmp r12, #0xfe
    bge @L_0202384c
    add r0, r0, r12, lsl #23
    mov r12, r1, lsr #0x1c
    cmp r12, #7
    beq @L_02023674
    add r0, r0, r1, lsr #31
    ldmia sp!, {lr}
    bx lr
    ldc2l p15, c15, [lr, #0x3fc]!
    dcd 0xf9fafbfc
    dcd 0xf5f6f7f8
    dcd 0xf1f2f3f4
    mcr p0, #7, pc, c15, c0, #7
    b @L_01b1e944
    strb lr, [r8, r10, ror #19]!
    strbt lr, [r5], #0x6e6
    mvn lr, r3, ror #5
    cdple p15, #0xd, c13, c15, c0, #7
    blle func_0175a918
    ldmleia r9, {r1, r3, r4, r6, r7, r8, r11, r12, lr, pc} ^
    ldrleb sp, [r6, #0x7d7]
    sbcsle sp, r3, #212, #8
    ldrlesb sp, [r0], #0x12
    stclgt p14, c12, [lr, #0x33c]
    blgt func_013168ec
    stmgtia r9, {r1, r3, r6, r7, r8, r11, lr, pc} ^
    strgtb r12, [r6], r8, asr #15
    bicgt r12, r4, #0x31400000
    bicgt r12, r2, r3, asr #5
    svclt #0xbfc0c0
    ldclt p14, c11, [sp, #0x2f8]!
    blt @L_00f128c8
    ldmltia r9!, {r1, r3, r4, r5, r7, r8, r11, r12, sp, pc}
    dcd 0xb6b7b7b8
    ldrtlt r11, [r5], #0x5b6
    adcslt r11, r3, #180, #6
    ldrhtlt r11, [r1], r2
    svcge #0xafafb0
    stcge p14, c10, [sp, #0x2b8]!
    blge func_00b0e8a8
    stmibge r10!, {r1, r3, r5, r7, r9, r11, sp, pc}
    strge r10, [r8, r9, lsr #17]!
    strtge r10, [r6], r7, lsr #15
    strtge r10, [r4], #0x5a5
    adcge r10, r3, #164, #6
    dcd 0xa1a1a2a2
    svcls #0xa0a0a0
    mrcls p14, #4, r9, c14, c15, #4
    ldcls p13, c9, [sp], {0x9d}
    blls func_0070a490
    ldmibls r10, {r1, r3, r4, r7, r9, r11, r12, pc}
    ldmlsia r8, {r0, r3, r4, r7, r8, r11, r12, pc}
    dcd 0x96979798
    ldrls r9, [r5, #0x696]
    ldrls r9, [r4], #0x495
    addsls r9, r3, #0x4c000002
    dcd 0x91919292
    umullsls r9, r0, r1, r1
    svchi #0x8f8f90
    stchi p14, c8, [lr, #0x238]
    stchi p13, c8, [r12], {0x8d}
    blhi func_00306880
    bhi @L_002c6080
    stmibhi r9, {r1, r3, r7, r8, r11, pc}
    stmhiia r8, {r3, r7, r11, pc}
    strhi r8, [r7], r7, lsl #15
    strhi r8, [r6, #0x686]
    strhi r8, [r5], #0x585
    orrhi r8, r3, #132, #8
    addhi r8, r2, #0xc000002
    orrhi r8, r1, r2, lsl #5
    addhi r8, r0, r1, lsl #3
@L_02023674:
    mov r1, r3, lsl #1
    add r1, r1, #1
    rsb lr, lr, #0
    mul r1, lr, r1
    cmp r1, r2, lsl #24
    addmi r0, r0, #1
    ldmia sp!, {lr}
    bx lr
@L_02023694:
    eor lr, r0, r1
    and lr, lr, #0x80000000
    cmp r3, #0
    beq @L_020236ec
    movs r0, r0, lsl #9
    bne @L_02023834
    mov r12, r1, lsr #0x17
    mov r1, r1, lsl #9
    ands r12, r12, #0xff
    beq @L_02023824
    cmp r12, #0xff
    blt @L_02023824
    cmp r1, #0
    beq @L_02023840
    b @L_0202381c
@L_020236d0:
    eor lr, r0, r1
    and lr, lr, #0x80000000
    cmp r12, #0
    beq @L_02023750
@L_020236e0:
    movs r1, r1, lsl #9
    bne @L_0202381c
    b @L_0202386c
@L_020236ec:
    movs r2, r0, lsl #9
    beq @L_02023720
    clz r3, r2
    movs r2, r2, lsl r3
    rsb r3, r3, #0
    mov r2, r2, lsr #8
    ands r12, r12, r1, lsr #23
    beq @L_02023778
    cmp r12, #0xff
    beq @L_020236e0
    orr r1, r1, #0x800000
    bic lr, r1, #0xff000000
    b @L_020234f0
@L_02023720:
    mov r12, r1, lsr #0x17
    mov r1, r1, lsl #9
    ands r12, r12, #0xff
    beq @L_02023744
    cmp r12, #0xff
    blt @L_0202386c
    cmp r1, #0
    beq @L_0202386c
    b @L_0202381c
@L_02023744:
    cmp r1, #0
    beq @L_02023840
    b @L_0202386c
@L_02023750:
    movs r12, r1, lsl #9
    beq @L_02023824
    mov lr, r12
    clz r12, lr
    movs lr, lr, lsl r12
    rsb r12, r12, #0
    mov lr, lr, lsr #8
    orr r0, r0, #0x800000
    bic r2, r0, #0xff000000
    b @L_020234f0
@L_02023778:
    movs r12, r1, lsl #9
    beq @L_02023824
    mov lr, r12
    clz r12, lr
    movs lr, lr, lsl r12
    rsb r12, r12, #0
    mov lr, lr, lsr #8
    b @L_020234f0
@L_02023798:
    and r0, r0, #0x80000000
    cmn r12, #0x18
    beq @L_0202380c
    bmi @L_02023864
    add r1, r12, #0x17
    mov r2, r2, lsl r1
    rsb r12, r12, #0
    mov r3, r3, lsr r12
    orr r0, r0, r3
    rsb lr, lr, #0
    mul r1, lr, r3
    cmp r1, r2
    ldmeqia sp!, {lr}
    bxeq lr
    add r1, r1, lr
    cmp r1, r2
    beq @L_02023800
    addmi r0, r0, #1
    subpl r1, r1, lr
    add r1, lr, r1, lsl #1
    cmp r1, r2, lsl #1
    and r3, r0, #1
    addmi r0, r0, #1
    addeq r0, r0, r3
    ldmia sp!, {lr}
    bx lr
@L_02023800:
    add r0, r0, #1
    ldmia sp!, {lr}
    bx lr
@L_0202380c:
    cmn r2, lr
    addne r0, r0, #1
    ldmia sp!, {lr}
    bx lr
@L_0202381c:
    mov r0, r1
    b @L_02023834
@L_02023824:
    mov r0, #0xff000000
    orr r0, lr, r0, lsr #1
    ldmia sp!, {lr}
    bx lr
@L_02023834:
    mvn r0, #0x80000000
    ldmia sp!, {lr}
    bx lr
@L_02023840:
    mvn r0, #0x80000000
    ldmia sp!, {lr}
    bx lr
@L_0202384c:
    tst r0, #0x80000000
    mov r0, #0xff000000
    movne r0, r0, asr #1
    moveq r0, r0, lsr #1
    ldmia sp!, {lr}
    bx lr
@L_02023864:
    ldmia sp!, {lr}
    bx lr
@L_0202386c:
    mov r0, lr
    ldmia sp!, {lr}
    bx lr
}

asm void func_02023890(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr lr, =0xffe
    eor r4, r1, r3
    ands r12, lr, r1, lsr #19
    cmpne r12, lr
    beq @L_02023c3c
    bic r1, r1, lr, lsl #20
    orr r1, r1, #0x100000
    add r12, r12, r4, lsr #31
@L_020238b4:
    ands r4, lr, r3, lsr #19
    cmpne r4, lr
    beq @L_02023cd4
    bic r3, r3, lr, lsl #20
    orr r3, r3, #0x100000
@L_020238c8:
    sub r12, r12, r4
    cmp r1, r3
    cmpeq r0, r2
    bhs @L_020238e4
    adds r0, r0, r0
    adc r1, r1, r1
    sub r12, r12, #2
@L_020238e4:
    sub r4, pc, #0x24
    ldrb lr, [r4, r3, lsr #12]
    rsbs r2, r2, #0
    rsc r3, r3, #0
    mov r4, #0x20000000
    mla r5, lr, r3, r4
    mov r6, r3, lsl #0xa
    mov r5, r5, lsr #7
    mul lr, r5, lr
    orr r6, r6, r2, lsr #22
    mov lr, lr, lsr #0xd
    mul r5, lr, r6
    mov r6, r1, lsl #0xa
    orr r6, r6, r0, lsr #22
    mov r5, r5, lsr #0x10
    mul r5, lr, r5
    mov lr, lr, lsl #0xe
    add lr, lr, r5, lsr #16
    umull r5, r6, lr, r6
    umull r4, r5, r6, r2
    mla r5, r3, r6, r5
    mov r4, r4, lsr #0x1a
    orr r4, r4, r5, lsl #6
    add r4, r4, r0, lsl #2
    umull lr, r5, r4, lr
    mov r4, #0
    adds r5, r5, r6, lsl #24
    adc r4, r4, r6, lsr #8
    cmp r12, #0x800
    bge @L_02023ac8
    add r12, r12, #0x7f0
    adds r12, r12, #0xc
    bmi @L_02023ae0
    orr r1, r4, r12, lsl #31
    bic r12, r12, #1
    add r1, r1, r12, lsl #19
    tst lr, #0x80000000
    bne @L_020239b8
    rsbs r2, r2, #0
    mov r4, r4, lsl #1
    add r4, r4, r5, lsr #31
    mul lr, r2, r4
    mov r6, #0
    mov r4, r5, lsl #1
    orr r4, r4, #1
    umlal r6, lr, r4, r2
    rsc r3, r3, #0
    mla lr, r4, r3, lr
    cmp lr, r0, lsl #21
    bmi @L_020239b8
    mov r0, r5
    ldmia sp!, {r4, r5, r6, lr}
    bx lr
@L_020239b8:
    adds r0, r5, #1
    adc r1, r1, #0
    ldmia sp!, {r4, r5, r6, lr}
    bx lr
    ldc2l p15, c15, [lr, #0x3fc]!
    dcd 0xf9fafbfc
    dcd 0xf5f6f7f8
    dcd 0xf1f2f3f4
    mcr p0, #7, pc, c15, c0, #7
    b @L_01b1ed98
    strb lr, [r8, r10, ror #19]!
    strbt lr, [r5], #0x6e6
    mvn lr, r3, ror #5
    cdple p15, #0xd, c13, c15, c0, #7
    blle func_0175ad6c
    ldmleia r9, {r1, r3, r4, r6, r7, r8, r11, r12, lr, pc} ^
    ldrleb sp, [r6, #0x7d7]
    sbcsle sp, r3, #212, #8
    ldrlesb sp, [r0], #0x12
    stclgt p14, c12, [lr, #0x33c]
    blgt func_01316d40
    stmgtia r9, {r1, r3, r6, r7, r8, r11, lr, pc} ^
    strgtb r12, [r6], r8, asr #15
    bicgt r12, r4, #0x31400000
    bicgt r12, r2, r3, asr #5
    svclt #0xbfc0c0
    ldclt p14, c11, [sp, #0x2f8]!
    blt @L_00f12d1c
    ldmltia r9!, {r1, r3, r4, r5, r7, r8, r11, r12, sp, pc}
    dcd 0xb6b7b7b8
    ldrtlt r11, [r5], #0x5b6
    adcslt r11, r3, #180, #6
    ldrhtlt r11, [r1], r2
    svcge #0xafafb0
    stcge p14, c10, [sp, #0x2b8]!
    blge func_00b0ecfc
    stmibge r10!, {r1, r3, r5, r7, r9, r11, sp, pc}
    strge r10, [r8, r9, lsr #17]!
    strtge r10, [r6], r7, lsr #15
    strtge r10, [r4], #0x5a5
    adcge r10, r3, #164, #6
    dcd 0xa1a1a2a2
    svcls #0xa0a0a0
    mrcls p14, #4, r9, c14, c15, #4
    ldcls p13, c9, [sp], {0x9d}
    blls func_0070a8e4
    ldmibls r10, {r1, r3, r4, r7, r9, r11, r12, pc}
    ldmlsia r8, {r0, r3, r4, r7, r8, r11, r12, pc}
    dcd 0x96979798
    ldrls r9, [r5, #0x696]
    ldrls r9, [r4], #0x495
    addsls r9, r3, #0x4c000002
    dcd 0x91919292
    umullsls r9, r0, r1, r1
    svchi #0x8f8f90
    stchi p14, c8, [lr, #0x238]
    stchi p13, c8, [r12], {0x8d}
    blhi func_00306cd4
    bhi @L_002c64d4
    stmibhi r9, {r1, r3, r7, r8, r11, pc}
    stmhiia r8, {r3, r7, r11, pc}
    strhi r8, [r7], r7, lsl #15
    strhi r8, [r6, #0x686]
    strhi r8, [r5], #0x585
    orrhi r8, r3, #132, #8
    addhi r8, r2, #0xc000002
    orrhi r8, r1, r2, lsl #5
    addhi r8, r0, r1, lsl #3
@L_02023ac8:
    movs r1, r12, lsl #0x1f
    orr r1, r1, #0x7f000000
    orr r1, r1, #0xf00000
    mov r0, #0
    ldmia sp!, {r4, r5, r6, lr}
    bx lr
@L_02023ae0:
    mvn r6, r12, asr #1
    cmp r6, #0x34
    bgt @L_02023c2c
    beq @L_02023c08
    cmp r6, #0x14
    bge @L_02023b28
    rsb r6, r6, #0x13
    mov lr, r0, lsl r6
    rsb r6, r6, #0x14
    mov r0, r5, lsr r6
    rsb r6, r6, #0x20
    orr r0, r0, r4, lsl r6
    rsb r6, r6, #0x20
    mov r4, r4, lsr r6
    orr r1, r4, r12, lsl #31
    mov r12, lr
    mov lr, #0
    b @L_02023b58
@L_02023b28:
    rsb r6, r6, #0x33
    mov lr, r1, lsl r6
    mov r1, r12, lsl #0x1f
    rsb r6, r6, #0x20
    orr r12, lr, r0, lsr r6
    rsb r6, r6, #0x20
    mov lr, r0, lsl r6
    mov r5, r5, lsr #0x15
    orr r5, r5, r4, lsl #11
    rsb r6, r6, #0x1f
    mov r0, r5, lsr r6
    mov r4, #0
@L_02023b58:
    rsbs r2, r2, #0
    mul r4, r2, r4
    mov r5, #0
    umlal r5, r4, r2, r0
    rsc r3, r3, #0
    mla r4, r0, r3, r4
    cmp r4, r12
    cmpeq r5, lr
    ldmeqia sp!, {r4, r5, r6, lr}
    bxeq lr
    adds r5, r5, r2
    adc r4, r4, r3
    cmp r4, r12
    bmi @L_02023bfc
    bne @L_02023ba0
    cmp r5, lr
    beq @L_02023bec
    blo @L_02023bfc
@L_02023ba0:
    subs r5, r5, r2
    sbc r4, r4, r3
@L_02023ba8:
    adds r5, r5, r5
    adc r4, r4, r4
    adds r5, r5, r2
    adc r4, r4, r3
    adds lr, lr, lr
    adc r12, r12, r12
    cmp r4, r12
    bmi @L_02023bec
    ldmneia sp!, {r4, r5, r6, lr}
    bxne lr
    cmp r5, lr
    blo @L_02023bec
    ldmneia sp!, {r4, r5, r6, lr}
    bxne lr
    tst r0, #1
    ldmeqia sp!, {r4, r5, r6, lr}
    bxeq lr
@L_02023bec:
    adds r0, r0, #1
    adc r1, r1, #0
    ldmia sp!, {r4, r5, r6, lr}
    bx lr
@L_02023bfc:
    adds r0, r0, #1
    adc r1, r1, #0
    b @L_02023ba8
@L_02023c08:
    rsbs r2, r2, #0
    rsc r3, r3, #0
    cmp r1, r3
    cmpeq r0, r2
    mov r1, r12, lsl #0x1f
    mov r0, #0
    movne r0, #1
    ldmia sp!, {r4, r5, r6, lr}
    bx lr
@L_02023c2c:
    mov r1, r12, lsl #0x1f
    mov r0, #0
    ldmia sp!, {r4, r5, r6, lr}
    bx lr
@L_02023c3c:
    orrs r5, r0, r1, lsl #1
    beq @L_02023d60
    cmp r12, lr
    beq @L_02023ca4
    movs r1, r1, lsl #0xc
    beq @L_02023c80
    clz r5, r1
    movs r1, r1, lsl r5
    sub r12, r12, r5
    add r5, r12, #0x1f
    mov r1, r1, lsr #0xb
    orr r1, r1, r0, lsr r5
    rsb r5, r5, #0x20
    mov r0, r0, lsl r5
    mov r12, r12, lsl #1
    orr r12, r12, r4, lsr #31
    b @L_020238b4
@L_02023c80:
    mvn r12, #0x13
    clz r5, r0
    movs r0, r0, lsl r5
    sub r12, r12, r5
    mov r1, r0, lsr #0xb
    mov r0, r0, lsl #0x15
    mov r12, r12, lsl #1
    orr r12, r12, r4, lsr #31
    b @L_020238b4
@L_02023ca4:
    orrs r5, r0, r1, lsl #12
    bne @L_02023d88
    bic r5, r3, #0x80000000
    cmp r5, lr, lsl #19
    bhs @L_02023cc8
    and r5, r3, #0x80000000
    eor r1, r5, r1
    ldmia sp!, {r4, r5, r6, lr}
    bx lr
@L_02023cc8:
    orrs r5, r2, r3, lsl #12
    bne @L_02023da8
    b @L_02023dc0
@L_02023cd4:
    orrs r5, r2, r3, lsl #1
    beq @L_02023d4c
    cmp r4, lr
    beq @L_02023d34
    movs r3, r3, lsl #0xc
    beq @L_02023d14
    clz r5, r3
    movs r3, r3, lsl r5
    sub r4, r4, r5
    add r5, r4, #0x1f
    mov r3, r3, lsr #0xb
    orr r3, r3, r2, lsr r5
    rsb r5, r5, #0x20
    mov r2, r2, lsl r5
    mov r4, r4, lsl #1
    b @L_020238c8
@L_02023d14:
    mvn r4, #0x13
    clz r5, r2
    movs r2, r2, lsl r5
    sub r4, r4, r5
    mov r3, r2, lsr #0xb
    mov r2, r2, lsl #0x15
    mov r4, r4, lsl #1
    b @L_020238c8
@L_02023d34:
    orrs r5, r2, r3, lsl #12
    bne @L_02023da8
    mov r1, r12, lsl #0x1f
    mov r0, #0
    ldmia sp!, {r4, r5, r6, lr}
    bx lr
@L_02023d4c:
    mov r1, r12, lsl #0x1f
    orr r1, r1, lr, lsl #19
    mov r0, #0
    ldmia sp!, {r4, r5, r6, lr}
    bx lr
@L_02023d60:
    orrs r5, r2, r3, lsl #1
    beq @L_02023dc0
    bic r5, r3, #0x80000000
    cmp r5, lr, lsl #19
    cmpeq r2, #0
    bhi @L_02023da8
    eor r1, r1, r3
    and r1, r1, #0x80000000
    ldmia sp!, {r4, r5, r6, lr}
    bx lr
@L_02023d88:
    tst r1, #0x80000
    beq @L_02023dc0
    bic r5, r3, #0x80000000
    cmp r5, lr, lsl #19
    cmpeq r2, #0
    bhi @L_02023da8
    ldmia sp!, {r4, r5, r6, lr}
    bx lr
@L_02023da8:
    tst r3, #0x80000
    beq @L_02023dc0
    mov r1, r3
    mov r0, r2
    ldmia sp!, {r4, r5, r6, lr}
    bx lr
@L_02023dc0:
    orr r1, r1, #0x7f000000
    orr r1, r1, #0xf80000
    ldmia sp!, {r4, r5, r6, lr}
    bx lr
}

asm void func_02023dd4(void)
{
    bx lr
}

asm void func_02023dd8(void)
{
    ldr r12, =func_02023df4
    bx r12
}

asm void func_02023de4(void)
{
    bx lr
}

asm void func_02023de8(void)
{
    bx lr
}

asm void func_02023dec(void)
{
    mov r0, #0
    bx lr
}

asm void func_02023df4(void)
{
    bx lr
}

asm void func_02023df8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r2
    ldr r5, [r6]
    mov r7, r1
    cmp r5, #0
    mov r4, #0
    bls @L_02023e40
@L_02023e14:
    bl func_02023dec
    and r1, r0, #0xff
    cmp r1, #0xd
    strb r0, [r7, r4]
    cmpne r1, #0xa
    addeq r0, r4, #1
    streq r0, [r6]
    beq @L_02023e40
    add r4, r4, #1
    cmp r4, r5
    blo @L_02023e14
@L_02023e40:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_02023e48(void)
{
    stmdb sp!, {r3, lr}
    ldr r0, [r2]
    cmp r0, #1
    bls @L_02023e7c
    add r3, r1, r0
    ldrb r2, [r3, #-1]
    mov r0, r1
    mov r1, #0
    strb r2, [sp]
    strb r1, [r3, #-1]
    bl func_02023de8
    add r0, sp, #0
    b @L_02023e80
@L_02023e7c:
    mov r0, r1
@L_02023e80:
    bl func_02023de4
    mov r0, #0
    ldmia sp!, {r3, pc}
}

asm void func_02023e8c(void)
{
    mov r0, #0
    bx lr
}

asm void func_02023e94(void)
{
    stmdb sp!, {r4, lr}
    ldrsb r2, [r0]
    tst r2, #1
    moveq r2, r2, asr #1
    streq r2, [r1]
    addeq r0, r0, #1
    ldmeqia sp!, {r4, pc}
    ldrb r4, [r0, #1]
    tst r2, #2
    moveq r2, r2, asr #2
    orreq r2, r4, r2, lsl #8
    streq r2, [r1]
    addeq r0, r0, #2
    ldmeqia sp!, {r4, pc}
    tst r2, #4
    ldrb lr, [r0, #2]
    bne @L_02023ef4
    mov r3, r2, asr #3
    mov r2, r4, lsl #8
    orr r2, r2, r3, lsl #16
    orr r2, lr, r2
    str r2, [r1]
    add r0, r0, #3
    ldmia sp!, {r4, pc}
@L_02023ef4:
    ldrb r12, [r0, #3]
    mov r3, r2, asr #3
    mov r2, r4, lsl #0x10
    orr r2, r2, r3, lsl #24
    orr r2, r2, lr, lsl #8
    orr r2, r12, r2
    str r2, [r1]
    add r0, r0, #4
    ldmia sp!, {r4, pc}
}

asm void func_02023f18(void)
{
    stmdb sp!, {r4, lr}
    ldrb r2, [r0]
    tst r2, #1
    moveq r2, r2, lsr #1
    streq r2, [r1]
    addeq r0, r0, #1
    ldmeqia sp!, {r4, pc}
    ldrb r4, [r0, #1]
    tst r2, #2
    moveq r2, r2, lsr #2
    orreq r2, r4, r2, lsl #8
    streq r2, [r1]
    addeq r0, r0, #2
    ldmeqia sp!, {r4, pc}
    tst r2, #4
    ldrb lr, [r0, #2]
    bne @L_02023f78
    mov r3, r2, lsr #3
    mov r2, r4, lsl #8
    orr r2, r2, r3, lsl #16
    orr r2, lr, r2
    str r2, [r1]
    add r0, r0, #3
    ldmia sp!, {r4, pc}
@L_02023f78:
    ldrb r12, [r0, #3]
    mov r3, r2, lsr #3
    mov r2, r4, lsl #0x10
    orr r2, r2, r3, lsl #24
    orr r2, r2, lr, lsl #8
    orr r2, r12, r2
    str r2, [r1]
    add r0, r0, #4
    ldmia sp!, {r4, pc}
}

asm void func_02023f9c(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    subs r6, r1, #1
    mov r5, #0
    bmi @L_02023ff8
    mov r1, #0xc
@L_02023fb0:
    add r3, r5, r6
    mov r4, r3, asr #1
    mul r3, r4, r1
    ldr r12, [r0, r3]
    add lr, r0, r3
    cmp r2, r12
    sublo r6, r4, #1
    blo @L_02023ff0
    ldr r3, [lr, #4]
    bic r3, r3, #1
    add r3, r12, r3
    cmp r2, r3
    addhi r5, r4, #1
    bhi @L_02023ff0
    mov r0, lr
    ldmia sp!, {r4, r5, r6, pc}
@L_02023ff0:
    cmp r5, r6
    ble @L_02023fb0
@L_02023ff8:
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_02024000(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0xc
    mov r4, r0
    mov r9, r1
    mov r2, #0
    mov r0, r9
    mov r1, r4
    str r2, [r9, #4]
    str r2, [r9, #8]
    bl __FindExceptionTable
    cmp r0, #0
    addeq sp, sp, #0xc
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, pc}
    ldr r0, [r9, #0xc]
    ldr r1, [r9, #0x10]
    ldr r3, =0x2aaaaaab
    sub r5, r1, r0
    smull r2, r1, r3, r5
    mov r3, r5, lsr #0x1f
    mov r2, r4
    add r1, r3, r1, asr #1
    bl func_02023f9c
    cmp r0, #0
    addeq sp, sp, #0xc
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, pc}
    ldr r1, [r0, #4]
    tst r1, #1
    addne r1, r0, #8
    ldreq r1, [r0, #8]
    str r1, [r9, #4]
    ldr r1, [r0]
    str r1, [r9]
    ldr r1, [r0]
    ldr r0, [r9, #4]
    sub r7, r4, r1
    bl func_02025ab8
    mov r8, #0
    add r5, sp, #4
    add r4, sp, #0
    add r6, sp, #8
@L_020240a0:
    mov r1, r6
    bl func_02023f18
    ldr r1, [sp, #8]
    cmp r1, #0
    addeq sp, sp, #0xc
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, pc}
    mov r1, r5
    bl func_02023f18
    mov r1, r4
    bl func_02023f18
    ldr r1, [sp, #8]
    add r2, r8, r1
    cmp r7, r2
    addlo sp, sp, #0xc
    ldmloia sp!, {r4, r5, r6, r7, r8, r9, pc}
    ldr r1, [sp, #4]
    add r8, r2, r1
    cmp r7, r8
    bhi @L_020240a0
    ldr r1, [r9, #4]
    ldr r0, [sp]
    add r0, r1, r0
    str r0, [r9, #8]
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
}

asm void func_02024108(void)
{
    ldr r0, [r0, #8]
    cmp r0, #0
    ldrneb r0, [r0]
    andne r0, r0, #0x1f
    moveq r0, #0
    and r0, r0, #0xff
    bx lr
}

asm void func_02024124(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0xa0
    mov r4, r0
@L_02024130:
    ldr r2, [r4, #8]
    cmp r2, #0
    beq @L_02024148
    ldrb r0, [r2]
    tst r0, #0x80
    beq @L_0202418c
@L_02024148:
    mov r1, r4
    add r0, r4, #0x18
    bl func_0202599c
    mov r1, r4
    bl func_02024000
    ldr r0, [r4, #4]
    cmp r0, #0
    addeq sp, sp, #0xa0
    moveq r0, #0xff
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r1, r4
    add r0, r4, #0x18
    bl func_020259f8
    ldr r0, [r4, #8]
    cmp r0, #0
    beq @L_02024130
    b @L_02024390
@L_0202418c:
    and r0, r0, #0x1f
    cmp r0, #0x13
    addls pc, pc, r0, lsl #2
    b @L_02024384
    b @L_02024384
    b @L_02024384
    b @L_020241ec
    b @L_02024200
    b @L_02024214
    b @L_0202421c
    b @L_0202423c
    b @L_02024250
    b @L_02024264
    b @L_02024280
    b @L_020242a4
    b @L_020242ac
    b @L_020242c0
    b @L_020242d8
    b @L_02024384
    b @L_020242ec
    b @L_02024314
    b @L_02024334
    b @L_0202435c
    b @L_0202437c
@L_020241ec:
    add r1, sp, #0x9c
@L_020241f0:
    add r0, r2, #1
@L_020241f4:
    bl func_02023e94
@L_020241f8:
    add r0, r0, #4
    b @L_020242e4
@L_02024200:
    add r1, sp, #0x94
    add r0, r2, #1
    bl func_02023e94
    add r1, sp, #0x98
    b @L_020241f4
@L_02024214:
    add r1, sp, #0x90
    b @L_020241f0
@L_0202421c:
    add r1, sp, #0x84
    add r0, r2, #1
    bl func_02023e94
    add r1, sp, #0x88
    bl func_02023f18
    add r1, sp, #0x8c
@L_02024234:
    bl func_02023f18
    b @L_020241f8
@L_0202423c:
    add r1, sp, #0x7c
    add r0, r2, #1
    bl func_02023e94
    add r1, sp, #0x80
    b @L_020241f4
@L_02024250:
    add r1, sp, #0x74
    add r0, r2, #1
    bl func_02023e94
    add r1, sp, #0x78
    b @L_020241f4
@L_02024264:
    add r1, sp, #0x68
    add r0, r2, #1
    bl func_02023e94
    add r1, sp, #0x6c
    bl func_02023e94
    add r1, sp, #0x70
    b @L_020241f4
@L_02024280:
    add r1, sp, #0x58
    add r0, r2, #1
    bl func_02023e94
    add r1, sp, #0x5c
    bl func_02023e94
    add r1, sp, #0x60
    bl func_02023f18
    add r1, sp, #0x64
    b @L_02024234
@L_020242a4:
    add r1, sp, #0x54
    b @L_020241f0
@L_020242ac:
    add r1, sp, #0x4c
    add r0, r2, #1
    bl func_02023e94
    add r1, sp, #0x50
    b @L_020241f4
@L_020242c0:
    add r1, sp, #0x44
    add r0, r2, #5
    bl func_02023f18
    add r1, sp, #0x48
    bl func_02023e94
@L_020242d4:
    b @L_020242e4
@L_020242d8:
    add r1, sp, #0x40
@L_020242dc:
    add r0, r2, #1
    bl func_02023e94
@L_020242e4:
    str r0, [r4, #8]
    b @L_02024390
@L_020242ec:
    add r1, sp, #0x34
    add r0, r2, #1
    bl func_02023f18
    add r1, sp, #0x38
    bl func_02023f18
    add r1, sp, #0x3c
    bl func_02023e94
    ldr r1, [sp, #0x34]
    add r0, r0, r1, lsl #2
    b @L_020242d4
@L_02024314:
    add r1, sp, #0x24
    add r0, r2, #1
    bl func_02023e94
    add r1, sp, #0x28
    bl func_02023e94
    add r1, sp, #0x2c
    add r0, r0, #4
    b @L_020241f4
@L_02024334:
    add r1, sp, #0x14
    add r0, r2, #1
    bl func_02023e94
    add r1, sp, #0x1c
    bl func_02023e94
    add r1, sp, #0x18
    add r0, r0, #1
    bl func_02023e94
    add r1, sp, #0x20
    b @L_020241f4
@L_0202435c:
    add r1, sp, #8
    add r0, r2, #1
    bl func_02023e94
    add r1, sp, #0xc
    add r0, r0, #1
    bl func_02023e94
    add r1, sp, #0x10
    b @L_02024234
@L_0202437c:
    add r1, sp, #4
    b @L_020242dc
@L_02024384:
    add sp, sp, #0xa0
    mov r0, #0xff
    ldmia sp!, {r3, r4, r5, pc}
@L_02024390:
    ldr r2, [r4, #8]
    ldrb r0, [r2]
    and r0, r0, #0x1f
    cmp r0, #1
    addne sp, sp, #0xa0
    ldmneia sp!, {r3, r4, r5, pc}
    add r5, sp, #0
@L_020243ac:
    mov r1, r5
    add r0, r2, #1
    bl func_02023e94
    ldr r1, [r4, #8]
    ldr r0, [sp]
    add r2, r1, r0
    str r2, [r4, #8]
    ldrb r0, [r1, r0]
    and r0, r0, #0x1f
    cmp r0, #1
    beq @L_020243ac
    add sp, sp, #0xa0
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_020243e0(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xa4
    mov r9, r0
    mov r8, r1
    str r2, [sp]
@L_020243f4:
    ldr r2, [r8, #8]
    cmp r2, #0
    bne @L_0202443c
    mov r0, r9
    mov r1, r8
    bl func_0202599c
    mov r1, r8
    bl func_02024000
    ldr r0, [r8, #4]
    cmp r0, #0
    bne @L_02024424
    bl _ZSt9terminatev
@L_02024424:
    mov r0, r9
    mov r1, r8
    bl func_020259f8
    ldr r2, [r8, #8]
    cmp r2, #0
    beq @L_020243f4
@L_0202443c:
    ldrb r7, [r2]
    and r0, r7, #0x1f
    cmp r0, #0x13
    addls pc, pc, r0, lsl #2
    b @L_02024bf8
    b @L_02024bf8
    b @L_020244a0
    b @L_020244c0
    b @L_02024508
    b @L_02024584
    b @L_020245dc
    b @L_02024660
    b @L_020246c8
    b @L_02024730
    b @L_020247d4
    b @L_0202487c
    b @L_020248d0
    b @L_02024954
    b @L_0202497c
    b @L_02024bf8
    b @L_020249c4
    b @L_020249fc
    b @L_02024a90
    b @L_02024b30
    b @L_02024be8
@L_020244a0:
    add r1, sp, #0xa0
    add r0, r2, #1
    bl func_02023e94
    ldr r1, [r8, #8]
    ldr r0, [sp, #0xa0]
    add r0, r1, r0
@L_020244b8:
    str r0, [r8, #8]
    b @L_02024bfc
@L_020244c0:
    add r1, sp, #0x9c
    add r0, r2, #1
    bl func_02023e94
    mov r4, r0
    ldrb r1, [r4]
    ldrb r0, [r4, #1]
    ldrb r2, [r4, #2]
    ldrb r3, [r4, #3]
    orr r0, r1, r0, lsl #8
    orr r0, r0, r2, lsl #16
    ldr r5, [r9, #0x18]
    ldr r1, [sp, #0x9c]
    orr r2, r0, r3, lsl #24
    add r0, r5, r1
    mvn r1, #0
    blx r2
    add r0, r4, #4
    b @L_020244b8
@L_02024508:
    add r1, sp, #0x94
    add r0, r2, #1
    and r4, r7, #0x40
    bl func_02023e94
    add r1, sp, #0x98
    bl func_02023e94
    cmp r4, #0
    ldrb r2, [r0]
    ldrb r1, [r0, #1]
    ldrb r3, [r0, #2]
    ldrb r5, [r0, #3]
    add r4, r0, #4
    ldrne r0, [sp, #0x94]
    orr r1, r2, r1, lsl #8
    addne r0, r9, r0, lsl #2
    ldrne r0, [r0, #0x1c]
    orr r1, r1, r3, lsl #16
    andne r0, r0, #0xff
    orr r2, r1, r5, lsl #24
    ldreq r1, [r9, #0x18]
    ldreq r0, [sp, #0x94]
    ldreqb r0, [r1, r0]
    cmp r0, #0
    beq @L_0202457c
    ldr r3, [r9, #0x18]
    ldr r0, [sp, #0x98]
    mvn r1, #0
    add r0, r3, r0
    blx r2
@L_0202457c:
    str r4, [r8, #8]
    b @L_02024bfc
@L_02024584:
    add r1, sp, #0x90
    add r0, r2, #1
    and r4, r7, #0x20
    bl func_02023e94
    cmp r4, #0
    ldrb r2, [r0]
    ldrb r1, [r0, #1]
    ldrb r3, [r0, #2]
    ldrb r5, [r0, #3]
    add r4, r0, #4
    ldrne r0, [sp, #0x90]
    orr r1, r2, r1, lsl #8
    addne r0, r9, r0, lsl #2
    ldrne r0, [r0, #0x1c]
    orr r1, r1, r3, lsl #16
    orr r2, r1, r5, lsl #24
    ldreq r1, [r9, #0x18]
    ldreq r0, [sp, #0x90]
    ldreq r0, [r1, r0]
    mvn r1, #0
    blx r2
    b @L_0202457c
@L_020245dc:
    add r1, sp, #0x84
    add r0, r2, #1
    bl func_02023e94
    add r1, sp, #0x88
    bl func_02023f18
    add r1, sp, #0x8c
    bl func_02023f18
    ldr r3, [r9, #0x18]
    ldr r2, [sp, #0x84]
    ldr r6, [sp, #0x88]
    ldrb r5, [r0]
    ldrb r4, [r0, #1]
    ldr r1, [sp, #0x8c]
    add r2, r3, r2
    ldrb r10, [r0, #2]
    orr r3, r5, r4, lsl #8
    mla r4, r6, r1, r2
    ldrb r2, [r0, #3]
    orr r1, r3, r10, lsl #16
    cmp r6, #0
    orr r5, r1, r2, lsl #24
    add r11, r0, #4
    beq @L_02024658
    mvn r10, #0
@L_0202463c:
    ldr r0, [sp, #0x8c]
    mov r1, r10
    sub r4, r4, r0
    mov r0, r4
    blx r5
    subs r6, r6, #1
    bne @L_0202463c
@L_02024658:
    str r11, [r8, #8]
    b @L_02024bfc
@L_02024660:
    add r1, sp, #0x7c
    add r0, r2, #1
    and r4, r7, #0x20
    bl func_02023e94
    add r1, sp, #0x80
    bl func_02023e94
    ldrb r2, [r0]
    ldrb r1, [r0, #1]
    cmp r4, #0
    ldrb r3, [r0, #2]
    orr r1, r2, r1, lsl #8
    ldrb r5, [r0, #3]
    add r4, r0, #4
    ldrne r0, [sp, #0x7c]
    orr r1, r1, r3, lsl #16
    addne r0, r9, r0, lsl #2
    orr r2, r1, r5, lsl #24
    ldrne r3, [r0, #0x1c]
    ldreq r1, [r9, #0x18]
    ldreq r0, [sp, #0x7c]
    ldreq r3, [r1, r0]
    ldr r0, [sp, #0x80]
    mov r1, #0
    add r0, r3, r0
    blx r2
    b @L_0202457c
@L_020246c8:
    add r1, sp, #0x74
    add r0, r2, #1
    and r4, r7, #0x20
    bl func_02023e94
    add r1, sp, #0x78
    bl func_02023e94
    ldrb r2, [r0]
    ldrb r1, [r0, #1]
    cmp r4, #0
    ldrb r3, [r0, #2]
    orr r1, r2, r1, lsl #8
    ldrb r5, [r0, #3]
    add r4, r0, #4
    ldrne r0, [sp, #0x74]
    orr r1, r1, r3, lsl #16
    addne r0, r9, r0, lsl #2
    orr r2, r1, r5, lsl #24
    ldrne r3, [r0, #0x1c]
    ldreq r1, [r9, #0x18]
    ldreq r0, [sp, #0x74]
    ldreq r3, [r1, r0]
    ldr r0, [sp, #0x78]
    mvn r1, #0
    add r0, r3, r0
    blx r2
    b @L_0202457c
@L_02024730:
    add r1, sp, #0x68
    add r0, r2, #1
    and r4, r7, #0x20
    bl func_02023e94
    add r1, sp, #0x6c
    bl func_02023e94
    add r1, sp, #0x70
    bl func_02023e94
    ldrb r2, [r0]
    ldrb r1, [r0, #1]
    ldrb r3, [r0, #2]
    ldrb r5, [r0, #3]
    orr r1, r2, r1, lsl #8
    orr r1, r1, r3, lsl #16
    orr r2, r1, r5, lsl #24
    tst r7, #0x40
    add r5, r0, #4
    ldreq r1, [r9, #0x18]
    ldreq r0, [sp, #0x68]
    ldreqsh r0, [r1, r0]
    beq @L_02024798
    ldr r0, [sp, #0x68]
    add r0, r9, r0, lsl #2
    ldr r0, [r0, #0x1c]
    mov r0, r0, lsl #0x10
    mov r0, r0, asr #0x10
@L_02024798:
    cmp r0, #0
    beq @L_020247cc
    cmp r4, #0
    ldrne r0, [sp, #0x6c]
    ldreq r1, [r9, #0x18]
    addne r0, r9, r0, lsl #2
    ldrne r3, [r0, #0x1c]
    ldreq r0, [sp, #0x6c]
    ldreq r3, [r1, r0]
    ldr r0, [sp, #0x70]
    mvn r1, #0
    add r0, r3, r0
    blx r2
@L_020247cc:
    str r5, [r8, #8]
    b @L_02024bfc
@L_020247d4:
    add r1, sp, #0x58
    add r0, r2, #1
    and r4, r7, #0x20
    bl func_02023e94
    add r1, sp, #0x5c
    bl func_02023e94
    add r1, sp, #0x60
    bl func_02023f18
    add r1, sp, #0x64
    bl func_02023f18
    ldrb r2, [r0]
    ldrb r1, [r0, #1]
    ldrb r3, [r0, #2]
    ldrb r5, [r0, #3]
    orr r1, r2, r1, lsl #8
    orr r1, r1, r3, lsl #16
    cmp r4, #0
    orr r5, r1, r5, lsl #24
    ldrne r1, [sp, #0x58]
    add r11, r0, #4
    addne r1, r9, r1, lsl #2
    ldrne r1, [r1, #0x1c]
    ldrne r0, [sp, #0x5c]
    ldreq r2, [r9, #0x18]
    ldreq r1, [sp, #0x58]
    ldreq r0, [sp, #0x5c]
    ldreq r1, [r2, r1]
    ldr r6, [sp, #0x60]
    add r4, r1, r0
    ldr r0, [sp, #0x64]
    cmp r6, #0
    mla r4, r6, r0, r4
    beq @L_02024878
    mvn r10, #0
@L_0202485c:
    ldr r0, [sp, #0x64]
    mov r1, r10
    sub r4, r4, r0
    mov r0, r4
    blx r5
    subs r6, r6, #1
    bne @L_0202485c
@L_02024878:
    b @L_02024658
@L_0202487c:
    add r1, sp, #0x54
    add r0, r2, #1
    and r4, r7, #0x20
    bl func_02023e94
    cmp r4, #0
    ldrb r2, [r0]
    ldrb r1, [r0, #1]
    ldrb r3, [r0, #2]
    ldrb r5, [r0, #3]
    add r4, r0, #4
    ldrne r0, [sp, #0x54]
    orr r1, r2, r1, lsl #8
    addne r0, r9, r0, lsl #2
    ldrne r0, [r0, #0x1c]
    orr r1, r1, r3, lsl #16
    orr r2, r1, r5, lsl #24
    ldreq r1, [r9, #0x18]
    ldreq r0, [sp, #0x54]
    ldreq r0, [r1, r0]
    blx r2
    b @L_0202457c
@L_020248d0:
    add r1, sp, #0x4c
    add r0, r2, #1
    and r4, r7, #0x20
    bl func_02023e94
    add r1, sp, #0x50
    bl func_02023e94
    ldrb r2, [r0]
    ldrb r1, [r0, #1]
    ldrb r3, [r0, #2]
    ldrb r5, [r0, #3]
    orr r1, r2, r1, lsl #8
    orr r1, r1, r3, lsl #16
    tst r7, #0x40
    orr r1, r1, r5, lsl #24
    add r5, r0, #4
    ldrne r0, [sp, #0x4c]
    ldreq r2, [r9, #0x18]
    addne r0, r9, r0, lsl #2
    ldrne r0, [r0, #0x1c]
    andne r0, r0, #0xff
    ldreq r0, [sp, #0x4c]
    ldreqb r0, [r2, r0]
    cmp r0, #0
    beq @L_02024950
    cmp r4, #0
    ldrne r0, [sp, #0x50]
    ldreq r2, [r9, #0x18]
    addne r0, r9, r0, lsl #2
    ldrne r0, [r0, #0x1c]
    ldreq r0, [sp, #0x50]
    ldreq r0, [r2, r0]
    blx r1
@L_02024950:
    b @L_020247cc
@L_02024954:
    ldr r0, [sp]
    cmp r0, r2
    addeq sp, sp, #0xa4
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r1, sp, #0x44
    add r0, r2, #5
    bl func_02023f18
    add r1, sp, #0x48
    bl func_02023e94
    b @L_020244b8
@L_0202497c:
    add r1, sp, #0x40
    add r0, r2, #1
    bl func_02023e94
    ldr r2, [r9, #0x18]
    ldr r1, [sp, #0x40]
    mov r4, r0
    add r0, r2, r1
    ldr r2, [r0, #8]
    cmp r2, #0
    beq @L_020249c0
    ldr r0, [r0]
    ldr r1, [r9, #4]
    cmp r1, r0
    streq r2, [r9, #8]
    beq @L_020249c0
    mvn r1, #0
    blx r2
@L_020249c0:
    b @L_0202457c
@L_020249c4:
    ldr r0, [sp]
    cmp r0, r2
    addeq sp, sp, #0xa4
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r1, sp, #0x34
    add r0, r2, #1
    bl func_02023f18
    add r1, sp, #0x38
    bl func_02023f18
    add r1, sp, #0x3c
    bl func_02023e94
    ldr r1, [sp, #0x34]
    add r0, r0, r1, lsl #2
    b @L_020244b8
@L_020249fc:
    add r1, sp, #0x24
    add r0, r2, #1
    and r5, r7, #0x20
    bl func_02023e94
    add r1, sp, #0x28
    bl func_02023e94
    ldrb r2, [r0]
    ldrb r1, [r0, #1]
    ldrb r3, [r0, #2]
    ldrb r4, [r0, #3]
    orr r1, r2, r1, lsl #8
    orr r2, r1, r3, lsl #16
    add r1, sp, #0x2c
    add r0, r0, #4
    orr r4, r2, r4, lsl #24
    bl func_02023e94
    ldrb r2, [r0]
    ldrb r1, [r0, #1]
    cmp r5, #0
    ldrb r3, [r0, #2]
    orr r1, r2, r1, lsl #8
    ldrb r6, [r0, #3]
    add r5, r0, #4
    ldrne r0, [sp, #0x24]
    orr r1, r1, r3, lsl #16
    addne r0, r9, r0, lsl #2
    orr r2, r1, r6, lsl #24
    ldrne r3, [r0, #0x1c]
    ldreq r1, [r9, #0x18]
    ldreq r0, [sp, #0x24]
    ldreq r3, [r1, r0]
    ldr r0, [sp, #0x28]
    ldr r1, [sp, #0x2c]
    add r0, r3, r0
    add r1, r4, r1
    blx r2
    b @L_020247cc
@L_02024a90:
    add r1, sp, #0x14
    add r0, r2, #1
    and r5, r7, #0x20
    bl func_02023e94
    add r1, sp, #0x1c
    bl func_02023e94
    ldrb r2, [r0], #1
    add r1, sp, #0x18
    and r4, r2, #0x20
    bl func_02023e94
    add r1, sp, #0x20
    bl func_02023e94
    cmp r5, #0
    ldrb r2, [r0]
    ldrb r1, [r0, #1]
    ldrb r3, [r0, #2]
    ldrb r6, [r0, #3]
    add r5, r0, #4
    ldrne r0, [sp, #0x14]
    orr r1, r2, r1, lsl #8
    addne r0, r9, r0, lsl #2
    ldrne r0, [r0, #0x1c]
    orr r1, r1, r3, lsl #16
    orr r2, r1, r6, lsl #24
    ldreq r1, [r9, #0x18]
    ldreq r0, [sp, #0x14]
    ldreq r0, [r1, r0]
    cmp r4, #0
    ldrne r1, [sp, #0x18]
    ldreq r3, [r9, #0x18]
    addne r1, r9, r1, lsl #2
    ldrne r4, [r1, #0x1c]
    ldreq r1, [sp, #0x18]
    ldreq r4, [r3, r1]
    ldr r3, [sp, #0x1c]
    ldr r1, [sp, #0x20]
    add r0, r0, r3
    add r1, r4, r1
    blx r2
    b @L_020247cc
@L_02024b30:
    add r1, sp, #8
    add r0, r2, #1
    and r4, r7, #0x20
    bl func_02023e94
    ldrb r2, [r0], #1
    add r1, sp, #0xc
    and r6, r2, #0x20
    bl func_02023e94
    add r1, sp, #0x10
    bl func_02023f18
    ldrb r2, [r0]
    ldrb r1, [r0, #1]
    ldrb r3, [r0, #2]
    ldrb r5, [r0, #3]
    orr r1, r2, r1, lsl #8
    orr r1, r1, r3, lsl #16
    cmp r4, #0
    add r11, r0, #4
    ldrne r0, [sp, #8]
    orr r5, r1, r5, lsl #24
    addne r0, r9, r0, lsl #2
    ldrne r4, [r0, #0x1c]
    ldreq r1, [r9, #0x18]
    ldreq r0, [sp, #8]
    ldreq r4, [r1, r0]
    cmp r6, #0
    ldrne r0, [sp, #0xc]
    ldreq r1, [r9, #0x18]
    addne r0, r9, r0, lsl #2
    ldrne r0, [r0, #0x1c]
    ldreq r0, [sp, #0xc]
    ldreq r0, [r1, r0]
    ldr r1, [sp, #0x10]
    add r4, r4, r0
    bl func_02022948
    movs r6, r0
    mvn r10, #0
    beq @L_02024be4
@L_02024bc8:
    ldr r0, [sp, #0x10]
    mov r1, r10
    sub r4, r4, r0
    mov r0, r4
    blx r5
    subs r6, r6, #1
    bne @L_02024bc8
@L_02024be4:
    b @L_02024658
@L_02024be8:
    add r1, sp, #4
    add r0, r2, #1
    bl func_02023e94
    b @L_020244b8
@L_02024bf8:
    bl _ZSt9terminatev
@L_02024bfc:
    tst r7, #0x80
    movne r0, #0
    strne r0, [r8, #8]
    b @L_020243f4
}

asm void func_02024c0c(void)
{
    add sp, sp, #0xa4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_02024c14(void)
{
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0x8c
    ldr r2, [r1]
    mov r4, r0
    str r2, [sp, #4]
    ldr r0, [r1, #4]
    add r12, sp, #0x38
    str r0, [sp, #8]
    ldr r0, [r1, #8]
    add lr, r4, #0x1c
    str r0, [sp, #0xc]
    ldr r0, [r1, #0xc]
    mov r5, #5
    str r0, [sp, #0x10]
    ldr r0, [r1, #0x10]
    str r0, [sp, #0x14]
    ldr r0, [r1, #0x14]
    str r0, [sp, #0x18]
    ldr r0, [r4]
    str r0, [sp, #0x1c]
    ldr r0, [r4, #4]
    str r0, [sp, #0x20]
    ldr r0, [r4, #8]
    str r0, [sp, #0x24]
    ldr r0, [r4, #0xc]
    str r0, [sp, #0x28]
    ldr r0, [r4, #0x10]
    str r0, [sp, #0x2c]
    ldr r0, [r4, #0x14]
    str r0, [sp, #0x30]
    ldr r0, [r4, #0x18]
    str r0, [sp, #0x34]
@L_02024c94:
    ldmia lr!, {r0, r1, r2, r3}
    stmia r12!, {r0, r1, r2, r3}
    subs r5, r5, #1
    bne @L_02024c94
    add r5, sp, #4
    ldr r1, [lr]
    mov r0, r5
    str r1, [r12]
    bl func_02024108
@L_02024cb8:
    cmp r0, #0x12
    addls pc, pc, r0, lsl #2
    b @L_02024d10
    b @L_02024d1c
    b @L_02024d10
    b @L_02024d1c
    b @L_02024d1c
    b @L_02024d1c
    b @L_02024d1c
    b @L_02024d1c
    b @L_02024d1c
    b @L_02024d1c
    b @L_02024d1c
    b @L_02024d1c
    b @L_02024d1c
    b @L_02024d1c
    b @L_02024d28
    b @L_02024d10
    b @L_02024d1c
    b @L_02024d1c
    b @L_02024d1c
    b @L_02024d1c
@L_02024d10:
    add sp, sp, #0x8c
    mov r0, #0
    ldmia sp!, {r4, r5, pc}
@L_02024d1c:
    mov r0, r5
    bl func_02024124
    b @L_02024cb8
@L_02024d28:
    ldr r0, [sp, #0xc]
    add r1, sp, #0
    add r0, r0, #1
    bl func_02023e94
    ldr r12, [sp, #0x34]
    ldr r3, [sp]
    mov r1, #0
    add r0, r12, r3
    ldr r2, [r0, #4]
    str r2, [r4]
    ldr r2, [r12, r3]
    str r2, [r4, #4]
    str r1, [r4, #8]
    str r0, [r4, #0xc]
    add sp, sp, #0x8c
    ldmia sp!, {r4, r5, pc}
}

asm void func_02024d68(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #8
    mov r6, r1
    ldr r1, [r6]
    mov r7, r0
    cmp r1, #0
    ldr r4, [r6, #0xc]
    mov r5, #0
    bls @L_02024ddc
    add r8, sp, #0
@L_02024d90:
    ldrb r1, [r4]
    ldrb r0, [r4, #1]
    ldrb r2, [r4, #2]
    ldrb r3, [r4, #3]
    orr r0, r1, r0, lsl #8
    orr r1, r0, r2, lsl #16
    mov r0, r7
    mov r2, r8
    orr r1, r1, r3, lsl #24
    bl func_02025348
    cmp r0, #0
    addne sp, sp, #8
    movne r0, #1
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, [r6]
    add r5, r5, #1
    cmp r5, r0
    add r4, r4, #4
    blo @L_02024d90
@L_02024ddc:
    mov r0, #0
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void func_02024de8(void)
{
    stmdb sp!, {r3, r4, r5, r11, lr}
    sub sp, sp, #0x2c
    mov r11, sp
    str sp, [r11, #0x18]
    ldr r5, [r0, #0x14]
    bl _ZSt10unexpectedv
    b @L_02024e78
    add r4, r11, #0x1c
    add r0, r5, #1
    mov r1, r4
    bl func_02023f18
    add r1, r11, #0x20
    bl func_02023f18
    add r1, r11, #0x24
    bl func_02023e94
    str r0, [r11, #0x28]
    ldr r0, [r11, #8]
    mov r1, r4
    bl func_02024d68
    cmp r0, #0
    beq @L_02024e40
    bl func_02025b58
@L_02024e40:
    ldr r0, =data_020ab6e4
    add r1, r11, #0x1c
    bl func_02024d68
    cmp r0, #0
    beq @L_02024e6c
    ldr r3, =data_020ab6d8
    ldr r0, =data_020ab6fc
    ldr r2, =func_02024e94
    add r1, r11, #0
    str r3, [r11]
    bl func_02025b10
@L_02024e6c:
    add r0, r11, #4
    bl func_02025224
    ldr sp, [r11, #0x18]
@L_02024e78:
    bl _ZSt9terminatev
    add sp, r11, #0x2c
    ldmia sp!, {r3, r4, r5, r11, pc}
}

asm void func_02024e94(void)
{
    bx lr
}

asm void func_02024e98(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, r3
    mov r5, r2
    mov r2, r4
    mov r7, r0
    mov r6, r1
    bl func_020243e0
    ldr r2, [r7, #0x18]
    ldr r1, [r5, #8]
    ldr r0, [r7, #4]
    add r3, r2, r1
    str r0, [r2, r1]
    ldr r1, [r7]
    mov r0, r7
    str r1, [r3, #4]
    ldr r2, [r7, #8]
    mov r1, r6
    str r2, [r3, #8]
    str r4, [r3, #0x14]
    ldr r3, [r6]
    ldr r2, [r5, #4]
    add r2, r3, r2
    bl func_02025ae0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void func_02024ef8(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xa4
    mov r6, r1
    ldr r1, [r6]
    mov r7, r0
    str r1, [sp, #0x1c]
    ldr r0, [r6, #4]
    add r8, sp, #0x50
    str r0, [sp, #0x20]
    ldr r0, [r6, #8]
    mov r5, r2
    str r0, [sp, #0x24]
    ldr r0, [r6, #0xc]
    add r9, r7, #0x1c
    str r0, [sp, #0x28]
    ldr r0, [r6, #0x10]
    mov r4, #5
    str r0, [sp, #0x2c]
    ldr r0, [r6, #0x14]
    str r0, [sp, #0x30]
    ldr r0, [r7]
    str r0, [sp, #0x34]
    ldr r0, [r7, #4]
    str r0, [sp, #0x38]
    ldr r0, [r7, #8]
    str r0, [sp, #0x3c]
    ldr r0, [r7, #0xc]
    str r0, [sp, #0x40]
    ldr r0, [r7, #0x10]
    str r0, [sp, #0x44]
    ldr r0, [r7, #0x14]
    str r0, [sp, #0x48]
    ldr r0, [r7, #0x18]
    str r0, [sp, #0x4c]
@L_02024f80:
    ldmia r9!, {r0, r1, r2, r3}
    stmia r8!, {r0, r1, r2, r3}
    subs r4, r4, #1
    bne @L_02024f80
    add r4, sp, #0x1c
    ldr r1, [r9]
    mov r0, r4
    str r1, [r8]
    bl func_02024108
    add r8, sp, #0
    add r11, sp, #4
    add r9, sp, #0x14
    add r10, sp, #0x18
@L_02024fb4:
    cmp r0, #0x13
    addls pc, pc, r0, lsl #2
    b @L_020250b4
    b @L_020250bc
    b @L_020250b4
    b @L_020250bc
    b @L_020250bc
    b @L_020250bc
    b @L_020250bc
    b @L_020250bc
    b @L_020250bc
    b @L_020250bc
    b @L_020250bc
    b @L_020250bc
    b @L_020250bc
    b @L_02025010
    b @L_020250bc
    b @L_020250b4
    b @L_02025064
    b @L_020250bc
    b @L_020250bc
    b @L_020250bc
    b @L_020250bc
@L_02025010:
    ldr lr, [sp, #0x24]
    mov r1, r9
    ldrb r2, [lr, #1]
    ldrb r0, [lr, #2]
    ldrb r3, [lr, #3]
    ldrb r12, [lr, #4]
    orr r0, r2, r0, lsl #8
    orr r0, r0, r3, lsl #16
    orr r2, r0, r12, lsl #24
    add r0, lr, #5
    str r2, [sp, #0x10]
    bl func_02023f18
    mov r1, r10
    bl func_02023e94
    ldr r0, [r7]
    ldr r1, [sp, #0x10]
    mov r2, r5
    bl func_02025348
    cmp r0, #0
    beq @L_020250bc
    b @L_020250c8
@L_02025064:
    ldr r0, [sp, #0x24]
    mov r1, r8
    add r0, r0, #1
    bl func_02023f18
    mov r1, r11
    bl func_02023f18
    add r1, sp, #8
    bl func_02023e94
    str r0, [sp, #0xc]
    ldr r0, [r7]
    mov r1, r8
    bl func_02024d68
    cmp r0, #0
    bne @L_020250bc
    ldr r3, [sp, #0x24]
    mov r0, r7
    mov r1, r6
    mov r2, r8
    bl func_02024e98
    b @L_020250bc
@L_020250b4:
    bl _ZSt9terminatev
    b @L_020250c8
@L_020250bc:
    mov r0, r4
    bl func_02024124
    b @L_02024fb4
@L_020250c8:
    ldr r0, [sp, #0x24]
    add sp, sp, #0xa4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void func_020250d4(void)
{
    stmdb sp!, {r3, lr}
    ldr lr, [r0, #0x18]
    ldr r12, [r0, #4]
    add r3, lr, r1
    str r12, [lr, r1]
    ldr r1, [r0]
    str r1, [r3, #4]
    ldr r1, [r0, #8]
    str r1, [r3, #8]
    ldr r1, [r0]
    ldrb r1, [r1]
    cmp r1, #0x2a
    ldrne r0, [r0, #4]
    addne r0, r0, r2
    strne r0, [r3, #0xc]
    ldmneia sp!, {r3, pc}
    add r1, r3, #0x10
    str r1, [r3, #0xc]
    ldr r0, [r0, #4]
    ldr r0, [r0]
    add r0, r0, r2
    str r0, [r3, #0x10]
    ldmia sp!, {r3, pc}
}

asm void func_02025130(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x28
    mov r6, r0
    ldr r0, [r6, #0x10]
    add r1, sp, #0x10
    bl func_02024000
    ldr r0, [sp, #0x14]
    cmp r0, #0
    bne @L_02025158
    bl _ZSt9terminatev
@L_02025158:
    add r4, sp, #0x10
    mov r0, r6
    mov r1, r4
    bl func_020259f8
    ldr r0, [r6]
    cmp r0, #0
    movne r0, #0
    strne r0, [r6, #0xc]
    bne @L_02025198
    mov r0, r6
    mov r1, r4
    bl func_02024c14
    str r0, [r6, #0xc]
    cmp r0, #0
    bne @L_02025198
    bl _ZSt9terminatev
@L_02025198:
    add r5, sp, #0x10
    add r2, sp, #0
    mov r0, r6
    mov r1, r5
    bl func_02024ef8
    mov r4, r0
    ldrb r1, [r4, #1]
    ldrb r0, [r4, #2]
    ldrb r2, [r4, #3]
    ldrb r3, [r4, #4]
    orr r0, r1, r0, lsl #8
    orr r0, r0, r2, lsl #16
    orr r2, r0, r3, lsl #24
    add r1, sp, #8
    add r0, r4, #5
    str r2, [sp, #4]
    bl func_02023f18
    add r1, sp, #0xc
    bl func_02023e94
    mov r0, r6
    mov r1, r5
    mov r2, r4
    bl func_020243e0
    ldr r1, [sp, #0xc]
    ldr r2, [sp]
    mov r0, r6
    bl func_020250d4
    ldr r3, [sp, #0x10]
    ldr r2, [sp, #8]
    mov r0, r6
    mov r1, r5
    add r2, r3, r2
    bl func_02025ae0
    add sp, sp, #0x28
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_02025224(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, [r0]
    cmp r1, #0
    ldrne r2, [r0, #8]
    cmpne r2, #0
    ldmeqia sp!, {r3, pc}
    mov r0, r1
    mvn r1, #0
    blx r2
    ldmia sp!, {r3, pc}
}

asm void func_0202524c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl _ZdlPv
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void func_02025260(void)
{
    ldr r0, =data_020ab6ac
    bx lr
}

asm void func_0202526c(void)
{
    stmdb sp!, {r4, lr}
    ldr r4, =0x20aac80
    b @L_02025280
@L_02025278:
    blx r0
    add r4, r4, #4
@L_02025280:
    cmp r4, #0
    ldmeqia sp!, {r4, pc}
    ldr r0, [r4]
    cmp r0, #0
    bne @L_02025278
    ldmia sp!, {r4, pc}
}

asm void func_0202529c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r4, =data_020bf410
    ldr r2, [r4]
    cmp r2, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    mvn r5, #0
@L_020252b4:
    ldr r0, [r2]
    mov r1, r5
    str r0, [r4]
    ldr r0, [r2, #8]
    ldr r2, [r2, #4]
    blx r2
    ldr r2, [r4]
    cmp r2, #0
    bne @L_020252b4
    ldmia sp!, {r3, r4, r5, pc}
}

asm void func_020252e0(void)
{
    ldr r12, =func_02017a7c
    bx r12
}

asm void func_020252ec(void)
{
    ldr r12, =_ZSt9terminatev
    bx r12
}
