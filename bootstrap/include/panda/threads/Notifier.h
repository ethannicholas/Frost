#pragma once
#include "panda_c.h"
#include "Notifier_types.h"
typedef struct panda$threads$Notifier panda$threads$Notifier;
typedef struct panda$threads$Lock panda$threads$Lock;

void panda$threads$Notifier$init$panda$threads$Lock(panda$threads$Notifier* self, panda$threads$Lock* p_lock);
void panda$threads$Notifier$wait(panda$threads$Notifier* self);
void panda$threads$Notifier$notify(panda$threads$Notifier* self);
void panda$threads$Notifier$notifyAll(panda$threads$Notifier* self);
void panda$threads$Notifier$cleanup(panda$threads$Notifier* self);
void panda$threads$Notifier$create(panda$threads$Notifier* self);
void panda$threads$Notifier$destroy(panda$threads$Notifier* self);

