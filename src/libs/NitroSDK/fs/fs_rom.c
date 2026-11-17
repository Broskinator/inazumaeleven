// (asm for now)

void FS_CreateFileFromRom(void);
void FS_Init(void);

extern char fsi_arc_rom[];
void FS_OpenFileDirect(void);
extern char data_020bd33c[];
void FSi_InitRomArchive(void);
void FSi_InitOverlay(void);

asm void FS_CreateFileFromRom(void)
{
    stmdb sp!, {r3, lr}
    mov lr, r1
    mov r3, r2
    ldr r12, =0xffff
    ldr r1, =fsi_arc_rom
    mov r2, lr
    add r3, lr, r3
    str r12, [sp]
    bl FS_OpenFileDirect
    ldmia sp!, {r3, pc}
}

asm void FS_Init(void)
{
    stmdb sp!, {r3, lr}
    ldr r1, =data_020bd33c
    ldr r2, [r1]
    cmp r2, #0
    ldmneia sp!, {r3, pc}
    mov r2, #1
    str r2, [r1]
    bl FSi_InitRomArchive
    bl FSi_InitOverlay
    ldmia sp!, {r3, pc}
}
