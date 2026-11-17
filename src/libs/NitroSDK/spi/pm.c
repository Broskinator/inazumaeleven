// (asm for now)

void PM_SendUtilityCommand(void);
void PM_SetBackLightAsync(void);
void PMi_ReadRegister(void);
void PM_ForceToPowerOffAsync(void);
void PMi_ForceToPowerOff(void);
void PM_ForceToPowerOff(void);
void PMi_SetAmp(void);
void PM_GetBackLight(void);
void PMi_SendPxiData(void);
void PMi_PreSleepForDma(void);
void PM_GoSleepMode(void);
void PMi_SetLCDPower(void);
void PM_SetLCDPower(void);
void PM_GetLCDPower(void);
void PMi_SendLEDPatternCommand(void);
void PM_GetLEDPattern(void);
void PMi_InsertList(void);
void PMi_DeleteList(void);
void PMi_ExecuteList(void);
void PM_AppendPreSleepCallback(void);
void PM_PrependPreSleepCallback(void);
void PM_AppendPostSleepCallback(void);
void PMi_InsertPostSleepCallbackEx(void);
void PM_DeletePreSleepCallback(void);
void PM_DeletePostSleepCallback(void);
void PMi_LCDOnAvoidReset(void);
void PMi_SetDispOffCount(void);
void RTC_Init(void);
void RTC_GetDateAsync(void);
void RTC_GetDate(void);
void RTC_GetTimeAsync(void);
void RTC_GetTime(void);
void RTC_GetDateTimeAsync(void);
void RTC_GetDateTime(void);
void RtcCommonCallback(void);
void RtcHEX2BCD(void);
void RtcGetResultCallback(void);
void RtcWaitBusy(void);
void RTCi_ReadRawDateTimeAsync(void);
void RTCi_ReadRawDateAsync(void);
void RTCi_ReadRawTimeAsync(void);
void RTCi_WriteRawStatus2Async(void);
void RtcSendPxiCommand(void);

void PMi_DummyCallback(void);
void PMi_SetLEDAsync(void);
void PMi_WaitBusy(void);
void PM_SendUtilityCommandAsync(void);
extern char PMi_WaitBusyMethod[];
void OS_SpinWaitSysCycles(void);
void OS_DisableInterrupts(void);
void MI_StopAllDma(void);
void OS_Halt(void);
void func_0200f6c4(void);
void PXI_SendWordByFifo(void);
extern char data_020bd398[];
void MI_WaitDma(void);
void MI_StopDma(void);
extern char data_020bd37c[];
void OS_DisableIrqMask(void);
void OS_IsTickAvailable(void);
void OS_SetIrqMask(void);
void OS_RestoreInterrupts(void);
void OS_GetBootType(void);
void CTRDG_IsExisting(void);
void PMi_WaitVBlank(void);
void PMi_SendSleepStart(void);
void GX_IsDispOn(void);
void GX_DispOff(void);
extern char PMi_PreSleepCallbackList[];
extern char PMi_PostSleepCallbackList[];
extern char rtcInitialized[];
void PXI_Init(void);
void PXI_IsCallbackReady(void);
void PXI_SetFifoRecvCallback(void);
void RTC_GetDayOfWeek(void);
extern char data_020bd3bc[];

asm void PM_SendUtilityCommand(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, =PMi_DummyCallback
    add r2, sp, #0
    bl PMi_SetLEDAsync
    cmp r0, #0
    ldmneia sp!, {r3, pc}
    bl PMi_WaitBusy
    ldr r0, [sp]
    ldmia sp!, {r3, pc}
}

asm void PM_SetBackLightAsync(void)
{
    stmdb sp!, {r3, lr}
    mov r12, r2
    cmp r0, #0
    mov r2, #0
    bne @L_0200f7b0
    cmp r1, #1
    moveq r2, #6
    cmp r1, #0
    moveq r2, #7
    b @L_0200f7e4
@L_0200f7b0:
    cmp r0, #1
    bne @L_0200f7cc
    cmp r1, #1
    moveq r2, #4
    cmp r1, #0
    moveq r2, #5
    b @L_0200f7e4
@L_0200f7cc:
    cmp r0, #2
    bne @L_0200f7e4
    cmp r1, #1
    moveq r2, #8
    cmp r1, #0
    moveq r2, #9
@L_0200f7e4:
    cmp r2, #0
    ldreq r0, =0xffff
    ldmeqia sp!, {r3, pc}
    mov r1, #0
    str r3, [sp]
    mov r0, r2
    mov r2, r1
    mov r3, r12
    bl PM_SendUtilityCommandAsync
    ldmia sp!, {r3, pc}
}

asm void PMi_ReadRegister(void)
{
    stmdb sp!, {r3, lr}
    ldr r2, =PMi_DummyCallback
    add r3, sp, #0
    bl PM_SetBackLightAsync
    cmp r0, #0
    ldmneia sp!, {r3, pc}
    bl PMi_WaitBusy
    ldr r0, [sp]
    ldmia sp!, {r3, pc}
}

