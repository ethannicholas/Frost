#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
typedef struct panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT;
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* array;
    panda$core$Int64 index;
} panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$class_type;
extern panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$class_type panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$class;

