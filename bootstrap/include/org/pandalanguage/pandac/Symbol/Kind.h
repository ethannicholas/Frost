#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$Symbol$Kind {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} org$pandalanguage$pandac$Symbol$Kind;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Symbol$Kind$class_type;
extern org$pandalanguage$pandac$Symbol$Kind$class_type org$pandalanguage$pandac$Symbol$Kind$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$Symbol$Kind org$pandalanguage$pandac$Symbol$Kind;

void org$pandalanguage$pandac$Symbol$Kind$init(org$pandalanguage$pandac$Symbol$Kind* self);
void org$pandalanguage$pandac$Symbol$Kind$cleanup(org$pandalanguage$pandac$Symbol$Kind* self);

#endif
