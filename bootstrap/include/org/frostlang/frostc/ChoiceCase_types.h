#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "org/frostlang/frostc/Symbol/Kind_types.h"
#include "org/frostlang/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Weak frost$core$Weak;
typedef struct frost$collections$Array frost$collections$Array;
#include "frost/core/Int64_types.h"
#include "org/frostlang/frostc/Compiler/Resolution_types.h"

typedef struct org$frostlang$frostc$ChoiceCase {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    org$frostlang$frostc$Symbol$Kind kind;
    org$frostlang$frostc$Position position;
    frost$core$String* name;
    frost$core$Weak* owner;
    frost$core$String* doccomment;
    frost$collections$Array* fields;
    frost$core$Int64 rawValue;
    frost$core$Weak* initMethod;
    org$frostlang$frostc$Compiler$Resolution resolved;
} org$frostlang$frostc$ChoiceCase;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[3]; } org$frostlang$frostc$ChoiceCase$class_type;
extern org$frostlang$frostc$ChoiceCase$class_type org$frostlang$frostc$ChoiceCase$class;

