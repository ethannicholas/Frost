#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct org$frostlang$frostc$SymbolTable org$frostlang$frostc$SymbolTable;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$Compiler$_Closure13 {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    org$frostlang$frostc$SymbolTable* $dummy450;
} org$frostlang$frostc$Compiler$_Closure13;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[3]; } org$frostlang$frostc$Compiler$_Closure13$class_type;
extern org$frostlang$frostc$Compiler$_Closure13$class_type org$frostlang$frostc$Compiler$_Closure13$class;

