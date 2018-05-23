#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"
typedef struct panda$threads$Lock panda$threads$Lock;
typedef struct panda$core$String panda$core$String;

typedef struct panda$threads$Notifier {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 nativeNotifier;
    panda$threads$Lock* lock;
} panda$threads$Notifier;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[7]; } panda$threads$Notifier$class_type;
extern panda$threads$Notifier$class_type panda$threads$Notifier$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$threads$Notifier panda$threads$Notifier;
typedef struct panda$threads$Lock panda$threads$Lock;

void panda$threads$Notifier$init$panda$threads$Lock(panda$threads$Notifier* self, panda$threads$Lock* p_lock);
void panda$threads$Notifier$wait(panda$threads$Notifier* self);
void panda$threads$Notifier$notify(panda$threads$Notifier* self);
void panda$threads$Notifier$notifyAll(panda$threads$Notifier* self);
void panda$threads$Notifier$cleanup(panda$threads$Notifier* self);
void panda$threads$Notifier$create(panda$threads$Notifier* self);
void panda$threads$Notifier$destroy(panda$threads$Notifier* self);

#endif
