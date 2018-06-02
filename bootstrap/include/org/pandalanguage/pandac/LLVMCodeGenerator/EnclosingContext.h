#pragma once
#include "panda_c.h"
#include "EnclosingContext_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext;
#include "panda/core/Int64_types.h"
typedef struct panda$collections$Map panda$collections$Map;
typedef struct org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext;

panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$convert$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* self);
void org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$cleanup(org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* self);
void org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$init$panda$core$Int64$panda$core$String$Q$panda$core$String$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* self, panda$core$Int64 p_rv, panda$core$String* p_f0, panda$core$String* p_f1, panda$core$String* p_f2);
void org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$init$panda$core$Int64$panda$core$String$panda$collections$Map$LTpanda$core$String$Cpanda$core$String$GT(org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* self, panda$core$Int64 p_rv, panda$core$String* p_f0, panda$collections$Map* p_f1);
void org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$init$panda$core$Int64$org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext(org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* p_f0);

