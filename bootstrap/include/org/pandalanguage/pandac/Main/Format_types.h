#pragma once
#include "panda_c.h"
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "org/pandalanguage/pandac/Main/Format_types.h"

typedef struct org$pandalanguage$pandac$Main$Format {
    panda$core$Int64 $rawValue;
    int8_t $data[0];
} org$pandalanguage$pandac$Main$Format;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } org$pandalanguage$pandac$Main$Format$class_type;
extern org$pandalanguage$pandac$Main$Format$class_type org$pandalanguage$pandac$Main$Format$class;
typedef struct org$pandalanguage$pandac$Main$Format$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    org$pandalanguage$pandac$Main$Format value;
} org$pandalanguage$pandac$Main$Format$wrapper;
typedef struct org$pandalanguage$pandac$Main$Format$nullable {
    org$pandalanguage$pandac$Main$Format value;
    bool nonnull;
} org$pandalanguage$pandac$Main$Format$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Main$Format$wrapperclass_type;
extern org$pandalanguage$pandac$Main$Format$wrapperclass_type org$pandalanguage$pandac$Main$Format$wrapperclass;

