#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
#include "frost/core/UInt64_types.h"
typedef struct org$frostlang$frostc$Code$PrimitiveType org$frostlang$frostc$Code$PrimitiveType;
typedef struct org$frostlang$frostc$Code$Signature org$frostlang$frostc$Code$Signature;
#include "frost/core/Real64_types.h"
#include "org/frostlang/frostc/Code/Statement/ID_types.h"
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$Code$Value {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$Int $rawValue;
    union {
        struct {
            frost$core$Bit field0;
        } $BIT;
        struct {
            frost$core$Int field0;
        } $GLOBAL_POINTER;
        struct {
            frost$core$UInt64 field0;
            org$frostlang$frostc$Code$PrimitiveType* field1;
        } $INT;
        struct {
            org$frostlang$frostc$Code$Signature* field0;
        } $METHOD_POINTER;
        struct {
            frost$core$Int field0;
            org$frostlang$frostc$Code$PrimitiveType* field1;
        } $PARAMETER;
        struct {
            frost$core$Real64 field0;
            org$frostlang$frostc$Code$PrimitiveType* field1;
        } $REAL;
        struct {
            org$frostlang$frostc$Code$Statement$ID field0;
            org$frostlang$frostc$Code$PrimitiveType* field1;
        } $STATEMENT;
        struct {
            org$frostlang$frostc$Code$PrimitiveType* field0;
            org$frostlang$frostc$FixedArray* field1;
        } $ARRAY;
        struct {
            org$frostlang$frostc$FixedArray* field0;
        } $STRUCT;
        struct {
            org$frostlang$frostc$Code$PrimitiveType* field0;
        } $UNDEFINED;
    } $data;
} org$frostlang$frostc$Code$Value;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[3]; } org$frostlang$frostc$Code$Value$class_type;
extern org$frostlang$frostc$Code$Value$class_type org$frostlang$frostc$Code$Value$class;

