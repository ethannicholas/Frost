#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
typedef struct org$frostlang$frostc$MethodDecl org$frostlang$frostc$MethodDecl;
typedef struct org$frostlang$frostc$IR org$frostlang$frostc$IR;
typedef struct frost$collections$HashMap frost$collections$HashMap;
typedef struct frost$collections$HashSet frost$collections$HashSet;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$Analyzer {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    org$frostlang$frostc$Compiler* compiler;
    org$frostlang$frostc$MethodDecl* m;
    org$frostlang$frostc$IR* ir;
    frost$collections$HashMap* predecessors;
    frost$collections$HashMap* entryStates;
    frost$collections$HashSet* worklist;
} org$frostlang$frostc$Analyzer;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[8]; } org$frostlang$frostc$Analyzer$class_type;
extern org$frostlang$frostc$Analyzer$class_type org$frostlang$frostc$Analyzer$class;

