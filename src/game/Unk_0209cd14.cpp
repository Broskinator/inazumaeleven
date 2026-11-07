#include "game/Unk_0209cd14.hpp"

extern "C" void func_0209c480(void *a);
extern "C" void func_02008580(void *buffer);
extern "C" u8 data_020c5320[];
extern "C" s32 data_020fc794[];
extern "C" u32 data_020fc7d4;
extern "C" s32 *data_020affd0[];
extern "C" s32 data_020b40e8[];
extern "C" s32 data_020b4944[];
extern "C" u8 data_020a7520[];
extern "C" u8 data_020aabf8[];
extern "C" s32 func_0209d378(void);

extern "C" void func_0209cd14(BOOL a);
extern "C" s32 func_0209cd30(...);
extern "C" s32 func_0209d024(...);
extern "C" s32 func_0209d1d4(u8 *arg0);
extern "C" s32 func_0209d240(void);
extern "C" s32 func_0209d264(...);
extern "C" void func_0209d2a0(void);
extern "C" s32 func_0209d2dc(...);
extern "C" void func_0209d350(s32 arg0);
extern "C" int func_0209d3a0(void *callback);
extern "C" void func_0209d420(s32 value);
extern "C" void func_0209d444(void);
extern "C" void func_0209d480(void);
extern "C" void func_0209d524(void);
extern "C" void func_0209d5a4(void);
extern "C" int func_0209d61c(void);
extern "C" void func_0209d638(void);
extern "C" void func_0209d648(u32 value);
extern "C" u32 func_0209d668(void);
extern "C" void func_0209d678(s32 *obj);
extern "C" void func_0209d684(void *obj);
extern "C" void func_0209d688(void);
extern "C" u8 *func_0209d874(u8 **arg0, s16 arg1);
extern "C" s32 func_0209d8b8(int i);
extern "C" void func_0209d8cc(s32 *table);
extern "C" void func_0209d8dc(void);
extern "C" void func_0209d998(void);
extern "C" void func_0209da5c(void);
extern "C" void func_0209da70(u32 value);
extern "C" void func_0209da74(u32 value);
extern "C" void func_0209da80(s32 a, s32 b);
extern "C" s32 func_0209da94(...);
extern "C" void func_0209db9c(void);
extern "C" void func_0209dc78(void);
extern "C" void func_0209dcec(void);
extern "C" s32 func_0209dd60(u8 *arg0, s32 arg1);
extern "C" s32 func_0209ddd0(s32 arg0, s32 arg1);
extern "C" void func_0209de0c(void);
extern "C" s32 func_0209de28(s32 arg0, s32 arg1);
extern "C" void func_0209deb0(void);
extern "C" void func_0209df60(void);
extern "C" void func_0209dfd4(s32 *obj, int i, s32 value);
extern "C" void func_0209e020(u8 *arg0, s32 arg1);
extern "C" void func_0209e09c(s32 arg0, s32 arg1, s32 arg2);
extern "C" void func_0209e0c0(s32 *obj, int i, s32 value);
extern "C" s32 func_0209e0dc(u8 *arg0, s32 arg1);

extern "C" char data_020a43f8[];
extern "C" char data_020a72c4[];
extern "C" char data_020a72f4[];
extern "C" char data_020a7304[];
extern "C" char data_020a733c[];
extern "C" char data_020b2fb0[];
extern "C" char data_020b3f04[];
extern "C" char data_020bafe4[];
extern "C" char data_020c4830[];
extern "C" char data_020c4844[];
extern "C" char data_020c5120[];
extern "C" char data_020c5124[];
extern "C" char data_020c8760[];
extern "C" char data_020cb980[];
extern "C" char data_020cdd80[];
extern "C" char data_020fc74c[];
extern "C" char data_020fc750[];
extern "C" char data_020fc754[];
extern "C" char data_020fc7d8[];
extern "C" s32 FS_FindArchive(...);
extern "C" s32 FS_OpenFileFast(...);
extern "C" void MI_CpuCopy8(void);
extern "C" s32 MI_CpuFill8(...);
extern "C" void STD_CompareString(void);
extern "C" void _ZN8Wireless13func_0203ca80EPKvtPv(void);
extern "C" void func_02016e34(void);
extern "C" void func_0209bedc(void);
extern "C" s32 func_0209bee4(...);
extern "C" void func_0209bf44(void);
extern "C" void func_0209bf60(void);
extern "C" void func_0209bf9c(void);
extern "C" void func_0209c4bc(void);
extern "C" s32 func_0209c9e0(...);
extern "C" s32 func_0209cba8(...);
extern "C" void func_ov015_021317c8(void);
extern "C" s32 func_ov015_021319bc(...);
extern "C" void func_ov015_021319fc(void);
extern "C" char gGameState[];

extern "C" void func_0209cd14(BOOL a)
{
    if (!a) {
        return;
    }
    func_0209c480(data_020c5320);
}

