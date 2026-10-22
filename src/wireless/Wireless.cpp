#include "wireless/Wireless.hpp"

extern "C" char data_020c4588[];
extern "C" void DC_FlushRange(void);
extern "C" void DC_InvalidateRange(void);
extern "C" void MI_CpuCopy8(void);
extern "C" void MI_CpuFill8(void);
extern "C" void WM_SetIndCallback(void);
extern "C" void WM_StartKeySharing(void);
extern "C" void _ZN8GameHeap4FreeEPv(void);
extern "C" void _ZN8GameHeap5AllocEiii(void);
extern "C" void func_02006d84(void);
extern "C" void func_02009380(void);
extern "C" void func_02012e6c(void);
extern "C" void func_020131c0(void);
extern "C" void func_020131e0(void);
extern "C" void func_02013274(void);
extern "C" void func_02013308(void);
extern "C" void func_020134f8(void);
extern "C" void func_020136b4(void);
extern "C" void func_0201372c(void);
extern "C" void func_02013768(void);
extern "C" void func_020137ac(void);
extern "C" void func_02013940(void);
extern "C" void func_02013950(void);
extern "C" void func_02013994(void);
extern "C" void func_02013ae4(void);
extern "C" void func_02013b28(void);
extern "C" void func_02013bf4(void);
extern "C" void func_02013f08(void);
extern "C" void func_02013fec(void);
extern "C" void func_02014030(void);
extern "C" void func_0201407c(void);
extern "C" void func_020141b4(void);
extern "C" void func_02014414(void);
extern "C" void func_02014654(void);
extern "C" void func_020146a0(void);
extern "C" void func_02014ee0(void);
extern "C" void func_02014f80(void);
extern "C" void func_02014f8c(void);
extern "C" void func_0201509c(void);
extern "C" void func_02015218(void);
extern "C" void memcmp(void);

asm void Wireless::func_0203c0ec()
{
    bx lr
}

asm void Wireless::func_0203c0f0()
{
    bx lr
}

asm void Wireless::func_0203c0f4()
{
    str r1, [r0]
    bx lr
}

