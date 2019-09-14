#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/Int_types.h"
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$Compiler$TypeContext {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$Int $rawValue;
    union {
        struct {
        } $UNSPECIFIED;
        struct {
        } $NON_VOID;
        struct {
        } $IMMUTABLE;
        struct {
            org$frostlang$frostc$Type* field0;
            frost$core$Bit field1;
        } $TYPE;
    } $data;
} org$frostlang$frostc$Compiler$TypeContext;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[5]; } org$frostlang$frostc$Compiler$TypeContext$class_type;
extern org$frostlang$frostc$Compiler$TypeContext$class_type org$frostlang$frostc$Compiler$TypeContext$class;

