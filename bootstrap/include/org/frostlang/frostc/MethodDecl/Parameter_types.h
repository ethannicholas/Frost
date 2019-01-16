#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
typedef struct frost$core$Weak frost$core$Weak;

typedef struct org$frostlang$frostc$MethodDecl$Parameter {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$String* name;
    org$frostlang$frostc$Type* type;
    frost$core$Weak* owner;
} org$frostlang$frostc$MethodDecl$Parameter;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$MethodDecl$Parameter$class_type;
extern org$frostlang$frostc$MethodDecl$Parameter$class_type org$frostlang$frostc$MethodDecl$Parameter$class;

