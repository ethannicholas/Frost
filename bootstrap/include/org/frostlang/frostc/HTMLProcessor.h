#pragma once
#include "frost_c.h"
#include "HTMLProcessor_types.h"
typedef struct org$frostlang$frostc$HTMLProcessor org$frostlang$frostc$HTMLProcessor;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$parser$Parser org$frostlang$frostc$parser$Parser;
typedef struct frost$io$File frost$io$File;

void org$frostlang$frostc$HTMLProcessor$init$org$frostlang$frostc$Compiler(void* rawSelf, org$frostlang$frostc$Compiler* p_compiler);
frost$core$String* org$frostlang$frostc$HTMLProcessor$prettyPrint$org$frostlang$frostc$parser$Parser$R$frost$core$String(void* rawSelf, org$frostlang$frostc$parser$Parser* p_parser);
void org$frostlang$frostc$HTMLProcessor$process$frost$io$File$frost$io$File$frost$core$String(void* rawSelf, frost$io$File* p_input, frost$io$File* p_output, frost$core$String* p_root);
void org$frostlang$frostc$HTMLProcessor$cleanup(void* rawSelf);

