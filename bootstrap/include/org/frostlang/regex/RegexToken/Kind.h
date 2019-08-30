#pragma once
#include "frost_c.h"
#include "Kind_types.h"
#include "org/frostlang/regex/RegexToken/Kind_types.h"
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlang$regex$RegexToken$Kind$cleanup(org$frostlang$regex$RegexToken$Kind self);
org$frostlang$regex$RegexToken$Kind org$frostlang$regex$RegexToken$Kind$init$frost$core$Int(frost$core$Int p_rv);
frost$core$Bit org$frostlang$regex$RegexToken$Kind$$EQ$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit(org$frostlang$regex$RegexToken$Kind self, org$frostlang$regex$RegexToken$Kind p_other);
frost$core$Int org$frostlang$regex$RegexToken$Kind$get_hash$R$frost$core$Int(org$frostlang$regex$RegexToken$Kind self);
frost$core$String* org$frostlang$regex$RegexToken$Kind$get_asString$R$frost$core$String(org$frostlang$regex$RegexToken$Kind self);

