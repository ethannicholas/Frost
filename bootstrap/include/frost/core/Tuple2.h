#pragma once
#include "frost_c.h"
#include "Tuple2_types.h"
typedef struct frost$core$Tuple2 frost$core$Tuple2;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;

void frost$core$Tuple2$init$frost$core$Tuple2$T0$frost$core$Tuple2$T1(void* rawSelf, frost$core$Object* p_f0, frost$core$Object* p_f1);
frost$core$Object* frost$core$Tuple2$$IDX$frost$core$Int$R$frost$core$Object$Q(void* rawSelf, frost$core$Int p_i);
frost$core$String* frost$core$Tuple2$get_asString$R$frost$core$String(void* rawSelf);
void frost$core$Tuple2$cleanup(void* rawSelf);

