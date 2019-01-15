#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/Int64_types.h"
typedef struct frost$collections$IdentityMap$Entry frost$collections$IdentityMap$Entry;
typedef struct frost$core$String frost$core$String;

typedef struct frost$collections$IdentityMap {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$Int64 _count;
    frost$core$Int64 bucketCount;
    frost$collections$IdentityMap$Entry** contents;
    frost$core$Int64 threshold;
    frost$core$Int64 changeCount;
} frost$collections$IdentityMap;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[12]; } frost$collections$IdentityMap$class_type;
extern frost$collections$IdentityMap$class_type frost$collections$IdentityMap$class;

