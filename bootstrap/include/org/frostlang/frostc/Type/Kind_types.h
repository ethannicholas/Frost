#pragma once
#include "frost_c.h"
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlang/frostc/Type/Kind_types.h"

typedef struct org$frostlang$frostc$Type$Kind {
    frost$core$Int $rawValue;
    union {
        struct {
        } $CLASS;
        struct {
        } $NULLABLE;
        struct {
        } $BUILTIN_INT;
        struct {
        } $BUILTIN_UINT;
        struct {
        } $VOID;
        struct {
        } $INT_LITERAL;
        struct {
        } $INVALID;
        struct {
        } $BIT_LITERAL;
        struct {
        } $BUILTIN_BIT;
        struct {
        } $BUILTIN_FLOAT;
        struct {
        } $TUPLE;
        struct {
        } $GENERIC;
        struct {
        } $GENERIC_CLASS_PARAMETER;
        struct {
        } $GENERIC_METHOD_PARAMETER;
        struct {
        } $NULL;
        struct {
        } $FUNCTION;
        struct {
        } $METHOD;
        struct {
        } $IMMUTABLE_FUNCTION;
        struct {
        } $IMMUTABLE_METHOD;
        struct {
        } $REAL_LITERAL;
    } $data;
} org$frostlang$frostc$Type$Kind;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } org$frostlang$frostc$Type$Kind$class_type;
extern org$frostlang$frostc$Type$Kind$class_type org$frostlang$frostc$Type$Kind$class;
typedef struct org$frostlang$frostc$Type$Kind$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    org$frostlang$frostc$Type$Kind value;
} org$frostlang$frostc$Type$Kind$wrapper;
typedef struct org$frostlang$frostc$Type$Kind$nullable {
    org$frostlang$frostc$Type$Kind value;
    bool nonnull;
} org$frostlang$frostc$Type$Kind$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$Type$Kind$wrapperclass_type;
extern org$frostlang$frostc$Type$Kind$wrapperclass_type org$frostlang$frostc$Type$Kind$wrapperclass;

