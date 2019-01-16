#pragma once
#include "frost_c.h"
#include "MethodShim_types.h"
typedef struct org$frostlang$frostc$LLVMCodeGenerator$MethodShim org$frostlang$frostc$LLVMCodeGenerator$MethodShim;
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$LLVMCodeGenerator$MethodShim$init$frost$core$String$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator$MethodShim* self, frost$core$String* p_name, frost$core$String* p_type);
void org$frostlang$frostc$LLVMCodeGenerator$MethodShim$cleanup(org$frostlang$frostc$LLVMCodeGenerator$MethodShim* self);

