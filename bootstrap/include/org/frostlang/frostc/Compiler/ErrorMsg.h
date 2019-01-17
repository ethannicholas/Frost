#pragma once
#include "frost_c.h"
#include "ErrorMsg_types.h"
typedef struct org$frostlang$frostc$Compiler$ErrorMsg org$frostlang$frostc$Compiler$ErrorMsg;
typedef struct frost$io$File frost$io$File;
#include "org/frostlang/frostc/Position_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$Compiler$ErrorMsg$init$frost$io$File$org$frostlang$frostc$Position$frost$core$String(org$frostlang$frostc$Compiler$ErrorMsg* self, frost$io$File* p_file, org$frostlang$frostc$Position p_position, frost$core$String* p_message);
void org$frostlang$frostc$Compiler$ErrorMsg$cleanup(org$frostlang$frostc$Compiler$ErrorMsg* self);

