#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$ASTNode {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$Int64 $rawValue;
    int8_t $data[80];
} org$frostlang$frostc$ASTNode;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[3]; } org$frostlang$frostc$ASTNode$class_type;
extern org$frostlang$frostc$ASTNode$class_type org$frostlang$frostc$ASTNode$class;

