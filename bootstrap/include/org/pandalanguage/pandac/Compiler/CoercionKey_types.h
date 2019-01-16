#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct org$pandalanguage$pandac$ASTNode org$pandalanguage$pandac$ASTNode;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$Compiler$CoercionKey {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    org$pandalanguage$pandac$ASTNode* expr;
    org$pandalanguage$pandac$Type* target;
} org$pandalanguage$pandac$Compiler$CoercionKey;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } org$pandalanguage$pandac$Compiler$CoercionKey$class_type;
extern org$pandalanguage$pandac$Compiler$CoercionKey$class_type org$pandalanguage$pandac$Compiler$CoercionKey$class;

