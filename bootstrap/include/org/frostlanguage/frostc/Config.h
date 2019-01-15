#pragma once
#include "frost_c.h"
#include "Config_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlanguage$frostc$Config org$frostlanguage$frostc$Config;

frost$core$String* org$frostlanguage$frostc$Config$frostSourceDir$R$frost$core$String();
frost$core$String* org$frostlanguage$frostc$Config$frostLibDir$R$frost$core$String();
frost$core$String* org$frostlanguage$frostc$Config$llvmDir$R$frost$core$String();
frost$core$String* org$frostlanguage$frostc$Config$llvmTriple$R$frost$core$String();
frost$core$String* org$frostlanguage$frostc$Config$icuLibraries$R$frost$core$String();
void org$frostlanguage$frostc$Config$init(org$frostlanguage$frostc$Config* self);
void org$frostlanguage$frostc$Config$cleanup(org$frostlanguage$frostc$Config* self);

