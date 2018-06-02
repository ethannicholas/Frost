#pragma once
#include "panda_c.h"
#include "Position_types.h"
#include "org/pandalanguage/json/Position_types.h"
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$json$Position$init(org$pandalanguage$json$Position* self);
void org$pandalanguage$json$Position$init$panda$core$Int64$panda$core$Int64(org$pandalanguage$json$Position* self, panda$core$Int64 p_line, panda$core$Int64 p_column);
panda$core$String* org$pandalanguage$json$Position$convert$R$panda$core$String(org$pandalanguage$json$Position self);
void org$pandalanguage$json$Position$cleanup(org$pandalanguage$json$Position self);

