// (asm for now)

void FS_SetArchiveProc(void);
void FS_LoadArchiveTables(void);
void FS_UnloadArchiveTables(void);
void FS_GetArchiveBase(void);
void FS_GetArchiveOffset(void);
void FS_IsArchiveTableLoaded(void);
void FS_GetFileImageTop(void);
void FSi_IsUnreadableRomOffset(void);
void FSi_OnRomReadDone(void);
void FSi_ReadRomCallback(void);
void FSi_RomArchiveProc(void);
void FSi_EmptyArchiveProc(void);
void FSi_ReadDummyCallback(void);
void FSi_WriteDummyCallback(void);
void FSi_OverrideRomArchive(void);
void FSi_InitRomArchive(void);

void FS_InitFile(void);
void FS_OpenFileDirect(void);
void FS_ReadFile(void);
void MI_CpuFill8(void);
void FS_CloseFile(void);
void FS_SuspendArchive(void);
void FS_ResumeArchive(void);
void CARD_IsPulledOut(void);
void FS_NotifyArchiveAsyncEnd(void);
extern char fsi_default_dma_no[];
void CARDi_ReadRom(void);
void CARD_LockRom(void);
void CARD_UnlockRom(void);
void CARD_Init(void);
void OS_GetLockID(void);
extern char fsi_arc_rom[];
void FS_InitArchive(void);
extern char data_020aadcc[];
void FS_RegisterArchiveName(void);
void OS_GetBootType(void);
void func_02010d8c(void);
void FS_LoadArchive(void);
extern char data_020aadd0[];
void FS_SetCurrentDirectory(void);

