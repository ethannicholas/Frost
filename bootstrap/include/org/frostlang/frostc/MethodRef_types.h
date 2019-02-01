#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
typedef struct org$frostlang$frostc$MethodDecl org$frostlang$frostc$MethodDecl;
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$MethodRef {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    org$frostlang$frostc$Type* target;
    org$frostlang$frostc$MethodDecl* value;
    org$frostlang$frostc$Type* effectiveType;
    frost$core$Bit requiresTypeInference;
} org$frostlang$frostc$MethodRef;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } org$frostlang$frostc$MethodRef$class_type;
extern org$frostlang$frostc$MethodRef$class_type org$frostlang$frostc$MethodRef$class;

