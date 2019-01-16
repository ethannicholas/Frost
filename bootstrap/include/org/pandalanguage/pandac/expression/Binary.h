#pragma once
#include "panda_c.h"
#include "Binary_types.h"
#include "panda/core/Bit_types.h"
typedef struct org$pandalanguage$pandac$MethodDecl org$pandalanguage$pandac$MethodDecl;
typedef struct org$pandalanguage$pandac$Pair org$pandalanguage$pandac$Pair;
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
#include "org/pandalanguage/pandac/parser/Token/Kind_types.h"
typedef struct org$pandalanguage$pandac$ASTNode org$pandalanguage$pandac$ASTNode;
typedef struct org$pandalanguage$pandac$Compiler$TypeContext org$pandalanguage$pandac$Compiler$TypeContext;
typedef struct org$pandalanguage$pandac$IR$Value org$pandalanguage$pandac$IR$Value;
#include "org/pandalanguage/pandac/Position_types.h"
typedef struct org$pandalanguage$pandac$expression$Binary org$pandalanguage$pandac$expression$Binary;

panda$core$Bit org$pandalanguage$pandac$expression$Binary$$anonymous3$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* p_m);
org$pandalanguage$pandac$Pair* org$pandalanguage$pandac$expression$Binary$findOverloadedOperator$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$Pair$LTpanda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$Cpanda$core$Int64$GT$Q(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Type* p_left, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$ASTNode* p_right, org$pandalanguage$pandac$Compiler$TypeContext* p_type);
org$pandalanguage$pandac$Pair* org$pandalanguage$pandac$expression$Binary$findOverloadedOperator$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$Pair$LTpanda$collections$ListView$LTorg$pandalanguage$pandac$MethodRef$GT$Cpanda$core$Int64$GT$Q(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$ASTNode* p_left, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$ASTNode* p_right, org$pandalanguage$pandac$Compiler$TypeContext* p_type);
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$expression$Binary$foldInts$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$ASTNode* p_left, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$ASTNode* p_right);
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$expression$Binary$foldStrings$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$ASTNode* p_left, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$ASTNode* p_right);
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$expression$Binary$fold$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$ASTNode* p_left, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$ASTNode* p_right);
org$pandalanguage$pandac$IR$Value* org$pandalanguage$pandac$expression$Binary$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_left, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$ASTNode* p_right, org$pandalanguage$pandac$Compiler$TypeContext* p_type);
void org$pandalanguage$pandac$expression$Binary$init(org$pandalanguage$pandac$expression$Binary* self);
void org$pandalanguage$pandac$expression$Binary$cleanup(org$pandalanguage$pandac$expression$Binary* self);

