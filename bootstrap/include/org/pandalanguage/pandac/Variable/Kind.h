#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"

typedef struct org$pandalanguage$pandac$Variable$Kind {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 $rawValue;
    int8_t $data[0];
} org$pandalanguage$pandac$Variable$Kind;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Variable$Kind$class_type;
extern org$pandalanguage$pandac$Variable$Kind$class_type org$pandalanguage$pandac$Variable$Kind$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$Variable$Kind org$pandalanguage$pandac$Variable$Kind;
#include "panda/core/Int64.h"

void org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(org$pandalanguage$pandac$Variable$Kind* self, panda$core$Int64 p_rv);
void org$pandalanguage$pandac$Variable$Kind$init(org$pandalanguage$pandac$Variable$Kind* self);

#endif
