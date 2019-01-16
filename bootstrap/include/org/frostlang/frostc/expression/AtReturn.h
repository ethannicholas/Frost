#pragma once
#include "frost_c.h"
#include "AtReturn_types.h"
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "org/frostlang/frostc/Position_types.h"
typedef struct org$frostlang$frostc$Compiler$TypeContext org$frostlang$frostc$Compiler$TypeContext;
typedef struct org$frostlang$frostc$expression$AtReturn org$frostlang$frostc$expression$AtReturn;

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$AtReturn$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$Position p_position, org$frostlang$frostc$Compiler$TypeContext* p_type);
void org$frostlang$frostc$expression$AtReturn$init(org$frostlang$frostc$expression$AtReturn* self);
void org$frostlang$frostc$expression$AtReturn$cleanup(org$frostlang$frostc$expression$AtReturn* self);