extern "C" asm s32 func_0209cd30(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10
    ldr r1, =data_020a72c4
    add r4, sp, #0
    mov r10, r0
    ldmia r1, {r0, r1, r2, r3}
    stmia r4, {r0, r1, r2, r3}
    ldr r4, =data_020cdd80
    mov r7, #1
    ldrh r0, [r4, #0x60]
    cmp r0, #0
    bne @L_0209cda4
    ldrb r0, [r10, #0x66]
    cmp r0, #0
    beq @L_0209cd98
    mov r0, r10
    bl func_0209bf60
    cmp r0, #0
    beq @L_0209cd98
    mov r4, #0xc
    mov r0, r10
    mov r1, r4
    bl func_0209bedc
    add sp, sp, #0x10
    sub r0, r4, #0xd
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0209cd98:
    add sp, sp, #0x10
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0209cda4:
    ldrh r0, [r4, #0x6a]
    cmp r0, #9
    bne @L_0209cddc
    mov r0, r10
    bl func_0209bf60
    cmp r0, #0
    beq @L_0209cddc
    mov r4, #0xc
    mov r0, r10
    mov r1, r4
    bl func_0209bedc
    add sp, sp, #0x10
    sub r0, r4, #0xd
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0209cddc:
    ldrh r0, [r4, #0x6a]
    cmp r0, #4
    addne sp, sp, #0x10
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    bl func_0209bf9c
    ldrb r11, [r10, #0x84]
    mov r8, r0
    cmp r11, #0
    bne @L_0209ce64
    mov r9, #1
    add r6, r10, #0x94
    ldr r5, =data_020c5120
    b @L_0209ce54
@L_0209ce18:
    tst r8, r7, lsl r9
    addne r0, r10, r9
    ldrneb r0, [r0, #0x90]
    cmpne r0, #0
    beq @L_0209ce50
    mov r1, r9, lsl #0x10
    mov r0, r10
    mov r1, r1, lsr #0x10
    bl func_0209c4bc
    add r1, r0, #4
    ldr r2, [r10, #0x78]
    add r0, r6, r0
    add r1, r5, r1
    bl MI_CpuCopy8
@L_0209ce50:
    add r9, r9, #1
@L_0209ce54:
    ldrh r0, [r4, #0x5e]
    cmp r9, r0
    blt @L_0209ce18
    b @L_0209ce90
@L_0209ce64:
    ldr r0, [r10, #0x88]
    sub r0, r0, #1
    str r0, [r10, #0x88]
    cmp r0, #0
    bgt @L_0209ce90
    mov r0, #0x78
    str r0, [r10, #0x88]
    ldrh r1, [r4, #0x6c]
    ldr r0, =0xffef
    and r0, r1, r0
    strh r0, [r4, #0x6c]
@L_0209ce90:
    ldr r1, [r10, #0x8c]
    mov r0, #1
    mov r2, r1, lsl #0x10
    strb r0, [r10, #0x66]
    mov r3, #0
    cmp r11, #0
    ldrne r3, =func_0209cd14
    ldr r0, =data_020cb980
    ldr r1, =data_020c5120
    mov r2, r2, lsr #0x10
    ldr r4, =data_020cdd80
    bl _ZN8Wireless13func_0203ca80EPKvtPv
    cmp r0, #0
    beq @L_0209cff0
    cmp r11, #0
    ldrneh r1, [r4, #0x6c]
    addne sp, sp, #0x10
    movne r0, #0
    orrne r1, r1, #0x10
    strneh r1, [r4, #0x6c]
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, =data_020c4844
    ldr r5, =data_020c8760
    ldr r1, [r0]
    mov r0, #0x3c0
    add r6, r1, #1
    and r2, r6, #3
    mla r1, r2, r0, r5
    ldr r2, [r10, #0x74]
    ldr r0, =data_020c5124
    bl MI_CpuCopy8
    and r1, r6, #3
    mov r0, #0x3c0
    mla r5, r1, r0, r5
    mov r9, #1
    add r6, r10, #0x94
    add r7, sp, #0
    mov r11, #0xf0
    b @L_0209cf6c
@L_0209cf2c:
    mov r0, #1
    tst r8, r0, lsl r9
    addne r0, r10, r9
    ldrneb r0, [r0, #0x90]
    strne r0, [r7, r9, lsl #2]
    cmpne r0, #0
    beq @L_0209cf68
    mov r1, r9, lsl #0x10
    mov r0, r10
    mov r1, r1, lsr #0x10
    bl func_0209c4bc
    mla r1, r9, r11, r5
    ldr r2, [r10, #0x78]
    add r0, r6, r0
    bl MI_CpuCopy8
@L_0209cf68:
    add r9, r9, #1
@L_0209cf6c:
    ldrh r0, [r4, #0x5e]
    cmp r9, r0
    blt @L_0209cf2c
    ldr r1, [sp]
    ldr r0, =data_020cdd80
    cmp r1, #0
    ldrne r1, [sp, #4]
    mov r3, #0
    cmpne r1, #0
    ldrne r1, [sp, #8]
    cmpne r1, #0
    ldrne r1, [sp, #0xc]
    cmpne r1, #0
    beq @L_0209cfe4
    ldr r2, =data_020c4844
    ldr r1, =data_020c4830
    ldr r5, [r2]
    ldr r4, [r1]
    add r5, r5, #1
    add r4, r4, #1
    str r5, [r2]
    str r4, [r1]
    mov r2, #1
    b @L_0209cfd8
@L_0209cfcc:
    add r1, r10, r2
    strb r3, [r1, #0x90]
    add r2, r2, #1
@L_0209cfd8:
    ldrh r1, [r0, #0x5e]
    cmp r2, r1
    blt @L_0209cfcc
@L_0209cfe4:
    add sp, sp, #0x10
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0209cff0:
    mov r0, #0
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm s32 func_0209d024(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10
    ldr r1, =data_020a72f4
    add r4, sp, #0
    mov r10, r0
    ldmia r1, {r0, r1, r2, r3}
    stmia r4, {r0, r1, r2, r3}
    ldr r0, =data_020cdd80
    ldrh r4, [r0, #0x6a]
    cmp r4, #9
    bne @L_0209d07c
    mov r0, r10
    bl func_0209bf60
    cmp r0, #0
    beq @L_0209d07c
    mov r4, #0xc
    mov r0, r10
    mov r1, r4
    bl func_0209bedc
    add sp, sp, #0x10
    sub r0, r4, #0xd
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0209d07c:
    cmp r4, #4
    beq @L_0209d0c8
    mov r0, r10
    bl func_0209bf44
    cmp r0, #0
    ldrne r0, =data_020cdd80
    ldrneh r0, [r0, #0x6c]
    andne r0, r0, #2
    cmpne r0, #2
    addeq sp, sp, #0x10
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r4, #0xc
    mov r0, r10
    mov r1, r4
    bl func_0209bedc
    add sp, sp, #0x10
    sub r0, r4, #0xd
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0209d0c8:
    mov r8, #0
    ldr r0, =data_020cb980
    ldr r1, =data_020c5120
    mov r3, r8
    mov r2, #0x78
    bl _ZN8Wireless13func_0203ca80EPKvtPv
    cmp r0, #0
    beq @L_0209d1ac
    mov r0, r10
    bl func_0209bf9c
    ldrb r1, [r10, #0x90]
    mov r7, r0
    cmp r1, #0
    addeq sp, sp, #0x10
    moveq r0, r8
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, =data_020c4844
    strb r8, [r10, #0x90]
    ldr r0, [r0]
    ldr r2, =data_020c8760
    add r0, r0, #1
    and r1, r0, #3
    mov r0, #0x3c0
    mla r4, r1, r0, r2
    add r5, r10, #0x94
    mov r6, #1
    ldr r11, =data_020cdd80
    b @L_0209d174
@L_0209d138:
    tst r7, r6, lsl r8
    beq @L_0209d170
    cmp r8, #0
    ldreq r9, [r10, #0x74]
    mov r1, r8, lsl #0x10
    mov r0, r10
    mov r1, r1, lsr #0x10
    ldrne r9, [r10, #0x78]
    bl func_0209c4bc
    mov r1, #0xf0
    mla r1, r8, r1, r4
    mov r2, r9
    add r0, r5, r0
    bl MI_CpuCopy8
@L_0209d170:
    add r8, r8, #1
@L_0209d174:
    ldrh r0, [r11, #0x5e]
    cmp r8, r0
    blt @L_0209d138
    ldr r0, =data_020c4830
    ldr r1, =data_020c4844
    ldr r2, [r0]
    ldr r3, [r1]
    add r2, r2, #1
    add r3, r3, #1
    str r2, [r0]
    add sp, sp, #0x10
    str r3, [r1]
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0209d1ac:
    mov r0, r8
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" s32 func_0209d1d4(u8 *arg0)
{
    s32 r0;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;
    s32 v4;
    v0 = func_0209bee4((s32)arg0);
    r0 = v0;
    switch (r0) {
        case 5:
            if (*(u8 *)(arg0 + 0x65) == 0) {
                v1 = func_0209cd30((s32)arg0);
                r0 = v1;
                break;
            } else {
                v2 = func_0209c9e0((s32)arg0);
                r0 = v2;
                break;
            }
            *(s32 *)(arg0 + 0x60) = r0;
            return r0;
        case 11:
            if (*(u8 *)(arg0 + 0x65) == 0) {
                v3 = func_0209d024((s32)arg0);
                r0 = v3;
                break;
            } else {
                v4 = func_0209cba8((s32)arg0);
                r0 = v4;
                break;
            }
            *(s32 *)(arg0 + 0x60) = r0;
            return r0;
        default:
            r0 = -1;
            break;
    }
    *(s32 *)(arg0 + 0x60) = r0;
    return r0;
}

extern "C" s32 func_0209d240(void)
{
    u8 *r0;
    s32 r1;
    s32 r2;
    r0 = (u8 *)data_020fc754;
    r1 = 0;
    r2 = 0;
    do {
        *(s32 *)(r0 + (r2 << 2)) = r1;
        r2 = (r2 + 1);
    } while (r2 < 0x10);
    return (s32)r0;
}

extern "C" asm s32 func_0209d264(...)
{
    ldr r2, =data_020fc750
    ldr r0, [r2]
    add r0, r0, r0
    add r0, r0, r0
    ldr r2, =data_020fc754
    add r2, r2, r0
    mov r0, #0
    str r0, [r2]
    ldr r2, =data_020fc74c
    ldr sp, [r2]
    ldr lr, [sp], #4
    mov pc, lr
}

extern "C" asm void func_0209d2a0(void)
{
    str lr, [sp, #-4]!
    ldr r2, =data_020fc750
    ldr r0, [r2]
    add r0, r0, r0
    add r0, r0, r0
    ldr r2, =data_020fc754
    add r2, r2, r0
    str sp, [r2]
    ldr r2, =data_020fc74c
    ldr sp, [r2]
    ldr lr, [sp], #4
    mov pc, lr
}

extern "C" asm s32 func_0209d2dc(...)
{
    str lr, [sp, #-4]!
    str r12, [sp, #-4]!
    str r11, [sp, #-4]!
    str r10, [sp, #-4]!
    str r9, [sp, #-4]!
    str r8, [sp, #-4]!
    str r7, [sp, #-4]!
    str r6, [sp, #-4]!
    str r5, [sp, #-4]!
    str r4, [sp, #-4]!
    str r3, [sp, #-4]!
    str r2, [sp, #-4]!
    str r1, [sp, #-4]!
    bl func_0209d2a0
    b @L_0209d318
@L_0209d318:
    ldr r1, [sp], #4
    ldr r2, [sp], #4
    ldr r3, [sp], #4
    ldr r4, [sp], #4
    ldr r5, [sp], #4
    ldr r6, [sp], #4
    ldr r7, [sp], #4
    ldr r8, [sp], #4
    ldr r9, [sp], #4
    ldr r10, [sp], #4
    ldr r11, [sp], #4
    ldr r12, [sp], #4
    ldr r2, [sp], #4
    mov pc, r2
}

extern "C" void func_0209d350(s32 arg0)
{
    s32 r4;
    r4 = 0;
    if (arg0 <= 0)
        return;
    do {
        func_0209d2dc();
        r4 = (r4 + 1);
    } while (r4 < arg0);
    return;
}

extern "C" s32 func_0209d378(void)
{
    s32 v1;
    s32 t0;
    t0 = *(s32 *)(((u8 *)&data_020fc794) + (*(s32 *)(((u8 *)&data_020fc74c) + 0x4) << 2));
    ((s32 (*)(...))*(s32 *)(((u8 *)&data_020fc794) + (*(s32 *)(((u8 *)&data_020fc74c) + 0x4) << 2)))(t0, (s32)((u8 *)&data_020fc794));
    v1 = func_0209d264();
    return v1;
}

extern "C" asm int func_0209d3a0(void *callback)
{
    str r0, [r1, #-4]!
    str r12, [r1, #-4]!
    str r11, [r1, #-4]!
    str r10, [r1, #-4]!
    str r9, [r1, #-4]!
    str r8, [r1, #-4]!
    str r7, [r1, #-4]!
    str r6, [r1, #-4]!
    str r5, [r1, #-4]!
    str r4, [r1, #-4]!
    str r3, [r1, #-4]!
    str r2, [r1, #-4]!
    str r1, [r1, #-4]!
    ldr r2, =0x209d318
    str r2, [r1, #-4]!
    mov r3, #0
    ldr r2, =data_020fc754
@L_0209d3e4:
    ldr r0, [r2]
    tst r0, r0
    beq @L_0209d40c
    add r2, r2, #4
    add r3, r3, #1
    cmp r3, #0x10
    bne @L_0209d3e4
    mov r0, #0
    sub r0, r0, #1
    b @L_0209d414
@L_0209d40c:
    str r1, [r2]
    mov r0, r3
@L_0209d414:
    mov pc, lr
}

extern "C" void func_0209d420(s32 value)
{
    data_020fc794[func_0209d3a0(func_0209d378)] = value;
}

extern "C" asm void func_0209d444(void)
{
    str lr, [sp, #-4]!
    ldr r2, =data_020fc74c
    str sp, [r2]
    ldr r2, =data_020fc750
    ldr r1, [r2]
    add r1, r1, r1
    add r1, r1, r1
    ldr r2, =data_020fc754
    add r2, r2, r1
    ldr sp, [r2]
    ldr r1, [sp], #4
    mov pc, r1
}

extern "C" asm void func_0209d480(void)
{
    mov r1, #0
    ldr r2, =data_020fc754
@L_0209d488:
    ldr r0, =data_020fc750
    str r1, [r0]
    ldr r0, [r2]
    tst r0, r0
    beq @L_0209d508
    str lr, [sp, #-4]!
    str r12, [sp, #-4]!
    str r11, [sp, #-4]!
    str r10, [sp, #-4]!
    str r9, [sp, #-4]!
    str r8, [sp, #-4]!
    str r7, [sp, #-4]!
    str r6, [sp, #-4]!
    str r5, [sp, #-4]!
    str r4, [sp, #-4]!
    str r3, [sp, #-4]!
    str r2, [sp, #-4]!
    str r1, [sp, #-4]!
    bl func_0209d444
    ldr r1, [sp], #4
    ldr r2, [sp], #4
    ldr r3, [sp], #4
    ldr r4, [sp], #4
    ldr r5, [sp], #4
    ldr r6, [sp], #4
    ldr r7, [sp], #4
    ldr r8, [sp], #4
    ldr r9, [sp], #4
    ldr r10, [sp], #4
    ldr r11, [sp], #4
    ldr r12, [sp], #4
    ldr lr, [sp], #4
@L_0209d508:
    add r2, r2, #4
    add r1, r1, #1
    cmp r1, #0x10
    bne @L_0209d488
    mov pc, lr
}

extern "C" asm void func_0209d524(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r3, #0
    cmp r2, #0x10
    movhi r2, #0x10
    strb r3, [r0]
    strb r3, [r0, #1]
    add lr, r0, #4
@L_0209d540:
    strb r3, [lr, r3]
    add r3, r3, #1
    cmp r3, #0x100
    blt @L_0209d540
    mov r5, #0
    and r3, r2, #0xff
    mov r4, r5
    mov r7, r5
    mov r2, r5
@L_0209d564:
    ldrb r6, [lr, r7]
    ldrb r12, [r1, r4]
    add r0, r4, #1
    and r4, r0, #0xff
    add r0, r6, r12
    add r0, r5, r0
    and r5, r0, #0xff
    ldrb r0, [lr, r5]
    cmp r4, r3
    moveq r4, r2
    strb r0, [lr, r7]
    add r7, r7, #1
    strb r6, [lr, r5]
    cmp r7, #0x100
    blt @L_0209d564
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_0209d5a4(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
    ldrb r7, [r0]
    ldrb r6, [r0, #1]
    add r0, r0, #4
    mov lr, #0x1000000
    add r7, lr, r7, lsl #24
    mov r6, r6, lsl #0x18
    ldrb r9, [r0, r7, lsr #24]
    subs r2, r2, #1
    bmi @L_0209d604
@L_0209d5cc:
    add r6, r6, r9, lsl #24
    subs r2, r2, #1
    ldrb r8, [r0, r6, lsr #24]
    ldrb r5, [r1], #1
    strb r8, [r0, r7, lsr #24]
    strb r9, [r0, r6, lsr #24]
    add r4, r9, r8
    and r4, r4, #0xff
    add r7, r7, lr
    ldrb r4, [r0, r4]
    ldrb r9, [r0, r7, lsr #24]
    eor r5, r5, r4
    strb r5, [r3], #1
    bge @L_0209d5cc
@L_0209d604:
    sub r7, r7, lr
    mov r7, r7, lsr #0x18
    mov r6, r6, lsr #0x18
    strb r7, [r0, #-4]
    strb r6, [r0, #-3]
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
}

extern "C" int func_0209d61c(void)
{
    u8 buffer[0x54];

    func_02008580(buffer);
    return 0;
}

extern "C" void func_0209d638(void)
{
    func_0209d648(func_0209d61c());
}

extern "C" void func_0209d648(u32 value)
{
    if (value >= 5) {
        value = 0;
    }
    data_020fc7d4 = value;
    func_0209da74(value);
}

extern "C" u32 func_0209d668(void)
{
    return data_020fc7d4;
}

extern "C" void func_0209d678(s32 *obj)
{
    *obj = 0;
}

extern "C" void func_0209d684(void *obj)
{
}

extern "C" asm void func_0209d688(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    cmp r1, #0
    str r1, [r4]
    moveq r0, #0
    ldmeqia sp!, {r4, pc}
    cmp r2, #0
    beq @L_0209d6b4
    mov r0, r1
    mov r1, r2
    bl STD_CompareString
@L_0209d6b4:
    ldr lr, [r4]
    mov r0, #0x10000
    ldr r1, [lr, #4]
    rsb r0, r0, #0
    and r0, r1, r0
    cmp r0, #0x20000
    bne @L_0209d7c0
    add r0, lr, #0x20
    sub r3, r0, #0x10
    mov r12, #0
    stmib r4, {r3, r12}
    ldrsh r0, [lr, #0xc]
    cmp r0, #0
    ble @L_0209d718
@L_0209d6ec:
    ldrsh r1, [r3, #2]
    ldr r2, [r4, #8]
    ldr r0, [r4]
    add r1, r2, r1
    str r1, [r4, #8]
    ldrsh r1, [r3, #2]
    ldrsh r0, [r0, #0xc]
    add r12, r12, #1
    add r3, r3, r1
    cmp r12, r0
    blt @L_0209d6ec
@L_0209d718:
    ldr r2, [r4, #4]
    ldr r1, [r4, #8]
    mov r3, #0
    add r0, r2, r1
    ldr r1, [r2, r1]
    add r0, r0, #4
    str r1, [r4, #0xc]
    str r0, [r4, #0x14]
    ldrb r12, [r0, #3]
    mov r1, r3
    str r12, [r4, #0x10]
    b @L_0209d7ac
@L_0209d748:
    ldrsh lr, [r2]
    ldrsh r12, [r0]
    cmp lr, r12
    bne @L_0209d7a0
@L_0209d758:
    ldrb r12, [r0, #2]
    add lr, r0, #4
    add r1, r1, #1
    add r12, r2, r12, lsl #2
    str lr, [r12, #8]
    ldr r12, [r4, #0xc]
    cmp r1, r12
    bge @L_0209d7a0
    ldrb r12, [r0, #3]
    ldr lr, [r4, #0x10]
    add r0, r0, r12
    ldrb r12, [r0, #3]
    add r12, lr, r12
    str r12, [r4, #0x10]
    ldrsh lr, [r2]
    ldrsh r12, [r0]
    cmp lr, r12
    beq @L_0209d758
@L_0209d7a0:
    ldrsh r12, [r2, #2]
    add r3, r3, #1
    add r2, r2, r12
@L_0209d7ac:
    ldr r12, [r4]
    ldrsh r12, [r12, #0xc]
    cmp r3, r12
    blt @L_0209d748
    b @L_0209d86c
@L_0209d7c0:
    cmp r0, #0x30000
    bne @L_0209d86c
    add r0, lr, #0x20
    str r0, [r4, #4]
    ldr r2, [lr, #0x10]
    mov r1, #0
    str r2, [r4, #8]
    ldrsh r12, [lr, #0xe]
    add r2, r0, r2
    mov r3, r1
    str r12, [r4, #0xc]
    ldr r12, [lr, #0x14]
    str r12, [r4, #0x10]
    str r2, [r4, #0x14]
    b @L_0209d850
@L_0209d7fc:
    ldrsh lr, [r0]
    ldrsh r12, [r2]
    cmp lr, r12
    bne @L_0209d844
@L_0209d80c:
    ldrb r12, [r2, #2]
    add lr, r2, #4
    add r3, r3, #1
    add r12, r0, r12, lsl #2
    str lr, [r12, #8]
    ldrb lr, [r2, #3]
    ldr r12, [r4, #0xc]
    cmp r3, r12
    add r2, r2, lr
    bge @L_0209d844
    ldrsh lr, [r0]
    ldrsh r12, [r2]
    cmp lr, r12
    beq @L_0209d80c
@L_0209d844:
    ldrsh r12, [r0, #2]
    add r1, r1, #1
    add r0, r0, r12
@L_0209d850:
    ldr r12, [r4]
    ldrsh r12, [r12, #0xc]
    cmp r1, r12
    bge @L_0209d86c
    ldr r12, [r4, #0xc]
    cmp r3, r12
    blt @L_0209d7fc
@L_0209d86c:
    mov r0, #1
    ldmia sp!, {r4, pc}
}

extern "C" u8 *func_0209d874(u8 **arg0, s16 arg1)
{
    u8 *h = arg0[0];
    u8 *e = arg0[1];
    s32 i;
    for (i = 0; i < *(s16 *)(h + 0xC); i++) {
        if (*(s16 *)(e + 4) == arg1)
            break;
        e += *(s16 *)(e + 2);
    }
    if (i == *(s16 *)(h + 0xC))
        return 0;
    return e;
}

extern "C" s32 func_0209d8b8(int i)
{
    return data_020affd0[0][i];
}

extern "C" void func_0209d8cc(s32 *table)
{
    data_020affd0[0] = table;
}

extern "C" asm void func_0209d8dc(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x3c8
    ldr r5, =data_020a733c
    add r8, sp, #0x1e4
    mov r6, r0
    mov r4, #0x1e
@L_0209d8f4:
    ldmia r5!, {r0, r1, r2, r3}
    stmia r8!, {r0, r1, r2, r3}
    subs r4, r4, #1
    bne @L_0209d8f4
    ldr r0, [r5]
    ldr r5, =data_020b3f04
    add r7, sp, #0
    str r0, [r8]
    mov r4, #0x1e
@L_0209d918:
    ldmia r5!, {r0, r1, r2, r3}
    stmia r7!, {r0, r1, r2, r3}
    subs r4, r4, #1
    bne @L_0209d918
    mov r4, #0
    ldr r2, [r5]
    ldr r1, [sp, #0x1e4]
    sub r0, r4, #1
    mov r5, r4
    str r2, [r7]
    cmp r1, r0
    beq @L_0209d980
    add r8, sp, #0x1e4
    add r9, sp, #0
    mvn r7, #0
@L_0209d954:
    ldr r0, [r9, r5, lsl #2]
    mov r1, r6
    bl STD_CompareString
    cmp r0, #0
    addeq r0, sp, #0x1e4
    ldreq r4, [r0, r5, lsl #2]
    beq @L_0209d980
    add r5, r5, #1
    ldr r0, [r8, r5, lsl #2]
    cmp r0, r7
    bne @L_0209d954
@L_0209d980:
    mov r0, r4
    bl func_0209d8b8
    add sp, sp, #0x3c8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_0209d998(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x70
    ldr r6, =data_020a7304
    add r4, sp, #0x38
    mov r8, r0
    mov r5, r4
    ldmia r6!, {r0, r1, r2, r3}
    stmia r4!, {r0, r1, r2, r3}
    ldmia r6!, {r0, r1, r2, r3}
    stmia r4!, {r0, r1, r2, r3}
    ldmia r6!, {r0, r1, r2, r3}
    stmia r4!, {r0, r1, r2, r3}
    ldmia r6, {r0, r1}
    stmia r4, {r0, r1}
    mov r6, #0
    add r9, sp, #0
    ldr r12, =data_020b2fb0
    ldr r1, [sp, #0x38]
    sub r0, r6, #1
    cmp r1, r0
    mov r4, r9
    ldmia r12!, {r0, r1, r2, r3}
    stmia r9!, {r0, r1, r2, r3}
    ldmia r12!, {r0, r1, r2, r3}
    stmia r9!, {r0, r1, r2, r3}
    ldmia r12!, {r0, r1, r2, r3}
    stmia r9!, {r0, r1, r2, r3}
    ldmia r12, {r0, r1}
    mov r7, r6
    stmia r9, {r0, r1}
    beq @L_0209da44
    mvn r9, #0
@L_0209da18:
    ldr r0, [r4, r7, lsl #2]
    mov r1, r8
    bl STD_CompareString
    cmp r0, #0
    addeq r0, sp, #0x38
    ldreq r6, [r0, r7, lsl #2]
    beq @L_0209da44
    add r7, r7, #1
    ldr r0, [r5, r7, lsl #2]
    cmp r0, r9
    bne @L_0209da18
@L_0209da44:
    mov r0, r6
    bl func_0209d8b8
    add sp, sp, #0x70
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" void func_0209da5c(void)
{
    func_0209d8cc(data_020b40e8);
}

extern "C" void func_0209da70(u32 value)
{
}

extern "C" void func_0209da74(u32 value)
{
    func_0209da70(value);
}

extern "C" void func_0209da80(s32 a, s32 b)
{
    data_020b4944[1] = a;
    data_020b4944[0] = b;
}

extern "C" asm s32 func_0209da94(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x124
    mov r8, r0
    ldrsb r0, [r8]
    add r2, sp, #0x20
    cmp r0, #0
    beq @L_0209dad8
    ldr r1, =data_020a43f8
@L_0209dab4:
    ldrsb r3, [r8]
    cmp r3, #0
    blt @L_0209dac8
    cmp r3, #0x80
    ldrltb r3, [r1, r3]
@L_0209dac8:
    ldrsb r0, [r8, #1]!
    strb r3, [r2], #1
    cmp r0, #0
    bne @L_0209dab4
@L_0209dad8:
    mov r0, #0
    strb r0, [r2]
    ldrsb r0, [sp, #0x20]
    add r8, sp, #0x20
    mov r1, #0x2f
    cmp r0, #0x2f
    addeq r8, r8, #1
    mov r0, r8
    bl func_02016e34
    add r5, r0, #1
    cmp r0, #0
    ldr r0, =data_020b4944
    add r4, sp, #0x18
    ldrb r1, [sp, #5]
    ldmia r0, {r6, r7}
    moveq r5, r8
    str r5, [sp, #0x18]
    strb r1, [sp]
    ldr r1, [r0, #4]
    ldr r2, [r0]
    add r0, sp, #0x10
    mov r3, r4
    bl func_0209db9c
    ldr r1, [sp, #0x10]
    ldr r0, [sp, #0x14]
    cmp r1, r0
    bne @L_0209db7c
    cmp r5, r8
    beq @L_0209db7c
    ldrb r5, [sp, #4]
    str r8, [sp, #0x18]
    add r0, sp, #8
    mov r1, r7
    mov r2, r6
    mov r3, r4
    strb r5, [sp]
    bl func_0209db9c
    ldr r1, [sp, #8]
    ldr r0, [sp, #0xc]
    str r1, [sp, #0x10]
    str r0, [sp, #0x14]
@L_0209db7c:
    ldr r0, [sp, #0x10]
    ldr r1, [sp, #0x14]
    cmp r0, r1
    moveq r0, #0
    add sp, sp, #0x124
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_0209db9c(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r9, r1
    mov r8, r2
    sub r2, r8, r9
    mov r1, r2, asr #2
    add r1, r2, r1, lsr #29
    mov r4, r1, asr #3
    mov r10, r0
    mov r7, r3
    cmp r4, #0
    ble @L_0209dc6c
    mov r11, #1
@L_0209dbcc:
    add r0, r4, r4, lsr #31
    mov r6, r0, asr #1
    ldr r0, [r9, r6, lsl #3]
    ldr r1, [r7]
    add r5, r9, r6, lsl #3
    bl STD_CompareString
    cmp r0, #0
    movlt r0, r11
    movge r0, #0
    cmp r0, #0
    addne r0, r6, #1
    addne r9, r5, #8
    subne r4, r4, r0
    bne @L_0209dc64
    ldr r0, [r7]
    ldr r1, [r5]
    bl STD_CompareString
    cmp r0, #0
    movlt r0, #1
    movge r0, #0
    cmp r0, #0
    movne r4, r6
    movne r8, r5
    bne @L_0209dc64
    add r6, sp, #0x28
    mov r1, r8
    mov r2, r7
    mov r3, r6
    add r0, r5, #8
    bl func_0209dc78
    mov r4, r0
    mov r0, r9
    mov r1, r5
    mov r2, r7
    mov r3, r6
    bl func_0209dcec
    stmia r10, {r0, r4}
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0209dc64:
    cmp r4, #0
    bgt @L_0209dbcc
@L_0209dc6c:
    str r9, [r10]
    str r9, [r10, #4]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_0209dc78(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r5, r0
    sub r1, r1, r5
    mov r0, r1, asr #2
    add r0, r1, r0, lsr #29
    mov r8, r0, asr #3
    mov r4, r2
    cmp r8, #0
    ble @L_0209dce4
    mov r6, #0
    mov r7, #1
@L_0209dca4:
    add r0, r8, r8, lsr #31
    mov r10, r0, asr #1
    ldr r0, [r4]
    ldr r1, [r5, r10, lsl #3]
    add r9, r5, r10, lsl #3
    bl STD_CompareString
    cmp r0, #0
    movlt r0, r7
    movge r0, r6
    cmp r0, #0
    addeq r0, r10, #1
    subeq r8, r8, r0
    movne r8, r10
    addeq r5, r9, #8
    cmp r8, #0
    bgt @L_0209dca4
@L_0209dce4:
    mov r0, r5
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_0209dcec(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r5, r0
    sub r1, r1, r5
    mov r0, r1, asr #2
    add r0, r1, r0, lsr #29
    mov r8, r0, asr #3
    mov r4, r2
    cmp r8, #0
    ble @L_0209dd58
    mov r6, #0
    mov r7, #1
@L_0209dd18:
    add r0, r8, r8, lsr #31
    mov r10, r0, asr #1
    ldr r0, [r5, r10, lsl #3]
    ldr r1, [r4]
    add r9, r5, r10, lsl #3
    bl STD_CompareString
    cmp r0, #0
    movlt r0, r7
    movge r0, r6
    cmp r0, #0
    addne r0, r10, #1
    subne r8, r8, r0
    moveq r8, r10
    addne r5, r9, #8
    cmp r8, #0
    bgt @L_0209dd18
@L_0209dd58:
    mov r0, r5
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" s32 func_0209dd60(u8 *arg0, s32 arg1)
{
    u8 *r4;
    s32 r5;
    u8 *r6;
    s32 v0;
    s32 v1;
    s32 t0;
    s32 t1;
    s32 t2;
    v0 = func_0209da94(arg1, arg1);
    r4 = (u8 *)v0;
    r5 = (s32)arg0;
    if ((s32)r4 != 0) {
        r6 = (u8 *)data_020fc7d8;
        if ((*(s32 *)(r6) & 1) == 0) {
            v1 = FS_FindArchive((s32)data_020bafe4, 3);
            *(s32 *)(data_020fc7d8 + 0x4) = v1;
            t0 = (*(s32 *)(data_020fc7d8) | 1);
            *(s32 *)(data_020fc7d8) = t0;
        }
        t1 = *(s32 *)(data_020fc7d8 + 0x4);
        *(s32 *)(arg0) = t1;
        t2 = *(s32 *)(r4 + 0x4);
        *(s32 *)(arg0 + 0x4) = t2;
        return 1;
    } else {
        return 0;
    }
}

extern "C" s32 func_0209ddd0(s32 arg0, s32 arg1)
{
    s32 local[2];
    u8 *r4;
    s32 v0;
    s32 v1;
    s32 t0;
    s32 t1;
    v0 = func_0209dd60(((u8 *)local), arg1);
    r4 = ((u8 *)local);
    if (v0 == 0) {
        return 0;
    } else {
        t0 = *(s32 *)(r4);
        t1 = *(s32 *)(r4 + 0x4);
        v1 = FS_OpenFileFast(arg0, t0, t1);
        return v1;
    }
}

extern "C" void func_0209de0c(void)
{
    func_0209da80((s32)data_020a7520, (s32)data_020aabf8);
}

extern "C" s32 func_0209de28(s32 arg0, s32 arg1)
{
    u8 *r5;
    s32 v0;
    s32 t0;
    r5 = (u8 *)arg0;
    if (*(u8 *)(((u8 *)&gGameState) + 0x1A) != 0) {
        return 0;
    } else {
        if ((u32)*(u8 *)(((u8 *)(r5 + arg1)) + 0x18) < (u32)1) {
            arg0 = 1;
        } else {
            arg0 = 0;
        }
        if (arg0 == 0) {
            return 0;
        } else {
            v0 = func_ov015_021319bc();
            if ((arg1 == v0 && *(u8 *)(r5 + 0x14) != 0)) {
                *(u8 *)(r5 + 0x15) = 1;
            }
            t0 = (*(u8 *)(((u8 *)(r5 + 0x18)) + arg1) + 1);
            *(u8 *)(((u8 *)(r5 + 0x18)) + arg1) = t0;
            *(s32 *)(((u8 *)(r5 + (arg1 << 2))) + 0x4) = 0x6270;
            return 1;
        }
    }
}

extern "C" asm void func_0209deb0(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r9, r0
    add r0, r9, r2
    ldrb r2, [r0, #0xc]
    ldrb r0, [r0, #0x10]
    mov r8, r1
    cmp r2, r0
    movlo r0, #1
    movhs r0, #0
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    bl func_ov015_021319bc
    cmp r8, r0
    bne @L_0209defc
    ldrb r0, [r9, #0x14]
    cmp r0, #0
    movne r0, #1
    strneb r0, [r9, #0x15]
@L_0209defc:
    ldr r0, =data_020c5320
    bl func_0209bf9c
    mov r6, r0
    mov r7, #0
    add r4, r9, #0xc
    mov r5, #1
    b @L_0209df3c
@L_0209df18:
    tst r6, r5, lsl r7
    beq @L_0209df38
    mov r0, r7
    bl func_ov015_021319fc
    cmp r8, r0
    ldreqb r0, [r4, r7]
    addeq r0, r0, #1
    streqb r0, [r4, r7]
@L_0209df38:
    add r7, r7, #1
@L_0209df3c:
    cmp r7, #4
    blt @L_0209df18
    ldr r1, =0x6270
    add r0, r9, r8, lsl #2
    str r1, [r0, #4]
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_0209df60(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r0
    mov r7, r1
    bl func_ov015_021317c8
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    mov r6, #0
    mov r4, r6
    mov r5, #1
@L_0209df84:
    add r0, r8, r6, lsl #2
    ldr r0, [r0, #4]
    cmp r0, #0
    movgt r0, r5
    movle r0, r4
    cmp r0, #0
    beq @L_0209dfc4
    add r1, r8, r6, lsl #2
    ldr r0, [r1, #4]
    sub r0, r0, r7
    str r0, [r1, #4]
    cmp r0, #0
    bgt @L_0209dfc4
    mov r0, r8
    mov r1, r6
    bl func_0209dfd4
@L_0209dfc4:
    add r6, r6, #1
    cmp r6, #2
    blt @L_0209df84
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_0209dfd4(s32 *obj, int i, s32 value)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r1
    mov r5, r0
    bl func_ov015_021319bc
    cmp r4, r0
    bne @L_0209e000
    ldrb r0, [r5, #0x14]
    cmp r0, #0
    movne r0, #0
    strneb r0, [r5, #0x14]
    strneb r0, [r5, #0x15]
@L_0209e000:
    add r0, r5, r4, lsl #2
    mov r1, #0
    str r1, [r0, #4]
    add r1, r5, #0x16
    ldrb r0, [r1, r4]
    and r0, r0, #0xfe
    strb r0, [r1, r4]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void func_0209e020(u8 *arg0, s32 arg1)
{
    if (arg1 != 0)
        return;
    *(u8 *)(arg0 + 0x14) = 0;
    *(u8 *)(arg0 + 0x15) = 0;
    *(s32 *)(arg0) = 0;
    MI_CpuFill8((s32)(arg0 + 0x18), 0, 2);
    MI_CpuFill8((s32)(arg0 + 0xC), 0, 4);
    *(u8 *)(arg0 + 0x13) = 1;
    *(u8 *)(arg0 + 0x12) = 1;
    *(u8 *)(arg0 + 0x11) = 1;
    *(u8 *)(arg0 + 0x10) = 1;
    MI_CpuFill8((s32)(arg0 + 4), 0, 8);
    MI_CpuFill8((s32)(arg0 + 0x16), 0, 2);
}

extern "C" void func_0209e09c(s32 arg0, s32 arg1, s32 arg2)
{
    if (arg2 > 0) {
        *(s32 *)(((u8 *)(arg0 + (arg1 << 2))) + 0x4) = (arg2 * 0xE10);
        return;
    } else {
        func_0209dfd4((s32 *)arg0, arg1, arg2);
        return;
    }
}

extern "C" void func_0209e0c0(s32 *obj, int i, s32 value)
{
    if (value > 0) {
        (obj + 1)[i] = value;
        return;
    }
    func_0209dfd4(obj, i, value);
}

static inline s32 pos0209e0dc(s32 v)
{
    s32 t = 1;
    if (v <= 0)
        t = 0;
    return t;
}
extern "C" s32 func_0209e0dc(u8 *arg0, s32 arg1)
{
    s32 v = ((s32 *)(arg0 + 4))[arg1];
    s32 r;
    if (pos0209e0dc(v) == 0)
        return 0;
    r = (v + 0xE0F) / 0xE10;
    if (r > 7)
        return 7;
    if (r < 0)
        return 0;
    return r;
}
