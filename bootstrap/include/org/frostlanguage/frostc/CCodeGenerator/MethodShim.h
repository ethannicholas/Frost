#pragma once
#include "frost_c.h"
#include "MethodShim_types.h"
typedef struct org$frostlanguage$frostc$CCodeGenerator$MethodShim org$frostlanguage$frostc$CCodeGenerator$MethodShim;
typedef struct frost$core$String frost$core$String;

void org$frostlanguage$frostc$CCodeGenerator$MethodShim$init$frost$core$String$frost$core$String(org$frostlanguage$frostc$CCodeGenerator$MethodShim* self, frost$core$String* p_name, frost$core$String* p_type);
void org$frostlanguage$frostc$CCodeGenerator$MethodShim$cleanup(org$frostlanguage$frostc$CCodeGenerator$MethodShim* self);

