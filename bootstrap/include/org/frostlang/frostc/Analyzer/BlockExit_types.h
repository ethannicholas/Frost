#pragma once
#include "frost_c.h"
#include "org/frostlang/frostc/IR/Block/ID_types.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlang/frostc/Analyzer/BlockExit_types.h"

typedef struct org$frostlang$frostc$Analyzer$BlockExit {
    org$frostlang$frostc$IR$Block$ID id;
    frost$core$Int64 exit;
} org$frostlang$frostc$Analyzer$BlockExit;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } org$frostlang$frostc$Analyzer$BlockExit$class_type;
extern org$frostlang$frostc$Analyzer$BlockExit$class_type org$frostlang$frostc$Analyzer$BlockExit$class;
typedef struct org$frostlang$frostc$Analyzer$BlockExit$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    org$frostlang$frostc$Analyzer$BlockExit value;
} org$frostlang$frostc$Analyzer$BlockExit$wrapper;
typedef struct org$frostlang$frostc$Analyzer$BlockExit$nullable {
    org$frostlang$frostc$Analyzer$BlockExit value;
    bool nonnull;
} org$frostlang$frostc$Analyzer$BlockExit$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$Analyzer$BlockExit$wrapperclass_type;
extern org$frostlang$frostc$Analyzer$BlockExit$wrapperclass_type org$frostlang$frostc$Analyzer$BlockExit$wrapperclass;

