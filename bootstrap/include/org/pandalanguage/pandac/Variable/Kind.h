#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"

typedef struct org$pandalanguage$pandac$Variable$Kind {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} org$pandalanguage$pandac$Variable$Kind;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Variable$Kind$class_type;
extern org$pandalanguage$pandac$Variable$Kind$class_type org$pandalanguage$pandac$Variable$Kind$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$Variable$Kind org$pandalanguage$pandac$Variable$Kind;

void org$pandalanguage$pandac$Variable$Kind$init(org$pandalanguage$pandac$Variable$Kind* self);

#endif
