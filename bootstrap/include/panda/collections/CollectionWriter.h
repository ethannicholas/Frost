#pragma once
#include "panda_c.h"
#include "CollectionWriter_types.h"
typedef struct panda$collections$CollectionWriter panda$collections$CollectionWriter;
typedef struct panda$core$Object panda$core$Object;
typedef struct panda$collections$CollectionView panda$collections$CollectionView;

void panda$collections$CollectionWriter$add$panda$collections$CollectionWriter$T(panda$collections$CollectionWriter* self, panda$core$Object* p_value);
void panda$collections$CollectionWriter$addAll$panda$collections$CollectionView$LTpanda$collections$CollectionWriter$T$GT(panda$collections$CollectionWriter* self, panda$collections$CollectionView* p_c);
void panda$collections$CollectionWriter$clear(panda$collections$CollectionWriter* self);

