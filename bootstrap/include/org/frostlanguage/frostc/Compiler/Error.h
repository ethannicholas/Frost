#pragma once
#include "frost_c.h"
#include "Error_types.h"
typedef struct org$frostlanguage$frostc$Compiler$Error org$frostlanguage$frostc$Compiler$Error;
typedef struct frost$io$File frost$io$File;
#include "org/frostlanguage/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlanguage$frostc$Compiler$Error$init$frost$io$File$org$frostlanguage$frostc$Position$frost$core$String(org$frostlanguage$frostc$Compiler$Error* self, frost$io$File* p_file, org$frostlanguage$frostc$Position p_position, frost$core$String* p_message);
void org$frostlanguage$frostc$Compiler$Error$cleanup(org$frostlanguage$frostc$Compiler$Error* self);

