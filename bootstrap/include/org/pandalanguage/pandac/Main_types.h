#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$io$File panda$io$File;
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$Main {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$io$File* opt;
    panda$io$File* llc;
    panda$io$File* gcc;
    panda$io$File* pandaHome;
} org$pandalanguage$pandac$Main;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[8]; } org$pandalanguage$pandac$Main$class_type;
extern org$pandalanguage$pandac$Main$class_type org$pandalanguage$pandac$Main$class;

