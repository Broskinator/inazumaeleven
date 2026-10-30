#include "game/Unk_02098f14.hpp"
#include "nitro/fx.h"
#include "nitro/os.h"

extern "C" void func_0209a9f0(void);
extern "C" u16 func_0200226c(fx32 y, fx32 x);
extern "C" u8 *NNS_G3dGetTex(void *obj);
extern "C" void OS_LockMutex(OSMutex *mutex);
extern "C" void OS_UnlockMutex(OSMutex *mutex);

extern "C" void func_02098f14(void);
extern "C" void func_02098fac(void);
extern "C" void func_02099058(void);
extern "C" void func_02099088(void);
extern "C" void func_020990b4(void);
extern "C" void func_020990e8(void);
extern "C" void func_02099140(void);
extern "C" void func_020991ac(void);
extern "C" void func_020991d8(void);
extern "C" void func_0209920c(void);
extern "C" void func_02099238(void);
extern "C" void func_0209926c(void);
extern "C" void func_020992ec(void);
extern "C" void func_02099370(u8 *obj);
extern "C" void func_02099390(void);
extern "C" void func_020995c4(void);
extern "C" void func_02099618(void);
extern "C" void func_02099664(void);
extern "C" void func_020996ec(void);
extern "C" int func_02099764(void *a);
extern "C" void func_020997a4(void);
extern "C" BOOL func_020997e4(void *a);
extern "C" void func_020997fc(void);
extern "C" void func_020998f4(fx32 *in, fx32 *out);
extern "C" fx32 func_02099910(fx32 value);
extern "C" void func_02099924(void);
extern "C" void func_020999d8(fx32 *a, fx32 *b, u16 *direction);
extern "C" void func_020999f8(void);
extern "C" void func_02099a2c(void);
extern "C" void func_02099a94(void);
extern "C" int func_02099adc(int x0, int y0, int x1, int y1);
extern "C" void func_02099af4(s32 *obj);
extern "C" void func_02099b08(void);
extern "C" void func_02099b0c(void);
extern "C" void func_02099b64(void);
extern "C" void func_02099bbc(s8 *obj, s8 flags);
extern "C" void func_02099bcc(s8 *obj, int flags);
extern "C" void func_02099be4(void);
extern "C" void func_02099c48(void);
extern "C" int func_02099c94(u8 *obj, int a);
extern "C" s32 func_02099cc8(u8 *arg0, s32 arg1);
extern "C" u8 *func_02099cfc(u8 *obj, int a);
extern "C" void func_02099d18(void);
extern "C" int func_02099d90(int i);
extern "C" void func_02099da0(void);
extern "C" void func_02099e78(void);
extern "C" void func_02099f50(void);
extern "C" u8 *func_02099fcc(u8 *obj);
extern "C" u8 *func_02099fe0(void *obj);
extern "C" void func_02099ffc(void);
extern "C" void func_0209a024(void);
extern "C" void func_0209a120(void);
extern "C" void func_0209a22c(void);
extern "C" void func_0209a2ac(void);
extern "C" void func_0209a300(void);

