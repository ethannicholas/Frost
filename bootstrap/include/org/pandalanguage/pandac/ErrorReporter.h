#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"

typedef struct org$pandalanguage$pandac$ErrorReporter {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} org$pandalanguage$pandac$ErrorReporter;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[3]; } org$pandalanguage$pandac$ErrorReporter$class_type;
extern org$pandalanguage$pandac$ErrorReporter$class_type org$pandalanguage$pandac$ErrorReporter$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$ErrorReporter org$pandalanguage$pandac$ErrorReporter;
typedef struct panda$io$File panda$io$File;
#include "org/pandalanguage/pandac/Position.h"
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$pandac$ErrorReporter$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$ErrorReporter* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_pos, panda$core$String* p_msg);

#endif
