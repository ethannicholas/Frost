#pragma once
#include "panda_c.h"
#include "JSON_types.h"
typedef struct panda$json$JSON$PathKey panda$json$JSON$PathKey;
typedef struct panda$core$String panda$core$String;
#include "panda/core/String/Index_types.h"
typedef struct panda$json$JSON panda$json$JSON;
#include "panda/core/Int64_types.h"
#include "panda/core/Real64_types.h"
#include "panda/core/Bit_types.h"
typedef struct panda$collections$ListView panda$collections$ListView;
typedef struct panda$collections$MapView panda$collections$MapView;

panda$json$JSON$PathKey* panda$json$JSON$nextPathKey$panda$core$String$panda$core$String$Index$R$panda$json$JSON$PathKey$Q(panda$core$String* p_path, panda$core$String$Index p_start);
panda$json$JSON* panda$json$JSON$get$panda$core$String$R$panda$json$JSON$Q(panda$json$JSON* self, panda$core$String* p_path);
panda$core$Int64$nullable panda$json$JSON$getInt$panda$core$String$R$panda$core$Int64$Q(panda$json$JSON* self, panda$core$String* p_path);
panda$core$Real64$nullable panda$json$JSON$getReal$panda$core$String$R$panda$core$Real64$Q(panda$json$JSON* self, panda$core$String* p_path);
panda$core$Bit$nullable panda$json$JSON$getBit$panda$core$String$R$panda$core$Bit$Q(panda$json$JSON* self, panda$core$String* p_path);
panda$core$String* panda$json$JSON$getString$panda$core$String$R$panda$core$String$Q(panda$json$JSON* self, panda$core$String* p_path);
panda$collections$ListView* panda$json$JSON$getArray$panda$core$String$R$panda$collections$ListView$LTpanda$json$JSON$GT$Q(panda$json$JSON* self, panda$core$String* p_path);
panda$collections$MapView* panda$json$JSON$getObject$panda$core$String$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT$Q(panda$json$JSON* self, panda$core$String* p_path);
panda$core$Int64 panda$json$JSON$asInt$R$panda$core$Int64(panda$json$JSON* self);
panda$core$Real64 panda$json$JSON$asReal$R$panda$core$Real64(panda$json$JSON* self);
panda$core$String* panda$json$JSON$asString$R$panda$core$String(panda$json$JSON* self);
panda$core$Bit panda$json$JSON$asBit$R$panda$core$Bit(panda$json$JSON* self);
panda$collections$MapView* panda$json$JSON$asObject$R$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT(panda$json$JSON* self);
panda$collections$ListView* panda$json$JSON$asArray$R$panda$collections$ListView$LTpanda$json$JSON$GT(panda$json$JSON* self);
panda$core$String* panda$json$JSON$convert$R$panda$core$String(panda$json$JSON* self);
void panda$json$JSON$cleanup(panda$json$JSON* self);
void panda$json$JSON$init$panda$core$Int64$panda$core$Int64(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$Int64 p_f0);
void panda$json$JSON$init$panda$core$Int64$panda$core$Real64(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$Real64 p_f0);
void panda$json$JSON$init$panda$core$Int64$panda$core$String(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$String* p_f0);
void panda$json$JSON$init$panda$core$Int64$panda$core$Bit(panda$json$JSON* self, panda$core$Int64 p_rv, panda$core$Bit p_f0);
void panda$json$JSON$init$panda$core$Int64$panda$collections$MapView$LTpanda$core$String$Cpanda$json$JSON$GT(panda$json$JSON* self, panda$core$Int64 p_rv, panda$collections$MapView* p_f0);
void panda$json$JSON$init$panda$core$Int64$panda$collections$ListView$LTpanda$json$JSON$GT(panda$json$JSON* self, panda$core$Int64 p_rv, panda$collections$ListView* p_f0);
void panda$json$JSON$init$panda$core$Int64(panda$json$JSON* self, panda$core$Int64 p_rv);

