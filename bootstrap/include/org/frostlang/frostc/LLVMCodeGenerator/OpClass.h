#pragma once
#include "frost_c.h"
#include "OpClass_types.h"
#include "org/frostlang/frostc/LLVMCodeGenerator/OpClass_types.h"
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$LLVMCodeGenerator$OpClass$cleanup(org$frostlang$frostc$LLVMCodeGenerator$OpClass self);
org$frostlang$frostc$LLVMCodeGenerator$OpClass org$frostlang$frostc$LLVMCodeGenerator$OpClass$init$frost$core$Int(frost$core$Int p_rv);
frost$core$Bit org$frostlang$frostc$LLVMCodeGenerator$OpClass$$EQ$org$frostlang$frostc$LLVMCodeGenerator$OpClass$R$frost$core$Bit(org$frostlang$frostc$LLVMCodeGenerator$OpClass self, org$frostlang$frostc$LLVMCodeGenerator$OpClass p_other);
frost$core$Int org$frostlang$frostc$LLVMCodeGenerator$OpClass$get_hash$R$frost$core$Int(org$frostlang$frostc$LLVMCodeGenerator$OpClass self);
frost$core$String* org$frostlang$frostc$LLVMCodeGenerator$OpClass$get_asString$R$frost$core$String(org$frostlang$frostc$LLVMCodeGenerator$OpClass self);

