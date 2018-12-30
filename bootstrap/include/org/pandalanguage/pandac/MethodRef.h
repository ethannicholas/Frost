#pragma once
#include "panda_c.h"
#include "MethodRef_types.h"
typedef struct org$pandalanguage$pandac$MethodRef org$pandalanguage$pandac$MethodRef;
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
typedef struct org$pandalanguage$pandac$MethodDecl org$pandalanguage$pandac$MethodDecl;
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$MethodRef* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Type* p_target, org$pandalanguage$pandac$MethodDecl* p_value);
panda$core$Int64 org$pandalanguage$pandac$MethodRef$get_parameterCount$R$panda$core$Int64(org$pandalanguage$pandac$MethodRef* self);
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self, panda$core$Int64 p_index);
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self);
panda$core$String* org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String(org$pandalanguage$pandac$MethodRef* self);
void org$pandalanguage$pandac$MethodRef$cleanup(org$pandalanguage$pandac$MethodRef* self);

