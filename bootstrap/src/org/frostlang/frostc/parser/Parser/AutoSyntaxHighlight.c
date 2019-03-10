#include "org/frostlang/frostc/parser/Parser/AutoSyntaxHighlight.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/parser/Parser.h"
#include "org/frostlang/frostc/parser/SyntaxHighlighter/Kind.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/parser/SyntaxHighlighter.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight$class_type org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight$cleanup} };

typedef void (*$fn13)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn27)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x41\x75\x74\x6f\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74", 54, 2377941989154097530, NULL };

void org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight$init$org$frostlang$frostc$parser$Parser$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* param0, org$frostlang$frostc$parser$Parser* param1, org$frostlang$frostc$parser$SyntaxHighlighter$Kind param2) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/Parser.frost:22
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$parser$Parser** $tmp2 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$parser$Parser** $tmp4 = &param0->parser;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/Parser.frost:23
org$frostlang$frostc$parser$SyntaxHighlighter$Kind* $tmp5 = &param0->kind;
*$tmp5 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/Parser.frost:24
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp6 = &param1->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp7 = *$tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7 != NULL};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/Parser.frost:25
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp10 = &param1->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp11 = *$tmp10;
$fn13 $tmp12 = ($fn13) $tmp11->$class->vtable[3];
$tmp12($tmp11, param2);
goto block2;
block2:;
return;

}
void org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight$cleanup(org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/Parser.frost:31
org$frostlang$frostc$parser$Parser** $tmp14 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp15 = *$tmp14;
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp16 = &$tmp15->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp17 = *$tmp16;
frost$core$Bit $tmp18 = (frost$core$Bit) {$tmp17 != NULL};
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/Parser.frost:32
org$frostlang$frostc$parser$Parser** $tmp20 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp21 = *$tmp20;
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp22 = &$tmp21->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp23 = *$tmp22;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind* $tmp24 = &param0->kind;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp25 = *$tmp24;
$fn27 $tmp26 = ($fn27) $tmp23->$class->vtable[4];
$tmp26($tmp23, $tmp25);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/parser/Parser.frost:30
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$parser$Parser** $tmp28 = &param0->parser;
org$frostlang$frostc$parser$Parser* $tmp29 = *$tmp28;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
return;

}






