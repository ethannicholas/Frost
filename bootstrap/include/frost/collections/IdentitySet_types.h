#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$collections$IdentityMap frost$collections$IdentityMap;
typedef struct frost$core$String frost$core$String;

typedef struct frost$collections$IdentitySet {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$collections$IdentityMap* contents;
} frost$collections$IdentitySet;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[9]; } frost$collections$IdentitySet$class_type;
extern frost$collections$IdentitySet$class_type frost$collections$IdentitySet$class;

