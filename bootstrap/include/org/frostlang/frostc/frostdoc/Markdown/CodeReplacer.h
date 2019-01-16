#pragma once
#include "frost_c.h"
#include "CodeReplacer_types.h"
typedef struct org$frostlang$frostc$frostdoc$Markdown$CodeReplacer org$frostlang$frostc$frostdoc$Markdown$CodeReplacer;
typedef struct org$frostlang$frostc$frostdoc$Markdown org$frostlang$frostc$frostdoc$Markdown;
typedef struct frost$core$String frost$core$String;
typedef struct frost$collections$ListView frost$collections$ListView;
#include "frost/core/Bit_types.h"

void org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$init$org$frostlang$frostc$frostdoc$Markdown(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* self, org$frostlang$frostc$frostdoc$Markdown* p_markdown);
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$replacement$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* self, frost$collections$ListView* p_groups);
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$firstLine$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* self, frost$core$String* p_text);
frost$core$Bit org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$isLanguageIdentifier$frost$core$String$R$frost$core$Bit(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* self, frost$core$String* p_line);
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$languageBlock$frost$core$String$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* self, frost$core$String* p_firstLine, frost$core$String* p_text);
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$genericCodeBlock$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* self, frost$core$String* p_text);
void org$frostlang$frostc$frostdoc$Markdown$CodeReplacer$cleanup(org$frostlang$frostc$frostdoc$Markdown$CodeReplacer* self);

