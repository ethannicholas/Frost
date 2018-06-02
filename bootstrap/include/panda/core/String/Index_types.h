#pragma once
#include "panda_c.h"
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/String/Index_types.h"

typedef struct panda$core$String$Index {
    panda$core$Int64 value;
} panda$core$String$Index;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[10]; } panda$core$String$Index$class_type;
extern panda$core$String$Index$class_type panda$core$String$Index$class;
typedef struct panda$core$String$Index$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$String$Index value;
} panda$core$String$Index$wrapper;
typedef struct panda$core$String$Index$nullable {
    panda$core$String$Index value;
    bool nonnull;
} panda$core$String$Index$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$String$Index$wrapperclass_type;
extern panda$core$String$Index$wrapperclass_type panda$core$String$Index$wrapperclass;

