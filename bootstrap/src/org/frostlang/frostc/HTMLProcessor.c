#include "org/frostlang/frostc/HTMLProcessor.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/parser/Parser.h"
#include "frost/core/MutableString.h"
#include "org/frostlang/frostc/parser/SyntaxHighlighter/Kind.h"
#include "org/frostlang/frostc/Pair.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/parser/SyntaxHighlighter.h"
#include "frost/collections/Array.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Bit.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/parser/Token.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "frost/io/File.h"
#include "frost/core/Error.h"
#include "frost/threads/MessageQueue.h"
#include "frost/io/OutputStream.h"
#include "frost/core/Maybe.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/Immutable.h"
#include "org/frostlang/frostc/Compiler/Message.h"
#include "frost/io/Console.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/System.h"


static frost$core$String $s1;
org$frostlang$frostc$HTMLProcessor$class_type org$frostlang$frostc$HTMLProcessor$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$HTMLProcessor$cleanup, org$frostlang$frostc$HTMLProcessor$prettyPrint$org$frostlang$frostc$parser$Parser$R$frost$core$String, org$frostlang$frostc$HTMLProcessor$process$frost$io$File$frost$io$File$frost$core$String} };

typedef frost$collections$Iterator* (*$fn13)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn17)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn22)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn33)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn43)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn56)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn149)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn159)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn181)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn191)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn205)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn254)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn258)(frost$core$Object*);
typedef frost$core$Int64 (*$fn267)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn295)(frost$core$Object*);
typedef frost$core$Error* (*$fn349)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn359)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn373)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn386)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn399)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn408)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn418)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn428)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn438)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn448)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn458)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn470)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn479)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn489)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn499)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn509)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn519)(frost$io$OutputStream*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72", 34, 7665172691771292701, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x66\x72\x6f\x73\x74\x63\x6f\x64\x65\x22\x3e", 24, 965728039488327577, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6d\x6d\x65\x6e\x74\x22\x3e", 22, -1756050522877089685, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x22\x3e", 25, 4577563245309187979, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x22\x3e", 25, 6760721592980043958, NULL };
static frost$core$String $s89 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x4e\x61\x6d\x65\x22\x3e", 28, 5111374842590752150, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x74\x79\x70\x65\x22\x3e", 19, -6878895466207673670, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6b\x65\x79\x77\x6f\x72\x64\x22\x3e", 22, -1670481277391576067, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6e\x74\x72\x6f\x6c\x22\x3e", 22, -1756049386432501671, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x74\x65\x72\x61\x6c\x22\x3e", 22, -1659229352682266791, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x73\x74\x72\x69\x6e\x67\x22\x3e", 21, -198306892965556893, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6f\x70\x65\x72\x61\x74\x6f\x72\x22\x3e", 23, 1793793249967207580, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x61\x62\x65\x6c\x22\x3e", 20, 6207823968128210400, NULL };
static frost$core$String $s126 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, 825358356959104230, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x67\x74\x3b", 4, 144274317, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22", 13, -8467438715157355368, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22\x3e", 2, 13697, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static frost$core$String $s211 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static frost$core$String $s249 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s303 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x6e\x65\x4e\x75\x6d\x62\x65\x72\x22\x3e", 25, 2886294917360451169, NULL };
static frost$core$String $s305 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e\x20\x20", 9, 1748561594372514868, NULL };
static frost$core$String $s311 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s351 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x68\x74\x6d\x6c\x3e", 6, 1703069100160, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x3c\x68\x65\x61\x64\x3e", 8, 14294010361214289, NULL };
static frost$core$String $s369 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, 658568770330923109, NULL };
static frost$core$String $s371 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x66\x72\x6f\x73\x74\x2d\x6d\x61\x69\x6e\x2e\x63\x73\x73\x22\x20\x2f\x3e", 19, 3064929400175920806, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, 658568770330923109, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x66\x72\x6f\x73\x74\x2d\x73\x6f\x75\x72\x63\x65\x2e\x63\x73\x73\x22\x20\x2f\x3e", 21, 3133109499844102022, NULL };
static frost$core$String $s395 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, 658568770330923109, NULL };
static frost$core$String $s397 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x66\x72\x6f\x73\x74\x63\x6f\x64\x65\x2d\x6d\x6f\x6e\x6f\x6b\x61\x69\x2e\x63\x73\x73\x22\x20\x2f\x3e", 26, 3895617789714049510, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x3c\x2f\x68\x65\x61\x64\x3e", 9, 1443694447723190336, NULL };
static frost$core$String $s420 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x3c\x62\x6f\x64\x79\x3e", 8, 14294009747187617, NULL };
static frost$core$String $s430 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x64\x69\x76\x20\x69\x64\x3d\x22\x6d\x61\x69\x6e\x22\x3e", 19, 7391579857894992237, NULL };
static frost$core$String $s440 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x21\x2d\x2d\x54\x4f\x43\x42\x45\x47\x49\x4e\x2d\x2d\x3e\x3c\x21\x2d\x2d\x54\x4f\x43\x45\x4e\x44\x2d\x2d\x3e", 34, -1824120810441054265, NULL };
static frost$core$String $s450 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x64\x69\x76\x20\x69\x64\x3d\x22\x63\x6f\x6e\x74\x65\x6e\x74\x22\x3e", 24, -2483733496706816761, NULL };
static frost$core$String $s460 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20\x3c\x70\x72\x65\x3e\x3c\x63\x6f\x64\x65\x20\x63\x6c\x61\x73\x73\x3d\x22\x66\x72\x6f\x73\x74\x63\x6f\x64\x65\x22\x3e", 37, 1338010830594487803, NULL };
static frost$core$String $s481 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20\x3c\x2f\x63\x6f\x64\x65\x3e\x3c\x2f\x70\x72\x65\x3e", 21, 7252662077213941825, NULL };
static frost$core$String $s491 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x2f\x64\x69\x76\x3e", 12, -7275120926329646243, NULL };
static frost$core$String $s501 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x2f\x64\x69\x76\x3e", 10, -1763831739482883707, NULL };
static frost$core$String $s511 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x3c\x2f\x62\x6f\x64\x79\x3e", 9, 1443694447109163664, NULL };
static frost$core$String $s521 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x68\x74\x6d\x6c\x3e", 7, 171409661889807, NULL };

