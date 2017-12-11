#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct org$pandalanguage$pandac$ClassDecl org$pandalanguage$pandac$ClassDecl;

typedef struct org$pandalanguage$pandac$ClassDecl$Resolution {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    org$pandalanguage$pandac$ClassDecl* value;
} org$pandalanguage$pandac$ClassDecl$Resolution;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$ClassDecl$Resolution$class_type;
extern org$pandalanguage$pandac$ClassDecl$Resolution$class_type org$pandalanguage$pandac$ClassDecl$Resolution$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$ClassDecl$Resolution org$pandalanguage$pandac$ClassDecl$Resolution;
typedef struct org$pandalanguage$pandac$ClassDecl org$pandalanguage$pandac$ClassDecl;

void org$pandalanguage$pandac$ClassDecl$Resolution$init$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$ClassDecl$Resolution* self, org$pandalanguage$pandac$ClassDecl* p_value);

#endif
