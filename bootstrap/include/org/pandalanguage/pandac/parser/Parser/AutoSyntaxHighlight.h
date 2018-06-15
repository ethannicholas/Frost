#pragma once
#include "panda_c.h"
#include "AutoSyntaxHighlight_types.h"
typedef struct org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight;
typedef struct org$pandalanguage$pandac$parser$Parser org$pandalanguage$pandac$parser$Parser;
#include "org/pandalanguage/pandac/parser/SyntaxHighlighter/Kind_types.h"

void org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$init$org$pandalanguage$pandac$parser$Parser$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* self, org$pandalanguage$pandac$parser$Parser* p_parser, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind p_kind);
void org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$cleanup(org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* self);

