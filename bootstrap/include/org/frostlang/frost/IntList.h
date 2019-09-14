#pragma once
#include "frost_c.h"
#include "IntList_types.h"
typedef struct org$frostlang$frost$IntList org$frostlang$frost$IntList;
#include "frost/core/SteppedRange.LTfrost/core/Int.Cfrost/core/Int.GT.h"
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlang$frost$IntList$init$frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT(void* rawSelf, frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT p_range);
frost$core$Int org$frostlang$frost$IntList$computeCount$frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$R$frost$core$Int(frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT p_range);
frost$core$Int org$frostlang$frost$IntList$get_count$R$frost$core$Int(void* rawSelf);
frost$core$Int org$frostlang$frost$IntList$$IDX$frost$core$Int$R$frost$core$Int(void* rawSelf, frost$core$Int p_index);
frost$core$String* org$frostlang$frost$IntList$get_asString$R$frost$core$String(void* rawSelf);
void org$frostlang$frost$IntList$cleanup(void* rawSelf);

