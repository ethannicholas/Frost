#pragma once
#include "panda_c.h"
#include "MethodShim_types.h"
typedef struct org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim;
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$init$panda$core$String$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* self, panda$core$String* p_name, panda$core$String* p_type);
void org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$cleanup(org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* self);

