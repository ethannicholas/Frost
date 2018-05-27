#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT;
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* array;
    panda$core$Int64 index;
} panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$class_type;
extern panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$class_type panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT;
typedef struct panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT;
#include "panda/core/Bit.h"
#include "org/pandalanguage/regex/RegexToken.h"

void panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$init$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT(panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* p_array);
panda$core$Bit panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$get_done$R$panda$core$Bit(panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT* self);
org$pandalanguage$regex$RegexToken panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$next$R$org$pandalanguage$regex$RegexToken(panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT* self);
void panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$cleanup(panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT* self);

#endif
