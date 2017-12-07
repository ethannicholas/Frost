#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$collections$Key panda$collections$Key;
typedef struct panda$core$Object panda$core$Object;
typedef struct panda$collections$HashMap$Entry panda$collections$HashMap$Entry;

typedef struct panda$collections$HashMap$Entry {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$Key* key;
    panda$core$Object* value;
    panda$collections$HashMap$Entry* next;
} panda$collections$HashMap$Entry;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$collections$HashMap$Entry$class_type;
extern panda$collections$HashMap$Entry$class_type panda$collections$HashMap$Entry$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$collections$HashMap$Entry panda$collections$HashMap$Entry;
typedef struct panda$collections$Key panda$collections$Key;
typedef struct panda$core$Object panda$core$Object;

void panda$collections$HashMap$Entry$init$panda$collections$HashMap$Entry$K$panda$collections$HashMap$Entry$V(panda$collections$HashMap$Entry* self, panda$collections$Key* p_key, panda$core$Object* p_value);

#endif
