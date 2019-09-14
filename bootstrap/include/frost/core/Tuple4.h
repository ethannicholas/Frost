#pragma once
#include "frost_c.h"
#include "Tuple4_types.h"
typedef struct frost$core$Tuple4 frost$core$Tuple4;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;

void frost$core$Tuple4$init$frost$core$Tuple4$T0$frost$core$Tuple4$T1$frost$core$Tuple4$T2$frost$core$Tuple4$T3(void* rawSelf, frost$core$Object* p_f0, frost$core$Object* p_f1, frost$core$Object* p_f2, frost$core$Object* p_f3);
frost$core$Object* frost$core$Tuple4$$IDX$frost$core$Int$R$frost$core$Object$Q(void* rawSelf, frost$core$Int p_i);
frost$core$String* frost$core$Tuple4$get_asString$R$frost$core$String(void* rawSelf);
void frost$core$Tuple4$cleanup(void* rawSelf);

