#pragma once
#include "frost_c.h"
#include "org/frostlang/frostc/parser/Token/Kind_types.h"
#include "frost/core/String/Index_types.h"
#include "org/frostlang/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlang/frostc/parser/Token_types.h"

typedef struct org$frostlang$frostc$parser$Token {
    org$frostlang$frostc$parser$Token$Kind kind;
    frost$core$String$Index start;
    frost$core$String$Index end;
    org$frostlang$frostc$Position position;
} org$frostlang$frostc$parser$Token;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$parser$Token$class_type;
extern org$frostlang$frostc$parser$Token$class_type org$frostlang$frostc$parser$Token$class;
typedef struct org$frostlang$frostc$parser$Token$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    org$frostlang$frostc$parser$Token value;
} org$frostlang$frostc$parser$Token$wrapper;
typedef struct org$frostlang$frostc$parser$Token$nullable {
    org$frostlang$frostc$parser$Token value;
    bool nonnull;
} org$frostlang$frostc$parser$Token$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$parser$Token$wrapperclass_type;
extern org$frostlang$frostc$parser$Token$wrapperclass_type org$frostlang$frostc$parser$Token$wrapperclass;

