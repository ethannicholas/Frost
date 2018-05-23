#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$threads$Lock panda$threads$Lock;
typedef struct panda$core$String panda$core$String;

typedef struct panda$threads$ScopedLock {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$threads$Lock* lock;
} panda$threads$ScopedLock;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$threads$ScopedLock$class_type;
extern panda$threads$ScopedLock$class_type panda$threads$ScopedLock$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$threads$ScopedLock panda$threads$ScopedLock;
typedef struct panda$threads$Lock panda$threads$Lock;

void panda$threads$ScopedLock$init$panda$threads$Lock(panda$threads$ScopedLock* self, panda$threads$Lock* p_lock);
void panda$threads$ScopedLock$cleanup(panda$threads$ScopedLock* self);

#endif
