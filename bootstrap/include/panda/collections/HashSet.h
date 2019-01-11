#pragma once
#include "panda_c.h"
#include "HashSet_types.h"
typedef struct panda$collections$HashSet panda$collections$HashSet;
typedef struct panda$collections$CollectionView panda$collections$CollectionView;
typedef struct panda$collections$Key panda$collections$Key;
#include "panda/core/Int64_types.h"
typedef struct panda$collections$Iterator panda$collections$Iterator;
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;

void panda$collections$HashSet$init(panda$collections$HashSet* self);
void panda$collections$HashSet$init$panda$collections$CollectionView$LTpanda$collections$HashSet$T$GT(panda$collections$HashSet* self, panda$collections$CollectionView* p_c);
void panda$collections$HashSet$add$panda$collections$HashSet$T(panda$collections$HashSet* self, panda$collections$Key* p_value);
void panda$collections$HashSet$addAll$panda$collections$CollectionView$LTpanda$collections$HashSet$T$GT(panda$collections$HashSet* self, panda$collections$CollectionView* p_c);
panda$core$Int64 panda$collections$HashSet$get_count$R$panda$core$Int64(panda$collections$HashSet* self);
void panda$collections$HashSet$clear(panda$collections$HashSet* self);
panda$collections$Iterator* panda$collections$HashSet$get_iterator$R$panda$collections$Iterator$LTpanda$collections$HashSet$T$GT(panda$collections$HashSet* self);
panda$core$Bit panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(panda$collections$HashSet* self, panda$collections$Key* p_value);
panda$core$String* panda$collections$HashSet$convert$R$panda$core$String(panda$collections$HashSet* self);
void panda$collections$HashSet$cleanup(panda$collections$HashSet* self);

