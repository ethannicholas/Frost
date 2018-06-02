#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$collections$Key panda$collections$Key;
typedef struct panda$core$Object panda$core$Object;
typedef struct panda$collections$ImmutableHashMap$Entry panda$collections$ImmutableHashMap$Entry;
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$ImmutableHashMap$Entry {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$Key* key;
    panda$core$Object* value;
    panda$collections$ImmutableHashMap$Entry* next;
} panda$collections$ImmutableHashMap$Entry;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$collections$ImmutableHashMap$Entry$class_type;
extern panda$collections$ImmutableHashMap$Entry$class_type panda$collections$ImmutableHashMap$Entry$class;

