// (asm for now)

void _dadd(void);
void _dsub(void);
void _dmul(void);
void _d2f(void);
void _dflt(void);
void _dfltu(void);
void _dgeq(void);
void _dgr(void);
void _dleq(void);
void _dls(void);
void _deq(void);
void _dneq(void);
void _fgr(void);
void _fls(void);
void _f2d(void);
void _fflt(void);
void _ffltu(void);
void func_02022514(void);
void func_02022524(void);
void _ll_udiv(void);
void func_020226e0(void);
void func_0202271c(void);
void _s32_div_f(void);
void _u32_div_f(void);
void _ffix(void);
void _dfix(void);
void _dfixu(void);
void func_02022c04(void);
void func_02022c90(void);
void _fmul(void);
void _fadd(void);
void func_02023228(void);
void _fsub(void);
void _fdiv(void);
void _ddiv(void);
void func_02023dd4(void);
void func_02023dd8(void);
void func_02023de4(void);
void func_02023de8(void);
void func_02023dec(void);
void func_02023df4(void);
void func_02023df8(void);
void func_02023e48(void);
void func_02023e8c(void);
void func_02023e94(void);
void func_02023f18(void);
void func_02023f9c(void);
void func_02024000(void);
void func_02024108(void);
void func_02024124(void);
void func_020243e0(void);
void func_02024c0c(void);
void func_02024c14(void);
void func_02024d68(void);
void func_02024de8(void);
void func_02024e94(void);
void func_02024e98(void);
void func_02024ef8(void);
void func_020250d4(void);
void func_02025130(void);
void func_02025224(void);
void func_0202524c(void);
void func_02025260(void);
void func_0202526c(void);
void func_0202529c(void);
void func_020252e0(void);
void func_020252ec(void);

void func_02021738(void);
void func_02021408(void);
void func_02022534(void);
void func_020226e8(void);
void func_02022598(void);
void func_02022950(void);
extern char errno[];
void func_02023248(void);
void func_02023018(void);
void __FindExceptionTable(void);
void func_02025ab8(void);
void func_0202599c(void);
void func_020259f8(void);
void _ZSt9terminatev(void);
void func_02025348(void);
void _ZSt10unexpectedv(void);
extern char data_020ab6e4[];
extern char data_020ab6d8[];
extern char data_020ab6fc[];
void func_02025ae0(void);
void _ZdlPv(void);
extern char data_020ab6ac[];
extern char __global_destructor_chain[];
void abort(void);

