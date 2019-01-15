#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct org$frostlanguage$frostc$parser$Lexer org$frostlanguage$frostc$parser$Lexer;
typedef struct org$frostlanguage$regex$RegexParser org$frostlanguage$regex$RegexParser;
typedef struct frost$threads$MessageQueue frost$threads$MessageQueue;
typedef struct frost$io$File frost$io$File;
typedef struct frost$core$String frost$core$String;
typedef struct frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT;
typedef struct frost$collections$Stack frost$collections$Stack;
#include "frost/core/Bit_types.h"
typedef struct org$frostlanguage$frostc$parser$SyntaxHighlighter org$frostlanguage$frostc$parser$SyntaxHighlighter;

typedef struct org$frostlanguage$frostc$parser$Parser {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    org$frostlanguage$frostc$parser$Lexer* lexer;
    org$frostlanguage$regex$RegexParser* regexParser;
    frost$threads$MessageQueue* errors;
    frost$io$File* path;
    frost$core$String* source;
    frost$collections$SpecializedArray$LTorg$frostlanguage$frostc$parser$Token$GT* pushbackBuffer;
    frost$collections$Stack* commaSeparatedExpressionContext;
    frost$collections$Stack* speculativeBuffers;
    frost$core$Bit allowLambdas;
    frost$core$Bit reportErrors;
    org$frostlanguage$frostc$parser$SyntaxHighlighter* syntaxHighlighter;
} org$frostlanguage$frostc$parser$Parser;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[83]; } org$frostlanguage$frostc$parser$Parser$class_type;
extern org$frostlanguage$frostc$parser$Parser$class_type org$frostlanguage$frostc$parser$Parser$class;

