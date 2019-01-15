#pragma once
#include "frost_c.h"
#include "Protector_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlanguage$frostc$frostdoc$Protector org$frostlanguage$frostc$frostdoc$Protector;

frost$core$String* org$frostlanguage$frostc$frostdoc$Protector$encode$frost$core$String$R$frost$core$String(org$frostlanguage$frostc$frostdoc$Protector* self, frost$core$String* p_s);
frost$core$String* org$frostlanguage$frostc$frostdoc$Protector$decode$frost$core$String$R$frost$core$String$Q(org$frostlanguage$frostc$frostdoc$Protector* self, frost$core$String* p_s);
frost$core$String* org$frostlanguage$frostc$frostdoc$Protector$randomToken$R$frost$core$String(org$frostlanguage$frostc$frostdoc$Protector* self);
void org$frostlanguage$frostc$frostdoc$Protector$init(org$frostlanguage$frostc$frostdoc$Protector* self);
void org$frostlanguage$frostc$frostdoc$Protector$cleanup(org$frostlanguage$frostc$frostdoc$Protector* self);