asm void _dadd(void)
{
    stmdb sp!, {r4, lr}
    eors r12, r1, r3
    eormi r3, r3, #0x80000000
    bmi func_02021738
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
    movs r1, r1, rrx
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
    andeqs r2, r0, #1
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
    movs r1, r1, rrx
    mov r0, r0, rrx
    orr r0, r0, r4
@L_0202163c:
    cmp r1, #0
    subges r12, r12, #1
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
    andeqs r2, r0, #1
    ldmeqia sp!, {r4, lr}
    bxeq lr
@L_02021680:
    mov r1, r3
    mov r0, r2
    ldmia sp!, {r4, lr}
    bx lr
@L_02021690:
    cmp r1, #0
    subges r12, r12, #1
    mov r0, r0, lsr #0xb
    orr r0, r0, r1, lsl #21
    add r1, r1, r1
    orr r1, lr, r1, lsr #12
    orr r1, r1, r12, lsl #20
    ldmia sp!, {r4, lr}
    bx lr
@L_020216b4:
    ldr r1, [pc, #0x50]
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
    dcd 0xe3e00000
    dcd 0xe3c01102
    dcd 0xe8bd4010
    dcd 0xe12fff1e
@L_020216ec:
    cmp r12, #0x800
    movge lr, #0x80000000
    movlt lr, #0
    ldr r1, [pc, #0xc]
    orr r1, lr, r1
    mov r0, #0
    ldmia sp!, {r4, lr}
    bx lr
    dcd 0x7ff00000
    dcd 0xe0211003
    dcd 0xe0213003
    dcd 0xe0211003
    dcd 0xe0200002
    dcd 0xe0202002
    dcd 0xe0200002
}

asm void _dsub(void)
{
    stmdb sp!, {r4, lr}
    eors r12, r1, r3
    eormi r3, r3, #0x80000000
    bmi func_02021408
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
    andeqs r2, r0, #1
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
    subges r12, r12, #1
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
    subges r12, r12, #1
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

asm void _dmul(void)
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
    andeqs r2, r0, #1
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
    andeqs r2, r0, #1
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
    andeqs r1, r0, #1
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
    andeqs r1, r0, #1
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

asm void _dflt(void)
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

asm void _dfltu(void)
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

asm void _dgeq(void)
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
    mrs r12, CPSR
    bic r12, r12, #0x20000000
    msr CPSR_f, r12
    bx lr
@L_02022004:
    orr r12, r0, r12, lsl #1
    orrs r12, r12, r2
    moveq r0, #1
    mrs r12, CPSR
    orr r12, r12, #0x20000000
    msr CPSR_f, r12
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

asm void _dgr(void)
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
    mrs r12, CPSR
    bic r12, r12, #0x20000000
    msr CPSR_f, r12
    bx lr
@L_0202209c:
    orr r12, r0, r12, lsl #1
    orrs r12, r12, r2
    moveq r0, #0
    mrs r12, CPSR
    bic r12, r12, #0x20000000
    msr CPSR_f, r12
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

asm void _dleq(void)
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
    mrs r12, CPSR
    bic r12, r12, #0x40000000
    orr r12, r12, #0x20000000
    msr CPSR_f, r12
    bx lr
@L_02022138:
    orr r12, r0, r12, lsl #1
    orrs r12, r12, r2
    moveq r0, #1
    bne @L_0202215c
    mrs r12, CPSR
    bic r12, r12, #0x20000000
    orr r12, r12, #0x40000000
    msr CPSR_f, r12
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

asm void _dls(void)
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
    mrs r12, CPSR
    orr r12, r12, #0x20000000
    msr CPSR_f, r12
    bx lr
@L_020221d8:
    orr r12, r0, r12, lsl #1
    orrs r12, r12, r2
    moveq r0, #0
    bne @L_020221f8
    mrs r12, CPSR
    orr r12, r12, #0x20000000
    msr CPSR_f, r12
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

asm void _deq(void)
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
    mrs r12, CPSR
    bic r12, r12, #0x40000000
    msr CPSR_f, r12
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

asm void _dneq(void)
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
    mrs r12, CPSR
    bic r12, r12, #0x40000000
    msr CPSR_f, r12
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

asm void _fgr(void)
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
    mrs r12, CPSR
    bicle r12, r12, #0x20000000
    orrgt r12, r12, #0x20000000
    msr CPSR_f, r12
    bx lr
@L_02022390:
    mov r0, #0
    mrs r12, CPSR
    bic r12, r12, #0x20000000
    msr CPSR_f, r12
    bx lr
}

asm void _fls(void)
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
    mrs r12, CPSR
    orrge r12, r12, #0x20000000
    biclt r12, r12, #0x20000000
    msr CPSR_f, r12
    bx lr
@L_020223ec:
    mov r0, #0
    mrs r12, CPSR
    orr r12, r12, #0x20000000
    msr CPSR_f, r12
    bx lr
}

asm void _f2d(void)
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

asm void _fflt(void)
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
    andeqs r3, r0, #1
    addne r0, r0, #1
    bx lr
}

asm void _ffltu(void)
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
    andeqs r1, r0, #1
    addne r0, r0, #1
    bx lr
}

asm void func_02022514(void)
{
    stmdb sp!, {r4, r5, r6, r7, r11, r12, lr}
    mov r4, r1
    orr r4, r4, #1
    b func_02022534
}

asm void func_02022524(void)
{
    stmdb sp!, {r4, r5, r6, r7, r11, r12, lr}
    eor r4, r1, r3
    mov r4, r4, asr #1
    mov r4, r4, lsl #1
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
    bl _s32_div_f
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
    dcd 0xe1a00731
    dcd 0xe3a01000
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
    b func_020226e8
}

asm void func_020226e0(void)
{
    stmdb sp!, {r4, r5, r6, r7, r11, r12, lr}
    mov r4, #1
    orrs r5, r3, r2
    bne @L_020226f8
    ldmia sp!, {r4, r5, r6, r7, r11, r12, lr}
    bx lr
@L_020226f8:
    orrs r5, r1, r3
    bne func_02022598
    mov r1, r2
    bl func_02022950
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

asm void _s32_div_f(void)
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

asm void _u32_div_f(void)
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

asm void _ffix(void)
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

asm void _dfix(void)
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

asm void _dfixu(void)
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
    movs r0, r0, rrx
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
    ldr r3, =errno
    mov r4, #0x21
    str r4, [r3]
    ldmia sp!, {r4, r5, r6, lr}
    bx lr
}

asm void _fmul(void)
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
    andeqs r3, r0, #1
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
    andeqs r1, r0, #1
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

asm void _fadd(void)
{
    eors r2, r0, r1
    eormi r1, r1, #0x80000000
    bmi func_02023248
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
    andeqs r1, r0, #1
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
    andeqs r1, r0, #1
    addne r0, r0, #1
    bx lr
@L_020231d4:
    mov r0, r1
    bx lr
@L_020231dc:
    cmp r0, #0
    subges r3, r3, #1
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
    dcd 0xe0200001
    dcd 0xe0201001
    dcd 0xe0200001
}

