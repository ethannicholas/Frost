#pragma once
#include "frost_c.h"
#include "KeyTuple11_types.h"
typedef struct frost$core$KeyTuple11 frost$core$KeyTuple11;
typedef struct frost$collections$HashKey frost$collections$HashKey;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void frost$core$KeyTuple11$init$frost$core$KeyTuple11$T0$frost$core$KeyTuple11$T1$frost$core$KeyTuple11$T2$frost$core$KeyTuple11$T3$frost$core$KeyTuple11$T4$frost$core$KeyTuple11$T5$frost$core$KeyTuple11$T6$frost$core$KeyTuple11$T7$frost$core$KeyTuple11$T8$frost$core$KeyTuple11$T9$frost$core$KeyTuple11$T10(frost$core$KeyTuple11* self, frost$collections$HashKey* p_f0, frost$collections$HashKey* p_f1, frost$collections$HashKey* p_f2, frost$collections$HashKey* p_f3, frost$collections$HashKey* p_f4, frost$collections$HashKey* p_f5, frost$collections$HashKey* p_f6, frost$collections$HashKey* p_f7, frost$collections$HashKey* p_f8, frost$collections$HashKey* p_f9, frost$collections$HashKey* p_f10);
frost$core$Object* frost$core$KeyTuple11$$IDX$frost$core$Int$R$frost$core$Object$Q(frost$core$KeyTuple11* self, frost$core$Int p_i);
frost$core$Bit frost$core$KeyTuple11$$EQ$frost$core$KeyTuple11$LTfrost$core$KeyTuple11$T0$Cfrost$core$KeyTuple11$T1$Cfrost$core$KeyTuple11$T2$Cfrost$core$KeyTuple11$T3$Cfrost$core$KeyTuple11$T4$Cfrost$core$KeyTuple11$T5$Cfrost$core$KeyTuple11$T6$Cfrost$core$KeyTuple11$T7$Cfrost$core$KeyTuple11$T8$Cfrost$core$KeyTuple11$T9$Cfrost$core$KeyTuple11$T10$GT$R$frost$core$Bit(frost$core$KeyTuple11* self, frost$core$KeyTuple11* p_other);
frost$core$Int frost$core$KeyTuple11$get_hash$R$frost$core$Int(frost$core$KeyTuple11* self);
frost$core$String* frost$core$KeyTuple11$get_asString$R$frost$core$String(frost$core$KeyTuple11* self);
void frost$core$KeyTuple11$cleanup(frost$core$KeyTuple11* self);

