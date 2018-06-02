#pragma once
#include "panda_c.h"
#include "CollectionView_types.h"
#include "panda/core/Int64_types.h"
typedef struct panda$collections$CollectionView panda$collections$CollectionView;
typedef struct panda$core$MutableMethod panda$core$MutableMethod;
typedef struct panda$core$Object panda$core$Object;

panda$core$Int64 panda$collections$CollectionView$get_count$R$panda$core$Int64(panda$collections$CollectionView* self);
panda$collections$CollectionView* panda$collections$CollectionView$filter$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$CollectionView$LTpanda$collections$CollectionView$T$GT(panda$collections$CollectionView* self, panda$core$MutableMethod* p_predicate);
panda$core$Object* panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T(panda$collections$CollectionView* self, panda$core$MutableMethod* p_f);
panda$core$Object* panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T(panda$collections$CollectionView* self, panda$core$MutableMethod* p_f, panda$core$Object* p_start);
void panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP(panda$collections$CollectionView* self, panda$core$MutableMethod* p_m);

