#pragma once
#include "frost_c.h"
#include "OpClass_types.h"
#include "org/frostlang/frostc/CBackend/OpClass_types.h"
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$CBackend$OpClass$cleanup(org$frostlang$frostc$CBackend$OpClass self);
org$frostlang$frostc$CBackend$OpClass org$frostlang$frostc$CBackend$OpClass$init$frost$core$Int(frost$core$Int p_rv);
frost$core$Bit org$frostlang$frostc$CBackend$OpClass$$EQ$org$frostlang$frostc$CBackend$OpClass$R$frost$core$Bit(org$frostlang$frostc$CBackend$OpClass self, org$frostlang$frostc$CBackend$OpClass p_other);
frost$core$Int org$frostlang$frostc$CBackend$OpClass$get_hash$R$frost$core$Int(org$frostlang$frostc$CBackend$OpClass self);
frost$core$String* org$frostlang$frostc$CBackend$OpClass$get_asString$R$frost$core$String(org$frostlang$frostc$CBackend$OpClass self);

