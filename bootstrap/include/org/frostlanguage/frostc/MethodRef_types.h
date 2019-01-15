#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct org$frostlanguage$frostc$Type org$frostlanguage$frostc$Type;
typedef struct org$frostlanguage$frostc$MethodDecl org$frostlanguage$frostc$MethodDecl;
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlanguage$frostc$MethodRef {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    org$frostlanguage$frostc$Type* target;
    org$frostlanguage$frostc$MethodDecl* value;
    org$frostlanguage$frostc$Type* effectiveType;
    frost$core$Bit requiresTypeInference;
} org$frostlanguage$frostc$MethodRef;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } org$frostlanguage$frostc$MethodRef$class_type;
extern org$frostlanguage$frostc$MethodRef$class_type org$frostlanguage$frostc$MethodRef$class;

