#pragma once
#include "panda_c.h"
#include "IdentityMap_types.h"
typedef struct panda$collections$IdentityMap panda$collections$IdentityMap;
#include "panda/core/Int64_types.h"
typedef struct panda$core$Object panda$core$Object;
#include "panda/core/Bit_types.h"
typedef struct panda$collections$Iterator panda$collections$Iterator;
typedef struct panda$core$String panda$core$String;

void panda$collections$IdentityMap$init(panda$collections$IdentityMap* self);
void panda$collections$IdentityMap$cleanup(panda$collections$IdentityMap* self);
panda$core$Int64 panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(panda$collections$IdentityMap* self, panda$core$Object* p_key);
panda$core$Object* panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(panda$collections$IdentityMap* self, panda$core$Object* p_key);
panda$core$Bit panda$collections$IdentityMap$contains$panda$collections$IdentityMap$K$R$panda$core$Bit(panda$collections$IdentityMap* self, panda$core$Object* p_key);
void panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(panda$collections$IdentityMap* self, panda$core$Object* p_key, panda$core$Object* p_value);
void panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(panda$collections$IdentityMap* self, panda$core$Object* p_key);
void panda$collections$IdentityMap$clear(panda$collections$IdentityMap* self);
void panda$collections$IdentityMap$incrementCount(panda$collections$IdentityMap* self);
panda$core$Int64 panda$collections$IdentityMap$get_count$R$panda$core$Int64(panda$collections$IdentityMap* self);
panda$collections$Iterator* panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT(panda$collections$IdentityMap* self);
panda$collections$Iterator* panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT(panda$collections$IdentityMap* self);
panda$core$String* panda$collections$IdentityMap$convert$R$panda$core$String(panda$collections$IdentityMap* self);

