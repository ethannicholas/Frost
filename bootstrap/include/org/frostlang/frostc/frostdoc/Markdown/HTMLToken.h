#pragma once
#include "frost_c.h"
#include "HTMLToken_types.h"
typedef struct org$frostlang$frostc$frostdoc$Markdown$HTMLToken org$frostlang$frostc$frostdoc$Markdown$HTMLToken;
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;
#include "frost/core/Bit_types.h"

void org$frostlang$frostc$frostdoc$Markdown$HTMLToken$cleanup(void* rawSelf);
void org$frostlang$frostc$frostdoc$Markdown$HTMLToken$init$frost$core$Int$frost$core$String(void* rawSelf, frost$core$Int p_rv, frost$core$String* p_f0);
frost$core$Bit org$frostlang$frostc$frostdoc$Markdown$HTMLToken$$EQ$org$frostlang$frostc$frostdoc$Markdown$HTMLToken$R$frost$core$Bit(void* rawSelf, org$frostlang$frostc$frostdoc$Markdown$HTMLToken* p_other);
frost$core$Int org$frostlang$frostc$frostdoc$Markdown$HTMLToken$get_hash$R$frost$core$Int(void* rawSelf);
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$HTMLToken$get_asString$R$frost$core$String(void* rawSelf);

