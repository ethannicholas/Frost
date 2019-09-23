#pragma once
#include "frost_c.h"
#include "Unary_types.h"
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
typedef struct frost$collections$CollectionView frost$collections$CollectionView;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "org/frostlang/frostc/Position_types.h"
#include "org/frostlang/frostc/expression/Unary/Operator_types.h"
typedef struct org$frostlang$frostc$ASTNode org$frostlang$frostc$ASTNode;
typedef struct org$frostlang$frostc$Pair org$frostlang$frostc$Pair;
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;
#include "org/frostlang/frostc/MethodPosition_types.h"
typedef struct org$frostlang$frostc$Compiler$TypeContext org$frostlang$frostc$Compiler$TypeContext;
typedef struct org$frostlang$frostc$expression$Unary org$frostlang$frostc$expression$Unary;

org$frostlang$frostc$Type* org$frostlang$frostc$expression$Unary$$anonymous1$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(org$frostlang$frostc$Type* p_t);
frost$collections$CollectionView* org$frostlang$frostc$expression$Unary$possibleTypes$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode$R$frost$collections$CollectionView$LTorg$frostlang$frostc$Type$GT$Q(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$Position p_position, org$frostlang$frostc$expression$Unary$Operator p_op, org$frostlang$frostc$ASTNode* p_operand);
org$frostlang$frostc$Type* org$frostlang$frostc$expression$Unary$preferredType$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type$Q(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$Position p_position, org$frostlang$frostc$expression$Unary$Operator p_op, org$frostlang$frostc$ASTNode* p_operand);
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Unary$coercionCost$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type$R$org$frostlang$frostc$Pair$LTorg$frostlang$frostc$Type$Cfrost$core$Int$GT$Q(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$Position p_position, org$frostlang$frostc$expression$Unary$Operator p_op, org$frostlang$frostc$ASTNode* p_operand, org$frostlang$frostc$Type* p_target);
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Unary$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$MethodPosition p_position, org$frostlang$frostc$expression$Unary$Operator p_op, org$frostlang$frostc$ASTNode* p_operand, org$frostlang$frostc$Compiler$TypeContext* p_type);
void org$frostlang$frostc$expression$Unary$init(void* rawSelf);
void org$frostlang$frostc$expression$Unary$cleanup(void* rawSelf);

