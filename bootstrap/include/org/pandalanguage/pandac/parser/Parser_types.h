#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct org$pandalanguage$pandac$parser$Lexer org$pandalanguage$pandac$parser$Lexer;
typedef struct org$pandalanguage$regex$RegexParser org$pandalanguage$regex$RegexParser;
typedef struct panda$threads$MessageQueue panda$threads$MessageQueue;
typedef struct panda$io$File panda$io$File;
typedef struct panda$core$String panda$core$String;
typedef struct panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT;
typedef struct panda$collections$Stack panda$collections$Stack;
#include "panda/core/Bit_types.h"

typedef struct org$pandalanguage$pandac$parser$Parser {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    org$pandalanguage$pandac$parser$Lexer* lexer;
    org$pandalanguage$regex$RegexParser* regexParser;
    panda$threads$MessageQueue* errors;
    panda$io$File* path;
    panda$core$String* source;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* pushbackBuffer;
    panda$collections$Stack* commaSeparatedExpressionContext;
    panda$core$Bit inSpeculative;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* speculativeBuffer;
    panda$core$Bit allowLambdas;
} org$pandalanguage$pandac$parser$Parser;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[79]; } org$pandalanguage$pandac$parser$Parser$class_type;
extern org$pandalanguage$pandac$parser$Parser$class_type org$pandalanguage$pandac$parser$Parser$class;

