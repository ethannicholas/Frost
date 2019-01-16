#pragma once
#include "panda_c.h"
#include "Entry_types.h"
typedef struct panda$collections$HashMap$Entry panda$collections$HashMap$Entry;
typedef struct panda$collections$Key panda$collections$Key;
typedef struct panda$core$Object panda$core$Object;

void panda$collections$HashMap$Entry$init$panda$collections$HashMap$Entry$K$panda$collections$HashMap$Entry$V(panda$collections$HashMap$Entry* self, panda$collections$Key* p_key, panda$core$Object* p_value);
void panda$collections$HashMap$Entry$cleanup(panda$collections$HashMap$Entry* self);

