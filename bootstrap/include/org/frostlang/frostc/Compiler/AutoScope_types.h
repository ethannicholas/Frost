#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
typedef struct org$frostlang$frostc$SymbolTable org$frostlang$frostc$SymbolTable;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$Compiler$AutoScope {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    org$frostlang$frostc$Compiler* compiler;
    org$frostlang$frostc$SymbolTable* oldSymbolTable;
    org$frostlang$frostc$SymbolTable* newSymbolTable;
} org$frostlang$frostc$Compiler$AutoScope;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$Compiler$AutoScope$class_type;
extern org$frostlang$frostc$Compiler$AutoScope$class_type org$frostlang$frostc$Compiler$AutoScope$class;

