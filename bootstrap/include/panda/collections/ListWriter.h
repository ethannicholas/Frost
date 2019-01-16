#pragma once
#include "panda_c.h"
#include "ListWriter_types.h"
typedef struct panda$collections$ListWriter panda$collections$ListWriter;
#include "panda/core/Int64_types.h"
typedef struct panda$core$Object panda$core$Object;

void panda$collections$ListWriter$$IDXEQ$panda$core$Int64$panda$collections$ListWriter$T(panda$collections$ListWriter* self, panda$core$Int64 p_index, panda$core$Object* p_value);
void panda$collections$ListWriter$insert$panda$core$Int64$panda$collections$ListWriter$T(panda$collections$ListWriter* self, panda$core$Int64 p_index, panda$core$Object* p_value);
panda$core$Object* panda$collections$ListWriter$removeIndex$panda$core$Int64$R$panda$collections$ListWriter$T(panda$collections$ListWriter* self, panda$core$Int64 p_index);

