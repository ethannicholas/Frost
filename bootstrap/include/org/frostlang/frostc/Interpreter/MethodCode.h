#pragma once
#include "frost_c.h"
#include "MethodCode_types.h"
typedef struct org$frostlang$frostc$Interpreter$MethodCode org$frostlang$frostc$Interpreter$MethodCode;
typedef struct frost$collections$Array frost$collections$Array;
#include "frost/core/Int_types.h"

void org$frostlang$frostc$Interpreter$MethodCode$init$frost$collections$Array$LTorg$frostlang$frostc$Type$GT$frost$collections$Array$LTfrost$core$Int$GT$frost$collections$Array$LTfrost$collections$Array$LTorg$frostlang$frostc$IR$Statement$ID$GT$GT$frost$collections$Array$LTfrost$collections$Array$LTorg$frostlang$frostc$IR$Statement$GT$GT$frost$core$Int(void* rawSelf, frost$collections$Array* p_locals, frost$collections$Array* p_blocks, frost$collections$Array* p_ids, frost$collections$Array* p_ir, frost$core$Int p_maxId);
void org$frostlang$frostc$Interpreter$MethodCode$cleanup(void* rawSelf);
