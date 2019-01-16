#pragma once
#include "panda_c.h"
#include "Class_types.h"
typedef struct panda$core$Class panda$core$Class;

void panda$core$Class$init(panda$core$Class* self);
void panda$core$Class$cleanup(panda$core$Class* self);

