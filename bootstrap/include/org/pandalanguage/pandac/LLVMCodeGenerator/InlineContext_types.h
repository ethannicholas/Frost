#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
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
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$class_type;
extern org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$class_type org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$class;

