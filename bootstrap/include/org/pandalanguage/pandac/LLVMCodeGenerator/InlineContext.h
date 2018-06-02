#pragma once
#include "panda_c.h"
#include "InlineContext_types.h"
typedef struct org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext;
typedef struct panda$core$String panda$core$String;
typedef struct panda$collections$ListView panda$collections$ListView;

void org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$init$panda$core$String$panda$core$String$panda$collections$ListView$LTpanda$core$String$GT$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* self, panda$core$String* p_varSuffix, panda$core$String* p_selfRef, panda$collections$ListView* p_argRefs, panda$core$String* p_exitLabel);
void org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$cleanup(org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* self);

