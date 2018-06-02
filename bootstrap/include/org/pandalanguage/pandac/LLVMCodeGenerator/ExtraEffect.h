#pragma once
#include "panda_c.h"
#include "ExtraEffect_types.h"
typedef struct org$pandalanguage$pandac$LLVMCodeGenerator$ExtraEffect org$pandalanguage$pandac$LLVMCodeGenerator$ExtraEffect;
#include "panda/core/Int64_types.h"
typedef struct org$pandalanguage$pandac$IRNode org$pandalanguage$pandac$IRNode;
typedef struct panda$core$String panda$core$String;

void org$pandalanguage$pandac$LLVMCodeGenerator$ExtraEffect$cleanup(org$pandalanguage$pandac$LLVMCodeGenerator$ExtraEffect* self);
void org$pandalanguage$pandac$LLVMCodeGenerator$ExtraEffect$init$panda$core$Int64$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$LLVMCodeGenerator$ExtraEffect* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0);
void org$pandalanguage$pandac$LLVMCodeGenerator$ExtraEffect$init$panda$core$Int64$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator$ExtraEffect* self, panda$core$Int64 p_rv, panda$core$String* p_f0);

