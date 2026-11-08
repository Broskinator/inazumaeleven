#include "ov071/Unk_ov071_0216ffa0.hpp"
#include "game/vcall.hpp"
struct E02170534 { u8 *a; s32 b; s32 c; };
struct P02170534 { u8 pad[0x30]; E02170534 arr[1]; };
struct P021708e4 { s32 a; s32 b; };

extern "C" void func_ov071_0216ffa0(void);
extern "C" void func_ov071_0217009c(void);
extern "C" s32 func_ov071_02170148(u8 *arg0);
extern "C" void func_ov071_021701b8(u8 *arg0);
extern "C" void func_ov071_021703a0(void);
extern "C" void func_ov071_021704ac(void);
extern "C" s32 func_ov071_021704e0(u8 *arg0);
extern "C" s32 func_ov071_02170534(P02170534 *arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4);
extern "C" s32 func_ov071_02170594(s32 arg0, u8 *arg1, s32 arg2);
extern "C" s32 func_ov071_021705dc(s32 arg0, s32 arg1, s32 arg2);
extern "C" void func_ov071_0217062c(void);
extern "C" void func_ov071_02170694(void);
extern "C" s32 func_ov071_021706f8(...);
extern "C" s32 func_ov071_02170888(u8 *arg0);
extern "C" s32 func_ov071_021708ac(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void func_ov071_021708e4(u8 *arg0);
extern "C" void func_ov071_02170930(s32 arg0);
extern "C" s32 func_ov071_02170944(...);
extern "C" s32 func_ov071_021709bc(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 func_ov071_021709f0(u8 *arg0, s32 arg1);
extern "C" s32 func_ov071_02170aac(u8 *arg0);
extern "C" void func_ov071_02170b2c(void);
extern "C" s32 func_ov071_02170c28(u8 *arg0);
extern "C" s32 func_ov071_02170c6c(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 func_ov071_02170cec(s32 arg0);
extern "C" void func_ov071_02170d00(void);

extern "C" char data_020c46a8[];
extern "C" char data_020c47b4[];
extern "C" char data_020c9660[];
extern "C" char data_020d2520[];
extern "C" char data_020d2d20[];
extern "C" char data_ov071_02170d04[];
extern "C" char data_ov071_02170d34[];
extern "C" char data_ov071_02170f2c[];
extern "C" s32 DC_FlushRange(...);
extern "C" void G2S_GetBG1CharPtr(void);
extern "C" void G2S_GetBG2CharPtr(void);
extern "C" s32 MI_CpuFill8(...);
extern "C" s32 MIi_CpuClearFast(...);
extern "C" void _ZN11FileManager6CancelEPvi(void);
extern "C" s32 _ZN8GameHeap4FreeEPv(...);
extern "C" void _ZN8GameHeap5AllocEiii(void);
extern "C" s32 _ZdlPv(...);
extern "C" void func_02003608(void);
extern "C" s32 func_02003b48(...);
extern "C" void func_0200919c(void);
extern "C" void func_02017278(void);
extern "C" void func_0209d8b8(void);
extern "C" void func_ov015_02132240(void);
extern "C" void func_ov015_021322b0(void);
extern "C" void func_ov015_02132568(void);
extern "C" void func_ov015_02132614(void);
extern "C" s32 func_ov015_02132984(...);
extern "C" void func_ov015_02132a04(void);
extern "C" void func_ov015_02132b7c(void);
extern "C" s32 func_ov015_02133f94(...);
extern "C" void func_ov015_021340c0(void);
extern "C" s32 func_ov015_02134118(...);
extern "C" s32 func_ov015_02134198(...);
extern "C" s32 func_ov015_02134208(...);
extern "C" void func_ov015_02135440(void);
extern "C" s32 func_ov015_02135e10(...);
extern "C" void func_ov015_0213b364(void);
extern "C" s32 func_ov015_0213b3fc(...);
extern "C" s32 func_ov015_0213b6ac(...);
extern "C" s32 func_ov015_0213b870(...);
extern "C" void func_ov015_0213bfcc(void);
extern "C" s32 func_ov015_0213c33c(...);

extern "C" asm void func_ov071_0216ffa0(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    cmp r1, #0
    mvneq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, [r4, #8]
    cmp r0, #0
    cmpne r0, #1
    cmpne r0, #2
    beq @L_0216ffd4
    sub r0, r0, #4
    cmp r0, #1
    bhi @L_0216ffdc
@L_0216ffd4:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_0216ffdc:
    ldr r2, [r4, #0x14]
    ldr r0, [r1]
    cmp r2, r0
    beq @L_02170030
    cmp r2, #2
    bhi @L_02170030
    ldr r0, [r1]
    mov r2, #7
    str r0, [r4, #0x14]
    ldr r3, [r1, #4]
    mov r0, #4
    str r3, [r4, #0x18]
    ldr r3, [r1, #8]
    str r3, [r4, #0x1c]
    ldrb r1, [r1, #0xc]
    strb r1, [r4, #0x20]
    str r2, [r4, #8]
    bl func_ov015_02132614
    mov r0, #1
    strb r0, [r4, #0x10]
    ldmia sp!, {r3, r4, r5, pc}
@L_02170030:
    ldr r2, [r4, #0x18]
    ldr r0, [r1, #4]
    cmp r2, r0
    ldreq r2, [r4, #0x1c]
    ldreq r0, [r1, #8]
    cmpeq r2, r0
    ldreqb r2, [r4, #0x20]
    ldreqb r0, [r1, #0xc]
    cmpeq r2, r0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r2, [r1]
    mov r0, r4
    str r2, [r4, #0x14]
    ldr r2, [r1, #4]
    str r2, [r4, #0x18]
    ldr r2, [r1, #8]
    str r2, [r4, #0x1c]
    ldrb r1, [r1, #0xc]
    strb r1, [r4, #0x20]
    bl func_ov071_021709bc
    mov r5, #1
    mov r0, r4
    mov r1, r5
    bl func_ov071_021709f0
    mov r0, r5
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_ov071_0217009c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r1
    ldr r0, [r4]
    mul r5, r2, r3
    strh r2, [r4, #8]
    strh r3, [r4, #0xa]
    cmp r0, #0
    bne @L_021700d4
    ldr r0, =data_020c47b4
    mov r1, r5, lsl #1
    mov r2, #0
    mov r3, #1
    bl _ZN8GameHeap5AllocEiii
    str r0, [r4]
@L_021700d4:
    ldr r0, [r4, #4]
    cmp r0, #0
    bne @L_021700f8
    ldr r0, =data_020c47b4
    mov r1, r5, lsl #5
    mov r2, #0
    mov r3, #1
    bl _ZN8GameHeap5AllocEiii
    str r0, [r4, #4]
@L_021700f8:
    ldr r2, [r4]
    cmp r2, #0
    ldrne r0, [r4, #4]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    cmp r5, #0
    mov r1, #0
    ble @L_02170130
@L_02170118:
    add r0, r1, #1
    mov r0, r0, lsl #0x10
    strh r1, [r2], #2
    cmp r5, r0, lsr #16
    mov r1, r0, lsr #0x10
    bgt @L_02170118
@L_02170130:
    ldr r1, [r4, #4]
    mov r2, r5, lsl #5
    mov r0, #0
    bl func_0200919c
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 func_ov071_02170148(u8 *arg0)
{
    s32 v0;
    if ((s32)*(u8 * *)(arg0 + 0x48) == 0)
        return (s32)arg0;
    v0 = func_ov015_0213b6ac((s32)data_020c9660, 1, 1, 0, 1, 1, 1, 8, 0x1E, 6, 2, (*(u8 * *)(arg0 + 0x48) + *(s32 *)(*(u8 * *)(arg0 + 0x48) + 0xC)));
    return v0;
}

extern "C" void func_ov071_021701b8(u8 *arg0)
{
    u8 *r3;
    u8 *r4;
    u8 *r12;
    r3 = (u8 *)*(s32 *)(arg0 + 0x48);
    r4 = arg0;
    if ((s32)r3 != 0) {
        func_ov015_0213b6ac((s32)data_020c9660, 1, 1, 0, 1, 1, 1, 2, 0x1E, 6, 2, (r3 + *(s32 *)(r3 + 0xC)));
    }
    arg0 = (u8 *)0xC;
    r3 = (u8 *)*(s32 *)(((u8 *)(((*(s32 *)(r4 + 0x18) + 3) * 0xC) + r4)) + 0x30);
    if ((s32)r3 != 0) {
        func_ov015_0213b6ac((s32)data_020c9660, 1, 1, 0, 1, 1, 5, (s32)arg0, 0x16, 3, 3, (r3 + *(s32 *)(r3 + 0xC)));
    }
    r3 = (u8 *)*(s32 *)(r4 + 0x9C);
    if ((s32)r3 != 0) {
        func_ov015_0213b6ac((s32)data_020c9660, 1, 1, 0, 1, 1, 5, 0x12, 0x16, 6, 4, (r3 + *(s32 *)(r3 + 0xC)));
    }
    if (*(u8 *)(r4 + 0x20) != 0) {
        r12 = (u8 *)*(s32 *)(r4 + 0xA8);
        if ((s32)r12 != 0) {
            func_ov015_0213b6ac((s32)data_020c9660, 1, 0, 0, 1, 1, 0xF, 0x15, 2, 2, 3, (r12 + *(s32 *)(r12 + 0xC)));
        }
    }
    if (*(s32 *)(r4 + 0x24) == 0)
        return;
    func_ov015_0213b6ac((s32)data_020c9660, 1, 0, 0, 1, 1, 6, 0x14, (*(u16 *)(r4 + 0x2C) & 0xFF), (*(u16 *)(r4 + 0x2E) & 0xFF), 0, *(s32 *)(r4 + 0x24));
    return;
}

extern "C" asm void func_ov071_021703a0(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0xcc
    ldr r12, =data_ov071_02170d04
    add r6, sp, #0x1c
    mov r4, r0
    mov r5, r6
    ldmia r12!, {r0, r1, r2, r3}
    stmia r6!, {r0, r1, r2, r3}
    ldmia r12!, {r0, r1, r2, r3}
    stmia r6!, {r0, r1, r2, r3}
    ldmia r12, {r0, r1, r2, r3}
    stmia r6, {r0, r1, r2, r3}
    mov r0, r4
    add r1, r4, #0x24
    mov r2, #0x14
    mov r3, #2
    bl func_ov071_0217009c
    ldr r0, [r4, #0x28]
    cmp r0, #0
    addeq sp, sp, #0xcc
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    mov r0, #0x86
    bl func_0209d8b8
    ldr r2, [r4, #0x1c]
    ldr r1, [r4, #0x18]
    mov r6, r0
    add r0, r2, r1, lsl #1
    ldr r0, [r5, r0, lsl #2]
    bl func_0209d8b8
    add r5, sp, #0x4c
    mov r3, r0
    mov r0, r5
    mov r2, r6
    mov r1, #0x80
    bl func_02017278
    mov r0, #3
    str r0, [sp]
    mov r0, #1
    str r0, [sp, #4]
    ldr r0, [r4, #0x28]
    mov r1, #0
    str r0, [sp, #8]
    ldrh r12, [r4, #0x2c]
    ldr r0, =data_020c46a8
    mov r3, r5
    mov r12, r12, lsl #3
    str r12, [sp, #0xc]
    ldrh r12, [r4, #0x2e]
    mov r2, r1
    mov r12, r12, lsl #3
    str r12, [sp, #0x10]
    str r1, [sp, #0x14]
    str r1, [sp, #0x18]
    ldr r0, [r0]
    ldr r12, [r0]
    ldr r12, [r12, #8]
    blx r12
    ldrh r2, [r4, #0x2c]
    ldrh r1, [r4, #0x2e]
    ldr r0, [r4, #0x28]
    mul r1, r2, r1
    mov r1, r1, lsl #5
    bl DC_FlushRange
    add sp, sp, #0xcc
    ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" asm void func_ov071_021704ac(void)
{
    stmdb sp!, {r3, lr}
    ldrb r2, [r0, #0x10]
    cmp r2, #0
    ldmeqia sp!, {r3, pc}
    mov r2, #0
    strb r2, [r0, #0x10]
    cmp r1, #1
    ldmneia sp!, {r3, pc}
    ldr r1, [r0, #0x14]
    cmp r1, #2
    ldmneia sp!, {r3, pc}
    bl func_ov071_021703a0
    ldmia sp!, {r3, pc}
}

extern "C" s32 func_ov071_021704e0(u8 *arg0)
{
    s32 r4;
    s32 v1;
    s32 v2;
    func_ov015_0213b870((u8 *)((u8 *)&data_020c9660), 1, 1, 0);
    r4 = (s32)arg0;
    arg0 = (u8 *)*(s32 *)(arg0 + 0x14);
    switch ((s32)arg0) {
        default:
            return (s32)arg0;
        case 0:
        case 1:
            v1 = func_ov071_02170148((u8 *)r4);
            return v1;
        case 2:
            v2 = ((s32 (*)(...))func_ov071_021701b8)((u8 *)r4);
            return v2;
    }
}

extern "C" s32 func_ov071_02170534(P02170534 *arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4)
{
    u8 *v = arg0->arr[arg1].a;
    if (v == 0)
        return arg2;
    arg2 = ((s32 (*)(u8 *, s32, s32))func_ov015_02132984)(v + *(s32 *)(v + 0xC), *(s32 *)(v + 0x10), arg2 + 1);
    if (arg4 != 0)
        ((void (*)(u8 *, s32, s32))func_ov015_021322b0)(v, 1, arg3);
    return arg2;
}

extern "C" s32 func_ov071_02170594(s32 arg0, u8 *arg1, s32 arg2)
{
    s32 v0;
    s32 t0;
    s32 t1;
    s32 t2;
    t0 = arg0;
    t1 = *(s32 *)(((u8 *)(arg0 + 0x24)) + (s32)((s32)arg1 * 0xC));
    arg0 = *(s32 *)(((u8 *)(t0 + 0x24)) + (s32)((s32)arg1 * 0xC));
    arg1 = (u8 *)((t0 + 0x24) + ((s32)arg1 * 0xC));
    if (t1 != 0) {
        t2 = ((*(u16 *)(arg1 + 0x8) * *(u16 *)(arg1 + 0xA)) << 1);
        v0 = func_ov015_02132984(arg0, t2, (arg2 + 1), 0);
        arg2 = v0;
    }
    return arg2;
}

extern "C" s32 func_ov071_021705dc(s32 arg0, s32 arg1, s32 arg2)
{
    s32 r4;
    u8 *r5;
    s32 t0;
    r5 = (u8 *)((arg1 * 0xC) + (arg0 + 0x24));
    arg0 = *(s32 *)(((u8 *)((arg1 * 0xC) + (arg0 + 0x24))) + 0x4);
    r4 = arg2;
    if (arg0 != 0) {
        t0 = ((*(u16 *)(r5 + 0x8) * *(u16 *)(r5 + 0xA)) << 5);
        func_02003b48(arg0, arg2, t0);
        r4 = (arg2 + ((*(u16 *)(r5 + 0x8) * *(u16 *)(r5 + 0xA)) << 5));
    }
    return r4;
}

extern "C" asm void func_ov071_0217062c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r4, #0xc
    mul r7, r1, r4
    add r6, r0, #0x30
    ldr r8, [r6, r7]
    ldr r9, [sp, #0x20]
    mov r4, r2
    mov r5, r3
    cmp r8, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r1, [r5]
    mov r0, r8
    add r1, r1, #1
    bl func_ov015_02132a04
    str r0, [r5]
    mov r5, #1
    ldr r1, [r6, r7]
    ldr r2, [r9]
    mov r0, r5
    bl func_ov015_02132b7c
    str r0, [r9]
    mov r0, r8
    mov r1, r5
    mov r2, r4
    bl func_ov015_021322b0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_ov071_02170694(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r12, #0xc
    mul r5, r1, r12
    add r4, r0, #0x30
    ldr r6, [r4, r5]
    ldr r7, [sp, #0x20]
    mov r9, r2
    mov r8, r3
    cmp r6, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r1, [r8]
    mov r0, r6
    add r1, r1, #1
    bl func_ov015_02132a04
    str r0, [r8]
    ldr r1, [r4, r5]
    ldr r2, [r7]
    mov r0, #2
    bl func_ov015_02132b7c
    str r0, [r7]
    mov r0, r6
    mov r2, r9
    mov r1, #1
    bl func_ov015_021322b0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm s32 func_ov071_021706f8(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x14
    mov r4, #0
    mov r3, #1
    mov r5, r0
    mov r1, r4
    str r3, [sp]
    sub r2, r4, #1
    bl func_ov071_02170534
    ldr r1, [r5, #0x30]
    mov r0, r4
    mov r2, r4
    bl func_ov015_02132b7c
    ldr r3, [r5, #0x30]
    cmp r3, #0
    beq @L_0217074c
    ldr r0, [r3, #0xc]
    ldr r2, [r3, #0x10]
    mov r1, r4
    add r0, r3, r0
    bl func_02003608
@L_0217074c:
    bl G2S_GetBG1CharPtr
    mov r6, #0x20
    mov r4, #0
    mov r1, r0
    mov r0, r4
    mov r2, r6
    bl MIi_CpuClearFast
    bl G2S_GetBG1CharPtr
    mov r1, r6
    bl DC_FlushRange
    str r4, [sp, #0x10]
    str r6, [sp, #8]
    bl G2S_GetBG2CharPtr
    mov r1, r0
    mov r0, r4
    mov r2, r6
    bl MIi_CpuClearFast
    bl G2S_GetBG2CharPtr
    mov r1, r6
    bl DC_FlushRange
    str r6, [sp, #4]
    str r4, [sp, #0xc]
    ldr r0, [r5, #0x14]
    cmp r0, #0
    cmpne r0, #1
    beq @L_021707c0
    cmp r0, #2
    beq @L_021707e0
    b @L_0217087c
@L_021707c0:
    mov r1, #2
    add r4, sp, #8
    add r3, sp, #0x10
    mov r0, r5
    mov r2, r1
    str r4, [sp]
    bl func_ov071_0217062c
    b @L_0217087c
@L_021707e0:
    add r8, sp, #8
    add r7, sp, #0x10
    mov r1, #2
    mov r0, r5
    mov r2, r1
    mov r3, r7
    str r8, [sp]
    bl func_ov071_0217062c
    str r8, [sp]
    ldr r1, [r5, #0x18]
    mov r6, #3
    mov r0, r5
    mov r2, r6
    mov r3, r7
    add r1, r1, #3
    bl func_ov071_0217062c
    mov r0, r5
    mov r3, r7
    mov r1, #9
    mov r2, #4
    str r8, [sp]
    bl func_ov071_0217062c
    add r1, sp, #4
    str r1, [sp]
    mov r2, r6
    mov r0, r5
    mov r1, #0xa
    add r3, sp, #0xc
    bl func_ov071_02170694
    ldr r2, [sp, #0xc]
    mov r0, r5
    mov r1, r4
    bl func_ov071_02170594
    str r0, [sp, #0xc]
    ldr r2, [sp, #4]
    mov r1, r4
    mov r0, r5
    bl func_ov071_021705dc
    str r0, [sp, #4]
@L_0217087c:
    bl func_ov015_02132240
    add sp, sp, #0x14
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" s32 func_ov071_02170888(u8 *arg0)
{
    MI_CpuFill8((arg0 + 0xB4), 0, 0x30);
    *(s32 *)(arg0 + 0x8) = 1;
    return 1;
}

extern "C" s32 func_ov071_021708ac(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 r4;
    s32 r5;
    s32 r6;
    func_ov015_02134198((arg0 + 0xB4), 4, arg2, arg3);
    r4 = 0xC;
    r5 = (arg0 + 0xB4);
    r6 = 0;
    do {
        s32 v1 = func_ov015_02134208(((r6 * r4) + r5));
        arg0 = v1;
        r6 = (r6 + 1);
    } while (r6 < 4);
    return arg0;
}

extern "C" void func_ov071_021708e4(u8 *arg0)
{
    s32 v = *(s32 *)(arg0 + 0x3C);
    P021708e4 *e;
    if (v == 0)
        return;
    e = (P021708e4 *)data_ov071_02170d34;
    if (e->a == 0)
        return;
    do {
        ((void (*)(s32, u8 *, s32))func_ov015_021340c0)(e->a, arg0 + 0x30 + e->b * 0xC, v);
        e++;
    } while (e->a != 0);
}

extern "C" void func_ov071_02170930(s32 arg0)
{
    func_ov015_02134118((arg0 + 0x30), 0xB);
}

extern "C" asm s32 func_ov071_02170944(...)
{
    stmdb sp!, {r4, lr}
    mov r2, #0xc
    mul r2, r1, r2
    add r0, r0, #0x30
    ldr r1, [r0, r2]
    add r4, r0, r2
    cmp r1, #0
    ldrneb r0, [r4, #9]
    cmpne r0, #0
    ldmeqia sp!, {r4, pc}
    ldrb r0, [r4, #8]
    cmp r0, #0
    beq @L_02170984
    ldr r0, =data_020c47b4
    bl _ZN8GameHeap4FreeEPv
    b @L_0217099c
@L_02170984:
    ldr r0, =data_020c47b4
    ldr r0, [r0]
    cmp r0, #0
    beq @L_0217099c
    mov r2, #1
    bl _ZN11FileManager6CancelEPvi
@L_0217099c:
    mov r0, #0
    str r0, [r4]
    str r0, [r4, #4]
    strb r0, [r4, #8]
    strb r0, [r4, #9]
    strb r0, [r4, #0xa]
    ldmia sp!, {r4, pc}
}

extern "C" s32 func_ov071_021709bc(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 r4;
    s32 r5;
    func_ov015_02134198((arg0 + 0x30), 0xB, arg2, arg3);
    r4 = 0;
    r5 = arg0;
    do {
        s32 v1 = func_ov071_02170944(r5, r4);
        arg0 = v1;
        r4 = (r4 + 1);
    } while (r4 < 0xB);
    return arg0;
}

extern "C" s32 func_ov071_021709f0(u8 *arg0, s32 arg1)
{
    u8 *r4;
    *(s32 *)(arg0 + 0xC) = arg1;
    r4 = arg0;
    if (arg1 != 1) {
        if (arg1 == 2) {
            *(u8 *)(r4 + 0x10) = 1;
        }
    } else {
        MI_CpuFill8((s32)(r4 + 0x30), 0, 0x84);
        MIi_CpuClearFast(0, (u8 *)((u8 *)&data_020d2d20), 0x800);
        DC_FlushRange((u8 *)((u8 *)&data_020d2d20), 0x800);
        MIi_CpuClearFast(0, (u8 *)((u8 *)&data_020d2520), 0x800);
        DC_FlushRange((u8 *)((u8 *)&data_020d2520), 0x800);
        arg0 = (u8 *)*(s32 *)(r4 + 0x14);
        switch ((s32)arg0) {
            case 0:
            case 1:
            case 2:
                func_ov015_02133f94((u8 *)((u8 *)&data_ov071_02170f2c), (s32)(r4 + 0x3C));
                break;
        }
        *(u8 *)(r4 + 0x10) = 1;
    }
    *(s32 *)(r4 + 0x8) = 2;
    return 2;
}

static inline void clr02170aac(void *dest, u32 size)
{
    MI_CpuFill8(dest, 0, size);
}
extern "C" s32 func_ov071_02170aac(u8 *arg0)
{
    (*(VCall **)(arg0 + 4))->f10(1);
    ((void (*)(s32))func_ov015_02135440)(6);
    *(s32 *)(arg0 + 0x8) = 0;
    clr02170aac(arg0 + 0x24, 0xC);
    clr02170aac(arg0 + 0x30, 0x84);
    *(u8 *)(arg0 + 0x10) = 0;
    *(s32 *)(arg0 + 0x14) = 0;
    *(s32 *)(arg0 + 0x18) = 0;
    *(s32 *)(arg0 + 0x1C) = 0;
    *(u8 *)(arg0 + 0x20) = 0;
    func_ov071_02170888(arg0);
    return ((s32 (*)(void *, s32))func_ov015_0213b364)(data_020c9660, 1);
}

extern "C" asm void func_ov071_02170b2c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #8]
    cmp r1, #7
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r4, pc}
    ldmia sp!, {r4, pc}
    b @L_02170b64
    b @L_02170b80
    ldmia sp!, {r4, pc}
    b @L_02170bd4
    ldmia sp!, {r4, pc}
    b @L_02170be8
    b @L_02170bf8
@L_02170b64:
    add r0, r4, #0xb4
    mov r1, #4
    bl func_ov015_02134118
    cmp r0, #0
    movne r0, #3
    strne r0, [r4, #8]
    ldmia sp!, {r4, pc}
@L_02170b80:
    ldr r1, [r4, #0xc]
    bl func_ov071_021704ac
    mov r0, r4
    bl func_ov071_02170930
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    ldr r0, [r4, #0xc]
    cmp r0, #1
    beq @L_02170bb0
    cmp r0, #2
    beq @L_02170bc0
    ldmia sp!, {r4, pc}
@L_02170bb0:
    mov r0, r4
    mov r1, #2
    bl func_ov071_021709f0
    ldmia sp!, {r4, pc}
@L_02170bc0:
    mov r0, r4
    bl func_ov071_021708e4
    mov r0, #5
    str r0, [r4, #8]
    ldmia sp!, {r4, pc}
@L_02170bd4:
    bl func_ov071_021704e0
    mov r0, #4
    bl func_ov015_02132568
    mov r0, #6
    str r0, [r4, #8]
@L_02170be8:
    ldr r0, =data_020c9660
    mov r1, #1
    bl func_ov015_0213bfcc
    ldmia sp!, {r4, pc}
@L_02170bf8:
    ldr r1, [r0]
    ldr r1, [r1, #0x58]
    blx r1
    cmp r0, #0
    ldmneia sp!, {r4, pc}
    mov r0, r4
    bl func_ov071_021709bc
    mov r0, r4
    mov r1, #1
    bl func_ov071_021709f0
    ldmia sp!, {r4, pc}
}

extern "C" s32 func_ov071_02170c28(u8 *arg0)
{
    s32 r1;
    s32 v1;
    r1 = *(s32 *)(arg0 + 0x8);
    switch (r1) {
        default:
            return (s32)arg0;
        case 5:
            func_ov071_021706f8((s32)arg0, r1);
            *(s32 *)(arg0 + 0x8) = 4;
            return 4;
        case 6:
            v1 = func_ov015_0213c33c((u8 *)((u8 *)&data_020c9660), 1);
            return v1;
    }
}

extern "C" s32 func_ov071_02170c6c(u8 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 v6;
    u8 *t0;
    func_ov071_021709bc((s32)arg0, arg1, arg2, arg3);
    ((s32 (*)(...))func_ov071_021708ac)((s32)arg0);
    arg1 = *(s32 *)(arg0 + 0x24);
    if (arg1 != 0) {
        _ZN8GameHeap4FreeEPv((s32)((u8 *)&data_020c47b4), arg1);
        *(s32 *)(arg0 + 0x24) = 0;
    }
    arg1 = *(s32 *)(arg0 + 0x28);
    if (arg1 != 0) {
        _ZN8GameHeap4FreeEPv((s32)((u8 *)&data_020c47b4), arg1);
        *(s32 *)(arg0 + 0x28) = 0;
    }
    func_ov015_0213b3fc((s32)((u8 *)&data_020c9660), 1);
    func_ov015_02135e10();
    t0 = *(u8 * *)(arg0 + 0x4);
    v6 = ((s32 (*)(...))*(s32 *)(*(u8 * *)(*(u8 * *)(arg0 + 0x4)) + 0xC))(t0, 1);
    return v6;
}

extern "C" s32 func_ov071_02170cec(s32 arg0)
{
    _ZdlPv(arg0);
    return arg0;
}

extern "C" void func_ov071_02170d00(void)
{
}
