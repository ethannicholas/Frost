#pragma once
#include "panda_c.h"
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "org/pandalanguage/pandac/IR/Statement/ID_types.h"

typedef struct org$pandalanguage$pandac$IR$Statement$ID {
    panda$core$Int64 value;
} org$pandalanguage$pandac$IR$Statement$ID;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[5]; } org$pandalanguage$pandac$IR$Statement$ID$class_type;
extern org$pandalanguage$pandac$IR$Statement$ID$class_type org$pandalanguage$pandac$IR$Statement$ID$class;
typedef struct org$pandalanguage$pandac$IR$Statement$ID$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    org$pandalanguage$pandac$IR$Statement$ID value;
} org$pandalanguage$pandac$IR$Statement$ID$wrapper;
typedef struct org$pandalanguage$pandac$IR$Statement$ID$nullable {
    org$pandalanguage$pandac$IR$Statement$ID value;
    bool nonnull;
} org$pandalanguage$pandac$IR$Statement$ID$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$IR$Statement$ID$wrapperclass_type;
extern org$pandalanguage$pandac$IR$Statement$ID$wrapperclass_type org$pandalanguage$pandac$IR$Statement$ID$wrapperclass;

