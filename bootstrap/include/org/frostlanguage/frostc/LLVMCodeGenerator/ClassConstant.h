#pragma once
#include "frost_c.h"
#include "ClassConstant_types.h"
typedef struct org$frostlanguage$frostc$LLVMCodeGenerator$ClassConstant org$frostlanguage$frostc$LLVMCodeGenerator$ClassConstant;
typedef struct frost$core$String frost$core$String;

void org$frostlanguage$frostc$LLVMCodeGenerator$ClassConstant$init$frost$core$String$frost$core$String(org$frostlanguage$frostc$LLVMCodeGenerator$ClassConstant* self, frost$core$String* p_name, frost$core$String* p_type);
void org$frostlanguage$frostc$LLVMCodeGenerator$ClassConstant$cleanup(org$frostlanguage$frostc$LLVMCodeGenerator$ClassConstant* self);

