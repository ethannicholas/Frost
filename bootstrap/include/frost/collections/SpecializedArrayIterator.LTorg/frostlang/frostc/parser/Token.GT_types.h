#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT;
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;

typedef struct frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* array;
    frost$core$Int64 index;
} frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT$class_type;
extern frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT$class_type frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT$class;