asm void _fsub(void)
{
    eors r2, r0, r1
    eormi r1, r1, #0x80000000
    bmi func_02023018
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
    andeqs r1, r0, #1
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
    andeqs r1, r0, #1
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
    subges r3, r3, #1
    add r0, r0, r0
    orr r0, r2, r0, lsr #9
    orr r0, r0, r3, lsl #23
    bx lr
@L_02023470:
    mov r0, #0
    bx lr
    dcd 0xe3500000
    dcd 0xa2533001
    dcd 0xe0800000
    dcd 0xe1a004a0
    dcd 0xe1800b83
    dcd 0xe12fff1e
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
    dcd 0xe0200001
    dcd 0xe0201001
    dcd 0xe0200001
}

asm void _fdiv(void)
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
    dcd 0xfdfeffff
    dcd 0xf9fafbfc
    dcd 0xf5f6f7f8
    dcd 0xf1f2f3f4
    dcd 0xeeeff0f0
    dcd 0xeaebeced
    dcd 0xe7e8e9ea
    dcd 0xe4e5e6e6
    dcd 0xe1e2e2e3
    dcd 0xdedfdfe0
    dcd 0xdbdcdcdd
    dcd 0xd8d9d9da
    dcd 0xd5d6d7d7
    dcd 0xd2d3d4d4
    dcd 0xd0d0d1d2
    dcd 0xcdcececf
    dcd 0xcbcbcccc
    dcd 0xc8c9c9ca
    dcd 0xc6c6c7c8
    dcd 0xc3c4c5c5
    dcd 0xc1c2c2c3
    dcd 0xbfbfc0c0
    dcd 0xbdbdbebe
    dcd 0xbabbbcbc
    dcd 0xb8b9b9ba
    dcd 0xb6b7b7b8
    dcd 0xb4b5b5b6
    dcd 0xb2b3b3b4
    dcd 0xb0b1b1b2
    dcd 0xafafafb0
    dcd 0xadadaeae
    dcd 0xababacac
    dcd 0xa9aaaaaa
    dcd 0xa7a8a8a9
    dcd 0xa6a6a7a7
    dcd 0xa4a4a5a5
    dcd 0xa2a3a3a4
    dcd 0xa1a1a2a2
    dcd 0x9fa0a0a0
    dcd 0x9e9e9e9f
    dcd 0x9c9d9d9d
    dcd 0x9b9b9b9c
    dcd 0x999a9a9a
    dcd 0x98989999
    dcd 0x96979798
    dcd 0x95959696
    dcd 0x94949495
    dcd 0x92939393
    dcd 0x91919292
    dcd 0x90909191
    dcd 0x8f8f8f90
    dcd 0x8d8e8e8e
    dcd 0x8c8c8d8d
    dcd 0x8b8b8c8c
    dcd 0x8a8a8a8b
    dcd 0x8989898a
    dcd 0x88888888
    dcd 0x86878787
    dcd 0x85868686
    dcd 0x84858585
    dcd 0x83838484
    dcd 0x82828383
    dcd 0x81818282
    dcd 0x80808181
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
    dcd 0xe0211003
    dcd 0xe0213003
    dcd 0xe0211003
    dcd 0xe0200002
    dcd 0xe0202002
    dcd 0xe0200002
}

