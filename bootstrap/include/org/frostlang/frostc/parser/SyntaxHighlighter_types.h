#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$collections$Stack frost$collections$Stack;
typedef struct frost$collections$Array frost$collections$Array;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$parser$SyntaxHighlighter {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$collections$Stack* stack;
    frost$collections$Array* tokens;
} org$frostlang$frostc$parser$SyntaxHighlighter;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[8]; } org$frostlang$frostc$parser$SyntaxHighlighter$class_type;
extern org$frostlang$frostc$parser$SyntaxHighlighter$class_type org$frostlang$frostc$parser$SyntaxHighlighter$class;

