#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$collections$Iterator frost$collections$Iterator;
#include "frost/core/Int64_types.h"
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct frost$collections$Iterator$RangeIterator {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$collections$Iterator* base;
    frost$core$Int64 current;
    frost$core$Int64$nullable end;
    frost$core$Int64 step;
    frost$core$Object* pending;
    frost$core$Bit _done;
} frost$collections$Iterator$RangeIterator;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } frost$collections$Iterator$RangeIterator$class_type;
extern frost$collections$Iterator$RangeIterator$class_type frost$collections$Iterator$RangeIterator$class;

