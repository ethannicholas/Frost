#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$collections$ImmutableHashMap panda$collections$ImmutableHashMap;
#include "panda/core/Int64_types.h"
typedef struct panda$collections$ImmutableHashMap$Entry panda$collections$ImmutableHashMap$Entry;
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$ImmutableHashMap$EntryIterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$ImmutableHashMap* map;
    panda$core$Int64 bucket;
    panda$collections$ImmutableHashMap$Entry* entry;
} panda$collections$ImmutableHashMap$EntryIterator;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$collections$ImmutableHashMap$EntryIterator$class_type;
extern panda$collections$ImmutableHashMap$EntryIterator$class_type panda$collections$ImmutableHashMap$EntryIterator$class;

