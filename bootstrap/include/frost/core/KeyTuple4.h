#pragma once
#include "frost_c.h"
#include "KeyTuple4_types.h"
typedef struct frost$core$KeyTuple4 frost$core$KeyTuple4;
typedef struct frost$collections$HashKey frost$collections$HashKey;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void frost$core$KeyTuple4$init$frost$core$KeyTuple4$T0$frost$core$KeyTuple4$T1$frost$core$KeyTuple4$T2$frost$core$KeyTuple4$T3(void* rawSelf, frost$collections$HashKey* p_f0, frost$collections$HashKey* p_f1, frost$collections$HashKey* p_f2, frost$collections$HashKey* p_f3);
frost$core$Object* frost$core$KeyTuple4$$IDX$frost$core$Int$R$frost$core$Object$Q(void* rawSelf, frost$core$Int p_i);
frost$core$Bit frost$core$KeyTuple4$$EQ$frost$core$KeyTuple4$LTfrost$core$KeyTuple4$T0$Cfrost$core$KeyTuple4$T1$Cfrost$core$KeyTuple4$T2$Cfrost$core$KeyTuple4$T3$GT$R$frost$core$Bit(void* rawSelf, frost$core$KeyTuple4* p_other);
frost$core$Int frost$core$KeyTuple4$get_hash$R$frost$core$Int(void* rawSelf);
frost$core$String* frost$core$KeyTuple4$get_asString$R$frost$core$String(void* rawSelf);
void frost$core$KeyTuple4$cleanup(void* rawSelf);

