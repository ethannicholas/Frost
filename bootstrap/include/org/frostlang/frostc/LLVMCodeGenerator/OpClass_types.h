#pragma once
#include "frost_c.h"
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlang/frostc/LLVMCodeGenerator/OpClass_types.h"

typedef struct org$frostlang$frostc$LLVMCodeGenerator$OpClass {
    frost$core$Int $rawValue;
    int8_t $data[0];
} org$frostlang$frostc$LLVMCodeGenerator$OpClass;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } org$frostlang$frostc$LLVMCodeGenerator$OpClass$class_type;
extern org$frostlang$frostc$LLVMCodeGenerator$OpClass$class_type org$frostlang$frostc$LLVMCodeGenerator$OpClass$class;
typedef struct org$frostlang$frostc$LLVMCodeGenerator$OpClass$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    org$frostlang$frostc$LLVMCodeGenerator$OpClass value;
} org$frostlang$frostc$LLVMCodeGenerator$OpClass$wrapper;
typedef struct org$frostlang$frostc$LLVMCodeGenerator$OpClass$nullable {
    org$frostlang$frostc$LLVMCodeGenerator$OpClass value;
    bool nonnull;
} org$frostlang$frostc$LLVMCodeGenerator$OpClass$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$LLVMCodeGenerator$OpClass$wrapperclass_type;
extern org$frostlang$frostc$LLVMCodeGenerator$OpClass$wrapperclass_type org$frostlang$frostc$LLVMCodeGenerator$OpClass$wrapperclass;

