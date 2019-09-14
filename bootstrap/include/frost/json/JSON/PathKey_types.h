#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;
#include "frost/core/String/Index_types.h"

typedef struct frost$json$JSON$PathKey {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$Int $rawValue;
    union {
        struct {
            frost$core$String* field0;
            frost$core$String$Index field1;
        } $FIELD;
        struct {
            frost$core$Int field0;
            frost$core$String$Index field1;
        } $INDEX;
    } $data;
} frost$json$JSON$PathKey;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } frost$json$JSON$PathKey$class_type;
extern frost$json$JSON$PathKey$class_type frost$json$JSON$PathKey$class;

