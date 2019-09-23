#pragma once
#include "frost_c.h"
#include "Identifier_types.h"
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "org/frostlang/frostc/MethodPosition_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$expression$Identifier org$frostlang$frostc$expression$Identifier;

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Identifier$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$frost$core$String$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$MethodPosition p_position, frost$core$String* p_name);
void org$frostlang$frostc$expression$Identifier$init(void* rawSelf);
void org$frostlang$frostc$expression$Identifier$cleanup(void* rawSelf);

