#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct org$pandalanguage$regex$RegexLexer org$pandalanguage$regex$RegexLexer;
typedef struct panda$threads$MessageQueue panda$threads$MessageQueue;
typedef struct panda$io$File panda$io$File;
typedef struct panda$core$String panda$core$String;
typedef struct panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT;

typedef struct org$pandalanguage$regex$RegexParser {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    org$pandalanguage$regex$RegexLexer* lexer;
    panda$threads$MessageQueue* errors;
    panda$io$File* path;
    panda$core$String* source;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* pushbackBuffer;
} org$pandalanguage$regex$RegexParser;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[18]; } org$pandalanguage$regex$RegexParser$class_type;
extern org$pandalanguage$regex$RegexParser$class_type org$pandalanguage$regex$RegexParser$class;

