#pragma once
#include "frost_c.h"
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlang/frostc/parser/SyntaxHighlighter/Kind_types.h"

typedef struct org$frostlang$frostc$parser$SyntaxHighlighter$Kind {
    frost$core$Int $rawValue;
    union {
        struct {
        } $DEFAULT;
        struct {
        } $COMMENT;
        struct {
        } $DOC_COMMENT;
        struct {
        } $ANNOTATION;
        struct {
        } $METHOD_NAME;
        struct {
        } $METHOD_PARAMETER;
        struct {
        } $TYPE;
        struct {
        } $KEYWORD;
        struct {
        } $CONTROL_KEYWORD;
        struct {
        } $LITERAL;
        struct {
        } $STRING;
        struct {
        } $OPERATOR;
        struct {
        } $LABEL;
    } $data;
} org$frostlang$frostc$parser$SyntaxHighlighter$Kind;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } org$frostlang$frostc$parser$SyntaxHighlighter$Kind$class_type;
extern org$frostlang$frostc$parser$SyntaxHighlighter$Kind$class_type org$frostlang$frostc$parser$SyntaxHighlighter$Kind$class;
typedef struct org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    org$frostlang$frostc$parser$SyntaxHighlighter$Kind value;
} org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper;
typedef struct org$frostlang$frostc$parser$SyntaxHighlighter$Kind$nullable {
    org$frostlang$frostc$parser$SyntaxHighlighter$Kind value;
    bool nonnull;
} org$frostlang$frostc$parser$SyntaxHighlighter$Kind$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass_type;
extern org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass_type org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass;

