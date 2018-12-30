#pragma once
#include "panda_c.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int16_types.h"

typedef struct panda$core$Int16 {
    int16_t value;
} panda$core$Int16;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[151]; } panda$core$Int16$class_type;
extern panda$core$Int16$class_type panda$core$Int16$class;
typedef struct panda$core$Int16$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$Int16 value;
} panda$core$Int16$wrapper;
typedef struct panda$core$Int16$nullable {
    panda$core$Int16 value;
    bool nonnull;
} panda$core$Int16$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Int16$wrapperclass_type;
extern panda$core$Int16$wrapperclass_type panda$core$Int16$wrapperclass;

