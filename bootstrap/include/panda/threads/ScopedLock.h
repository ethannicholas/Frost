#pragma once
#include "panda_c.h"
#include "ScopedLock_types.h"
typedef struct panda$threads$ScopedLock panda$threads$ScopedLock;
typedef struct panda$threads$Lock panda$threads$Lock;

void panda$threads$ScopedLock$init$panda$threads$Lock(panda$threads$ScopedLock* self, panda$threads$Lock* p_lock);
void panda$threads$ScopedLock$cleanup(panda$threads$ScopedLock* self);

