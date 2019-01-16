#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
#include "org/pandalanguage/pandac/Symbol/Kind_types.h"
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Weak panda$core$Weak;
typedef struct org$pandalanguage$pandac$Annotations org$pandalanguage$pandac$Annotations;
#include "org/pandalanguage/pandac/FieldDecl/Kind_types.h"
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
typedef struct org$pandalanguage$pandac$ASTNode org$pandalanguage$pandac$ASTNode;
#include "org/pandalanguage/pandac/Compiler/Resolution_types.h"

typedef struct org$pandalanguage$pandac$FieldDecl {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    org$pandalanguage$pandac$Symbol$Kind kind;
    org$pandalanguage$pandac$Position position;
    panda$core$String* name;
    panda$core$Weak* owner;
    panda$core$String* doccomment;
    org$pandalanguage$pandac$Annotations* annotations;
    org$pandalanguage$pandac$FieldDecl$Kind fieldKind;
    org$pandalanguage$pandac$Type* type;
    org$pandalanguage$pandac$ASTNode* rawValue;
    org$pandalanguage$pandac$Compiler$Resolution resolved;
} org$pandalanguage$pandac$FieldDecl;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[3]; } org$pandalanguage$pandac$FieldDecl$class_type;
extern org$pandalanguage$pandac$FieldDecl$class_type org$pandalanguage$pandac$FieldDecl$class;

