#pragma once
#include "panda_c.h"
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "org/pandalanguage/pandac/Position_types.h"

typedef struct org$pandalanguage$pandac$Position {
    panda$core$Int64 line;
    panda$core$Int64 column;
} org$pandalanguage$pandac$Position;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Position$class_type;
extern org$pandalanguage$pandac$Position$class_type org$pandalanguage$pandac$Position$class;
typedef struct org$pandalanguage$pandac$Position$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    org$pandalanguage$pandac$Position value;
} org$pandalanguage$pandac$Position$wrapper;
typedef struct org$pandalanguage$pandac$Position$nullable {
    org$pandalanguage$pandac$Position value;
    bool nonnull;
} org$pandalanguage$pandac$Position$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Position$wrapperclass_type;
extern org$pandalanguage$pandac$Position$wrapperclass_type org$pandalanguage$pandac$Position$wrapperclass;

