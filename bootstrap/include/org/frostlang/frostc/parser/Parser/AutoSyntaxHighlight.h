#pragma once
#include "frost_c.h"
#include "AutoSyntaxHighlight_types.h"
typedef struct org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight;
typedef struct org$frostlang$frostc$parser$Parser org$frostlang$frostc$parser$Parser;
#include "org/frostlang/frostc/parser/SyntaxHighlighter/Kind_types.h"

void org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight$init$org$frostlang$frostc$parser$Parser$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* self, org$frostlang$frostc$parser$Parser* p_parser, org$frostlang$frostc$parser$SyntaxHighlighter$Kind p_kind);
void org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight$cleanup(org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* self);

