#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int8.h"
typedef struct panda$core$Immutable panda$core$Immutable;
typedef struct panda$core$String panda$core$String;

typedef struct panda$core$Method {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int8* pointer;
    panda$core$Immutable* target;
} panda$core$Method;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Method$class_type;
extern panda$core$Method$class_type panda$core$Method$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$core$Method panda$core$Method;
#include "panda/core/Int8.h"
typedef struct panda$core$Immutable panda$core$Immutable;
typedef struct panda$core$String panda$core$String;

void panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q(panda$core$Method* self, panda$core$Int8* p_pointer, panda$core$Immutable* p_target);
panda$core$String* panda$core$Method$convert$R$panda$core$String(panda$core$Method* self);
void panda$core$Method$cleanup(panda$core$Method* self);

#endif
