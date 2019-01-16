#pragma once
#include "panda_c.h"
#include "Kind_types.h"
typedef struct panda$core$String panda$core$String;
#include "org/pandalanguage/json/Token/Kind_types.h"
#include "panda/core/Int64_types.h"
#include "panda/core/Bit_types.h"

panda$core$String* org$pandalanguage$json$Token$Kind$convert$R$panda$core$String(org$pandalanguage$json$Token$Kind self);
void org$pandalanguage$json$Token$Kind$cleanup(org$pandalanguage$json$Token$Kind self);
org$pandalanguage$json$Token$Kind org$pandalanguage$json$Token$Kind$init$panda$core$Int64(panda$core$Int64 p_rv);
panda$core$Bit org$pandalanguage$json$Token$Kind$$EQ$org$pandalanguage$json$Token$Kind$R$panda$core$Bit(org$pandalanguage$json$Token$Kind self, org$pandalanguage$json$Token$Kind p_other);

