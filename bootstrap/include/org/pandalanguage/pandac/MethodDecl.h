#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "org/pandalanguage/pandac/Position.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Weak panda$core$Weak;
typedef struct org$pandalanguage$pandac$Annotations org$pandalanguage$pandac$Annotations;
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
typedef struct panda$collections$Array panda$collections$Array;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
typedef struct panda$collections$ImmutableArray panda$collections$ImmutableArray;
#include "org/pandalanguage/pandac/Compiler/Resolution.h"
#include "panda/core/Bit.h"

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
    panda$collections$Array* parameters;
    org$pandalanguage$pandac$Type* returnType;
    panda$collections$ImmutableArray* body;
    panda$collections$ImmutableArray* compiledBody;
    org$pandalanguage$pandac$Compiler$Resolution resolved;
    panda$core$Bit overrideKnown;
    panda$core$Weak* overridden;
} org$pandalanguage$pandac$MethodDecl;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[9]; } org$pandalanguage$pandac$MethodDecl$class_type;
extern org$pandalanguage$pandac$MethodDecl$class_type org$pandalanguage$pandac$MethodDecl$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$MethodDecl org$pandalanguage$pandac$MethodDecl;
typedef struct org$pandalanguage$pandac$ClassDecl org$pandalanguage$pandac$ClassDecl;
#include "org/pandalanguage/pandac/Position.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$Annotations org$pandalanguage$pandac$Annotations;
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
typedef struct panda$collections$Array panda$collections$Array;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
typedef struct panda$collections$ImmutableArray panda$collections$ImmutableArray;
#include "panda/core/Bit.h"

void org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, panda$core$String* p_doccomment, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$MethodDecl$Kind p_methodKind, panda$core$String* p_name, panda$collections$Array* p_parameters, org$pandalanguage$pandac$Type* p_returnType, panda$collections$ImmutableArray* p_body);
panda$core$Bit org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self);
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self);
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self);
panda$core$Bit org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* self, org$pandalanguage$pandac$MethodDecl* p_other);
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodDecl$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodDecl* self);
panda$core$String* org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self);
panda$core$String* org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self);
panda$core$String* org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* self);
void org$pandalanguage$pandac$MethodDecl$cleanup(org$pandalanguage$pandac$MethodDecl* self);

#endif
