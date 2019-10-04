#pragma once
#include "frost_c.h"
#include "EnclosingContext_types.h"
typedef struct org$frostlang$frostc$CBackend$EnclosingContext org$frostlang$frostc$CBackend$EnclosingContext;
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$collections$Map frost$collections$Map;

void org$frostlang$frostc$CBackend$EnclosingContext$cleanup(void* rawSelf);
void org$frostlang$frostc$CBackend$EnclosingContext$init$frost$core$Int$frost$core$String$Q$frost$core$String$frost$core$String(void* rawSelf, frost$core$Int p_rv, frost$core$String* p_f0, frost$core$String* p_f1, frost$core$String* p_f2);
void org$frostlang$frostc$CBackend$EnclosingContext$init$frost$core$Int$frost$core$String$frost$collections$Map$LTfrost$core$String$Corg$frostlang$frostc$Pair$LTfrost$core$Int$Cfrost$core$String$GT$GT$frost$core$String(void* rawSelf, frost$core$Int p_rv, frost$core$String* p_f0, frost$collections$Map* p_f1, frost$core$String* p_f2);
frost$core$String* org$frostlang$frostc$CBackend$EnclosingContext$get_asString$R$frost$core$String(void* rawSelf);

