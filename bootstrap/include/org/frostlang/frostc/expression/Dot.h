#pragma once
#include "frost_c.h"
#include "Dot_types.h"
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "org/frostlang/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$ASTNode org$frostlang$frostc$ASTNode;
typedef struct org$frostlang$frostc$expression$Dot org$frostlang$frostc$expression$Dot;

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$Position p_position, org$frostlang$frostc$IR$Value* p_target, frost$core$String* p_name);
org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Dot$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$Position p_position, org$frostlang$frostc$ASTNode* p_base, frost$core$String* p_name);
void org$frostlang$frostc$expression$Dot$init(org$frostlang$frostc$expression$Dot* self);
void org$frostlang$frostc$expression$Dot$cleanup(org$frostlang$frostc$expression$Dot* self);

