#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$collections$Key panda$collections$Key;
typedef struct panda$core$Object panda$core$Object;
typedef struct panda$collections$HashMap$Entry panda$collections$HashMap$Entry;
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$HashMap$Entry {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$Key* key;
    panda$core$Object* value;
    panda$collections$HashMap$Entry* next;
} panda$collections$HashMap$Entry;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$collections$HashMap$Entry$class_type;
extern panda$collections$HashMap$Entry$class_type panda$collections$HashMap$Entry$class;

