#pragma once
#include "frost_c.h"
#include "KeyTuple9_types.h"
typedef struct frost$core$KeyTuple9 frost$core$KeyTuple9;
typedef struct frost$collections$HashKey frost$collections$HashKey;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void frost$core$KeyTuple9$init$frost$core$KeyTuple9$T0$frost$core$KeyTuple9$T1$frost$core$KeyTuple9$T2$frost$core$KeyTuple9$T3$frost$core$KeyTuple9$T4$frost$core$KeyTuple9$T5$frost$core$KeyTuple9$T6$frost$core$KeyTuple9$T7$frost$core$KeyTuple9$T8(frost$core$KeyTuple9* self, frost$collections$HashKey* p_f0, frost$collections$HashKey* p_f1, frost$collections$HashKey* p_f2, frost$collections$HashKey* p_f3, frost$collections$HashKey* p_f4, frost$collections$HashKey* p_f5, frost$collections$HashKey* p_f6, frost$collections$HashKey* p_f7, frost$collections$HashKey* p_f8);
frost$core$Object* frost$core$KeyTuple9$$IDX$frost$core$Int$R$frost$core$Object$Q(frost$core$KeyTuple9* self, frost$core$Int p_i);
frost$core$Bit frost$core$KeyTuple9$$EQ$frost$core$KeyTuple9$LTfrost$core$KeyTuple9$T0$Cfrost$core$KeyTuple9$T1$Cfrost$core$KeyTuple9$T2$Cfrost$core$KeyTuple9$T3$Cfrost$core$KeyTuple9$T4$Cfrost$core$KeyTuple9$T5$Cfrost$core$KeyTuple9$T6$Cfrost$core$KeyTuple9$T7$Cfrost$core$KeyTuple9$T8$GT$R$frost$core$Bit(frost$core$KeyTuple9* self, frost$core$KeyTuple9* p_other);
frost$core$Int frost$core$KeyTuple9$get_hash$R$frost$core$Int(frost$core$KeyTuple9* self);
frost$core$String* frost$core$KeyTuple9$get_asString$R$frost$core$String(frost$core$KeyTuple9* self);
void frost$core$KeyTuple9$cleanup(frost$core$KeyTuple9* self);

