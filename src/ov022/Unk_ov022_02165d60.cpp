#include "ov022/Unk_ov022_02165d60.hpp"

extern "C" s32 func_ov022_02165d60(u8 *arg0);
extern "C" void func_ov022_02165d94(void);
extern "C" void func_ov022_02165d98(s32 arg0);
extern "C" void func_ov022_02165dac(s32 arg0);
extern "C" s32 func_ov022_02165dc0(...);
extern "C" void func_ov022_02165dd8(s32 arg0);
extern "C" void func_ov022_02165de8(void);
extern "C" s32 func_ov022_02165e58(...);
extern "C" void func_ov022_02165e88(u8 *arg0, s32 arg1);
extern "C" void func_ov022_02165ea8(void);
extern "C" void func_ov022_02165ed0(void);
extern "C" void func_ov022_02165f24(void);
extern "C" void func_ov022_02165fc8(void);
extern "C" void func_ov022_02166010(void);
extern "C" s32 func_ov022_021660a0(s32 arg0);
extern "C" void func_ov022_021660b4(void);

extern "C" char data_020c9660[];
extern "C" char data_ov022_021661ac[];
extern "C" void G2_GetBG1ScrPtr(void);
extern "C" void G2_GetBG2ScrPtr(void);
extern "C" void G2_GetBG3ScrPtr(void);
extern "C" s32 MI_CpuFill8(...);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e04cEii(void);
extern "C" s32 _ZdlPv(...);
extern "C" void func_02003758(void);
extern "C" void func_02003ad8(void);
extern "C" void func_ov015_02132224(void);
extern "C" void func_ov015_021322b0(void);
extern "C" void func_ov015_0213257c(void);
extern "C" void func_ov015_02132984(void);
extern "C" void func_ov015_02132c08(void);
extern "C" s32 func_ov015_02133f94(...);
extern "C" s32 func_ov015_02134118(...);
extern "C" s32 func_ov015_02134198(...);
extern "C" void func_ov015_02134208(void);
extern "C" void func_ov015_0213b364(void);
extern "C" void func_ov015_0213b3fc(void);
extern "C" void func_ov015_0213b478(void);
extern "C" void func_ov015_0213bfcc(void);
extern "C" void func_ov015_0213c33c(void);

extern "C" s32 func_ov022_02165d60(u8 *arg0)
{
    MI_CpuFill8((arg0 + 0xC), 0, 0xC);
    func_ov015_02133f94((s32)data_ov022_021661ac, (arg0 + 0xC));
    *(s32 *)(arg0 + 0x8) = 1;
    return 1;
}

extern "C" void func_ov022_02165d94(void)
{
}

extern "C" void func_ov022_02165d98(s32 arg0)
{
    func_ov015_02134118((arg0 + 0xC), 1);
}

extern "C" void func_ov022_02165dac(s32 arg0)
{
    func_ov015_02134198((arg0 + 0xC), 1);
}

extern "C" asm s32 func_ov022_02165dc0(...)
{
    add r2, r0, #0xc
    mov r0, #0xc
    mla r0, r1, r0, r2
    ldr r12, =func_ov015_02134208
    bx r12
}

extern "C" void func_ov022_02165dd8(s32 arg0)
{
    func_ov022_02165dc0(arg0, 0);
}

extern "C" asm void func_ov022_02165de8(void)
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

extern "C" asm s32 func_ov022_02165e58(...)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    mov r1, #5
    str r1, [r4, #8]
    ldr r1, [r0]
    ldr r1, [r1, #0x50]
    blx r1
    ldr r0, [r4, #4]
    mov r1, #0
    mov r2, #0x1c
    bl _ZN17UnkClass_0203dc7c13func_0203e04cEii
    ldmia sp!, {r4, pc}
}

extern "C" void func_ov022_02165e88(u8 *arg0, s32 arg1)
{
    if (*(s32 *)(arg0 + 0x8) != 4)
        return;
    if (arg1 == 0)
        return;
    func_ov022_02165e58((s32)arg0, arg1, *(s32 *)(arg0 + 0x8));
}

extern "C" asm void func_ov022_02165ea8(void)
{
    stmdb sp!, {r3, lr}
    ldr r2, [r0, #8]
    cmp r2, #4
    ldreqh r2, [r1, #4]
    cmpeq r2, #1
    ldreqh r1, [r1, #6]
    cmpeq r1, #0
    ldmneia sp!, {r3, pc}
    bl func_ov022_02165e58
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov022_02165ed0(void)
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
    bl func_ov022_02165d60
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov022_02165f24(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    ldr r1, [r6, #8]
    cmp r1, #5
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r4, r5, r6, pc}
    ldmia sp!, {r4, r5, r6, pc}
    b @L_02165f54
    ldmia sp!, {r4, r5, r6, pc}
    b @L_02165f74
    b @L_02165fb4
    b @L_02165fb4
@L_02165f54:
    bl func_ov022_02165d98
    cmp r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r0, r6
    bl func_ov022_02165d94
    mov r0, #2
    str r0, [r6, #8]
    ldmia sp!, {r4, r5, r6, pc}
@L_02165f74:
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
@L_02165fb4:
    ldr r0, =data_020c9660
    mov r1, #0
    bl func_ov015_0213bfcc
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov022_02165fc8(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #8]
    cmp r1, #2
    beq @L_02165fec
    cmp r1, #4
    cmpne r1, #5
    beq @L_02165ffc
    ldmia sp!, {r4, pc}
@L_02165fec:
    bl func_ov022_02165de8
    mov r0, #3
    str r0, [r4, #8]
    ldmia sp!, {r4, pc}
@L_02165ffc:
    ldr r0, =data_020c9660
    mov r1, #0
    bl func_ov015_0213c33c
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_ov022_02166010(void)
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
    bl func_ov022_02165dac
    mov r0, r6
    bl func_ov022_02165dd8
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

extern "C" s32 func_ov022_021660a0(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov022_021660b4(void)
{
}
