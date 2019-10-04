#pragma once
#include "frost_c.h"
#include "MethodShim_types.h"
typedef struct org$frostlang$frostc$CBackend$MethodShim org$frostlang$frostc$CBackend$MethodShim;
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$CBackend$MethodShim$init$frost$core$String$frost$core$String(void* rawSelf, frost$core$String* p_name, frost$core$String* p_type);
void org$frostlang$frostc$CBackend$MethodShim$cleanup(void* rawSelf);

