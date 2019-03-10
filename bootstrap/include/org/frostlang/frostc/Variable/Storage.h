#pragma once
#include "frost_c.h"
#include "Storage_types.h"
typedef struct org$frostlang$frostc$Variable$Storage org$frostlang$frostc$Variable$Storage;
#include "frost/core/Int64_types.h"
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"

void org$frostlang$frostc$Variable$Storage$cleanup(org$frostlang$frostc$Variable$Storage* self);
void org$frostlang$frostc$Variable$Storage$init$frost$core$Int64$frost$core$Int(org$frostlang$frostc$Variable$Storage* self, frost$core$Int64 p_rv, frost$core$Int p_f0);
void org$frostlang$frostc$Variable$Storage$init$frost$core$Int64(org$frostlang$frostc$Variable$Storage* self, frost$core$Int64 p_rv);
frost$core$Bit org$frostlang$frostc$Variable$Storage$$EQ$org$frostlang$frostc$Variable$Storage$R$frost$core$Bit(org$frostlang$frostc$Variable$Storage* self, org$frostlang$frostc$Variable$Storage* p_other);

