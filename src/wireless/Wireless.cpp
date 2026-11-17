#include "wireless/Wireless.hpp"
#include "system/GameHeap.hpp"
#include "nitro/mi.h"
#include "nitro/os.h"

extern "C" void DC_InvalidateRange(void);
extern "C" int func_020136b4(void *buffer, WMCallbackFunc callback, u16 dma);     // starts WM
extern "C" void MI_CpuFill(void *dest, u32 data, u32 size);
extern "C" int WM_StartDataSharing(void *dataSharing, u16 port, u16 aidBitmap, u16 dataLength, BOOL doubleMode);   // starts data sharing
extern "C" void WM_GetLinkLevel(void);
extern "C" int WM_End(WMCallbackFunc callback);         // ends WM
extern "C" int WM_StepDataSharing(void *dataSharing, int, void *dataSet);   // steps data sharing
extern "C" u16 WM_GetNextTgid(void);                         // the next TGID
extern "C" u16 WM_GetDispersionBeaconPeriod(void);                         // the beacon period
extern "C" int WM_SetParentParameter(WMCallbackFunc callback, WMParentParam *param);   // sets the parent parameters
extern "C" u16 WM_GetDispersionScanPeriod(void);                         // the scan time per channel
extern "C" int WM_StartScanEx(WMCallbackFunc callback, WMScanExParam *param);   // scans
extern "C" int WM_StartConnectEx(WMCallbackFunc callback, WMBssDesc *parent, u8 *ssid, u16 powerSave, u16 authMode);   // connects
extern "C" void DC_WaitWriteBufferEmpty(void);                        // waits for the write buffer
extern "C" void _ZN8GameHeap4FreeEPv(void);
extern "C" void _ZN8GameHeap5AllocEiii(void);
extern "C" void WM_EndDataSharing(void);
extern "C" void memcmp(void);
extern "C" int WM_SetPortCallback(u16 port, WMCallbackFunc callback, void *arg);   // sets a port callback
extern "C" u16 func_020131c0(void);                         // the allowed channels
extern "C" int WM_Reset(WMCallbackFunc callback);         // resets
extern "C" int WM_StartParent(WMCallbackFunc callback);         // starts the parent
extern "C" int WM_EndParent(WMCallbackFunc callback);         // ends the parent
extern "C" int WM_EndScan(WMCallbackFunc callback);         // ends the scan
extern "C" int WM_Disconnect(WMCallbackFunc callback, u16 aid);   // disconnects
extern "C" int WM_StartMP(WMCallbackFunc callback, void *receiveBuffer, u16 receiveSize, void *sendBuffer, u16 sendSize, int frequency);   // starts MP
extern "C" int WM_SetMPParentSize(WMCallbackFunc callback, u16);
extern "C" int WM_SetMPTiming(WMCallbackFunc callback, u16, u16);
extern "C" int WM_SetMPDataToPortEx(WMCallbackFunc callback, void *arg, const void *data, u16 size, u16 destBitmap, u16 port, u16 priority);  // sends data to a port
extern "C" int WM_EndMP(WMCallbackFunc callback);         // ends MP
extern "C" void *WM_GetSharedDataAddress(void *dataSharing, void *dataSet, u16 aid);   // a player's shared data
extern "C" int WM_EndKeySharing(void *keySharing);              // ends key sharing
extern "C" int WM_SetWEPKey(WMCallbackFunc callback, u16, const void *key);
extern "C" int WM_SetGameInfo(WMCallbackFunc callback, void *userGameInfo, u16 length, u32 ggid, u16 tgid, u8 flags);  // sets the game info
extern "C" int WM_MeasureChannel(WMCallbackFunc callback, u16 ccaMode, u16 edThreshold, u16 channel, u16 measureTime);  // measures a channel

void Wireless::func_0203c0ec()
{
}

void Wireless::func_0203c0f0()
{
}

void Wireless::func_0203c0f4(GameHeap *heap)
{
    this->heap = heap;
}

// memory for the WM library: from the heap, or from the alloc callback
void *Wireless::func_0203c0fc(u32 size)
{
    if (heap != NULL) {
        return heap->Alloc(size, 6, TRUE);
    }
    if (alloc == NULL) {
        return NULL;
    }
    return alloc(size);
}

void Wireless::func_0203c13c(void *ptr)
{
    if (heap != NULL) {
        heap->Free(ptr);
        return;
    }
    if (free == NULL) {
        return;
    }
    free(ptr);
}

