#pragma once
#include "frost_c.h"
#include "Binary_types.h"
#include "frost/core/Bit_types.h"
typedef struct org$frostlang$frostc$MethodDecl org$frostlang$frostc$MethodDecl;
typedef struct org$frostlang$frostc$Pair org$frostlang$frostc$Pair;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
#include "org/frostlang/frostc/expression/Binary/Operator_types.h"
typedef struct org$frostlang$frostc$ASTNode org$frostlang$frostc$ASTNode;
typedef struct org$frostlang$frostc$Compiler$TypeContext org$frostlang$frostc$Compiler$TypeContext;
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;
#include "org/frostlang/frostc/Position_types.h"
typedef struct org$frostlang$frostc$expression$Binary org$frostlang$frostc$expression$Binary;

frost$core$Bit org$frostlang$frostc$expression$Binary$$anonymous3$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(org$frostlang$frostc$MethodDecl* p_m);
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$Type* p_left, org$frostlang$frostc$expression$Binary$Operator p_op, org$frostlang$frostc$ASTNode* p_right, org$frostlang$frostc$Compiler$TypeContext* p_type);
org$frostlang$frostc$Pair* org$frostlang$frostc$expression$Binary$findOverloadedOperator$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlang$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$ASTNode* p_left, org$frostlang$frostc$expression$Binary$Operator p_op, org$frostlang$frostc$ASTNode* p_right, org$frostlang$frostc$Compiler$TypeContext* p_type);
org$frostlang$frostc$ASTNode* org$frostlang$frostc$expression$Binary$foldInts$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$ASTNode* p_left, org$frostlang$frostc$expression$Binary$Operator p_op, org$frostlang$frostc$ASTNode* p_right);
org$frostlang$frostc$ASTNode* org$frostlang$frostc$expression$Binary$foldStrings$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$ASTNode* p_left, org$frostlang$frostc$expression$Binary$Operator p_op, org$frostlang$frostc$ASTNode* p_right);
org$frostlang$frostc$ASTNode* org$frostlang$frostc$expression$Binary$fold$org$frostlang$frostc$Compiler$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$ASTNode* p_left, org$frostlang$frostc$expression$Binary$Operator p_op, org$frostlang$frostc$ASTNode* p_right);
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Binary$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$Position p_position, org$frostlang$frostc$ASTNode* p_left, org$frostlang$frostc$expression$Binary$Operator p_op, org$frostlang$frostc$ASTNode* p_right, org$frostlang$frostc$Compiler$TypeContext* p_type);
void org$frostlang$frostc$expression$Binary$init(org$frostlang$frostc$expression$Binary* self);
void org$frostlang$frostc$expression$Binary$cleanup(org$frostlang$frostc$expression$Binary* self);

