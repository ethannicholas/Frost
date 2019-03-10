#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$collections$ListView frost$collections$ListView;
typedef struct frost$collections$List frost$collections$List;
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct frost$collections$ListView$CombinationIterator {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$UInt8 $flags;
    frost$collections$ListView* list;
    frost$collections$List* choices;
    frost$core$Int r;
    frost$core$Int index;
} frost$collections$ListView$CombinationIterator;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; uint8_t flags;frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } frost$collections$ListView$CombinationIterator$class_type;
extern frost$collections$ListView$CombinationIterator$class_type frost$collections$ListView$CombinationIterator$class;

