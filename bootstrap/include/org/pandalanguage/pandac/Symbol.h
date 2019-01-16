#pragma once
#include "panda_c.h"
#include "Symbol_types.h"
typedef struct org$pandalanguage$pandac$Symbol org$pandalanguage$pandac$Symbol;
#include "org/pandalanguage/pandac/Symbol/Kind_types.h"
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct panda$core$String panda$core$String;
#include "panda/core/Bit_types.h"

void org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Symbol* self, org$pandalanguage$pandac$Symbol$Kind p_kind, org$pandalanguage$pandac$Position p_position, panda$core$String* p_name);
panda$core$Bit org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit(org$pandalanguage$pandac$Symbol* self);
void org$pandalanguage$pandac$Symbol$cleanup(org$pandalanguage$pandac$Symbol* self);

