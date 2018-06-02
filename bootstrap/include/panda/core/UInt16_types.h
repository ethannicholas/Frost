#pragma once
#include "panda_c.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/UInt16_types.h"

typedef struct panda$core$UInt16 {
    uint16_t value;
} panda$core$UInt16;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[165]; } panda$core$UInt16$class_type;
extern panda$core$UInt16$class_type panda$core$UInt16$class;
typedef struct panda$core$UInt16$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$UInt16 value;
} panda$core$UInt16$wrapper;
typedef struct panda$core$UInt16$nullable {
    panda$core$UInt16 value;
    bool nonnull;
} panda$core$UInt16$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$UInt16$wrapperclass_type;
extern panda$core$UInt16$wrapperclass_type panda$core$UInt16$wrapperclass;

