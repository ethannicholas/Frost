#pragma once
#include "frost_c.h"
#include "KeyTuple5_types.h"
typedef struct frost$core$KeyTuple5 frost$core$KeyTuple5;
typedef struct frost$collections$HashKey frost$collections$HashKey;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void frost$core$KeyTuple5$init$frost$core$KeyTuple5$T0$frost$core$KeyTuple5$T1$frost$core$KeyTuple5$T2$frost$core$KeyTuple5$T3$frost$core$KeyTuple5$T4(frost$core$KeyTuple5* self, frost$collections$HashKey* p_f0, frost$collections$HashKey* p_f1, frost$collections$HashKey* p_f2, frost$collections$HashKey* p_f3, frost$collections$HashKey* p_f4);
frost$core$Object* frost$core$KeyTuple5$$IDX$frost$core$Int$R$frost$core$Object$Q(frost$core$KeyTuple5* self, frost$core$Int p_i);
frost$core$Bit frost$core$KeyTuple5$$EQ$frost$core$KeyTuple5$LTfrost$core$KeyTuple5$T0$Cfrost$core$KeyTuple5$T1$Cfrost$core$KeyTuple5$T2$Cfrost$core$KeyTuple5$T3$Cfrost$core$KeyTuple5$T4$GT$R$frost$core$Bit(frost$core$KeyTuple5* self, frost$core$KeyTuple5* p_other);
frost$core$Int frost$core$KeyTuple5$get_hash$R$frost$core$Int(frost$core$KeyTuple5* self);
frost$core$String* frost$core$KeyTuple5$get_asString$R$frost$core$String(frost$core$KeyTuple5* self);
void frost$core$KeyTuple5$cleanup(frost$core$KeyTuple5* self);

