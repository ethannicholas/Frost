#pragma once
#include "frost_c.h"
#include "Message_types.h"
typedef struct org$frostlang$frostc$Compiler$Message org$frostlang$frostc$Compiler$Message;
#include "frost/core/Int64_types.h"
typedef struct frost$io$File frost$io$File;
#include "org/frostlang/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;
#include "frost/core/Bit_types.h"

void org$frostlang$frostc$Compiler$Message$cleanup(org$frostlang$frostc$Compiler$Message* self);
void org$frostlang$frostc$Compiler$Message$init$frost$core$Int64$frost$io$File$org$frostlang$frostc$Position$frost$core$String(org$frostlang$frostc$Compiler$Message* self, frost$core$Int64 p_rv, frost$io$File* p_f0, org$frostlang$frostc$Position p_f1, frost$core$String* p_f2);
frost$core$Bit org$frostlang$frostc$Compiler$Message$$EQ$org$frostlang$frostc$Compiler$Message$R$frost$core$Bit(org$frostlang$frostc$Compiler$Message* self, org$frostlang$frostc$Compiler$Message* p_other);

