#include "ov003/Unk_ov003_0211b8dc.hpp"

extern "C" void func_ov003_0211b8dc(void);
extern "C" s32 func_ov003_0211baa4(s32 arg0);
extern "C" void func_ov003_0211bae0(void);
extern "C" s32 func_ov003_0211bd8c(...);
extern "C" BOOL func_ov003_0211bfa0(u8 *arg0);
extern "C" void func_ov003_0211bfc4(u8 *arg0);
extern "C" void func_ov003_0211c01c(void);
extern "C" void func_ov003_0211c0c4(void);
extern "C" s32 func_ov003_0211c200(u8 *arg0);

extern "C" char data_020c5120[];
extern "C" char data_020c5320[];
extern "C" char data_020c5598[];
extern "C" char data_020c8760[];
extern "C" char data_020cb6e0[];
extern "C" char data_020e88a0[];
extern "C" char data_ov003_0211ede4[];
extern "C" char data_ov003_0211edf0[];
extern "C" char data_ov003_0211edfc[];
extern "C" void MI_CpuCopy8(void);
extern "C" s32 MI_CpuFill8(...);
extern "C" void _ZN11MatchEngine13func_0207a534Ev(void);
extern "C" void func_02080368(void);
extern "C" void func_0209bd88(void);
extern "C" void func_0209bec8(void);
extern "C" void func_0209c0ac(void);
extern "C" void func_0209c24c(void);
extern "C" void func_0209c56c(void);
extern "C" void func_0209c5a4(void);
extern "C" void func_0209c5d0(void);
extern "C" void func_0209c6a8(void);
extern "C" s32 func_0209c7f4(...);
extern "C" void func_ov015_02131754(void);
extern "C" void gGameState(void);
extern "C" void rand(void);

