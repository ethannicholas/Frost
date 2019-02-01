#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$collections$Iterator frost$collections$Iterator;
typedef struct frost$core$MutableMethod frost$core$MutableMethod;
typedef struct frost$core$String frost$core$String;

typedef struct frost$collections$Iterator$MapIterator {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$collections$Iterator* base;
    frost$core$MutableMethod* map;
} frost$collections$Iterator$MapIterator;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } frost$collections$Iterator$MapIterator$class_type;
extern frost$collections$Iterator$MapIterator$class_type frost$collections$Iterator$MapIterator$class;

