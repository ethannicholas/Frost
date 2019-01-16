#pragma once
#include "panda_c.h"
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "org/pandalanguage/json/Position_types.h"

typedef struct org$pandalanguage$json$Position {
    panda$core$Int64 line;
    panda$core$Int64 column;
} org$pandalanguage$json$Position;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$json$Position$class_type;
extern org$pandalanguage$json$Position$class_type org$pandalanguage$json$Position$class;
typedef struct org$pandalanguage$json$Position$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    org$pandalanguage$json$Position value;
} org$pandalanguage$json$Position$wrapper;
typedef struct org$pandalanguage$json$Position$nullable {
    org$pandalanguage$json$Position value;
    bool nonnull;
} org$pandalanguage$json$Position$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$json$Position$wrapperclass_type;
extern org$pandalanguage$json$Position$wrapperclass_type org$pandalanguage$json$Position$wrapperclass;

