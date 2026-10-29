#include "ov021/Unk_ov021_02165d60.hpp"

extern "C" void func_ov021_02165d60(void);
extern "C" void func_ov021_02165d94(void);
extern "C" void func_ov021_02165d98(void);
extern "C" void func_ov021_02165dac(void);
extern "C" void func_ov021_02165dc0(void);
extern "C" void func_ov021_02165dd8(void);
extern "C" void func_ov021_02165de8(void);
extern "C" void func_ov021_02165e58(void);
extern "C" void func_ov021_02165e98(void);
extern "C" void func_ov021_02165eb8(void);
extern "C" void func_ov021_02165ee0(void);
extern "C" void func_ov021_02165f34(void);
extern "C" void func_ov021_02165fd8(void);
extern "C" void func_ov021_02166020(void);
extern "C" void func_ov021_021660b0(void);
extern "C" void func_ov021_021660c4(void);

extern "C" char data_020c9660[];
extern "C" char data_ov021_021661cc[];
extern "C" void G2_GetBG1ScrPtr(void);
extern "C" void G2_GetBG2ScrPtr(void);
extern "C" void G2_GetBG3ScrPtr(void);
extern "C" void MI_CpuFill8(void);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e04cEii(void);
extern "C" void _ZdlPv(void);
extern "C" void func_02003758(void);
extern "C" void func_02003ad8(void);
extern "C" void func_ov015_02132224(void);
extern "C" void func_ov015_021322b0(void);
extern "C" void func_ov015_0213257c(void);
extern "C" void func_ov015_02132628(void);
extern "C" void func_ov015_02132984(void);
extern "C" void func_ov015_02132c08(void);
extern "C" void func_ov015_02133f94(void);
extern "C" void func_ov015_02134118(void);
extern "C" void func_ov015_02134198(void);
extern "C" void func_ov015_02134208(void);
extern "C" void func_ov015_0213b364(void);
extern "C" void func_ov015_0213b3fc(void);
extern "C" void func_ov015_0213b478(void);
extern "C" void func_ov015_0213bfcc(void);
extern "C" void func_ov015_0213c33c(void);

