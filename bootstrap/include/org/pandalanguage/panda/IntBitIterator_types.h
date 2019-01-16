#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
#include "panda/core/UInt64_types.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$panda$IntBitIterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$UInt64 value;
    panda$core$UInt64 mask;
} org$pandalanguage$panda$IntBitIterator;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } org$pandalanguage$panda$IntBitIterator$class_type;
extern org$pandalanguage$panda$IntBitIterator$class_type org$pandalanguage$panda$IntBitIterator$class;

