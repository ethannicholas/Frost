#pragma once
#include "frost_c.h"
#include "Markdown_types.h"
typedef struct org$frostlanguage$frostc$frostdoc$Markdown org$frostlanguage$frostc$frostdoc$Markdown;
typedef struct frost$core$MutableMethod frost$core$MutableMethod;
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$MutableString frost$core$MutableString;
typedef struct frost$collections$ListView frost$collections$ListView;
typedef struct org$frostlanguage$frostc$parser$Parser org$frostlanguage$frostc$parser$Parser;
#include "frost/core/Bit_types.h"
#include "frost/core/Int64_types.h"

void org$frostlanguage$frostc$frostdoc$Markdown$init(org$frostlanguage$frostc$frostdoc$Markdown* self);
void org$frostlanguage$frostc$frostdoc$Markdown$init$$LPfrost$core$String$RP$EQ$AM$GT$LPfrost$core$String$Q$RP$Q(org$frostlanguage$frostc$frostdoc$Markdown* self, frost$core$MutableMethod* p_linkResolver);
frost$core$String* org$frostlanguage$frostc$frostdoc$Markdown$process$frost$core$String$R$frost$core$String(org$frostlanguage$frostc$frostdoc$Markdown* self, frost$core$String* p_raw);
void org$frostlanguage$frostc$frostdoc$Markdown$encodeBackslashEscapes$frost$core$MutableString(org$frostlanguage$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_text);
void org$frostlanguage$frostc$frostdoc$Markdown$encodeEscapes$frost$core$MutableString$frost$collections$ListView$LTfrost$core$Char8$GT$frost$core$String(org$frostlanguage$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_text, frost$collections$ListView* p_chars, frost$core$String* p_slashes);
void org$frostlanguage$frostc$frostdoc$Markdown$stripLinkDefinitions$frost$core$MutableString(org$frostlanguage$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_text);
void org$frostlanguage$frostc$frostdoc$Markdown$runBlockGamut$frost$core$MutableString(org$frostlanguage$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_text);
void org$frostlanguage$frostc$frostdoc$Markdown$doHorizontalRules$frost$core$MutableString(org$frostlanguage$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_text);
void org$frostlanguage$frostc$frostdoc$Markdown$hashHTMLBlocks$frost$core$MutableString(org$frostlanguage$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_text);
void org$frostlanguage$frostc$frostdoc$Markdown$formParagraphs$frost$core$MutableString(org$frostlanguage$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_markup);
void org$frostlanguage$frostc$frostdoc$Markdown$doAutoLinks$frost$core$MutableString(org$frostlanguage$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_markup);
void org$frostlanguage$frostc$frostdoc$Markdown$unescapeSpecialChars$frost$core$MutableString(org$frostlanguage$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_ed);
frost$core$String* org$frostlanguage$frostc$frostdoc$Markdown$encodeEmail$frost$core$String$R$frost$core$String(org$frostlanguage$frostc$frostdoc$Markdown* self, frost$core$String* p_s);
void org$frostlanguage$frostc$frostdoc$Markdown$doBlockQuotes$frost$core$MutableString(org$frostlanguage$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_markup);
frost$core$String* org$frostlanguage$frostc$frostdoc$Markdown$$anonymous10$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(frost$collections$ListView* p_groups);
void org$frostlanguage$frostc$frostdoc$Markdown$detabify$frost$core$MutableString(org$frostlanguage$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_text);
void org$frostlanguage$frostc$frostdoc$Markdown$outdent$frost$core$MutableString(frost$core$MutableString* p_s);
void org$frostlanguage$frostc$frostdoc$Markdown$doCodeBlocks$frost$core$MutableString(org$frostlanguage$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_markup);
frost$core$String* org$frostlanguage$frostc$frostdoc$Markdown$prettyPrint$org$frostlanguage$frostc$parser$Parser$R$frost$core$String(org$frostlanguage$frostc$frostdoc$Markdown* self, org$frostlanguage$frostc$parser$Parser* p_parser);
void org$frostlanguage$frostc$frostdoc$Markdown$syntaxHighlight$frost$core$MutableString(org$frostlanguage$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_ed);
void org$frostlanguage$frostc$frostdoc$Markdown$encodeCode$frost$core$MutableString(org$frostlanguage$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_ed);
void org$frostlanguage$frostc$frostdoc$Markdown$doLists$frost$core$MutableString(org$frostlanguage$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_text);
frost$core$String* org$frostlanguage$frostc$frostdoc$Markdown$processListItems$frost$core$String$R$frost$core$String(org$frostlanguage$frostc$frostdoc$Markdown* self, frost$core$String* p_rawList);
frost$core$Bit org$frostlanguage$frostc$frostdoc$Markdown$hasParagraphBreak$frost$core$MutableString$R$frost$core$Bit(frost$core$MutableString* p_item);
frost$core$Bit org$frostlanguage$frostc$frostdoc$Markdown$isEmptyString$frost$core$String$Q$R$frost$core$Bit(frost$core$String* p_leadingLine);
void org$frostlanguage$frostc$frostdoc$Markdown$doHeaders$frost$core$MutableString(org$frostlanguage$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_markup);
void org$frostlanguage$frostc$frostdoc$Markdown$runSpanGamut$frost$core$MutableString(org$frostlanguage$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_text);
frost$core$String* org$frostlanguage$frostc$frostdoc$Markdown$nestedTagsRegex$frost$core$Int64$R$frost$core$String(frost$core$Int64 p_depth);
frost$collections$ListView* org$frostlanguage$frostc$frostdoc$Markdown$tokenizeHTML$frost$core$String$R$frost$collections$ListView$LTorg$frostlanguage$frostc$frostdoc$Markdown$HTMLToken$GT(org$frostlanguage$frostc$frostdoc$Markdown* self, frost$core$String* p_text);
void org$frostlanguage$frostc$frostdoc$Markdown$escapeSpecialCharsWithinTagAttributes$frost$core$MutableString(org$frostlanguage$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_text);
void org$frostlanguage$frostc$frostdoc$Markdown$doImages$frost$core$MutableString(org$frostlanguage$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_text);
void org$frostlanguage$frostc$frostdoc$Markdown$doAnchors$frost$core$MutableString(org$frostlanguage$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_markup);
void org$frostlanguage$frostc$frostdoc$Markdown$doItalicsAndBold$frost$core$MutableString(org$frostlanguage$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_markup);
void org$frostlanguage$frostc$frostdoc$Markdown$encodeAmpsAndAngles$frost$core$MutableString(org$frostlanguage$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_markup);
void org$frostlanguage$frostc$frostdoc$Markdown$doCodeSpans$frost$core$MutableString(org$frostlanguage$frostc$frostdoc$Markdown* self, frost$core$MutableString* p_markup);
void org$frostlanguage$frostc$frostdoc$Markdown$cleanup(org$frostlanguage$frostc$frostdoc$Markdown* self);

