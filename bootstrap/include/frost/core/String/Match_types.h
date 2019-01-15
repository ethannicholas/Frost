#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/String/Index_types.h"
typedef struct frost$collections$ImmutableArray frost$collections$ImmutableArray;
typedef struct frost$core$String frost$core$String;

typedef struct frost$core$String$Match {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$String$Index start;
    frost$core$String$Index end;
    frost$collections$ImmutableArray* groups;
} frost$core$String$Match;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$core$String$Match$class_type;
extern frost$core$String$Match$class_type frost$core$String$Match$class;

