#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$collections$Iterator frost$collections$Iterator;
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct frost$collections$Iterator$EnumerationIterator {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$collections$Iterator* base;
    frost$core$Int64 index;
} frost$collections$Iterator$EnumerationIterator;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } frost$collections$Iterator$EnumerationIterator$class_type;
extern frost$collections$Iterator$EnumerationIterator$class_type frost$collections$Iterator$EnumerationIterator$class;

