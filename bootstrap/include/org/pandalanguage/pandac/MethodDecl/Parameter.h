#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;

typedef struct org$pandalanguage$pandac$MethodDecl$Parameter {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$String* name;
    org$pandalanguage$pandac$Type* type;
} org$pandalanguage$pandac$MethodDecl$Parameter;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$MethodDecl$Parameter$class_type;
extern org$pandalanguage$pandac$MethodDecl$Parameter$class_type org$pandalanguage$pandac$MethodDecl$Parameter$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$MethodDecl$Parameter org$pandalanguage$pandac$MethodDecl$Parameter;
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;

void org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodDecl$Parameter* self, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_type);
panda$core$String* org$pandalanguage$pandac$MethodDecl$Parameter$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl$Parameter* self);
void org$pandalanguage$pandac$MethodDecl$Parameter$cleanup(org$pandalanguage$pandac$MethodDecl$Parameter* self);

#endif
