#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
#include "frost/core/Int_types.h"
#include "frost/unsafe/NewPointer_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct frost$collections$IdentityMap {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$core$Int _count;
    frost$core$Int bucketCount;
    frost$unsafe$NewPointer contents;
    frost$core$Int threshold;
    frost$core$Int changeCount;
} frost$collections$IdentityMap;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[12]; } frost$collections$IdentityMap$class_type;
extern frost$collections$IdentityMap$class_type frost$collections$IdentityMap$class;

