#pragma once
#include "frost_c.h"
#include "EquatableTuple4_types.h"
typedef struct frost$core$EquatableTuple4 frost$core$EquatableTuple4;
typedef struct frost$core$Equatable frost$core$Equatable;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Int64_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void frost$core$EquatableTuple4$init$frost$core$EquatableTuple4$T0$frost$core$EquatableTuple4$T1$frost$core$EquatableTuple4$T2$frost$core$EquatableTuple4$T3(frost$core$EquatableTuple4* self, frost$core$Equatable* p_f0, frost$core$Equatable* p_f1, frost$core$Equatable* p_f2, frost$core$Equatable* p_f3);
frost$core$Object* frost$core$EquatableTuple4$$IDX$frost$core$Int64$R$frost$core$Object$Q(frost$core$EquatableTuple4* self, frost$core$Int64 p_i);
frost$core$Bit frost$core$EquatableTuple4$$EQ$frost$core$EquatableTuple4$LTfrost$core$EquatableTuple4$T0$Cfrost$core$EquatableTuple4$T1$Cfrost$core$EquatableTuple4$T2$Cfrost$core$EquatableTuple4$T3$GT$R$frost$core$Bit(frost$core$EquatableTuple4* self, frost$core$EquatableTuple4* p_other);
frost$core$String* frost$core$EquatableTuple4$get_asString$R$frost$core$String(frost$core$EquatableTuple4* self);
void frost$core$EquatableTuple4$cleanup(frost$core$EquatableTuple4* self);

