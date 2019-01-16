#pragma once
#include "frost_c.h"
#include "EnclosingContext_types.h"
typedef struct org$frostlang$frostc$CCodeGenerator$EnclosingContext org$frostlang$frostc$CCodeGenerator$EnclosingContext;
#include "frost/core/Int64_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$collections$Map frost$collections$Map;

void org$frostlang$frostc$CCodeGenerator$EnclosingContext$cleanup(org$frostlang$frostc$CCodeGenerator$EnclosingContext* self);
void org$frostlang$frostc$CCodeGenerator$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$frost$core$String$frost$core$String(org$frostlang$frostc$CCodeGenerator$EnclosingContext* self, frost$core$Int64 p_rv, frost$core$String* p_f0, frost$core$String* p_f1, frost$core$String* p_f2);
void org$frostlang$frostc$CCodeGenerator$EnclosingContext$init$frost$core$Int64$frost$core$String$frost$collections$Map$LTfrost$core$String$Corg$frostlang$frostc$Pair$LTfrost$core$Int64$Cfrost$core$String$GT$GT$frost$core$String(org$frostlang$frostc$CCodeGenerator$EnclosingContext* self, frost$core$Int64 p_rv, frost$core$String* p_f0, frost$collections$Map* p_f1, frost$core$String* p_f2);

