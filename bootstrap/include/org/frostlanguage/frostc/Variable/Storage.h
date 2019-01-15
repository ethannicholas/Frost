#pragma once
#include "frost_c.h"
#include "Storage_types.h"
typedef struct org$frostlanguage$frostc$Variable$Storage org$frostlanguage$frostc$Variable$Storage;
#include "frost/core/Int64_types.h"
#include "frost/core/Bit_types.h"

void org$frostlanguage$frostc$Variable$Storage$cleanup(org$frostlanguage$frostc$Variable$Storage* self);
void org$frostlanguage$frostc$Variable$Storage$init$frost$core$Int64$frost$core$Int64(org$frostlanguage$frostc$Variable$Storage* self, frost$core$Int64 p_rv, frost$core$Int64 p_f0);
void org$frostlanguage$frostc$Variable$Storage$init$frost$core$Int64(org$frostlanguage$frostc$Variable$Storage* self, frost$core$Int64 p_rv);
frost$core$Bit org$frostlanguage$frostc$Variable$Storage$$EQ$org$frostlanguage$frostc$Variable$Storage$R$frost$core$Bit(org$frostlanguage$frostc$Variable$Storage* self, org$frostlanguage$frostc$Variable$Storage* p_other);

