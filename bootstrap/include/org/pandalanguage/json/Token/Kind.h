#pragma once
#include "panda_c.h"
#include "Kind_types.h"
typedef struct panda$core$String panda$core$String;
#include "org/pandalanguage/json/Token/Kind_types.h"
#include "panda/core/Int64_types.h"

panda$core$String* org$pandalanguage$json$Token$Kind$convert$R$panda$core$String(org$pandalanguage$json$Token$Kind self);
void org$pandalanguage$json$Token$Kind$cleanup(org$pandalanguage$json$Token$Kind self);
void org$pandalanguage$json$Token$Kind$init$panda$core$Int64(org$pandalanguage$json$Token$Kind* self, panda$core$Int64 p_rv);

