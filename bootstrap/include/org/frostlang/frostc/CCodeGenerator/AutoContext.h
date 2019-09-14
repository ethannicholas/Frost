#pragma once
#include "frost_c.h"
#include "AutoContext_types.h"
typedef struct org$frostlang$frostc$CCodeGenerator$AutoContext org$frostlang$frostc$CCodeGenerator$AutoContext;
typedef struct org$frostlang$frostc$CCodeGenerator org$frostlang$frostc$CCodeGenerator;
typedef struct org$frostlang$frostc$CCodeGenerator$EnclosingContext org$frostlang$frostc$CCodeGenerator$EnclosingContext;

void org$frostlang$frostc$CCodeGenerator$AutoContext$init$org$frostlang$frostc$CCodeGenerator$org$frostlang$frostc$CCodeGenerator$EnclosingContext(void* rawSelf, org$frostlang$frostc$CCodeGenerator* p_cg, org$frostlang$frostc$CCodeGenerator$EnclosingContext* p_context);
void org$frostlang$frostc$CCodeGenerator$AutoContext$cleanup(void* rawSelf);

