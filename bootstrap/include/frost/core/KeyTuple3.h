#pragma once
#include "frost_c.h"
#include "KeyTuple3_types.h"
typedef struct frost$core$KeyTuple3 frost$core$KeyTuple3;
typedef struct frost$collections$Key frost$collections$Key;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void frost$core$KeyTuple3$init$frost$core$KeyTuple3$T0$frost$core$KeyTuple3$T1$frost$core$KeyTuple3$T2(frost$core$KeyTuple3* self, frost$collections$Key* p_f0, frost$collections$Key* p_f1, frost$collections$Key* p_f2);
frost$core$Object* frost$core$KeyTuple3$$IDX$frost$core$Int$R$frost$core$Object$Q(frost$core$KeyTuple3* self, frost$core$Int p_i);
frost$core$Bit frost$core$KeyTuple3$$EQ$frost$core$KeyTuple3$LTfrost$core$KeyTuple3$T0$Cfrost$core$KeyTuple3$T1$Cfrost$core$KeyTuple3$T2$GT$R$frost$core$Bit(frost$core$KeyTuple3* self, frost$core$KeyTuple3* p_other);
frost$core$Int frost$core$KeyTuple3$get_hash$R$frost$core$Int(frost$core$KeyTuple3* self);
frost$core$String* frost$core$KeyTuple3$get_asString$R$frost$core$String(frost$core$KeyTuple3* self);
void frost$core$KeyTuple3$cleanup(frost$core$KeyTuple3* self);

