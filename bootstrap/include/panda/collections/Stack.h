#pragma once
#include "panda_c.h"
#include "Stack_types.h"
typedef struct panda$collections$Stack panda$collections$Stack;
typedef struct panda$core$Object panda$core$Object;
#include "panda/core/Int64_types.h"
typedef struct panda$collections$Iterator panda$collections$Iterator;
typedef struct panda$core$String panda$core$String;

void panda$collections$Stack$push$panda$collections$Stack$T(panda$collections$Stack* self, panda$core$Object* p_v);
panda$core$Object* panda$collections$Stack$pop$R$panda$collections$Stack$T(panda$collections$Stack* self);
panda$core$Object* panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(panda$collections$Stack* self, panda$core$Int64 p_depth);
void panda$collections$Stack$clear(panda$collections$Stack* self);
panda$collections$Iterator* panda$collections$Stack$get_iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT(panda$collections$Stack* self);
panda$core$Int64 panda$collections$Stack$get_count$R$panda$core$Int64(panda$collections$Stack* self);
panda$core$String* panda$collections$Stack$convert$R$panda$core$String(panda$collections$Stack* self);
void panda$collections$Stack$init(panda$collections$Stack* self);
void panda$collections$Stack$cleanup(panda$collections$Stack* self);

