#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "org/frostlang/frostc/Position_types.h"
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;
typedef struct org$frostlang$frostc$FieldDecl org$frostlang$frostc$FieldDecl;
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$lvalue$FieldLValue {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    org$frostlang$frostc$Compiler* compiler;
    org$frostlang$frostc$Position position;
    org$frostlang$frostc$IR$Value* target;
    org$frostlang$frostc$FieldDecl* field;
    org$frostlang$frostc$Type* rawType;
    org$frostlang$frostc$Type* effectiveType;
} org$frostlang$frostc$lvalue$FieldLValue;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[6]; } org$frostlang$frostc$lvalue$FieldLValue$class_type;
extern org$frostlang$frostc$lvalue$FieldLValue$class_type org$frostlang$frostc$lvalue$FieldLValue$class;

