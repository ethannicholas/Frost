#pragma once
#include "frost_c.h"
#include "RegexMatchIterator_types.h"
typedef struct frost$core$String$RegexMatchIterator frost$core$String$RegexMatchIterator;
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$RegularExpression frost$core$RegularExpression;
#include "frost/core/Bit_types.h"
typedef struct frost$core$String$Match frost$core$String$Match;

void frost$core$String$RegexMatchIterator$init$frost$core$String$frost$core$RegularExpression$frost$core$Bit(frost$core$String$RegexMatchIterator* self, frost$core$String* p_haystack, frost$core$RegularExpression* p_needle, frost$core$Bit p_allowOveraps);
frost$core$Bit frost$core$String$RegexMatchIterator$get_done$R$frost$core$Bit(frost$core$String$RegexMatchIterator* self);
frost$core$String$Match* frost$core$String$RegexMatchIterator$next$R$frost$core$String$Match(frost$core$String$RegexMatchIterator* self);
void frost$core$String$RegexMatchIterator$cleanup(frost$core$String$RegexMatchIterator* self);

