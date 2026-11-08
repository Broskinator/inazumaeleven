#include "game/Unk_02098f14.hpp"
#include "nitro/fx.h"
#include "nitro/os.h"
#include "nitro/fx.h"
#include "nitro/fx.h"
struct V02099a2c { s32 x, y, z; };
struct S02099b64 { s32 a, b, c, d, e; };
struct V3_02099a94 { s32 x, y, z; };

extern "C" void func_0209a9f0(void);
extern "C" u16 func_0200226c(fx32 y, fx32 x);
extern "C" u8 *NNS_G3dGetTex(void *obj);
extern "C" void OS_LockMutex(OSMutex *mutex);
extern "C" void OS_UnlockMutex(OSMutex *mutex);

extern "C" void func_02098f14(void);
extern "C" s32 func_02098fac(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4);
extern "C" s32 func_02099058(s32 arg0, s32 arg1);
extern "C" s32 func_02099088(s32 arg0, s32 arg1);
extern "C" s32 func_020990b4(s32 arg0, s32 arg1);
extern "C" s32 func_020990e8(s32 arg0, u8 *arg1, u8 *arg2);
extern "C" s32 func_02099140(u8 *arg0);
extern "C" void func_020991ac(u8 *arg0);
extern "C" void func_020991d8(u8 *arg0);
extern "C" void func_0209920c(u8 *arg0);
extern "C" void func_02099238(u8 *arg0);
extern "C" s32 func_0209926c(s32 arg0, u8 *arg1);
extern "C" s32 func_020992ec(s32 arg0, u8 *arg1);
extern "C" void func_02099370(u8 *obj);
extern "C" s32 func_02099390(...);
extern "C" s32 func_020995c4(s32 arg0, u8 *arg1);
extern "C" s32 func_02099618(s32 arg0, u8 *arg1);
extern "C" void func_02099664(void);
extern "C" void func_020996ec(void);
extern "C" int func_02099764(void *a);
extern "C" fx32 func_020997a4(fx32 *arg0, fx32 *arg1);
extern "C" BOOL func_020997e4(void *a);
extern "C" void func_020997fc(void);
extern "C" void func_020998f4(fx32 *in, fx32 *out);
extern "C" fx32 func_02099910(fx32 value);
extern "C" void func_02099924(void);
extern "C" void func_020999d8(fx32 *a, fx32 *b, u16 *direction);
extern "C" void func_020999f8(s32 arg0, fx32 *arg1, fx32 *arg2);
extern "C" s32 func_02099a2c(s32 arg0, s32 arg1, s32 arg2);
extern "C" void func_02099a94(V3_02099a94 *arg0, V3_02099a94 *arg1);
extern "C" int func_02099adc(int x0, int y0, int x1, int y1);
extern "C" void func_02099af4(s32 *obj);
extern "C" void func_02099b08(void);
extern "C" s32 func_02099b0c(u8 *arg0);
extern "C" void func_02099b64(u8 *arg0, u8 arg1, S02099b64 arg2);
extern "C" void func_02099bbc(s8 *obj, s8 flags);
extern "C" void func_02099bcc(s8 *obj, int flags);
extern "C" void func_02099be4(void);
extern "C" void func_02099c48(u8 *arg0, u8 *arg1);
extern "C" int func_02099c94(u8 *obj, int a);
extern "C" s32 func_02099cc8(u8 *arg0, s32 arg1);
extern "C" u8 *func_02099cfc(u8 *obj, int a);
extern "C" s32 func_02099d18(s32 arg0, u8 *arg1, u8 *arg2, u8 *arg3, u8 *arg4);
extern "C" int func_02099d90(int i);
extern "C" void func_02099da0(void);
extern "C" void func_02099e78(void);
extern "C" void func_02099f50(void);
extern "C" u8 *func_02099fcc(u8 *obj);
extern "C" u8 *func_02099fe0(void *obj);
extern "C" s32 func_02099ffc(s32 arg0);
extern "C" void func_0209a024(void);
extern "C" void func_0209a120(void);
extern "C" void func_0209a22c(void);
extern "C" s32 func_0209a2ac(s32 arg0);
extern "C" s32 func_0209a300(s32 arg0, s32 arg1, u8 *arg2, u8 *arg3);

extern "C" char data_020a4478[];
extern "C" char data_020abaa0[];
extern "C" char data_020abaa4[];
extern "C" char data_020abaa8[];
extern "C" char data_020abaac[];
extern "C" char data_020afde4[];
extern "C" char data_020c46e4[];
extern "C" s32 GX_BeginLoadTex(...);
extern "C" s32 GX_BeginLoadTexPltt(...);
extern "C" void MTX_Identity43_(void);
extern "C" void MTX_RotX43_(void);
extern "C" void MTX_RotY43_(void);
extern "C" void MTX_RotZ43_(void);
extern "C" void NNS_G3dBindMdlSet(void);
extern "C" s32 NNS_GfdFreeLnkPlttVram(...);
extern "C" void VEC_DotProduct(void);
extern "C" s32 _ZN10ConfigFile6GetIntEPKc(...);
extern "C" s32 _ZN8GameHeap4FreeEPv(...);
extern "C" void func_020011fc(void);
extern "C" void func_02001d60(void);
extern "C" void func_02001f08(void);
extern "C" void func_02001f38(void);
extern "C" void func_02001fa4(void);
extern "C" void func_02002084(void);
extern "C" void func_020021f0(void);
extern "C" s32 func_02003eec(...);
extern "C" s32 func_02004038(...);
extern "C" s32 func_020040b0(...);
extern "C" s32 func_02004120(...);
extern "C" s32 func_02004fd8(...);
extern "C" s32 func_02008450(...);
extern "C" void func_02018328(void);
extern "C" s32 _ffltu(...);
extern "C" s32 _ffix(...);
extern "C" s32 _fadd(...);
extern "C" s32 _fsub(...);
extern "C" void func_02027ccc(void);
extern "C" void func_02027ce0(void);
extern "C" void func_02027cf4(void);
extern "C" s32 func_02027e10(...);
extern "C" void func_02027e24(void);
extern "C" s32 func_02029094(...);
extern "C" s32 func_0202b798(...);
extern "C" s32 func_0202b9d8(...);
extern "C" void func_0202bfb8(void);
extern "C" void func_0202c11c(void);
extern "C" s32 func_0203020c(...);
extern "C" s32 func_02098a8c(...);
extern "C" s32 func_02098ab8(...);
extern "C" s32 func_02098cdc(...);
extern "C" s32 func_02098d30(...);
extern "C" s32 func_0209a798(...);
extern "C" s32 func_0209a97c(...);
extern "C" void strlen(void);
extern "C" void strncpy(void);
extern "C" void strrchr(void);

