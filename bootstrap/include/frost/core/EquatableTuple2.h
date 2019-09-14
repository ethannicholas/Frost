#pragma once
#include "frost_c.h"
#include "EquatableTuple2_types.h"
typedef struct frost$core$EquatableTuple2 frost$core$EquatableTuple2;
typedef struct frost$core$Equatable frost$core$Equatable;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void frost$core$EquatableTuple2$init$frost$core$EquatableTuple2$T0$frost$core$EquatableTuple2$T1(void* rawSelf, frost$core$Equatable* p_f0, frost$core$Equatable* p_f1);
frost$core$Object* frost$core$EquatableTuple2$$IDX$frost$core$Int$R$frost$core$Object$Q(void* rawSelf, frost$core$Int p_i);
frost$core$Bit frost$core$EquatableTuple2$$EQ$frost$core$EquatableTuple2$LTfrost$core$EquatableTuple2$T0$Cfrost$core$EquatableTuple2$T1$GT$R$frost$core$Bit(void* rawSelf, frost$core$EquatableTuple2* p_other);
frost$core$String* frost$core$EquatableTuple2$get_asString$R$frost$core$String(void* rawSelf);
void frost$core$EquatableTuple2$cleanup(void* rawSelf);

