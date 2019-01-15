#pragma once
#include "frost_c.h"
#include "AutoSyntaxHighlight_types.h"
typedef struct org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight;
typedef struct org$frostlanguage$frostc$parser$Parser org$frostlanguage$frostc$parser$Parser;
#include "org/frostlanguage/frostc/parser/SyntaxHighlighter/Kind_types.h"

void org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight$init$org$frostlanguage$frostc$parser$Parser$org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind(org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight* self, org$frostlanguage$frostc$parser$Parser* p_parser, org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind p_kind);
void org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight$cleanup(org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight* self);

