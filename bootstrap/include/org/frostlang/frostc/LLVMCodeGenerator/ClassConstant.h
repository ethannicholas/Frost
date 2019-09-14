#pragma once
#include "frost_c.h"
#include "ClassConstant_types.h"
typedef struct org$frostlang$frostc$LLVMCodeGenerator$ClassConstant org$frostlang$frostc$LLVMCodeGenerator$ClassConstant;
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$LLVMCodeGenerator$ClassConstant$init$frost$core$String$frost$core$String(void* rawSelf, frost$core$String* p_name, frost$core$String* p_type);
void org$frostlang$frostc$LLVMCodeGenerator$ClassConstant$cleanup(void* rawSelf);

