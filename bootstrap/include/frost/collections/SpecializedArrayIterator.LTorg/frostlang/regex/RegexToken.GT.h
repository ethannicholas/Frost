#pragma once
#include "frost_c.h"
#include "RegexToken.GT_types.h"
typedef struct frost$collections$SpecializedArrayIterator$LTorg$frostlang$regex$RegexToken$GT frost$collections$SpecializedArrayIterator$LTorg$frostlang$regex$RegexToken$GT;
typedef struct frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT;
#include "frost/core/Bit_types.h"
#include "org/frostlang/regex/RegexToken_types.h"

void frost$collections$SpecializedArrayIterator$LTorg$frostlang$regex$RegexToken$GT$init$frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT(frost$collections$SpecializedArrayIterator$LTorg$frostlang$regex$RegexToken$GT* self, frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* p_array);
frost$core$Bit frost$collections$SpecializedArrayIterator$LTorg$frostlang$regex$RegexToken$GT$get_done$R$frost$core$Bit(frost$collections$SpecializedArrayIterator$LTorg$frostlang$regex$RegexToken$GT* self);
org$frostlang$regex$RegexToken frost$collections$SpecializedArrayIterator$LTorg$frostlang$regex$RegexToken$GT$next$R$org$frostlang$regex$RegexToken(frost$collections$SpecializedArrayIterator$LTorg$frostlang$regex$RegexToken$GT* self);
void frost$collections$SpecializedArrayIterator$LTorg$frostlang$regex$RegexToken$GT$cleanup(frost$collections$SpecializedArrayIterator$LTorg$frostlang$regex$RegexToken$GT* self);

