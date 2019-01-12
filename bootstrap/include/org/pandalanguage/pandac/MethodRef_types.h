#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
typedef struct org$pandalanguage$pandac$MethodDecl org$pandalanguage$pandac$MethodDecl;
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$MethodRef {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    org$pandalanguage$pandac$Type* target;
    org$pandalanguage$pandac$MethodDecl* value;
    org$pandalanguage$pandac$Type* effectiveType;
    panda$core$Bit requiresTypeInference;
} org$pandalanguage$pandac$MethodRef;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[5]; } org$pandalanguage$pandac$MethodRef$class_type;
extern org$pandalanguage$pandac$MethodRef$class_type org$pandalanguage$pandac$MethodRef$class;

