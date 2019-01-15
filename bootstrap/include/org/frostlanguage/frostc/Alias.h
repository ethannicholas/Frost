#pragma once
#include "frost_c.h"
#include "Alias_types.h"
typedef struct org$frostlanguage$frostc$Alias org$frostlanguage$frostc$Alias;
typedef struct frost$core$String frost$core$String;
#include "org/frostlanguage/frostc/Position_types.h"

void org$frostlanguage$frostc$Alias$init$frost$core$String$frost$core$String$org$frostlanguage$frostc$Position(org$frostlanguage$frostc$Alias* self, frost$core$String* p_alias, frost$core$String* p_fullName, org$frostlanguage$frostc$Position p_position);
frost$core$String* org$frostlanguage$frostc$Alias$convert$R$frost$core$String(org$frostlanguage$frostc$Alias* self);
void org$frostlanguage$frostc$Alias$cleanup(org$frostlanguage$frostc$Alias* self);

