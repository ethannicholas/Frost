#pragma once
#include "frost_c.h"
#include "Position_types.h"
#include "org/frostlang/frostc/Position_types.h"
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;

org$frostlang$frostc$Position org$frostlang$frostc$Position$init();
org$frostlang$frostc$Position org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(frost$core$Int p_file, frost$core$Int p_line, frost$core$Int p_column);
frost$core$Bit org$frostlang$frostc$Position$$EQ$org$frostlang$frostc$Position$R$frost$core$Bit(org$frostlang$frostc$Position self, org$frostlang$frostc$Position p_other);
frost$core$Bit org$frostlang$frostc$Position$$GT$org$frostlang$frostc$Position$R$frost$core$Bit(org$frostlang$frostc$Position self, org$frostlang$frostc$Position p_other);
frost$core$Int org$frostlang$frostc$Position$get_hash$R$frost$core$Int(org$frostlang$frostc$Position self);
frost$core$String* org$frostlang$frostc$Position$get_asString$R$frost$core$String(org$frostlang$frostc$Position self);
frost$core$String* org$frostlang$frostc$Position$asString$org$frostlang$frostc$Compiler$R$frost$core$String(org$frostlang$frostc$Position self, org$frostlang$frostc$Compiler* p_compiler);
void org$frostlang$frostc$Position$cleanup(org$frostlang$frostc$Position self);

