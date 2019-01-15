#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct frost$io$Console {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
} frost$io$Console;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$io$Console$class_type;
extern frost$io$Console$class_type frost$io$Console$class;

