#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$threads$Lock panda$threads$Lock;
typedef struct panda$threads$Notifier panda$threads$Notifier;
#include "panda/core/Int64_types.h"
typedef struct panda$unsafe$UnsafeMessageQueue$Message panda$unsafe$UnsafeMessageQueue$Message;
typedef struct panda$core$String panda$core$String;

typedef struct panda$unsafe$UnsafeMessageQueue {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$threads$Lock* lock;
    panda$threads$Notifier* notifier;
    panda$core$Int64 count;
    panda$unsafe$UnsafeMessageQueue$Message* head;
    panda$unsafe$UnsafeMessageQueue$Message* tail;
} panda$unsafe$UnsafeMessageQueue;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[7]; } panda$unsafe$UnsafeMessageQueue$class_type;
extern panda$unsafe$UnsafeMessageQueue$class_type panda$unsafe$UnsafeMessageQueue$class;

