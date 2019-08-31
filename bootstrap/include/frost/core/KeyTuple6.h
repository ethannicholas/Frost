#pragma once
#include "frost_c.h"
#include "KeyTuple6_types.h"
typedef struct frost$core$KeyTuple6 frost$core$KeyTuple6;
typedef struct frost$collections$HashKey frost$collections$HashKey;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void frost$core$KeyTuple6$init$frost$core$KeyTuple6$T0$frost$core$KeyTuple6$T1$frost$core$KeyTuple6$T2$frost$core$KeyTuple6$T3$frost$core$KeyTuple6$T4$frost$core$KeyTuple6$T5(frost$core$KeyTuple6* self, frost$collections$HashKey* p_f0, frost$collections$HashKey* p_f1, frost$collections$HashKey* p_f2, frost$collections$HashKey* p_f3, frost$collections$HashKey* p_f4, frost$collections$HashKey* p_f5);
frost$core$Object* frost$core$KeyTuple6$$IDX$frost$core$Int$R$frost$core$Object$Q(frost$core$KeyTuple6* self, frost$core$Int p_i);
frost$core$Bit frost$core$KeyTuple6$$EQ$frost$core$KeyTuple6$LTfrost$core$KeyTuple6$T0$Cfrost$core$KeyTuple6$T1$Cfrost$core$KeyTuple6$T2$Cfrost$core$KeyTuple6$T3$Cfrost$core$KeyTuple6$T4$Cfrost$core$KeyTuple6$T5$GT$R$frost$core$Bit(frost$core$KeyTuple6* self, frost$core$KeyTuple6* p_other);
frost$core$Int frost$core$KeyTuple6$get_hash$R$frost$core$Int(frost$core$KeyTuple6* self);
frost$core$String* frost$core$KeyTuple6$get_asString$R$frost$core$String(frost$core$KeyTuple6* self);
void frost$core$KeyTuple6$cleanup(frost$core$KeyTuple6* self);

