#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
#include "frost/core/UInt64_types.h"
typedef struct org$frostlang$frostc$MethodDecl org$frostlang$frostc$MethodDecl;
#include "frost/core/Real64_types.h"
#include "org/frostlang/frostc/IR/Statement/ID_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;

typedef struct org$frostlang$frostc$IR$Value {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$Int $rawValue;
    union {
        struct {
            frost$core$Bit field0;
            org$frostlang$frostc$Type* field1;
        } $BIT;
        struct {
            frost$core$UInt64 field0;
            org$frostlang$frostc$Type* field1;
        } $INT;
        struct {
            frost$core$Int field0;
            org$frostlang$frostc$Type* field1;
        } $LOCAL;
        struct {
            org$frostlang$frostc$MethodDecl* field0;
            org$frostlang$frostc$Type* field1;
        } $METHOD_POINTER;
        struct {
            org$frostlang$frostc$Type* field0;
        } $NULL;
        struct {
            frost$core$Int field0;
            org$frostlang$frostc$Type* field1;
        } $PARAMETER;
        struct {
            frost$core$Real64 field0;
            org$frostlang$frostc$Type* field1;
        } $REAL;
        struct {
            org$frostlang$frostc$IR$Statement$ID field0;
            org$frostlang$frostc$Type* field1;
        } $REF;
        struct {
            frost$core$String* field0;
            org$frostlang$frostc$Type* field1;
        } $STRING;
        struct {
            org$frostlang$frostc$IR$Value* field0;
            org$frostlang$frostc$MethodDecl* field1;
            org$frostlang$frostc$Type* field2;
        } $METHOD;
        struct {
            org$frostlang$frostc$IR$Value* field0;
            org$frostlang$frostc$FixedArray* field1;
            org$frostlang$frostc$Type* field2;
        } $METHODS;
        struct {
            org$frostlang$frostc$IR$Value* field0;
            org$frostlang$frostc$MethodDecl* field1;
            org$frostlang$frostc$FixedArray* field2;
        } $GENERIC_METHOD;
        struct {
            org$frostlang$frostc$IR$Value* field0;
            org$frostlang$frostc$FixedArray* field1;
            org$frostlang$frostc$FixedArray* field2;
        } $GENERIC_METHODS;
        struct {
            org$frostlang$frostc$Type* field0;
        } $SUPER;
        struct {
            org$frostlang$frostc$Type* field0;
            org$frostlang$frostc$Type* field1;
        } $TYPE;
    } $data;
} org$frostlang$frostc$IR$Value;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[3]; } org$frostlang$frostc$IR$Value$class_type;
extern org$frostlang$frostc$IR$Value$class_type org$frostlang$frostc$IR$Value$class;

