#pragma once
#include "panda_c.h"
#include "Process_types.h"
#include "panda/core/Int64_types.h"
typedef struct panda$core$System$Process panda$core$System$Process;

void panda$core$System$Process$waitFor$R$panda$core$Int64(panda$core$Int64* result, panda$core$System$Process* self);
void panda$core$System$Process$init(panda$core$System$Process* self);
void panda$core$System$Process$cleanup(panda$core$System$Process* self);

