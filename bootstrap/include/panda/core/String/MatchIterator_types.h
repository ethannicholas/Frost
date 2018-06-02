#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$core$String panda$core$String;
#include "panda/core/String/Index_types.h"
#include "panda/core/Bit_types.h"

typedef struct panda$core$String$MatchIterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$String* haystack;
    panda$core$String* needle;
    panda$core$String$Index$nullable nextMatch;
    panda$core$Bit allowOverlaps;
} panda$core$String$MatchIterator;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$core$String$MatchIterator$class_type;
extern panda$core$String$MatchIterator$class_type panda$core$String$MatchIterator$class;

