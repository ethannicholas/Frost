#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$core$String panda$core$String;

typedef struct org$pandalanguage$pandac$LLVMCodeGenerator$OpClass {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
} org$pandalanguage$pandac$LLVMCodeGenerator$OpClass;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$LLVMCodeGenerator$OpClass$class_type;
extern org$pandalanguage$pandac$LLVMCodeGenerator$OpClass$class_type org$pandalanguage$pandac$LLVMCodeGenerator$OpClass$class;

#ifndef PANDA_TYPESONLY
typedef struct org$pandalanguage$pandac$LLVMCodeGenerator$OpClass org$pandalanguage$pandac$LLVMCodeGenerator$OpClass;

void org$pandalanguage$pandac$LLVMCodeGenerator$OpClass$init(org$pandalanguage$pandac$LLVMCodeGenerator$OpClass* self);
void org$pandalanguage$pandac$LLVMCodeGenerator$OpClass$cleanup(org$pandalanguage$pandac$LLVMCodeGenerator$OpClass* self);

#endif
