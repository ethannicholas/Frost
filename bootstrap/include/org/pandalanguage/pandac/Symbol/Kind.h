#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "org/pandalanguage/pandac/Symbol/Kind.h"

typedef struct org$pandalanguage$pandac$Symbol$Kind {
    panda$core$Int64 $rawValue;
    int8_t $data[0];
} org$pandalanguage$pandac$Symbol$Kind;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Symbol$Kind$class_type;
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

#ifndef PANDA_TYPESONLY
#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "panda/core/Int64.h"

void org$pandalanguage$pandac$Symbol$Kind$cleanup(org$pandalanguage$pandac$Symbol$Kind self);
void org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(org$pandalanguage$pandac$Symbol$Kind* self, panda$core$Int64 p_rv);

#endif
