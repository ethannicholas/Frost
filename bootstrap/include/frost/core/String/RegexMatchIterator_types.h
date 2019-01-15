#pragma once
#include "frost_c.h"
typedef struct frost$core$Class frost$core$Class;
#include "frost/core/Int32_types.h"
typedef struct frost$core$Matcher frost$core$Matcher;
typedef struct frost$core$String frost$core$String;
#include "frost/core/Bit_types.h"

typedef struct frost$core$String$RegexMatchIterator {
    frost$core$Class* $class;
    frost$core$Int32 refCount;
    frost$core$Matcher* matcher;
    frost$core$String* haystack;
    frost$core$Bit allowOverlaps;
    frost$core$Bit found;
} frost$core$String$RegexMatchIterator;
#include "frost/core/Class.h"
typedef struct { frost$core$Class* cl; int32_t refCount; frost$core$String* name; frost$core$Class* super; ITable* itable; void* vtable[4]; } frost$core$String$RegexMatchIterator$class_type;
extern frost$core$String$RegexMatchIterator$class_type frost$core$String$RegexMatchIterator$class;

