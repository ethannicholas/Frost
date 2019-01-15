#include "org/frostlanguage/frostc/parser/Parser/AutoSyntaxHighlight.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlanguage/frostc/parser/Parser.h"
#include "org/frostlanguage/frostc/parser/SyntaxHighlighter/Kind.h"
#include "frost/core/Frost.h"
#include "org/frostlanguage/frostc/parser/SyntaxHighlighter.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight$class_type org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight$cleanup} };

typedef void (*$fn13)(org$frostlanguage$frostc$parser$SyntaxHighlighter*, org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn27)(org$frostlanguage$frostc$parser$SyntaxHighlighter*, org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x41\x75\x74\x6f\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74", 58, -1208125185340294452, NULL };

void org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight$init$org$frostlanguage$frostc$parser$Parser$org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind(org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight* param0, org$frostlanguage$frostc$parser$Parser* param1, org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind param2) {

// line 20
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlanguage$frostc$parser$Parser** $tmp2 = &param0->parser;
org$frostlanguage$frostc$parser$Parser* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlanguage$frostc$parser$Parser** $tmp4 = &param0->parser;
*$tmp4 = param1;
// line 21
org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind* $tmp5 = &param0->kind;
*$tmp5 = param2;
// line 22
org$frostlanguage$frostc$parser$SyntaxHighlighter** $tmp6 = &param1->syntaxHighlighter;
org$frostlanguage$frostc$parser$SyntaxHighlighter* $tmp7 = *$tmp6;
frost$core$Bit $tmp8 = frost$core$Bit$init$builtin_bit($tmp7 != NULL);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block2;
block1:;
// line 23
org$frostlanguage$frostc$parser$SyntaxHighlighter** $tmp10 = &param1->syntaxHighlighter;
org$frostlanguage$frostc$parser$SyntaxHighlighter* $tmp11 = *$tmp10;
$fn13 $tmp12 = ($fn13) $tmp11->$class->vtable[3];
$tmp12($tmp11, param2);
goto block2;
block2:;
return;

}
void org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight$cleanup(org$frostlanguage$frostc$parser$Parser$AutoSyntaxHighlight* param0) {

// line 29
org$frostlanguage$frostc$parser$Parser** $tmp14 = &param0->parser;
org$frostlanguage$frostc$parser$Parser* $tmp15 = *$tmp14;
org$frostlanguage$frostc$parser$SyntaxHighlighter** $tmp16 = &$tmp15->syntaxHighlighter;
org$frostlanguage$frostc$parser$SyntaxHighlighter* $tmp17 = *$tmp16;
frost$core$Bit $tmp18 = frost$core$Bit$init$builtin_bit($tmp17 != NULL);
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block1; else goto block2;
block1:;
// line 30
org$frostlanguage$frostc$parser$Parser** $tmp20 = &param0->parser;
org$frostlanguage$frostc$parser$Parser* $tmp21 = *$tmp20;
org$frostlanguage$frostc$parser$SyntaxHighlighter** $tmp22 = &$tmp21->syntaxHighlighter;
org$frostlanguage$frostc$parser$SyntaxHighlighter* $tmp23 = *$tmp22;
org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind* $tmp24 = &param0->kind;
org$frostlanguage$frostc$parser$SyntaxHighlighter$Kind $tmp25 = *$tmp24;
$fn27 $tmp26 = ($fn27) $tmp23->$class->vtable[4];
$tmp26($tmp23, $tmp25);
goto block2;
block2:;
// line 28
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlanguage$frostc$parser$Parser** $tmp28 = &param0->parser;
org$frostlanguage$frostc$parser$Parser* $tmp29 = *$tmp28;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
return;

}






