#pragma once
#include "frost_c.h"
#include "UnsafeMessageQueue_types.h"
typedef struct frost$unsafe$UnsafeMessageQueue frost$unsafe$UnsafeMessageQueue;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"

void frost$unsafe$UnsafeMessageQueue$post$frost$unsafe$UnsafeMessageQueue$T(void* rawSelf, frost$core$Object* p_data);
frost$core$Int frost$unsafe$UnsafeMessageQueue$pendingMessages$R$frost$core$Int(void* rawSelf);
frost$core$Bit frost$unsafe$UnsafeMessageQueue$hasMessage$R$frost$core$Bit(void* rawSelf);
frost$core$Object* frost$unsafe$UnsafeMessageQueue$getMessage$R$frost$unsafe$UnsafeMessageQueue$T(void* rawSelf);
void frost$unsafe$UnsafeMessageQueue$clear(void* rawSelf);
void frost$unsafe$UnsafeMessageQueue$init(void* rawSelf);
void frost$unsafe$UnsafeMessageQueue$cleanup(void* rawSelf);

