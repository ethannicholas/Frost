#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"

typedef struct panda$core$Object {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} panda$core$Object;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Object$class_type;
extern panda$core$Object$class_type panda$core$Object$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Object panda$core$Object;

panda$core$String* panda$core$Object$convert$R$panda$core$String(panda$core$Object* self);
void panda$core$Object$cleanup(panda$core$Object* self);
void panda$core$Object$init(panda$core$Object* self);

#endif
