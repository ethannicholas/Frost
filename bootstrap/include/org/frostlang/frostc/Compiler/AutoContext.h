#pragma once
#include "frost_c.h"
#include "AutoContext_types.h"
typedef struct org$frostlang$frostc$Compiler$AutoContext org$frostlang$frostc$Compiler$AutoContext;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
typedef struct org$frostlang$frostc$Compiler$EnclosingContext org$frostlang$frostc$Compiler$EnclosingContext;

void org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext(org$frostlang$frostc$Compiler$AutoContext* self, org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$Compiler$EnclosingContext* p_context);
void org$frostlang$frostc$Compiler$AutoContext$cleanup(org$frostlang$frostc$Compiler$AutoContext* self);

