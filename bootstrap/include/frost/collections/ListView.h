#pragma once
#include "frost_c.h"
#include "ListView_types.h"
typedef struct frost$core$Object frost$core$Object;
typedef struct frost$collections$ListView frost$collections$ListView;
#include "frost/core/Int64_types.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "frost/core/Bit_types.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Q.Cfrost/core/Int64.GT.h"
typedef struct frost$core$MutableMethod frost$core$MutableMethod;
typedef struct frost$collections$Iterator frost$collections$Iterator;

frost$core$Object* frost$collections$ListView$$IDX$frost$core$Int64$R$frost$collections$ListView$T(frost$collections$ListView* self, frost$core$Int64 p_index);
frost$collections$ListView* frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* self, frost$core$Range$LTfrost$core$Int64$GT p_r);
frost$collections$ListView* frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* self, frost$core$Range$LTfrost$core$Int64$Q$GT p_r);
frost$core$Bit frost$collections$ListView$inRange$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$frost$core$Int64$R$frost$core$Bit(frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT p_r, frost$core$Int64 p_count);
frost$collections$ListView* frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* self, frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT p_r);
frost$collections$ListView* frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* self, frost$core$MutableMethod* p_predicate);
frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(frost$collections$ListView* self);
frost$collections$ListView* frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT(frost$collections$ListView* self, frost$core$MutableMethod* p_greater);

