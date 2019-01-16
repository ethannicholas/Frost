#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$collections$ListView panda$collections$ListView;
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$Main$Arguments {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$ListView* args;
    panda$core$Int64 index;
} org$pandalanguage$pandac$Main$Arguments;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[5]; } org$pandalanguage$pandac$Main$Arguments$class_type;
extern org$pandalanguage$pandac$Main$Arguments$class_type org$pandalanguage$pandac$Main$Arguments$class;

