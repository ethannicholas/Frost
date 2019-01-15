#pragma once
#include "frost_c.h"
#include "Notifier_types.h"
typedef struct frost$threads$Notifier frost$threads$Notifier;
typedef struct frost$threads$Lock frost$threads$Lock;

void frost$threads$Notifier$init$frost$threads$Lock(frost$threads$Notifier* self, frost$threads$Lock* p_lock);
void frost$threads$Notifier$wait(frost$threads$Notifier* self);
void frost$threads$Notifier$notify(frost$threads$Notifier* self);
void frost$threads$Notifier$notifyAll(frost$threads$Notifier* self);
void frost$threads$Notifier$cleanup(frost$threads$Notifier* self);
void frost$threads$Notifier$create(frost$threads$Notifier* self);
void frost$threads$Notifier$destroy(frost$threads$Notifier* self);

