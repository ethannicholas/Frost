#pragma once
#include "frost_c.h"
#include "Markdown_types.h"
typedef struct org$frostlang$frostc$frostdoc$Markdown org$frostlang$frostc$frostdoc$Markdown;
typedef struct frost$core$MutableMethod frost$core$MutableMethod;
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$MutableString frost$core$MutableString;
typedef struct frost$collections$ListView frost$collections$ListView;
typedef struct org$frostlang$frostc$parser$Parser org$frostlang$frostc$parser$Parser;
#include "frost/core/Bit_types.h"
#include "frost/core/Int64_types.h"

void org$frostlang$frostc$frostdoc$Markdown$init(org$frostlang$frostc$frostdoc$Markdown* self);
void org$frostlang$frostc$frostdoc$Markdown$init$$LPfrost$core$String$RP$EQ$AM$GT$LPfrost$core$String$Q$RP$Q(org$frostlang$frostc$frostdoc$Markdown* self, frost$core$MutableMethod* p_linkResolver);
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$process$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* self, frost$core$String* p_raw);
void org$frostlang$frostc$frostdoc$Markdown$encodeBackslashEscapes$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_text);
void org$frostlang$frostc$frostdoc$Markdown$encodeEscapes$frost$core$MutableString$frost$collections$ListView$LTfrost$core$Char8$GT$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_text, frost$collections$ListView* p_chars, frost$core$String* p_slashes);
void org$frostlang$frostc$frostdoc$Markdown$stripLinkDefinitions$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_text);
void org$frostlang$frostc$frostdoc$Markdown$runBlockGamut$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_text);
void org$frostlang$frostc$frostdoc$Markdown$doHorizontalRules$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_text);
void org$frostlang$frostc$frostdoc$Markdown$hashHTMLBlocks$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_text);
void org$frostlang$frostc$frostdoc$Markdown$formParagraphs$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_markup);
void org$frostlang$frostc$frostdoc$Markdown$doAutoLinks$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_markup);
void org$frostlang$frostc$frostdoc$Markdown$unescapeSpecialChars$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_ed);
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$encodeEmail$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* self, frost$core$String* p_s);
void org$frostlang$frostc$frostdoc$Markdown$doBlockQuotes$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_markup);
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$$anonymous10$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(frost$collections$ListView* p_groups);
void org$frostlang$frostc$frostdoc$Markdown$detabify$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_text);
void org$frostlang$frostc$frostdoc$Markdown$outdent$frost$core$MutableString(frost$core$MutableString* p_s);
void org$frostlang$frostc$frostdoc$Markdown$doCodeBlocks$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_markup);
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$prettyPrint$org$frostlang$frostc$parser$Parser$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* self, org$frostlang$frostc$parser$Parser* p_parser);
void org$frostlang$frostc$frostdoc$Markdown$syntaxHighlight$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_ed);
void org$frostlang$frostc$frostdoc$Markdown$encodeCode$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_ed);
void org$frostlang$frostc$frostdoc$Markdown$doLists$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_text);
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$processListItems$frost$core$String$R$frost$core$String(org$frostlang$frostc$frostdoc$Markdown* self, frost$core$String* p_rawList);
frost$core$Bit org$frostlang$frostc$frostdoc$Markdown$hasParagraphBreak$frost$core$MutableString$R$frost$core$Bit(frost$core$MutableString* p_item);
frost$core$Bit org$frostlang$frostc$frostdoc$Markdown$isEmptyString$frost$core$String$Q$R$frost$core$Bit(frost$core$String* p_leadingLine);
void org$frostlang$frostc$frostdoc$Markdown$doHeaders$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_markup);
void org$frostlang$frostc$frostdoc$Markdown$runSpanGamut$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_text);
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$nestedTagsRegex$frost$core$Int64$R$frost$core$String(frost$core$Int64 p_depth);
frost$collections$ListView* org$frostlang$frostc$frostdoc$Markdown$tokenizeHTML$frost$core$String$R$frost$collections$ListView$LTorg$frostlang$frostc$frostdoc$Markdown$HTMLToken$GT(org$frostlang$frostc$frostdoc$Markdown* self, frost$core$String* p_text);
void org$frostlang$frostc$frostdoc$Markdown$escapeSpecialCharsWithinTagAttributes$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_text);
void org$frostlang$frostc$frostdoc$Markdown$doImages$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_text);
void org$frostlang$frostc$frostdoc$Markdown$doAnchors$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_markup);
void org$frostlang$frostc$frostdoc$Markdown$doItalicsAndBold$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_markup);
void org$frostlang$frostc$frostdoc$Markdown$encodeAmpsAndAngles$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_markup);
void org$frostlang$frostc$frostdoc$Markdown$doCodeSpans$frost$core$MutableString(org$frostlang$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_markup);
void org$frostlang$frostc$frostdoc$Markdown$cleanup(org$frostlang$frostc$frostdoc$Markdown* self);