extern "C" char data_020a4478[];
extern "C" char data_020abaa0[];
extern "C" char data_020abaa4[];
extern "C" char data_020abaa8[];
extern "C" char data_020abaac[];
extern "C" char data_020afde4[];
extern "C" char data_020c46e4[];
extern "C" void GX_BeginLoadTex(void);
extern "C" void GX_BeginLoadTexPltt(void);
extern "C" void MTX_Identity43_(void);
extern "C" void MTX_RotX43_(void);
extern "C" void MTX_RotY43_(void);
extern "C" void MTX_RotZ43_(void);
extern "C" void NNS_G3dBindMdlSet(void);
extern "C" void NNS_GfdFreeLnkPlttVram(void);
extern "C" void VEC_DotProduct(void);
extern "C" void _ZN10ConfigFile6GetIntEPKc(void);
extern "C" void _ZN8GameHeap4FreeEPv(void);
extern "C" void func_020011fc(void);
extern "C" void func_02001d60(void);
extern "C" void func_02001f08(void);
extern "C" void func_02001f38(void);
extern "C" void func_02001fa4(void);
extern "C" void func_02002084(void);
extern "C" void func_020021f0(void);
extern "C" void func_02003eec(void);
extern "C" void func_02004038(void);
extern "C" void func_020040b0(void);
extern "C" void func_02004120(void);
extern "C" void func_02004fd8(void);
extern "C" void func_02008450(void);
extern "C" void func_02018328(void);
extern "C" void func_020224cc(void);
extern "C" void func_02022b2c(void);
extern "C" void func_0202300c(void);
extern "C" void func_0202323c(void);
extern "C" void func_02027ccc(void);
extern "C" void func_02027ce0(void);
extern "C" void func_02027cf4(void);
extern "C" void func_02027e10(void);
extern "C" void func_02027e24(void);
extern "C" void func_02029094(void);
extern "C" void func_0202b798(void);
extern "C" void func_0202b9d8(void);
extern "C" void func_0202bfb8(void);
extern "C" void func_0202c11c(void);
extern "C" void func_0203020c(void);
extern "C" void func_02098a8c(void);
extern "C" void func_02098ab8(void);
extern "C" void func_02098cdc(void);
extern "C" void func_02098d30(void);
extern "C" void func_0209a798(void);
extern "C" void func_0209a97c(void);
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