// starts WM for a game of numPlayers players sending size bytes each
// (nonmatching: the buffer sizes are computed in another order)
#ifdef NONMATCHING
BOOL Wireless::func_0203c170(u32 ggid, u16 size, u16 numPlayers)
{
    u32 sendBytes;
    u32 receiveBytes;
    u32 bytes;

    if (data_020c4588.instance != NULL) {
        return TRUE;
    }
    if (heap == NULL && (alloc == NULL || free == NULL)) {
        return FALSE;
    }

    parentMaxSize = size * numPlayers + 4;
    childMaxSize = size;
    maxEntry = numPlayers;
    if (parentMaxSize > 0x200) {
        return FALSE;
    }

    MI_CpuFill8(&unk_360, 0, 6);
    MI_CpuFill8(&scanParam, 0, 0x1078);
    systemBuffer = func_0203c0fc(0xF20);
    if (systemBuffer == NULL) {
        return FALSE;
    }
    if (func_020136b4((void *)(((u32)systemBuffer + 0x1F) & ~0x1F), func_0203c444, 2) != WM_ERRCODE_OPERATING) {
        return FALSE;
    }

    MI_CpuFill8(unk_2444, 0, sizeof(unk_2444));
    parentParam.userGameInfoLength = 0;
    parentParam.ggid = ggid;
    parentParam.userGameInfo = NULL;
    data_020c4588.instance = this;

    sendBytes = (parentMaxSize + 0x23) & ~0x1F;
    receiveBytes = (childMaxSize + 0x21) & ~0x1F;
    if (sendBytes < receiveBytes) {
        sendBytes = receiveBytes;
    }
    error = 0;
    bytes = (sendBytes + 0x3F) & ~0x3F;
    state = WIRELESS_STATE_NONE;
    sendBuffer = func_0203c0fc(bytes + 0x20);
    sendSize = bytes;
    MI_CpuFill(sendBuffer, 0, bytes);

    receiveBytes = (((childMaxSize + 0xE) * (maxEntry - 1) + 0x29) & ~0x1F) * 2;
    sendBytes = ((parentMaxSize + 0x55) & ~0x1F) * 2;
    if (receiveBytes < sendBytes) {
        receiveBytes = sendBytes;
    }
    bytes = (receiveBytes + 0x3F) & ~0x3F;
    receiveBuffer = func_0203c0fc(bytes + 0x20);
    receiveSize = bytes;
    MI_CpuFill(receiveBuffer, 0, bytes);

    if (sendBuffer != NULL && receiveBuffer != NULL) {
        data_020c4588.receive = NULL;
        gameInfoFlags = TRUE;
        return TRUE;
    }
    return FALSE;
}
#else
asm BOOL Wireless::func_0203c170(u32 ggid, u16 size, u16 numPlayers)
{
    stmdb sp!, {r4, r5, r6, lr}
    ldr r4, =data_020c4588
    mov r6, r0
    ldr r0, [r4]
    mov r5, r1
    cmp r0, #0
    mov r4, #0
    movne r0, #1
    ldmneia sp!, {r4, r5, r6, pc}
    ldr r0, [r6]
    cmp r0, #0
    bne @L_0203c1b8
    ldr r0, [r6, #0x240]
    cmp r0, #0
    ldrne r0, [r6, #0x244]
    cmpne r0, #0
    moveq r0, #0
    ldmeqia sp!, {r4, r5, r6, pc}
@L_0203c1b8:
    mul r1, r2, r3
    add r0, r6, #0x2400
    add r1, r1, #4
    strh r1, [r0, #0x64]
    ldrh r1, [r0, #0x64]
    strh r2, [r0, #0x66]
    strh r3, [r0, #0x5e]
    cmp r1, #0x200
    movhi r0, #0
    ldmhiia sp!, {r4, r5, r6, pc}
    mov r1, r4
    add r0, r6, #0x360
    mov r2, #6
    bl MI_CpuFill8
    ldr r2, =0x1078
    mov r1, r4
    add r0, r6, #0x380
    bl MI_CpuFill8
    mov r0, r6
    mov r1, #0xf20
    bl func_0203c0fc
    str r0, [r6, #0x20c]
    cmp r0, #0
    moveq r0, r4
    ldmeqia sp!, {r4, r5, r6, pc}
    add r0, r0, #0x1f
    ldr r1, =func_0203c444
    bic r0, r0, #0x1f
    mov r2, #2
    bl func_020136b4
    cmp r0, #2
    movne r0, r4
    ldmneia sp!, {r4, r5, r6, pc}
    add r0, r6, #0x44
    mov r1, r4
    add r0, r0, #0x2400
    mov r2, #0x18
    bl MI_CpuFill8
    add r0, r6, #0x300
    strh r4, [r0, #0x24]
    ldr r1, =data_020c4588
    str r5, [r6, #0x328]
    str r4, [r6, #0x320]
    str r6, [r1]
    add r1, r6, #0x2400
    ldrh r3, [r1, #0x64]
    ldrh r2, [r1, #0x66]
    add r0, r6, #0x2000
    add r3, r3, #0x23
    add r2, r2, #0x21
    bic r3, r3, #0x1f
    bic r2, r2, #0x1f
    cmp r3, r2
    movlt r3, r2
    str r4, [r0, #0x440]
    add r0, r3, #0x3f
    bic r5, r0, #0x3f
    strh r4, [r1, #0x6a]
    mov r0, r6
    add r1, r5, #0x20
    bl func_0203c0fc
    mov r2, r5
    mov r1, #0
    str r0, [r6, #0x204]
    str r5, [r6, #0x238]
    bl MI_CpuFill
    add r0, r6, #0x2400
    ldrh r2, [r0, #0x66]
    ldrh r1, [r0, #0x5e]
    ldrh r0, [r0, #0x64]
    add r2, r2, #0xe
    sub r1, r1, #1
    mul r1, r2, r1
    add r1, r1, #0x29
    bic r1, r1, #0x1f
    add r0, r0, #0x55
    bic r0, r0, #0x1f
    mov r1, r1, lsl #1
    cmp r1, r0, lsl #1
    mov r0, r0, lsl #1
    movlt r1, r0
    add r0, r1, #0x3f
    bic r5, r0, #0x3f
    mov r0, r6
    add r1, r5, #0x20
    bl func_0203c0fc
    mov r1, r4
    mov r2, r5
    str r0, [r6, #0x208]
    str r5, [r6, #0x23c]
    bl MI_CpuFill
    ldr r0, [r6, #0x204]
    cmp r0, #0
    ldrne r0, [r6, #0x208]
    cmpne r0, #0
    ldrne r1, =data_020c4588
    moveq r0, #0
    movne r0, #1
    strne r4, [r1, #4]
    strneb r0, [r6, #0x236]
    ldmia sp!, {r4, r5, r6, pc}
}
#endif

void Wireless::func_0203c358()
{
    WM_GetLinkLevel();
}

void Wireless::func_0203c364(BOOL flag)
{
    if (flag) {
        gameInfoFlags |= 1;
    } else {
        gameInfoFlags &= ~1;
    }
    WM_SetGameInfo(func_0203c41c, parentParam.userGameInfo, parentParam.userGameInfoLength,
        parentParam.ggid, tgid, gameInfoFlags);
}

// sets the game info sent in the beacons
void Wireless::func_0203c3bc(void *info, u16 length)
{
    parentParam.userGameInfo = info;
    parentParam.userGameInfoLength = length;
    if (!(flags & 2)) {
        return;
    }
    WM_SetGameInfo(func_0203c41c, parentParam.userGameInfo, parentParam.userGameInfoLength,
        parentParam.ggid, tgid, gameInfoFlags);
}

void Wireless::func_0203c41c(void *arg)
{
}

// the parent found at this index of the scan, NULL if there is none
WMBssDesc *Wireless::func_0203c420(int index)
{
    return (bssMask & (1 << index)) == 0 ? NULL : &bss[index];
}

void Wireless::func_0203c444(void *arg)
{
    if (data_020c4588.instance == NULL) {
        return;
    }
    if (((WMCallback *)arg)->errcode != WM_ERRCODE_SUCCESS) {
        data_020c4588.instance->state = WIRELESS_STATE_ERROR;
        return;
    }
    if (WM_SetIndCallback(func_0203c4a4) != WM_ERRCODE_SUCCESS) {
        data_020c4588.instance->state = WIRELESS_STATE_ERROR;
    } else {
        data_020c4588.instance->state = WIRELESS_STATE_IDLE;
    }
}

void Wireless::func_0203c4a4(void *arg)
{
}

BOOL Wireless::func_0203c4a8()
{
    state = WIRELESS_STATE_BUSY;
    return WM_Reset(func_0203c4d4) == WM_ERRCODE_OPERATING;
}

void Wireless::func_0203c4d4(void *arg)
{
    if (data_020c4588.instance == NULL) {
        return;
    }
    if (((WMCallback *)arg)->errcode != WM_ERRCODE_SUCCESS) {
        data_020c4588.instance->state = WIRELESS_STATE_ERROR;
        data_020c4588.instance->error = ((WMCallback *)arg)->errcode;
        return;
    }
    data_020c4588.instance->state = WIRELESS_STATE_IDLE;
    data_020c4588.instance->flags &= ~2;
}

asm void Wireless::func_0203c540()
{
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    add r5, r4, #0x2400
    ldrh r1, [r5, #0x6a]
    cmp r1, #6
    addls pc, pc, r1, lsl #2
    b @L_0203c5e8
    b @L_0203c5e8
    b @L_0203c578
    b @L_0203c5bc
    b @L_0203c57c
    b @L_0203c5a8
    b @L_0203c584
    b @L_0203c594
@L_0203c578:
    ldmia sp!, {r4, r5, r6, pc}
@L_0203c57c:
    bl func_0203d8dc
    b @L_0203c618
@L_0203c584:
    bl func_0203cc48
    cmp r0, #0
    beq @L_0203c618
    b @L_0203c608
@L_0203c594:
    add r0, r4, #0x1400
    bl WM_EndDataSharing
    cmp r0, #0
    beq @L_0203c5a8
    b @L_0203c608
@L_0203c5a8:
    mov r0, r4
    bl func_0203cc80
    cmp r0, #0
    bne @L_0203c618
    b @L_0203c608
@L_0203c5bc:
    cmp r1, #1
    ldmeqia sp!, {r4, r5, r6, pc}
    add r4, r4, #0x6a
    mov r6, #2
@L_0203c5cc:
    mov r1, r6
    add r0, r4, #0x2400
    bl DC_FlushRange
    ldrh r0, [r5, #0x6a]
    cmp r0, #1
    bne @L_0203c5cc
    ldmia sp!, {r4, r5, r6, pc}
@L_0203c5e8:
    add r0, r4, #0x2400
    ldrh r0, [r0, #0x6c]
    tst r0, #2
    mov r0, r4
    beq @L_0203c610
    bl func_0203cc80
    cmp r0, #0
    bne @L_0203c618
@L_0203c608:
    mov r0, r4
    b @L_0203c610
@L_0203c610:
    bl func_0203c4a8
    mov r6, r0
@L_0203c618:
    cmp r6, #0
    addne r5, r4, #0x2400
    ldrneh r0, [r5, #0x6a]
    cmpne r0, #1
    ldmeqia sp!, {r4, r5, r6, pc}
    add r4, r4, #0x6a
    mov r6, #2
@L_0203c634:
    mov r1, r6
    add r0, r4, #0x2400
    bl DC_FlushRange
    ldrh r0, [r5, #0x6a]
    cmp r0, #1
    bne @L_0203c634
    ldmia sp!, {r4, r5, r6, pc}
}

void Wireless::func_0203c650(void *arg)
{
    if (((WMCallback *)arg)->errcode != WM_ERRCODE_SUCCESS) {
        data_020c4588.instance->state = WIRELESS_STATE_ERROR;
    } else {
        data_020c4588.instance->state = WIRELESS_STATE_NONE;
    }
}

// ends wireless play and frees the buffers
BOOL Wireless::func_0203c67c()
{
    if (state != WIRELESS_STATE_IDLE) {
        return FALSE;
    }
    if (WM_End(func_0203c650) != WM_ERRCODE_OPERATING) {
        return FALSE;
    }
    while (state == WIRELESS_STATE_IDLE) {
        DC_FlushRange(&state, sizeof(state));
    }
    if (data_020c4588.instance->state == WIRELESS_STATE_ERROR) {
        return FALSE;
    }

    if (sendBuffer != NULL) {
        func_0203c13c(sendBuffer);
        sendBuffer = NULL;
    }
    if (receiveBuffer != NULL) {
        func_0203c13c(receiveBuffer);
        receiveBuffer = NULL;
    }
    if (systemBuffer != NULL) {
        func_0203c13c(systemBuffer);
        systemBuffer = NULL;
    }
    data_020c4588.instance = NULL;
    return TRUE;
}

// starts MP communication with the send and receive buffers
BOOL Wireless::func_0203c75c()
{
    int result;

    if (flags & 2) {
        return TRUE;
    }
    result = WM_StartMP(func_0203c7e0, (void *)(((u32)receiveBuffer + 0x1F) & ~0x1F), receiveSize,
        (void *)(((u32)sendBuffer + 0x1F) & ~0x1F), sendSize, 1);
    if (result != WM_ERRCODE_OPERATING) {
        error = result;
        return FALSE;
    }
    return TRUE;
}

// (the MP events)
// (nonmatching: the error code switch is laid out differently)
#ifdef NONMATCHING
void Wireless::func_0203c7e0(void *arg)
{
    WMStartMPCallback *callback = (WMStartMPCallback *)arg;
    int result;

    if (data_020c4588.instance == NULL) {
        return;
    }

    switch (callback->errcode) {
    case WM_ERRCODE_SUCCESS:
        switch (callback->state) {
        case WM_STATECODE_MP_START:
            data_020c4588.instance->flags |= 2;
            if (data_020c4588.instance->connectMode & 1) {
                if (data_020c4588.instance->state != WIRELESS_STATE_KEY_SHARING) {
                    result = WM_StartKeySharing(data_020c4588.instance->keySharing, 13);
                    if (result != WM_ERRCODE_SUCCESS) {
                        data_020c4588.instance->state = WIRELESS_STATE_ERROR;
                        data_020c4588.instance->error = result;
                    }
                    data_020c4588.instance->state = WIRELESS_STATE_KEY_SHARING;
                    return;
                }
            } else if (data_020c4588.instance->connectMode & 2) {
                result = WM_StartDataSharing(data_020c4588.instance->dataSharing, 13,
                    (1 << data_020c4588.instance->maxEntry) - 1, data_020c4588.instance->childMaxSize, TRUE);
                if (result == WM_ERRCODE_SUCCESS) {
                    data_020c4588.instance->state = WIRELESS_STATE_DATA_SHARING;
                    return;
                }
                data_020c4588.instance->state = WIRELESS_STATE_ERROR;
                data_020c4588.instance->error = result;
                return;
            }
            data_020c4588.instance->state = WIRELESS_STATE_CONNECTED;
            break;
        case 11:
        case 12:
        case 13:
            break;
        }
        break;
    case 9:
    case 13:
    case WM_ERRCODE_SEND_FAILED:
        break;
    default:
        data_020c4588.instance->state = WIRELESS_STATE_ERROR;
        data_020c4588.instance->error = callback->errcode;
        break;
    }
}
#else
asm void Wireless::func_0203c7e0(void *arg)
{
    stmdb sp!, {r3, r4, lr}
    sub sp, sp, #4
    ldr r4, =data_020c4588
    ldr r2, [r4]
    cmp r2, #0
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, pc}
    ldrh r1, [r0, #2]
    cmp r1, #0
    bgt @L_0203c810
    beq @L_0203c858
    b @L_0203c830
@L_0203c810:
    cmp r1, #0xf
    bgt @L_0203c830
    cmp r1, #9
    blt @L_0203c830
    cmpne r1, #0xd
    cmpne r1, #0xf
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, pc}
@L_0203c830:
    add r1, r2, #0x2400
    mov r2, #9
    strh r2, [r1, #0x6a]
    ldr r1, =data_020c4588
    ldrh r2, [r0, #2]
    ldr r0, [r1]
    add sp, sp, #4
    add r0, r0, #0x2000
    str r2, [r0, #0x440]
    ldmia sp!, {r3, r4, pc}
@L_0203c858:
    ldrh r0, [r0, #4]
    sub r0, r0, #0xa
    cmp r0, #3
    addls pc, pc, r0, lsl #2
    b @L_0203c97c
    b @L_0203c87c
    b @L_0203c97c
    b @L_0203c97c
    b @L_0203c97c
@L_0203c87c:
    add r0, r2, #0x2400
    ldrh r1, [r0, #0x6c]
    orr r1, r1, #2
    strh r1, [r0, #0x6c]
    ldr r12, [r4]
    add r0, r12, #0x2400
    ldrh r1, [r0, #0x68]
    tst r1, #1
    beq @L_0203c8fc
    ldrh r0, [r0, #0x6a]
    cmp r0, #5
    beq @L_0203c970
    add r0, r12, #0xc20
    add r0, r0, #0x1000
    mov r1, #0xd
    bl WM_StartKeySharing
    cmp r0, #0
    beq @L_0203c8e0
    ldr r1, [r4]
    mov r2, #9
    add r1, r1, #0x2400
    strh r2, [r1, #0x6a]
    ldr r1, [r4]
    add r1, r1, #0x2000
    str r0, [r1, #0x440]
@L_0203c8e0:
    ldr r0, =data_020c4588
    mov r1, #5
    ldr r0, [r0]
    add sp, sp, #4
    add r0, r0, #0x2400
    strh r1, [r0, #0x6a]
    ldmia sp!, {r3, r4, pc}
@L_0203c8fc:
    tst r1, #2
    beq @L_0203c970
    mov r2, #1
    str r2, [sp]
    ldrh r1, [r0, #0x5e]
    ldrh r3, [r0, #0x66]
    add r0, r12, #0x1400
    mov r1, r2, lsl r1
    sub r1, r1, #1
    mov r1, r1, lsl #0x10
    mov r2, r1, lsr #0x10
    mov r1, #0xd
    bl WM_StartDataSharing
    cmp r0, #0
    ldreq r0, [r4]
    moveq r1, #6
    addeq r0, r0, #0x2400
    streqh r1, [r0, #0x6a]
    addeq sp, sp, #4
    ldmeqia sp!, {r3, r4, pc}
    ldr r1, [r4]
    mov r2, #9
    add r1, r1, #0x2400
    strh r2, [r1, #0x6a]
    ldr r1, [r4]
    add sp, sp, #4
    add r1, r1, #0x2000
    str r0, [r1, #0x440]
    ldmia sp!, {r3, r4, pc}
@L_0203c970:
    add r0, r12, #0x2400
    mov r1, #4
    strh r1, [r0, #0x6a]
@L_0203c97c:
    add sp, sp, #4
    ldmia sp!, {r3, r4, pc}
}
#endif

BOOL Wireless::func_0203c988()
{
    int result = WM_SetMPTiming(func_0203c9c0, mpParam0, mpParam1);

    if (result != WM_ERRCODE_OPERATING) {
        error = result;
        return FALSE;
    }
    return TRUE;
}

void Wireless::func_0203c9c0(void *arg)
{
    if (!data_020c4588.instance->func_0203c75c()) {
        data_020c4588.instance->state = WIRELESS_STATE_ERROR;
    }
}

// (nonmatching: the error check for WM_ERRCODE_NO_DATASET stays a compare in the original)
#ifdef NONMATCHING
BOOL Wireless::func_0203c9ec(int arg)
{
    int result;

    if (state != WIRELESS_STATE_DATA_SHARING) {
        return FALSE;
    }
    result = WM_StepDataSharing(dataSharing, arg, unk_004);
    switch (result) {
    case WM_ERRCODE_NO_DATASET:
        break;
    case WM_ERRCODE_SUCCESS:
        return TRUE;
    }
    data_020c4588.instance->error = result;
    return FALSE;
}
#else
asm BOOL Wireless::func_0203c9ec(int arg)
{
    stmdb sp!, {r3, lr}
    mov r2, r0
    add r0, r2, #0x2400
    ldrh r0, [r0, #0x6a]
    cmp r0, #6
    movne r0, #0
    ldmneia sp!, {r3, pc}
    add r0, r2, #0x1400
    add r2, r2, #4
    bl WM_StepDataSharing
    cmp r0, #0
    beq @L_0203ca24
    cmp r0, #5
    b @L_0203ca2c
@L_0203ca24:
    mov r0, #1
    ldmia sp!, {r3, pc}
@L_0203ca2c:
    ldr r1, =data_020c4588
    ldr r1, [r1]
    add r1, r1, #0x2000
    str r0, [r1, #0x440]
    mov r0, #0
    ldmia sp!, {r3, pc}
}
#endif

// (after a send)
void Wireless::func_0203ca48(void *arg)
{
    WMPortSendCallback *callback = (WMPortSendCallback *)arg;

    if (callback->errcode != WM_ERRCODE_SUCCESS && callback->errcode != WM_ERRCODE_SEND_FAILED) {
        return;
    }
    if (callback->callback == NULL) {
        return;
    }
    callback->callback(callback->errcode == WM_ERRCODE_SUCCESS);
}

// sends data to the other players
BOOL Wireless::func_0203ca80(const void *data, u16 size, void *arg)
{
    BOOL result;
    int error;

    if (state != WIRELESS_STATE_CONNECTED) {
        return FALSE;
    }
    if (flags & 0x10) {
        return FALSE;
    }
    DC_FlushRange(sendBuffer, sendSize);
    error = WM_SetMPDataToPortEx(func_0203ca48, arg, data, size, 0xFFFF, 14, 1);
    result = TRUE;
    if (error != WM_ERRCODE_OPERATING) {
        result = FALSE;
    }
    data_020c4588.instance->error = error;
    return result;
}

// (data received on the port)
void Wireless::func_0203cb2c(void *arg)
{
    WMPortRecvCallback *callback = (WMPortRecvCallback *)arg;

    if (callback->errcode != WM_ERRCODE_SUCCESS) {
        return;
    }
    if (data_020c4588.receive == NULL) {
        return;
    }
    if (callback->state == WM_STATECODE_PORT_RECV) {
        data_020c4588.receive(callback->aid, callback->data, callback->length);
    } else if (callback->state == WM_STATECODE_DISCONNECTED) {
        data_020c4588.receive(callback->aid, NULL, 0);
    }
}

void Wireless::func_0203cb90(WirelessReceiveCallback callback)
{
    data_020c4588.receive = callback;
    WM_SetPortCallback(14, func_0203cb2c, NULL);
}

void Wireless::func_0203cbb8(void *arg)
{
    if (((WMCallback *)arg)->errcode != WM_ERRCODE_SUCCESS) {
        return;
    }
    data_020c4588.instance->flags &= ~0x10;
}

void Wireless::func_0203cbec(int arg)
{
    WM_SetMPParentSize(func_0203cbb8, arg);
}

// copies the data shared by a player
BOOL Wireless::func_0203cc08(u16 aid, void *dest, u32 size)
{
    void *data = WM_GetSharedDataAddress(dataSharing, unk_004, aid);

    if (data == NULL) {
        return FALSE;
    }
    MI_CpuCopy8(data, dest, size);
    return TRUE;
}

BOOL Wireless::func_0203cc48()
{
    if (WM_EndKeySharing(keySharing) != WM_ERRCODE_SUCCESS) {
        return FALSE;
    }
    return func_0203cc80() ? TRUE : FALSE;
}

BOOL Wireless::func_0203cc80()
{
    return WM_EndMP(func_0203cca0) == WM_ERRCODE_OPERATING;
}

void Wireless::func_0203cca0(void *arg)
{
    Wireless *wireless = data_020c4588.instance;

    if (wireless == NULL) {
        return;
    }
    if (((WMCallback *)arg)->errcode != WM_ERRCODE_SUCCESS) {
        if (wireless->connectMode & 0x100) {
            wireless->func_0203c4a8();
        } else {
            wireless->func_0203c540();
        }
    } else {
        if (wireless->connectMode & 0x100) {
            wireless->func_0203cd04();
        } else {
            wireless->func_0203cd70();
        }
    }
}

BOOL Wireless::func_0203cd04()
{
    return WM_EndParent(func_0203cd24) == WM_ERRCODE_OPERATING;
}

void Wireless::func_0203cd24(void *arg)
{
    if (data_020c4588.instance == NULL) {
        return;
    }
    if (((WMCallback *)arg)->errcode != WM_ERRCODE_SUCCESS) {
        return;
    }
    data_020c4588.instance->state = WIRELESS_STATE_IDLE;
    data_020c4588.instance->flags &= ~2;
}

BOOL Wireless::func_0203cd70()
{
    if (WM_Disconnect(func_0203cdac, 0) == WM_ERRCODE_OPERATING) {
        return TRUE;
    }
    data_020c4588.instance->func_0203c4a8();
    return FALSE;
}

void Wireless::func_0203cdac(void *arg)
{
    if (data_020c4588.instance == NULL) {
        return;
    }
    if (((WMCallback *)arg)->errcode != WM_ERRCODE_SUCCESS) {
        return;
    }
    data_020c4588.instance->state = WIRELESS_STATE_IDLE;
    data_020c4588.instance->flags &= ~2;
}

BOOL Wireless::func_0203cdf8(u16 arg, const void *key)
{
    if (state != WIRELESS_STATE_IDLE) {
        return FALSE;
    }
    MI_CpuCopy8(key, unk_220, sizeof(unk_220));
    state = 8;
    return WM_SetWEPKey(func_0203ce58, arg, unk_220) == WM_ERRCODE_OPERATING;
}

void Wireless::func_0203ce58(void *arg)
{
    if (data_020c4588.instance == NULL) {
        return;
    }
    if (((WMCallback *)arg)->errcode != WM_ERRCODE_SUCCESS) {
        data_020c4588.instance->state = WIRELESS_STATE_ERROR;
        data_020c4588.instance->error = ((WMCallback *)arg)->errcode;
        return;
    }
    data_020c4588.instance->state = WIRELESS_STATE_IDLE;
    data_020c4588.instance->flags |= 4;
}

// looks for the quietest channel, starting at the first one
BOOL Wireless::func_0203cebc(u16 channel)
{
    if (state != WIRELESS_STATE_IDLE) {
        return FALSE;
    }
    this->channel = channel;
    bestChannel = 0;
    bestBusyRatio = 101;
    return func_0203cef8(1);
}

// measures the next allowed channel from this one; FALSE after the last one
BOOL Wireless::func_0203cef8(u16 channel)
{
    u16 allowed = func_020131c0();

    if (allowed == WM_ERRCODE_ILLEGAL_STATE) {
        return FALSE;
    }
    if (allowed == 0) {
        return FALSE;
    }
    while (!(allowed & (1 << (channel - 1)))) {
        channel++;
        if (channel >= 16) {
            return FALSE;
        }
    }
    state = WIRELESS_STATE_BUSY;
    if ((u16)WM_MeasureChannel(func_0203cf98, 3, 17, channel, 30) != WM_ERRCODE_OPERATING) {
        return FALSE;
    }
    return TRUE;
}

void Wireless::func_0203cf98(void *arg)
{
    WMMeasureChannelCallback *callback = (WMMeasureChannelCallback *)arg;
    u16 channel;

    if (data_020c4588.instance == NULL) {
        return;
    }
    if (callback->errcode != WM_ERRCODE_SUCCESS) {
        data_020c4588.instance->state = WIRELESS_STATE_ERROR;
        data_020c4588.instance->error = callback->errcode;
        return;
    }
    channel = callback->channel;
    if (data_020c4588.instance->bestBusyRatio > callback->ccaBusyRatio) {
        data_020c4588.instance->bestChannel = channel;
        data_020c4588.instance->bestBusyRatio = callback->ccaBusyRatio;
    }
    if (data_020c4588.instance->func_0203cef8(channel + 1)) {
        return;
    }
    data_020c4588.instance->channel = data_020c4588.instance->bestChannel;
    data_020c4588.instance->state = WIRELESS_STATE_IDLE;
}

// starts as the parent
// (nonmatching: the parent parameters are loaded into other registers)
#ifdef NONMATCHING
BOOL Wireless::func_0203d04c(u16 mode, u16 mpParam0, u16 mpParam1)
{
    if (state != WIRELESS_STATE_IDLE) {
        return FALSE;
    }

    connectMode = mode | 0x100;
    aid = 0;
    tgid = WM_GetNextTgid();
    parentParam.tgid = tgid;
    parentParam.channel = channel;
    parentParam.beaconPeriod = WM_GetDispersionBeaconPeriod();
    parentParam.maxEntry = maxEntry - 1;
    parentParam.entryFlag = 1;
    parentParam.parentMaxSize = parentMaxSize;
    parentParam.childMaxSize = childMaxSize;
    parentParam.CS_Flag = 0;
    parentParam.multiBootFlag = 0;
    parentParam.KS_Flag = (connectMode & 1) ? 1 : 0;
    connectedMask = 0;
    this->mpParam0 = mpParam0;
    this->mpParam1 = mpParam1;
    if (WM_SetParentParameter(func_0203d128, &parentParam) != WM_ERRCODE_OPERATING) {
        return FALSE;
    }
    return TRUE;
}
#else
asm BOOL Wireless::func_0203d04c(u16 mode, u16 mpParam0, u16 mpParam1)
{
    stmdb sp!, {r4, r5, r6, r7, r8, lr}
    mov r7, r0
    add r0, r7, #0x2400
    ldrh r4, [r0, #0x6a]
    mov r6, r2
    mov r5, r3
    cmp r4, #1
    movne r0, #0
    ldmneia sp!, {r4, r5, r6, r7, r8, pc}
    orr r1, r1, #0x100
    mov r4, #0
    strh r1, [r0, #0x68]
    strh r4, [r0, #0x5c]
    bl WM_GetNextTgid
    add r1, r7, #0x200
    strh r0, [r1, #0x34]
    add r0, r7, #0x2400
    ldrh r2, [r1, #0x34]
    add r1, r7, #0x300
    ldrh r0, [r0, #0x62]
    strh r2, [r1, #0x2c]
    strh r0, [r1, #0x52]
    bl WM_GetDispersionBeaconPeriod
    add r2, r7, #0x2400
    add r1, r7, #0x300
    ldrh r8, [r2, #0x5e]
    ldrh lr, [r2, #0x64]
    ldrh r12, [r2, #0x66]
    ldrh r3, [r2, #0x68]
    sub r8, r8, #1
    mov r2, #1
    strh r0, [r1, #0x38]
    strh r8, [r1, #0x30]
    tst r3, #1
    strh r2, [r1, #0x2e]
    ldr r0, =func_0203d128
    strh lr, [r1, #0x54]
    strh r12, [r1, #0x56]
    strh r4, [r1, #0x36]
    strh r4, [r1, #0x32]
    moveq r2, r4
    add r4, r7, #0x2400
    add r3, r7, #0x300
    mov r8, #0
    add r1, r7, #0x320
    strh r2, [r3, #0x34]
    strh r8, [r4, #0x60]
    strh r6, [r4, #0x6e]
    strh r5, [r4, #0x70]
    bl WM_SetParentParameter
    cmp r0, #2
    movne r0, r8
    moveq r0, #1
    ldmia sp!, {r4, r5, r6, r7, r8, pc}
}
#endif

void Wireless::func_0203d128(void *arg)
{
    if (data_020c4588.instance == NULL) {
        return;
    }
    if (((WMCallback *)arg)->errcode != WM_ERRCODE_SUCCESS) {
        data_020c4588.instance->state = WIRELESS_STATE_ERROR;
        data_020c4588.instance->error = ((WMCallback *)arg)->errcode;
        return;
    }
    WM_StartParent(func_0203d17c);
}

// (the parent's events)
void Wireless::func_0203d17c(void *arg)
{
    WMStartParentCallback *callback = (WMStartParentCallback *)arg;

    if (data_020c4588.instance == NULL) {
        return;
    }
    if (callback->errcode != WM_ERRCODE_SUCCESS) {
        data_020c4588.instance->state = WIRELESS_STATE_ERROR;
        data_020c4588.instance->error = callback->errcode;
        return;
    }

    switch (callback->state) {
    case WM_STATECODE_CONNECTED:
        data_020c4588.instance->connectedMask |= (u16)(1 << callback->aid);
        break;
    case WM_STATECODE_DISCONNECTED:
        data_020c4588.instance->connectedMask &= ~(u16)(1 << callback->aid);
        break;
    case WM_STATECODE_DISCONNECTED_FROM_MYSELF:
        data_020c4588.instance->connectedMask &= ~(u16)(1 << callback->aid);
        break;
    case WM_STATECODE_PARENT_START:
        if (data_020c4588.instance->mpParam0 != 0 && data_020c4588.instance->mpParam1 != 0) {
            if (data_020c4588.instance->func_0203c988()) {
                break;
            }
        }
        if (!data_020c4588.instance->func_0203c75c()) {
            data_020c4588.instance->state = WIRELESS_STATE_ERROR;
        }
        break;
    case 2:
        break;
    }
    DC_FlushRange(&data_020c4588.instance->connectedMask, sizeof(u16));
}

// starts scanning for parents (bssid NULL: any parent)
BOOL Wireless::func_0203d2b8(u16 channel, u8 *bssid)
{
    if (state != WIRELESS_STATE_IDLE) {
        return FALSE;
    }

    state = WIRELESS_STATE_SCANNING;
    MI_CpuFill8(&scanParam, 0, 0x1078);
    if (bssid != NULL) {
        // (the wrong way round: the zeros just written over scanParam go to bssid)
        MI_CpuCopy8(scanParam.bssid, bssid, sizeof(scanParam.bssid));
    } else {
        MI_CpuFill8(scanParam.bssid, 0xFF, sizeof(scanParam.bssid));
    }
    scanChannel = channel;
    scanParam.scanBuf = (WMBssDesc *)scanBuffer;
    scanParam.scanBufSize = sizeof(scanBuffer);
    bssMask = 0;
    MI_CpuFill8(bss, 0, sizeof(bss));
    MI_CpuFill8(bssLife, 0, sizeof(bssLife));
    return func_0203d37c();
}

// scans the next allowed channel
// (nonmatching: the result is moved to r0 with moveq instead of mov)
#ifdef NONMATCHING
BOOL Wireless::func_0203d37c()
{
    u16 allowed = func_020131c0();
    u16 channel;

    if (allowed == WM_ERRCODE_ILLEGAL_STATE) {
        return FALSE;
    }
    if (allowed == 0) {
        return FALSE;
    }

    channel = scanChannel;
    if (channel == 0) {
        channel++;
    }
    for (;;) {
        if (channel > 16) {
            channel = 1;
        }
        if (allowed & (1 << (channel - 1))) {
            break;
        }
        channel++;
    }

    scanChannel = channel;
    scanParam.channelList = 1 << (channel - 1);
    scanParam.scanType = 1;
    scanParam.ssidLength = 0;
    MI_CpuFill8(scanParam.ssid, 0xFF, sizeof(scanParam.ssid));
    scanParam.maxChannelTime = WM_GetDispersionScanPeriod();
    flags |= 1;
    if (WM_StartScanEx(func_0203d44c, &scanParam) == WM_ERRCODE_OPERATING) {
        return TRUE;
    }
    return FALSE;
}
#else
asm BOOL Wireless::func_0203d37c()
{
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r6, r0
    bl func_020131c0
    cmp r0, #0x8000
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    cmp r0, #0
    moveq r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
    add r1, r6, #0x1300
    ldrh r7, [r1, #0xf4]
    mov r2, #1
    mov r5, r2
    cmp r7, #0
    addeq r1, r7, #1
    moveq r1, r1, lsl #0x10
    moveq r7, r1, lsr #0x10
@L_0203d3c0:
    cmp r7, #0x10
    movhi r7, r2
    sub r1, r7, #1
    tst r0, r5, lsl r1
    mov lr, r5, lsl r1
    addeq r1, r7, #1
    moveq r1, r1, lsl #0x10
    moveq r7, r1, lsr #0x10
    beq @L_0203d3c0
    add r12, r6, #0x300
    add r3, r6, #0x1300
    mov r4, #0
    add r0, r6, #0x394
    mov r1, #0xff
    mov r2, #0x20
    strh r7, [r3, #0xf4]
    strh lr, [r12, #0x86]
    strh r5, [r12, #0x90]
    strh r4, [r12, #0x92]
    bl MI_CpuFill8
    bl WM_GetDispersionScanPeriod
    add r2, r6, #0x2400
    ldrh r3, [r2, #0x6c]
    add r1, r6, #0x300
    strh r0, [r1, #0x88]
    orr r3, r3, #1
    ldr r0, =func_0203d44c
    add r1, r6, #0x380
    strh r3, [r2, #0x6c]
    bl WM_StartScanEx
    cmp r0, #2
    movne r0, r4
    moveq r0, r5
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}
#endif

asm void Wireless::func_0203d44c(void *arg)
{
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    str r0, [sp]
    ldr r0, =data_020c4588
    mov r4, #1
    ldr r0, [r0]
    cmp r0, #0
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r1, [sp]
    ldrh r1, [r1, #2]
    cmp r1, #0
    beq @L_0203d4a0
    add r0, r0, #0x2400
    mov r1, #9
    strh r1, [r0, #0x6a]
    ldr r0, =data_020c4588
    ldr r1, [r0]
    ldr r0, [sp]
    ldrh r2, [r0, #2]
    add r0, r1, #0x2000
    str r2, [r0, #0x440]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0203d4a0:
    add r1, r0, #0x2400
    ldrh r1, [r1, #0x6a]
    cmp r1, #3
    beq @L_0203d4b8
    bl func_0203d8dc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
@L_0203d4b8:
    ldr r1, [sp]
    ldrh r1, [r1, #8]
    cmp r1, #3
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r1, #4
    beq @L_0203d4dc
    cmp r1, #5
    beq @L_0203d57c
    b @L_0203d8a8
@L_0203d4dc:
    mov r6, #0xc0
    mov r5, #0
    mov r7, r6
    b @L_0203d570
@L_0203d4ec:
    ldr r0, =data_020c4588
    ldr r1, [r0]
    add r0, r1, r5
    add r0, r0, #0x1000
    ldrb r0, [r0, #0x3e3]
    cmp r0, #0
    beq @L_0203d56c
    add r0, r1, #0xe3
    add r1, r0, #0x1300
    ldrb r0, [r1, r5]
    sub r0, r0, #1
    strb r0, [r1, r5]
    ldr r0, =data_020c4588
    ldr r1, [r0]
    add r0, r1, r5
    add r0, r0, #0x1000
    ldrb r0, [r0, #0x3e3]
    cmp r0, #0
    bne @L_0203d56c
    add r0, r1, #0x7e0
    mla r0, r5, r7, r0
    mov r1, #0
    mov r2, r6
    bl MI_CpuFill8
    ldr r0, =data_020c4588
    mvn r1, r4, lsl r5
    ldr r0, [r0]
    and r1, r1, #0xff
    add r0, r0, #0x1000
    ldrb r2, [r0, #0x3e2]
    and r1, r2, r1
    strb r1, [r0, #0x3e2]
@L_0203d56c:
    add r5, r5, #1
@L_0203d570:
    cmp r5, #0x10
    blt @L_0203d4ec
    b @L_0203d8a8
@L_0203d57c:
    ldr r1, [sp]
    ldrh r1, [r1, #0xe]
    cmp r1, #0
    beq @L_0203d598
    add r0, r0, #0x3e0
    mov r1, #0x400
    bl DC_InvalidateRange
@L_0203d598:
    mov r5, #0
    b @L_0203d898
@L_0203d5a0:
    ldr r0, [sp]
    mov r2, #0
    add r0, r0, r5, lsl #2
    ldr r6, [r0, #0x10]
    mov r3, r2
    ldrh r1, [r6, #0x3c]
    mov r0, r2
    cmp r1, #0x10
    blo @L_0203d5cc
    cmp r1, #0x80
    movls r0, #1
@L_0203d5cc:
    cmp r0, #0
    beq @L_0203d5e4
    ldrb r0, [r6, #0x4a]
    add r0, r0, #0x10
    cmp r1, r0
    moveq r3, #1
@L_0203d5e4:
    cmp r3, #0
    beq @L_0203d5f8
    ldrh r0, [r6, #0x40]
    cmp r0, #1
    moveq r2, #1
@L_0203d5f8:
    cmp r2, #0
    beq @L_0203d894
    ldr r0, =data_020c4588
    ldr r2, [r6, #0x44]
    ldr r1, [r0]
    ldr r0, [r1, #0x328]
    cmp r2, r0
    bne @L_0203d894
    ldrb r0, [r6, #0x4b]
    tst r0, #1
    beq @L_0203d894
    tst r0, #2
    bne @L_0203d894
    ldr r1, [r1, #0x320]
    add r0, r6, #0x50
    mov r2, #0x10
    bl memcmp
    cmp r0, #0
    moveq r0, #1
    movne r0, #0
    cmp r0, #0
    beq @L_0203d894
    ldr r0, =data_020c4588
    mov r12, #0
    ldr r0, [r0]
    add r1, r0, #0x3e4
    add r11, r1, #0x400
    b @L_0203d724
@L_0203d668:
    add r1, r0, r12
    add r1, r1, #0x1000
    ldrb r1, [r1, #0x3e3]
    cmp r1, #0
    beq @L_0203d720
    mov r1, #0xc0
    mul r2, r12, r1
    ldrb r10, [r11, r2]
    ldrb r9, [r6, #4]
    add r1, r11, r2
    mov r2, #0
    cmp r10, r9
    ldreqb r10, [r1, #1]
    ldreqb r9, [r6, #5]
    mov r8, r2
    mov r3, r2
    cmpeq r10, r9
    moveq r8, r4
    mov lr, r2
    mov r7, r2
    cmp r8, #0
    beq @L_0203d6d0
    ldrb r9, [r1, #2]
    ldrb r8, [r6, #6]
    cmp r9, r8
    moveq r7, r4
@L_0203d6d0:
    cmp r7, #0
    beq @L_0203d6e8
    ldrb r8, [r1, #3]
    ldrb r7, [r6, #7]
    cmp r8, r7
    moveq lr, r4
@L_0203d6e8:
    cmp lr, #0
    beq @L_0203d700
    ldrb r8, [r1, #4]
    ldrb r7, [r6, #8]
    cmp r8, r7
    moveq r3, r4
@L_0203d700:
    cmp r3, #0
    beq @L_0203d718
    ldrb r3, [r1, #5]
    ldrb r1, [r6, #9]
    cmp r3, r1
    moveq r2, r4
@L_0203d718:
    cmp r2, #0
    bne @L_0203d72c
@L_0203d720:
    add r12, r12, #1
@L_0203d724:
    cmp r12, #0x10
    blt @L_0203d668
@L_0203d72c:
    cmp r12, #0x10
    ldr r1, =data_020c4588
    blt @L_0203d76c
    mov r12, #0
    ldr r2, [r1]
    b @L_0203d75c
@L_0203d744:
    add r0, r2, r12
    add r0, r0, #0x1000
    ldrb r0, [r0, #0x3e3]
    cmp r0, #0
    beq @L_0203d764
    add r12, r12, #1
@L_0203d75c:
    cmp r12, #0x10
    blt @L_0203d744
@L_0203d764:
    cmp r12, #0x10
    bge @L_0203d8a8
@L_0203d76c:
    mov r0, #0xc0
    mul r2, r12, r0
    ldr r0, [r1]
    ldrh r1, [r6]
    add r3, r0, #0x7e0
    add r0, r3, r2
    strh r1, [r3, r2]
    ldrh r1, [r6, #2]
    add r8, r6, #0xc
    add r7, r0, #0xc
    strh r1, [r0, #2]
    ldrb r2, [r6, #4]
    ldrb r1, [r6, #5]
    mov r3, #0x10
    strb r2, [r0, #4]
    strb r1, [r0, #5]
    ldrb r2, [r6, #6]
    ldrb r1, [r6, #7]
    strb r2, [r0, #6]
    strb r1, [r0, #7]
    ldrb r2, [r6, #8]
    ldrb r1, [r6, #9]
    strb r2, [r0, #8]
    strb r1, [r0, #9]
    ldrh r1, [r6, #0xa]
    strh r1, [r0, #0xa]
@L_0203d7d4:
    ldrb r2, [r8]
    ldrb r1, [r8, #1]
    add r8, r8, #2
    subs r3, r3, #1
    strb r1, [r7, #1]
    strb r2, [r7], #2
    bne @L_0203d7d4
    ldrh r1, [r6, #0x2c]
    add r9, r6, #0x40
    add r8, r0, #0x40
    strh r1, [r0, #0x2c]
    ldrh r2, [r6, #0x2e]
    ldrh r1, [r6, #0x30]
    mov r7, #8
    strh r2, [r0, #0x2e]
    strh r1, [r0, #0x30]
    ldrh r1, [r6, #0x32]
    strh r1, [r0, #0x32]
    ldrh r1, [r6, #0x34]
    strh r1, [r0, #0x34]
    ldrh r1, [r6, #0x36]
    strh r1, [r0, #0x36]
    ldrh r1, [r6, #0x38]
    strh r1, [r0, #0x38]
    ldrh r1, [r6, #0x3a]
    strh r1, [r0, #0x3a]
    ldrh r1, [r6, #0x3c]
    strh r1, [r0, #0x3c]
    ldrh r1, [r6, #0x3e]
    strh r1, [r0, #0x3e]
@L_0203d84c:
    ldmia r9!, {r0, r1, r2, r3}
    stmia r8!, {r0, r1, r2, r3}
    subs r7, r7, #1
    bne @L_0203d84c
    ldr r1, =data_020c4588
    mov r0, #1
    ldr r3, [r1]
    mov r2, r0, lsl r12
    add r0, r3, r12
    add r0, r0, #0x1000
    mov r3, #0x2c
    strb r3, [r0, #0x3e3]
    ldr r0, [r1]
    and r1, r2, #0xff
    add r0, r0, #0x1000
    ldrb r2, [r0, #0x3e2]
    orr r1, r2, r1
    strb r1, [r0, #0x3e2]
@L_0203d894:
    add r5, r5, #1
@L_0203d898:
    ldr r0, [sp]
    ldrh r0, [r0, #0xe]
    cmp r5, r0
    blt @L_0203d5a0
@L_0203d8a8:
    ldr r1, =data_020c4588
    ldr r0, [r1]
    add r0, r0, #0x1300
    ldrh r2, [r0, #0xf4]
    add r2, r2, #1
    strh r2, [r0, #0xf4]
    ldr r0, [r1]
    bl func_0203d37c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

void Wireless::func_0203d8d0()
{
    func_0203d8dc();
}

// stops scanning
void Wireless::func_0203d8dc()
{
    if (state != WIRELESS_STATE_SCANNING) {
        return;
    }
    state = WIRELESS_STATE_BUSY;
    WM_EndScan(func_0203d908);
}

void Wireless::func_0203d908(void *arg)
{
    if (data_020c4588.instance == NULL) {
        return;
    }
    if (((WMCallback *)arg)->errcode != WM_ERRCODE_SUCCESS) {
        data_020c4588.instance->state = WIRELESS_STATE_ERROR;
        return;
    }
    data_020c4588.instance->flags &= ~1;
    data_020c4588.instance->state = WIRELESS_STATE_IDLE;
}

// connects to a parent found by the scan
BOOL Wireless::func_0203d960(u16 mode, int index)
{
    if (!(bssMask & (1 << index))) {
        return FALSE;
    }
    if (state == WIRELESS_STATE_SCANNING) {
        func_0203d8dc();
        return FALSE;
    }
    if (state != WIRELESS_STATE_IDLE) {
        return FALSE;
    }
    if (flags & 2) {
        return TRUE;
    }

    connectMode = mode | 0x200;
    connectedMask = 0;
    MI_CpuCopy8(&bss[index], &target, sizeof(WMBssDesc));
    DC_FlushRange(&target, sizeof(WMBssDesc));
    DC_WaitWriteBufferEmpty();
    if (WM_StartConnectEx(func_0203dad8, &target, unk_2444, 1, (flags & 4) ? 1 : 0) != WM_ERRCODE_OPERATING) {
        return FALSE;
    }
    return TRUE;
}

BOOL Wireless::func_0203da3c()
{
    if (WM_Reset(func_0203da6c) != WM_ERRCODE_OPERATING) {
        return FALSE;
    }
    state = WIRELESS_STATE_BUSY;
    return TRUE;
}

void Wireless::func_0203da6c(void *arg)
{
    if (data_020c4588.instance == NULL) {
        return;
    }
    if (((WMCallback *)arg)->errcode != WM_ERRCODE_SUCCESS) {
        data_020c4588.instance->state = WIRELESS_STATE_ERROR;
        data_020c4588.instance->error = ((WMCallback *)arg)->errcode;
        return;
    }
    data_020c4588.instance->state = WIRELESS_STATE_IDLE;
    data_020c4588.instance->flags &= ~2;
}

// (the child's connection events)
void Wireless::func_0203dad8(void *arg)
{
    WMStartConnectCallback *callback = (WMStartConnectCallback *)arg;

    if (data_020c4588.instance == NULL) {
        return;
    }

    switch (callback->errcode) {
    case 12:
        data_020c4588.instance->state = WIRELESS_STATE_ERROR;
        data_020c4588.instance->error = callback->errcode;
        return;
    case 11:
        data_020c4588.instance->state = WIRELESS_STATE_ERROR;
        data_020c4588.instance->error = callback->errcode;
        return;
    case 1:
        data_020c4588.instance->state = WIRELESS_STATE_ERROR;
        data_020c4588.instance->error = callback->errcode;
        return;
    case 6:
        data_020c4588.instance->state = WIRELESS_STATE_ERROR;
        data_020c4588.instance->error = callback->errcode;
        return;
    case WM_ERRCODE_SUCCESS:
        break;
    default:
        return;
    }

    switch (callback->state) {
    case 6:
        break;
    case 8:
        break;
    case WM_STATECODE_DISCONNECTED_FROM_MYSELF:
        break;
    case WM_STATECODE_CONNECTED:
        if (!data_020c4588.instance->func_0203c75c()) {
            data_020c4588.instance->state = WIRELESS_STATE_ERROR;
            break;
        }
        data_020c4588.instance->aid = callback->aid;
        data_020c4588.instance->connectedMask |= (u16)(1 << callback->aid);
        DC_FlushRange(&data_020c4588.instance->connectedMask, sizeof(u16));
        break;
    case WM_STATECODE_DISCONNECTED:
        data_020c4588.instance->state = WIRELESS_STATE_ERROR;
        data_020c4588.instance->error = 20;
        break;
    default:
        data_020c4588.instance->state = WIRELESS_STATE_ERROR;
        break;
    }
}
