#pragma once
#include "frost_c.h"
#include "_Closure2_types.h"
typedef struct frost$collections$HashSet$_Closure2 frost$collections$HashSet$_Closure2;
typedef struct frost$core$MutableMethod frost$core$MutableMethod;
#include "frost/core/Bit_types.h"
typedef struct frost$collections$HashKey frost$collections$HashKey;

void frost$collections$HashSet$_Closure2$init$$LPfrost$collections$HashSet$T$RP$EQ$GT$LPfrost$core$Bit$RP(frost$collections$HashSet$_Closure2* self, frost$core$MutableMethod* p_test);
void frost$collections$HashSet$_Closure2$cleanup(frost$collections$HashSet$_Closure2* self);
frost$core$Bit frost$collections$HashSet$_Closure2$$anonymous1$frost$collections$HashSet$T$frost$collections$HashSet$T$R$frost$core$Bit(frost$collections$HashSet$_Closure2* self, frost$collections$HashKey* p_k, frost$collections$HashKey* p_v);

