#pragma once
#include "panda_c.h"
#include "Value_types.h"
typedef struct panda$core$Value panda$core$Value;

void panda$core$Value$init(panda$core$Value* self);
void panda$core$Value$cleanup(panda$core$Value* self);

