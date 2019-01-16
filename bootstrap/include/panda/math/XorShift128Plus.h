#pragma once
#include "panda_c.h"
#include "XorShift128Plus_types.h"
typedef struct panda$math$XorShift128Plus panda$math$XorShift128Plus;
#include "panda/core/Int64_types.h"

void panda$math$XorShift128Plus$init$panda$core$Int64(panda$math$XorShift128Plus* self, panda$core$Int64 p_seed);
panda$core$Int64 panda$math$XorShift128Plus$int64$R$panda$core$Int64(panda$math$XorShift128Plus* self);
void panda$math$XorShift128Plus$cleanup(panda$math$XorShift128Plus* self);

