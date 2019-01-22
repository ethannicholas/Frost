#include "org/frostlang/frostc/HTMLProcessor.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/parser/Parser.h"
#include "frost/core/MutableString.h"
#include "org/frostlang/frostc/parser/SyntaxHighlighter/Kind.h"
#include "org/frostlang/frostc/Pair.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/parser/SyntaxHighlighter.h"
#include "frost/collections/Array.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
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
#include "org/frostlang/frostc/Compiler/ErrorMsg.h"
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
typedef frost$core$Bit (*$fn57)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn152)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn162)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn185)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn195)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn210)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn259)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn263)(frost$core$Object*);
typedef frost$core$Int64 (*$fn272)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn300)(frost$core$Object*);
typedef frost$core$Error* (*$fn354)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn364)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn378)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn391)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn404)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn413)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn423)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn433)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn443)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn453)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn463)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn475)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn484)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn494)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn504)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn514)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn524)(frost$io$OutputStream*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72", 34, 7665172691771292701, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x66\x72\x6f\x73\x74\x63\x6f\x64\x65\x22\x3e", 24, 965728039488327577, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6d\x6d\x65\x6e\x74\x22\x3e", 22, -1756050522877089685, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x22\x3e", 25, 4577563245309187979, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x22\x3e", 25, 6760721592980043958, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x4e\x61\x6d\x65\x22\x3e", 28, 5111374842590752150, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x74\x79\x70\x65\x22\x3e", 19, -6878895466207673670, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6b\x65\x79\x77\x6f\x72\x64\x22\x3e", 22, -1670481277391576067, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6e\x74\x72\x6f\x6c\x22\x3e", 22, -1756049386432501671, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x74\x65\x72\x61\x6c\x22\x3e", 22, -1659229352682266791, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x73\x74\x72\x69\x6e\x67\x22\x3e", 21, -198306892965556893, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6f\x70\x65\x72\x61\x74\x6f\x72\x22\x3e", 23, 1793793249967207580, NULL };
static frost$core$String $s125 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x61\x62\x65\x6c\x22\x3e", 20, 6207823968128210400, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, 825358356959104230, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x67\x74\x3b", 4, 144274317, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22", 13, -8467438715157355368, NULL };
static frost$core$String $s175 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22\x3e", 2, 13697, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static frost$core$String $s254 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s308 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x6e\x65\x4e\x75\x6d\x62\x65\x72\x22\x3e", 25, 2886294917360451169, NULL };
static frost$core$String $s310 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e\x20\x20", 9, 1748561594372514868, NULL };
static frost$core$String $s316 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s356 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x68\x74\x6d\x6c\x3e", 6, 1703069100160, NULL };
static frost$core$String $s366 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x3c\x68\x65\x61\x64\x3e", 8, 14294010361214289, NULL };
static frost$core$String $s374 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, 658568770330923109, NULL };
static frost$core$String $s376 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x66\x72\x6f\x73\x74\x2d\x6d\x61\x69\x6e\x2e\x63\x73\x73\x22\x20\x2f\x3e", 19, 3064929400175920806, NULL };
static frost$core$String $s387 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, 658568770330923109, NULL };
static frost$core$String $s389 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x66\x72\x6f\x73\x74\x2d\x73\x6f\x75\x72\x63\x65\x2e\x63\x73\x73\x22\x20\x2f\x3e", 21, 3133109499844102022, NULL };
static frost$core$String $s400 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, 658568770330923109, NULL };
static frost$core$String $s402 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x66\x72\x6f\x73\x74\x63\x6f\x64\x65\x2d\x6d\x6f\x6e\x6f\x6b\x61\x69\x2e\x63\x73\x73\x22\x20\x2f\x3e", 26, 3895617789714049510, NULL };
static frost$core$String $s415 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x3c\x2f\x68\x65\x61\x64\x3e", 9, 1443694447723190336, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x3c\x62\x6f\x64\x79\x3e", 8, 14294009747187617, NULL };
static frost$core$String $s435 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x64\x69\x76\x20\x69\x64\x3d\x22\x6d\x61\x69\x6e\x22\x3e", 19, 7391579857894992237, NULL };
static frost$core$String $s445 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x21\x2d\x2d\x54\x4f\x43\x42\x45\x47\x49\x4e\x2d\x2d\x3e\x3c\x21\x2d\x2d\x54\x4f\x43\x45\x4e\x44\x2d\x2d\x3e", 34, -1824120810441054265, NULL };
static frost$core$String $s455 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x64\x69\x76\x20\x69\x64\x3d\x22\x63\x6f\x6e\x74\x65\x6e\x74\x22\x3e", 24, -2483733496706816761, NULL };
static frost$core$String $s465 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20\x3c\x70\x72\x65\x3e\x3c\x63\x6f\x64\x65\x20\x63\x6c\x61\x73\x73\x3d\x22\x66\x72\x6f\x73\x74\x63\x6f\x64\x65\x22\x3e", 37, 1338010830594487803, NULL };
static frost$core$String $s486 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20\x3c\x2f\x63\x6f\x64\x65\x3e\x3c\x2f\x70\x72\x65\x3e", 21, 7252662077213941825, NULL };
static frost$core$String $s496 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x2f\x64\x69\x76\x3e", 12, -7275120926329646243, NULL };
static frost$core$String $s506 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x2f\x64\x69\x76\x3e", 10, -1763831739482883707, NULL };
static frost$core$String $s516 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x3c\x2f\x62\x6f\x64\x79\x3e", 9, 1443694447109163664, NULL };
static frost$core$String $s526 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x68\x74\x6d\x6c\x3e", 7, 171409661889807, NULL };

