#pragma once
#include "panda_c.h"
#include "MethodRef_types.h"
typedef struct org$pandalanguage$pandac$MethodRef org$pandalanguage$pandac$MethodRef;
typedef struct org$pandalanguage$pandac$MethodDecl org$pandalanguage$pandac$MethodDecl;
typedef struct panda$collections$ListView panda$collections$ListView;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$MethodRef* self, org$pandalanguage$pandac$MethodDecl* p_value, panda$collections$ListView* p_types);
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self);
panda$core$Int64 org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(org$pandalanguage$pandac$MethodRef* self);
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self, panda$core$Int64 p_index);
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self);
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self);
panda$core$String* org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String(org$pandalanguage$pandac$MethodRef* self);
void org$pandalanguage$pandac$MethodRef$cleanup(org$pandalanguage$pandac$MethodRef* self);

