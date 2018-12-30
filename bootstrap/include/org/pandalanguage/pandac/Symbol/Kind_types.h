#pragma once
#include "panda_c.h"
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "org/pandalanguage/pandac/Symbol/Kind_types.h"

typedef struct org$pandalanguage$pandac$Symbol$Kind {
    panda$core$Int64 $rawValue;
    int8_t $data[0];
} org$pandalanguage$pandac$Symbol$Kind;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } org$pandalanguage$pandac$Symbol$Kind$class_type;
extern org$pandalanguage$pandac$Symbol$Kind$class_type org$pandalanguage$pandac$Symbol$Kind$class;
typedef struct org$pandalanguage$pandac$Symbol$Kind$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    org$pandalanguage$pandac$Symbol$Kind value;
} org$pandalanguage$pandac$Symbol$Kind$wrapper;
typedef struct org$pandalanguage$pandac$Symbol$Kind$nullable {
    org$pandalanguage$pandac$Symbol$Kind value;
    bool nonnull;
} org$pandalanguage$pandac$Symbol$Kind$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Symbol$Kind$wrapperclass_type;
extern org$pandalanguage$pandac$Symbol$Kind$wrapperclass_type org$pandalanguage$pandac$Symbol$Kind$wrapperclass;

