#pragma once
#include "panda_c.h"
#include "Immutable_types.h"
typedef struct panda$core$Immutable panda$core$Immutable;

void panda$core$Immutable$init(panda$core$Immutable* self);
void panda$core$Immutable$cleanup(panda$core$Immutable* self);

