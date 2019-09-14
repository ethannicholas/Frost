#pragma once
#include "frost_c.h"
#include "Iterator_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$collections$Iterator frost$collections$Iterator;
typedef struct frost$core$Object frost$core$Object;
#include "frost/core/Int_types.h"
typedef struct frost$core$MutableMethod frost$core$MutableMethod;
#include "frost/core/Range.LTfrost/core/Int.Q.GT.h"
#include "frost/core/SteppedRange.LTfrost/core/Int.Q.Cfrost/core/Int.GT.h"
typedef struct frost$collections$Array frost$collections$Array;

frost$core$Bit frost$collections$Iterator$get_done$R$frost$core$Bit(void* rawSelf);
frost$core$Object* frost$collections$Iterator$next$R$frost$collections$Iterator$T(void* rawSelf);
frost$core$Int frost$collections$Iterator$count$R$frost$core$Int(void* rawSelf);
frost$collections$Iterator* frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT(void* rawSelf);
frost$collections$Iterator* frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT(void* rawSelf, frost$core$MutableMethod* p_predicate);
frost$collections$Iterator* frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT(void* rawSelf, frost$core$Range$LTfrost$core$Int$Q$GT p_range);
frost$collections$Iterator* frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT(void* rawSelf, frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT p_range);
frost$collections$Array* frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT(void* rawSelf);
void frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP(void* rawSelf, frost$core$MutableMethod* p_m);
frost$core$Object* frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T(void* rawSelf, frost$core$MutableMethod* p_f);
frost$core$Object* frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T(void* rawSelf, frost$core$MutableMethod* p_f, frost$core$Object* p_start);
frost$collections$Iterator* frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT(void* rawSelf, frost$core$MutableMethod* p_f);

