#pragma once
#include "frost_c.h"
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlang/frostc/parser/SyntaxHighlighter/Kind_types.h"

typedef struct org$frostlang$frostc$parser$SyntaxHighlighter$Kind {
    frost$core$Int64 $rawValue;
    int8_t $data[0];
} org$frostlang$frostc$parser$SyntaxHighlighter$Kind;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } org$frostlang$frostc$parser$SyntaxHighlighter$Kind$class_type;
extern org$frostlang$frostc$parser$SyntaxHighlighter$Kind$class_type org$frostlang$frostc$parser$SyntaxHighlighter$Kind$class;
typedef struct org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    org$frostlang$frostc$parser$SyntaxHighlighter$Kind value;
} org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper;
typedef struct org$frostlang$frostc$parser$SyntaxHighlighter$Kind$nullable {
    org$frostlang$frostc$parser$SyntaxHighlighter$Kind value;
    bool nonnull;
} org$frostlang$frostc$parser$SyntaxHighlighter$Kind$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass_type;
extern org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass_type org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass;

