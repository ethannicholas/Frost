#pragma once
#include "panda_c.h"
#include "HashMap_types.h"
typedef struct panda$collections$HashMap panda$collections$HashMap;
typedef struct panda$collections$MapView panda$collections$MapView;
#include "panda/core/Int64_types.h"
typedef struct panda$collections$Key panda$collections$Key;
typedef struct panda$core$Object panda$core$Object;
#include "panda/core/Bit_types.h"
typedef struct panda$collections$Iterator panda$collections$Iterator;
typedef struct panda$core$String panda$core$String;
typedef struct panda$collections$ImmutableHashMap panda$collections$ImmutableHashMap;

void panda$collections$HashMap$init(panda$collections$HashMap* self);
void panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT(panda$collections$HashMap* self, panda$collections$MapView* p_map);
void panda$collections$HashMap$cleanup(panda$collections$HashMap* self);
panda$core$Int64 panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(panda$collections$HashMap* self, panda$collections$Key* p_key);
panda$core$Object* panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(panda$collections$HashMap* self, panda$collections$Key* p_key);
panda$core$Bit panda$collections$HashMap$contains$panda$collections$HashMap$K$R$panda$core$Bit(panda$collections$HashMap* self, panda$collections$Key* p_key);
void panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(panda$collections$HashMap* self, panda$collections$Key* p_key, panda$core$Object* p_value);
void panda$collections$HashMap$remove$panda$collections$HashMap$K(panda$collections$HashMap* self, panda$collections$Key* p_key);
void panda$collections$HashMap$clear(panda$collections$HashMap* self);
void panda$collections$HashMap$incrementCount(panda$collections$HashMap* self);
panda$collections$Iterator* panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(panda$collections$HashMap* self);
panda$collections$Iterator* panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT(panda$collections$HashMap* self);
panda$core$Int64 panda$collections$HashMap$get_count$R$panda$core$Int64(panda$collections$HashMap* self);
panda$core$String* panda$collections$HashMap$convert$R$panda$core$String(panda$collections$HashMap* self);
panda$collections$ImmutableHashMap* panda$collections$HashMap$finish$R$panda$collections$ImmutableHashMap$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT(panda$collections$HashMap* self);

