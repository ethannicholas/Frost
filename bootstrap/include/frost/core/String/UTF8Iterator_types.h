#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct frost$core$String$UTF8Iterator {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$Int64 index;
    frost$core$String* str;
} frost$core$String$UTF8Iterator;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } frost$core$String$UTF8Iterator$class_type;
extern frost$core$String$UTF8Iterator$class_type frost$core$String$UTF8Iterator$class;

