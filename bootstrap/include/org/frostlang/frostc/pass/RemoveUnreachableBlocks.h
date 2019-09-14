#pragma once
#include "frost_c.h"
#include "RemoveUnreachableBlocks_types.h"
#include "frost/core/Bit_types.h"
typedef struct org$frostlang$frostc$pass$RemoveUnreachableBlocks org$frostlang$frostc$pass$RemoveUnreachableBlocks;
typedef struct org$frostlang$frostc$IR$Block org$frostlang$frostc$IR$Block;
typedef struct org$frostlang$frostc$pass$Analyzer org$frostlang$frostc$pass$Analyzer;
typedef struct org$frostlang$frostc$IR org$frostlang$frostc$IR;

frost$core$Bit org$frostlang$frostc$pass$RemoveUnreachableBlocks$isUnreachable$org$frostlang$frostc$IR$Block$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit(void* rawSelf, org$frostlang$frostc$IR$Block* p_b, org$frostlang$frostc$pass$Analyzer* p_analysis);
frost$core$Bit org$frostlang$frostc$pass$RemoveUnreachableBlocks$process$org$frostlang$frostc$IR$org$frostlang$frostc$pass$Analyzer$R$frost$core$Bit(void* rawSelf, org$frostlang$frostc$IR* p_ir, org$frostlang$frostc$pass$Analyzer* p_analysis);
void org$frostlang$frostc$pass$RemoveUnreachableBlocks$init(void* rawSelf);
void org$frostlang$frostc$pass$RemoveUnreachableBlocks$cleanup(void* rawSelf);

