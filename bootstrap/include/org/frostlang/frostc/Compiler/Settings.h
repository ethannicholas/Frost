#pragma once
#include "frost_c.h"
#include "Settings_types.h"
typedef struct org$frostlang$frostc$Compiler$Settings org$frostlang$frostc$Compiler$Settings;
typedef struct frost$io$File frost$io$File;
typedef struct frost$collections$ListView frost$collections$ListView;
#include "frost/core/Int64_types.h"
#include "frost/core/Bit_types.h"

void org$frostlang$frostc$Compiler$Settings$init$frost$io$File$frost$collections$ListView$LTfrost$io$File$GT$frost$core$Int64$frost$core$Int64$frost$core$Bit(org$frostlang$frostc$Compiler$Settings* self, frost$io$File* p_frostHome, frost$collections$ListView* p_importDirs, frost$core$Int64 p_optimizationLevel, frost$core$Int64 p_safetyLevel, frost$core$Bit p_debug);
void org$frostlang$frostc$Compiler$Settings$cleanup(org$frostlang$frostc$Compiler$Settings* self);

