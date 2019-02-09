#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct org$frostlang$regex$RegexLexer org$frostlang$regex$RegexLexer;
typedef struct frost$threads$MessageQueue frost$threads$MessageQueue;
typedef struct frost$io$File frost$io$File;
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT;

typedef struct org$frostlang$regex$RegexParser {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    org$frostlang$regex$RegexLexer* lexer;
    frost$threads$MessageQueue* errors;
    frost$io$File* path;
    frost$core$Int64 pathIndex;
    frost$core$String* source;
    frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* pushbackBuffer;
} org$frostlang$regex$RegexParser;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[18]; } org$frostlang$regex$RegexParser$class_type;
extern org$frostlang$regex$RegexParser$class_type org$frostlang$regex$RegexParser$class;

