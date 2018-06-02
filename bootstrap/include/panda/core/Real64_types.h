#pragma once
#include "panda_c.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Real64_types.h"

typedef struct panda$core$Real64 {
    double value;
} panda$core$Real64;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[28]; } panda$core$Real64$class_type;
extern panda$core$Real64$class_type panda$core$Real64$class;
typedef struct panda$core$Real64$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$Real64 value;
} panda$core$Real64$wrapper;
typedef struct panda$core$Real64$nullable {
    panda$core$Real64 value;
    bool nonnull;
} panda$core$Real64$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$Real64$wrapperclass_type;
extern panda$core$Real64$wrapperclass_type panda$core$Real64$wrapperclass;

