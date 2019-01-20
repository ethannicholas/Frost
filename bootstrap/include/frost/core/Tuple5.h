#pragma once
#include "frost_c.h"
#include "Tuple5_types.h"
typedef struct frost$core$Tuple5 frost$core$Tuple5;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;

void frost$core$Tuple5$init$frost$core$Tuple5$T0$frost$core$Tuple5$T1$frost$core$Tuple5$T2$frost$core$Tuple5$T3$frost$core$Tuple5$T4(frost$core$Tuple5* self, frost$core$Object* p_f0, frost$core$Object* p_f1, frost$core$Object* p_f2, frost$core$Object* p_f3, frost$core$Object* p_f4);
frost$core$Object* frost$core$Tuple5$$IDX$frost$core$Int64$R$frost$core$Object$Q(frost$core$Tuple5* self, frost$core$Int64 p_i);
frost$core$String* frost$core$Tuple5$get_asString$R$frost$core$String(frost$core$Tuple5* self);
void frost$core$Tuple5$cleanup(frost$core$Tuple5* self);

