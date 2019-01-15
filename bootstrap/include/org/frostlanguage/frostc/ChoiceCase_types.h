#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "org/frostlanguage/frostc/Symbol/Kind_types.h"
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Weak frost$core$Weak;
typedef struct frost$collections$Array frost$collections$Array;
#include "frost/core/Int64_types.h"
#include "org/frostlanguage/frostc/Compiler/Resolution_types.h"

typedef struct org$frostlanguage$frostc$ChoiceCase {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    org$frostlanguage$frostc$Symbol$Kind kind;
    org$frostlanguage$frostc$Position position;
    frost$core$String* name;
    frost$core$Weak* owner;
    frost$core$String* doccomment;
    frost$collections$Array* fields;
    frost$core$Int64 rawValue;
    frost$core$Weak* initMethod;
    org$frostlanguage$frostc$Compiler$Resolution resolved;
} org$frostlanguage$frostc$ChoiceCase;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[3]; } org$frostlanguage$frostc$ChoiceCase$class_type;
extern org$frostlanguage$frostc$ChoiceCase$class_type org$frostlanguage$frostc$ChoiceCase$class;