extern "C" asm void func_02098f14(void)
{
    stmdb sp!, {r4, lr}
    sub sp, sp, #8
    ldr r12, [sp, #0x10]
    ldr r4, [r1]
    add r12, r12, #3
    bic r12, r12, #3
    cmp r4, r12
    movlt r12, r4
    ldrb r4, [r1, #8]
    cmp r4, #1
    beq @L_02098f4c
    cmp r4, #2
    beq @L_02098f78
    b @L_02098fa0
@L_02098f4c:
    ldr r1, [r1, #4]
    ldr lr, [sp, #0x14]
    mov r1, r1, lsl #0x10
    add r1, r2, r1, lsr #13
    ldr r4, [sp, #0x18]
    str lr, [sp]
    mov r2, r12
    str r4, [sp, #4]
    bl func_02098a8c
    add sp, sp, #8
    ldmia sp!, {r4, pc}
@L_02098f78:
    ldr r1, [r1, #4]
    ldr r4, [sp, #0x14]
    mov r1, r1, lsl #0x10
    ldr lr, [sp, #0x18]
    add r1, r2, r1, lsr #13
    mov r2, r12
    stmia sp, {r4, lr}
    bl func_02098ab8
    add sp, sp, #8
    ldmia sp!, {r4, pc}
@L_02098fa0:
    mov r0, #0
    add sp, sp, #8
    ldmia sp!, {r4, pc}
}

extern "C" s32 func_02098fac(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4)
{
    s32 r0;
    s32 r4;
    s32 r12;
    s32 t1;
    s32 t3;
    r0 = *(u8 *)(arg1 + 0x8);
    r12 = *(s32 *)(arg1);
    r4 = ((arg4 + 3) & -4);
    if (r12 < r4) {
        r4 = r12;
    }
    switch (r0) {
        case 1:
            t1 = (arg2 + ((u32)(*(s32 *)(arg1 + 0x4) << 0x10) >> 0xD));
            func_020991ac((u8 *)arg0);
            func_02003eec(arg3, t1, r4);
            func_020991d8((u8 *)arg0);
            break;
        case 2:
            t3 = (arg2 + ((u32)(*(s32 *)(arg1 + 0x4) << 0x10) >> 0xD));
            func_0209920c((u8 *)arg0);
            func_020040b0(arg3, t3, r4);
            func_02099238((u8 *)arg0);
            break;
        default:
            return 0;
    }
    return 1;
}

extern "C" s32 func_02099058(s32 arg0, s32 arg1)
{
    OS_LockMutex((OSMutex *)(arg0 + 8));
    s32 v1 = func_0202b798(arg1);
    OS_UnlockMutex((OSMutex *)(arg0 + 8));
    return v1;
}

extern "C" s32 func_02099088(s32 arg0, s32 arg1)
{
    OS_LockMutex((OSMutex *)(arg0 + 8));
    func_0202b9d8(arg1);
    OS_UnlockMutex((OSMutex *)(arg0 + 8));
    return 1;
}

extern "C" s32 func_020990b4(s32 arg0, s32 arg1)
{
    OS_LockMutex((OSMutex *)(arg0 + 8));
    s32 v1 = func_02099390(arg0, arg1);
    OS_UnlockMutex((OSMutex *)(arg0 + 8));
    return v1;
}

extern "C" s32 func_020990e8(s32 arg0, u8 *arg1, u8 *arg2)
{
    s32 r3;
    r3 = *(s32 *)(arg1 + 0x4);
    if (r3 == 0) {
        return 0;
    } else {
        arg0 = *(u8 *)(arg1 + 0x8);
        switch (arg0) {
            case 1:
                *(s32 *)(arg2) = ((u32)(r3 << 0x10) >> 0xD);
                return 1;
            case 2:
                *(s32 *)(arg2) = ((u32)(r3 << 0x10) >> 0xD);
                return 1;
            default:
                return 0;
        }
    }
}

static inline s32 vcount02099140(void)
{
    return *(volatile u16 *)0x4000006;
}
extern "C" s32 func_02099140(u8 *arg0)
{
    s32 r = func_02004fd8(arg0);
    if (r == 0)
        return r;
    if (vcount02099140() <= 0xC1)
        func_02008450(0x188);
    if ((r = *(volatile s32 *)0x4000600) & 0x8000000)
        return r;
    if ((r = *(s32 *)(arg0 + 0x38)) == 0)
        return r;
    *(s32 *)(arg0 + 0x38) = 0;
    if ((r = func_0209a97c()) == 0)
        return r;
    return func_0209a798();
}

extern "C" void func_020991ac(u8 *arg0)
{
    OS_LockMutex((OSMutex *)(arg0 + 8));
    s32 t0 = (*(s32 *)(arg0 + 0x30) + 1);
    s32 t1 = *(s32 *)(arg0 + 0x30);
    *(s32 *)(arg0 + 0x30) = t0;
    if (t1 > 0)
        return;
    GX_BeginLoadTex(t0, t1);
}

extern "C" void func_020991d8(u8 *arg0)
{
    u8 *r4;
    r4 = arg0;
    arg0 = (u8 *)*(s32 *)(arg0 + 0x30);
    if ((s32)arg0 > 0) {
        *(s32 *)(r4 + 0x30) = (s32)(arg0 - 1);
        if ((s32)(arg0 - 1) <= 0) {
            func_02004038();
        }
    }
    OS_UnlockMutex((OSMutex *)(r4 + 8));
    return;
}

extern "C" void func_0209920c(u8 *arg0)
{
    OS_LockMutex((OSMutex *)(arg0 + 8));
    s32 t0 = (*(s32 *)(arg0 + 0x34) + 1);
    s32 t1 = *(s32 *)(arg0 + 0x34);
    *(s32 *)(arg0 + 0x34) = t0;
    if (t1 > 0)
        return;
    GX_BeginLoadTexPltt(t0, t1);
}

extern "C" void func_02099238(u8 *arg0)
{
    u8 *r4;
    r4 = arg0;
    arg0 = (u8 *)*(s32 *)(arg0 + 0x34);
    if ((s32)arg0 > 0) {
        *(s32 *)(r4 + 0x34) = (s32)(arg0 - 1);
        if ((s32)(arg0 - 1) <= 0) {
            func_02004120();
        }
    }
    OS_UnlockMutex((OSMutex *)(r4 + 8));
    return;
}

extern "C" s32 func_0209926c(s32 arg0, u8 *arg1)
{
    u8 *r4;
    s32 r5;
    r4 = arg1;
    arg1 = (u8 *)*(u8 *)(arg1 + 0x9);
    r5 = arg0;
    if ((s32)arg1 != 0) {
        return 1;
    } else {
        ((s32 (*)(...))OS_LockMutex)((r5 + 8), (s32)arg1);
        arg0 = *(s32 *)(r4 + 0x4);
        if (arg0 != 0) {
            arg1 = (u8 *)*(u8 *)(r4 + 0x8);
            switch ((s32)arg1) {
                case 1:
                    func_0203020c(arg0, (s32)arg1);
                    break;
                case 2:
                    NNS_GfdFreeLnkPlttVram(arg0, (s32)arg1);
                    break;
                default:
                    return 0;
            }
            *(s32 *)(r4 + 0x4) = 0;
            *(u8 *)(r4 + 0x9) = 1;
        }
        OS_UnlockMutex((OSMutex *)(r5 + 8));
        return 1;
    }
}

extern "C" s32 func_020992ec(s32 arg0, u8 *arg1)
{
    u8 *r4;
    s32 r5;
    s32 t0;
    s32 t1;
    r4 = arg1;
    arg1 = (u8 *)*(u8 *)(arg1 + 0x9);
    r5 = arg0;
    if ((s32)arg1 == 0) {
        return 0;
    } else {
        ((s32 (*)(...))OS_LockMutex)((r5 + 8), (s32)arg1);
        arg0 = *(u8 *)(r4 + 0x8);
        switch (arg0) {
            case 1:
                t0 = *(s32 *)(r4);
                func_02098cdc(r5, (s32)r4, t0);
                break;
            case 2:
                t1 = *(s32 *)(r4);
                func_02098d30(r5, (s32)r4, t1);
                break;
            default:
                return 0;
        }
        *(u8 *)(r4 + 0x9) = 0;
        ((s32 (*)(...))OS_UnlockMutex)((r5 + 8), 0);
        return 1;
    }
}

extern "C" void func_02099370(u8 *obj)
{
    OS_LockMutex((OSMutex *)(obj + 8));
    func_0209a9f0();
    OS_UnlockMutex((OSMutex *)(obj + 8));
}

extern "C" asm s32 func_02099390(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r4, r1
    ldr r2, [r4]
    ldr r1, =0x30415642
    mov r11, r0
    cmp r2, r1
    bhi @L_020993e0
    bhs @L_02099598
    sub r0, r1, #0x900
    cmp r2, r0
    bhi @L_020993d0
    bhs @L_02099598
    sub r0, r1, #0x1300
    cmp r2, r0
    beq @L_02099598
    b @L_020995a0
@L_020993d0:
    sub r0, r1, #0x200
    cmp r2, r0
    beq @L_02099598
    b @L_020995a0
@L_020993e0:
    ldr r0, =0x30505442
    cmp r2, r0
    bhi @L_02099400
    bhs @L_02099598
    ldr r0, =0x30444d42
    cmp r2, r0
    beq @L_0209940c
    b @L_020995a0
@L_02099400:
    add r0, r0, #0x80000
    cmp r2, r0
    bne @L_020995a0
@L_0209940c:
    mov r0, #1
    str r0, [sp]
    ldr r9, [sp]
    mov r0, r4
    mov r10, r9
    bl NNS_G3dGetTex
    movs r6, r0
    beq @L_02099568
    bl func_02027ccc
    mov r5, r0
    mov r0, r6
    bl func_02027ce0
    mov r7, r0
    mov r0, r6
    bl func_02027e10
    mov r8, r0
    cmp r5, #0
    beq @L_0209947c
    ldr r0, =data_020abaa0
    mov r1, #0
    ldr r3, [r0]
    mov r0, r5
    mov r2, r1
    blx r3
    movs r5, r0
    moveq r0, #0
    streq r0, [sp]
    b @L_02099480
@L_0209947c:
    mov r5, #0
@L_02099480:
    cmp r7, #0
    beq @L_020994ac
    ldr r0, =data_020abaa0
    mov r2, #0
    ldr r3, [r0]
    mov r0, r7
    mov r1, #1
    blx r3
    movs r7, r0
    moveq r9, #0
    b @L_020994b0
@L_020994ac:
    mov r7, #0
@L_020994b0:
    cmp r8, #0
    beq @L_020994e0
    ldrh r1, [r6, #0x20]
    ldr r0, =data_020abaa8
    mov r2, #0
    ldr r3, [r0]
    mov r0, r8
    and r1, r1, #0x8000
    blx r3
    movs r8, r0
    moveq r10, #0
    b @L_020994e4
@L_020994e0:
    mov r8, #0
@L_020994e4:
    ldr r0, [sp]
    cmp r0, #0
    cmpne r9, #0
    cmpne r10, #0
    bne @L_0209952c
    ldr r1, =data_020abaac
    mov r0, r8
    ldr r1, [r1]
    blx r1
    ldr r4, =data_020abaa4
    mov r0, r7
    ldr r1, [r4]
    blx r1
    ldr r1, [r4]
    mov r0, r5
    blx r1
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0209952c:
    mov r0, r6
    mov r1, r5
    mov r2, r7
    bl func_02027cf4
    mov r0, r6
    mov r1, r8
    bl func_02027e24
    mov r0, r11
    mov r1, r6
    mov r2, #1
    bl func_020995c4
    mov r0, r11
    mov r1, r6
    mov r2, #1
    bl func_02099618
@L_02099568:
    ldr r1, [r4]
    ldr r0, =0x30444d42
    cmp r1, r0
    bne @L_02099590
    mov r0, r4
    bl func_0202c11c
    cmp r6, #0
    beq @L_02099590
    mov r1, r6
    bl NNS_G3dBindMdlSet
@L_02099590:
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02099598:
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020995a0:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 func_020995c4(s32 arg0, u8 *arg1)
{
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    if ((*(u16 *)(arg1 + 0xC) << 3) == 0)
        return arg0;
    t0 = ((u32)(*(s32 *)(arg1 + 0x8) << 0x10) >> 0xD);
    t1 = (*(u16 *)(arg1 + 0xC) << 3);
    t2 = (s32)(arg1 + *(s32 *)(arg1 + 0x14));
    func_02098a8c(arg0, t0, t1, t2, 0, 0);
    t3 = (*(u16 *)(arg1 + 0x10) | 1);
    *(u16 *)(arg1 + 0x10) = t3;
    return t3;
}

extern "C" s32 func_02099618(s32 arg0, u8 *arg1)
{
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    t0 = ((u32)(*(s32 *)(arg1 + 0x2C) << 0x10) >> 0xD);
    t1 = (*(u16 *)(arg1 + 0x30) << 3);
    t2 = (s32)(arg1 + *(s32 *)(arg1 + 0x38));
    func_02098ab8(arg0, t0, t1, t2, 0, 0);
    t3 = (*(u16 *)(arg1 + 0x32) | 1);
    *(u16 *)(arg1 + 0x32) = t3;
    return t3;
}

extern "C" asm void func_02099664(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x18
    mov r6, r2
    movs r7, r0
    cmpne r1, #0
    cmpne r6, #0
    addeq sp, sp, #0x18
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    add r3, sp, #0xc
    bl func_020996ec
    ldr r0, [sp, #0xc]
    cmp r0, #0
    ldreq r0, [sp, #0x10]
    cmpeq r0, #0
    ldreq r0, [sp, #0x14]
    cmpeq r0, #0
    addeq sp, sp, #0x18
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    add r5, sp, #0xc
    mov r0, r5
    mov r1, r5
    bl func_02002084
    add r4, sp, #0
    mov r0, r7
    mov r1, r6
    mov r2, r4
    bl func_02001f38
    mov r0, r5
    mov r1, r4
    bl VEC_DotProduct
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_020996ec(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x18
    mov r7, r2
    movs r8, r0
    cmpne r1, #0
    mov r6, r3
    cmpne r7, #0
    cmpne r6, #0
    addeq sp, sp, #0x18
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    add r5, sp, #0xc
    mov r0, r1
    mov r1, r8
    mov r2, r5
    bl func_02001f38
    add r4, sp, #0
    mov r0, r7
    mov r1, r8
    mov r2, r4
    bl func_02001f38
    mov r0, r5
    mov r1, r4
    mov r2, r4
    bl func_02001fa4
    mov r0, r5
    mov r1, r4
    mov r2, r6
    bl func_02001fa4
    add sp, sp, #0x18
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm int func_02099764(void *a)
{
    ldr r12, [r0]
    ldr r3, [r1, #4]
    ldr r2, [r0, #4]
    ldr r0, [r1]
    smull r1, r3, r12, r3
    adds r12, r1, #0x800
    smull r1, r0, r2, r0
    adc r2, r3, #0
    adds r1, r1, #0x800
    mov r3, r12, lsr #0xc
    adc r0, r0, #0
    mov r1, r1, lsr #0xc
    orr r3, r3, r2, lsl #20
    orr r1, r1, r0, lsl #20
    sub r0, r3, r1
    bx lr
}

extern "C" fx32 func_020997a4(fx32 *arg0, fx32 *arg1)
{
    return FX_Mul(arg0[0], arg1[0]) + FX_Mul(arg0[1], arg1[1]);
}

extern "C" BOOL func_020997e4(void *a)
{
    return func_02099764(a) == 0;
}

extern "C" asm void func_020997fc(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x24
    mov r7, r0
    mov r0, r1
    add r9, sp, #0x18
    mov r5, r2
    mov r1, r7
    mov r2, r9
    mov r4, r3
    ldr r6, [sp, #0x40]
    bl func_02001f38
    add r8, sp, #0xc
    mov r0, r4
    mov r1, r5
    mov r2, r8
    bl func_02001f38
    mov r0, r9
    mov r1, r8
    bl func_020997e4
    cmp r0, #0
    addne sp, sp, #0x24
    movne r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, pc}
    add r4, sp, #0
    mov r0, r5
    mov r1, r7
    mov r2, r4
    bl func_02001f38
    mov r0, r8
    mov r1, r4
    bl func_02099764
    mov r5, r0
    mov r0, r8
    mov r1, r9
    bl func_02099764
    ldr r1, [sp, #0x18]
    mov r4, r0
    smull r2, r0, r1, r5
    adds r1, r2, #0x800
    adc r2, r0, #0
    mov r0, r1, lsr #0xc
    mov r1, r4
    orr r0, r0, r2, lsl #20
    mov r8, #0
    bl func_02001d60
    ldr r2, [r7]
    mov r1, r4
    add r0, r2, r0
    str r0, [r6]
    ldr r0, [sp, #0x1c]
    smull r3, r2, r0, r5
    adds r0, r3, #0x800
    adc r2, r2, #0
    mov r0, r0, lsr #0xc
    orr r0, r0, r2, lsl #20
    bl func_02001d60
    ldr r1, [r7, #4]
    add r0, r1, r0
    stmib r6, {r0, r8}
    mov r0, #1
    add sp, sp, #0x24
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
}

extern "C" void func_020998f4(fx32 *in, fx32 *out)
{
    fx32 y = in[1];
    fx32 x = in[0];

    out[0] = -y;
    out[1] = x;
    out[2] = 0;
}

extern "C" fx32 func_02099910(fx32 value)
{
    return (value & -0x1000) + 0x1000;
}

extern "C" asm void func_02099924(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x30
    add r7, sp, #0x24
    mov r4, r2
    mov r5, r0
    mov r8, r1
    mov r0, r8
    mov r1, r5
    mov r2, r7
    bl func_02001f38
    add r6, sp, #0x18
    mov r0, r4
    mov r1, r5
    mov r2, r6
    bl func_02001f38
    mov r0, r5
    add r5, sp, #0xc
    mov r1, r8
    mov r2, r5
    bl func_02001f38
    mov r0, r4
    add r4, sp, #0
    mov r1, r8
    mov r2, r4
    bl func_02001f38
    mov r0, r7
    mov r1, r6
    bl func_02099764
    cmp r0, #0
    bne @L_020999cc
    mov r0, r7
    mov r1, r6
    bl func_020997a4
    cmp r0, #0
    ble @L_020999cc
    mov r0, r5
    mov r1, r4
    bl func_020997a4
    cmp r0, #0
    addgt sp, sp, #0x30
    movgt r0, #1
    ldmgtia sp!, {r4, r5, r6, r7, r8, pc}
@L_020999cc:
    mov r0, #0
    add sp, sp, #0x30
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" void func_020999d8(fx32 *a, fx32 *b, u16 *direction)
{
    *direction = func_0200226c(*b, *a);
}

extern "C" void func_020999f8(s32 arg0, fx32 *arg1, fx32 *arg2)
{
    s32 i = arg0 >> 4;
    *arg1 = FX_CosIdx(i);
    *arg2 = FX_SinIdx(i);
}

extern "C" s32 func_02099a2c(s32 arg0, s32 arg1, s32 arg2)
{
    V02099a2c v = {0, 0, 0};
    ((s32 (*)(...))func_02001f38)(arg1, arg0, &v);
    if (v.x == 0 && v.z == 0)
        return 0;
    ((s32 (*)(...))func_020999d8)(&v.x, &v.z, arg2);
    return 1;
}

extern "C" void func_02099a94(V3_02099a94 *arg0, V3_02099a94 *arg1)
{
    V3_02099a94 b;
    V3_02099a94 a;
    s32 z = arg0->z;
    a.x = arg0->x;
    a.y = 0;
    a.z = z;
    z = arg1->z;
    b.x = arg1->x;
    b.y = 0;
    b.z = z;
    ((void (*)(V3_02099a94 *, V3_02099a94 *))func_020021f0)(&a, &b);
}

extern "C" int func_02099adc(int x0, int y0, int x1, int y1)
{
    int dy = y0 - y1;
    int dx;

    if (dy < 0) {
        dy = -dy;
    }
    dx = x0 - x1;
    if (dx < 0) {
        dx = -dx;
    }
    return dx + dy;
}

extern "C" void func_02099af4(s32 *obj)
{
    obj[0] = 0;
    obj[1] = 0;
    obj[3] = 0;
}

extern "C" void func_02099b08(void)
{
}

extern "C" s32 func_02099b0c(u8 *arg0)
{
    s32 r1;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    r1 = *(s32 *)(arg0 + 0xC);
    if (r1 != 0) {
        t0 = *(s32 *)(arg0);
        _ZN8GameHeap4FreeEPv(t0, r1);
        *(s32 *)(arg0 + 0xC) = 0;
    }
    if (*(s32 *)(arg0) == 0)
        return *(s32 *)(arg0);
    if (*(s32 *)(arg0 + 0x4) == 0)
        return *(s32 *)(arg0);
    t1 = *(s32 *)(arg0);
    t2 = *(s32 *)(arg0 + 0x4);
    _ZN8GameHeap4FreeEPv(t1, t2);
    t3 = *(s32 *)(arg0);
    t4 = *(s32 *)(arg0 + 0x8);
    _ZN8GameHeap4FreeEPv(t3, t4);
    *(s32 *)(arg0 + 0x4) = 0;
    *(s32 *)(arg0 + 0x8) = 0;
    return 0;
}

extern "C" void func_02099b64(u8 *arg0, u8 arg1, S02099b64 arg2)
{
    arg0[0xC] = arg1;
    arg0[0xD] = 0;
    ((s32 *)arg0)[0] = arg2.a;
    ((s32 *)arg0)[1] = arg2.b;
    ((s32 *)arg0)[2] = arg2.c;
    ((s32 *)arg0)[4] = arg2.d;
    ((s32 *)arg0)[5] = arg2.e;
    ((s32 *)arg0)[6] = -1;
    ((s32 *)arg0)[7] = -1;
    ((s32 *)arg0)[8] = -1;
    ((s32 *)arg0)[9] = -1;
}

extern "C" void func_02099bbc(s8 *obj, s8 flags)
{
    obj[0xD] |= flags;
}

extern "C" void func_02099bcc(s8 *obj, int flags)
{
    obj[0xD] &= (s8)~flags;
}

extern "C" asm void func_02099be4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    movs r6, r1
    mov r7, r0
    mov r5, r2
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r6
    mov r1, #0x5c
    bl strrchr
    movs r4, r0
    mov r1, #0x2f
    bne @L_02099c18
    mov r0, r6
    b @L_02099c18
@L_02099c18:
    bl strrchr
    cmp r0, #0
    bne @L_02099c30
    cmp r4, #0
    addne r6, r4, #1
    b @L_02099c34
@L_02099c30:
    add r6, r0, #1
@L_02099c34:
    mov r0, r7
    mov r1, r6
    mov r2, r5
    bl strncpy
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" void func_02099c48(u8 *arg0, u8 *arg1)
{
    s32 r2;
    s32 r12;
    r12 = 0;
    if (*(s8 *)(arg1) != 0) {
        r12 = r12;
        do {
            r12 = r12;
            r2 = *(s8 *)(arg1 + r12);
            if ((r2 >= 0 && (r12 = r12, r2 < 0x80))) {
                r12 = r12;
                r2 = *(u8 *)(((u8 *)&data_020a4478) + r2);
            }
            *(u8 *)(arg0 + r12) = r2;
            r12 = (r12 + 1);
        } while (*(s8 *)(arg1 + r12) != 0);
    }
    *(u8 *)(arg0 + r12) = 0;
    return;
}

extern "C" asm int func_02099c94(u8 *obj, int a)
{
    cmp r0, #0
    moveq r0, #0
    bxeq lr
    cmp r1, #0
    blt @L_02099cb4
    ldr r2, [r0]
    cmp r1, r2
    blo @L_02099cbc
@L_02099cb4:
    mov r0, #0
    bx lr
@L_02099cbc:
    add r0, r0, r1, lsl #3
    ldr r0, [r0, #4]
    bx lr
}

extern "C" s32 func_02099cc8(u8 *arg0, s32 arg1)
{
    if ((s32)arg0 == 0)
        return 0;
    if ((arg1 < 0 || (u32)arg1 >= (u32)*(s32 *)(arg0))) {
        return 0;
    }
    return *(s32 *)(((u8 *)(arg0 + (arg1 << 3))) + 0x8);
}

extern "C" u8 *func_02099cfc(u8 *obj, int a)
{
    int offset = func_02099c94(obj, a);

    if (offset == 0) {
        return NULL;
    }
    return obj + offset;
}

extern "C" s32 func_02099d18(s32 arg0, u8 *arg1, u8 *arg2, u8 *arg3, u8 *arg4)
{
    s32 v0;
    u8 *v1;
    s32 v2;
    u8 *v3;
    if ((s32)arg1 != 0) {
        v0 = func_02099cc8((u8 *)arg0, 0);
        *(s32 *)(arg1) = v0;
    }
    if ((s32)arg2 != 0) {
        v1 = func_02099cfc((u8 *)arg0, 0);
        *(s32 *)(arg2) = (s32)v1;
    }
    if ((s32)arg3 != 0) {
        v2 = func_02099cc8((u8 *)arg0, 1);
        *(s32 *)(arg3) = v2;
    }
    if ((s32)arg4 == 0)
        return (s32)arg4;
    v3 = func_02099cfc((u8 *)arg0, 1);
    *(s32 *)(arg4) = (s32)v3;
    return (s32)v3;
}

extern "C" int func_02099d90(int i)
{
    return 0xF3C - i * 4;
}

extern "C" asm void func_02099da0(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x30
    ldr r1, [sp, #0x5c]
    ldr r2, [sp, #0x54]
    mov r1, r1, asr #4
    mov r3, r2, asr #4
    ldr r4, [sp, #0x58]
    mov r8, r1, lsl #1
    mov r2, r4, asr #4
    mov r9, r0
    mov r6, r3, lsl #1
    mov r7, r2, lsl #1
    bl MTX_Identity43_
    add r0, r8, #1
    ldr r4, =FX_SinCosTable_
    mov r1, r8, lsl #1
    mov r0, r0, lsl #1
    ldrsh r1, [r4, r1]
    ldrsh r2, [r4, r0]
    add r5, sp, #0
    mov r0, r5
    bl MTX_RotZ43_
    mov r0, r9
    mov r1, r5
    mov r2, r9
    bl func_020011fc
    add r2, r7, #1
    mov r1, r7, lsl #1
    mov r2, r2, lsl #1
    ldrsh r1, [r4, r1]
    ldrsh r2, [r4, r2]
    mov r0, r5
    bl MTX_RotY43_
    mov r0, r9
    mov r1, r5
    mov r2, r9
    bl func_020011fc
    add r2, r6, #1
    mov r1, r6, lsl #1
    mov r2, r2, lsl #1
    ldrsh r1, [r4, r1]
    ldrsh r2, [r4, r2]
    mov r0, r5
    bl MTX_RotX43_
    mov r1, r5
    mov r0, r9
    mov r2, r9
    bl func_020011fc
    add sp, sp, #0x30
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    add sp, sp, #0x10
    bx lr
}

extern "C" asm void func_02099e78(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x30
    ldr r1, [sp, #0x54]
    ldr r2, [sp, #0x58]
    mov r3, r1, asr #4
    ldr r4, [sp, #0x5c]
    mov r2, r2, asr #4
    mov r1, r4, asr #4
    mov r6, r3, lsl #1
    mov r9, r0
    mov r7, r2, lsl #1
    mov r8, r1, lsl #1
    bl MTX_Identity43_
    add r0, r6, #1
    ldr r4, =FX_SinCosTable_
    mov r1, r6, lsl #1
    mov r0, r0, lsl #1
    ldrsh r1, [r4, r1]
    ldrsh r2, [r4, r0]
    add r5, sp, #0
    mov r0, r5
    bl MTX_RotX43_
    mov r0, r9
    mov r1, r5
    mov r2, r9
    bl func_020011fc
    add r2, r7, #1
    mov r1, r7, lsl #1
    mov r2, r2, lsl #1
    ldrsh r1, [r4, r1]
    ldrsh r2, [r4, r2]
    mov r0, r5
    bl MTX_RotY43_
    mov r0, r9
    mov r1, r5
    mov r2, r9
    bl func_020011fc
    add r2, r8, #1
    mov r1, r8, lsl #1
    mov r2, r2, lsl #1
    ldrsh r1, [r4, r1]
    ldrsh r2, [r4, r2]
    mov r0, r5
    bl MTX_RotZ43_
    mov r1, r5
    mov r0, r9
    mov r2, r9
    bl func_020011fc
    add sp, sp, #0x30
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    add sp, sp, #0x10
    bx lr
}

extern "C" asm void func_02099f50(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x10
    mov r6, r1
    movs r7, r0
    cmpne r6, #0
    addeq sp, sp, #0x10
    mvneq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    add r4, sp, #0
    mov r5, #0
    mov r0, r6
    str r5, [r4]
    str r5, [r4, #4]
    str r5, [r4, #8]
    str r5, [r4, #0xc]
    bl strlen
    mov r2, r0
    mov r0, r4
    mov r1, r6
    bl func_02018328
    cmp r7, #0
    addne r5, r7, #0x40
    cmp r5, #0
    addeq sp, sp, #0x10
    mvneq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    add r1, sp, #0
    mov r0, r5
    bl func_0202bfb8
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" u8 *func_02099fcc(u8 *obj)
{
    if (obj == NULL) {
        return NULL;
    }
    return obj + *(s32 *)(obj + 0x38);
}

extern "C" u8 *func_02099fe0(void *obj)
{
    if (obj == NULL) {
        return NULL;
    }
    return func_02099fcc(NNS_G3dGetTex(obj));
}

extern "C" s32 func_02099ffc(s32 arg0)
{
    u8 *v0;
    s32 v1;
    if (arg0 == 0) {
        return 0;
    } else {
        v0 = NNS_G3dGetTex((void *)arg0);
        if (v0 == 0) {
            return 0;
        } else {
            v1 = func_02027e10();
            return v1;
        }
    }
}

extern "C" asm void func_0209a024(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x18
    mov r8, r1
    movs r9, r0
    mov r7, r3
    cmpne r8, #0
    cmpne r7, #0
    addeq sp, sp, #0x18
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r2, r2, asr #4
    mov r3, r2, lsl #1
    add r2, r3, #1
    mov r5, r3, lsl #1
    ldr r6, =FX_SinCosTable_
    add r4, sp, #0xc
    mov r3, r2, lsl #1
    ldrsh r5, [r6, r5]
    mov r2, r4
    ldrsh r6, [r6, r3]
    bl func_02001f38
    ldr lr, [sp, #0x14]
    ldr r12, [sp, #0xc]
    mov r1, r8
    smull r3, r0, lr, r5
    mov r2, r4
    smull r10, r8, r12, r6
    smull r5, r4, r12, r5
    smull r12, r6, lr, r6
    adds lr, r10, #0x800
    adc r10, r8, #0
    adds r3, r3, #0x800
    mov r8, lr, lsr #0xc
    adc r0, r0, #0
    mov r3, r3, lsr #0xc
    orr r8, r8, r10, lsl #20
    orr r3, r3, r0, lsl #20
    sub r0, r8, r3
    adds r3, r5, #0x800
    str r0, [sp]
    adc r0, r4, #0
    mov r4, r3, lsr #0xc
    adds r3, r12, #0x800
    orr r4, r4, r0, lsl #20
    adc r0, r6, #0
    mov r3, r3, lsr #0xc
    orr r3, r3, r0, lsl #20
    add r3, r4, r3
    add r0, sp, #0
    str r3, [sp, #8]
    bl func_02001f08
    ldr r1, [r9, #4]
    ldr r0, [sp, #0xc]
    str r1, [sp, #0x10]
    str r0, [r7]
    ldr r1, [sp, #0x10]
    mov r0, #1
    str r1, [r7, #4]
    ldr r1, [sp, #0x14]
    str r1, [r7, #8]
    add sp, sp, #0x18
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_0209a120(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0xc
    add r7, sp, #0
    cmp r3, #0
    mov r6, r1
    mov r5, r2
    ldmia r0, {r0, r1, r2}
    stmia r7, {r0, r1, r2}
    ldr r4, [sp, #0x30]
    cmpne r3, #0x8000
    beq @L_0209a164
    mov r2, r3, lsl #0x10
    mov r0, r7
    mov r1, r6
    mov r3, r7
    mov r2, r2, lsr #0x10
    bl func_0209a024
@L_0209a164:
    ldr r7, [r5]
    ldr r3, [r6]
    ldr r1, [r6, #4]
    sub r3, r3, r7, asr #1
    sub r12, r3, r4
    add r3, r12, r7
    ldr r2, [r5, #4]
    mov r0, #0
    ldr r7, [r5, #8]
    ldr r6, [r6, #8]
    sub r1, r1, r2, asr #1
    sub r8, r1, r4
    sub r6, r6, r7, asr #1
    sub r9, r6, r4
    ldr r1, [sp]
    add r10, r9, r7
    add r2, r8, r2
    mov r7, r0
    add r3, r3, r4, lsl #1
    cmp r12, r1
    cmple r1, r3
    movle r7, #1
    add r2, r2, r4, lsl #1
    mov r5, r0
    mov r6, r0
    mov lr, r0
    add r4, r10, r4, lsl #1
    cmp r7, #0
    beq @L_0209a1e4
    ldr r1, [sp, #4]
    cmp r8, r1
    movle lr, #1
@L_0209a1e4:
    cmp lr, #0
    beq @L_0209a1f8
    ldr r1, [sp, #4]
    cmp r1, r2
    movle r6, #1
@L_0209a1f8:
    cmp r6, #0
    beq @L_0209a20c
    ldr r1, [sp, #8]
    cmp r9, r1
    movle r5, #1
@L_0209a20c:
    cmp r5, #0
    addeq sp, sp, #0xc
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r1, [sp, #8]
    cmp r1, r4
    movle r0, #1
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_0209a22c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x18
    ldr r12, [r1, #4]
    ldr r4, [r0, #4]
    mov r5, r2
    subs r2, r12, r4
    rsbmi r2, r2, #0
    cmp r2, r3, asr #1
    addgt sp, sp, #0x18
    movgt r0, #0
    ldmgtia sp!, {r3, r4, r5, pc}
    ldr r2, [r1, #8]
    ldr r1, [r1]
    mov r4, #0
    str r1, [sp]
    str r4, [sp, #4]
    str r2, [sp, #8]
    ldr r3, [r0, #8]
    ldr r2, [r0]
    add r0, sp, #0
    add r1, sp, #0xc
    str r2, [sp, #0xc]
    str r4, [sp, #0x10]
    str r3, [sp, #0x14]
    bl func_020021f0
    ldr r1, [sp, #0x28]
    add r1, r5, r1
    cmp r0, r1
    movle r4, #1
    mov r0, r4
    add sp, sp, #0x18
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 func_0209a2ac(s32 arg0)
{
    s32 r1;
    s32 r4;
    s32 v0;
    s32 v1;
    v0 = _ZN10ConfigFile6GetIntEPKc((s32)((u8 *)&data_020c46e4), (s32)((u8 *)&data_020afde4));
    r4 = arg0;
    arg0 = v0;
    r1 = *(u16 *)(((u8 *)0x4000320));
    if (arg0 > 0) {
        if (r1 < arg0)
            return arg0;
        if ((*(u16 *)(((u8 *)(0x4000320 - 0x2C0))) & 0x1000) != 0)
            return *(u16 *)(((u8 *)(0x4000320 - 0x2C0)));
    }
    v1 = func_02029094(r4);
    return v1;
}

extern "C" s32 func_0209a300(s32 arg0, s32 arg1, u8 *arg2, u8 *arg3)
{
    s32 r0;
    s32 r1;
    s32 r4;
    s32 r5;
    u8 *r6;
    s32 r7;
    u8 *r8;
    u8 *r9;
    s32 r10;
    s32 r11;
    s32 v0;
    s32 v2;
    s32 v4;
    u16 t0;
    r0 = arg0;
    r9 = arg2;
    r8 = arg3;
    r10 = arg1;
    r1 = *(s32 *)(arg3);
    r7 = *(u16 *)(arg2);
    r5 = (arg1 + 8);
    r6 = (u8 *)((arg1 + 8) + (*(u16 *)(arg2) << 3));
    if (r1 <= 0) {
        r11 = 0x3F000000;
        r4 = 0x3F000000;
        do {
            t0 = *(u16 *)(r6 + 0x2);
            *(u16 *)(r9) = t0;
            r6 = (u8 *)r5;
            r0 = (*(s32 *)(((u8 *)(r10 + (t0 << 3))) + 0xC) << 0xC);
            if (*(s32 *)(((u8 *)(r10 + (t0 << 3))) + 0xC) != 0) {
                v0 = _ffltu(r0, r1);
                _fadd(r4, v0);
            } else {
                v2 = _ffltu(r0, r1);
                _fsub(v2, r11);
            }
            v4 = _ffix();
            *(s32 *)(r8) = v4;
            r0 = v4;
            r1 = *(u16 *)(r9);
            if (r1 == 0) {
                return 2;
            }
            if (r7 != r1) {
                return 1;
            }
        } while (r0 <= 0);
    } else {
        *(s32 *)(r8) = (r1 - r0);
    }
    return 0;
}
