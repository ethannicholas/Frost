#pragma once
#include "frost_c.h"
#include "Notifier_types.h"
typedef struct frost$threads$Notifier frost$threads$Notifier;
typedef struct frost$threads$Lock frost$threads$Lock;

void frost$threads$Notifier$init$frost$threads$Lock(void* rawSelf, frost$threads$Lock* p_lock);
void frost$threads$Notifier$wait(void* rawSelf);
void frost$threads$Notifier$notify(void* rawSelf);
void frost$threads$Notifier$notifyAll(void* rawSelf);
void frost$threads$Notifier$cleanup(void* rawSelf);
void frost$threads$Notifier$create(void* rawSelf);
void frost$threads$Notifier$destroy(void* rawSelf);