extern "C" asm void func_02098fac(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r4, [sp, #0x18]
    mov r6, r0
    add r4, r4, #3
    ldrb r0, [r1, #8]
    ldr r12, [r1]
    bic r4, r4, #3
    cmp r12, r4
    movlt r4, r12
    mov r5, r3
    cmp r0, #1
    beq @L_02098fe8
    cmp r0, #2
    beq @L_02099018
    b @L_02099048
@L_02098fe8:
    ldr r1, [r1, #4]
    mov r0, r6
    mov r1, r1, lsl #0x10
    add r7, r2, r1, lsr #13
    bl func_020991ac
    mov r0, r5
    mov r1, r7
    mov r2, r4
    bl func_02003eec
    mov r0, r6
    bl func_020991d8
    b @L_02099050
@L_02099018:
    ldr r1, [r1, #4]
    mov r0, r6
    mov r1, r1, lsl #0x10
    add r7, r2, r1, lsr #13
    bl func_0209920c
    mov r0, r5
    mov r1, r7
    mov r2, r4
    bl func_020040b0
    mov r0, r6
    bl func_02099238
    b @L_02099050
@L_02099048:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02099050:
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_02099058(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    add r0, r5, #8
    bl OS_LockMutex
    mov r0, r4
    bl func_0202b798
    mov r4, r0
    add r0, r5, #8
    bl OS_UnlockMutex
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02099088(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    add r0, r5, #8
    bl OS_LockMutex
    mov r0, r4
    bl func_0202b9d8
    add r0, r5, #8
    bl OS_UnlockMutex
    mov r0, #1
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_020990b4(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    add r0, r5, #8
    bl OS_LockMutex
    mov r0, r5
    mov r1, r4
    bl func_02099390
    mov r4, r0
    add r0, r5, #8
    bl OS_UnlockMutex
    mov r0, r4
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_020990e8(void)
{
    ldr r3, [r1, #4]
    cmp r3, #0
    moveq r0, #0
    bxeq lr
    ldrb r0, [r1, #8]
    cmp r0, #1
    beq @L_02099110
    cmp r0, #2
    beq @L_02099124
    b @L_02099138
@L_02099110:
    mov r0, r3, lsl #0x10
    mov r0, r0, lsr #0xd
    str r0, [r2]
    mov r0, #1
    bx lr
@L_02099124:
    mov r0, r3, lsl #0x10
    mov r0, r0, lsr #0xd
    str r0, [r2]
    mov r0, #1
    bx lr
@L_02099138:
    mov r0, #0
    bx lr
}

extern "C" asm void func_02099140(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl func_02004fd8
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    ldr r0, =0x4000006
    ldrh r0, [r0]
    cmp r0, #0xc1
    bgt @L_0209916c
    mov r0, #0x188
    bl func_02008450
@L_0209916c:
    ldr r0, =0x4000600
    ldr r0, [r0]
    tst r0, #0x8000000
    ldmneia sp!, {r4, pc}
    ldr r0, [r4, #0x38]
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    mov r0, #0
    str r0, [r4, #0x38]
    bl func_0209a97c
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    bl func_0209a798
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_020991ac(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    add r0, r4, #8
    bl OS_LockMutex
    ldr r1, [r4, #0x30]
    add r0, r1, #1
    str r0, [r4, #0x30]
    cmp r1, #0
    ldmgtia sp!, {r4, pc}
    bl GX_BeginLoadTex
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_020991d8(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4, #0x30]
    cmp r0, #0
    ble @L_02099200
    sub r0, r0, #1
    str r0, [r4, #0x30]
    cmp r0, #0
    bgt @L_02099200
    bl func_02004038
@L_02099200:
    add r0, r4, #8
    bl OS_UnlockMutex
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_0209920c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    add r0, r4, #8
    bl OS_LockMutex
    ldr r1, [r4, #0x34]
    add r0, r1, #1
    str r0, [r4, #0x34]
    cmp r1, #0
    ldmgtia sp!, {r4, pc}
    bl GX_BeginLoadTexPltt
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_02099238(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4, #0x34]
    cmp r0, #0
    ble @L_02099260
    sub r0, r0, #1
    str r0, [r4, #0x34]
    cmp r0, #0
    bgt @L_02099260
    bl func_02004120
@L_02099260:
    add r0, r4, #8
    bl OS_UnlockMutex
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_0209926c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r1
    ldrb r1, [r4, #9]
    mov r5, r0
    cmp r1, #0
    movne r0, #1
    ldmneia sp!, {r3, r4, r5, pc}
    add r0, r5, #8
    bl OS_LockMutex
    ldr r0, [r4, #4]
    cmp r0, #0
    beq @L_020992dc
    ldrb r1, [r4, #8]
    cmp r1, #1
    beq @L_020992b4
    cmp r1, #2
    beq @L_020992bc
    b @L_020992c4
@L_020992b4:
    bl func_0203020c
    b @L_020992cc
@L_020992bc:
    bl NNS_GfdFreeLnkPlttVram
    b @L_020992cc
@L_020992c4:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_020992cc:
    mov r1, #0
    mov r0, #1
    str r1, [r4, #4]
    strb r0, [r4, #9]
@L_020992dc:
    add r0, r5, #8
    bl OS_UnlockMutex
    mov r0, #1
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_020992ec(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r1
    ldrb r1, [r4, #9]
    mov r5, r0
    cmp r1, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    add r0, r5, #8
    bl OS_LockMutex
    ldrb r0, [r4, #8]
    cmp r0, #1
    beq @L_02099328
    cmp r0, #2
    beq @L_0209933c
    b @L_02099350
@L_02099328:
    ldr r2, [r4]
    mov r0, r5
    mov r1, r4
    bl func_02098cdc
    b @L_02099358
@L_0209933c:
    ldr r2, [r4]
    mov r0, r5
    mov r1, r4
    bl func_02098d30
    b @L_02099358
@L_02099350:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, pc}
@L_02099358:
    mov r1, #0
    add r0, r5, #8
    strb r1, [r4, #9]
    bl OS_UnlockMutex
    mov r0, #1
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void func_02099370(u8 *obj)
{
    OS_LockMutex((OSMutex *)(obj + 8));
    func_0209a9f0();
    OS_UnlockMutex((OSMutex *)(obj + 8));
}

extern "C" asm void func_02099390(void)
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

extern "C" asm void func_020995c4(void)
{
    stmdb sp!, {r4, lr}
    sub sp, sp, #8
    mov r4, r1
    ldrh r1, [r4, #0xc]
    movs r2, r1, lsl #3
    addeq sp, sp, #8
    ldmeqia sp!, {r4, pc}
    mov r1, #0
    str r1, [sp]
    str r1, [sp, #4]
    ldr r1, [r4, #8]
    ldr r3, [r4, #0x14]
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0xd
    add r3, r4, r3
    bl func_02098a8c
    ldrh r0, [r4, #0x10]
    orr r0, r0, #1
    strh r0, [r4, #0x10]
    add sp, sp, #8
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_02099618(void)
{
    stmdb sp!, {r4, lr}
    sub sp, sp, #8
    mov r2, #0
    str r2, [sp]
    mov r4, r1
    str r2, [sp, #4]
    ldr r1, [r4, #0x2c]
    ldrh r2, [r4, #0x30]
    ldr r3, [r4, #0x38]
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0xd
    mov r2, r2, lsl #3
    add r3, r4, r3
    bl func_02098ab8
    ldrh r0, [r4, #0x32]
    orr r0, r0, #1
    strh r0, [r4, #0x32]
    add sp, sp, #8
    ldmia sp!, {r4, pc}
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

extern "C" asm void func_020997a4(void)
{
    ldr r12, [r0]
    ldr r3, [r1]
    ldr r2, [r0, #4]
    ldr r0, [r1, #4]
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
    add r0, r3, r1
    bx lr
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

extern "C" asm void func_020999f8(void)
{
    stmdb sp!, {r3, lr}
    mov r0, r0, asr #4
    mov lr, r0, lsl #1
    add r0, lr, #1
    ldr r12, =FX_SinCosTable_
    mov r3, r0, lsl #1
    mov r0, lr, lsl #1
    ldrsh r3, [r12, r3]
    ldrsh r0, [r12, r0]
    str r3, [r1]
    str r0, [r2]
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_02099a2c(void)
{
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    mov r5, r2
    mov r3, r0
    mov r0, r1
    add r2, sp, #0
    mov r4, #0
    mov r1, r3
    str r4, [r2]
    str r4, [r2, #4]
    str r4, [r2, #8]
    bl func_02001f38
    ldr r0, [sp]
    cmp r0, #0
    ldreq r0, [sp, #8]
    cmpeq r0, #0
    addeq sp, sp, #0xc
    moveq r0, r4
    ldmeqia sp!, {r4, r5, pc}
    add r0, sp, #0
    add r1, sp, #8
    mov r2, r5
    bl func_020999d8
    mov r0, #1
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, pc}
}

extern "C" asm void func_02099a94(void)
{
    stmdb sp!, {r3, lr}
    sub sp, sp, #0x18
    ldr r2, [r0, #8]
    ldr r0, [r0]
    mov r12, #0
    str r0, [sp]
    str r12, [sp, #4]
    str r2, [sp, #8]
    ldr r3, [r1, #8]
    ldr r2, [r1]
    add r0, sp, #0
    add r1, sp, #0xc
    str r2, [sp, #0xc]
    str r12, [sp, #0x10]
    str r3, [sp, #0x14]
    bl func_020021f0
    add sp, sp, #0x18
    ldmia sp!, {r3, pc}
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

extern "C" asm void func_02099b0c(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #0xc]
    cmp r1, #0
    beq @L_02099b30
    ldr r0, [r4]
    bl _ZN8GameHeap4FreeEPv
    mov r0, #0
    str r0, [r4, #0xc]
@L_02099b30:
    ldr r0, [r4]
    cmp r0, #0
    ldrne r1, [r4, #4]
    cmpne r1, #0
    ldmeqia sp!, {r4, pc}
    bl _ZN8GameHeap4FreeEPv
    ldr r0, [r4]
    ldr r1, [r4, #8]
    bl _ZN8GameHeap4FreeEPv
    mov r0, #0
    str r0, [r4, #4]
    str r0, [r4, #8]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_02099b64(void)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r4, r5, r6, lr}
    ldr r5, [sp, #0x18]
    mov r6, #0
    ldr r4, [sp, #0x1c]
    ldr lr, [sp, #0x20]
    strb r1, [r0, #0xc]
    strb r6, [r0, #0xd]
    str r5, [r0]
    ldr r12, [sp, #0x24]
    stmib r0, {r4, lr}
    sub r2, r6, #1
    ldr r3, [sp, #0x28]
    str r12, [r0, #0x10]
    str r3, [r0, #0x14]
    str r2, [r0, #0x18]
    str r2, [r0, #0x1c]
    str r2, [r0, #0x20]
    str r2, [r0, #0x24]
    ldmia sp!, {r4, r5, r6, lr}
    add sp, sp, #0x10
    bx lr
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

extern "C" asm void func_02099c48(void)
{
    ldrsb r2, [r1]
    mov r12, #0
    cmp r2, #0
    beq @L_02099c84
    ldr r3, =data_020a4478
@L_02099c5c:
    ldrsb r2, [r1, r12]
    cmp r2, #0
    blt @L_02099c70
    cmp r2, #0x80
    ldrltb r2, [r3, r2]
@L_02099c70:
    strb r2, [r0, r12]
    add r12, r12, #1
    ldrsb r2, [r1, r12]
    cmp r2, #0
    bne @L_02099c5c
@L_02099c84:
    mov r1, #0
    strb r1, [r0, r12]
    bx lr
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

extern "C" asm void func_02099d18(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    movs r6, r1
    mov r7, r0
    mov r5, r2
    mov r4, r3
    beq @L_02099d3c
    mov r1, #0
    bl func_02099cc8
    str r0, [r6]
@L_02099d3c:
    cmp r5, #0
    beq @L_02099d54
    mov r0, r7
    mov r1, #0
    bl func_02099cfc
    str r0, [r5]
@L_02099d54:
    cmp r4, #0
    beq @L_02099d6c
    mov r0, r7
    mov r1, #1
    bl func_02099cc8
    str r0, [r4]
@L_02099d6c:
    ldr r0, [sp, #0x18]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r7
    mov r1, #1
    bl func_02099cfc
    ldr r1, [sp, #0x18]
    str r0, [r1]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
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

extern "C" asm void func_02099ffc(void)
{
    stmdb sp!, {r3, lr}
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, pc}
    bl NNS_G3dGetTex
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, pc}
    bl func_02027e10
    ldmia sp!, {r3, pc}
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

extern "C" asm void func_0209a2ac(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r0, =data_020c46e4
    ldr r1, =data_020afde4
    bl _ZN10ConfigFile6GetIntEPKc
    ldr r2, =0x4000320
    cmp r0, #0
    ldrh r1, [r2]
    ble @L_0209a2e8
    cmp r1, r0
    ldmltia sp!, {r4, pc}
    sub r0, r2, #0x2c0
    ldrh r0, [r0]
    tst r0, #0x1000
    ldmneia sp!, {r4, pc}
@L_0209a2e8:
    mov r0, r4
    bl func_02029094
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_0209a300(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r9, r2
    mov r8, r3
    mov r10, r1
    ldr r1, [r8]
    ldrh r7, [r9]
    add r5, r10, #8
    cmp r1, #0
    add r6, r5, r7, lsl #3
    bgt @L_0209a3a0
    mov r11, #0x3f000000
    mov r4, r11
@L_0209a330:
    ldrh r0, [r6, #2]
    mov r6, r5
    strh r0, [r9]
    add r0, r10, r0, lsl #3
    ldr r0, [r0, #0xc]
    cmp r0, #0
    mov r0, r0, lsl #0xc
    beq @L_0209a364
    bl func_020224cc
    mov r1, r0
    mov r0, r4
    bl func_0202300c
    b @L_0209a370
@L_0209a364:
    bl func_020224cc
    mov r1, r11
    bl func_0202323c
@L_0209a370:
    bl func_02022b2c
    str r0, [r8]
    ldrh r1, [r9]
    cmp r1, #0
    moveq r0, #2
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r7, r1
    movne r0, #1
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r0, #0
    ble @L_0209a330
    b @L_0209a3a8
@L_0209a3a0:
    sub r0, r1, r0
    str r0, [r8]
@L_0209a3a8:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
