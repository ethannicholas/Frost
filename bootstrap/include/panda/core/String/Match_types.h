#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
#include "panda/core/String/Index_types.h"
typedef struct panda$collections$ImmutableArray panda$collections$ImmutableArray;
typedef struct panda$core$String panda$core$String;

typedef struct panda$core$String$Match {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$String$Index start;
    panda$core$String$Index end;
    panda$collections$ImmutableArray* groups;
} panda$core$String$Match;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$String$Match$class_type;
extern panda$core$String$Match$class_type panda$core$String$Match$class;

