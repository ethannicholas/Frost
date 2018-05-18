#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$math$Random {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} panda$math$Random;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$math$Random$class_type;
extern panda$math$Random$class_type panda$math$Random$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$math$Random panda$math$Random;
#include "panda/core/Int64.h"

panda$math$Random* panda$math$Random$default$R$panda$math$Random();
panda$core$Int64 panda$math$Random$int64$R$panda$core$Int64(panda$math$Random* self);
panda$core$Int64 panda$math$Random$int$panda$core$Int64$R$panda$core$Int64(panda$math$Random* self, panda$core$Int64 p_n);

#endif
