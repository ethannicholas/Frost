#pragma once
#include "panda_c.h"
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "org/pandalanguage/pandac/Variable/Storage_types.h"

typedef struct org$pandalanguage$pandac$Variable$Storage {
    panda$core$Int64 $rawValue;
    int8_t $data[0];
} org$pandalanguage$pandac$Variable$Storage;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Variable$Storage$class_type;
extern org$pandalanguage$pandac$Variable$Storage$class_type org$pandalanguage$pandac$Variable$Storage$class;
typedef struct org$pandalanguage$pandac$Variable$Storage$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    org$pandalanguage$pandac$Variable$Storage value;
} org$pandalanguage$pandac$Variable$Storage$wrapper;
typedef struct org$pandalanguage$pandac$Variable$Storage$nullable {
    org$pandalanguage$pandac$Variable$Storage value;
    bool nonnull;
} org$pandalanguage$pandac$Variable$Storage$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Variable$Storage$wrapperclass_type;
extern org$pandalanguage$pandac$Variable$Storage$wrapperclass_type org$pandalanguage$pandac$Variable$Storage$wrapperclass;

