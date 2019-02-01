#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$collections$Array frost$collections$Array;
#include "frost/core/Int64_types.h"
typedef struct org$frostlang$frostc$IR$Block org$frostlang$frostc$IR$Block;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$IR {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$collections$Array* locals;
    frost$collections$Array* blocks;
    frost$core$Int64 currentStatementId;
    frost$core$Int64 currentBlockID;
    org$frostlang$frostc$IR$Block* currentBlock;
} org$frostlang$frostc$IR;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[6]; } org$frostlang$frostc$IR$class_type;
extern org$frostlang$frostc$IR$class_type org$frostlang$frostc$IR$class;

