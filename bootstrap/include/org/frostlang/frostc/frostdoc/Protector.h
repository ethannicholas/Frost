#pragma once
#include "frost_c.h"
#include "Protector_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$frostdoc$Protector org$frostlang$frostc$frostdoc$Protector;

frost$core$String* org$frostlang$frostc$frostdoc$Protector$encode$frost$core$String$R$frost$core$String(void* rawSelf, frost$core$String* p_s);
frost$core$String* org$frostlang$frostc$frostdoc$Protector$decode$frost$core$String$R$frost$core$String$Q(void* rawSelf, frost$core$String* p_s);
frost$core$String* org$frostlang$frostc$frostdoc$Protector$randomToken$R$frost$core$String(void* rawSelf);
void org$frostlang$frostc$frostdoc$Protector$init(void* rawSelf);
void org$frostlang$frostc$frostdoc$Protector$cleanup(void* rawSelf);

