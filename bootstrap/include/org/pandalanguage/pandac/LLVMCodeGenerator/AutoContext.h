#pragma once
#include "panda_c.h"
#include "AutoContext_types.h"
typedef struct org$pandalanguage$pandac$LLVMCodeGenerator$AutoContext org$pandalanguage$pandac$LLVMCodeGenerator$AutoContext;
typedef struct org$pandalanguage$pandac$LLVMCodeGenerator org$pandalanguage$pandac$LLVMCodeGenerator;
typedef struct org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext;

void org$pandalanguage$pandac$LLVMCodeGenerator$AutoContext$init$org$pandalanguage$pandac$LLVMCodeGenerator$org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext(org$pandalanguage$pandac$LLVMCodeGenerator$AutoContext* self, org$pandalanguage$pandac$LLVMCodeGenerator* p_cg, org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* p_context);
void org$pandalanguage$pandac$LLVMCodeGenerator$AutoContext$cleanup(org$pandalanguage$pandac$LLVMCodeGenerator$AutoContext* self);

