#include "org/frostlang/frostc/parser/Parser/AutoSyntaxHighlight.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/parser/Parser.h"
#include "org/frostlang/frostc/parser/SyntaxHighlighter/Kind.h"
#include "org/frostlang/frostc/parser/SyntaxHighlighter.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight$class_type org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight$cleanup} };

typedef void (*$fn2)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn5)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn6)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);
typedef void (*$fn9)(org$frostlang$frostc$parser$SyntaxHighlighter*, org$frostlang$frostc$parser$SyntaxHighlighter$Kind);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72\x2e\x41\x75\x74\x6f\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74", 54, 2377941989154097530, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 3564038086098955558, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72", 129, 4586254628416497089, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 12, 3564038086098955558, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72", 129, 4586254628416497089, NULL };

void org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight$init$org$frostlang$frostc$parser$Parser$org$frostlang$frostc$parser$SyntaxHighlighter$Kind(void* rawSelf, org$frostlang$frostc$parser$Parser* param1, org$frostlang$frostc$parser$SyntaxHighlighter$Kind param2) {
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* param0 = (org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$parser$Parser** _3;
org$frostlang$frostc$parser$Parser* _4;
frost$core$Object* _5;
org$frostlang$frostc$parser$Parser** _7;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind* _10;
org$frostlang$frostc$parser$SyntaxHighlighter** _13;
org$frostlang$frostc$parser$SyntaxHighlighter* _14;
bool _15;
frost$core$Bit _16;
bool _17;
org$frostlang$frostc$parser$SyntaxHighlighter** _20;
org$frostlang$frostc$parser$SyntaxHighlighter* _21;
bool _22;
frost$core$Bit _23;
bool _24;
frost$core$Int _26;
org$frostlang$frostc$parser$SyntaxHighlighter* _29;
$fn2 _30;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:22
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->parser;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->parser;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:23
_10 = &param0->kind;
*_10 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:24
_13 = &param1->syntaxHighlighter;
_14 = *_13;
_15 = _14 != NULL;
_16 = (frost$core$Bit) {_15};
_17 = _16.value;
if (_17) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:25
_20 = &param1->syntaxHighlighter;
_21 = *_20;
_22 = _21 != NULL;
_23 = (frost$core$Bit) {_22};
_24 = _23.value;
if (_24) goto block3; else goto block4;
block4:;
_26 = (frost$core$Int) {25u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3, _26, &$s4);
abort(); // unreachable
block3:;
_29 = _21;
_30 = ($fn5) _29->$class->vtable[3];
_30(_29, param2);
goto block2;
block2:;
return;

}
void org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight$cleanup(void* rawSelf) {
org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight* param0 = (org$frostlang$frostc$parser$Parser$AutoSyntaxHighlight*) rawSelf;

org$frostlang$frostc$parser$Parser** _1;
org$frostlang$frostc$parser$Parser* _2;
org$frostlang$frostc$parser$SyntaxHighlighter** _3;
org$frostlang$frostc$parser$SyntaxHighlighter* _4;
bool _5;
frost$core$Bit _6;
bool _7;
org$frostlang$frostc$parser$Parser** _10;
org$frostlang$frostc$parser$Parser* _11;
org$frostlang$frostc$parser$SyntaxHighlighter** _12;
org$frostlang$frostc$parser$SyntaxHighlighter* _13;
bool _14;
frost$core$Bit _15;
bool _16;
frost$core$Int _18;
org$frostlang$frostc$parser$SyntaxHighlighter* _21;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind* _22;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _23;
$fn6 _24;
frost$core$Object* _28;
org$frostlang$frostc$parser$Parser** _30;
org$frostlang$frostc$parser$Parser* _31;
frost$core$Object* _32;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:31
_1 = &param0->parser;
_2 = *_1;
_3 = &_2->syntaxHighlighter;
_4 = *_3;
_5 = _4 != NULL;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:32
_10 = &param0->parser;
_11 = *_10;
_12 = &_11->syntaxHighlighter;
_13 = *_12;
_14 = _13 != NULL;
_15 = (frost$core$Bit) {_14};
_16 = _15.value;
if (_16) goto block3; else goto block4;
block4:;
_18 = (frost$core$Int) {32u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s7, _18, &$s8);
abort(); // unreachable
block3:;
_21 = _13;
_22 = &param0->kind;
_23 = *_22;
_24 = ($fn9) _21->$class->vtable[4];
_24(_21, _23);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:30
_28 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_28);
_30 = &param0->parser;
_31 = *_30;
_32 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_32);
return;

}






