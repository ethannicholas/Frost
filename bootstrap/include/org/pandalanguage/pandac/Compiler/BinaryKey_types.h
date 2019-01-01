#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct org$pandalanguage$pandac$ASTNode org$pandalanguage$pandac$ASTNode;
#include "org/pandalanguage/pandac/parser/Token/Kind_types.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$Compiler$BinaryKey {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    org$pandalanguage$pandac$ASTNode* left;
    org$pandalanguage$pandac$parser$Token$Kind op;
    org$pandalanguage$pandac$ASTNode* right;
} org$pandalanguage$pandac$Compiler$BinaryKey;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } org$pandalanguage$pandac$Compiler$BinaryKey$class_type;
extern org$pandalanguage$pandac$Compiler$BinaryKey$class_type org$pandalanguage$pandac$Compiler$BinaryKey$class;

