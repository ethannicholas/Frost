#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$collections$ImmutableArray panda$collections$ImmutableArray;

typedef struct org$pandalanguage$pandac$Methods {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 kind;
    panda$core$Int64 offset;
    panda$core$String* name;
    panda$collections$ImmutableArray* methods;
} org$pandalanguage$pandac$Methods;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[3]; } org$pandalanguage$pandac$Methods$class_type;
extern org$pandalanguage$pandac$Methods$class_type org$pandalanguage$pandac$Methods$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$Methods org$pandalanguage$pandac$Methods;
typedef struct panda$collections$ListView panda$collections$ListView;

void org$pandalanguage$pandac$Methods$init$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Methods* self, panda$collections$ListView* p_methods);

#endif
