#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$threads$Lock frost$threads$Lock;
typedef struct frost$core$String frost$core$String;

typedef struct frost$threads$ScopedLock {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$threads$Lock* lock;
} frost$threads$ScopedLock;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$threads$ScopedLock$class_type;
extern frost$threads$ScopedLock$class_type frost$threads$ScopedLock$class;

