#pragma once
#include "frost_c.h"
#include "org/frostlang/json/Token/Kind_types.h"
#include "frost/core/String/Index_types.h"
#include "org/frostlang/json/Position_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlang/json/Token_types.h"

typedef struct org$frostlang$json$Token {
    org$frostlang$json$Token$Kind kind;
    frost$core$String$Index start;
    frost$core$String$Index end;
    org$frostlang$json$Position position;
} org$frostlang$json$Token;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$json$Token$class_type;
extern org$frostlang$json$Token$class_type org$frostlang$json$Token$class;
typedef struct org$frostlang$json$Token$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    org$frostlang$json$Token value;
} org$frostlang$json$Token$wrapper;
typedef struct org$frostlang$json$Token$nullable {
    org$frostlang$json$Token value;
    bool nonnull;
} org$frostlang$json$Token$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$json$Token$wrapperclass_type;
extern org$frostlang$json$Token$wrapperclass_type org$frostlang$json$Token$wrapperclass;

