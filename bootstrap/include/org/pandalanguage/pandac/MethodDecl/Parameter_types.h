#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
typedef struct panda$core$Weak panda$core$Weak;

typedef struct org$pandalanguage$pandac$MethodDecl$Parameter {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$String* name;
    org$pandalanguage$pandac$Type* type;
    panda$core$Weak* owner;
} org$pandalanguage$pandac$MethodDecl$Parameter;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$MethodDecl$Parameter$class_type;
extern org$pandalanguage$pandac$MethodDecl$Parameter$class_type org$pandalanguage$pandac$MethodDecl$Parameter$class;

