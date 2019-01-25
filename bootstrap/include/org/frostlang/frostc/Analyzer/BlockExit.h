#pragma once
#include "frost_c.h"
#include "BlockExit_types.h"
#include "org/frostlang/frostc/Analyzer/BlockExit_types.h"
#include "org/frostlang/frostc/IR/Block/ID_types.h"
#include "frost/core/Int64_types.h"
#include "frost/core/Bit_types.h"

org$frostlang$frostc$Analyzer$BlockExit org$frostlang$frostc$Analyzer$BlockExit$init$org$frostlang$frostc$IR$Block$ID$frost$core$Int64(org$frostlang$frostc$IR$Block$ID p_id, frost$core$Int64 p_exit);
frost$core$Bit org$frostlang$frostc$Analyzer$BlockExit$$EQ$org$frostlang$frostc$Analyzer$BlockExit$R$frost$core$Bit(org$frostlang$frostc$Analyzer$BlockExit self, org$frostlang$frostc$Analyzer$BlockExit p_other);
frost$core$Int64 org$frostlang$frostc$Analyzer$BlockExit$get_hash$R$frost$core$Int64(org$frostlang$frostc$Analyzer$BlockExit self);
void org$frostlang$frostc$Analyzer$BlockExit$cleanup(org$frostlang$frostc$Analyzer$BlockExit self);

