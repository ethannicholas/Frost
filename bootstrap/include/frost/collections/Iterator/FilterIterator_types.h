#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$collections$Iterator frost$collections$Iterator;
typedef struct frost$core$MutableMethod frost$core$MutableMethod;
#include "frost/core/Bit_types.h"
typedef struct frost$core$Object frost$core$Object;
typedef struct frost$core$String frost$core$String;

typedef struct frost$collections$Iterator$FilterIterator {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$collections$Iterator* base;
    frost$core$MutableMethod* filter;
    frost$core$Bit _done;
    frost$core$Object* nextValue;
} frost$collections$Iterator$FilterIterator;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } frost$collections$Iterator$FilterIterator$class_type;
extern frost$collections$Iterator$FilterIterator$class_type frost$collections$Iterator$FilterIterator$class;

