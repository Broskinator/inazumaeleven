#include "ov015/Unk_021306e0.hpp"

extern "C" void func_ov015_021306e0(void);
extern "C" void func_ov015_021307e4(s32 arg0, s32 arg1);
extern "C" void func_ov015_02130878(void);
extern "C" void func_ov015_02130920(void);
extern "C" s32 func_ov015_021309a4(...);
extern "C" s32 func_ov015_021309f8(...);
extern "C" s32 func_ov015_02130a4c(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void func_ov015_02130a84(s32 arg0);
extern "C" void func_ov015_02130ab8(void);
extern "C" void func_ov015_02130ad4(void);
extern "C" s32 func_ov015_02130ae8(s32 arg0);
extern "C" s32 func_ov015_02130b14(...);
extern "C" s32 func_ov015_02130b94(s32 arg0);
extern "C" u8 *func_ov015_02130c18(s32 arg0, s32 arg1, s32 arg2);
extern "C" void func_ov015_02130cb8(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 func_ov015_02130ce0(...);
extern "C" s32 func_ov015_02130d8c(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 func_ov015_02130e28(s32 arg0);
extern "C" s32 func_ov015_02130e40(s32 arg0);
extern "C" s32 func_ov015_02130e54(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void func_ov015_02130e80(void);
extern "C" void func_ov015_02130f1c(void);
extern "C" s32 func_ov015_02130fd4(s32 arg0, s32 arg1, u8 *arg2, u8 *arg3);

extern "C" char data_020c47b4[];
extern "C" char data_020c4838[];
extern "C" char data_020c483c[];
extern "C" char data_020c485c[];
extern "C" char data_020c4874[];
extern "C" char data_020e88a0[];
extern "C" char data_ov015_02165d40[];
extern "C" s32 DC_FlushRange(...);
extern "C" void FX_SinCosTable_(void);
extern "C" s32 MI_CpuCopy8(...);
extern "C" void _ZN8GameHeap5AllocEiii(void);
extern "C" s32 _ZN9EntryPool3GetEi(...);
extern "C" s32 _ZN9EntryPool9RemoveAllEv(...);
extern "C" void _fflt(void);
extern "C" void _s32_div_f(void);
extern "C" void _ffix(void);
extern "C" void _fadd(void);
extern "C" void _fsub(void);
extern "C" void func_0202b608(void);
extern "C" void func_02080b90(void);
extern "C" void func_0208130c(void);
extern "C" s32 func_02082604(...);
extern "C" char gEntryPool[];

extern "C" asm void func_ov015_021306e0(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r0
    mov r0, #6
    mul r1, r8, r0
    ldr r4, =data_ov015_02165d40
    ldr r7, =data_020c47b4
    str r8, [r4, #4]
    mov r6, #0
    mov r5, #1
    mov r0, r7
    mov r2, r6
    mov r3, r5
    str r8, [r4, #0xc]
    bl _ZN8GameHeap5AllocEiii
    str r0, [r4, #8]
    ldr r1, [r4, #0xc]
    mov r0, r7
    mov r2, r6
    mov r3, r5
    bl _ZN8GameHeap5AllocEiii
    str r0, [r4]
    cmp r8, #0
    ldr r7, [r4, #8]
    ble @L_02130790
    ldr r5, =FX_SinCosTable_
    ldr r4, =0x199
@L_02130748:
    mov r1, r8
    mov r0, r6, lsl #0x10
    bl _s32_div_f
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r0, r0, asr #4
    mov r2, r0, lsl #1
    mov r0, r2, lsl #1
    ldrsh r1, [r5, r0]
    add r0, r5, r2, lsl #1
    add r6, r6, #1
    strh r1, [r7]
    ldrsh r0, [r0, #2]
    strh r4, [r7, #2]
    cmp r6, r8
    strh r0, [r7, #4]
    add r7, r7, #6
    blt @L_02130748
@L_02130790:
    ldr r0, =data_ov015_02165d40
    mov r1, #0
    ldr r2, [r0]
    cmp r8, #1
    strb r1, [r2]
    mov r1, #1
    ldmleia sp!, {r4, r5, r6, r7, r8, pc}
@L_021307ac:
    add r0, r1, r1, lsr #31
    tst r1, #1
    movne r0, r0, asr #1
    addne r0, r0, #1
    subeq r0, r8, r0, asr #1
    strb r0, [r2, r1]
    add r1, r1, #1
    cmp r1, r8
    blt @L_021307ac
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" void func_ov015_021307e4(s32 arg0, s32 arg1)
{
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 e;
    s32 k = 1;
    s32 z = 0;
    a = z;
    ((s32 (*)(...))func_0202b608)(0x30, &a, k);
    b = z;
    ((s32 (*)(...))func_0202b608)(0x31, &b, k);
    c = z;
    ((s32 (*)(...))func_0202b608)(0x2A, &c, k);
    d = arg1 << 24 | 0xC1 | arg0 << 16;
    ((s32 (*)(...))func_0202b608)(0x29, &d, k);
    e = z;
    ((s32 (*)(...))func_0202b608)(0x20, &e, k);
    ((s32 (*)(...))func_ov015_02130878)();
}

extern "C" asm void func_ov015_02130878(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    ldr r6, =data_ov015_02165d40
    mov r0, #2
    ldr r5, [r6]
    add r1, sp, #8
    str r0, [sp, #8]
    mov r0, #0x40
    mov r2, #1
    ldr r4, [r6, #8]
    bl func_0202b608
    ldr r6, [r6, #0xc]
    mov r7, #0
    cmp r6, #0
    ble @L_02130904
    mov r10, #0x23
    add r9, sp, #0
    mov r11, #2
    mov r8, #6
@L_021308c4:
    ldrb r2, [r5], #1
    mov r0, r10
    mov r1, r9
    mul r3, r2, r8
    add r2, r4, r3
    ldrh r12, [r4, r3]
    ldrh r3, [r2, #2]
    ldrh lr, [r2, #4]
    mov r2, r11
    orr r3, r12, r3, lsl #16
    str r3, [sp]
    str lr, [sp, #4]
    bl func_0202b608
    add r7, r7, #1
    cmp r7, r6
    blt @L_021308c4
@L_02130904:
    mov r1, #0
    mov r2, r1
    mov r0, #0x41
    bl func_0202b608
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

struct R02130920 { u64 x, mul, add; };
static inline void init02130920(R02130920 *c, u64 seed) { c->x = seed; c->mul = 0x5D588B656C078965ULL; c->add = 0x269EC3ULL; }
extern "C" void func_ov015_02130920(void)
{
    s32 c;
    c = *(volatile u16 *)0x4000006;
    init02130920((R02130920 *)data_020c4874, *(volatile u32 *)0x2FFFC3C + c);
    c = *(volatile u16 *)0x4000006;
    init02130920((R02130920 *)data_020c485c, *(volatile u32 *)0x2FFFC3C + c);
}

extern "C" asm s32 func_ov015_021309a4(...)
{
    stmdb sp!, {r4, lr}
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r4, pc}
    ldr r1, =data_020c4874
    ldmia r1, {r2, r3, r12}
    umull r4, lr, r12, r2
    mla lr, r12, r3, lr
    ldr r3, [r1, #0xc]
    ldr r12, [r1, #0x10]
    mla lr, r3, r2, lr
    ldr r2, [r1, #0x14]
    adds r4, r12, r4
    adc r12, r2, lr
    stmia r1, {r4, r12}
    cmp r0, #0
    umullne r1, r0, r12, r0
    movne r12, r0
    mov r0, r12
    ldmia sp!, {r4, pc}
}

extern "C" asm s32 func_ov015_021309f8(...)
{
    stmdb sp!, {r4, lr}
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r4, pc}
    ldr r1, =data_020c485c
    ldmia r1, {r2, r3, r12}
    umull r4, lr, r12, r2
    mla lr, r12, r3, lr
    ldr r3, [r1, #0xc]
    ldr r12, [r1, #0x10]
    mla lr, r3, r2, lr
    ldr r2, [r1, #0x14]
    adds r4, r12, r4
    adc r12, r2, lr
    stmia r1, {r4, r12}
    cmp r0, #0
    umullne r1, r0, r12, r0
    movne r12, r0
    mov r0, r12
    ldmia sp!, {r4, pc}
}

extern "C" s32 func_ov015_02130a4c(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 r5;
    r5 = arg0;
    if (r5 != 0) {
        MI_CpuCopy8((s32)data_020c4874, r5, 0x18);
        DC_FlushRange(r5, 0x18);
    }
    return (s32)data_020c4874;
}

extern "C" void func_ov015_02130a84(s32 arg0)
{
    if (arg0 == 0)
        return;
    MI_CpuCopy8(arg0, (s32)data_020c4874, 0x18);
    DC_FlushRange((s32)data_020c4874, 0x18);
}

extern "C" void func_ov015_02130ab8(void)
{
    func_ov015_021309a4(1);
    func_ov015_021309f8(1);
}

extern "C" void func_ov015_02130ad4(void)
{
    _ZN9EntryPool9RemoveAllEv((s32)gEntryPool);
}

extern "C" s32 func_ov015_02130ae8(s32 arg0)
{
    s32 v0;
    if ((arg0 < 0 || arg0 >= 0x84)) {
        return 0;
    } else {
        v0 = _ZN9EntryPool3GetEi((s32)((u8 *)&gEntryPool), arg0);
        return v0;
    }
}

extern "C" asm s32 func_ov015_02130b14(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r5, #0
    movs r6, r1
    mov r7, r0
    mvnne r0, #0
    ldr r4, =gEntryPool
    strne r0, [r6]
    mov r8, r5
    mov r9, #1
@L_02130b38:
    mov r0, r4
    mov r1, r5
    bl _ZN9EntryPool3GetEi
    cmp r0, #0
    beq @L_02130b7c
    ldrh r1, [r0, #0xf0]
    tst r1, #1
    movne r1, r9
    moveq r1, r8
    cmp r1, #0
    beq @L_02130b7c
    ldrh r1, [r0, #0x42]
    cmp r7, r1
    bne @L_02130b7c
    cmp r6, #0
    strne r5, [r6]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_02130b7c:
    add r5, r5, #1
    cmp r5, #0x84
    blt @L_02130b38
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" s32 func_ov015_02130b94(s32 arg0)
{
    u8 *r0;
    s32 r1;
    s32 r4;
    s32 r5;
    s32 r6;
    s32 r7;
    s32 r8;
    s32 r9;
    s32 v0;
    s32 v1;
    v0 = func_02082604((s32)((u8 *)&data_020e88a0), ((u16)arg0));
    r7 = arg0;
    r5 = 0;
    r4 = (s32)((u8 *)&gEntryPool);
    r6 = v0;
    r8 = 0;
    r9 = 1;
    do {
        v1 = _ZN9EntryPool3GetEi(r4, r5);
        r0 = (u8 *)v1;
        if ((s32)r0 != 0) {
            if ((*(u16 *)(r0 + 0xF0) & 1) != 0) {
                r1 = r9;
            } else {
                r1 = r8;
            }
            if (r1 != 0) {
                if (r7 == *(u16 *)(r0 + 0x42))
                    return (s32)r0;
                if (r6 == *(u16 *)(r0 + 0x42))
                    return (s32)r0;
            }
        }
        r5 = (r5 + 1);
    } while (r5 < 0x84);
    return 0;
}

static inline s32 a02130c18(u8 *e) { return (*(u16 *)(e + 0xF0) & 1) ? 1 : 0; }
//@local
static inline s32 b02130c18(u8 *e) { return (*(u16 *)(e + 0xF0) & 8) ? 1 : 0; }
extern "C" u8 *func_ov015_02130c18(s32 arg0, s32 arg1, s32 arg2)
{
    u8 *e;
    s32 i;
    for (i = 0; i < 0x84; i++) {
        e = (u8 *)((s32 (*)(...))_ZN9EntryPool3GetEi)(gEntryPool, i);
        if (e != 0 && a02130c18(e) != 0 && b02130c18(e) != 0 && arg0 == ((s32 (*)(...))func_02080b90)(e) && arg1 == ((s32 (*)(...))func_0208130c)(e, arg2))
            return e;
    }
    return 0;
}

extern "C" void func_ov015_02130cb8(s32 arg0, s32 arg1, s32 arg2)
{
    s32 v0 = func_ov015_02130ce0(arg0, arg1, (arg2 != 0 ? 1 : 0), 0);
    func_ov015_02130b14(v0, 0);
}

extern "C" asm s32 func_ov015_02130ce0(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r5, #0
    ldr r4, =gEntryPool
    mov r10, r0
    mov r9, r1
    str r2, [sp]
    mov r8, r3
    mov r6, r5
    mov r11, #1
@L_02130d04:
    mov r0, r4
    mov r1, r6
    bl _ZN9EntryPool3GetEi
    movs r7, r0
    beq @L_02130d58
    ldrh r0, [r7, #0xf0]
    tst r0, #1
    movne r0, r11
    moveq r0, #0
    cmp r0, #0
    beq @L_02130d58
    mov r0, r7
    bl func_02080b90
    cmp r10, r0
    bne @L_02130d58
    mov r0, r7
    mov r1, r8
    bl func_0208130c
    cmp r9, r0
    ldreqh r5, [r7, #0x42]
    beq @L_02130d64
@L_02130d58:
    add r6, r6, #1
    cmp r6, #0x84
    blt @L_02130d04
@L_02130d64:
    ldr r0, [sp]
    cmp r0, #0
    ldrne r0, =0xfff
    andne r0, r5, r0
    movne r0, r0, lsl #0x10
    movne r5, r0, lsr #0x10
    mov r0, r5
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 func_ov015_02130d8c(s32 arg0, s32 arg1, s32 arg2)
{
    u8 *r5;
    u8 *r6;
    u16 t0;
    u8 t1;
    s16 t2;
    if (arg0 == 0)
        return arg0;
    if (arg1 == 0)
        return arg0;
    MI_CpuCopy8(arg0, arg1, 0x60);
    MI_CpuCopy8((arg0 + 0x60), (arg1 + 0x60), 0x70);
    MI_CpuCopy8((arg0 + 0xD0), (arg1 + 0xD0), 0x18);
    r6 = (u8 *)arg0;
    r5 = (u8 *)arg1;
    if (arg2 != 0) {
        arg0 = *(s32 *)(r6 + 0xE8);
        if (arg0 != 0) {
            arg1 = *(s32 *)(r5 + 0xE8);
            if (arg1 != 0) {
                MI_CpuCopy8(arg0, arg1, 0x20);
            }
        }
        arg0 = *(s32 *)(r6 + 0xEC);
        if (arg0 != 0) {
            arg1 = *(s32 *)(r5 + 0xEC);
            if (arg1 != 0) {
                MI_CpuCopy8(arg0, arg1, 0x90);
            }
        }
    }
    t0 = *(u16 *)(r6 + 0xF0);
    *(u16 *)(r5 + 0xF0) = t0;
    t1 = *(u8 *)(r6 + 0xF2);
    *(u8 *)(r5 + 0xF2) = t1;
    t2 = *(s16 *)(r6 + 0xF4);
    *(u16 *)(r5 + 0xF4) = t2;
    return t2;
}

extern "C" s32 func_ov015_02130e28(s32 arg0)
{
    return (((((arg0 + 0xFF) + 0xF00) >> 0xD) + 2) & 7);
}

extern "C" s32 func_ov015_02130e40(s32 arg0)
{
    return ((u32)(((arg0 << 0xD) + 0xC000) << 0x10) >> 0x10);
}

extern "C" s32 func_ov015_02130e54(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    if ((arg0 + arg2) >= 0) {
        if (arg0 < 0x100) {
            arg0 = (arg1 + arg3);
            if (arg0 >= 0) {
                if (arg1 < 0xC0)
                    return 1;
            }
        }
    }
    return 0;
}

extern "C" asm void func_ov015_02130e80(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r12, =data_020c483c
    mov r4, r1
    ldr r1, [r12]
    mov r6, r2
    add r0, r0, r1
    cmp r0, #0
    mov r5, r3
    mov r0, r0, lsl #0xc
    ble @L_02130ebc
    bl _fflt
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_02130ec8
@L_02130ebc:
    bl _fflt
    mov r1, #0x3f000000
    bl _fsub
@L_02130ec8:
    bl _ffix
    ldr r1, =data_020c4838
    str r0, [r6]
    ldr r0, [r1]
    add r0, r4, r0
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02130efc
    bl _fflt
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_02130f08
@L_02130efc:
    bl _fflt
    mov r1, #0x3f000000
    bl _fsub
@L_02130f08:
    bl _ffix
    str r0, [r5]
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov015_02130f1c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r4, =data_020c483c
    mov r7, r0
    ldr r0, [r4]
    mov r6, r1
    cmp r0, #0
    mov r5, r2
    mov r4, r3
    mov r0, r0, lsl #0xc
    ble @L_02130f58
    bl _fflt
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_02130f64
@L_02130f58:
    bl _fflt
    mov r1, #0x3f000000
    bl _fsub
@L_02130f64:
    bl _ffix
    sub r1, r7, r0
    mov r0, r1, asr #0xb
    add r0, r1, r0, lsr #20
    mov r1, r0, asr #0xc
    ldr r0, =data_020c4838
    str r1, [r5]
    ldr r0, [r0]
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02130fa4
    bl _fflt
    mov r1, r0
    mov r0, #0x3f000000
    bl _fadd
    b @L_02130fb0
@L_02130fa4:
    bl _fflt
    mov r1, #0x3f000000
    bl _fsub
@L_02130fb0:
    bl _ffix
    sub r1, r6, r0
    mov r0, r1, asr #0xb
    add r0, r1, r0, lsr #20
    mov r0, r0, asr #0xc
    str r0, [r4]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" s32 func_ov015_02130fd4(s32 arg0, s32 arg1, u8 *arg2, u8 *arg3)
{
    s32 t0;
    s32 t2;
    t0 = (arg0 - *(s32 *)(data_020c483c));
    *(s32 *)(arg2) = t0;
    t2 = (arg1 - *(s32 *)(data_020c4838));
    *(s32 *)(arg3) = t2;
    return t2;
}
