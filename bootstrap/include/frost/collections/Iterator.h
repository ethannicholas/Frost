#pragma once
#include "frost_c.h"
#include "Iterator_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$collections$Iterator frost$collections$Iterator;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Int64_types.h"
typedef struct frost$core$MutableMethod frost$core$MutableMethod;
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Q.Cfrost/core/Int64.GT.h"
typedef struct frost$collections$Array frost$collections$Array;

frost$core$Bit frost$collections$Iterator$get_done$R$frost$core$Bit(frost$collections$Iterator* self);
frost$core$Object* frost$collections$Iterator$next$R$frost$collections$Iterator$T(frost$collections$Iterator* self);
frost$core$Int64 frost$collections$Iterator$count$R$frost$core$Int64(frost$collections$Iterator* self);
frost$collections$Iterator* frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT(frost$collections$Iterator* self, frost$core$MutableMethod* p_predicate);
frost$collections$Iterator* frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT(frost$collections$Iterator* self, frost$core$Range$LTfrost$core$Int64$Q$GT p_range);
frost$collections$Iterator* frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT(frost$collections$Iterator* self, frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT p_range);
frost$collections$Array* frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT(frost$collections$Iterator* self);
void frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP(frost$collections$Iterator* self, frost$core$MutableMethod* p_m);
frost$core$Object* frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T(frost$collections$Iterator* self, frost$core$MutableMethod* p_f);
frost$core$Object* frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T(frost$collections$Iterator* self, frost$core$MutableMethod* p_f, frost$core$Object* p_start);
frost$collections$Iterator* frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT(frost$collections$Iterator* self, frost$core$MutableMethod* p_f);

