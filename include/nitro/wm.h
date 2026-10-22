// NitroSDK WM (wireless) types and functions used by the game so far
#ifndef NITRO_WM_H
#define NITRO_WM_H

#include "nitro/types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define WM_ERRCODE_SUCCESS 0
#define WM_ERRCODE_OPERATING 2
#define WM_ERRCODE_NO_DATASET 5
#define WM_ERRCODE_SEND_FAILED 15
#define WM_ERRCODE_ILLEGAL_STATE 0x8000     // (WM_GetAllowedChannel)

#define WM_STATECODE_PARENT_START 0
#define WM_STATECODE_CONNECTED 7
#define WM_STATECODE_DISCONNECTED 9
#define WM_STATECODE_PORT_RECV 21
#define WM_STATECODE_DISCONNECTED_FROM_MYSELF 26

typedef void (*WMCallbackFunc)(void *arg);

typedef struct WMCallback {
    u16 apiid;
    u16 errcode;
    u16 wlCmdID;
    u16 wlResult;
} WMCallback;

typedef struct WMIndCallback {
    u16 apiid;
    u16 errcode;
    u16 state;
    u16 reason;
} WMIndCallback;

typedef struct WMPortRecvCallback {
    u16 apiid;
    u16 errcode;
    u16 state;
    u16 port;
    void *recvBuf;
    void *data;
    u16 length;
    u16 aid;
} WMPortRecvCallback;

typedef struct WMPortSendCallback {
    u16 apiid;
    u16 errcode;
    u16 wlCmdID;
    u16 wlResult;
    u16 state;
    u16 port;
    u16 destBitmap;
    u16 restBitmap;
    u16 sentBitmap;
    u16 rsv;
    const void *data;
    u16 length;
    u16 size;
    u16 seqNo;
    u16 rsv2;
    void (*callback)(BOOL success);
} WMPortSendCallback;

typedef struct WMMeasureChannelCallback {
    u16 apiid;
    u16 errcode;
    u16 wlCmdID;
    u16 wlResult;
    u16 channel;
    u16 ccaBusyRatio;
} WMMeasureChannelCallback;

typedef struct WMStartParentCallback {
    u16 apiid;
    u16 errcode;
    u16 wlCmdID;
    u16 wlResult;
    u16 state;
    u8 macAddress[6];
    u16 aid;
    u16 reason;
} WMStartParentCallback;

typedef struct WMStartConnectCallback {
    u16 apiid;
    u16 errcode;
    u16 wlCmdID;
    u16 wlResult;
    u16 state;
    u16 aid;
    u16 reason;
} WMStartConnectCallback;

typedef struct WMParentParam {
    void *userGameInfo;
    u16 userGameInfoLength;
    u16 padding;
    u32 ggid;
    u16 tgid;
    u16 entryFlag;
    u16 maxEntry;
    u16 multiBootFlag;
    u16 KS_Flag;
    u16 CS_Flag;
    u16 beaconPeriod;
    u16 rsv1[4];
    u16 rsv2[8];
    u16 channel;
    u16 parentMaxSize;
    u16 childMaxSize;
    u16 rsv[4];
} WMParentParam;

// a parent found by a scan
typedef struct WMBssDesc {
    u8 data[0xC0];
} WMBssDesc;

typedef struct WMScanExParam {
    WMBssDesc *scanBuf;
    u16 scanBufSize;
    u16 channelList;
    u16 maxChannelTime;
    u8 bssid[6];
    u16 scanType;
    u16 ssidLength;
    u8 ssid[32];
    u16 ssidMatchLength;
    u16 rsv[2];
} WMScanExParam;

u16 WM_SetIndCallback(WMCallbackFunc callback);
int WM_StartKeySharing(void *buf, u16 port);

#ifdef __cplusplus
}
#endif

#endif // NITRO_WM_H
