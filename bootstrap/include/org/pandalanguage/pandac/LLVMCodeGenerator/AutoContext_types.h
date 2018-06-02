#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct org$pandalanguage$pandac$LLVMCodeGenerator org$pandalanguage$pandac$LLVMCodeGenerator;
typedef struct org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext;
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$LLVMCodeGenerator$AutoContext {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    org$pandalanguage$pandac$LLVMCodeGenerator* cg;
    org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* context;
} org$pandalanguage$pandac$LLVMCodeGenerator$AutoContext;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$LLVMCodeGenerator$AutoContext$class_type;
extern org$pandalanguage$pandac$LLVMCodeGenerator$AutoContext$class_type org$pandalanguage$pandac$LLVMCodeGenerator$AutoContext$class;

