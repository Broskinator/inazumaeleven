#include "game/Unk_0208d0d8.hpp"
#include "nitro/mi.h"
struct V0208e584 { s32 x, y, z; };
struct V0208e508 { s32 x, y, z; };

extern "C" void func_0208f308(void);     // (for the asm functions)
extern "C" void func_0208fac4(void);     // (for the asm functions)
extern "C" void func_ov015_0213497c(void *a, void *b);
extern "C" void func_ov015_02134998(void *a, void *b);
extern "C" void *data_020afa08[];     // (a vtable)

extern "C" void func_0208d0d8(void);
extern "C" void func_0208d2f0(u8 *obj);
extern "C" int func_0208d30c(void *self, int a);
extern "C" s32 func_0208d31c(...);
extern "C" s32 func_0208d34c(s32 arg0, s32 arg1);
extern "C" void func_0208d38c(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void func_0208d3d8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern "C" void *func_0208d434(void *self, void *a, void *b);
extern "C" void *func_0208d450(void *self, void *a, void *b);
extern "C" s32 func_0208d46c(...);
extern "C" s32 func_0208d4d4(...);
extern "C" s32 func_0208d51c(...);
extern "C" s32 func_0208d5a8(...);
extern "C" void func_0208d7b0(void);
extern "C" s32 func_0208d950(u8 *arg0, s32 arg1, s32 arg2);
extern "C" void func_0208d9e8(void);
extern "C" void func_0208db54(void *obj);
extern "C" void func_0208dc5c(void);
extern "C" void func_0208dd58(s32 arg0, s32 arg1, u8 arg2);
extern "C" int func_0208dd88(void *self, int a);
extern "C" int func_0208de5c(void *self);
extern "C" int func_0208de6c(void *self);
extern "C" s32 func_0208de7c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4);
extern "C" s32 func_0208dec8(...);
extern "C" s32 func_0208e064(s32 arg0, s32 arg1);
extern "C" void func_0208e0e4(s32 arg0, s32 arg1);
extern "C" s32 func_0208e114(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void func_0208e15c(void);
extern "C" s32 func_0208e2fc(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" void func_0208e35c(s32 arg0, s32 arg1);
extern "C" s32 func_0208e38c(s32 arg0, u8 *arg1, s32 arg2);
extern "C" s32 func_0208e3e4(u8 *arg0, s32 arg1);
extern "C" s32 func_0208e414(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4);
extern "C" s32 func_0208e480(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern "C" s32 func_0208e4c4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern "C" V0208e508 func_0208e508(s32 arg0, s32 arg1);
extern "C" V0208e584 func_0208e584(s32 arg0, s32 arg1);
extern "C" s32 func_0208e600(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 func_0208e680(u8 *arg0, s32 arg1);
extern "C" s32 func_0208e6cc(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern "C" s32 func_0208e710(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 func_0208e754(s32 arg0, s32 arg1, s32 arg2);
extern "C" void func_0208e798(s32 arg0, s32 arg1, u8 arg2);
extern "C" s32 func_0208e7c8(s32 arg0, u8 *arg1, s32 arg2);
extern "C" void func_0208e81c(u8 *arg0, s32 arg1);
extern "C" void func_0208e844(u8 *arg0, s32 arg1);
extern "C" void func_0208e870(u8 *arg0);
extern "C" void **func_0208e89c(void **obj);
extern "C" void **func_0208e8c4(void **obj);
extern "C" void func_0208e8e4(u8 *obj);
extern "C" BOOL func_0208e908(void);
extern "C" void func_0208e910(u8 *arg0);
extern "C" void func_0208e9b8(u8 *obj, int i, BOOL value);

extern "C" char data_020a72b4[];
extern "C" char data_020ac094[];
extern "C" char data_020afbf4[];
extern "C" char data_020afbfc[];
extern "C" char data_020afc04[];
extern "C" char data_020afc08[];
extern "C" char data_020afc0c[];
extern "C" char data_020afc10[];
extern "C" char data_020afc14[];
extern "C" char data_020afc1c[];
extern "C" char data_020c464c[];
extern "C" char data_020c467c[];
extern "C" char data_020c47b4[];
extern "C" char data_020c4838[];
extern "C" char data_020c483c[];
extern "C" s32 DC_FlushRange(...);
extern "C" void _ZN8GameHeap4FreeEPv(void);
extern "C" void _ZN8GameHeap5AllocEiii(void);
extern "C" void __cxa_vec_delete(void);
extern "C" void __cxa_vec_new(void);
extern "C" s32 atoi(...);
extern "C" void func_020170b8(void);
extern "C" void func_020286e4(void);
extern "C" void func_0202b608(void);
extern "C" void func_02088a5c(void);
extern "C" void func_02088aa0(void);
extern "C" void func_02088bec(void);
extern "C" void func_02089350(void);
extern "C" void func_02089384(void);
extern "C" void func_02089514(void);
extern "C" void func_02089584(void);
extern "C" void func_ov015_02134300(void);
extern "C" void func_ov015_02134a28(void);
extern "C" void func_ov015_02144cf8(void);
extern "C" void func_ov015_02144d9c(void);
extern "C" void func_ov015_02144e40(void);
extern "C" void func_ov015_02144f58(void);
extern "C" void func_ov015_02145144(void);
extern "C" void func_ov015_021452f0(void);
extern "C" void func_ov015_02145330(void);
extern "C" s32 func_ov015_021454ac(...);
extern "C" s32 func_ov015_021454d0(...);
extern "C" s32 func_ov015_021454f4(...);
extern "C" void func_ov015_02145518(void);
extern "C" void func_ov015_0214552c(void);
extern "C" void func_ov015_021457b4(void);
extern "C" void func_ov015_021457fc(void);
extern "C" void func_ov015_02145864(void);
extern "C" void func_ov015_0214587c(void);
extern "C" void func_ov015_021458c0(void);
extern "C" void func_ov015_021458f4(void);
extern "C" void func_ov015_02145928(void);
extern "C" void func_ov015_021459e0(void);
extern "C" s32 func_ov015_02145a10(...);
extern "C" s32 func_ov015_02145a40(...);
extern "C" s32 func_ov015_02145a50(...);
extern "C" void func_ov015_02145f20(void);
extern "C" s32 func_ov015_02145f44(...);
extern "C" void func_ov015_02145fe8(void);
extern "C" s32 func_ov015_02145ff0(...);
extern "C" s32 func_ov015_02146004(...);
extern "C" void func_ov015_0214625c(void);
extern "C" void func_ov015_02147ad8(void);
extern "C" void func_ov015_02148058(void);
extern "C" void func_ov015_02148114(void);
extern "C" void func_ov015_02148488(void);
extern "C" s32 sprintf(...);
extern "C" void strncpy(void);
extern "C" s32 strrchr(...);

extern "C" asm void func_0208d0d8(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x10
    mov r4, r0
    add r6, sp, #0
    mov r7, r1
    mov r10, r2
    mov r9, r3
    mov r0, #4
    mov r5, #0
@L_0208d0fc:
    strb r5, [r6]
    strb r5, [r6, #1]
    strb r5, [r6, #2]
    strb r5, [r6, #3]
    add r6, r6, #4
    subs r0, r0, #1
    bne @L_0208d0fc
    cmp r7, #0
    addeq sp, sp, #0x10
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r4
    mov r1, r7
    bl func_0208d34c
    mov r6, r0
    mov r0, r7
    mov r1, #0x2e
    bl strrchr
    mov r7, r0
    cmp r6, #0
    cmpne r7, #0
    addeq sp, sp, #0x10
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r1, =data_020afbf4
    mov r2, #5
    bl func_020170b8
    cmp r0, #0
    mov r8, #1
    ldr r1, =data_020afbfc
    movne r8, #0
    mov r0, r6
    mov r2, #4
    bl func_020170b8
    cmp r0, #0
    cmpeq r8, #0
    bne @L_0208d1ac
    add r1, r6, #4
    mov r3, #3
@L_0208d198:
    add r0, sp, #0
    sub r2, r7, r1
    str r3, [r10]
@L_0208d1a4:
    bl strncpy
    b @L_0208d27c
@L_0208d1ac:
    ldr r1, =data_020afc04
    mov r0, r6
    mov r2, #3
    bl func_020170b8
    cmp r0, #0
    bne @L_0208d1e0
    cmp r8, #0
    beq @L_0208d1e0
    add r1, r6, #3
    add r0, sp, #0
    sub r2, r7, r1
    str r5, [r10]
    b @L_0208d248
@L_0208d1e0:
    mov r5, #2
    ldr r1, =data_020afc08
    mov r0, r6
    mov r2, r5
    bl func_020170b8
    cmp r0, #0
    bne @L_0208d214
    mov r0, #1
    cmp r8, #0
    moveq r0, #4
    str r0, [r10]
    add r1, r6, #2
    b @L_0208d240
@L_0208d214:
    ldr r1, =data_020afc0c
    mov r0, r6
    mov r2, #3
    bl func_020170b8
    cmp r0, #0
    bne @L_0208d24c
    cmp r8, #0
    strne r5, [r10]
    moveq r0, #5
    streq r0, [r10]
    add r1, r6, #3
@L_0208d240:
    add r0, sp, #0
    sub r2, r7, r1
@L_0208d248:
    b @L_0208d1a4
@L_0208d24c:
    ldr r1, =data_020afc10
    mov r0, r6
    mov r2, r5
    bl func_020170b8
    cmp r0, #0
    bne @L_0208d270
    add r1, r6, #2
    mov r3, #6
    b @L_0208d198
@L_0208d270:
    add sp, sp, #0x10
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_0208d27c:
    ldr r3, [r10]
    mov r0, #0xc
    mul r2, r3, r0
    ldr r1, [r4, #8]
    ldr r0, [r1, r2]
    cmp r0, #0
    addne r1, r1, r2
    ldrneb r1, [r1, #8]
    cmpne r1, #0
    addeq sp, sp, #0x10
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r3, #6
    bne @L_0208d2c0
    add r1, sp, #0
    bl func_ov015_02134a28
    b @L_0208d2c8
@L_0208d2c0:
    add r0, sp, #0
    bl atoi
@L_0208d2c8:
    str r0, [r9]
    mov r0, #1
    add sp, sp, #0x10
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" void func_0208d2f0(u8 *obj)
{
    *(s32 *)(obj + 0x14) = 0;
    *(s32 *)(obj + 0x10) = 0;
    *(s32 *)(obj + 0x18) = 0;
    *(s32 *)(obj + 0xC) = 0;
    *(s32 *)(obj + 0x1C) = 0;
}

extern "C" int func_0208d30c(void *self, int a)
{
    int result = -1;

    if (a >= 0) {
        result = a + 1;
    }
    return result;
}

extern "C" asm s32 func_0208d31c(...)
{
    cmp r1, #0
    blt @L_0208d33c
    ldr r2, [r0, #0xc]
    cmp r1, r2
    bge @L_0208d33c
    ldr r0, [r0, #0x14]
    cmp r0, #0
    bne @L_0208d344
@L_0208d33c:
    mov r0, #0
    bx lr
@L_0208d344:
    add r0, r0, r1, lsl #5
    bx lr
}

extern "C" s32 func_0208d34c(s32 arg0, s32 arg1)
{
    s32 r4;
    s32 v0;
    s32 v1;
    r4 = arg1;
    if (r4 == 0) {
        return 0;
    } else {
        v0 = strrchr(arg1, 0x2F);
        arg0 = v0;
        if (arg0 == 0) {
            v1 = strrchr(arg1, 0x5C);
            arg0 = v1;
        }
        r4 = arg1;
        if (arg0 == 0) {
            arg0 = arg1;
        } else {
            arg0 = (arg0 + 1);
        }
        return arg0;
    }
}

extern "C" void func_0208d38c(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 local[8];
    sprintf((s32)((u8 *)local), (s32)data_020afc14, arg1, arg2);
    func_0208d434((void *)arg0, (void *)((u8 *)local), (void *)arg3);
    return;
}

extern "C" void func_0208d3d8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    s32 local[8];
    if (arg2 < 0) {
        func_0208d450((void *)arg0, (void *)arg1, (void *)arg4);
        return;
    } else {
        sprintf((s32)((u8 *)local), (s32)((u8 *)&data_020afc1c), arg1, arg2, arg3);
        func_0208d450((void *)arg0, (void *)((u8 *)local), (void *)arg4);
        return;
    }
}

extern "C" void *func_0208d434(void *self, void *a, void *b)
{
    func_ov015_0213497c(a, b);
    return b;
}

extern "C" void *func_0208d450(void *self, void *a, void *b)
{
    func_ov015_02134998(a, b);
    return b;
}

extern "C" asm s32 func_0208d46c(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, #0
    mov r6, r1
    mov r7, r0
    mov r1, r4
    mov r5, r2
    bl func_0208d31c
    ldr r2, [r7, #0xc]
    cmp r2, #0
    ble @L_0208d4cc
@L_0208d494:
    ldr r1, [r0, #8]
    tst r1, #1
    beq @L_0208d4bc
    ldr r1, [r0]
    cmp r1, r6
    bne @L_0208d4bc
    cmp r5, #0
    strne r0, [r5]
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0208d4bc:
    add r4, r4, #1
    cmp r4, r2
    add r0, r0, #0x20
    blt @L_0208d494
@L_0208d4cc:
    mvn r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm s32 func_0208d4d4(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, #0
    mov r5, r0
    mov r1, r4
    bl func_0208d31c
    ldr r2, [r5, #0xc]
    cmp r2, #0
    ble @L_0208d514
@L_0208d4f4:
    ldr r1, [r0, #8]
    tst r1, #1
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, pc}
    add r4, r4, #1
    cmp r4, r2
    add r0, r0, #0x20
    blt @L_0208d4f4
@L_0208d514:
    mvn r0, #0
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm s32 func_0208d51c(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    movs r4, r1
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, [r4, #0x14]
    cmp r0, #0
    beq @L_0208d538
    bl func_ov015_02145144
@L_0208d538:
    ldr r0, [r4, #0x18]
    cmp r0, #0
    beq @L_0208d550
    ldr r1, [r0]
    ldr r1, [r1, #0x20]
    blx r1
@L_0208d550:
    ldr r1, [r4, #0x1c]
    cmp r1, #0
    beq @L_0208d568
    ldr r0, =data_020c464c
    ldr r0, [r0]
    bl func_ov015_02148114
@L_0208d568:
    mov r6, #0
    mov r5, #0x20
    mov r0, r4
    mov r1, r6
    mov r2, r5
    ldr r8, [r4, #0x18]
    ldr r7, [r4, #0x14]
    bl MI_CpuFill8
    sub r0, r5, #0x21
    str r7, [r4, #0x14]
    str r8, [r4, #0x18]
    strh r0, [r4, #4]
    strh r0, [r4, #6]
    strb r6, [r4, #0x10]
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm s32 func_0208d5a8(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x10
    ldr r2, =data_020a72b4
    add r4, sp, #0
    movs r5, r1
    mov r6, r0
    ldmia r2, {r0, r1, r2, r3}
    stmia r4, {r0, r1, r2, r3}
    mov r4, #1
    mov r8, #0
    addeq sp, sp, #0x10
    mvneq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r0, [r5, #8]
    tst r0, #1
    addeq sp, sp, #0x10
    mvneq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldrb r0, [r5, #0xc]
    cmp r0, #3
    addeq sp, sp, #0x10
    moveq r0, r8
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r0, [r5, #0x14]
    bl func_ov015_02145928
    movs r7, r0
    beq @L_0208d63c
    cmp r7, #1
    addeq sp, sp, #0x10
    streqb r4, [r5, #0xc]
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r6
    mov r1, r5
    bl func_0208d51c
    add sp, sp, #0x10
    mov r0, r7
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0208d63c:
    ldr r0, [r5, #0x18]
    ldr r0, [r0, #4]
    cmp r0, #0
    moveq r0, r4
    movne r0, r8
    cmp r0, #0
    bne @L_0208d690
    ldr r0, [r5, #0x18]
    bl func_ov015_0214625c
    movs r7, r0
    beq @L_0208d690
    cmp r7, #1
    addeq sp, sp, #0x10
    streqb r4, [r5, #0xc]
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r6
    mov r1, r5
    bl func_0208d51c
    add sp, sp, #0x10
    mov r0, r7
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0208d690:
    ldr r1, [r5, #0x1c]
    cmp r1, #0
    beq @L_0208d794
    ldr r7, =data_020c464c
    ldr r0, [r7]
    bl func_ov015_02148058
    movs r9, r0
    beq @L_0208d6d8
    cmp r9, #1
    addeq sp, sp, #0x10
    streqb r4, [r5, #0xc]
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, r6
    mov r1, r5
    bl func_0208d51c
    add sp, sp, #0x10
    mov r0, r9
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0208d6d8:
    ldr r0, [r7]
    ldr r1, [r5, #0x1c]
    mov r2, #1
    mov r3, #2
    bl func_ov015_02148488
    movs r4, r0
    addeq sp, sp, #0x10
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r0, [r5, #0x18]
    mov r1, r4
    ldr r2, [r0]
    ldr r2, [r2, #0xc]
    blx r2
    ldr r0, [r7]
    mov r1, r4
    bl func_ov015_02148114
    ldr r0, [r5, #0x14]
    bl func_ov015_021458c0
    mov r9, #0
    add r6, sp, #0
    b @L_0208d778
@L_0208d730:
    ldr r0, [r7]
    ldr r1, [r5, #0x1c]
    ldr r3, [r6, r9, lsl #2]
    add r2, r9, #2
    bl func_ov015_02148488
    movs r4, r0
    beq @L_0208d774
    ldr r0, [r5, #0x14]
    mov r1, r4
    mov r2, r9
    bl func_ov015_021457b4
    cmp r0, #0
    ldr r0, [r7]
    mov r1, r4
    bne @L_0208d770
    b @L_0208d770
@L_0208d770:
    bl func_ov015_02148114
@L_0208d774:
    add r9, r9, #1
@L_0208d778:
    cmp r9, #5
    blt @L_0208d730
    ldr r0, =data_020c464c
    ldr r1, [r5, #0x1c]
    ldr r0, [r0]
    bl func_ov015_02148114
    str r8, [r5, #0x1c]
@L_0208d794:
    mov r0, #2
    strb r0, [r5, #0xc]
    mov r0, #0
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_0208d7b0(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    movs r8, r1
    mov r9, r0
    mov r6, #0
    moveq r0, r6
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldrb r0, [r8, #0xc]
    cmp r0, #3
    moveq r0, #1
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r0, #2
    movne r0, r6
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, [r8, #0x14]
    bl func_ov015_02145928
    cmp r0, #0
    movne r0, r6
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, [r8, #0x14]
    mov r4, r6
    bl func_ov015_021458f4
    cmp r0, #0
    bne @L_0208d844
    ldrb r0, [r8, #0xe]
    mov r1, r6
    cmp r0, #0
    movne r4, #2
    ldr r0, [r8, #0x14]
    mov r2, r4
    bl func_ov015_02144f58
    cmp r0, #0
    bne @L_0208d844
    mov r0, r9
    mov r1, r8
    bl func_0208d51c
    mov r0, r6
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_0208d844:
    mov r5, #1
    mov r7, #0
    mov r10, r5
@L_0208d850:
    ldr r0, [r8, #0x14]
    mov r1, r7
    bl func_ov015_021459e0
    ldr r0, [r0, #4]
    mov r4, #0
    cmp r0, #0
    moveq r0, r5
    movne r0, r6
    cmp r0, #0
    bne @L_0208d8dc
    ldr r0, [r8, #0x14]
    mov r1, r7
    bl func_ov015_021459e0
    ldr r1, [r0, #4]
    cmp r1, #0
    ldrne r0, [r0, #0xc]
    cmpne r0, #0
    movne r0, r10
    moveq r0, r6
    cmp r0, #0
    bne @L_0208d8d0
    ldr r0, [r8, #0x14]
    mov r1, r7
    mov r2, r6
    bl func_ov015_021457fc
    cmp r0, #0
    bne @L_0208d8d0
    ldr r0, [r8, #0x14]
    mov r1, r7
    bl func_ov015_02145864
    mov r0, r6
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_0208d8d0:
    ldr r0, [r8, #0x14]
    mov r1, r7
    bl func_ov015_0214587c
@L_0208d8dc:
    add r7, r7, #1
    cmp r7, #5
    blt @L_0208d850
    ldrb r0, [r8, #0xf]
    cmp r0, #0
    beq @L_0208d948
    ldr r0, [r8]
    ldr r5, [r9, #0x1c]
    sub r1, r0, #1
    mov r6, #0x30
    mla r0, r1, r6, r5
    ldrsh r1, [r0, #6]
    ldr r0, [r8, #0x18]
    bl func_ov015_02145f20
    ldr r1, [r8]
    ldr r0, [r8, #0x18]
    sub r2, r1, #1
    mla r1, r2, r6, r5
    ldr r1, [r1, #8]
    bl func_ov015_02145fe8
    ldr r1, [r8]
    ldr r0, [r8, #0x18]
    sub r2, r1, #1
    mla r1, r2, r6, r5
    ldrb r1, [r1, #4]
    bl func_ov015_02146004
    strb r4, [r8, #0xf]
@L_0208d948:
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" s32 func_0208d950(u8 *arg0, s32 arg1, s32 arg2)
{
    u8 *r4;
    s32 v0;
    s32 v1;
    r4 = (u8 *)arg2;
    if (arg1 == 0) {
        return 0;
    } else {
        v0 = func_0208d34c((s32)arg0, arg1);
        arg0 = (u8 *)v0;
        if ((s32)arg0 == 0) {
            return 0;
        } else {
            arg1 = *(s8 *)(arg0);
            if (((arg1 != 0x6D && arg1 != 0x4D) || (arg1 = *(s8 *)(arg0 + 0x1), (arg1 != 0x6F && arg1 != 0x4F)))) {
                return 0;
            } else {
                arg2 = 0;
                do {
                    arg1 = *(s8 *)(((u8 *)(arg0 + arg2)) + 0x2);
                    if ((arg1 < 0x30 || arg1 > 0x39)) {
                        return 0;
                    } else {
                        arg2 = (arg2 + 1);
                    }
                } while (arg2 < 4);
                if ((s32)r4 != 0) {
                    v1 = atoi((s32)(arg0 + 2));
                    *(s32 *)(r4) = v1;
                }
                return 1;
            }
        }
    }
}

extern "C" asm void func_0208d9e8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    mov r9, r1
    bl func_0208d2f0
    mov r0, r10
    mov r1, #7
    str r9, [r10, #0xc]
    bl func_02088a5c
    ldr r0, =func_02089584
    mov r4, #8
    str r0, [sp]
    ldr r3, =func_02089514
    mov r0, r9
    mov r1, #0x1bc
    mov r2, r4
    bl __cxa_vec_new
    str r0, [r10, #0x10]
    ldr r1, =func_02089384
    ldr r3, =func_02089350
    str r1, [sp]
    mov r2, r4
    mov r0, r9
    mov r1, #0x114
    bl __cxa_vec_new
    mov r5, #0
    mov r4, #1
    ldr r6, =data_020c47b4
    str r0, [r10, #0x18]
    mov r1, r9, lsl #5
    mov r0, r6
    mov r2, r5
    mov r3, r4
    bl _ZN8GameHeap5AllocEiii
    str r0, [r10, #0x14]
    mov r3, r4
    mov r0, r6
    mov r1, #0x600
    mov r2, r5
    bl _ZN8GameHeap5AllocEiii
    str r0, [r10, #0x1c]
    ldr r0, [r10, #0x10]
    cmp r0, #0
    ldrne r0, [r10, #0x18]
    cmpne r0, #0
    ldrne r0, [r10, #0x14]
    cmpne r0, #0
    bne @L_0208dab4
    mov r0, r10
    bl func_0208db54
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0208dab4:
    cmp r9, #0
    ble @L_0208db38
    mov r11, r5
    mvn r4, #0
@L_0208dac4:
    mov r0, #0x1bc
    mul r6, r5, r0
    ldr r0, [r10, #0x10]
    add r0, r0, r6
    bl func_ov015_02144cf8
    mov r0, #0x114
    mul r7, r5, r0
    ldr r0, [r10, #0x18]
    ldr r1, [r0, r7]!
    ldr r1, [r1, #8]
    blx r1
    ldr r1, [r10, #0x18]
    ldr r0, [r10, #0x10]
    add r8, r1, r7
    add r7, r0, r6
    ldr r0, [r10, #0x14]
    mov r1, r11
    add r6, r0, r5, lsl #5
    mov r0, r6
    mov r2, #0x20
    bl MI_CpuFill8
    str r7, [r6, #0x14]
    str r8, [r6, #0x18]
    strh r4, [r6, #4]
    strh r4, [r6, #6]
    add r5, r5, #1
    strb r11, [r6, #0x10]
    cmp r5, r9
    blt @L_0208dac4
@L_0208db38:
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_0208db54(void *obj)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    mvn r1, #0
    bl func_02088bec
    mov r0, r4
    bl func_02088aa0
    mov r0, r4
    bl func_0208e114
    ldr r1, [r4, #0x14]
    cmp r1, #0
    beq @L_0208db88
    ldr r0, =data_020c47b4
    bl _ZN8GameHeap4FreeEPv
@L_0208db88:
    ldr r0, [r4, #0x18]
    cmp r0, #0
    beq @L_0208dbe0
    ldr r0, [r4, #0xc]
    mov r6, #0
    cmp r0, #0
    ble @L_0208dbcc
    mov r5, #0x114
@L_0208dba8:
    ldr r0, [r4, #0x18]
    mla r0, r6, r5, r0
    ldr r1, [r0]
    ldr r1, [r1, #0x20]
    blx r1
    ldr r0, [r4, #0xc]
    add r6, r6, #1
    cmp r6, r0
    blt @L_0208dba8
@L_0208dbcc:
    ldr r0, [r4, #0x18]
    ldr r3, =func_02089384
    mov r1, #0x114
    mov r2, #8
    bl __cxa_vec_delete
@L_0208dbe0:
    ldr r0, [r4, #0x10]
    cmp r0, #0
    beq @L_0208dc30
    ldr r0, [r4, #0xc]
    mov r6, #0
    cmp r0, #0
    ble @L_0208dc1c
    mov r5, #0x1bc
@L_0208dc00:
    ldr r0, [r4, #0x10]
    mla r0, r6, r5, r0
    bl func_ov015_02144d9c
    ldr r0, [r4, #0xc]
    add r6, r6, #1
    cmp r6, r0
    blt @L_0208dc00
@L_0208dc1c:
    ldr r0, [r4, #0x10]
    ldr r3, =func_02089584
    mov r1, #0x1bc
    mov r2, #8
    bl __cxa_vec_delete
@L_0208dc30:
    ldr r1, [r4, #0x1c]
    cmp r1, #0
    beq @L_0208dc44
    ldr r0, =data_020c47b4
    bl _ZN8GameHeap4FreeEPv
@L_0208dc44:
    mov r0, r4
    bl func_0208d2f0
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_0208dc5c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r4, #0
    mov r7, r1
    mov r1, r4
    mov r8, r0
    bl func_0208d31c
    movs r5, r0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r0, =data_020c467c
    mov r6, #0
    ldr r0, [r0]
    mvn r9, #0
    ldrb r0, [r0, #4]
    cmp r0, #0
    movne r7, r4
    mov r4, #3
    b @L_0208dd44
@L_0208dca0:
    ldr r1, [r5, #8]
    tst r1, #1
    beq @L_0208dd3c
    ldrb r0, [r5, #0xc]
    cmp r0, #1
    beq @L_0208dccc
    cmp r0, #2
    beq @L_0208dcdc
    cmp r0, #3
    beq @L_0208dd0c
    b @L_0208dd3c
@L_0208dccc:
    mov r0, r8
    mov r1, r5
    bl func_0208d5a8
    b @L_0208dd3c
@L_0208dcdc:
    tst r1, #2
    bne @L_0208dd3c
    mov r0, r8
    mov r1, r5
    bl func_0208d7b0
    cmp r0, #0
    strneb r4, [r5, #0xc]
    bne @L_0208dd3c
    mov r0, r8
    mov r1, r5
    bl func_0208d51c
    b @L_0208dd3c
@L_0208dd0c:
    tst r1, #0x100
    beq @L_0208dd3c
    ldr r0, [r5, #0x18]
    mov r1, r7
    ldr r2, [r0]
    ldr r2, [r2, #0x24]
    blx r2
    ldr r1, [r5, #0x18]
    ldr r0, [r5, #0x14]
    ldr r1, [r1, #0x24]
    mov r2, r9
    bl func_ov015_02145330
@L_0208dd3c:
    add r6, r6, #1
    add r5, r5, #0x20
@L_0208dd44:
    ldr r0, [r8, #0xc]
    cmp r6, r0
    blt @L_0208dca0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" void func_0208dd58(s32 arg0, s32 arg1, u8 arg2)
{
    s32 local[1];
    *(s32 *)(((u8 *)local)) = 0;
    func_0208d46c(arg0, arg1, (s32)((u8 *)local), 0);
    if ((s32)*(u8 * *)(((u8 *)local)) != 0)
        *(u8 *)(*(u8 * *)(((u8 *)local)) + 0x10) = arg2;
    return;
}

extern "C" asm int func_0208dd88(void *self, int a)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r5, #0
    mov r7, r1
    mov r1, r5
    mov r8, r0
    bl func_0208d31c
    movs r6, r0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r0, [r8, #0xc]
    mov r4, r5
    cmp r0, #0
    ble @L_0208de20
    ldr r9, =0x101
@L_0208ddbc:
    ldr r0, [r6, #8]
    and r0, r0, r9
    cmp r0, r9
    ldreqb r0, [r6, #0xc]
    cmpeq r0, #3
    bne @L_0208de0c
    cmp r7, #0
    beq @L_0208dde8
    ldrb r0, [r6, #0xd]
    cmp r0, #0
    beq @L_0208de0c
@L_0208dde8:
    cmp r7, #0
    bne @L_0208ddfc
    ldrb r0, [r6, #0xd]
    cmp r0, #0
    bne @L_0208de0c
@L_0208ddfc:
    ldr r0, [r6, #0x14]
    bl func_ov015_021452f0
    cmp r0, #0
    addne r5, r5, #1
@L_0208de0c:
    ldr r0, [r8, #0xc]
    add r4, r4, #1
    cmp r4, r0
    add r6, r6, #0x20
    blt @L_0208ddbc
@L_0208de20:
    cmp r5, #0
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r3, #3
    add r1, sp, #0
    mov r0, #0x10
    mov r2, #1
    str r3, [sp]
    bl func_0202b608
    mov r1, #0
    mov r2, r1
    mov r0, #0x15
    bl func_0202b608
    bl func_020286e4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" int func_0208de5c(void *self)
{
    return func_0208dd88(self, 0);
}

extern "C" int func_0208de6c(void *self)
{
    return func_0208dd88(self, 1);
}

extern "C" s32 func_0208de7c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4)
{
    s32 r6;
    s32 v0;
    s32 v1;
    v0 = func_0208d4d4(arg0, arg1, arg2, arg3);
    r6 = arg1;
    arg1 = v0;
    if (arg1 < 0) {
        return -1;
    } else {
        v1 = func_0208dec8(arg0, arg1, r6, arg2, arg3, arg4);
        return v1;
    }
}

extern "C" asm s32 func_0208dec8(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x18
    mov r4, #0
    mov r9, r0
    mov r8, r1
    mov r7, r2
    mov r6, r3
    str r4, [sp, #0xc]
    str r4, [sp, #8]
    bl func_0208d31c
    mov r4, r0
    mov r0, r9
    ldr r12, [r0]
    mov r1, r7
    ldr r12, [r12, #8]
    add r2, sp, #0x14
    add r3, sp, #0x10
    blx r12
    cmp r0, #0
    beq @L_0208df7c
    ldr r1, [sp, #0x14]
    mov r0, #0xc
    mul r0, r1, r0
    ldr r2, [r9, #8]
    ldr r1, [sp, #0x10]
    ldr r0, [r2, r0]
    add r2, sp, #0xc
    add r3, sp, #8
    bl func_ov015_02134300
    cmp r0, #0
    beq @L_0208dfa4
    mov r0, r9
    ldr r2, [r0]
    ldr r1, [sp, #0x14]
    ldr r2, [r2, #4]
    blx r2
    ldr r2, [sp, #8]
    mov r1, #1
    str r2, [sp]
    str r1, [sp, #4]
    mov r1, r0
    ldrb r2, [sp, #0x38]
    ldr r0, [r4, #0x14]
    ldr r3, [sp, #0xc]
    b @L_0208df9c
@L_0208df7c:
    ldr r1, [sp, #8]
    mov r0, #1
    str r1, [sp]
    str r0, [sp, #4]
    ldrb r2, [sp, #0x38]
    ldr r0, [r4, #0x14]
    ldr r3, [sp, #0xc]
    mov r1, r7
@L_0208df9c:
    bl func_ov015_02144e40
    mov r5, r0
@L_0208dfa4:
    cmp r5, #0
    bne @L_0208dfc4
    mov r0, r9
    mov r1, r4
    bl func_0208d51c
    add sp, sp, #0x18
    mvn r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0208dfc4:
    ldr r1, =data_020ac094
    ldr r0, [r4, #0x14]
    ldr r1, [r1, #0x20]
    mov r2, r1
    mov r3, r1
    bl func_ov015_021454f4
    ldrb r0, [sp, #0x3c]
    ldr r1, =0x1001
    str r1, [r4, #8]
    cmp r0, #0
    ldreq r0, [r4, #8]
    orreq r0, r0, #2
    streq r0, [r4, #8]
    ldrb r0, [sp, #0x38]
    cmp r0, #0
    movne r0, #1
    strneb r0, [r4, #0xc]
    bne @L_0208e01c
    ldrb r0, [r4, #0xc]
    cmp r0, #1
    movne r0, #2
    strneb r0, [r4, #0xc]
@L_0208e01c:
    mov r0, r9
    mov r1, r8
    bl func_0208d30c
    str r0, [r4]
    add r2, sp, #0x10
    mov r0, r9
    mov r1, r7
    strb r6, [r4, #0xe]
    bl func_0208d950
    cmp r0, #0
    ldrne r0, [sp, #0x10]
    mvneq r0, #0
    strh r0, [r4, #4]
    ldr r0, [r4]
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" s32 func_0208e064(s32 arg0, s32 arg1)
{
    s32 local[1];
    s32 v0;
    s32 v1;
    s32 t0;
    u8 *t1;
    u8 *t2;
    *(s32 *)(((u8 *)local)) = 0;
    v0 = func_0208d46c(arg0, arg1, (s32)((u8 *)local));
    if (v0 < 0)
        return 0;
    if ((s32)*(u8 * *)(((u8 *)local)) == 0)
        return 0;
    t0 = (*(s32 *)(*(u8 * *)(((u8 *)local)) + 0x8) & -3);
    t1 = *(u8 * *)(((u8 *)local));
    *(s32 *)(t1 + 0x8) = t0;
    if (*(u8 *)(*(u8 * *)(((u8 *)local)) + 0xC) == 3)
        return 1;
    t2 = *(u8 * *)(((u8 *)local));
    v1 = func_0208d5a8(arg0, t2);
    if (v1 != 0)
        return 0;
    return (*(u8 *)(*(u8 * *)(((u8 *)local)) + 0xC) == 2 ? 1 : 0);
}

extern "C" void func_0208e0e4(s32 arg0, s32 arg1)
{
    s32 local[1];
    *(s32 *)(((u8 *)local)) = 0;
    func_0208d46c(arg0, arg1, (s32)((u8 *)local), 0);
    func_0208d51c(arg0, *(s32 *)(((u8 *)local)));
}

extern "C" s32 func_0208e114(u8 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 r4;
    s32 r5;
    u8 *r6;
    s32 v0 = func_0208d31c((s32)arg0, 0, arg2, arg3);
    if (*(s32 *)(arg0 + 0xC) <= 0)
        return v0;
    r4 = v0;
    r5 = 0;
    r6 = arg0;
    do {
        func_0208d51c((s32)r6, r4);
        arg0 = (u8 *)*(s32 *)(r6 + 0xC);
        r4 = (r4 + 0x20);
        r5 = (r5 + 1);
    } while (r5 < (s32)arg0);
    return (s32)arg0;
}

extern "C" asm void func_0208e15c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x24
    mov r4, #0
    mov r6, r2
    add r2, sp, #0x10
    str r4, [sp, #0x10]
    mov r7, r0
    mov r5, r3
    bl func_0208d46c
    ldr r2, [sp, #0x10]
    cmp r2, #0
    beq @L_0208e1a0
    ldr r1, [r2, #8]
    tst r1, #1
    beq @L_0208e1a0
    cmp r0, #0
    bge @L_0208e1ac
@L_0208e1a0:
    add sp, sp, #0x24
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
@L_0208e1ac:
    ldr r8, =data_020c464c
    ldr r1, [r2, #0x1c]
    ldr r0, [r8]
    bl func_ov015_02148114
    ldr r1, [sp, #0x10]
    mov r0, r7
    str r4, [r1, #0x1c]
    ldr r9, [r0]
    add r2, sp, #0x20
    ldr r9, [r9, #8]
    add r3, sp, #0x1c
    mov r1, r6
    blx r9
    cmp r0, #0
    beq @L_0208e24c
    ldr r1, [sp, #0x20]
    mov r0, #0xc
    mul r0, r1, r0
    ldr r2, [r7, #8]
    ldr r1, [sp, #0x1c]
    ldr r0, [r2, r0]
    add r2, sp, #0x18
    add r3, sp, #0x14
    mov r9, #1
    bl func_ov015_02134300
    cmp r0, #0
    beq @L_0208e27c
    mov r0, r7
    ldr r2, [r0]
    ldr r1, [sp, #0x20]
    ldr r2, [r2, #4]
    blx r2
    ldr r1, [sp, #0x18]
    str r1, [sp]
    ldr r2, [sp, #0x14]
    mov r1, r0
    stmib sp, {r2, r9}
    str r9, [sp, #0xc]
    ldr r0, [r8]
    b @L_0208e268
@L_0208e24c:
    str r4, [sp]
    str r4, [sp, #4]
    str r4, [sp, #8]
    mov r0, #1
    str r0, [sp, #0xc]
    ldr r0, [r8]
    mov r1, r6
@L_0208e268:
    mov r3, r5
    mov r2, #0xf
    bl func_ov015_02147ad8
    ldr r1, [sp, #0x10]
    str r0, [r1, #0x1c]
@L_0208e27c:
    ldr r0, [sp, #0x10]
    mov r1, #1
    ldr r0, [r0, #0x1c]
    cmp r0, #0
    moveq r4, r1
    cmp r4, #0
    bne @L_0208e2b0
    cmp r5, #0
    ldrne r0, [sp, #0x10]
    strneb r1, [r0, #0xc]
    ldreq r0, [sp, #0x10]
    moveq r1, #2
    streqb r1, [r0, #0xc]
@L_0208e2b0:
    ldr r0, [sp, #0x10]
    mvn r1, #0
    strh r1, [r0, #6]
    cmp r4, #0
    bne @L_0208e2e4
    add r2, sp, #0x1c
    mov r0, r7
    mov r1, r6
    bl func_0208d950
    cmp r0, #0
    ldrne r1, [sp, #0x1c]
    ldrne r0, [sp, #0x10]
    strneh r1, [r0, #6]
@L_0208e2e4:
    mov r0, #1
    cmp r4, #0
    movne r0, #0
    add sp, sp, #0x24
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
}

extern "C" s32 func_0208e2fc(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    u8 *r4;
    s32 r5;
    u8 *r6;
    s32 v0 = func_0208d31c(arg0, 0, arg2, arg3);
    r4 = (u8 *)v0;
    r5 = 0;
    r6 = (u8 *)arg0;
    if (*(s32 *)(r6 + 0xC) > 0) {
        do {
            if ((*(s32 *)(r4 + 0x8) & 1) != 0) {
                s32 v1 = func_0208d5a8((s32)r6, (s32)r4);
                if (v1 != 0)
                    return v1;
            }
            r4 = (u8 *)(r4 + 0x20);
            r5 = (r5 + 1);
        } while (r5 < *(s32 *)(r6 + 0xC));
    }
    return 0;
}

extern "C" void func_0208e35c(s32 arg0, s32 arg1)
{
    s32 local[1];
    *(s32 *)(((u8 *)local)) = 0;
    func_0208d46c(arg0, arg1, (s32)((u8 *)local), 0);
    func_0208d5a8(arg0, *(s32 *)(((u8 *)local)));
}

extern "C" s32 func_0208e38c(s32 arg0, u8 *arg1, s32 arg2)
{
    s32 local[1];
    s32 v0;
    *(s32 *)(((u8 *)local)) = 0;
    v0 = func_0208d46c(arg0, (s32)arg1, (s32)((u8 *)local), 0);
    if ((s32)*(u8 * *)(((u8 *)local)) == 0)
        return v0;
    if ((*(s32 *)(*(u8 * *)(((u8 *)local)) + 0x8) & 1) == 0)
        return *(s32 *)(*(u8 * *)(((u8 *)local)) + 0x8);
    arg0 = *(s32 *)(*(u8 * *)(((u8 *)local)) + 0x8);
    arg1 = *(u8 * *)(((u8 *)local));
    if (arg2 != 0) {
        *(s32 *)(arg1 + 0x8) = (arg0 | 0x100);
        arg0 = (arg0 | 0x100);
    } else {
        *(s32 *)(arg1 + 0x8) = (arg0 & -0x101);
        arg0 = (arg0 & -0x101);
    }
    return arg0;
}

extern "C" s32 func_0208e3e4(u8 *arg0, s32 arg1)
{
    s32 local[1];
    s32 r4;
    *(s32 *)(((u8 *)local)) = 0;
    func_0208d46c((s32)arg0, arg1, (s32)((u8 *)local));
    r4 = 0;
    arg0 = (u8 *)*(s32 *)(((u8 *)local));
    if ((s32)arg0 != 0) {
        r4 = *(s32 *)(arg0 + 0x14);
    }
    return r4;
}

extern "C" s32 func_0208e414(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4)
{
    s32 local[1];
    s32 r4;
    s32 r5;
    s32 r6;
    s32 v0;
    s32 v1;
    s32 t0;
    *(s32 *)(((u8 *)local)) = 0;
    v0 = func_0208d46c(arg0, (s32)arg1, (s32)((u8 *)local), arg3);
    if (*(s32 *)(((u8 *)local)) == 0)
        return v0;
    arg1 = (u8 *)*(s32 *)(((u8 *)local));
    r4 = 0;
    r5 = arg3;
    r6 = arg2;
    if (*(u8 *)(arg1 + 0x10) == 4) {
        r5 = (r5 * (r4 - 1));
    }
    if (*(s32 *)(arg1 + 0x14) == 0)
        return *(s32 *)(arg1 + 0x14);
    t0 = *(s32 *)(arg1 + 0x14);
    v1 = func_ov015_021454ac(t0, r6, r5, arg4);
    return v1;
}

extern "C" s32 func_0208e480(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    s32 local[1];
    s32 v1;
    s32 t0;
    *(s32 *)(((u8 *)local)) = 0;
    func_0208d46c(arg0, arg1, (s32)((u8 *)local), arg3);
    if ((s32)*(u8 * *)(((u8 *)local)) == 0)
        return (s32)*(u8 * *)(((u8 *)local));
    if (*(s32 *)(*(u8 * *)(((u8 *)local)) + 0x14) == 0)
        return *(s32 *)(*(u8 * *)(((u8 *)local)) + 0x14);
    t0 = *(s32 *)(*(u8 * *)(((u8 *)local)) + 0x14);
    v1 = func_ov015_021454d0(t0, arg2, arg3, arg4);
    return v1;
}

extern "C" s32 func_0208e4c4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    s32 local[1];
    s32 v1;
    s32 t0;
    *(s32 *)(((u8 *)local)) = 0;
    func_0208d46c(arg0, arg1, (s32)((u8 *)local), arg3);
    if ((s32)*(u8 * *)(((u8 *)local)) == 0)
        return (s32)*(u8 * *)(((u8 *)local));
    if (*(s32 *)(*(u8 * *)(((u8 *)local)) + 0x14) == 0)
        return *(s32 *)(*(u8 * *)(((u8 *)local)) + 0x14);
    t0 = *(s32 *)(*(u8 * *)(((u8 *)local)) + 0x14);
    v1 = func_ov015_021454f4(t0, arg2, arg3, arg4);
    return v1;
}

extern "C" V0208e508 func_0208e508(s32 arg0, s32 arg1)
{
    V0208e508 v = {0, 0, 0};
    u8 *p = 0;
    ((s32 (*)(...))func_0208d46c)(arg0, arg1, &p);
    if (p != 0 && *(s32 *)(p + 0x14) != 0)
        v = ((V0208e508 (*)(s32))func_ov015_02145518)(*(s32 *)(p + 0x14));
    return v;
}

extern "C" V0208e584 func_0208e584(s32 arg0, s32 arg1)
{
    V0208e584 v = {0, 0, 0};
    u8 *p = 0;
    ((s32 (*)(...))func_0208d46c)(arg0, arg1, &p);
    if (p != 0 && *(s32 *)(p + 0x14) != 0)
        v = ((V0208e584 (*)(s32))func_ov015_0214552c)(*(s32 *)(p + 0x14));
    return v;
}

extern "C" s32 func_0208e600(u8 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 local[1];
    s32 r4;
    s32 r5;
    s32 r6;
    s32 v1;
    s32 t0;
    s32 t1;
    *(s32 *)(((u8 *)local)) = 0;
    func_0208d46c((s32)arg0, arg1, (s32)((u8 *)local), arg3);
    arg0 = (u8 *)*(s32 *)(((u8 *)local));
    r4 = 0;
    r5 = arg3;
    r6 = arg2;
    if ((s32)arg0 != 0) {
        if (*(s32 *)(arg0 + 0x18) == 0)
            return r4;
        t0 = *(s32 *)(arg0 + 0x18);
        v1 = func_ov015_02145f44(t0, r6);
        if (v1 == 0)
            return r4;
        t1 = *(s32 *)(*(u8 * *)(((u8 *)local)) + 0x18);
        func_ov015_02146004(t1, r5);
        return 1;
    } else {
        return r4;
    }
}

extern "C" s32 func_0208e680(u8 *arg0, s32 arg1)
{
    s32 local[1];
    s32 r4;
    s32 v1;
    *(s32 *)(((u8 *)local)) = 0;
    func_0208d46c((s32)arg0, arg1, (s32)((u8 *)local));
    arg0 = (u8 *)*(s32 *)(((u8 *)local));
    if ((s32)arg0 == 0) {
        return 0;
    } else {
        r4 = 0;
        if (*(s32 *)(arg0 + 0x18) != 0) {
            v1 = func_ov015_02145ff0();
            r4 = v1;
        }
        return r4;
    }
}

extern "C" s32 func_0208e6cc(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    s32 local[1];
    s32 v1;
    s32 t0;
    *(s32 *)(((u8 *)local)) = 0;
    func_0208d46c(arg0, arg1, (s32)((u8 *)local), arg3);
    if ((s32)*(u8 * *)(((u8 *)local)) == 0)
        return (s32)*(u8 * *)(((u8 *)local));
    if (*(s32 *)(*(u8 * *)(((u8 *)local)) + 0x14) == 0)
        return *(s32 *)(*(u8 * *)(((u8 *)local)) + 0x14);
    t0 = *(s32 *)(*(u8 * *)(((u8 *)local)) + 0x14);
    v1 = func_ov015_02145a10(t0, arg2, arg3, arg4);
    return v1;
}

extern "C" s32 func_0208e710(s32 arg0, s32 arg1, s32 arg2)
{
    s32 local[1];
    s32 v1;
    s32 t0;
    *(s32 *)(((u8 *)local)) = 0;
    func_0208d46c(arg0, arg1, (s32)((u8 *)local), 0);
    if ((s32)*(u8 * *)(((u8 *)local)) == 0)
        return (s32)*(u8 * *)(((u8 *)local));
    if (*(s32 *)(*(u8 * *)(((u8 *)local)) + 0x14) == 0)
        return *(s32 *)(*(u8 * *)(((u8 *)local)) + 0x14);
    t0 = *(s32 *)(*(u8 * *)(((u8 *)local)) + 0x14);
    v1 = func_ov015_02145a40(t0, arg2);
    return v1;
}

extern "C" s32 func_0208e754(s32 arg0, s32 arg1, s32 arg2)
{
    s32 local[1];
    s32 v1;
    s32 t0;
    *(s32 *)(((u8 *)local)) = 0;
    func_0208d46c(arg0, arg1, (s32)((u8 *)local), 0);
    if ((s32)*(u8 * *)(((u8 *)local)) == 0)
        return (s32)*(u8 * *)(((u8 *)local));
    if (*(s32 *)(*(u8 * *)(((u8 *)local)) + 0x14) == 0)
        return *(s32 *)(*(u8 * *)(((u8 *)local)) + 0x14);
    t0 = *(s32 *)(*(u8 * *)(((u8 *)local)) + 0x14);
    v1 = func_ov015_02145a50(t0, arg2);
    return v1;
}

extern "C" void func_0208e798(s32 arg0, s32 arg1, u8 arg2)
{
    s32 local[1];
    *(s32 *)(((u8 *)local)) = 0;
    func_0208d46c(arg0, arg1, (s32)((u8 *)local), 0);
    if ((s32)*(u8 * *)(((u8 *)local)) != 0)
        *(u8 *)(*(u8 * *)(((u8 *)local)) + 0xD) = arg2;
    return;
}

extern "C" s32 func_0208e7c8(s32 arg0, u8 *arg1, s32 arg2)
{
    s32 local[1];
    s32 v0;
    *(s32 *)(((u8 *)local)) = 0;
    v0 = func_0208d46c(arg0, (s32)arg1, (s32)((u8 *)local), 0);
    if ((s32)*(u8 * *)(((u8 *)local)) == 0)
        return v0;
    if (*(s32 *)(*(u8 * *)(((u8 *)local)) + 0x14) == 0)
        return *(s32 *)(*(u8 * *)(((u8 *)local)) + 0x14);
    arg0 = *(s32 *)(*(u8 * *)(((u8 *)local)) + 0x8);
    arg1 = *(u8 * *)(((u8 *)local));
    if (arg2 != 0) {
        *(s32 *)(arg1 + 0x8) = (arg0 | 0x1000);
        arg0 = (arg0 | 0x1000);
    } else {
        *(s32 *)(arg1 + 0x8) = (arg0 & -0x1001);
        arg0 = (arg0 & -0x1001);
    }
    return arg0;
}

extern "C" void func_0208e81c(u8 *arg0, s32 arg1)
{
    s32 t0 = *(s32 *)(arg0 + 0x1C);
    MI_CpuCopy8((const void *)t0, (void *)arg1, (u32)0x600);
    DC_FlushRange(arg1, 0x600);
}

extern "C" void func_0208e844(u8 *arg0, s32 arg1)
{
    s32 t0 = *(s32 *)(arg0 + 0x1C);
    MI_CpuCopy8((const void *)arg1, (void *)t0, (u32)0x600);
    s32 t1 = *(s32 *)(arg0 + 0x1C);
    DC_FlushRange(t1, 0x600);
}

extern "C" void func_0208e870(u8 *arg0)
{
    s32 t0 = *(s32 *)(arg0 + 0x1C);
    MI_CpuFill8((void *)t0, 0, (u32)0x600);
    s32 t1 = *(s32 *)(arg0 + 0x1C);
    DC_FlushRange(t1, 0x600);
}

extern "C" void **func_0208e89c(void **obj)
{
    obj[0] = data_020afa08;
    func_0208db54(obj);
    operator delete(obj);
    return obj;
}

extern "C" void **func_0208e8c4(void **obj)
{
    obj[0] = data_020afa08;
    func_0208db54(obj);
    return obj;
}

extern "C" void func_0208e8e4(u8 *obj)
{
    MIi_CpuClearFast(0, obj, 0x114);
    obj[0x290] = 0;
}

extern "C" BOOL func_0208e908(void)
{
    return TRUE;
}

extern "C" void func_0208e910(u8 *arg0)
{
    s32 a;
    s32 b;
    if (((s32 (*)(...))func_0208f308)(arg0) == 0)
        return;
    a = -(*(s32 *)data_020c483c << 12);
    b = *(s32 *)data_020c4838 << 12;
    if (arg0[0x110] != 0)
        return;
    arg0[0x10E] = (arg0[0x10E] + 1) & 0x3F;
    if (arg0[0x10F] != 0) {
        s32 v = (u32)arg0[0x10E] >> 1;
        if (v > 0xF)
            v = 0x1F - v;
        arg0[0x10C] = v + 8;
    }
    ((s32 (*)(...))func_0208fac4)(arg0, arg0, &a, &b);
}

extern "C" void func_0208e9b8(u8 *obj, int i, BOOL value)
{
    u8 flag = TRUE;

    if (value == FALSE) {
        flag = FALSE;
    }
    (obj + i * 0x114)[0x110] = flag;
}
