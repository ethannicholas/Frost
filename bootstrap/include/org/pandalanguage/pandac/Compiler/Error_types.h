#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$io$File panda$io$File;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$Compiler$Error {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$io$File* file;
    org$pandalanguage$pandac$Position position;
    panda$core$String* message;
} org$pandalanguage$pandac$Compiler$Error;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$Compiler$Error$class_type;
extern org$pandalanguage$pandac$Compiler$Error$class_type org$pandalanguage$pandac$Compiler$Error$class;

