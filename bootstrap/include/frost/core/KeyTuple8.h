#pragma once
#include "frost_c.h"
#include "KeyTuple8_types.h"
typedef struct frost$core$KeyTuple8 frost$core$KeyTuple8;
typedef struct frost$collections$Key frost$collections$Key;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void frost$core$KeyTuple8$init$frost$core$KeyTuple8$T0$frost$core$KeyTuple8$T1$frost$core$KeyTuple8$T2$frost$core$KeyTuple8$T3$frost$core$KeyTuple8$T4$frost$core$KeyTuple8$T5$frost$core$KeyTuple8$T6$frost$core$KeyTuple8$T7(frost$core$KeyTuple8* self, frost$collections$Key* p_f0, frost$collections$Key* p_f1, frost$collections$Key* p_f2, frost$collections$Key* p_f3, frost$collections$Key* p_f4, frost$collections$Key* p_f5, frost$collections$Key* p_f6, frost$collections$Key* p_f7);
frost$core$Object* frost$core$KeyTuple8$$IDX$frost$core$Int$R$frost$core$Object$Q(frost$core$KeyTuple8* self, frost$core$Int p_i);
frost$core$Bit frost$core$KeyTuple8$$EQ$frost$core$KeyTuple8$LTfrost$core$KeyTuple8$T0$Cfrost$core$KeyTuple8$T1$Cfrost$core$KeyTuple8$T2$Cfrost$core$KeyTuple8$T3$Cfrost$core$KeyTuple8$T4$Cfrost$core$KeyTuple8$T5$Cfrost$core$KeyTuple8$T6$Cfrost$core$KeyTuple8$T7$GT$R$frost$core$Bit(frost$core$KeyTuple8* self, frost$core$KeyTuple8* p_other);
frost$core$Int frost$core$KeyTuple8$get_hash$R$frost$core$Int(frost$core$KeyTuple8* self);
frost$core$String* frost$core$KeyTuple8$get_asString$R$frost$core$String(frost$core$KeyTuple8* self);
void frost$core$KeyTuple8$cleanup(frost$core$KeyTuple8* self);

