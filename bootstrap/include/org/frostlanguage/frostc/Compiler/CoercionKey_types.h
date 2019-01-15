#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct org$frostlanguage$frostc$ASTNode org$frostlanguage$frostc$ASTNode;
typedef struct org$frostlanguage$frostc$Type org$frostlanguage$frostc$Type;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlanguage$frostc$Compiler$CoercionKey {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    org$frostlanguage$frostc$ASTNode* expr;
    org$frostlanguage$frostc$Type* target;
} org$frostlanguage$frostc$Compiler$CoercionKey;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } org$frostlanguage$frostc$Compiler$CoercionKey$class_type;
extern org$frostlanguage$frostc$Compiler$CoercionKey$class_type org$frostlanguage$frostc$Compiler$CoercionKey$class;

