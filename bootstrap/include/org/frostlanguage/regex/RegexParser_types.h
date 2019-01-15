#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct org$frostlanguage$regex$RegexLexer org$frostlanguage$regex$RegexLexer;
typedef struct frost$threads$MessageQueue frost$threads$MessageQueue;
typedef struct frost$io$File frost$io$File;
typedef struct frost$core$String frost$core$String;
typedef struct frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT;

typedef struct org$frostlanguage$regex$RegexParser {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    org$frostlanguage$regex$RegexLexer* lexer;
    frost$threads$MessageQueue* errors;
    frost$io$File* path;
    frost$core$String* source;
    frost$collections$SpecializedArray$LTorg$frostlanguage$regex$RegexToken$GT* pushbackBuffer;
} org$frostlanguage$regex$RegexParser;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[18]; } org$frostlanguage$regex$RegexParser$class_type;
extern org$frostlanguage$regex$RegexParser$class_type org$frostlanguage$regex$RegexParser$class;

