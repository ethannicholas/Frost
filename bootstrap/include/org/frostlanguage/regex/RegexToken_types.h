#pragma once
#include "frost_c.h"
#include "org/frostlanguage/regex/RegexToken/Kind_types.h"
#include "frost/core/String/Index_types.h"
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlanguage/regex/RegexToken_types.h"

typedef struct org$frostlanguage$regex$RegexToken {
    org$frostlanguage$regex$RegexToken$Kind kind;
    frost$core$String$Index start;
    frost$core$String$Index end;
    org$frostlanguage$frostc$Position position;
} org$frostlanguage$regex$RegexToken;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlanguage$regex$RegexToken$class_type;
extern org$frostlanguage$regex$RegexToken$class_type org$frostlanguage$regex$RegexToken$class;
typedef struct org$frostlanguage$regex$RegexToken$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    org$frostlanguage$regex$RegexToken value;
} org$frostlanguage$regex$RegexToken$wrapper;
typedef struct org$frostlanguage$regex$RegexToken$nullable {
    org$frostlanguage$regex$RegexToken value;
    bool nonnull;
} org$frostlanguage$regex$RegexToken$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlanguage$regex$RegexToken$wrapperclass_type;
extern org$frostlanguage$regex$RegexToken$wrapperclass_type org$frostlanguage$regex$RegexToken$wrapperclass;

