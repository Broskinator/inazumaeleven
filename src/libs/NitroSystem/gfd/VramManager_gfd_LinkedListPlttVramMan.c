// (asm for now)

extern char data_020c23a8[];
extern char data_020abaa8[];
extern char data_020abaac[];
extern char data_020c23ac[];
void func_0202fedc(void);
void NNSi_GfdFreeLnkVram(void);
void func_0202fe28(void);
extern char data_020c23a8_b[];
void func_0202fe1c(void);
void NNSi_GfdAddNewFreeBlock(void);
void NNSi_GfdMergeAllFreeBlocks(void);
extern char data_020c23bc[];
void SND_Init(void);
void BeginSleep(void);
void func_02030744(void);
extern char data_020c23cc[];
void func_02010104(void);
extern char data_020c23dc[];
void func_02010124(void);
void NNSi_SndInitResourceMgr(void);
void func_02031198(void);
void func_02030978(void);
void func_0200a390(void);
void NNSi_SndPlayerMain(void);
void func_020311b8(void);
void func_020322d8(void);
void func_0200a550(void);

asm void NNS_GfdInitLnkPlttVramManager(void)
{
    stmdb sp!, {r4, lr}
    ldr r12, =data_020c23a8
    mov r4, r3
    str r0, [r12, #8]
    str r1, [r12, #0xc]
    str r2, [r12, #0x10]
    bl func_02030604
    cmp r4, #0
    ldmeqia sp!, {r4, pc}
    ldr r3, =func_020304ec
    ldr r1, =data_020abaa8
    ldr r2, =NNS_GfdFreeLnkPlttVram
    ldr r0, =data_020abaac
    str r3, [r1]
    str r2, [r0]
    ldmia sp!, {r4, pc}
}

asm void func_020304ec(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #8
    cmp r0, #0
    moveq r4, #8
    addne r0, r0, #7
    bicne r4, r0, #7
    ldr r0, =0x7fff8
    cmp r4, r0
    addhs sp, sp, #8
    movhs r0, #0
    ldmhsia sp!, {r4, r5, r6, pc}
    cmp r1, #0
    add r2, sp, #4
    beq @L_02030570
    ldr r6, =data_020c23a8
    ldr r5, =data_020c23ac
    mov r12, #8
    mov r0, r6
    mov r1, r5
    mov r3, r4
    str r12, [sp]
    bl func_0202fedc
    ldr r2, [sp, #4]
    add r1, r2, r4
    cmp r1, #0x10000
    bls @L_02030588
    mov r0, r6
    mov r1, r5
    mov r3, r4
    bl NNSi_GfdFreeLnkVram
    add sp, sp, #8
    mov r0, #0
    ldmia sp!, {r4, r5, r6, pc}
@L_02030570:
    ldr r0, =data_020c23a8
    mov r12, #0x10
    ldr r1, =data_020c23ac
    mov r3, r4
    str r12, [sp]
    bl func_0202fedc
@L_02030588:
    cmp r0, #0
    addeq sp, sp, #8
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    ldr r0, [sp, #4]
    mov r1, r4, lsr #3
    mov r0, r0, lsl #0xd
    mov r0, r0, lsr #0x10
    orr r0, r0, r1, lsl #16
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, pc}
}

asm void NNS_GfdFreeLnkPlttVram(void)
{
    stmdb sp!, {r3, lr}
    mov r1, #0x10000
    rsb r1, r1, #0
    and r1, r0, r1
    mov r2, r0, lsl #0x10
    mov r3, r1, lsr #0x10
    ldr r0, =data_020c23a8
    ldr r1, =data_020c23ac
    mov r2, r2, lsr #0xd
    mov r3, r3, lsl #3
    bl NNSi_GfdFreeLnkVram
    cmp r0, #0
    moveq r0, #1
    movne r0, #0
    ldmia sp!, {r3, pc}
}

asm void func_02030604(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r4, =data_020c23a8
    ldr r1, [r4, #0x10]
    ldr r0, [r4, #0xc]
    mov r1, r1, lsr #4
    bl func_0202fe28
    ldr r6, =data_020c23a8_b
    str r0, [r4, #4]
    mov r0, r6
    bl func_0202fe1c
    ldr r5, =data_020c23ac
    ldr r3, [r4, #8]
    mov r0, r6
    mov r1, r5
    mov r2, #0
    bl NNSi_GfdAddNewFreeBlock
    mov r0, r6
    mov r1, r5
    bl NNSi_GfdMergeAllFreeBlocks
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_02030660(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r4, =data_020c23bc
    ldr r0, [r4, #0xc]
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
    mov r6, #1
    str r6, [r4, #0xc]
    bl SND_Init
    ldr r0, =BeginSleep
    mov r5, #0
    str r0, [r4, #0x10]
    ldr r0, =func_02030744
    str r5, [r4, #0x14]
    str r0, [r4, #0x20]
    ldr r0, =data_020c23cc
    str r5, [r4, #0x24]
    bl func_02010104
    ldr r0, =data_020c23dc
    bl func_02010124
    bl NNSi_SndInitResourceMgr
    bl func_02031198
    bl func_02030978
    sub r0, r5, #1
    strb r0, [r4]
    str r6, [r4, #4]
    ldmia sp!, {r4, r5, r6, pc}
}

asm void func_020306dc(void)
{
    stmdb sp!, {r4, lr}
    mov r4, #0
@L_020306e4:
    mov r0, r4
    bl func_0200a390
    cmp r0, #0
    bne @L_020306e4
    bl NNSi_SndPlayerMain
    bl func_020311b8
    bl func_020322d8
    mov r0, r4
    bl func_0200a550
    ldmia sp!, {r4, pc}
}
