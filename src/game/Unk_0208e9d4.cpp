#include "game/Unk_0208e9d4.hpp"
#include "nnsys/fnd/list.h"
#include "nitro/mi.h"

// (the object whose lists these functions keep)
typedef struct {
    u8 unk_0[0x278];
    NNSFndList list278;
    NNSFndList list284;
    u8 unk_290;
} UnkListOwner_0208e9d4;

extern "C" void func_020326f8(NNSFndList *list, void *object);
extern "C" void *func_02032878(NNSFndList *list);
extern "C" u8 data_020fc708[];

extern "C" void func_0208e9d4(void);
extern "C" void func_0208f294(void);
extern "C" void func_0208f2d0(u8 *obj);
extern "C" void func_0208f2e0(u8 *obj, int i);
extern "C" void func_0208f300(u8 *obj, u8 value);
extern "C" u8 func_0208f308(u8 *obj);
extern "C" void func_0208f310(void);
extern "C" void func_0208f3c0(void);
extern "C" void func_0208f628(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern "C" void func_0208f6ac(void);
extern "C" void func_0208f750(void);
extern "C" void func_0208f7c8(void);
extern "C" void func_0208f960(void);
extern "C" void func_0208fac4(void);
extern "C" void func_0208fc04(void);
extern "C" s32 func_0208fc44(s32 arg0, u8 *arg1);
extern "C" void func_0208fc70(void);
extern "C" void func_0208fd90(s32 arg0);
extern "C" void *func_0208fdf4(s32 arg0);
extern "C" void func_0208fe20(s32 arg0, u8 *arg1);
extern "C" void func_0208fe50(u8 *obj, void *object);
extern "C" void func_0208fe60(u8 *obj, void *object, void *target);
extern "C" u16 func_0208fe7c(u8 *obj);
extern "C" void func_0208fe88(void);
extern "C" void *func_0208fed0(u8 *obj);
extern "C" void func_0208fef4(s32 arg0, s32 arg1);
extern "C" void *func_0208ff1c(u8 *obj, void *object);
extern "C" void *func_0208ff2c(u8 *obj);
extern "C" void *func_0208ff34(u8 *obj, int index);
extern "C" void func_0208ff4c(u8 *obj, void *object);
extern "C" void *func_0208ff5c(u8 *obj, void *object);
extern "C" void func_0208ff6c(u8 *obj, void *object);
extern "C" void func_0208ff7c(void);

extern "C" void FX_SinCosTable_(void);
extern "C" s32 NNS_FndInitList(...);
extern "C" void NNS_G3dGlbFlushVP(void);
extern "C" void func_02001d60(void);
extern "C" void func_02001d80(void);
extern "C" void func_0200226c(void);
extern "C" void func_02022484(void);
extern "C" void func_02022b2c(void);
extern "C" void func_0202300c(void);
extern "C" void func_0202323c(void);
extern "C" s32 func_0202b608(...);
extern "C" s32 func_0203274c(...);

extern "C" asm void func_0208e9d4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x80
    mov r9, r2
    ldr r2, [sp, #0xa8]
    movs r4, r1
    str r2, [sp, #0xa8]
    ldr r2, [sp, #0xac]
    mov r10, r0
    str r2, [sp, #0xac]
    mov r8, r3
    addmi sp, sp, #0x80
    ldmmiia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r4, #1
    addge sp, sp, #0x80
    ldmgeia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    bl func_0208f2e0
    mov r0, r10
    bl func_0208f308
    cmp r0, #0
    addeq sp, sp, #0x80
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, #0x114
    mul r0, r4, r0
    add r1, r10, r0
    str r0, [sp, #0x38]
    str r9, [r1, #0xf4]
    ldr r2, [sp, #0xb0]
    ldr r0, [sp, #0xa8]
    str r8, [r1, #0xf8]
    str r0, [r1, #0xfc]
    ldr r0, [sp, #0xac]
    cmp r2, #0x63
    movgt r2, #0x63
    str r0, [r1, #0x100]
    rsb r6, r2, #0x63
    mov r0, #6
    mul r2, r6, r0
    ldr r4, =0xa57eb503
    mov r0, r2, lsr #0x1f
    smull r1, r3, r4, r2
    add r3, r2, r3
    add r3, r0, r3, asr #6
    add r3, r3, #0xc
    mov r1, r3, lsl #0x10
    ldr r2, =0xb60b60b7
    mov r0, r1, lsr #0x1f
    smull r1, r5, r2, r1
    add r5, r5, r3, lsl #16
    add r5, r0, r5, asr #8
    mov r1, r5, lsl #0x10
    ldr r0, [sp, #0xac]
    str r1, [sp, #0x50]
    ldr r1, [sp, #0xa8]
    sub r0, r0, r8
    sub r1, r1, r9
    bl func_0200226c
    str r0, [sp, #0x2c]
    ldr r0, [sp, #0xa8]
    sub r0, r9, r0
    str r0, [sp, #0x34]
    ldr r0, [sp, #0xac]
    sub r0, r8, r0
    str r0, [sp, #0x30]
    mov r0, r0, asr #2
    smull r2, r1, r0, r0
    ldr r0, [sp, #0x34]
    mov r5, r0, asr #2
    smull r3, r0, r5, r5
    adds r3, r3, #0x800
    adc r0, r0, #0
    mov r3, r3, lsr #0xc
    adds r2, r2, #0x800
    orr r3, r3, r0, lsl #20
    adc r0, r1, #0
    mov r1, r2, lsr #0xc
    orr r1, r1, r0, lsl #20
    mov r0, r1, asr #4
    add r0, r0, r3, asr #4
    mov r5, #0
    bl func_02001d80
    mov r0, r0, lsl #4
    str r0, [sp, #0x4c]
    mov r0, r10
    bl func_0208fd90
    mov r0, r10
    bl func_0208fdf4
    str r0, [sp, #0x44]
    ldr r1, [sp, #0x44]
    mov r0, r10
    bl func_0208fe50
    mov r0, r10
    bl func_0208fdf4
    str r0, [sp, #0x48]
    ldr r1, [sp, #0x48]
    mov r0, r10
    bl func_0208fe50
    ldr r0, [sp, #0x2c]
    add r11, r0, #0x6000
    mov r0, #0xa
    mul r1, r6, r0
    smull r0, r2, r4, r1
    add r2, r1, r2
    mov r0, r1, lsr #0x1f
    add r2, r0, r2, asr #6
    add r0, r2, #0xa
    mov r0, r0, lsl #0x10
    ldr r4, =FX_SinCosTable_
    mov r7, r0, lsr #0x10
@L_0208eb84:
    mov r0, r10
    bl func_0208fdf4
    mov r6, r0
    mov r0, r10
    mov r1, r6
    bl func_0208fe50
    mov r1, r5, lsl #0x10
    mov r0, r1, asr #4
    add r0, r1, r0, lsr #27
    add r0, r11, r0, asr #5
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r0, r0, asr #4
    mov r0, r0, lsl #1
    mov r2, r0, lsl #1
    add r0, r4, r0, lsl #1
    ldrsh r1, [r0, #2]
    ldrsh r0, [r4, r2]
    add r5, r5, #1
    mla r1, r7, r1, r9
    str r1, [r6]
    mla r0, r7, r0, r8
    str r0, [r6, #4]
    cmp r5, #9
    blt @L_0208eb84
    mov r0, r10
    mov r1, #2
    bl func_0208ff34
    mov r7, r0
    ldr r1, [sp, #0x2c]
    ldr r0, [sp, #0x50]
    ldr r3, [r6]
    sub r2, r1, r0, lsr #16
    add r1, r1, r0, lsr #16
    mov r0, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r0, r0, asr #4
    mov r2, r0, lsl #1
    mov r0, r1, lsl #0x10
    add r1, r2, #1
    mov r1, r1, lsl #1
    ldrsh r1, [r4, r1]
    mov r0, r0, lsr #0x10
    mov r0, r0, asr #4
    str r1, [sp, #0x24]
    mov r1, r2, lsl #1
    ldrsh r1, [r4, r1]
    mov r0, r0, lsl #1
    ldr r2, [sp, #0x44]
    str r1, [sp, #0x1c]
    ldr r1, [sp, #0x4c]
    mov r8, #0
    mov r5, r1, lsl #1
    ldr r1, [sp, #0x24]
    mov r1, r1, asr #0x1f
    str r1, [sp, #0x28]
    ldr r1, [sp, #0x1c]
    mov r1, r1, asr #0x1f
    str r1, [sp, #0x20]
    add r1, r0, #1
    mov r1, r1, lsl #1
    mov r0, r0, lsl #1
    ldrsh r1, [r4, r1]
    ldrsh r0, [r4, r0]
    ldr r4, [sp, #0x24]
    str r1, [sp, #0x14]
    smull r12, r11, r4, r5
    adds r12, r12, #0x800
    adc r4, r11, #0
    mov r11, r12, lsr #0xc
    orr r11, r11, r4, lsl #20
    add r4, r3, r11
    mov r3, r2
    str r4, [r3]
    ldr r4, [sp, #0x1c]
    ldr r12, [r6, #4]
    smull r11, lr, r4, r5
    adds r4, r11, #0x800
    str r0, [sp, #0xc]
    mov r0, r1
    mov r0, r0, asr #0x1f
    str r0, [sp, #0x18]
    ldr r0, [sp, #0x34]
    adc r11, lr, #0
    mov r4, r4, lsr #0xc
    orr r4, r4, r11, lsl #20
    add r11, r12, r4
    mov r4, r2
    str r11, [r4, #4]
    ldr r4, [sp, #0x14]
    mov r0, r0, asr #0x1f
    smull r11, lr, r4, r5
    adds r4, r11, #0x800
    mov r9, r0, lsl #0xd
    ldr r0, [sp, #0xc]
    ldr r12, [r7]
    mov r0, r0, asr #0x1f
    str r0, [sp, #0x10]
    ldr r0, [sp, #0x34]
    adc r11, lr, #0
    mov r4, r4, lsr #0xc
    orr r4, r4, r11, lsl #20
    add r11, r12, r4
    ldr r4, [sp, #0x48]
    orr r9, r9, r0, lsr #19
    str r11, [r4]
    ldr r4, [sp, #0xc]
    ldr r0, [sp, #0x30]
    smull r11, r5, r4, r5
    adds r11, r11, #0x800
    adc r4, r5, #0
    mov r5, r11, lsr #0xc
    mov r0, r0, asr #0x1f
    orr r5, r5, r4, lsl #20
    ldr r1, [sp, #0x30]
    mov r0, r0, lsl #0xd
    orr r0, r0, r1, lsr #19
    str r0, [sp, #0x54]
    ldr r4, [sp, #0x34]
    mov r11, #0x800
    adds r4, r11, r4, lsl #13
    adc r11, r9, #0
    mov r4, r4, lsr #0xc
    orr r4, r4, r11, lsl #20
    ldr r9, [sp, #0x30]
    mov r12, #0x800
    ldr r11, [sp, #0x54]
    adds r9, r12, r9, lsl #13
    adc r12, r11, #0
    mov r11, r9, lsr #0xc
    orr r11, r11, r12, lsl #20
    ldr r12, [r7, #4]
    ldr r9, [sp, #0xa8]
    add r5, r12, r5
    ldr r12, [sp, #0xa8]
    add r9, r9, r11
    sub r12, r12, r11
    ldr r11, [sp, #0x48]
    mov r0, r10
    str r5, [r11, #4]
    ldr r5, [sp, #0xac]
    str r9, [sp, #0x70]
    sub r9, r5, r4
    add r4, r5, r4
    str r4, [sp, #0x7c]
    str r12, [sp, #0x78]
    str r9, [sp, #0x74]
    add r4, sp, #0x78
    str r4, [sp]
    mov r4, r2
    mov r1, r6
    add r3, sp, #0x70
    str r4, [sp, #4]
    bl func_0208f3c0
    add r0, sp, #0x78
    str r0, [sp]
    ldr r0, [sp, #0x48]
    ldr r2, [sp, #0x48]
    str r0, [sp, #4]
    add r3, sp, #0x70
    mov r0, r10
    mov r1, r7
    bl func_0208f3c0
    ldr r0, [sp, #0x48]
    ldr r3, [r10, #0x120]
    ldr r0, [r0, #4]
    cmp r0, r3
    orrlt r8, r8, #1
    blt @L_0208ee98
    ldr r2, [r10, #0x130]
    cmp r0, r2
    orrgt r8, r8, #2
    bgt @L_0208ee98
    ldr r0, [sp, #0x48]
    ldr r1, [r10, #0x11c]
    ldr r0, [r0]
    cmp r0, r1
    orrlt r8, r8, #4
    blt @L_0208ee98
    cmp r0, r2
    orrgt r8, r8, #8
    bgt @L_0208ee98
    ldr r0, [sp, #0x44]
    ldr r0, [r0, #4]
    cmp r0, r3
    orrlt r8, r8, #1
    blt @L_0208ee98
    cmp r0, r2
    orrgt r8, r8, #2
    bgt @L_0208ee98
    ldr r0, [sp, #0x44]
    ldr r0, [r0]
    cmp r0, r1
    orrlt r8, r8, #4
    blt @L_0208ee98
    cmp r0, r2
    orrgt r8, r8, #8
@L_0208ee98:
    cmp r8, #0
    beq @L_0208ef7c
    ldr r0, [sp, #0x4c]
    ldr r3, [sp, #0x24]
    add r2, r0, r0, lsl #1
    mov r1, r2, asr #0x1f
    umull r5, r4, r3, r2
    mla r4, r3, r1, r4
    ldr r3, [sp, #0x28]
    adds r5, r5, #0x800
    mla r4, r3, r2, r4
    adc r3, r4, #0
    mov r4, r5, lsr #0xc
    ldr r0, [r6]
    orr r4, r4, r3, lsl #20
    add r3, r0, r4
    ldr r0, [sp, #0x44]
    str r3, [r0]
    ldr r0, [sp, #0x1c]
    ldr r5, [r6, #4]
    umull r4, r3, r0, r2
    mla r3, r0, r1, r3
    ldr r0, [sp, #0x20]
    adds r4, r4, #0x800
    mla r3, r0, r2, r3
    adc r0, r3, #0
    mov r3, r4, lsr #0xc
    orr r3, r3, r0, lsl #20
    ldr r0, [sp, #0x44]
    add r3, r5, r3
    str r3, [r0, #4]
    ldr r0, [sp, #0x14]
    ldr r5, [r7]
    umull r4, r3, r0, r2
    mla r3, r0, r1, r3
    ldr r0, [sp, #0x18]
    adds r4, r4, #0x800
    mla r3, r0, r2, r3
    adc r0, r3, #0
    mov r3, r4, lsr #0xc
    orr r3, r3, r0, lsl #20
    ldr r0, [sp, #0x48]
    add r3, r5, r3
    str r3, [r0]
    ldr r0, [sp, #0xc]
    ldr r5, [r7, #4]
    umull r4, r3, r0, r2
    mla r3, r0, r1, r3
    ldr r0, [sp, #0x10]
    adds r1, r4, #0x800
    mla r3, r0, r2, r3
    adc r0, r3, #0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #20
    ldr r0, [sp, #0x48]
    add r1, r5, r1
    str r1, [r0, #4]
@L_0208ef7c:
    mov r0, #0
    str r0, [sp, #0x40]
@L_0208ef84:
    mov r7, #0
    mov r0, r10
    mov r1, r7
    bl func_0208fef4
    mov r8, r0
    mov r0, r10
    bl func_0208fe7c
    str r0, [sp, #0x3c]
    mov r4, r7
    str r7, [sp, #8]
    cmp r0, #0
    ble @L_0208f0c0
    ldr r0, [sp, #0x40]
    add r2, r10, #0x144
    add r1, r10, #0x13c
    add r5, r2, r0, lsl #4
    add r11, r1, r0, lsl #4
@L_0208efc8:
    cmp r4, #0
    mov r0, r10
    mov r1, r8
    bne @L_0208efe0
    bl func_0208fef4
    b @L_0208efe4
@L_0208efe0:
    bl func_0208fed0
@L_0208efe4:
    mov r9, r0
    add r0, sp, #0x60
    str r5, [sp]
    add r0, r0, r7, lsl #3
    str r0, [sp, #4]
    mov r0, r10
    mov r1, r8
    mov r2, r9
    mov r3, r11
    bl func_0208f3c0
    cmp r0, #0
    beq @L_0208f09c
    mov r0, r10
    bl func_0208fdf4
    add r1, sp, #0x58
    str r0, [r1, r7, lsl #2]
    mov r0, r1
    ldr r6, [r0, r7, lsl #2]
    cmp r4, #0
    mov r0, r10
    mov r1, r6
    bne @L_0208f044
    mov r2, r9
    b @L_0208f048
@L_0208f044:
    mov r2, r8
@L_0208f048:
    bl func_0208fe60
    add r0, sp, #0x60
    ldr r1, [r0, r7, lsl #3]!
    cmp r7, #0
    str r1, [r6]
    ldr r0, [r0, #4]
    str r0, [r6, #4]
    bne @L_0208f098
    mov r3, r8
    mov r0, r10
    mov r1, r11
    mov r2, r5
    bl func_0208f750
    cmp r0, #0
    bne @L_0208f098
    mov r0, r10
    mov r1, #0
    mov r4, #1
    bl func_0208fef4
    mov r9, r0
@L_0208f098:
    add r7, r7, #1
@L_0208f09c:
    mov r8, r9
    cmp r7, #2
    bge @L_0208f0c0
    ldr r0, [sp, #8]
    add r1, r0, #1
    ldr r0, [sp, #0x3c]
    str r1, [sp, #8]
    cmp r1, r0
    blt @L_0208efc8
@L_0208f0c0:
    cmp r7, #0
    mov r5, #0
    cmpne r7, #1
    beq @L_0208f0fc
    cmp r7, #2
    bgt @L_0208f0fc
    cmp r4, #0
    bne @L_0208f0ec
    ldr r1, [sp, #0x58]
    ldr r2, [sp, #0x5c]
    b @L_0208f0f4
@L_0208f0ec:
    ldr r1, [sp, #0x5c]
    ldr r2, [sp, #0x58]
@L_0208f0f4:
    mov r0, r10
    bl func_0208fe88
@L_0208f0fc:
    ldr r0, [sp, #0x40]
    add r0, r0, #1
    str r0, [sp, #0x40]
    cmp r0, #4
    blt @L_0208ef84
    mov r4, #0
    mov r0, r10
    mov r1, r4
    bl func_0208ff1c
    mov r1, r0
@L_0208f124:
    cmp r1, #0
    beq @L_0208f154
    ldr r0, [r1]
    add r3, r10, r4, lsl #3
    str r0, [r3, #4]
    ldr r2, [r1, #4]
    mov r0, r10
    str r2, [r3, #8]
    bl func_0208ff1c
    mov r1, r0
    add r4, r4, #1
    b @L_0208f124
@L_0208f154:
    ldr r0, [sp, #0x38]
    str r4, [r10]
    add r1, r10, r0
    sub r0, r4, #1
    cmp r0, #0
    add r6, r1, #4
    mov r7, #0
    ble @L_0208f1b4
@L_0208f174:
    add r2, r7, #1
    cmp r2, r4
    subge r2, r2, r4
    add r3, r7, #2
    cmp r3, r4
    subge r3, r3, r4
    mov r0, r10
    add r1, r6, r7, lsl #3
    add r2, r6, r2, lsl #3
    add r3, r6, r3, lsl #3
    bl func_0208f750
    ldr r4, [r10]
    add r7, r7, #1
    sub r0, r4, #1
    cmp r7, r0
    blt @L_0208f174
@L_0208f1b4:
    add r0, r10, #0x200
    ldrh r6, [r0, #0x80]
    mov r7, #0
    cmp r6, #0
    ble @L_0208f228
@L_0208f1c8:
    mov r0, r10
    mov r1, r5
    bl func_0208ff1c
    movs r4, r0
    beq @L_0208f228
    mov r0, r10
    mov r1, r4
    bl func_0208ff4c
    mov r0, r10
    mov r1, r4
    bl func_0208ff6c
    mov r0, r10
    bl func_0208ff2c
    movs r4, r0
    beq @L_0208f228
    mov r0, r10
    mov r1, r4
    bl func_0208ff4c
    mov r0, r10
    mov r1, r4
    bl func_0208ff6c
    add r7, r7, #1
    cmp r7, r6
    blt @L_0208f1c8
@L_0208f228:
    mov r4, #0
    mov r0, r10
    mov r1, r4
    bl func_0208ff5c
    mov r1, r0
@L_0208f23c:
    cmp r1, #0
    beq @L_0208f26c
    ldr r0, [r1]
    add r3, r10, r4, lsl #3
    str r0, [r3, #0x7c]
    ldr r2, [r1, #4]
    mov r0, r10
    str r2, [r3, #0x80]
    bl func_0208ff5c
    mov r1, r0
    add r4, r4, #1
    b @L_0208f23c
@L_0208f26c:
    ldr r0, [sp, #0x38]
    str r4, [r10]
    add r0, r10, r0
    mov r1, #1
    strb r1, [r0, #0x10d]
    add sp, sp, #0x80
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_0208f294(void)
{
    cmp r1, #0
    bxlt lr
    cmp r1, #1
    bxge lr
    mov r12, #0x114
    mla r12, r1, r12, r0
    add r0, r12, #0x100
    strh r2, [r0, #0xa]
    ldr r1, [sp]
    mov r0, #1
    cmp r1, #0
    strb r3, [r12, #0x10c]
    moveq r0, #0
    strb r0, [r12, #0x10f]
    bx lr
}

extern "C" void func_0208f2d0(u8 *obj)
{
    func_0208f2e0(obj, 0);
}

extern "C" void func_0208f2e0(u8 *obj, int i)
{
    if (i < 0) {
        return;
    }
    if (i < 1) {
        (obj + i * 0x114)[0x10D] = 0;
    }
}

extern "C" void func_0208f300(u8 *obj, u8 value)
{
    obj[0x290] = value;
}

extern "C" u8 func_0208f308(u8 *obj)
{
    return obj[0x290];
}

extern "C" asm void func_0208f310(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #8
    cmp r1, #1
    mov r4, r0
    addhs sp, sp, #8
    movhs r0, #0
    ldmhsia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, #0x114
    mul r0, r1, r0
    str r2, [sp]
    str r3, [sp, #4]
    ldr r7, [r4, r0]
    add r10, r4, r0
    mov r9, #0
    mov r8, r9
    cmp r7, #0
    add r6, r10, #4
    ble @L_0208f390
    add r5, sp, #0
@L_0208f35c:
    add r2, r8, #1
    cmp r2, r7
    subge r2, r2, r7
    mov r0, r4
    mov r3, r5
    add r1, r6, r8, lsl #3
    add r2, r6, r2, lsl #3
    bl func_0208f750
    cmp r0, #0
    add r8, r8, #1
    orreq r9, r9, #1
    cmp r8, r7
    blt @L_0208f35c
@L_0208f390:
    cmp r9, #0
    mvnne r0, #0
    bne @L_0208f3b0
    add r3, sp, #0
    mov r0, r4
    add r1, r10, #0xf4
    add r2, r10, #0xfc
    bl func_0208f7c8
@L_0208f3b0:
    cmp r0, #0
    mvnlt r0, #0
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_0208f3c0(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x24
    ldr r7, [sp, #0x40]
    mov r0, r3
    ldr r4, [r0]
    str r3, [sp]
    ldr r3, [r0, #4]
    ldr r0, [r2, #4]
    ldr r2, [r2]
    ldr r5, [r7]
    mov r4, r4, asr #4
    ldr r6, [r1]
    rsb r8, r4, r5, asr #4
    mov r2, r2, asr #4
    sub r5, r2, r6, asr #4
    mov r2, r8, asr #2
    str r2, [sp, #4]
    mov r2, r5, asr #2
    str r2, [sp, #0x14]
    ldr r5, [r1, #4]
    mov r1, r0, asr #4
    sub r1, r1, r5, asr #4
    mov r1, r1, asr #2
    str r1, [sp, #0xc]
    ldr r2, [r7, #4]
    mov r3, r3, asr #4
    rsb r0, r3, r2, asr #4
    str r0, [sp, #0x1c]
    ldr r2, [sp, #0x14]
    mov r0, r0, asr #2
    smull r7, r1, r2, r0
    adds r2, r7, #0x800
    sub r4, r4, r6, asr #4
    ldr r9, [sp, #0xc]
    ldr r7, [sp, #4]
    sub r3, r3, r5, asr #4
    smull r12, r7, r9, r7
    adc r6, r1, #0
    adds r5, r12, #0x800
    mov r9, r2, lsr #0xc
    adc r1, r7, #0
    mov r2, r5, lsr #0xc
    orr r2, r2, r1, lsl #20
    ldr r1, [sp, #4]
    orr r9, r9, r6, lsl #20
    sub r2, r9, r2
    mov r1, r1, asr #0x1f
    str r1, [sp, #8]
    ldr r1, [sp, #0xc]
    movs r7, r2, lsl #2
    mov r1, r1, asr #0x1f
    str r1, [sp, #0x10]
    ldr r1, [sp, #0x14]
    ldr r9, [sp, #0x44]
    mov r1, r1, asr #0x1f
    str r1, [sp, #0x18]
    rsbmi r1, r7, #0
    movpl r1, r7
    cmp r1, #2
    mov r2, r0, asr #0x1f
    addlt sp, sp, #0x24
    movlt r0, #0
    ldmltia sp!, {r4, r5, r6, r7, r8, r9, pc}
    mov r1, r4, asr #2
    str r1, [sp, #0x20]
    mov r6, r3, asr #2
    ldr r3, [sp, #0x20]
    mov r4, r1, asr #0x1f
    umull lr, r12, r3, r0
    mla r12, r3, r2, r12
    mla r12, r4, r0, r12
    adds r0, lr, #0x800
    adc r2, r12, #0
    mov r0, r0, lsr #0xc
    orr r0, r0, r2, lsl #20
    ldr r2, [sp, #4]
    mov r5, r6, asr #0x1f
    umull r12, r3, r6, r2
    ldr r2, [sp, #8]
    adds r12, r12, #0x800
    mla r3, r6, r2, r3
    ldr r2, [sp, #4]
    mov r1, r7
    mla r3, r5, r2, r3
    adc r2, r3, #0
    mov r3, r12, lsr #0xc
    orr r3, r3, r2, lsl #20
    sub r0, r0, r3
    mov r0, r0, lsl #2
    bl func_02001d60
    mov r1, r7
    mov r7, r0
    ldr r2, [sp, #0x20]
    ldr r0, [sp, #0xc]
    umull r12, r3, r2, r0
    ldr r0, [sp, #0x10]
    mla r3, r2, r0, r3
    ldr r0, [sp, #0xc]
    mla r3, r4, r0, r3
    adds r0, r12, #0x800
    adc r2, r3, #0
    mov r0, r0, lsr #0xc
    orr r0, r0, r2, lsl #20
    ldr r2, [sp, #0x14]
    umull r4, r3, r6, r2
    ldr r2, [sp, #0x18]
    adds r4, r4, #0x800
    mla r3, r6, r2, r3
    ldr r2, [sp, #0x14]
    mla r3, r5, r2, r3
    adc r2, r3, #0
    mov r3, r4, lsr #0xc
    orr r3, r3, r2, lsl #20
    sub r0, r0, r3
    mov r0, r0, lsl #2
    bl func_02001d60
    adds r1, r7, #2
    bmi @L_0208f5b8
    sub r1, r7, #2
    cmp r1, #0x1000
    bgt @L_0208f5b8
    adds r1, r0, #2
    bmi @L_0208f5b8
    sub r1, r0, #2
    cmp r1, #0x1000
    ble @L_0208f5c4
@L_0208f5b8:
    add sp, sp, #0x24
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
@L_0208f5c4:
    smull r2, r4, r8, r0
    ldr r1, [sp, #0x1c]
    adds r5, r2, #0x800
    smull r3, r2, r1, r0
    mov r0, #0
    adc r1, r4, r0
    mov r0, #0x800
    adds r3, r3, r0
    ldr r0, [sp]
    mov r4, r5, lsr #0xc
    ldr r0, [r0]
    orr r4, r4, r1, lsl #20
    add r0, r0, r4, lsl #4
    str r0, [r9]
    mov r0, #0
    adc r1, r2, r0
    ldr r0, [sp]
    mov r2, r3, lsr #0xc
    ldr r0, [r0, #4]
    orr r2, r2, r1, lsl #20
    add r0, r0, r2, lsl #4
    str r0, [r9, #4]
    mov r0, #1
    add sp, sp, #0x24
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
}

extern "C" void func_0208f628(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    *(s32 *)(arg0 + 0x11C) = (arg1 - 0x30000);
    *(s32 *)(arg0 + 0x120) = arg2;
    *(s32 *)(arg0 + 0x124) = (arg3 + 0x30000);
    *(s32 *)(arg0 + 0x128) = arg2;
    *(s32 *)(arg0 + 0x12C) = (arg3 + 0x30000);
    *(s32 *)(arg0 + 0x130) = arg4;
    *(s32 *)(arg0 + 0x134) = (arg1 - 0x30000);
    *(s32 *)(arg0 + 0x138) = arg4;
    *(s32 *)(arg0 + 0x13C) = ((arg1 << 1) - arg3);
    *(s32 *)(arg0 + 0x140) = arg2;
    *(s32 *)(arg0 + 0x144) = ((arg3 << 1) - arg1);
    *(s32 *)(arg0 + 0x148) = arg2;
    *(s32 *)(arg0 + 0x14C) = arg3;
    *(s32 *)(arg0 + 0x150) = ((arg2 << 1) - arg4);
    *(s32 *)(arg0 + 0x154) = arg3;
    *(s32 *)(arg0 + 0x158) = ((arg4 << 1) - arg2);
    *(s32 *)(arg0 + 0x15C) = ((arg3 << 1) - arg1);
    *(s32 *)(arg0 + 0x160) = arg4;
    *(s32 *)(arg0 + 0x164) = ((arg1 << 1) - arg3);
    *(s32 *)(arg0 + 0x168) = arg4;
    *(s32 *)(arg0 + 0x16C) = arg1;
    *(s32 *)(arg0 + 0x170) = ((arg4 << 1) - arg2);
    *(s32 *)(arg0 + 0x174) = arg1;
    *(s32 *)(arg0 + 0x178) = ((arg2 << 1) - arg4);
    return;
}

extern "C" asm void func_0208f6ac(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x24
    ldr r5, [sp, #0x38]
    mov r6, r1, asr #4
    mov r12, r3, asr #4
    mov r3, r5, asr #4
    ldr r1, [sp, #0x40]
    mov lr, r2, asr #4
    ldr r4, [sp, #0x3c]
    mov r1, r1, asr #4
    mov r2, r4, asr #4
    str r12, [sp, #0x14]
    str r3, [sp, #0x18]
    str r2, [sp, #0xc]
    ldr r5, [sp, #0x44]
    str r6, [sp, #0x1c]
    str lr, [sp, #0x20]
    str r1, [sp, #0x10]
    ldr r1, [r5]
    ldr r4, [sp, #0x48]
    mov r1, r1, asr #4
    str r1, [sp, #4]
    ldr r1, [r4]
    add r12, sp, #4
    mov r1, r1, asr #4
    str r1, [sp, #8]
    add r1, sp, #0x1c
    add r2, sp, #0x14
    add r3, sp, #0xc
    str r12, [sp]
    bl func_0208f960
    ldr r1, [sp, #4]
    cmn r0, #1
    mov r1, r1, lsl #4
    str r1, [r5]
    ldr r1, [sp, #8]
    movne r0, r0, lsl #4
    mov r1, r1, lsl #4
    str r1, [r4]
    add sp, sp, #0x24
    ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" asm void func_0208f750(void)
{
    stmdb sp!, {r4, lr}
    ldr r4, [r1]
    ldr r12, [r2]
    ldr r0, [r3]
    sub lr, r4, r12
    sub r12, r4, r0
    ldr r4, [r1, #4]
    ldr r1, [r3, #4]
    ldr r0, [r2, #4]
    sub r2, r4, r1
    sub r1, r4, r0
    mov r0, r2, asr #6
    mov r3, lr, asr #6
    smull r0, lr, r3, r0
    mov r2, r1, asr #6
    mov r1, r12, asr #6
    adds r4, r0, #0x800
    mov r0, #0
    smull r3, r1, r2, r1
    adc r12, lr, r0
    adds r2, r3, #0x800
    mov r3, r4, lsr #0xc
    adc r1, r1, r0
    mov r2, r2, lsr #0xc
    orr r3, r3, r12, lsl #20
    orr r2, r2, r1, lsl #20
    sub r1, r3, r2
    cmp r1, #0
    movgt r0, #1
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_0208f7c8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    ldr r6, [r1]
    ldr r0, [r2]
    ldr r5, [r3]
    sub r4, r0, r6
    sub r10, r5, r6
    ldr r6, [r1, #4]
    ldr r0, [r2, #4]
    ldr r1, [r3, #4]
    sub r5, r0, r6
    smull r0, r2, r5, r5
    adds r3, r0, #0x800
    sub r8, r1, r6
    smull r0, r1, r4, r4
    adc r9, r2, #0
    adds r7, r0, #0x800
    mov r11, r3, lsr #0xc
    smull r0, r2, r4, r10
    adc r6, r1, #0
    adds r3, r0, #0x800
    mov r7, r7, lsr #0xc
    orr r11, r11, r9, lsl #20
    orr r7, r7, r6, lsl #20
    add r6, r7, r11
    smull r1, r0, r5, r8
    adc r2, r2, #0
    adds r1, r1, #0x800
    mov r3, r3, lsr #0xc
    mov r7, r1, lsr #0xc
    adc r0, r0, #0
    orr r3, r3, r2, lsl #20
    orr r7, r7, r0, lsl #20
    add r0, r3, r7
    mov r2, r4, asr #0x1f
    mov r1, r6
    mov r11, r5, asr #0x1f
    str r2, [sp]
    mov r7, r8, asr #0x1f
    mov r9, r10, asr #0x1f
    bl func_02001d60
    cmp r0, #0
    blt @L_0208f878
    cmp r0, #0x1000
    ble @L_0208f8d0
@L_0208f878:
    umull r3, r2, r10, r10
    mla r2, r10, r9, r2
    umull r1, r0, r8, r8
    mla r0, r8, r7, r0
    adds r3, r3, #0x800
    mla r2, r9, r10, r2
    adc r2, r2, #0
    adds r1, r1, #0x800
    mla r0, r7, r8, r0
    mov r3, r3, lsr #0xc
    adc r0, r0, #0
    mov r1, r1, lsr #0xc
    orr r3, r3, r2, lsl #20
    orr r1, r1, r0, lsl #20
    add r0, r3, r1
    cmp r6, r0
    bge @L_0208f8c8
    mov r0, r6
    bl func_02001d80
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0208f8c8:
    bl func_02001d80
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0208f8d0:
    mov r1, r0, asr #0x1f
    umull r7, r6, r5, r0
    mla r6, r5, r1, r6
    umull r3, r2, r4, r0
    mla r2, r4, r1, r2
    ldr r1, [sp]
    mla r6, r11, r0, r6
    adds r5, r7, #0x800
    mla r2, r1, r0, r2
    adc r4, r6, #0
    adds r3, r3, #0x800
    adc r1, r2, #0
    mov r2, r3, lsr #0xc
    orr r2, r2, r1, lsl #20
    sub r1, r2, r10
    mov r0, r5, lsr #0xc
    orr r0, r0, r4, lsl #20
    smull r2, r3, r1, r1
    adds r4, r2, #0x800
    sub r0, r0, r8
    smull r2, r1, r0, r0
    mov r0, #0
    adc r3, r3, r0
    mov r0, #0x800
    adds r2, r2, r0
    mov r0, #0
    adc r0, r1, r0
    mov r1, r2, lsr #0xc
    mov r4, r4, lsr #0xc
    orr r1, r1, r0, lsl #20
    orr r4, r4, r3, lsl #20
    mov r0, r1, asr #4
    add r0, r0, r4, asr #4
    bl func_02001d80
    mov r0, r0, lsl #2
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_0208f960(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r1
    ldr r4, [r10]
    ldr r1, [r2]
    ldr r0, [r3]
    sub r6, r1, r4
    sub r0, r0, r4
    smull r0, r1, r6, r0
    adds r5, r0, #0x800
    ldr r4, [r10, #4]
    ldr r2, [r2, #4]
    ldr r0, [r3, #4]
    sub r8, r2, r4
    sub r0, r0, r4
    smull r0, r2, r8, r0
    adc r4, r1, #0
    adds r3, r0, #0x800
    mov r5, r5, lsr #0xc
    smull r1, r0, r6, r6
    adc r2, r2, #0
    adds r11, r1, #0x800
    mov r3, r3, lsr #0xc
    smull r1, r7, r8, r8
    adc r0, r0, #0
    adds r9, r1, #0x800
    mov r1, r11, lsr #0xc
    adc r7, r7, #0
    mov r9, r9, lsr #0xc
    orr r5, r5, r4, lsl #20
    orr r3, r3, r2, lsl #20
    orr r1, r1, r0, lsl #20
    orr r9, r9, r7, lsl #20
    add r0, r5, r3
    add r1, r1, r9
    mov r7, r8, asr #0x1f
    mov r5, r6, asr #0x1f
    ldr r9, [sp, #0x28]
    mov r4, #0
    mov r11, #0x800
    bl func_02001d60
    cmp r0, #0
    blt @L_0208fa10
    cmp r0, #0x1000
    ble @L_0208fa18
@L_0208fa10:
    mvn r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0208fa18:
    mov r3, r0, asr #0x1f
    umull r2, r1, r6, r0
    mla r1, r6, r3, r1
    umull r12, r6, r8, r0
    mla r6, r8, r3, r6
    adds r3, r2, r11
    mla r1, r5, r0, r1
    mla r6, r7, r0, r6
    adc r2, r1, r4
    mov r3, r3, lsr #0xc
    adds r1, r12, r11
    ldr r0, [r10]
    orr r3, r3, r2, lsl #20
    add r3, r0, r3
    str r3, [r9]
    adc r0, r6, r4
    mov r1, r1, lsr #0xc
    ldr r2, [r10, #4]
    orr r1, r1, r0, lsl #20
    add r0, r2, r1
    str r0, [r9, #4]
    ldr r0, [r10]
    ldr r1, [r10, #4]
    subs r3, r0, r3
    ldr r0, [r9, #4]
    rsbmi r3, r3, #0
    subs r4, r1, r0
    smull r0, r2, r3, r3
    rsbmi r4, r4, #0
    adds r3, r0, #0x800
    smull r1, r0, r4, r4
    adc r2, r2, #0
    adds r1, r1, #0x800
    mov r3, r3, lsr #0xc
    adc r0, r0, #0
    mov r1, r1, lsr #0xc
    orr r1, r1, r0, lsl #20
    orr r3, r3, r2, lsl #20
    mov r0, r1, asr #4
    add r0, r0, r3, asr #4
    bl func_02001d80
    mov r0, r0, lsl #2
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_0208fac4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x24
    movs r6, r1
    mov r7, r0
    ldrneb r0, [r6, #0x10d]
    mov r5, r2
    mov r4, r3
    cmpne r0, #0
    addeq sp, sp, #0x24
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    mov r8, #0
    mov r1, r8
    mov r2, r8
    mov r0, #0x11
    bl func_0202b608
    bl NNS_G3dGlbFlushVP
    mov r0, r7
    bl func_0208fc04
    mov r0, r7
    mov r1, r6
    bl func_0208fc44
    mov r0, #0x2a
    add r1, sp, #8
    mov r2, #1
    str r8, [sp, #8]
    bl func_0202b608
    add r0, r6, #0x100
    ldrh r0, [r0, #8]
    add r0, r0, #0x82
    add r0, r0, #0xf00
    rsb r0, r0, #0
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_0208fb60
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_0208fb6c
@L_0208fb60:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_0208fb6c:
    bl func_02022b2c
    mov r8, #3
    ldr r4, [r4]
    ldr r3, [r5]
    add r1, sp, #0x18
    str r0, [sp, #0x20]
    mov r2, r8
    mov r0, #0x1c
    str r3, [sp, #0x18]
    str r4, [sp, #0x1c]
    bl func_0202b608
    mov r4, #0x400000
    mov r3, #0x1000
    add r1, sp, #0xc
    mov r2, r8
    mov r0, #0x1b
    str r4, [sp, #0xc]
    str r4, [sp, #0x10]
    str r3, [sp, #0x14]
    bl func_0202b608
    add r0, r6, #0x100
    ldrh r0, [r0, #0xa]
    mov r4, #1
    add r1, sp, #4
    str r0, [sp, #4]
    mov r2, r4
    mov r0, #0x20
    bl func_0202b608
    mov r0, r7
    mov r1, r6
    bl func_0208fc70
    mov r2, r4
    mov r0, #0x12
    add r1, sp, #0
    str r4, [sp]
    bl func_0202b608
    add sp, sp, #0x24
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_0208fc04(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #8
    mov r4, #1
    mov r5, #0
    add r1, sp, #4
    mov r2, r4
    mov r0, #0x30
    str r5, [sp, #4]
    bl func_0202b608
    add r1, sp, #0
    mov r2, r4
    mov r0, #0x31
    str r5, [sp]
    bl func_0202b608
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" s32 func_0208fc44(s32 arg0, u8 *arg1)
{
    s32 local[1];
    s32 v0;
    s32 t0;
    *(s32 *)(((u8 *)local)) = (0x3F0000C0 | (*(u8 *)(arg1 + 0x10C) << 0x10));
    t0 = (0x3F0000C0 | (*(u8 *)(arg1 + 0x10C) << 0x10));
    v0 = func_0202b608(0x29, (s32)((u8 *)local), 1, t0);
    return v0;
}

extern "C" asm void func_0208fc70(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10
    mov r7, #1
    mov r0, #2
    mov r10, r1
    str r0, [sp, #0xc]
    add r1, sp, #0xc
    mov r2, r7
    mov r0, #0x40
    bl func_0202b608
    ldr r0, [r10]
    add r8, r10, #0x7c
    cmp r0, #0
    mov r9, #0
    ble @L_0208fd78
    mov r6, #0x1000
    mov r5, #0x23
    add r4, sp, #4
    mov r11, #2
@L_0208fcbc:
    ldr r0, [r8, #4]
    ldr r1, [r8]
    rsb r2, r0, #0
    cmp r7, #0
    mov r0, r1, asr #9
    add r0, r1, r0, lsr #22
    mov r0, r0, asr #0xa
    mov r1, r2, asr #9
    add r1, r2, r1, lsr #22
    mov r1, r1, asr #0xa
    beq @L_0208fd2c
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    mov r0, r0, lsl #0x10
    mov r1, r1, lsl #0x10
    mov r0, r0, asr #0x10
    mov r1, r1, lsr #0x10
    mov r0, r0, lsl #0x10
    mov r1, r1, lsl #0x10
    orr r2, r1, r0, lsr #16
    str r2, [sp, #4]
    mov r0, r5
    mov r1, r4
    mov r2, r11
    str r6, [sp, #8]
    bl func_0202b608
    mov r7, #0
    b @L_0208fd64
@L_0208fd2c:
    mov r1, r1, lsl #0x10
    mov r1, r1, asr #0x10
    mov r0, r0, lsl #0x10
    mov r1, r1, lsl #0x10
    mov r0, r0, asr #0x10
    mov r1, r1, lsr #0x10
    mov r0, r0, lsl #0x10
    mov r1, r1, lsl #0x10
    orr r1, r1, r0, lsr #16
    str r1, [sp]
    mov r0, #0x25
    add r1, sp, #0
    mov r2, #1
    bl func_0202b608
@L_0208fd64:
    ldr r0, [r10]
    add r9, r9, #1
    cmp r9, r0
    add r8, r8, #8
    blt @L_0208fcbc
@L_0208fd78:
    mov r1, #0
    mov r2, r1
    mov r0, #0x41
    bl func_0202b608
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" void func_0208fd90(s32 arg0)
{
    s32 r4;
    s32 r5;
    s32 r6;
    s32 r7;
    NNS_FndInitList((arg0 + 0x26C), 8);
    NNS_FndInitList((arg0 + 0x278), 8);
    NNS_FndInitList((arg0 + 0x284), 8);
    r6 = 0;
    do {
        *(s32 *)(((u8 *)(arg0 + (r6 << 4))) + 0x180) = 0;
        *(s32 *)(((u8 *)(arg0 + (r6 << 4))) + 0x17C) = 0;
        func_0203274c((arg0 + 0x26C), ((arg0 + 0x17C) + (r6 << 4)), (arg0 + (r6 << 4)));
        r4 = (arg0 + 0x17C);
        r5 = 0;
        r6 = (r6 + 1);
        r7 = arg0;
    } while (r6 < 0xF);
    return;
}

extern "C" void *func_0208fdf4(s32 arg0)
{
    void *v0 = NNS_FndGetNthListObject((const NNSFndList *)(arg0 + 0x26C), 0);
    NNS_FndRemoveListObject((NNSFndList *)(arg0 + 0x26C), (void *)v0);
    return (void *)v0;
}

extern "C" void func_0208fe20(s32 arg0, u8 *arg1)
{
    NNS_FndRemoveListObject((NNSFndList *)(arg0 + 0x278), (void *)arg1);
    *(s32 *)(arg1 + 0x4) = 0;
    *(s32 *)(arg1) = 0;
    func_0203274c((arg0 + 0x26C), (s32)arg1, 0);
}

extern "C" void func_0208fe50(u8 *obj, void *object)
{
    func_020326f8(&((UnkListOwner_0208e9d4 *)obj)->list278, object);
}

extern "C" void func_0208fe60(u8 *obj, void *object, void *target)
{
    NNS_FndInsertListObject(&((UnkListOwner_0208e9d4 *)obj)->list278, target, object);
}

extern "C" u16 func_0208fe7c(u8 *obj)
{
    return ((UnkListOwner_0208e9d4 *)obj)->list278.numObjects;
}

extern "C" asm void func_0208fe88(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r6, r2
    bl func_0208fef4
    mov r5, r0
@L_0208fe9c:
    cmp r5, #0
    cmpne r5, r6
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r7
    mov r1, r5
    bl func_0208fef4
    mov r4, r0
    mov r0, r7
    mov r1, r5
    bl func_0208fe20
    mov r5, r4
    b @L_0208fe9c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}     // (unreachable)
}

extern "C" void *func_0208fed0(u8 *obj)
{
    void *object = func_02032878(&((UnkListOwner_0208e9d4 *)obj)->list278);

    if (object != NULL) {
        return object;
    }
    return func_0208ff2c(obj);
}

extern "C" void func_0208fef4(s32 arg0, s32 arg1)
{
    void *v0 = NNS_FndGetNextListObject((const NNSFndList *)(arg0 + 0x278), (const void *)arg1);
    if ((s32)v0 != 0)
        return;
    func_0208ff1c((u8 *)arg0, (void *)0);
}

extern "C" void *func_0208ff1c(u8 *obj, void *object)
{
    return NNS_FndGetNextListObject(&((UnkListOwner_0208e9d4 *)obj)->list278, object);
}

extern "C" void *func_0208ff2c(u8 *obj)
{
    return ((UnkListOwner_0208e9d4 *)obj)->list278.tailObject;
}

extern "C" void *func_0208ff34(u8 *obj, int index)
{
    return NNS_FndGetNthListObject(&((UnkListOwner_0208e9d4 *)obj)->list278, index);
}

extern "C" void func_0208ff4c(u8 *obj, void *object)
{
    NNS_FndRemoveListObject(&((UnkListOwner_0208e9d4 *)obj)->list278, object);
}

extern "C" void *func_0208ff5c(u8 *obj, void *object)
{
    return NNS_FndGetNextListObject(&((UnkListOwner_0208e9d4 *)obj)->list284, object);
}

extern "C" void func_0208ff6c(u8 *obj, void *object)
{
    func_020326f8(&((UnkListOwner_0208e9d4 *)obj)->list284, object);
}

extern "C" void func_0208ff7c(void)
{
    MIi_CpuClearFast(0, data_020fc708, 0x1C);
}
