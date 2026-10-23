#include "game/Unk_02084ff4.hpp"

extern "C" void func_02084ff4(void);
extern "C" void func_020850e4(void);
extern "C" void func_02085154(void);
extern "C" void func_02085190(void);
extern "C" void func_020851c8(void);
extern "C" void func_020851fc(void);
extern "C" void func_02085208(void);
extern "C" void func_02085228(void);
extern "C" void func_02085260(void);
extern "C" void func_02085284(void);
extern "C" void func_02085298(void);
extern "C" void func_0208530c(void);
extern "C" void func_02085324(void);
extern "C" void func_02085374(void);
extern "C" void func_0208539c(void);
extern "C" void func_020853cc(void);
extern "C" void func_020853ec(void);
extern "C" void func_02085430(void);
extern "C" void func_02085444(void);
extern "C" void func_02085488(void);
extern "C" void func_020854a8(void);
extern "C" void func_020854d8(void);
extern "C" void func_02085728(void);
extern "C" void func_02085770(void);
extern "C" void func_020857ac(void);
extern "C" void func_02085828(void);
extern "C" void func_02085840(void);
extern "C" void func_020858b0(void);
extern "C" void func_020858c8(void);
extern "C" void func_020858fc(void);
extern "C" void func_0208591c(void);
extern "C" void func_02085920(void);
extern "C" void func_02085934(void);
extern "C" void func_020859c0(void);
extern "C" void func_02085b4c(void);
extern "C" void func_02085b6c(void);
extern "C" void func_02085ba4(void);
extern "C" void func_02085bb4(void);
extern "C" void func_02085be8(void);
extern "C" void func_02085bfc(void);
extern "C" void func_02085c60(void);
extern "C" void func_02085c98(void);
extern "C" void func_02085ce0(void);
extern "C" void func_02085d34(void);
extern "C" void func_02085d88(void);
extern "C" void func_02085dec(void);
extern "C" void func_02085e00(void);
extern "C" void func_02085e30(void);
extern "C" void func_02085e78(void);
extern "C" void func_02085ec0(void);
extern "C" void func_02085ff8(void);

extern "C" char data_020af4c0[];
extern "C" char data_020c4660[];
extern "C" char data_020c4678[];
extern "C" char data_020e88a0[];
extern "C" void MI_CpuFill8(void);
extern "C" void MIi_CpuClearFast(void);
extern "C" void _ZN17UnkClass_020621b413func_0207a5c0Ev(void);
extern "C" void _ZdlPv(void);
extern "C" void func_02084ba0(void);
extern "C" void func_02084c4c(void);
extern "C" void func_02084d7c(void);
extern "C" void func_02084d94(void);
extern "C" void func_02084dac(void);
extern "C" void func_02084dc0(void);
extern "C" void func_02084de8(void);
extern "C" void func_02084e40(void);
extern "C" void func_02084f84(void);
extern "C" void func_02084fdc(void);
extern "C" void func_020860ac(void);
extern "C" void func_020864a8(void);
extern "C" void func_020864b4(void);
extern "C" void func_02099a94(void);
extern "C" void func_02099b64(void);
extern "C" void func_02099bbc(void);
extern "C" void func_02099bcc(void);
extern "C" void func_ov000_0210c77c(void);
extern "C" void func_ov000_0210c834(void);
extern "C" void func_ov015_02130b14(void);

