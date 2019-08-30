#pragma once
#include "frost_c.h"
#include "Message_types.h"
typedef struct org$frostlang$frostc$Compiler$Message org$frostlang$frostc$Compiler$Message;
#include "frost/core/Int_types.h"
typedef struct frost$core$String frost$core$String;
#include "frost/core/Bit_types.h"

void org$frostlang$frostc$Compiler$Message$cleanup(org$frostlang$frostc$Compiler$Message* self);
void org$frostlang$frostc$Compiler$Message$init$frost$core$Int$frost$core$String$frost$core$Int$frost$core$Int$frost$core$String(org$frostlang$frostc$Compiler$Message* self, frost$core$Int p_rv, frost$core$String* p_f0, frost$core$Int p_f1, frost$core$Int p_f2, frost$core$String* p_f3);
frost$core$Bit org$frostlang$frostc$Compiler$Message$$EQ$org$frostlang$frostc$Compiler$Message$R$frost$core$Bit(org$frostlang$frostc$Compiler$Message* self, org$frostlang$frostc$Compiler$Message* p_other);
frost$core$Int org$frostlang$frostc$Compiler$Message$get_hash$R$frost$core$Int(org$frostlang$frostc$Compiler$Message* self);
frost$core$String* org$frostlang$frostc$Compiler$Message$get_asString$R$frost$core$String(org$frostlang$frostc$Compiler$Message* self);

