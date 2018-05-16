#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "org/pandalanguage/pandac/Variable/Storage.h"

typedef struct org$pandalanguage$pandac$Variable$Storage {
    panda$core$Int64 $rawValue;
    int8_t $data[0];
} org$pandalanguage$pandac$Variable$Storage;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
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

#ifndef PANDA_TYPESONLY
#include "org/pandalanguage/pandac/Variable/Storage.h"
#include "panda/core/Int64.h"

void org$pandalanguage$pandac$Variable$Storage$cleanup(org$pandalanguage$pandac$Variable$Storage self);
void org$pandalanguage$pandac$Variable$Storage$init$panda$core$Int64(org$pandalanguage$pandac$Variable$Storage* self, panda$core$Int64 p_rv);

#endif
