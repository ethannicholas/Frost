#pragma once
#include "frost_c.h"
#include "Alias_types.h"
typedef struct org$frostlang$frostc$Alias org$frostlang$frostc$Alias;
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;

void org$frostlang$frostc$Alias$init$frost$core$String$org$frostlang$frostc$Type(void* rawSelf, frost$core$String* p_alias, org$frostlang$frostc$Type* p_type);
frost$core$String* org$frostlang$frostc$Alias$get_asString$R$frost$core$String(void* rawSelf);
void org$frostlang$frostc$Alias$cleanup(void* rawSelf);

