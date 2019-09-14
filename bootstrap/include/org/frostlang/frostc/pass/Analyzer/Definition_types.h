#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/Int_types.h"
#include "org/frostlang/frostc/IR/Statement/ID_types.h"
typedef struct org$frostlang$frostc$pass$Analyzer$Definition org$frostlang$frostc$pass$Analyzer$Definition;
typedef struct org$frostlang$frostc$FieldDecl org$frostlang$frostc$FieldDecl;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$pass$Analyzer$Definition {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$Int $rawValue;
    union {
        struct {
            org$frostlang$frostc$IR$Statement$ID field0;
        } $CONSTRUCTOR;
        struct {
            org$frostlang$frostc$pass$Analyzer$Definition* field0;
            org$frostlang$frostc$FieldDecl* field1;
        } $FIELD;
        struct {
            frost$core$Int field0;
        } $LOCAL;
        struct {
            frost$core$Int field0;
        } $PARAMETER;
        struct {
        } $UNSPECIFIED;
    } $data;
} org$frostlang$frostc$pass$Analyzer$Definition;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[3]; } org$frostlang$frostc$pass$Analyzer$Definition$class_type;
extern org$frostlang$frostc$pass$Analyzer$Definition$class_type org$frostlang$frostc$pass$Analyzer$Definition$class;

