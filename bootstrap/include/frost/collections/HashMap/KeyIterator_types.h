#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$collections$HashMap$EntryIterator frost$collections$HashMap$EntryIterator;
typedef struct frost$core$String frost$core$String;

typedef struct frost$collections$HashMap$KeyIterator {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$collections$HashMap$EntryIterator* base;
} frost$collections$HashMap$KeyIterator;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } frost$collections$HashMap$KeyIterator$class_type;
extern frost$collections$HashMap$KeyIterator$class_type frost$collections$HashMap$KeyIterator$class;

