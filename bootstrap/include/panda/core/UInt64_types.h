#pragma once
#include "panda_c.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/UInt64_types.h"

typedef struct panda$core$UInt64 {
    uint64_t value;
} panda$core$UInt64;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[126]; } panda$core$UInt64$class_type;
extern panda$core$UInt64$class_type panda$core$UInt64$class;
typedef struct panda$core$UInt64$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$UInt64 value;
} panda$core$UInt64$wrapper;
typedef struct panda$core$UInt64$nullable {
    panda$core$UInt64 value;
    bool nonnull;
} panda$core$UInt64$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$UInt64$wrapperclass_type;
extern panda$core$UInt64$wrapperclass_type panda$core$UInt64$wrapperclass;

