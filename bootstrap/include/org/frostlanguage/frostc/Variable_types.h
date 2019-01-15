#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "org/frostlanguage/frostc/Symbol/Kind_types.h"
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
#include "org/frostlanguage/frostc/Variable/Kind_types.h"
typedef struct org$frostlanguage$frostc$Type org$frostlanguage$frostc$Type;
typedef struct org$frostlanguage$frostc$Variable$Storage org$frostlanguage$frostc$Variable$Storage;
typedef struct frost$core$Weak frost$core$Weak;

typedef struct org$frostlanguage$frostc$Variable {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    org$frostlanguage$frostc$Symbol$Kind kind;
    org$frostlanguage$frostc$Position position;
    frost$core$String* name;
    org$frostlanguage$frostc$Variable$Kind varKind;
    org$frostlanguage$frostc$Type* type;
    org$frostlanguage$frostc$Variable$Storage* storage;
    frost$core$Weak* owner;
} org$frostlanguage$frostc$Variable;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[3]; } org$frostlanguage$frostc$Variable$class_type;
extern org$frostlanguage$frostc$Variable$class_type org$frostlanguage$frostc$Variable$class;