asm void PM_ForceToPowerOffAsync(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    bl PMi_LCDOnAvoidReset
    mov r1, #0
    mov r2, r1
    mov r3, r5
    mov r0, #0xe
    str r4, [sp]
    bl PM_SendUtilityCommandAsync
    ldmia sp!, {r3, r4, r5, pc}
}

asm void PMi_ForceToPowerOff(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    ldr r0, =PMi_DummyCallback
    add r1, sp, #0
    bl PM_ForceToPowerOffAsync
    cmp r0, #0
    addne sp, sp, #4
    ldmneia sp!, {r3, r4, pc}
    ldr r4, =PMi_WaitBusyMethod
    mov r0, #0xc
    str r0, [r4]
    bl PMi_WaitBusy
    mov r0, #2
    str r0, [r4]
    ldr r0, [sp]
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}

asm void PM_ForceToPowerOff(void)
{
    stmdb sp!, {r4, lr}
    bl PMi_ForceToPowerOff
    cmp r0, #0
    beq @L_0200f8d8
    ldr r4, =0x51d23
@L_0200f8c4:
    mov r0, r4
    bl OS_SpinWaitSysCycles
    bl PMi_ForceToPowerOff
    cmp r0, #0
    bne @L_0200f8c4
@L_0200f8d8:
    bl OS_DisableInterrupts
    bl MI_StopAllDma
@L_0200f8e0:
    bl OS_Halt
    b @L_0200f8e0
}

asm void PMi_SetAmp(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl PM_GetLCDPower
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r4, pc}
    mov r0, r4, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r0, #0x10
    mov r2, #0
    bl func_0200f6c4
    ldmia sp!, {r4, pc}
}

asm void PM_GetBackLight(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    add r2, sp, #0
    mov r0, #0xf
    mov r1, #3
    bl func_0200f6c4
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    cmp r5, #0
    beq @L_0200f95c
    ldrh r1, [sp]
    tst r1, #8
    movne r1, #1
    moveq r1, #0
    str r1, [r5]
@L_0200f95c:
    cmp r4, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldrh r1, [sp]
    tst r1, #4
    movne r1, #1
    moveq r1, #0
    str r1, [r4]
    ldmia sp!, {r3, r4, r5, pc}
}

asm void PMi_SendPxiData(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, #8
    mov r4, #0
@L_0200f98c:
    mov r0, r5
    mov r1, r6
    mov r2, r4
    bl PXI_SendWordByFifo
    cmp r0, #0
    bne @L_0200f98c
    ldmia sp!, {r4, r5, r6, pc}
}

