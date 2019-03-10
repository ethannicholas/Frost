#pragma once
#include "frost_c.h"
#include "org/frostlang/frostc/IR/Block/ID_types.h"
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlang/frostc/pass/Analyzer/BlockExit_types.h"

typedef struct org$frostlang$frostc$pass$Analyzer$BlockExit {
    org$frostlang$frostc$IR$Block$ID id;
    frost$core$Int exit;
} org$frostlang$frostc$pass$Analyzer$BlockExit;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } org$frostlang$frostc$pass$Analyzer$BlockExit$class_type;
extern org$frostlang$frostc$pass$Analyzer$BlockExit$class_type org$frostlang$frostc$pass$Analyzer$BlockExit$class;
typedef struct org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    org$frostlang$frostc$pass$Analyzer$BlockExit value;
} org$frostlang$frostc$pass$Analyzer$BlockExit$wrapper;
typedef struct org$frostlang$frostc$pass$Analyzer$BlockExit$nullable {
    org$frostlang$frostc$pass$Analyzer$BlockExit value;
    bool nonnull;
} org$frostlang$frostc$pass$Analyzer$BlockExit$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$pass$Analyzer$BlockExit$wrapperclass_type;
extern org$frostlang$frostc$pass$Analyzer$BlockExit$wrapperclass_type org$frostlang$frostc$pass$Analyzer$BlockExit$wrapperclass;