asm void FS_SetArchiveProc(void)
{
    cmp r2, #0
    moveq r1, #0
    beq @L_0200e2f8
    cmp r1, #0
    moveq r2, #0
@L_0200e2f8:
    str r1, [r0, #0x54]
    str r2, [r0, #0x58]
    bx lr
}

asm void FS_LoadArchiveTables(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x4c
    movs r8, r1
    mov r9, r0
    mov r4, r2
    beq @L_0200e330
    bl FS_IsArchiveTableLoaded
    cmp r0, #0
    beq @L_0200e330
    mov r0, r9
    bl FS_UnloadArchiveTables
@L_0200e330:
    ldr r5, [r9, #0x20]
    ldr r1, [r5, #8]
    ldr r0, [r5, #0x10]
    add r0, r1, r0
    add r0, r0, #0x3f
    bic r6, r0, #0x1f
    cmp r6, r4
    bhi @L_0200e438
    add r4, sp, #4
    add r1, r8, #0x1f
    mov r0, r4
    bic r7, r1, #0x1f
    bl FS_InitFile
    ldr r2, [r5, #4]
    mvn r0, #0
    str r0, [sp]
    ldr r3, [r5, #8]
    mov r0, r4
    mov r1, r9
    add r3, r2, r3
    bl FS_OpenFileDirect
    cmp r0, #0
    beq @L_0200e3bc
    ldr r2, [r5, #8]
    mov r0, r4
    mov r1, r7
    bl FS_ReadFile
    cmp r0, #0
    bge @L_0200e3b4
    ldr r2, [r5, #8]
    mov r0, r7
    mov r1, #0
    bl MI_CpuFill8
@L_0200e3b4:
    add r0, sp, #4
    bl FS_CloseFile
@L_0200e3bc:
    str r7, [r5, #4]
    ldr r12, [r5, #8]
    ldr r2, [r5, #0xc]
    mvn r0, #0
    str r0, [sp]
    ldr r3, [r5, #0x10]
    add r4, sp, #4
    mov r1, r9
    mov r0, r4
    add r3, r2, r3
    add r7, r7, r12
    bl FS_OpenFileDirect
    cmp r0, #0
    beq @L_0200e424
    ldr r2, [r5, #0x10]
    mov r0, r4
    mov r1, r7
    bl FS_ReadFile
    cmp r0, #0
    bge @L_0200e41c
    ldr r2, [r5, #0x10]
    mov r0, r7
    mov r1, #0
    bl MI_CpuFill8
@L_0200e41c:
    add r0, sp, #4
    bl FS_CloseFile
@L_0200e424:
    str r7, [r5, #0xc]
    str r8, [r5, #0x1c]
    ldr r0, [r9, #0x14]
    orr r0, r0, #4
    str r0, [r9, #0x14]
@L_0200e438:
    mov r0, r6
    add sp, sp, #0x4c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
}

asm void FS_UnloadArchiveTables(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    ldr r0, [r7, #0x14]
    mov r4, #0
    tst r0, #2
    movne r0, #1
    moveq r0, r4
    cmp r0, #0
    beq @L_0200e4c0
    mov r0, r7
    ldr r5, [r7, #0x20]
    bl FS_SuspendArchive
    mov r6, r0
    mov r0, r7
    bl FS_IsArchiveTableLoaded
    cmp r0, #0
    beq @L_0200e4b0
    ldr r1, [r7, #0x14]
    mov r0, #0
    bic r1, r1, #4
    str r1, [r7, #0x14]
    ldr r4, [r5, #0x1c]
    ldr r1, [r5, #0x14]
    str r1, [r5, #4]
    ldr r1, [r5, #0x18]
    str r1, [r5, #0xc]
    str r0, [r5, #0x1c]
@L_0200e4b0:
    cmp r6, #0
    beq @L_0200e4c0
    mov r0, r7
    bl FS_ResumeArchive
@L_0200e4c0:
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

asm void FS_GetArchiveBase(void)
{
    ldr r0, [r0, #0x20]
    ldr r0, [r0]
    bx lr
}

asm void FS_GetArchiveOffset(void)
{
    ldr r0, [r0, #0x20]
    ldr r0, [r0]
    add r0, r0, r1
    bx lr
}

asm void FS_IsArchiveTableLoaded(void)
{
    ldr r0, [r0, #0x14]
    tst r0, #4
    movne r0, #1
    moveq r0, #0
    bx lr
}

asm void FS_GetFileImageTop(void)
{
    ldr r0, [r0, #0x24]
    bx lr
}

asm void FSi_IsUnreadableRomOffset(void)
{
    mov r0, #0
    bx lr
}

asm void FSi_OnRomReadDone(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    bl CARD_IsPulledOut
    cmp r0, #0
    mov r1, #5
    moveq r1, #0
    mov r0, r4
    bl FS_NotifyArchiveAsyncEnd
    ldmia sp!, {r4, pc}
}

asm void FSi_ReadRomCallback(void)
{
    stmdb sp!, {lr}
    sub sp, sp, #0xc
    ldr r12, =FSi_OnRomReadDone
    mov lr, r1
    str r12, [sp]
    str r0, [sp, #4]
    mov r1, #1
    ldr r0, =fsi_default_dma_no
    str r1, [sp, #8]
    mov r1, r2
    ldr r0, [r0]
    mov r2, lr
    bl CARDi_ReadRom
    mov r0, #0x100
    add sp, sp, #0xc
    ldmia sp!, {pc}
}

asm void FSi_RomArchiveProc(void)
{
    stmdb sp!, {r3, lr}
    cmp r1, #1
    beq @L_0200e5cc
    cmp r1, #9
    beq @L_0200e594
    cmp r1, #0xa
    beq @L_0200e5b0
    b @L_0200e5d4
@L_0200e594:
    ldr r0, =fsi_default_dma_no
    ldr r0, [r0, #4]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    bl CARD_LockRom
    mov r0, #0
    ldmia sp!, {r3, pc}
@L_0200e5b0:
    ldr r0, =fsi_default_dma_no
    ldr r0, [r0, #4]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    bl CARD_UnlockRom
    mov r0, #0
    ldmia sp!, {r3, pc}
@L_0200e5cc:
    mov r0, #4
    ldmia sp!, {r3, pc}
@L_0200e5d4:
    ldr r0, =0x102
    ldmia sp!, {r3, pc}
}

asm void FSi_EmptyArchiveProc(void)
{
    mov r0, #4
    cmp r1, #1
    ldrne r0, =0x102
    bx lr
}

asm void FSi_ReadDummyCallback(void)
{
    mov r0, #4
    bx lr
}

asm void FSi_WriteDummyCallback(void)
{
    mov r0, #4
    bx lr
}

asm void FSi_OverrideRomArchive(void)
{
    mov r0, #0
    bx lr
}

asm void FSi_InitRomArchive(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x10
    mov r4, r0
    bl CARD_Init
    ldr r5, =fsi_default_dma_no
    str r4, [r5]
    bl OS_GetLockID
    ldr r4, =fsi_arc_rom
    str r0, [r5, #4]
    mov r0, r4
    bl FS_InitArchive
    mov r7, #3
    ldr r1, =data_020aadcc
    mov r0, r4
    mov r2, r7
    bl FS_RegisterArchiveName
    bl OS_GetBootType
    cmp r0, #1
    bne @L_0200e6c8
    bl func_02010d8c
    mov r6, r0
    bl func_02010d8c
    mov r5, r0
    ldr r1, =FSi_RomArchiveProc
    ldr r2, =0x682
    mov r0, r4
    bl FS_SetArchiveProc
    ldr r1, [r6, #0x40]
    sub r0, r7, #4
    cmp r1, r0
    cmpne r1, #0
    ldrne r2, [r5, #0x48]
    cmpne r2, r0
    cmpne r2, #0
    beq @L_0200e6d0
    str r1, [sp]
    ldr r1, [r6, #0x44]
    ldr r0, =FSi_ReadRomCallback
    str r1, [sp, #4]
    str r0, [sp, #8]
    mov r1, #0
    str r1, [sp, #0xc]
    ldr r3, [r5, #0x4c]
    mov r0, r4
    bl FS_LoadArchive
    b @L_0200e6d0
@L_0200e6c8:
    mov r0, r4
    bl FSi_OverrideRomArchive
@L_0200e6d0:
    ldr r0, =fsi_arc_rom
    ldr r0, [r0, #0x14]
    tst r0, #2
    movne r0, #1
    moveq r0, #0
    cmp r0, #0
    bne @L_0200e72c
    ldr r5, =fsi_arc_rom
    ldr r1, =FSi_EmptyArchiveProc
    mov r0, r5
    mvn r2, #0
    bl FS_SetArchiveProc
    mov r1, #0
    str r1, [sp]
    ldr r0, =FSi_ReadDummyCallback
    str r1, [sp, #4]
    ldr r4, =FSi_WriteDummyCallback
    str r0, [sp, #8]
    mov r0, r5
    mov r2, r1
    mov r3, r1
    str r4, [sp, #0xc]
    bl FS_LoadArchive
@L_0200e72c:
    ldr r0, =data_020aadd0
    bl FS_SetCurrentDirectory
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}