asm void PMi_PreSleepForDma(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r4, =0x40001a4
    ldr r5, =data_020bd398
    mov r6, #0
@L_0200f9b8:
    mov r0, #0xc
    mul r0, r6, r0
    add r1, r0, #0x4000000
    ldr r2, [r1, #0xb8]
    add r0, r0, #0xb8
    str r2, [r5, r6, lsl #2]
    ldr r1, [r1, #0xb8]
    add r2, r0, #0x4000000
    and r0, r1, #0x38000000
    cmp r0, #0x18000000
    cmpne r0, #0x20000000
    beq @L_0200fa00
    cmp r0, #0x28000000
    bne @L_0200fa0c
@L_0200f9f0:
    ldr r0, [r4]
    tst r0, #0x80000000
    bne @L_0200f9f0
    b @L_0200fa24
@L_0200fa00:
    mov r0, r6
@L_0200fa04:
    bl MI_WaitDma
    b @L_0200fa24
@L_0200fa0c:
    ldr r0, [r2]
    tst r0, #0x2000000
    mov r0, r6
    bne @L_0200fa20
    b @L_0200fa04
@L_0200fa20:
    bl MI_StopDma
@L_0200fa24:
    add r6, r6, #1
    cmp r6, #3
    bls @L_0200f9b8
    ldmia sp!, {r4, r5, r6, pc}
}

asm void PM_GoSleepMode(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    ldr r3, =data_020bd37c
    mov r7, r0
    ldr r0, [r3, #0x10]
    str r1, [sp]
    str r2, [sp, #4]
    mov r5, #1
    mov r4, #0
    bl PMi_ExecuteList
    ldr r0, =0x4000208
    ldrh r6, [r0]
    strh r4, [r0]
    bl OS_DisableInterrupts
    str r0, [sp, #0x10]
    ldr r0, =0x3fffff
    bl OS_DisableIrqMask
    str r0, [sp, #0xc]
    bl OS_IsTickAvailable
    cmp r0, #0
    movne r0, #8
    moveq r0, r4
    orr r0, r0, #0x40000
    bl OS_SetIrqMask
    ldr r0, [sp, #0x10]
    bl OS_RestoreInterrupts
    ldr r1, =0x4000208
    tst r7, #8
    ldrh r0, [r1]
    strh r5, [r1]
    beq @L_0200fad4
    bl OS_GetBootType
    add r0, r0, #0xfe
    add r0, r0, #0xff00
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    cmp r0, #1
    bicls r7, r7, #8
@L_0200fad4:
    tst r7, #0x10
    beq @L_0200fae8
    bl CTRDG_IsExisting
    cmp r0, #0
    biceq r7, r7, #0x10
@L_0200fae8:
    mov r1, #0x4000000
    add r0, r1, #0x1000
    ldr r11, [r1]
    ldr r5, [r0]
    bl PM_GetLCDPower
    add r9, sp, #0x14
    add r10, sp, #0x18
    str r0, [sp, #8]
    mov r0, r10
    mov r1, r9
    bl PM_GetBackLight
    cmp r0, #0
    beq @L_0200fb3c
    ldr r8, =0x51d23
@L_0200fb20:
    mov r0, r8
    bl OS_SpinWaitSysCycles
    mov r0, r10
    mov r1, r9
    bl PM_GetBackLight
    cmp r0, #0
    bne @L_0200fb20
@L_0200fb3c:
    mov r0, #2
    mov r1, #0
    bl PMi_ReadRegister
    cmp r0, #0
    beq @L_0200fb78
    ldr r10, =0x51d23
    mov r9, #2
    mov r8, #0
@L_0200fb5c:
    mov r0, r10
    bl OS_SpinWaitSysCycles
    mov r0, r9
    mov r1, r8
    bl PMi_ReadRegister
    cmp r0, #0
    bne @L_0200fb5c
@L_0200fb78:
    bl PMi_WaitVBlank
    mov r2, #0x4000000
    ldr r0, [r2]
    add r1, r2, #0x1000
    bic r0, r0, #0x30000
    str r0, [r2]
    ldr r0, [r1]
    bic r0, r0, #0x10000
    str r0, [r1]
    bl PMi_WaitVBlank
    bl PMi_WaitVBlank
    bl PMi_PreSleepForDma
    ldr r1, [sp, #0x14]
    ldr r0, =data_020bd37c
    mov r8, #0
    str r8, [r0, #0xc]
    cmp r1, #0
    ldr r0, [sp, #0x18]
    movne r8, #0x80
    cmp r0, #0
    mov r9, #0x40
    mov r0, #0x40000
    moveq r9, #0
    bl OS_SetIrqMask
    ldr r1, [sp]
    ldr r0, [sp, #4]
    orr r1, r1, r0
    orr r0, r7, r9
    orr r0, r0, r8
    mov r0, r0, lsl #0x10
    mov r1, r1, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, r1, lsr #0x10
    bl PMi_SendSleepStart
    ldr r8, =data_020bd37c
    ldr r0, [r8, #0xc]
    cmp r0, #0
    bne @L_0200fc20
@L_0200fc10:
    bl OS_Halt
    ldr r0, [r8, #0xc]
    cmp r0, #0
    beq @L_0200fc10
@L_0200fc20:
    mov r8, #0
    bl OS_IsTickAvailable
    cmp r0, #0
    movne r0, #8
    moveq r0, r8
    orr r0, r0, #0x40000
    bl OS_SetIrqMask
    tst r7, #8
    beq @L_0200fc54
    ldr r0, =0x4000214
    ldr r0, [r0]
    tst r0, #0x100000
    movne r4, #1
@L_0200fc54:
    cmp r4, #0
    mov r7, #1
    bne @L_0200fcc8
    ldr r0, [sp, #8]
    cmp r0, #1
    bne @L_0200fc8c
@L_0200fc6c:
    mov r0, r7
    mov r1, r7
    mov r2, r7
    mov r3, r7
    bl PMi_SetLCDPower
    cmp r0, #1
    bne @L_0200fc6c
    b @L_0200fcb8
@L_0200fc8c:
    mov r0, r7
    bl PM_SendUtilityCommand
    cmp r0, #0
    beq @L_0200fcb8
    ldr r9, =0x51d23
@L_0200fca0:
    mov r0, r9
    bl OS_SpinWaitSysCycles
    mov r0, r7
    bl PM_SendUtilityCommand
    cmp r0, #0
    bne @L_0200fca0
@L_0200fcb8:
    mov r0, #0x4000000
    str r11, [r0]
    add r0, r0, #0x1000
    str r5, [r0]
@L_0200fcc8:
    mov r0, #0x360000
    bl OS_SpinWaitSysCycles
    ldr r5, =0x4000208
    ldrh r0, [r5]
    ldr r0, [sp, #0xc]
    strh r8, [r5]
    bl OS_SetIrqMask
    ldr r0, [sp, #0x10]
    bl OS_RestoreInterrupts
    ldrh r0, [r5]
    cmp r4, #0
    strh r6, [r5]
    beq @L_0200fd00
    bl PM_ForceToPowerOff
@L_0200fd00:
    ldr r0, =data_020bd37c
    ldr r0, [r0, #0x18]
    bl PMi_ExecuteList
    add sp, sp, #0x1c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

asm void PMi_SetLCDPower(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r1
    mov r6, r3
    cmp r0, #0
    ldr r5, =0x51d23
    mov r4, #0
    beq @L_0200fe28
    cmp r0, #1
    bne @L_0200ff0c
    cmp r2, #0
    bne @L_0200fd74
    ldr r1, =0x2fffc3c
    ldr r0, =data_020bd37c
    ldr r1, [r1]
    ldr r0, [r0, #4]
    sub r0, r1, r0
    cmp r0, #7
    movls r0, r4
    ldmlsia sp!, {r3, r4, r5, r6, r7, pc}
@L_0200fd74:
    cmp r7, #0
    beq @L_0200fde8
    cmp r6, #0
    beq @L_0200fdb0
    mov r0, r7
    bl PM_SendUtilityCommand
    cmp r0, #0
    beq @L_0200fde8
@L_0200fd94:
    mov r0, r5
    bl OS_SpinWaitSysCycles
    mov r0, r7
    bl PM_SendUtilityCommand
    cmp r0, #0
    bne @L_0200fd94
    b @L_0200fde8
@L_0200fdb0:
    mov r1, #0
    mov r0, r7
    mov r2, r1
    bl PMi_SetLEDAsync
    cmp r0, #0
    beq @L_0200fde8
@L_0200fdc8:
    mov r0, r5
    bl OS_SpinWaitSysCycles
    mov r0, r7
    mov r1, r4
    mov r2, r4
    bl PMi_SetLEDAsync
    cmp r0, #0
    bne @L_0200fdc8
@L_0200fde8:
    ldr r1, =0x4000304
    ldr r4, =data_020bd37c
    ldrh r0, [r1]
    orr r0, r0, #1
    strh r0, [r1]
    ldr r0, [r4, #0x14]
    bl PMi_SetAmp
    cmp r0, #0
    beq @L_0200ff0c
@L_0200fe0c:
    mov r0, r5
    bl OS_SpinWaitSysCycles
    ldr r0, [r4, #0x14]
    bl PMi_SetAmp
    cmp r0, #0
    bne @L_0200fe0c
    b @L_0200ff0c
@L_0200fe28:
    mov r0, r4
    bl PMi_SetAmp
    cmp r0, #0
    beq @L_0200fe50
@L_0200fe38:
    mov r0, r5
    bl OS_SpinWaitSysCycles
    mov r0, r4
    bl PMi_SetAmp
    cmp r0, #0
    bne @L_0200fe38
@L_0200fe50:
    ldr r1, =0x2fffc3c
    ldr r0, =data_020bd37c
    ldr r1, [r1]
    ldr r0, [r0, #8]
    sub r0, r1, r0
    cmp r0, #2
    bhi @L_0200fe74
    bl PMi_WaitVBlank
    bl PMi_WaitVBlank
@L_0200fe74:
    ldr r12, =0x4000304
    ldr r0, =0xfffe
    ldrh r3, [r12]
    ldr r2, =0x2fffc3c
    ldr r1, =data_020bd37c
    and r0, r3, r0
    strh r0, [r12]
    ldr r0, [r2]
    cmp r7, #0
    str r0, [r1, #4]
    beq @L_0200ff0c
    cmp r6, #0
    beq @L_0200fed4
    mov r0, r7
    bl PM_SendUtilityCommand
    cmp r0, #0
    beq @L_0200ff0c
@L_0200feb8:
    mov r0, r5
    bl OS_SpinWaitSysCycles
    mov r0, r7
    bl PM_SendUtilityCommand
    cmp r0, #0
    bne @L_0200feb8
    b @L_0200ff0c
@L_0200fed4:
    mov r1, #0
    mov r0, r7
    mov r2, r1
    bl PMi_SetLEDAsync
    cmp r0, #0
    beq @L_0200ff0c
@L_0200feec:
    mov r0, r5
    bl OS_SpinWaitSysCycles
    mov r0, r7
    mov r1, r4
    mov r2, r4
    bl PMi_SetLEDAsync
    cmp r0, #0
    bne @L_0200feec
@L_0200ff0c:
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void PM_SetLCDPower(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    cmp r4, #1
    beq @L_0200ff4c
    mov r4, #0
    bl GX_IsDispOn
    cmp r0, #0
    beq @L_0200ff4c
    bl GX_DispOff
@L_0200ff4c:
    mov r1, #0
    mov r0, r4
    mov r2, r1
    mov r3, #1
    bl PMi_SetLCDPower
    ldmia sp!, {r4, pc}
}

asm void PM_GetLCDPower(void)
{
    ldr r0, =0x4000304
    ldrh r0, [r0]
    tst r0, #1
    movne r0, #1
    moveq r0, #0
    bx lr
}

asm void PMi_SendLEDPatternCommand(void)
{
    mov r0, r0, lsl #0x10
    mov r1, r0, lsr #0x10
    ldr r12, =func_0200f6c4
    mov r0, #0x12
    mov r2, #0
    bx r12
}

asm void PM_GetLEDPattern(void)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    mov r4, r0
    add r2, sp, #0
    mov r0, #0xf
    mov r1, #8
    bl func_0200f6c4
    cmp r0, #0
    addne sp, sp, #4
    ldmneia sp!, {r3, r4, pc}
    cmp r4, #0
    ldrneh r1, [sp]
    strne r1, [r4]
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}

asm void PMi_InsertList(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    movs r7, r0
    mov r6, r1
    mov r5, r2
    mov r4, r3
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    str r5, [r6, #8]
    bl OS_DisableInterrupts
    ldr r2, [r7]
    mov r3, #0
    cmp r2, #0
    beq @L_02010040
@L_02010008:
    cmp r4, #0
    bne @L_0201001c
    ldr r1, [r2, #8]
    cmp r1, r5
    bgt @L_02010040
@L_0201001c:
    cmp r4, #1
    bne @L_02010030
    ldr r1, [r2, #8]
    cmp r1, r5
    bge @L_02010040
@L_02010030:
    mov r3, r2
    ldr r2, [r2, #0xc]
    cmp r2, #0
    bne @L_02010008
@L_02010040:
    cmp r2, #0
    strne r2, [r6, #0xc]
    moveq r1, #0
    streq r1, [r6, #0xc]
    cmp r3, #0
    strne r6, [r3, #0xc]
    streq r6, [r7]
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void PMi_DeleteList(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    movs r5, r0
    mov r4, r1
    ldmeqia sp!, {r3, r4, r5, pc}
    bl OS_DisableInterrupts
    ldr r1, [r5]
    mov r2, r1
    cmp r1, #0
    beq @L_020100b4
@L_02010088:
    cmp r1, r4
    bne @L_020100a4
    cmp r1, r2
    ldr r1, [r1, #0xc]
    streq r1, [r5]
    strne r1, [r2, #0xc]
    b @L_020100b4
@L_020100a4:
    mov r2, r1
    ldr r1, [r1, #0xc]
    cmp r1, #0
    bne @L_02010088
@L_020100b4:
    bl OS_RestoreInterrupts
    ldmia sp!, {r3, r4, r5, pc}
}

asm void PMi_ExecuteList(void)
{
    stmdb sp!, {r4, lr}
    movs r4, r0
    ldmeqia sp!, {r4, pc}
@L_020100c8:
    ldr r0, [r4, #4]
    ldr r1, [r4]
    blx r1
    ldr r4, [r4, #0xc]
    cmp r4, #0
    bne @L_020100c8
    ldmia sp!, {r4, pc}
}

asm void PM_AppendPreSleepCallback(void)
{
    mov r1, r0
    ldr r0, =PMi_PreSleepCallbackList
    ldr r12, =PMi_InsertList
    mov r2, #0xff
    mov r3, #0
    bx r12
}

asm void PM_PrependPreSleepCallback(void)
{
    mov r1, r0
    ldr r0, =PMi_PreSleepCallbackList
    ldr r12, =PMi_InsertList
    mvn r2, #0xfe
    mov r3, #1
    bx r12
}

asm void PM_AppendPostSleepCallback(void)
{
    mov r1, r0
    ldr r0, =PMi_PostSleepCallbackList
    ldr r12, =PMi_InsertList
    mov r2, #0xff
    mov r3, #0
    bx r12
}

asm void PMi_InsertPostSleepCallbackEx(void)
{
    mov r3, r0
    mov r2, r1
    mov r1, r3
    ldr r0, =PMi_PreSleepCallbackList
    ldr r12, =PMi_InsertList
    mov r3, #0
    bx r12
}

asm void PM_DeletePreSleepCallback(void)
{
    mov r1, r0
    ldr r0, =PMi_PreSleepCallbackList
    ldr r12, =PMi_DeleteList
    bx r12
}

asm void PM_DeletePostSleepCallback(void)
{
    mov r1, r0
    ldr r0, =PMi_PostSleepCallbackList
    ldr r12, =PMi_DeleteList
    bx r12
}

asm void PMi_LCDOnAvoidReset(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r0, #0x360000
    bl OS_SpinWaitSysCycles
    ldr r0, =PMi_WaitBusyMethod
    mov r1, #0xe
    ldr r4, [r0]
    str r1, [r0]
    bl PM_GetLCDPower
    cmp r0, #1
    beq @L_0201022c
    mov r0, #2
    mov r1, #0
    bl PMi_ReadRegister
    cmp r0, #0
    beq @L_020101fc
    ldr r7, =0x51d23
    mov r6, #2
    mov r5, #0
@L_020101e0:
    mov r0, r7
    bl OS_SpinWaitSysCycles
    mov r0, r6
    mov r1, r5
    bl PMi_ReadRegister
    cmp r0, #0
    bne @L_020101e0
@L_020101fc:
    mov r0, #1
    bl PM_SetLCDPower
    cmp r0, #0
    bne @L_0201022c
    mov r6, #5
    mov r5, #1
@L_02010214:
    mov r0, r6
    bl OS_SpinWaitSysCycles
    mov r0, r5
    bl PM_SetLCDPower
    cmp r0, #0
    beq @L_02010214
@L_0201022c:
    ldr r0, =PMi_WaitBusyMethod
    str r4, [r0]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void PMi_SetDispOffCount(void)
{
    ldr r1, =0x2fffc3c
    ldr r0, =data_020bd37c
    ldr r1, [r1]
    str r1, [r0, #8]
    bx lr
}

asm void RTC_Init(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    ldr r0, =rtcInitialized
    ldrh r1, [r0]
    cmp r1, #0
    ldmneia sp!, {r3, r4, r5, pc}
    mov r1, #1
    strh r1, [r0]
    mov r1, #0
    str r1, [r0, #4]
    str r1, [r0, #8]
    str r1, [r0, #0x20]
    str r1, [r0, #0xc]
    str r1, [r0, #0x10]
    bl PXI_Init
    mov r5, #5
    mov r4, #1
@L_0201029c:
    mov r0, r5
    mov r1, r4
    bl PXI_IsCallbackReady
    cmp r0, #0
    beq @L_0201029c
    ldr r1, =RtcCommonCallback
    mov r0, r5
    bl PXI_SetFifoRecvCallback
    ldmia sp!, {r3, r4, r5, pc}
}

asm void RTC_GetDateAsync(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r0
    mov r7, r1
    mov r6, r2
    bl OS_DisableInterrupts
    ldr r4, =rtcInitialized
    ldr r1, [r4, #4]
    cmp r1, #0
    beq @L_020102f8
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_020102f8:
    mov r1, #1
    str r1, [r4, #4]
    bl OS_RestoreInterrupts
    mov r5, #0
    str r5, [r4, #0x18]
    str r5, [r4, #0x1c]
    str r8, [r4, #0xc]
    str r7, [r4, #8]
    str r6, [r4, #0x14]
    bl RTCi_ReadRawDateAsync
    cmp r0, #0
    movne r0, r5
    streq r5, [r4, #4]
    moveq r0, #3
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void RTC_GetDate(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, =RtcGetResultCallback
    mov r2, #0
    bl RTC_GetDateAsync
    ldr r1, =rtcInitialized
    cmp r0, #0
    str r0, [r1, #0x24]
    bne @L_0201035c
    bl RtcWaitBusy
@L_0201035c:
    ldr r0, =rtcInitialized
    ldr r0, [r0, #0x24]
    ldmia sp!, {r3, pc}
}

asm void RTC_GetTimeAsync(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r0
    mov r7, r1
    mov r6, r2
    bl OS_DisableInterrupts
    ldr r4, =rtcInitialized
    ldr r1, [r4, #4]
    cmp r1, #0
    beq @L_020103a0
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_020103a0:
    mov r5, #1
    str r5, [r4, #4]
    bl OS_RestoreInterrupts
    str r5, [r4, #0x18]
    mov r5, #0
    str r5, [r4, #0x1c]
    str r8, [r4, #0xc]
    str r7, [r4, #8]
    str r6, [r4, #0x14]
    bl RTCi_ReadRawTimeAsync
    cmp r0, #0
    movne r0, r5
    streq r5, [r4, #4]
    moveq r0, #3
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void RTC_GetTime(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, =RtcGetResultCallback
    mov r2, #0
    bl RTC_GetTimeAsync
    ldr r1, =rtcInitialized
    cmp r0, #0
    str r0, [r1, #0x24]
    bne @L_02010404
    bl RtcWaitBusy
@L_02010404:
    ldr r0, =rtcInitialized
    ldr r0, [r0, #0x24]
    ldmia sp!, {r3, pc}
}

asm void RTC_GetDateTimeAsync(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r7, r0
    mov r6, r1
    mov r5, r2
    mov r4, r3
    bl OS_DisableInterrupts
    ldr r8, =rtcInitialized
    ldr r1, [r8, #4]
    cmp r1, #0
    beq @L_0201044c
    bl OS_RestoreInterrupts
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0201044c:
    mov r1, #1
    str r1, [r8, #4]
    bl OS_RestoreInterrupts
    mov r0, #2
    str r0, [r8, #0x18]
    mov r9, #0
    str r9, [r8, #0x1c]
    str r7, [r8, #0xc]
    str r6, [r8, #0x10]
    str r5, [r8, #8]
    str r4, [r8, #0x14]
    bl RTCi_ReadRawDateTimeAsync
    cmp r0, #0
    movne r0, r9
    streq r9, [r8, #4]
    moveq r0, #3
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

asm void RTC_GetDateTime(void)
{
    stmdb sp!, {r3, lr}
    ldr r2, =RtcGetResultCallback
    mov r3, #0
    bl RTC_GetDateTimeAsync
    ldr r1, =rtcInitialized
    cmp r0, #0
    str r0, [r1, #0x24]
    bne @L_020104b8
    bl RtcWaitBusy
@L_020104b8:
    ldr r0, =rtcInitialized
    ldr r0, [r0, #0x24]
    ldmia sp!, {r3, pc}
}

asm void RtcCommonCallback(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    cmp r2, #0
    ldr r0, =0x2fffdea
    mov r4, #0
    ldr r6, =rtcInitialized
    beq @L_0201051c
    ldr r0, [r6, #0x1c]
    cmp r0, #0
    strne r4, [r6, #0x1c]
    ldr r0, [r6, #4]
    cmp r0, #0
    strne r4, [r6, #4]
    ldr r2, [r6, #8]
    cmp r2, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    str r4, [r6, #8]
    ldr r1, [r6, #0x14]
    mov r0, #6
    blx r2
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_0201051c:
    and r2, r1, #0x7f00
    mov r2, r2, lsr #8
    and r2, r2, #0xff
    cmp r2, #0x30
    and r1, r1, #0xff
    bne @L_02010548
    ldr r0, [r6, #0x20]
    cmp r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    blx r0
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
@L_02010548:
    cmp r1, #0
    bne @L_02010888
    ldr r1, [r6, #0x18]
    mov r5, r4
    cmp r1, #0xf
    addls pc, pc, r1, lsl #2
    b @L_0201087c
    b @L_020105a4
    b @L_020105f8
    b @L_02010640
    b @L_020108c4
    b @L_020108c4
    b @L_020108c4
    b @L_020106c0
    b @L_020106e4
    b @L_02010704
    b @L_0201079c
    b @L_02010808
    b @L_020108c4
    b @L_020108c4
    b @L_020108c4
    b @L_020108c4
    b @L_020108c4
@L_020105a4:
    ldr r7, =0x2fffde8
    ldr r8, [r6, #0xc]
    ldr r0, [r7]
    mov r0, r0, lsl #0x18
    mov r0, r0, lsr #0x18
    bl RtcHEX2BCD
    str r0, [r8]
    ldr r0, [r7]
    mov r0, r0, lsl #0x13
    mov r0, r0, lsr #0x1b
    bl RtcHEX2BCD
    str r0, [r8, #4]
    ldr r0, [r7]
    mov r0, r0, lsl #0xa
    mov r0, r0, lsr #0x1a
    bl RtcHEX2BCD
    str r0, [r8, #8]
    mov r0, r8
    bl RTC_GetDayOfWeek
    str r0, [r8, #0xc]
    b @L_020108c4
@L_020105f8:
    ldr r7, =0x2fffdec
    ldr r8, [r6, #0xc]
    ldr r0, [r7]
    mov r0, r0, lsl #0x1a
    mov r0, r0, lsr #0x1a
    bl RtcHEX2BCD
    str r0, [r8]
    ldr r0, [r7]
    mov r0, r0, lsl #0x11
    mov r0, r0, lsr #0x19
    bl RtcHEX2BCD
    str r0, [r8, #4]
    ldr r0, [r7]
@L_0201062c:
    mov r0, r0, lsl #9
    mov r0, r0, lsr #0x19
    bl RtcHEX2BCD
    str r0, [r8, #8]
    b @L_020108c4
@L_02010640:
    ldr r7, =0x2fffde8
    ldr r8, [r6, #0xc]
    ldr r0, [r7]
    and r0, r0, #0xff
    bl RtcHEX2BCD
    str r0, [r8]
    ldr r0, [r7]
    mov r0, r0, lsl #0x13
    mov r0, r0, lsr #0x1b
    bl RtcHEX2BCD
    str r0, [r8, #4]
    ldr r0, [r7]
    mov r0, r0, lsl #0xa
    mov r0, r0, lsr #0x1a
    bl RtcHEX2BCD
    str r0, [r8, #8]
    mov r0, r8
    bl RTC_GetDayOfWeek
    str r0, [r8, #0xc]
    ldr r0, [r7, #4]
    ldr r8, [r6, #0x10]
    mov r0, r0, lsl #0x1a
    mov r0, r0, lsr #0x1a
    bl RtcHEX2BCD
    str r0, [r8]
    ldr r0, [r7, #4]
    mov r0, r0, lsl #0x11
    mov r0, r0, lsr #0x19
    bl RtcHEX2BCD
    str r0, [r8, #4]
    ldr r0, [r7, #4]
    b @L_0201062c
@L_020106c0:
    ldrh r0, [r0]
    ldr r1, [r6, #0xc]
    mov r0, r0, lsl #0x1c
    mov r0, r0, lsr #0x1c
    cmp r0, #4
    moveq r0, #1
    streq r0, [r1]
    strne r5, [r1]
    b @L_020108c4
@L_020106e4:
    ldrh r0, [r0]
    ldr r1, [r6, #0xc]
    mov r0, r0, lsl #0x19
    movs r0, r0, lsr #0x1f
    movne r0, #1
    strne r0, [r1]
    streq r5, [r1]
    b @L_020108c4
@L_02010704:
    ldr r7, =0x2fffdec
    ldr r8, [r6, #0xc]
    ldr r0, [r7]
    mov r0, r0, lsl #0x1d
    mov r0, r0, lsr #0x1d
    str r0, [r8]
    ldr r0, [r7]
    mov r0, r0, lsl #0x12
    mov r0, r0, lsr #0x1a
    bl RtcHEX2BCD
    str r0, [r8, #4]
    ldr r0, [r7]
    mov r0, r0, lsl #9
    mov r0, r0, lsr #0x19
    bl RtcHEX2BCD
    str r0, [r8, #8]
    str r5, [r8, #0xc]
    ldr r0, [r7]
    mov r0, r0, lsl #0x18
    movs r0, r0, lsr #0x1f
    ldrne r0, [r8, #0xc]
    addne r0, r0, #1
    strne r0, [r8, #0xc]
    ldr r0, =0x2fffdec
    ldr r0, [r0]
    mov r0, r0, lsl #0x10
    movs r0, r0, lsr #0x1f
    ldrne r0, [r8, #0xc]
    addne r0, r0, #2
    strne r0, [r8, #0xc]
    ldr r0, =0x2fffdec
    ldr r0, [r0]
    mov r0, r0, lsl #8
    movs r0, r0, lsr #0x1f
    ldrne r0, [r8, #0xc]
    addne r0, r0, #4
    strne r0, [r8, #0xc]
    b @L_020108c4
@L_0201079c:
    ldr r2, [r6, #0x1c]
    cmp r2, #0
    bne @L_02010800
    ldr r1, [r6, #0xc]
    ldr r1, [r1]
    cmp r1, #1
    ldrh r1, [r0]
    mov r1, r1, lsl #0x1c
    bne @L_020107e4
    mov r1, r1, lsr #0x1c
    cmp r1, #4
    beq @L_020108c4
    add r1, r2, #1
    str r1, [r6, #0x1c]
    ldrh r1, [r0]
    bic r1, r1, #0xf
    orr r1, r1, #4
    b @L_02010860
@L_020107e4:
    movs r1, r1, lsr #0x1c
    beq @L_020108c4
    add r1, r2, #1
    str r1, [r6, #0x1c]
    ldrh r1, [r0]
    bic r1, r1, #0xf
    b @L_02010860
@L_02010800:
    str r5, [r6, #0x1c]
    b @L_020108c4
@L_02010808:
    ldr r2, [r6, #0x1c]
    cmp r2, #0
    bne @L_02010878
    ldr r1, [r6, #0xc]
    ldr r1, [r1]
    cmp r1, #1
    ldrh r1, [r0]
    mov r1, r1, lsl #0x19
    bne @L_02010848
    movs r1, r1, lsr #0x1f
    bne @L_020108c4
    add r1, r2, #1
    str r1, [r6, #0x1c]
    ldrh r1, [r0]
    orr r1, r1, #0x40
    b @L_02010860
@L_02010848:
    movs r1, r1, lsr #0x1f
    beq @L_020108c4
    add r1, r2, #1
    str r1, [r6, #0x1c]
    ldrh r1, [r0]
    bic r1, r1, #0x40
@L_02010860:
    strh r1, [r0]
    bl RTCi_WriteRawStatus2Async
    cmp r0, #0
    streq r5, [r6, #0x1c]
    moveq r5, #3
    b @L_020108c4
@L_02010878:
    b @L_02010800
@L_0201087c:
    str r4, [r6, #0x1c]
@L_02010880:
    mov r5, #4
    b @L_020108c4
@L_02010888:
    str r4, [r6, #0x1c]
    cmp r1, #4
    addls pc, pc, r1, lsl #2
    b @L_020108c0
    b @L_020108c0
    b @L_020108ac
    b @L_020108b0
    b @L_020108b8
    b @L_020108c0
@L_020108ac:
    b @L_02010880
@L_020108b0:
    mov r5, #5
    b @L_020108c4
@L_020108b8:
    mov r5, #1
    b @L_020108c4
@L_020108c0:
    mov r5, #6
@L_020108c4:
    ldr r0, [r6, #0x1c]
    cmp r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    ldr r0, [r6, #4]
    cmp r0, #0
    strne r4, [r6, #4]
    ldr r2, [r6, #8]
    cmp r2, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    str r4, [r6, #8]
    ldr r1, [r6, #0x14]
    mov r0, r5
    blx r2
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

asm void RtcHEX2BCD(void)
{
    stmdb sp!, {r4, lr}
    mov r12, #0
    mov r2, r12
@L_02010918:
    mov r1, r2, lsl #2
    mov r1, r0, lsr r1
    and r1, r1, #0xf
    cmp r1, #0xa
    movhs r0, #0
    ldmhsia sp!, {r4, pc}
    add r2, r2, #1
    cmp r2, #8
    blt @L_02010918
    mov r4, #0
    mov lr, #1
    mov r2, #0xa
@L_02010948:
    mov r1, r4, lsl #2
    mov r1, r0, lsr r1
    and r3, r1, #0xf
    mul r1, lr, r2
    mla r12, lr, r3, r12
    add r4, r4, #1
    mov lr, r1
    cmp r4, #8
    blt @L_02010948
    mov r0, r12
    ldmia sp!, {r4, pc}
}

asm void RtcGetResultCallback(void)
{
    ldr r1, =rtcInitialized
    str r0, [r1, #0x24]
    bx lr
}

asm void RtcWaitBusy(void)
{
    ldr r12, =data_020bd3bc
@L_02010988:
    ldr r0, [r12]
    cmp r0, #1
    beq @L_02010988
    bx lr
}

asm void RTCi_ReadRawDateTimeAsync(void)
{
    ldr r12, =RtcSendPxiCommand
    mov r0, #0x10
    bx r12
}

asm void RTCi_ReadRawDateAsync(void)
{
    ldr r12, =RtcSendPxiCommand
    mov r0, #0x11
    bx r12
}

asm void RTCi_ReadRawTimeAsync(void)
{
    ldr r12, =RtcSendPxiCommand
    mov r0, #0x12
    bx r12
}

asm void RTCi_WriteRawStatus2Async(void)
{
    ldr r12, =RtcSendPxiCommand
    mov r0, #0x27
    bx r12
}

asm void RtcSendPxiCommand(void)
{
    stmdb sp!, {r4, lr}
    mov r0, r0, lsl #8
    mov r4, #0
    and r1, r0, #0x7f00
    mov r2, r4
    mov r0, #5
    bl PXI_SendWordByFifo
    cmp r0, #0
    movge r4, #1
    mov r0, r4
    ldmia sp!, {r4, pc}
}
