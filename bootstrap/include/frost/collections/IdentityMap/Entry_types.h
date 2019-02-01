#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$core$Object frost$core$Object;
typedef struct frost$collections$IdentityMap$Entry frost$collections$IdentityMap$Entry;
typedef struct frost$core$String frost$core$String;

typedef struct frost$collections$IdentityMap$Entry {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$Object* key;
    frost$core$Object* value;
    frost$collections$IdentityMap$Entry* next;
} frost$collections$IdentityMap$Entry;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[2]; } frost$collections$IdentityMap$Entry$class_type;
extern frost$collections$IdentityMap$Entry$class_type frost$collections$IdentityMap$Entry$class;