extern "C" asm void func_02084ff4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r0
    mov r4, r1
    mov r7, r2
    bl func_02085190
    mov r6, r0
    mov r0, r5
    mov r1, r4
    bl func_02085208
    cmp r0, #0
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    cmn r6, #1
    beq @L_0208504c
    cmp r7, #0
    blt @L_02085044
    ldr r2, [r5, r7, lsl #2]
    mov r0, r5
    mov r1, r4
    bl func_02085154
@L_02085044:
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0208504c:
    ldr r0, [r5, #0x10]
    cmp r0, #4
    movge r0, #0
    ldmgeia sp!, {r3, r4, r5, r6, r7, pc}
    cmp r7, #0
    blt @L_020850a8
    cmp r7, #4
    bge @L_020850dc
@L_0208506c:
    ldr r0, [r5, r7, lsl #2]
    cmp r0, #0
    bne @L_02085090
    str r4, [r5, r7, lsl #2]
    ldr r1, [r5, #0x10]
    mov r0, #1
    add r1, r1, #1
    str r1, [r5, #0x10]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02085090:
    str r4, [r5, r7, lsl #2]
    add r7, r7, #1
    mov r4, r0
    cmp r7, #4
    blt @L_0208506c
    b @L_020850dc
@L_020850a8:
    mov r1, #0
@L_020850ac:
    ldr r0, [r5, r1, lsl #2]
    cmp r0, #0
    bne @L_020850d0
    str r4, [r5, r1, lsl #2]
    ldr r1, [r5, #0x10]
    mov r0, #1
    add r1, r1, #1
    str r1, [r5, #0x10]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_020850d0:
    add r1, r1, #1
    cmp r1, #4
    blt @L_020850ac
@L_020850dc:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_020850e4(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl func_02085190
    cmn r0, #1
    moveq r0, #0
    ldmeqia sp!, {r4, pc}
    ldr r1, [r4, #0x10]
    cmp r1, #0
    movle r0, #0
    ldmleia sp!, {r4, pc}
    sub r1, r1, #1
    cmp r0, r1
    bge @L_02085138
@L_02085118:
    add r1, r4, r0, lsl #2
    ldr r1, [r1, #4]
    str r1, [r4, r0, lsl #2]
    ldr r1, [r4, #0x10]
    add r0, r0, #1
    sub r1, r1, #1
    cmp r0, r1
    blt @L_02085118
@L_02085138:
    mov r0, #0
    str r0, [r4, r1, lsl #2]
    ldr r1, [r4, #0x10]
    mov r0, #1
    sub r1, r1, #1
    str r1, [r4, #0x10]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_02085154(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r5, r2
    mov r6, r1
    bl func_02085190
    mov r4, r0
    mov r0, r7
    mov r1, r5
    bl func_02085190
    mvn r1, #0
    cmp r4, r1
    cmpne r0, r1
    strne r5, [r7, r4, lsl #2]
    strne r6, [r7, r0, lsl #2]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_02085190(void)
{
    ldr r2, [r0, #0x10]
    mov r3, #0
    cmp r2, #0
    ble @L_020851c0
@L_020851a0:
    ldr r2, [r0, r3, lsl #2]
    cmp r1, r2
    moveq r0, r3
    bxeq lr
    ldr r2, [r0, #0x10]
    add r3, r3, #1
    cmp r3, r2
    blt @L_020851a0
@L_020851c0:
    mvn r0, #0
    bx lr
}

extern "C" asm void func_020851c8(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    bl func_02085190
    cmp r0, #0
    movge r0, #0
    ldmgeia sp!, {r3, r4, r5, pc}
    ldr r0, [r5, #0x14]
    cmp r0, #0
    movgt r0, #0
    strle r4, [r5, #0x14]
    movle r0, #1
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_020851fc(void)
{
    mov r1, #0
    str r1, [r0, #0x14]
    bx lr
}

extern "C" asm void func_02085208(void)
{
    cmp r1, #0
    ble @L_02085220
    ldr r0, [r0, #0x14]
    cmp r0, r1
    moveq r0, #1
    bxeq lr
@L_02085220:
    mov r0, #0
    bx lr
}

extern "C" asm void func_02085228(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, r1
    bl func_02085190
    mvn r4, #0
    cmp r0, r4
    ldmneia sp!, {r4, r5, r6, pc}
    mov r0, r6
    mov r1, r5
    bl func_02085208
    cmp r0, #0
    ldrne r4, [r6, #0x10]
    mov r0, r4
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02085260(void)
{
    cmp r1, #0
    ble @L_02085270
    cmp r2, #0
    bge @L_02085278
@L_02085270:
    mvn r0, #0
    bx lr
@L_02085278:
    and r0, r2, #0xff
    orr r0, r0, r1, lsl #8
    bx lr
}

extern "C" asm void func_02085284(void)
{
    cmp r1, #0
    cmnne r1, #1
    movne r0, #1
    moveq r0, #0
    bx lr
}

extern "C" asm void func_02085298(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r5, #0
    mov r7, r1
    mov r8, r0
    mov r1, r5
    mov r6, r2
    bl func_0208530c
    mov r4, r0
    mov r0, r8
    ldr r2, [r0]
    mov r1, r7
    ldr r2, [r2, #4]
    blx r2
    cmp r0, #0
    moveq r0, r5
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
@L_020852d8:
    ldr r0, [r4, #0x5c]
    cmp r7, r0
    bne @L_020852f4
    cmp r6, #0
    strne r5, [r6]
    mov r0, r4
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_020852f4:
    add r5, r5, #1
    cmp r5, #0x18
    add r4, r4, #0xd4
    blt @L_020852d8
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_0208530c(void)
{
    cmp r1, #0x18
    movhs r0, #0
    addlo r2, r0, #0x30
    movlo r0, #0xd4
    mlalo r0, r1, r0, r2
    bx lr
}

extern "C" asm void func_02085324(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, #0
    mov r6, r1
    mov r1, r5
    bl func_0208530c
    mov r4, r0
@L_0208533c:
    mov r0, r4
    bl func_02084de8
    cmp r0, #0
    beq @L_0208535c
    cmp r6, #0
    strne r5, [r6]
    mov r0, r4
    ldmia sp!, {r4, r5, r6, pc}
@L_0208535c:
    add r5, r5, #1
    cmp r5, #0x18
    add r4, r4, #0xd4
    blt @L_0208533c
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02085374(void)
{
    stmdb sp!, {r3, lr}
    cmp r1, #0
    beq @L_02085394
    mov r0, r1
    bl func_02084de8
    cmp r0, #0
    moveq r0, #1
    ldmeqia sp!, {r3, pc}
@L_02085394:
    mov r0, #0
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_0208539c(void)
{
    stmdb sp!, {r3, lr}
    cmp r1, #0
    beq @L_020853c4
    ldr r1, [r1, #0x5c]
    add r0, r0, #0x18
    bl func_02085190
    cmp r0, #0
    movgt r0, #1
    movle r0, #0
    ldmia sp!, {r3, pc}
@L_020853c4:
    mov r0, #0
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_020853cc(void)
{
    stmdb sp!, {r3, lr}
    cmp r1, #0
    moveq r0, #0
    ldmeqia sp!, {r3, pc}
    ldr r1, [r1, #0x5c]
    add r0, r0, #0x18
    bl func_02085208
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_020853ec(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    bl func_0208539c
    cmp r0, #0
    bne @L_02085418
    mov r0, r5
    mov r1, r4
    bl func_020853cc
    cmp r0, #0
    beq @L_02085420
@L_02085418:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_02085420:
    mov r0, r4
    mov r1, #8
    bl func_02084d94
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02085430(void)
{
    ldr r12, =func_02084d94
    mov r0, r1
    mov r1, #0x20
    bx r12
}

extern "C" asm void func_02085444(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    bl func_0208539c
    cmp r0, #0
    bne @L_02085470
    mov r0, r5
    mov r1, r4
    bl func_020853cc
    cmp r0, #0
    beq @L_02085478
@L_02085470:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_02085478:
    mov r0, r4
    mov r1, #0x10
    bl func_02084d94
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02085488(void)
{
    stmdb sp!, {r3, lr}
    cmp r1, #0
    moveq r0, #0
    ldmeqia sp!, {r3, pc}
    mov r0, r1
    mov r1, #0x8000
    bl func_02084d94
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_020854a8(void)
{
    cmp r1, #0
    moveq r0, #0
    bxeq lr
    ldr r1, [r1, #0x5c]
    mov r2, #0
    cmp r1, #0
    ble @L_020854d0
    ldr r0, [r0, #0x18]
    cmp r0, r1
    moveq r2, #1
@L_020854d0:
    mov r0, r2
    bx lr
}

extern "C" asm void func_020854d8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0xc
    mov r9, r3
    ldr r3, [r9]
    mov r6, r0
    str r3, [sp]
    ldr r3, [r9, #4]
    mov r5, r1
    str r3, [sp, #4]
    ldr r3, [r9, #8]
    mov r4, r2
    str r3, [sp, #8]
    ldr r10, [sp, #0x30]
    mov r7, #1
    bl func_02085430
    cmp r0, #0
    bne @L_02085540
    ldr r1, [r9]
    add sp, sp, #0xc
    str r1, [r10]
    ldr r1, [r9, #4]
    mov r0, r7
    str r1, [r10, #4]
    ldr r1, [r9, #8]
    str r1, [r10, #8]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02085540:
    mov r0, r6
    mov r1, r5
    bl func_020853ec
    cmp r0, #0
    add r0, r5, #0xac
    mov r1, #0x20
    beq @L_02085594
    bl func_02099bcc
    ldr r0, =data_020c4678
    add r1, sp, #0
    ldr r0, [r0]
    mov r2, r4
    add r3, r5, #0xac
    bl func_ov000_0210c834
    ands r8, r0, #0xff
    ldrsb r0, [r5, #0xb9]
    orrne r0, r0, #4
    strneb r0, [r5, #0xb9]
    biceq r0, r0, #4
    streqb r0, [r5, #0xb9]
    b @L_02085598
@L_02085594:
    bl func_02099bbc
@L_02085598:
    ldr r0, =data_020c4660
    add r1, sp, #0
    ldr r0, [r0]
    add r2, r5, #0xac
    bl func_ov000_0210c77c
    cmp r0, #0
    bne @L_020855d8
    ldr r1, [r4]
    add sp, sp, #0xc
    str r1, [r10]
    ldr r1, [r4, #4]
    mov r0, #0
    str r1, [r10, #4]
    ldr r1, [r4, #8]
    str r1, [r10, #8]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_020855d8:
    ldrsb r0, [r5, #0xb9]
    tst r0, #2
    movne r9, #1
    moveq r9, #0
    cmp r8, #0
    bne @L_02085614
    cmp r9, #0
    beq @L_02085614
    ldr r0, =data_020c4678
    add r1, sp, #0
    ldr r0, [r0]
    mov r2, r4
    add r3, r5, #0xac
    bl func_ov000_0210c834
    and r8, r0, #0xff
@L_02085614:
    cmp r8, #0
    cmpne r9, #0
    beq @L_02085654
    ldrb r0, [sp, #0x34]
    add sp, sp, #0xc
    cmp r0, #0
    addne r0, r6, #0x1000
    strneb r7, [r0, #0x8f8]
    ldr r1, [r4]
    mov r0, #4
    str r1, [r10]
    ldr r1, [r4, #4]
    str r1, [r10, #4]
    ldr r1, [r4, #8]
    str r1, [r10, #8]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02085654:
    cmp r9, #0
    bne @L_02085664
    cmp r8, #0
    beq @L_020856f8
@L_02085664:
    add r1, sp, #0
    mov r0, r4
    bl func_02099a94
    ldrb r1, [sp, #0x34]
    cmp r1, #0
    beq @L_020856a4
    cmp r9, #0
    cmpne r0, #0xc8
    addlt r1, r6, #0x1000
    strltb r7, [r1, #0x8f8]
    blt @L_020856a4
    cmp r8, #0
    ldrne r1, =0x5dc
    cmpne r0, r1
    addlt r1, r6, #0x1000
    strltb r7, [r1, #0x8f8]
@L_020856a4:
    ldr r1, [r6, #0x14]
    cmp r0, r1
    bge @L_020856d4
    ldr r1, [r4]
    mov r0, #4
    str r1, [r10]
    ldr r1, [sp, #4]
    add sp, sp, #0xc
    str r1, [r10, #4]
    ldr r1, [r4, #8]
    str r1, [r10, #8]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_020856d4:
    ldr r1, [sp]
    mov r0, #5
    str r1, [r10]
    ldr r1, [sp, #4]
    str r1, [r10, #4]
    ldr r1, [sp, #8]
    add sp, sp, #0xc
    str r1, [r10, #8]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_020856f8:
    ldr r1, [sp]
    mov r0, #1
    str r1, [r10]
    ldr r1, [sp, #4]
    str r1, [r10, #4]
    ldr r1, [sp, #8]
    str r1, [r10, #8]
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_02085728(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    movs r4, r1
    mov r5, r0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    bl func_02085488
    cmp r0, #0
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r0, r5
    mov r1, r4
    bl func_02085840
    mov r1, r4
    mov r0, #0
    mov r2, #0xd4
    bl MIi_CpuClearFast
    mov r0, #1
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02085770(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r1
    mov r5, r2
    mov r4, r3
    bl func_02085374
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r0, r5
    str r5, [r6, #0x60]
    strb r4, [r6, #0x65]
    bl func_020864b4
    strb r0, [r6, #0x67]
    mov r0, #1
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_020857ac(void)
{
    stmdb sp!, {r3, lr}
    ldrb r3, [r1, #0xa6]
    cmp r3, #3
    addls pc, pc, r3, lsl #2
    b @L_02085818
    b @L_020857d0
    b @L_020857e0
    b @L_02085818
    b @L_020857f0
@L_020857d0:
    ldr r2, =0xc352
    mov r3, #3
    bl func_02085770
    ldmia sp!, {r3, pc}
@L_020857e0:
    ldr r2, =0xc351
    mov r3, #3
    bl func_02085770
    ldmia sp!, {r3, pc}
@L_020857f0:
    cmp r2, #0
    ldr r12, =0xc351
    ble @L_02085808
    ldr r3, [r0, #0x10]
    cmp r2, r3
    suble r12, r12, #1
@L_02085808:
    mov r2, r12
    mov r3, #3
    bl func_02085770
    ldmia sp!, {r3, pc}
@L_02085818:
    mov r0, #1
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_02085828(void)
{
    ldr r2, =0xc350
    ldr r12, =func_02085770
    mov r3, #3
    bx r12
}

extern "C" asm void func_02085840(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    bl func_02085374
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r1, [r4, #0x5c]
    add r0, r5, #0x18
    bl func_02085190
    cmp r0, #0
    movlt r0, #0
    ldmltia sp!, {r3, r4, r5, pc}
    mov r0, r4
    mov r1, #0x8000
    bl func_02084dc0
    ldr r1, [r4, #0x5c]
    add r0, r5, #0x18
    bl func_020850e4
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r1, [r4, #0x5c]
    mov r0, r5
    mov r2, #0
    bl func_020860ac
    mov r0, #1
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_020858b0(void)
{
    cmp r1, #0
    ldrneb r0, [r1, #0x2d]
    cmpne r0, #0
    movne r0, #1
    moveq r0, #0
    bx lr
}

extern "C" asm void func_020858c8(void)
{
    stmdb sp!, {r3, lr}
    cmp r1, #0
    ldmeqia sp!, {r3, pc}
    ldrsh r3, [r1, #0x2e]
    cmp r3, #0
    movgt r3, #1
    movle r3, #0
    strleh r3, [r1, #0x2e]
    strb r3, [r1, #0x2d]
    cmp r2, #0
    ldmeqia sp!, {r3, pc}
    bl func_02085828
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_020858fc(void)
{
    stmdb sp!, {r4, lr}
    ldr r1, =data_020af4c0
    mov r4, r0
    str r1, [r4]
    bl func_02085934
    mov r0, r4
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_0208591c(void)
{
    bx lr
}

extern "C" asm void func_02085920(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl _ZdlPv
    mov r0, r4
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_02085934(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    add r0, r5, #0x18
    bl func_02084fdc
    mov r4, #0
    ldr r2, =0x13e0
    mov r1, r4
    add r0, r5, #0x30
    bl MI_CpuFill8
    add r0, r5, #0x410
    mov r1, r4
    add r0, r0, #0x1000
    mov r2, #0x10
    bl MI_CpuFill8
    add r0, r5, #0x420
    add r0, r0, #0x1000
    mov r1, #0x200
    mov r2, #6
    bl func_02084e40
    add r0, r5, #0x1000
    str r4, [r0, #0x8e8]
    str r4, [r0, #0x8ec]
    strb r4, [r0, #0x8f8]
    add r0, r5, #0x8f0
    add r0, r0, #0x1000
    mov r1, r4
    mov r2, #8
    bl MI_CpuFill8
    str r4, [r5, #0x10]
    str r4, [r5, #0x14]
    str r4, [r5, #4]
    str r4, [r5, #8]
    str r4, [r5, #0xc]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_020859c0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x6c
    mov r4, r1
    cmp r4, #0
    mov r8, r0
    mov r6, r2
    mov r7, r3
    addle sp, sp, #0x6c
    mvnle r0, #0
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldr r5, =0xfff
    ldr r0, =data_020e88a0
    and r4, r4, r5
    mov r1, r4, lsl #0x10
    add r2, sp, #0xc
    mov r1, r1, lsr #0x10
    bl _ZN17UnkClass_020621b413func_0207a5c0Ev
    cmp r0, #0
    addeq sp, sp, #0x6c
    subeq r0, r5, #0x1000
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    mov r0, r8
    ldr r3, [r0]
    mov r1, r4
    ldr r3, [r3]
    mov r2, r6
    blx r3
    mov r6, r0
    mov r0, r8
    ldr r2, [r0]
    mov r1, r6
    ldr r2, [r2, #4]
    blx r2
    cmp r0, #0
    addeq sp, sp, #0x6c
    subeq r0, r5, #0x1000
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    mov r0, r4
    mov r1, #0
    bl func_ov015_02130b14
    mov r5, #0
    cmp r0, #0
    strneh r7, [r0, #0x6e]
    mov r0, r8
    mov r1, r6
    mov r2, r5
    bl func_02085298
    cmp r0, #0
    ldrne r1, [sp, #0x88]
    addne sp, sp, #0x6c
    strneb r1, [r0, #0x67]
    strneh r7, [r0, #0xa8]
    movne r0, r6
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, pc}
    mov r0, r8
    mov r1, r5
    bl func_02085324
    movs r4, r0
    addeq sp, sp, #0x6c
    subeq r0, r5, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    bl func_02084c4c
    add r1, sp, #0xc
    mov r0, r4
    bl func_02084ba0
    ldr r0, [sp, #0x88]
    mov r1, r5
    str r6, [r4, #0x5c]
    bl func_020864a8
    str r0, [r4, #0x60]
    strb r5, [r4, #0x64]
    ldr r1, [sp, #0x88]
    strb r5, [r4, #0x65]
    strb r1, [r4, #0x67]
    ldr r0, =0x555
    strh r7, [r4, #0xa8]
    str r0, [r4, #0x9c]
    mov r0, r4
    mov r1, #0x39
    bl func_02084dac
    ldr r0, [r4, #0x9c]
    sub r3, sp, #8
    stmib sp, {r0, r5}
    add r0, r4, #0x84
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r0, r4, #0xac
    mov r1, #1
    ldmia r3, {r2, r3}
    bl func_02099b64
    ldrsb r0, [r4, #0xb9]
    orr r0, r0, #0x10
    strb r0, [r4, #0xb9]
    ldr r0, [r4, #0x5c]
    add sp, sp, #0x6c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_02085b4c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    mov r2, #0
    bl func_02085298
    mov r1, r0
    mov r0, r4
    bl func_02085728
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_02085b6c(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, #0
    mov r1, r5
    mov r6, r0
    bl func_0208530c
    mov r4, r0
@L_02085b84:
    mov r0, r6
    mov r1, r4
    bl func_02085728
    add r5, r5, #1
    cmp r5, #0x18
    add r4, r4, #0xd4
    blt @L_02085b84
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02085ba4(void)
{
    ldr r12, =func_02085298
    mov r2, #0
    bx r12
}

extern "C" asm void func_02085bb4(void)
{
    stmdb sp!, {r3, lr}
    cmp r1, #0
    blt @L_02085bcc
    ldr r2, [r0, #0x28]
    cmp r1, r2
    blt @L_02085bd4
@L_02085bcc:
    mov r0, #0
    ldmia sp!, {r3, pc}
@L_02085bd4:
    add r1, r0, r1, lsl #2
    ldr r1, [r1, #0x18]
    mov r2, #0
    bl func_02085298
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_02085be8(void)
{
    ldr r1, [r0, #0x2c]
    ldr r12, =func_02085298
    mov r2, #0
    bx r12
}

extern "C" asm void func_02085bfc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, #0
    mov r6, r1
    mov r1, r4
    mov r7, r0
    bl func_0208530c
    movs r5, r0
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r4, #1
@L_02085c24:
    mov r0, r7
    mov r1, r5
    bl func_02085374
    cmp r0, #0
    beq @L_02085c48
    ldr r0, [r5, #0x5c]
    cmp r0, r6
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
@L_02085c48:
    add r4, r4, #1
    cmp r4, #0x18
    add r5, r5, #0xd4
    ble @L_02085c24
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_02085c60(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub r1, r1, #1
    mov r5, r0
    bl func_0208530c
    movs r4, r0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r0, r5
    mov r1, r4
    bl func_02085374
    cmp r0, #0
    moveq r4, #0
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02085c98(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, #0
    mov r1, r5
    mov r7, r0
    bl func_0208530c
    mov r4, r0
    mov r6, r5
@L_02085cb4:
    mov r0, r7
    mov r1, r4
    bl func_02085374
    cmp r0, #0
    add r6, r6, #1
    addne r5, r5, #1
    cmp r6, #0x18
    add r4, r4, #0xd4
    blt @L_02085cb4
    mov r0, r5
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_02085ce0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, #0
    mov r6, r1
    mov r1, r5
    mov r7, r0
    bl func_0208530c
    mov r4, r0
@L_02085cfc:
    mov r0, r7
    mov r1, r4
    bl func_02085374
    cmp r0, #0
    beq @L_02085d1c
    subs r6, r6, #1
    ldrmi r0, [r4, #0x5c]
    ldmmiia sp!, {r3, r4, r5, r6, r7, pc}
@L_02085d1c:
    add r5, r5, #1
    cmp r5, #0x18
    add r4, r4, #0xd4
    blt @L_02085cfc
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_02085d34(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, #0
    mov r6, r1
    mov r1, r5
    mov r7, r0
    bl func_0208530c
    mov r4, r0
@L_02085d50:
    mov r0, r7
    mov r1, r4
    bl func_02085374
    cmp r0, #0
    beq @L_02085d70
    subs r6, r6, #1
    movmi r0, r4
    ldmmiia sp!, {r3, r4, r5, r6, r7, pc}
@L_02085d70:
    add r5, r5, #1
    cmp r5, #0x18
    add r4, r4, #0xd4
    blt @L_02085d50
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_02085d88(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r4, [r0]
    ldr r3, =0xfff
    ldr r4, [r4]
    mov r5, r0
    and r1, r1, r3
    blx r4
    mov r4, r0
    mov r0, r5
    ldr r2, [r0]
    mov r1, r4
    ldr r2, [r2, #4]
    blx r2
    cmp r0, #0
    beq @L_02085de0
    mov r0, r5
    mov r1, r4
    mov r2, #0
    bl func_02085298
    cmp r0, #0
    movne r0, r4
    ldmneia sp!, {r3, r4, r5, pc}
@L_02085de0:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02085dec(void)
{
    mov r0, r1, asr #8
    str r0, [r2]
    and r0, r1, #0xff
    str r0, [r3]
    bx lr
}

extern "C" asm void func_02085e00(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r2
    mov r6, r0
    mov r4, r3
    mov r2, #0
    bl func_02085298
    mov r1, r0
    mov r0, r6
    mov r2, r5
    mov r3, r4
    bl func_02085770
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02085e30(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, #0
    mov r6, r2
    mov r2, r5
    mov r7, r0
    bl func_02085298
    mov r4, r0
    mov r0, r7
    mov r1, r4
    bl func_02085374
    cmp r0, #0
    moveq r0, r5
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r4
    mov r1, r6
    bl func_02084d7c
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_02085e78(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r5, #0
    mov r7, r1
    mov r1, r5
    mov r8, r0
    mov r6, r2
    bl func_0208530c
    mov r4, r0
@L_02085e98:
    mov r0, r8
    mov r1, r4
    mov r2, r7
    mov r3, r6
    bl func_02085770
    add r5, r5, #1
    cmp r5, #0x18
    add r4, r4, #0xd4
    blt @L_02085e98
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_02085ec0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x14
    mov r5, r1
    mov r6, r0
    mov r4, #0
    add r7, sp, #8
    mov r1, r2
    mov r0, r5
    mov r2, r4
    mov r8, r3
    str r4, [r7]
    str r4, [r7, #4]
    str r4, [r7, #8]
    bl func_02085298
    mov r4, r0
    mov r0, r5
    mov r1, r4
    bl func_02085374
    cmp r0, #0
    ldmeqia r7, {r0, r1, r2}
    addeq sp, sp, #0x14
    stmeqia r6, {r0, r1, r2}
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    ldr r1, [sp, #0x30]
    str r8, [r4, #0x84]
    ldr r0, [sp, #0x34]
    str r1, [r4, #0x88]
    str r0, [r4, #0x8c]
    cmp r4, #0
    beq @L_02085f68
    ldr r1, [r4, #0x5c]
    add r0, r5, #0x18
    bl func_02085228
    cmp r0, #0
    blt @L_02085f68
    ldr r1, [sp, #0x40]
    cmp r1, #0
    movne r1, #0x55
    mulne r1, r0, r1
    ldrne r0, [r4, #0x8c]
    subne r0, r0, r1
    strne r0, [r4, #0x8c]
@L_02085f68:
    add r2, r4, #0x84
    str r2, [sp]
    mov r12, #0
    mov r0, r5
    mov r1, r4
    mov r3, r2
    str r12, [sp, #4]
    bl func_020854d8
    ldr r0, [r4, #0x84]
    ldr r2, [sp, #0x3c]
    str r0, [r4, #0x78]
    ldr r1, [r4, #0x88]
    mov r0, r5
    str r1, [r4, #0x7c]
    ldr r3, [r4, #0x8c]
    mov r1, r4
    str r3, [r4, #0x80]
    bl func_020858c8
    mov r0, r5
    mov r1, r4
    bl func_020854a8
    cmp r0, #0
    ldrne r0, [sp, #0x38]
    cmpne r0, #0
    beq @L_02085fe4
    ldrh r3, [r4, #0x6a]
    add r0, r5, #0x420
    ldr r1, [r4, #0x84]
    ldr r2, [r4, #0x8c]
    add r0, r0, #0x1000
    bl func_02084f84
@L_02085fe4:
    add r0, r4, #0x84
    ldmia r0, {r0, r1, r2}
    stmia r6, {r0, r1, r2}
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_02085ff8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #8
    mov r4, #0
    mov r6, r2
    mov r2, r4
    mov r7, r0
    bl func_02085298
    mov r5, r0
    mov r0, r7
    mov r1, r5
    bl func_02085374
    cmp r0, #0
    addeq sp, sp, #8
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    cmp r6, #0
    beq @L_02086050
    add r2, r5, #0x84
    mov r0, r7
    mov r1, r5
    mov r3, r2
    stmia sp, {r2, r4}
    bl func_020854d8
@L_02086050:
    ldr r0, [r5, #0x84]
    str r0, [r5, #0x78]
    ldr r0, [r5, #0x88]
    str r0, [r5, #0x7c]
    ldr r0, [r5, #0x8c]
    str r0, [r5, #0x80]
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}
