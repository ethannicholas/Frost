#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$Key {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} panda$collections$Key;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[3]; } panda$collections$Key$class_type;
extern panda$collections$Key$class_type panda$collections$Key$class;

#ifndef PANDA_TYPESONLY
#include "panda/core/Int64.h"
typedef struct panda$collections$Key panda$collections$Key;

panda$core$Int64 panda$collections$Key$hash$R$panda$core$Int64(panda$collections$Key* self);

#endif
