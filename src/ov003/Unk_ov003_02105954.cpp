#include "ov003/Unk_ov003_02105954.hpp"

extern "C" void func_ov003_02105954(void);
extern "C" void func_ov003_02105c44(void);
extern "C" void func_ov003_02106768(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 func_ov003_02106788(...);
extern "C" s32 func_ov003_02106994(...);
extern "C" s32 func_ov003_021069dc(...);
extern "C" void func_ov003_0210728c(u8 *arg0, s32 arg1);
extern "C" s32 func_ov003_02107384(u8 *arg0);
extern "C" void func_ov003_021073f8(void);
extern "C" void func_ov003_02107448(void);
extern "C" void func_ov003_02107504(void);
extern "C" void func_ov003_02107554(void);
extern "C" s32 func_ov003_02107654(...);
extern "C" void func_ov003_0210769c(void);
extern "C" void func_ov003_021076d0(u8 *arg0);
extern "C" void func_ov003_021076e8(u8 *arg0);
extern "C" void func_ov003_02107778(void);
extern "C" void func_ov003_0210784c(void);
extern "C" void func_ov003_021078f4(void);
extern "C" s32 func_ov003_02107938(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, u8 arg6);
extern "C" void func_ov003_021079bc(void);
extern "C" void func_ov003_02108098(void);
extern "C" void func_ov003_02108108(void);
extern "C" s32 func_ov003_02108164(u8 *arg0);
extern "C" void func_ov003_021081ac(void);
extern "C" void func_ov003_02108558(void);
extern "C" void func_ov003_02108680(void);
extern "C" void func_ov003_021087d8(void);
extern "C" void func_ov003_02108930(void);

extern "C" char data_020c466c[];
extern "C" char data_020c46a8[];
extern "C" char data_020c46d4[];
extern "C" char data_020c47a4[];
extern "C" char data_020c5320[];
extern "C" char data_020c5e40[];
extern "C" char data_020c9660[];
extern "C" char data_020d9978[];
extern "C" char data_ov003_0211c648[];
extern "C" char data_ov003_0211e02c[];
extern "C" char data_ov003_0211e244[];
extern "C" char data_ov003_0211e260[];
extern "C" char data_ov003_0211e280[];
extern "C" char data_ov003_0211e2a0[];
extern "C" char data_ov003_0211e2bc[];
extern "C" char data_ov003_0211e2d8[];
extern "C" char data_ov003_0211e2e0[];
extern "C" void DC_FlushRange(void);
extern "C" void G2_GetBG1CharPtr(void);
extern "C" void G2_GetBG2CharPtr(void);
extern "C" void G2_GetBG3CharPtr(void);
extern "C" void MI_CpuCopy8(void);
extern "C" s32 MI_CpuFill8(...);
extern "C" void MIi_CpuClearFast(void);
extern "C" void _ZN11TreasureBox13func_020526ecEii(void);
extern "C" void _ZN12SoundManager9PlaySoundEi(void);
extern "C" void _ZN8TextFont10SetSpacingEii(void);
extern "C" void _ZN8TextFont8SetUnk1CEhh(void);
extern "C" void func_02003758(void);
extern "C" void func_020920c4(void);
extern "C" void func_02092270(void);
extern "C" void func_02093188(void);
extern "C" void func_02093368(void);
extern "C" void func_02093524(void);
extern "C" void func_0209386c(void);
extern "C" void func_020939c8(void);
extern "C" void func_02093bf4(void);
extern "C" void func_02097898(void);
extern "C" void func_02097aa0(void);
extern "C" void func_02097b3c(void);
extern "C" void func_02097c74(void);
extern "C" void func_02097ca8(void);
extern "C" void func_0209bee4(void);
extern "C" void func_0209bf0c(void);
extern "C" void func_0209bf9c(void);
extern "C" void func_0209d668(void);
extern "C" void func_ov003_021040e4(void);
extern "C" void func_ov003_02104944(void);
extern "C" void func_ov003_0210ae6c(void);
extern "C" s32 func_ov015_02132224(...);
extern "C" s32 func_ov015_021322b0(...);
extern "C" s32 func_ov015_021322d8(...);
extern "C" void func_ov015_02132984(void);
extern "C" s32 func_ov015_02132a04(...);
extern "C" s32 func_ov015_02132af0(...);
extern "C" void func_ov015_021330b4(void);
extern "C" void func_ov015_021334b8(void);
extern "C" void func_ov015_02133dc8(void);
extern "C" s32 func_ov015_02133f94(...);
extern "C" void func_ov015_02134024(void);
extern "C" void func_ov015_021340c0(void);
extern "C" void func_ov015_02134198(void);
extern "C" void func_ov015_02134208(void);
extern "C" void func_ov015_02134300(void);
extern "C" void func_ov015_02134b08(void);
extern "C" void func_ov015_0213b540(void);
extern "C" void func_ov015_0213b990(void);
extern "C" void func_ov015_0213be3c(void);
extern "C" s32 func_ov015_0213be90(...);
extern "C" s32 func_ov015_0213c3dc(...);
extern "C" void func_ov015_0213c530(void);
extern "C" void func_ov015_0213c5e0(void);
extern "C" void func_ov015_0213c6d0(void);
extern "C" void func_ov015_0213c730(void);
extern "C" void gGameState(void);
extern "C" void sprintf(void);

extern "C" asm void func_ov003_02105954(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    ldr r0, [r4, #0xc]
    mov r6, #0
    cmp r0, #0
    cmpne r0, #0x13
    cmpne r0, #1
    cmpne r0, #4
    cmpne r0, #0xa
    ldr r5, [pc, #0x2bc]
    cmpne r0, #0xf
    beq @L_021059e8
    ldr r0, [pc, #0x2b0]
    bl func_0209bee4
    cmp r0, #0
    bne @L_021059e8
    ldr r0, [r4, #0xc]
    cmp r0, #0x19
    cmpne r0, #0x1a
    cmpne r0, #0x14
    bne @L_021059b0
    mov r0, r4
    b @L_021059e0
@L_021059b0:
    ldr r0, [pc, #0x288]
    ldrb r0, [r0, #0x1c]
    cmp r0, #1
    bne @L_021059cc
    mov r0, r4
    mov r1, #0xa
@L_021059c8:
    b @L_021059e4
@L_021059cc:
    cmp r0, #2
    mov r0, r4
    bne @L_021059e0
    mov r1, #0xf
    b @L_021059c8
@L_021059e0:
    mov r1, #2
@L_021059e4:
    bl func_ov003_02104944
@L_021059e8:
    ldr r0, [r4, #0xc]
    cmp r0, #0xd
    addls pc, pc, r0, lsl #2
    b @L_02105b84
    dcd 0xea000061
    dcd 0xea000060
    dcd 0xea00005f
    dcd 0xea00005e
    dcd 0xea00005d
    dcd 0xea000007
    dcd 0xea000017
    dcd 0xea000027
    dcd 0xea000059
    dcd 0xea000058
    dcd 0xea000057
    dcd 0xea000030
    dcd 0xea000042
    dcd 0xea000041
    dcd 0xe595005c
    dcd 0xe3500001
    dcd 0x03a00001
    dcd 0x13a00000
    dcd 0xe3500000
    dcd 0x1a000000
    dcd 0xea000024
    dcd 0xe59f01e8
    dcd 0xebfe5b1f
    dcd 0xe3500000
    dcd 0xaa000000
    dcd 0xea00002d
    dcd 0xe3500001
    dcd 0x1a000046
    dcd 0xe1a00004
    dcd 0xe3a01006
    dcd 0xea000042
    dcd 0xe595005c
    dcd 0xe3500001
    dcd 0x03a00001
    dcd 0x13a00000
    dcd 0xe3500000
    dcd 0x1a000000
    dcd 0xea000013
    dcd 0xe59f01a4
    dcd 0xebfe5b3f
    dcd 0xe3500000
    dcd 0xaa000000
    dcd 0xea00001c
    dcd 0xe3500001
    dcd 0x1a000035
    dcd 0xe1a00004
    dcd 0xe3a01007
    dcd 0xea000031
    dcd 0xe595005c
    dcd 0xe3500001
    dcd 0x03a00001
    dcd 0x13a00000
    dcd 0xe3500000
    dcd 0x0a000003
    dcd 0xe59f0164
    dcd 0xebfe591a
    dcd 0xe3500000
    dcd 0x1a000028
    dcd 0xe1a00004
    dcd 0xe3a0100a
    dcd 0xea000024
    dcd 0xe595005c
    dcd 0xe3500002
    dcd 0x03a00001
    dcd 0x13a00000
    dcd 0xe3500000
    dcd 0x1a000000
    dcd 0xea000016
    dcd 0xe59f012c
    dcd 0xebfe5b23
    dcd 0xe3500000
    dcd 0xaa000002
    dcd 0xe1a00004
    dcd 0xe3a01001
    dcd 0xea000016
    dcd 0xe3500001
    dcd 0x1a000015
    dcd 0xe1a00004
    dcd 0xe3a0100c
    dcd 0xea000011
    dcd 0xe595005c
    dcd 0xe3500002
    dcd 0x03a00001
    dcd 0x13a00000
    dcd 0xe3500000
    dcd 0x1a000000
    dcd 0xea000003
    dcd 0xe59f00e0
    dcd 0xebfe5b25
    dcd 0xe3500000
    dcd 0xaa000002
    dcd 0xe1a00004
    dcd 0xe3a0100f
    dcd 0xea000003
    dcd 0xe3500001
    dcd 0x1a000002
    dcd 0xe1a00004
    dcd 0xe3a0100e
    dcd 0xebfffb6f
@L_02105b84:
    ldr r0, [r4, #0xc]
    cmp r0, #0x12
    bne @L_02105bac
    ldr r0, [pc, #0xa4]
    bl func_0209bf0c
    cmp r0, #0
    ldreq r0, [r4, #0x6d8]
    addeq r0, r0, #1
    streq r0, [r4, #0x6d8]
    beq @L_02105bb0
@L_02105bac:
    str r6, [r4, #0x6d8]
@L_02105bb0:
    ldr r0, [r4, #0x6d8]
    cmp r0, #0x12c
    bls @L_02105bec
    mov r1, #0
    str r1, [r4, #0x6d8]
    ldr r0, [r5, #0x5c]
    cmp r0, #1
    moveq r1, #1
    cmp r1, #0
    mov r0, r4
    beq @L_02105be4
    mov r1, #0xa
    b @L_02105be8
@L_02105be4:
    mov r1, #0xf
@L_02105be8:
    bl func_ov003_02104944
@L_02105bec:
    ldr r0, [r4, #0x88]
    ldr r2, [r4, #0xc]
    add r0, r0, #1
    mov r1, r0, lsr #0x1f
    rsb r0, r1, r0, lsl #27
    add r0, r1, r0, ror #27
    cmp r2, #2
    str r0, [r4, #0x88]
    cmpne r2, #0xa
    beq @L_02105c1c
    cmp r2, #0xf
    ldmneia sp!, {r4, r5, r6, pc}
@L_02105c1c:
    ldr r0, [r4, #0x8c]
    sub r0, r0, #1
    str r0, [r4, #0x8c]
    cmp r0, #0
    ldmgtia sp!, {r4, r5, r6, pc}
    mov r0, r4
    bl func_ov003_021040e4
    ldmia sp!, {r4, r5, r6, pc}
    dcd data_020c5320
    dcd gGameState
}

extern "C" asm void func_ov003_02105c44(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r9, r0
    ldr r0, [r9, #8]
    ldr r10, [pc, #0xb00]
    cmp r0, #4
    ldreqb r0, [r9, #0x19]
    mov r8, r1
    mov r11, #4
    mov r5, #1
    cmpeq r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r7, #0
    ldr r0, [pc, #0xae0]
    mov r1, r7
    bl func_ov015_0213be90
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r0, [r9, #0x31]
    mov r4, r7
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    tst r8, #1
    beq @L_02106058
    ldr r0, [r9, #0xc]
    cmp r0, #0x18
    addls pc, pc, r0, lsl #2
    b @L_02106024
    dcd 0xea0000db
    dcd 0xea000016
    dcd 0xea000078
    dcd 0xea0000d8
    dcd 0xea000041
    dcd 0xea0000d6
    dcd 0xea0000d5
    dcd 0xea0000d4
    dcd 0xea00004a
    dcd 0xea0000d2
    dcd 0xea000070
    dcd 0xea0000d0
    dcd 0xea00005a
    dcd 0xea0000ce
    dcd 0xea0000cd
    dcd 0xea00006b
    dcd 0xea0000cb
    dcd 0xea000072
    dcd 0xea0000c9
    dcd 0xea0000c8
    dcd 0xea0000c7
    dcd 0xea0000c1
    dcd 0xea0000c5
    dcd 0xea0000aa
    dcd 0xea000096
    dcd 0xe59f0a44
    dcd 0xe3a01006
    dcd 0xebfcd586
    dcd 0xe5990038
    dcd 0xe3500000
    dcd 0x1a00000e
    dcd 0xe5d9005d
    dcd 0xe3a01005
    dcd 0xe5891010
    dcd 0xe3500000
    dcd 0x1a000020
    dcd 0xe1a00009
    dcd 0xebfff8d2
    dcd 0xe3500000
    dcd 0x0a000003
    dcd 0xe1a00009
    dcd 0xebfff8d7
    dcd 0xe3500000
    dcd 0x1a000018
    dcd 0xe589b010
    dcd 0xea000016
    dcd 0xe3500001
    dcd 0x1a00000d
    dcd 0xe5d9005d
    dcd 0xe3a0100b
    dcd 0xe5891010
    dcd 0xe3500000
    dcd 0x1a00000f
    dcd 0xe1a00009
    dcd 0xebfff8c1
    dcd 0xe3500000
    dcd 0x0a000003
    dcd 0xe1a00009
    dcd 0xebfff8c6
    dcd 0xe3500000
    dcd 0x1a000007
    dcd 0xeaffffed
    dcd 0xe3500002
    dcd 0x03a00019
    dcd 0x05890010
    dcd 0x0a000002
    dcd 0xe3500003
    dcd 0x03a0001a
    dcd 0x05890010
    dcd 0xe5996038
    dcd 0xea000096
    dcd 0xe59f098c
    dcd 0xe3a01006
    dcd 0xebfcd558
    dcd 0xe5d906dd
    dcd 0xe3500000
    dcd 0x05895010
    dcd 0x0a000003
    dcd 0xe3a0001a
    dcd 0xe1a01005
    dcd 0xeb00b5b0
    dcd 0xe8bd8ff8
    dcd 0xe3a06007
    dcd 0xea000089
    dcd 0xe5d9005d
    dcd 0xe3500000
    dcd 0x1a00000a
    dcd 0xe5d9005c
    dcd 0xe3500000
    dcd 0x1a000003
    dcd 0xe59f0940
    dcd 0xe3a01009
    dcd 0xebfcd545
    dcd 0xe8bd8ff8
    dcd 0xe59f0928
    dcd 0xebfe5884
    dcd 0xe3a00010
    dcd 0xea000000
    dcd 0xe3a00011
    dcd 0xe5890010
    dcd 0xe59f0918
    dcd 0xe3a01006
    dcd 0xebfcd53b
    dcd 0xea000033
    dcd 0xe5990058
    dcd 0xe3500000
    dcd 0xca000002
    dcd 0xe5990090
    dcd 0xe3500000
    dcd 0xca000006
    dcd 0xe5990058
    dcd 0xe3500000
    dcd 0xd8bd8ff8
    dcd 0xe59f08e4
    dcd 0xe3a01009
    dcd 0xebfcd52e
    dcd 0xe8bd8ff8
    dcd 0xe59f08d4
    dcd 0xe3a01006
    dcd 0xebfcd52a
    dcd 0xe3a0000d
    dcd 0xe5890010
    dcd 0xe3a06003
    dcd 0xea000061
    dcd 0xe59f08b8
    dcd 0xe3a01006
    dcd 0xebfcd523
    dcd 0xe599008c
    dcd 0xe5c95031
    dcd 0xe3500007
    dcd 0xc3a00007
    dcd 0xc589008c
    dcd 0xea000016
    dcd 0xe59a005c
    dcd 0xe3500001
    dcd 0x01a07005
    dcd 0xe3570000
    dcd 0x1a000002
    dcd 0xe5d9005d
    dcd 0xe3500000
    dcd 0x08bd8ff8
    dcd 0xe5990038
    dcd 0xe3500000
    dcd 0x1a00000c
    dcd 0xe59f0868
    dcd 0xe3a01006
    dcd 0xebfcd50f
    dcd 0xe5d9005d
    dcd 0xe3a01012
    dcd 0xe5891010
    dcd 0xe3500000
    dcd 0x05d906dc
    dcd 0xe5c95229
    dcd 0x03500000
    dcd 0x03a00015
    dcd 0x05890010
    dcd 0xeaffffdc
    dcd 0xe59f0834
    dcd 0xe3a01004
    dcd 0xebfcd502
    dcd 0xe59a005c
    dcd 0xe3500001
    dcd 0x03a00001
    dcd 0x13a00000
    dcd 0xe3500000
    dcd 0x0a000003
    dcd 0xe59f0808
    dcd 0xebfe59b5
    dcd 0xe3a0000a
    dcd 0xea000002
    dcd 0xe59f07f8
    dcd 0xebfe59b9
    dcd 0xe3a0000f
    dcd 0xe5890010
    dcd 0xe3a06004
    dcd 0xea00002d
    dcd 0xe5990038
    dcd 0xe3500000
    dcd 0x1a000008
    dcd 0xe59f07dc
    dcd 0xe3a01006
    dcd 0xebfcd4ec
    dcd 0xe59f07c8
    dcd 0xebfe59a5
    dcd 0xe3a0001a
    dcd 0xe1a01005
    dcd 0xeb00b546
    dcd 0xe8bd8ff8
    dcd 0xe1a0600b
    dcd 0xe59f07b4
    dcd 0xe1a01006
    dcd 0xebfcd4e2
    dcd 0xe5990014
    dcd 0xe5890010
    dcd 0xea00001a
    dcd 0xe59a005c
    dcd 0xe3500001
    dcd 0x01a07005
    dcd 0xe3570000
    dcd 0x0a000015
    dcd 0xe5990038
    dcd 0xe3500000
    dcd 0x1a000006
    dcd 0xe59f077c
    dcd 0xe3a01006
    dcd 0xebfcd4d4
    dcd 0xe3a00012
    dcd 0xe5890010
    dcd 0xe5c95229
    dcd 0xeaffffc9
    dcd 0xe3a06004
    dcd 0xe59f075c
    dcd 0xe1a01006
    dcd 0xebfcd4cc
    dcd 0xe3a00015
    dcd 0xeaffffe8
    dcd 0xe59f0748
    dcd 0xe3a01006
    dcd 0xebfcd4c7
    dcd 0xe3a00016
    dcd 0xeaffff9b
@L_02106024:
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    dcd 0xe0890006
    dcd 0xe5d01478
    dcd 0xe59f072c
    dcd 0xe3a02001
    dcd 0xeb00d9bc
    dcd 0xe3500000
    dcd 0x08bd8ff8
    dcd 0xe0890006
    dcd 0xe5d01478
    dcd 0xe59f0708
    dcd 0xeb00d779
    dcd 0xe8bd8ff8
@L_02106058:
    tst r8, #2
    beq @L_02106228
    ldr r0, [r9, #0xc]
    cmp r0, #0x18
    addls pc, pc, r0, lsl #2
    b @L_021061fc
    dcd 0xea000061
    dcd 0xea000016
    dcd 0xea00005f
    dcd 0xea00005e
    dcd 0xea00005d
    dcd 0xea000018
    dcd 0xea000017
    dcd 0xea000016
    dcd 0xea000027
    dcd 0xea000058
    dcd 0xea000057
    dcd 0xea00001e
    dcd 0xea00001d
    dcd 0xea000054
    dcd 0xea000053
    dcd 0xea000052
    dcd 0xea000051
    dcd 0xea000028
    dcd 0xea00004f
    dcd 0xea00004e
    dcd 0xea00004d
    dcd 0xea00004c
    dcd 0xea00004b
    dcd 0xea000040
    dcd 0xea00003a
    dcd 0xe59f0684
    dcd 0xe1a0100b
    dcd 0xebfcd496
    dcd 0xe3a00014
    dcd 0xe5890010
    dcd 0xea000044
    dcd 0xe59f066c
    dcd 0xe1a0100b
    dcd 0xebfcd490
    dcd 0xe5d906dd
    dcd 0xe3500000
    dcd 0x13a00018
    dcd 0x15890010
    dcd 0x1a00003c
    dcd 0xe59f0644
    dcd 0xebfe5944
    dcd 0xe5895010
    dcd 0xea000038
    dcd 0xe59f063c
    dcd 0xe1a0100b
    dcd 0xebfcd484
    dcd 0xe59f0628
    dcd 0xebfe5945
    dcd 0xeafffff7
    dcd 0xe59f0624
    dcd 0xe1a0100b
    dcd 0xebfcd47e
    dcd 0xe5d906dd
    dcd 0xe3500000
    dcd 0x03a00009
    dcd 0x05890010
    dcd 0x13a00018
    dcd 0x15890010
    dcd 0xea000028
    dcd 0xe59a005c
    dcd 0xe3500001
    dcd 0x01a07005
    dcd 0xe3570000
    dcd 0x1a000002
    dcd 0xe5d9005d
    dcd 0xe3500000
    dcd 0x08bd8ff8
    dcd 0xe59f05dc
    dcd 0xe3a01004
    dcd 0xebfcd46c
    dcd 0xe59a005c
    dcd 0xe3500001
    dcd 0x03a00001
    dcd 0x13a00000
    dcd 0xe3500000
    dcd 0x0a000003
    dcd 0xe59f05b0
    dcd 0xebfe591f
    dcd 0xe3a0000a
    dcd 0xeaffffcc
    dcd 0xe59f05a0
    dcd 0xebfe5923
    dcd 0xe3a0000f
    dcd 0xeaffffc8
    dcd 0xe59f0598
    dcd 0xe1a0100b
    dcd 0xebfcd45b
    dcd 0xe5990014
    dcd 0xeaffffc3
    dcd 0xe59a005c
    dcd 0xe3500001
    dcd 0x01a07005
    dcd 0xe3570000
    dcd 0x0a000005
    dcd 0xe59f0570
    dcd 0xe3a01004
    dcd 0xebfcd451
    dcd 0xe3a00015
    dcd 0xeaffffb9
@L_021061fc:
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    dcd 0xe5d9147c
    dcd 0xe59f0558
    dcd 0xe3a02001
    dcd 0xeb00d947
    dcd 0xe3500000
    dcd 0x08bd8ff8
    dcd 0xe5d9147c
    dcd 0xe59f0538
    dcd 0xeb00d705
    dcd 0xe8bd8ff8
@L_02106228:
    tst r8, #0x800
    beq @L_021062b0
    ldrb r0, [r9, #0x5d]
    cmp r0, #0
    ldreq r0, [r9, #0xc]
    cmpeq r0, #8
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [r9, #0x38]
    add r2, r9, #0x44
    ldrb r0, [r2, r1]
    eor r0, r0, #1
    strb r0, [r2, r1]
    ldr r0, [r9, #0x38]
    add r0, r9, r0
    ldrb r0, [r0, #0x44]
    cmp r0, #0
    beq @L_02106278
    ldr r0, [pc, #0x4ec]
    mov r1, #6
    b @L_02106280
@L_02106278:
    ldr r0, [pc, #0x4e0]
    mov r1, r11
@L_02106280:
    bl _ZN12SoundManager9PlaySoundEi
    mov r2, #1
    strb r2, [r9, #0x30]
    ldrb r1, [r9, #0x47d]
    ldr r0, [pc, #0x4cc]
    bl func_ov015_0213c730
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r1, [r9, #0x47d]
    ldr r0, [pc, #0x4b0]
    bl func_ov015_0213be3c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_021062b0:
    tst r8, #0x40
    beq @L_02106430
    ldr r0, [r9, #0xc]
    cmp r0, #1
    beq @L_021062d8
    cmp r0, #8
    beq @L_0210632c
    cmp r0, #0xc
    beq @L_021063d4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_021062d8:
    ldrb r0, [r9, #0x5d]
    mov r1, r11
    cmp r0, #0
    ldr r0, [r9, #0x38]
    movne r1, #2
    subs r0, r0, #1
    str r0, [r9, #0x38]
    submi r0, r1, #1
    strmi r0, [r9, #0x38]
    ldr r0, [pc, #0x45c]
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, [r9, #0x38]
    mov r2, #1
    str r0, [r9, #0x40]
    strb r2, [r9, #0x30]
    add r0, r9, r0
    ldrb r1, [r0, #0x478]
    ldr r0, [pc, #0x43c]
    bl func_ov015_0213c730
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0210632c:
    ldrb r0, [r9, #0x5d]
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [pc, #0x418]
    bl func_0209bf9c
    ldr r1, [r9, #0x94]
    cmp r1, #1
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [r9, #0x38]
    mov r3, #2
    str r1, [r9, #0x3c]
@L_02106358:
    ldr r1, [r9, #0x38]
    ldr r2, [r9, #0x3c]
    subs r1, r1, #1
    str r1, [r9, #0x38]
    strmi r3, [r9, #0x38]
    ldr r1, [r9, #0x38]
    cmp r2, r1
    beq @L_02106384
    add r1, r1, #1
    tst r0, r5, lsl r1
    beq @L_02106358
@L_02106384:
    ldr r2, [r9, #0x38]
    add r1, r2, #1
    tst r0, r5, lsl r1
    ldr r0, [r9, #0x3c]
    streq r0, [r9, #0x38]
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r0, r2
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [pc, #0x3b4]
    mov r1, #8
    str r2, [r9, #0x3c]
    bl _ZN12SoundManager9PlaySoundEi
    ldr r1, [r9, #0x38]
    ldr r0, [pc, #0x3a4]
    add r1, r9, r1
    ldrb r1, [r1, #0x478]
    mov r2, r5
    bl func_ov015_0213c730
    strb r5, [r9, #0x30]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_021063d4:
    ldr r0, [r9, #0x90]
    cmp r0, #0
    ble @L_021063ec
    ldr r0, [pc, #0x378]
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
@L_021063ec:
    ldr r0, [r9, #0x90]
    cmp r0, #1
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [r9, #0x38]
    mov r0, r9
    mvn r2, #0
    bl func_ov003_0210ae6c
    str r0, [r9, #0x38]
    str r0, [r9, #0x3c]
    str r4, [r9, #0x58]
    add r0, r9, r0
    ldrb r1, [r0, #0x478]
    ldr r0, [pc, #0x340]
    mov r2, r5
    bl func_ov015_0213c730
    strb r5, [r9, #0x30]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02106430:
    tst r8, #0x80
    beq @L_021065b0
    ldr r0, [r9, #0xc]
    cmp r0, #1
    beq @L_02106458
    cmp r0, #8
    beq @L_021064ac
    cmp r0, #0xc
    beq @L_02106554
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02106458:
    ldrb r0, [r9, #0x5d]
    mov r1, r11
    cmp r0, #0
    ldr r0, [r9, #0x38]
    movne r1, #2
    add r0, r0, #1
    cmp r0, r1
    str r0, [r9, #0x38]
    ldr r0, [pc, #0x2e0]
    strge r4, [r9, #0x38]
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    ldr r0, [r9, #0x38]
    mov r2, #1
    str r0, [r9, #0x40]
    strb r2, [r9, #0x30]
    add r0, r9, r0
    ldrb r1, [r0, #0x478]
    ldr r0, [pc, #0x2bc]
    bl func_ov015_0213c730
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_021064ac:
    ldrb r0, [r9, #0x5d]
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [pc, #0x298]
    bl func_0209bf9c
    ldr r1, [r9, #0x94]
    cmp r1, #1
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [r9, #0x38]
    str r1, [r9, #0x3c]
@L_021064d4:
    ldr r1, [r9, #0x38]
    ldr r2, [r9, #0x3c]
    add r1, r1, #1
    str r1, [r9, #0x38]
    cmp r1, #2
    strgt r4, [r9, #0x38]
    ldr r1, [r9, #0x38]
    cmp r2, r1
    beq @L_02106504
    add r1, r1, #1
    tst r0, r5, lsl r1
    beq @L_021064d4
@L_02106504:
    ldr r2, [r9, #0x38]
    add r1, r2, #1
    tst r0, r5, lsl r1
    ldr r0, [r9, #0x3c]
    streq r0, [r9, #0x38]
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r0, r2
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [pc, #0x234]
    mov r1, #8
    str r2, [r9, #0x3c]
    bl _ZN12SoundManager9PlaySoundEi
    ldr r1, [r9, #0x38]
    ldr r0, [pc, #0x224]
    add r1, r9, r1
    ldrb r1, [r1, #0x478]
    mov r2, r5
    bl func_ov015_0213c730
    strb r5, [r9, #0x30]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_02106554:
    ldr r0, [r9, #0x90]
    cmp r0, #0
    ble @L_0210656c
    ldr r0, [pc, #0x1f8]
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
@L_0210656c:
    ldr r0, [r9, #0x90]
    cmp r0, #1
    ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [r9, #0x38]
    mov r0, r9
    mov r2, r5
    bl func_ov003_0210ae6c
    str r0, [r9, #0x38]
    str r0, [r9, #0x3c]
    str r4, [r9, #0x58]
    add r0, r9, r0
    ldrb r1, [r0, #0x478]
    ldr r0, [pc, #0x1c0]
    mov r2, r5
    bl func_ov015_0213c730
    strb r5, [r9, #0x30]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_021065b0:
    tst r8, #0x20
    beq @L_02106684
    ldrb r0, [r9, #0x5d]
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r9, #0xc]
    sub r0, r0, #0x11
    cmp r0, #7
    addls pc, pc, r0, lsl #2
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    dcd 0xea000006
    dcd 0xe8bd8ff8
    dcd 0xe8bd8ff8
    dcd 0xe8bd8ff8
    dcd 0xea000016
    dcd 0xe8bd8ff8
    dcd 0xea000000
    dcd 0xeaffffff
    dcd 0xe59a005c
    dcd 0xe3500001
    dcd 0x01a07005
    dcd 0xe3570000
    dcd 0x08bd8ff8
    dcd 0xe5990038
    dcd 0xe3500001
    dcd 0x18bd8ff8
    dcd 0xe59f0140
    dcd 0xe3a01008
    dcd 0xebfcd345
    dcd 0xe2840003
    dcd 0xe3a02001
    dcd 0xe5894038
    dcd 0xe5c92030
    dcd 0xe0890000
    dcd 0xe5d01478
    dcd 0xe59f0120
    dcd 0xeb00d83a
    dcd 0xe8bd8ff8
    dcd 0xe5990038
    dcd 0xe3500000
    dcd 0x08bd8ff8
    dcd 0xe59f0104
    dcd 0xe3a01008
    dcd 0xebfcd336
    dcd 0xe1a02005
    dcd 0xe5897038
    dcd 0xe589703c
    dcd 0xe5c92030
    dcd 0xe0890007
    dcd 0xe5d01478
    dcd 0xe59f00e4
    dcd 0xeb00d82b
    dcd 0xe8bd8ff8
@L_02106684:
    tst r8, #0x10
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r0, [r9, #0x5d]
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r9, #0xc]
    sub r0, r0, #0x11
    cmp r0, #7
    addls pc, pc, r0, lsl #2
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    dcd 0xea000006
    dcd 0xe8bd8ff8
    dcd 0xe8bd8ff8
    dcd 0xe8bd8ff8
    dcd 0xea000016
    dcd 0xe8bd8ff8
    dcd 0xea000000
    dcd 0xeaffffff
    dcd 0xe59a005c
    dcd 0xe3500001
    dcd 0x01a07005
    dcd 0xe3570000
    dcd 0x08bd8ff8
    dcd 0xe5990038
    dcd 0xe3500000
    dcd 0x18bd8ff8
    dcd 0xe59f006c
    dcd 0xe3a01008
    dcd 0xebfcd310
    dcd 0xe3a02001
    dcd 0xe2820003
    dcd 0xe5892038
    dcd 0xe5c92030
    dcd 0xe0890000
    dcd 0xe5d01478
    dcd 0xe59f004c
    dcd 0xeb00d805
    dcd 0xe8bd8ff8
    dcd 0xe5990038
    dcd 0xe3500000
    dcd 0x18bd8ff8
    dcd 0xe59f0030
    dcd 0xe3a01008
    dcd 0xebfcd301
    dcd 0xe1a02005
    dcd 0xe5892038
    dcd 0xe589203c
    dcd 0xe5c92030
    dcd 0xe2890001
    dcd 0xe5d01478
    dcd 0xe59f0010
    dcd 0xeb00d7f6
    dcd 0xe8bd8ff8
    dcd data_020c5320
    dcd data_020c9660
    dcd data_020c5e40
    dcd data_020c47a4
}

extern "C" void func_ov003_02106768(s32 arg0, s32 arg1, s32 arg2)
{
    func_ov015_0213c3dc((s32)data_020c9660, 0, arg1, arg2);
}

extern "C" asm s32 func_ov003_02106788(...)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    ldr r0, [r5, #0xc]
    mov r4, #1
    cmp r0, #1
    bne @L_02106848
    ldr r0, [r5, #0x24]
    sub r0, r0, #0x13
    cmp r0, #9
    addls pc, pc, r0, lsl #2
    ldmia sp!, {r3, r4, r5, pc}
    dcd 0xea000008
    dcd 0xe8bd8038
    dcd 0xe8bd8038
    dcd 0xea00000c
    dcd 0xe8bd8038
    dcd 0xe8bd8038
    dcd 0xea00000f
    dcd 0xe8bd8038
    dcd 0xe8bd8038
    dcd 0xea000013
    dcd 0xe5950038
    dcd 0xe3500000
    dcd 0x13a00000
    dcd 0x15850038
    dcd 0x15850040
    dcd 0x15c54030
    dcd 0xe8bd8038
    dcd 0xe5950038
    dcd 0xe3500001
    dcd 0x15854038
    dcd 0x15854040
    dcd 0x15c54030
    dcd 0xe8bd8038
    dcd 0xe5950038
    dcd 0xe3500002
    dcd 0x13a00002
    dcd 0x15850038
    dcd 0x15850040
    dcd 0x15c54030
    dcd 0xe8bd8038
    dcd 0xe5950038
    dcd 0xe3500003
    dcd 0x13a00003
    dcd 0x15850038
    dcd 0x15850040
    dcd 0x15c54030
    dcd 0xe8bd8038
@L_02106848:
    cmp r0, #0x15
    bne @L_021068b4
    ldr r0, [r5, #0x24]
    cmp r0, #0x35
    beq @L_02106868
    cmp r0, #0x36
    beq @L_02106890
    ldmia sp!, {r3, r4, r5, pc}
@L_02106868:
    ldr r0, [r5, #0x38]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldr r0, [pc, #0x114]
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    mov r0, #0
    str r0, [r5, #0x38]
    strb r4, [r5, #0x30]
    ldmia sp!, {r3, r4, r5, pc}
@L_02106890:
    ldr r0, [r5, #0x38]
    cmp r0, #0
    ldmneia sp!, {r3, r4, r5, pc}
    ldr r0, [pc, #0xec]
    mov r1, #8
    bl _ZN12SoundManager9PlaySoundEi
    str r4, [r5, #0x38]
    strb r4, [r5, #0x30]
    ldmia sp!, {r3, r4, r5, pc}
@L_021068b4:
    cmp r0, #8
    bne @L_021068f8
    ldrb r0, [r5, #0x5d]
    ldr r1, [r5, #0x24]
    cmp r0, #0
    sub r2, r1, #0x2b
    ldmneia sp!, {r3, r4, r5, pc}
    cmp r1, #0x2b
    cmpne r1, #0x2c
    beq @L_021068e4
    cmp r1, #0x2d
    ldmneia sp!, {r3, r4, r5, pc}
@L_021068e4:
    ldr r0, [r5, #0x38]
    cmp r0, r2
    strne r2, [r5, #0x38]
    strneb r4, [r5, #0x30]
    ldmia sp!, {r3, r4, r5, pc}
@L_021068f8:
    cmp r0, #0xc
    bne @L_02106938
    ldr r0, [r5, #0x24]
    sub r1, r0, #0x1f
    cmp r1, #3
    addls pc, pc, r1, lsl #2
    ldmia sp!, {r3, r4, r5, pc}
    dcd 0xea000002
    dcd 0xea000001
    dcd 0xea000000
    dcd 0xeaffffff
    dcd 0xe5950038
    dcd 0xe1500001
    dcd 0x15851038
    dcd 0x15c54030
    dcd 0xe8bd8038
@L_02106938:
    cmp r0, #0x11
    beq @L_0210694c
    sub r0, r0, #0x17
    cmp r0, #1
    ldmhiia sp!, {r3, r4, r5, pc}
@L_0210694c:
    ldr r0, [r5, #0x24]
    cmp r0, #0xb
    beq @L_02106964
    cmp r0, #0xc
    beq @L_0210697c
    ldmia sp!, {r3, r4, r5, pc}
@L_02106964:
    ldr r0, [r5, #0x38]
    cmp r0, #0
    movne r0, #0
    strne r0, [r5, #0x38]
    strneb r4, [r5, #0x30]
    ldmia sp!, {r3, r4, r5, pc}
@L_0210697c:
    ldr r0, [r5, #0x38]
    cmp r0, #0
    streq r4, [r5, #0x38]
    streqb r4, [r5, #0x30]
    ldmia sp!, {r3, r4, r5, pc}
    dcd data_020c5e40
}

extern "C" asm s32 func_ov003_02106994(...)
{
    stmdb sp!, {r4, lr}
    ldr r1, [r0, #0x24]
    ldr r0, [r0, #0x28]
    cmp r0, r1
    bne @L_021069b4
    ldr r0, =data_020c47a4
    bl func_ov015_0213c6d0
    ldmia sp!, {r4, pc}
@L_021069b4:
    ldr r4, =data_020c47a4
    mov r0, r4
    bl func_ov015_0213c5e0
    movs r1, r0
    ldmmiia sp!, {r4, pc}
    mov r0, r4
    mov r2, #1
    bl func_ov015_0213c730
    ldmia sp!, {r4, pc}
}

extern "C" asm s32 func_ov003_021069dc(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r9, r0
    ldr r0, [r9, #0x24]
    mov r6, #0x18
    cmp r0, #0x2d
    mov r5, #0xf
    mov r7, #1
    ldr r4, [pc, #0x87c]
    mov r10, #4
    mvn r8, #0
    bgt @L_02106acc
    cmp r0, #0
    addge pc, pc, r0, lsl #2
    b @L_02107244
    dcd 0xea00020a
    dcd 0xea000209
    dcd 0xea000208
    dcd 0xea000207
    dcd 0xea000206
    dcd 0xea00002a
    dcd 0xea000204
    dcd 0xea0000a5
    dcd 0xea00006d
    dcd 0xea0000de
    dcd 0xea000200
    dcd 0xea0001a8
    dcd 0xea0001ca
    dcd 0xea0001fd
    dcd 0xea0001fc
    dcd 0xea0000e1
    dcd 0xea0001fa
    dcd 0xea000158
    dcd 0xea000161
    dcd 0xea0000f3
    dcd 0xea0001f6
    dcd 0xea0001f5
    dcd 0xea000104
    dcd 0xea0001f3
    dcd 0xea0001f2
    dcd 0xea000115
    dcd 0xea0001f0
    dcd 0xea0001ef
    dcd 0xea000119
    dcd 0xea0001ed
    dcd 0xea0001ec
    dcd 0xea00013d
    dcd 0xea00013c
    dcd 0xea00013b
    dcd 0xea00013a
    dcd 0xea0001e7
    dcd 0xea0001e6
    dcd 0xea0001e5
    dcd 0xea0001e4
    dcd 0xea0001e3
    dcd 0xea0001e2
    dcd 0xea0001e1
    dcd 0xea0001e0
    dcd 0xea000110
    dcd 0xea00010f
    dcd 0xea00010e
@L_02106acc:
    cmp r0, #0x3c
    beq @L_02107214
    b @L_02107244
    dcd 0xe599000c
    dcd 0xe3500012
    dcd 0x908ff100
    dcd 0xea00003e
    dcd 0xea00003d
    dcd 0xea000010
    dcd 0xea00003b
    dcd 0xea00003a
    dcd 0xea000039
    dcd 0xea000012
    dcd 0xea000011
    dcd 0xea000010
    dcd 0xea000035
    dcd 0xea000034
    dcd 0xea000033
    dcd 0xea000017
    dcd 0xea000016
    dcd 0xea00001b
    dcd 0xea00001a
    dcd 0xea00002e
    dcd 0xea00002d
    dcd 0xea00002c
    dcd 0xea00001d
    dcd 0xe59f0744
    dcd 0xe1a0100a
    dcd 0xebfcd1fe
    dcd 0xe3a00014
    dcd 0xe5890010
    dcd 0xea000026
    dcd 0xe59f072c
    dcd 0xe1a0100a
    dcd 0xebfcd1f8
    dcd 0xe5d906dd
    dcd 0xe3500000
    dcd 0x15896010
    dcd 0x1a00001f
    dcd 0xe59f070c
    dcd 0xebfe56ad
    dcd 0xe5897010
    dcd 0xea00001b
    dcd 0xe59f0700
    dcd 0xe1a0100a
    dcd 0xebfcd1ed
    dcd 0xe59f06f0
    dcd 0xebfe56ae
    dcd 0xeafffff7
    dcd 0xe59f06e8
    dcd 0xe1a0100a
    dcd 0xebfcd1e7
    dcd 0xe59f06d8
    dcd 0xebfe56a8
    dcd 0xe5895010
    dcd 0xea00000e
    dcd 0xe59f06cc
    dcd 0xe1a0100a
    dcd 0xebfcd1e0
    dcd 0xe594005c
    dcd 0xe3500001
    dcd 0x01a00007
    dcd 0x13a00000
    dcd 0xe3500000
    dcd 0x0a000003
    dcd 0xe59f06a4
    dcd 0xebfe5693
    dcd 0xe3a0000a
    dcd 0xeaffffd8
    dcd 0xeaffffed
    dcd 0xe8bd87f0
    dcd 0xe3a08004
    dcd 0xea000194
    dcd 0xe599000c
    dcd 0xe2400008
    dcd 0xe3500009
    dcd 0x908ff100
    dcd 0xea00002f
    dcd 0xea000008
    dcd 0xea00002d
    dcd 0xea00002c
    dcd 0xea00000e
    dcd 0xea00000d
    dcd 0xea000029
    dcd 0xea000028
    dcd 0xea000027
    dcd 0xea000026
    dcd 0xea00000f
    dcd 0xe59f064c
    dcd 0xe1a0100a
    dcd 0xebfcd1c0
    dcd 0xe5d906dd
    dcd 0xe3500000
    dcd 0x03a00009
    dcd 0x05890010
    dcd 0x15896010
    dcd 0xea00001d
    dcd 0xe59f0628
    dcd 0xe1a0100a
    dcd 0xebfcd1b7
    dcd 0xe59f0618
    dcd 0xebfe5678
    dcd 0xe5897010
    dcd 0xea000016
    dcd 0xe59f060c
    dcd 0xe1a0100a
    dcd 0xebfcd1b0
    dcd 0xe5d906dd
    dcd 0xe3500000
    dcd 0x15896010
    dcd 0x1a00000f
    dcd 0xe594005c
    dcd 0xe3500001
    dcd 0x01a00007
    dcd 0x13a00000
    dcd 0xe3500000
    dcd 0x0a000004
    dcd 0xe59f05d4
    dcd 0xebfe565f
    dcd 0xe3a0000a
    dcd 0xe5890010
    dcd 0xea000004
    dcd 0xe59f05c0
    dcd 0xebfe5662
    dcd 0xe5895010
    dcd 0xea000000
    dcd 0xe8bd87f0
    dcd 0xeaffffc6
    dcd 0xe599000c
    dcd 0xe3500008
    dcd 0x0a000004
    dcd 0xe350000c
    dcd 0x0a000019
    dcd 0xe3500011
    dcd 0x0a000026
    dcd 0xe8bd87f0
    dcd 0xe5d9005d
    dcd 0xe3500000
    dcd 0x1a00000e
    dcd 0xe5d9005c
    dcd 0xe3500000
    dcd 0x1a000003
    dcd 0xe59f0574
    dcd 0xe3a01009
    dcd 0xebfcd18a
    dcd 0xe8bd87f0
    dcd 0xe59f0560
    dcd 0xebfe54c9
    dcd 0xe59f055c
    dcd 0xe3a01006
    dcd 0xebfcd184
    dcd 0xe3a00010
    dcd 0xe5890010
    dcd 0xea00001f
    dcd 0xe59f0544
    dcd 0xe3a01006
    dcd 0xebfcd17e
    dcd 0xe3a00011
    dcd 0xeafffff8
    dcd 0xe5990058
    dcd 0xe3500000
    dcd 0xca000002
    dcd 0xe5990090
    dcd 0xe3500000
    dcd 0xca000003
    dcd 0xe59f0518
    dcd 0xe3a01009
    dcd 0xebfcd173
    dcd 0xe8bd87f0
    dcd 0xe59f0508
    dcd 0xe3a01006
    dcd 0xebfcd16f
    dcd 0xe3a0000d
    dcd 0xeaffffe9
    dcd 0xe59f04f4
    dcd 0xe3a01006
    dcd 0xebfcd16a
    dcd 0xe5d9005d
    dcd 0xe3a01012
    dcd 0xe5891010
    dcd 0xe3500000
    dcd 0x05d906dc
    dcd 0xe5c97229
    dcd 0x03500000
    dcd 0x03a00015
    dcd 0x05890010
    dcd 0xea000089
    dcd 0xe599000c
    dcd 0xe3500015
    dcd 0x1a000004
    dcd 0xe59f04b4
    dcd 0xe3a01006
    dcd 0xebfcd15a
    dcd 0xe3a00016
    dcd 0xe5890010
    dcd 0xea000080
    dcd 0xe599000c
    dcd 0xe3500008
    dcd 0x1a000010
    dcd 0xe5991038
    dcd 0xe2892044
    dcd 0xe7d20001
    dcd 0xe2200001
    dcd 0xe7c20001
    dcd 0xe5990038
    dcd 0xe0890000
    dcd 0xe5d00044
    dcd 0xe3500000
    dcd 0x0a000002
    dcd 0xe59f0468
    dcd 0xe3a01006
    dcd 0xea000001
    dcd 0xe59f045c
    dcd 0xe1a0100a
    dcd 0xebfcd144
    dcd 0xe5c97030
    dcd 0xe3a08005
    dcd 0xea000103
    dcd 0xe59f0444
    dcd 0xe3a01006
    dcd 0xebfcd13e
    dcd 0xe5d9005d
    dcd 0xe3500000
    dcd 0x1a000009
    dcd 0xe1a00009
    dcd 0xebfff48f
    dcd 0xe3500000
    dcd 0x0a000003
    dcd 0xe1a00009
    dcd 0xebfff494
    dcd 0xe3500000
    dcd 0x1a000001
    dcd 0xe589a010
    dcd 0xea000001
    dcd 0xe3a00005
    dcd 0xe5890010
    dcd 0xe3a08000
    dcd 0xea0000ef
    dcd 0xe59f03f4
    dcd 0xe3a01006
    dcd 0xebfcd12a
    dcd 0xe5d9005d
    dcd 0xe3500000
    dcd 0x1a000009
    dcd 0xe1a00009
    dcd 0xebfff47b
    dcd 0xe3500000
    dcd 0x0a000003
    dcd 0xe1a00009
    dcd 0xebfff480
    dcd 0xe3500000
    dcd 0x1a000001
    dcd 0xe589a010
    dcd 0xea000001
    dcd 0xe3a0000b
    dcd 0xe5890010
    dcd 0xe3a08001
    dcd 0xea0000db
    dcd 0xe59f03a4
    dcd 0xe3a01006
    dcd 0xebfcd116
    dcd 0xe3a00019
    dcd 0xe5890010
    dcd 0xe3a08002
    dcd 0xea0000d4
    dcd 0xe59f0388
    dcd 0xe3a01006
    dcd 0xebfcd10f
    dcd 0xe3a0001a
    dcd 0xe5890010
    dcd 0xea000035
    dcd 0xe5d9005d
    dcd 0xe3500000
    dcd 0x0a000004
    dcd 0xe59f0364
    dcd 0xe3a02010
    dcd 0xe3a01006
    dcd 0xe5892010
    dcd 0xea000015
    dcd 0xe5992038
    dcd 0xe599003c
    dcd 0xe1520000
    dcd 0x1a00000f
    dcd 0xe2891044
    dcd 0xe7d10002
    dcd 0xe2200001
    dcd 0xe7c10002
    dcd 0xe5990038
    dcd 0xe5c97030
    dcd 0xe0890000
    dcd 0xe5d00044
    dcd 0xe3500000
    dcd 0x0a000002
    dcd 0xe59f0318
    dcd 0xe3a01006
    dcd 0xea000004
    dcd 0xe59f030c
    dcd 0xe1a0100a
    dcd 0xea000001
    dcd 0xe59f0300
    dcd 0xe3a01008
    dcd 0xebfcd0ed
    dcd 0xe5998038
    dcd 0xea00000a
    dcd 0xe59f02ec
    dcd 0xe3a01006
    dcd 0xebfcd0e8
    dcd 0xe5991038
    dcd 0xe599003c
    dcd 0xe1510000
    dcd 0x03a0000d
    dcd 0x05890010
    dcd 0xe5990024
    dcd 0xe240801f
    dcd 0xe5898038
    dcd 0xe589803c
    dcd 0xea0000a0
    dcd 0xe59f02b8
    dcd 0xe3a01006
    dcd 0xebfcd0db
    dcd 0xe599008c
    dcd 0xe5c97031
    dcd 0xe3500007
    dcd 0xc3a00007
    dcd 0xc589008c
    dcd 0xe3a08003
    dcd 0xea000096
    dcd 0xe599000c
    dcd 0xe3500012
    dcd 0x908ff100
    dcd 0xea000039
    dcd 0xea000038
    dcd 0xea000037
    dcd 0xea000036
    dcd 0xea000035
    dcd 0xea000034
    dcd 0xea00000c
    dcd 0xea00000b
    dcd 0xea00000a
    dcd 0xea000009
    dcd 0xea00002f
    dcd 0xea00002e
    dcd 0xea000011
    dcd 0xea000010
    dcd 0xea000015
    dcd 0xea000014
    dcd 0xea000029
    dcd 0xea000028
    dcd 0xea000027
    dcd 0xea000017
    dcd 0xe59f0234
    dcd 0xe1a0100a
    dcd 0xebfcd0ba
    dcd 0xe5d906dd
    dcd 0xe3500000
    dcd 0x15896010
    dcd 0x1a000020
    dcd 0xe59f0214
    dcd 0xebfe556f
    dcd 0xe5897010
    dcd 0xea00001c
    dcd 0xe59f0208
    dcd 0xe1a0100a
    dcd 0xebfcd0af
    dcd 0xe59f01f8
    dcd 0xebfe5570
    dcd 0xeafffff7
    dcd 0xe59f01f0
    dcd 0xe1a0100a
    dcd 0xebfcd0a9
    dcd 0xe59f01e0
    dcd 0xebfe556a
    dcd 0xe5895010
    dcd 0xea00000f
    dcd 0xe59f01d4
    dcd 0xe1a0100a
    dcd 0xebfcd0a2
    dcd 0xe594005c
    dcd 0xe3500001
    dcd 0x01a00007
    dcd 0x13a00000
    dcd 0xe3500000
    dcd 0x0a000004
    dcd 0xe59f01ac
    dcd 0xebfe5555
    dcd 0xe3a0000a
    dcd 0xe5890010
    dcd 0xea000001
    dcd 0xeaffffec
    dcd 0xe8bd87f0
    dcd 0xeafffebf
    dcd 0xe599000c
    dcd 0xe3500011
    dcd 0x0a000004
    dcd 0xe3500017
    dcd 0x0a00000f
    dcd 0xe3500018
    dcd 0x0a000014
    dcd 0xea000019
    dcd 0xe59f0170
    dcd 0xe3a01006
    dcd 0xebfcd089
    dcd 0xe5d9005d
    dcd 0xe3a01012
    dcd 0xe5891010
    dcd 0xe3500000
    dcd 0x05d906dc
    dcd 0xe5c97229
    dcd 0x03500000
    dcd 0x03a00015
    dcd 0x05890010
    dcd 0xea00000c
    dcd 0xe59f013c
    dcd 0xe3a01006
    dcd 0xebfcd07c
    dcd 0xe3a00012
    dcd 0xe5890010
    dcd 0xe5c97229
    dcd 0xea000005
    dcd 0xe59f0120
    dcd 0xe3a01006
    dcd 0xebfcd075
    dcd 0xe3a0001a
    dcd 0xe1a01007
    dcd 0xeb00b0d1
    dcd 0xeaffff9a
    dcd 0xe599000c
    dcd 0xe3500011
    dcd 0x0a000004
    dcd 0xe3500017
    dcd 0x0a000017
    dcd 0xe3500018
    dcd 0x0a00001a
    dcd 0xe8bd87f0
    dcd 0xe59f00e4
    dcd 0xe1a0100a
    dcd 0xebfcd066
    dcd 0xe5d906dd
    dcd 0xe3500000
    dcd 0x15896010
    dcd 0x1a000017
    dcd 0xe594005c
    dcd 0xe3500001
    dcd 0x01a00007
    dcd 0x13a00000
    dcd 0xe3500000
    dcd 0x0a000003
    dcd 0xe59f00ac
    dcd 0xebfe5515
    dcd 0xe3a0000a
    dcd 0xea00000c
    dcd 0xe59f009c
    dcd 0xebfe5519
    dcd 0xe5895010
    dcd 0xea000009
    dcd 0xe59f0090
    dcd 0xe1a0100a
    dcd 0xebfcd051
    dcd 0xe3a00015
    dcd 0xea000003
    dcd 0xe59f007c
    dcd 0xe1a0100a
    dcd 0xebfcd04c
    dcd 0xe5990014
    dcd 0xe5890010
    dcd 0xeafffe74
@L_02107214:
    ldr r0, [pc, #0x64]
    mov r1, r7
    bl _ZN12SoundManager9PlaySoundEi
    ldrb r0, [r9, #0x6dd]
    cmp r0, #0
    streq r7, [r9, #0x10]
    beq @L_02107240
    mov r1, r7
    mov r0, #0x1a
    bl func_ov015_021334b8
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
@L_02107240:
    mov r8, #7
@L_02107244:
    cmp r8, #0
    ldmltia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    add r0, r9, r8
    ldrb r1, [r0, #0x478]
    ldr r0, [pc, #0x28]
    mov r2, #1
    bl func_ov015_0213c730
    cmp r0, #0
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    add r0, r9, r8
    ldrb r1, [r0, #0x478]
    ldr r0, [pc, #0x10]
    bl func_ov015_0213be3c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    dcd data_020c5320
    dcd data_020c5e40
    dcd data_020c47a4
    dcd data_020c9660
}

extern "C" void func_ov003_0210728c(u8 *arg0, s32 arg1)
{
    u8 *r4;
    s32 v0;
    s32 v1;
    s32 v3;
    u16 t0;
    u16 t1;
    u16 t2;
    u16 t3;
    s32 t4;
    if (*(s32 *)(arg0 + 0x8) != 4)
        return;
    v0 = func_ov015_0213be90((s32)((u8 *)&data_020c9660), 0);
    if (v0 != 0)
        return;
    if (*(u8 *)(arg0 + 0x31) != 0)
        return;
    r4 = (u8 *)arg1;
    if (*(u16 *)(r4 + 0x4) == 1) {
        if (*(u16 *)(r4 + 0x6) != 0)
            return;
        if (*(u8 *)(arg0 + 0x19) == 0) {
            *(u8 *)(arg0 + 0x19) = 1;
            t0 = *(u16 *)(r4);
            t1 = *(u16 *)(r4 + 0x2);
            v1 = ((s32 (*)(...))func_ov003_02106768)((s32)arg0, t0, t1);
            *(s32 *)(arg0 + 0x24) = v1;
            if (v1 != 0) {
                func_ov003_02106788((s32)arg0);
            }
        }
        t2 = *(u16 *)(r4);
        *(s32 *)(arg0 + 0x1C) = t2;
        t3 = *(u16 *)(r4 + 0x2);
        *(s32 *)(arg0 + 0x20) = t3;
        v3 = ((s32 (*)(...))func_ov003_02106768)((s32)arg0, t2, t3);
        t4 = *(s32 *)(arg0 + 0x24);
        *(s32 *)(arg0 + 0x28) = v3;
        if (t4 == 0)
            return;
        func_ov003_02106994((s32)arg0, t4);
        return;
    } else {
        if (((*(u8 *)(arg0 + 0x19) != 0 && (arg1 = *(s32 *)(arg0 + 0x24), arg1 != 0)) && *(s32 *)(arg0 + 0x28) == arg1)) {
            func_ov003_021069dc((s32)arg0);
        }
        *(s32 *)(arg0 + 0x28) = 0;
        *(s32 *)(arg0 + 0x24) = 0;
        *(u8 *)(arg0 + 0x19) = 0;
        return;
    }
}

extern "C" s32 func_ov003_02107384(u8 *arg0)
{
    MI_CpuFill8(((arg0 + 0x10C) + 0x400), 0, 0x1BC);
    func_ov015_02133f94((s32)data_ov003_0211e244, ((arg0 + 0x10C) + 0x400));
    func_ov015_02133f94((s32)data_ov003_0211e260, ((arg0 + 0x28C) + 0x400));
    func_ov015_02133f94((s32)data_ov003_0211e280, (arg0 + 0x6B0));
    func_ov015_02133f94((s32)data_ov003_0211e2a0, ((arg0 + 0x2BC) + 0x400));
    *(s32 *)(arg0 + 0x8) = 1;
    return 1;
}

extern "C" asm void func_ov003_021073f8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    ldr r6, [r0, #0x50c]
    cmp r6, #0
    ldrne r7, =data_ov003_0211c648
    ldrne r1, [r7]
    cmpne r1, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    add r0, r0, #0x10c
    add r5, r0, #0x400
    mov r4, #0xc
@L_02107420:
    ldr r2, [r7, #4]
    mov r0, r1
    mla r1, r2, r4, r5
    mov r2, r6
    bl func_ov015_021340c0
    ldr r1, [r7, #8]!
    cmp r1, #0
    bne @L_02107420
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov003_02107448(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x21c
    add r11, sp, #0x1c
    mov r10, r0
    ldr r1, =data_ov003_0211e2bc
    mov r0, r11
    bl sprintf
    mov r9, #0
    mov r6, r9
    mov r5, #1
    add r8, sp, #0x11c
    ldr r7, =data_ov003_0211e02c
    ldr r4, =data_020c46d4
    b @L_021074e4
@L_02107480:
    ldr r2, [r7, r9, lsl #2]
    ldr r1, =data_ov003_0211e2d8
    mov r0, r8
    bl sprintf
    ldr r1, [r10, #0x6bc]
    mov r0, r8
    add r2, sp, #0x18
    add r3, sp, #0x14
    bl func_ov015_02134b08
    cmp r0, #0
    beq @L_021074e0
    ldr r3, [sp, #0x14]
    ldr r2, [sp, #0x18]
    ldr r0, [r4]
    mov r1, #5
    str r6, [sp]
    stmib sp, {r5, r6}
    str r2, [sp, #0xc]
    str r3, [sp, #0x10]
    mov r2, r11
    mov r3, r5
    bl func_02097898
    add r1, r10, r9, lsl #2
    str r0, [r1, #0x6c8]
@L_021074e0:
    add r9, r9, #1
@L_021074e4:
    cmp r9, #1
    blt @L_02107480
    add sp, sp, #0x21c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov003_02107504(void)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, #0
    ldr r4, =data_020c46d4
    b @L_02107540
@L_02107518:
    add r0, r6, r5, lsl #2
    ldr r1, [r0, #0x6c8]
    cmp r1, #0
    beq @L_0210753c
    ldr r0, [r4]
    bl func_02097aa0
    cmp r0, #0
    movne r0, #0
    ldmneia sp!, {r4, r5, r6, pc}
@L_0210753c:
    add r5, r5, #1
@L_02107540:
    cmp r5, #1
    blt @L_02107518
    mov r0, #1
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_ov003_02107554(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #4
    mov r7, #0
    mov r4, r0
    mov r6, r7
    ldr r5, =data_020c46d4
    b @L_021075ac
@L_02107570:
    add r0, r4, r7, lsl #2
    ldr r1, [r0, #0x6c8]
    cmp r1, #0
    beq @L_021075a8
    ldr r0, [r5]
    bl func_02097c74
    cmp r0, #0
    bne @L_021075a8
    add r0, r4, r7, lsl #2
    ldr r1, [r0, #0x6c8]
    ldr r0, [r5]
    mov r2, r6
    mov r3, r6
    bl func_02097ca8
@L_021075a8:
    add r7, r7, #1
@L_021075ac:
    cmp r7, #1
    blt @L_02107570
    ldr r5, =data_020c46d4
    mov r7, #1
    ldr r0, [r5]
    mov r1, r7
    mov r2, r7
    bl func_020920c4
    mov r6, #0
    mov r1, r0
    str r1, [r4, #0x6cc]
    ldr r0, [r5]
    mov r2, r6
    mov r3, r6
    bl func_02093bf4
    ldr r8, [r4, #0x6cc]
    ldr r1, [r4, #0x6c8]
    ldr r0, [r5]
    and r3, r1, #0xff
    mov r1, r8
    mov r2, r7
    bl func_02093188
    str r6, [sp]
    ldr r0, [r5]
    mov r1, r8
    mov r2, r7
    mov r3, r6
    bl func_020939c8
    ldr r0, [r5]
    mov r1, r8
    mov r2, r7
    mov r3, #0x12c
    bl func_02093368
    str r6, [sp]
    ldr r0, [r5]
    mov r1, r8
    mov r2, r7
    mov r3, #2
    bl func_0209386c
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" asm s32 func_ov003_02107654(...)
{
    stmdb sp!, {r3, lr}
    ldr r3, [r0, #0x70]
    mov r12, r1
    add r1, r2, r3
    mov r3, r1, lsl #0x10
    str r2, [r0, #0x64]
    ldr r1, [r0, #0x6cc]
    mov r2, r12, lsl #0x10
    str r12, [r0, #0x60]
    mov r3, r3, asr #0x10
    ldr r0, =data_020c46d4
    str r3, [sp]
    ldr r0, [r0]
    mov r3, r2, asr #0x10
    mov r2, #1
    bl func_02093524
    ldmia sp!, {r3, pc}
}

extern "C" asm void func_ov003_0210769c(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    ldr r1, [r5, #0x6cc]
    ldr r0, =data_020c46d4
    str r4, [sp]
    ldr r0, [r0]
    mov r2, #1
    mov r3, #2
    bl func_0209386c
    strb r4, [r5, #0x74]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" void func_ov003_021076d0(u8 *arg0)
{
    *(s32 *)(arg0 + 0x6C) = 0;
    *(s32 *)(arg0 + 0x70) = 0;
    *(s32 *)(arg0 + 0x68) = 0;
    *(u8 *)(arg0 + 0x74) = 0;
}

extern "C" void func_ov003_021076e8(u8 *arg0)
{
    s32 r1;
    s32 r3;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    s32 t5;
    if (*(u8 *)(arg0 + 0x74) == 0)
        return;
    t0 = (*(s32 *)(arg0 + 0x68) - 1);
    *(s32 *)(arg0 + 0x68) = t0;
    if (t0 > 0)
        return;
    t1 = *(s32 *)(arg0 + 0x6C);
    *(s32 *)(arg0 + 0x68) = 2;
    r3 = 2;
    if (t1 == 0) {
        t2 = (*(s32 *)(arg0 + 0x70) - 1);
        *(s32 *)(arg0 + 0x70) = t2;
        r1 = (r3 - 5);
        if (t2 <= r1) {
            *(s32 *)(arg0 + 0x70) = r1;
            *(s32 *)(arg0 + 0x6C) = 1;
        }
    } else {
        t3 = (*(s32 *)(arg0 + 0x70) + 1);
        *(s32 *)(arg0 + 0x70) = t3;
        if (t3 >= 3) {
            *(s32 *)(arg0 + 0x70) = 3;
            *(s32 *)(arg0 + 0x6C) = 0;
        }
    }
    t4 = *(s32 *)(arg0 + 0x60);
    t5 = *(s32 *)(arg0 + 0x64);
    func_ov003_02107654((s32)arg0, t4, t5);
    return;
}

extern "C" asm void func_ov003_02107778(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, #0
    mov r4, r0
    mov r7, r6
    ldr r5, =data_020c46d4
    b @L_021077ac
@L_02107790:
    add r0, r4, r7, lsl #2
    ldr r1, [r0, #0x6cc]
    cmp r1, #0
    beq @L_021077a8
    ldr r0, [r5]
    bl func_02092270
@L_021077a8:
    add r7, r7, #1
@L_021077ac:
    cmp r7, #2
    blt @L_02107790
    mov r7, #0
    ldr r5, =data_020c46d4
    b @L_021077e4
@L_021077c0:
    add r0, r4, r7, lsl #2
    ldr r1, [r0, #0x6c8]
    cmp r1, #0
    beq @L_021077e0
    ldr r0, [r5]
    bl func_02097b3c
    add r0, r4, r7, lsl #2
    str r6, [r0, #0x6c8]
@L_021077e0:
    add r7, r7, #1
@L_021077e4:
    cmp r7, #1
    blt @L_021077c0
    ldr r1, [r4, #0x78]
    cmp r1, #0
    beq @L_02107808
    ldr r0, =data_020c46d4
    ldr r0, [r0]
    bl func_02097b3c
    str r6, [r4, #0x78]
@L_02107808:
    add r0, r4, #0x10c
    mov r6, #0
    add r5, r0, #0x400
    mov r4, #0xc
    b @L_02107828
@L_0210781c:
    mla r0, r6, r4, r5
    bl func_ov015_02134208
    add r6, r6, #1
@L_02107828:
    cmp r6, #0x25
    blt @L_0210781c
    ldr r0, =data_020d9978
    mov r1, #2
    mov r2, #0
    bl _ZN11TreasureBox13func_020526ecEii
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov003_0210784c(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r10, r0
    bl func_ov003_021078f4
    mov r9, #0
    add r0, r10, #0x10c
    mov r11, #0xc
    str r9, [r10, #0x34]
    add r6, r0, #0x400
    mov r7, #1
    mov r8, r9
    mov r4, r11
    mov r5, #0x70
@L_02107880:
    mla r0, r9, r4, r10
    str r8, [r0, #0x698]
    mla r0, r9, r5, r10
    ldrb r1, [r0, #0x26d]
    ldr r0, [r10, #0x68c]
    add r2, sp, #8
    add r3, sp, #4
    bl func_ov015_02134300
    cmp r0, #0
    beq @L_021078cc
    add r0, r9, #0x21
    mla r1, r0, r11, r6
    str r7, [sp]
    ldr r2, [sp, #8]
    ldr r3, [sp, #4]
    ldr r0, =data_ov003_0211e2e0
    bl func_ov015_02134024
    cmp r0, #0
    strne r7, [r10, #0x34]
@L_021078cc:
    add r9, r9, #1
    cmp r9, #2
    blt @L_02107880
    ldr r0, [r10, #0x34]
    cmp r0, #0
    moveq r0, #4
    streq r0, [r10, #0x34]
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov003_021078f4(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    add r0, r0, #0x10c
    mov r8, #0
    add r7, r0, #0x400
    mov r5, #1
    mov r4, #0xc
@L_0210790c:
    add r0, r8, #0x21
    mul r6, r0, r4
    mov r1, r5
    add r0, r7, r6
    bl func_ov015_02134198
    add r0, r7, r6
    bl func_ov015_02134208
    add r8, r8, #1
    cmp r8, #2
    blt @L_0210790c
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" s32 func_ov003_02107938(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, u8 arg6)
{
    s32 r4;
    u8 *r5;
    s32 r6;
    s32 r7;
    s32 v0;
    s32 v1;
    s32 t0;
    r4 = *(s32 *)(((u8 *)((arg1 * 0xC) + arg0)) + 0x50C);
    r5 = (u8 *)arg5;
    r7 = arg2;
    r6 = arg3;
    if (r4 == 0) {
        return r7;
    } else {
        if (arg6 != 0) {
            v0 = func_ov015_02132a04(r4, (r7 + 1), r6);
            r7 = v0;
        }
        if ((s32)r5 != 0) {
            t0 = *(s32 *)(r5);
            v1 = func_ov015_02132af0(arg4, r4, t0);
            *(s32 *)(r5) = v1;
        }
        if (r6 >= 0) {
            func_ov015_021322b0(r4, 0, r6);
        }
        return r7;
    }
}

extern "C" asm void func_ov003_021079bc(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x10
    mov r7, #0
    mov r5, r0
    add r6, sp, #0xc
    mov r8, #1
    bl G2_GetBG3CharPtr
    mov r9, #0x20
    mov r4, r7
    mov r1, r0
    mov r0, r4
    mov r2, r9
    bl MIi_CpuClearFast
    bl G2_GetBG3CharPtr
    mov r1, r9
    bl DC_FlushRange
    str r9, [sp, #0xc]
    ldrb r0, [r5, #0x3ee]
    mov r9, #0
    mov r2, r9
    cmp r0, #0
    mov r0, #3
    stmia sp, {r0, r6}
    movne r4, r8
    mov r0, r5
    str r4, [sp, #8]
    mov r1, #0x1b
    mov r3, #2
    bl func_ov003_02107938
    ldrb r1, [r5, #0x3ee]
    mov r3, #3
    mov r2, r0
    cmp r1, #0
    movne r9, #1
    stmia sp, {r3, r6, r9}
    mov r0, r5
    mov r1, #0x1a
    mov r4, r3
    bl func_ov003_02107938
    ldrb r1, [r5, #0x3ee]
    mov r2, r0
    mov r0, r5
    cmp r1, #0
    movne r1, #1
    stmia sp, {r4, r6}
    moveq r1, #0
    str r1, [sp, #8]
    mov r1, #0x1c
    mov r3, #7
    bl func_ov003_02107938
    ldrb r1, [r5, #0x3ee]
    mov r2, r0
    mov r0, r5
    cmp r1, #0
    movne r1, #1
    stmia sp, {r4, r6}
    moveq r1, #0
    str r1, [sp, #8]
    mov r1, #0x1d
    mov r3, #7
    bl func_ov003_02107938
    ldrb r1, [r5, #0x3ee]
    mov r2, r0
    mov r0, r5
    cmp r1, #0
    movne r1, #1
    stmia sp, {r4, r6}
    moveq r1, #0
    str r1, [sp, #8]
    mov r1, #0x1e
    mov r3, #4
    bl func_ov003_02107938
    ldrb r1, [r5, #0x3ee]
    mov r2, r0
    mov r0, r5
    cmp r1, #0
    movne r1, #1
    stmia sp, {r4, r6}
    moveq r1, #0
    str r1, [sp, #8]
    mov r1, #0x1f
    mov r3, #4
    bl func_ov003_02107938
    ldrb r1, [r5, #0x3ee]
    mov r2, r0
    mov r0, r5
    cmp r1, #0
    movne r1, #1
    stmia sp, {r4, r6}
    moveq r1, #0
    str r1, [sp, #8]
    mov r1, #0x12
    mov r3, #8
    bl func_ov003_02107938
    ldrb r1, [r5, #0x3ee]
    mov r2, r0
    mov r0, r5
    cmp r1, #0
    movne r1, #1
    stmia sp, {r4, r6}
    moveq r1, #0
    str r1, [sp, #8]
    mov r1, #0x11
    mov r3, #8
    bl func_ov003_02107938
    ldrb r1, [r5, #0x3ee]
    mov r2, r0
    mov r0, r5
    cmp r1, #0
    movne r1, #1
    stmia sp, {r4, r6}
    moveq r1, #0
    str r1, [sp, #8]
    mov r1, #0x17
    mov r3, #7
    bl func_ov003_02107938
    ldrb r2, [r5, #0x3ee]
    mov r1, r0
    cmp r2, #0
    beq @L_02107c24
    ldr r0, [sp, #0xc]
    add r4, r5, #0x480
    mov r9, #0
@L_02107ba8:
    ldr r2, [r4]
    cmp r2, #0
    ldrne r2, [r4, #4]
    cmpne r2, #0
    movne r2, r8
    moveq r2, r7
    cmp r2, #0
    beq @L_02107c08
    str r0, [r4, #8]
    ldrh r10, [r4, #0xc]
    ldrh r3, [r4, #0xe]
    ldr r0, [r4]
    add r2, r1, #1
    mul r1, r10, r3
    mov r1, r1, lsl #1
    mov r3, r7
    bl func_ov015_02132984
    ldrh r3, [r4, #0xc]
    ldrh r2, [r4, #0xe]
    mov r1, r0
    ldr r10, [sp, #0xc]
    mul r0, r3, r2
    add r0, r10, r0, lsl #5
    str r0, [sp, #0xc]
@L_02107c08:
    add r9, r9, #1
    cmp r9, #7
    add r4, r4, #0x14
    blt @L_02107ba8
    str r1, [r5, #0x7c]
    ldr r0, [sp, #0xc]
    str r0, [r5, #0x80]
@L_02107c24:
    bl G2_GetBG1CharPtr
    mov r4, #0x20
    mov r9, #0
    mov r1, r0
    mov r0, r9
    mov r2, r4
    bl MIi_CpuClearFast
    bl G2_GetBG1CharPtr
    mov r1, r4
    bl DC_FlushRange
    str r4, [sp, #0xc]
    ldrb r0, [r5, #0x3ee]
    mov r4, #1
    mov r2, r7
    cmp r0, #0
    movne r9, #1
    stmia sp, {r4, r6, r9}
    mov r0, r5
    mov r1, #2
    mov r3, #8
    bl func_ov003_02107938
    ldrb r1, [r5, #0x3ee]
    mov r9, #1
    mov r2, r0
    cmp r1, #0
    add r6, sp, #0xc
    str r9, [sp]
    moveq r4, r7
    str r6, [sp, #4]
    mov r0, r5
    str r4, [sp, #8]
    mov r1, #4
    mov r3, #8
    bl func_ov003_02107938
    ldrb r1, [r5, #0x3ee]
    mov r2, r0
    mov r4, #1
    cmp r1, #0
    moveq r9, #0
    stmia sp, {r4, r6, r9}
    mov r0, r5
    mov r1, #5
    mov r3, #7
    bl func_ov003_02107938
    ldrb r1, [r5, #0x3ee]
    mov r9, #1
    mov r2, r0
    cmp r1, #0
    str r9, [sp]
    moveq r4, #0
    str r6, [sp, #4]
    mov r0, r5
    str r4, [sp, #8]
    mov r1, #6
    mov r3, #7
    bl func_ov003_02107938
    ldrb r1, [r5, #0x3ee]
    mov r2, r0
    mov r4, #1
    cmp r1, #0
    moveq r9, #0
    stmia sp, {r4, r6, r9}
    mov r0, r5
    mov r1, #7
    mov r3, #8
    bl func_ov003_02107938
    ldrb r1, [r5, #0x3ee]
    mov r9, #1
    mov r2, r0
    cmp r1, #0
    str r9, [sp]
    moveq r4, #0
    str r6, [sp, #4]
    mov r0, r5
    str r4, [sp, #8]
    mov r1, #9
    mov r3, #4
    bl func_ov003_02107938
    ldrb r1, [r5, #0x3ee]
    mov r2, r0
    mov r4, #1
    cmp r1, #0
    moveq r9, #0
    stmia sp, {r4, r6, r9}
    mov r0, r5
    mov r1, #0xa
    mov r3, #5
    bl func_ov003_02107938
    ldrb r1, [r5, #0x3ee]
    mov r9, #1
    mov r2, r0
    cmp r1, #0
    str r9, [sp]
    moveq r4, #0
    str r6, [sp, #4]
    mov r0, r5
    str r4, [sp, #8]
    mov r1, #0xe
    mov r3, #8
    bl func_ov003_02107938
    ldrb r1, [r5, #0x3ee]
    mov r2, r0
    mov r4, #1
    cmp r1, #0
    moveq r9, #0
    stmia sp, {r4, r6, r9}
    mov r0, r5
    mov r1, #0xf
    mov r3, #8
    bl func_ov003_02107938
    ldrb r1, [r5, #0x3ee]
    mov r9, #1
    mov r2, r0
    cmp r1, #0
    str r9, [sp]
    mov r1, #8
    moveq r4, #0
    str r6, [sp, #4]
    mov r0, r5
    mov r3, r1
    str r4, [sp, #8]
    bl func_ov003_02107938
    ldrb r1, [r5, #0x3ee]
    mov r2, r0
    mov r4, #1
    cmp r1, #0
    moveq r9, #0
    stmia sp, {r4, r6, r9}
    mov r0, r5
    mov r1, #0x10
    mov r3, #8
    bl func_ov003_02107938
    ldrb r1, [r5, #0x3ee]
    mov r2, r0
    mov r0, r5
    cmp r1, #0
    str r8, [sp]
    moveq r4, #0
    str r6, [sp, #4]
    str r4, [sp, #8]
    mov r1, #0x13
    mov r3, #9
    bl func_ov003_02107938
    ldrb r1, [r5, #0x3ee]
    mov r9, r0
    cmp r1, #0
    beq @L_02107ef0
    ldrb r0, [r5, #0x5d]
    mov r2, #7
    cmp r0, #0
    beq @L_02107e88
    ldr r0, [r5, #0x62c]
    b @L_02107e8c
@L_02107e88:
    ldr r0, [r5, #0x530]
@L_02107e8c:
    add r1, r9, #1
    bl func_ov015_02132a04
    mov r1, r0
    ldr r0, [r5, #0x614]
    add r1, r1, #1
    mov r2, #3
    bl func_ov015_02132a04
    mov r4, #6
    ldr r0, [r5, #0x59c]
    mov r2, r4
    add r1, r9, #1
    bl func_ov015_02132a04
    mov r1, r0
    ldr r0, [r5, #0x5a8]
    add r1, r1, #1
    mov r2, r4
    bl func_ov015_02132a04
    add r1, r0, #1
    ldr r0, [r5, #0x5fc]
    mov r2, #0xb
    bl func_ov015_02132a04
    add r1, r0, #1
    ldr r0, [r5, #0x608]
    mov r2, #0xc
    bl func_ov015_02132a04
@L_02107ef0:
    ldr r0, [r5, #0xc]
    cmp r0, #0x19
    bgt @L_02107f3c
    bge @L_02107f44
    cmp r0, #0xb
    addls pc, pc, r0, lsl #2
    b @L_02107f90
    dcd 0xea00001f
    dcd 0xea00000b
    dcd 0xea00000a
    dcd 0xea000009
    dcd 0xea000008
    dcd 0xea000007
    dcd 0xea000019
    dcd 0xea000018
    dcd 0xea000017
    dcd 0xea000016
    dcd 0xea000015
    dcd 0xea000001
@L_02107f3c:
    cmp r0, #0x1a
    bne @L_02107f90
@L_02107f44:
    ldrb r0, [r5, #0x5d]
    mov r3, #7
    mov r2, r9
    cmp r0, #0
    str r8, [sp]
    mov r0, r5
    beq @L_02107f68
    mov r1, #0x18
    b @L_02107f6c
@L_02107f68:
    mov r1, #3
@L_02107f6c:
    stmib sp, {r6, r7}
    bl func_ov003_02107938
    str r8, [sp]
    mov r2, r0
    mov r0, r5
    mov r1, #0x16
    mov r3, #3
    stmib sp, {r6, r7}
    b @L_02108004
@L_02107f90:
    str r8, [sp]
    mov r10, #0xc
    mov r4, #6
    stmib sp, {r6, r7}
    mov r0, r5
    mov r1, r10
    mov r2, r9
    mov r3, r4
    bl func_ov003_02107938
    str r8, [sp]
    mov r2, r0
    stmib sp, {r6, r7}
    mov r0, r5
    mov r3, r4
    mov r1, #0xd
    bl func_ov003_02107938
    str r8, [sp]
    mov r2, r0
    stmib sp, {r6, r7}
    mov r0, r5
    mov r1, #0x14
    mov r3, #0xb
    bl func_ov003_02107938
    str r8, [sp]
    mov r2, r0
    stmib sp, {r6, r7}
    mov r3, r10
    mov r0, r5
    mov r1, #0x15
@L_02108004:
    bl func_ov003_02107938
    mov r4, #0
    add r6, sp, #0xc
    bl G2_GetBG2CharPtr
    mov r7, #0x20
    mov r8, r4
    mov r1, r0
    mov r0, r8
    mov r2, r7
    bl MIi_CpuClearFast
    bl G2_GetBG2CharPtr
    mov r1, r7
    bl DC_FlushRange
    str r7, [sp, #0xc]
    ldrb r0, [r5, #0x3ee]
    mov r1, #1
    mov r2, r4
    cmp r0, #0
    mov r0, #2
    str r0, [sp]
    movne r8, #1
    stmib sp, {r6, r8}
    mov r0, r5
    mov r3, r1
    bl func_ov003_02107938
    ldr r3, [r5, #0x518]
    cmp r3, #0
    beq @L_02108088
    ldr r0, [r3, #0xc]
    ldr r2, [r3, #0x10]
    mov r1, r4
    add r0, r3, r0
    bl func_02003758
@L_02108088:
    bl func_ov015_02132224
    strb r4, [r5, #0x3ee]
    add sp, sp, #0x10
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_ov003_02108098(void)
{
    stmdb sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0xc
    mov r7, r0
    ldr r1, [r7, #0x34]
    cmp r1, #2
    addne sp, sp, #0xc
    ldmneia sp!, {r4, r5, r6, r7, pc}
    ldr r2, [r7, #0x7c]
    mov r6, #3
    str r6, [sp]
    mov r5, #0
    str r5, [sp, #4]
    mov r4, #1
    str r4, [sp, #8]
    mov r1, #0x21
    mov r3, #0xd
    bl func_ov003_02107938
    str r6, [sp]
    mov r2, r0
    str r5, [sp, #4]
    mov r0, r7
    mov r1, #0x22
    mov r3, #0xe
    str r4, [sp, #8]
    bl func_ov003_02107938
    str r6, [r7, #0x34]
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, r6, r7, pc}
}

extern "C" asm void func_ov003_02108108(void)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4, #0x34]
    cmp r0, #3
    ldmneia sp!, {r4, pc}
    ldr r1, [r4, #0x698]
    ldr r2, [r4, #0x80]
    cmp r1, #0
    beq @L_02108138
    mov r0, #3
    bl func_ov015_02132af0
    mov r2, r0
@L_02108138:
    ldr r1, [r4, #0x6a4]
    cmp r1, #0
    beq @L_0210814c
    mov r0, #3
    bl func_ov015_02132af0
@L_0210814c:
    bl func_ov015_02132224
    mov r1, #4
    mov r0, #1
    str r1, [r4, #0x34]
    strb r0, [r4, #0x30]
    ldmia sp!, {r4, pc}
}

extern "C" s32 func_ov003_02108164(u8 *arg0)
{
    s32 v1;
    s32 t0;
    u8 *t1;
    if (*(u8 *)(arg0 + 0x228) == 0)
        return (s32)arg0;
    if ((s32)*(u8 * *)(arg0 + 0x590) == 0)
        return (s32)arg0;
    t0 = (s32)((*(u8 * *)(arg0 + 0x590) + *(s32 *)(*(u8 * *)(arg0 + 0x590) + 0x4)) + ((*(s32 *)(arg0 + 0x88) / 4) << 5));
    t1 = *(u8 * *)(arg0 + 0x590);
    func_ov015_021322d8(t0, 0, 5, t1);
    v1 = func_ov015_02132224();
    return v1;
}

extern "C" asm void func_ov003_021081ac(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x2c
    mov r10, r0
    ldr r8, [r10, #0x53c]
    mov r9, r1
    cmp r8, #0
    mov r5, r2
    addeq sp, sp, #0x2c
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r8, #0xc]
    mov r11, #0x15
    add r7, r8, r0
    cmp r5, #0
    addne r7, r7, #0x54
    mov r4, #1
    cmp r9, #0
    movne r4, #0
    mov r3, #7
    mov r6, #3
    mov r2, #0x38
    mov lr, #8
    strh r2, [sp, #0x20]
    mov r1, #0x98
    cmp r4, #0
    moveq r1, #0x60
    mov r0, r1, asr #2
    add r0, r1, r0, lsr #29
    mov r1, #0
    mov r12, r0, asr #3
    mov r0, #0x18
    strh r0, [sp, #0x22]
    strh r12, [sp, #0x14]
    strh r11, [sp, #0x16]
    strh r3, [sp, #0x18]
    strh r6, [sp, #0x1a]
    strh r1, [sp, #0x1c]
    strh r1, [sp, #0x1e]
    strb lr, [sp, #0x24]
    str r7, [sp, #0x28]
    add r0, sp, #0x14
    str r1, [sp]
    stmib sp, {r0, r1}
    str r1, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r2, #1
    str r1, [sp, #0x10]
    bl func_ov015_0213b540
    cmp r5, #0
    addeq r7, r7, #0x2a
    cmp r4, #0
    mov r4, #0
    mov r1, #0x98
    moveq r1, #0x60
    mov r0, r1, asr #2
    add r0, r1, r0, lsr #29
    mov r0, r0, asr #3
    strh r0, [sp, #0x14]
    mov r0, #0x38
    strh r0, [sp, #0x20]
    mov r0, #0x18
    mov r6, #0x15
    mov r5, #7
    mov r11, #3
    strh r0, [sp, #0x22]
    mov r0, #8
    strb r0, [sp, #0x24]
    str r7, [sp, #0x28]
    strh r6, [sp, #0x16]
    strh r5, [sp, #0x18]
    strh r11, [sp, #0x1a]
    strh r4, [sp, #0x1c]
    strh r4, [sp, #0x1e]
    str r4, [sp]
    add r0, sp, #0x14
    stmib sp, {r0, r4}
    str r4, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r1, r4
    mov r2, #1
    mov r3, #9
    str r4, [sp, #0x10]
    bl func_ov015_0213b540
    ldr r0, =data_020c9660
    mov r2, #9
    mov r1, r4
    bl func_ov015_0213b990
    cmp r9, #0
    beq @L_021083f0
    ldr r0, [r8, #0xc]
    mov r1, r4
    add r7, r8, r0
    mov r0, #0x13
    strh r0, [sp, #0x14]
    mov r0, #0x38
    strh r0, [sp, #0x20]
    mov r0, #0x18
    strh r0, [sp, #0x22]
    mov r0, #8
    strb r0, [sp, #0x24]
    add r0, r7, #0x7e
    str r0, [sp, #0x28]
    strh r6, [sp, #0x16]
    strh r5, [sp, #0x18]
    strh r11, [sp, #0x1a]
    strh r4, [sp, #0x1c]
    strh r4, [sp, #0x1e]
    str r4, [sp]
    add r0, sp, #0x14
    stmib sp, {r0, r4}
    str r4, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r2, #1
    mov r3, #0xf
    str r4, [sp, #0x10]
    bl func_ov015_0213b540
    mov r0, #0x13
    strh r0, [sp, #0x14]
    mov r0, #0x38
    strh r0, [sp, #0x20]
    mov r0, #0x18
    add r1, r7, #0xa8
    strh r0, [sp, #0x22]
    mov r0, #8
    strh r5, [sp, #0x18]
    strb r0, [sp, #0x24]
    str r1, [sp, #0x28]
    mov r5, #0x10
    strh r6, [sp, #0x16]
    strh r11, [sp, #0x1a]
    strh r4, [sp, #0x1c]
    strh r4, [sp, #0x1e]
    str r4, [sp]
    add r0, sp, #0x14
    stmib sp, {r0, r4}
    str r4, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r1, r4
    mov r2, #1
    mov r3, r5
    str r4, [sp, #0x10]
    bl func_ov015_0213b540
    ldr r0, =data_020c9660
    mov r1, r4
    mov r2, r5
    bl func_ov015_0213b990
@L_021083f0:
    ldr r1, [r10, #0x524]
    mov r4, #0
    cmp r1, #0
    addeq sp, sp, #0x2c
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r1, #0xc]
    mov r7, #0x1a
    add r8, r1, r0
    mov r0, #0x18
    add r1, r8, #0x48
    mov r6, #0x15
    mov r5, #6
    mov r11, #3
    mov r2, #0x30
    strh r0, [sp, #0x22]
    mov r0, #8
    strh r2, [sp, #0x20]
    strb r0, [sp, #0x24]
    str r1, [sp, #0x28]
    strh r7, [sp, #0x14]
    strh r6, [sp, #0x16]
    strh r5, [sp, #0x18]
    strh r11, [sp, #0x1a]
    strh r4, [sp, #0x1c]
    strh r4, [sp, #0x1e]
    str r4, [sp]
    add r0, sp, #0x14
    stmib sp, {r0, r4}
    str r4, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r1, r4
    mov r2, #1
    mov r3, #8
    str r4, [sp, #0x10]
    bl func_ov015_0213b540
    add r1, r8, #0x6c
    mov r0, #8
    strh r6, [sp, #0x16]
    strb r0, [sp, #0x24]
    str r1, [sp, #0x28]
    mov r6, #0xa
    strh r7, [sp, #0x14]
    strh r11, [sp, #0x1a]
    strh r5, [sp, #0x18]
    strh r4, [sp, #0x1c]
    strh r4, [sp, #0x1e]
    strh r4, [sp, #0x20]
    strh r4, [sp, #0x22]
    str r4, [sp]
    add r0, sp, #0x14
    stmib sp, {r0, r4}
    str r4, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r1, r4
    mov r2, #1
    mov r3, r6
    str r4, [sp, #0x10]
    bl func_ov015_0213b540
    ldr r0, =data_020c9660
    mov r2, r5
    mov r1, r4
    bl func_ov015_0213b990
    ldr r5, =data_020c47a4
    str r6, [sp]
    mov r1, #7
    mov r0, r5
    mov r2, #9
    mov r3, r4
    bl func_ov015_0213c530
    strb r0, [r10, #0x47b]
    cmp r9, #0
    beq @L_0210852c
    mov r0, r5
    mov r3, r4
    mov r1, #0xf
    mov r2, #0x10
    str r6, [sp]
    bl func_ov015_0213c530
    strb r0, [r10, #0x47d]
@L_0210852c:
    ldr r0, =data_020c47a4
    mov r2, #0xa
    mov r1, #8
    mov r3, #0
    str r2, [sp]
    bl func_ov015_0213c530
    strb r0, [r10, #0x47c]
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov003_02108558(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x2c
    mov r10, r0
    ldr r1, [r10, #0x524]
    cmp r1, #0
    addeq sp, sp, #0x2c
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [r1, #0xc]
    mov r5, #0
    add r9, r1, r0
    mov r8, #0x1a
    mov r7, #0x15
    mov r6, #6
    mov r11, #3
    mov r1, #0x30
    mov r0, #0x18
    mov r4, #8
    strh r1, [sp, #0x20]
    strh r0, [sp, #0x22]
    strh r8, [sp, #0x14]
    strh r7, [sp, #0x16]
    strh r6, [sp, #0x18]
    strh r11, [sp, #0x1a]
    strh r5, [sp, #0x1c]
    strh r5, [sp, #0x1e]
    strb r4, [sp, #0x24]
    str r9, [sp, #0x28]
    str r5, [sp]
    add r0, sp, #0x14
    stmib sp, {r0, r5}
    str r5, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r1, r5
    mov r2, #1
    mov r3, #5
    str r5, [sp, #0x10]
    bl func_ov015_0213b540
    add r0, r9, #0x24
    str r0, [sp, #0x28]
    strh r8, [sp, #0x14]
    strh r7, [sp, #0x16]
    strh r11, [sp, #0x1a]
    strh r6, [sp, #0x18]
    strh r5, [sp, #0x1c]
    strh r5, [sp, #0x1e]
    strh r5, [sp, #0x20]
    strh r5, [sp, #0x22]
    strb r4, [sp, #0x24]
    str r5, [sp]
    add r0, sp, #0x14
    stmib sp, {r0, r5}
    str r5, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r1, r5
    mov r2, #1
    mov r3, r6
    str r5, [sp, #0x10]
    bl func_ov015_0213b540
    ldr r0, =data_020c9660
    mov r1, r5
    mov r2, r6
    bl func_ov015_0213b990
    mov r0, #0xa
    str r0, [sp]
    ldr r0, =data_020c47a4
    mov r1, #5
    mov r2, r6
    mov r3, r5
    bl func_ov015_0213c530
    strb r0, [r10, #0x47c]
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov003_02108680(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x2c
    mov r8, #6
    mov r6, #0
    mov r10, r1
    mov r9, r2
    mov r7, #0x14
    mov r5, #0xa0
    mov r4, #0x30
    mov r11, #7
    strh r8, [sp, #0x14]
    strh r10, [sp, #0x16]
    strh r7, [sp, #0x18]
    strh r8, [sp, #0x1a]
    strh r6, [sp, #0x1c]
    strh r6, [sp, #0x1e]
    strh r5, [sp, #0x20]
    strh r4, [sp, #0x22]
    strb r11, [sp, #0x24]
    str r9, [sp, #0x28]
    str r6, [sp]
    add r0, sp, #0x14
    stmib sp, {r0, r6}
    str r6, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r1, r6
    mov r2, #1
    str r6, [sp, #0x10]
    bl func_ov015_0213b540
    ldr r3, [sp, #0x54]
    add r9, r9, #0xf0
    cmp r3, #0
    beq @L_02108754
    strh r8, [sp, #0x14]
    strh r10, [sp, #0x16]
    strh r7, [sp, #0x18]
    strh r8, [sp, #0x1a]
    strh r6, [sp, #0x1c]
    strh r6, [sp, #0x1e]
    strh r5, [sp, #0x20]
    strh r4, [sp, #0x22]
    strb r11, [sp, #0x24]
    str r9, [sp, #0x28]
    str r6, [sp]
    add r0, sp, #0x14
    stmib sp, {r0, r6}
    str r6, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r1, r6
    mov r2, #1
    str r6, [sp, #0x10]
    bl func_ov015_0213b540
    add r9, r9, #0xf0
@L_02108754:
    mov r6, #0
    mov r2, #6
    mov r1, #0x14
    mov r0, #7
    strh r1, [sp, #0x18]
    strb r0, [sp, #0x24]
    ldr r4, [sp, #0x50]
    strh r2, [sp, #0x14]
    strh r2, [sp, #0x1a]
    strh r10, [sp, #0x16]
    strh r6, [sp, #0x1c]
    strh r6, [sp, #0x1e]
    strh r6, [sp, #0x20]
    strh r6, [sp, #0x22]
    str r9, [sp, #0x28]
    add r0, sp, #0x14
    str r6, [sp]
    stmib sp, {r0, r6}
    ldr r5, =data_020c9660
    str r6, [sp, #0xc]
    mov r0, r5
    mov r1, r6
    mov r3, r4
    mov r2, #1
    str r6, [sp, #0x10]
    bl func_ov015_0213b540
    mov r0, r5
    mov r1, r6
    mov r2, r4
    bl func_ov015_0213b990
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov003_021087d8(void)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x2c
    mov r6, #3
    mov r5, #0
    mov r10, r1
    mov r9, r2
    mov r8, #7
    mov r7, #0x12
    mov r4, #0x90
    mov r11, #0x18
    strh r8, [sp, #0x14]
    strh r10, [sp, #0x16]
    strh r7, [sp, #0x18]
    strh r6, [sp, #0x1a]
    strh r5, [sp, #0x1c]
    strh r5, [sp, #0x1e]
    strh r4, [sp, #0x20]
    strh r11, [sp, #0x22]
    strb r6, [sp, #0x24]
    str r9, [sp, #0x28]
    str r5, [sp]
    add r0, sp, #0x14
    stmib sp, {r0, r5}
    str r5, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r1, r5
    mov r2, #1
    str r5, [sp, #0x10]
    bl func_ov015_0213b540
    ldr r3, [sp, #0x54]
    add r9, r9, #0x6c
    cmp r3, #0
    beq @L_021088ac
    strh r8, [sp, #0x14]
    strh r10, [sp, #0x16]
    strh r7, [sp, #0x18]
    strh r6, [sp, #0x1a]
    strh r5, [sp, #0x1c]
    strh r5, [sp, #0x1e]
    strh r4, [sp, #0x20]
    strh r11, [sp, #0x22]
    strb r6, [sp, #0x24]
    str r9, [sp, #0x28]
    str r5, [sp]
    add r0, sp, #0x14
    stmib sp, {r0, r5}
    str r5, [sp, #0xc]
    ldr r0, =data_020c9660
    mov r1, r5
    mov r2, #1
    str r5, [sp, #0x10]
    bl func_ov015_0213b540
    add r9, r9, #0x6c
@L_021088ac:
    mov r6, #0
    mov r0, #3
    mov r2, #7
    mov r1, #0x12
    strh r2, [sp, #0x14]
    strh r1, [sp, #0x18]
    ldr r4, [sp, #0x50]
    strh r10, [sp, #0x16]
    strh r0, [sp, #0x1a]
    strb r0, [sp, #0x24]
    strh r6, [sp, #0x1c]
    strh r6, [sp, #0x1e]
    strh r6, [sp, #0x20]
    strh r6, [sp, #0x22]
    str r9, [sp, #0x28]
    add r0, sp, #0x14
    str r6, [sp]
    stmib sp, {r0, r6}
    ldr r5, =data_020c9660
    str r6, [sp, #0xc]
    mov r0, r5
    mov r1, r6
    mov r3, r4
    mov r2, #1
    str r6, [sp, #0x10]
    bl func_ov015_0213b540
    mov r0, r5
    mov r1, r6
    mov r2, r4
    bl func_ov015_0213b990
    add sp, sp, #0x2c
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_ov003_02108930(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x70
    ldrb r0, [sp, #0xa0]
    mov r10, r1
    mov r9, r2
    cmp r0, #0
    ldreq r0, =data_020c46a8
    mov r8, r3
    ldr r7, [sp, #0x98]
    mov r4, #1
    mov r6, #0
    ldreq r5, [r0]
    beq @L_0210898c
    ldr r0, =data_020c466c
    mov r1, r4
    ldr r5, [r0]
    mov r2, r6
    mov r0, r5
    bl _ZN8TextFont8SetUnk1CEhh
    mov r0, r5
    mov r1, r4
    mov r2, r4
    bl _ZN8TextFont10SetSpacingEii
@L_0210898c:
    mov r0, r7
    mov r4, #1
    bl func_ov015_02133dc8
    add r11, sp, #0x20
    mov r0, r8
    mov r1, r11
    mov r2, #0x50
    bl MI_CpuCopy8
    ldrb r0, [sp, #0x9c]
    cmp r0, #0
    bne @L_02108a3c
    ldrb r0, [sp, #0xa4]
    cmp r0, #0
    beq @L_021089e8
    bl func_0209d668
    cmp r0, #1
    bne @L_021089e4
    ldrb r0, [sp, #0xa0]
    mov r6, r4
    cmp r0, #0
    movne r6, #0
    b @L_021089e8
@L_021089e4:
    mov r6, r4
@L_021089e8:
    mov r0, #3
    stmia sp, {r0, r6}
    ldr r0, [r7, #4]
    mov r6, #0
    str r0, [sp, #8]
    ldrh r1, [r7, #0xc]
    mov r0, r5
    add r3, sp, #0x20
    mov r1, r1, lsl #3
    str r1, [sp, #0xc]
    ldrh r5, [r7, #0xe]
    mov r1, r10
    mov r2, r9
    mov r5, r5, lsl #3
    str r5, [sp, #0x10]
    str r6, [sp, #0x14]
    str r6, [sp, #0x18]
    ldr r5, [r0]
    ldr r5, [r5, #8]
    blx r5
    b @L_02108a84
@L_02108a3c:
    mov r0, #3
    str r0, [sp]
    str r0, [sp, #4]
    mov r1, r4
    str r1, [sp, #8]
    mov r0, #0
    str r0, [sp, #0xc]
    str r10, [sp, #0x10]
    str r9, [sp, #0x14]
    str r1, [sp, #0x18]
    str r1, [sp, #0x1c]
    ldrh r2, [r7, #0xc]
    ldrh r3, [r7, #0xe]
    ldr r1, [r7, #4]
    mov r0, r11
    mov r2, r2, lsl #3
    mov r3, r3, lsl #3
    bl func_ov015_021330b4
@L_02108a84:
    ldrh r2, [r7, #0xc]
    ldrh r1, [r7, #0xe]
    ldr r0, [r7, #4]
    mul r1, r2, r1
    mov r1, r1, lsl #5
    bl DC_FlushRange
    strb r4, [r7, #0x10]
    add sp, sp, #0x70
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
