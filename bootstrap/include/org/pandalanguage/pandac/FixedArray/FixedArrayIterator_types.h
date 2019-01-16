#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct org$pandalanguage$pandac$FixedArray org$pandalanguage$pandac$FixedArray;
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$FixedArray$FixedArrayIterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    org$pandalanguage$pandac$FixedArray* array;
    panda$core$Int64 index;
} org$pandalanguage$pandac$FixedArray$FixedArrayIterator;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } org$pandalanguage$pandac$FixedArray$FixedArrayIterator$class_type;
extern org$pandalanguage$pandac$FixedArray$FixedArrayIterator$class_type org$pandalanguage$pandac$FixedArray$FixedArrayIterator$class;

