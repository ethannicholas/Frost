#pragma once
#include "panda_c.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"

typedef struct panda$core$Int32 {
    int32_t value;
} panda$core$Int32;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[121]; } panda$core$Int32$class_type;
extern panda$core$Int32$class_type panda$core$Int32$class;
typedef struct panda$core$Int32$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$Int32 value;
} panda$core$Int32$wrapper;
typedef struct panda$core$Int32$nullable {
    panda$core$Int32 value;
    bool nonnull;
} panda$core$Int32$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Int32$wrapperclass_type;
extern panda$core$Int32$wrapperclass_type panda$core$Int32$wrapperclass;