frost$core$String* org$frostlang$frostc$HTMLProcessor$prettyPrint$org$frostlang$frostc$parser$Parser$R$frost$core$String(org$frostlang$frostc$HTMLProcessor* param0, org$frostlang$frostc$parser$Parser* param1) {

frost$core$MutableString* local0 = NULL;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local1;
org$frostlang$frostc$Pair* local2 = NULL;
frost$core$MutableString* local3 = NULL;
// line 9
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp2 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp2, &$s3);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$core$MutableString* $tmp4 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
*(&local0) = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// line 10
frost$core$Int64 $tmp5 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp6 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp5);
*(&local1) = $tmp6;
// line 11
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp7 = &param1->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp8 = *$tmp7;
frost$collections$Array** $tmp9 = &$tmp8->tokens;
frost$collections$Array* $tmp10 = *$tmp9;
ITable* $tmp11 = ((frost$collections$Iterable*) $tmp10)->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp11 = $tmp11->next;
}
$fn13 $tmp12 = $tmp11->methods[0];
frost$collections$Iterator* $tmp14 = $tmp12(((frost$collections$Iterable*) $tmp10));
goto block1;
block1:;
ITable* $tmp15 = $tmp14->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp15 = $tmp15->next;
}
$fn17 $tmp16 = $tmp15->methods[0];
frost$core$Bit $tmp18 = $tmp16($tmp14);
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block3; else goto block2;
block2:;
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
ITable* $tmp20 = $tmp14->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp20 = $tmp20->next;
}
$fn22 $tmp21 = $tmp20->methods[1];
frost$core$Object* $tmp23 = $tmp21($tmp14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) $tmp23)));
org$frostlang$frostc$Pair* $tmp24 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
*(&local2) = ((org$frostlang$frostc$Pair*) $tmp23);
// line 12
org$frostlang$frostc$Pair* $tmp25 = *(&local2);
frost$core$Object** $tmp26 = &$tmp25->second;
frost$core$Object* $tmp27 = *$tmp26;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp28;
$tmp28 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp28->value = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp27)->value;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp29 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp30;
$tmp30 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp30->value = $tmp29;
ITable* $tmp31 = ((frost$core$Equatable*) $tmp28)->$class->itable;
while ($tmp31->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp31 = $tmp31->next;
}
$fn33 $tmp32 = $tmp31->methods[1];
frost$core$Bit $tmp34 = $tmp32(((frost$core$Equatable*) $tmp28), ((frost$core$Equatable*) $tmp30));
bool $tmp35 = $tmp34.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp30)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp28)));
if ($tmp35) goto block6; else goto block5;
block6:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp36 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp37;
$tmp37 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp37->value = $tmp36;
frost$core$Int64 $tmp38 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp39 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp38);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp40;
$tmp40 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp40->value = $tmp39;
ITable* $tmp41 = ((frost$core$Equatable*) $tmp37)->$class->itable;
while ($tmp41->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp41 = $tmp41->next;
}
$fn43 $tmp42 = $tmp41->methods[1];
frost$core$Bit $tmp44 = $tmp42(((frost$core$Equatable*) $tmp37), ((frost$core$Equatable*) $tmp40));
bool $tmp45 = $tmp44.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp40)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp37)));
if ($tmp45) goto block4; else goto block5;
block4:;
// line 13
frost$core$MutableString* $tmp46 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp46, &$s47);
goto block5;
block5:;
// line 15
org$frostlang$frostc$Pair* $tmp48 = *(&local2);
frost$core$Object** $tmp49 = &$tmp48->second;
frost$core$Object* $tmp50 = *$tmp49;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp51;
$tmp51 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp51->value = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp50)->value;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp52 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp53;
$tmp53 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp53->value = $tmp52;
ITable* $tmp54 = ((frost$core$Equatable*) $tmp51)->$class->itable;
while ($tmp54->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp54 = $tmp54->next;
}
$fn56 $tmp55 = $tmp54->methods[1];
frost$core$Bit $tmp57 = $tmp55(((frost$core$Equatable*) $tmp51), ((frost$core$Equatable*) $tmp53));
bool $tmp58 = $tmp57.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp53)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp51)));
if ($tmp58) goto block7; else goto block8;
block7:;
// line 16
org$frostlang$frostc$Pair* $tmp59 = *(&local2);
frost$core$Object** $tmp60 = &$tmp59->second;
frost$core$Object* $tmp61 = *$tmp60;
*(&local1) = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp61)->value;
// line 17
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp62 = *(&local1);
frost$core$Int64 $tmp63 = $tmp62.$rawValue;
frost$core$Int64 $tmp64 = (frost$core$Int64) {0};
frost$core$Bit $tmp65 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp63, $tmp64);
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block10; else goto block11;
block10:;
goto block9;
block11:;
frost$core$Int64 $tmp67 = (frost$core$Int64) {1};
frost$core$Bit $tmp68 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp63, $tmp67);
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp70 = (frost$core$Int64) {2};
frost$core$Bit $tmp71 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp63, $tmp70);
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block12; else goto block14;
block12:;
// line 22
frost$core$MutableString* $tmp73 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp73, &$s74);
goto block9;
block14:;
frost$core$Int64 $tmp75 = (frost$core$Int64) {3};
frost$core$Bit $tmp76 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp63, $tmp75);
bool $tmp77 = $tmp76.value;
if ($tmp77) goto block15; else goto block16;
block15:;
// line 25
frost$core$MutableString* $tmp78 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp78, &$s79);
goto block9;
block16:;
frost$core$Int64 $tmp80 = (frost$core$Int64) {4};
frost$core$Bit $tmp81 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp63, $tmp80);
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block17; else goto block18;
block17:;
// line 28
frost$core$MutableString* $tmp83 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp83, &$s84);
goto block9;
block18:;
frost$core$Int64 $tmp85 = (frost$core$Int64) {5};
frost$core$Bit $tmp86 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp63, $tmp85);
bool $tmp87 = $tmp86.value;
if ($tmp87) goto block19; else goto block20;
block19:;
// line 31
frost$core$MutableString* $tmp88 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp88, &$s89);
goto block9;
block20:;
frost$core$Int64 $tmp90 = (frost$core$Int64) {6};
frost$core$Bit $tmp91 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp63, $tmp90);
bool $tmp92 = $tmp91.value;
if ($tmp92) goto block21; else goto block22;
block21:;
// line 34
frost$core$MutableString* $tmp93 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp93, &$s94);
goto block9;
block22:;
frost$core$Int64 $tmp95 = (frost$core$Int64) {7};
frost$core$Bit $tmp96 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp63, $tmp95);
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block23; else goto block24;
block23:;
// line 37
frost$core$MutableString* $tmp98 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp98, &$s99);
goto block9;
block24:;
frost$core$Int64 $tmp100 = (frost$core$Int64) {8};
frost$core$Bit $tmp101 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp63, $tmp100);
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block25; else goto block26;
block25:;
// line 40
frost$core$MutableString* $tmp103 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp103, &$s104);
goto block9;
block26:;
frost$core$Int64 $tmp105 = (frost$core$Int64) {9};
frost$core$Bit $tmp106 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp63, $tmp105);
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block27; else goto block28;
block27:;
// line 43
frost$core$MutableString* $tmp108 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp108, &$s109);
goto block9;
block28:;
frost$core$Int64 $tmp110 = (frost$core$Int64) {10};
frost$core$Bit $tmp111 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp63, $tmp110);
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block29; else goto block30;
block29:;
// line 46
frost$core$MutableString* $tmp113 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp113, &$s114);
goto block9;
block30:;
frost$core$Int64 $tmp115 = (frost$core$Int64) {11};
frost$core$Bit $tmp116 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp63, $tmp115);
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block31; else goto block32;
block31:;
// line 49
frost$core$MutableString* $tmp118 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp118, &$s119);
goto block9;
block32:;
frost$core$Int64 $tmp120 = (frost$core$Int64) {12};
frost$core$Bit $tmp121 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp63, $tmp120);
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block33; else goto block34;
block33:;
// line 52
frost$core$MutableString* $tmp123 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp123, &$s124);
goto block9;
block34:;
// line 55
frost$core$Int64 $tmp125 = (frost$core$Int64) {55};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s126, $tmp125);
abort(); // unreachable
block9:;
goto block8;
block8:;
// line 59
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp127 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Pair* $tmp128 = *(&local2);
frost$core$Object** $tmp129 = &$tmp128->first;
frost$core$Object* $tmp130 = *$tmp129;
frost$core$String* $tmp131 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param1, ((org$frostlang$frostc$parser$Token$wrapper*) $tmp130)->value);
frost$core$MutableString$init$frost$core$String($tmp127, $tmp131);
*(&local3) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
frost$core$MutableString* $tmp132 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
*(&local3) = $tmp127;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
// line 60
frost$core$MutableString* $tmp133 = *(&local3);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp133, &$s134, &$s135);
// line 61
frost$core$MutableString* $tmp136 = *(&local3);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp136, &$s137, &$s138);
// line 62
frost$core$MutableString* $tmp139 = *(&local3);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp139, &$s140, &$s141);
// line 63
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp142 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp143;
$tmp143 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp143->value = $tmp142;
frost$core$Int64 $tmp144 = (frost$core$Int64) {1};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp145 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp144);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp146;
$tmp146 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp146->value = $tmp145;
ITable* $tmp147 = ((frost$core$Equatable*) $tmp143)->$class->itable;
while ($tmp147->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp147 = $tmp147->next;
}
$fn149 $tmp148 = $tmp147->methods[1];
frost$core$Bit $tmp150 = $tmp148(((frost$core$Equatable*) $tmp143), ((frost$core$Equatable*) $tmp146));
bool $tmp151 = $tmp150.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp146)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp143)));
if ($tmp151) goto block37; else goto block36;
block37:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp152 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp153;
$tmp153 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp153->value = $tmp152;
frost$core$Int64 $tmp154 = (frost$core$Int64) {2};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp155 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp154);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp156;
$tmp156 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp156->value = $tmp155;
ITable* $tmp157 = ((frost$core$Equatable*) $tmp153)->$class->itable;
while ($tmp157->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp157 = $tmp157->next;
}
$fn159 $tmp158 = $tmp157->methods[1];
frost$core$Bit $tmp160 = $tmp158(((frost$core$Equatable*) $tmp153), ((frost$core$Equatable*) $tmp156));
bool $tmp161 = $tmp160.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp156)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp153)));
if ($tmp161) goto block35; else goto block36;
block35:;
// line 65
frost$core$MutableString* $tmp162 = *(&local0);
org$frostlang$frostc$Pair* $tmp163 = *(&local2);
frost$core$Object** $tmp164 = &$tmp163->first;
frost$core$Object* $tmp165 = *$tmp164;
org$frostlang$frostc$parser$Token$Kind $tmp166 = ((org$frostlang$frostc$parser$Token$wrapper*) $tmp165)->value.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp167;
$tmp167 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp167->value = $tmp166;
frost$core$String* $tmp168 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s169, ((frost$core$Object*) $tmp167));
frost$core$String* $tmp170 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp168, &$s171);
frost$core$MutableString$append$frost$core$String($tmp162, $tmp170);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
goto block36;
block36:;
// line 67
frost$core$MutableString* $tmp172 = *(&local0);
frost$core$MutableString* $tmp173 = *(&local3);
frost$core$MutableString$append$frost$core$Object($tmp172, ((frost$core$Object*) $tmp173));
// line 68
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp174 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp175;
$tmp175 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp175->value = $tmp174;
frost$core$Int64 $tmp176 = (frost$core$Int64) {1};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp177 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp176);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp178;
$tmp178 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp178->value = $tmp177;
ITable* $tmp179 = ((frost$core$Equatable*) $tmp175)->$class->itable;
while ($tmp179->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp179 = $tmp179->next;
}
$fn181 $tmp180 = $tmp179->methods[1];
frost$core$Bit $tmp182 = $tmp180(((frost$core$Equatable*) $tmp175), ((frost$core$Equatable*) $tmp178));
bool $tmp183 = $tmp182.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp178)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp175)));
if ($tmp183) goto block40; else goto block39;
block40:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp184 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp185;
$tmp185 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp185->value = $tmp184;
frost$core$Int64 $tmp186 = (frost$core$Int64) {2};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp187 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp186);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp188;
$tmp188 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp188->value = $tmp187;
ITable* $tmp189 = ((frost$core$Equatable*) $tmp185)->$class->itable;
while ($tmp189->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp189 = $tmp189->next;
}
$fn191 $tmp190 = $tmp189->methods[1];
frost$core$Bit $tmp192 = $tmp190(((frost$core$Equatable*) $tmp185), ((frost$core$Equatable*) $tmp188));
bool $tmp193 = $tmp192.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp188)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp185)));
if ($tmp193) goto block38; else goto block39;
block38:;
// line 70
frost$core$MutableString* $tmp194 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp194, &$s195);
goto block39;
block39:;
frost$core$MutableString* $tmp196 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
*(&local3) = ((frost$core$MutableString*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp23);
org$frostlang$frostc$Pair* $tmp197 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
// line 73
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp198 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp199;
$tmp199 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp199->value = $tmp198;
frost$core$Int64 $tmp200 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp201 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp200);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp202;
$tmp202 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp202->value = $tmp201;
ITable* $tmp203 = ((frost$core$Equatable*) $tmp199)->$class->itable;
while ($tmp203->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp203 = $tmp203->next;
}
$fn205 $tmp204 = $tmp203->methods[1];
frost$core$Bit $tmp206 = $tmp204(((frost$core$Equatable*) $tmp199), ((frost$core$Equatable*) $tmp202));
bool $tmp207 = $tmp206.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp202)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp199)));
if ($tmp207) goto block41; else goto block42;
block41:;
// line 74
frost$core$MutableString* $tmp208 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp208, &$s209);
goto block42;
block42:;
// line 76
frost$core$MutableString* $tmp210 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp210, &$s211);
// line 77
frost$core$MutableString* $tmp212 = *(&local0);
frost$core$String* $tmp213 = frost$core$MutableString$finish$R$frost$core$String($tmp212);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
frost$core$MutableString* $tmp214 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp213;

}
void org$frostlang$frostc$HTMLProcessor$process$frost$io$File$frost$io$File$frost$core$String(org$frostlang$frostc$HTMLProcessor* param0, frost$io$File* param1, frost$io$File* param2, frost$core$String* param3) {

frost$core$Error* local0 = NULL;
frost$threads$MessageQueue* local1 = NULL;
org$frostlang$frostc$parser$Parser* local2 = NULL;
frost$collections$Array* local3 = NULL;
frost$core$Int64 local4;
frost$core$MutableString* local5 = NULL;
frost$core$Int64 local6;
frost$core$String* local7 = NULL;
frost$io$OutputStream* local8 = NULL;
// line 81
*(&local0) = ((frost$core$Error*) NULL);
// line 82
FROST_ASSERT(56 == sizeof(frost$threads$MessageQueue));
frost$threads$MessageQueue* $tmp215 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp215);
*(&local1) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
frost$threads$MessageQueue* $tmp216 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
*(&local1) = $tmp215;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
// line 83
FROST_ASSERT(96 == sizeof(org$frostlang$frostc$parser$Parser));
org$frostlang$frostc$parser$Parser* $tmp217 = (org$frostlang$frostc$parser$Parser*) frostObjectAlloc(96, (frost$core$Class*) &org$frostlang$frostc$parser$Parser$class);
frost$threads$MessageQueue* $tmp218 = *(&local1);
org$frostlang$frostc$parser$Parser$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Message$GT($tmp217, $tmp218);
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
org$frostlang$frostc$parser$Parser* $tmp219 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
*(&local2) = $tmp217;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
// line 84
org$frostlang$frostc$parser$Parser* $tmp220 = *(&local2);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$parser$SyntaxHighlighter));
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp221 = (org$frostlang$frostc$parser$SyntaxHighlighter*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$class);
org$frostlang$frostc$parser$SyntaxHighlighter$init($tmp221);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp222 = &$tmp220->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp223 = *$tmp222;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp224 = &$tmp220->syntaxHighlighter;
*$tmp224 = $tmp221;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
// line 85
org$frostlang$frostc$parser$Parser* $tmp225 = *(&local2);
frost$core$Maybe* $tmp226 = frost$io$File$readFully$R$frost$core$Maybe$LTfrost$core$String$GT(param1);
frost$core$Int64* $tmp227 = &$tmp226->$rawValue;
frost$core$Int64 $tmp228 = *$tmp227;
int64_t $tmp229 = $tmp228.value;
bool $tmp230 = $tmp229 == 0;
if ($tmp230) goto block3; else goto block4;
block4:;
frost$core$Error** $tmp231 = (frost$core$Error**) ($tmp226->$data + 0);
frost$core$Error* $tmp232 = *$tmp231;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
*(&local0) = $tmp232;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
org$frostlang$frostc$parser$Parser* $tmp233 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp234 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block3:;
frost$core$Object** $tmp235 = (frost$core$Object**) ($tmp226->$data + 0);
frost$core$Object* $tmp236 = *$tmp235;
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$String($tmp225, param1, ((frost$core$String*) $tmp236));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
// line 86
org$frostlang$frostc$parser$Parser* $tmp237 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp238 = org$frostlang$frostc$parser$Parser$file$R$org$frostlang$frostc$ASTNode$Q($tmp237);
frost$core$Bit $tmp239 = frost$core$Bit$init$builtin_bit($tmp238 == NULL);
bool $tmp240 = $tmp239.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
if ($tmp240) goto block5; else goto block6;
block5:;
// line 87
goto block7;
block7:;
frost$threads$MessageQueue* $tmp241 = *(&local1);
frost$core$Bit $tmp242 = frost$threads$MessageQueue$hasMessage$R$frost$core$Bit($tmp241);
bool $tmp243 = $tmp242.value;
if ($tmp243) goto block8; else goto block9;
block8:;
// line 88
frost$threads$MessageQueue* $tmp244 = *(&local1);
frost$core$Immutable* $tmp245 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp244);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Message*) $tmp245)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
goto block7;
block9:;
goto block6;
block6:;
// line 91
org$frostlang$frostc$parser$Parser* $tmp246 = *(&local2);
frost$core$String* $tmp247 = org$frostlang$frostc$HTMLProcessor$prettyPrint$org$frostlang$frostc$parser$Parser$R$frost$core$String(param0, $tmp246);
frost$collections$Array* $tmp248 = frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT($tmp247, &$s249);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
frost$collections$Array* $tmp250 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
*(&local3) = $tmp248;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
// line 92
frost$collections$Array* $tmp251 = *(&local3);
ITable* $tmp252 = ((frost$collections$CollectionView*) $tmp251)->$class->itable;
while ($tmp252->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp252 = $tmp252->next;
}
$fn254 $tmp253 = $tmp252->methods[0];
frost$core$Int64 $tmp255 = $tmp253(((frost$collections$CollectionView*) $tmp251));
frost$core$Int64$wrapper* $tmp256;
$tmp256 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp256->value = $tmp255;
$fn258 $tmp257 = ($fn258) ((frost$core$Object*) $tmp256)->$class->vtable[0];
frost$core$String* $tmp259 = $tmp257(((frost$core$Object*) $tmp256));
frost$core$Int64 $tmp260 = frost$core$String$get_length$R$frost$core$Int64($tmp259);
*(&local4) = $tmp260;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
// line 93
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp261 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp261);
*(&local5) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
frost$core$MutableString* $tmp262 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
*(&local5) = $tmp261;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
// line 94
frost$core$Int64 $tmp263 = (frost$core$Int64) {0};
frost$collections$Array* $tmp264 = *(&local3);
ITable* $tmp265 = ((frost$collections$CollectionView*) $tmp264)->$class->itable;
while ($tmp265->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp265 = $tmp265->next;
}
$fn267 $tmp266 = $tmp265->methods[0];
frost$core$Int64 $tmp268 = $tmp266(((frost$collections$CollectionView*) $tmp264));
frost$core$Bit $tmp269 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp270 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp263, $tmp268, $tmp269);
frost$core$Int64 $tmp271 = $tmp270.min;
*(&local6) = $tmp271;
frost$core$Int64 $tmp272 = $tmp270.max;
frost$core$Bit $tmp273 = $tmp270.inclusive;
bool $tmp274 = $tmp273.value;
frost$core$Int64 $tmp275 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp276 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp275);
if ($tmp274) goto block13; else goto block14;
block13:;
int64_t $tmp277 = $tmp271.value;
int64_t $tmp278 = $tmp272.value;
bool $tmp279 = $tmp277 <= $tmp278;
frost$core$Bit $tmp280 = (frost$core$Bit) {$tmp279};
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block10; else goto block11;
block14:;
int64_t $tmp282 = $tmp271.value;
int64_t $tmp283 = $tmp272.value;
bool $tmp284 = $tmp282 < $tmp283;
frost$core$Bit $tmp285 = (frost$core$Bit) {$tmp284};
bool $tmp286 = $tmp285.value;
if ($tmp286) goto block10; else goto block11;
block10:;
// line 95
frost$core$Int64 $tmp287 = *(&local6);
frost$core$Int64 $tmp288 = (frost$core$Int64) {1};
int64_t $tmp289 = $tmp287.value;
int64_t $tmp290 = $tmp288.value;
int64_t $tmp291 = $tmp289 + $tmp290;
frost$core$Int64 $tmp292 = (frost$core$Int64) {$tmp291};
frost$core$Int64$wrapper* $tmp293;
$tmp293 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp293->value = $tmp292;
$fn295 $tmp294 = ($fn295) ((frost$core$Object*) $tmp293)->$class->vtable[0];
frost$core$String* $tmp296 = $tmp294(((frost$core$Object*) $tmp293));
frost$core$Int64 $tmp297 = *(&local4);
frost$core$String* $tmp298 = frost$core$String$rightAlign$frost$core$Int64$R$frost$core$String($tmp296, $tmp297);
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
frost$core$String* $tmp299 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
*(&local7) = $tmp298;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
// line 96
frost$core$MutableString* $tmp300 = *(&local5);
frost$core$String* $tmp301 = *(&local7);
frost$core$String* $tmp302 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s303, $tmp301);
frost$core$String* $tmp304 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp302, &$s305);
frost$collections$Array* $tmp306 = *(&local3);
frost$core$Int64 $tmp307 = *(&local6);
frost$core$Object* $tmp308 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp306, $tmp307);
frost$core$String* $tmp309 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp304, ((frost$core$String*) $tmp308));
frost$core$String* $tmp310 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp309, &$s311);
frost$core$MutableString$append$frost$core$String($tmp300, $tmp310);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
frost$core$Frost$unref$frost$core$Object$Q($tmp308);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
frost$core$String* $tmp312 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
*(&local7) = ((frost$core$String*) NULL);
goto block12;
block12:;
frost$core$Int64 $tmp313 = *(&local6);
int64_t $tmp314 = $tmp272.value;
int64_t $tmp315 = $tmp313.value;
int64_t $tmp316 = $tmp314 - $tmp315;
frost$core$Int64 $tmp317 = (frost$core$Int64) {$tmp316};
frost$core$UInt64 $tmp318 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp317);
if ($tmp274) goto block16; else goto block17;
block16:;
uint64_t $tmp319 = $tmp318.value;
uint64_t $tmp320 = $tmp276.value;
bool $tmp321 = $tmp319 >= $tmp320;
frost$core$Bit $tmp322 = (frost$core$Bit) {$tmp321};
bool $tmp323 = $tmp322.value;
if ($tmp323) goto block15; else goto block11;
block17:;
uint64_t $tmp324 = $tmp318.value;
uint64_t $tmp325 = $tmp276.value;
bool $tmp326 = $tmp324 > $tmp325;
frost$core$Bit $tmp327 = (frost$core$Bit) {$tmp326};
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block15; else goto block11;
block15:;
int64_t $tmp329 = $tmp313.value;
int64_t $tmp330 = $tmp275.value;
int64_t $tmp331 = $tmp329 + $tmp330;
frost$core$Int64 $tmp332 = (frost$core$Int64) {$tmp331};
*(&local6) = $tmp332;
goto block10;
block11:;
// line 98
frost$core$Maybe* $tmp333 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT(param2);
frost$core$Int64* $tmp334 = &$tmp333->$rawValue;
frost$core$Int64 $tmp335 = *$tmp334;
int64_t $tmp336 = $tmp335.value;
bool $tmp337 = $tmp336 == 0;
if ($tmp337) goto block18; else goto block19;
block19:;
frost$core$Error** $tmp338 = (frost$core$Error**) ($tmp333->$data + 0);
frost$core$Error* $tmp339 = *$tmp338;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
*(&local0) = $tmp339;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
frost$core$MutableString* $tmp340 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp341 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp342 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp343 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block18:;
frost$core$Object** $tmp344 = (frost$core$Object**) ($tmp333->$data + 0);
frost$core$Object* $tmp345 = *$tmp344;
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$OutputStream*) $tmp345)));
frost$io$OutputStream* $tmp346 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
*(&local8) = ((frost$io$OutputStream*) $tmp345);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
// line 99
frost$io$OutputStream* $tmp347 = *(&local8);
$fn349 $tmp348 = ($fn349) $tmp347->$class->vtable[19];
frost$core$Error* $tmp350 = $tmp348($tmp347, &$s351);
if ($tmp350 == NULL) goto block20; else goto block21;
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
*(&local0) = $tmp350;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
frost$io$OutputStream* $tmp352 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp353 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp354 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp355 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp356 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
// line 100
frost$io$OutputStream* $tmp357 = *(&local8);
$fn359 $tmp358 = ($fn359) $tmp357->$class->vtable[19];
frost$core$Error* $tmp360 = $tmp358($tmp357, &$s361);
if ($tmp360 == NULL) goto block22; else goto block23;
block23:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
*(&local0) = $tmp360;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
frost$io$OutputStream* $tmp362 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp363 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp364 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp365 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp366 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
// line 101
frost$io$OutputStream* $tmp367 = *(&local8);
frost$core$String* $tmp368 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s369, param3);
frost$core$String* $tmp370 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp368, &$s371);
$fn373 $tmp372 = ($fn373) $tmp367->$class->vtable[19];
frost$core$Error* $tmp374 = $tmp372($tmp367, $tmp370);
if ($tmp374 == NULL) goto block24; else goto block25;
block25:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
*(&local0) = $tmp374;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
frost$io$OutputStream* $tmp375 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp376 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp377 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp377));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp378 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp379 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block24:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
// line 102
frost$io$OutputStream* $tmp380 = *(&local8);
frost$core$String* $tmp381 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s382, param3);
frost$core$String* $tmp383 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp381, &$s384);
$fn386 $tmp385 = ($fn386) $tmp380->$class->vtable[19];
frost$core$Error* $tmp387 = $tmp385($tmp380, $tmp383);
if ($tmp387 == NULL) goto block26; else goto block27;
block27:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
*(&local0) = $tmp387;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
frost$io$OutputStream* $tmp388 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp389 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp390 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp391 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp392 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block26:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
// line 103
frost$io$OutputStream* $tmp393 = *(&local8);
frost$core$String* $tmp394 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s395, param3);
frost$core$String* $tmp396 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp394, &$s397);
$fn399 $tmp398 = ($fn399) $tmp393->$class->vtable[19];
frost$core$Error* $tmp400 = $tmp398($tmp393, $tmp396);
if ($tmp400 == NULL) goto block28; else goto block29;
block29:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
*(&local0) = $tmp400;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
frost$io$OutputStream* $tmp401 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp402 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp403 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp404 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp405 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block28:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
// line 104
frost$io$OutputStream* $tmp406 = *(&local8);
$fn408 $tmp407 = ($fn408) $tmp406->$class->vtable[19];
frost$core$Error* $tmp409 = $tmp407($tmp406, &$s410);
if ($tmp409 == NULL) goto block30; else goto block31;
block31:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
*(&local0) = $tmp409;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
frost$io$OutputStream* $tmp411 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp412 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp413 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp414 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp415 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block30:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
// line 105
frost$io$OutputStream* $tmp416 = *(&local8);
$fn418 $tmp417 = ($fn418) $tmp416->$class->vtable[19];
frost$core$Error* $tmp419 = $tmp417($tmp416, &$s420);
if ($tmp419 == NULL) goto block32; else goto block33;
block33:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
*(&local0) = $tmp419;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
frost$io$OutputStream* $tmp421 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp422 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp423 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp423));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp424 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp425 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block32:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
// line 106
frost$io$OutputStream* $tmp426 = *(&local8);
$fn428 $tmp427 = ($fn428) $tmp426->$class->vtable[19];
frost$core$Error* $tmp429 = $tmp427($tmp426, &$s430);
if ($tmp429 == NULL) goto block34; else goto block35;
block35:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
*(&local0) = $tmp429;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
frost$io$OutputStream* $tmp431 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp432 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp433 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp434 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp435 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block34:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
// line 107
frost$io$OutputStream* $tmp436 = *(&local8);
$fn438 $tmp437 = ($fn438) $tmp436->$class->vtable[19];
frost$core$Error* $tmp439 = $tmp437($tmp436, &$s440);
if ($tmp439 == NULL) goto block36; else goto block37;
block37:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
*(&local0) = $tmp439;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
frost$io$OutputStream* $tmp441 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp442 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp443 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp443));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp444 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp445 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block36:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
// line 108
frost$io$OutputStream* $tmp446 = *(&local8);
$fn448 $tmp447 = ($fn448) $tmp446->$class->vtable[19];
frost$core$Error* $tmp449 = $tmp447($tmp446, &$s450);
if ($tmp449 == NULL) goto block38; else goto block39;
block39:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
*(&local0) = $tmp449;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
frost$io$OutputStream* $tmp451 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp452 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp453 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp454 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp455 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block38:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
// line 109
frost$io$OutputStream* $tmp456 = *(&local8);
$fn458 $tmp457 = ($fn458) $tmp456->$class->vtable[19];
frost$core$Error* $tmp459 = $tmp457($tmp456, &$s460);
if ($tmp459 == NULL) goto block40; else goto block41;
block41:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
*(&local0) = $tmp459;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
frost$io$OutputStream* $tmp461 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp462 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp462));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp463 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp464 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp465 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block40:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
// line 110
frost$io$OutputStream* $tmp466 = *(&local8);
frost$core$MutableString* $tmp467 = *(&local5);
frost$core$String* $tmp468 = frost$core$MutableString$finish$R$frost$core$String($tmp467);
$fn470 $tmp469 = ($fn470) $tmp466->$class->vtable[17];
frost$core$Error* $tmp471 = $tmp469($tmp466, $tmp468);
if ($tmp471 == NULL) goto block42; else goto block43;
block43:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
*(&local0) = $tmp471;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
frost$io$OutputStream* $tmp472 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp473 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp474 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp475 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp476 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block42:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
// line 111
frost$io$OutputStream* $tmp477 = *(&local8);
$fn479 $tmp478 = ($fn479) $tmp477->$class->vtable[19];
frost$core$Error* $tmp480 = $tmp478($tmp477, &$s481);
if ($tmp480 == NULL) goto block44; else goto block45;
block45:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
*(&local0) = $tmp480;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
frost$io$OutputStream* $tmp482 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp483 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp484 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp485 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp486 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block44:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
// line 112
frost$io$OutputStream* $tmp487 = *(&local8);
$fn489 $tmp488 = ($fn489) $tmp487->$class->vtable[19];
frost$core$Error* $tmp490 = $tmp488($tmp487, &$s491);
if ($tmp490 == NULL) goto block46; else goto block47;
block47:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
*(&local0) = $tmp490;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
frost$io$OutputStream* $tmp492 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp493 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp494 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp495 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp496 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block46:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
// line 113
frost$io$OutputStream* $tmp497 = *(&local8);
$fn499 $tmp498 = ($fn499) $tmp497->$class->vtable[19];
frost$core$Error* $tmp500 = $tmp498($tmp497, &$s501);
if ($tmp500 == NULL) goto block48; else goto block49;
block49:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
*(&local0) = $tmp500;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
frost$io$OutputStream* $tmp502 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp503 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp504 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp505 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp506 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block48:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
// line 114
frost$io$OutputStream* $tmp507 = *(&local8);
$fn509 $tmp508 = ($fn509) $tmp507->$class->vtable[19];
frost$core$Error* $tmp510 = $tmp508($tmp507, &$s511);
if ($tmp510 == NULL) goto block50; else goto block51;
block51:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
*(&local0) = $tmp510;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
frost$io$OutputStream* $tmp512 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp513 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp514 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp515 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp516 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block50:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
// line 115
frost$io$OutputStream* $tmp517 = *(&local8);
$fn519 $tmp518 = ($fn519) $tmp517->$class->vtable[19];
frost$core$Error* $tmp520 = $tmp518($tmp517, &$s521);
if ($tmp520 == NULL) goto block52; else goto block53;
block53:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
*(&local0) = $tmp520;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
frost$io$OutputStream* $tmp522 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp523 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp524 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp525 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp526 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block52:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
frost$io$OutputStream* $tmp527 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp528 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp529 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp530 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp531 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block2;
block1:;
// line 118
frost$core$Error* $tmp532 = *(&local0);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp532));
// line 119
frost$core$Int64 $tmp533 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp533);
goto block2;
block2:;
frost$core$Error* $tmp534 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$HTMLProcessor$init(org$frostlang$frostc$HTMLProcessor* param0) {

return;

}
void org$frostlang$frostc$HTMLProcessor$cleanup(org$frostlang$frostc$HTMLProcessor* param0) {

// line 6
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

