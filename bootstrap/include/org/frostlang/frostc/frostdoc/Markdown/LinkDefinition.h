#pragma once
#include "frost_c.h"
#include "LinkDefinition_types.h"
typedef struct org$frostlang$frostc$frostdoc$Markdown$LinkDefinition org$frostlang$frostc$frostdoc$Markdown$LinkDefinition;
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$frostdoc$Markdown$LinkDefinition$init$frost$core$String$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* self, frost$core$String* p_url, frost$core$String* p_title);
void org$frostlang$frostc$frostdoc$Markdown$LinkDefinition$cleanup(org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* self);

