#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
#include "panda/core/Int64_types.h"
typedef struct panda$collections$Array panda$collections$Array;
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$Annotations {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 flags;
    panda$collections$Array* expressions;
} org$pandalanguage$pandac$Annotations;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[17]; } org$pandalanguage$pandac$Annotations$class_type;
extern org$pandalanguage$pandac$Annotations$class_type org$pandalanguage$pandac$Annotations$class;

