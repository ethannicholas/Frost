#pragma once
#include "frost_c.h"
#include "MethodShim_types.h"
typedef struct org$frostlang$frostc$CCodeGenerator$MethodShim org$frostlang$frostc$CCodeGenerator$MethodShim;
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$CCodeGenerator$MethodShim$init$frost$core$String$frost$core$String(void* rawSelf, frost$core$String* p_name, frost$core$String* p_type);
void org$frostlang$frostc$CCodeGenerator$MethodShim$cleanup(void* rawSelf);

