#pragma once
#include "panda_c.h"
#include "UnsafeMessageQueue_types.h"
typedef struct panda$unsafe$UnsafeMessageQueue panda$unsafe$UnsafeMessageQueue;
typedef struct panda$core$Object panda$core$Object;
#include "panda/core/Int64_types.h"
#include "panda/core/Bit_types.h"

void panda$unsafe$UnsafeMessageQueue$post$panda$unsafe$UnsafeMessageQueue$T(panda$unsafe$UnsafeMessageQueue* self, panda$core$Object* p_data);
panda$core$Int64 panda$unsafe$UnsafeMessageQueue$pendingMessages$R$panda$core$Int64(panda$unsafe$UnsafeMessageQueue* self);
panda$core$Bit panda$unsafe$UnsafeMessageQueue$hasMessage$R$panda$core$Bit(panda$unsafe$UnsafeMessageQueue* self);
panda$core$Object* panda$unsafe$UnsafeMessageQueue$getMessage$R$panda$unsafe$UnsafeMessageQueue$T(panda$unsafe$UnsafeMessageQueue* self);
void panda$unsafe$UnsafeMessageQueue$clear(panda$unsafe$UnsafeMessageQueue* self);
void panda$unsafe$UnsafeMessageQueue$init(panda$unsafe$UnsafeMessageQueue* self);
void panda$unsafe$UnsafeMessageQueue$cleanup(panda$unsafe$UnsafeMessageQueue* self);

