#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct org$frostlanguage$frostc$parser$Parser org$frostlanguage$frostc$parser$Parser;
#include "org/frostlanguage/frostc/parser/SyntaxHighlighter/Kind_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    org$frostlanguage$frostc$parser$Parser* parser;
    org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind kind;
} org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight$class_type;
extern org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight$class_type org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight$class;

