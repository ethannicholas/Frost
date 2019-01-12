#pragma once
#include "panda_c.h"
#include "GenericParameter_types.h"
typedef struct org$pandalanguage$pandac$MethodDecl$GenericParameter org$pandalanguage$pandac$MethodDecl$GenericParameter;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;

void org$pandalanguage$pandac$MethodDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodDecl$GenericParameter* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_bound);
panda$core$String* org$pandalanguage$pandac$MethodDecl$GenericParameter$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl$GenericParameter* self);
void org$pandalanguage$pandac$MethodDecl$GenericParameter$cleanup(org$pandalanguage$pandac$MethodDecl$GenericParameter* self);

