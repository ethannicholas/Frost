#pragma once
#include "panda_c.h"
#include "ChoiceEntry_types.h"
typedef struct org$pandalanguage$pandac$ChoiceEntry org$pandalanguage$pandac$ChoiceEntry;
typedef struct org$pandalanguage$pandac$ClassDecl org$pandalanguage$pandac$ClassDecl;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct panda$core$String panda$core$String;
#include "panda/core/Int64_types.h"
typedef struct panda$collections$ListView panda$collections$ListView;

void org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$ChoiceEntry* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, panda$core$String* p_name, panda$core$String* p_doccomment, panda$core$Int64 p_rawValue, panda$collections$ListView* p_fields);
panda$core$String* org$pandalanguage$pandac$ChoiceEntry$convert$R$panda$core$String(org$pandalanguage$pandac$ChoiceEntry* self);
void org$pandalanguage$pandac$ChoiceEntry$cleanup(org$pandalanguage$pandac$ChoiceEntry* self);

