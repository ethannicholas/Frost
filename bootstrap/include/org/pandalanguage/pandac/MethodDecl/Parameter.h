#pragma once
#include "panda_c.h"
#include "Parameter_types.h"
typedef struct org$pandalanguage$pandac$MethodDecl$Parameter org$pandalanguage$pandac$MethodDecl$Parameter;
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;

void org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodDecl$Parameter* self, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_type);
panda$core$String* org$pandalanguage$pandac$MethodDecl$Parameter$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl$Parameter* self);
void org$pandalanguage$pandac$MethodDecl$Parameter$cleanup(org$pandalanguage$pandac$MethodDecl$Parameter* self);

