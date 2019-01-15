#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$collections$HashMap$EntryIterator frost$collections$HashMap$EntryIterator;
typedef struct frost$core$String frost$core$String;

typedef struct frost$collections$HashMap$ValueIterator {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$collections$HashMap$EntryIterator* base;
} frost$collections$HashMap$ValueIterator;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } frost$collections$HashMap$ValueIterator$class_type;
extern frost$collections$HashMap$ValueIterator$class_type frost$collections$HashMap$ValueIterator$class;

