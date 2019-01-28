#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
typedef struct org$frostlang$frostc$ClassDecl org$frostlang$frostc$ClassDecl;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$Compiler$_Closure12 {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    org$frostlang$frostc$Compiler* $self;
    org$frostlang$frostc$ClassDecl* cl;
} org$frostlang$frostc$Compiler$_Closure12;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[3]; } org$frostlang$frostc$Compiler$_Closure12$class_type;
extern org$frostlang$frostc$Compiler$_Closure12$class_type org$frostlang$frostc$Compiler$_Closure12$class;

