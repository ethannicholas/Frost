#pragma once
#include "frost_c.h"
#include "AutoContext_types.h"
typedef struct org$frostlanguage$frostc$Compiler$AutoContext org$frostlanguage$frostc$Compiler$AutoContext;
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
typedef struct org$frostlanguage$frostc$Compiler$EnclosingContext org$frostlanguage$frostc$Compiler$EnclosingContext;

void org$frostlanguage$frostc$Compiler$AutoContext$init$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Compiler$EnclosingContext(org$frostlanguage$frostc$Compiler$AutoContext* self, org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$Compiler$EnclosingContext* p_context);
void org$frostlanguage$frostc$Compiler$AutoContext$cleanup(org$frostlanguage$frostc$Compiler$AutoContext* self);

