#pragma once
#include "frost_c.h"
#include "HTMLProcessor_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlanguage$frostc$HTMLProcessor org$frostlanguage$frostc$HTMLProcessor;
typedef struct org$frostlanguage$frostc$parser$Parser org$frostlanguage$frostc$parser$Parser;
typedef struct frost$io$File frost$io$File;

frost$core$String* org$frostlanguage$frostc$HTMLProcessor$prettyPrint$org$frostlanguage$frostc$parser$Parser$R$frost$core$String(org$frostlanguage$frostc$HTMLProcessor* self, org$frostlanguage$frostc$parser$Parser* p_parser);
void org$frostlanguage$frostc$HTMLProcessor$process$frost$io$File$frost$io$File$frost$core$String(org$frostlanguage$frostc$HTMLProcessor* self, frost$io$File* p_input, frost$io$File* p_output, frost$core$String* p_root);
void org$frostlanguage$frostc$HTMLProcessor$init(org$frostlanguage$frostc$HTMLProcessor* self);
void org$frostlanguage$frostc$HTMLProcessor$cleanup(org$frostlanguage$frostc$HTMLProcessor* self);

