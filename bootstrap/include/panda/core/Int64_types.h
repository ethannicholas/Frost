#pragma once
#include "panda_c.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int64_types.h"

typedef struct panda$core$Int64 {
    int64_t value;
} panda$core$Int64;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[127]; } panda$core$Int64$class_type;
extern panda$core$Int64$class_type panda$core$Int64$class;
typedef struct panda$core$Int64$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$Int64 value;
} panda$core$Int64$wrapper;
typedef struct panda$core$Int64$nullable {
    panda$core$Int64 value;
    bool nonnull;
} panda$core$Int64$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Int64$wrapperclass_type;
extern panda$core$Int64$wrapperclass_type panda$core$Int64$wrapperclass;

