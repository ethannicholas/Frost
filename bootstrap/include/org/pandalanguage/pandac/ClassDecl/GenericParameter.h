#pragma once
#include "panda_c.h"
#include "GenericParameter_types.h"
typedef struct org$pandalanguage$pandac$ClassDecl$GenericParameter org$pandalanguage$pandac$ClassDecl$GenericParameter;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;

void org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl$GenericParameter* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_bound);
panda$core$String* org$pandalanguage$pandac$ClassDecl$GenericParameter$convert$R$panda$core$String(org$pandalanguage$pandac$ClassDecl$GenericParameter* self);
void org$pandalanguage$pandac$ClassDecl$GenericParameter$cleanup(org$pandalanguage$pandac$ClassDecl$GenericParameter* self);

