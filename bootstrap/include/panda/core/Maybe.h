#pragma once
#include "panda_c.h"
#include "Maybe_types.h"
typedef struct panda$core$Object panda$core$Object;
typedef struct panda$core$Maybe panda$core$Maybe;
typedef struct panda$core$Error panda$core$Error;
#include "panda/core/Bit_types.h"
typedef struct panda$core$String panda$core$String;
#include "panda/core/Int64_types.h"

panda$core$Object* panda$core$Maybe$get$R$panda$core$Maybe$T(panda$core$Maybe* self);
panda$core$Error* panda$core$Maybe$error$R$panda$core$Error(panda$core$Maybe* self);
panda$core$Bit panda$core$Maybe$succeeded$R$panda$core$Bit(panda$core$Maybe* self);
panda$core$String* panda$core$Maybe$convert$R$panda$core$String(panda$core$Maybe* self);
void panda$core$Maybe$cleanup(panda$core$Maybe* self);
void panda$core$Maybe$init$panda$core$Int64$panda$core$Maybe$T(panda$core$Maybe* self, panda$core$Int64 p_rv, panda$core$Object* p_f0);
void panda$core$Maybe$init$panda$core$Int64$panda$core$Error(panda$core$Maybe* self, panda$core$Int64 p_rv, panda$core$Error* p_f0);

