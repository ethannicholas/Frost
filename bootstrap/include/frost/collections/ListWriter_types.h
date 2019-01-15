#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct frost$collections$ListWriter {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
} frost$collections$ListWriter;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } frost$collections$ListWriter$class_type;
extern frost$collections$ListWriter$class_type frost$collections$ListWriter$class;

