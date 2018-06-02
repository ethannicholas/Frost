#pragma once
#include "panda_c.h"
#include "Entry_types.h"
typedef struct panda$collections$ImmutableHashMap$Entry panda$collections$ImmutableHashMap$Entry;
typedef struct panda$collections$Key panda$collections$Key;
typedef struct panda$core$Object panda$core$Object;

void panda$collections$ImmutableHashMap$Entry$init$panda$collections$ImmutableHashMap$Entry$K$panda$collections$ImmutableHashMap$Entry$V(panda$collections$ImmutableHashMap$Entry* self, panda$collections$Key* p_key, panda$core$Object* p_value);
void panda$collections$ImmutableHashMap$Entry$cleanup(panda$collections$ImmutableHashMap$Entry* self);

