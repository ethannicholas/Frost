#pragma once
#include "frost_c.h"
#include "EquatableTuple2_types.h"
typedef struct frost$core$EquatableTuple2 frost$core$EquatableTuple2;
typedef struct frost$core$Equatable frost$core$Equatable;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Int64_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void frost$core$EquatableTuple2$init$frost$core$EquatableTuple2$T0$frost$core$EquatableTuple2$T1(frost$core$EquatableTuple2* self, frost$core$Equatable* p_f0, frost$core$Equatable* p_f1);
frost$core$Object* frost$core$EquatableTuple2$$IDX$frost$core$Int64$R$frost$core$Object$Q(frost$core$EquatableTuple2* self, frost$core$Int64 p_i);
frost$core$Bit frost$core$EquatableTuple2$$EQ$frost$core$EquatableTuple2$LTfrost$core$EquatableTuple2$T0$Cfrost$core$EquatableTuple2$T1$GT$R$frost$core$Bit(frost$core$EquatableTuple2* self, frost$core$EquatableTuple2* p_other);
frost$core$String* frost$core$EquatableTuple2$get_asString$R$frost$core$String(frost$core$EquatableTuple2* self);
void frost$core$EquatableTuple2$cleanup(frost$core$EquatableTuple2* self);

