#pragma once
#include "panda_c.h"
#include "MethodRef_types.h"
typedef struct org$pandalanguage$pandac$MethodRef org$pandalanguage$pandac$MethodRef;
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
typedef struct org$pandalanguage$pandac$IRNode org$pandalanguage$pandac$IRNode;
typedef struct org$pandalanguage$pandac$MethodDecl org$pandalanguage$pandac$MethodDecl;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
typedef struct org$pandalanguage$pandac$ClassDecl org$pandalanguage$pandac$ClassDecl;
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$MethodRef* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodDecl* p_value);
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$findType$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Type* p_start, org$pandalanguage$pandac$ClassDecl* p_target);
panda$core$Int64 org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(org$pandalanguage$pandac$MethodRef* self);
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self, panda$core$Int64 p_index);
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* self);
panda$core$String* org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String(org$pandalanguage$pandac$MethodRef* self);
void org$pandalanguage$pandac$MethodRef$cleanup(org$pandalanguage$pandac$MethodRef* self);

