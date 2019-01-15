#pragma once
#include "frost_c.h"
#include "AtReturn_types.h"
typedef struct org$frostlanguage$frostc$IR$Value org$frostlanguage$frostc$IR$Value;
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct org$frostlanguage$frostc$Compiler$TypeContext org$frostlanguage$frostc$Compiler$TypeContext;
typedef struct org$frostlanguage$frostc$expression$AtReturn org$frostlanguage$frostc$expression$AtReturn;

org$frostlanguage$frostc$IR$Value* org$frostlanguage$frostc$expression$AtReturn$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Position p_position, org$frostlanguage$frostc$Compiler$TypeContext* p_type);
void org$frostlanguage$frostc$expression$AtReturn$init(org$frostlanguage$frostc$expression$AtReturn* self);
void org$frostlanguage$frostc$expression$AtReturn$cleanup(org$frostlanguage$frostc$expression$AtReturn* self);

