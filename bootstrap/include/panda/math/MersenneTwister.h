#pragma once
#include "panda_c.h"
#include "MersenneTwister_types.h"
typedef struct panda$math$MersenneTwister panda$math$MersenneTwister;
typedef struct panda$math$Random panda$math$Random;
typedef struct panda$collections$Array panda$collections$Array;
#include "panda/core/Int64_types.h"
typedef struct panda$collections$ListView panda$collections$ListView;
#include "panda/core/UInt32_types.h"
#include "panda/core/Int32_types.h"

void panda$math$MersenneTwister$init(panda$math$MersenneTwister* self);
void panda$math$MersenneTwister$init$panda$math$Random(panda$math$MersenneTwister* self, panda$math$Random* p_seed);
void panda$math$MersenneTwister$init$panda$collections$Array$LTpanda$core$UInt32$GT(panda$math$MersenneTwister* self, panda$collections$Array* p_state);
void panda$math$MersenneTwister$init$panda$core$Int64(panda$math$MersenneTwister* self, panda$core$Int64 p_seed);
panda$collections$ListView* panda$math$MersenneTwister$get_state$R$panda$collections$ListView$LTpanda$core$UInt32$GT(panda$math$MersenneTwister* self);
panda$core$UInt32 panda$math$MersenneTwister$extract$R$panda$core$UInt32(panda$math$MersenneTwister* self);
void panda$math$MersenneTwister$twist(panda$math$MersenneTwister* self);
panda$core$Int32 panda$math$MersenneTwister$int32$R$panda$core$Int32(panda$math$MersenneTwister* self);
panda$core$Int64 panda$math$MersenneTwister$int64$R$panda$core$Int64(panda$math$MersenneTwister* self);
void panda$math$MersenneTwister$cleanup(panda$math$MersenneTwister* self);

