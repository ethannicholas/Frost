#pragma once
#include "panda_c.h"
#include "System_types.h"
#include "panda/core/Int64_types.h"
typedef struct panda$core$System$Process panda$core$System$Process;
typedef struct panda$io$File panda$io$File;
typedef struct panda$collections$ListView panda$collections$ListView;
typedef struct panda$core$System panda$core$System;

void panda$core$System$exit$panda$core$Int64(panda$core$Int64 p_status);
void panda$core$System$crash();
panda$core$System$Process* panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(panda$io$File* p_path, panda$collections$ListView* p_args);
void panda$core$System$init(panda$core$System* self);
void panda$core$System$cleanup(panda$core$System* self);

