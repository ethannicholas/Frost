#include "org/pandalanguage/pandac/parser/Parser/AutoSyntaxHighlight.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/parser/Parser.h"
#include "org/pandalanguage/pandac/parser/SyntaxHighlighter/Kind.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/parser/SyntaxHighlighter.h"
#include "panda/core/Bit.h"


static panda$core$String $s1;
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$class_type org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$cleanup} };

typedef void (*$fn13)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn27)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x41\x75\x74\x6f\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74", 58, -1634071077149969000, NULL };

void org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$init$org$pandalanguage$pandac$parser$Parser$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* param0, org$pandalanguage$pandac$parser$Parser* param1, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind param2) {

// line 19
org$pandalanguage$pandac$parser$Parser** $tmp2 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$parser$Parser** $tmp4 = &param0->parser;
*$tmp4 = param1;
// line 20
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind* $tmp5 = &param0->kind;
*$tmp5 = param2;
// line 21
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp6 = &param1->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp7 = *$tmp6;
panda$core$Bit $tmp8 = panda$core$Bit$init$builtin_bit($tmp7 != NULL);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block2;
block1:;
// line 22
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp10 = &param1->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp11 = *$tmp10;
$fn13 $tmp12 = ($fn13) $tmp11->$class->vtable[3];
$tmp12($tmp11, param2);
goto block2;
block2:;
return;

}
void org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$cleanup(org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* param0) {

// line 28
org$pandalanguage$pandac$parser$Parser** $tmp14 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp15 = *$tmp14;
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp16 = &$tmp15->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp17 = *$tmp16;
panda$core$Bit $tmp18 = panda$core$Bit$init$builtin_bit($tmp17 != NULL);
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block1; else goto block2;
block1:;
// line 29
org$pandalanguage$pandac$parser$Parser** $tmp20 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp21 = *$tmp20;
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp22 = &$tmp21->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp23 = *$tmp22;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind* $tmp24 = &param0->kind;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp25 = *$tmp24;
$fn27 $tmp26 = ($fn27) $tmp23->$class->vtable[4];
$tmp26($tmp23, $tmp25);
goto block2;
block2:;
org$pandalanguage$pandac$parser$Parser** $tmp28 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp29 = *$tmp28;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
return;

}






