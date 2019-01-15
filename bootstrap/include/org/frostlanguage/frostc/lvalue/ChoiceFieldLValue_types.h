#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct org$frostlanguage$frostc$IR$Value org$frostlanguage$frostc$IR$Value;
typedef struct org$frostlanguage$frostc$ChoiceCase org$frostlanguage$frostc$ChoiceCase;
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlanguage$frostc$lvalue$ChoiceFieldLValue {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    org$frostlanguage$frostc$Compiler* compiler;
    org$frostlanguage$frostc$Position position;
    org$frostlanguage$frostc$IR$Value* target;
    org$frostlanguage$frostc$ChoiceCase* choiceCase;
    frost$core$Int64 index;
} org$frostlanguage$frostc$lvalue$ChoiceFieldLValue;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } org$frostlanguage$frostc$lvalue$ChoiceFieldLValue$class_type;
extern org$frostlanguage$frostc$lvalue$ChoiceFieldLValue$class_type org$frostlanguage$frostc$lvalue$ChoiceFieldLValue$class;

