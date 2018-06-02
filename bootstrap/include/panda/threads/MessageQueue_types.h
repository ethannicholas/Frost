#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$threads$Lock panda$threads$Lock;
typedef struct panda$threads$Notifier panda$threads$Notifier;
#include "panda/core/Int64_types.h"
typedef struct panda$threads$MessageQueue$Message panda$threads$MessageQueue$Message;
typedef struct panda$core$String panda$core$String;

typedef struct panda$threads$MessageQueue {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$threads$Lock* lock;
    panda$threads$Notifier* notifier;
    panda$core$Int64 count;
    panda$threads$MessageQueue$Message* head;
    panda$threads$MessageQueue$Message* tail;
} panda$threads$MessageQueue;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[6]; } panda$threads$MessageQueue$class_type;
extern panda$threads$MessageQueue$class_type panda$threads$MessageQueue$class;

