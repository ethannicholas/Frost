#pragma once
#include "frost_c.h"
#include "Tuple3_types.h"
typedef struct frost$core$Tuple3 frost$core$Tuple3;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;

void frost$core$Tuple3$init$frost$core$Tuple3$T0$frost$core$Tuple3$T1$frost$core$Tuple3$T2(frost$core$Tuple3* self, frost$core$Object* p_f0, frost$core$Object* p_f1, frost$core$Object* p_f2);
frost$core$Object* frost$core$Tuple3$$IDX$frost$core$Int64$R$frost$core$Object$Q(frost$core$Tuple3* self, frost$core$Int64 p_i);
frost$core$String* frost$core$Tuple3$get_asString$R$frost$core$String(frost$core$Tuple3* self);
void frost$core$Tuple3$cleanup(frost$core$Tuple3* self);

