#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Object panda$core$Object;
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/SpecializedRange.h"

typedef struct panda$core$SpecializedRange {
    panda$core$Object* start;
    panda$core$Object* end;
    panda$core$Int64 step;
    panda$core$Bit inclusive;
} panda$core$SpecializedRange;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$SpecializedRange$class_type;
extern panda$core$SpecializedRange$class_type panda$core$SpecializedRange$class;
typedef struct panda$core$SpecializedRange$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$SpecializedRange value;
} panda$core$SpecializedRange$wrapper;
typedef struct panda$core$SpecializedRange$nullable {
    panda$core$SpecializedRange value;
    bool nonnull;
} panda$core$SpecializedRange$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$SpecializedRange$wrapperclass_type;
extern panda$core$SpecializedRange$wrapperclass_type panda$core$SpecializedRange$wrapperclass;
panda$core$SpecializedRange$wrapper* wrap_panda$core$SpecializedRange(panda$core$SpecializedRange self);

#ifndef PANDA_TYPESONLY


#endif
