#pragma once
#include "frost_c.h"
#include "KeyTuple3_types.h"
typedef struct frost$core$KeyTuple3 frost$core$KeyTuple3;
typedef struct frost$collections$HashKey frost$collections$HashKey;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void frost$core$KeyTuple3$init$frost$core$KeyTuple3$T0$frost$core$KeyTuple3$T1$frost$core$KeyTuple3$T2(void* rawSelf, frost$collections$HashKey* p_f0, frost$collections$HashKey* p_f1, frost$collections$HashKey* p_f2);
frost$core$Object* frost$core$KeyTuple3$$IDX$frost$core$Int$R$frost$core$Object$Q(void* rawSelf, frost$core$Int p_i);
frost$core$Bit frost$core$KeyTuple3$$EQ$frost$core$KeyTuple3$LTfrost$core$KeyTuple3$T0$Cfrost$core$KeyTuple3$T1$Cfrost$core$KeyTuple3$T2$GT$R$frost$core$Bit(void* rawSelf, frost$core$KeyTuple3* p_other);
frost$core$Int frost$core$KeyTuple3$get_hash$R$frost$core$Int(void* rawSelf);
frost$core$String* frost$core$KeyTuple3$get_asString$R$frost$core$String(void* rawSelf);
void frost$core$KeyTuple3$cleanup(void* rawSelf);

