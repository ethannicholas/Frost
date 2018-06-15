#include "org/pandalanguage/pandac/parser/Parser/AutoSyntaxHighlight.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/parser/Parser.h"
#include "org/pandalanguage/pandac/parser/SyntaxHighlighter/Kind.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/parser/SyntaxHighlighter.h"

static panda$core$String $s1;
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$class_type org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$cleanup} };

typedef void (*$fn4)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn8)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x41\x75\x74\x6f\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74", 58, -1634071077149969000, NULL };

void org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$init$org$pandalanguage$pandac$parser$Parser$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* self, org$pandalanguage$pandac$parser$Parser* p_parser, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind p_kind) {
    org$pandalanguage$pandac$parser$Parser* $tmp2;
    org$pandalanguage$pandac$parser$Parser* $tmp3;
    self->parser = NULL;
    {
        $tmp2 = self->parser;
        $tmp3 = p_parser;
        self->parser = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
    self->kind = p_kind;
    if (((panda$core$Bit) { p_parser->syntaxHighlighter != NULL }).value) {
    {
        (($fn4) p_parser->syntaxHighlighter->$class->vtable[3])(p_parser->syntaxHighlighter, p_kind);
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$cleanup(org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* self) {
    int $tmp7;
    {
        if (((panda$core$Bit) { self->parser->syntaxHighlighter != NULL }).value) {
        {
            (($fn8) self->parser->syntaxHighlighter->$class->vtable[4])(self->parser->syntaxHighlighter, self->kind);
        }
        }
    }
    $tmp7 = -1;
    goto $l5;
    $l5:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp7) {
        case -1: goto $l9;
    }
    $l9:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parser));
}