extern "C" asm void func_ov003_0211b8dc(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x80
    mov r4, r0
    ldr r0, =data_020c5320
    bl func_0209c7f4
    mov r1, #0
    b @L_0211ba64
@L_0211b8f8:
    ldrlo r0, =data_020c5598
    ldrlo r10, [r0, r1, lsl #2]
    movhs r10, #0
    cmp r10, #0
    beq @L_0211ba60
    ldrh lr, [r10, #0x40]
    ldrb r12, [r10, #0x42]
    ldrb r9, [r10, #0x43]
    ldrh r7, [r10, #0x48]
    ldrb r6, [r10, #0x4a]
    ldrb r3, [r10, #0x4b]
    ldrh r2, [r10, #0x4c]
    ldrh r0, [r10, #0x4e]
    ldr r8, [r10, #0x44]
    strb r6, [sp, #0xa]
    strb r3, [sp, #0xb]
    add r5, sp, #0x10
    strh lr, [sp]
    strb r12, [sp, #2]
    strb r9, [sp, #3]
    str r8, [sp, #4]
    strh r7, [sp, #8]
    strh r2, [sp, #0xc]
    strh r0, [sp, #0xe]
    add r6, r10, #0x50
    mov r3, #0x1c
@L_0211b960:
    ldrh r0, [r6, #2]
    ldrh r2, [r6], #4
    subs r3, r3, #1
    strh r0, [r5, #2]
    strh r2, [r5], #4
    bne @L_0211b960
    ldr r3, [sp, #4]
    ldr r2, =0x800576
    add r0, sp, #0x10
    cmp r3, r2
    ldreqb r2, [r0, #0x23]
    cmpeq r2, #6
    bne @L_0211ba60
    mov r2, #0
    mov r7, r2
    add r3, r4, #0x2000
    ldr r8, [r0, #0x28]
    ldr r9, [r0, #0x2c]
    ldr r12, =0x834
    b @L_0211b9d0
@L_0211b9b0:
    mla r6, r7, r12, r4
    ldr r5, [r6, #0x18]
    ldr r6, [r6, #0x14]
    cmp r9, r5
    cmpeq r8, r6
    moveq r2, #1
    beq @L_0211b9dc
    add r7, r7, #1
@L_0211b9d0:
    ldr r5, [r3, #0xa18]
    cmp r7, r5
    blt @L_0211b9b0
@L_0211b9dc:
    cmp r2, #0
    bne @L_0211ba60
    ldr r12, =data_020cb6e0
    mov r3, #0
    ldr r5, [r12, #0x26c]
    ldr lr, [r0, #0x30]
    add r8, r5, #8
    ldr r6, [r0, #0x28]
    ldr r5, [r0, #0x2c]
    ldr r0, =0x834
    b @L_0211ba34
@L_0211ba08:
    mla r9, r3, r0, r8
    ldr r12, [r9, #0x18]
    ldr r7, [r9, #0x14]
    cmp r12, r5
    cmpeq r7, r6
    bne @L_0211ba30
    ldr r12, [r9, #4]
    cmp r12, lr
    movhs r2, #1
    bhs @L_0211ba3c
@L_0211ba30:
    add r3, r3, #1
@L_0211ba34:
    cmp r3, #0xa
    blt @L_0211ba08
@L_0211ba3c:
    cmp r2, #0
    bne @L_0211ba60
    ldr r0, =data_020c5320
    bl func_0209c6a8
    add r0, r4, #0x2000
    mov r1, #6
    str r1, [r0, #0x9f4]
    add sp, sp, #0x80
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_0211ba60:
    add r1, r1, #1
@L_0211ba64:
    cmp r1, #0x10
    blt @L_0211b8f8
    mov r0, r4
    bl func_ov003_0211bfa0
    cmp r0, #0
    addeq sp, sp, #0x80
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r4
    bl func_ov003_0211bd8c
    add sp, sp, #0x80
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" s32 func_ov003_0211baa4(s32 arg0)
{
    s32 r4;
    s32 v0;
    s32 v1;
    v0 = func_0209c7f4((s32)((u8 *)&data_020c5320));
    r4 = arg0;
    arg0 = v0;
    if (arg0 == 1) {
        *(s32 *)(((u8 *)(r4 + 0x2000)) + 0x9F4) = 7;
        return (r4 + 0x2000);
    } else {
        if (arg0 != -1)
            return arg0;
        v1 = func_ov003_0211bd8c(r4);
        return v1;
    }
}

extern "C" asm void func_ov003_0211bae0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r6, #0
    mov r7, r0
    mov r0, r6
    mov r1, r6
    mov r5, #1
    bl func_ov015_02131754
    mov r4, r0
    ldr r0, =data_020c5320
    mov r1, r4
    add r2, r4, #0xf0
    mov r3, #0x78
    bl func_0209c0ac
    cmp r0, #0
    movne r6, r5
    cmp r6, #0
    bne @L_0211bbb0
    mov r0, r7
    bl func_ov003_0211bfa0
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    add r0, r7, #0x2000
    ldrb r1, [r0, #0xa0d]
    cmp r1, #0
    beq @L_0211bb9c
    ldr r2, [r0, #0xa18]
    cmp r2, #5
    bhs @L_0211bb9c
    ldr r1, =0x834
    mov r0, r7
    mla r3, r2, r1, r7
    ldr r1, [r3, #0x14]
    ldr r2, [r3, #0x18]
    ldr r3, [r3, #4]
    bl func_ov003_0211c01c
    cmp r0, #0
    beq @L_0211bb9c
    add r0, r7, #0x2000
    ldr r1, [r0, #0xa18]
    mov r0, r7
    bl func_ov003_0211c0c4
    cmp r0, #0
    beq @L_0211bb9c
    add r1, r7, #0x2000
    mov r0, r7
    strb r5, [r1, #0xa1c]
    bl func_ov003_0211c200
@L_0211bb9c:
    mov r0, r7
    bl func_ov003_0211bfc4
    mov r0, r7
    bl func_ov003_0211bd8c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0211bbb0:
    add r0, r7, #0x2000
    ldrh r1, [r4, #4]
    ldr r6, [r0, #0xa18]
    ldr r0, =0x834
    mov r2, #0x68
    mla r8, r6, r0, r7
    mul r3, r1, r2
    cmp r1, #0x14
    moveq r2, #0x14
    add r0, r4, #8
    add r1, r8, r3
    bl MI_CpuCopy8
    add r1, r7, #0x2000
    ldr r6, [r4, #0x70]
    ldr r8, [r4, #0x74]
    ldr r0, [r1, #0xa24]
    ldr r2, [r1, #0xa20]
    cmp r8, r0
    cmpeq r6, r2
    beq @L_0211bc1c
    add r0, r7, #0xa20
    add r2, r4, #0x70
    add r0, r0, #0x2000
    ldmia r2, {r2, r3}
    stmia r0, {r2, r3}
    mov r0, #0
    str r0, [r1, #0xa04]
@L_0211bc1c:
    add r0, r7, #0x2000
    ldrh r1, [r4, #4]
    ldr r2, [r0, #0xa04]
    mov r6, #0
    orr r2, r2, r5, lsl r1
    ldr r1, [r0, #0xa08]
    str r2, [r0, #0xa04]
    cmp r2, r1
    streqb r5, [r0, #0xa0d]
    ldrh r0, [r4, #6]
    mov r4, #0xf0
    mov r1, r6
    cmp r0, #0
    addne r0, r7, #0x2000
    strneb r5, [r0, #0xa0c]
    add r0, r7, #0x104
    mov r2, r4
    add r0, r0, #0x2800
    bl MI_CpuFill8
    add r3, r7, #0x2000
    ldrb r9, [r3, #0xa00]
    add r1, r7, #0x2900
    ldrb r8, [r3, #0xa0d]
    ldr r0, [r3, #0x9fc]
    mov r2, #0x68
    mla r0, r9, r2, r0
    ldr lr, =gGameState
    strh r8, [r1, #0xa]
    strh r9, [r1, #8]
    add r12, r7, #0x10c
    ldr r8, [lr, #0x534]
    ldr lr, [lr, #0x538]
    add r1, r12, #0x2800
    str r8, [r3, #0x974]
    str lr, [r3, #0x978]
    bl MI_CpuCopy8
    add r1, r7, #0x104
    ldr r0, =data_020c5320
    mov r2, r4
    add r1, r1, #0x2800
    bl func_0209c24c
    add r0, r7, #0x2000
    ldrb r0, [r0, #0xa01]
    cmp r0, #0
    moveq r6, #1
    add r0, r7, #0x2000
    strb r6, [r0, #0xa01]
    tst r6, #0xff
    beq @L_0211bcfc
    ldrb r1, [r0, #0xa00]
    add r2, r1, #1
    and r1, r2, #0xff
    cmp r1, #0x15
    strb r2, [r0, #0xa00]
    movhs r1, #0
    strhsb r1, [r0, #0xa00]
@L_0211bcfc:
    add r0, r7, #0x2000
    ldrb r1, [r0, #0xa0c]
    cmp r1, #0
    ldrneb r1, [r0, #0xa0d]
    cmpne r1, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r2, [r0, #0xa18]
    cmp r2, #5
    bhs @L_0211bd6c
    ldr r1, =0x834
    mov r0, r7
    mla r3, r2, r1, r7
    ldr r1, [r3, #0x14]
    ldr r2, [r3, #0x18]
    ldr r3, [r3, #4]
    bl func_ov003_0211c01c
    cmp r0, #0
    beq @L_0211bd6c
    add r0, r7, #0x2000
    ldr r1, [r0, #0xa18]
    mov r0, r7
    bl func_ov003_0211c0c4
    cmp r0, #0
    beq @L_0211bd6c
    add r1, r7, #0x2000
    mov r0, r7
    strb r5, [r1, #0xa1c]
    bl func_ov003_0211c200
@L_0211bd6c:
    mov r0, r7
    bl func_ov003_0211bfc4
    mov r0, r7
    bl func_ov003_0211bd8c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm s32 func_ov003_0211bd8c(...)
{
    stmdb sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0xc
    ldr r5, =data_020c5320
    mov r6, r0
    ldr r0, [r5, #0x5c]
    cmp r0, #1
    bne @L_0211be64
    mov r0, r5
    bl func_0209bec8
    mov r0, #6
    mov r4, #1
    strb r0, [r5, #0x303]
    str r4, [sp]
    mov r0, #0x78
    str r0, [sp, #4]
    ldr r7, =0x800576
    ldr r2, =data_ov003_0211ede4
    mov r0, r5
    mov r1, r4
    mov r3, #2
    str r7, [sp, #8]
    bl func_0209bd88
    mov r0, r5
    bl func_0209c56c
    add r0, r6, #0x2000
    mov r1, #0
    str r1, [r0, #0xa10]
    bl rand
    ldr r2, =0xb60b60b7
    add r12, r6, #0x2000
    smull r1, r7, r2, r0
    ldr r1, [r12, #0xa18]
    add r7, r0, r7
    cmp r1, #5
    mov r1, r0, lsr #0x1f
    add r7, r1, r7, asr #6
    mov r3, #0x5a
    smull r1, r2, r3, r7
    sub r7, r0, r1
    add r0, r7, #0x1e
    str r0, [r12, #0xa14]
    mov r0, r5
    blo @L_0211be4c
    bl func_0209c5a4
    add r0, r6, #0x2000
    add sp, sp, #0xc
    str r4, [r0, #0x9f4]
    ldmia sp!, {r4, r5, r6, r7, pc}
@L_0211be4c:
    bl func_0209c5d0
    add r0, r6, #0x2000
    mov r1, #4
    str r1, [r0, #0x9f4]
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, pc}
@L_0211be64:
    cmp r0, #2
    mov r0, r5
    mov r7, #1
    ldr r4, =0x800576
    bne @L_0211bf00
    bl func_0209bec8
    mov r0, #6
    strb r0, [r5, #0x303]
    str r7, [sp]
    mov r0, #0x78
    str r0, [sp, #4]
    ldr r2, =data_ov003_0211edf0
    mov r0, r5
    mov r1, r7
    mov r3, #2
    str r4, [sp, #8]
    bl func_0209bd88
    mov r0, r5
    bl func_0209c56c
    mov r0, r5
    bl func_0209c5a4
    add r0, r6, #0x2000
    mov r1, #0
    str r7, [r0, #0x9f4]
    str r1, [r0, #0xa10]
    bl rand
    ldr r3, =0xb60b60b7
    mov r1, r0, lsr #0x1f
    smull r2, r4, r3, r0
    add r4, r0, r4
    add r4, r1, r4, asr #6
    mov r3, #0x5a
    smull r1, r2, r3, r4
    sub r4, r0, r1
    add r1, r4, #0x1e
    add r0, r6, #0x2000
    str r1, [r0, #0xa14]
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, pc}
@L_0211bf00:
    bl func_0209bec8
    mov r0, #6
    strb r0, [r5, #0x303]
    str r7, [sp]
    mov r0, #0x78
    str r0, [sp, #4]
    ldr r2, =data_ov003_0211edfc
    mov r0, r5
    mov r1, r7
    mov r3, #2
    str r4, [sp, #8]
    bl func_0209bd88
    mov r0, r5
    bl func_0209c56c
    mov r0, r5
    bl func_0209c5a4
    add r0, r6, #0x2000
    mov r1, #0
    str r7, [r0, #0x9f4]
    str r1, [r0, #0xa10]
    bl rand
    ldr r3, =0xb60b60b7
    mov r1, r0, lsr #0x1f
    smull r2, r4, r3, r0
    add r4, r0, r4
    add r4, r1, r4, asr #6
    mov r3, #0x5a
    smull r1, r2, r3, r4
    sub r4, r0, r1
    add r1, r4, #0x1e
    add r0, r6, #0x2000
    str r1, [r0, #0xa14]
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, pc}
}

extern "C" BOOL func_ov003_0211bfa0(u8 *arg0)
{
    s32 n = ++*(s32 *)(arg0 + 0x2A10);
    BOOL r = TRUE;
    if (n < *(s32 *)(arg0 + 0x2A14))
        r = FALSE;
    return r;
}

extern "C" void func_ov003_0211bfc4(u8 *arg0)
{
    *(u8 *)(arg0 + 0x2A0C) = 0;
    *(u8 *)(arg0 + 0x2A0D) = 0;
    *(s32 *)(arg0 + 0x2A04) = 0;
    *(u8 *)(arg0 + 0x2A00) = 0;
    *(u8 *)(arg0 + 0x2A01) = 1;
    *(s32 *)(arg0 + 0x2A20) = 0;
    *(s32 *)(arg0 + 0x2A24) = 0;
    MI_CpuFill8((s32)((u8 *)&data_020c5120), 0, 0x1E4, (s32)(arg0 + 0x2000));
    MI_CpuFill8((s32)((u8 *)&data_020c8760), 0, 0xF00);
}

extern "C" asm void func_ov003_0211c01c(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, #0
    add r12, r0, #0x2000
    ldr lr, =0x834
    b @L_0211c050
@L_0211c030:
    mla r5, r6, lr, r0
    ldr r4, [r5, #0x18]
    ldr r5, [r5, #0x14]
    cmp r2, r4
    cmpeq r1, r5
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    add r6, r6, #1
@L_0211c050:
    ldr r4, [r12, #0xa18]
    cmp r6, r4
    blt @L_0211c030
    ldr r0, =data_020cb6e0
    ldr r0, [r0, #0x26c]
    cmp r0, #0
    moveq r0, #1
    ldmeqia sp!, {r4, r5, r6, pc}
    add r4, r0, #8
    mov r6, #0
    ldr r0, =0x834
    b @L_0211c0ac
@L_0211c080:
    mla r5, r6, r0, r4
    ldr r12, [r5, #0x18]
    ldr lr, [r5, #0x14]
    cmp r12, r2
    cmpeq lr, r1
    bne @L_0211c0a8
    ldr r12, [r5, #4]
    cmp r12, r3
    movhs r0, #0
    ldmhsia sp!, {r4, r5, r6, pc}
@L_0211c0a8:
    add r6, r6, #1
@L_0211c0ac:
    cmp r6, #0xa
    blt @L_0211c080
    mov r0, #1
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov003_0211c0c4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x20
    ldr r2, =0x834
    mov r10, #0
    mla r6, r1, r2, r0
    add r1, sp, #0
    mov r7, r10
    mov r0, #4
@L_0211c0e4:
    strh r10, [r1]
    strh r10, [r1, #2]
    strh r10, [r1, #4]
    strh r10, [r1, #6]
    add r1, r1, #8
    subs r0, r0, #1
    bne @L_0211c0e4
    mov r9, #0
    add r4, r6, #0x14
    add r5, sp, #0
    mov r11, #0x70
@L_0211c110:
    mla r0, r9, r11, r6
    ldrh r8, [r0, #0xd8]
    cmp r8, #0
    beq @L_0211c138
    mov r1, r8
    add r0, r4, #0x800
    bl func_02080368
    cmp r0, #0
    moveq r7, #1
    beq @L_0211c164
@L_0211c138:
    ldr r0, =data_020e88a0
    mov r1, r8
    bl _ZN11MatchEngine13func_0207a534Ev
    cmp r0, #0
    movgt r1, r9, lsl #1
    addgt r0, r10, #1
    add r9, r9, #1
    strgth r8, [r5, r1]
    andgt r10, r0, #0xff
    cmp r9, #0x10
    blt @L_0211c110
@L_0211c164:
    cmp r10, #0xb
    movlo r7, #1
    cmp r7, #0
    bne @L_0211c1e4
    sub r5, r10, #1
    cmp r5, #0
    mov r3, #0
    ble @L_0211c1e4
    add r2, sp, #0
    mov r0, #1
@L_0211c18c:
    mov r1, r3, lsl #1
    ldrh r6, [r2, r1]
    cmp r6, #0
    beq @L_0211c1d8
    add r4, r3, #1
    cmp r4, r10
    bge @L_0211c1d0
@L_0211c1a8:
    mov r1, r4, lsl #1
    ldrh r1, [r2, r1]
    cmp r1, #0
    beq @L_0211c1c4
    cmp r6, r1
    moveq r7, r0
    beq @L_0211c1d0
@L_0211c1c4:
    add r4, r4, #1
    cmp r4, r10
    blt @L_0211c1a8
@L_0211c1d0:
    cmp r7, #0
    bne @L_0211c1e4
@L_0211c1d8:
    add r3, r3, #1
    cmp r3, r5
    blt @L_0211c18c
@L_0211c1e4:
    mov r0, #1
    cmp r7, #0
    movne r0, #0
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 func_ov003_0211c200(u8 *arg0)
{
    u8 *r1;
    s32 t0;
    s32 t1;
    u8 *t2;
    t0 = (*(s32 *)(arg0 + 0x2A18) + 1);
    *(s32 *)(arg0 + 0x2A18) = t0;
    t1 = (*(u16 *)(*(u8 * *)(((u8 *)&data_020cb6e0) + 0x26C) + 0x4) + 1);
    t2 = *(u8 * *)(((u8 *)&data_020cb6e0) + 0x26C);
    *(u16 *)(t2 + 0x4) = t1;
    r1 = *(u8 * *)(((u8 *)&data_020cb6e0) + 0x26C);
    arg0 = (u8 *)*(u16 *)(*(u8 * *)(((u8 *)&data_020cb6e0) + 0x26C) + 0x4);
    if ((u32)arg0 >= (u32)0x3E8) {
        *(u16 *)(r1 + 0x4) = 0x3E7;
        arg0 = (u8 *)0x3E7;
    }
    return (s32)arg0;
}
