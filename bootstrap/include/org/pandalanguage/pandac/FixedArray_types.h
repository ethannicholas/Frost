#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
#include "panda/core/Int64_types.h"
typedef struct panda$core$Object panda$core$Object;
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$FixedArray {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 _count;
    panda$core$Int64 dummy;
    panda$core$Object** data;
} org$pandalanguage$pandac$FixedArray;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[5]; } org$pandalanguage$pandac$FixedArray$class_type;
extern org$pandalanguage$pandac$FixedArray$class_type org$pandalanguage$pandac$FixedArray$class;

