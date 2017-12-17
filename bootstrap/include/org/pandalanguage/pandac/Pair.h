#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$core$Object panda$core$Object;

typedef struct org$pandalanguage$pandac$Pair {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Object* first;
    panda$core$Object* second;
} org$pandalanguage$pandac$Pair;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Pair$class_type;
extern org$pandalanguage$pandac$Pair$class_type org$pandalanguage$pandac$Pair$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$Pair org$pandalanguage$pandac$Pair;
typedef struct panda$core$Object panda$core$Object;

void org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B(org$pandalanguage$pandac$Pair* self, panda$core$Object* p_first, panda$core$Object* p_second);

#endif
