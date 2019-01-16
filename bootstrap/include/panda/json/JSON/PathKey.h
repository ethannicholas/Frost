#pragma once
#include "panda_c.h"
#include "PathKey_types.h"
typedef struct panda$json$JSON$PathKey panda$json$JSON$PathKey;
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;
#include "panda/core/String/Index_types.h"
#include "panda/core/Bit_types.h"

void panda$json$JSON$PathKey$cleanup(panda$json$JSON$PathKey* self);
void panda$json$JSON$PathKey$init$panda$core$Int64$panda$core$String$panda$core$String$Index(panda$json$JSON$PathKey* self, panda$core$Int64 p_rv, panda$core$String* p_f0, panda$core$String$Index p_f1);
void panda$json$JSON$PathKey$init$panda$core$Int64$panda$core$Int64$panda$core$String$Index(panda$json$JSON$PathKey* self, panda$core$Int64 p_rv, panda$core$Int64 p_f0, panda$core$String$Index p_f1);
panda$core$Bit panda$json$JSON$PathKey$$EQ$panda$json$JSON$PathKey$R$panda$core$Bit(panda$json$JSON$PathKey* self, panda$json$JSON$PathKey* p_other);

