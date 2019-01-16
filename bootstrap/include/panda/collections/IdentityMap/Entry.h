#pragma once
#include "panda_c.h"
#include "Entry_types.h"
typedef struct panda$collections$IdentityMap$Entry panda$collections$IdentityMap$Entry;
typedef struct panda$core$Object panda$core$Object;

void panda$collections$IdentityMap$Entry$init$panda$collections$IdentityMap$Entry$K$panda$collections$IdentityMap$Entry$V(panda$collections$IdentityMap$Entry* self, panda$core$Object* p_key, panda$core$Object* p_value);
void panda$collections$IdentityMap$Entry$cleanup(panda$collections$IdentityMap$Entry* self);

