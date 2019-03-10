#pragma once
#include "frost_c.h"
#include "UIntList_types.h"
typedef struct org$frostlang$frost$UIntList org$frostlang$frost$UIntList;
#include "frost/core/SteppedRange.LTfrost/core/UInt.Cfrost/core/UInt.GT.h"
#include "frost/core/Int_types.h"
#include "frost/core/UInt_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlang$frost$UIntList$init$frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT(org$frostlang$frost$UIntList* self, frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT p_range);
frost$core$Int org$frostlang$frost$UIntList$computeCount$frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT$R$frost$core$Int(frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT p_range);
frost$core$Int org$frostlang$frost$UIntList$get_count$R$frost$core$Int(org$frostlang$frost$UIntList* self);
frost$core$UInt org$frostlang$frost$UIntList$$IDX$frost$core$Int$R$frost$core$UInt(org$frostlang$frost$UIntList* self, frost$core$Int p_index);
frost$core$String* org$frostlang$frost$UIntList$get_asString$R$frost$core$String(org$frostlang$frost$UIntList* self);
void org$frostlang$frost$UIntList$cleanup(org$frostlang$frost$UIntList* self);

