#pragma once
#include "panda_c.h"
#include "ClassConstant_types.h"
typedef struct org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant;
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* self, panda$core$String* p_name, panda$core$String* p_type);
void org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$cleanup(org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* self);

