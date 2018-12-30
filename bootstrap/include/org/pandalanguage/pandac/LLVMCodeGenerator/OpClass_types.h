#pragma once
#include "panda_c.h"
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Class panda$core$Class;
#include "org/pandalanguage/pandac/LLVMCodeGenerator/OpClass_types.h"

typedef struct org$pandalanguage$pandac$LLVMCodeGenerator$OpClass {
    panda$core$Int64 $rawValue;
    int8_t $data[0];
} org$pandalanguage$pandac$LLVMCodeGenerator$OpClass;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } org$pandalanguage$pandac$LLVMCodeGenerator$OpClass$class_type;
extern org$pandalanguage$pandac$LLVMCodeGenerator$OpClass$class_type org$pandalanguage$pandac$LLVMCodeGenerator$OpClass$class;
typedef struct org$pandalanguage$pandac$LLVMCodeGenerator$OpClass$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    org$pandalanguage$pandac$LLVMCodeGenerator$OpClass value;
} org$pandalanguage$pandac$LLVMCodeGenerator$OpClass$wrapper;
typedef struct org$pandalanguage$pandac$LLVMCodeGenerator$OpClass$nullable {
    org$pandalanguage$pandac$LLVMCodeGenerator$OpClass value;
    bool nonnull;
} org$pandalanguage$pandac$LLVMCodeGenerator$OpClass$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[2]; } org$pandalanguage$pandac$LLVMCodeGenerator$OpClass$wrapperclass_type;
extern org$pandalanguage$pandac$LLVMCodeGenerator$OpClass$wrapperclass_type org$pandalanguage$pandac$LLVMCodeGenerator$OpClass$wrapperclass;

