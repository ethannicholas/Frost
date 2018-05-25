#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$io$File panda$io$File;
#include "org/pandalanguage/pandac/Position.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$Compiler$Error {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$io$File* file;
    org$pandalanguage$pandac$Position position;
    panda$core$String* message;
} org$pandalanguage$pandac$Compiler$Error;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Compiler$Error$class_type;
extern org$pandalanguage$pandac$Compiler$Error$class_type org$pandalanguage$pandac$Compiler$Error$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$Compiler$Error org$pandalanguage$pandac$Compiler$Error;
typedef struct panda$io$File panda$io$File;
#include "org/pandalanguage/pandac/Position.h"
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$pandac$Compiler$Error$init$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler$Error* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_position, panda$core$String* p_message);
void org$pandalanguage$pandac$Compiler$Error$cleanup(org$pandalanguage$pandac$Compiler$Error* self);

#endif
