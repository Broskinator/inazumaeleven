#include "game/Unk_02089004.hpp"
#include "game/vcall.hpp"
#include "nitro/mi.h"

extern "C" void func_0208b508(void);     // (for the asm functions)
extern "C" void func_0208cd7c(void);     // (for the asm functions)
extern "C" void func_0208cdec(void);     // (for the asm functions)
extern "C" void func_ov015_02164494(void *a);
extern "C" void func_ov015_02163f50(void *a);
extern "C" void func_ov015_02163f80(void *a);
extern "C" void func_ov015_021644b4(void *a);
extern "C" void func_0209d678(void *a);
extern "C" void func_0209d684(void *a);
extern "C" void func_ov015_02134198(void *a, int n);
extern "C" void func_ov015_02134208(void *a);
extern "C" void *data_ov015_02165848[];
extern "C" void *data_020af768[];

extern "C" void func_ov015_0213d088(void *a, void *b);
extern "C" void func_ov015_0213cd80(void *a, void *b);
extern "C" int func_ov015_02146c8c(void *a);
extern "C" void func_ov015_021474d0(void *obj);
extern "C" void func_ov015_021474e8(void *obj);
extern "C" void *data_020af758[];
extern "C" void *data_020af7ec[];
extern "C" void *data_020af808[];

