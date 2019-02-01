#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct org$frostlang$frostc$parser$Lexer org$frostlang$frostc$parser$Lexer;
typedef struct org$frostlang$regex$RegexParser org$frostlang$regex$RegexParser;
typedef struct frost$threads$MessageQueue frost$threads$MessageQueue;
typedef struct frost$io$File frost$io$File;
typedef struct frost$core$String frost$core$String;
typedef struct frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT;
typedef struct frost$collections$Stack frost$collections$Stack;
#include "frost/core/Bit_types.h"
typedef struct org$frostlang$frostc$parser$SyntaxHighlighter org$frostlang$frostc$parser$SyntaxHighlighter;

typedef struct org$frostlang$frostc$parser$Parser {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    org$frostlang$frostc$parser$Lexer* lexer;
    org$frostlang$regex$RegexParser* regexParser;
    frost$threads$MessageQueue* errors;
    frost$io$File* path;
    frost$core$String* source;
    frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* pushbackBuffer;
    frost$collections$Stack* commaSeparatedExpressionContext;
    frost$collections$Stack* speculativeBuffers;
    frost$core$Bit allowLambdas;
    frost$core$Bit reportErrors;
    org$frostlang$frostc$parser$SyntaxHighlighter* syntaxHighlighter;
} org$frostlang$frostc$parser$Parser;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[86]; } org$frostlang$frostc$parser$Parser$class_type;
extern org$frostlang$frostc$parser$Parser$class_type org$frostlang$frostc$parser$Parser$class;

