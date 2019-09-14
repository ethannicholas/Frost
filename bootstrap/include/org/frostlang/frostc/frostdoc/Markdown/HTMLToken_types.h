#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct org$frostlang$frostc$frostdoc$Markdown$HTMLToken {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$Int $rawValue;
    union {
        struct {
            frost$core$String* field0;
        } $TAG;
        struct {
            frost$core$String* field0;
        } $TEXT;
    } $data;
} org$frostlang$frostc$frostdoc$Markdown$HTMLToken;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class_type;
extern org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class_type org$frostlang$frostc$frostdoc$Markdown$HTMLToken$class;