frost$core$String* org$frostlang$frostc$HTMLProcessor$prettyPrint$org$frostlang$frostc$parser$Parser$R$frost$core$String(org$frostlang$frostc$HTMLProcessor* param0, org$frostlang$frostc$parser$Parser* param1) {

frost$core$MutableString* local0 = NULL;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local1;
org$frostlang$frostc$Pair* local2 = NULL;
frost$core$Bit local3;
frost$core$MutableString* local4 = NULL;
frost$core$Bit local5;
frost$core$Bit local6;
// line 9
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
if ($tmp35) goto block6; else goto block7;
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp40)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp37)));
*(&local3) = $tmp44;
goto block8;
block7:;
*(&local3) = $tmp34;
goto block8;
block8:;
frost$core$Bit $tmp45 = *(&local3);
bool $tmp46 = $tmp45.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp30)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp28)));
if ($tmp46) goto block4; else goto block5;
block4:;
// line 13
frost$core$MutableString* $tmp47 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp47, &$s48);
goto block5;
block5:;
// line 15
org$frostlang$frostc$Pair* $tmp49 = *(&local2);
frost$core$Object** $tmp50 = &$tmp49->second;
frost$core$Object* $tmp51 = *$tmp50;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp52;
$tmp52 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp52->value = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp51)->value;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp53 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp54;
$tmp54 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp54->value = $tmp53;
ITable* $tmp55 = ((frost$core$Equatable*) $tmp52)->$class->itable;
while ($tmp55->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp55 = $tmp55->next;
}
$fn57 $tmp56 = $tmp55->methods[1];
frost$core$Bit $tmp58 = $tmp56(((frost$core$Equatable*) $tmp52), ((frost$core$Equatable*) $tmp54));
bool $tmp59 = $tmp58.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp54)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp52)));
if ($tmp59) goto block9; else goto block10;
block9:;
// line 16
org$frostlang$frostc$Pair* $tmp60 = *(&local2);
frost$core$Object** $tmp61 = &$tmp60->second;
frost$core$Object* $tmp62 = *$tmp61;
*(&local1) = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp62)->value;
// line 17
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp63 = *(&local1);
frost$core$Int64 $tmp64 = $tmp63.$rawValue;
frost$core$Int64 $tmp65 = (frost$core$Int64) {0};
frost$core$Bit $tmp66 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp64, $tmp65);
bool $tmp67 = $tmp66.value;
if ($tmp67) goto block12; else goto block13;
block12:;
goto block11;
block13:;
frost$core$Int64 $tmp68 = (frost$core$Int64) {1};
frost$core$Bit $tmp69 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp64, $tmp68);
bool $tmp70 = $tmp69.value;
if ($tmp70) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp71 = (frost$core$Int64) {2};
frost$core$Bit $tmp72 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp64, $tmp71);
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block14; else goto block16;
block14:;
// line 22
frost$core$MutableString* $tmp74 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp74, &$s75);
goto block11;
block16:;
frost$core$Int64 $tmp76 = (frost$core$Int64) {3};
frost$core$Bit $tmp77 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp64, $tmp76);
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block17; else goto block18;
block17:;
// line 25
frost$core$MutableString* $tmp79 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp79, &$s80);
goto block11;
block18:;
frost$core$Int64 $tmp81 = (frost$core$Int64) {4};
frost$core$Bit $tmp82 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp64, $tmp81);
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block19; else goto block20;
block19:;
// line 28
frost$core$MutableString* $tmp84 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp84, &$s85);
goto block11;
block20:;
frost$core$Int64 $tmp86 = (frost$core$Int64) {5};
frost$core$Bit $tmp87 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp64, $tmp86);
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block21; else goto block22;
block21:;
// line 31
frost$core$MutableString* $tmp89 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp89, &$s90);
goto block11;
block22:;
frost$core$Int64 $tmp91 = (frost$core$Int64) {6};
frost$core$Bit $tmp92 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp64, $tmp91);
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block23; else goto block24;
block23:;
// line 34
frost$core$MutableString* $tmp94 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp94, &$s95);
goto block11;
block24:;
frost$core$Int64 $tmp96 = (frost$core$Int64) {7};
frost$core$Bit $tmp97 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp64, $tmp96);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block25; else goto block26;
block25:;
// line 37
frost$core$MutableString* $tmp99 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp99, &$s100);
goto block11;
block26:;
frost$core$Int64 $tmp101 = (frost$core$Int64) {8};
frost$core$Bit $tmp102 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp64, $tmp101);
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block27; else goto block28;
block27:;
// line 40
frost$core$MutableString* $tmp104 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp104, &$s105);
goto block11;
block28:;
frost$core$Int64 $tmp106 = (frost$core$Int64) {9};
frost$core$Bit $tmp107 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp64, $tmp106);
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block29; else goto block30;
block29:;
// line 43
frost$core$MutableString* $tmp109 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp109, &$s110);
goto block11;
block30:;
frost$core$Int64 $tmp111 = (frost$core$Int64) {10};
frost$core$Bit $tmp112 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp64, $tmp111);
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block31; else goto block32;
block31:;
// line 46
frost$core$MutableString* $tmp114 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp114, &$s115);
goto block11;
block32:;
frost$core$Int64 $tmp116 = (frost$core$Int64) {11};
frost$core$Bit $tmp117 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp64, $tmp116);
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block33; else goto block34;
block33:;
// line 49
frost$core$MutableString* $tmp119 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp119, &$s120);
goto block11;
block34:;
frost$core$Int64 $tmp121 = (frost$core$Int64) {12};
frost$core$Bit $tmp122 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp64, $tmp121);
bool $tmp123 = $tmp122.value;
if ($tmp123) goto block35; else goto block36;
block35:;
// line 52
frost$core$MutableString* $tmp124 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp124, &$s125);
goto block11;
block36:;
// line 55
frost$core$Bit $tmp126 = frost$core$Bit$init$builtin_bit(false);
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp128 = (frost$core$Int64) {55};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s129, $tmp128);
abort(); // unreachable
block37:;
goto block11;
block11:;
goto block10;
block10:;
// line 59
frost$core$MutableString* $tmp130 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Pair* $tmp131 = *(&local2);
frost$core$Object** $tmp132 = &$tmp131->first;
frost$core$Object* $tmp133 = *$tmp132;
frost$core$String* $tmp134 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param1, ((org$frostlang$frostc$parser$Token$wrapper*) $tmp133)->value);
frost$core$MutableString$init$frost$core$String($tmp130, $tmp134);
*(&local4) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$core$MutableString* $tmp135 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
*(&local4) = $tmp130;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
// line 60
frost$core$MutableString* $tmp136 = *(&local4);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp136, &$s137, &$s138);
// line 61
frost$core$MutableString* $tmp139 = *(&local4);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp139, &$s140, &$s141);
// line 62
frost$core$MutableString* $tmp142 = *(&local4);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp142, &$s143, &$s144);
// line 63
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp145 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp146;
$tmp146 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp146->value = $tmp145;
frost$core$Int64 $tmp147 = (frost$core$Int64) {1};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp148 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp147);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp149;
$tmp149 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp149->value = $tmp148;
ITable* $tmp150 = ((frost$core$Equatable*) $tmp146)->$class->itable;
while ($tmp150->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp150 = $tmp150->next;
}
$fn152 $tmp151 = $tmp150->methods[1];
frost$core$Bit $tmp153 = $tmp151(((frost$core$Equatable*) $tmp146), ((frost$core$Equatable*) $tmp149));
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block41; else goto block42;
block41:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp155 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp156;
$tmp156 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp156->value = $tmp155;
frost$core$Int64 $tmp157 = (frost$core$Int64) {2};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp158 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp157);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp159;
$tmp159 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp159->value = $tmp158;
ITable* $tmp160 = ((frost$core$Equatable*) $tmp156)->$class->itable;
while ($tmp160->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp160 = $tmp160->next;
}
$fn162 $tmp161 = $tmp160->methods[1];
frost$core$Bit $tmp163 = $tmp161(((frost$core$Equatable*) $tmp156), ((frost$core$Equatable*) $tmp159));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp159)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp156)));
*(&local5) = $tmp163;
goto block43;
block42:;
*(&local5) = $tmp153;
goto block43;
block43:;
frost$core$Bit $tmp164 = *(&local5);
bool $tmp165 = $tmp164.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp149)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp146)));
if ($tmp165) goto block39; else goto block40;
block39:;
// line 65
frost$core$MutableString* $tmp166 = *(&local0);
org$frostlang$frostc$Pair* $tmp167 = *(&local2);
frost$core$Object** $tmp168 = &$tmp167->first;
frost$core$Object* $tmp169 = *$tmp168;
org$frostlang$frostc$parser$Token$Kind $tmp170 = ((org$frostlang$frostc$parser$Token$wrapper*) $tmp169)->value.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp171;
$tmp171 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp171->value = $tmp170;
frost$core$String* $tmp172 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s173, ((frost$core$Object*) $tmp171));
frost$core$String* $tmp174 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp172, &$s175);
frost$core$MutableString$append$frost$core$String($tmp166, $tmp174);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
goto block40;
block40:;
// line 67
frost$core$MutableString* $tmp176 = *(&local0);
frost$core$MutableString* $tmp177 = *(&local4);
frost$core$MutableString$append$frost$core$Object($tmp176, ((frost$core$Object*) $tmp177));
// line 68
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp178 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp179;
$tmp179 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp179->value = $tmp178;
frost$core$Int64 $tmp180 = (frost$core$Int64) {1};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp181 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp180);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp182;
$tmp182 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp182->value = $tmp181;
ITable* $tmp183 = ((frost$core$Equatable*) $tmp179)->$class->itable;
while ($tmp183->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp183 = $tmp183->next;
}
$fn185 $tmp184 = $tmp183->methods[1];
frost$core$Bit $tmp186 = $tmp184(((frost$core$Equatable*) $tmp179), ((frost$core$Equatable*) $tmp182));
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block46; else goto block47;
block46:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp188 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp189;
$tmp189 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp189->value = $tmp188;
frost$core$Int64 $tmp190 = (frost$core$Int64) {2};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp191 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp190);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp192;
$tmp192 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp192->value = $tmp191;
ITable* $tmp193 = ((frost$core$Equatable*) $tmp189)->$class->itable;
while ($tmp193->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp193 = $tmp193->next;
}
$fn195 $tmp194 = $tmp193->methods[1];
frost$core$Bit $tmp196 = $tmp194(((frost$core$Equatable*) $tmp189), ((frost$core$Equatable*) $tmp192));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp192)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp189)));
*(&local6) = $tmp196;
goto block48;
block47:;
*(&local6) = $tmp186;
goto block48;
block48:;
frost$core$Bit $tmp197 = *(&local6);
bool $tmp198 = $tmp197.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp182)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp179)));
if ($tmp198) goto block44; else goto block45;
block44:;
// line 70
frost$core$MutableString* $tmp199 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp199, &$s200);
goto block45;
block45:;
frost$core$MutableString* $tmp201 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
*(&local4) = ((frost$core$MutableString*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp23);
org$frostlang$frostc$Pair* $tmp202 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
// line 73
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp203 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp204;
$tmp204 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp204->value = $tmp203;
frost$core$Int64 $tmp205 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp206 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp205);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp207;
$tmp207 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp207->value = $tmp206;
ITable* $tmp208 = ((frost$core$Equatable*) $tmp204)->$class->itable;
while ($tmp208->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp208 = $tmp208->next;
}
$fn210 $tmp209 = $tmp208->methods[1];
frost$core$Bit $tmp211 = $tmp209(((frost$core$Equatable*) $tmp204), ((frost$core$Equatable*) $tmp207));
bool $tmp212 = $tmp211.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp207)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp204)));
if ($tmp212) goto block49; else goto block50;
block49:;
// line 74
frost$core$MutableString* $tmp213 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp213, &$s214);
goto block50;
block50:;
// line 76
frost$core$MutableString* $tmp215 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp215, &$s216);
// line 77
frost$core$MutableString* $tmp217 = *(&local0);
frost$core$String* $tmp218 = frost$core$MutableString$finish$R$frost$core$String($tmp217);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
frost$core$MutableString* $tmp219 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp218;

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
frost$threads$MessageQueue* $tmp220 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp220);
*(&local1) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
frost$threads$MessageQueue* $tmp221 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
*(&local1) = $tmp220;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
// line 83
org$frostlang$frostc$parser$Parser* $tmp222 = (org$frostlang$frostc$parser$Parser*) frostObjectAlloc(96, (frost$core$Class*) &org$frostlang$frostc$parser$Parser$class);
frost$threads$MessageQueue* $tmp223 = *(&local1);
org$frostlang$frostc$parser$Parser$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$ErrorMsg$GT($tmp222, $tmp223);
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
org$frostlang$frostc$parser$Parser* $tmp224 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
*(&local2) = $tmp222;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
// line 84
org$frostlang$frostc$parser$Parser* $tmp225 = *(&local2);
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp226 = (org$frostlang$frostc$parser$SyntaxHighlighter*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$class);
org$frostlang$frostc$parser$SyntaxHighlighter$init($tmp226);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp227 = &$tmp225->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp228 = *$tmp227;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp229 = &$tmp225->syntaxHighlighter;
*$tmp229 = $tmp226;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
// line 85
org$frostlang$frostc$parser$Parser* $tmp230 = *(&local2);
frost$core$Maybe* $tmp231 = frost$io$File$readFully$R$frost$core$Maybe$LTfrost$core$String$GT(param1);
frost$core$Int64* $tmp232 = &$tmp231->$rawValue;
frost$core$Int64 $tmp233 = *$tmp232;
int64_t $tmp234 = $tmp233.value;
bool $tmp235 = $tmp234 == 0;
if ($tmp235) goto block3; else goto block4;
block4:;
frost$core$Error** $tmp236 = (frost$core$Error**) ($tmp231->$data + 0);
frost$core$Error* $tmp237 = *$tmp236;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
*(&local0) = $tmp237;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
org$frostlang$frostc$parser$Parser* $tmp238 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp239 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block3:;
frost$core$Object** $tmp240 = (frost$core$Object**) ($tmp231->$data + 0);
frost$core$Object* $tmp241 = *$tmp240;
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$String($tmp230, param1, ((frost$core$String*) $tmp241));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
// line 86
org$frostlang$frostc$parser$Parser* $tmp242 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp243 = org$frostlang$frostc$parser$Parser$file$R$org$frostlang$frostc$ASTNode$Q($tmp242);
frost$core$Bit $tmp244 = frost$core$Bit$init$builtin_bit($tmp243 == NULL);
bool $tmp245 = $tmp244.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
if ($tmp245) goto block5; else goto block6;
block5:;
// line 87
goto block7;
block7:;
frost$threads$MessageQueue* $tmp246 = *(&local1);
frost$core$Bit $tmp247 = frost$threads$MessageQueue$hasMessage$R$frost$core$Bit($tmp246);
bool $tmp248 = $tmp247.value;
if ($tmp248) goto block8; else goto block9;
block8:;
// line 88
frost$threads$MessageQueue* $tmp249 = *(&local1);
frost$core$Immutable* $tmp250 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp249);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) ((org$frostlang$frostc$Compiler$ErrorMsg*) $tmp250)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
goto block7;
block9:;
goto block6;
block6:;
// line 91
org$frostlang$frostc$parser$Parser* $tmp251 = *(&local2);
frost$core$String* $tmp252 = org$frostlang$frostc$HTMLProcessor$prettyPrint$org$frostlang$frostc$parser$Parser$R$frost$core$String(param0, $tmp251);
frost$collections$Array* $tmp253 = frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT($tmp252, &$s254);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
frost$collections$Array* $tmp255 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
*(&local3) = $tmp253;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
// line 92
frost$collections$Array* $tmp256 = *(&local3);
ITable* $tmp257 = ((frost$collections$CollectionView*) $tmp256)->$class->itable;
while ($tmp257->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp257 = $tmp257->next;
}
$fn259 $tmp258 = $tmp257->methods[0];
frost$core$Int64 $tmp260 = $tmp258(((frost$collections$CollectionView*) $tmp256));
frost$core$Int64$wrapper* $tmp261;
$tmp261 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp261->value = $tmp260;
$fn263 $tmp262 = ($fn263) ((frost$core$Object*) $tmp261)->$class->vtable[0];
frost$core$String* $tmp264 = $tmp262(((frost$core$Object*) $tmp261));
frost$core$Int64 $tmp265 = frost$core$String$get_length$R$frost$core$Int64($tmp264);
*(&local4) = $tmp265;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
// line 93
frost$core$MutableString* $tmp266 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp266);
*(&local5) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
frost$core$MutableString* $tmp267 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
*(&local5) = $tmp266;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
// line 94
frost$core$Int64 $tmp268 = (frost$core$Int64) {0};
frost$collections$Array* $tmp269 = *(&local3);
ITable* $tmp270 = ((frost$collections$CollectionView*) $tmp269)->$class->itable;
while ($tmp270->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp270 = $tmp270->next;
}
$fn272 $tmp271 = $tmp270->methods[0];
frost$core$Int64 $tmp273 = $tmp271(((frost$collections$CollectionView*) $tmp269));
frost$core$Bit $tmp274 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp275 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp268, $tmp273, $tmp274);
frost$core$Int64 $tmp276 = $tmp275.min;
*(&local6) = $tmp276;
frost$core$Int64 $tmp277 = $tmp275.max;
frost$core$Bit $tmp278 = $tmp275.inclusive;
bool $tmp279 = $tmp278.value;
frost$core$Int64 $tmp280 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp281 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp280);
if ($tmp279) goto block13; else goto block14;
block13:;
int64_t $tmp282 = $tmp276.value;
int64_t $tmp283 = $tmp277.value;
bool $tmp284 = $tmp282 <= $tmp283;
frost$core$Bit $tmp285 = (frost$core$Bit) {$tmp284};
bool $tmp286 = $tmp285.value;
if ($tmp286) goto block10; else goto block11;
block14:;
int64_t $tmp287 = $tmp276.value;
int64_t $tmp288 = $tmp277.value;
bool $tmp289 = $tmp287 < $tmp288;
frost$core$Bit $tmp290 = (frost$core$Bit) {$tmp289};
bool $tmp291 = $tmp290.value;
if ($tmp291) goto block10; else goto block11;
block10:;
// line 95
frost$core$Int64 $tmp292 = *(&local6);
frost$core$Int64 $tmp293 = (frost$core$Int64) {1};
int64_t $tmp294 = $tmp292.value;
int64_t $tmp295 = $tmp293.value;
int64_t $tmp296 = $tmp294 + $tmp295;
frost$core$Int64 $tmp297 = (frost$core$Int64) {$tmp296};
frost$core$Int64$wrapper* $tmp298;
$tmp298 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp298->value = $tmp297;
$fn300 $tmp299 = ($fn300) ((frost$core$Object*) $tmp298)->$class->vtable[0];
frost$core$String* $tmp301 = $tmp299(((frost$core$Object*) $tmp298));
frost$core$Int64 $tmp302 = *(&local4);
frost$core$String* $tmp303 = frost$core$String$rightAlign$frost$core$Int64$R$frost$core$String($tmp301, $tmp302);
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
frost$core$String* $tmp304 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
*(&local7) = $tmp303;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
// line 96
frost$core$MutableString* $tmp305 = *(&local5);
frost$core$String* $tmp306 = *(&local7);
frost$core$String* $tmp307 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s308, $tmp306);
frost$core$String* $tmp309 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp307, &$s310);
frost$collections$Array* $tmp311 = *(&local3);
frost$core$Int64 $tmp312 = *(&local6);
frost$core$Object* $tmp313 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp311, $tmp312);
frost$core$String* $tmp314 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp309, ((frost$core$String*) $tmp313));
frost$core$String* $tmp315 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp314, &$s316);
frost$core$MutableString$append$frost$core$String($tmp305, $tmp315);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
frost$core$Frost$unref$frost$core$Object$Q($tmp313);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
frost$core$String* $tmp317 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
*(&local7) = ((frost$core$String*) NULL);
goto block12;
block12:;
frost$core$Int64 $tmp318 = *(&local6);
int64_t $tmp319 = $tmp277.value;
int64_t $tmp320 = $tmp318.value;
int64_t $tmp321 = $tmp319 - $tmp320;
frost$core$Int64 $tmp322 = (frost$core$Int64) {$tmp321};
frost$core$UInt64 $tmp323 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp322);
if ($tmp279) goto block16; else goto block17;
block16:;
uint64_t $tmp324 = $tmp323.value;
uint64_t $tmp325 = $tmp281.value;
bool $tmp326 = $tmp324 >= $tmp325;
frost$core$Bit $tmp327 = (frost$core$Bit) {$tmp326};
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block15; else goto block11;
block17:;
uint64_t $tmp329 = $tmp323.value;
uint64_t $tmp330 = $tmp281.value;
bool $tmp331 = $tmp329 > $tmp330;
frost$core$Bit $tmp332 = (frost$core$Bit) {$tmp331};
bool $tmp333 = $tmp332.value;
if ($tmp333) goto block15; else goto block11;
block15:;
int64_t $tmp334 = $tmp318.value;
int64_t $tmp335 = $tmp280.value;
int64_t $tmp336 = $tmp334 + $tmp335;
frost$core$Int64 $tmp337 = (frost$core$Int64) {$tmp336};
*(&local6) = $tmp337;
goto block10;
block11:;
// line 98
frost$core$Maybe* $tmp338 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT(param2);
frost$core$Int64* $tmp339 = &$tmp338->$rawValue;
frost$core$Int64 $tmp340 = *$tmp339;
int64_t $tmp341 = $tmp340.value;
bool $tmp342 = $tmp341 == 0;
if ($tmp342) goto block18; else goto block19;
block19:;
frost$core$Error** $tmp343 = (frost$core$Error**) ($tmp338->$data + 0);
frost$core$Error* $tmp344 = *$tmp343;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
*(&local0) = $tmp344;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
frost$core$MutableString* $tmp345 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp346 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp347 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp348 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block18:;
frost$core$Object** $tmp349 = (frost$core$Object**) ($tmp338->$data + 0);
frost$core$Object* $tmp350 = *$tmp349;
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$OutputStream*) $tmp350)));
frost$io$OutputStream* $tmp351 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
*(&local8) = ((frost$io$OutputStream*) $tmp350);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
// line 99
frost$io$OutputStream* $tmp352 = *(&local8);
$fn354 $tmp353 = ($fn354) $tmp352->$class->vtable[19];
frost$core$Error* $tmp355 = $tmp353($tmp352, &$s356);
if ($tmp355 == NULL) goto block20; else goto block21;
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
*(&local0) = $tmp355;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
frost$io$OutputStream* $tmp357 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp358 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp359 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp360 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp361 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
// line 100
frost$io$OutputStream* $tmp362 = *(&local8);
$fn364 $tmp363 = ($fn364) $tmp362->$class->vtable[19];
frost$core$Error* $tmp365 = $tmp363($tmp362, &$s366);
if ($tmp365 == NULL) goto block22; else goto block23;
block23:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
*(&local0) = $tmp365;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
frost$io$OutputStream* $tmp367 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp368 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp369 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp370 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp371 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
// line 101
frost$io$OutputStream* $tmp372 = *(&local8);
frost$core$String* $tmp373 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s374, param3);
frost$core$String* $tmp375 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp373, &$s376);
$fn378 $tmp377 = ($fn378) $tmp372->$class->vtable[19];
frost$core$Error* $tmp379 = $tmp377($tmp372, $tmp375);
if ($tmp379 == NULL) goto block24; else goto block25;
block25:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
*(&local0) = $tmp379;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
frost$io$OutputStream* $tmp380 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp381 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp382 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp383 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp384 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block24:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
// line 102
frost$io$OutputStream* $tmp385 = *(&local8);
frost$core$String* $tmp386 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s387, param3);
frost$core$String* $tmp388 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp386, &$s389);
$fn391 $tmp390 = ($fn391) $tmp385->$class->vtable[19];
frost$core$Error* $tmp392 = $tmp390($tmp385, $tmp388);
if ($tmp392 == NULL) goto block26; else goto block27;
block27:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
*(&local0) = $tmp392;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
frost$io$OutputStream* $tmp393 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp394 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp395 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp396 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp397 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block26:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
// line 103
frost$io$OutputStream* $tmp398 = *(&local8);
frost$core$String* $tmp399 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s400, param3);
frost$core$String* $tmp401 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp399, &$s402);
$fn404 $tmp403 = ($fn404) $tmp398->$class->vtable[19];
frost$core$Error* $tmp405 = $tmp403($tmp398, $tmp401);
if ($tmp405 == NULL) goto block28; else goto block29;
block29:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
*(&local0) = $tmp405;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
frost$io$OutputStream* $tmp406 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp407 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp408 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp409 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp410 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block28:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
// line 104
frost$io$OutputStream* $tmp411 = *(&local8);
$fn413 $tmp412 = ($fn413) $tmp411->$class->vtable[19];
frost$core$Error* $tmp414 = $tmp412($tmp411, &$s415);
if ($tmp414 == NULL) goto block30; else goto block31;
block31:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
*(&local0) = $tmp414;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
frost$io$OutputStream* $tmp416 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp417 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp418 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp419 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp420 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block30:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
// line 105
frost$io$OutputStream* $tmp421 = *(&local8);
$fn423 $tmp422 = ($fn423) $tmp421->$class->vtable[19];
frost$core$Error* $tmp424 = $tmp422($tmp421, &$s425);
if ($tmp424 == NULL) goto block32; else goto block33;
block33:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
*(&local0) = $tmp424;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
frost$io$OutputStream* $tmp426 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp427 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp428 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp429 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp430 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block32:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
// line 106
frost$io$OutputStream* $tmp431 = *(&local8);
$fn433 $tmp432 = ($fn433) $tmp431->$class->vtable[19];
frost$core$Error* $tmp434 = $tmp432($tmp431, &$s435);
if ($tmp434 == NULL) goto block34; else goto block35;
block35:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
*(&local0) = $tmp434;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
frost$io$OutputStream* $tmp436 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp437 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp438 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp439 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp440 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block34:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
// line 107
frost$io$OutputStream* $tmp441 = *(&local8);
$fn443 $tmp442 = ($fn443) $tmp441->$class->vtable[19];
frost$core$Error* $tmp444 = $tmp442($tmp441, &$s445);
if ($tmp444 == NULL) goto block36; else goto block37;
block37:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
*(&local0) = $tmp444;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
frost$io$OutputStream* $tmp446 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp447 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp448 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp449 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp450 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block36:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
// line 108
frost$io$OutputStream* $tmp451 = *(&local8);
$fn453 $tmp452 = ($fn453) $tmp451->$class->vtable[19];
frost$core$Error* $tmp454 = $tmp452($tmp451, &$s455);
if ($tmp454 == NULL) goto block38; else goto block39;
block39:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
*(&local0) = $tmp454;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
frost$io$OutputStream* $tmp456 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp457 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp458 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp459 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp460 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block38:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
// line 109
frost$io$OutputStream* $tmp461 = *(&local8);
$fn463 $tmp462 = ($fn463) $tmp461->$class->vtable[19];
frost$core$Error* $tmp464 = $tmp462($tmp461, &$s465);
if ($tmp464 == NULL) goto block40; else goto block41;
block41:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
*(&local0) = $tmp464;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
frost$io$OutputStream* $tmp466 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp467 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp468 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp469 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp470 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block40:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
// line 110
frost$io$OutputStream* $tmp471 = *(&local8);
frost$core$MutableString* $tmp472 = *(&local5);
frost$core$String* $tmp473 = frost$core$MutableString$finish$R$frost$core$String($tmp472);
$fn475 $tmp474 = ($fn475) $tmp471->$class->vtable[17];
frost$core$Error* $tmp476 = $tmp474($tmp471, $tmp473);
if ($tmp476 == NULL) goto block42; else goto block43;
block43:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
*(&local0) = $tmp476;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
frost$io$OutputStream* $tmp477 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp478 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp479 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp480 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp481 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block42:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
// line 111
frost$io$OutputStream* $tmp482 = *(&local8);
$fn484 $tmp483 = ($fn484) $tmp482->$class->vtable[19];
frost$core$Error* $tmp485 = $tmp483($tmp482, &$s486);
if ($tmp485 == NULL) goto block44; else goto block45;
block45:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
*(&local0) = $tmp485;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
frost$io$OutputStream* $tmp487 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp488 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp489 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp490 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp491 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block44:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
// line 112
frost$io$OutputStream* $tmp492 = *(&local8);
$fn494 $tmp493 = ($fn494) $tmp492->$class->vtable[19];
frost$core$Error* $tmp495 = $tmp493($tmp492, &$s496);
if ($tmp495 == NULL) goto block46; else goto block47;
block47:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
*(&local0) = $tmp495;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
frost$io$OutputStream* $tmp497 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp498 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp499 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp500 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp501 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block46:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
// line 113
frost$io$OutputStream* $tmp502 = *(&local8);
$fn504 $tmp503 = ($fn504) $tmp502->$class->vtable[19];
frost$core$Error* $tmp505 = $tmp503($tmp502, &$s506);
if ($tmp505 == NULL) goto block48; else goto block49;
block49:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
*(&local0) = $tmp505;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
frost$io$OutputStream* $tmp507 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp508 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp509 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp510 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp511 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block48:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
// line 114
frost$io$OutputStream* $tmp512 = *(&local8);
$fn514 $tmp513 = ($fn514) $tmp512->$class->vtable[19];
frost$core$Error* $tmp515 = $tmp513($tmp512, &$s516);
if ($tmp515 == NULL) goto block50; else goto block51;
block51:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
*(&local0) = $tmp515;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
frost$io$OutputStream* $tmp517 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp518 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp519 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp520 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp521 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block50:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
// line 115
frost$io$OutputStream* $tmp522 = *(&local8);
$fn524 $tmp523 = ($fn524) $tmp522->$class->vtable[19];
frost$core$Error* $tmp525 = $tmp523($tmp522, &$s526);
if ($tmp525 == NULL) goto block52; else goto block53;
block53:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
*(&local0) = $tmp525;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
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
goto block1;
block52:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
frost$io$OutputStream* $tmp532 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp533 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp534 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp535 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp536 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block2;
block1:;
// line 118
frost$core$Error* $tmp537 = *(&local0);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp537));
// line 119
frost$core$Int64 $tmp538 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp538);
goto block2;
block2:;
frost$core$Error* $tmp539 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
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

