#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
#include "panda/core/Int64.h"
typedef struct panda$core$Class panda$core$Class;
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"

typedef struct org$pandalanguage$pandac$MethodDecl$Kind {
    panda$core$Int64 $rawValue;
} org$pandalanguage$pandac$MethodDecl$Kind;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$MethodDecl$Kind$class_type;
extern org$pandalanguage$pandac$MethodDecl$Kind$class_type org$pandalanguage$pandac$MethodDecl$Kind$class;
typedef struct org$pandalanguage$pandac$MethodDecl$Kind$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    org$pandalanguage$pandac$MethodDecl$Kind value;
} org$pandalanguage$pandac$MethodDecl$Kind$wrapper;
typedef struct org$pandalanguage$pandac$MethodDecl$Kind$nullable {
    org$pandalanguage$pandac$MethodDecl$Kind value;
    bool nonnull;
} org$pandalanguage$pandac$MethodDecl$Kind$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass_type;
extern org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass_type org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* wrap_org$pandalanguage$pandac$MethodDecl$Kind(org$pandalanguage$pandac$MethodDecl$Kind self);

#ifndef PANDA_TYPESONLY
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "panda/core/Int64.h"

void org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(org$pandalanguage$pandac$MethodDecl$Kind* self, panda$core$Int64 p_rv);
void org$pandalanguage$pandac$MethodDecl$Kind$init(org$pandalanguage$pandac$MethodDecl$Kind* self);

#endif
