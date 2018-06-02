#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
#include "panda/core/SteppedRange.LTpanda/core/UInt32.Cpanda/core/UInt32.GT.h"
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$panda$UInt32List {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT range;
    panda$core$Int64 _count;
} org$pandalanguage$panda$UInt32List;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[5]; } org$pandalanguage$panda$UInt32List$class_type;
extern org$pandalanguage$panda$UInt32List$class_type org$pandalanguage$panda$UInt32List$class;

