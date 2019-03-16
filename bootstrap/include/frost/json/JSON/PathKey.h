#pragma once
#include "frost_c.h"
#include "PathKey_types.h"
typedef struct frost$json$JSON$PathKey frost$json$JSON$PathKey;
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;
#include "frost/core/String/Index_types.h"
#include "frost/core/Bit_types.h"

void frost$json$JSON$PathKey$cleanup(frost$json$JSON$PathKey* self);
void frost$json$JSON$PathKey$init$frost$core$Int$frost$core$String$frost$core$String$Index(frost$json$JSON$PathKey* self, frost$core$Int p_rv, frost$core$String* p_f0, frost$core$String$Index p_f1);
void frost$json$JSON$PathKey$init$frost$core$Int$frost$core$Int$frost$core$String$Index(frost$json$JSON$PathKey* self, frost$core$Int p_rv, frost$core$Int p_f0, frost$core$String$Index p_f1);
frost$core$Bit frost$json$JSON$PathKey$$EQ$frost$json$JSON$PathKey$R$frost$core$Bit(frost$json$JSON$PathKey* self, frost$json$JSON$PathKey* p_other);

