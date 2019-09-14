#pragma once
#include "frost_c.h"
#include "Assignment_types.h"
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "org/frostlang/frostc/Position_types.h"
typedef struct org$frostlang$frostc$ASTNode org$frostlang$frostc$ASTNode;
#include "org/frostlang/frostc/expression/Binary/Operator_types.h"
typedef struct org$frostlang$frostc$statement$Assignment org$frostlang$frostc$statement$Assignment;

void org$frostlang$frostc$statement$Assignment$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$Position p_position, org$frostlang$frostc$ASTNode* p_rawLeft, org$frostlang$frostc$expression$Binary$Operator p_op, org$frostlang$frostc$ASTNode* p_rawRight);
void org$frostlang$frostc$statement$Assignment$init(void* rawSelf);
void org$frostlang$frostc$statement$Assignment$cleanup(void* rawSelf);

