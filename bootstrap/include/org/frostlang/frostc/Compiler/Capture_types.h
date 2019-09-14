#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/Int_types.h"
typedef struct org$frostlang$frostc$Variable org$frostlang$frostc$Variable;
typedef struct org$frostlang$frostc$FieldDecl org$frostlang$frostc$FieldDecl;
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$Compiler$Capture {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$Int $rawValue;
    union {
        struct {
            org$frostlang$frostc$Variable* field0;
        } $VARIABLE;
        struct {
            org$frostlang$frostc$FieldDecl* field0;
        } $FIELD;
        struct {
        } $SELF;
    } $data;
} org$frostlang$frostc$Compiler$Capture;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } org$frostlang$frostc$Compiler$Capture$class_type;
extern org$frostlang$frostc$Compiler$Capture$class_type org$frostlang$frostc$Compiler$Capture$class;

