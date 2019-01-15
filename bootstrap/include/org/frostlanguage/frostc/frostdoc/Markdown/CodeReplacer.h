#pragma once
#include "frost_c.h"
#include "CodeReplacer_types.h"
typedef struct org$frostlanguage$frostc$frostdoc$Markdown$CodeReplacer org$frostlanguage$frostc$frostdoc$Markdown$CodeReplacer;
typedef struct org$frostlanguage$frostc$frostdoc$Markdown org$frostlanguage$frostc$frostdoc$Markdown;
typedef struct frost$core$String frost$core$String;
typedef struct frost$collections$ListView frost$collections$ListView;
#include "frost/core/Bit_types.h"

void org$frostlanguage$frostc$frostdoc$Markdown$CodeReplacer$init$org$frostlanguage$frostc$frostdoc$Markdown(org$frostlanguage$frostc$frostdoc$Markdown$CodeReplacer* self, org$frostlanguage$frostc$frostdoc$Markdown* p_markdown);
frost$core$String* org$frostlanguage$frostc$frostdoc$Markdown$CodeReplacer$replacement$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(org$frostlanguage$frostc$frostdoc$Markdown$CodeReplacer* self, frost$collections$ListView* p_groups);
frost$core$String* org$frostlanguage$frostc$frostdoc$Markdown$CodeReplacer$firstLine$frost$core$String$R$frost$core$String(org$frostlanguage$frostc$frostdoc$Markdown$CodeReplacer* self, frost$core$String* p_text);
frost$core$Bit org$frostlanguage$frostc$frostdoc$Markdown$CodeReplacer$isLanguageIdentifier$frost$core$String$R$frost$core$Bit(org$frostlanguage$frostc$frostdoc$Markdown$CodeReplacer* self, frost$core$String* p_line);
frost$core$String* org$frostlanguage$frostc$frostdoc$Markdown$CodeReplacer$languageBlock$frost$core$String$frost$core$String$R$frost$core$String(org$frostlanguage$frostc$frostdoc$Markdown$CodeReplacer* self, frost$core$String* p_firstLine, frost$core$String* p_text);
frost$core$String* org$frostlanguage$frostc$frostdoc$Markdown$CodeReplacer$genericCodeBlock$frost$core$String$R$frost$core$String(org$frostlanguage$frostc$frostdoc$Markdown$CodeReplacer* self, frost$core$String* p_text);
void org$frostlanguage$frostc$frostdoc$Markdown$CodeReplacer$cleanup(org$frostlanguage$frostc$frostdoc$Markdown$CodeReplacer* self);

