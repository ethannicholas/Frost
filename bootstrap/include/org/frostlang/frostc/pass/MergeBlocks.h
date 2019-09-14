#pragma once
#include "frost_c.h"
#include "MergeBlocks_types.h"
#include "frost/core/Bit_types.h"
typedef struct org$frostlang$frostc$pass$MergeBlocks org$frostlang$frostc$pass$MergeBlocks;
typedef struct org$frostlang$frostc$IR org$frostlang$frostc$IR;
typedef struct org$frostlang$frostc$pass$Analyzer org$frostlang$frostc$pass$Analyzer;

frost$core$Bit org$frostlang$frostc$pass$MergeBlocks$process$org$frostlang$frostc$IR$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit(void* rawSelf, org$frostlang$frostc$IR* p_ir, org$frostlang$frostc$pass$Analyzer* p_analysis);
void org$frostlang$frostc$pass$MergeBlocks$init(void* rawSelf);
void org$frostlang$frostc$pass$MergeBlocks$cleanup(void* rawSelf);

