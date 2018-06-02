#pragma once
#include "panda_c.h"
#include "Iterable_types.h"
typedef struct panda$collections$Iterator panda$collections$Iterator;
typedef struct panda$collections$Iterable panda$collections$Iterable;

panda$collections$Iterator* panda$collections$Iterable$iterator$R$panda$collections$Iterator$LTpanda$collections$Iterable$T$GT(panda$collections$Iterable* self);

