#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct frost$core$Immutable {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
} frost$core$Immutable;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$core$Immutable$class_type;
extern frost$core$Immutable$class_type frost$core$Immutable$class;

