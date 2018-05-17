#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct org$pandalanguage$pandac$LLVMCodeGenerator org$pandalanguage$pandac$LLVMCodeGenerator;
typedef struct org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext;
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$LLVMCodeGenerator$AutoContext {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    org$pandalanguage$pandac$LLVMCodeGenerator* cg;
    org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* context;
} org$pandalanguage$pandac$LLVMCodeGenerator$AutoContext;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$LLVMCodeGenerator$AutoContext$class_type;
extern org$pandalanguage$pandac$LLVMCodeGenerator$AutoContext$class_type org$pandalanguage$pandac$LLVMCodeGenerator$AutoContext$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$LLVMCodeGenerator$AutoContext org$pandalanguage$pandac$LLVMCodeGenerator$AutoContext;
typedef struct org$pandalanguage$pandac$LLVMCodeGenerator org$pandalanguage$pandac$LLVMCodeGenerator;
typedef struct org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext;

void org$pandalanguage$pandac$LLVMCodeGenerator$AutoContext$init$org$pandalanguage$pandac$LLVMCodeGenerator$org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext(org$pandalanguage$pandac$LLVMCodeGenerator$AutoContext* self, org$pandalanguage$pandac$LLVMCodeGenerator* p_cg, org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* p_context);
void org$pandalanguage$pandac$LLVMCodeGenerator$AutoContext$cleanup(org$pandalanguage$pandac$LLVMCodeGenerator$AutoContext* self);

#endif
