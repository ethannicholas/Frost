#pragma once
#include "panda_c.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Real32_types.h"

typedef struct panda$core$Real32 {
    float value;
} panda$core$Real32;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[61]; } panda$core$Real32$class_type;
extern panda$core$Real32$class_type panda$core$Real32$class;
typedef struct panda$core$Real32$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$Real32 value;
} panda$core$Real32$wrapper;
typedef struct panda$core$Real32$nullable {
    panda$core$Real32 value;
    bool nonnull;
} panda$core$Real32$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Real32$wrapperclass_type;
extern panda$core$Real32$wrapperclass_type panda$core$Real32$wrapperclass;

