#pragma once
#include "frost_c.h"
#include "Unary_types.h"
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "org/frostlang/frostc/Position_types.h"
#include "org/frostlang/frostc/expression/Unary/Operator_types.h"
typedef struct org$frostlang$frostc$ASTNode org$frostlang$frostc$ASTNode;
typedef struct org$frostlang$frostc$Compiler$TypeContext org$frostlang$frostc$Compiler$TypeContext;
typedef struct org$frostlang$frostc$expression$Unary org$frostlang$frostc$expression$Unary;

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Unary$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$Position p_position, org$frostlang$frostc$expression$Unary$Operator p_op, org$frostlang$frostc$ASTNode* p_operand, org$frostlang$frostc$Compiler$TypeContext* p_type);
void org$frostlang$frostc$expression$Unary$init(org$frostlang$frostc$expression$Unary* self);
void org$frostlang$frostc$expression$Unary$cleanup(org$frostlang$frostc$expression$Unary* self);

