#pragma once
#include "frost_c.h"
#include "Dot_types.h"
typedef struct org$frostlanguage$frostc$IR$Value org$frostlanguage$frostc$IR$Value;
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlanguage$frostc$ASTNode org$frostlanguage$frostc$ASTNode;
typedef struct org$frostlanguage$frostc$expression$Dot org$frostlanguage$frostc$expression$Dot;

org$frostlanguage$frostc$IR$Value* org$frostlanguage$frostc$expression$Dot$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$frost$core$String$R$org$frostlanguage$frostc$IR$Value$Q(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, org$frostlanguage$frostc$IR$Value* p_target, frost$core$String* p_name);
org$frostlanguage$frostc$IR$Value* org$frostlanguage$frostc$expression$Dot$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$frost$core$String$R$org$frostlanguage$frostc$IR$Value$Q(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, org$frostlanguage$frostc$ASTNode* p_base, frost$core$String* p_name);
void org$frostlanguage$frostc$expression$Dot$init(org$frostlanguage$frostc$expression$Dot* self);
void org$frostlanguage$frostc$expression$Dot$cleanup(org$frostlanguage$frostc$expression$Dot* self);

