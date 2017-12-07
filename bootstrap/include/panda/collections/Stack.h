#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$collections$Array panda$collections$Array;

typedef struct panda$collections$Stack {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$Array* contents;
} panda$collections$Stack;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[8]; } panda$collections$Stack$class_type;
extern panda$collections$Stack$class_type panda$collections$Stack$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$collections$Stack panda$collections$Stack;
typedef struct panda$core$Object panda$core$Object;
#include "panda/core/Int64.h"
typedef struct panda$collections$Iterator panda$collections$Iterator;
typedef struct panda$core$String panda$core$String;

void panda$collections$Stack$push$panda$collections$Stack$T(panda$collections$Stack* self, panda$core$Object* p_v);
panda$core$Object* panda$collections$Stack$pop$R$panda$collections$Stack$T(panda$collections$Stack* self);
panda$core$Object* panda$collections$Stack$peek$R$panda$collections$Stack$T(panda$collections$Stack* self);
panda$core$Object* panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(panda$collections$Stack* self, panda$core$Int64 p_depth);
panda$collections$Iterator* panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT(panda$collections$Stack* self);
panda$core$Int64 panda$collections$Stack$get_count$R$panda$core$Int64(panda$collections$Stack* self);
panda$core$String* panda$collections$Stack$convert$R$panda$core$String(panda$collections$Stack* self);
void panda$collections$Stack$init(panda$collections$Stack* self);

#endif
