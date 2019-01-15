#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$collections$Array frost$collections$Array;
#include "frost/core/Int64_types.h"
typedef struct org$frostlanguage$frostc$IR$Block org$frostlanguage$frostc$IR$Block;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlanguage$frostc$IR {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$collections$Array* locals;
    frost$collections$Array* blocks;
    frost$core$Int64 currentStatementId;
    frost$core$Int64 currentBlockID;
    org$frostlanguage$frostc$IR$Block* currentBlock;
} org$frostlanguage$frostc$IR;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[6]; } org$frostlanguage$frostc$IR$class_type;
extern org$frostlanguage$frostc$IR$class_type org$frostlanguage$frostc$IR$class;

