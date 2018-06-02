#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
#include "org/pandalanguage/pandac/Symbol/Kind_types.h"
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Weak panda$core$Weak;
typedef struct org$pandalanguage$pandac$Annotations org$pandalanguage$pandac$Annotations;
#include "org/pandalanguage/pandac/MethodDecl/Kind_types.h"
typedef struct panda$collections$Array panda$collections$Array;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
typedef struct panda$collections$ImmutableArray panda$collections$ImmutableArray;
#include "org/pandalanguage/pandac/Compiler/Resolution_types.h"
#include "panda/core/Bit_types.h"

typedef struct org$pandalanguage$pandac$MethodDecl {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    org$pandalanguage$pandac$Symbol$Kind kind;
    org$pandalanguage$pandac$Position position;
    panda$core$String* name;
    panda$core$Weak* owner;
    panda$core$String* doccomment;
    org$pandalanguage$pandac$Annotations* annotations;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind;
    panda$collections$Array* genericParameters;
    panda$collections$Array* parameters;
    org$pandalanguage$pandac$Type* returnType;
    panda$collections$ImmutableArray* body;
    panda$collections$ImmutableArray* compiledBody;
    org$pandalanguage$pandac$Compiler$Resolution resolved;
    panda$core$Bit overrideKnown;
    panda$core$Weak* overridden;
} org$pandalanguage$pandac$MethodDecl;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[9]; } org$pandalanguage$pandac$MethodDecl$class_type;
extern org$pandalanguage$pandac$MethodDecl$class_type org$pandalanguage$pandac$MethodDecl$class;

