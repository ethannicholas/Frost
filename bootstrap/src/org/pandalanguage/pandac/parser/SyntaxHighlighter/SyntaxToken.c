#include "org/pandalanguage/pandac/parser/SyntaxHighlighter/SyntaxToken.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "org/pandalanguage/pandac/parser/SyntaxHighlighter/Kind.h"
#include "panda/core/Panda.h"

static panda$core$String $s1;
org$pandalanguage$pandac$parser$SyntaxHighlighter$SyntaxToken$class_type org$pandalanguage$pandac$parser$SyntaxHighlighter$SyntaxToken$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$parser$SyntaxHighlighter$SyntaxToken$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x54\x6f\x6b\x65\x6e", 61, -8436777877165652983, NULL };

void org$pandalanguage$pandac$parser$SyntaxHighlighter$SyntaxToken$init$panda$core$String$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$SyntaxHighlighter$SyntaxToken* self, panda$core$String* p_text, org$pandalanguage$pandac$parser$Token$Kind p_tokenKind, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind p_syntaxKind) {
    panda$core$String* $tmp2;
    panda$core$String* $tmp3;
    self->text = NULL;
    {
        $tmp2 = self->text;
        $tmp3 = p_text;
        self->text = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
    self->tokenKind = p_tokenKind;
    self->syntaxKind = p_syntaxKind;
}
void org$pandalanguage$pandac$parser$SyntaxHighlighter$SyntaxToken$cleanup(org$pandalanguage$pandac$parser$SyntaxHighlighter$SyntaxToken* self) {
    int $tmp6;
    {
    }
    $tmp6 = -1;
    goto $l4;
    $l4:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp6) {
        case -1: goto $l7;
    }
    $l7:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->text));
}





