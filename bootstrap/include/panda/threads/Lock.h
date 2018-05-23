#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$threads$Lock {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 nativeLock;
} panda$threads$Lock;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[6]; } panda$threads$Lock$class_type;
extern panda$threads$Lock$class_type panda$threads$Lock$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$threads$Lock panda$threads$Lock;

void panda$threads$Lock$init(panda$threads$Lock* self);
void panda$threads$Lock$lock(panda$threads$Lock* self);
void panda$threads$Lock$unlock(panda$threads$Lock* self);
void panda$threads$Lock$cleanup(panda$threads$Lock* self);
void panda$threads$Lock$create(panda$threads$Lock* self);
void panda$threads$Lock$destroy(panda$threads$Lock* self);

#endif
