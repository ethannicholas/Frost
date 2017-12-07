#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$collections$ImmutableArray panda$collections$ImmutableArray;
typedef struct panda$collections$Array panda$collections$Array;

typedef struct org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$String* varSuffix;
    panda$core$String* selfRef;
    panda$collections$ImmutableArray* argRefs;
    panda$collections$Array* returns;
    panda$core$String* exitLabel;
} org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$class_type;
extern org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$class_type org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext;
typedef struct panda$core$String panda$core$String;
typedef struct panda$collections$ListView panda$collections$ListView;

void org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$init$panda$core$String$panda$core$String$panda$collections$ListView$LTpanda$core$String$GT$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* self, panda$core$String* p_varSuffix, panda$core$String* p_selfRef, panda$collections$ListView* p_argRefs, panda$core$String* p_exitLabel);

#endif
