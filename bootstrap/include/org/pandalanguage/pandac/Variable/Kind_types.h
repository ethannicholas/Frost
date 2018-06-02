#pragma once
#include "panda_c.h"
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "org/pandalanguage/pandac/Variable/Kind_types.h"

typedef struct org$pandalanguage$pandac$Variable$Kind {
    panda$core$Int64 $rawValue;
    int8_t $data[0];
} org$pandalanguage$pandac$Variable$Kind;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Variable$Kind$class_type;
extern org$pandalanguage$pandac$Variable$Kind$class_type org$pandalanguage$pandac$Variable$Kind$class;
typedef struct org$pandalanguage$pandac$Variable$Kind$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    org$pandalanguage$pandac$Variable$Kind value;
} org$pandalanguage$pandac$Variable$Kind$wrapper;
typedef struct org$pandalanguage$pandac$Variable$Kind$nullable {
    org$pandalanguage$pandac$Variable$Kind value;
    bool nonnull;
} org$pandalanguage$pandac$Variable$Kind$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Variable$Kind$wrapperclass_type;
extern org$pandalanguage$pandac$Variable$Kind$wrapperclass_type org$pandalanguage$pandac$Variable$Kind$wrapperclass;

