#include "game/Unk_02084ff4.hpp"
#include "game/vcall.hpp"

extern "C" s32 func_020860ac(...);     // (for the asm functions)
extern "C" void func_020864a8(void);     // (for the asm functions)
extern "C" void func_020864b4(void);     // (for the asm functions)
extern "C" BOOL func_02084d94(u8 *obj, u16 flags);
extern "C" BOOL func_02084de8(u8 *obj);
extern "C" void *data_020af4c0[];     // (a vtable)

extern "C" s32 func_02084ff4(u8 *arg0, s32 arg1, s32 arg2);
extern "C" s32 func_020850e4(...);
extern "C" void func_02085154(s32 *list, s32 a, s32 b);
extern "C" int func_02085190(s32 *list, s32 value);
extern "C" BOOL func_020851c8(s32 *list, s32 value);
extern "C" void func_020851fc(u8 *list);
extern "C" BOOL func_02085208(u8 *list, s32 value);
extern "C" int func_02085228(s32 *list, s32 value);
extern "C" int func_02085260(void *self, int a, int b);
extern "C" BOOL func_02085284(void *self, int value);
extern "C" u8 *func_02085298(void *self, int a, int b);
extern "C" u8 *func_0208530c(u8 *obj, u32 i);
extern "C" s32 func_02085324(s32 arg0, u8 *arg1);
extern "C" BOOL func_02085374(void *self, u8 *obj);
extern "C" BOOL func_0208539c(u8 *self, u8 *obj);
extern "C" BOOL func_020853cc(u8 *obj, u8 *other);
extern "C" s32 func_020853ec(s32 arg0, s32 arg1);
extern "C" BOOL func_02085430(void *self, u8 *obj);
extern "C" s32 func_02085444(s32 arg0, s32 arg1);
extern "C" BOOL func_02085488(void *self, u8 *obj);
extern "C" s32 func_020854a8(u8 *arg0, u8 *arg1);
extern "C" s32 func_020854d8(...);
extern "C" int func_02085728(void *self, u8 *entry);
extern "C" int func_02085770(void *self, u8 *entry, int b, int c);
extern "C" s32 func_020857ac(u8 *arg0, u8 *arg1, s32 arg2);
extern "C" int func_02085828(void *self, u8 *entry);
extern "C" s32 func_02085840(s32 arg0, u8 *arg1);
extern "C" BOOL func_020858b0(void *self, u8 *obj);
extern "C" void func_020858c8(void *self, u8 *obj, BOOL update);
extern "C" void **func_020858fc(void **obj);
extern "C" void func_0208591c(void *obj);
extern "C" void *func_02085920(void *obj);
extern "C" void func_02085934(void *obj);
extern "C" void func_020859c0(void);
extern "C" int func_02085b4c(void *self, int a);
extern "C" void func_02085b6c(void *self);
extern "C" u8 *func_02085ba4(void *self, int a);
extern "C" u8 *func_02085bb4(u8 *self, int i);
extern "C" u8 *func_02085be8(u8 *self);
extern "C" s32 func_02085bfc(s32 arg0, s32 arg1);
extern "C" u8 *func_02085c60(void *self, int n);
extern "C" s32 func_02085c98(s32 arg0);
extern "C" s32 func_02085ce0(s32 arg0, s32 arg1);
extern "C" s32 func_02085d34(s32 arg0, s32 arg1);
extern "C" s32 func_02085d88(s32 arg0, s32 arg1, s32 arg2);
extern "C" void func_02085dec(void *self, int value, int *high, int *low);
extern "C" int func_02085e00(void *self, int a, int b, int c);
extern "C" s32 func_02085e30(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 func_02085e78(s32 arg0, s32 arg1, s32 arg2);
extern "C" void func_02085ec0(void);
extern "C" s32 func_02085ff8(s32 arg0, s32 arg1, s32 arg2);

extern "C" char data_020c4660[];
extern "C" char data_020c4678[];
extern "C" char data_020e88a0[];
extern "C" void MI_CpuFill8(void);
extern "C" void MIi_CpuClearFast(void);
extern "C" void _ZN11MatchEngine13func_0207a5c0EiPv(void);
extern "C" void _ZdlPv(void);
extern "C" void func_02084ba0(void);
extern "C" void func_02084c4c(void);
extern "C" s32 func_02084d7c(...);
extern "C" void func_02084dac(void);
extern "C" s32 func_02084dc0(...);
extern "C" void func_02084e40(void);
extern "C" void func_02084f84(void);
extern "C" void func_02084fdc(void);
extern "C" void func_02099a94(void);
extern "C" void func_02099b64(void);
extern "C" void func_02099bbc(void);
extern "C" void func_02099bcc(void);
extern "C" void func_ov000_0210c77c(void);
extern "C" void func_ov000_0210c834(void);
extern "C" void func_ov015_02130b14(void);

extern "C" s32 func_02084ff4(u8 *arg0, s32 arg1, s32 arg2)
{
    s32 r0;
    s32 r1;
    s32 r4;
    s32 r6;
    s32 r7;
    int v0;
    BOOL v1;
    s32 t0;
    s32 t1;
    s32 t2;
    v0 = func_02085190((s32 *)arg0, arg1);
    v1 = func_02085208(arg0, arg1);
    r6 = v0;
    if (v1 != 0) {
        return 0;
    } else {
        if (r6 != -1) {
            if (arg2 >= 0) {
                t0 = *(s32 *)(arg0 + (arg2 << 2));
                func_02085154((s32 *)arg0, arg1, t0);
            }
            return 1;
        } else {
            if (*(s32 *)(arg0 + 0x10) >= 4) {
                return 0;
            } else {
                if (arg2 >= 0) {
                    r4 = arg1;
                    r7 = arg2;
                    if (r7 < 4) {
                        do {
                            r0 = *(s32 *)(arg0 + (r7 << 2));
                            if (r0 == 0) {
                                *(s32 *)(arg0 + (r7 << 2)) = r4;
                                t1 = (*(s32 *)(arg0 + 0x10) + 1);
                                *(s32 *)(arg0 + 0x10) = t1;
                                return 1;
                            }
                            *(s32 *)(arg0 + (r7 << 2)) = r4;
                            r7 = (r7 + 1);
                            r4 = r0;
                        } while (r7 < 4);
                    }
                } else {
                    r4 = arg1;
                    r1 = 0;
                    do {
                        if (*(s32 *)(arg0 + (r1 << 2)) == 0) {
                            *(s32 *)(arg0 + (r1 << 2)) = r4;
                            t2 = (*(s32 *)(arg0 + 0x10) + 1);
                            *(s32 *)(arg0 + 0x10) = t2;
                            return 1;
                        }
                        r1 = (r1 + 1);
                    } while (r1 < 4);
                }
                return 0;
            }
        }
    }
}

extern "C" asm s32 func_020850e4(...)
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

extern "C" void func_02085154(s32 *list, s32 a, s32 b)
{
    int i = func_02085190(list, a);
    int j = func_02085190(list, b);

    if (i != -1 && j != -1) {
        list[i] = b;
        list[j] = a;
    }
}

extern "C" int func_02085190(s32 *list, s32 value)
{
    int i;

    for (i = 0; i < ((volatile s32 *)list)[4]; i++) {
        if (value == list[i]) {
            return i;
        }
    }
    return -1;
}

extern "C" BOOL func_020851c8(s32 *list, s32 value)
{
    if (func_02085190(list, value) >= 0) {
        return FALSE;
    }
    if (list[5] > 0) {
        return FALSE;
    }
    list[5] = value;
    return TRUE;
}

extern "C" void func_020851fc(u8 *list)
{
    *(s32 *)(list + 0x14) = 0;
}

extern "C" BOOL func_02085208(u8 *list, s32 value)
{
    if (value > 0 && *(s32 *)(list + 0x14) == value) {
        return TRUE;
    }
    return FALSE;
}

extern "C" int func_02085228(s32 *list, s32 value)
{
    int i = func_02085190(list, value);
    int result = -1;

    if (i != result) {
        return i;
    }
    if (func_02085208((u8 *)list, value)) {
        result = list[4];
    }
    return result;
}

extern "C" int func_02085260(void *self, int a, int b)
{
    if (a <= 0 || b < 0) {
        return -1;
    }
    return (b & 0xFF) | (a << 8);
}

extern "C" BOOL func_02085284(void *self, int value)
{
    return value != 0 && value != -1;
}

extern "C" asm u8 *func_02085298(void *self, int a, int b)
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

extern "C" u8 *func_0208530c(u8 *obj, u32 i)
{
    if (i >= 24) {
        return NULL;
    }
    return obj + 0x30 + i * 0xD4;
}

extern "C" s32 func_02085324(s32 arg0, u8 *arg1)
{
    s32 r4;
    s32 r5;
    u8 *v0;
    BOOL v1;
    r5 = 0;
    v0 = func_0208530c((u8 *)arg0, (u32)0);
    r4 = (s32)v0;
    do {
        v1 = func_02084de8((u8 *)r4);
        if (v1 != 0) {
            if ((s32)arg1 != 0) {
                *(s32 *)(arg1) = r5;
            }
            return r4;
        }
        r5 = (r5 + 1);
        r4 = (r4 + 0xD4);
    } while (r5 < 0x18);
    return 0;
}

extern "C" BOOL func_02085374(void *self, u8 *obj)
{
    if (obj != NULL && !func_02084de8(obj)) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_0208539c(u8 *self, u8 *obj)
{
    if (obj != NULL) {
        return func_02085190((s32 *)(self + 0x18), *(s32 *)(obj + 0x5C)) > 0;
    }
    return FALSE;
}

extern "C" BOOL func_020853cc(u8 *obj, u8 *other)
{
    if (other == NULL) {
        return FALSE;
    }
    return func_02085208(obj + 0x18, *(s32 *)(other + 0x5C));
}

extern "C" s32 func_020853ec(s32 arg0, s32 arg1)
{
    BOOL v0;
    BOOL v1;
    BOOL v2;
    v0 = func_0208539c((u8 *)arg0, (u8 *)arg1);
    if ((v0 != 0 || (v1 = func_020853cc((u8 *)arg0, (u8 *)arg1), v1 != 0))) {
        return 0;
    } else {
        v2 = func_02084d94((u8 *)arg1, 8);
        return v2;
    }
}

extern "C" BOOL func_02085430(void *self, u8 *obj)
{
    return func_02084d94(obj, 0x20);
}

extern "C" s32 func_02085444(s32 arg0, s32 arg1)
{
    BOOL v0;
    BOOL v1;
    BOOL v2;
    v0 = func_0208539c((u8 *)arg0, (u8 *)arg1);
    if ((v0 != 0 || (v1 = func_020853cc((u8 *)arg0, (u8 *)arg1), v1 != 0))) {
        return 0;
    } else {
        v2 = func_02084d94((u8 *)arg1, 0x10);
        return v2;
    }
}

extern "C" BOOL func_02085488(void *self, u8 *obj)
{
    if (obj == NULL) {
        return FALSE;
    }
    return func_02084d94(obj, 0x8000);
}

extern "C" s32 func_020854a8(u8 *arg0, u8 *arg1)
{
    s32 r2;
    if ((s32)arg1 == 0)
        return 0;
    arg1 = (u8 *)*(s32 *)(arg1 + 0x5C);
    r2 = 0;
    if ((s32)arg1 > 0) {
        r2 = (*(s32 *)(arg0 + 0x18) == (s32)arg1 ? 1 : r2);
    }
    return r2;
}

extern "C" asm s32 func_020854d8(...)
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

extern "C" asm int func_02085728(void *self, u8 *entry)
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

extern "C" asm int func_02085770(void *self, u8 *entry, int b, int c)
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

extern "C" s32 func_020857ac(u8 *arg0, u8 *arg1, s32 arg2)
{
    s32 r12;
    int v0;
    int v1;
    int v2;
    switch (*(u8 *)(arg1 + 0xA6)) {
        case 0:
            v0 = func_02085770((void *)arg0, arg1, 0xC352, 3);
            return v0;
        case 1:
            v1 = func_02085770((void *)arg0, arg1, 0xC351, 3);
            return v1;
        case 3:
            r12 = 0xC351;
            if (arg2 > 0) {
                r12 = 0xC351;
                if (arg2 <= *(s32 *)(arg0 + 0x10)) {
                    r12 = (0xC351 - 1);
                }
            }
            v2 = func_02085770((void *)arg0, arg1, r12, 3);
            return v2;
        case 2:
        default:
            return 1;
    }
}

extern "C" int func_02085828(void *self, u8 *entry)
{
    return func_02085770(self, entry, 50000, 3);
}

extern "C" s32 func_02085840(s32 arg0, u8 *arg1)
{
    BOOL v0;
    int v1;
    s32 v3;
    s32 t0;
    s32 t1;
    s32 t2;
    v0 = func_02085374((void *)arg0, (u8 *)arg1);
    if (v0 == 0) {
        return 0;
    } else {
        t0 = *(s32 *)(arg1 + 0x5C);
        v1 = func_02085190((s32 *)(arg0 + 0x18), t0);
        if (v1 < 0) {
            return 0;
        } else {
            func_02084dc0((s32)arg1, 0x8000);
            t1 = *(s32 *)(arg1 + 0x5C);
            v3 = func_020850e4((arg0 + 0x18), t1);
            if (v3 == 0) {
                return 0;
            } else {
                t2 = *(s32 *)(arg1 + 0x5C);
                func_020860ac(arg0, t2, 0);
                return 1;
            }
        }
    }
}

extern "C" BOOL func_020858b0(void *self, u8 *obj)
{
    return obj != NULL && obj[0x2D] != 0;
}

extern "C" void func_020858c8(void *self, u8 *obj, BOOL update)
{
    BOOL alive;

    if (obj == NULL) {
        return;
    }
    if (*(s16 *)(obj + 0x2E) > 0) {
        alive = TRUE;
    } else {
        alive = FALSE;
        *(s16 *)(obj + 0x2E) = alive;
    }
    obj[0x2D] = alive;
    if (update) {
        func_02085828(self, obj);
    }
}

extern "C" void **func_020858fc(void **obj)
{
    obj[0] = data_020af4c0;
    func_02085934(obj);
    return obj;
}

extern "C" void func_0208591c(void *obj)
{
}

extern "C" void *func_02085920(void *obj)
{
    operator delete(obj);
    return obj;
}

extern "C" asm void func_02085934(void *obj)
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
    bl _ZN11MatchEngine13func_0207a5c0EiPv
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

extern "C" int func_02085b4c(void *self, int a)
{
    return func_02085728(self, func_02085298(self, a, 0));
}

extern "C" void func_02085b6c(void *self)
{
    u8 *entry;
    int i = 0;

    entry = func_0208530c((u8 *)self, i);
    for (; i < 24; i++) {
        func_02085728(self, entry);
        entry += 0xD4;
    }
}

extern "C" u8 *func_02085ba4(void *self, int a)
{
    return func_02085298(self, a, 0);
}

extern "C" u8 *func_02085bb4(u8 *self, int i)
{
    if (i < 0 || i >= *(s32 *)(self + 0x28)) {
        return NULL;
    }
    return func_02085298(self, ((s32 *)(self + 0x18))[i], 0);
}

extern "C" u8 *func_02085be8(u8 *self)
{
    return func_02085298(self, *(s32 *)(self + 0x2C), 0);
}

extern "C" s32 func_02085bfc(s32 arg0, s32 arg1)
{
    s32 r4;
    u8 *r5;
    s32 r6;
    s32 r7;
    u8 *v0;
    BOOL v1;
    v0 = func_0208530c((u8 *)arg0, (u32)0);
    r5 = (u8 *)v0;
    if ((s32)r5 == 0) {
        return 0;
    } else {
        r4 = 1;
        r6 = arg1;
        r7 = arg0;
        do {
            v1 = func_02085374((void *)r7, r5);
            if ((v1 != 0 && *(s32 *)(r5 + 0x5C) == r6)) {
                return r4;
            } else {
                r4 = (r4 + 1);
                r5 = (u8 *)(r5 + 0xD4);
            }
        } while (r4 <= 0x18);
        return 0;
    }
}

extern "C" u8 *func_02085c60(void *self, int n)
{
    u8 *entry = func_0208530c((u8 *)self, n - 1);

    if (entry == NULL) {
        return NULL;
    }
    if (!func_02085374(self, entry)) {
        entry = NULL;
    }
    return entry;
}

extern "C" s32 func_02085c98(s32 arg0)
{
    s32 r4;
    s32 r5;
    s32 r6;
    u8 *v0;
    BOOL v1;
    r5 = 0;
    v0 = func_0208530c((u8 *)arg0, (u32)0);
    r4 = (s32)v0;
    r6 = 0;
    do {
        v1 = func_02085374((void *)arg0, (u8 *)r4);
        r6 = (r6 + 1);
        if (v1 != 0) {
            r5 = (r5 + 1);
        }
        r4 = (r4 + 0xD4);
    } while (r6 < 0x18);
    return r5;
}

extern "C" s32 func_02085ce0(s32 arg0, s32 arg1)
{
    u8 *r4;
    s32 r5;
    s32 r6;
    u8 *v0;
    BOOL v1;
    r5 = 0;
    v0 = func_0208530c((u8 *)arg0, (u32)0);
    r6 = arg1;
    r4 = (u8 *)v0;
    do {
        v1 = func_02085374((void *)arg0, r4);
        if ((v1 != 0 && (r6 = (r6 - 1), r6 < 0))) {
            return *(s32 *)(r4 + 0x5C);
        }
        r5 = (r5 + 1);
        r4 = (u8 *)(r4 + 0xD4);
    } while (r5 < 0x18);
    return 0;
}

extern "C" s32 func_02085d34(s32 arg0, s32 arg1)
{
    s32 r4;
    s32 r5;
    s32 r6;
    u8 *v0;
    BOOL v1;
    r5 = 0;
    v0 = func_0208530c((u8 *)arg0, (u32)0);
    r6 = arg1;
    r4 = (s32)v0;
    do {
        v1 = func_02085374((void *)arg0, (u8 *)r4);
        if ((v1 != 0 && (r6 = (r6 - 1), r6 < 0))) {
            return r4;
        }
        r5 = (r5 + 1);
        r4 = (r4 + 0xD4);
    } while (r5 < 0x18);
    return 0;
}

extern "C" s32 func_02085d88(s32 arg0, s32 arg1, s32 arg2)
{
    s32 r4;
    s32 v0;
    s32 v1;
    u8 *v2;
    v0 = ((VCall *)arg0)->f0((arg1 & 0xFFF), arg2, 0xFFF);
    v1 = ((VCall *)arg0)->f1(v0);
    r4 = v0;
    if (v1 != 0) {
        v2 = func_02085298((void *)arg0, r4, 0);
        if (v2 != 0)
            return r4;
    }
    return 0;
}

extern "C" void func_02085dec(void *self, int value, int *high, int *low)
{
    *high = value >> 8;
    *low = value & 0xFF;
}

extern "C" int func_02085e00(void *self, int a, int b, int c)
{
    return func_02085770(self, func_02085298(self, a, 0), b, c);
}

extern "C" s32 func_02085e30(s32 arg0, s32 arg1, s32 arg2)
{
    u8 *v0;
    BOOL v1;
    v0 = func_02085298((void *)arg0, arg1, 0);
    v1 = func_02085374((void *)arg0, (u8 *)v0);
    if (v1 == 0)
        return 0;
    func_02084d7c(v0, arg2);
    return 1;
}

extern "C" s32 func_02085e78(s32 arg0, s32 arg1, s32 arg2)
{
    s32 r4;
    s32 r5;
    s32 r8;
    u8 *v0;
    int v1;
    r5 = 0;
    v0 = func_0208530c((u8 *)arg0, (u32)0);
    r8 = arg0;
    r4 = (s32)v0;
    do {
        v1 = func_02085770((void *)r8, (u8 *)r4, arg1, arg2);
        arg0 = v1;
        r5 = (r5 + 1);
        r4 = (r4 + 0xD4);
    } while (r5 < 0x18);
    return arg0;
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

extern "C" s32 func_02085ff8(s32 arg0, s32 arg1, s32 arg2)
{
    u8 *r5;
    u8 *v0;
    BOOL v1;
    s32 t0;
    s32 t1;
    s32 t2;
    v0 = func_02085298((void *)arg0, arg1, 0);
    v1 = func_02085374((void *)arg0, (u8 *)v0);
    if (v1 == 0)
        return v1;
    r5 = (u8 *)v0;
    if (arg2 != 0) {
        func_020854d8(arg0, (s32)r5, (s32)(r5 + 0x84), (s32)(r5 + 0x84), (s32)(r5 + 0x84), 0);
    }
    t0 = *(s32 *)(r5 + 0x84);
    *(s32 *)(r5 + 0x78) = t0;
    t1 = *(s32 *)(r5 + 0x88);
    *(s32 *)(r5 + 0x7C) = t1;
    t2 = *(s32 *)(r5 + 0x8C);
    *(s32 *)(r5 + 0x80) = t2;
    return t2;
}
