#pragma once
#include "frost_c.h"
#include "EquatableTuple3_types.h"
typedef struct frost$core$EquatableTuple3 frost$core$EquatableTuple3;
typedef struct frost$core$Equatable frost$core$Equatable;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Int64_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void frost$core$EquatableTuple3$init$frost$core$EquatableTuple3$T0$frost$core$EquatableTuple3$T1$frost$core$EquatableTuple3$T2(frost$core$EquatableTuple3* self, frost$core$Equatable* p_f0, frost$core$Equatable* p_f1, frost$core$Equatable* p_f2);
frost$core$Object* frost$core$EquatableTuple3$$IDX$frost$core$Int64$R$frost$core$Object$Q(frost$core$EquatableTuple3* self, frost$core$Int64 p_i);
frost$core$Bit frost$core$EquatableTuple3$$EQ$frost$core$EquatableTuple3$LTfrost$core$EquatableTuple3$T0$Cfrost$core$EquatableTuple3$T1$Cfrost$core$EquatableTuple3$T2$GT$R$frost$core$Bit(frost$core$EquatableTuple3* self, frost$core$EquatableTuple3* p_other);
frost$core$String* frost$core$EquatableTuple3$get_asString$R$frost$core$String(frost$core$EquatableTuple3* self);
void frost$core$EquatableTuple3$cleanup(frost$core$EquatableTuple3* self);

