#pragma once
#include "frost_c.h"
#include "KeyTuple2_types.h"
typedef struct frost$core$KeyTuple2 frost$core$KeyTuple2;
typedef struct frost$collections$HashKey frost$collections$HashKey;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void frost$core$KeyTuple2$init$frost$core$KeyTuple2$T0$frost$core$KeyTuple2$T1(void* rawSelf, frost$collections$HashKey* p_f0, frost$collections$HashKey* p_f1);
frost$core$Object* frost$core$KeyTuple2$$IDX$frost$core$Int$R$frost$core$Object$Q(void* rawSelf, frost$core$Int p_i);
frost$core$Bit frost$core$KeyTuple2$$EQ$frost$core$KeyTuple2$LTfrost$core$KeyTuple2$T0$Cfrost$core$KeyTuple2$T1$GT$R$frost$core$Bit(void* rawSelf, frost$core$KeyTuple2* p_other);
frost$core$Int frost$core$KeyTuple2$get_hash$R$frost$core$Int(void* rawSelf);
frost$core$String* frost$core$KeyTuple2$get_asString$R$frost$core$String(void* rawSelf);
void frost$core$KeyTuple2$cleanup(void* rawSelf);

