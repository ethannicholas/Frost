#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$collections$Iterator panda$collections$Iterator;
#include "panda/core/Int64_types.h"
typedef struct panda$core$Object panda$core$Object;
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$Iterator$RangeIterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$Iterator* base;
    panda$core$Int64 current;
    panda$core$Int64$nullable end;
    panda$core$Int64 step;
    panda$core$Object* pending;
    panda$core$Bit _done;
} panda$collections$Iterator$RangeIterator;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$collections$Iterator$RangeIterator$class_type;
extern panda$collections$Iterator$RangeIterator$class_type panda$collections$Iterator$RangeIterator$class;

