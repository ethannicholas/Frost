#pragma once
#include "frost_c.h"
#include "ClassConstant_types.h"
typedef struct org$frostlanguage$frostc$CCodeGenerator$ClassConstant org$frostlanguage$frostc$CCodeGenerator$ClassConstant;
typedef struct frost$core$String frost$core$String;

void org$frostlanguage$frostc$CCodeGenerator$ClassConstant$init$frost$core$String$frost$core$String(org$frostlanguage$frostc$CCodeGenerator$ClassConstant* self, frost$core$String* p_name, frost$core$String* p_type);
void org$frostlanguage$frostc$CCodeGenerator$ClassConstant$cleanup(org$frostlanguage$frostc$CCodeGenerator$ClassConstant* self);

