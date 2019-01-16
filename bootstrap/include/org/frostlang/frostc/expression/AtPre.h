#pragma once
#include "frost_c.h"
#include "AtPre_types.h"
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "org/frostlang/frostc/Position_types.h"
typedef struct org$frostlang$frostc$ASTNode org$frostlang$frostc$ASTNode;
typedef struct org$frostlang$frostc$Compiler$TypeContext org$frostlang$frostc$Compiler$TypeContext;
typedef struct org$frostlang$frostc$expression$AtPre org$frostlang$frostc$expression$AtPre;

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$AtPre$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$Position p_position, org$frostlang$frostc$ASTNode* p_expr, org$frostlang$frostc$Compiler$TypeContext* p_type);
void org$frostlang$frostc$expression$AtPre$init(org$frostlang$frostc$expression$AtPre* self);
void org$frostlang$frostc$expression$AtPre$cleanup(org$frostlang$frostc$expression$AtPre* self);

