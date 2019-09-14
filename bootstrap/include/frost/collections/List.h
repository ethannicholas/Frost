#pragma once
#include "frost_c.h"
#include "List_types.h"
typedef struct frost$collections$List frost$collections$List;
#include "frost/core/Range.LTfrost/core/Int.GT.h"
typedef struct frost$collections$ListView frost$collections$ListView;
#include "frost/core/Range.LTfrost/core/Int.Q.GT.h"
typedef struct frost$core$MutableMethod frost$core$MutableMethod;

void frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int$GT$frost$collections$ListView$LTfrost$collections$List$T$GT(void* rawSelf, frost$core$Range$LTfrost$core$Int$GT p_range, frost$collections$ListView* p_list);
void frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int$Q$GT$frost$collections$ListView$LTfrost$collections$List$T$GT(void* rawSelf, frost$core$Range$LTfrost$core$Int$Q$GT p_range, frost$collections$ListView* p_list);
void frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP(void* rawSelf, frost$core$MutableMethod* p_test);
void frost$collections$List$sortInPlace$$LPfrost$collections$List$T$Cfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP(void* rawSelf, frost$core$MutableMethod* p_greater);

