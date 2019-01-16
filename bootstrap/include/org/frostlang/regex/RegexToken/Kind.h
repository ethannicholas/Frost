#pragma once
#include "frost_c.h"
#include "Kind_types.h"
typedef struct frost$core$String frost$core$String;
#include "org/frostlang/regex/RegexToken/Kind_types.h"
#include "frost/core/Int64_types.h"
#include "frost/core/Bit_types.h"

frost$core$String* org$frostlang$regex$RegexToken$Kind$convert$R$frost$core$String(org$frostlang$regex$RegexToken$Kind self);
void org$frostlang$regex$RegexToken$Kind$cleanup(org$frostlang$regex$RegexToken$Kind self);
org$frostlang$regex$RegexToken$Kind org$frostlang$regex$RegexToken$Kind$init$frost$core$Int64(frost$core$Int64 p_rv);
frost$core$Bit org$frostlang$regex$RegexToken$Kind$$EQ$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit(org$frostlang$regex$RegexToken$Kind self, org$frostlang$regex$RegexToken$Kind p_other);

