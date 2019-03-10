#pragma once
#include "frost_c.h"
#include "Bit_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;
#include "frost/core/Int_types.h"
typedef struct frost$core$Object frost$core$Object;

frost$core$Bit frost$core$Bit$init$builtin_bit(bool p_value);
frost$core$String* frost$core$Bit$get_asString$R$frost$core$String(frost$core$Bit self);
frost$core$Bit frost$core$Bit$$EQ$frost$core$Bit$R$frost$core$Bit(frost$core$Bit self, frost$core$Bit p_other);
frost$core$Bit frost$core$Bit$$NEQ$frost$core$Bit$R$frost$core$Bit(frost$core$Bit self, frost$core$Bit p_other);
frost$core$Int frost$core$Bit$get_hash$R$frost$core$Int(frost$core$Bit self);
frost$core$Bit frost$core$Bit$$NOT$R$frost$core$Bit(frost$core$Bit self);
frost$core$Bit frost$core$Bit$$OR$frost$core$Bit$R$frost$core$Bit(frost$core$Bit self, frost$core$Bit p_other);
frost$core$Bit frost$core$Bit$$AND$frost$core$Bit$R$frost$core$Bit(frost$core$Bit self, frost$core$Bit p_other);
frost$core$Bit frost$core$Bit$$XOR$frost$core$Bit$R$frost$core$Bit(frost$core$Bit self, frost$core$Bit p_other);
frost$core$Object* frost$core$Bit$choose$frost$core$Bit$choose$T$frost$core$Bit$choose$T$R$frost$core$Bit$choose$T(frost$core$Bit self, frost$core$Object* p_ifTrue, frost$core$Object* p_ifFalse);
frost$core$String* frost$core$Bit$format$frost$core$String$R$frost$core$String(frost$core$Bit self, frost$core$String* p_fmt);
void frost$core$Bit$cleanup(frost$core$Bit self);

