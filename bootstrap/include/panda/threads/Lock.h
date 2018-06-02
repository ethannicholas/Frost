#pragma once
#include "panda_c.h"
#include "Lock_types.h"
typedef struct panda$threads$Lock panda$threads$Lock;

void panda$threads$Lock$init(panda$threads$Lock* self);
void panda$threads$Lock$lock(panda$threads$Lock* self);
void panda$threads$Lock$unlock(panda$threads$Lock* self);
void panda$threads$Lock$cleanup(panda$threads$Lock* self);
void panda$threads$Lock$create(panda$threads$Lock* self);
void panda$threads$Lock$destroy(panda$threads$Lock* self);

