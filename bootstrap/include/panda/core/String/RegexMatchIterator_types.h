#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$core$Matcher panda$core$Matcher;
typedef struct panda$core$String panda$core$String;
#include "panda/core/Bit_types.h"

typedef struct panda$core$String$RegexMatchIterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Matcher* matcher;
    panda$core$String* haystack;
    panda$core$Bit allowOverlaps;
    panda$core$Bit found;
} panda$core$String$RegexMatchIterator;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$core$String$RegexMatchIterator$class_type;
extern panda$core$String$RegexMatchIterator$class_type panda$core$String$RegexMatchIterator$class;