extern "C" void func_02089004(void *a, void *b);
extern "C" void func_02089024(u8 *obj);
extern "C" s32 func_02089058(u8 *arg0, u8 *arg1);
extern "C" s32 func_020890ac(u8 *arg0, s32 arg1, s32 arg2, u8 *arg3);
extern "C" s32 func_02089118(...);
extern "C" s32 func_0208918c(s32 arg0, u8 *arg1);
extern "C" int func_02089204(void *self, u8 *obj);
extern "C" void func_02089214(void);
extern "C" s32 func_02089350(u8 *arg0);
extern "C" s32 func_02089384(u8 *arg0);
extern "C" void func_020893b4(void);
extern "C" void **func_02089480(void **obj);
extern "C" void **func_020894ac(void **obj);
extern "C" void **func_020894d4(void **obj);
extern "C" void **func_020894f4(void **obj);
extern "C" s32 func_02089514(u8 *arg0);
extern "C" s32 func_02089584(s32 arg0);
extern "C" void func_020895d0(void);
extern "C" void func_02089674(void);
extern "C" BOOL func_02089758(u8 *obj, u8 value);
extern "C" void func_02089764(void *obj);
extern "C" void func_0208977c(void);
extern "C" s32 func_020898ac(u8 *arg0, s32 arg1);
extern "C" void func_02089998(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4, u8 arg5);
extern "C" s32 func_020899e4(...);
extern "C" s32 func_02089b4c(u8 *arg0, s32 arg1);
extern "C" void func_02089bd4(u8 *arg0, s32 arg1);
extern "C" void func_02089c14(void *obj);
extern "C" void func_02089cbc(void);
extern "C" void func_02089dc4(u8 *arg0, s32 arg1);
extern "C" s32 func_02089e04(u8 *arg0, u8 *arg1, s32 arg2);
extern "C" s32 func_02089e64(u8 *arg0, s32 arg1);
extern "C" s32 func_02089eb4(u8 *arg0, s32 arg1, s32 arg2);
extern "C" s32 func_02089f08(u8 *arg0, s32 arg1, s32 arg2);
extern "C" s32 func_02089f5c(u8 *arg0, s32 arg1, s32 arg2);
extern "C" s32 func_02089fb0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern "C" s32 func_0208a00c(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern "C" s32 func_0208a068(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern "C" void func_0208a0c4(void);
extern "C" void func_0208a15c(void);
extern "C" void func_0208a1f4(void);
extern "C" s32 func_0208a28c(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 func_0208a31c(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 func_0208a3ac(u8 *arg0, s32 arg1);
extern "C" s32 func_0208a40c(u8 *arg0, s32 arg1);
extern "C" void func_0208a460(void);
extern "C" s32 func_0208a4e8(u8 *arg0);
extern "C" void func_0208a540(void *obj);
extern "C" void func_0208a574(void);
extern "C" s32 func_0208a5e0(s32 arg0);
extern "C" void **func_0208a698(void **obj);
extern "C" void **func_0208a6c8(void **obj);
extern "C" void *func_0208a6f0(void *self, int a);
extern "C" void *func_0208a704(void *self, int a);
extern "C" void func_0208a718(u8 *obj);
extern "C" int func_0208a730(void *self, int a, int b);
extern "C" int func_0208a748(void *self, int a);
extern "C" s32 func_0208a764(u8 *arg0, s32 arg1, u8 *arg2);
extern "C" s32 func_0208a7cc(u8 *arg0, u8 *arg1);
extern "C" void func_0208a824(void);
extern "C" void func_0208a8cc(void);
extern "C" void func_0208a968(void);
extern "C" void func_0208abb8(void);
extern "C" void func_0208ad68(void);
extern "C" void func_0208aef0(void);

extern "C" char data_020a7288[];
extern "C" char data_020ac094[];
extern "C" char data_020af770[];
extern "C" char data_020af798[];
extern "C" char data_020c464c[];
extern "C" char data_020c4650[];
extern "C" char data_020c4660[];
extern "C" char data_020c467c[];
extern "C" char data_020c47b4[];
extern "C" char data_ov015_0216581c[];
extern "C" void _ZN8GameHeap4FreeEPv(void);
extern "C" void _ZN8GameHeap5AllocEiii(void);
extern "C" s32 __cxa_vec_cleanup(...);
extern "C" s32 __cxa_vec_ctor(...);
extern "C" void __cxa_vec_delete(void);
extern "C" void __cxa_vec_new(void);
extern "C" void func_02001f08(void);
extern "C" s32 func_020286e4(...);
extern "C" s32 func_0202b608(...);
extern "C" void func_02088a5c(void);
extern "C" void func_02088aa0(void);
extern "C" void func_02088ad0(void);
extern "C" void func_02088bec(void);
extern "C" s32 func_ov015_02130b14(...);
extern "C" void func_ov015_02133f94(void);
extern "C" s32 func_ov015_02134118(...);
extern "C" void func_ov015_0213476c(void);
extern "C" void func_ov015_0213490c(void);
extern "C" void func_ov015_02144cf8(void);
extern "C" void func_ov015_02144d9c(void);
extern "C" void func_ov015_02144df8(void);
extern "C" void func_ov015_02144f58(void);
extern "C" void func_ov015_02145144(void);
extern "C" void func_ov015_02145438(void);
extern "C" void func_ov015_02145454(void);
extern "C" void func_ov015_02145490(void);
extern "C" void func_ov015_021457b4(void);
extern "C" void func_ov015_021457fc(void);
extern "C" void func_ov015_02145864(void);
extern "C" void func_ov015_0214587c(void);
extern "C" void func_ov015_021458f4(void);
extern "C" void func_ov015_021459e0(void);
extern "C" s32 func_ov015_02145f20(...);
extern "C" s32 func_ov015_02145f44(...);
extern "C" s32 func_ov015_02145ff0(...);
extern "C" s32 func_ov015_02146004(...);
extern "C" s32 func_ov015_021462f8(...);
extern "C" void func_ov015_021463f8(void);
extern "C" void func_ov015_021464a8(void);
extern "C" void func_ov015_021464b4(void);
extern "C" s32 func_ov015_02146514(...);
extern "C" void func_ov015_0214675c(void);
extern "C" void func_ov015_021468fc(void);
extern "C" s32 func_ov015_021469c0(...);
extern "C" s32 func_ov015_02146e0c(...);
extern "C" s32 func_ov015_02146e1c(...);
extern "C" s32 func_ov015_02146e44(...);
extern "C" void func_ov015_02146e54(void);
extern "C" void func_ov015_02146e68(void);
extern "C" void func_ov015_02146e80(void);
extern "C" void func_ov015_02146e98(void);
extern "C" s32 func_ov015_02146ebc(...);
extern "C" s32 func_ov015_02146ee0(...);
extern "C" s32 func_ov015_02146eec(...);
extern "C" void func_ov015_02146f10(void);
extern "C" void func_ov015_02147214(void);
extern "C" s32 func_ov015_02147424(...);
extern "C" s32 func_ov015_02147440(...);
extern "C" void func_ov015_02148058(void);
extern "C" void func_ov015_02148114(void);
extern "C" void func_ov015_02148488(void);
extern "C" void sprintf(void);

extern "C" void func_02089004(void *a, void *b)
{
    func_ov015_0213d088(a, b);
    func_ov015_0213cd80(a, b);
}

extern "C" void func_02089024(u8 *obj)
{
    *(s32 *)(obj + 0xC) = 0;
    *(s32 *)(obj + 8) = 0;
    *(s32 *)(obj + 0x10) = 0;
    *(s32 *)(obj + 4) = 0;
    MIi_CpuClearFast(0, obj + 0x18, 0x78);
    *(s32 *)(obj + 0x90) = 0;
}

extern "C" s32 func_02089058(u8 *arg0, u8 *arg1)
{
    s32 r2;
    u8 *r3;
    s32 r12;
    r3 = (u8 *)*(s32 *)(arg0 + 0xC);
    if ((s32)arg1 != 0) {
        *(s32 *)(arg1) = 0;
    }
    r12 = *(s32 *)(arg0 + 0x4);
    r2 = 0;
    if (r12 > 0) {
        do {
            if ((*(s32 *)(r3 + 0x8) & 1) == 0) {
                if ((s32)arg1 != 0) {
                    *(s32 *)(arg1) = (s32)r3;
                }
                return (r2 + 1);
            }
            r2 = (r2 + 1);
            r3 = (u8 *)(r3 + 0x1C);
        } while (r2 < r12);
    }
    return 0;
}

extern "C" s32 func_020890ac(u8 *arg0, s32 arg1, s32 arg2, u8 *arg3)
{
    s32 r12;
    u8 *lr;
    s32 r4;
    lr = (u8 *)*(s32 *)(arg0 + 0xC);
    if ((s32)arg3 != 0) {
        *(s32 *)(arg3) = 0;
    }
    r4 = *(s32 *)(arg0 + 0x4);
    r12 = 0;
    if (r4 > 0) {
        do {
            if ((((*(s32 *)(lr + 0x8) & 1) != 0 && *(s32 *)(lr) == arg1) && *(s32 *)(lr + 0x4) == arg2)) {
                if ((s32)arg3 != 0) {
                    *(s32 *)(arg3) = (s32)lr;
                }
                return (r12 + 1);
            }
            r12 = (r12 + 1);
            lr = (u8 *)(lr + 0x1C);
        } while (r12 < r4);
    }
    return 0;
}

extern "C" asm s32 func_02089118(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    movs r6, r1
    ldmeqia sp!, {r4, r5, r6, pc}
    ldr r0, [r6, #0x10]
    cmp r0, #0
    beq @L_02089134
    bl func_ov015_0214675c
@L_02089134:
    ldr r0, [r6, #0x14]
    cmp r0, #0
    beq @L_0208914c
    ldr r1, [r0]
    ldr r1, [r1, #0x20]
    blx r1
@L_0208914c:
    ldr r1, [r6, #0x18]
    cmp r1, #0
    beq @L_02089164
    ldr r0, =data_020c464c
    ldr r0, [r0]
    bl func_ov015_02148114
@L_02089164:
    mov r0, r6
    mov r1, #0
    mov r2, #0x1c
    ldr r5, [r6, #0x14]
    ldr r4, [r6, #0x10]
    bl MI_CpuFill8
    str r4, [r6, #0x10]
    str r5, [r6, #0x14]
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 func_0208918c(s32 arg0, u8 *arg1)
{
    s32 r4;
    s32 r6;
    s32 v0;
    s32 t0;
    r6 = arg0;
    if ((s32)arg1 == 0) {
        return -1;
    } else {
        if ((*(s32 *)(arg1 + 0x8) & 1) == 0) {
            return -1;
        } else {
            if (*(u8 *)(arg1 + 0xD) == 3) {
                return 0;
            } else {
                t0 = *(s32 *)(arg1 + 0x10);
                v0 = func_ov015_021469c0(t0);
                arg0 = v0;
                r4 = v0;
                if (r4 != 0) {
                    if (r4 == 1) {
                        *(u8 *)(arg1 + 0xD) = 1;
                        return arg0;
                    } else {
                        func_02089118(r6, (s32)arg1);
                        return r4;
                    }
                } else {
                    *(u8 *)(arg1 + 0xD) = 2;
                    return 0;
                }
            }
        }
    }
}

extern "C" int func_02089204(void *self, u8 *obj)
{
    return func_ov015_02146c8c(*(void **)(obj + 0x10));
}

extern "C" asm void func_02089214(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    mov r9, r1
    bl func_02089024
    mov r4, #8
    ldr r5, =func_020895d0
    str r9, [r10, #4]
    ldr r3, =func_020893b4
    ldr r1, =0x9a4
    mov r0, r9
    mov r2, r4
    str r5, [sp]
    bl __cxa_vec_new
    str r0, [r10, #8]
    ldr r0, =func_02089384
    ldr r3, =func_02089350
    str r0, [sp]
    mov r2, r4
    mov r0, r9
    mov r1, #0x114
    bl __cxa_vec_new
    mov r1, #0x1c
    str r0, [r10, #0x10]
    mov r5, #0
    mul r1, r9, r1
    ldr r0, =data_020c47b4
    mov r2, r5
    mov r3, #1
    bl _ZN8GameHeap5AllocEiii
    ldr r1, [r10, #8]
    str r0, [r10, #0xc]
    cmp r1, #0
    ldrne r1, [r10, #0x10]
    cmpne r1, #0
    cmpne r0, #0
    bne @L_020892b4
    mov r0, r10
    bl func_02089674
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020892b4:
    cmp r9, #0
    ble @L_02089328
    mov r11, #0x114
    mov r4, #0x1c
@L_020892c4:
    ldr r0, =0x9a4
    mul r6, r5, r0
    ldr r0, [r10, #8]
    add r0, r0, r6
    bl func_ov015_021463f8
    mul r7, r5, r11
    ldr r0, [r10, #0x10]
    ldr r1, [r0, r7]!
    ldr r1, [r1, #8]
    blx r1
    ldr r1, [r10, #0x10]
    ldr r0, [r10, #8]
    add r8, r1, r7
    add r7, r0, r6
    ldr r0, [r10, #0xc]
    mov r1, #0
    mla r6, r5, r4, r0
    mov r0, r6
    mov r2, #0x1c
    bl MI_CpuFill8
    str r7, [r6, #0x10]
    add r5, r5, #1
    str r8, [r6, #0x14]
    cmp r5, r9
    blt @L_020892c4
@L_02089328:
    mov r0, #0
    strb r0, [r10, #0x14]
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 func_02089350(u8 *arg0)
{
    *(s32 *)(arg0) = (s32)((u8 *)&data_ov015_02165848);
    ((s32 (*)(...))func_0209d678)((s32)(arg0 + 0xC), (s32)((u8 *)&data_ov015_02165848));
    ((VCall *)arg0)->f2();
    return (s32)arg0;
}

extern "C" s32 func_02089384(u8 *arg0)
{
    *(s32 *)(arg0) = (s32)((u8 *)&data_ov015_02165848);
    ((VCall *)arg0)->f8();
    func_0209d684((void *)(arg0 + 0xC));
    return (s32)arg0;
}

extern "C" asm void func_020893b4(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    ldr r5, =func_02089584
    ldr r3, =func_02089514
    mov r1, #4
    mov r2, #0x1bc
    mov r4, r0
    str r5, [sp]
    bl __cxa_vec_ctor
    ldr r5, =func_020894ac
    ldr r3, =func_02089480
    add r0, r4, #0x6f0
    mov r1, #1
    mov r2, #0x30
    str r5, [sp]
    bl __cxa_vec_ctor
    ldr r5, =func_020894f4
    ldr r3, =func_020894d4
    add r0, r4, #0x720
    mov r1, #2
    mov r2, #0x14
    str r5, [sp]
    bl __cxa_vec_ctor
    add r0, r4, #0x348
    add r6, r0, #0x400
    ldr r5, =data_ov015_02165848
    add r0, r6, #0xc
    str r5, [r4, #0x748]
    bl func_0209d678
    mov r0, r6
    ldr r1, [r0]
    ldr r1, [r1, #8]
    blx r1
    str r5, [r4, #0x860]
    add r5, r4, #0x860
    add r0, r5, #0xc
    bl func_0209d678
    mov r0, r5
    ldr r1, [r0]
    ldr r1, [r1, #8]
    blx r1
    mov r0, r4
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" void **func_02089480(void **obj)
{
    obj[0] = data_020af768;
    func_ov015_02164494((u8 *)obj + 0x14);
    func_ov015_02163f50(obj);
    return obj;
}

extern "C" void **func_020894ac(void **obj)
{
    obj[0] = data_020af768;
    func_ov015_02163f80(obj);
    func_ov015_021644b4((u8 *)obj + 0x14);
    return obj;
}

extern "C" void **func_020894d4(void **obj)
{
    obj[0] = data_020af758;
    func_ov015_021474d0(obj);
    return obj;
}

extern "C" void **func_020894f4(void **obj)
{
    obj[0] = data_020af758;
    func_ov015_021474e8(obj);
    return obj;
}

extern "C" s32 func_02089514(u8 *arg0)
{
    *(s32 *)(arg0) = (s32)data_ov015_0216581c;
    __cxa_vec_ctor((s32)(arg0 + 0x4C), 5, 0x14, (s32)func_020894d4, (s32)func_020894f4);
    __cxa_vec_ctor((s32)(arg0 + 0xB0), 5, 0x30, (s32)func_02089480, (s32)func_020894ac);
    func_ov015_02164494((void *)(arg0 + 0x1A0));
    return (s32)arg0;
}

extern "C" s32 func_02089584(s32 arg0)
{
    func_ov015_021644b4((void *)(arg0 + 0x1A0));
    __cxa_vec_cleanup((arg0 + 0xB0), 5, 0x30, (s32)func_020894ac);
    __cxa_vec_cleanup((arg0 + 0x4C), 5, 0x14, (s32)func_020894f4);
    return arg0;
}

extern "C" asm void func_020895d0(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    ldr r4, =data_ov015_02165848
    add r5, r6, #0x860
    mov r0, r5
    str r4, [r6, #0x860]
    ldr r1, [r0]
    ldr r1, [r1, #0x20]
    blx r1
    add r0, r5, #0xc
    bl func_0209d684
    add r0, r6, #0x348
    add r5, r0, #0x400
    mov r0, r5
    str r4, [r6, #0x748]
    ldr r1, [r0]
    ldr r1, [r1, #0x20]
    blx r1
    add r0, r5, #0xc
    bl func_0209d684
    add r0, r6, #0x720
    mov r1, #2
    mov r2, #0x14
    ldr r3, =func_020894f4
    bl __cxa_vec_cleanup
    add r0, r6, #0x6f0
    mov r1, #1
    mov r2, #0x30
    ldr r3, =func_020894ac
    bl __cxa_vec_cleanup
    mov r0, r6
    mov r1, #4
    mov r2, #0x1bc
    ldr r3, =func_02089584
    bl __cxa_vec_cleanup
    mov r0, r6
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02089674(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    bl func_02089c14
    ldr r1, [r4, #0xc]
    cmp r1, #0
    beq @L_02089694
    ldr r0, =data_020c47b4
    bl _ZN8GameHeap4FreeEPv
@L_02089694:
    ldr r0, [r4, #0x10]
    cmp r0, #0
    beq @L_020896ec
    ldr r0, [r4, #4]
    mov r6, #0
    cmp r0, #0
    ble @L_020896d8
    mov r5, #0x114
@L_020896b4:
    ldr r0, [r4, #0x10]
    mla r0, r6, r5, r0
    ldr r1, [r0]
    ldr r1, [r1, #0x20]
    blx r1
    ldr r0, [r4, #4]
    add r6, r6, #1
    cmp r6, r0
    blt @L_020896b4
@L_020896d8:
    ldr r0, [r4, #0x10]
    ldr r3, =func_02089384
    mov r1, #0x114
    mov r2, #8
    bl __cxa_vec_delete
@L_020896ec:
    ldr r0, [r4, #8]
    cmp r0, #0
    beq @L_0208973c
    ldr r0, [r4, #4]
    mov r6, #0
    cmp r0, #0
    ble @L_02089728
    ldr r5, =0x9a4
@L_0208970c:
    ldr r0, [r4, #8]
    mla r0, r6, r5, r0
    bl func_ov015_021464a8
    ldr r0, [r4, #4]
    add r6, r6, #1
    cmp r6, r0
    blt @L_0208970c
@L_02089728:
    ldr r0, [r4, #8]
    ldr r1, =0x9a4
    ldr r3, =func_020895d0
    mov r2, #8
    bl __cxa_vec_delete
@L_0208973c:
    mov r0, r4
    bl func_02089024
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" BOOL func_02089758(u8 *obj, u8 value)
{
    obj[0x14] = value;
    return TRUE;
}

extern "C" void func_02089764(void *obj)
{
    func_02089c14(obj);
    func_0208a540(obj);
}

extern "C" asm void func_0208977c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r9, r0
    ldr r0, [r9, #4]
    mov r8, r1
    cmp r0, #1
    blt @L_020897a0
    ldr r0, [r9, #0xc]
    cmp r0, #0
    bne @L_020897a8
@L_020897a0:
    mov r7, #0
    b @L_020897b0
@L_020897a8:
    add r0, r0, #0x1c
    sub r7, r0, #0x1c
@L_020897b0:
    cmp r7, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r0, =data_020c467c
    mov r6, #0
    ldr r0, [r0]
    mov r5, r6
    ldrb r0, [r0, #4]
    mov r4, #3
    cmp r0, #0
    movne r8, #0
    b @L_02089898
@L_020897dc:
    ldr r0, [r7, #0x10]
    cmp r0, #0
    ldrne r0, [r7, #0x14]
    cmpne r0, #0
    beq @L_02089890
    ldr r1, [r7, #8]
    tst r1, #1
    beq @L_02089890
    ldrb r0, [r7, #0xd]
    cmp r0, #1
    beq @L_0208981c
    cmp r0, #2
    beq @L_0208982c
    cmp r0, #3
    beq @L_02089878
    b @L_02089890
@L_0208981c:
    mov r0, r9
    mov r1, r7
    bl func_0208918c
    b @L_02089890
@L_0208982c:
    tst r1, #2
    bne @L_02089890
    mov r0, r9
    mov r1, r7
    bl func_02089204
    cmp r0, #0
    bne @L_02089858
    mov r0, r9
    mov r1, r7
    bl func_02089118
    b @L_02089890
@L_02089858:
    ldr r0, [r7]
    mov r1, r5
    bl func_ov015_02130b14
    mov r1, r0
    ldrb r2, [r7, #0xf]
    ldr r0, [r7, #0x10]
    bl func_ov015_02147214
    strb r4, [r7, #0xd]
@L_02089878:
    ldr r0, [r7, #8]
    tst r0, #0x100
    beq @L_02089890
    ldr r0, [r7, #0x10]
    mov r1, r8
    bl func_ov015_021464b4
@L_02089890:
    add r6, r6, #1
    add r7, r7, #0x1c
@L_02089898:
    ldr r0, [r9, #4]
    cmp r6, r0
    blt @L_020897dc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" s32 func_020898ac(u8 *arg0, s32 arg1)
{
    s32 local[1];
    s32 r4;
    s32 r5;
    u8 *r6;
    s32 r7;
    u8 *r8;
    s32 r9;
    s32 v0;
    s32 v3;
    r8 = arg0;
    arg0 = (u8 *)*(s32 *)(arg0 + 0x4);
    r7 = arg1;
    if (((s32)arg0 < 1 || (r6 = (u8 *)*(s32 *)(r8 + 0xC), (s32)r6 == 0))) {
        r6 = (u8 *)0;
    }
    if ((s32)r6 == 0)
        return (s32)arg0;
    r4 = 0;
    r5 = 0;
    if ((s32)arg0 > 0) {
        do {
            r9 = 0x101;
            arg0 = (u8 *)*(s32 *)(r6 + 0x10);
            if (((((((s32)arg0 != 0 && (*(s32 *)(r6 + 0x8) & r9) == r9) && (arg1 = *(u8 *)(r6 + 0xD), arg1 == 3)) && (r7 == 0 || (arg1 = *(u8 *)(r6 + 0xE), arg1 != 0))) && (r7 != 0 || (arg1 = *(u8 *)(r6 + 0xE), arg1 == 0))) && (v0 = func_ov015_02146514((s32)arg0, arg1), v0 != 0))) {
                r4 = (r4 + 1);
            }
            arg0 = (u8 *)*(s32 *)(r8 + 0x4);
            r5 = (r5 + 1);
            r6 = (u8 *)(r6 + 0x1C);
        } while (r5 < (s32)arg0);
    }
    if (r4 <= 0)
        return (s32)arg0;
    *(s32 *)(((u8 *)local)) = 3;
    func_0202b608(0x10, (s32)((u8 *)local), 1, 3);
    func_0202b608(0x15, 0, 0);
    v3 = func_020286e4();
    return v3;
}

extern "C" void func_02089998(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4, u8 arg5)
{
    s32 v0 = func_ov015_02130b14(arg1, 0, arg2, arg3);
    func_020899e4(arg0, v0, arg2, arg3, arg4, arg5);
}

extern "C" asm s32 func_020899e4(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0xc
    mov r10, #0
    movs r8, r1
    mov r4, r0
    str r10, [sp, #8]
    mov r7, r2
    mov r6, r3
    addeq sp, sp, #0xc
    subeq r0, r10, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    bl func_0208a4e8
    cmp r0, #0
    addne sp, sp, #0xc
    subne r0, r10, #1
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldrh r1, [r8, #0x42]
    add r9, sp, #8
    mov r0, r4
    mov r2, r7
    mov r3, r9
    bl func_020890ac
    mov r5, r0
    cmp r5, #0
    bgt @L_02089a68
    mov r0, r4
    mov r1, r9
    bl func_02089058
    mov r5, r0
    cmp r5, #0
    addle sp, sp, #0xc
    suble r0, r10, #1
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02089a68:
    ldrb r0, [sp, #0x34]
    add r1, r4, #0x18
    str r1, [sp]
    str r0, [sp, #4]
    ldr r0, [sp, #8]
    ldrb r3, [r4, #0x14]
    ldr r0, [r0, #0x10]
    mov r1, r8
    mov r2, r6
    bl func_ov015_02146f10
    cmp r0, #0
    bne @L_02089ab0
    ldr r1, [sp, #8]
    mov r0, r4
    bl func_02089118
    add sp, sp, #0xc
    mvn r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02089ab0:
    ldr r0, =data_020ac094
    ldr r2, [sp, #8]
    ldr r1, [r0, #0x14]
    ldr r0, [r2, #0x10]
    mov r2, r1
    mov r3, r1
    bl func_ov015_02146e44
    ldr r0, [sp, #8]
    mov r4, #1
    ldr r0, [r0, #0x10]
    mov r3, r4
    mov r1, #0x7000
    mov r2, #8
    bl func_ov015_02146e98
    ldrb r0, [sp, #0x30]
    ldrh r2, [r8, #0x42]
    ldr r1, [sp, #8]
    cmp r0, #0
    str r2, [r1]
    ldr r0, [sp, #8]
    ldrb r2, [sp, #0x34]
    str r7, [r0, #4]
    ldr r0, [sp, #8]
    str r4, [r0, #8]
    ldreq r1, [sp, #8]
    ldreq r0, [r1, #8]
    orreq r0, r0, #2
    streq r0, [r1, #8]
    ldr r0, [sp, #8]
    mov r1, #1
    strb r1, [r0, #0xd]
    ldr r0, [sp, #8]
    strb r6, [r0, #0xc]
    ldr r1, [sp, #8]
    mov r0, r5
    strb r2, [r1, #0xf]
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" s32 func_02089b4c(u8 *arg0, s32 arg1)
{
    s32 r3;
    u8 *r4;
    s32 v0;
    s32 t0;
    if (((arg1 <= 0 || arg1 > *(s32 *)(arg0 + 0x4)) || (r3 = *(s32 *)(arg0 + 0xC), r3 == 0))) {
        r4 = (u8 *)0;
    } else {
        r4 = (u8 *)((s32)((u8 (*)[0x1c])r3 + arg1 - 1));
    }
    if ((s32)r4 == 0) {
        return 0;
    } else {
        t0 = (*(s32 *)(r4 + 0x8) & -3);
        *(s32 *)(r4 + 0x8) = t0;
        if (*(u8 *)(r4 + 0xD) == 3) {
            return 1;
        } else {
            v0 = func_0208918c((s32)arg0, r4);
            if (v0 != 0) {
                return 0;
            } else {
                if (*(u8 *)(r4 + 0xD) == 2) {
                    arg0 = (u8 *)1;
                } else {
                    arg0 = (u8 *)0;
                }
                return (s32)arg0;
            }
        }
    }
}

extern "C" void func_02089bd4(u8 *arg0, s32 arg1)
{
    s32 r3;
    if (((arg1 <= 0 || arg1 > *(s32 *)(arg0 + 0x4)) || (r3 = *(s32 *)(arg0 + 0xC), r3 == 0))) {
        arg1 = 0;
    } else {
        arg1 = ((s32)((u8 (*)[0x1c])r3 + arg1 - 1));
    }
    func_02089118((s32)arg0, arg1);
    return;
}

extern "C" asm void func_02089c14(void *obj)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    mov r6, #0
    ldr r5, =data_020c464c
    ldr r4, =0x9a4
    mov r11, #0x114
    b @L_02089ca4
@L_02089c30:
    ldr r2, [r10, #0xc]
    mov r1, #0x1c
    mla r1, r6, r1, r2
    ldr r0, [r5]
    ldr r1, [r1, #0x18]
    bl func_ov015_02148114
    ldr r1, [r10, #0xc]
    mov r0, #0x1c
    mla r7, r6, r0, r1
    ldr r1, [r10, #8]
    ldr r2, [r10, #0x10]
    mov r0, #0x114
    mla r9, r6, r0, r2
    mla r8, r6, r4, r1
    mov r0, r7
    mov r1, #0
    mov r2, #0x1c
    bl MI_CpuFill8
    str r8, [r7, #0x10]
    str r9, [r7, #0x14]
    ldr r0, [r10, #0x10]
    mla r0, r6, r11, r0
    ldr r1, [r0]
    ldr r1, [r1, #0x20]
    blx r1
    ldr r0, [r10, #8]
    mla r0, r6, r4, r0
    bl func_ov015_021464a8
    add r6, r6, #1
@L_02089ca4:
    ldr r0, [r10, #4]
    cmp r6, r0
    blt @L_02089c30
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_02089cbc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x10c
    mov r10, r0
    mov r9, r2
    cmp r1, #0
    ble @L_02089cec
    ldr r0, [r10, #4]
    cmp r1, r0
    bgt @L_02089cec
    ldr r2, [r10, #0xc]
    cmp r2, #0
    bne @L_02089cf4
@L_02089cec:
    mov r8, #0
    b @L_02089d00
@L_02089cf4:
    mov r0, #0x1c
    mla r0, r1, r0, r2
    sub r8, r0, #0x1c
@L_02089d00:
    mov r0, r10
    bl func_0208a4e8
    cmp r0, #0
    addne sp, sp, #0x10c
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r8, #0
    beq @L_02089d2c
    ldr r0, [r8, #8]
    tst r0, #1
    bne @L_02089d38
@L_02089d2c:
    add sp, sp, #0x10c
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02089d38:
    mov r7, #0
    ldr r0, [r8]
    mov r1, r7
    bl func_ov015_02130b14
    add r5, sp, #0xc
    add r4, sp, #0x8c
    mov r1, r9
    mov r2, r5
    mov r3, r4
    mov r6, r0
    bl func_ov015_0213476c
    add r0, sp, #4
    str r0, [sp]
    ldrb r1, [r6, #0x54]
    ldr r0, [r10, #0x84]
    mov r2, r9
    add r3, sp, #8
    bl func_ov015_0213490c
    cmp r0, #0
    addeq sp, sp, #0x10c
    moveq r0, r7
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, [sp, #4]
    mov r1, r5
    str r0, [sp]
    ldr r0, [r8, #0x10]
    ldr r3, [sp, #8]
    mov r2, r4
    bl func_ov015_021468fc
    cmp r0, #0
    moveq r0, r7
    movne r0, #1
    strneb r0, [r8, #0xd]
    add sp, sp, #0x10c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" void func_02089dc4(u8 *arg0, s32 arg1)
{
    s32 r3;
    if (((arg1 <= 0 || arg1 > *(s32 *)(arg0 + 0x4)) || (r3 = *(s32 *)(arg0 + 0xC), r3 == 0))) {
        arg1 = 0;
    } else {
        arg1 = ((s32)((u8 (*)[0x1c])r3 + arg1 - 1));
    }
    func_0208918c((s32)arg0, (u8 *)arg1);
    return;
}

extern "C" s32 func_02089e04(u8 *arg0, u8 *arg1, s32 arg2)
{
    s32 r3;
    if ((((s32)arg1 <= 0 || (s32)arg1 > *(s32 *)(arg0 + 0x4)) || (r3 = *(s32 *)(arg0 + 0xC), r3 == 0))) {
        arg1 = (u8 *)0;
    } else {
        arg0 = (u8 *)(((s32)arg1 * 0x1C) + r3);
        arg1 = (u8 *)((s32)((u8 (*)[0x1c])r3 + (s32)arg1 - 1));
    }
    if ((s32)arg1 == 0)
        return (s32)arg0;
    if ((*(s32 *)(arg1 + 0x8) & 1) == 0)
        return *(s32 *)(arg1 + 0x8);
    arg0 = (u8 *)*(s32 *)(arg1 + 0x8);
    if (arg2 != 0) {
        *(s32 *)(arg1 + 0x8) = (s32)((s32)arg0 | 0x100);
        arg0 = (u8 *)((s32)arg0 | 0x100);
    } else {
        *(s32 *)(arg1 + 0x8) = (s32)((s32)arg0 & -0x101);
        arg0 = (u8 *)((s32)arg0 & -0x101);
    }
    return (s32)arg0;
}

extern "C" s32 func_02089e64(u8 *arg0, s32 arg1)
{
    s32 r2;
    s32 v0;
    s32 t0;
    if (((arg1 <= 0 || arg1 > *(s32 *)(arg0 + 0x4)) || (r2 = *(s32 *)(arg0 + 0xC), r2 == 0))) {
        arg0 = (u8 *)0;
    } else {
        arg0 = (u8 *)((s32)((u8 (*)[0x1c])r2 + arg1 - 1));
    }
    if ((s32)arg0 == 0) {
        return 0;
    } else {
        t0 = *(s32 *)(arg0 + 0x10);
        v0 = func_ov015_021462f8(t0);
        return v0;
    }
}

extern "C" s32 func_02089eb4(u8 *arg0, s32 arg1, s32 arg2)
{
    s32 r3;
    s32 v0;
    s32 t0;
    if (((arg1 <= 0 || arg1 > *(s32 *)(arg0 + 0x4)) || (r3 = *(s32 *)(arg0 + 0xC), r3 == 0))) {
        arg0 = (u8 *)0;
    } else {
        arg0 = (u8 *)((s32)((u8 (*)[0x1c])r3 + arg1 - 1));
    }
    if ((s32)arg0 == 0)
        return (s32)arg0;
    if (*(s32 *)(arg0 + 0x10) == 0)
        return *(s32 *)(arg0 + 0x10);
    t0 = *(s32 *)(arg0 + 0x10);
    v0 = func_ov015_02146ebc(t0, arg2);
    return v0;
}

extern "C" s32 func_02089f08(u8 *arg0, s32 arg1, s32 arg2)
{
    s32 r3;
    s32 v0;
    s32 t0;
    if (((arg1 <= 0 || arg1 > *(s32 *)(arg0 + 0x4)) || (r3 = *(s32 *)(arg0 + 0xC), r3 == 0))) {
        arg0 = (u8 *)0;
    } else {
        arg0 = (u8 *)((s32)((u8 (*)[0x1c])r3 + arg1 - 1));
    }
    if ((s32)arg0 == 0)
        return (s32)arg0;
    if (*(s32 *)(arg0 + 0x10) == 0)
        return *(s32 *)(arg0 + 0x10);
    t0 = *(s32 *)(arg0 + 0x10);
    v0 = func_ov015_02146ee0(t0, arg2);
    return v0;
}

extern "C" s32 func_02089f5c(u8 *arg0, s32 arg1, s32 arg2)
{
    s32 r3;
    s32 v0;
    s32 t0;
    if (((arg1 <= 0 || arg1 > *(s32 *)(arg0 + 0x4)) || (r3 = *(s32 *)(arg0 + 0xC), r3 == 0))) {
        arg0 = (u8 *)0;
    } else {
        arg0 = (u8 *)((s32)((u8 (*)[0x1c])r3 + arg1 - 1));
    }
    if ((s32)arg0 == 0)
        return (s32)arg0;
    if (*(s32 *)(arg0 + 0x10) == 0)
        return *(s32 *)(arg0 + 0x10);
    t0 = *(s32 *)(arg0 + 0x10);
    v0 = func_ov015_02146eec(t0, arg2);
    return v0;
}

extern "C" s32 func_02089fb0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    s32 r12;
    s32 v0;
    s32 t0;
    if (((arg1 <= 0 || arg1 > *(s32 *)(arg0 + 0x4)) || (r12 = *(s32 *)(arg0 + 0xC), r12 == 0))) {
        arg0 = (u8 *)0;
    } else {
        arg0 = (u8 *)((s32)((u8 (*)[0x1c])r12 + arg1 - 1));
    }
    if ((s32)arg0 == 0)
        return (s32)arg0;
    if (*(s32 *)(arg0 + 0x10) == 0)
        return *(s32 *)(arg0 + 0x10);
    t0 = *(s32 *)(arg0 + 0x10);
    v0 = func_ov015_02146e0c(t0, arg2, arg3, arg4);
    return v0;
}

extern "C" s32 func_0208a00c(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    s32 r12;
    s32 v0;
    s32 t0;
    if (((arg1 <= 0 || arg1 > *(s32 *)(arg0 + 0x4)) || (r12 = *(s32 *)(arg0 + 0xC), r12 == 0))) {
        arg0 = (u8 *)0;
    } else {
        arg0 = (u8 *)((s32)((u8 (*)[0x1c])r12 + arg1 - 1));
    }
    if ((s32)arg0 == 0)
        return (s32)arg0;
    if (*(s32 *)(arg0 + 0x10) == 0)
        return *(s32 *)(arg0 + 0x10);
    t0 = *(s32 *)(arg0 + 0x10);
    v0 = func_ov015_02146e1c(t0, arg2, arg3, arg4);
    return v0;
}

extern "C" s32 func_0208a068(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    s32 r12;
    s32 v0;
    s32 t0;
    if (((arg1 <= 0 || arg1 > *(s32 *)(arg0 + 0x4)) || (r12 = *(s32 *)(arg0 + 0xC), r12 == 0))) {
        arg0 = (u8 *)0;
    } else {
        arg0 = (u8 *)((s32)((u8 (*)[0x1c])r12 + arg1 - 1));
    }
    if ((s32)arg0 == 0)
        return (s32)arg0;
    if (*(s32 *)(arg0 + 0x10) == 0)
        return *(s32 *)(arg0 + 0x10);
    t0 = *(s32 *)(arg0 + 0x10);
    v0 = func_ov015_02146e44(t0, arg2, arg3, arg4);
    return v0;
}

extern "C" asm void func_0208a0c4(void)
{
    stmdb sp!, {r4, lr}
    sub sp, sp, #0x18
    add r12, sp, #0xc
    mov r3, #0
    mov r4, r0
    str r3, [r12]
    str r3, [r12, #4]
    str r3, [r12, #8]
    cmp r2, #0
    ble @L_0208a104
    ldr r0, [r1, #4]
    cmp r2, r0
    bgt @L_0208a104
    ldr r1, [r1, #0xc]
    cmp r1, #0
    bne @L_0208a10c
@L_0208a104:
    mov r0, #0
    b @L_0208a118
@L_0208a10c:
    mov r0, #0x1c
    mla r0, r2, r0, r1
    sub r0, r0, #0x1c
@L_0208a118:
    cmp r0, #0
    ldrne r1, [r0, #0x10]
    cmpne r1, #0
    beq @L_0208a148
    add r0, sp, #0
    bl func_ov015_02146e54
    ldr r2, [sp]
    ldr r1, [sp, #4]
    ldr r0, [sp, #8]
    str r2, [sp, #0xc]
    str r1, [sp, #0x10]
    str r0, [sp, #0x14]
@L_0208a148:
    add r0, sp, #0xc
    ldmia r0, {r0, r1, r2}
    stmia r4, {r0, r1, r2}
    add sp, sp, #0x18
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_0208a15c(void)
{
    stmdb sp!, {r4, lr}
    sub sp, sp, #0x18
    add r12, sp, #0xc
    mov r3, #0
    mov r4, r0
    str r3, [r12]
    str r3, [r12, #4]
    str r3, [r12, #8]
    cmp r2, #0
    ble @L_0208a19c
    ldr r0, [r1, #4]
    cmp r2, r0
    bgt @L_0208a19c
    ldr r1, [r1, #0xc]
    cmp r1, #0
    bne @L_0208a1a4
@L_0208a19c:
    mov r0, #0
    b @L_0208a1b0
@L_0208a1a4:
    mov r0, #0x1c
    mla r0, r2, r0, r1
    sub r0, r0, #0x1c
@L_0208a1b0:
    cmp r0, #0
    ldrne r1, [r0, #0x10]
    cmpne r1, #0
    beq @L_0208a1e0
    add r0, sp, #0
    bl func_ov015_02146e68
    ldr r2, [sp]
    ldr r1, [sp, #4]
    ldr r0, [sp, #8]
    str r2, [sp, #0xc]
    str r1, [sp, #0x10]
    str r0, [sp, #0x14]
@L_0208a1e0:
    add r0, sp, #0xc
    ldmia r0, {r0, r1, r2}
    stmia r4, {r0, r1, r2}
    add sp, sp, #0x18
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_0208a1f4(void)
{
    stmdb sp!, {r4, lr}
    sub sp, sp, #0x18
    add r12, sp, #0xc
    mov r3, #0
    mov r4, r0
    str r3, [r12]
    str r3, [r12, #4]
    str r3, [r12, #8]
    cmp r2, #0
    ble @L_0208a234
    ldr r0, [r1, #4]
    cmp r2, r0
    bgt @L_0208a234
    ldr r1, [r1, #0xc]
    cmp r1, #0
    bne @L_0208a23c
@L_0208a234:
    mov r0, #0
    b @L_0208a248
@L_0208a23c:
    mov r0, #0x1c
    mla r0, r2, r0, r1
    sub r0, r0, #0x1c
@L_0208a248:
    cmp r0, #0
    ldrne r1, [r0, #0x10]
    cmpne r1, #0
    beq @L_0208a278
    add r0, sp, #0
    bl func_ov015_02146e80
    ldr r2, [sp]
    ldr r1, [sp, #4]
    ldr r0, [sp, #8]
    str r2, [sp, #0xc]
    str r1, [sp, #0x10]
    str r0, [sp, #0x14]
@L_0208a278:
    add r0, sp, #0xc
    ldmia r0, {r0, r1, r2}
    stmia r4, {r0, r1, r2}
    add sp, sp, #0x18
    ldmia sp!, {r4, pc}
}

extern "C" s32 func_0208a28c(u8 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    u8 *r0;
    s32 r2;
    s32 r6;
    s32 v0;
    s32 v1;
    s32 t0;
    if (((arg1 <= 0 || arg1 > *(s32 *)(arg0 + 0x4)) || (r2 = *(s32 *)(arg0 + 0xC), r2 == 0))) {
        r0 = (u8 *)0;
    } else {
        r0 = (u8 *)((s32)((u8 (*)[0x1c])r2 + arg1 - 1));
    }
    if ((s32)r0 == 0) {
        r6 = 0;
    } else {
        t0 = *(s32 *)(r0 + 0x10);
        v0 = func_ov015_021462f8(t0);
        r6 = v0;
    }
    if (r6 == 0) {
        return 0;
    } else {
        v1 = func_ov015_02145f44(r6, arg2);
        if (v1 == 0) {
            return 0;
        } else {
            func_ov015_02146004(r6, arg3);
            return 1;
        }
    }
}

extern "C" s32 func_0208a31c(u8 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    u8 *r0;
    s32 r2;
    s32 r6;
    s32 v0;
    s32 v1;
    s32 t0;
    if (((arg1 <= 0 || arg1 > *(s32 *)(arg0 + 0x4)) || (r2 = *(s32 *)(arg0 + 0xC), r2 == 0))) {
        r0 = (u8 *)0;
    } else {
        r0 = (u8 *)((s32)((u8 (*)[0x1c])r2 + arg1 - 1));
    }
    if ((s32)r0 == 0) {
        r6 = 0;
    } else {
        t0 = *(s32 *)(r0 + 0x10);
        v0 = func_ov015_021462f8(t0);
        r6 = v0;
    }
    if (r6 == 0) {
        return 0;
    } else {
        v1 = func_ov015_02145f20(r6, arg2);
        if (v1 == 0) {
            return 0;
        } else {
            func_ov015_02146004(r6, arg3);
            return 1;
        }
    }
}

extern "C" s32 func_0208a3ac(u8 *arg0, s32 arg1)
{
    s32 r2;
    s32 v0;
    s32 v1;
    s32 t0;
    if (((arg1 <= 0 || arg1 > *(s32 *)(arg0 + 0x4)) || (r2 = *(s32 *)(arg0 + 0xC), r2 == 0))) {
        arg0 = (u8 *)0;
    } else {
        arg0 = (u8 *)((s32)((u8 (*)[0x1c])r2 + arg1 - 1));
    }
    if ((s32)arg0 == 0) {
        arg0 = (u8 *)0;
    } else {
        t0 = *(s32 *)(arg0 + 0x10);
        v0 = func_ov015_021462f8(t0);
        arg0 = (u8 *)v0;
    }
    if ((s32)arg0 == 0) {
        return 0;
    } else {
        v1 = func_ov015_02145ff0();
        return v1;
    }
}

extern "C" s32 func_0208a40c(u8 *arg0, s32 arg1)
{
    s32 r2;
    if (((arg1 <= 0 || arg1 > *(s32 *)(arg0 + 0x4)) || (r2 = *(s32 *)(arg0 + 0xC), r2 == 0))) {
        arg0 = (u8 *)0;
    } else {
        arg0 = (u8 *)((s32)((u8 (*)[0x1c])r2 + arg1 - 1));
    }
    if ((s32)arg0 == 0) {
        return 0;
    } else {
        if (*(u8 *)(arg0 + 0xD) == 3) {
            arg0 = (u8 *)1;
        } else {
            arg0 = (u8 *)0;
        }
        return (s32)arg0;
    }
}

extern "C" asm void func_0208a460(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x128
    ldr r6, =data_020af770
    add r5, sp, #0
    mov r4, r0
    mov r8, r5
    ldmia r6!, {r0, r1, r2, r3}
    stmia r5!, {r0, r1, r2, r3}
    ldmia r6!, {r0, r1, r2, r3}
    stmia r5!, {r0, r1, r2, r3}
    ldmia r6, {r0, r1}
    stmia r5, {r0, r1}
    ldr r5, =data_020af798
    add r9, r4, #0x84
    mov r10, #9
    mov r7, #0
    add r6, sp, #0x28
@L_0208a4a4:
    str r7, [r9]
    ldr r2, [r8, r10, lsl #2]
    mov r0, r6
    mov r1, r5
    bl sprintf
    mov r0, r6
    mov r1, r9
    bl func_ov015_02133f94
    sub r9, r9, #0xc
    subs r10, r10, #1
    bpl @L_0208a4a4
    mov r0, #1
    str r0, [r4, #0x90]
    add sp, sp, #0x128
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" s32 func_0208a4e8(u8 *arg0)
{
    u8 *r4;
    s32 v0;
    r4 = arg0;
    arg0 = (u8 *)*(s32 *)(arg0 + 0x90);
    if ((s32)arg0 != 0) {
        if ((s32)arg0 != 1) {
            if ((s32)arg0 == 2) {
                return 0;
            }
        } else {
            v0 = func_ov015_02134118((s32)(r4 + 0x18), 10);
            if (v0 == 0) {
                arg0 = (u8 *)1;
            } else {
                *(s32 *)(r4 + 0x90) = 2;
                arg0 = (u8 *)0;
            }
            return (s32)arg0;
        }
    }
    return -1;
}

extern "C" void func_0208a540(void *obj)
{
    u8 *entry;
    int i;

    func_ov015_02134198((u8 *)obj + 0x18, 10);
    entry = (u8 *)obj + 0x84;
    for (i = 9; i >= 0; i--) {
        func_ov015_02134208(entry);
        entry -= 0xC;
    }
}

extern "C" asm void func_0208a574(void)
{
    stmdb sp!, {r3}
    sub sp, sp, #0xc
    add r12, sp, #0
    mov r3, #0
    str r3, [r12]
    str r3, [r12, #4]
    str r3, [r12, #8]
    cmp r1, #0
    ble @L_0208a5b0
    ldr r3, [r0, #4]
    cmp r1, r3
    bgt @L_0208a5b0
    ldr r3, [r0, #0xc]
    cmp r3, #0
    bne @L_0208a5b8
@L_0208a5b0:
    mov r1, #0
    b @L_0208a5c4
@L_0208a5b8:
    mov r0, #0x1c
    mla r0, r1, r0, r3
    sub r1, r0, #0x1c
@L_0208a5c4:
    cmp r1, #0
    ldrne r0, [r1, #0x10]
    cmpne r0, #0
    strneb r2, [r1, #0xe]
    add sp, sp, #0xc
    ldmia sp!, {r3}
    bx lr
}

extern "C" s32 func_0208a5e0(s32 arg0)
{
    s32 r1;
    s32 r4;
    s32 r5;
    s32 r6;
    s32 r7;
    u8 *r8;
    u8 *r9;
    s32 v0;
    r6 = 0;
    r9 = (u8 *)arg0;
    do {
        r4 = 0;
        r5 = 0;
        arg0 = *(s32 *)(r9 + 0x4);
        if ((arg0 < 1 || (r8 = (u8 *)*(s32 *)(r9 + 0xC), (s32)r8 == 0))) {
            r8 = (u8 *)0;
        }
        r4 = 0;
        r5 = 0;
        if ((s32)r8 == 0) {
            return 1;
        }
        r7 = r4;
        if (arg0 > 0) {
            do {
                arg0 = *(s32 *)(r8 + 0x10);
                if (((arg0 != 0 && *(s32 *)(r8 + 0x14) != 0) && (r1 = *(s32 *)(r8 + 0x8), (r1 & 1) != 0))) {
                    if (r6 == 0) {
                        v0 = func_ov015_02147440(arg0, r1);
                        if (v0 == 0) {
                            return 0;
                        }
                    } else {
                        if (r6 == 1) {
                            func_ov015_02147424(arg0, r1);
                        }
                    }
                }
                r7 = (r7 + 1);
                r8 = (u8 *)(r8 + 0x1C);
            } while (r7 < *(s32 *)(r9 + 0x4));
        }
        r6 = (r6 + 1);
    } while (r6 < 2);
    return 1;
}

extern "C" void **func_0208a698(void **obj)
{
    obj[0] = data_020af768;
    func_ov015_02163f80(obj);
    func_ov015_021644b4((u8 *)obj + 0x14);
    operator delete(obj);
    return obj;
}

extern "C" void **func_0208a6c8(void **obj)
{
    obj[0] = data_020af758;
    func_ov015_021474e8(obj);
    operator delete(obj);
    return obj;
}

extern "C" void *func_0208a6f0(void *self, int a)
{
    void *result = data_020af7ec;

    if (a != 0) {
        result = NULL;
    }
    return result;
}

extern "C" void *func_0208a704(void *self, int a)
{
    void *result = data_020af808;

    if (a != 0) {
        result = NULL;
    }
    return result;
}

extern "C" void func_0208a718(u8 *obj)
{
    *(s32 *)(obj + 0x14) = 0;
    *(s32 *)(obj + 0x10) = 0;
    *(s32 *)(obj + 0x18) = 0;
    *(s32 *)(obj + 0xC) = 0;
}

extern "C" int func_0208a730(void *self, int a, int b)
{
    if (a < 0 || b < 0) {
        return -1;
    }
    return (u8)(b + 1);
}

extern "C" int func_0208a748(void *self, int a)
{
    u8 value;

    if (a < 0) {
        return -1;
    }
    value = a;
    if (value == 0) {
        return -1;
    }
    return value - 1;
}

extern "C" s32 func_0208a764(u8 *arg0, s32 arg1, u8 *arg2)
{
    s32 r0;
    u8 *r2;
    int v0;
    v0 = func_0208a748((void *)arg0, arg1);
    r0 = v0;
    if (((r0 < 0 || r0 >= *(s32 *)(arg0 + 0xC)) || (r2 = (u8 *)*(s32 *)(arg0 + 0x14), (s32)r2 == 0))) {
        r2 = (u8 *)0;
    } else {
        r2 = (u8 *)((r0 * 0x3C) + r2);
    }
    if (((s32)r2 == 0 || (*(u16 *)(r2 + 0x8) & 1) == 0)) {
        return -1;
    } else {
        if ((s32)arg2 != 0) {
            *(s32 *)(arg2) = (s32)r2;
        }
        return r0;
    }
}

extern "C" s32 func_0208a7cc(u8 *arg0, u8 *arg1)
{
    u8 *r3;
    s32 r12;
    r12 = *(s32 *)(arg0 + 0xC);
    if ((r12 <= 0 || (r3 = (u8 *)*(s32 *)(arg0 + 0x14), (s32)r3 == 0))) {
        r3 = (u8 *)0;
    }
    arg0 = (u8 *)0;
    if (r12 > 0) {
        do {
            if ((*(u16 *)(r3 + 0x8) & 1) == 0) {
                if ((s32)arg1 != 0) {
                    *(s32 *)(arg1) = (s32)r3;
                }
                return (s32)arg0;
            }
            arg0 = (u8 *)(arg0 + 1);
            r3 = (u8 *)(r3 + 0x3C);
        } while ((s32)arg0 < r12);
    }
    return -1;
}

extern "C" asm void func_0208a824(void)
{
    stmdb sp!, {r4, lr}
    movs r4, r1
    ldmeqia sp!, {r4, pc}
    ldr r0, [r4, #0x30]
    cmp r0, #0
    beq @L_0208a840
    bl func_ov015_02145144
@L_0208a840:
    ldr r0, [r4, #0x34]
    cmp r0, #0
    beq @L_0208a858
    ldr r1, [r0]
    ldr r1, [r1, #0x20]
    blx r1
@L_0208a858:
    ldr r1, [r4, #0x38]
    cmp r1, #0
    beq @L_0208a870
    ldr r0, =data_020c464c
    ldr r0, [r0]
    bl func_ov015_02148114
@L_0208a870:
    mov r3, #0
    sub r0, r3, #1
    ldr r2, [r4, #0x34]
    ldr r1, [r4, #0x30]
    str r0, [r4]
    str r0, [r4, #4]
    strh r3, [r4, #8]
    strb r3, [r4, #0xa]
    strb r3, [r4, #0xb]
    str r3, [r4, #0xc]
    str r3, [r4, #0x10]
    str r3, [r4, #0x14]
    str r3, [r4, #0x18]
    str r3, [r4, #0x1c]
    str r3, [r4, #0x20]
    str r3, [r4, #0x24]
    str r3, [r4, #0x28]
    str r3, [r4, #0x2c]
    str r1, [r4, #0x30]
    str r2, [r4, #0x34]
    str r3, [r4, #0x38]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_0208a8cc(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    movs r4, r1
    mov r5, r0
    mvneq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldr r1, [r4, #0x30]
    ldr r0, [r4, #0x34]
    cmp r1, #0
    cmpne r0, #0
    mvneq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldrh r0, [r4, #8]
    tst r0, #1
    mvneq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldrb r0, [r4, #0xb]
    cmp r0, #3
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldr r0, =data_020c464c
    ldr r1, [r4, #0x38]
    ldr r0, [r0]
    bl func_ov015_02148058
    movs r6, r0
    beq @L_0208a954
    cmp r6, #1
    moveq r1, #1
    streqb r1, [r4, #0xb]
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r0, r5
    mov r1, r4
    bl func_0208a824
    mov r0, r6
    ldmia sp!, {r4, r5, r6, pc}
@L_0208a954:
    mov r0, #2
    strb r0, [r4, #0xb]
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_0208a968(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x1c
    movs r6, r1
    mov r5, r0
    mov r4, #0
    addeq sp, sp, #0x1c
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldrb r2, [r6, #0xb]
    cmp r2, #3
    addeq sp, sp, #0x1c
    moveq r0, #1
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r2, #2
    addne sp, sp, #0x1c
    movne r0, r4
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    bl func_0208a8cc
    cmp r0, #0
    addne sp, sp, #0x1c
    movne r0, r4
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r8, =data_020a7288
    add r7, sp, #0
    ldmia r8!, {r0, r1, r2, r3}
    stmia r7!, {r0, r1, r2, r3}
    ldmia r8, {r0, r1, r2}
    stmia r7, {r0, r1, r2}
    ldr r0, [r6, #0x30]
    bl func_ov015_021458f4
    cmp r0, #0
    bne @L_0208aa94
    ldr r7, =data_020c464c
    ldr r1, [r6, #0x38]
    ldr r0, [r7]
    mov r2, #1
    mov r3, #4
    bl func_ov015_02148488
    movs r8, r0
    bne @L_0208aa20
    mov r0, r5
    mov r1, r6
    bl func_0208a824
    add sp, sp, #0x1c
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_0208aa20:
    ldr r0, [r6, #0x30]
    mov r1, r8
    bl func_ov015_02144df8
    ldr r0, [r7]
    mov r1, r8
    bl func_ov015_02148114
    ldr r0, [r6, #0x30]
    mov r1, r4
    mov r2, r4
    bl func_ov015_02144f58
    cmp r0, #0
    bne @L_0208aa68
    mov r0, r5
    mov r1, r6
    bl func_0208a824
    add sp, sp, #0x1c
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_0208aa68:
    ldr r0, [r6, #0x24]
    cmp r0, #0
    ldreq r0, [r6, #0x28]
    cmpeq r0, #0
    ldreq r0, [r6, #0x2c]
    cmpeq r0, #0
    ldreq r0, =data_020ac094
    ldreq r0, [r0, #0x18]
    streq r0, [r6, #0x24]
    streq r0, [r6, #0x28]
    streq r0, [r6, #0x2c]
@L_0208aa94:
    ldr r7, =data_020c464c
    mov r2, #2
    ldr r0, [r7]
    ldr r1, [r6, #0x38]
    mov r3, r2
    bl func_ov015_02148488
    movs r8, r0
    bne @L_0208aacc
    mov r0, r5
    mov r1, r6
    bl func_0208a824
    add sp, sp, #0x1c
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_0208aacc:
    ldr r0, [r6, #0x34]
    mov r1, r8
    ldr r2, [r0]
    ldr r2, [r2, #0xc]
    blx r2
    ldr r0, [r7]
    mov r1, r8
    bl func_ov015_02148114
    mov r5, #0
    mov r10, #1
    add r9, sp, #0
    b @L_0208ab98
@L_0208aafc:
    ldr r0, [r6, #0x30]
    mov r1, r5
    bl func_ov015_021459e0
    ldr r0, [r0, #4]
    cmp r0, #0
    moveq r0, r10
    movne r0, r4
    cmp r0, #0
    beq @L_0208ab94
    add r2, r5, #3
    ldr r0, [r7]
    ldr r1, [r6, #0x38]
    ldr r3, [r9, r2, lsl #2]
    bl func_ov015_02148488
    movs r8, r0
    beq @L_0208ab94
    ldr r0, [r6, #0x30]
    mov r1, r8
    mov r2, r5
    bl func_ov015_021457b4
    ldr r0, [r7]
    mov r1, r8
    bl func_ov015_02148114
    ldr r0, [r6, #0x30]
    mov r1, r5
    mov r2, r4
    bl func_ov015_021457fc
    cmp r0, #0
    bne @L_0208ab88
    ldr r0, [r6, #0x30]
    mov r1, r5
    bl func_ov015_02145864
    add sp, sp, #0x1c
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_0208ab88:
    ldr r0, [r6, #0x30]
    mov r1, r5
    bl func_ov015_0214587c
@L_0208ab94:
    add r5, r5, #1
@L_0208ab98:
    cmp r5, #5
    blt @L_0208aafc
    mov r0, #1
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_0208abb8(void)
{
    stmdb sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x6c
    movs r4, r1
    ldrne r0, [r4, #0x30]
    cmpne r0, #0
    addeq sp, sp, #0x6c
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, pc}
    ldrb r1, [r4, #0xa]
    cmp r1, #4
    addls pc, pc, r1, lsl #2
    b @L_0208ad48
    b @L_0208ad48
    b @L_0208abfc
    b @L_0208ac20
    b @L_0208acb8
    b @L_0208ad24
@L_0208abfc:
    add r1, r4, #0xc
@L_0208ac00:
    bl func_ov015_02145438
    ldr r0, [r4, #0x30]
    add r1, r4, #0x18
@L_0208ac0c:
    bl func_ov015_02145454
    ldr r0, [r4, #0x30]
    add r1, r4, #0x24
    bl func_ov015_02145490
    b @L_0208ad54
@L_0208ac20:
    ldr r5, =data_020c4660
    mov r7, #1
    ldr r1, [r5]
    add r0, sp, #0x24
    mov r2, r7
    bl func_0208cd7c
    ldr r12, [sp, #0x24]
    ldr r6, [sp, #0x28]
    ldr r3, [sp, #0x2c]
    ldr r1, [r5]
    add r0, sp, #0x18
    mov r2, r7
    str r12, [sp, #0x60]
    str r6, [sp, #0x64]
    str r3, [sp, #0x68]
    bl func_0208cdec
    add r6, sp, #0x60
    ldr r12, [sp, #0x18]
    ldr r5, [sp, #0x1c]
    ldr r3, [sp, #0x20]
    mov r0, r6
    mov r2, r6
    add r1, r4, #0xc
    str r12, [sp, #0x54]
    str r5, [sp, #0x58]
    str r3, [sp, #0x5c]
    bl func_02001f08
    add r5, sp, #0x54
    add r1, r4, #0x18
    mov r0, r5
    mov r2, r5
    bl func_02001f08
    ldr r0, [r4, #0x30]
    mov r1, r6
    bl func_ov015_02145438
    ldr r0, [r4, #0x30]
    mov r1, r5
@L_0208acb4:
    b @L_0208ac0c
@L_0208acb8:
    ldr r5, =data_020c4650
    ldr r2, [r4, #4]
    ldr r1, [r5]
    add r0, sp, #0xc
    bl func_0208a0c4
    ldr r1, [sp, #0x10]
    ldr r0, [sp, #0x14]
    ldr r2, [sp, #0xc]
    str r1, [sp, #0x4c]
    str r0, [sp, #0x50]
    str r2, [sp, #0x48]
    ldr r1, [r5]
    ldr r2, [r4, #4]
    add r0, sp, #0
    bl func_0208a15c
    ldr r2, [sp]
    ldr r1, [sp, #4]
    ldr r0, [sp, #8]
    str r1, [sp, #0x40]
    str r2, [sp, #0x3c]
    str r0, [sp, #0x44]
    ldr r0, [r4, #0x30]
    add r1, sp, #0x48
    bl func_ov015_02145438
    ldr r0, [r4, #0x30]
    add r1, sp, #0x3c
    b @L_0208acb4
@L_0208ad24:
    ldr r1, [r4, #0x10]
    ldr r5, [r4, #0x14]
    ldr r2, [r4, #0xc]
    rsb r3, r1, #0
    add r1, sp, #0x30
    str r2, [sp, #0x30]
    str r3, [sp, #0x34]
    str r5, [sp, #0x38]
    b @L_0208ac00
@L_0208ad48:
    add sp, sp, #0x6c
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, pc}
@L_0208ad54:
    mov r0, #1
    add sp, sp, #0x6c
    ldmia sp!, {r4, r5, r6, r7, pc}
}

extern "C" asm void func_0208ad68(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    mov r9, r1
    bl func_0208a718
    mov r5, #1
    mov r0, r10
    mov r1, r5
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
    mov r1, #0x3c
    str r0, [r10, #0x18]
    mov r6, #0
    mul r1, r9, r1
    ldr r0, =data_020c47b4
    mov r3, r5
    mov r2, r6
    bl _ZN8GameHeap5AllocEiii
    ldr r1, [r10, #0x10]
    str r0, [r10, #0x14]
    cmp r1, #0
    ldrne r1, [r10, #0x18]
    cmpne r1, #0
    cmpne r0, #0
    bne @L_0208ae18
    mov r0, r10
    bl func_0208aef0
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0208ae18:
    cmp r9, #0
    ble @L_0208aec4
    mvn r5, #0
    mov r4, r6
    mov r11, #0x3c
@L_0208ae2c:
    mov r0, #0x1bc
    mul r8, r6, r0
    ldr r0, [r10, #0x10]
    add r0, r0, r8
    bl func_ov015_02144cf8
    mov r0, #0x114
    mul r7, r6, r0
    ldr r0, [r10, #0x18]
    ldr r1, [r0, r7]!
    ldr r1, [r1, #8]
    blx r1
    mul r0, r6, r11
    ldr r2, [r10, #0x18]
    ldr r1, [r10, #0x10]
    add r3, r2, r7
    add r2, r1, r8
    ldr r1, [r10, #0x14]
    add r6, r6, #1
    str r5, [r1, r0]
    add r0, r1, r0
    str r5, [r0, #4]
    strh r4, [r0, #8]
    strb r4, [r0, #0xa]
    strb r4, [r0, #0xb]
    str r4, [r0, #0xc]
    str r4, [r0, #0x10]
    str r4, [r0, #0x14]
    str r4, [r0, #0x18]
    str r4, [r0, #0x1c]
    str r4, [r0, #0x20]
    str r4, [r0, #0x24]
    str r4, [r0, #0x28]
    str r4, [r0, #0x2c]
    str r2, [r0, #0x30]
    str r3, [r0, #0x34]
    str r4, [r0, #0x38]
    cmp r6, r9
    blt @L_0208ae2c
@L_0208aec4:
    mov r1, #0
    mov r0, r10
    mov r2, r1
    bl func_02088ad0
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_0208aef0(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    mvn r1, #0
    bl func_02088bec
    mov r0, r4
    bl func_02088aa0
    mov r0, r4
    bl func_0208b508
    ldr r1, [r4, #0x14]
    cmp r1, #0
    beq @L_0208af24
    ldr r0, =data_020c47b4
    bl _ZN8GameHeap4FreeEPv
@L_0208af24:
    ldr r0, [r4, #0x18]
    cmp r0, #0
    beq @L_0208af7c
    ldr r0, [r4, #0xc]
    mov r6, #0
    cmp r0, #0
    ble @L_0208af68
    mov r5, #0x114
@L_0208af44:
    ldr r0, [r4, #0x18]
    mla r0, r6, r5, r0
    ldr r1, [r0]
    ldr r1, [r1, #0x20]
    blx r1
    ldr r0, [r4, #0xc]
    add r6, r6, #1
    cmp r6, r0
    blt @L_0208af44
@L_0208af68:
    ldr r0, [r4, #0x18]
    ldr r3, =func_02089384
    mov r1, #0x114
    mov r2, #8
    bl __cxa_vec_delete
@L_0208af7c:
    ldr r0, [r4, #0x10]
    cmp r0, #0
    beq @L_0208afcc
    ldr r0, [r4, #0xc]
    mov r6, #0
    cmp r0, #0
    ble @L_0208afb8
    mov r5, #0x1bc
@L_0208af9c:
    ldr r0, [r4, #0x10]
    mla r0, r6, r5, r0
    bl func_ov015_02144d9c
    ldr r0, [r4, #0xc]
    add r6, r6, #1
    cmp r6, r0
    blt @L_0208af9c
@L_0208afb8:
    ldr r0, [r4, #0x10]
    ldr r3, =func_02089584
    mov r1, #0x1bc
    mov r2, #8
    bl __cxa_vec_delete
@L_0208afcc:
    mov r0, r4
    bl func_0208a718
    ldmia sp!, {r4, r5, r6, pc}
}
