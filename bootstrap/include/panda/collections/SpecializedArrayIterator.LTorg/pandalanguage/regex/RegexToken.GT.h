#pragma once
#include "panda_c.h"
#include "RegexToken.GT_types.h"
typedef struct panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT;
typedef struct panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT;
#include "panda/core/Bit_types.h"
#include "org/pandalanguage/regex/RegexToken_types.h"

void panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$init$panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT(panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT* self, panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* p_array);
panda$core$Bit panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$get_done$R$panda$core$Bit(panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT* self);
org$pandalanguage$regex$RegexToken panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$next$R$org$pandalanguage$regex$RegexToken(panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT* self);
void panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT$cleanup(panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$regex$RegexToken$GT* self);

