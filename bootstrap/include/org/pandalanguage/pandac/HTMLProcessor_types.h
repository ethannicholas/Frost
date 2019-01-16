#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$HTMLProcessor {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} org$pandalanguage$pandac$HTMLProcessor;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } org$pandalanguage$pandac$HTMLProcessor$class_type;
extern org$pandalanguage$pandac$HTMLProcessor$class_type org$pandalanguage$pandac$HTMLProcessor$class;

