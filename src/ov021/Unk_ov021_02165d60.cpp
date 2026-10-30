#include "ov021/Unk_ov021_02165d60.hpp"

extern "C" s32 func_ov021_02165d60(u8 *arg0);
extern "C" void func_ov021_02165d94(void);
extern "C" void func_ov021_02165d98(s32 arg0);
extern "C" void func_ov021_02165dac(s32 arg0);
extern "C" s32 func_ov021_02165dc0(...);
extern "C" void func_ov021_02165dd8(s32 arg0);
extern "C" s32 func_ov021_02165de8(u8 *arg0);
extern "C" s32 func_ov021_02165e58(...);
extern "C" void func_ov021_02165e98(u8 *arg0, s32 arg1);
extern "C" void func_ov021_02165eb8(u8 *arg0, u8 *arg1);
extern "C" void func_ov021_02165ee0(u8 *arg0);
extern "C" void func_ov021_02165f34(void);
extern "C" void func_ov021_02165fd8(void);
extern "C" void func_ov021_02166020(s32 arg0);
extern "C" s32 func_ov021_021660b0(s32 arg0);
extern "C" void func_ov021_021660c4(void);

extern "C" char data_020c9660[];
extern "C" char data_ov021_021661cc[];
extern "C" s32 G2_GetBG1ScrPtr(...);
extern "C" s32 G2_GetBG2ScrPtr(...);
extern "C" s32 G2_GetBG3ScrPtr(...);
extern "C" s32 MI_CpuFill8(...);
extern "C" void _ZN17UnkClass_0203dc7c13func_0203e04cEii(void);
extern "C" s32 _ZdlPv(...);
extern "C" s32 func_02003758(...);
extern "C" s32 func_02003ad8(...);
extern "C" s32 func_ov015_02132224(...);
extern "C" s32 func_ov015_021322b0(...);
extern "C" void func_ov015_0213257c(void);
extern "C" void func_ov015_02132628(void);
extern "C" s32 func_ov015_02132984(...);
extern "C" s32 func_ov015_02132c08(...);
extern "C" s32 func_ov015_02133f94(...);
extern "C" s32 func_ov015_02134118(...);
extern "C" s32 func_ov015_02134198(...);
extern "C" void func_ov015_02134208(void);
extern "C" s32 func_ov015_0213b364(...);
extern "C" s32 func_ov015_0213b3fc(...);
extern "C" s32 func_ov015_0213b478(...);
extern "C" void func_ov015_0213bfcc(void);
extern "C" void func_ov015_0213c33c(void);

extern "C" s32 func_ov021_02165d60(u8 *arg0)
{
    MI_CpuFill8((arg0 + 0xC), 0, 0xC);
    func_ov015_02133f94((s32)data_ov021_021661cc, (arg0 + 0xC));
    *(s32 *)(arg0 + 0x8) = 1;
    return 1;
}

extern "C" void func_ov021_02165d94(void)
{
}

extern "C" void func_ov021_02165d98(s32 arg0)
{
    func_ov015_02134118((arg0 + 0xC), 1);
}

extern "C" void func_ov021_02165dac(s32 arg0)
{
    func_ov015_02134198((arg0 + 0xC), 1);
}

extern "C" asm s32 func_ov021_02165dc0(...)
{
    add r2, r0, #0xc
    mov r0, #0xc
    mla r0, r1, r0, r2
    ldr r12, =func_ov015_02134208
    bx r12
}

extern "C" void func_ov021_02165dd8(s32 arg0)
{
    func_ov021_02165dc0(arg0, 0);
}

extern "C" s32 func_ov021_02165de8(u8 *arg0)
{
    u8 *r6;
    s32 v4;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    s32 t5;
    r6 = (u8 *)*(s32 *)(arg0 + 0xC);
    if ((s32)r6 != 0) {
        func_ov015_021322b0((s32)r6, 0, 1);
        t0 = (s32)(r6 + *(s32 *)(r6 + 0xC));
        t1 = *(s32 *)(r6 + 0x10);
        func_ov015_02132984(t0, t1, 0, 1);
        t2 = (s32)(r6 + *(s32 *)(r6 + 0x14));
        t3 = *(s32 *)(r6 + 0x18);
        func_02003ad8(t2, 0, t3);
        t4 = (s32)(r6 + *(s32 *)(r6 + 0xC));
        t5 = *(s32 *)(r6 + 0x10);
        func_02003758(t4, 0, t5);
    }
    v4 = func_ov015_02132224();
    return v4;
}

extern "C" asm s32 func_ov021_02165e58(...)
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

extern "C" void func_ov021_02165e98(u8 *arg0, s32 arg1)
{
    if (*(s32 *)(arg0 + 0x8) != 4)
        return;
    if (arg1 == 0)
        return;
    func_ov021_02165e58((s32)arg0, arg1, *(s32 *)(arg0 + 0x8));
}

extern "C" void func_ov021_02165eb8(u8 *arg0, u8 *arg1)
{
    u16 t0;
    u16 t1;
    if (*(s32 *)(arg0 + 0x8) != 4)
        return;
    if (*(u16 *)(arg1 + 0x4) != 1)
        return;
    if (*(u16 *)(arg1 + 0x6) != 0)
        return;
    t0 = *(u16 *)(arg1 + 0x6);
    t1 = *(u16 *)(arg1 + 0x4);
    func_ov021_02165e58((s32)arg0, t0, t1);
    return;
}

extern "C" void func_ov021_02165ee0(u8 *arg0)
{
    *(s32 *)(arg0 + 0x8) = 0;
    func_ov015_0213b364((s32)data_020c9660, 0);
    s32 v1 = G2_GetBG3ScrPtr();
    s32 v2 = G2_GetBG1ScrPtr();
    func_ov015_0213b478((s32)data_020c9660, 0, v1, v2, 0);
    func_ov021_02165d60(arg0);
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

extern "C" void func_ov021_02166020(s32 arg0)
{
    s32 v0 = G2_GetBG3ScrPtr(arg0);
    s32 v1 = G2_GetBG1ScrPtr();
    s32 v2 = G2_GetBG2ScrPtr();
    func_ov015_0213b478((s32)data_020c9660, 0, v0, v1, v2);
    func_ov015_0213b3fc((s32)data_020c9660, 0);
    func_ov021_02165dac(arg0);
    func_ov021_02165dd8(arg0);
    func_ov015_02132c08(1, 0x10);
    func_ov015_02132c08(2, 0x10);
    func_ov015_02132c08(3, 0x10);
}

extern "C" s32 func_ov021_021660b0(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov021_021660c4(void)
{
}
