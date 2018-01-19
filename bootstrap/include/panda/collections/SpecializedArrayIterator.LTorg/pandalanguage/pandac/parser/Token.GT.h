#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
typedef struct panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT;
#include "panda/core/Int64.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* array;
    panda$core$Int64 index;
} panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$String* name; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$class_type;
extern panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$class_type panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT;
typedef struct panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT;
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/parser/Token.h"

void panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* p_array);
panda$core$Bit panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$get_done$R$panda$core$Bit(panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* self);
org$pandalanguage$pandac$parser$Token panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$next$R$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* self);
void panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$cleanup(panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* self);

#endif
