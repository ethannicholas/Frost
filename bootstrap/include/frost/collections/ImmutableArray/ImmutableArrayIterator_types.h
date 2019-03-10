#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$collections$ImmutableArray frost$collections$ImmutableArray;
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct frost$collections$ImmutableArray$ImmutableArrayIterator {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$collections$ImmutableArray* array;
    frost$core$Int index;
} frost$collections$ImmutableArray$ImmutableArrayIterator;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } frost$collections$ImmutableArray$ImmutableArrayIterator$class_type;
extern frost$collections$ImmutableArray$ImmutableArrayIterator$class_type frost$collections$ImmutableArray$ImmutableArrayIterator$class;

