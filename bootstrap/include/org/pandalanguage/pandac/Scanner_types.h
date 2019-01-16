#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$core$Weak panda$core$Weak;
typedef struct org$pandalanguage$pandac$ClassDecl org$pandalanguage$pandac$ClassDecl;
typedef struct panda$io$File panda$io$File;
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$Scanner {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Weak* compiler;
    org$pandalanguage$pandac$ClassDecl* bareCodeClass;
    panda$io$File* source;
} org$pandalanguage$pandac$Scanner;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[16]; } org$pandalanguage$pandac$Scanner$class_type;
extern org$pandalanguage$pandac$Scanner$class_type org$pandalanguage$pandac$Scanner$class;

