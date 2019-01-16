#include "org/pandalanguage/pandac/parser/Parser/AutoSyntaxHighlight.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/parser/Parser.h"
#include "org/pandalanguage/pandac/parser/SyntaxHighlighter/Kind.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/parser/SyntaxHighlighter.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"


static panda$core$String $s1;
org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$class_type org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$cleanup} };

typedef void (*$fn18)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);
typedef void (*$fn37)(org$pandalanguage$pandac$parser$SyntaxHighlighter*, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x41\x75\x74\x6f\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74", 58, -1634071077149969000, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72\x27", 137, 2390994241317501497, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 7165916831566560714, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72\x27", 137, 2390994241317501497, NULL };

void org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$init$org$pandalanguage$pandac$parser$Parser$org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind(org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* param0, org$pandalanguage$pandac$parser$Parser* param1, org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind param2) {

// line 20
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$parser$Parser** $tmp2 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$parser$Parser** $tmp4 = &param0->parser;
*$tmp4 = param1;
// line 21
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind* $tmp5 = &param0->kind;
*$tmp5 = param2;
// line 22
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp6 = &param1->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp7 = *$tmp6;
panda$core$Bit $tmp8 = panda$core$Bit$init$builtin_bit($tmp7 != NULL);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block2;
block1:;
// line 23
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp10 = &param1->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp11 = *$tmp10;
panda$core$Bit $tmp12 = panda$core$Bit$init$builtin_bit($tmp11 != NULL);
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp14 = (panda$core$Int64) {23};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s15, $tmp14, &$s16);
abort(); // unreachable
block3:;
$fn18 $tmp17 = ($fn18) $tmp11->$class->vtable[3];
$tmp17($tmp11, param2);
goto block2;
block2:;
return;

}
void org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight$cleanup(org$pandalanguage$pandac$parser$Parser$AutoSyntaxHighlight* param0) {

// line 29
org$pandalanguage$pandac$parser$Parser** $tmp19 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp20 = *$tmp19;
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp21 = &$tmp20->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp22 = *$tmp21;
panda$core$Bit $tmp23 = panda$core$Bit$init$builtin_bit($tmp22 != NULL);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block1; else goto block2;
block1:;
// line 30
org$pandalanguage$pandac$parser$Parser** $tmp25 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp26 = *$tmp25;
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp27 = &$tmp26->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp28 = *$tmp27;
panda$core$Bit $tmp29 = panda$core$Bit$init$builtin_bit($tmp28 != NULL);
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp31 = (panda$core$Int64) {30};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s32, $tmp31, &$s33);
abort(); // unreachable
block3:;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind* $tmp34 = &param0->kind;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp35 = *$tmp34;
$fn37 $tmp36 = ($fn37) $tmp28->$class->vtable[4];
$tmp36($tmp28, $tmp35);
goto block2;
block2:;
// line 28
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$parser$Parser** $tmp38 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp39 = *$tmp38;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
return;

}






