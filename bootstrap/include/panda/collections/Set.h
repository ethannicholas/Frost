#pragma once
#include "panda_c.h"
#include "Set_types.h"
typedef struct panda$collections$Set panda$collections$Set;
typedef struct panda$collections$CollectionView panda$collections$CollectionView;
typedef struct panda$collections$Key panda$collections$Key;
#include "panda/core/Int64_types.h"
typedef struct panda$collections$Iterator panda$collections$Iterator;
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;

void panda$collections$Set$init(panda$collections$Set* self);
void panda$collections$Set$init$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(panda$collections$Set* self, panda$collections$CollectionView* p_c);
void panda$collections$Set$add$panda$collections$Set$T(panda$collections$Set* self, panda$collections$Key* p_value);
void panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(panda$collections$Set* self, panda$collections$CollectionView* p_c);
panda$core$Int64 panda$collections$Set$get_count$R$panda$core$Int64(panda$collections$Set* self);
void panda$collections$Set$clear(panda$collections$Set* self);
panda$collections$Iterator* panda$collections$Set$iterator$R$panda$collections$Iterator$LTpanda$collections$Set$T$GT(panda$collections$Set* self);
panda$core$Bit panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(panda$collections$Set* self, panda$collections$Key* p_value);
panda$core$String* panda$collections$Set$convert$R$panda$core$String(panda$collections$Set* self);
void panda$collections$Set$cleanup(panda$collections$Set* self);

