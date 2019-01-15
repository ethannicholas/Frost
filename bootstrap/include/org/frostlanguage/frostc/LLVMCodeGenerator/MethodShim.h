#pragma once
#include "frost_c.h"
#include "MethodShim_types.h"
typedef struct org$frostlanguage$frostc$LLVMCodeGenerator$MethodShim org$frostlanguage$frostc$LLVMCodeGenerator$MethodShim;
typedef struct frost$core$String frost$core$String;

void org$frostlanguage$frostc$LLVMCodeGenerator$MethodShim$init$frost$core$String$frost$core$String(org$frostlanguage$frostc$LLVMCodeGenerator$MethodShim* self, frost$core$String* p_name, frost$core$String* p_type);
void org$frostlanguage$frostc$LLVMCodeGenerator$MethodShim$cleanup(org$frostlanguage$frostc$LLVMCodeGenerator$MethodShim* self);

