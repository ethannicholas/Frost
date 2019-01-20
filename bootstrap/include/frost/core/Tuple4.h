#pragma once
#include "frost_c.h"
#include "Tuple4_types.h"
typedef struct frost$core$Tuple4 frost$core$Tuple4;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;

void frost$core$Tuple4$init$frost$core$Tuple4$T0$frost$core$Tuple4$T1$frost$core$Tuple4$T2$frost$core$Tuple4$T3(frost$core$Tuple4* self, frost$core$Object* p_f0, frost$core$Object* p_f1, frost$core$Object* p_f2, frost$core$Object* p_f3);
frost$core$Object* frost$core$Tuple4$$IDX$frost$core$Int64$R$frost$core$Object$Q(frost$core$Tuple4* self, frost$core$Int64 p_i);
frost$core$String* frost$core$Tuple4$get_asString$R$frost$core$String(frost$core$Tuple4* self);
void frost$core$Tuple4$cleanup(frost$core$Tuple4* self);

