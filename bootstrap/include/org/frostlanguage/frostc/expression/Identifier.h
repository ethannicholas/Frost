#pragma once
#include "frost_c.h"
#include "Identifier_types.h"
typedef struct org$frostlanguage$frostc$IR$Value org$frostlanguage$frostc$IR$Value;
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlanguage$frostc$expression$Identifier org$frostlanguage$frostc$expression$Identifier;

org$frostlanguage$frostc$IR$Value* org$frostlanguage$frostc$expression$Identifier$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$frost$core$String$R$org$frostlanguage$frostc$IR$Value$Q(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, frost$core$String* p_name);
void org$frostlanguage$frostc$expression$Identifier$init(org$frostlanguage$frostc$expression$Identifier* self);
void org$frostlanguage$frostc$expression$Identifier$cleanup(org$frostlanguage$frostc$expression$Identifier* self);

