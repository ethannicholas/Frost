#pragma once
#include "panda_c.h"
#include "Random_types.h"
typedef struct panda$math$Random panda$math$Random;
#include "panda/core/Bit_types.h"
#include "panda/core/Int32_types.h"
#include "panda/core/Int64_types.h"
#include "panda/core/Real32_types.h"
#include "panda/core/Real64_types.h"

panda$math$Random* panda$math$Random$default$R$panda$math$Random();
panda$core$Bit panda$math$Random$bit$R$panda$core$Bit(panda$math$Random* self);
panda$core$Int32 panda$math$Random$int32$R$panda$core$Int32(panda$math$Random* self);
panda$core$Int64 panda$math$Random$int64$R$panda$core$Int64(panda$math$Random* self);
panda$core$Int64 panda$math$Random$int$panda$core$Int64$R$panda$core$Int64(panda$math$Random* self, panda$core$Int64 p_n);
panda$core$Real32 panda$math$Random$real32$R$panda$core$Real32(panda$math$Random* self);
panda$core$Real64 panda$math$Random$real64$R$panda$core$Real64(panda$math$Random* self);

