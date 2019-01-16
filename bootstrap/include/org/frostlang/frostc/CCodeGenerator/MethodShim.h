#pragma once
#include "frost_c.h"
#include "MethodShim_types.h"
typedef struct org$frostlang$frostc$CCodeGenerator$MethodShim org$frostlang$frostc$CCodeGenerator$MethodShim;
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$CCodeGenerator$MethodShim$init$frost$core$String$frost$core$String(org$frostlang$frostc$CCodeGenerator$MethodShim* self, frost$core$String* p_name, frost$core$String* p_type);
void org$frostlang$frostc$CCodeGenerator$MethodShim$cleanup(org$frostlang$frostc$CCodeGenerator$MethodShim* self);

