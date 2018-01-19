#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$Main$Format {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} org$pandalanguage$pandac$Main$Format;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Main$Format$class_type;
extern org$pandalanguage$pandac$Main$Format$class_type org$pandalanguage$pandac$Main$Format$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$Main$Format org$pandalanguage$pandac$Main$Format;

void org$pandalanguage$pandac$Main$Format$init(org$pandalanguage$pandac$Main$Format* self);
void org$pandalanguage$pandac$Main$Format$cleanup(org$pandalanguage$pandac$Main$Format* self);

#endif
