#pragma once
#include "panda_c.h"
#include "ImmutableArrayIterator_types.h"
typedef struct panda$collections$ImmutableArray$ImmutableArrayIterator panda$collections$ImmutableArray$ImmutableArrayIterator;
typedef struct panda$collections$ImmutableArray panda$collections$ImmutableArray;
#include "panda/core/Bit_types.h"
typedef struct panda$core$Object panda$core$Object;

void panda$collections$ImmutableArray$ImmutableArrayIterator$init$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$ImmutableArrayIterator$T$GT(panda$collections$ImmutableArray$ImmutableArrayIterator* self, panda$collections$ImmutableArray* p_array);
panda$core$Bit panda$collections$ImmutableArray$ImmutableArrayIterator$get_done$R$panda$core$Bit(panda$collections$ImmutableArray$ImmutableArrayIterator* self);
panda$core$Object* panda$collections$ImmutableArray$ImmutableArrayIterator$next$R$panda$collections$ImmutableArray$ImmutableArrayIterator$T(panda$collections$ImmutableArray$ImmutableArrayIterator* self);
void panda$collections$ImmutableArray$ImmutableArrayIterator$cleanup(panda$collections$ImmutableArray$ImmutableArrayIterator* self);

