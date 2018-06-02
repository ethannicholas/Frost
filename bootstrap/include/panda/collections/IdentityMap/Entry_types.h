#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$core$Object panda$core$Object;
typedef struct panda$collections$IdentityMap$Entry panda$collections$IdentityMap$Entry;
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$IdentityMap$Entry {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Object* key;
    panda$core$Object* value;
    panda$collections$IdentityMap$Entry* next;
} panda$collections$IdentityMap$Entry;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$collections$IdentityMap$Entry$class_type;
extern panda$collections$IdentityMap$Entry$class_type panda$collections$IdentityMap$Entry$class;

