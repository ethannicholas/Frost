#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$collections$ImmutableArray frost$collections$ImmutableArray;
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct frost$collections$ImmutableArray$ImmutableArrayIterator {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$collections$ImmutableArray* array;
    frost$core$Int64 index;
} frost$collections$ImmutableArray$ImmutableArrayIterator;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } frost$collections$ImmutableArray$ImmutableArrayIterator$class_type;
extern frost$collections$ImmutableArray$ImmutableArrayIterator$class_type frost$collections$ImmutableArray$ImmutableArrayIterator$class;

