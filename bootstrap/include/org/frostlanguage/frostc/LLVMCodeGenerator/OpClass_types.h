#pragma once
#include "frost_c.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlanguage/frostc/LLVMCodeGenerator/OpClass_types.h"

typedef struct org$frostlanguage$frostc$LLVMCodeGenerator$OpClass {
    frost$core$Int64 $rawValue;
    int8_t $data[0];
} org$frostlanguage$frostc$LLVMCodeGenerator$OpClass;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } org$frostlanguage$frostc$LLVMCodeGenerator$OpClass$class_type;
extern org$frostlanguage$frostc$LLVMCodeGenerator$OpClass$class_type org$frostlanguage$frostc$LLVMCodeGenerator$OpClass$class;
typedef struct org$frostlanguage$frostc$LLVMCodeGenerator$OpClass$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    org$frostlanguage$frostc$LLVMCodeGenerator$OpClass value;
} org$frostlanguage$frostc$LLVMCodeGenerator$OpClass$wrapper;
typedef struct org$frostlanguage$frostc$LLVMCodeGenerator$OpClass$nullable {
    org$frostlanguage$frostc$LLVMCodeGenerator$OpClass value;
    bool nonnull;
} org$frostlanguage$frostc$LLVMCodeGenerator$OpClass$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlanguage$frostc$LLVMCodeGenerator$OpClass$wrapperclass_type;
extern org$frostlanguage$frostc$LLVMCodeGenerator$OpClass$wrapperclass_type org$frostlanguage$frostc$LLVMCodeGenerator$OpClass$wrapperclass;

