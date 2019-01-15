#pragma once
#include "frost_c.h"
#include "AutoContext_types.h"
typedef struct org$frostlanguage$frostc$CCodeGenerator$AutoContext org$frostlanguage$frostc$CCodeGenerator$AutoContext;
typedef struct org$frostlanguage$frostc$CCodeGenerator org$frostlanguage$frostc$CCodeGenerator;
typedef struct org$frostlanguage$frostc$CCodeGenerator$EnclosingContext org$frostlanguage$frostc$CCodeGenerator$EnclosingContext;

void org$frostlanguage$frostc$CCodeGenerator$AutoContext$init$org$frostlanguage$frostc$CCodeGenerator$org$frostlanguage$frostc$CCodeGenerator$EnclosingContext(org$frostlanguage$frostc$CCodeGenerator$AutoContext* self, org$frostlanguage$frostc$CCodeGenerator* p_cg, org$frostlanguage$frostc$CCodeGenerator$EnclosingContext* p_context);
void org$frostlanguage$frostc$CCodeGenerator$AutoContext$cleanup(org$frostlanguage$frostc$CCodeGenerator$AutoContext* self);

