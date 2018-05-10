#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 $rawValue;
    int8_t $data[24];
} org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$class_type;
extern org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$class_type org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext;
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$collections$Map panda$collections$Map;
typedef struct org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext;

void org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$init$panda$core$Int64$panda$core$String$Q$panda$core$String$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* self, panda$core$Int64 p_rv, panda$core$String* p_f0, panda$core$String* p_f1, panda$core$String* p_f2);
void org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$init$panda$core$Int64$panda$core$String$panda$collections$Map$LTpanda$core$String$Cpanda$core$String$GT(org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* self, panda$core$Int64 p_rv, panda$core$String* p_f0, panda$collections$Map* p_f1);
void org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$init$panda$core$Int64$org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext(org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* p_f0);
void org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext$cleanup(org$pandalanguage$pandac$LLVMCodeGenerator$EnclosingContext* self);

#endif
