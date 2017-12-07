#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"

typedef struct org$pandalanguage$pandac$FieldDecl$Kind {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} org$pandalanguage$pandac$FieldDecl$Kind;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$FieldDecl$Kind$class_type;
extern org$pandalanguage$pandac$FieldDecl$Kind$class_type org$pandalanguage$pandac$FieldDecl$Kind$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$FieldDecl$Kind org$pandalanguage$pandac$FieldDecl$Kind;

void org$pandalanguage$pandac$FieldDecl$Kind$init(org$pandalanguage$pandac$FieldDecl$Kind* self);

#endif
