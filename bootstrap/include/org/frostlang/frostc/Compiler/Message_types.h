#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$Compiler$Message {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$Int $rawValue;
    union {
        struct {
            frost$core$String* field0;
            frost$core$Int field1;
            frost$core$Int field2;
            frost$core$String* field3;
        } $ERROR;
        struct {
            frost$core$String* field0;
            frost$core$Int field1;
            frost$core$Int field2;
            frost$core$String* field3;
        } $WARNING;
    } $data;
} org$frostlang$frostc$Compiler$Message;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } org$frostlang$frostc$Compiler$Message$class_type;
extern org$frostlang$frostc$Compiler$Message$class_type org$frostlang$frostc$Compiler$Message$class;

