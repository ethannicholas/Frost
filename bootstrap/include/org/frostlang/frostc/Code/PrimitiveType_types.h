#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/Int_types.h"
typedef struct org$frostlang$frostc$Code$PrimitiveType org$frostlang$frostc$Code$PrimitiveType;
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$Code$PrimitiveType {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$Int $rawValue;
    union {
        struct {
        } $INT;
        struct {
        } $INT8;
        struct {
        } $INT16;
        struct {
        } $INT32;
        struct {
        } $INT64;
        struct {
        } $FLOAT32;
        struct {
        } $FLOAT64;
        struct {
        } $BIT;
        struct {
            frost$core$Int field0;
            org$frostlang$frostc$Code$PrimitiveType* field1;
        } $ARRAY;
        struct {
            org$frostlang$frostc$FixedArray* field0;
        } $STRUCT;
    } $data;
} org$frostlang$frostc$Code$PrimitiveType;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[8]; } org$frostlang$frostc$Code$PrimitiveType$class_type;
extern org$frostlang$frostc$Code$PrimitiveType$class_type org$frostlang$frostc$Code$PrimitiveType$class;

