#pragma once
#include "frost_c.h"
#include "MessageQueue_types.h"
typedef struct frost$threads$MessageQueue frost$threads$MessageQueue;
typedef struct frost$core$Immutable frost$core$Immutable;
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"

void frost$threads$MessageQueue$post$frost$threads$MessageQueue$T(void* rawSelf, frost$core$Immutable* p_data);
frost$core$Int frost$threads$MessageQueue$pendingMessages$R$frost$core$Int(void* rawSelf);
frost$core$Bit frost$threads$MessageQueue$hasMessage$R$frost$core$Bit(void* rawSelf);
frost$core$Immutable* frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T(void* rawSelf);
void frost$threads$MessageQueue$clear(void* rawSelf);
void frost$threads$MessageQueue$init(void* rawSelf);
void frost$threads$MessageQueue$cleanup(void* rawSelf);

