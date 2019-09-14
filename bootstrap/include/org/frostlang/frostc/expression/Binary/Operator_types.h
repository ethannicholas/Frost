#pragma once
#include "frost_c.h"
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Class frost$core$Class;
#include "org/frostlang/frostc/expression/Binary/Operator_types.h"

typedef struct org$frostlang$frostc$expression$Binary$Operator {
    frost$core$Int $rawValue;
    union {
        struct {
        } $ADD;
        struct {
        } $SUB;
        struct {
        } $MUL;
        struct {
        } $DIV;
        struct {
        } $INTDIV;
        struct {
        } $REM;
        struct {
        } $EQ;
        struct {
        } $NEQ;
        struct {
        } $GT;
        struct {
        } $LT;
        struct {
        } $GTEQ;
        struct {
        } $LTEQ;
        struct {
        } $OR;
        struct {
        } $BITWISEOR;
        struct {
        } $AND;
        struct {
        } $BITWISEAND;
        struct {
        } $XOR;
        struct {
        } $BITWISEXOR;
        struct {
        } $SHIFTLEFT;
        struct {
        } $SHIFTRIGHT;
        struct {
        } $INDEX;
        struct {
        } $IDENTITY;
        struct {
        } $NIDENTITY;
        struct {
        } $CAST;
        struct {
        } $IMPLICIT_CAST;
        struct {
        } $ASSIGNMENT;
        struct {
        } $ADDEQ;
        struct {
        } $SUBEQ;
        struct {
        } $MULEQ;
        struct {
        } $DIVEQ;
        struct {
        } $INTDIVEQ;
        struct {
        } $REMEQ;
        struct {
        } $OREQ;
        struct {
        } $BITWISEOREQ;
        struct {
        } $ANDEQ;
        struct {
        } $BITWISEANDEQ;
        struct {
        } $XOREQ;
        struct {
        } $BITWISEXOREQ;
        struct {
        } $SHIFTLEFTEQ;
        struct {
        } $SHIFTRIGHTEQ;
    } $data;
} org$frostlang$frostc$expression$Binary$Operator;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[7]; } org$frostlang$frostc$expression$Binary$Operator$class_type;
extern org$frostlang$frostc$expression$Binary$Operator$class_type org$frostlang$frostc$expression$Binary$Operator$class;
typedef struct org$frostlang$frostc$expression$Binary$Operator$wrapper {
    frost$core$Class* cl;
    int32_t refCount;
    uint8_t flags;
    org$frostlang$frostc$expression$Binary$Operator value;
} org$frostlang$frostc$expression$Binary$Operator$wrapper;
typedef struct org$frostlang$frostc$expression$Binary$Operator$nullable {
    org$frostlang$frostc$expression$Binary$Operator value;
    bool nonnull;
} org$frostlang$frostc$expression$Binary$Operator$nullable;
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$expression$Binary$Operator$wrapperclass_type;
extern org$frostlang$frostc$expression$Binary$Operator$wrapperclass_type org$frostlang$frostc$expression$Binary$Operator$wrapperclass;

