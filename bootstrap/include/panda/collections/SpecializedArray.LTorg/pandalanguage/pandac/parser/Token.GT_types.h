#pragma once
#include "panda_c.h"
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32_types.h"
#include "panda/core/Int64_types.h"
#include "org/pandalanguage/pandac/parser/Token_types.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 _count;
    panda$core$Int64 capacity;
    org$pandalanguage$pandac$parser$Token$nullable* data;
} panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT;
#include "panda/core/Class.h"
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[15]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class_type;
extern panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class_type panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class;

