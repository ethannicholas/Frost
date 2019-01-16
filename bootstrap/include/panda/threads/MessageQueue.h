#pragma once
#include "panda_c.h"
#include "MessageQueue_types.h"
typedef struct panda$threads$MessageQueue panda$threads$MessageQueue;
typedef struct panda$core$Immutable panda$core$Immutable;
#include "panda/core/Int64_types.h"
#include "panda/core/Bit_types.h"

void panda$threads$MessageQueue$post$panda$threads$MessageQueue$T(panda$threads$MessageQueue* self, panda$core$Immutable* p_data);
panda$core$Int64 panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(panda$threads$MessageQueue* self);
panda$core$Bit panda$threads$MessageQueue$hasMessage$R$panda$core$Bit(panda$threads$MessageQueue* self);
panda$core$Immutable* panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T(panda$threads$MessageQueue* self);
void panda$threads$MessageQueue$clear(panda$threads$MessageQueue* self);
void panda$threads$MessageQueue$init(panda$threads$MessageQueue* self);
void panda$threads$MessageQueue$cleanup(panda$threads$MessageQueue* self);

