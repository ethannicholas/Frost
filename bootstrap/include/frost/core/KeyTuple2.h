#pragma once
#include "frost_c.h"
#include "KeyTuple2_types.h"
typedef struct frost$core$KeyTuple2 frost$core$KeyTuple2;
typedef struct frost$collections$Key frost$collections$Key;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void frost$core$KeyTuple2$init$frost$core$KeyTuple2$T0$frost$core$KeyTuple2$T1(frost$core$KeyTuple2* self, frost$collections$Key* p_f0, frost$collections$Key* p_f1);
frost$core$Object* frost$core$KeyTuple2$$IDX$frost$core$Int$R$frost$core$Object$Q(frost$core$KeyTuple2* self, frost$core$Int p_i);
frost$core$Bit frost$core$KeyTuple2$$EQ$frost$core$KeyTuple2$LTfrost$core$KeyTuple2$T0$Cfrost$core$KeyTuple2$T1$GT$R$frost$core$Bit(frost$core$KeyTuple2* self, frost$core$KeyTuple2* p_other);
frost$core$Int frost$core$KeyTuple2$get_hash$R$frost$core$Int(frost$core$KeyTuple2* self);
frost$core$String* frost$core$KeyTuple2$get_asString$R$frost$core$String(frost$core$KeyTuple2* self);
void frost$core$KeyTuple2$cleanup(frost$core$KeyTuple2* self);

