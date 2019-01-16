#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "org/frostlang/frostc/Symbol/Kind_types.h"
#include "org/frostlang/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
#include "org/frostlang/frostc/Variable/Kind_types.h"
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
typedef struct org$frostlang$frostc$Variable$Storage org$frostlang$frostc$Variable$Storage;
typedef struct frost$core$Weak frost$core$Weak;

typedef struct org$frostlang$frostc$Variable {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    org$frostlang$frostc$Symbol$Kind kind;
    org$frostlang$frostc$Position position;
    frost$core$String* name;
    org$frostlang$frostc$Variable$Kind varKind;
    org$frostlang$frostc$Type* type;
    org$frostlang$frostc$Variable$Storage* storage;
    frost$core$Weak* owner;
} org$frostlang$frostc$Variable;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[3]; } org$frostlang$frostc$Variable$class_type;
extern org$frostlang$frostc$Variable$class_type org$frostlang$frostc$Variable$class;

