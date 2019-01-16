#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct org$frostlang$frostc$parser$Parser org$frostlang$frostc$parser$Parser;
#include "org/frostlang/frostc/parser/SyntaxHighlighter/Kind_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    org$frostlang$frostc$parser$Parser* parser;
    org$frostlang$frostc$parser$SyntaxHighlighter$Kind kind;
} org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight$class_type;
extern org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight$class_type org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight$class;

