#pragma once
#include "frost_c.h"
#include "Binary_types.h"
#include "frost/core/Bit_types.h"
typedef struct org$frostlanguage$frostc$MethodDecl org$frostlanguage$frostc$MethodDecl;
typedef struct org$frostlanguage$frostc$Pair org$frostlanguage$frostc$Pair;
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
typedef struct org$frostlanguage$frostc$Type org$frostlanguage$frostc$Type;
#include "org/frostlanguage/frostc/parser/Token/Kind_types.h"
typedef struct org$frostlanguage$frostc$ASTNode org$frostlanguage$frostc$ASTNode;
typedef struct org$frostlanguage$frostc$Compiler$TypeContext org$frostlanguage$frostc$Compiler$TypeContext;
typedef struct org$frostlanguage$frostc$IR$Value org$frostlanguage$frostc$IR$Value;
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct org$frostlanguage$frostc$expression$Binary org$frostlanguage$frostc$expression$Binary;

frost$core$Bit org$frostlanguage$frostc$expression$Binary$$anonymous3$org$frostlanguage$frostc$MethodDecl$R$frost$core$Bit(org$frostlanguage$frostc$MethodDecl* p_m);
org$frostlanguage$frostc$Pair* org$frostlanguage$frostc$expression$Binary$findOverloadedOperator$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Type$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlanguage$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Type* p_left, org$frostlanguage$frostc$parser$Token$Kind p_op, org$frostlanguage$frostc$ASTNode* p_right, org$frostlanguage$frostc$Compiler$TypeContext* p_type);
org$frostlanguage$frostc$Pair* org$frostlanguage$frostc$expression$Binary$findOverloadedOperator$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$Pair$LTfrost$collections$ListView$LTorg$frostlanguage$frostc$MethodRef$GT$Cfrost$core$Int64$GT$Q(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$ASTNode* p_left, org$frostlanguage$frostc$parser$Token$Kind p_op, org$frostlanguage$frostc$ASTNode* p_right, org$frostlanguage$frostc$Compiler$TypeContext* p_type);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$expression$Binary$foldInts$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$ASTNode* p_left, org$frostlanguage$frostc$parser$Token$Kind p_op, org$frostlanguage$frostc$ASTNode* p_right);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$expression$Binary$foldStrings$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$ASTNode* p_left, org$frostlanguage$frostc$parser$Token$Kind p_op, org$frostlanguage$frostc$ASTNode* p_right);
org$frostlanguage$frostc$ASTNode* org$frostlanguage$frostc$expression$Binary$fold$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode$R$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$ASTNode* p_left, org$frostlanguage$frostc$parser$Token$Kind p_op, org$frostlanguage$frostc$ASTNode* p_right);
org$frostlanguage$frostc$IR$Value* org$frostlanguage$frostc$expression$Binary$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, org$frostlanguage$frostc$ASTNode* p_left, org$frostlanguage$frostc$parser$Token$Kind p_op, org$frostlanguage$frostc$ASTNode* p_right, org$frostlanguage$frostc$Compiler$TypeContext* p_type);
void org$frostlanguage$frostc$expression$Binary$init(org$frostlanguage$frostc$expression$Binary* self);
void org$frostlanguage$frostc$expression$Binary$cleanup(org$frostlanguage$frostc$expression$Binary* self);