asm void _ddiv(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr lr, [pc, #0x534]
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
    dcd 0xfdfeffff
    dcd 0xf9fafbfc
    dcd 0xf5f6f7f8
    dcd 0xf1f2f3f4
    dcd 0xeeeff0f0
    dcd 0xeaebeced
    dcd 0xe7e8e9ea
    dcd 0xe4e5e6e6
    dcd 0xe1e2e2e3
    dcd 0xdedfdfe0
    dcd 0xdbdcdcdd
    dcd 0xd8d9d9da
    dcd 0xd5d6d7d7
    dcd 0xd2d3d4d4
    dcd 0xd0d0d1d2
    dcd 0xcdcececf
    dcd 0xcbcbcccc
    dcd 0xc8c9c9ca
    dcd 0xc6c6c7c8
    dcd 0xc3c4c5c5
    dcd 0xc1c2c2c3
    dcd 0xbfbfc0c0
    dcd 0xbdbdbebe
    dcd 0xbabbbcbc
    dcd 0xb8b9b9ba
    dcd 0xb6b7b7b8
    dcd 0xb4b5b5b6
    dcd 0xb2b3b3b4
    dcd 0xb0b1b1b2
    dcd 0xafafafb0
    dcd 0xadadaeae
    dcd 0xababacac
    dcd 0xa9aaaaaa
    dcd 0xa7a8a8a9
    dcd 0xa6a6a7a7
    dcd 0xa4a4a5a5
    dcd 0xa2a3a3a4
    dcd 0xa1a1a2a2
    dcd 0x9fa0a0a0
    dcd 0x9e9e9e9f
    dcd 0x9c9d9d9d
    dcd 0x9b9b9b9c
    dcd 0x999a9a9a
    dcd 0x98989999
    dcd 0x96979798
    dcd 0x95959696
    dcd 0x94949495
    dcd 0x92939393
    dcd 0x91919292
    dcd 0x90909191
    dcd 0x8f8f8f90
    dcd 0x8d8e8e8e
    dcd 0x8c8c8d8d
    dcd 0x8b8b8c8c
    dcd 0x8a8a8a8b
    dcd 0x8989898a
    dcd 0x88888888
    dcd 0x86878787
    dcd 0x85868686
    dcd 0x84858585
    dcd 0x83838484
    dcd 0x82828383
    dcd 0x81818282
    dcd 0x80808181
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
    dcd 0x00000ffe
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
    dcd 0xea000078
    dcd 0xea000077
    dcd 0xea000010
    dcd 0xea000014
    dcd 0xea000018
    dcd 0xea000019
    dcd 0xea000020
    dcd 0xea000024
    dcd 0xea000028
    dcd 0xea00002e
    dcd 0xea000036
    dcd 0xea000037
    dcd 0xea00003b
    dcd 0xea000040
    dcd 0xea00006a
    dcd 0xea000043
    dcd 0xea00004c
    dcd 0xea000053
    dcd 0xea00005c
    dcd 0xea000063
    dcd 0xe28d109c
    dcd 0xe2820001
    dcd 0xebffff26
    dcd 0xe2800004
    dcd 0xea000038
    dcd 0xe28d1094
    dcd 0xe2820001
    dcd 0xebffff21
    dcd 0xe28d1098
    dcd 0xeafffff7
    dcd 0xe28d1090
    dcd 0xeafffff4
    dcd 0xe28d1084
    dcd 0xe2820001
    dcd 0xebffff1a
    dcd 0xe28d1088
    dcd 0xebffff39
    dcd 0xe28d108c
    dcd 0xebffff37
    dcd 0xeaffffee
    dcd 0xe28d107c
    dcd 0xe2820001
    dcd 0xebffff12
    dcd 0xe28d1080
    dcd 0xeaffffe8
    dcd 0xe28d1074
    dcd 0xe2820001
    dcd 0xebffff0d
    dcd 0xe28d1078
    dcd 0xeaffffe3
    dcd 0xe28d1068
    dcd 0xe2820001
    dcd 0xebffff08
    dcd 0xe28d106c
    dcd 0xebffff06
    dcd 0xe28d1070
    dcd 0xeaffffdc
    dcd 0xe28d1058
    dcd 0xe2820001
    dcd 0xebffff01
    dcd 0xe28d105c
    dcd 0xebfffeff
    dcd 0xe28d1060
    dcd 0xebffff1e
    dcd 0xe28d1064
    dcd 0xeaffffe3
    dcd 0xe28d1054
    dcd 0xeaffffd0
    dcd 0xe28d104c
    dcd 0xe2820001
    dcd 0xebfffef6
    dcd 0xe28d1050
    dcd 0xeaffffcc
    dcd 0xe28d1044
    dcd 0xe2820005
    dcd 0xebffff12
    dcd 0xe28d1048
    dcd 0xebfffeef
    dcd 0xea000002
    dcd 0xe28d1040
    dcd 0xe2820001
    dcd 0xebfffeeb
    dcd 0xe5840008
    dcd 0xea000028
    dcd 0xe28d1034
    dcd 0xe2820001
    dcd 0xebffff07
    dcd 0xe28d1038
    dcd 0xebffff05
    dcd 0xe28d103c
    dcd 0xebfffee2
    dcd 0xe59d1034
    dcd 0xe0800101
    dcd 0xeaffffef
    dcd 0xe28d1024
    dcd 0xe2820001
    dcd 0xebfffedc
    dcd 0xe28d1028
    dcd 0xebfffeda
    dcd 0xe28d102c
    dcd 0xe2800004
    dcd 0xeaffffaf
    dcd 0xe28d1014
    dcd 0xe2820001
    dcd 0xebfffed4
    dcd 0xe28d101c
    dcd 0xebfffed2
    dcd 0xe28d1018
    dcd 0xe2800001
    dcd 0xebfffecf
    dcd 0xe28d1020
    dcd 0xeaffffa5
    dcd 0xe28d1008
    dcd 0xe2820001
    dcd 0xebfffeca
    dcd 0xe28d100c
    dcd 0xe2800001
    dcd 0xebfffec7
    dcd 0xe28d1010
    dcd 0xeaffffad
    dcd 0xe28d1004
    dcd 0xeaffffd5
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
    dcd 0xea0001e8
    dcd 0xea000011
    dcd 0xea000018
    dcd 0xea000029
    dcd 0xea000047
    dcd 0xea00005c
    dcd 0xea00007c
    dcd 0xea000095
    dcd 0xea0000ae
    dcd 0xea0000d6
    dcd 0xea0000ff
    dcd 0xea000113
    dcd 0xea000133
    dcd 0xea00013c
    dcd 0xea0001da
    dcd 0xea00014c
    dcd 0xea000159
    dcd 0xea00017d
    dcd 0xea0001a4
    dcd 0xea0001d1
    dcd 0xe28d10a0
    dcd 0xe2820001
    dcd 0xebfffe79
    dcd 0xe5981008
    dcd 0xe59d00a0
    dcd 0xe0810000
    dcd 0xe5880008
    dcd 0xea0001ce
    dcd 0xe28d109c
    dcd 0xe2820001
    dcd 0xebfffe71
    dcd 0xe1a04000
    dcd 0xe5d41000
    dcd 0xe5d40001
    dcd 0xe5d42002
    dcd 0xe5d43003
    dcd 0xe1810400
    dcd 0xe1800802
    dcd 0xe5995018
    dcd 0xe59d109c
    dcd 0xe1802c03
    dcd 0xe0850001
    dcd 0xe3e01000
    dcd 0xe12fff32
    dcd 0xe2840004
    dcd 0xeaffffeb
    dcd 0xe28d1094
    dcd 0xe2820001
    dcd 0xe2074040
    dcd 0xebfffe5e
    dcd 0xe28d1098
    dcd 0xebfffe5c
    dcd 0xe3540000
    dcd 0xe5d02000
    dcd 0xe5d01001
    dcd 0xe5d03002
    dcd 0xe5d05003
    dcd 0xe2804004
    dcd 0x159d0094
    dcd 0xe1821401
    dcd 0x10890100
    dcd 0x1590001c
    dcd 0xe1811803
    dcd 0x120000ff
    dcd 0xe1812c05
    dcd 0x05991018
    dcd 0x059d0094
    dcd 0x07d10000
    dcd 0xe3500000
    dcd 0x0a000004
    dcd 0xe5993018
    dcd 0xe59d0098
    dcd 0xe3e01000
    dcd 0xe0830000
    dcd 0xe12fff32
    dcd 0xe5884008
    dcd 0xea00019d
    dcd 0xe28d1090
    dcd 0xe2820001
    dcd 0xe2074020
    dcd 0xebfffe3f
    dcd 0xe3540000
    dcd 0xe5d02000
    dcd 0xe5d01001
    dcd 0xe5d03002
    dcd 0xe5d05003
    dcd 0xe2804004
    dcd 0x159d0090
    dcd 0xe1821401
    dcd 0x10890100
    dcd 0x1590001c
    dcd 0xe1811803
    dcd 0xe1812c05
    dcd 0x05991018
    dcd 0x059d0090
    dcd 0x07910000
    dcd 0xe3e01000
    dcd 0xe12fff32
    dcd 0xeaffffe7
    dcd 0xe28d1084
    dcd 0xe2820001
    dcd 0xebfffe2a
    dcd 0xe28d1088
    dcd 0xebfffe49
    dcd 0xe28d108c
    dcd 0xebfffe47
    dcd 0xe5993018
    dcd 0xe59d2084
    dcd 0xe59d6088
    dcd 0xe5d05000
    dcd 0xe5d04001
    dcd 0xe59d108c
    dcd 0xe0832002
    dcd 0xe5d0a002
    dcd 0xe1853404
    dcd 0xe0242196
    dcd 0xe5d02003
    dcd 0xe183180a
    dcd 0xe3560000
    dcd 0xe1815c02
    dcd 0xe280b004
    dcd 0x0a000007
    dcd 0xe3e0a000
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
    dcd 0xe28d107c
    dcd 0xe2820001
    dcd 0xe2074020
    dcd 0xebfffe08
    dcd 0xe28d1080
    dcd 0xebfffe06
    dcd 0xe5d02000
    dcd 0xe5d01001
    dcd 0xe3540000
    dcd 0xe5d03002
    dcd 0xe1821401
    dcd 0xe5d05003
    dcd 0xe2804004
    dcd 0x159d007c
    dcd 0xe1811803
    dcd 0x10890100
    dcd 0xe1812c05
    dcd 0x1590301c
    dcd 0x05991018
    dcd 0x059d007c
    dcd 0x07913000
    dcd 0xe59d0080
    dcd 0xe3a01000
    dcd 0xe0830000
    dcd 0xe12fff32
    dcd 0xeaffffac
    dcd 0xe28d1074
    dcd 0xe2820001
    dcd 0xe2074020
    dcd 0xebfffdee
    dcd 0xe28d1078
    dcd 0xebfffdec
    dcd 0xe5d02000
    dcd 0xe5d01001
    dcd 0xe3540000
    dcd 0xe5d03002
    dcd 0xe1821401
    dcd 0xe5d05003
    dcd 0xe2804004
    dcd 0x159d0074
    dcd 0xe1811803
    dcd 0x10890100
    dcd 0xe1812c05
    dcd 0x1590301c
    dcd 0x05991018
    dcd 0x059d0074
    dcd 0x07913000
    dcd 0xe59d0078
    dcd 0xe3e01000
    dcd 0xe0830000
    dcd 0xe12fff32
    dcd 0xeaffff92
    dcd 0xe28d1068
    dcd 0xe2820001
    dcd 0xe2074020
    dcd 0xebfffdd4
    dcd 0xe28d106c
    dcd 0xebfffdd2
    dcd 0xe28d1070
    dcd 0xebfffdd0
    dcd 0xe5d02000
    dcd 0xe5d01001
    dcd 0xe5d03002
    dcd 0xe5d05003
    dcd 0xe1821401
    dcd 0xe1811803
    dcd 0xe1812c05
    dcd 0xe3170040
    dcd 0xe2805004
    dcd 0x05991018
    dcd 0x059d0068
    dcd 0x019100f0
    dcd 0x0a000004
    dcd 0xe59d0068
    dcd 0xe0890100
    dcd 0xe590001c
    dcd 0xe1a00800
    dcd 0xe1a00840
    dcd 0xe3500000
    dcd 0x0a00000a
    dcd 0xe3540000
    dcd 0x159d006c
    dcd 0x05991018
    dcd 0x10890100
    dcd 0x1590301c
    dcd 0x059d006c
    dcd 0x07913000
    dcd 0xe59d0070
    dcd 0xe3e01000
    dcd 0xe0830000
    dcd 0xe12fff32
    dcd 0xe5885008
    dcd 0xea000109
    dcd 0xe28d1058
    dcd 0xe2820001
    dcd 0xe2074020
    dcd 0xebfffdab
    dcd 0xe28d105c
    dcd 0xebfffda9
    dcd 0xe28d1060
    dcd 0xebfffdc8
    dcd 0xe28d1064
    dcd 0xebfffdc6
    dcd 0xe5d02000
    dcd 0xe5d01001
    dcd 0xe5d03002
    dcd 0xe5d05003
    dcd 0xe1821401
    dcd 0xe1811803
    dcd 0xe3540000
    dcd 0xe1815c05
    dcd 0x159d1058
    dcd 0xe280b004
    dcd 0x10891101
    dcd 0x1591101c
    dcd 0x159d005c
    dcd 0x05992018
    dcd 0x059d1058
    dcd 0x059d005c
    dcd 0x07921001
    dcd 0xe59d6060
    dcd 0xe0814000
    dcd 0xe59d0064
    dcd 0xe3560000
    dcd 0xe0244096
    dcd 0x0a000007
    dcd 0xe3e0a000
@L_0202485c:
    ldr r0, [sp, #0x64]
    mov r1, r10
    sub r4, r4, r0
    mov r0, r4
    blx r5
    subs r6, r6, #1
    bne @L_0202485c
    b @L_02024658
    dcd 0xe28d1054
    dcd 0xe2820001
    dcd 0xe2074020
    dcd 0xebfffd81
    dcd 0xe3540000
    dcd 0xe5d02000
    dcd 0xe5d01001
    dcd 0xe5d03002
    dcd 0xe5d05003
    dcd 0xe2804004
    dcd 0x159d0054
    dcd 0xe1821401
    dcd 0x10890100
    dcd 0x1590001c
    dcd 0xe1811803
    dcd 0xe1812c05
    dcd 0x05991018
    dcd 0x059d0054
    dcd 0x07910000
    dcd 0xe12fff32
    dcd 0xeaffff2a
    dcd 0xe28d104c
    dcd 0xe2820001
    dcd 0xe2074020
    dcd 0xebfffd6c
    dcd 0xe28d1050
    dcd 0xebfffd6a
    dcd 0xe5d02000
    dcd 0xe5d01001
    dcd 0xe5d03002
    dcd 0xe5d05003
    dcd 0xe1821401
    dcd 0xe1811803
    dcd 0xe3170040
    dcd 0xe1811c05
    dcd 0xe2805004
    dcd 0x159d004c
    dcd 0x05992018
    dcd 0x10890100
    dcd 0x1590001c
    dcd 0x120000ff
    dcd 0x059d004c
    dcd 0x07d20000
    dcd 0xe3500000
    dcd 0x0a000007
    dcd 0xe3540000
    dcd 0x159d0050
    dcd 0x05992018
    dcd 0x10890100
    dcd 0x1590001c
    dcd 0x059d0050
    dcd 0x07920000
    dcd 0xe12fff31
    dcd 0xeaffff9d
    dcd 0xe59d0000
    dcd 0xe1500002
    dcd 0x028dd0a4
    dcd 0x08bd8ff0
    dcd 0xe28d1044
    dcd 0xe2820005
    dcd 0xebfffd69
    dcd 0xe28d1048
    dcd 0xebfffd46
    dcd 0xeafffece
    dcd 0xe28d1040
    dcd 0xe2820001
    dcd 0xebfffd42
    dcd 0xe5992018
    dcd 0xe59d1040
    dcd 0xe1a04000
    dcd 0xe0820001
    dcd 0xe5902008
    dcd 0xe3520000
    dcd 0x0a000006
    dcd 0xe5900000
    dcd 0xe5991004
    dcd 0xe1510000
    dcd 0x05892008
    dcd 0x0a000001
    dcd 0xe3e01000
    dcd 0xe12fff32
    dcd 0xeafffeed
    dcd 0xe59d0000
    dcd 0xe1500002
    dcd 0x028dd0a4
    dcd 0x08bd8ff0
    dcd 0xe28d1034
    dcd 0xe2820001
    dcd 0xebfffd4d
    dcd 0xe28d1038
    dcd 0xebfffd4b
    dcd 0xe28d103c
    dcd 0xebfffd28
    dcd 0xe59d1034
    dcd 0xe0800101
    dcd 0xeafffeae
    dcd 0xe28d1024
    dcd 0xe2820001
    dcd 0xe2075020
    dcd 0xebfffd21
    dcd 0xe28d1028
    dcd 0xebfffd1f
    dcd 0xe5d02000
    dcd 0xe5d01001
    dcd 0xe5d03002
    dcd 0xe5d04003
    dcd 0xe1821401
    dcd 0xe1812803
    dcd 0xe28d102c
    dcd 0xe2800004
    dcd 0xe1824c04
    dcd 0xebfffd15
    dcd 0xe5d02000
    dcd 0xe5d01001
    dcd 0xe3550000
    dcd 0xe5d03002
    dcd 0xe1821401
    dcd 0xe5d06003
    dcd 0xe2805004
    dcd 0x159d0024
    dcd 0xe1811803
    dcd 0x10890100
    dcd 0xe1812c06
    dcd 0x1590301c
    dcd 0x05991018
    dcd 0x059d0024
    dcd 0x07913000
    dcd 0xe59d0028
    dcd 0xe59d102c
    dcd 0xe0830000
    dcd 0xe0841001
    dcd 0xe12fff32
    dcd 0xeaffff4e
    dcd 0xe28d1014
    dcd 0xe2820001
    dcd 0xe2075020
    dcd 0xebfffcfc
    dcd 0xe28d101c
    dcd 0xebfffcfa
    dcd 0xe4d02001
    dcd 0xe28d1018
    dcd 0xe2024020
    dcd 0xebfffcf6
    dcd 0xe28d1020
    dcd 0xebfffcf4
    dcd 0xe3550000
    dcd 0xe5d02000
    dcd 0xe5d01001
    dcd 0xe5d03002
    dcd 0xe5d06003
    dcd 0xe2805004
    dcd 0x159d0014
    dcd 0xe1821401
    dcd 0x10890100
    dcd 0x1590001c
    dcd 0xe1811803
    dcd 0xe1812c06
    dcd 0x05991018
    dcd 0x059d0014
    dcd 0x07910000
    dcd 0xe3540000
    dcd 0x159d1018
    dcd 0x05993018
    dcd 0x10891101
    dcd 0x1591401c
    dcd 0x059d1018
    dcd 0x07934001
    dcd 0xe59d301c
    dcd 0xe59d1020
    dcd 0xe0800003
    dcd 0xe0841001
    dcd 0xe12fff32
    dcd 0xeaffff26
    dcd 0xe28d1008
    dcd 0xe2820001
    dcd 0xe2074020
    dcd 0xebfffcd4
    dcd 0xe4d02001
    dcd 0xe28d100c
    dcd 0xe2026020
    dcd 0xebfffcd0
    dcd 0xe28d1010
    dcd 0xebfffcef
    dcd 0xe5d02000
    dcd 0xe5d01001
    dcd 0xe5d03002
    dcd 0xe5d05003
    dcd 0xe1821401
    dcd 0xe1811803
    dcd 0xe3540000
    dcd 0xe280b004
    dcd 0x159d0008
    dcd 0xe1815c05
    dcd 0x10890100
    dcd 0x1590401c
    dcd 0x05991018
    dcd 0x059d0008
    dcd 0x07914000
    dcd 0xe3560000
    dcd 0x159d000c
    dcd 0x05991018
    dcd 0x10890100
    dcd 0x1590001c
    dcd 0x059d000c
    dcd 0x07910000
    dcd 0xe59d1010
    dcd 0xe0844000
    dcd 0xebfff762
    dcd 0xe1b06000
    dcd 0xe3e0a000
    dcd 0x0a000006
@L_02024bc8:
    ldr r0, [sp, #0x10]
    mov r1, r10
    sub r4, r4, r0
    mov r0, r4
    blx r5
    subs r6, r6, #1
    bne @L_02024bc8
    b @L_02024658
    dcd 0xe28d1004
    dcd 0xe2820001
    dcd 0xebfffca7
    dcd 0xeafffe2f
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
    cmp r0, #0x12
    addls pc, pc, r0, lsl #2
    b @L_02024d10
    dcd 0xea000014
    dcd 0xea000010
    dcd 0xea000012
    dcd 0xea000011
    dcd 0xea000010
    dcd 0xea00000f
    dcd 0xea00000e
    dcd 0xea00000d
    dcd 0xea00000c
    dcd 0xea00000b
    dcd 0xea00000a
    dcd 0xea000009
    dcd 0xea000008
    dcd 0xea00000a
    dcd 0xea000003
    dcd 0xea000005
    dcd 0xea000004
    dcd 0xea000003
    dcd 0xea000002
@L_02024d10:
    add sp, sp, #0x8c
    mov r0, #0
    ldmia sp!, {r4, r5, pc}
    dcd 0xe1a00005
    dcd 0xebfffcff
    dcd 0xeaffffe3
    dcd 0xe59d000c
    dcd 0xe28d1000
    dcd 0xe2800001
    dcd 0xebfffc56
    dcd 0xe59dc034
    dcd 0xe59d3000
    dcd 0xe3a01000
    dcd 0xe08c0003
    dcd 0xe5902004
    dcd 0xe5842000
    dcd 0xe79c2003
    dcd 0xe5842004
    dcd 0xe5841008
    dcd 0xe584000c
    dcd 0xe28dd08c
    dcd 0xe8bd8030
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
    dcd 0xe28b401c
    dcd 0xe2850001
    dcd 0xe1a01004
    dcd 0xebfffc40
    dcd 0xe28b1020
    dcd 0xebfffc3e
    dcd 0xe28b1024
    dcd 0xebfffc1b
    dcd 0xe58b0028
    dcd 0xe59b0008
    dcd 0xe1a01004
    dcd 0xebffffcc
    dcd 0xe3500000
    dcd 0x0a000000
    dcd 0xeb000345
    dcd 0xe59f003c
    dcd 0xe28b101c
    dcd 0xebffffc6
    dcd 0xe3500000
    dcd 0x0a000005
    dcd 0xe59f302c
    dcd 0xe59f002c
    dcd 0xe59f202c
    dcd 0xe28b1000
    dcd 0xe58b3000
    dcd 0xeb000328
    dcd 0xe28b0004
    dcd 0xeb0000eb
    dcd 0xe59bd018
@L_02024e78:
    bl _ZSt9terminatev
    add sp, r11, #0x2c
    ldmia sp!, {r3, r4, r5, r11, pc}
    dcd data_020ab6e4
    dcd data_020ab6d8
    dcd data_020ab6fc
    dcd func_02024e94
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
    cmp r0, #0x13
    addls pc, pc, r0, lsl #2
    b @L_020250b4
    dcd 0xea00003d
    dcd 0xea00003a
    dcd 0xea00003b
    dcd 0xea00003a
    dcd 0xea000039
    dcd 0xea000038
    dcd 0xea000037
    dcd 0xea000036
    dcd 0xea000035
    dcd 0xea000034
    dcd 0xea000033
    dcd 0xea000032
    dcd 0xea000006
    dcd 0xea000030
    dcd 0xea00002d
    dcd 0xea000018
    dcd 0xea00002d
    dcd 0xea00002c
    dcd 0xea00002b
    dcd 0xea00002a
    dcd 0xe59de024
    dcd 0xe1a01009
    dcd 0xe5de2001
    dcd 0xe5de0002
    dcd 0xe5de3003
    dcd 0xe5dec004
    dcd 0xe1820400
    dcd 0xe1800803
    dcd 0xe1802c0c
    dcd 0xe28e0005
    dcd 0xe58d2010
    dcd 0xebfffbb5
    dcd 0xe1a0100a
    dcd 0xebfffb92
    dcd 0xe5970000
    dcd 0xe59d1010
    dcd 0xe1a02005
    dcd 0xeb0000bb
    dcd 0xe3500000
    dcd 0x0a000016
    dcd 0xea000018
    dcd 0xe59d0024
    dcd 0xe1a01008
    dcd 0xe2800001
    dcd 0xebfffba8
    dcd 0xe1a0100b
    dcd 0xebfffba6
    dcd 0xe28d1008
    dcd 0xebfffb83
    dcd 0xe58d000c
    dcd 0xe5970000
    dcd 0xe1a01008
    dcd 0xebffff34
    dcd 0xe3500000
    dcd 0x1a000007
    dcd 0xe59d3024
    dcd 0xe1a00007
    dcd 0xe1a01006
    dcd 0xe1a02008
    dcd 0xebffff79
    dcd 0xea000001
@L_020250b4:
    bl _ZSt9terminatev
    b @L_020250c8
    dcd 0xe1a00004
    dcd 0xebfffc17
    dcd 0xeaffffba
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
    ldr r4, =__global_destructor_chain
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
    ldr r12, =abort
    bx r12
}

asm void func_020252ec(void)
{
    ldr r12, =_ZSt9terminatev
    bx r12
}
