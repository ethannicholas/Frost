#pragma once
#include "frost_c.h"
#include "org/frostlanguage/json/Token/Kind_types.h"
#include "frost/core/String/Index_types.h"
#include "org/frostlanguage/json/Position_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlanguage/json/Token_types.h"

typedef struct org$frostlanguage$json$Token {
    org$frostlanguage$json$Token$Kind kind;
    frost$core$String$Index start;
    frost$core$String$Index end;
    org$frostlanguage$json$Position position;
} org$frostlanguage$json$Token;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlanguage$json$Token$class_type;
extern org$frostlanguage$json$Token$class_type org$frostlanguage$json$Token$class;
typedef struct org$frostlanguage$json$Token$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    org$frostlanguage$json$Token value;
} org$frostlanguage$json$Token$wrapper;
typedef struct org$frostlanguage$json$Token$nullable {
    org$frostlanguage$json$Token value;
    bool nonnull;
} org$frostlanguage$json$Token$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlanguage$json$Token$wrapperclass_type;
extern org$frostlanguage$json$Token$wrapperclass_type org$frostlanguage$json$Token$wrapperclass;

