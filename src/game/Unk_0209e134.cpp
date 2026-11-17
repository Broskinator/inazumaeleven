#include "game/Unk_0209e134.hpp"
#include "system/GameHeap.hpp"

extern GameHeap gAllocator;
extern "C" void _ZN8GameHeap4FreeEPv(void);     // (for the asm functions)

extern "C" s32 func_0209e134(s32 arg0, s32 arg1);
extern "C" void func_0209e174(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern "C" void func_0209e1c8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern "C" s32 func_0209e220(u8 *arg0);
extern "C" void func_0209e248(s32 *obj);
extern "C" void func_0209e258(void *obj);
extern "C" s32 func_0209e25c(u8 *arg0);
extern "C" void func_0209e298(void);
extern "C" void func_0209e360(void);
extern "C" void func_0209e5cc(void **obj);
extern "C" s32 func_0209e5ec(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void func_0209e654(void);
extern "C" void func_0209e78c(void);
extern "C" void func_0209e83c(void);

extern "C" char data_020aabf8[];
extern "C" char data_020aac10[];
extern "C" char data_020aac48[];
extern "C" char data_020bb000[];
extern "C" char data_020bb01c[];
extern "C" char data_020bb028[];
extern "C" s32 MI_CpuCopy8(...);
extern "C" void MI_CpuFill8(void);
extern "C" s32 MIi_CpuClearFast(...);
extern "C" void STD_CompareString(void);
extern "C" void STD_CopyString(void);
extern "C" void STD_GetStringLength(void);
extern "C" void _ZN8GameHeap4FreeEPv(void);
extern "C" s32 _ZN8GameHeap5AllocEiii(...);
extern "C" void func_02016e10(void);
extern "C" void func_02016e5c(void);
extern "C" void STD_CompareNString(void);

extern "C" s32 func_0209e134(s32 arg0, s32 arg1)
{
    s32 r1;
    arg0 = *(s32 *)(((u8 *)(arg0 + (arg1 << 2))) + 0x4);
    r1 = 1;
    if (arg0 <= 0) {
        r1 = 0;
    }
    if (r1 == 0) {
        return 0;
    } else {
        r1 = 0x6270;
        if (arg0 > r1) {
            return r1;
        } else {
            if (arg0 < 0) {
                arg0 = 0;
            }
            return arg0;
        }
    }
}

extern "C" void func_0209e174(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    MI_CpuCopy8((arg0 + 4), arg1, 8, arg3);
    MI_CpuCopy8((arg0 + 0x18), arg2, 2);
    MI_CpuCopy8((arg0 + 0x1A), arg3, 2);
    MI_CpuCopy8((arg0 + 0x16), arg4, 2);
}

extern "C" void func_0209e1c8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    MI_CpuCopy8(arg1, (arg0 + 4), 8, arg3);
    MI_CpuCopy8(arg2, (arg0 + 0x18), 2);
    MI_CpuCopy8(arg3, (arg0 + 0x1A), 2);
    MI_CpuCopy8(arg4, (arg0 + 0x16), 2);
}

extern "C" s32 func_0209e220(u8 *arg0)
{
    if ((*(u8 *)(arg0 + 0x14) == 0 || *(u8 *)(arg0 + 0x15) != 0)) {
        return 0;
    }
    return 1;
}

extern "C" void func_0209e248(s32 *obj)
{
    obj[0] = 0;
    obj[1] = 0;
}

extern "C" void func_0209e258(void *obj)
{
}

extern "C" s32 func_0209e25c(u8 *arg0)
{
    s32 v0;
    s32 v1;
    if (*(s32 *)(arg0) == 0) {
        v0 = _ZN8GameHeap5AllocEiii((s32)((u8 *)&gAllocator), 0x28800, 0, 1);
        *(s32 *)(arg0) = v0;
    }
    v1 = ((s32 (*)(...))func_0209e5ec)((s32)arg0);
    return v1;
}

extern "C" asm void func_0209e298(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x20
    mov r9, r1
    add r5, sp, #0
    mov r7, #0
    mov r10, r0
    add r6, r9, r2
    mov r0, r7
    mov r1, r5
    mov r2, #0x20
    mov r8, r7
    bl MIi_CpuClearFast
    mov r0, r10
    bl func_0209e5ec
    cmp r9, r6
    bhs @L_0209e34c
    ldr r11, =data_020bb000
    mov r4, r7
@L_0209e2e0:
    ldrsb r0, [r9]
    cmp r0, #0xd
    beq @L_0209e2f4
    cmp r0, #0xa
    bne @L_0209e338
@L_0209e2f4:
    cmp r7, #0
    beq @L_0209e320
    ldr r1, =data_020bb01c
    mov r0, r5
    bl STD_CompareString
    cmp r0, #0
    mov r0, r10
    mov r1, r5
    streq r8, [r11, #8]
    bl func_0209e654
    add r8, r8, #1
@L_0209e320:
    mov r0, r4
    mov r1, r5
    mov r2, #0x20
    bl MIi_CpuClearFast
    mov r7, r4
    b @L_0209e340
@L_0209e338:
    strb r0, [r5, r7]
    add r7, r7, #1
@L_0209e340:
    add r9, r9, #1
    cmp r9, r6
    blo @L_0209e2e0
@L_0209e34c:
    mov r0, r8
    add sp, sp, #0x20
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_0209e360(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    movs r4, r1
    mov r10, r0
    beq @L_0209e5bc
    mov r0, r4
    bl STD_GetStringLength
    str r0, [sp]
    mov r0, #0
    str r0, [sp, #4]
    ldr r1, [sp]
    ldr r0, =gAllocator
    ldr r2, [sp, #4]
    add r1, r1, #1
    mov r3, #1
    bl _ZN8GameHeap5AllocEiii
    ldr r2, [sp]
    ldr r1, [sp, #4]
    mov r11, r0
    add r2, r2, #1
    bl MI_CpuFill8
    mov r0, r11
    mov r1, r4
    bl STD_CopyString
    mov r0, r10
    mov r1, r11
    bl func_0209e78c
    ldr r0, [r10, #4]
    cmp r0, #0
    bls @L_0209e5b0
@L_0209e3d8:
    ldr r0, [sp, #4]
    mov r1, #0x144
    mul r9, r0, r1
    ldr r0, [r10]
    mov r5, #0
    add r1, r0, r9
    ldr r1, [r1, #0x140]
    mov r6, r11
    mov r7, r5
    cmp r1, #0
    bls @L_0209e570
    ldr r1, [sp]
    add r1, r11, r1
    str r1, [sp, #8]
@L_0209e410:
    mov r1, #0x28
    mul r8, r7, r1
    add r0, r9, r0
    add r1, r0, r8
    ldr r2, [r1, #0x24]
    cmp r2, #3
    bne @L_0209e490
    mov r0, r11
    bl STD_CompareString
    cmp r0, #0
    bne @L_0209e454
    ldr r0, =gAllocator
    mov r1, r11
    bl _ZN8GameHeap4FreeEPv
    add sp, sp, #0xc
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0209e454:
    ldr r1, [r10]
    mov r0, r10
    add r1, r1, r9
    add r2, r1, r8
    mov r1, r6
    mov r3, #3
    bl func_0209e83c
    cmp r0, #1
    bne @L_0209e558
    ldr r0, =gAllocator
    mov r1, r11
    bl _ZN8GameHeap4FreeEPv
    add sp, sp, #0xc
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0209e490:
    ldr r0, [r1, #0x20]
    cmp r0, #0
    bne @L_0209e4b8
    cmp r2, #1
    bne @L_0209e4b0
    cmp r6, r11
    addeq r5, r5, #1
    b @L_0209e558
@L_0209e4b0:
    add r5, r5, #1
    b @L_0209e558
@L_0209e4b8:
    mov r0, r6
    bl func_02016e5c
    movs r4, r0
    beq @L_0209e558
    ldr r0, [r10]
    add r0, r9, r0
    add r2, r0, r8
    ldr r0, [r2, #0x24]
    cmp r0, #1
    bne @L_0209e528
    cmp r6, r4
    ldreq r0, [r2, #0x20]
    addeq r5, r5, #1
    addeq r6, r6, r0
    beq @L_0209e558
    mov r0, r10
    mov r1, r6
    mov r3, #1
    bl func_0209e83c
    cmp r0, #1
    bne @L_0209e558
    ldr r0, [r10]
    add r5, r5, #1
    add r0, r9, r0
    add r0, r8, r0
    ldr r0, [r0, #0x20]
    add r6, r4, r0
    b @L_0209e558
@L_0209e528:
    cmp r0, #2
    bne @L_0209e54c
    ldr r2, [r2, #0x20]
    ldr r0, [sp, #8]
    add r1, r4, r2
    cmp r0, r1
    addeq r5, r5, #1
    addeq r6, r6, r2
    b @L_0209e558
@L_0209e54c:
    ldr r0, [r2, #0x20]
    add r5, r5, #1
    add r6, r6, r0
@L_0209e558:
    ldr r0, [r10]
    add r7, r7, #1
    add r1, r9, r0
    ldr r1, [r1, #0x140]
    cmp r7, r1
    blo @L_0209e410
@L_0209e570:
    add r0, r0, r9
    ldr r0, [r0, #0x140]
    cmp r5, r0
    bne @L_0209e598
    ldr r0, =gAllocator
    mov r1, r11
    bl _ZN8GameHeap4FreeEPv
    add sp, sp, #0xc
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0209e598:
    ldr r0, [sp, #4]
    ldr r1, [r10, #4]
    add r0, r0, #1
    str r0, [sp, #4]
    cmp r0, r1
    blo @L_0209e3d8
@L_0209e5b0:
    ldr r0, =gAllocator
    mov r1, r11
    bl _ZN8GameHeap4FreeEPv
@L_0209e5bc:
    mov r0, #0
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void func_0209e5cc(void **obj)
{
    if (*obj == NULL) {
        return;
    }
    gAllocator.Free(*obj);
}

extern "C" s32 func_0209e5ec(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 r4;
    s32 r5;
    s32 r6;
    s32 r7;
    u8 *r8;
    s32 r9;
    u8 *r11;
    r4 = 0x28;
    r5 = 0x20;
    r6 = 0;
    r7 = 0;
    r11 = (u8 *)arg0;
    do {
        r8 = (u8 *)((r7 * 0x144) + *(s32 *)(r11));
        r9 = 0;
        do {
            s32 v0 = MIi_CpuClearFast(r6, ((r9 * r4) + r8), r5);
            *(s32 *)(((u8 *)((r9 * r4) + r8)) + 0x20) = r6;
            *(s32 *)(((u8 *)((r9 * r4) + r8)) + 0x24) = r6;
            arg0 = v0;
            r9 = (r9 + 1);
        } while (r9 < 8);
        *(s32 *)(r8 + 0x140) = r6;
        r7 = (r7 + 1);
    } while (r7 < 0x200);
    *(s32 *)(r11 + 0x4) = r6;
    return arg0;
}

extern "C" asm void func_0209e654(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r9, r1
    mov r10, r0
    mov r0, r9
    mov r4, #0x28
    bl STD_GetStringLength
    mov r6, r0
    cmp r6, #0
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r2, [r10, #4]
    cmp r2, #0x200
    ldmhsia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [r10]
    mov r0, #0x144
    mla r7, r2, r0, r1
    cmp r6, #0
    mov r8, #0
    ble @L_0209e758
    ldr r5, =data_020bb028
    mov r11, #2
@L_0209e6a4:
    mov r1, r5
    mov r2, r11
    add r0, r9, r8
    bl STD_CompareNString
    cmp r0, #0
    bne @L_0209e6e8
    ldr r2, [r7, #0x140]
    mov r0, r10
    mla r1, r2, r4, r7
    bl func_0209e78c
    ldr r0, [r7, #0x140]
    add r0, r0, #1
    str r0, [r7, #0x140]
    cmp r0, #8
    bhs @L_0209e758
    add r8, r8, #1
    b @L_0209e74c
@L_0209e6e8:
    ldrsb r2, [r9, r8]
    cmp r2, #0x5e
    bne @L_0209e70c
    ldr r0, [r7, #0x140]
    mla r1, r0, r4, r7
    ldr r0, [r1, #0x24]
    orr r0, r0, #1
    str r0, [r1, #0x24]
    b @L_0209e74c
@L_0209e70c:
    ldr r0, [r7, #0x140]
    cmp r2, #0x24
    mla r1, r0, r4, r7
    ldreq r0, [r1, #0x24]
    orreq r0, r0, #2
    streq r0, [r1, #0x24]
    beq @L_0209e74c
    ldr r0, [r1, #0x20]
    cmp r0, #0x20
    bhs @L_0209e74c
    strb r2, [r1, r0]
    ldr r0, [r7, #0x140]
    mla r1, r0, r4, r7
    ldr r0, [r1, #0x20]
    add r0, r0, #1
    str r0, [r1, #0x20]
@L_0209e74c:
    add r8, r8, #1
    cmp r8, r6
    blt @L_0209e6a4
@L_0209e758:
    ldr r2, [r7, #0x140]
    mov r0, #0x28
    mla r1, r2, r0, r7
    mov r0, r10
    bl func_0209e78c
    ldr r0, [r7, #0x140]
    add r0, r0, #1
    str r0, [r7, #0x140]
    ldr r0, [r10, #4]
    add r0, r0, #1
    str r0, [r10, #4]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_0209e78c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x70
    ldr r5, =data_020aac10
    add r3, sp, #0x38
    mov r4, r1
    mov r2, #0x1c
@L_0209e7a4:
    ldrb r0, [r5, #1]
    ldrb r1, [r5], #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_0209e7a4
    ldr r5, =data_020aac48
    add r3, sp, #0
    mov r2, #0x1c
@L_0209e7c8:
    ldrb r0, [r5, #1]
    ldrb r1, [r5], #2
    subs r2, r2, #1
    strb r0, [r3, #1]
    strb r1, [r3], #2
    bne @L_0209e7c8
    mov r0, r4
    bl STD_GetStringLength
    mov r6, r0
    cmp r6, #0
    mov r7, #0
    addle sp, sp, #0x70
    ldmleia sp!, {r4, r5, r6, r7, r8, pc}
    add r8, sp, #0x38
    add r5, sp, #0
@L_0209e804:
    ldrsb r1, [r4, r7]
    mov r0, r8
    bl func_02016e10
    cmp r0, #0
    subne r0, r0, r8
    ldrnesb r0, [r5, r0]
    strneb r0, [r4, r7]
    add r7, r7, #1
    cmp r7, r6
    blt @L_0209e804
    add sp, sp, #0x70
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_0209e83c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x18
    ldr r5, =data_020aabf8
    mov r7, r2
    add r4, sp, #0
    mov r8, r1
    mov r6, r3
    mov r2, #0xa
@L_0209e85c:
    ldrb r0, [r5, #1]
    ldrb r1, [r5], #2
    subs r2, r2, #1
    strb r0, [r4, #1]
    strb r1, [r4], #2
    bne @L_0209e85c
    ldrb r2, [r5]
    mov r0, r8
    mov r1, r7
    strb r2, [r4]
    bl func_02016e5c
    mov r4, #0
    movs r9, r0
    mov r5, r4
    beq @L_0209e93c
    cmp r8, r9
    orreq r4, r4, #1
    beq @L_0209e8bc
    bhs @L_0209e8bc
    ldrsb r1, [r9, #-1]
    add r0, sp, #0
    bl func_02016e10
    cmp r0, #0
    orrne r4, r4, #1
@L_0209e8bc:
    ldr r7, [r7, #0x20]
    add r0, sp, #0
    ldrsb r1, [r9, r7]
    bl func_02016e10
    cmp r0, #0
    bne @L_0209e8e0
    ldrsb r0, [r9, r7]
    cmp r0, #0
    bne @L_0209e8e4
@L_0209e8e0:
    orr r4, r4, #2
@L_0209e8e4:
    cmp r6, #1
    beq @L_0209e900
    cmp r6, #2
    beq @L_0209e910
    cmp r6, #3
    beq @L_0209e918
    b @L_0209e930
@L_0209e900:
    tst r4, #1
@L_0209e904:
    movne r0, #1
    moveq r0, #0
    b @L_0209e924
@L_0209e910:
    tst r4, #2
    b @L_0209e904
@L_0209e918:
    mov r0, #1
    cmp r4, #3
    movne r0, #0
@L_0209e924:
    mov r5, #1
    cmp r0, #0
    moveq r5, #0
@L_0209e930:
    add sp, sp, #0x18
    mov r0, r5
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0209e93c:
    mov r0, r4
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}
