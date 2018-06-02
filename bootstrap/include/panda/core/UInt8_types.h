#pragma once
#include "panda_c.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/UInt8_types.h"

typedef struct panda$core$UInt8 {
    uint8_t value;
} panda$core$UInt8;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[165]; } panda$core$UInt8$class_type;
extern panda$core$UInt8$class_type panda$core$UInt8$class;
typedef struct panda$core$UInt8$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$UInt8 value;
} panda$core$UInt8$wrapper;
typedef struct panda$core$UInt8$nullable {
    panda$core$UInt8 value;
    bool nonnull;
} panda$core$UInt8$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$UInt8$wrapperclass_type;
extern panda$core$UInt8$wrapperclass_type panda$core$UInt8$wrapperclass;

