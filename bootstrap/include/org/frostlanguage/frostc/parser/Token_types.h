#pragma once
#include "frost_c.h"
#include "org/frostlanguage/frostc/parser/Token/Kind_types.h"
#include "frost/core/String/Index_types.h"
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlanguage/frostc/parser/Token_types.h"

typedef struct org$frostlanguage$frostc$parser$Token {
    org$frostlanguage$frostc$parser$Token$Kind kind;
    frost$core$String$Index start;
    frost$core$String$Index end;
    org$frostlanguage$frostc$Position position;
} org$frostlanguage$frostc$parser$Token;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlanguage$frostc$parser$Token$class_type;
extern org$frostlanguage$frostc$parser$Token$class_type org$frostlanguage$frostc$parser$Token$class;
typedef struct org$frostlanguage$frostc$parser$Token$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    org$frostlanguage$frostc$parser$Token value;
} org$frostlanguage$frostc$parser$Token$wrapper;
typedef struct org$frostlanguage$frostc$parser$Token$nullable {
    org$frostlanguage$frostc$parser$Token value;
    bool nonnull;
} org$frostlanguage$frostc$parser$Token$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlanguage$frostc$parser$Token$wrapperclass_type;
extern org$frostlanguage$frostc$parser$Token$wrapperclass_type org$frostlanguage$frostc$parser$Token$wrapperclass;