asm void Wireless::func_0203c0fc()
{
    stmdb sp!, {r3, lr}
    ldr r2, [r0]
    cmp r2, #0
    beq @L_0203c120
    mov r0, r2
    mov r2, #6
    mov r3, #1
    bl _ZN8GameHeap5AllocEiii
    ldmia sp!, {r3, pc}
@L_0203c120:
    ldr r2, [r0, #0x240]
    cmp r2, #0
    moveq r0, #0
    ldmeqia sp!, {r3, pc}
    mov r0, r1
    blx r2
    ldmia sp!, {r3, pc}
}

asm void Wireless::func_0203c13c()
{
    stmdb sp!, {r3, lr}
    ldr r2, [r0]
    cmp r2, #0
    beq @L_0203c158
    mov r0, r2
    bl _ZN8GameHeap4FreeEPv
    ldmia sp!, {r3, pc}
@L_0203c158:
    ldr r2, [r0, #0x244]
    cmp r2, #0
    ldmeqia sp!, {r3, pc}
    mov r0, r1
    blx r2
    ldmia sp!, {r3, pc}
}

asm void Wireless::func_0203c170()
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r4, =data_020c4588
    mov r6, r0
    ldr r0, [r4]
    mov r5, r1
    cmp r0, #0
    mov r4, #0
    movne r0, #1
    ldmneia sp!, {r4, r5, r6, pc}
    ldr r0, [r6]
    cmp r0, #0
    bne @L_0203c1b8
    ldr r0, [r6, #0x240]
    cmp r0, #0
    ldrne r0, [r6, #0x244]
    cmpne r0, #0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
@L_0203c1b8:
    mul r1, r2, r3
    add r0, r6, #0x2400
    add r1, r1, #4
    strh r1, [r0, #0x64]
    ldrh r1, [r0, #0x64]
    strh r2, [r0, #0x66]
    strh r3, [r0, #0x5e]
    cmp r1, #0x200
    movhi r0, #0
    ldmhiia sp!, {r4, r5, r6, pc}
    mov r1, r4
    add r0, r6, #0x360
    mov r2, #6
    bl MI_CpuFill8
    ldr r2, =0x1078
    mov r1, r4
    add r0, r6, #0x380
    bl MI_CpuFill8
    mov r0, r6
    mov r1, #0xf20
    bl func_0203c0fc
    str r0, [r6, #0x20c]
    cmp r0, #0
    moveq r0, r4
    ldmeqia sp!, {r4, r5, r6, pc}
    add r0, r0, #0x1f
    ldr r1, =func_0203c444
    bic r0, r0, #0x1f
    mov r2, #2
    bl func_020136b4
    cmp r0, #2
    movne r0, r4
    ldmneia sp!, {r4, r5, r6, pc}
    add r0, r6, #0x44
    mov r1, r4
    add r0, r0, #0x2400
    mov r2, #0x18
    bl MI_CpuFill8
    add r0, r6, #0x300
    strh r4, [r0, #0x24]
    ldr r1, =data_020c4588
    str r5, [r6, #0x328]
    str r4, [r6, #0x320]
    str r6, [r1]
    add r1, r6, #0x2400
    ldrh r3, [r1, #0x64]
    ldrh r2, [r1, #0x66]
    add r0, r6, #0x2000
    add r3, r3, #0x23
    add r2, r2, #0x21
    bic r3, r3, #0x1f
    bic r2, r2, #0x1f
    cmp r3, r2
    movlt r3, r2
    str r4, [r0, #0x440]
    add r0, r3, #0x3f
    bic r5, r0, #0x3f
    strh r4, [r1, #0x6a]
    mov r0, r6
    add r1, r5, #0x20
    bl func_0203c0fc
    mov r2, r5
    mov r1, #0
    str r0, [r6, #0x204]
    str r5, [r6, #0x238]
    bl func_02009380
    add r0, r6, #0x2400
    ldrh r2, [r0, #0x66]
    ldrh r1, [r0, #0x5e]
    ldrh r0, [r0, #0x64]
    add r2, r2, #0xe
    sub r1, r1, #1
    mul r1, r2, r1
    add r1, r1, #0x29
    bic r1, r1, #0x1f
    add r0, r0, #0x55
    bic r0, r0, #0x1f
    mov r1, r1, lsl #1
    cmp r1, r0, lsl #1
    mov r0, r0, lsl #1
    movlt r1, r0
    add r0, r1, #0x3f
    bic r5, r0, #0x3f
    mov r0, r6
    add r1, r5, #0x20
    bl func_0203c0fc
    mov r1, r4
    mov r2, r5
    str r0, [r6, #0x208]
    str r5, [r6, #0x23c]
    bl func_02009380
    ldr r0, [r6, #0x204]
    cmp r0, #0
    ldrne r0, [r6, #0x208]
    cmpne r0, #0
    ldrne r1, =data_020c4588
    moveq r0, #0
    movne r0, #1
    strne r4, [r1, #4]
    strneb r0, [r6, #0x236]
    ldmia sp!, {r4, r5, r6, pc}
}

asm void Wireless::func_0203c358()
{
    ldr r12, =func_020131e0
    bx r12
}

asm void Wireless::func_0203c364()
{
    stmdb sp!, {r3, lr}
    sub sp, sp, #8
    mov r3, r0
    ldrb r0, [r3, #0x236]
    cmp r1, #0
    add r1, r3, #0x300
    orrne r0, r0, #1
    andeq r0, r0, #0xfe
    strb r0, [r3, #0x236]
    add r0, r3, #0x200
    ldrh r2, [r0, #0x34]
    ldr r0, =func_0203c41c
    str r2, [sp]
    ldrb r2, [r3, #0x236]
    str r2, [sp, #4]
    ldrh r2, [r1, #0x24]
    ldr r1, [r3, #0x320]
    ldr r3, [r3, #0x328]
    bl func_0201509c
    add sp, sp, #8
    ldmia sp!, {r3, pc}
}

asm void Wireless::func_0203c3bc()
{
    stmdb sp!, {r3, lr}
    sub sp, sp, #8
    mov r12, r0
    add r0, r12, #0x2400
    ldrh r0, [r0, #0x6c]
    add r3, r12, #0x300
    str r1, [r12, #0x320]
    tst r0, #2
    addeq sp, sp, #8
    strh r2, [r3, #0x24]
    ldmeqia sp!, {r3, pc}
    add r0, r12, #0x200
    ldrh r1, [r0, #0x34]
    ldr r0, =func_0203c41c
    str r1, [sp]
    ldrb r1, [r12, #0x236]
    str r1, [sp, #4]
    ldrh r2, [r3, #0x24]
    ldr r1, [r12, #0x320]
    ldr r3, [r12, #0x328]
    bl func_0201509c
    add sp, sp, #8
    ldmia sp!, {r3, pc}
}

asm void Wireless::func_0203c41c()
{
    bx lr
}

asm void Wireless::func_0203c420()
{
    add r2, r0, #0x1000
    ldrb r3, [r2, #0x3e2]
    mov r2, #1
    tst r3, r2, lsl r1
    moveq r0, #0
    addne r2, r0, #0x7e0
    movne r0, #0xc0
    mlane r0, r1, r0, r2
    bx lr
}

asm void Wireless::func_0203c444()
{
    stmdb sp!, {r4, lr}
    ldr r4, =data_020c4588
    ldr r1, [r4]
    cmp r1, #0
    ldmeqia sp!, {r4, pc}
    ldrh r0, [r0, #2]
    cmp r0, #0
    addne r0, r1, #0x2400
    movne r1, #9
    strneh r1, [r0, #0x6a]
    ldmneia sp!, {r4, pc}
    ldr r0, =func_0203c4a4
    bl WM_SetIndCallback
    cmp r0, #0
    ldr r0, [r4]
    movne r1, #9
    addne r0, r0, #0x2400
    strneh r1, [r0, #0x6a]
    moveq r1, #1
    addeq r0, r0, #0x2400
    streqh r1, [r0, #0x6a]
    ldmia sp!, {r4, pc}
}

asm void Wireless::func_0203c4a4()
{
    bx lr
}

asm void Wireless::func_0203c4a8()
{
    stmdb sp!, {r3, lr}
    add r1, r0, #0x2400
    mov r2, #2
    ldr r0, =func_0203c4d4
    strh r2, [r1, #0x6a]
    bl func_0201372c
    cmp r0, #2
    moveq r0, #1
    movne r0, #0
    ldmia sp!, {r3, pc}
}

asm void Wireless::func_0203c4d4()
{
    ldr r2, =data_020c4588
    ldr r3, [r2]
    cmp r3, #0
    bxeq lr
    ldrh r1, [r0, #2]
    cmp r1, #0
    beq @L_0203c510
    add r1, r3, #0x2400
    mov r3, #9
    strh r3, [r1, #0x6a]
    ldr r1, [r2]
    ldrh r2, [r0, #2]
    add r0, r1, #0x2000
    str r2, [r0, #0x440]
    bx lr
@L_0203c510:
    add r0, r3, #0x2400
    mov r1, #1
    strh r1, [r0, #0x6a]
    ldr r1, [r2]
    ldr r0, =0xfffd
    add r1, r1, #0x2400
    ldrh r2, [r1, #0x6c]
    and r0, r2, r0
    strh r0, [r1, #0x6c]
    bx lr
}

asm void Wireless::func_0203c540()
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    add r5, r4, #0x2400
    ldrh r1, [r5, #0x6a]
    cmp r1, #6
    addls pc, pc, r1, lsl #2
    b @L_0203c5e8
    b @L_0203c5e8
    b @L_0203c578
    b @L_0203c5bc
    b @L_0203c57c
    b @L_0203c5a8
    b @L_0203c584
    b @L_0203c594
@L_0203c578:
    ldmia sp!, {r4, r5, r6, pc}
@L_0203c57c:
    bl func_0203d8dc
    b @L_0203c618
@L_0203c584:
    bl func_0203cc48
    cmp r0, #0
    beq @L_0203c618
    b @L_0203c608
@L_0203c594:
    add r0, r4, #0x1400
    bl func_02014654
    cmp r0, #0
    beq @L_0203c5a8
    b @L_0203c608
@L_0203c5a8:
    mov r0, r4
    bl func_0203cc80
    cmp r0, #0
    bne @L_0203c618
    b @L_0203c608
@L_0203c5bc:
    cmp r1, #1
    ldmeqia sp!, {r4, r5, r6, pc}
    add r4, r4, #0x6a
    mov r6, #2
@L_0203c5cc:
    mov r1, r6
    add r0, r4, #0x2400
    bl DC_FlushRange
    ldrh r0, [r5, #0x6a]
    cmp r0, #1
    bne @L_0203c5cc
    ldmia sp!, {r4, r5, r6, pc}
@L_0203c5e8:
    add r0, r4, #0x2400
    ldrh r0, [r0, #0x6c]
    tst r0, #2
    mov r0, r4
    beq @L_0203c610
    bl func_0203cc80
    cmp r0, #0
    bne @L_0203c618
@L_0203c608:
    mov r0, r4
    b @L_0203c610
@L_0203c610:
    bl func_0203c4a8
    mov r6, r0
@L_0203c618:
    cmp r6, #0
    addne r5, r4, #0x2400
    ldrneh r0, [r5, #0x6a]
    cmpne r0, #1
    ldmeqia sp!, {r4, r5, r6, pc}
    add r4, r4, #0x6a
    mov r6, #2
@L_0203c634:
    mov r1, r6
    add r0, r4, #0x2400
    bl DC_FlushRange
    ldrh r0, [r5, #0x6a]
    cmp r0, #1
    bne @L_0203c634
    ldmia sp!, {r4, r5, r6, pc}
}

asm void Wireless::func_0203c650()
{
    ldrh r0, [r0, #2]
    cmp r0, #0
    ldrne r0, =data_020c4588
    movne r1, #9
    ldreq r0, =data_020c4588
    moveq r1, #0
    ldr r0, [r0]
    add r0, r0, #0x2400
    strh r1, [r0, #0x6a]
    bx lr
}

asm void Wireless::func_0203c67c()
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r4, r0
    add r0, r4, #0x2400
    ldrh r0, [r0, #0x6a]
    mov r7, #0
    cmp r0, #1
    movne r0, r7
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, =func_0203c650
    bl func_02013768
    cmp r0, #2
    movne r0, r7
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    add r6, r4, #0x2400
    ldrh r0, [r6, #0x6a]
    cmp r0, #1
    bne @L_0203c6e0
    add r5, r4, #0x6a
    mov r8, #2
@L_0203c6c8:
    mov r1, r8
    add r0, r5, #0x2400
    bl DC_FlushRange
    ldrh r0, [r6, #0x6a]
    cmp r0, #1
    beq @L_0203c6c8
@L_0203c6e0:
    ldr r0, =data_020c4588
    ldr r0, [r0]
    add r0, r0, #0x2400
    ldrh r0, [r0, #0x6a]
    cmp r0, #9
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r1, [r4, #0x204]
    cmp r1, #0
    beq @L_0203c714
    mov r0, r4
    bl func_0203c13c
    str r7, [r4, #0x204]
@L_0203c714:
    ldr r1, [r4, #0x208]
    cmp r1, #0
    beq @L_0203c72c
    mov r0, r4
    bl func_0203c13c
    str r7, [r4, #0x208]
@L_0203c72c:
    ldr r1, [r4, #0x20c]
    cmp r1, #0
    beq @L_0203c744
    mov r0, r4
    bl func_0203c13c
    str r7, [r4, #0x20c]
@L_0203c744:
    ldr r0, =data_020c4588
    str r7, [r0]
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void Wireless::func_0203c75c()
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #8
    mov r5, r0
    add r0, r5, #0x2400
    ldrh r0, [r0, #0x6c]
    tst r0, #2
    addne sp, sp, #8
    movne r0, #1
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r0, [r5, #0x238]
    mov r4, #1
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    stmia sp, {r0, r4}
    ldr r2, [r5, #0x208]
    ldr r0, [r5, #0x204]
    ldr r1, [r5, #0x23c]
    add r3, r0, #0x1f
    add r12, r2, #0x1f
    mov r2, r1, lsl #0x10
    ldr r0, =func_0203c7e0
    bic r1, r12, #0x1f
    mov r2, r2, lsr #0x10
    bic r3, r3, #0x1f
    bl func_02013f08
    cmp r0, #2
    addne r1, r5, #0x2000
    strne r0, [r1, #0x440]
    movne r0, #0
    moveq r0, r4
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, pc}
}

asm void Wireless::func_0203c7e0()
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    ldr r4, =data_020c4588
    ldr r2, [r4]
    cmp r2, #0
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, pc}
    ldrh r1, [r0, #2]
    cmp r1, #0
    bgt @L_0203c810
    beq @L_0203c858
    b @L_0203c830
@L_0203c810:
    cmp r1, #0xf
    bgt @L_0203c830
    cmp r1, #9
    blt @L_0203c830
    cmpne r1, #0xd
    cmpne r1, #0xf
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, pc}
@L_0203c830:
    add r1, r2, #0x2400
    mov r2, #9
    strh r2, [r1, #0x6a]
    ldr r1, =data_020c4588
    ldrh r2, [r0, #2]
    ldr r0, [r1]
    add sp, sp, #4
    add r0, r0, #0x2000
    str r2, [r0, #0x440]
    ldmia sp!, {r3, r4, pc}
@L_0203c858:
    ldrh r0, [r0, #4]
    sub r0, r0, #0xa
    cmp r0, #3
    addls pc, pc, r0, lsl #2
    b @L_0203c97c
    b @L_0203c87c
    b @L_0203c97c
    b @L_0203c97c
    b @L_0203c97c
@L_0203c87c:
    add r0, r2, #0x2400
    ldrh r1, [r0, #0x6c]
    orr r1, r1, #2
    strh r1, [r0, #0x6c]
    ldr r12, [r4]
    add r0, r12, #0x2400
    ldrh r1, [r0, #0x68]
    tst r1, #1
    beq @L_0203c8fc
    ldrh r0, [r0, #0x6a]
    cmp r0, #5
    beq @L_0203c970
    add r0, r12, #0xc20
    add r0, r0, #0x1000
    mov r1, #0xd
    bl WM_StartKeySharing
    cmp r0, #0
    beq @L_0203c8e0
    ldr r1, [r4]
    mov r2, #9
    add r1, r1, #0x2400
    strh r2, [r1, #0x6a]
    ldr r1, [r4]
    add r1, r1, #0x2000
    str r0, [r1, #0x440]
@L_0203c8e0:
    ldr r0, =data_020c4588
    mov r1, #5
    ldr r0, [r0]
    add sp, sp, #4
    add r0, r0, #0x2400
    strh r1, [r0, #0x6a]
    ldmia sp!, {r3, r4, pc}
@L_0203c8fc:
    tst r1, #2
    beq @L_0203c970
    mov r2, #1
    str r2, [sp]
    ldrh r1, [r0, #0x5e]
    ldrh r3, [r0, #0x66]
    add r0, r12, #0x1400
    mov r1, r2, lsl r1
    sub r1, r1, #1
    mov r1, r1, lsl #0x10
    mov r2, r1, lsr #0x10
    mov r1, #0xd
    bl func_02014414
    cmp r0, #0
    ldreq r0, [r4]
    moveq r1, #6
    addeq r0, r0, #0x2400
    streqh r1, [r0, #0x6a]
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, pc}
    ldr r1, [r4]
    mov r2, #9
    add r1, r1, #0x2400
    strh r2, [r1, #0x6a]
    ldr r1, [r4]
    add sp, sp, #4
    add r1, r1, #0x2000
    str r0, [r1, #0x440]
    ldmia sp!, {r3, r4, pc}
@L_0203c970:
    add r0, r12, #0x2400
    mov r1, #4
    strh r1, [r0, #0x6a]
@L_0203c97c:
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}

asm void Wireless::func_0203c988()
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    add r0, r4, #0x2400
    ldrh r1, [r0, #0x6e]
    ldrh r2, [r0, #0x70]
    ldr r0, =func_0203c9c0
    bl func_02014030
    cmp r0, #2
    addne r1, r4, #0x2000
    strne r0, [r1, #0x440]
    movne r0, #0
    moveq r0, #1
    ldmia sp!, {r4, pc}
}

asm void Wireless::func_0203c9c0()
{
    stmdb sp!, {r4, lr}
    ldr r4, =data_020c4588
    ldr r0, [r4]
    bl func_0203c75c
    cmp r0, #0
    ldreq r0, [r4]
    moveq r1, #9
    addeq r0, r0, #0x2400
    streqh r1, [r0, #0x6a]
    ldmia sp!, {r4, pc}
}

asm void Wireless::func_0203c9ec()
{
    stmdb sp!, {r3, lr}
    mov r2, r0
    add r0, r2, #0x2400
    ldrh r0, [r0, #0x6a]
    cmp r0, #6
    movne r0, #0
    ldmneia sp!, {r3, pc}
    add r0, r2, #0x1400
    add r2, r2, #4
    bl func_020146a0
    cmp r0, #0
    beq @L_0203ca24
    cmp r0, #5
    b @L_0203ca2c
@L_0203ca24:
    mov r0, #1
    ldmia sp!, {r3, pc}
@L_0203ca2c:
    ldr r1, =data_020c4588
    ldr r1, [r1]
    add r1, r1, #0x2000
    str r0, [r1, #0x440]
    mov r0, #0
    ldmia sp!, {r3, pc}
}

asm void Wireless::func_0203ca48()
{
    stmdb sp!, {r3, lr}
    ldrh r1, [r0, #2]
    cmp r1, #0
    beq @L_0203ca60
    cmp r1, #0xf
    ldmneia sp!, {r3, pc}
@L_0203ca60:
    ldr r2, [r0, #0x20]
    cmp r2, #0
    ldmeqia sp!, {r3, pc}
    mov r0, #1
    cmp r1, #0
    movne r0, #0
    blx r2
    ldmia sp!, {r3, pc}
}

asm void Wireless::func_0203ca80()
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0xc
    mov lr, r0
    add r0, lr, #0x2400
    ldrh r12, [r0, #0x6a]
    mov r6, r1
    mov r5, r2
    cmp r12, #4
    mov r4, r3
    addne sp, sp, #0xc
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, pc}
    ldrh r0, [r0, #0x6c]
    tst r0, #0x10
    addne sp, sp, #0xc
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, pc}
    ldr r0, [lr, #0x204]
    ldr r1, [lr, #0x238]
    bl DC_FlushRange
    ldr r0, =0xffff
    mov r1, r4
    str r0, [sp]
    mov r12, #0xe
    ldr r0, =func_0203ca48
    mov r2, r6
    mov r3, r5
    str r12, [sp, #4]
    mov r4, #1
    str r4, [sp, #8]
    bl func_0201407c
    ldr r1, =data_020c4588
    cmp r0, #2
    ldr r1, [r1]
    movne r4, #0
    add r1, r1, #0x2000
    str r0, [r1, #0x440]
    mov r0, r4
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, pc}
}

asm void Wireless::func_0203cb2c()
{
    stmdb sp!, {r3, lr}
    mov r1, r0
    ldrh r0, [r1, #2]
    cmp r0, #0
    ldmneia sp!, {r3, pc}
    ldr r0, =data_020c4588
    ldr r3, [r0, #4]
    cmp r3, #0
    ldmeqia sp!, {r3, pc}
    ldrh r0, [r1, #4]
    cmp r0, #0x15
    bne @L_0203cb70
    ldrh r0, [r1, #0x12]
    ldrh r2, [r1, #0x10]
    ldr r1, [r1, #0xc]
    blx r3
    ldmia sp!, {r3, pc}
@L_0203cb70:
    cmp r0, #9
    ldmneia sp!, {r3, pc}
    ldrh r0, [r1, #0x12]
    mov r1, #0
    mov r2, r1
    blx r3
    ldmia sp!, {r3, pc}
}

asm void Wireless::func_0203cb90()
{
    ldr r2, =data_020c4588
    ldr r1, =func_0203cb2c
    str r0, [r2, #4]
    ldr r12, =func_02012e6c
    mov r0, #0xe
    mov r2, #0
    bx r12
}

asm void Wireless::func_0203cbb8()
{
    ldrh r0, [r0, #2]
    cmp r0, #0
    bxne lr
    ldr r1, =data_020c4588
    ldr r0, =0xffef
    ldr r1, [r1]
    add r1, r1, #0x2400
    ldrh r2, [r1, #0x6c]
    and r0, r2, r0
    strh r0, [r1, #0x6c]
    bx lr
}

asm void Wireless::func_0203cbec()
{
    mov r1, r1, lsl #0x10
    ldr r0, =func_0203cbb8
    ldr r12, =func_02013fec
    mov r1, r1, lsr #0x10
    bx r12
}

asm void Wireless::func_0203cc08()
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    mov r5, r2
    mov r2, r1
    add r0, r4, #0x1400
    add r1, r4, #4
    mov r4, r3
    bl func_02014ee0
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    mov r1, r5
    mov r2, r4
    bl MI_CpuCopy8
    mov r0, #1
    ldmia sp!, {r3, r4, r5, pc}
}

asm void Wireless::func_0203cc48()
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    add r0, r4, #0xc20
    add r0, r0, #0x1000
    bl func_02014f80
    cmp r0, #0
    movne r0, #0
    ldmneia sp!, {r4, pc}
    mov r0, r4
    bl func_0203cc80
    cmp r0, #0
    movne r0, #1
    moveq r0, #0
    ldmia sp!, {r4, pc}
}

asm void Wireless::func_0203cc80()
{
    stmdb sp!, {r3, lr}
    ldr r0, =func_0203cca0
    bl func_020141b4
    cmp r0, #2
    moveq r0, #1
    movne r0, #0
    ldmia sp!, {r3, pc}
}

asm void Wireless::func_0203cca0()
{
    stmdb sp!, {r3, lr}
    ldr r1, =data_020c4588
    ldr r1, [r1]
    cmp r1, #0
    ldmeqia sp!, {r3, pc}
    ldrh r0, [r0, #2]
    cmp r0, #0
    add r0, r1, #0x2400
    ldrh r0, [r0, #0x68]
    beq @L_0203cce4
    tst r0, #0x100
    mov r0, r1
    beq @L_0203ccdc
    bl func_0203c4a8
    ldmia sp!, {r3, pc}
@L_0203ccdc:
    bl func_0203c540
    ldmia sp!, {r3, pc}
@L_0203cce4:
    tst r0, #0x100
    mov r0, r1
    beq @L_0203ccf8
    bl func_0203cd04
    ldmia sp!, {r3, pc}
@L_0203ccf8:
    bl func_0203cd70
    ldmia sp!, {r3, pc}
}

asm void Wireless::func_0203cd04()
{
    stmdb sp!, {r3, lr}
    ldr r0, =func_0203cd24
    bl func_02013950
    cmp r0, #2
    moveq r0, #1
    movne r0, #0
    ldmia sp!, {r3, pc}
}

asm void Wireless::func_0203cd24()
{
    ldr r1, =data_020c4588
    ldr r2, [r1]
    cmp r2, #0
    bxeq lr
    ldrh r0, [r0, #2]
    cmp r0, #0
    bxne lr
    add r0, r2, #0x2400
    mov r2, #1
    strh r2, [r0, #0x6a]
    ldr r1, [r1]
    ldr r0, =0xfffd
    add r1, r1, #0x2400
    ldrh r2, [r1, #0x6c]
    and r0, r2, r0
    strh r0, [r1, #0x6c]
    bx lr
}

asm void Wireless::func_0203cd70()
{
    stmdb sp!, {r4, lr}
    mov r4, #0
    ldr r0, =func_0203cdac
    mov r1, r4
    bl func_02013bf4
    cmp r0, #2
    moveq r0, #1
    ldmeqia sp!, {r4, pc}
    ldr r0, =data_020c4588
    ldr r0, [r0]
    bl func_0203c4a8
    mov r0, r4
    ldmia sp!, {r4, pc}
}

asm void Wireless::func_0203cdac()
{
    ldr r1, =data_020c4588
    ldr r2, [r1]
    cmp r2, #0
    bxeq lr
    ldrh r0, [r0, #2]
    cmp r0, #0
    bxne lr
    add r0, r2, #0x2400
    mov r2, #1
    strh r2, [r0, #0x6a]
    ldr r1, [r1]
    ldr r0, =0xfffd
    add r1, r1, #0x2400
    ldrh r2, [r1, #0x6c]
    and r0, r2, r0
    strh r0, [r1, #0x6c]
    bx lr
}

asm void Wireless::func_0203cdf8()
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    add r0, r5, #0x2400
    ldrh r0, [r0, #0x6a]
    mov r4, r1
    cmp r0, #1
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r0, r2
    add r1, r5, #0x220
    mov r2, #0x14
    bl MI_CpuCopy8
    ldr r0, =func_0203ce58
    mov r1, r4
    add r3, r5, #0x2400
    mov r12, #8
    add r2, r5, #0x220
    strh r12, [r3, #0x6a]
    bl func_02014f8c
    cmp r0, #2
    moveq r0, #1
    movne r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

asm void Wireless::func_0203ce58()
{
    ldr r2, =data_020c4588
    ldr r3, [r2]
    cmp r3, #0
    bxeq lr
    ldrh r1, [r0, #2]
    cmp r1, #0
    beq @L_0203ce94
    add r1, r3, #0x2400
    mov r3, #9
    strh r3, [r1, #0x6a]
    ldr r1, [r2]
    ldrh r2, [r0, #2]
    add r0, r1, #0x2000
    str r2, [r0, #0x440]
    bx lr
@L_0203ce94:
    add r0, r3, #0x2400
    mov r1, #1
    strh r1, [r0, #0x6a]
    ldr r0, [r2]
    add r0, r0, #0x2400
    ldrh r1, [r0, #0x6c]
    orr r1, r1, #4
    strh r1, [r0, #0x6c]
    bx lr
}

asm void Wireless::func_0203cebc()
{
    stmdb sp!, {r3, lr}
    add r2, r0, #0x2400
    ldrh r3, [r2, #0x6a]
    cmp r3, #1
    movne r0, #0
    ldmneia sp!, {r3, pc}
    strh r1, [r2, #0x62]
    add r2, r0, #0x300
    mov r12, #0
    mov r3, #0x65
    mov r1, #1
    strh r12, [r2, #0x62]
    strh r3, [r2, #0x64]
    bl func_0203cef8
    ldmia sp!, {r3, pc}
}

asm void Wireless::func_0203cef8()
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    bl func_020131c0
    cmp r0, #0x8000
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    sub r1, r4, #1
    mov r2, #1
    tst r0, r2, lsl r1
    bne @L_0203cf54
@L_0203cf30:
    add r1, r4, #1
    mov r1, r1, lsl #0x10
    mov r4, r1, lsr #0x10
    cmp r4, #0x10
    movhs r0, #0
    ldmhsia sp!, {r3, r4, r5, pc}
    sub r1, r4, #1
    tst r0, r2, lsl r1
    beq @L_0203cf30
@L_0203cf54:
    add r1, r5, #0x2400
    mov r2, #2
    strh r2, [r1, #0x6a]
    mov r3, r4
    mov r4, #0x1e
    ldr r0, =func_0203cf98
    mov r1, #3
    mov r2, #0x11
    str r4, [sp]
    bl func_02015218
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    cmp r0, #2
    movne r0, #0
    moveq r0, #1
    ldmia sp!, {r3, r4, r5, pc}
}

asm void Wireless::func_0203cf98()
{
    stmdb sp!, {r4, lr}
    ldr r2, =data_020c4588
    ldr r3, [r2]
    cmp r3, #0
    ldmeqia sp!, {r4, pc}
    ldrh r1, [r0, #2]
    cmp r1, #0
    beq @L_0203cfd8
    add r1, r3, #0x2400
    mov r3, #9
    strh r3, [r1, #0x6a]
    ldr r1, [r2]
    ldrh r2, [r0, #2]
    add r0, r1, #0x2000
    str r2, [r0, #0x440]
    ldmia sp!, {r4, pc}
@L_0203cfd8:
    add r1, r3, #0x300
    ldrh r4, [r1, #0x64]
    ldrh r3, [r0, #0xa]
    ldrh r12, [r0, #8]
    cmp r4, r3
    strhih r12, [r1, #0x62]
    ldrhi r1, [r2]
    ldrhih r2, [r0, #0xa]
    addhi r0, r1, #0x300
    ldr r4, =data_020c4588
    strhih r2, [r0, #0x64]
    add r0, r12, #1
    mov r1, r0, lsl #0x10
    ldr r0, [r4]
    mov r1, r1, lsr #0x10
    bl func_0203cef8
    cmp r0, #0
    ldmneia sp!, {r4, pc}
    ldr r3, [r4]
    mov r1, #1
    add r0, r3, #0x300
    ldrh r2, [r0, #0x62]
    add r0, r3, #0x2400
    strh r2, [r0, #0x62]
    ldr r0, [r4]
    add r0, r0, #0x2400
    strh r1, [r0, #0x6a]
    ldmia sp!, {r4, pc}
}

asm void Wireless::func_0203d04c()
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r7, r0
    add r0, r7, #0x2400
    ldrh r4, [r0, #0x6a]
    mov r6, r2
    mov r5, r3
    cmp r4, #1
    movne r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    orr r1, r1, #0x100
    mov r4, #0
    strh r1, [r0, #0x68]
    strh r4, [r0, #0x5c]
    bl func_020134f8
    add r1, r7, #0x200
    strh r0, [r1, #0x34]
    add r0, r7, #0x2400
    ldrh r2, [r1, #0x34]
    add r1, r7, #0x300
    ldrh r0, [r0, #0x62]
    strh r2, [r1, #0x2c]
    strh r0, [r1, #0x52]
    bl func_02013274
    add r2, r7, #0x2400
    add r1, r7, #0x300
    ldrh r8, [r2, #0x5e]
    ldrh lr, [r2, #0x64]
    ldrh r12, [r2, #0x66]
    ldrh r3, [r2, #0x68]
    sub r8, r8, #1
    mov r2, #1
    strh r0, [r1, #0x38]
    strh r8, [r1, #0x30]
    tst r3, #1
    strh r2, [r1, #0x2e]
    ldr r0, =func_0203d128
    strh lr, [r1, #0x54]
    strh r12, [r1, #0x56]
    strh r4, [r1, #0x36]
    strh r4, [r1, #0x32]
    moveq r2, r4
    add r4, r7, #0x2400
    add r3, r7, #0x300
    mov r8, #0
    add r1, r7, #0x320
    strh r2, [r3, #0x34]
    strh r8, [r4, #0x60]
    strh r6, [r4, #0x6e]
    strh r5, [r4, #0x70]
    bl func_020137ac
    cmp r0, #2
    movne r0, r8
    moveq r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void Wireless::func_0203d128()
{
    stmdb sp!, {r3, lr}
    ldr r2, =data_020c4588
    ldr r3, [r2]
    cmp r3, #0
    ldmeqia sp!, {r3, pc}
    ldrh r1, [r0, #2]
    cmp r1, #0
    beq @L_0203d168
    add r1, r3, #0x2400
    mov r3, #9
    strh r3, [r1, #0x6a]
    ldr r1, [r2]
    ldrh r2, [r0, #2]
    add r0, r1, #0x2000
    str r2, [r0, #0x440]
    ldmia sp!, {r3, pc}
@L_0203d168:
    ldr r0, =func_0203d17c
    bl func_02013940
    ldmia sp!, {r3, pc}
}

asm void Wireless::func_0203d17c()
{
    stmdb sp!, {r4, lr}
    ldr r2, =data_020c4588
    ldr r3, [r2]
    cmp r3, #0
    ldmeqia sp!, {r4, pc}
    ldrh r1, [r0, #2]
    cmp r1, #0
    beq @L_0203d1bc
    add r1, r3, #0x2400
    mov r3, #9
    strh r3, [r1, #0x6a]
    ldr r1, [r2]
    ldrh r2, [r0, #2]
    add r0, r1, #0x2000
    str r2, [r0, #0x440]
    ldmia sp!, {r4, pc}
@L_0203d1bc:
    ldrh r1, [r0, #8]
    cmp r1, #7
    bgt @L_0203d1e4
    bge @L_0203d200
    cmp r1, #2
    bgt @L_0203d298
    cmp r1, #0
    blt @L_0203d298
    beq @L_0203d250
    b @L_0203d298
@L_0203d1e4:
    cmp r1, #9
    bgt @L_0203d1f4
    beq @L_0203d220
    b @L_0203d298
@L_0203d1f4:
    cmp r1, #0x1a
    beq @L_0203d24c
    b @L_0203d298
@L_0203d200:
    ldrh r0, [r0, #0x10]
    add r1, r3, #0x2400
    mov r2, #1
    mov r0, r2, lsl r0
    ldrh r2, [r1, #0x60]
    mov r0, r0, lsl #0x10
    orr r0, r2, r0, lsr #16
    b @L_0203d244
@L_0203d220:
    ldrh r0, [r0, #0x10]
    mov r2, #1
    add r1, r3, #0x2400
    mov r0, r2, lsl r0
    mov r0, r0, lsl #0x10
    mvn r0, r0, lsr #16
    ldrh r2, [r1, #0x60]
    mov r0, r0, lsl #0x10
    and r0, r2, r0, lsr #16
@L_0203d244:
    strh r0, [r1, #0x60]
    b @L_0203d298
@L_0203d24c:
    b @L_0203d220
@L_0203d250:
    add r0, r3, #0x2400
    ldrh r1, [r0, #0x6e]
    cmp r1, #0
    ldrneh r0, [r0, #0x70]
    cmpne r0, #0
    beq @L_0203d278
    mov r0, r3
    bl func_0203c988
    cmp r0, #0
    bne @L_0203d298
@L_0203d278:
    ldr r4, =data_020c4588
    ldr r0, [r4]
    bl func_0203c75c
    cmp r0, #0
    ldreq r0, [r4]
    moveq r1, #9
    addeq r0, r0, #0x2400
    streqh r1, [r0, #0x6a]
@L_0203d298:
    ldr r0, =data_020c4588
    mov r1, #2
    ldr r0, [r0]
    add r0, r0, #0x460
    add r0, r0, #0x2000
    bl DC_FlushRange
    ldmia sp!, {r4, pc}
}

asm void Wireless::func_0203d2b8()
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r5, r0
    add r3, r5, #0x2400
    ldrh r0, [r3, #0x6a]
    mov r4, r1
    mov r7, r2
    cmp r0, #1
    movne r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r2, =0x1078
    mov r6, #3
    add r0, r5, #0x380
    mov r1, #0
    strh r6, [r3, #0x6a]
    bl MI_CpuFill8
    cmp r7, #0
    add r0, r5, #0x8a
    mov r2, #6
    beq @L_0203d314
    mov r1, r7
    add r0, r0, #0x300
    bl MI_CpuCopy8
    b @L_0203d320
@L_0203d314:
    add r0, r0, #0x300
    mov r1, #0xff
    bl MI_CpuFill8
@L_0203d320:
    mov r6, #0
    add r3, r5, #0x1300
    add r8, r5, #0x3e0
    add lr, r5, #0x1000
    mov r1, r6
    add r12, r5, #0x300
    mov r7, #0x400
    add r0, r5, #0x7e0
    mov r2, #0xc00
    strh r4, [r3, #0xf4]
    str r8, [r5, #0x380]
    strh r7, [r12, #0x84]
    strb r6, [lr, #0x3e2]
    bl MI_CpuFill8
    add r0, r5, #0xe3
    mov r1, r6
    add r0, r0, #0x1300
    mov r2, #0x10
    bl MI_CpuFill8
    mov r0, r5
    bl func_0203d37c
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void Wireless::func_0203d37c()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r0
    bl func_020131c0
    cmp r0, #0x8000
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    add r1, r6, #0x1300
    ldrh r7, [r1, #0xf4]
    mov r2, #1
    mov r5, r2
    cmp r7, #0
    addeq r1, r7, #1
    moveq r1, r1, lsl #0x10
    moveq r7, r1, lsr #0x10
@L_0203d3c0:
    cmp r7, #0x10
    movhi r7, r2
    sub r1, r7, #1
    tst r0, r5, lsl r1
    mov lr, r5, lsl r1
    addeq r1, r7, #1
    moveq r1, r1, lsl #0x10
    moveq r7, r1, lsr #0x10
    beq @L_0203d3c0
    add r12, r6, #0x300
    add r3, r6, #0x1300
    mov r4, #0
    add r0, r6, #0x394
    mov r1, #0xff
    mov r2, #0x20
    strh r7, [r3, #0xf4]
    strh lr, [r12, #0x86]
    strh r5, [r12, #0x90]
    strh r4, [r12, #0x92]
    bl MI_CpuFill8
    bl func_02013308
    add r2, r6, #0x2400
    ldrh r3, [r2, #0x6c]
    add r1, r6, #0x300
    strh r0, [r1, #0x88]
    orr r3, r3, #1
    ldr r0, =func_0203d44c
    add r1, r6, #0x380
    strh r3, [r2, #0x6c]
    bl func_02013994
    cmp r0, #2
    movne r0, r4
    moveq r0, r5
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void Wireless::func_0203d44c()
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    str r0, [sp]
    ldr r0, =data_020c4588
    mov r4, #1
    ldr r0, [r0]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [sp]
    ldrh r1, [r1, #2]
    cmp r1, #0
    beq @L_0203d4a0
    add r0, r0, #0x2400
    mov r1, #9
    strh r1, [r0, #0x6a]
    ldr r0, =data_020c4588
    ldr r1, [r0]
    ldr r0, [sp]
    ldrh r2, [r0, #2]
    add r0, r1, #0x2000
    str r2, [r0, #0x440]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0203d4a0:
    add r1, r0, #0x2400
    ldrh r1, [r1, #0x6a]
    cmp r1, #3
    beq @L_0203d4b8
    bl func_0203d8dc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0203d4b8:
    ldr r1, [sp]
    ldrh r1, [r1, #8]
    cmp r1, #3
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r1, #4
    beq @L_0203d4dc
    cmp r1, #5
    beq @L_0203d57c
    b @L_0203d8a8
@L_0203d4dc:
    mov r6, #0xc0
    mov r5, #0
    mov r7, r6
    b @L_0203d570
@L_0203d4ec:
    ldr r0, =data_020c4588
    ldr r1, [r0]
    add r0, r1, r5
    add r0, r0, #0x1000
    ldrb r0, [r0, #0x3e3]
    cmp r0, #0
    beq @L_0203d56c
    add r0, r1, #0xe3
    add r1, r0, #0x1300
    ldrb r0, [r1, r5]
    sub r0, r0, #1
    strb r0, [r1, r5]
    ldr r0, =data_020c4588
    ldr r1, [r0]
    add r0, r1, r5
    add r0, r0, #0x1000
    ldrb r0, [r0, #0x3e3]
    cmp r0, #0
    bne @L_0203d56c
    add r0, r1, #0x7e0
    mla r0, r5, r7, r0
    mov r1, #0
    mov r2, r6
    bl MI_CpuFill8
    ldr r0, =data_020c4588
    mvn r1, r4, lsl r5
    ldr r0, [r0]
    and r1, r1, #0xff
    add r0, r0, #0x1000
    ldrb r2, [r0, #0x3e2]
    and r1, r2, r1
    strb r1, [r0, #0x3e2]
@L_0203d56c:
    add r5, r5, #1
@L_0203d570:
    cmp r5, #0x10
    blt @L_0203d4ec
    b @L_0203d8a8
@L_0203d57c:
    ldr r1, [sp]
    ldrh r1, [r1, #0xe]
    cmp r1, #0
    beq @L_0203d598
    add r0, r0, #0x3e0
    mov r1, #0x400
    bl DC_InvalidateRange
@L_0203d598:
    mov r5, #0
    b @L_0203d898
@L_0203d5a0:
    ldr r0, [sp]
    mov r2, #0
    add r0, r0, r5, lsl #2
    ldr r6, [r0, #0x10]
    mov r3, r2
    ldrh r1, [r6, #0x3c]
    mov r0, r2
    cmp r1, #0x10
    blo @L_0203d5cc
    cmp r1, #0x80
    movls r0, #1
@L_0203d5cc:
    cmp r0, #0
    beq @L_0203d5e4
    ldrb r0, [r6, #0x4a]
    add r0, r0, #0x10
    cmp r1, r0
    moveq r3, #1
@L_0203d5e4:
    cmp r3, #0
    beq @L_0203d5f8
    ldrh r0, [r6, #0x40]
    cmp r0, #1
    moveq r2, #1
@L_0203d5f8:
    cmp r2, #0
    beq @L_0203d894
    ldr r0, =data_020c4588
    ldr r2, [r6, #0x44]
    ldr r1, [r0]
    ldr r0, [r1, #0x328]
    cmp r2, r0
    bne @L_0203d894
    ldrb r0, [r6, #0x4b]
    tst r0, #1
    beq @L_0203d894
    tst r0, #2
    bne @L_0203d894
    ldr r1, [r1, #0x320]
    add r0, r6, #0x50
    mov r2, #0x10
    bl memcmp
    cmp r0, #0
    moveq r0, #1
    movne r0, #0
    cmp r0, #0
    beq @L_0203d894
    ldr r0, =data_020c4588
    mov r12, #0
    ldr r0, [r0]
    add r1, r0, #0x3e4
    add r11, r1, #0x400
    b @L_0203d724
@L_0203d668:
    add r1, r0, r12
    add r1, r1, #0x1000
    ldrb r1, [r1, #0x3e3]
    cmp r1, #0
    beq @L_0203d720
    mov r1, #0xc0
    mul r2, r12, r1
    ldrb r10, [r11, r2]
    ldrb r9, [r6, #4]
    add r1, r11, r2
    mov r2, #0
    cmp r10, r9
    ldreqb r10, [r1, #1]
    ldreqb r9, [r6, #5]
    mov r8, r2
    mov r3, r2
    cmpeq r10, r9
    moveq r8, r4
    mov lr, r2
    mov r7, r2
    cmp r8, #0
    beq @L_0203d6d0
    ldrb r9, [r1, #2]
    ldrb r8, [r6, #6]
    cmp r9, r8
    moveq r7, r4
@L_0203d6d0:
    cmp r7, #0
    beq @L_0203d6e8
    ldrb r8, [r1, #3]
    ldrb r7, [r6, #7]
    cmp r8, r7
    moveq lr, r4
@L_0203d6e8:
    cmp lr, #0
    beq @L_0203d700
    ldrb r8, [r1, #4]
    ldrb r7, [r6, #8]
    cmp r8, r7
    moveq r3, r4
@L_0203d700:
    cmp r3, #0
    beq @L_0203d718
    ldrb r3, [r1, #5]
    ldrb r1, [r6, #9]
    cmp r3, r1
    moveq r2, r4
@L_0203d718:
    cmp r2, #0
    bne @L_0203d72c
@L_0203d720:
    add r12, r12, #1
@L_0203d724:
    cmp r12, #0x10
    blt @L_0203d668
@L_0203d72c:
    cmp r12, #0x10
    ldr r1, =data_020c4588
    blt @L_0203d76c
    mov r12, #0
    ldr r2, [r1]
    b @L_0203d75c
@L_0203d744:
    add r0, r2, r12
    add r0, r0, #0x1000
    ldrb r0, [r0, #0x3e3]
    cmp r0, #0
    beq @L_0203d764
    add r12, r12, #1
@L_0203d75c:
    cmp r12, #0x10
    blt @L_0203d744
@L_0203d764:
    cmp r12, #0x10
    bge @L_0203d8a8
@L_0203d76c:
    mov r0, #0xc0
    mul r2, r12, r0
    ldr r0, [r1]
    ldrh r1, [r6]
    add r3, r0, #0x7e0
    add r0, r3, r2
    strh r1, [r3, r2]
    ldrh r1, [r6, #2]
    add r8, r6, #0xc
    add r7, r0, #0xc
    strh r1, [r0, #2]
    ldrb r2, [r6, #4]
    ldrb r1, [r6, #5]
    mov r3, #0x10
    strb r2, [r0, #4]
    strb r1, [r0, #5]
    ldrb r2, [r6, #6]
    ldrb r1, [r6, #7]
    strb r2, [r0, #6]
    strb r1, [r0, #7]
    ldrb r2, [r6, #8]
    ldrb r1, [r6, #9]
    strb r2, [r0, #8]
    strb r1, [r0, #9]
    ldrh r1, [r6, #0xa]
    strh r1, [r0, #0xa]
@L_0203d7d4:
    ldrb r2, [r8]
    ldrb r1, [r8, #1]
    add r8, r8, #2
    subs r3, r3, #1
    strb r1, [r7, #1]
    strb r2, [r7], #2
    bne @L_0203d7d4
    ldrh r1, [r6, #0x2c]
    add r9, r6, #0x40
    add r8, r0, #0x40
    strh r1, [r0, #0x2c]
    ldrh r2, [r6, #0x2e]
    ldrh r1, [r6, #0x30]
    mov r7, #8
    strh r2, [r0, #0x2e]
    strh r1, [r0, #0x30]
    ldrh r1, [r6, #0x32]
    strh r1, [r0, #0x32]
    ldrh r1, [r6, #0x34]
    strh r1, [r0, #0x34]
    ldrh r1, [r6, #0x36]
    strh r1, [r0, #0x36]
    ldrh r1, [r6, #0x38]
    strh r1, [r0, #0x38]
    ldrh r1, [r6, #0x3a]
    strh r1, [r0, #0x3a]
    ldrh r1, [r6, #0x3c]
    strh r1, [r0, #0x3c]
    ldrh r1, [r6, #0x3e]
    strh r1, [r0, #0x3e]
@L_0203d84c:
    ldmia r9!, {r0, r1, r2, r3}
    stmia r8!, {r0, r1, r2, r3}
    subs r7, r7, #1
    bne @L_0203d84c
    ldr r1, =data_020c4588
    mov r0, #1
    ldr r3, [r1]
    mov r2, r0, lsl r12
    add r0, r3, r12
    add r0, r0, #0x1000
    mov r3, #0x2c
    strb r3, [r0, #0x3e3]
    ldr r0, [r1]
    and r1, r2, #0xff
    add r0, r0, #0x1000
    ldrb r2, [r0, #0x3e2]
    orr r1, r2, r1
    strb r1, [r0, #0x3e2]
@L_0203d894:
    add r5, r5, #1
@L_0203d898:
    ldr r0, [sp]
    ldrh r0, [r0, #0xe]
    cmp r5, r0
    blt @L_0203d5a0
@L_0203d8a8:
    ldr r1, =data_020c4588
    ldr r0, [r1]
    add r0, r0, #0x1300
    ldrh r2, [r0, #0xf4]
    add r2, r2, #1
    strh r2, [r0, #0xf4]
    ldr r0, [r1]
    bl func_0203d37c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void Wireless::func_0203d8d0()
{
    ldr r12, =func_0203d8dc
    bx r12
}

asm void Wireless::func_0203d8dc()
{
    stmdb sp!, {r3, lr}
    add r1, r0, #0x2400
    ldrh r0, [r1, #0x6a]
    cmp r0, #3
    ldmneia sp!, {r3, pc}
    ldr r0, =func_0203d908
    mov r2, #2
    strh r2, [r1, #0x6a]
    bl func_02013ae4
    ldmia sp!, {r3, pc}
}

asm void Wireless::func_0203d908()
{
    ldr r2, =data_020c4588
    ldr r1, [r2]
    cmp r1, #0
    bxeq lr
    ldrh r0, [r0, #2]
    cmp r0, #0
    addne r0, r1, #0x2400
    movne r1, #9
    strneh r1, [r0, #0x6a]
    bxne lr
    add r1, r1, #0x2400
    ldrh r12, [r1, #0x6c]
    ldr r0, =0xfffe
    mov r3, #1
    and r0, r12, r0
    strh r0, [r1, #0x6c]
    ldr r0, [r2]
    add r0, r0, #0x2400
    strh r3, [r0, #0x6a]
    bx lr
}

asm void Wireless::func_0203d960()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r0
    add r3, r6, #0x1000
    ldrb r3, [r3, #0x3e2]
    mov r5, #1
    mov r4, #0
    tst r3, r5, lsl r2
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    add r3, r6, #0x2400
    ldrh r7, [r3, #0x6a]
    cmp r7, #3
    bne @L_0203d9a0
    bl func_0203d8dc
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0203d9a0:
    cmp r7, #1
    movne r0, r4
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    ldrh r0, [r3, #0x6c]
    tst r0, #2
    movne r0, r5
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    add r0, r6, #0x7e0
    mov r7, #0xc0
    mla r0, r2, r7, r0
    orr r12, r1, #0x200
    mov r2, r7
    add r1, r6, #0x260
    strh r12, [r3, #0x68]
    strh r4, [r3, #0x60]
    bl MI_CpuCopy8
    mov r1, r7
    add r0, r6, #0x260
    bl DC_FlushRange
    bl func_02006d84
    add r0, r6, #0x2400
    ldrh r0, [r0, #0x6c]
    add r2, r6, #0x44
    add r1, r6, #0x260
    tst r0, #4
    moveq r5, r4
    mov r0, r5, lsl #0x10
    mov r5, r0, lsr #0x10
    mov r4, #1
    ldr r0, =func_0203dad8
    mov r3, r4
    add r2, r2, #0x2400
    str r5, [sp]
    bl func_02013b28
    cmp r0, #2
    movne r0, #0
    moveq r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void Wireless::func_0203da3c()
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r0, =func_0203da6c
    bl func_0201372c
    cmp r0, #2
    movne r0, #0
    addeq r0, r4, #0x2400
    moveq r1, #2
    streqh r1, [r0, #0x6a]
    moveq r0, #1
    ldmia sp!, {r4, pc}
}

asm void Wireless::func_0203da6c()
{
    ldr r2, =data_020c4588
    ldr r3, [r2]
    cmp r3, #0
    bxeq lr
    ldrh r1, [r0, #2]
    cmp r1, #0
    beq @L_0203daa8
    add r1, r3, #0x2400
    mov r3, #9
    strh r3, [r1, #0x6a]
    ldr r1, [r2]
    ldrh r2, [r0, #2]
    add r0, r1, #0x2000
    str r2, [r0, #0x440]
    bx lr
@L_0203daa8:
    add r0, r3, #0x2400
    mov r1, #1
    strh r1, [r0, #0x6a]
    ldr r1, [r2]
    ldr r0, =0xfffd
    add r1, r1, #0x2400
    ldrh r2, [r1, #0x6c]
    and r0, r2, r0
    strh r0, [r1, #0x6c]
    bx lr
}

asm void Wireless::func_0203dad8()
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r4, =data_020c4588
    mov r6, r0
    ldr r0, [r4]
    mov r5, #9
    cmp r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldrh r1, [r6, #2]
    cmp r1, #0xb
    bgt @L_0203db2c
    bge @L_0203db50
    cmp r1, #6
    ldmgtia sp!, {r4, r5, r6, pc}
    cmp r1, #0
    ldmltia sp!, {r4, r5, r6, pc}
    beq @L_0203dba4
    cmp r1, #1
    beq @L_0203db6c
    cmp r1, #6
    beq @L_0203db88
    ldmia sp!, {r4, r5, r6, pc}
@L_0203db2c:
    cmp r1, #0xc
    ldmneia sp!, {r4, r5, r6, pc}
    add r0, r0, #0x2400
    strh r5, [r0, #0x6a]
    ldr r0, [r4]
    ldrh r1, [r6, #2]
    add r0, r0, #0x2000
    str r1, [r0, #0x440]
    ldmia sp!, {r4, r5, r6, pc}
@L_0203db50:
    add r0, r0, #0x2400
    strh r5, [r0, #0x6a]
    ldr r0, [r4]
    ldrh r1, [r6, #2]
    add r0, r0, #0x2000
    str r1, [r0, #0x440]
    ldmia sp!, {r4, r5, r6, pc}
@L_0203db6c:
    add r0, r0, #0x2400
    strh r5, [r0, #0x6a]
    ldr r0, [r4]
    ldrh r1, [r6, #2]
    add r0, r0, #0x2000
    str r1, [r0, #0x440]
    ldmia sp!, {r4, r5, r6, pc}
@L_0203db88:
    add r0, r0, #0x2400
    strh r5, [r0, #0x6a]
    ldr r0, [r4]
    ldrh r1, [r6, #2]
    add r0, r0, #0x2000
    str r1, [r0, #0x440]
    ldmia sp!, {r4, r5, r6, pc}
@L_0203dba4:
    ldrh r1, [r6, #8]
    cmp r1, #9
    bgt @L_0203dbe4
    cmp r1, #0
    addge pc, pc, r1, lsl #2
    b @L_0203dc6c
    b @L_0203dc6c
    b @L_0203dc6c
    b @L_0203dc6c
    b @L_0203dc6c
    b @L_0203dc6c
    b @L_0203dc6c
    ldmia sp!, {r4, r5, r6, pc}
    b @L_0203dbf0
    ldmia sp!, {r4, r5, r6, pc}
    b @L_0203dc50
@L_0203dbe4:
    cmp r1, #0x1a
    ldmeqia sp!, {r4, r5, r6, pc}
    b @L_0203dc6c
@L_0203dbf0:
    bl func_0203c75c
    cmp r0, #0
    ldr r0, [r4]
    addeq r0, r0, #0x2400
    streqh r5, [r0, #0x6a]
    ldmeqia sp!, {r4, r5, r6, pc}
    ldrh r1, [r6, #0xa]
    add r0, r0, #0x2400
    mov r2, #1
    strh r1, [r0, #0x5c]
    ldr r1, [r4]
    ldrh r0, [r6, #0xa]
    add r1, r1, #0x2400
    ldrh r3, [r1, #0x60]
    mov r0, r2, lsl r0
    mov r0, r0, lsl #0x10
    orr r0, r3, r0, lsr #16
    strh r0, [r1, #0x60]
    ldr r0, [r4]
    mov r1, #2
    add r0, r0, #0x460
    add r0, r0, #0x2000
    bl DC_FlushRange
    ldmia sp!, {r4, r5, r6, pc}
@L_0203dc50:
    add r0, r0, #0x2400
    strh r5, [r0, #0x6a]
    ldr r0, [r4]
    mov r1, #0x14
    add r0, r0, #0x2000
    str r1, [r0, #0x440]
    ldmia sp!, {r4, r5, r6, pc}
@L_0203dc6c:
    add r0, r0, #0x2400
    strh r5, [r0, #0x6a]
    ldmia sp!, {r4, r5, r6, pc}
}
