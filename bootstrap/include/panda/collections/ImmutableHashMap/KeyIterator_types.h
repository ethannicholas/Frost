#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$collections$ImmutableHashMap$EntryIterator panda$collections$ImmutableHashMap$EntryIterator;
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$ImmutableHashMap$KeyIterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$ImmutableHashMap$EntryIterator* base;
} panda$collections$ImmutableHashMap$KeyIterator;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$collections$ImmutableHashMap$KeyIterator$class_type;
extern panda$collections$ImmutableHashMap$KeyIterator$class_type panda$collections$ImmutableHashMap$KeyIterator$class;

