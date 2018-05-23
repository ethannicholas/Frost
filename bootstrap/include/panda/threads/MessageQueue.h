#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$threads$Lock panda$threads$Lock;
typedef struct panda$threads$Notifier panda$threads$Notifier;
#include "panda/core/Int64.h"
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
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[6]; } panda$threads$MessageQueue$class_type;
extern panda$threads$MessageQueue$class_type panda$threads$MessageQueue$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$threads$MessageQueue panda$threads$MessageQueue;
typedef struct panda$core$Immutable panda$core$Immutable;
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"

void panda$threads$MessageQueue$post$panda$threads$MessageQueue$T(panda$threads$MessageQueue* self, panda$core$Immutable* p_data);
panda$core$Int64 panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(panda$threads$MessageQueue* self);
panda$core$Bit panda$threads$MessageQueue$hasMessage$R$panda$core$Bit(panda$threads$MessageQueue* self);
panda$core$Immutable* panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T(panda$threads$MessageQueue* self);
void panda$threads$MessageQueue$init(panda$threads$MessageQueue* self);
void panda$threads$MessageQueue$cleanup(panda$threads$MessageQueue* self);

#endif
