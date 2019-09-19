#pragma once
#include "frost_c.h"
#include "Code_types.h"
typedef struct org$frostlang$frostc$Interpreter$Code org$frostlang$frostc$Interpreter$Code;
#include "frost/core/Int_types.h"
typedef struct frost$collections$Array frost$collections$Array;

void org$frostlang$frostc$Interpreter$Code$init$frost$core$Int$frost$collections$Array$LTfrost$core$Int$GT$frost$collections$Array$LTfrost$collections$Array$LTorg$frostlang$frostc$IR$Statement$ID$GT$GT$frost$collections$Array$LTfrost$collections$Array$LTorg$frostlang$frostc$IR$Statement$GT$GT(void* rawSelf, frost$core$Int p_locals, frost$collections$Array* p_blocks, frost$collections$Array* p_ids, frost$collections$Array* p_ir);
void org$frostlang$frostc$Interpreter$Code$cleanup(void* rawSelf);

