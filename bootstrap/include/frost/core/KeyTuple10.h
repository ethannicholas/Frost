#pragma once
#include "frost_c.h"
#include "KeyTuple10_types.h"
typedef struct frost$core$KeyTuple10 frost$core$KeyTuple10;
typedef struct frost$collections$Key frost$collections$Key;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Int64_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void frost$core$KeyTuple10$init$frost$core$KeyTuple10$T0$frost$core$KeyTuple10$T1$frost$core$KeyTuple10$T2$frost$core$KeyTuple10$T3$frost$core$KeyTuple10$T4$frost$core$KeyTuple10$T5$frost$core$KeyTuple10$T6$frost$core$KeyTuple10$T7$frost$core$KeyTuple10$T8$frost$core$KeyTuple10$T9(frost$core$KeyTuple10* self, frost$collections$Key* p_f0, frost$collections$Key* p_f1, frost$collections$Key* p_f2, frost$collections$Key* p_f3, frost$collections$Key* p_f4, frost$collections$Key* p_f5, frost$collections$Key* p_f6, frost$collections$Key* p_f7, frost$collections$Key* p_f8, frost$collections$Key* p_f9);
frost$core$Object* frost$core$KeyTuple10$$IDX$frost$core$Int64$R$frost$core$Object$Q(frost$core$KeyTuple10* self, frost$core$Int64 p_i);
frost$core$Bit frost$core$KeyTuple10$$EQ$frost$core$KeyTuple10$LTfrost$core$KeyTuple10$T0$Cfrost$core$KeyTuple10$T1$Cfrost$core$KeyTuple10$T2$Cfrost$core$KeyTuple10$T3$Cfrost$core$KeyTuple10$T4$Cfrost$core$KeyTuple10$T5$Cfrost$core$KeyTuple10$T6$Cfrost$core$KeyTuple10$T7$Cfrost$core$KeyTuple10$T8$Cfrost$core$KeyTuple10$T9$GT$R$frost$core$Bit(frost$core$KeyTuple10* self, frost$core$KeyTuple10* p_other);
frost$core$Int64 frost$core$KeyTuple10$get_hash$R$frost$core$Int64(frost$core$KeyTuple10* self);
frost$core$String* frost$core$KeyTuple10$get_asString$R$frost$core$String(frost$core$KeyTuple10* self);
void frost$core$KeyTuple10$cleanup(frost$core$KeyTuple10* self);

