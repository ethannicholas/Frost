#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
typedef struct org$frostlanguage$frostc$SymbolTable org$frostlanguage$frostc$SymbolTable;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlanguage$frostc$Compiler$AutoScope {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    org$frostlanguage$frostc$Compiler* compiler;
    org$frostlanguage$frostc$SymbolTable* oldSymbolTable;
    org$frostlanguage$frostc$SymbolTable* newSymbolTable;
} org$frostlanguage$frostc$Compiler$AutoScope;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlanguage$frostc$Compiler$AutoScope$class_type;
extern org$frostlanguage$frostc$Compiler$AutoScope$class_type org$frostlanguage$frostc$Compiler$AutoScope$class;

