#pragma once
#include "frost_c.h"
#include "RemoveAsserts_types.h"
#include "frost/core/Bit_types.h"
typedef struct org$frostlang$frostc$pass$RemoveAsserts org$frostlang$frostc$pass$RemoveAsserts;
typedef struct org$frostlang$frostc$IR$Statement org$frostlang$frostc$IR$Statement;
typedef struct org$frostlang$frostc$IR org$frostlang$frostc$IR;
typedef struct org$frostlang$frostc$pass$Analyzer org$frostlang$frostc$pass$Analyzer;

frost$core$Bit org$frostlang$frostc$pass$RemoveAsserts$isAssertionFail$org$frostlang$frostc$IR$Statement$R$frost$core$Bit(void* rawSelf, org$frostlang$frostc$IR$Statement* p_s);
frost$core$Bit org$frostlang$frostc$pass$RemoveAsserts$process$org$frostlang$frostc$IR$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit(void* rawSelf, org$frostlang$frostc$IR* p_ir, org$frostlang$frostc$pass$Analyzer* p_analysis);
void org$frostlang$frostc$pass$RemoveAsserts$init(void* rawSelf);
void org$frostlang$frostc$pass$RemoveAsserts$cleanup(void* rawSelf);

