#pragma once
#include "panda_c.h"
#include "Variable_types.h"
typedef struct org$pandalanguage$pandac$Variable org$pandalanguage$pandac$Variable;
#include "org/pandalanguage/pandac/Position_types.h"
#include "org/pandalanguage/pandac/Variable/Kind_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
#include "org/pandalanguage/pandac/Variable/Storage_types.h"

void org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Variable* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Variable$Kind p_kind, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_type);
void org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable$Storage(org$pandalanguage$pandac$Variable* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Variable$Kind p_kind, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Variable$Storage p_storage);
panda$core$String* org$pandalanguage$pandac$Variable$convert$R$panda$core$String(org$pandalanguage$pandac$Variable* self);
void org$pandalanguage$pandac$Variable$cleanup(org$pandalanguage$pandac$Variable* self);

