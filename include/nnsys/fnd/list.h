// NitroSystem foundation: doubly linked lists of objects (the link is inside each
// object, at the list's offset)
#ifndef NNSYS_FND_LIST_H
#define NNSYS_FND_LIST_H

#include "nitro/types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    void *prevObject;
    void *nextObject;
} NNSFndLink;

typedef struct {
    void *headObject;
    void *tailObject;
    u16 numObjects;
    u16 offset;         // (of the NNSFndLink in the objects)
} NNSFndList;

void NNS_FndInsertListObject(NNSFndList *list, void *target, void *object);
void NNS_FndRemoveListObject(NNSFndList *list, void *object);
void *NNS_FndGetNextListObject(const NNSFndList *list, const void *object);
void *NNS_FndGetNthListObject(const NNSFndList *list, u16 index);

#ifdef __cplusplus
}
#endif

#endif // NNSYS_FND_LIST_H
