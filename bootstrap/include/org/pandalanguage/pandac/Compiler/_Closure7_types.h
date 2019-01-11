#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$Compiler$_Closure7 {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    org$pandalanguage$pandac$Type* left;
} org$pandalanguage$pandac$Compiler$_Closure7;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[3]; } org$pandalanguage$pandac$Compiler$_Closure7$class_type;
extern org$pandalanguage$pandac$Compiler$_Closure7$class_type org$pandalanguage$pandac$Compiler$_Closure7$class;

