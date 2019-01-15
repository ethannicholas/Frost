#pragma once
#include "frost_c.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlanguage/regex/RegexToken/Kind_types.h"

typedef struct org$frostlanguage$regex$RegexToken$Kind {
    frost$core$Int64 $rawValue;
    int8_t $data[0];
} org$frostlanguage$regex$RegexToken$Kind;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } org$frostlanguage$regex$RegexToken$Kind$class_type;
extern org$frostlanguage$regex$RegexToken$Kind$class_type org$frostlanguage$regex$RegexToken$Kind$class;
typedef struct org$frostlanguage$regex$RegexToken$Kind$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    org$frostlanguage$regex$RegexToken$Kind value;
} org$frostlanguage$regex$RegexToken$Kind$wrapper;
typedef struct org$frostlanguage$regex$RegexToken$Kind$nullable {
    org$frostlanguage$regex$RegexToken$Kind value;
    bool nonnull;
} org$frostlanguage$regex$RegexToken$Kind$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlanguage$regex$RegexToken$Kind$wrapperclass_type;
extern org$frostlanguage$regex$RegexToken$Kind$wrapperclass_type org$frostlanguage$regex$RegexToken$Kind$wrapperclass;

