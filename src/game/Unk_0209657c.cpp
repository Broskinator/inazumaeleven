#include "game/Unk_0209657c.hpp"

extern "C" void func_02097c24(void *obj);
extern "C" void *data_020afd7c[];     // (a vtable)

extern "C" void func_02097ac0(void);     // (for the asm functions)
extern "C" void func_02098ae4(void);     // (for the asm functions)
extern "C" void func_02098b48(void);     // (for the asm functions)
extern "C" void func_02098cdc(void);     // (for the asm functions)
extern "C" void func_02098d30(void);     // (for the asm functions)
extern "C" void func_02098d88(void);     // (for the asm functions)
extern "C" void func_02098dd8(void);     // (for the asm functions)
extern "C" void func_0209657c(void);
extern "C" void func_020965e0(void);
extern "C" void func_02096680(void);
extern "C" void func_020966d4(void);
extern "C" void func_02096750(void);
extern "C" void func_020967d4(void);
extern "C" void func_02096828(void *self, int a, int b, s32 value, s32 value2);
extern "C" void func_02096848(void);
extern "C" void func_020968e8(void);
extern "C" void func_02096934(void *self, int a, int b, u8 value);
extern "C" void func_0209694c(void);
extern "C" void func_02096994(void);
extern "C" void func_020969cc(void);
extern "C" void func_02096a20(void);
extern "C" void func_02096aa4(void);
extern "C" void func_02096ae4(void *self, int a, int b, u8 value, u8 value2);
extern "C" void func_02096b04(void *self, int a, u32 value);
extern "C" void func_02096b24(void);
extern "C" void func_02096b74(void *self, int a, u16 value);
extern "C" void func_02096b8c(void);
extern "C" void func_02096c10(void);
extern "C" void func_02096c54(void);
extern "C" void func_02096c8c(void);
extern "C" void func_02096cb8(void);
extern "C" void func_02096d18(u8 *obj, u32 flags);
extern "C" void func_02096d28(u8 *obj, u32 flags);
extern "C" void func_02096d3c(void);
extern "C" void func_02096d64(void);
extern "C" void func_02096d8c(void);
extern "C" void func_02096db8(void);
extern "C" void func_02096e0c(void);
extern "C" void func_02096e60(void);
extern "C" BOOL func_02096eb4(u8 *obj);
extern "C" void func_02096ed0(u8 *obj, int delta);
extern "C" void func_02096ef4(void);
extern "C" void func_02096f70(void *obj);
extern "C" void func_02096f9c(void);
extern "C" void func_0209700c(void);
extern "C" s32 func_020970b0(u8 *arg0, s32 arg1);
extern "C" s32 func_020970e0(s32 arg0, s32 arg1);
extern "C" s32 func_02097128(s32 arg0, u8 *arg1);
extern "C" s32 func_02097178(s32 arg0, u8 *arg1);
extern "C" void func_020971c8(void);
extern "C" void func_020972fc(void);
extern "C" s32 func_02097434(...);
extern "C" void func_02097564(void);
extern "C" s32 func_020975e0(...);
extern "C" void func_02097754(void);
extern "C" s32 func_020977d0(u8 *arg0);
extern "C" void **func_02097810(void **obj);
extern "C" void **func_02097830(void **obj);
extern "C" void func_02097858(void);
extern "C" void func_02097880(void *obj);
extern "C" void func_02097898(void);

extern "C" char data_020c4668[];
extern "C" char data_020c47b4[];
extern "C" s32 MIi_CpuClearFast(...);
extern "C" void _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih(void);
extern "C" void _ZN11FileManager9LoadAsyncEPKcPPvP8GameHeapiiih(void);
extern "C" void _ZN8GameHeap4FreeEPv(void);
extern "C" void _ZN8GameHeap5AllocEiii(void);
extern "C" void _ZdlPv(void);
extern "C" void func_02022484(void);
extern "C" void func_02022b2c(void);
extern "C" void func_0202300c(void);
extern "C" void func_0202323c(void);
extern "C" void func_020956f8(void);
extern "C" void func_02095d14(void);
extern "C" u8 *func_020960ac(void *self, int a);
extern "C" u8 *func_020960ec(void *self, int a, int b);
extern "C" void func_02096110(void);
extern "C" void func_02096160(void);
extern "C" void func_02099cc8(void);
extern "C" void func_02099cfc(void);
extern "C" void strcmp(void);
extern "C" void strncpy(void);
extern "C" void strrchr(void);

