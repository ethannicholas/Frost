#pragma once
#include "panda_c.h"
#include "ImmutableArray_types.h"
typedef struct panda$collections$ImmutableArray panda$collections$ImmutableArray;
typedef struct panda$collections$ListView panda$collections$ListView;
typedef struct panda$core$Object panda$core$Object;
#include "panda/core/Int64_types.h"
typedef struct panda$collections$Array panda$collections$Array;
typedef struct panda$collections$Iterator panda$collections$Iterator;
typedef struct panda$core$String panda$core$String;

void panda$collections$ImmutableArray$init(panda$collections$ImmutableArray* self);
void panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self, panda$collections$ListView* p_data);
void panda$collections$ImmutableArray$init$panda$unsafe$Pointer$LTpanda$collections$ImmutableArray$T$GT$panda$core$Int64(panda$collections$ImmutableArray* self, panda$core$Object** p_data, panda$core$Int64 p_count);
panda$collections$ImmutableArray* panda$collections$ImmutableArray$from$panda$collections$Array$LTpanda$collections$ImmutableArray$T$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(panda$collections$Array* p_a);
void panda$collections$ImmutableArray$cleanup(panda$collections$ImmutableArray* self);
panda$core$Object* panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(panda$collections$ImmutableArray* self, panda$core$Int64 p_index);
panda$core$Int64 panda$collections$ImmutableArray$get_count$R$panda$core$Int64(panda$collections$ImmutableArray* self);
panda$collections$Iterator* panda$collections$ImmutableArray$iterator$R$panda$collections$Iterator$LTpanda$collections$ImmutableArray$T$GT(panda$collections$ImmutableArray* self);
panda$core$String* panda$collections$ImmutableArray$convert$R$panda$core$String(panda$collections$ImmutableArray* self);

