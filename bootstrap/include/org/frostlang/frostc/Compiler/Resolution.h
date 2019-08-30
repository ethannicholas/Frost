#pragma once
#include "frost_c.h"
#include "Resolution_types.h"
#include "org/frostlang/frostc/Compiler/Resolution_types.h"
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$Compiler$Resolution$cleanup(org$frostlang$frostc$Compiler$Resolution self);
org$frostlang$frostc$Compiler$Resolution org$frostlang$frostc$Compiler$Resolution$init$frost$core$Int(frost$core$Int p_rv);
frost$core$Bit org$frostlang$frostc$Compiler$Resolution$$EQ$org$frostlang$frostc$Compiler$Resolution$R$frost$core$Bit(org$frostlang$frostc$Compiler$Resolution self, org$frostlang$frostc$Compiler$Resolution p_other);
frost$core$Int org$frostlang$frostc$Compiler$Resolution$get_hash$R$frost$core$Int(org$frostlang$frostc$Compiler$Resolution self);
frost$core$String* org$frostlang$frostc$Compiler$Resolution$get_asString$R$frost$core$String(org$frostlang$frostc$Compiler$Resolution self);

