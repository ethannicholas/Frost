#pragma once
#include "frost_c.h"
#include "AtReturn_types.h"
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "org/frostlang/frostc/MethodPosition_types.h"
typedef struct org$frostlang$frostc$Compiler$TypeContext org$frostlang$frostc$Compiler$TypeContext;
typedef struct org$frostlang$frostc$expression$AtReturn org$frostlang$frostc$expression$AtReturn;

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$AtReturn$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$MethodPosition p_position, org$frostlang$frostc$Compiler$TypeContext* p_type);
void org$frostlang$frostc$expression$AtReturn$init(void* rawSelf);
void org$frostlang$frostc$expression$AtReturn$cleanup(void* rawSelf);

