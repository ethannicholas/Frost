#pragma once
#include "frost_c.h"
#include "Config_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$Config org$frostlang$frostc$Config;

frost$core$String* org$frostlang$frostc$Config$frostSourceDir$R$frost$core$String();
frost$core$String* org$frostlang$frostc$Config$frostLibDir$R$frost$core$String();
frost$core$String* org$frostlang$frostc$Config$llvmDir$R$frost$core$String();
frost$core$String* org$frostlang$frostc$Config$llvmTriple$R$frost$core$String();
frost$core$String* org$frostlang$frostc$Config$icuLibraries$R$frost$core$String();
void org$frostlang$frostc$Config$init(void* rawSelf);
void org$frostlang$frostc$Config$cleanup(void* rawSelf);

