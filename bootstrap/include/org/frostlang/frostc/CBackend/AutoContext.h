#pragma once
#include "frost_c.h"
#include "AutoContext_types.h"
typedef struct org$frostlang$frostc$CBackend$AutoContext org$frostlang$frostc$CBackend$AutoContext;
typedef struct org$frostlang$frostc$CBackend org$frostlang$frostc$CBackend;
typedef struct org$frostlang$frostc$CBackend$EnclosingContext org$frostlang$frostc$CBackend$EnclosingContext;

void org$frostlang$frostc$CBackend$AutoContext$init$org$frostlang$frostc$CBackend$org$frostlang$frostc$CBackend$EnclosingContext(void* rawSelf, org$frostlang$frostc$CBackend* p_backend, org$frostlang$frostc$CBackend$EnclosingContext* p_context);
void org$frostlang$frostc$CBackend$AutoContext$cleanup(void* rawSelf);

