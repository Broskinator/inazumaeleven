#include "ov014/Unk_ov014_0210ecac.hpp"
struct L02110784 { u64 x; u64 y; s32 z; };

extern "C" void func_ov014_0210ecac(void);
extern "C" s32 DWC_Svl_Process(...);
extern "C" void DWCi_Svl_ParseHttp(void);
extern "C" void DWCi_BM_GetApInfo(s32 arg0);
extern "C" s32 DWCi_BM_GetWiFiInfo(...);
extern "C" void ReadSlotInfo(s32 arg0, s32 arg1, s32 arg2);
extern "C" void WriteSlotInfo(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 DWCi_BM_SetWiFiInfo(...);
extern "C" s32 DWCi_BACKUPlInit(u8 *arg0);
extern "C" void DWCi_BACKUPlRead(s32 arg0);
extern "C" s32 DWCi_BACKUPlWritePage(s32 arg0, u8 *arg1, s32 arg2);
extern "C" void DWCi_BACKUPlWriteAll(void);
extern "C" void DWCi_BACKUPlSetWiFi(s32 arg0);
extern "C" u8 DWCi_BACKUPlConvMaskCidr(u8 *arg0);
extern "C" s32 DWCi_BACKUPlConvMaskAddr(...);
extern "C" s32 DWC_BACKUPlCheckSsid(u8 *arg0);
extern "C" s32 DWC_BACKUPlCheckIp(...);
extern "C" s32 DWC_BACKUPlCheckAddress(u8 *arg0);
extern "C" s32 NVRAMm_ExecuteCommand(...);
extern "C" s32 readNvram(...);
extern "C" s32 writeNvram(...);
extern "C" s32 VerifySlotInfo(...);
extern "C" s32 writeDisable(void);
extern "C" s32 Callback_NVRAM(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 DWCi_BACKUPlConvWifiInfo(...);
extern "C" char *DWCi_BACKUPlGetWifi(void);
extern "C" void DWC_BM_Init(void);
extern "C" s32 checkAp(u8 *arg0);
extern "C" s32 func_ov014_02110108(s32 arg0);
extern "C" void initPage(void);
extern "C" void DWCi_Util_WiFiId_scrambleUid(void);
extern "C" s32 DWCi_AUTH_GetNewWiFiInfo(...);
extern "C" s32 DWCi_AUTH_MakeWiFiID(s32 arg0);
extern "C" s32 DWCi_AUTH_UpDateWiFiID(u8 *arg0, s32 arg1);
extern "C" void DWCi_AUTH_RemakeWiFiID(void);
extern "C" void DWC_Auth_GetId(void);
extern "C" s32 DWC_Auth_CheckWiFiIDNeedCreate(void);
extern "C" void DWC_Base64Encode(void);
extern "C" void DWC_Base64Decode(void);
extern "C" s32 DWC_GetLastError(u8 *arg0);
extern "C" void DWC_GetLastErrorEx(void);
extern "C" s32 DWC_ClearError(void);
extern "C" s32 DWCi_IsError(void);
extern "C" s32 DWCi_SetError(...);
extern "C" void DWC_InitForProduction(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 DWCi_Init(...);
extern "C" void DWCi_Np_SetInitFlag(s32 arg0);
extern "C" s32 DWCi_GetAllocateHeader(s32 arg0);
extern "C" s32 DWCi_SetAllocateHeader(u8 *arg0, s32 arg1);
extern "C" void DWCi_SetMemFunc(s32 arg0, s32 arg1);
extern "C" void DWC_Alloc(s32 arg0, s32 arg1);
extern "C" s32 DWC_AllocEx(...);
extern "C" s32 DWC_Free(...);
extern "C" s32 func_ov014_02110db4(char *arg0, s32 arg1);
extern "C" s32 DWC_SVLProcess(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 func_ov014_02110e70(void);
extern "C" void DWC_NASLoginProcess(void);
extern "C" void func_ov014_0211105c(void);
extern "C" void DWC_Auth_SetNasTimeDiff(void);
extern "C" void DWCi_NdAlloc(s32 arg0, s32 arg1);
extern "C" void DWCi_NdFree(s32 arg0);
extern "C" void DWCi_NdCleanupCallback(void);
extern "C" void func_ov014_021112f4(void);
extern "C" s32 NdCallback(s32 arg0, s32 arg1, s32 arg2);
extern "C" void func_ov014_021114f8(void);
extern "C" s32 DWC_NdProcess(void);
extern "C" s32 DWC_NdCleanupAsync(void);
extern "C" s32 DWC_NdSetAttr(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 DWC_NdGetFileListNumAsync(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 DWC_NdGetFileListAsync(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 DWC_NdGetFileAsync(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 DWC_NdCancelAsync(void);
extern "C" s32 DWC_NdGetProgress(s32 arg0, s32 arg1);
extern "C" s32 DWCi_Ndi_freeAttr(...);
extern "C" s32 setAttr(...);
extern "C" s32 DWCi_NdSetAttr(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern "C" s32 getNchar(char *arg0, char *arg1, s32 arg2);

extern "C" char OSi_ThreadInfo[];
extern "C" char errno[];
extern "C" char data_ov014_02123e70[];
extern "C" char data_ov014_02123e74[];
extern "C" char data_ov014_02123e8c[];
extern "C" char DWCauthhttpparam[];
extern "C" char data_ov014_02124c84[];
extern "C" char data_ov014_02124ca4[];
extern "C" char data_ov014_02124cac[];
extern "C" char data_ov014_02124cb4[];
extern "C" char data_ov014_02124cb8[];
extern "C" char data_ov014_02124cc0[];
extern "C" char data_ov014_02124ccc[];
extern "C" char data_ov014_02124cd8[];
extern "C" char data_ov014_02124ce0[];
extern "C" char data_ov014_02124cf0[];
extern "C" char data_ov014_02125a3c[];
extern "C" char data_ov014_02125a84[];
extern "C" char data_ov014_02125a8c[];
extern "C" char data_ov014_02125ac0[];
extern "C" char data_ov014_02125af0[];
extern "C" char data_ov014_02125b10[];
extern "C" char data_ov014_02125b24[];
extern "C" char data_ov014_02125b38[];
extern "C" char intwork[];
extern "C" char nv_result[];
extern "C" char Wifi[];
extern "C" char data_ov014_02128d91[];
extern "C" char data_ov014_02128d92[];
extern "C" char data_ov014_02128d96[];
extern "C" char data_ov014_02128d98[];
extern "C" char data_ov014_02128da0[];
extern "C" char stDwcLastError[];
extern "C" char dwci_gamecode[];
extern "C" char s_free[];
extern "C" char data_ov014_02128dd8[];
extern "C" char data_ov014_02128ddc[];
extern "C" char s_userCallback[];
extern "C" char s_dwcnd_mutexState[];
extern "C" char DWCi_Ndi_dlcallback[];
extern "C" char DWCi_Ndi_dlattr[];
extern "C" void DC_InvalidateRange(void);
extern "C" void DC_StoreRange(void);
extern "C" void MATH_CalcCRC16(void);
extern "C" void MATHi_CRC16InitTableRev(void);
extern "C" s32 MI_CpuCopy8(...);
extern "C" s32 MI_CpuFill8(...);
extern "C" s32 MIi_CpuClear16(...);
extern "C" void OS_CreateThread(void);
extern "C" void OS_GetTick(void);
extern "C" void OS_InitMutex(void);
extern "C" void OS_InitTick(void);
extern "C" void OS_IsThreadTerminated(void);
extern "C" s32 OS_LockMutex(...);
extern "C" void OS_Sleep(void);
extern "C" s32 OS_UnlockMutex(...);
extern "C" void OS_WakeupThreadDirect(void);
extern "C" s32 WaitByLoop(...);
extern "C" void atoi(void);
extern "C" s32 OSi_ReferSymbol(...);
extern "C" void OS_SNPrintf(void);
extern "C" s32 OS_JoinThread(...);
extern "C" void OS_GetThreadPriority(void);
extern "C" void OS_IsTickAvailable(void);
extern "C" void OS_InitAlarm(void);
extern "C" void OS_GetMacAddress(void);
extern "C" s32 OS_Terminate(...);
extern "C" s32 PXI_SetFifoRecvCallback(...);
extern "C" s32 PXI_IsCallbackReady(...);
extern "C" void RTC_Init(void);
extern "C" void RTC_GetDate(void);
extern "C" void RTC_GetTime(void);
extern "C" void RTC_GetDateTime(void);
extern "C" void RTC_ConvertDateTimeToSecond(void);
extern "C" s32 DWC_Auth_Create(...);
extern "C" void DWC_Auth_Abort(void);
extern "C" void DWC_Auth_Destroy(void);
extern "C" void DWC_Auth_GetError(void);
extern "C" void DWC_Auth_GetResult(void);
extern "C" void DWCi_Auth_InitInterface(void);
extern "C" void DWC_Auth_GetCalInfoFromNVRAM(void);
extern "C" void DWC_Auth_SetCalInfoToHttp(void);
extern "C" void DWC_Http_Create(void);
extern "C" void DWC_Http_FinishHeader(void);
extern "C" void DWC_Http_StartThread(void);
extern "C" void DWC_Http_Destroy(void);
extern "C" void DWC_Http_Add_PostBase64Item(void);
extern "C" void DWC_Http_ParseResult(void);
extern "C" void DWC_Http_GetResult(void);
extern "C" void DWC_Http_GetBase64DecodedResult(void);
extern "C" void DWC_Svl_Init(void);
extern "C" s32 DWC_Svl_Cleanup(...);
extern "C" void DWCi_Ndi_getEncodeLenBASE64(void);
extern "C" void DWCi_Ndi_encodeBASE64(void);
extern "C" void DWCi_NdStartup(void);
extern "C" s32 DWCi_NdCleanupAsync(...);
extern "C" s32 DWCi_NdSetError(...);
extern "C" s32 DWCi_NdCancelAsync(...);
extern "C" s32 DWCi_NdGetFileListNumAsync(...);
extern "C" void DWCi_NdGetFileListAsync(void);
extern "C" void DWCi_NdGetFileAsync(void);
extern "C" s32 DWCi_NdGetProgress(...);
extern "C" s32 DWCi_Ndi_lockGlobal(...);
extern "C" s32 DWCi_Ndi_unlockGlobal(...);
extern "C" void DWCi_Ndi_strlen(void);
extern "C" s32 memcmp(...);
extern "C" void strcmp(void);
extern "C" void strcpy(void);
extern "C" void strlen(void);
extern "C" void strncpy(void);

extern "C" asm void func_ov014_0210ecac(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0xb0
    ldr r4, =intwork
    mov r7, r0
    ldr r2, [r4]
    mov r0, r1
    add r2, r2, #0x1000
    str r1, [r2, #0xc58]
    mov r1, #0
    mov r2, #0x174
    mov r5, r1
    bl MI_CpuFill8
    ldr r1, [r4]
    add r0, r1, #0x1000
    ldr r0, [r0, #0xbe8]
    cmp r0, #0
    beq @L_0210ed08
    add r0, r1, #0x37c
    add r0, r0, #0x1800
    bl OS_IsThreadTerminated
    cmp r0, #0
    bne @L_0210ed08
    bl OS_Terminate
@L_0210ed08:
    ldr r0, =DWCauthhttpparam
    mov r1, #0x1000
    ldr r0, [r0]
    ldr r6, [r4]
    str r1, [sp, #8]
    str r0, [sp]
    str r5, [sp, #4]
    ldr r2, [r6]
    ldr r1, =data_ov014_02124c84
    str r2, [sp, #0xc]
    ldr r2, [r6, #4]
    str r2, [sp, #0x10]
    bl strcmp
    cmp r0, #0
    movne r0, #1
    strne r0, [sp, #0x14]
    ldr r2, =0x4e20
    add r1, sp, #0
    add r0, r6, #8
    streq r5, [sp, #0x14]
    str r2, [sp, #0x18]
    bl DWC_Http_Create
    cmp r0, #0
    beq @L_0210ed80
    ldr r1, =0xffffa1dc
    mov r0, #9
    bl DWCi_SetError
    add sp, sp, #0xb0
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0210ed80:
    add r6, sp, #0x1c
    mov r0, r6
    bl DWC_Auth_GetCalInfoFromNVRAM
    cmp r0, #0
    beq @L_0210edb0
    ldr r0, [r4]
    mov r1, r6
    mov r2, r5
    add r0, r0, #8
    bl DWC_Auth_SetCalInfoToHttp
    cmp r0, #0
    bne @L_0210edd4
@L_0210edb0:
    ldr r0, [r4]
    add r0, r0, #8
    bl DWC_Http_Destroy
    ldr r1, =0xffffa1dc
    mov r0, #9
    bl DWCi_SetError
    add sp, sp, #0xb0
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0210edd4:
    ldr r0, [r4]
    ldr r1, =data_ov014_02124ca4
    ldr r2, =data_ov014_02124cac
    add r0, r0, #8
    mov r3, #6
    bl DWC_Http_Add_PostBase64Item
    cmp r0, #0
    bne @L_0210ee14
    ldr r0, [r4]
    ldr r1, =data_ov014_02124cb4
    mov r2, r7
    add r0, r0, #8
    mov r3, #4
    bl DWC_Http_Add_PostBase64Item
    cmp r0, #0
    beq @L_0210ee38
@L_0210ee14:
    ldr r0, [r4]
    add r0, r0, #8
    bl DWC_Http_Destroy
    ldr r1, =0xffffa1dc
    mov r0, #9
    bl DWCi_SetError
    add sp, sp, #0xb0
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0210ee38:
    ldr r0, [r4]
    add r0, r0, #8
    bl DWC_Http_FinishHeader
    cmp r0, #0
    beq @L_0210ee70
    ldr r0, [r4]
    add r0, r0, #8
    bl DWC_Http_Destroy
    ldr r1, =0xffffa1dc
    mov r0, #9
    bl DWCi_SetError
    add sp, sp, #0xb0
    mov r0, r5
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0210ee70:
    ldr r0, =OSi_ThreadInfo
    ldr r0, [r0, #4]
    bl OS_GetThreadPriority
    ldr r2, [r4]
    sub r1, r0, #1
    add r0, r2, #8
    bl DWC_Http_StartThread
    ldr r1, [r4]
    add r0, r1, #0x1000
    ldr r0, [r0, #0xbe8]
    cmp r0, #0
    addne sp, sp, #0xb0
    movne r0, #1
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    add r0, r1, #8
    bl DWC_Http_Destroy
    ldr r1, =0xffffa1dc
    mov r0, #9
    bl DWCi_SetError
    mov r0, r5
    add sp, sp, #0xb0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm s32 DWC_Svl_Process(...)
{
    stmdb sp!, {r4, lr}
    ldr r4, =intwork
    ldr r1, [r4]
    cmp r1, #0
    moveq r0, #0
    ldmeqia sp!, {r4, pc}
    add r0, r1, #0x1000
    ldr r0, [r0, #0xbe8]
    cmp r0, #0
    moveq r0, #1
    ldmeqia sp!, {r4, pc}
    add r0, r1, #0x37c
    add r0, r0, #0x1800
    bl OS_IsThreadTerminated
    cmp r0, #1
    bne @L_0210efa0
    ldr r1, [r4]
    add r0, r1, #0x1000
    ldr r0, [r0, #0x28]
    cmp r0, #7
    beq @L_0210ef74
    cmp r0, #8
    bne @L_0210ef84
    bl DWCi_Svl_ParseHttp
    cmp r0, #0
    ldr r0, [r4]
    add r0, r0, #8
    bne @L_0210ef68
    bl DWC_Http_Destroy
    mov r0, #4
    ldmia sp!, {r4, pc}
@L_0210ef68:
    bl DWC_Http_Destroy
    mov r0, #3
    ldmia sp!, {r4, pc}
@L_0210ef74:
    add r0, r1, #8
    bl DWC_Http_Destroy
    mov r0, #5
    ldmia sp!, {r4, pc}
@L_0210ef84:
    add r0, r1, #8
    bl DWC_Http_Destroy
    ldr r1, =0xffffa1db
    mov r0, #0x10
    bl DWCi_SetError
    mov r0, #4
    ldmia sp!, {r4, pc}
@L_0210efa0:
    mov r0, #2
    ldmia sp!, {r4, pc}
}

extern "C" asm void DWCi_Svl_ParseHttp(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #4
    ldr r0, =intwork
    mov r4, #0
    ldr r5, [r0]
    mov r1, r4
    add r0, r5, #8
    bl DWC_Http_ParseResult
    cmp r0, #0
    bne @L_0210eff0
    ldr r1, =0xffff9df3
    mov r0, #0xf
    bl DWCi_SetError
    add sp, sp, #4
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0210eff0:
    ldr r1, =data_ov014_02124cb8
    add r0, r5, #8
    bl DWC_Http_GetResult
    cmp r0, #0
    beq @L_0210f008
    bl DWC_Auth_SetNasTimeDiff
@L_0210f008:
    ldr r1, =data_ov014_02124cc0
    add r0, r5, #8
    bl DWC_Http_GetResult
    cmp r0, #0
    bne @L_0210f034
    ldr r1, =0xffff9df3
    mov r0, #0xf
    bl DWCi_SetError
    add sp, sp, #4
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0210f034:
    bl atoi
    ldr r6, =errno
    mov r2, r0
    ldr r0, [r6]
    cmp r0, #0x22
    bne @L_0210f064
    ldr r1, =0xffff9df3
    mov r0, #0xf
    bl DWCi_SetError
    add sp, sp, #4
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0210f064:
    cmp r2, #0xc8
    beq @L_0210f088
    ldr r1, =0xffff9e58
    mov r0, #0xf
    sub r1, r1, r2
    bl DWCi_SetError
    add sp, sp, #4
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0210f088:
    add r4, sp, #0
    ldr r1, =data_ov014_02124ccc
    mov r2, r4
    add r0, r5, #8
    mov r3, #4
    bl DWC_Http_GetBase64DecodedResult
    cmp r0, #0
    bgt @L_0210f0c0
    ldr r1, =0xffff9df3
    mov r0, #0xf
    bl DWCi_SetError
    add sp, sp, #4
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0210f0c0:
    mov r0, r4
    bl atoi
    ldr r1, [r6]
    mov r2, r0
    cmp r1, #0x22
    bne @L_0210f0f0
    ldr r1, =0xffff9df3
    mov r0, #0xf
    bl DWCi_SetError
    add sp, sp, #4
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0210f0f0:
    cmp r2, #0x64
    blt @L_0210f114
    ldr r1, =0xffffa240
    mov r0, #0xf
    sub r1, r1, r2
    bl DWCi_SetError
    add sp, sp, #4
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0210f114:
    ldr r6, =intwork
    ldr r1, =data_ov014_02124cd8
    ldr r2, [r6]
    add r0, r5, #8
    add r2, r2, #0x1000
    ldr r2, [r2, #0xc58]
    mov r3, #0x40
    add r2, r2, #4
    bl DWC_Http_GetBase64DecodedResult
    cmp r0, #0
    blt @L_0210f188
    ldr r0, [r6]
    ldr r1, =data_ov014_02124ce0
    add r0, r0, #0x1000
    ldr r2, [r0, #0xc58]
    add r0, r5, #8
    add r2, r2, #0x45
    mov r3, #0x12c
    bl DWC_Http_GetBase64DecodedResult
    cmp r0, #0
    blt @L_0210f188
    mov r6, #1
    ldr r1, =data_ov014_02124cf0
    mov r2, r4
    mov r3, r6
    add r0, r5, #8
    bl DWC_Http_GetBase64DecodedResult
    cmp r0, #0
    bge @L_0210f1a0
@L_0210f188:
    ldr r1, =0xffff9df3
    mov r0, #0xf
    bl DWCi_SetError
    add sp, sp, #4
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_0210f1a0:
    ldr r1, =intwork
    ldrsb r0, [sp]
    ldr r1, [r1]
    add r1, r1, #0x1000
    ldr r1, [r1, #0xc58]
    cmp r0, #0x59
    movne r6, #0
    mov r0, #1
    str r6, [r1]
    add sp, sp, #4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" void DWCi_BM_GetApInfo(s32 arg0)
{
    ReadSlotInfo(arg0, 0, 3);
}

extern "C" asm s32 DWCi_BM_GetWiFiInfo(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r0
    mov r4, #6
    ldr r0, =Wifi
    mov r1, r5
    mov r2, r4
    bl MI_CpuCopy8
    ldr r6, =0x7ff
    ldr r1, [r5, #4]
    ldr r2, [r5]
    sub r0, r6, #0x800
    and r12, r2, r0
    and lr, r1, r6
    ldr r0, =data_ov014_02128d91
    stmia r5, {r12, lr}
    mov r2, r4
    add r1, r5, #8
    bl MI_CpuCopy8
    ldr r0, [r5, #8]
    ldr r2, [r5, #0xc]
    mov r3, r0, lsr #3
    and r1, r6, r2, lsr #3
    str r1, [r5, #0xc]
    orr r3, r3, r2, lsl #29
    sub r0, r6, #0x800
    and r2, r3, r0
    mov r4, #2
    str r2, [r5, #8]
    ldr r0, =data_ov014_02128d96
    mov r2, r4
    add r1, r5, #0x10
    bl MI_CpuCopy8
    mov r2, r4
    ldrh r4, [r5, #0x10]
    sub r3, r6, #0x400
    ldr r0, =data_ov014_02128d98
    mov r4, r4, asr #6
    strh r4, [r5, #0x10]
    ldrh r4, [r5, #0x10]
    add r1, r5, #0x12
    and r3, r4, r3
    strh r3, [r5, #0x10]
    bl MI_CpuCopy8
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" void ReadSlotInfo(s32 arg0, s32 arg1, s32 arg2)
{
    readNvram((*(s32 *)(nv_result + 0x8) + (arg1 << 8)), (arg2 << 8), arg0, (s32)nv_result);
}

extern "C" void WriteSlotInfo(s32 arg0, s32 arg1, s32 arg2)
{
    writeNvram((*(s32 *)(nv_result + 0x8) + (arg1 << 8)), 0x100, arg0, (s32)nv_result);
    VerifySlotInfo(arg0, arg1, arg2);
}

extern "C" asm s32 DWCi_BM_SetWiFiInfo(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r9, r1
    bl DWCi_BACKUPlConvWifiInfo
    ldr r1, =0xa001
    add r0, r9, #0x200
    bl MATHi_CRC16InitTableRev
    ldr r6, =Wifi
    mov r8, #0
    mov r5, #0xe
    mov r4, #0xfe
    mov r7, #1
@L_0210f364:
    mov r0, r9
    mov r1, r8
    mov r2, r7
    bl ReadSlotInfo
    cmp r0, #0
    bne @L_0210f388
    bl OS_Terminate
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0210f388:
    mov r0, r6
    mov r2, r5
    add r1, r9, #0xf0
    bl MI_CpuCopy8
    mov r1, r9
    mov r2, r4
    add r0, r9, #0x200
    bl MATH_CalcCRC16
    strh r0, [r9, #0xfe]
@L_0210f3ac:
    mov r0, r9
    mov r1, r8
    add r2, r9, #0x100
    bl WriteSlotInfo
    cmp r0, #0
    beq @L_0210f3ac
    add r8, r8, #1
    cmp r8, #2
    blt @L_0210f364
    bl writeDisable
    cmp r0, #0
    movne r0, #1
    moveq r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" s32 DWCi_BACKUPlInit(u8 *arg0)
{
    s32 v0;
    s32 t0;
    v0 = readNvram(0x20, 0x20, (s32)arg0);
    if (v0 == 0)
        return 0;
    t0 = ((*(u16 *)(arg0) << 3) - 0x400);
    *(s32 *)(nv_result + 0x8) = t0;
    return 1;
}

extern "C" void DWCi_BACKUPlRead(s32 arg0)
{
    ReadSlotInfo(arg0, 0, 4);
}

extern "C" s32 DWCi_BACKUPlWritePage(s32 arg0, u8 *arg1, s32 arg2)
{
    s32 r4;
    s32 r5;
    s32 r8;
    s32 v0;
    s32 v1;
    r8 = arg0;
    r4 = 0;
    do {
        if (*(s32 *)(arg1 + (r4 << 2)) != 0) {
            r5 = (r8 + (r4 << 8));
            do {
                v0 = ((s32 (*)(...))WriteSlotInfo)(r5, r4, arg2);
            } while (v0 == 0);
        }
        r4 = (r4 + 1);
    } while (r4 < 4);
    v1 = writeDisable();
    if (v1 != 0) {
        arg0 = 1;
    } else {
        arg0 = 0;
    }
    return arg0;
}

extern "C" asm void DWCi_BACKUPlWriteAll(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, r0
    mov r5, #0
    mov r4, #0xfe
@L_0210f4b0:
    mov r2, r4
    add r0, r7, #0x500
    add r1, r7, r5, lsl #8
    bl MATH_CalcCRC16
    add r1, r7, r5, lsl #8
    strh r0, [r1, #0xfe]
    mov r6, r1
@L_0210f4cc:
    mov r0, r6
    mov r1, r5
    add r2, r7, #0x400
    bl WriteSlotInfo
    cmp r0, #0
    beq @L_0210f4cc
    add r5, r5, #1
    cmp r5, #4
    blt @L_0210f4b0
    bl writeDisable
    cmp r0, #0
    movne r0, #1
    moveq r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" void DWCi_BACKUPlSetWiFi(s32 arg0)
{
    MI_CpuCopy8(arg0, (s32)Wifi, 0xE);
}

extern "C" u8 DWCi_BACKUPlConvMaskCidr(u8 *arg0)
{
    s32 n;
    s32 i;
    s32 j;
    for (i = 0, n = 0; i < 4; i++) {
        u8 b = arg0[i];
        for (j = 0; j < 8; j++) {
            if ((b >> j) & 1)
                n++;
        }
    }
    return n;
}

extern "C" asm s32 DWCi_BACKUPlConvMaskAddr(...)
{
    mvn r2, #0
    eor r3, r2, r2, lsr r0
    mov r2, #0
@L_0210f56c:
    mov r0, r2, lsl #3
    rsb r0, r0, #0x18
    mov r0, r3, lsr r0
    strb r0, [r1, r2]
    add r2, r2, #1
    cmp r2, #4
    blt @L_0210f56c
    bx lr
}

extern "C" s32 DWC_BACKUPlCheckSsid(u8 *arg0)
{
    s32 r2;
    r2 = 0;
    do {
        if (*(u8 *)(arg0 + r2) != 0)
            return 1;
        r2 = (r2 + 1);
    } while (r2 < 0x20);
    return 0;
}

extern "C" asm s32 DWC_BACKUPlCheckIp(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #8
    mov r6, r0
    mov r5, r1
    bl DWC_BACKUPlCheckAddress
    cmp r0, #0
    addeq sp, sp, #8
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r4, #4
    add r1, sp, #4
    mov r0, r6
    mov r2, r4
    bl MI_CpuCopy8
    add r1, sp, #0
    mov r0, r5
    mov r2, r4
    bl MI_CpuCopy8
    ldr r0, [sp]
    ldr r1, [sp, #4]
    mvn r0, r0
    tst r1, r0
    movne r0, #1
    moveq r0, #0
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 DWC_BACKUPlCheckAddress(u8 *arg0)
{
    arg0 = (u8 *)*(u8 *)(arg0);
    if ((s32)arg0 == 0x7F) {
        return 0;
    } else {
        if ((u32)arg0 < (u32)1) {
            return 0;
        } else {
            if ((u32)arg0 <= (u32)0xDF) {
                arg0 = (u8 *)1;
            } else {
                arg0 = (u8 *)0;
            }
            return (s32)arg0;
        }
    }
}

extern "C" asm s32 NVRAMm_ExecuteCommand(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x44
    ldr r11, [pc, #0x3f8]
    mov r9, r0
    mov r7, r11, lsl #8
    mov r4, r7
    mov r4, r4, lsr #0x10
    orr r4, r4, #0x10000
    str r4, [sp, #0x34]
    and r4, r7, #0xff00
    orr r4, r4, #0x20000
    str r4, [sp, #0x38]
    ldr r5, [pc, #0x3d4]
    mov r6, r3, lsr #0x10
    mov r4, r3, lsl #0x10
    add r3, r5, #0x30000
    orr r3, r3, r4, lsr #16
    str r3, [sp, #0x18]
    mov r3, r4, lsr #0x10
    orr r3, r3, #0x1040000
    ldr r0, [pc, #0x3b8]
    str r3, [sp, #0x2c]
    orr r3, r0, r11, lsr #24
    str r3, [sp, #0x30]
    ldr r3, [sp, #0x38]
    mov r8, #0
    orr r3, r3, #0x1000000
    str r3, [sp, #0x38]
    mov r3, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    orr r5, r1, #0x10000
    add r1, r0, #0x300
    and r3, r3, #0xff
    add r0, r0, #0x100
    orr r0, r3, r0
    str r0, [sp, #8]
    orr r0, r2, #0x20000
    str r0, [sp, #0x24]
    orr r0, r6, #0x30000
    str r0, [sp, #0x28]
    orr r0, r6, #0x40000
    str r0, [sp, #0x14]
    ldr r0, [pc, #0x360]
    mov r4, #4
    sub r0, r0, #0x100
    str r0, [sp, #0x1c]
    mov r0, r2, lsr #0x10
    orr r0, r0, #0x20000
    str r0, [sp, #0xc]
    mov r0, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    orr r1, r3, r1
    orr r0, r0, #0x30000
    str r1, [sp, #0x20]
    mov r6, r4
    str r0, [sp, #0x10]
    mov r7, r8
@L_0210f730:
    cmp r8, #0
    bne @L_0210f920
    ldr r0, [pc, #0x320]
    cmp r9, #7
    str r7, [r0, #4]
    addls pc, pc, r9, lsl #2
    b @L_0210f730
    dcd 0xeafffff7
    dcd 0xea000005
    dcd 0xea00002a
    dcd 0xea00002c
    dcd 0xea000052
    dcd 0xea000051
    dcd 0xea000061
    dcd 0xea000064
    dcd 0xe59d1008
    dcd 0xe1a00006
    dcd 0xe1a02007
    dcd 0xebfbee6e
    dcd 0xe3500000
    dcd 0xb1a08007
    dcd 0xbaffffe9
    dcd 0xe1a00006
    dcd 0xe1a01005
    dcd 0xe1a02007
    dcd 0xebfbee67
    dcd 0xe3500000
    dcd 0xb1a08007
    dcd 0xbaffffe2
    dcd 0xe59d100c
    dcd 0xe1a00006
    dcd 0xe1a02007
    dcd 0xebfbee60
    dcd 0xe3500000
    dcd 0xb1a08007
    dcd 0xbaffffdb
    dcd 0xe59d1010
    dcd 0xe1a00006
    dcd 0xe1a02007
    dcd 0xebfbee59
    dcd 0xe3500000
    dcd 0xb1a08007
    dcd 0xbaffffd4
    dcd 0xe59d1014
    dcd 0xe1a00006
    dcd 0xe1a02007
    dcd 0xebfbee52
    dcd 0xe3500000
    dcd 0xb1a08007
    dcd 0xbaffffcd
    dcd 0xe1a00006
    dcd 0xe59d1018
    dcd 0xea000040
    dcd 0xe3a00004
    dcd 0xe59d101c
    dcd 0xea00003d
    dcd 0xe59d1020
    dcd 0xe1a00004
    dcd 0xe1a02007
    dcd 0xebfbee45
    dcd 0xe3500000
    dcd 0xb1a08007
    dcd 0xba00001b
    dcd 0xe1a00004
    dcd 0xe1a01005
    dcd 0xe1a02007
    dcd 0xebfbee3e
    dcd 0xe3500000
    dcd 0xb1a08007
    dcd 0xba000014
    dcd 0xe59d1024
    dcd 0xe1a00004
    dcd 0xe1a02007
    dcd 0xebfbee37
    dcd 0xe3500000
    dcd 0xb1a08007
    dcd 0xba00000d
    dcd 0xe59d1028
    dcd 0xe1a00004
    dcd 0xe1a02007
    dcd 0xebfbee30
    dcd 0xe3500000
    dcd 0xb1a08007
    dcd 0xba000006
    dcd 0xe59d102c
    dcd 0xe1a00004
    dcd 0xe1a02007
    dcd 0xebfbee29
    dcd 0xe1a08007
    dcd 0xe3500000
    dcd 0xa3a08001
    dcd 0xebfbe066
    dcd 0xe58d0000
    dcd 0xe58d1040
    dcd 0xeaffffa0
    dcd 0xe59d1030
    dcd 0xe3a00004
    dcd 0xe1a02007
    dcd 0xebfbee1e
    dcd 0xe3500000
    dcd 0xb1a08007
    dcd 0xbaffff99
    dcd 0xe59d1034
    dcd 0xe3a00004
    dcd 0xe1a02007
    dcd 0xebfbee17
    dcd 0xe3500000
    dcd 0xb1a08007
    dcd 0xbaffff92
    dcd 0xe3a00004
    dcd 0xe59d1038
    dcd 0xea000005
    dcd 0xe59f1164
    dcd 0xe3a00004
    dcd 0xe2811b03
    dcd 0xea000001
    dcd 0xe59f1154
    dcd 0xe3a00004
    dcd 0xe1a02007
    dcd 0xebfbee09
    dcd 0xe1a08007
    dcd 0xe3500000
    dcd 0xa3a08001
    dcd 0xeaffff83
@L_0210f920:
    ldr r0, [pc, #0x138]
    ldr r0, [r0, #4]
    cmp r0, #1
    bne @L_0210f730
    ldr r0, [pc, #0x128]
    mov r8, #0
    ldrh r0, [r0]
    cmp r0, #0
    bne @L_0210fa44
    cmp r9, #7
    addls pc, pc, r9, lsl #2
    b @L_0210f730
    dcd 0xeaffff76
    dcd 0xea000005
    dcd 0xea000007
    dcd 0xea000008
    dcd 0xea000009
    dcd 0xea000008
    dcd 0xea00002f
    dcd 0xea000031
    dcd 0xe28dd044
    dcd 0xe3a00001
    dcd 0xe8bd8ff0
    dcd 0xe3a09004
    dcd 0xeaffff6a
    dcd 0xe3a09005
    dcd 0xeaffff68
    dcd 0xe1a0000b
    dcd 0xe3a01001
    dcd 0xebfbdce3
    dcd 0xe3590004
    dcd 0xe5db0000
    dcd 0x1a000005
    dcd 0xe3100002
    dcd 0x13a09003
    dcd 0x1affff5f
    dcd 0xe28dd044
    dcd 0xe1a00008
    dcd 0xe8bd8ff0
    dcd 0xe3100001
    dcd 0x028dd044
    dcd 0x03a00001
    dcd 0x08bd8ff0
    dcd 0xe3100020
    dcd 0x1a000010
    dcd 0xebfbe018
    dcd 0xe59d2000
    dcd 0xe1a0c008
    dcd 0xe050e002
    dcd 0xe59d0040
    dcd 0xe59f2074
    dcd 0xe0c1a000
    dcd 0xe3a00040
    dcd 0xe081009e
    dcd 0xe0211c9e
    dcd 0xe3a0c040
    dcd 0xe0211c9a
    dcd 0xe1a03008
    dcd 0xebfc4b31
    dcd 0xe3510000
    dcd 0x03500efa
    dcd 0x9a000001
    dcd 0xe3a09006
    dcd 0xeaffff43
    dcd 0xe3a00901
    dcd 0xfafbc32b
    dcd 0xeaffff40
    dcd 0xe28dd044
    dcd 0xe1a00008
    dcd 0xe8bd8ff0
    dcd 0xe28dd044
    dcd 0xe3a00001
    dcd 0xe8bd8ff0
@L_0210fa44:
    mov r0, r8
    add sp, sp, #0x44
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    dcd data_ov014_02128da0
    dcd 0x01020000
    dcd 0x02002200
    dcd 0x03002100
    dcd nv_result
    dcd 0x000082ea
}

extern "C" asm s32 readNvram(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    mov r4, r2
    mov r6, r0
    mov r0, r4
    mov r5, r1
    bl DC_InvalidateRange
    mov r8, #4
    mov r7, #1
@L_0210fa88:
    mov r0, r8
    mov r1, r7
    bl PXI_IsCallbackReady
    cmp r0, #0
    beq @L_0210fa88
    ldr r1, =Callback_NVRAM
    mov r0, r8
    bl PXI_SetFifoRecvCallback
    mov r0, r5, lsl #0x10
    mov r8, r0, lsr #0x10
    mov r7, #0x40000
    mov r9, #1
@L_0210fab8:
    mov r0, r9
    mov r1, r6
    mov r2, r8
    mov r3, r4
    bl NVRAMm_ExecuteCommand
    cmp r0, #1
    beq @L_0210fae0
    mov r0, r7
    bl WaitByLoop
    b @L_0210fab8
@L_0210fae0:
    mov r0, r4
    mov r1, r5
    bl DC_InvalidateRange
    mov r0, r9
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm s32 writeNvram(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r0
    mov r7, r1
    mov r6, r2
    mov r5, #4
    mov r4, #1
@L_0210fb10:
    mov r0, r5
    mov r1, r4
    bl PXI_IsCallbackReady
    cmp r0, #0
    beq @L_0210fb10
    ldr r1, [pc, #0x44]
    mov r0, r5
    bl PXI_SetFifoRecvCallback
    mov r0, r6
    mov r1, r7
    bl DC_StoreRange
    mov r4, #0x40000
    mov r5, #2
@L_0210fb44:
    mov r0, r5
    mov r1, r8
    mov r2, r7
    mov r3, r6
    bl NVRAMm_ExecuteCommand
    cmp r0, #1
    ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
    mov r0, r4
    bl WaitByLoop
    b @L_0210fb44
    dcd 0xe8bd81f0
    dcd Callback_NVRAM
}

extern "C" asm s32 VerifySlotInfo(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r5, r2
    mov r4, #1
    mov r6, r0
    mov r0, r5
    mov r2, r4
    bl ReadSlotInfo
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
    mov r0, r6
    mov r1, r5
    mov r2, #0x100
    bl memcmp
    cmp r0, #0
    movne r4, #0
    mov r0, r4
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" s32 writeDisable(void)
{
    s32 r4;
    s32 r5;
    s32 r6;
    s32 v0;
    s32 v2;
    r4 = 1;
    r5 = 4;
    do {
        v0 = PXI_IsCallbackReady(r5, r4);
    } while (v0 == 0);
    PXI_SetFifoRecvCallback(r5, (s32)Callback_NVRAM);
    r4 = 0x40000;
    r5 = 0;
    r6 = 7;
    for (;;) {
        v2 = NVRAMm_ExecuteCommand(r6, r5, r5, r5);
        if (v2 == 1)
            break;
        WaitByLoop(r4);
    }
    return 1;
}

extern "C" s32 Callback_NVRAM(s32 arg0, s32 arg1, s32 arg2)
{
    *(u16 *)(nv_result) = (arg1 & 0xFF);
    *(s32 *)(nv_result + 0x4) = 1;
    if (arg2 != 0)
        *(u16 *)(nv_result) = 0xFF;
    return *(u16 *)(nv_result);
}

extern "C" asm s32 DWCi_BACKUPlConvWifiInfo(...)
{
    stmdb sp!, {r4, r5, r6, lr}
    sub sp, sp, #8
    mov r5, r0
    ldr r2, [r5, #8]
    ldr r4, =Wifi
    ldr r3, [r5, #0xc]
    str r2, [sp]
    mov r1, r4
    mov r2, #5
    str r3, [sp, #4]
    bl MI_CpuCopy8
    ldr r2, [sp]
    ldr r3, [sp, #4]
    mov r12, r2, lsr #5
    mov lr, r3, lsr #5
    orr r12, r12, r3, lsl #27
    ldr r1, [r5, #4]
    mov r0, #7
    and r1, r0, r1, lsr #8
    and r0, r2, #0x1f
    orr r3, r1, r0, lsl #3
    ldr r6, =nv_result
    ldr r1, =data_ov014_02128d92
    add r0, sp, #0
    mov r2, #4
    strb r3, [r6, #0x11]
    str r12, [sp]
    str lr, [sp, #4]
    bl MI_CpuCopy8
    ldr r2, [sp, #4]
    ldrh r0, [r5, #0x10]
    and r3, r2, #0x3f
    ldr r1, =data_ov014_02128d98
    mov r2, r0, lsl #0x1e
    orr r2, r3, r2, lsr #24
    strb r2, [r6, #0x16]
    mov r3, r0, asr #2
    add r0, r5, #0x12
    mov r2, #2
    strb r3, [r6, #0x17]
    bl MI_CpuCopy8
    mov r0, r4
    add sp, sp, #8
    ldmia sp!, {r4, r5, r6, pc}
}

extern "C" char *DWCi_BACKUPlGetWifi(void)
{
    return Wifi;
}

extern "C" asm void DWC_BM_Init(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x10
    mov r6, #0
    mov r8, r0
    mov r1, r6
    mov r2, #0x700
    bl MI_CpuFill8
    mov r0, r8
    bl DWCi_BACKUPlInit
    cmp r0, #0
    addeq sp, sp, #0x10
    ldreq r0, =0xffffd8ef
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r1, =0xa001
    add r0, r8, #0x500
    bl MATHi_CRC16InitTableRev
    mov r0, r8
    bl DWCi_BACKUPlRead
    cmp r0, #0
    addeq sp, sp, #0x10
    ldreq r0, =0xffffd8ef
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    add r5, sp, #0
    mov r1, r6
    mov r0, r5
    mov r2, #0x10
    bl MI_CpuFill8
    mov r9, #1
    mov r4, #0xfe
@L_0210fd98:
    add r7, r8, r6, lsl #8
    mov r1, r7
    mov r2, r4
    add r0, r8, #0x500
    bl MATH_CalcCRC16
    mov r1, r7
    ldrh r1, [r1, #0xfe]
    cmp r0, r1
    bne @L_0210fdcc
    mov r0, r7
    bl checkAp
    cmp r0, #0
    strne r9, [r5, r6, lsl #2]
@L_0210fdcc:
    add r6, r6, #1
    cmp r6, #3
    blt @L_0210fd98
    add r0, r8, #0x500
    add r1, r8, #0x300
    mov r2, #0xfe
    bl MATH_CalcCRC16
    add r1, r8, #0x300
    ldrh r1, [r1, #0xfe]
    cmp r0, r1
    moveq r0, #1
    ldr r1, [sp]
    streq r0, [sp, #0xc]
    cmp r1, #0
    ldrne r0, [sp, #4]
    cmpne r0, #0
    ldrne r0, [sp, #8]
    cmpne r0, #0
    ldrne r0, [sp, #0xc]
    cmpne r0, #0
    beq @L_0210fe34
    add r0, r8, #0xf0
    bl DWCi_BACKUPlSetWiFi
    add sp, sp, #0x10
    mov r0, #0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0210fe34:
    cmp r1, #0
    ldreq r0, [sp, #4]
    cmpeq r0, #0
    ldreq r0, [sp, #8]
    cmpeq r0, #0
    ldreq r0, [sp, #0xc]
    cmpeq r0, #0
    bne @L_0210fe78
    mov r0, r8
    bl func_ov014_02110108
    mov r0, r8
    bl DWCi_BACKUPlWriteAll
    cmp r0, #0
    movne r0, #0
    add sp, sp, #0x10
    ldreq r0, =0xffffd8f0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0210fe78:
    cmp r1, #0
    beq @L_0210fe8c
    ldr r0, [sp, #4]
    cmp r0, #0
    bne @L_0210fec8
@L_0210fe8c:
    ldr r0, [sp, #8]
    cmp r0, #0
    beq @L_0210fea4
    ldr r0, [sp, #0xc]
    cmp r0, #0
    bne @L_0210fec8
@L_0210fea4:
    mov r0, r8
    bl func_ov014_02110108
    mov r0, r8
    bl DWCi_BACKUPlWriteAll
    cmp r0, #0
    movne r0, #0
    add sp, sp, #0x10
    ldreq r0, =0xffffd8f0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0210fec8:
    cmp r1, #0
    ldreq r0, [sp, #4]
    cmpeq r0, #0
    bne @L_0210fefc
    mov r0, r8
    bl func_ov014_02110108
    mov r0, r8
    bl DWCi_BACKUPlWriteAll
    cmp r0, #0
    ldrne r0, =0xffffd8ed
    add sp, sp, #0x10
    ldreq r0, =0xffffd8f0
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0210fefc:
    cmp r1, #0
    bne @L_0210ff2c
    mov r0, r8
    mov r1, #0
    bl initPage
    add r0, r8, #0x1f0
    add r1, r8, #0xf0
    mov r2, #0xe
    bl MI_CpuCopy8
    ldrb r0, [r8, #0x1ef]
    strb r0, [r8, #0xef]
    b @L_0210ff5c
@L_0210ff2c:
    ldr r0, [sp, #4]
    cmp r0, #0
    bne @L_0210ff5c
    mov r0, r8
    mov r1, #1
    bl initPage
    add r0, r8, #0xf0
    add r1, r8, #0x1f0
    mov r2, #0xe
    bl MI_CpuCopy8
    ldrb r0, [r8, #0xef]
    strb r0, [r8, #0x1ef]
@L_0210ff5c:
    add r0, r8, #0xf0
    bl DWCi_BACKUPlSetWiFi
    ldr r0, [sp, #8]
    cmp r0, #0
    bne @L_0210ff7c
    mov r0, r8
    mov r1, #2
    bl initPage
@L_0210ff7c:
    ldr r0, [sp, #0xc]
    cmp r0, #0
    bne @L_0210ff98
    add r1, r8, #0x300
    mov r0, #0
    mov r2, #0x100
    bl MIi_CpuClear16
@L_0210ff98:
    mov r4, #0
    mov r5, r4
    mov r2, #1
    add r3, sp, #0
@L_0210ffa8:
    ldr r0, [r3, r5, lsl #2]
    cmp r0, #0
    bne @L_0210ffdc
    ldrb r0, [r8, #0xef]
    tst r0, r2, lsl r5
    beq @L_0210ffdc
    mvn r0, r2, lsl r5
    ldrb r1, [r8, #0xef]
    and r0, r0, #0xff
    mov r4, r2
    and r0, r1, r0
    strb r0, [r8, #0xef]
    strb r0, [r8, #0x1ef]
@L_0210ffdc:
    add r5, r5, #1
    cmp r5, #3
    blt @L_0210ffa8
    mov r0, r8
    bl DWCi_BACKUPlWriteAll
    cmp r0, #0
    addeq sp, sp, #0x10
    ldreq r0, =0xffffd8f0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r0, =0xffffd8ee
    cmp r4, #0
    moveq r0, #0
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" s32 checkAp(u8 *arg0)
{
    s32 local[1];
    u8 *r5;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v4;
    s32 v5;
    s32 v6;
    s32 v7;
    r5 = arg0;
    arg0 = (u8 *)*(u8 *)(arg0 + 0xE7);
    if ((s32)arg0 == 0xFF) {
        return 1;
    } else {
        if ((u32)arg0 > (u32)2) {
            return 0;
        } else {
            v0 = DWC_BACKUPlCheckSsid((u8 *)(r5 + 0x40));
            if (v0 == 0) {
                return 0;
            } else {
                v1 = memcmp((s32)(r5 + 0xC0), (u8 *)((u8 *)&data_ov014_02123e70), 4);
                if (v1 != 0) {
                    v2 = DWC_BACKUPlCheckAddress((u8 *)(r5 + 0xC4));
                    if (v2 == 0) {
                        return 0;
                    } else {
                        arg0 = (u8 *)*(u8 *)(r5 + 0xD0);
                        if ((u32)arg0 > (u32)0x20) {
                            return 0;
                        } else {
                            DWCi_BACKUPlConvMaskAddr((s32)arg0, (s32)((u8 *)local));
                            v4 = DWC_BACKUPlCheckIp((s32)(r5 + 0xC0), (s32)((u8 *)local));
                            if (v4 == 0) {
                                return 0;
                            }
                        }
                    }
                }
                v5 = memcmp((s32)(r5 + 0xC8), (u8 *)((u8 *)&data_ov014_02123e70), 4);
                if (((v5 != 0 && (v6 = DWC_BACKUPlCheckAddress((u8 *)(r5 + 0xC8)), v6 == 0)) && (v7 = DWC_BACKUPlCheckAddress((u8 *)(r5 + 0xCC)), v7 == 0))) {
                    return 0;
                } else {
                    return 1;
                }
            }
        }
    }
}

extern "C" s32 func_ov014_02110108(s32 arg0)
{
    s32 local[5];
    s32 r1;
    s32 r5;
    s32 r6;
    s32 v2;
    s32 r7;
    r5 = 0;
    MIi_CpuClear16(0, arg0, 0x400);
    do {
        *(u8 *)(((u8 *)(arg0 + (r5 << 8))) + 0xE7) = 0xFF;
        r1 = 0xFF;
        r5 = (r5 + 1);
    } while (r5 < 3);
    DWCi_AUTH_GetNewWiFiInfo((s32)((u8 *)local), r1);
    v2 = DWCi_BACKUPlConvWifiInfo((s32)((u8 *)local));
    r6 = v2;
    r7 = 0;
    r5 = 0xE;
    do {
        MI_CpuCopy8(r6, ((arg0 + (r7 << 8)) + 0xF0), r5);
        r7 = (r7 + 1);
    } while (r7 < 2);
    return 0;
}

extern "C" asm void initPage(void)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    add r1, r5, r4, lsl #8
    mov r0, #0
    mov r2, #0x100
    bl MIi_CpuClear16
    add r0, r5, r4, lsl #8
    mov r1, #0xff
    strb r1, [r0, #0xe7]
    ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void DWCi_Util_WiFiId_scrambleUid(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x10
    ldr r4, =0xffff
    mov lr, #0
    and r12, lr, #0
    add r5, r4, #0xff0000
    and r2, r2, #1
    mov r6, r12, lsl #2
    and r3, r3, #3
    and r5, r1, r5
    orr r1, r3, r2, lsl #2
    orr r6, r6, r2, lsr #30
    mov r7, r12, lsl #3
    and r2, r0, r4
    orr r0, r1, r5, lsl #3
    orr r4, r0, r2, lsl #27
    mov r3, r12, lsl #0x1b
    str r4, [sp, #8]
    orr r7, r7, r5, lsr #29
    orr r0, r12, r6
    orr r3, r3, r2, lsr #5
    orr r0, r7, r0
    orr r5, r3, r0
    str r5, [sp, #0xc]
    mov r4, lr
    add r1, sp, #8
@L_02110220:
    ldrb r0, [r1, lr]
    eor r0, r0, #0xd6
    strb r0, [r1, lr]
    add lr, lr, #1
    cmp lr, #6
    blt @L_02110220
    ldr r3, =data_ov014_02123e8c
    mov r6, #0
    add r0, sp, #8
@L_02110244:
    ldrb r5, [r0, r6]
    mov r1, r5, asr #4
    and r2, r1, #0xf
    and r1, r5, #0xf
    ldrb r2, [r3, r2]
    ldrb r1, [r3, r1]
    orr r1, r1, r2, lsl #4
    strb r1, [r0, r6]
    add r6, r6, #1
    cmp r6, #5
    blt @L_02110244
    add r5, sp, #0
    mov r2, #8
    mov r1, r5
    bl MI_CpuCopy8
    ldr r2, =data_ov014_02123e74
    mov r6, #0
    add r0, sp, #8
@L_0211028c:
    ldrb r3, [r5, r6]
    ldrb r1, [r2, r6]
    add r6, r6, #1
    cmp r6, #5
    strb r3, [r0, r1]
    blt @L_0211028c
    ldrb r1, [sp, #0xd]
    mov r0, #0
    ldr r2, [sp, #8]
    and r1, r1, #7
    strb r0, [sp, #0xf]
    strb r0, [sp, #0xe]
    strb r1, [sp, #0xd]
    ldr r1, [sp, #0xc]
    mov r12, r2, lsl #1
    mov r1, r1, lsl #1
    orr r1, r1, r2, lsr #31
    str r1, [sp, #0xc]
    ldrb r1, [sp, #0xd]
    str r12, [sp, #8]
    ldrb r2, [sp, #8]
    mov r1, r1, asr #3
    and r1, r1, #1
    orr r1, r2, r1
    strb r1, [sp, #8]
    add r2, sp, #8
@L_021102f4:
    ldrb r1, [r2, r0]
    eor r1, r1, #0x67
    strb r1, [r2, r0]
    add r0, r0, #1
    cmp r0, #6
    blt @L_021102f4
    ldrb r0, [sp, #0xd]
    strb r4, [sp, #0xf]
    strb r4, [sp, #0xe]
    and r0, r0, #7
    strb r0, [sp, #0xd]
    ldr r0, [sp, #8]
    ldr r1, [sp, #0xc]
    add sp, sp, #0x10
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm s32 DWCi_AUTH_GetNewWiFiInfo(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x24
    mov r5, r0
    mov r8, #0
    bl DWCi_BM_GetWiFiInfo
    bl RTC_Init
    add r6, sp, #0x14
    mov r0, r6
    bl RTC_GetDate
    cmp r0, #0
    addne sp, sp, #0x24
    movne r0, r8
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    add r4, sp, #8
    mov r0, r4
    bl RTC_GetTime
    cmp r0, #0
    addne sp, sp, #0x24
    movne r0, r8
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r6
    mov r1, r4
    bl RTC_ConvertDateTimeToSecond
    mov r9, r0
    mov r0, r8
    subs r2, r9, r0
    sbcs r2, r1, r0
    addlt sp, sp, #0x24
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    bl OS_IsTickAvailable
    cmp r0, #0
    beq @L_021103c4
    ldr r0, =OS_GetTick
    adds r9, r9, r0
@L_021103c4:
    add r0, sp, #0
    bl OS_GetMacAddress
    ldrb r0, [sp, #1]
    ldr r6, =0x5d588b65
    ldr r7, =0x269ec3
    ldrb r1, [sp]
    mov r0, r0, lsl #8
    mla r4, r9, r6, r7
    orr r1, r0, r1, lsl #16
    ldrb r2, [sp, #2]
    ldrb r10, [sp, #4]
    ldr r0, =0x9bf
    orr r1, r2, r1
    cmp r1, r0
    movne r1, #1
    mov r2, r4, lsr #0x10
    mov r0, #0x3e8
    mul r3, r2, r0
    ldrb r12, [sp, #3]
    ldrb r0, [sp, #5]
    mov r9, r10, lsl #8
    orr r10, r9, r12, lsl #16
    moveq r1, #0
    ldrh r2, [r5, #0x12]
    mov r3, r3, lsr #0x10
    strh r3, [r5, #0x10]
    str r8, [r5]
    str r8, [r5, #4]
    cmp r2, #0
    and r9, r1, #0xff
    orr r10, r0, r10
    bne @L_021104a0
    cmp r8, r8
    str r8, [r5, #8]
    str r8, [r5, #0xc]
    cmpeq r8, r8
    bne @L_021104e8
@L_02110458:
    mul r0, r4, r6
    adds r4, r0, r7
    bne @L_02110470
@L_02110464:
    mul r0, r4, r6
    adds r4, r0, r7
    beq @L_02110464
@L_02110470:
    strh r4, [r5, #0x12]
    ldrh r0, [r5, #0x12]
    mov r1, r10
    mov r2, r9
    mov r3, r8
    bl DWCi_Util_WiFiId_scrambleUid
    cmp r1, #0
    str r0, [r5, #8]
    str r1, [r5, #0xc]
    cmpeq r0, #0
    beq @L_02110458
    b @L_021104e8
@L_021104a0:
    cmp r8, r8
    str r8, [r5, #8]
    str r8, [r5, #0xc]
    cmpeq r8, r8
    bne @L_021104e8
@L_021104b4:
    ldrh r0, [r5, #0x12]
    mov r1, r10
    mov r2, r9
    add r0, r0, #1
    strh r0, [r5, #0x12]
    ldrh r0, [r5, #0x12]
    mov r3, r8
    bl DWCi_Util_WiFiId_scrambleUid
    cmp r1, #0
    str r0, [r5, #8]
    str r1, [r5, #0xc]
    cmpeq r0, #0
    beq @L_021104b4
@L_021104e8:
    mov r0, #1
    add sp, sp, #0x24
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" s32 DWCi_AUTH_MakeWiFiID(s32 arg0)
{
    s32 local[5];
    s32 r4;
    s32 r5;
    s32 v0;
    s32 v1;
    v0 = DWCi_AUTH_GetNewWiFiInfo((s32)((u8 *)local));
    r4 = (s32)((u8 *)local);
    r5 = arg0;
    if (v0 == 0) {
        return 0;
    } else {
        v1 = DWCi_BM_SetWiFiInfo(r4, r5);
        if (v1 != 0) {
            arg0 = 1;
        } else {
            arg0 = 0;
        }
        return arg0;
    }
}

extern "C" s32 DWCi_AUTH_UpDateWiFiID(u8 *arg0, s32 arg1)
{
    s32 local[5];
    DWCi_BM_GetWiFiInfo((s32)((u8 *)local), arg1);
    *(s64 *)(arg0) = *(s64 *)(arg0 + 0x8);
    *(s64 *)(arg0 + 0x8) = *(s64 *)(((u8 *)local + 0x8));
    s32 v1 = DWCi_BM_SetWiFiInfo((s32)arg0, arg1);
    return (v1 != 0 ? 1 : 0);
}

extern "C" asm void DWCi_AUTH_RemakeWiFiID(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x24
    add r1, sp, #0
    mov r7, #0
    mov r5, r0
    strb r7, [r1]
    strb r7, [r1, #1]
    strb r7, [r1, #2]
    strb r7, [r1, #3]
    strb r7, [r1, #4]
    strb r7, [r1, #5]
    bl DWCi_BM_GetWiFiInfo
    bl RTC_Init
    add r6, sp, #0x14
    mov r0, r6
    bl RTC_GetDate
    cmp r0, #0
    addne sp, sp, #0x24
    movne r0, r7
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    add r4, sp, #8
    mov r0, r4
    bl RTC_GetTime
    cmp r0, #0
    addne sp, sp, #0x24
    movne r0, r7
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    mov r0, r6
    mov r1, r4
    bl RTC_ConvertDateTimeToSecond
    mov r8, r0
    subs r0, r8, r7
    sbcs r0, r1, r7
    addlt sp, sp, #0x24
    movlt r0, r7
    ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
    bl OS_IsTickAvailable
    cmp r0, #0
    beq @L_02110640
    ldr r0, =OS_GetTick
    adds r8, r8, r0
@L_02110640:
    add r0, sp, #0
    bl OS_GetMacAddress
    ldrb r0, [sp, #1]
    ldr r6, =0x5d588b65
    ldr r7, =0x269ec3
    ldrb r1, [sp]
    mov r0, r0, lsl #8
    mla r4, r8, r6, r7
    orr r1, r0, r1, lsl #16
    ldrb r2, [sp, #2]
    ldrb r9, [sp, #4]
    ldr r0, =0x9bf
    orr r1, r2, r1
    cmp r1, r0
    movne r1, #1
    mov r2, r4, lsr #0x10
    mov r0, #0x3e8
    mul r3, r2, r0
    ldrb r10, [sp, #3]
    mov r8, r9, lsl #8
    moveq r1, #0
    mov r2, #0
    ldrb r0, [sp, #5]
    orr r8, r8, r10, lsl #16
    mov r3, r3, lsr #0x10
    cmp r2, #0
    strh r3, [r5, #0x10]
    str r2, [r5, #8]
    str r2, [r5, #0xc]
    cmpeq r2, #0
    and r9, r1, #0xff
    orr r10, r0, r8
    bne @L_02110714
    mov r8, r2
@L_021106c8:
    b @L_021106cc
@L_021106cc:
    mla r4, r6, r4, r7
    cmp r4, #0
    ldrneh r2, [r5, #0x12]
    movne r0, r4, lsl #0x10
    movne r1, r0, lsr #0x10
    cmpne r2, r0, lsr #16
    beq @L_021106cc
    strh r1, [r5, #0x12]
    ldrh r0, [r5, #0x12]
    mov r1, r10
    mov r2, r9
    mov r3, r8
    bl DWCi_Util_WiFiId_scrambleUid
    cmp r1, #0
    str r0, [r5, #8]
    str r1, [r5, #0xc]
    cmpeq r0, #0
    beq @L_021106c8
@L_02110714:
    mov r0, #1
    add sp, sp, #0x24
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void DWC_Auth_GetId(void)
{
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0x14
    add r5, sp, #0
    mov r4, r0
    mov r0, r5
    bl DWCi_BM_GetWiFiInfo
    ldmia r5, {r2, r3}
    stmia r4, {r2, r3}
    add r1, sp, #8
    add r0, r4, #8
    ldmia r1, {r2, r3}
    stmia r0, {r2, r3}
    ldr r0, [sp, #4]
    ldr r2, [sp]
    cmp r0, #0
    mov r0, #0
    cmpeq r2, #0
    movne r0, #1
    str r0, [r4, #0x10]
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, pc}
}

extern "C" s32 DWC_Auth_CheckWiFiIDNeedCreate(void)
{
    L02110784 t;
    ((void (*)(L02110784 *))DWCi_BM_GetWiFiInfo)(&t);
    if (t.y == 0 && t.x == 0)
        return 1;
    return 0;
}

extern "C" asm void DWC_Base64Encode(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #8
    ldr r4, =0xaaaaaaab
    mov r6, #3
    umull r4, r5, r1, r4
    mov r5, r5, lsr #1
    umull r4, r5, r6, r5
    subs r5, r1, r4
    movne r5, #4
    str r2, [sp]
    mov r10, r0
    ldr r4, =0xaaaaaaab
    ldr r0, [sp]
    moveq r5, #0
    cmp r0, #0
    umull r0, r2, r1, r4
    mov r2, r2, lsr #1
    addeq sp, sp, #8
    add r0, r5, r2, lsl #2
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r3, r0
    addlo sp, sp, #8
    mvnlo r0, #0
    ldmloia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    add r7, r10, r1
    ldr r8, [sp]
    cmp r10, r7
    beq @L_02110938
    ldr r5, =data_ov014_02125a3c
    add r11, sp, #4
@L_0211084c:
    sub r9, r7, r10
    mov r0, r9, lsl #3
    umull r1, r2, r0, r4
    mov r2, r2, lsr #2
    mov r1, #6
    umull r2, r3, r1, r2
    subs r2, r0, r2
    umull r1, r2, r0, r4
    movne r3, #1
    moveq r3, #0
    add r6, r3, r2, lsr #2
    cmp r9, #3
    movge r9, #3
    mov r0, r11
    mov r1, #0
    mov r2, #3
    bl MI_CpuFill8
    mov r0, r10
    mov r1, r11
    mov r2, r9
    bl MI_CpuCopy8
    ldrb r0, [sp, #4]
    ldr r1, [r5]
    cmp r6, #2
    mov r0, r0, asr #2
    ldrsb r0, [r1, r0]
    strb r0, [r8]
    movlo r0, #0x2a
    blo @L_021108dc
    ldrb r2, [sp, #4]
    ldrb r1, [sp, #5]
    ldr r0, [r5]
    mov r2, r2, lsl #4
    and r2, r2, #0x3f
    orr r1, r2, r1, asr #4
    ldrsb r0, [r0, r1]
@L_021108dc:
    strb r0, [r8, #1]
    cmp r6, #3
    movlo r0, #0x2a
    blo @L_02110908
    ldrb r2, [sp, #5]
    ldrb r1, [sp, #6]
    ldr r0, [r5]
    mov r2, r2, lsl #2
    and r2, r2, #0x3f
    orr r1, r2, r1, asr #6
    ldrsb r0, [r0, r1]
@L_02110908:
    strb r0, [r8, #2]
    cmp r6, #4
    ldrhsb r0, [sp, #6]
    ldrhs r1, [r5]
    add r10, r10, r9
    andhs r0, r0, #0x3f
    ldrhssb r0, [r1, r0]
    movlo r0, #0x2a
    strb r0, [r8, #3]
    cmp r10, r7
    add r8, r8, #4
    bne @L_0211084c
@L_02110938:
    ldr r0, [sp]
    sub r0, r8, r0
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void DWC_Base64Decode(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    tst r1, #3
    mvnne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, pc}
    mov r5, #0
    mov r6, r5
    cmp r1, #0
    ble @L_02110988
@L_02110970:
    ldrsb r4, [r0, r6]
    add r6, r6, #1
    cmp r4, #0x2a
    addne r5, r5, #6
    cmp r6, r1
    blt @L_02110970
@L_02110988:
    mov r12, r5, asr #2
    add r12, r5, r12, lsr #29
    mov r12, r12, asr #3
    cmp r2, #0
    moveq r0, r12
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    cmp r3, r12
    mvnlo r0, #0
    ldmloia sp!, {r3, r4, r5, r6, r7, pc}
    cmp r1, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    mov r1, r2
@L_021109bc:
    mov r7, #0
    mov r3, r7
    add r6, sp, #0
    mov r4, #0x3f
    mov r5, #0x3e
@L_021109d0:
    ldrsb lr, [r0, r7]
    cmp lr, #0x41
    blt @L_021109ec
    cmp lr, #0x5a
    suble lr, lr, #0x41
    strleb lr, [r6, r7]
    ble @L_02110a34
@L_021109ec:
    cmp lr, #0x61
    blt @L_02110a04
    cmp lr, #0x7a
    suble lr, lr, #0x47
    strleb lr, [r6, r7]
    ble @L_02110a34
@L_02110a04:
    cmp lr, #0x30
    blt @L_02110a1c
    cmp lr, #0x39
    addle lr, lr, #4
    strleb lr, [r6, r7]
    ble @L_02110a34
@L_02110a1c:
    cmp lr, #0x2e
    streqb r5, [r6, r7]
    beq @L_02110a34
    cmp lr, #0x2d
    streqb r4, [r6, r7]
    strneb r3, [r6, r7]
@L_02110a34:
    add r7, r7, #1
    cmp r7, #4
    blt @L_021109d0
    ldrsb r5, [sp, #1]
    ldrsb r4, [sp]
    add r3, r1, #1
    mov lr, r5, asr #4
    orr r4, lr, r4, lsl #2
    sub r6, r3, r2
    strb r4, [r1]
    cmp r6, r12
    add r0, r0, #4
    bge @L_02110aa4
    ldrsb lr, [sp, #2]
    add r3, r1, #2
    sub r6, r3, r2
    mov r3, lr, asr #2
    orr r3, r3, r5, lsl #4
    strb r3, [r1, #1]
    cmp r6, r12
    bge @L_02110aa4
    ldrsb r3, [sp, #3]
    orr r3, r3, lr, lsl #6
    strb r3, [r1, #2]
    add r1, r1, #3
    sub r6, r1, r2
    cmp r6, r12
    blt @L_021109bc
@L_02110aa4:
    mov r0, r6
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" s32 DWC_GetLastError(u8 *arg0)
{
    s32 t0;
    if ((s32)arg0 != 0) {
        t0 = *(s32 *)(stDwcLastError + 0x4);
        *(s32 *)(arg0) = t0;
    }
    return *(s32 *)(stDwcLastError);
}

extern "C" asm void DWC_GetLastErrorEx(void)
{
    cmp r0, #0
    ldrne r2, =stDwcLastError
    ldrne r2, [r2, #4]
    strne r2, [r0]
    cmp r1, #0
    beq @L_02110b98
    ldr r0, =stDwcLastError
    ldr r0, [r0]
    cmp r0, #0x15
    addls pc, pc, r0, lsl #2
    b @L_02110b90
    b @L_02110b90
    b @L_02110b70
    b @L_02110b50
    b @L_02110b50
    b @L_02110b50
    b @L_02110b50
    b @L_02110b54
    b @L_02110b60
    b @L_02110b50
    b @L_02110b70
    b @L_02110b68
    b @L_02110b68
    b @L_02110b68
    b @L_02110b78
    b @L_02110b80
    b @L_02110b88
    b @L_02110b80
    b @L_02110b88
    b @L_02110b80
    b @L_02110b88
    b @L_02110b68
    b @L_02110b5c
@L_02110b50:
    b @L_02110b80
@L_02110b54:
    mov r0, #3
    b @L_02110b94
@L_02110b5c:
    b @L_02110b88
@L_02110b60:
    mov r0, #4
    b @L_02110b94
@L_02110b68:
    mov r0, #1
    b @L_02110b94
@L_02110b70:
    mov r0, #7
    b @L_02110b94
@L_02110b78:
    mov r0, #5
    b @L_02110b94
@L_02110b80:
    mov r0, #6
    b @L_02110b94
@L_02110b88:
    mov r0, #2
    b @L_02110b94
@L_02110b90:
    mov r0, #0
@L_02110b94:
    str r0, [r1]
@L_02110b98:
    ldr r0, =stDwcLastError
    ldr r0, [r0]
    bx lr
}

extern "C" s32 DWC_ClearError(void)
{
    u8 *r0;
    r0 = (u8 *)stDwcLastError;
    if (*(s32 *)(r0) != 9) {
        *(s32 *)(r0) = 0;
        *(s32 *)(r0 + 0x4) = 0;
    }
    return (s32)r0;
}

extern "C" s32 DWCi_IsError(void)
{
    return (*(s32 *)(stDwcLastError) != 0 ? 1 : 0);
}

extern "C" asm s32 DWCi_SetError(...)
{
    ldr r2, =stDwcLastError
    ldr r3, [r2]
    cmp r3, #9
    stmneia r2, {r0, r1}
    bx lr
}

extern "C" void DWC_InitForProduction(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    OSi_ReferSymbol(0x2000BDC, arg1, arg2, arg3);
    DWCi_Init(1, arg0, arg1, arg2, arg3);
}

extern "C" asm s32 DWCi_Init(...)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    ldr r1, [sp, #0x20]
    mov r10, r0
    mov r0, r3
    mov r9, r2
    mov r7, #0
    bl DWCi_SetMemFunc
    bl OS_InitTick
    bl OS_InitAlarm
    bl RTC_Init
    mov r0, #2
    mov r1, #0x700
    bl DWC_Alloc
    movs r8, r0
    moveq r0, #4
    ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    bl DWC_BM_Init
    mov r5, r0
    bl DWC_Auth_CheckWiFiIDNeedCreate
    cmp r0, #0
    beq @L_02110c98
    mov r0, r8
    bl DWCi_AUTH_MakeWiFiID
    mov r7, #1
@L_02110c98:
    mov r6, #2
    mov r4, #0
    mov r0, r6
    mov r1, r8
    mov r2, r4
    bl DWC_Free
    cmp r5, #0
    bge @L_02110cc4
    cmp r7, #0
    moveq r6, #3
    b @L_02110cd0
@L_02110cc4:
    mov r6, #1
    cmp r7, #0
    moveq r6, r4
@L_02110cd0:
    mov r0, r10
    bl DWCi_Auth_InitInterface
    ldr r1, =dwci_gamecode
    mov r0, #1
    str r9, [r1]
    bl DWCi_Np_SetInitFlag
    mov r0, r6
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" void DWCi_Np_SetInitFlag(s32 arg0)
{
    *(s32 *)(dwci_gamecode + 0x4) = arg0;
}

extern "C" s32 DWCi_GetAllocateHeader(s32 arg0)
{
    return (arg0 - 0x20);
}

extern "C" s32 DWCi_SetAllocateHeader(u8 *arg0, s32 arg1)
{
    *(s32 *)(arg0 + 0x4) = arg1;
    *(s32 *)(arg0) = 0x4457434D;
    return (s32)(arg0 + 0x20);
}

extern "C" void DWCi_SetMemFunc(s32 arg0, s32 arg1)
{
    *(s32 *)(s_free + 0x4) = arg0;
    *(s32 *)(s_free) = arg1;
}

extern "C" void DWC_Alloc(s32 arg0, s32 arg1)
{
    DWC_AllocEx(arg0, arg1, 0x20);
}

extern "C" asm s32 DWC_AllocEx(...)
{
    stmdb sp!, {r4, lr}
    ldr r3, =s_free
    mov r4, r1
    ldr r3, [r3, #4]
    add r1, r4, #0x20
    blx r3
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r4, pc}
    mov r1, r4
    bl DWCi_SetAllocateHeader
    ldmia sp!, {r4, pc}
}

extern "C" asm s32 DWC_Free(...)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    cmp r1, #0
    ldmeqia sp!, {r4, pc}
    mov r0, r1
    bl DWCi_GetAllocateHeader
    mov r1, r0
    ldr r0, =s_free
    ldr r2, [r1, #4]
    ldr r3, [r0]
    mov r0, r4
    add r2, r2, #0x20
    blx r3
    ldmia sp!, {r4, pc}
}

extern "C" s32 func_ov014_02110db4(char *arg0, s32 arg1)
{
    s32 st[5];
    s32 r;
    ((s32 (*)(...))DWC_Auth_GetId)(st);
    if (st[4] == 0)
        return 0;
    if (((s32 (*)(...))DWC_Svl_Init)(DWC_Alloc, DWC_Free) == 0)
        return 0;
    if (((s32 (*)(...))strlen)(arg0) == 0)
        r = ((s32 (*)(...))func_ov014_0210ecac)(data_ov014_02125a84, arg1);
    else
        r = ((s32 (*)(...))func_ov014_0210ecac)(arg0, arg1);
    if (r != 0)
        return 1;
    ((s32 (*)(...))DWC_Svl_Cleanup)();
    return 0;
}

extern "C" s32 DWC_SVLProcess(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 r4;
    s32 v0 = DWC_Svl_Process(arg0, arg1, arg2, arg3);
    arg0 = (v0 - 3);
    r4 = v0;
    if ((u32)arg0 <= (u32)2) {
        DWC_Svl_Cleanup();
    }
    return r4;
}

extern "C" s32 func_ov014_02110e70(void)
{
    s32 r0;
    s32 v1;
    s32 t0;
    u8 *t1;
    u8 *t2;
    s32 t3;
    s32 t4;
    if (*(s32 *)(((u8 *)&data_ov014_02128dd8)) != 0) {
        OS_Terminate();
    }
    v1 = ((s32 (*)(...))DWC_Alloc)(4, 0x1E5C);
    *(s32 *)(((u8 *)&data_ov014_02128dd8)) = v1;
    r0 = v1;
    if (r0 == 0) {
        DWCi_SetError(9, -0x4E84);
        return 0;
    } else {
        MI_CpuFill8(r0, 0, 0x1E5C);
        t0 = ((*(s32 *)(((u8 *)&data_ov014_02128dd8)) + 0x84) + 0x1C00);
        MI_CpuCopy8((s32)((u8 *)&data_ov014_02125a8c), t0, 9);
        t1 = (u8 *)(*(s32 *)(((u8 *)&data_ov014_02128dd8)) + 0x1000);
        *(s32 *)(t1 + 0xC90) = (s32)((u8 *)&DWC_Alloc);
        t2 = (u8 *)(*(s32 *)(((u8 *)&data_ov014_02128dd8)) + 0x1000);
        *(s32 *)(t2 + 0xC94) = (s32)((u8 *)&DWC_Free);
        t3 = ((*(s32 *)(((u8 *)&data_ov014_02128dd8)) + 0xC50) + 0x1000);
        t4 = *(s32 *)(((u8 *)&data_ov014_02128dd8));
        DWC_Auth_Create(t3, t4);
        return 1;
    }
}

extern "C" asm void DWC_NASLoginProcess(void)
{
    stmdb sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0x1c4
    ldr r4, =data_ov014_02128dd8
    ldr r0, [r4]
    cmp r0, #0
    addeq sp, sp, #0x1c4
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, pc}
    bl DWC_Auth_GetError
    cmp r0, #0
    beq @L_02110f70
    cmp r0, #0x14
    beq @L_02110fe8
    cmp r0, #0x15
    beq @L_02110f7c
    b @L_02111010
@L_02110f70:
    add sp, sp, #0x1c4
    mov r0, #2
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_02110f7c:
    add r6, sp, #0
    mov r5, #0
    mov r0, r6
    mov r1, r5
    mov r2, #0x1c4
    bl MI_CpuFill8
    mov r0, r6
    bl DWC_Auth_GetResult
    bl DWC_Auth_Destroy
    ldr r1, [sp]
    ldr r0, =0x4e22
    cmp r1, r0
    ldr r1, [r4]
    bne @L_02110fcc
    add r0, r1, #0xc50
    add r0, r0, #0x1000
    bl DWC_Auth_Create
    add sp, sp, #0x1c4
    mov r0, #2
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_02110fcc:
    ldr r2, =0x1e5c
    mov r0, #4
    bl DWC_Free
    add sp, sp, #0x1c4
    str r5, [r4]
    mov r0, #3
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_02110fe8:
    bl DWC_Auth_Destroy
    ldr r1, [r4]
    ldr r2, =0x1e5c
    mov r0, #4
    bl DWC_Free
    mov r0, #0
    str r0, [r4]
    add sp, sp, #0x1c4
    mov r0, #5
    ldmia sp!, {r3, r4, r5, r6, pc}
@L_02111010:
    add r0, sp, #0
    bl DWC_Auth_GetResult
    bl DWC_Auth_Destroy
    mov r5, #4
    ldr r1, [r4]
    ldr r2, =0x1e5c
    mov r0, r5
    bl DWC_Free
    mov r2, #0
    ldr r1, [sp]
    mov r0, #2
    str r2, [r4]
    bl DWCi_SetError
    mov r0, r5
    add sp, sp, #0x1c4
    ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" void func_ov014_0211105c(void)
{
    DWC_Auth_Abort();
}

extern "C" asm void DWC_Auth_SetNasTimeDiff(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x3c
    mov r4, r0
    bl strlen
    mov r5, r0
    ldr r0, =data_ov014_02125af0
    bl strlen
    cmp r5, r0
    ldreqsb r0, [r4, #7]
    cmpeq r0, #0x20
    ldreqsb r0, [r4, #0xb]
    cmpeq r0, #0x20
    ldreqsb r0, [r4, #0x10]
    cmpeq r0, #0x20
    ldreqsb r0, [r4, #0x13]
    cmpeq r0, #0x3a
    ldreqsb r0, [r4, #0x16]
    cmpeq r0, #0x3a
    ldreqsb r0, [r4, #0x19]
    cmpeq r0, #0x20
    bne @L_02111250
    add r6, sp, #0x2c
    add r5, sp, #0x20
    mov r0, r6
    mov r1, r5
    bl RTC_GetDateTime
    cmp r0, #0
    bne @L_02111250
    mov r0, r6
    mov r1, r5
    bl RTC_ConvertDateTimeToSecond
    mov r5, r0
    mov r6, r1
    mvn r0, #0
    cmp r6, r0
    cmpeq r5, r0
    beq @L_02111250
    add r0, sp, #0
    mov r1, r4
    bl strcpy
    mov r4, #0
    ldr r7, =errno
    add r0, sp, #0xc
    str r4, [r7]
    strb r4, [sp, #7]
    strb r4, [sp, #0xb]
    strb r4, [sp, #0x10]
    strb r4, [sp, #0x13]
    strb r4, [sp, #0x16]
    strb r4, [sp, #0x19]
    bl atoi
    ldr r1, [r7]
    str r0, [sp, #0x2c]
    cmp r1, #0x22
    beq @L_02111250
    sub r1, r0, #0x7d0
    mov r0, #0xd
    ldr r8, =data_ov014_02125ac0
    str r1, [sp, #0x2c]
    str r0, [sp, #0x30]
    add r7, sp, #8
@L_0211115c:
    ldr r0, [r8, r4, lsl #2]
    mov r1, r7
    bl strcmp
    cmp r0, #0
    addeq r0, r4, #1
    streq r0, [sp, #0x30]
    beq @L_02111184
    add r4, r4, #1
    cmp r4, #0xc
    blt @L_0211115c
@L_02111184:
    ldr r0, [sp, #0x30]
    cmp r0, #0xc
    bhi @L_02111250
    ldr r7, =errno
    mov r4, #0
    add r0, sp, #5
    str r4, [r7]
    bl atoi
    ldr r1, [r7]
    str r0, [sp, #0x34]
    cmp r1, #0x22
    beq @L_02111250
    add r0, sp, #0x11
    str r4, [r7]
    bl atoi
    ldr r1, [r7]
    str r0, [sp, #0x20]
    cmp r1, #0x22
    beq @L_02111250
    add r0, sp, #0x14
    str r4, [r7]
    bl atoi
    ldr r1, [r7]
    str r0, [sp, #0x24]
    cmp r1, #0x22
    beq @L_02111250
    add r0, sp, #0x17
    str r4, [r7]
    bl atoi
    ldr r1, [r7]
    str r0, [sp, #0x28]
    cmp r1, #0x22
    beq @L_02111250
    add r0, sp, #0x2c
    add r1, sp, #0x20
    bl RTC_ConvertDateTimeToSecond
    sub r3, r4, #1
    mov r2, r3
    cmp r1, r3
    cmpeq r0, r2
    beq @L_02111250
    ldr r2, =data_ov014_02128ddc
    subs r0, r5, r0
    str r0, [r2, #0xc]
    sbc r0, r6, r1
    str r0, [r2, #0x10]
    stmib r2, {r5, r6}
    mov r0, #1
    str r0, [r2]
    add sp, sp, #0x3c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@L_02111250:
    mov r0, #0
    add sp, sp, #0x3c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" void DWCi_NdAlloc(s32 arg0, s32 arg1)
{
    DWC_AllocEx(10, arg0, arg1);
}

extern "C" void DWCi_NdFree(s32 arg0)
{
    DWC_Free(10, arg0, 0);
}

extern "C" void DWCi_NdCleanupCallback(void)
{
    OS_JoinThread(((*(s32 *)(s_userCallback + 0x18) + 0x1B8) + 0x800));
    DWCi_NdFree(*(s32 *)(s_userCallback + 0x18));
    *(s32 *)(s_userCallback + 0x18) = 0;
    OS_LockMutex((s32)s_dwcnd_mutexState, 0);
    *(s32 *)(s_userCallback + 0x14) = 3;
    *(s32 *)(s_userCallback + 0x10) = 4;
    OS_UnlockMutex((s32)s_dwcnd_mutexState, 4);
}

extern "C" asm void func_ov014_021112f4(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x2a0
    mov r4, #0x64
@L_02111300:
    bl DWC_SVLProcess
    cmp r0, #3
    beq @L_02111320
    cmp r0, #4
    beq @L_02111428
    cmp r0, #5
    beq @L_02111454
    b @L_0211146c
@L_02111320:
    ldr r4, [pc, #0x158]
    ldr r7, [r4, #0x18]
    add r0, r7, #0x48
    bl strlen
    mov r5, r0
    ldr r0, [pc, #0x148]
    bl strlen
    add r0, r5, r0
    cmp r0, #0xff
    bls @L_02111360
    mov r1, #8
    sub r2, r1, #9
    mov r0, #0
    bl NdCallback
    add sp, sp, #0x2a0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02111360:
    add r6, sp, #0x1a0
    ldr r2, [pc, #0x11c]
    mov r0, r6
    add r3, r7, #0x48
    mov r1, #0x100
    bl OS_SNPrintf
    ldr r7, [r4, #0x18]
    add r0, r7, #0x89
    bl strlen
    add r5, sp, #0x10
    mov r1, r0
    mov r2, r5
    add r0, r7, #0x89
    mov r3, #0x190
    bl DWC_Base64Encode
    cmp r0, #0
    bge @L_021113bc
    mov r1, #8
    sub r2, r1, #9
    mov r0, #0
    bl NdCallback
    add sp, sp, #0x2a0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_021113bc:
    ldr r0, [r4, #0x18]
    ldr r12, [pc, #0xc4]
    str r0, [sp]
    add r0, r0, #0x20
    str r0, [sp, #4]
    ldr r0, [pc, #0xb8]
    ldr r1, [pc, #0xb8]
    mov r2, r6
    mov r3, r5
    str r12, [sp, #8]
    bl DWCi_NdStartup
    cmp r0, #0
    mov r0, #0
    bne @L_02111408
    mov r1, #8
    sub r2, r1, #9
    bl NdCallback
    add sp, sp, #0x2a0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02111408:
    ldr r3, [r4, #0x18]
    mov r4, #1
    mov r1, r0
    sub r2, r0, #1
    str r4, [r3, #0x40]
    bl NdCallback
    add sp, sp, #0x2a0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02111428:
    add r0, sp, #0xc
    bl DWC_GetLastError
    ldr r1, [sp, #0xc]
    mov r0, #0xd
    bl DWCi_SetError
    mov r1, #3
    sub r2, r1, #4
    mov r0, #0
    bl NdCallback
    add sp, sp, #0x2a0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02111454:
    mov r1, #6
    sub r2, r1, #7
    mov r0, #0
    bl NdCallback
    add sp, sp, #0x2a0
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_0211146c:
    mov r0, r4
    bl OS_Sleep
    b @L_02111300
    dcd 0xe28dde2a
    dcd 0xe8bd80f8
    dcd s_userCallback
    dcd data_ov014_02125b10
    dcd data_ov014_02125b24
    dcd NdCallback
    dcd DWCi_NdAlloc
    dcd DWCi_NdFree
}

extern "C" s32 NdCallback(s32 arg0, s32 arg1, s32 arg2)
{
    s32 r1;
    s32 v2;
    if (arg1 != 0) {
        DWCi_NdSetError(arg1, arg2);
    }
    OS_LockMutex((u8 *)((u8 *)&s_dwcnd_mutexState));
    *(s32 *)(((u8 *)&s_userCallback) + 0x14) = 3;
    *(s32 *)(((u8 *)&s_userCallback) + 0x10) = arg0;
    *(s32 *)(((u8 *)&s_userCallback) + 0xC) = arg1;
    *(s32 *)(((u8 *)&s_userCallback) + 0x8) = arg2;
    r1 = 3;
    if (arg1 != 0) {
        *(s32 *)(((u8 *)&s_userCallback) + 0x14) = 4;
        r1 = 4;
    }
    v2 = OS_UnlockMutex((u8 *)((u8 *)&s_dwcnd_mutexState), r1);
    return v2;
}

extern "C" asm void func_ov014_021114f8(void)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #8
    mov r7, r0
    mov r6, r1
    mov r5, r2
    bl DWCi_IsError
    cmp r0, #0
    addne sp, sp, #8
    movne r0, #0
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
    ldr r4, =s_dwcnd_mutexState
    mov r0, r4
    bl OS_InitMutex
    mov r0, r4
    bl OS_LockMutex
    ldr r8, =s_userCallback
    ldr r0, [r8, #0x14]
    cmp r0, #0
    beq @L_02111568
    mov r5, #0
    mov r1, r5
    mov r0, #2
    bl DWCi_NdSetError
    mov r0, r4
    bl OS_UnlockMutex
    add sp, sp, #8
    mov r0, r5
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_02111568:
    mov r1, #2
    mov r0, r4
    str r1, [r8, #0x14]
    bl OS_UnlockMutex
    mov r4, #0
    str r4, [r8, #0x10]
    str r4, [r8, #0xc]
    str r4, [r8, #8]
    ldr r9, =0xa78
    str r7, [r8]
    mov r0, r9
    str r4, [r8, #4]
    mov r1, #0x20
    bl DWCi_NdAlloc
    str r0, [r8, #0x18]
    cmp r0, #0
    mov r1, r4
    bne @L_021115c4
    mov r0, #1
    bl DWCi_NdSetError
    add sp, sp, #8
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_021115c4:
    mov r2, r9
    bl MI_CpuFill8
    ldr r0, [r8, #0x18]
    mov r7, #0x1f
    str r4, [r0, #0x40]
    ldr r0, [r8, #0x18]
    mov r1, r6
    mov r2, r7
    bl strncpy
    ldr r0, [r8, #0x18]
    mov r1, r5
    mov r2, r7
    add r0, r0, #0x20
    bl strncpy
    ldr r1, [r8, #0x18]
    ldr r0, =data_ov014_02125b38
    add r1, r1, #0x44
    bl func_ov014_02110db4
    cmp r0, #0
    bne @L_0211162c
    ldr r0, [r8, #0x18]
    bl DWCi_NdFree
    add sp, sp, #8
    mov r0, r4
    str r4, [r8, #0x18]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
@L_0211162c:
    ldr r1, [r8, #0x18]
    mov r0, #0x800
    add r3, r1, #0x1b8
    str r0, [sp]
    mov r0, #0x10
    ldr r1, =func_ov014_021112f4
    mov r2, r4
    str r0, [sp, #4]
    add r0, r3, #0x800
    add r3, r3, #0x800
    bl OS_CreateThread
    ldr r0, [r8, #0x18]
    add r0, r0, #0x1b8
    add r0, r0, #0x800
    bl OS_WakeupThreadDirect
    mov r0, #1
    add sp, sp, #8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" s32 DWC_NdProcess(void)
{
    s32 r0;
    s32 r1;
    s32 r2;
    s32 r3;
    s32 r4;
    s32 r5;
    s32 v1;
    s32 v2;
    s32 v3;
    s32 t0;
    s32 t1;
    s32 t2;
    r4 = 0;
    r5 = 0;
    OS_LockMutex((u8 *)((u8 *)&s_dwcnd_mutexState));
    r2 = *(s32 *)(((u8 *)&s_userCallback) + 0x10);
    if ((r2 == 0 && *(s32 *)(((u8 *)&s_userCallback) + 0x14) == 4)) {
        r1 = *(s32 *)(((u8 *)&s_userCallback) + 0x4);
        if (r1 == 0) {
            *(s32 *)(((u8 *)&s_userCallback) + 0x4) = 1;
            r4 = 1;
        }
    } else {
        r1 = (*(s32 *)(((u8 *)&s_userCallback) + 0x14) - 3);
        if ((u32)r1 <= (u32)1) {
            *(s32 *)(((u8 *)&s_userCallback) + 0x14) = 1;
            r4 = 1;
        }
    }
    if (r2 == 4) {
        *(s32 *)(((u8 *)&s_userCallback) + 0x14) = 0;
        *(s32 *)(((u8 *)&s_userCallback) + 0x10) = 0;
        r1 = 0;
        r5 = 1;
    }
    v1 = OS_UnlockMutex((u8 *)((u8 *)&s_dwcnd_mutexState), r1, r2);
    if (*(s32 *)(((u8 *)&s_userCallback)) == 0)
        return v1;
    r0 = v1;
    r3 = *(s32 *)(((u8 *)&s_userCallback));
    if (r5 != 0) {
        v2 = ((s32 (*)(...))r3)(4, 0, (0 - 1));
        return v2;
    } else {
        if (r4 == 0)
            return r0;
        t0 = *(s32 *)(((u8 *)&s_userCallback) + 0x10);
        t1 = *(s32 *)(((u8 *)&s_userCallback) + 0xC);
        t2 = *(s32 *)(((u8 *)&s_userCallback) + 0x8);
        v3 = ((s32 (*)(...))r3)(t0, t1, t2);
        return v3;
    }
}

extern "C" s32 DWC_NdCleanupAsync(void)
{
    u8 *r4;
    s32 r5;
    if (*(s32 *)(s_userCallback + 0x14) == 0)
        return 0;
    OS_LockMutex((s32)s_dwcnd_mutexState);
    r4 = (u8 *)s_userCallback;
    r5 = (s32)s_dwcnd_mutexState;
    if (*(s32 *)(r4 + 0x14) == 0) {
        OS_UnlockMutex(r5);
        return 0;
    } else {
        *(s32 *)(r4 + 0x14) = 2;
        OS_UnlockMutex(r5, 2);
        if (*(s32 *)(*(u8 * *)(r4 + 0x18) + 0x40) == 0) {
            DWCi_NdCleanupCallback();
        } else {
            DWCi_NdCleanupAsync((s32)DWCi_NdCleanupCallback);
        }
        return 1;
    }
}

extern "C" s32 DWC_NdSetAttr(s32 arg0, s32 arg1, s32 arg2)
{
    s32 v0;
    s32 v1;
    v0 = DWCi_IsError();
    if (v0 != 0) {
        return 0;
    } else {
        v1 = ((s32 (*)(...))DWCi_NdSetAttr)(arg0, arg1, arg2);
        return v1;
    }
}

extern "C" s32 DWC_NdGetFileListNumAsync(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    u8 *r4;
    s32 r5;
    s32 r6;
    s32 v0 = DWCi_IsError();
    if (v0 != 0)
        return 0;
    OS_LockMutex((s32)s_dwcnd_mutexState);
    r4 = (u8 *)s_userCallback;
    r5 = (s32)s_dwcnd_mutexState;
    r6 = arg0;
    if (*(s32 *)(r4 + 0x14) != 1) {
        DWCi_NdSetError(2, 0);
        OS_UnlockMutex(r5);
        return 0;
    }
    *(s32 *)(r4 + 0x14) = 2;
    OS_UnlockMutex(r5, 2);
    s32 v5 = DWCi_NdGetFileListNumAsync(r6);
    if (v5 != 0)
        return 1;
    OS_LockMutex(r5);
    *(s32 *)(r4 + 0x14) = 1;
    OS_UnlockMutex(r5, 1);
    return 0;
}

extern "C" s32 DWC_NdGetFileListAsync(s32 arg0, s32 arg1, s32 arg2)
{
    if (((s32 (*)(...))DWCi_IsError)() != 0)
        return 0;
    ((s32 (*)(...))OS_LockMutex)(s_dwcnd_mutexState);
    if (*(s32 *)((u8 *)s_userCallback + 0x14) != 1) {
        ((s32 (*)(...))DWCi_NdSetError)(2, 0);
        ((s32 (*)(...))OS_UnlockMutex)(s_dwcnd_mutexState);
        return 0;
    }
    *(s32 *)((u8 *)s_userCallback + 0x14) = 2;
    ((s32 (*)(...))OS_UnlockMutex)(s_dwcnd_mutexState);
    ((s32 (*)(...))MI_CpuFill8)(arg0, 0, arg2 * 0xB0);
    if (((s32 (*)(...))DWCi_NdGetFileListAsync)(arg0, arg1, arg2) != 0)
        return 1;
    ((s32 (*)(...))OS_LockMutex)(s_dwcnd_mutexState);
    *(s32 *)((u8 *)s_userCallback + 0x14) = 1;
    ((s32 (*)(...))OS_UnlockMutex)(s_dwcnd_mutexState);
    return 0;
}

extern "C" s32 DWC_NdGetFileAsync(s32 arg0, s32 arg1, s32 arg2)
{
    if (((s32 (*)(...))DWCi_IsError)() != 0)
        return 0;
    ((s32 (*)(...))OS_LockMutex)(s_dwcnd_mutexState);
    if (*(s32 *)((u8 *)s_userCallback + 0x14) != 1) {
        ((s32 (*)(...))DWCi_NdSetError)(2, 0);
        ((s32 (*)(...))OS_UnlockMutex)(s_dwcnd_mutexState);
        return 0;
    }
    *(s32 *)((u8 *)s_userCallback + 0x14) = 2;
    ((s32 (*)(...))OS_UnlockMutex)(s_dwcnd_mutexState);
    if (((s32 (*)(...))DWCi_NdGetFileAsync)(arg0, arg1, arg2, 0) != 0)
        return 1;
    ((s32 (*)(...))OS_LockMutex)(s_dwcnd_mutexState);
    *(s32 *)((u8 *)s_userCallback + 0x14) = 1;
    ((s32 (*)(...))OS_UnlockMutex)(s_dwcnd_mutexState);
    return 0;
}

extern "C" s32 DWC_NdCancelAsync(void)
{
    s32 r0;
    s32 v0;
    s32 v4;
    v0 = DWCi_IsError();
    if (v0 != 0) {
        return 0;
    } else {
        OS_LockMutex((u8 *)((u8 *)&s_dwcnd_mutexState));
        if (*(s32 *)(((u8 *)&s_userCallback) + 0x14) != 2) {
            OS_UnlockMutex((u8 *)((u8 *)&s_dwcnd_mutexState));
            return 0;
        } else {
            OS_UnlockMutex((u8 *)((u8 *)&s_dwcnd_mutexState));
            v4 = DWCi_NdCancelAsync();
            if (v4 != 0) {
                r0 = 1;
            } else {
                r0 = 0;
            }
            return r0;
        }
    }
}

extern "C" s32 DWC_NdGetProgress(s32 arg0, s32 arg1)
{
    s32 v0;
    s32 v4;
    v0 = DWCi_IsError();
    if (v0 != 0) {
        return 0;
    } else {
        OS_LockMutex((u8 *)((u8 *)&s_dwcnd_mutexState));
        if (*(s32 *)(((u8 *)&s_userCallback) + 0x14) != 2) {
            OS_UnlockMutex((u8 *)((u8 *)&s_dwcnd_mutexState));
            return 0;
        } else {
            OS_UnlockMutex((u8 *)((u8 *)&s_dwcnd_mutexState));
            v4 = DWCi_NdGetProgress(arg0, arg1);
            return v4;
        }
    }
}

extern "C" asm s32 DWCi_Ndi_freeAttr(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r7, #0
    ldr r6, =DWCi_Ndi_dlattr
    ldr r4, =DWCi_Ndi_dlcallback
    mov r5, r7
@L_02111afc:
    ldr r0, [r6, r7, lsl #2]
    cmp r0, #0
    beq @L_02111b14
    ldr r1, [r4, #0x14]
    blx r1
    str r5, [r6, r7, lsl #2]
@L_02111b14:
    add r7, r7, #1
    cmp r7, #3
    blt @L_02111afc
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm s32 setAttr(...)
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r1
    ldrsb r1, [r6]
    mov r7, r0
    cmp r1, #0
    beq @L_02111bf0
    mov r0, r6
    bl DWCi_Ndi_strlen
    cmp r0, #0xa
    ble @L_02111b6c
    mov r4, #0
    mov r1, r4
    mov r0, #5
    bl DWCi_NdSetError
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02111b6c:
    mov r0, r6
    bl DWCi_Ndi_strlen
    mov r5, r0
    cmp r5, #0xa
    ble @L_02111b98
    mov r4, #0
    mov r1, r4
    mov r0, #5
    bl DWCi_NdSetError
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02111b98:
    bl DWCi_Ndi_getEncodeLenBASE64
    ldr r1, =DWCi_Ndi_dlcallback
    add r0, r0, #1
    ldr r2, [r1, #4]
    mov r1, #4
    blx r2
    ldr r4, =DWCi_Ndi_dlattr
    cmp r0, #0
    str r0, [r4, r7, lsl #2]
    bne @L_02111bd8
    mov r4, #0
    mov r1, r4
    mov r0, #1
    bl DWCi_NdSetError
    mov r0, r4
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
@L_02111bd8:
    mov r1, r6
    mov r2, r5
    bl DWCi_Ndi_encodeBASE64
    ldr r1, [r4, r7, lsl #2]
    mov r2, #0
    strb r2, [r1, r0]
@L_02111bf0:
    mov r0, #1
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" s32 DWCi_NdSetAttr(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    s32 r4;
    s32 r5;
    s32 r6;
    DWCi_Ndi_lockGlobal(arg0, arg1, arg2, arg3);
    DWCi_Ndi_freeAttr();
    s32 v2 = setAttr(0, arg0);
    arg0 = v2;
    r5 = arg2;
    r6 = arg1;
    if (arg0 != 0) {
        s32 v3 = setAttr(1, r6);
        arg0 = v3;
        r4 = 1;
        if (arg0 != 0) {
            s32 v4 = setAttr(2, r5);
            arg0 = v4;
            if (arg0 != 0) {
                DWCi_Ndi_unlockGlobal();
                return r4;
            }
        }
    }
    DWCi_Ndi_freeAttr();
    DWCi_Ndi_unlockGlobal();
    return 0;
}

extern "C" s32 getNchar(char *arg0, char *arg1, s32 arg2)
{
    s32 i;
    s32 n = 0;
    for (i = 0; i < arg2; i++) {
        if (*arg1 != 0) {
            *arg0++ = *arg1;
            n++;
            arg1++;
        } else {
            *arg0++ = 0;
        }
    }
    return n;
}
