#pragma once
#include "frost_c.h"
#include "HTMLToken_types.h"
typedef struct org$frostlanguage$frostc$frostdoc$Markdown$HTMLToken org$frostlanguage$frostc$frostdoc$Markdown$HTMLToken;
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;
#include "frost/core/Bit_types.h"

void org$frostlanguage$frostc$frostdoc$Markdown$HTMLToken$cleanup(org$frostlanguage$frostc$frostdoc$Markdown$HTMLToken* self);
void org$frostlanguage$frostc$frostdoc$Markdown$HTMLToken$init$frost$core$Int64$frost$core$String(org$frostlanguage$frostc$frostdoc$Markdown$HTMLToken* self, frost$core$Int64 p_rv, frost$core$String* p_f0);
frost$core$Bit org$frostlanguage$frostc$frostdoc$Markdown$HTMLToken$$EQ$org$frostlanguage$frostc$frostdoc$Markdown$HTMLToken$R$frost$core$Bit(org$frostlanguage$frostc$frostdoc$Markdown$HTMLToken* self, org$frostlanguage$frostc$frostdoc$Markdown$HTMLToken* p_other);

