#pragma once
#include "frost_c.h"
#include "And_types.h"
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "org/frostlang/frostc/Position_types.h"
typedef struct org$frostlang$frostc$ASTNode org$frostlang$frostc$ASTNode;
typedef struct org$frostlang$frostc$Compiler$TypeContext org$frostlang$frostc$Compiler$TypeContext;
#include "org/frostlang/frostc/IR/Block/ID_types.h"
typedef struct org$frostlang$frostc$expression$And org$frostlang$frostc$expression$And;

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$And$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$Position p_position, org$frostlang$frostc$ASTNode* p_left, org$frostlang$frostc$ASTNode* p_right, org$frostlang$frostc$Compiler$TypeContext* p_type);
void org$frostlang$frostc$expression$And$compileConditionalBranch$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$Position p_position, org$frostlang$frostc$ASTNode* p_left, org$frostlang$frostc$ASTNode* p_right, org$frostlang$frostc$IR$Block$ID p_ifTrue, org$frostlang$frostc$IR$Block$ID p_ifFalse);
void org$frostlang$frostc$expression$And$init(org$frostlang$frostc$expression$And* self);
void org$frostlang$frostc$expression$And$cleanup(org$frostlang$frostc$expression$And* self);

