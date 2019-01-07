#pragma once
#include "panda_c.h"
#include "ImmutableHashMap_types.h"
typedef struct panda$collections$ImmutableHashMap panda$collections$ImmutableHashMap;
#include "panda/core/Int64_types.h"
typedef struct panda$collections$Key panda$collections$Key;
typedef struct panda$core$Object panda$core$Object;
#include "panda/core/Bit_types.h"
typedef struct panda$collections$Iterator panda$collections$Iterator;
typedef struct panda$core$String panda$core$String;
typedef struct panda$collections$HashMap panda$collections$HashMap;

void panda$collections$ImmutableHashMap$init(panda$collections$ImmutableHashMap* self);
void panda$collections$ImmutableHashMap$cleanup(panda$collections$ImmutableHashMap* self);
panda$core$Int64 panda$collections$ImmutableHashMap$indexFor$panda$collections$ImmutableHashMap$K$R$panda$core$Int64(panda$collections$ImmutableHashMap* self, panda$collections$Key* p_key);
panda$core$Object* panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q(panda$collections$ImmutableHashMap* self, panda$collections$Key* p_key);
panda$core$Bit panda$collections$ImmutableHashMap$contains$panda$collections$ImmutableHashMap$K$R$panda$core$Bit(panda$collections$ImmutableHashMap* self, panda$collections$Key* p_key);
panda$collections$Iterator* panda$collections$ImmutableHashMap$keys$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$K$GT(panda$collections$ImmutableHashMap* self);
panda$collections$Iterator* panda$collections$ImmutableHashMap$values$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$V$GT(panda$collections$ImmutableHashMap* self);
panda$core$Int64 panda$collections$ImmutableHashMap$get_count$R$panda$core$Int64(panda$collections$ImmutableHashMap* self);
panda$core$String* panda$collections$ImmutableHashMap$convert$R$panda$core$String(panda$collections$ImmutableHashMap* self);
panda$collections$ImmutableHashMap* panda$collections$ImmutableHashMap$from$panda$collections$HashMap$LTpanda$collections$ImmutableHashMap$K$Cpanda$collections$ImmutableHashMap$V$GT$R$panda$collections$ImmutableHashMap$LTpanda$collections$ImmutableHashMap$K$Cpanda$collections$ImmutableHashMap$V$GT(panda$collections$HashMap* p_map);

