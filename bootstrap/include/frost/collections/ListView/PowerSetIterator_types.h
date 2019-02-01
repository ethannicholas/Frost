#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$collections$ListView frost$collections$ListView;
#include "frost/core/UInt64_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct frost$collections$ListView$PowerSetIterator {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$collections$ListView* list;
    frost$core$UInt64 bits;
    frost$core$UInt64 stop;
} frost$collections$ListView$PowerSetIterator;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } frost$collections$ListView$PowerSetIterator$class_type;
extern frost$collections$ListView$PowerSetIterator$class_type frost$collections$ListView$PowerSetIterator$class;

