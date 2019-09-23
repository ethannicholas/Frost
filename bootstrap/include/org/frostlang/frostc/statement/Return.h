#pragma once
#include "frost_c.h"
#include "Return_types.h"
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "org/frostlang/frostc/MethodPosition_types.h"
typedef struct org$frostlang$frostc$ASTNode org$frostlang$frostc$ASTNode;
#include "frost/core/Bit_types.h"
typedef struct org$frostlang$frostc$statement$Return org$frostlang$frostc$statement$Return;

void org$frostlang$frostc$statement$Return$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$MethodPosition p_position, org$frostlang$frostc$ASTNode* p_value);
void org$frostlang$frostc$statement$Return$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$ASTNode$Q$frost$core$Bit(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$MethodPosition p_position, org$frostlang$frostc$ASTNode* p_value, frost$core$Bit p_refResult);
void org$frostlang$frostc$statement$Return$init(void* rawSelf);
void org$frostlang$frostc$statement$Return$cleanup(void* rawSelf);

