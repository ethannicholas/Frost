#pragma once
#include "panda_c.h"
#include "Method_types.h"
typedef struct panda$core$Method panda$core$Method;
#include "panda/core/Int8_types.h"
typedef struct panda$core$Immutable panda$core$Immutable;
typedef struct panda$core$String panda$core$String;

void panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q(panda$core$Method* self, panda$core$Int8* p_pointer, panda$core$Immutable* p_target);
panda$core$String* panda$core$Method$convert$R$panda$core$String(panda$core$Method* self);
void panda$core$Method$cleanup(panda$core$Method* self);

