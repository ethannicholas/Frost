#pragma once
#include "frost_c.h"
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlang/regex/RegexToken/Kind_types.h"

typedef struct org$frostlang$regex$RegexToken$Kind {
    frost$core$Int $rawValue;
    union {
        struct {
        } $EOF;
        struct {
        } $SHIFTRIGHT;
        struct {
        } $REGEX;
        struct {
        } $LETTER;
        struct {
        } $DIGIT;
        struct {
        } $PLUS;
        struct {
        } $STAR;
        struct {
        } $QUESTION;
        struct {
        } $LPAREN;
        struct {
        } $RPAREN;
        struct {
        } $LBRACE;
        struct {
        } $RBRACE;
        struct {
        } $LBRACKET;
        struct {
        } $RBRACKET;
        struct {
        } $COMMA;
        struct {
        } $SLASH;
        struct {
        } $CARET;
        struct {
        } $DOLLAR;
        struct {
        } $BACKTICK;
        struct {
        } $SINGLE_QUOTE;
        struct {
        } $AMPERSAND;
    } $data;
} org$frostlang$regex$RegexToken$Kind;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } org$frostlang$regex$RegexToken$Kind$class_type;
extern org$frostlang$regex$RegexToken$Kind$class_type org$frostlang$regex$RegexToken$Kind$class;
typedef struct org$frostlang$regex$RegexToken$Kind$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    org$frostlang$regex$RegexToken$Kind value;
} org$frostlang$regex$RegexToken$Kind$wrapper;
typedef struct org$frostlang$regex$RegexToken$Kind$nullable {
    org$frostlang$regex$RegexToken$Kind value;
    bool nonnull;
} org$frostlang$regex$RegexToken$Kind$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$regex$RegexToken$Kind$wrapperclass_type;
extern org$frostlang$regex$RegexToken$Kind$wrapperclass_type org$frostlang$regex$RegexToken$Kind$wrapperclass;

