#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct org$frostlang$frostc$ASTNode org$frostlang$frostc$ASTNode;
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$Compiler$CoercionKey {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    org$frostlang$frostc$ASTNode* expr;
    org$frostlang$frostc$Type* target;
} org$frostlang$frostc$Compiler$CoercionKey;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } org$frostlang$frostc$Compiler$CoercionKey$class_type;
extern org$frostlang$frostc$Compiler$CoercionKey$class_type org$frostlang$frostc$Compiler$CoercionKey$class;

