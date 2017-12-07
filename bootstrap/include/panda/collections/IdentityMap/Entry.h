#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$core$Object panda$core$Object;
typedef struct panda$collections$IdentityMap$Entry panda$collections$IdentityMap$Entry;

typedef struct panda$collections$IdentityMap$Entry {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Object* key;
    panda$core$Object* value;
    panda$collections$IdentityMap$Entry* next;
} panda$collections$IdentityMap$Entry;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$collections$IdentityMap$Entry$class_type;
extern panda$collections$IdentityMap$Entry$class_type panda$collections$IdentityMap$Entry$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$collections$IdentityMap$Entry panda$collections$IdentityMap$Entry;
typedef struct panda$core$Object panda$core$Object;

void panda$collections$IdentityMap$Entry$init$panda$collections$IdentityMap$Entry$K$panda$collections$IdentityMap$Entry$V(panda$collections$IdentityMap$Entry* self, panda$core$Object* p_key, panda$core$Object* p_value);

#endif
