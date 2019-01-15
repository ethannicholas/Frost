#pragma once
#include "frost_c.h"
#include "Kind_types.h"
typedef struct frost$core$String frost$core$String;
#include "org/frostlanguage/regex/RegexToken/Kind_types.h"
#include "frost/core/Int64_types.h"
#include "frost/core/Bit_types.h"

frost$core$String* org$frostlanguage$regex$RegexToken$Kind$convert$R$frost$core$String(org$frostlanguage$regex$RegexToken$Kind self);
void org$frostlanguage$regex$RegexToken$Kind$cleanup(org$frostlanguage$regex$RegexToken$Kind self);
org$frostlanguage$regex$RegexToken$Kind org$frostlanguage$regex$RegexToken$Kind$init$frost$core$Int64(frost$core$Int64 p_rv);
frost$core$Bit org$frostlanguage$regex$RegexToken$Kind$$EQ$org$frostlanguage$regex$RegexToken$Kind$R$frost$core$Bit(org$frostlanguage$regex$RegexToken$Kind self, org$frostlanguage$regex$RegexToken$Kind p_other);

