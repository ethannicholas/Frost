#pragma once
#include "frost_c.h"
#include "Resolution_types.h"
typedef struct frost$core$String frost$core$String;
#include "org/frostlanguage/frostc/Compiler/Resolution_types.h"
#include "frost/core/Int64_types.h"
#include "frost/core/Bit_types.h"

frost$core$String* org$frostlanguage$frostc$Compiler$Resolution$convert$R$frost$core$String(org$frostlanguage$frostc$Compiler$Resolution self);
void org$frostlanguage$frostc$Compiler$Resolution$cleanup(org$frostlanguage$frostc$Compiler$Resolution self);
org$frostlanguage$frostc$Compiler$Resolution org$frostlanguage$frostc$Compiler$Resolution$init$frost$core$Int64(frost$core$Int64 p_rv);
frost$core$Bit org$frostlanguage$frostc$Compiler$Resolution$$EQ$org$frostlanguage$frostc$Compiler$Resolution$R$frost$core$Bit(org$frostlanguage$frostc$Compiler$Resolution self, org$frostlanguage$frostc$Compiler$Resolution p_other);

