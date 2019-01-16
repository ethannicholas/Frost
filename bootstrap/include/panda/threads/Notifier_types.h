#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
#include "panda/core/Int64_types.h"
typedef struct panda$threads$Lock panda$threads$Lock;
typedef struct panda$core$String panda$core$String;

typedef struct panda$threads$Notifier {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 nativeNotifier;
    panda$threads$Lock* lock;
} panda$threads$Notifier;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[7]; } panda$threads$Notifier$class_type;
extern panda$threads$Notifier$class_type panda$threads$Notifier$class;