extern "C" asm void func_ov021_02165d60(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    add r0, r4, #0xc
    mov r1, #0
    mov r2, #0xc
    bl MI_CpuFill8
    ldr r0, =data_ov021_021661cc
    add r1, r4, #0xc
    bl func_ov015_02133f94
    mov r0, #1
    str r0, [r4, #8]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov021_02165d94(void)
{
    bx lr
}

extern "C" asm void func_ov021_02165d98(void)
{
    ldr r12, =func_ov015_02134118
    add r0, r0, #0xc
    mov r1, #1
    bx r12
}

extern "C" asm void func_ov021_02165dac(void)
{
    ldr r12, =func_ov015_02134198
    add r0, r0, #0xc
    mov r1, #1
    bx r12
}

extern "C" asm void func_ov021_02165dc0(void)
{
    add r2, r0, #0xc
    mov r0, #0xc
    mla r0, r1, r0, r2
    ldr r12, =func_ov015_02134208
    bx r12
}

extern "C" asm void func_ov021_02165dd8(void)
{
    ldr r12, =func_ov021_02165dc0
    mov r1, #0
    bx r12
}

extern "C" asm void func_ov021_02165de8(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r6, [r0, #0xc]
    cmp r6, #0
    beq @L_02165e50
    mov r5, #0
    mov r4, #1
    mov r0, r6
    mov r1, r5
    mov r2, r4
    bl func_ov015_021322b0
    ldr r0, [r6, #0xc]
    ldr r1, [r6, #0x10]
    mov r2, r5
    mov r3, r4
    add r0, r6, r0
    bl func_ov015_02132984
    ldr r0, [r6, #0x14]
    ldr r2, [r6, #0x18]
    mov r1, r5
    add r0, r6, r0
    bl func_02003ad8
    ldr r0, [r6, #0xc]
    ldr r2, [r6, #0x10]
    add r0, r6, r0
    mov r1, r5
    bl func_02003758
@L_02165e50:
    bl func_ov015_02132224
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov021_02165e58(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    mov r1, #5
    mov r0, #6
    str r1, [r4, #8]
    bl func_ov015_02132628
    ldr r4, [r4, #4]
    mov r1, #0
    mov r0, r4
    mov r2, #0x20
    bl _ZN17UnkClass_0203dc7c13func_0203e04cEii
    mov r0, r4
    mov r1, #1
    mov r2, #0x21
    bl _ZN17UnkClass_0203dc7c13func_0203e04cEii
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov021_02165e98(void)
{
    stmdb sp!, {r3, lr}
    ldr r2, [r0, #8]
    cmp r2, #4
    ldmneia sp!, {r3, pc}
    cmp r1, #0
    ldmeqia sp!, {r3, pc}
    bl func_ov021_02165e58
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov021_02165eb8(void)
{
    stmdb sp!, {r3, lr}
    ldr r2, [r0, #8]
    cmp r2, #4
    ldreqh r2, [r1, #4]
    cmpeq r2, #1
    ldreqh r1, [r1, #6]
    cmpeq r1, #0
    ldmneia sp!, {r3, pc}
    bl func_ov021_02165e58
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov021_02165ee0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r5, =data_020c9660
    mov r6, #0
    mov r7, r0
    mov r0, r5
    mov r1, r6
    str r6, [r7, #8]
    bl func_ov015_0213b364
    bl G2_GetBG3ScrPtr
    mov r4, r0
    bl G2_GetBG1ScrPtr
    mov r2, r4
    str r6, [sp]
    mov r1, r6
    mov r3, r0
    mov r0, r5
    bl func_ov015_0213b478
    mov r0, r7
    bl func_ov021_02165d60
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov021_02165f34(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    ldr r1, [r6, #8]
    cmp r1, #5
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r4, r5, r6, pc}
    ldmia sp!, {r4, r5, r6, pc}
    b @L_02165f64
    ldmia sp!, {r4, r5, r6, pc}
    b @L_02165f84
    b @L_02165fc4
    b @L_02165fc4
@L_02165f64:
    bl func_ov021_02165d98
    cmp r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r0, r6
    bl func_ov021_02165d94
    mov r0, #2
    str r0, [r6, #8]
    ldmia sp!, {r4, r5, r6, pc}
@L_02165f84:
    ldr r5, =data_020c9660
    mov r4, #0
    mov r0, r5
    mov r1, r4
    bl func_ov015_0213b3fc
    mov r0, r5
    mov r1, r4
    bl func_ov015_0213b364
    mov r0, r5
    mov r1, r4
    bl func_ov015_0213bfcc
    mov r0, #6
    bl func_ov015_0213257c
    mov r0, #4
    str r0, [r6, #8]
    ldmia sp!, {r4, r5, r6, pc}
@L_02165fc4:
    ldr r0, =data_020c9660
    mov r1, #0
    bl func_ov015_0213bfcc
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov021_02165fd8(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #8]
    cmp r1, #2
    beq @L_02165ffc
    cmp r1, #4
    cmpne r1, #5
    beq @L_0216600c
    ldmia sp!, {r4, pc}
@L_02165ffc:
    bl func_ov021_02165de8
    mov r0, #3
    str r0, [r4, #8]
    ldmia sp!, {r4, pc}
@L_0216600c:
    ldr r0, =data_020c9660
    mov r1, #0
    bl func_ov015_0213c33c
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov021_02166020(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    mov r6, r0
    bl G2_GetBG3ScrPtr
    mov r5, r0
    bl G2_GetBG1ScrPtr
    mov r4, r0
    bl G2_GetBG2ScrPtr
    mov r2, r5
    mov r3, r4
    str r0, [sp]
    ldr r5, =data_020c9660
    mov r4, #0
    mov r0, r5
    mov r1, r4
    bl func_ov015_0213b478
    mov r0, r5
    mov r1, r4
    bl func_ov015_0213b3fc
    mov r0, r6
    bl func_ov021_02165dac
    mov r0, r6
    bl func_ov021_02165dd8
    mov r0, #1
    mov r4, #0x10
    mov r1, r4
    bl func_ov015_02132c08
    mov r0, #2
    mov r1, r4
    bl func_ov015_02132c08
    mov r1, r4
    mov r0, #3
    bl func_ov015_02132c08
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" asm void func_ov021_021660b0(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl _ZdlPv
    mov r0, r4
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov021_021660c4(void)
{
    bx lr
}
