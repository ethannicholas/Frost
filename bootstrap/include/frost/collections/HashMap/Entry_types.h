#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$collections$HashKey frost$collections$HashKey;
typedef struct frost$core$Object frost$core$Object;
typedef struct frost$collections$HashMap$Entry frost$collections$HashMap$Entry;
typedef struct frost$core$String frost$core$String;

typedef struct frost$collections$HashMap$Entry {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$collections$HashKey* key;
    frost$core$Object* value;
    frost$collections$HashMap$Entry* next;
} frost$collections$HashMap$Entry;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$collections$HashMap$Entry$class_type;
extern frost$collections$HashMap$Entry$class_type frost$collections$HashMap$Entry$class;

