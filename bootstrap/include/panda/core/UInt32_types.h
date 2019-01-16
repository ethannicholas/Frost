#pragma once
#include "panda_c.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/UInt32_types.h"

typedef struct panda$core$UInt32 {
    uint32_t value;
} panda$core$UInt32;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[120]; } panda$core$UInt32$class_type;
extern panda$core$UInt32$class_type panda$core$UInt32$class;
typedef struct panda$core$UInt32$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$UInt32 value;
} panda$core$UInt32$wrapper;
typedef struct panda$core$UInt32$nullable {
    panda$core$UInt32 value;
    bool nonnull;
} panda$core$UInt32$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$UInt32$wrapperclass_type;
extern panda$core$UInt32$wrapperclass_type panda$core$UInt32$wrapperclass;

