#pragma once
#include "frost_c.h"
#include "Token.GT_types.h"
typedef struct frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT;
typedef struct frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT;
#include "frost/core/Bit_types.h"
#include "org/frostlang/frostc/parser/Token_types.h"

void frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT$init$frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT(frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT* self, frost$collections$SpecializedArray$LTorg$frostlang$frostc$parser$Token$GT* p_array);
frost$core$Bit frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT$get_done$R$frost$core$Bit(frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT* self);
org$frostlang$frostc$parser$Token frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT$next$R$org$frostlang$frostc$parser$Token(frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT* self);
void frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT$cleanup(frost$collections$SpecializedArrayIterator$LTorg$frostlang$frostc$parser$Token$GT* self);

