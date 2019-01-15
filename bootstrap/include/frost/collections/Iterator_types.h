#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct frost$collections$Iterator {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
} frost$collections$Iterator;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[13]; } frost$collections$Iterator$class_type;
extern frost$collections$Iterator$class_type frost$collections$Iterator$class;

