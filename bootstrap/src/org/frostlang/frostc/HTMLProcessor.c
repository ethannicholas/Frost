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
#include "frost/threads/MessageQueue.h"
#include "frost/io/OutputStream.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/Immutable.h"
#include "org/frostlang/frostc/Compiler/Error.h"
#include "frost/io/Console.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"


static frost$core$String $s1;
org$frostlang$frostc$HTMLProcessor$class_type org$frostlang$frostc$HTMLProcessor$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$HTMLProcessor$cleanup, org$frostlang$frostc$HTMLProcessor$prettyPrint$org$frostlang$frostc$parser$Parser$R$frost$core$String, org$frostlang$frostc$HTMLProcessor$process$frost$io$File$frost$io$File$frost$core$String} };

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
typedef frost$core$Int64 (*$fn249)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn259)(frost$collections$CollectionView*);
typedef void (*$fn326)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn330)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn338)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn345)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn352)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn355)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn359)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn363)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn367)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn371)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn375)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn381)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn384)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn388)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn392)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn396)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn400)(frost$io$OutputStream*, frost$core$String*);

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
static frost$core$String $s244 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x6e\x65\x4e\x75\x6d\x62\x65\x72\x22\x3e", 25, 2886294917360451169, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e\x20\x20", 9, 1748561594372514868, NULL };
static frost$core$String $s300 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s327 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x68\x74\x6d\x6c\x3e", 6, 1703069100160, NULL };
static frost$core$String $s331 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x3c\x68\x65\x61\x64\x3e", 8, 14294010361214289, NULL };
static frost$core$String $s334 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, 658568770330923109, NULL };
static frost$core$String $s336 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x66\x72\x6f\x73\x74\x2d\x6d\x61\x69\x6e\x2e\x63\x73\x73\x22\x20\x2f\x3e", 19, 3064929400175920806, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, 658568770330923109, NULL };
static frost$core$String $s343 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x66\x72\x6f\x73\x74\x2d\x73\x6f\x75\x72\x63\x65\x2e\x63\x73\x73\x22\x20\x2f\x3e", 21, 3133109499844102022, NULL };
static frost$core$String $s348 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, 658568770330923109, NULL };
static frost$core$String $s350 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x66\x72\x6f\x73\x74\x63\x6f\x64\x65\x2d\x6d\x6f\x6e\x6f\x6b\x61\x69\x2e\x63\x73\x73\x22\x20\x2f\x3e", 26, 3895617789714049510, NULL };
static frost$core$String $s356 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x3c\x2f\x68\x65\x61\x64\x3e", 9, 1443694447723190336, NULL };
static frost$core$String $s360 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x3c\x62\x6f\x64\x79\x3e", 8, 14294009747187617, NULL };
static frost$core$String $s364 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x64\x69\x76\x20\x69\x64\x3d\x22\x6d\x61\x69\x6e\x22\x3e", 19, 7391579857894992237, NULL };
static frost$core$String $s368 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x21\x2d\x2d\x54\x4f\x43\x42\x45\x47\x49\x4e\x2d\x2d\x3e\x3c\x21\x2d\x2d\x54\x4f\x43\x45\x4e\x44\x2d\x2d\x3e", 34, -1824120810441054265, NULL };
static frost$core$String $s372 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x64\x69\x76\x20\x69\x64\x3d\x22\x63\x6f\x6e\x74\x65\x6e\x74\x22\x3e", 24, -2483733496706816761, NULL };
static frost$core$String $s376 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20\x3c\x70\x72\x65\x3e\x3c\x63\x6f\x64\x65\x20\x63\x6c\x61\x73\x73\x3d\x22\x66\x72\x6f\x73\x74\x63\x6f\x64\x65\x22\x3e", 37, 1338010830594487803, NULL };
static frost$core$String $s385 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20\x3c\x2f\x63\x6f\x64\x65\x3e\x3c\x2f\x70\x72\x65\x3e", 21, 7252662077213941825, NULL };
static frost$core$String $s389 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x2f\x64\x69\x76\x3e", 12, -7275120926329646243, NULL };
static frost$core$String $s393 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x2f\x64\x69\x76\x3e", 10, -1763831739482883707, NULL };
static frost$core$String $s397 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x3c\x2f\x62\x6f\x64\x79\x3e", 9, 1443694447109163664, NULL };
static frost$core$String $s401 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x68\x74\x6d\x6c\x3e", 7, 171409661889807, NULL };

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
// unreffing REF($1:frost.core.MutableString)
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
// unreffing REF($64:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp37)));
// unreffing REF($60:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
*(&local3) = $tmp44;
goto block8;
block7:;
*(&local3) = $tmp34;
goto block8;
block8:;
frost$core$Bit $tmp45 = *(&local3);
bool $tmp46 = $tmp45.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp30)));
// unreffing REF($54:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp28)));
// unreffing REF($51:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
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
// unreffing REF($99:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp52)));
// unreffing REF($96:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
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
// unreffing REF($233:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
// unreffing REF($227:frost.core.MutableString)
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
// unreffing REF($273:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp156)));
// unreffing REF($269:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
*(&local5) = $tmp163;
goto block43;
block42:;
*(&local5) = $tmp153;
goto block43;
block43:;
frost$core$Bit $tmp164 = *(&local5);
bool $tmp165 = $tmp164.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp149)));
// unreffing REF($263:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp146)));
// unreffing REF($259:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
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
// unreffing REF($305:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
// unreffing REF($304:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
// unreffing REF($303:frost.core.Object)
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
// unreffing REF($338:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp189)));
// unreffing REF($334:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
*(&local6) = $tmp196;
goto block48;
block47:;
*(&local6) = $tmp186;
goto block48;
block48:;
frost$core$Bit $tmp197 = *(&local6);
bool $tmp198 = $tmp197.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp182)));
// unreffing REF($328:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp179)));
// unreffing REF($324:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
if ($tmp198) goto block44; else goto block45;
block44:;
// line 70
frost$core$MutableString* $tmp199 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp199, &$s200);
goto block45;
block45:;
frost$core$MutableString* $tmp201 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
// unreffing s
*(&local4) = ((frost$core$MutableString*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp23);
// unreffing REF($37:frost.collections.Iterator.T)
org$frostlang$frostc$Pair* $tmp202 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
// unreffing t
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
// unreffing REF($26:frost.collections.Iterator<frost.collections.Iterable.T>)
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
// unreffing REF($387:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp204)));
// unreffing REF($383:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
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
// unreffing REF($407:frost.core.String)
frost$core$MutableString* $tmp219 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp218;

}
void org$frostlang$frostc$HTMLProcessor$process$frost$io$File$frost$io$File$frost$core$String(org$frostlang$frostc$HTMLProcessor* param0, frost$io$File* param1, frost$io$File* param2, frost$core$String* param3) {

frost$threads$MessageQueue* local0 = NULL;
org$frostlang$frostc$parser$Parser* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$core$Int64 local3;
frost$core$MutableString* local4 = NULL;
frost$core$Int64 local5;
frost$core$String* local6 = NULL;
frost$io$OutputStream* local7 = NULL;
// line 81
frost$threads$MessageQueue* $tmp220 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp220);
*(&local0) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
frost$threads$MessageQueue* $tmp221 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
*(&local0) = $tmp220;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
// unreffing REF($1:frost.threads.MessageQueue<org.frostlang.frostc.Compiler.Error>)
// line 82
org$frostlang$frostc$parser$Parser* $tmp222 = (org$frostlang$frostc$parser$Parser*) frostObjectAlloc(96, (frost$core$Class*) &org$frostlang$frostc$parser$Parser$class);
frost$threads$MessageQueue* $tmp223 = *(&local0);
org$frostlang$frostc$parser$Parser$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Error$GT($tmp222, $tmp223);
*(&local1) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
org$frostlang$frostc$parser$Parser* $tmp224 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
*(&local1) = $tmp222;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
// unreffing REF($15:org.frostlang.frostc.parser.Parser)
// line 83
org$frostlang$frostc$parser$Parser* $tmp225 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp226 = (org$frostlang$frostc$parser$SyntaxHighlighter*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$class);
org$frostlang$frostc$parser$SyntaxHighlighter$init($tmp226);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp227 = &$tmp225->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp228 = *$tmp227;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp229 = &$tmp225->syntaxHighlighter;
*$tmp229 = $tmp226;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
// unreffing REF($30:org.frostlang.frostc.parser.SyntaxHighlighter)
// line 84
org$frostlang$frostc$parser$Parser* $tmp230 = *(&local1);
frost$core$String* $tmp231 = frost$io$File$readFully$R$frost$core$String(param1);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$String($tmp230, param1, $tmp231);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
// unreffing REF($46:frost.core.String)
// line 85
org$frostlang$frostc$parser$Parser* $tmp232 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp233 = org$frostlang$frostc$parser$Parser$file$R$org$frostlang$frostc$ASTNode$Q($tmp232);
frost$core$Bit $tmp234 = frost$core$Bit$init$builtin_bit($tmp233 == NULL);
bool $tmp235 = $tmp234.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
// unreffing REF($53:org.frostlang.frostc.ASTNode?)
if ($tmp235) goto block1; else goto block2;
block1:;
// line 86
goto block3;
block3:;
frost$threads$MessageQueue* $tmp236 = *(&local0);
frost$core$Bit $tmp237 = frost$threads$MessageQueue$hasMessage$R$frost$core$Bit($tmp236);
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block4; else goto block5;
block4:;
// line 87
frost$threads$MessageQueue* $tmp239 = *(&local0);
frost$core$Immutable* $tmp240 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp239);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Error*) $tmp240)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
// unreffing REF($71:frost.threads.MessageQueue.T)
goto block3;
block5:;
goto block2;
block2:;
// line 90
org$frostlang$frostc$parser$Parser* $tmp241 = *(&local1);
frost$core$String* $tmp242 = org$frostlang$frostc$HTMLProcessor$prettyPrint$org$frostlang$frostc$parser$Parser$R$frost$core$String(param0, $tmp241);
frost$collections$Array* $tmp243 = frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT($tmp242, &$s244);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
frost$collections$Array* $tmp245 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
*(&local2) = $tmp243;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
// unreffing REF($83:frost.collections.Array<frost.core.String>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
// unreffing REF($82:frost.core.String)
// line 91
frost$collections$Array* $tmp246 = *(&local2);
ITable* $tmp247 = ((frost$collections$CollectionView*) $tmp246)->$class->itable;
while ($tmp247->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp247 = $tmp247->next;
}
$fn249 $tmp248 = $tmp247->methods[0];
frost$core$Int64 $tmp250 = $tmp248(((frost$collections$CollectionView*) $tmp246));
frost$core$String* $tmp251 = frost$core$Int64$convert$R$frost$core$String($tmp250);
frost$core$Int64 $tmp252 = frost$core$String$get_length$R$frost$core$Int64($tmp251);
*(&local3) = $tmp252;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
// unreffing REF($102:frost.core.String)
// line 92
frost$core$MutableString* $tmp253 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp253);
*(&local4) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
frost$core$MutableString* $tmp254 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
*(&local4) = $tmp253;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
// unreffing REF($109:frost.core.MutableString)
// line 93
frost$core$Int64 $tmp255 = (frost$core$Int64) {0};
frost$collections$Array* $tmp256 = *(&local2);
ITable* $tmp257 = ((frost$collections$CollectionView*) $tmp256)->$class->itable;
while ($tmp257->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp257 = $tmp257->next;
}
$fn259 $tmp258 = $tmp257->methods[0];
frost$core$Int64 $tmp260 = $tmp258(((frost$collections$CollectionView*) $tmp256));
frost$core$Bit $tmp261 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp262 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp255, $tmp260, $tmp261);
frost$core$Int64 $tmp263 = $tmp262.min;
*(&local5) = $tmp263;
frost$core$Int64 $tmp264 = $tmp262.max;
frost$core$Bit $tmp265 = $tmp262.inclusive;
bool $tmp266 = $tmp265.value;
frost$core$Int64 $tmp267 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp268 = frost$core$Int64$convert$R$frost$core$UInt64($tmp267);
if ($tmp266) goto block9; else goto block10;
block9:;
int64_t $tmp269 = $tmp263.value;
int64_t $tmp270 = $tmp264.value;
bool $tmp271 = $tmp269 <= $tmp270;
frost$core$Bit $tmp272 = (frost$core$Bit) {$tmp271};
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block6; else goto block7;
block10:;
int64_t $tmp274 = $tmp263.value;
int64_t $tmp275 = $tmp264.value;
bool $tmp276 = $tmp274 < $tmp275;
frost$core$Bit $tmp277 = (frost$core$Bit) {$tmp276};
bool $tmp278 = $tmp277.value;
if ($tmp278) goto block6; else goto block7;
block6:;
// line 94
frost$core$Int64 $tmp279 = *(&local5);
frost$core$Int64 $tmp280 = (frost$core$Int64) {1};
int64_t $tmp281 = $tmp279.value;
int64_t $tmp282 = $tmp280.value;
int64_t $tmp283 = $tmp281 + $tmp282;
frost$core$Int64 $tmp284 = (frost$core$Int64) {$tmp283};
frost$core$String* $tmp285 = frost$core$Int64$convert$R$frost$core$String($tmp284);
frost$core$Int64 $tmp286 = *(&local3);
frost$core$String* $tmp287 = frost$core$String$rightAlign$frost$core$Int64$R$frost$core$String($tmp285, $tmp286);
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
frost$core$String* $tmp288 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
*(&local6) = $tmp287;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
// unreffing REF($158:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
// unreffing REF($156:frost.core.String)
// line 95
frost$core$MutableString* $tmp289 = *(&local4);
frost$core$String* $tmp290 = *(&local6);
frost$core$String* $tmp291 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s292, $tmp290);
frost$core$String* $tmp293 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp291, &$s294);
frost$collections$Array* $tmp295 = *(&local2);
frost$core$Int64 $tmp296 = *(&local5);
frost$core$Object* $tmp297 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp295, $tmp296);
frost$core$String* $tmp298 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp293, ((frost$core$String*) $tmp297));
frost$core$String* $tmp299 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp298, &$s300);
frost$core$MutableString$append$frost$core$String($tmp289, $tmp299);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
// unreffing REF($183:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
// unreffing REF($182:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp297);
// unreffing REF($180:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
// unreffing REF($176:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
// unreffing REF($175:frost.core.String)
frost$core$String* $tmp301 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
// unreffing lineNumber
*(&local6) = ((frost$core$String*) NULL);
goto block8;
block8:;
frost$core$Int64 $tmp302 = *(&local5);
int64_t $tmp303 = $tmp264.value;
int64_t $tmp304 = $tmp302.value;
int64_t $tmp305 = $tmp303 - $tmp304;
frost$core$Int64 $tmp306 = (frost$core$Int64) {$tmp305};
frost$core$UInt64 $tmp307 = frost$core$Int64$convert$R$frost$core$UInt64($tmp306);
if ($tmp266) goto block12; else goto block13;
block12:;
uint64_t $tmp308 = $tmp307.value;
uint64_t $tmp309 = $tmp268.value;
bool $tmp310 = $tmp308 >= $tmp309;
frost$core$Bit $tmp311 = (frost$core$Bit) {$tmp310};
bool $tmp312 = $tmp311.value;
if ($tmp312) goto block11; else goto block7;
block13:;
uint64_t $tmp313 = $tmp307.value;
uint64_t $tmp314 = $tmp268.value;
bool $tmp315 = $tmp313 > $tmp314;
frost$core$Bit $tmp316 = (frost$core$Bit) {$tmp315};
bool $tmp317 = $tmp316.value;
if ($tmp317) goto block11; else goto block7;
block11:;
int64_t $tmp318 = $tmp302.value;
int64_t $tmp319 = $tmp267.value;
int64_t $tmp320 = $tmp318 + $tmp319;
frost$core$Int64 $tmp321 = (frost$core$Int64) {$tmp320};
*(&local5) = $tmp321;
goto block6;
block7:;
// line 97
frost$io$OutputStream* $tmp322 = frost$io$File$openOutputStream$R$frost$io$OutputStream(param2);
*(&local7) = ((frost$io$OutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
frost$io$OutputStream* $tmp323 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
*(&local7) = $tmp322;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
// unreffing REF($232:frost.io.OutputStream)
// line 98
frost$io$OutputStream* $tmp324 = *(&local7);
$fn326 $tmp325 = ($fn326) $tmp324->$class->vtable[19];
$tmp325($tmp324, &$s327);
// line 99
frost$io$OutputStream* $tmp328 = *(&local7);
$fn330 $tmp329 = ($fn330) $tmp328->$class->vtable[19];
$tmp329($tmp328, &$s331);
// line 100
frost$io$OutputStream* $tmp332 = *(&local7);
frost$core$String* $tmp333 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s334, param3);
frost$core$String* $tmp335 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp333, &$s336);
$fn338 $tmp337 = ($fn338) $tmp332->$class->vtable[19];
$tmp337($tmp332, $tmp335);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
// unreffing REF($254:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
// unreffing REF($253:frost.core.String)
// line 101
frost$io$OutputStream* $tmp339 = *(&local7);
frost$core$String* $tmp340 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s341, param3);
frost$core$String* $tmp342 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp340, &$s343);
$fn345 $tmp344 = ($fn345) $tmp339->$class->vtable[19];
$tmp344($tmp339, $tmp342);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
// unreffing REF($266:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
// unreffing REF($265:frost.core.String)
// line 102
frost$io$OutputStream* $tmp346 = *(&local7);
frost$core$String* $tmp347 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s348, param3);
frost$core$String* $tmp349 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp347, &$s350);
$fn352 $tmp351 = ($fn352) $tmp346->$class->vtable[19];
$tmp351($tmp346, $tmp349);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
// unreffing REF($278:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
// unreffing REF($277:frost.core.String)
// line 103
frost$io$OutputStream* $tmp353 = *(&local7);
$fn355 $tmp354 = ($fn355) $tmp353->$class->vtable[19];
$tmp354($tmp353, &$s356);
// line 104
frost$io$OutputStream* $tmp357 = *(&local7);
$fn359 $tmp358 = ($fn359) $tmp357->$class->vtable[19];
$tmp358($tmp357, &$s360);
// line 105
frost$io$OutputStream* $tmp361 = *(&local7);
$fn363 $tmp362 = ($fn363) $tmp361->$class->vtable[19];
$tmp362($tmp361, &$s364);
// line 106
frost$io$OutputStream* $tmp365 = *(&local7);
$fn367 $tmp366 = ($fn367) $tmp365->$class->vtable[19];
$tmp366($tmp365, &$s368);
// line 107
frost$io$OutputStream* $tmp369 = *(&local7);
$fn371 $tmp370 = ($fn371) $tmp369->$class->vtable[19];
$tmp370($tmp369, &$s372);
// line 108
frost$io$OutputStream* $tmp373 = *(&local7);
$fn375 $tmp374 = ($fn375) $tmp373->$class->vtable[19];
$tmp374($tmp373, &$s376);
// line 109
frost$io$OutputStream* $tmp377 = *(&local7);
frost$core$MutableString* $tmp378 = *(&local4);
frost$core$String* $tmp379 = frost$core$MutableString$finish$R$frost$core$String($tmp378);
$fn381 $tmp380 = ($fn381) $tmp377->$class->vtable[17];
$tmp380($tmp377, $tmp379);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
// unreffing REF($314:frost.core.String)
// line 110
frost$io$OutputStream* $tmp382 = *(&local7);
$fn384 $tmp383 = ($fn384) $tmp382->$class->vtable[19];
$tmp383($tmp382, &$s385);
// line 111
frost$io$OutputStream* $tmp386 = *(&local7);
$fn388 $tmp387 = ($fn388) $tmp386->$class->vtable[19];
$tmp387($tmp386, &$s389);
// line 112
frost$io$OutputStream* $tmp390 = *(&local7);
$fn392 $tmp391 = ($fn392) $tmp390->$class->vtable[19];
$tmp391($tmp390, &$s393);
// line 113
frost$io$OutputStream* $tmp394 = *(&local7);
$fn396 $tmp395 = ($fn396) $tmp394->$class->vtable[19];
$tmp395($tmp394, &$s397);
// line 114
frost$io$OutputStream* $tmp398 = *(&local7);
$fn400 $tmp399 = ($fn400) $tmp398->$class->vtable[19];
$tmp399($tmp398, &$s401);
frost$io$OutputStream* $tmp402 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
// unreffing out
*(&local7) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp403 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
// unreffing highlighted
*(&local4) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp404 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
// unreffing lines
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp405 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
// unreffing parser
*(&local1) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp406 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
// unreffing errors
*(&local0) = ((frost$threads$MessageQueue*) NULL);
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

