#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$collections$HashMap panda$collections$HashMap;
#include "panda/core/Int64_types.h"
typedef struct panda$collections$HashMap$Entry panda$collections$HashMap$Entry;
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$HashMap$EntryIterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$HashMap* map;
    panda$core$Int64 bucket;
    panda$collections$HashMap$Entry* entry;
} panda$collections$HashMap$EntryIterator;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$collections$HashMap$EntryIterator$class_type;
extern panda$collections$HashMap$EntryIterator$class_type panda$collections$HashMap$EntryIterator$class;