extern "C" asm void func_0209657c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, r0
    mov r5, r2
    bl func_020960ac
    movs r6, r0
    ldrne r0, [r6]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrb r7, [r6, #6]
    cmp r7, #1
    ldmltia sp!, {r3, r4, r5, r6, r7, pc}
    mvn r0, r5
    mov r5, r0, lsl #0x10
@L_020965b0:
    mov r0, r4
    mov r1, r6
    mov r2, r7
    bl func_02096110
    cmp r0, #0
    ldrneh r1, [r0, #0xa]
    sub r7, r7, #1
    andne r1, r1, r5, lsr #16
    strneh r1, [r0, #0xa]
    cmp r7, #1
    bge @L_020965b0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_020965e0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r10, r0
    movs r4, r2
    mov r0, r10
    movmi r4, #0
    bl func_020960ac
    movs r5, r0
    ldrne r0, [r5]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r7, [r5, #6]
    cmp r7, #1
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    rsb r8, r4, #0
    mov r11, #0x3f000000
    mov r9, r8, lsl #0xc
    mov r4, r11
@L_02096624:
    mov r0, r10
    mov r1, r5
    mov r2, r7
    bl func_02096110
    movs r6, r0
    beq @L_02096670
    cmp r8, #0
    mov r0, r9
    ble @L_0209665c
    bl func_02022484
    mov r1, r0
    mov r0, r4
    bl func_0202300c
    b @L_02096668
@L_0209665c:
    bl func_02022484
    mov r1, r11
    bl func_0202323c
@L_02096668:
    bl func_02022b2c
    str r0, [r6, #0x30]
@L_02096670:
    sub r7, r7, #1
    cmp r7, #1
    bge @L_02096624
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_02096680(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r6, r2
    bl func_020960ac
    movs r4, r0
    ldrne r0, [r4]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrb r5, [r4, #6]
    cmp r5, #1
    ldmltia sp!, {r3, r4, r5, r6, r7, pc}
@L_020966ac:
    mov r0, r7
    mov r1, r4
    mov r2, r5
    bl func_02096110
    cmp r0, #0
    sub r5, r5, #1
    strneh r6, [r0, #0xe]
    cmp r5, #1
    bge @L_020966ac
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_020966d4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r9, r0
    mov r8, r2
    mov r7, r3
    bl func_020960ac
    movs r5, r0
    ldrne r0, [r5]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldrb r6, [r5, #6]
    cmp r6, #1
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r4, #0
@L_02096708:
    mov r0, r9
    mov r1, r5
    mov r2, r6
    bl func_02096110
    movs r1, r0
    beq @L_02096740
    ldrsh r2, [r1, #0x10]
    ldrsh r3, [r1, #0x12]
    mov r0, r9
    strh r8, [r1, #0x10]
    strh r7, [r1, #0x12]
    strb r4, [r1, #0x1a]
    strb r4, [r1, #0x1b]
    bl func_020956f8
@L_02096740:
    sub r6, r6, #1
    cmp r6, #1
    bge @L_02096708
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_02096750(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #8
    mov r8, r0
    mov r7, r2
    mov r6, r3
    ldr r5, [sp, #0x28]
    ldr r4, [sp, #0x2c]
    bl func_020960ac
    movs r9, r0
    ldrne r0, [r9]
    cmpne r0, #0
    addeq sp, sp, #8
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldrb r10, [r9, #6]
    cmp r10, #1
    addlt sp, sp, #8
    ldmltia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02096794:
    mov r0, r8
    mov r1, r9
    mov r2, r10
    bl func_02096110
    mov r1, r0
    str r5, [sp]
    mov r0, r8
    mov r2, r7
    str r4, [sp, #4]
    mov r3, r6
    bl func_02095d14
    sub r10, r10, #1
    cmp r10, #1
    bge @L_02096794
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_020967d4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r6, r2
    bl func_020960ac
    movs r4, r0
    ldrne r0, [r4]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrb r5, [r4, #6]
    cmp r5, #1
    ldmltia sp!, {r3, r4, r5, r6, r7, pc}
@L_02096800:
    mov r0, r7
    mov r1, r4
    mov r2, r5
    bl func_02096110
    cmp r0, #0
    sub r5, r5, #1
    strneh r6, [r0, #0x24]
    cmp r5, #1
    bge @L_02096800
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" void func_02096828(void *self, int a, int b, s32 value, s32 value2)
{
    u8 *entry = func_020960ec(self, a, b);

    if (entry != NULL) {
        *(s32 *)entry = value;
        *(s32 *)(entry + 0x14) = value2;
    }
}

extern "C" asm void func_02096848(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    ldr r6, [sp, #0x20]
    mov r10, r0
    mov r7, r3
    mov r9, r1
    cmp r6, #0
    movlt r6, r7
    mov r0, r10
    mov r1, r7
    mov r8, r2
    bl func_02096160
    mov r5, r0
    mov r0, r10
    mov r1, r6
    bl func_02096160
    mov r4, r0
    cmp r5, #0
    cmpne r4, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r5
    bl func_02096eb4
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r4
    bl func_02096eb4
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r10
    mov r1, r9
    mov r2, r8
    bl func_020960ec
    cmp r0, #0
    strneh r6, [r0, #6]
    ldrneh r1, [r0, #4]
    cmpne r1, r7
    strneh r7, [r0, #4]
    mvnne r1, #0
    strneh r1, [r0, #0x10]
    strneh r1, [r0, #0x12]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_020968e8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, r3
    mov r6, r1
    mov r1, r4
    mov r7, r0
    mov r5, r2
    bl func_02096160
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    bl func_02096eb4
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    mov r0, r7
    mov r1, r6
    mov r2, r5
    bl func_020960ec
    cmp r0, #0
    strneh r4, [r0, #6]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" void func_02096934(void *self, int a, int b, u8 value)
{
    u8 *entry = func_020960ec(self, a, b);

    if (entry != NULL) {
        entry[8] = value;
    }
}

extern "C" asm void func_0209694c(void)
{
    stmdb sp!, {r4, lr}
    ldrb r12, [sp, #8]
    mov r4, r3
    cmp r12, #0
    bne @L_02096968
    bl func_02096994
    ldmia sp!, {r4, pc}
@L_02096968:
    bl func_020960ec
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    ldr r1, =0x7bc3
    ldrh r2, [r0, #0xa]
    and r1, r4, r1
    mov r1, r1, lsl #0x10
    orr r1, r2, r1, lsr #16
    strh r1, [r0, #0xa]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_02096994(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r3
    bl func_020960ec
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    ldr r1, =0xfffe
    ldrh r2, [r0, #0xa]
    and r1, r4, r1
    mvn r1, r1
    mov r1, r1, lsl #0x10
    and r1, r2, r1, lsr #16
    strh r1, [r0, #0xa]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_020969cc(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    movs r5, r3
    movmi r5, #0
    bl func_020960ec
    movs r4, r0
    ldmeqia sp!, {r3, r4, r5, pc}
    rsb r0, r5, #0
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02096a08
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_02096a14
@L_02096a08:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_02096a14:
    bl func_02022b2c
    str r0, [r4, #0x30]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02096a20(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r3
    bl func_020960ec
    movs r4, r0
    ldmeqia sp!, {r3, r4, r5, pc}
    cmp r5, #0
    mov r0, r5, lsl #0xc
    ble @L_02096a54
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_02096a60
@L_02096a54:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_02096a60:
    bl func_02022b2c
    ldrsh r1, [sp, #0x10]
    str r0, [r4, #0x28]
    cmp r1, #0
    mov r0, r1, lsl #0xc
    ble @L_02096a8c
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_02096a98
@L_02096a8c:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_02096a98:
    bl func_02022b2c
    str r0, [r4, #0x2c]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02096aa4(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #8
    mov r5, r0
    mov r4, r3
    bl func_020960ec
    ldr r2, [sp, #0x1c]
    mov r1, r0
    ldrb r3, [sp, #0x18]
    ldr r12, [sp, #0x20]
    str r2, [sp]
    mov r0, r5
    mov r2, r4
    str r12, [sp, #4]
    bl func_02095d14
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void func_02096ae4(void *self, int a, int b, u8 value, u8 value2)
{
    u8 *entry = func_020960ec(self, a, b);

    if (entry != NULL) {
        entry[0x26] = value;
        entry[0x27] = value2;
    }
}

extern "C" void func_02096b04(void *self, int a, u32 value)
{
    u8 *entry;

    if (value > 31) {
        value = 31;
    }
    entry = func_020960ac(self, a);
    if (entry != NULL) {
        entry[7] = value;
    }
}

extern "C" asm void func_02096b24(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r2
    bl func_020960ac
    movs r4, r0
    ldmeqia sp!, {r3, r4, r5, pc}
    rsb r0, r5, #0
    cmp r0, #0
    mov r0, r0, lsl #0xc
    ble @L_02096b5c
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_02096b68
@L_02096b5c:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_02096b68:
    bl func_02022b2c
    str r0, [r4, #0x14]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void func_02096b74(void *self, int a, u16 value)
{
    u8 *entry = func_020960ac(self, a);

    if (entry != NULL) {
        *(u16 *)(entry + 8) = value;
    }
}

extern "C" asm void func_02096b8c(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r2
    mov r5, r3
    bl func_020960ac
    movs r4, r0
    ldmeqia sp!, {r4, r5, r6, pc}
    cmp r6, #0
    mov r0, r6, lsl #0xc
    ble @L_02096bc4
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_02096bd0
@L_02096bc4:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_02096bd0:
    bl func_02022b2c
    str r0, [r4, #0xc]
    cmp r5, #0
    mov r0, r5, lsl #0xc
    ble @L_02096bf8
    bl func_02022484
    mov r1, r0
    mov r0, #0x3f000000
    bl func_0202300c
    b @L_02096c04
@L_02096bf8:
    bl func_02022484
    mov r1, #0x3f000000
    bl func_0202323c
@L_02096c04:
    bl func_02022b2c
    str r0, [r4, #0x10]
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02096c10(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r2
    cmp r3, #0
    bne @L_02096c28
    bl func_02096c54
    ldmia sp!, {r4, pc}
@L_02096c28:
    bl func_020960ac
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    ldr r1, =0x7003
    ldrh r2, [r0, #4]
    and r1, r4, r1
    mov r1, r1, lsl #0x10
    orr r1, r2, r1, lsr #16
    strh r1, [r0, #4]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_02096c54(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r2
    bl func_020960ac
    cmp r0, #0
    ldmeqia sp!, {r4, pc}
    ldr r1, =0x7002
    ldrh r2, [r0, #4]
    and r1, r4, r1
    mvn r1, r1
    mov r1, r1, lsl #0x10
    and r1, r2, r1, lsr #16
    strh r1, [r0, #4]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_02096c8c(void)
{
    stmdb sp!, {r3, lr}
    bl func_020960ec
    cmp r0, #0
    beq @L_02096cb0
    ldrh r0, [r0, #0xa]
    tst r0, #2
    movne r0, #1
    moveq r0, #0
    ldmia sp!, {r3, pc}
@L_02096cb0:
    mov r0, #0
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_02096cb8(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    bl func_020960ac
    movs r4, r0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldrb r5, [r4, #6]
    cmp r5, #1
    blt @L_02096d10
@L_02096cdc:
    mov r0, r6
    mov r1, r4
    mov r2, r5
    bl func_02096110
    cmp r0, #0
    beq @L_02096d04
    ldrh r0, [r0, #0xa]
    tst r0, #2
    moveq r0, r5
    ldmeqia sp!, {r4, r5, r6, pc}
@L_02096d04:
    sub r5, r5, #1
    cmp r5, #1
    bge @L_02096cdc
@L_02096d10:
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" void func_02096d18(u8 *obj, u32 flags)
{
    *(u32 *)(obj + 0x40) |= flags;
}

extern "C" void func_02096d28(u8 *obj, u32 flags)
{
    *(u32 *)(obj + 0x40) &= ~flags;
}

extern "C" asm void func_02096d3c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r2
    mov r4, r3
    bl func_020960ac
    cmp r0, #0
    strne r5, [r0, #0xc]
    ldrne r1, [sp, #0x10]
    strne r4, [r0, #0x10]
    strne r1, [r0, #0x14]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02096d64(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r3
    bl func_020960ec
    cmp r0, #0
    ldrne r2, [sp, #8]
    strne r4, [r0, #0x34]
    ldrne r1, [sp, #0xc]
    strne r2, [r0, #0x38]
    strne r1, [r0, #0x3c]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_02096d8c(void)
{
    stmdb sp!, {r3, lr}
    bl func_020960ec
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, pc}
    ldrb r1, [r0, #0x1a]
    cmp r1, #0
    moveq r1, #1
    streqb r1, [r0, #0x1b]
    ldrb r0, [r0, #0x1b]
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_02096db8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r6, r2
    bl func_020960ac
    movs r4, r0
    ldrne r0, [r4]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrb r5, [r4, #6]
    cmp r5, #1
    ldmltia sp!, {r3, r4, r5, r6, r7, pc}
@L_02096de4:
    mov r0, r7
    mov r1, r4
    mov r2, r5
    bl func_02096110
    cmp r0, #0
    sub r5, r5, #1
    strne r6, [r0, #0x40]
    cmp r5, #1
    bge @L_02096de4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_02096e0c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r6, r2
    bl func_020960ac
    movs r4, r0
    ldrne r0, [r4]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrb r5, [r4, #6]
    cmp r5, #1
    ldmltia sp!, {r3, r4, r5, r6, r7, pc}
@L_02096e38:
    mov r0, r7
    mov r1, r4
    mov r2, r5
    bl func_02096110
    cmp r0, #0
    sub r5, r5, #1
    strneb r6, [r0, #0xd]
    cmp r5, #1
    bge @L_02096e38
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_02096e60(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r6, r2
    bl func_020960ac
    movs r4, r0
    ldrne r0, [r4]
    cmpne r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrb r5, [r4, #6]
    cmp r5, #1
    ldmltia sp!, {r3, r4, r5, r6, r7, pc}
@L_02096e8c:
    mov r0, r7
    mov r1, r4
    mov r2, r5
    bl func_02096110
    cmp r0, #0
    sub r5, r5, #1
    strne r6, [r0, #0x44]
    cmp r5, #1
    bge @L_02096e8c
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" BOOL func_02096eb4(u8 *obj)
{
    return *(u16 *)(obj + 0x30) == 0 && obj[0x33] == 0;
}

extern "C" void func_02096ed0(u8 *obj, int delta)
{
    *(s16 *)(obj + 0x34) += (s16)delta;
    if (*(s16 *)(obj + 0x34) < 0) {
        *(s16 *)(obj + 0x34) = 0;
    }
}

extern "C" asm void func_02096ef4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r4, r1
    mov r5, r0
    cmp r4, #0
    movle r0, #0
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r0, #0x60
    mul r0, r4, r0
    add r0, r0, #3
    bic r9, r0, #3
    mov r8, #0
    mov r7, #1
    ldr r0, =data_020c47b4
    mov r1, r9
    mov r2, r8
    mov r3, r7
    bl _ZN8GameHeap5AllocEiii
    movs r6, r0
    mov r0, r8
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    mov r1, r6
    mov r2, r9
    bl MIi_CpuClearFast
    mov r0, r5
    bl func_02096f70
    mov r0, r7
    str r6, [r5]
    strh r4, [r5, #4]
    strh r8, [r5, #6]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_02096f70(void *obj)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4]
    cmp r1, #0
    beq @L_02096f8c
    ldr r0, =data_020c47b4
    bl _ZN8GameHeap4FreeEPv
@L_02096f8c:
    mov r0, #0
    str r0, [r4]
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_02096f9c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    movs r6, r1
    mov r7, r0
    movne r0, #0
    strne r0, [r6]
    ldr r4, [r7]
    cmp r4, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    ldrsh r0, [r7, #4]
    mov r5, #0
    cmp r0, #0
    ble @L_02097004
@L_02096fd0:
    mov r0, r4
    bl func_02096eb4
    cmp r0, #0
    beq @L_02096ff0
    cmp r6, #0
    strne r4, [r6]
    add r0, r5, #1
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02096ff0:
    ldrsh r0, [r7, #4]
    add r5, r5, #1
    add r4, r4, #0x60
    cmp r5, r0
    blt @L_02096fd0
@L_02097004:
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_0209700c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    ldr r6, [sp, #0x20]
    mov r10, r0
    cmp r6, #0
    movne r0, #0
    strne r0, [r6]
    ldr r4, [r10]
    mov r9, r1
    cmp r4, #0
    mov r8, r2
    mov r7, r3
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldrsh r0, [r10, #4]
    mov r5, #0
    cmp r0, #0
    ble @L_020970a8
@L_02097050:
    mov r0, r4
    bl func_02096eb4
    cmp r0, #0
    bne @L_02097094
    mov r0, r4
    mov r1, r9
    bl strcmp
    cmp r0, #0
    ldreq r0, [r4, #0x24]
    cmpeq r7, r0
    ldreq r0, [r4, #0x28]
    cmpeq r8, r0
    bne @L_02097094
    cmp r6, #0
    strne r4, [r6]
    add r0, r5, #1
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02097094:
    ldrsh r0, [r10, #4]
    add r5, r5, #1
    add r4, r4, #0x60
    cmp r5, r0
    blt @L_02097050
@L_020970a8:
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" s32 func_020970b0(u8 *arg0, s32 arg1)
{
    if ((arg1 <= 0 || arg1 > *(s16 *)(arg0 + 0x4))) {
        return 0;
    }
    return (((arg1 - 1) * 0x60) + *(s32 *)(arg0));
}

extern "C" s32 func_020970e0(s32 arg0, s32 arg1)
{
    u8 *r4;
    s32 r5;
    s32 v1;
    r4 = (u8 *)arg1;
    r5 = arg0;
    if ((*(u16 *)(r4 + 0x30) & 0x10) != 0) {
        func_02097434(arg0, arg1, 1, 0);
    }
    if ((*(u16 *)(r4 + 0x30) & 0x20) == 0)
        return *(u16 *)(r4 + 0x30);
    v1 = func_020975e0(r5, (s32)r4, 1, 0);
    return v1;
}

extern "C" s32 func_02097128(s32 arg0, u8 *arg1)
{
    if ((s32)arg1 == 0)
        return 0;
    switch (*(u8 *)(arg1 + 0x32)) {
        case 2:
        case 4:
        case 5:
        case 7:
        case 8:
            return 1;
        case 0:
        case 1:
        case 3:
        case 6:
        default:
            return 0;
    }
}

extern "C" s32 func_02097178(s32 arg0, u8 *arg1)
{
    if ((s32)arg1 == 0)
        return 0;
    switch (*(u8 *)(arg1 + 0x32)) {
        case 3:
        case 4:
        case 5:
        case 8:
            return 1;
        case 0:
        case 1:
        case 2:
        case 6:
        case 7:
        default:
            return 0;
    }
}

extern "C" asm void func_020971c8(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r1
    mov r5, #0
    bl func_02097ac0
    cmp r0, #0
    movne r0, r5
    ldmneia sp!, {r4, r5, r6, pc}
    ldrh r1, [r4, #0x30]
    tst r1, #0x10
    movne r0, #1
    ldmneia sp!, {r4, r5, r6, pc}
    ldrb r0, [r4, #0x32]
    cmp r0, #8
    addls pc, pc, r0, lsl #2
    b @L_020972a4
    b @L_020972a4
    b @L_020972a4
    b @L_02097228
    b @L_020972a4
    b @L_02097228
    b @L_02097228
    b @L_020972a4
    b @L_02097290
    b @L_02097290
@L_02097228:
    tst r1, #2
    movne r0, r5
    ldmneia sp!, {r4, r5, r6, pc}
    cmp r0, #5
    ldr r0, [r4, #0x20]
    bne @L_02097280
    mov r1, r5
    bl func_02099cc8
    mov r6, r0
    ldr r0, [r4, #0x20]
    mov r1, #2
    bl func_02099cfc
    cmp r0, #0
    moveq r0, r5
    ldmeqia sp!, {r4, r5, r6, pc}
    ldrb r1, [r0, #2]
    strb r1, [r4, #0x40]
    ldrb r1, [r0, #3]
    strb r1, [r4, #0x41]
    ldrb r0, [r0, #4]
    strb r0, [r4, #0x42]
    b @L_020972ac
@L_02097280:
    mov r1, #1
    bl func_02099cc8
@L_02097288:
    mov r6, r0
    b @L_020972ac
@L_02097290:
    ldrb r0, [r4, #0x40]
    ldrb r1, [r4, #0x41]
    ldrb r2, [r4, #0x42]
    bl func_02098ae4
    b @L_02097288
@L_020972a4:
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
@L_020972ac:
    cmp r6, #0
    movle r0, #0
    ldmleia sp!, {r4, r5, r6, pc}
    ldr r5, =data_020c4668
    mov r2, r6
    ldr r0, [r5]
    add r1, r4, #0x44
    bl func_02098cdc
    cmp r0, #0
    ldrneh r1, [r4, #0x30]
    movne r0, #1
    orrne r1, r1, #0x10
    strneh r1, [r4, #0x30]
    ldmneia sp!, {r4, r5, r6, pc}
    ldr r0, [r5]
    add r1, r4, #0x44
    bl func_02098d88
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_020972fc(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r1
    bl func_02097ac0
    cmp r0, #0
    movne r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    ldrh r1, [r4, #0x30]
    tst r1, #0x20
    movne r0, #1
    ldmneia sp!, {r4, r5, r6, pc}
    ldrb r0, [r4, #0x32]
    cmp r0, #8
    addls pc, pc, r0, lsl #2
    b @L_020973dc
    b @L_020973dc
    b @L_020973dc
    b @L_020973dc
    b @L_02097358
    b @L_02097360
    b @L_02097360
    b @L_020973dc
    b @L_020973c8
    b @L_020973d0
@L_02097358:
    ldr r6, [r4, #0x2c]
    b @L_020973e4
@L_02097360:
    tst r1, #2
    movne r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    cmp r0, #5
    ldr r0, [r4, #0x20]
    bne @L_020973b8
    mov r1, #1
    bl func_02099cc8
    mov r6, r0
    ldr r0, [r4, #0x20]
    mov r1, #2
    bl func_02099cfc
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldrb r1, [r0, #2]
    strb r1, [r4, #0x40]
    ldrb r1, [r0, #3]
    strb r1, [r4, #0x41]
    ldrb r0, [r0, #4]
    strb r0, [r4, #0x42]
    b @L_020973e4
@L_020973b8:
    mov r1, #2
    bl func_02099cc8
@L_020973c0:
    mov r6, r0
    b @L_020973e4
@L_020973c8:
    mov r0, #1
    ldmia sp!, {r4, r5, r6, pc}
@L_020973d0:
    ldrb r0, [r4, #0x42]
    bl func_02098b48
    b @L_020973c0
@L_020973dc:
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
@L_020973e4:
    cmp r6, #0
    movle r0, #0
    ldmleia sp!, {r4, r5, r6, pc}
    ldr r5, =data_020c4668
    mov r2, r6
    ldr r0, [r5]
    add r1, r4, #0x50
    bl func_02098d30
    cmp r0, #0
    ldrneh r1, [r4, #0x30]
    movne r0, #1
    orrne r1, r1, #0x20
    strneh r1, [r4, #0x30]
    ldmneia sp!, {r4, r5, r6, pc}
    ldr r0, [r5]
    add r1, r4, #0x50
    bl func_02098d88
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm s32 func_02097434(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0xc
    mov r7, r0
    mov r6, r1
    mov r5, r2
    mov r4, r3
    mov r9, #0
    bl func_02097ac0
    cmp r0, #0
    bne @L_02097468
    ldrh r1, [r6, #0x30]
    tst r1, #0x10
    bne @L_02097474
@L_02097468:
    add sp, sp, #0xc
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02097474:
    ldrb r0, [r6, #0x32]
    cmp r0, #8
    addls pc, pc, r0, lsl #2
    b @L_02097558
    b @L_02097558
    b @L_02097558
    b @L_020974a8
    b @L_02097558
    b @L_020974a8
    b @L_020974fc
    b @L_02097558
    b @L_0209754c
    b @L_0209754c
@L_020974a8:
    tst r1, #2
    addne sp, sp, #0xc
    movne r0, r9
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r10, #1
    ldr r0, [r6, #0x20]
    mov r1, r10
    bl func_02099cfc
    mov r8, r0
    ldr r0, [r6, #0x20]
    mov r1, r10
    bl func_02099cc8
    str r5, [sp]
    mov r3, r0
    mov r0, r7
    mov r1, r6
    mov r2, r8
    stmib sp, {r4, r9}
    bl func_02097564
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_020974fc:
    tst r1, #2
    addne sp, sp, #0xc
    movne r0, r9
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r0, [r6, #0x20]
    mov r1, r9
    bl func_02099cfc
    mov r8, r0
    ldr r0, [r6, #0x20]
    mov r1, r9
    bl func_02099cc8
    str r5, [sp]
    mov r3, r0
    mov r0, r7
    mov r1, r6
    mov r2, r8
    stmib sp, {r4, r9}
    bl func_02097564
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_0209754c:
    add sp, sp, #0xc
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02097558:
    mov r0, #0
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_02097564(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x10
    mov r5, r1
    mov r4, r2
    mov r6, r3
    bl func_02097ac0
    cmp r0, #0
    bne @L_02097590
    ldrh r0, [r5, #0x30]
    tst r0, #0x10
    bne @L_0209759c
@L_02097590:
    add sp, sp, #0x10
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
@L_0209759c:
    ldrb r1, [sp, #0x20]
    str r6, [sp]
    ldr r0, [sp, #0x24]
    str r1, [sp, #4]
    str r0, [sp, #8]
    add r1, r5, #0x5c
    ldr r0, =data_020c4668
    str r1, [sp, #0xc]
    ldr r0, [r0]
    ldr r2, [sp, #0x28]
    mov r3, r4
    add r1, r5, #0x44
    bl func_02098dd8
    and r0, r0, #0xff
    add sp, sp, #0x10
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm s32 func_020975e0(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0xc
    mov r8, r0
    mov r7, r1
    mov r6, r2
    mov r5, r3
    mov r4, #0
    bl func_02097ac0
    cmp r0, #0
    bne @L_02097614
    ldrh r1, [r7, #0x30]
    tst r1, #0x20
    bne @L_02097620
@L_02097614:
    add sp, sp, #0xc
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02097620:
    ldrb r0, [r7, #0x32]
    cmp r0, #8
    addls pc, pc, r0, lsl #2
    b @L_02097748
    b @L_02097748
    b @L_02097748
    b @L_02097748
    b @L_02097704
    b @L_02097654
    b @L_020976ac
    b @L_02097748
    b @L_0209773c
    b @L_0209773c
@L_02097654:
    tst r1, #2
    addne sp, sp, #0xc
    movne r0, r4
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r10, #2
    ldr r0, [r7, #0x20]
    mov r1, r10
    bl func_02099cfc
    mov r9, r0
    ldr r0, [r7, #0x20]
    mov r1, r10
    bl func_02099cc8
    str r6, [sp]
    mov r3, r0
    str r5, [sp, #4]
    mov r0, r8
    mov r1, r7
    mov r2, r9
    str r4, [sp, #8]
    bl func_02097754
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_020976ac:
    tst r1, #2
    addne sp, sp, #0xc
    movne r0, r4
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r10, #1
    ldr r0, [r7, #0x20]
    mov r1, r10
    bl func_02099cfc
    mov r9, r0
    ldr r0, [r7, #0x20]
    mov r1, r10
    bl func_02099cc8
    str r6, [sp]
    mov r3, r0
    str r5, [sp, #4]
    mov r0, r8
    mov r1, r7
    mov r2, r9
    str r4, [sp, #8]
    bl func_02097754
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02097704:
    ldr r2, [r7, #0x20]
    ldr r3, [r7, #0x2c]
    cmp r2, #0
    addeq sp, sp, #0xc
    moveq r0, r4
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    str r6, [sp]
    str r5, [sp, #4]
    mov r0, r8
    mov r1, r7
    str r4, [sp, #8]
    bl func_02097754
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_0209773c:
    add sp, sp, #0xc
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
@L_02097748:
    mov r0, #0
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_02097754(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x10
    mov r5, r1
    mov r4, r2
    mov r6, r3
    bl func_02097ac0
    cmp r0, #0
    bne @L_02097780
    ldrh r0, [r5, #0x30]
    tst r0, #0x20
    bne @L_0209778c
@L_02097780:
    add sp, sp, #0x10
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
@L_0209778c:
    ldrb r1, [sp, #0x20]
    str r6, [sp]
    ldr r0, [sp, #0x24]
    str r1, [sp, #4]
    str r0, [sp, #8]
    add r1, r5, #0x5d
    ldr r0, =data_020c4668
    str r1, [sp, #0xc]
    ldr r0, [r0]
    ldr r2, [sp, #0x28]
    mov r3, r4
    add r1, r5, #0x50
    bl func_02098dd8
    and r0, r0, #0xff
    add sp, sp, #0x10
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 func_020977d0(u8 *arg0)
{
    *(s32 *)(arg0) = (s32)data_020afd7c;
    MIi_CpuClearFast(0, (arg0 + 4), 8, (s32)data_020afd7c);
    MIi_CpuClearFast(0, (arg0 + 0xC), 0x10);
    return (s32)arg0;
}

extern "C" void **func_02097810(void **obj)
{
    obj[0] = data_020afd7c;
    func_02097880(obj);
    return obj;
}

extern "C" void **func_02097830(void **obj)
{
    obj[0] = data_020afd7c;
    func_02097880(obj);
    operator delete(obj);
    return obj;
}

extern "C" asm void func_02097858(void)
{
    stmdb sp!, {r4, lr}
    add r0, r0, #4
    mov r4, #0
    bl func_02096ef4
    cmp r0, #0
    addeq r4, r4, #1
    mov r0, #0
    cmp r4, #0
    movle r0, #1
    ldmia sp!, {r4, pc}
}

extern "C" void func_02097880(void *obj)
{
    func_02097c24(obj);
    func_02096f70((u8 *)obj + 4);
}

extern "C" asm void func_02097898(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    mov r9, r1
    mov r10, r0
    mov r8, r2
    mov r7, r3
    cmp r9, #1
    ldr r6, [sp, #0x4c]
    ldr r5, [sp, #0x50]
    blt @L_020978d0
    cmp r9, #6
    bgt @L_020978d0
    cmp r8, #0
    bne @L_020978dc
@L_020978d0:
    add sp, sp, #0x1c
    mov r0, #0
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_020978dc:
    mov r0, r8
    mov r1, #0x2f
    mov r11, r8
    bl strrchr
    cmp r0, #0
    addne r11, r0, #1
    mov r0, r8
    mov r1, #0x5c
    bl strrchr
    cmp r0, #0
    addne r11, r0, #1
    add r4, sp, #0x18
    mov r1, r11
    mov r2, r6
    mov r3, r5
    add r0, r10, #4
    str r4, [sp]
    bl func_0209700c
    movs r4, r0
    beq @L_02097944
    ldr r0, [sp, #0x18]
    mov r1, #1
    bl func_02096ed0
    add sp, sp, #0x1c
    mov r0, r4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02097944:
    add r1, sp, #0x18
    add r0, r10, #4
    bl func_02096f9c
    str r0, [sp, #0x14]
    cmp r0, #0
    addeq sp, sp, #0x1c
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r4, #0
    ldr r1, [sp, #0x18]
    mov r0, r4
    mov r2, #0x60
    bl MIi_CpuClearFast
    cmp r7, #0
    beq @L_020979b8
    ldr r3, =data_020c47b4
    ldr r0, [r3]
    cmp r0, #0
    beq @L_020979f4
    ldrb r4, [sp, #0x44]
    str r6, [sp]
    str r5, [sp, #4]
    str r4, [sp, #8]
    mov r4, #1
    add r2, sp, #0x48
    mov r1, r8
    str r4, [sp, #0xc]
    bl _ZN11FileManager9LoadAsyncEPKcPPvP8GameHeapiiih
    b @L_020979f0
@L_020979b8:
    ldr r3, =data_020c47b4
    ldr r0, [r3]
    cmp r0, #0
    beq @L_020979f4
    ldrb r1, [sp, #0x44]
    str r6, [sp]
    str r5, [sp, #4]
    str r1, [sp, #8]
    mov r4, #1
    str r4, [sp, #0xc]
    add r2, sp, #0x48
    mov r1, r8
    str r4, [sp, #0x10]
    bl _ZN11FileManager4LoadEPKcPPvP8GameHeapiiiih
@L_020979f0:
    mov r4, r0
@L_020979f4:
    cmp r4, #0
    mov r8, #0
    addle sp, sp, #0x1c
    movle r0, r8
    ldmleia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0x18]
    mov r1, r11
    mov r2, #0x20
    bl strncpy
    ldrb r0, [sp, #0x40]
    ldr r2, [sp, #0x48]
    ldr r1, [sp, #0x18]
    cmp r0, #0
    str r2, [r1, #0x20]
    ldr r1, [sp, #0x18]
    str r4, [r1, #0x2c]
    ldr r1, [sp, #0x18]
    str r6, [r1, #0x24]
    ldr r0, [sp, #0x18]
    movne r1, #1
    str r5, [r0, #0x28]
    ldr r0, [sp, #0x18]
    strh r8, [r0, #0x30]
    ldrne r0, [sp, #0x18]
    strneh r1, [r0, #0x30]
    ldr r0, [sp, #0x18]
    cmp r7, #0
    strb r9, [r0, #0x32]
    ldrne r0, [sp, #0x18]
    mov r1, #1
    ldreq r0, [sp, #0x18]
    moveq r1, #2
    strb r1, [r0, #0x33]
    ldr r0, [sp, #0x18]
    mov r1, #1
    bl func_02096ed0
    ldrsh r1, [r10, #0xa]
    ldr r0, [sp, #0x14]
    add r1, r1, #1
    strh r1, [r10, #0xa]
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
