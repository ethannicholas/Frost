#pragma once
#include "frost_c.h"
#include "org/frostlang/regex/RegexToken/Kind_types.h"
#include "frost/core/String/Index_types.h"
#include "org/frostlang/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlang/regex/RegexToken_types.h"

typedef struct org$frostlang$regex$RegexToken {
    org$frostlang$regex$RegexToken$Kind kind;
    frost$core$String$Index start;
    frost$core$String$Index end;
    org$frostlang$frostc$Position position;
} org$frostlang$regex$RegexToken;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$regex$RegexToken$class_type;
extern org$frostlang$regex$RegexToken$class_type org$frostlang$regex$RegexToken$class;
typedef struct org$frostlang$regex$RegexToken$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    org$frostlang$regex$RegexToken value;
} org$frostlang$regex$RegexToken$wrapper;
typedef struct org$frostlang$regex$RegexToken$nullable {
    org$frostlang$regex$RegexToken value;
    bool nonnull;
} org$frostlang$regex$RegexToken$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$regex$RegexToken$wrapperclass_type;
extern org$frostlang$regex$RegexToken$wrapperclass_type org$frostlang$regex$RegexToken$wrapperclass;

