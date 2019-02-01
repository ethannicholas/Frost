#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "org/frostlang/frostc/Position_types.h"
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;
typedef struct org$frostlang$frostc$ASTNode org$frostlang$frostc$ASTNode;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$lvalue$IndexLValue {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    org$frostlang$frostc$Compiler* compiler;
    org$frostlang$frostc$Position position;
    org$frostlang$frostc$IR$Value* target;
    org$frostlang$frostc$ASTNode* rawIndex;
    org$frostlang$frostc$IR$Value* index;
} org$frostlang$frostc$lvalue$IndexLValue;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } org$frostlang$frostc$lvalue$IndexLValue$class_type;
extern org$frostlang$frostc$lvalue$IndexLValue$class_type org$frostlang$frostc$lvalue$IndexLValue$class;

