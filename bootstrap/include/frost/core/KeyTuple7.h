#pragma once
#include "frost_c.h"
#include "KeyTuple7_types.h"
typedef struct frost$core$KeyTuple7 frost$core$KeyTuple7;
typedef struct frost$collections$Key frost$collections$Key;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Int64_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void frost$core$KeyTuple7$init$frost$core$KeyTuple7$T0$frost$core$KeyTuple7$T1$frost$core$KeyTuple7$T2$frost$core$KeyTuple7$T3$frost$core$KeyTuple7$T4$frost$core$KeyTuple7$T5$frost$core$KeyTuple7$T6(frost$core$KeyTuple7* self, frost$collections$Key* p_f0, frost$collections$Key* p_f1, frost$collections$Key* p_f2, frost$collections$Key* p_f3, frost$collections$Key* p_f4, frost$collections$Key* p_f5, frost$collections$Key* p_f6);
frost$core$Object* frost$core$KeyTuple7$$IDX$frost$core$Int64$R$frost$core$Object$Q(frost$core$KeyTuple7* self, frost$core$Int64 p_i);
frost$core$Bit frost$core$KeyTuple7$$EQ$frost$core$KeyTuple7$LTfrost$core$KeyTuple7$T0$Cfrost$core$KeyTuple7$T1$Cfrost$core$KeyTuple7$T2$Cfrost$core$KeyTuple7$T3$Cfrost$core$KeyTuple7$T4$Cfrost$core$KeyTuple7$T5$Cfrost$core$KeyTuple7$T6$GT$R$frost$core$Bit(frost$core$KeyTuple7* self, frost$core$KeyTuple7* p_other);
frost$core$Int64 frost$core$KeyTuple7$get_hash$R$frost$core$Int64(frost$core$KeyTuple7* self);
frost$core$String* frost$core$KeyTuple7$get_asString$R$frost$core$String(frost$core$KeyTuple7* self);
void frost$core$KeyTuple7$cleanup(frost$core$KeyTuple7* self);

