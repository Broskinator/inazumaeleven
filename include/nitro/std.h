// NitroSDK STD (string) functions used by the game so far
#ifndef NITRO_STD_H
#define NITRO_STD_H

#include "nitro/types.h"

#ifdef __cplusplus
extern "C" {
#endif

int STD_CopyString(char *dst, const char *src);
int STD_GetStringLength(const char *str);
int STD_CompareString(const char *str1, const char *str2);

#ifdef __cplusplus
}
#endif

#endif // NITRO_STD_H
