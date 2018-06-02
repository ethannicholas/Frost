#pragma once
#include "panda_c.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int8_types.h"

typedef struct panda$core$Int8 {
    int8_t value;
} panda$core$Int8;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[166]; } panda$core$Int8$class_type;
extern panda$core$Int8$class_type panda$core$Int8$class;
typedef struct panda$core$Int8$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$Int8 value;
} panda$core$Int8$wrapper;
typedef struct panda$core$Int8$nullable {
    panda$core$Int8 value;
    bool nonnull;
} panda$core$Int8$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Int8$wrapperclass_type;
extern panda$core$Int8$wrapperclass_type panda$core$Int8$wrapperclass;

