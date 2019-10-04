#pragma once
#include "frost_c.h"
#include "ClassConstant_types.h"
typedef struct org$frostlang$frostc$LLVMBackend$ClassConstant org$frostlang$frostc$LLVMBackend$ClassConstant;
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$LLVMBackend$ClassConstant$init$frost$core$String$frost$core$String(void* rawSelf, frost$core$String* p_name, frost$core$String* p_type);
void org$frostlang$frostc$LLVMBackend$ClassConstant$cleanup(void* rawSelf);

