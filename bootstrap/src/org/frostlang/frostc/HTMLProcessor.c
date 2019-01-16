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

typedef frost$collections$Iterator* (*$fn18)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn22)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn27)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn38)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn48)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn62)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn157)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn167)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn190)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn200)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn215)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn254)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn264)(frost$collections$CollectionView*);
typedef void (*$fn331)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn335)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn343)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn350)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn357)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn360)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn364)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn368)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn372)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn376)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn380)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn386)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn389)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn393)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn397)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn401)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn405)(frost$io$OutputStream*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72", 34, 7665172691771292701, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x66\x72\x6f\x73\x74\x63\x6f\x64\x65\x22\x3e", 24, 965728039488327577, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, 825358356959104230, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72", 129, -9204808912793336565, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6d\x6d\x65\x6e\x74\x22\x3e", 22, -1756050522877089685, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x22\x3e", 25, 4577563245309187979, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x22\x3e", 25, 6760721592980043958, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x4e\x61\x6d\x65\x22\x3e", 28, 5111374842590752150, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x74\x79\x70\x65\x22\x3e", 19, -6878895466207673670, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6b\x65\x79\x77\x6f\x72\x64\x22\x3e", 22, -1670481277391576067, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6e\x74\x72\x6f\x6c\x22\x3e", 22, -1756049386432501671, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x74\x65\x72\x61\x6c\x22\x3e", 22, -1659229352682266791, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x73\x74\x72\x69\x6e\x67\x22\x3e", 21, -198306892965556893, NULL };
static frost$core$String $s125 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6f\x70\x65\x72\x61\x74\x6f\x72\x22\x3e", 23, 1793793249967207580, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x61\x62\x65\x6c\x22\x3e", 20, 6207823968128210400, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, 825358356959104230, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26", 1, 139, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x26\x67\x74\x3b", 4, 144274317, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22", 13, -8467438715157355368, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22\x3e", 2, 13697, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static frost$core$String $s221 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static frost$core$String $s249 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s297 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x6e\x65\x4e\x75\x6d\x62\x65\x72\x22\x3e", 25, 2886294917360451169, NULL };
static frost$core$String $s299 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e\x20\x20", 9, 1748561594372514868, NULL };
static frost$core$String $s305 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x68\x74\x6d\x6c\x3e", 6, 1703069100160, NULL };
static frost$core$String $s336 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x3c\x68\x65\x61\x64\x3e", 8, 14294010361214289, NULL };
static frost$core$String $s339 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, 658568770330923109, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x66\x72\x6f\x73\x74\x2d\x6d\x61\x69\x6e\x2e\x63\x73\x73\x22\x20\x2f\x3e", 19, 3064929400175920806, NULL };
static frost$core$String $s346 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, 658568770330923109, NULL };
static frost$core$String $s348 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x66\x72\x6f\x73\x74\x2d\x73\x6f\x75\x72\x63\x65\x2e\x63\x73\x73\x22\x20\x2f\x3e", 21, 3133109499844102022, NULL };
static frost$core$String $s353 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, 658568770330923109, NULL };
static frost$core$String $s355 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x66\x72\x6f\x73\x74\x63\x6f\x64\x65\x2d\x6d\x6f\x6e\x6f\x6b\x61\x69\x2e\x63\x73\x73\x22\x20\x2f\x3e", 26, 3895617789714049510, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x3c\x2f\x68\x65\x61\x64\x3e", 9, 1443694447723190336, NULL };
static frost$core$String $s365 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x3c\x62\x6f\x64\x79\x3e", 8, 14294009747187617, NULL };
static frost$core$String $s369 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x64\x69\x76\x20\x69\x64\x3d\x22\x6d\x61\x69\x6e\x22\x3e", 19, 7391579857894992237, NULL };
static frost$core$String $s373 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x21\x2d\x2d\x54\x4f\x43\x42\x45\x47\x49\x4e\x2d\x2d\x3e\x3c\x21\x2d\x2d\x54\x4f\x43\x45\x4e\x44\x2d\x2d\x3e", 34, -1824120810441054265, NULL };
static frost$core$String $s377 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x64\x69\x76\x20\x69\x64\x3d\x22\x63\x6f\x6e\x74\x65\x6e\x74\x22\x3e", 24, -2483733496706816761, NULL };
static frost$core$String $s381 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20\x3c\x70\x72\x65\x3e\x3c\x63\x6f\x64\x65\x20\x63\x6c\x61\x73\x73\x3d\x22\x66\x72\x6f\x73\x74\x63\x6f\x64\x65\x22\x3e", 37, 1338010830594487803, NULL };
static frost$core$String $s390 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20\x3c\x2f\x63\x6f\x64\x65\x3e\x3c\x2f\x70\x72\x65\x3e", 21, 7252662077213941825, NULL };
static frost$core$String $s394 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x2f\x64\x69\x76\x3e", 12, -7275120926329646243, NULL };
static frost$core$String $s398 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x2f\x64\x69\x76\x3e", 10, -1763831739482883707, NULL };
static frost$core$String $s402 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x3c\x2f\x62\x6f\x64\x79\x3e", 9, 1443694447109163664, NULL };
static frost$core$String $s406 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x68\x74\x6d\x6c\x3e", 7, 171409661889807, NULL };

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
frost$core$Bit $tmp9 = frost$core$Bit$init$builtin_bit($tmp8 != NULL);
bool $tmp10 = $tmp9.value;
if ($tmp10) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp11 = (frost$core$Int64) {11};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s12, $tmp11, &$s13);
abort(); // unreachable
block1:;
frost$collections$Array** $tmp14 = &$tmp8->tokens;
frost$collections$Array* $tmp15 = *$tmp14;
ITable* $tmp16 = ((frost$collections$Iterable*) $tmp15)->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp16 = $tmp16->next;
}
$fn18 $tmp17 = $tmp16->methods[0];
frost$collections$Iterator* $tmp19 = $tmp17(((frost$collections$Iterable*) $tmp15));
goto block3;
block3:;
ITable* $tmp20 = $tmp19->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp20 = $tmp20->next;
}
$fn22 $tmp21 = $tmp20->methods[0];
frost$core$Bit $tmp23 = $tmp21($tmp19);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block5; else goto block4;
block4:;
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
ITable* $tmp25 = $tmp19->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp25 = $tmp25->next;
}
$fn27 $tmp26 = $tmp25->methods[1];
frost$core$Object* $tmp28 = $tmp26($tmp19);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) $tmp28)));
org$frostlang$frostc$Pair* $tmp29 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local2) = ((org$frostlang$frostc$Pair*) $tmp28);
// line 12
org$frostlang$frostc$Pair* $tmp30 = *(&local2);
frost$core$Object** $tmp31 = &$tmp30->second;
frost$core$Object* $tmp32 = *$tmp31;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp33;
$tmp33 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp33->value = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp32)->value;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp34 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp35;
$tmp35 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp35->value = $tmp34;
ITable* $tmp36 = ((frost$core$Equatable*) $tmp33)->$class->itable;
while ($tmp36->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp36 = $tmp36->next;
}
$fn38 $tmp37 = $tmp36->methods[1];
frost$core$Bit $tmp39 = $tmp37(((frost$core$Equatable*) $tmp33), ((frost$core$Equatable*) $tmp35));
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block8; else goto block9;
block8:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp41 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp42;
$tmp42 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp42->value = $tmp41;
frost$core$Int64 $tmp43 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp44 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp43);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp45;
$tmp45 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp45->value = $tmp44;
ITable* $tmp46 = ((frost$core$Equatable*) $tmp42)->$class->itable;
while ($tmp46->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp46 = $tmp46->next;
}
$fn48 $tmp47 = $tmp46->methods[1];
frost$core$Bit $tmp49 = $tmp47(((frost$core$Equatable*) $tmp42), ((frost$core$Equatable*) $tmp45));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp45)));
// unreffing REF($71:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp42)));
// unreffing REF($67:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
*(&local3) = $tmp49;
goto block10;
block9:;
*(&local3) = $tmp39;
goto block10;
block10:;
frost$core$Bit $tmp50 = *(&local3);
bool $tmp51 = $tmp50.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp35)));
// unreffing REF($61:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp33)));
// unreffing REF($58:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
if ($tmp51) goto block6; else goto block7;
block6:;
// line 13
frost$core$MutableString* $tmp52 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp52, &$s53);
goto block7;
block7:;
// line 15
org$frostlang$frostc$Pair* $tmp54 = *(&local2);
frost$core$Object** $tmp55 = &$tmp54->second;
frost$core$Object* $tmp56 = *$tmp55;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp57;
$tmp57 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp57->value = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp56)->value;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp58 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp59;
$tmp59 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp59->value = $tmp58;
ITable* $tmp60 = ((frost$core$Equatable*) $tmp57)->$class->itable;
while ($tmp60->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp60 = $tmp60->next;
}
$fn62 $tmp61 = $tmp60->methods[1];
frost$core$Bit $tmp63 = $tmp61(((frost$core$Equatable*) $tmp57), ((frost$core$Equatable*) $tmp59));
bool $tmp64 = $tmp63.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp59)));
// unreffing REF($106:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp57)));
// unreffing REF($103:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
if ($tmp64) goto block11; else goto block12;
block11:;
// line 16
org$frostlang$frostc$Pair* $tmp65 = *(&local2);
frost$core$Object** $tmp66 = &$tmp65->second;
frost$core$Object* $tmp67 = *$tmp66;
*(&local1) = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp67)->value;
// line 17
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp68 = *(&local1);
frost$core$Int64 $tmp69 = $tmp68.$rawValue;
frost$core$Int64 $tmp70 = (frost$core$Int64) {0};
frost$core$Bit $tmp71 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp69, $tmp70);
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block14; else goto block15;
block14:;
goto block13;
block15:;
frost$core$Int64 $tmp73 = (frost$core$Int64) {1};
frost$core$Bit $tmp74 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp69, $tmp73);
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block16; else goto block17;
block17:;
frost$core$Int64 $tmp76 = (frost$core$Int64) {2};
frost$core$Bit $tmp77 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp69, $tmp76);
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block16; else goto block18;
block16:;
// line 22
frost$core$MutableString* $tmp79 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp79, &$s80);
goto block13;
block18:;
frost$core$Int64 $tmp81 = (frost$core$Int64) {3};
frost$core$Bit $tmp82 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp69, $tmp81);
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block19; else goto block20;
block19:;
// line 25
frost$core$MutableString* $tmp84 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp84, &$s85);
goto block13;
block20:;
frost$core$Int64 $tmp86 = (frost$core$Int64) {4};
frost$core$Bit $tmp87 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp69, $tmp86);
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block21; else goto block22;
block21:;
// line 28
frost$core$MutableString* $tmp89 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp89, &$s90);
goto block13;
block22:;
frost$core$Int64 $tmp91 = (frost$core$Int64) {5};
frost$core$Bit $tmp92 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp69, $tmp91);
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block23; else goto block24;
block23:;
// line 31
frost$core$MutableString* $tmp94 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp94, &$s95);
goto block13;
block24:;
frost$core$Int64 $tmp96 = (frost$core$Int64) {6};
frost$core$Bit $tmp97 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp69, $tmp96);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block25; else goto block26;
block25:;
// line 34
frost$core$MutableString* $tmp99 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp99, &$s100);
goto block13;
block26:;
frost$core$Int64 $tmp101 = (frost$core$Int64) {7};
frost$core$Bit $tmp102 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp69, $tmp101);
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block27; else goto block28;
block27:;
// line 37
frost$core$MutableString* $tmp104 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp104, &$s105);
goto block13;
block28:;
frost$core$Int64 $tmp106 = (frost$core$Int64) {8};
frost$core$Bit $tmp107 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp69, $tmp106);
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block29; else goto block30;
block29:;
// line 40
frost$core$MutableString* $tmp109 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp109, &$s110);
goto block13;
block30:;
frost$core$Int64 $tmp111 = (frost$core$Int64) {9};
frost$core$Bit $tmp112 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp69, $tmp111);
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block31; else goto block32;
block31:;
// line 43
frost$core$MutableString* $tmp114 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp114, &$s115);
goto block13;
block32:;
frost$core$Int64 $tmp116 = (frost$core$Int64) {10};
frost$core$Bit $tmp117 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp69, $tmp116);
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block33; else goto block34;
block33:;
// line 46
frost$core$MutableString* $tmp119 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp119, &$s120);
goto block13;
block34:;
frost$core$Int64 $tmp121 = (frost$core$Int64) {11};
frost$core$Bit $tmp122 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp69, $tmp121);
bool $tmp123 = $tmp122.value;
if ($tmp123) goto block35; else goto block36;
block35:;
// line 49
frost$core$MutableString* $tmp124 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp124, &$s125);
goto block13;
block36:;
frost$core$Int64 $tmp126 = (frost$core$Int64) {12};
frost$core$Bit $tmp127 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp69, $tmp126);
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block37; else goto block38;
block37:;
// line 52
frost$core$MutableString* $tmp129 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp129, &$s130);
goto block13;
block38:;
// line 55
frost$core$Bit $tmp131 = frost$core$Bit$init$builtin_bit(false);
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block39; else goto block40;
block40:;
frost$core$Int64 $tmp133 = (frost$core$Int64) {55};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s134, $tmp133);
abort(); // unreachable
block39:;
goto block13;
block13:;
goto block12;
block12:;
// line 59
frost$core$MutableString* $tmp135 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Pair* $tmp136 = *(&local2);
frost$core$Object** $tmp137 = &$tmp136->first;
frost$core$Object* $tmp138 = *$tmp137;
frost$core$String* $tmp139 = org$frostlang$frostc$parser$Parser$text$org$frostlang$frostc$parser$Token$R$frost$core$String(param1, ((org$frostlang$frostc$parser$Token$wrapper*) $tmp138)->value);
frost$core$MutableString$init$frost$core$String($tmp135, $tmp139);
*(&local4) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$core$MutableString* $tmp140 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
*(&local4) = $tmp135;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
// unreffing REF($240:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
// unreffing REF($234:frost.core.MutableString)
// line 60
frost$core$MutableString* $tmp141 = *(&local4);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp141, &$s142, &$s143);
// line 61
frost$core$MutableString* $tmp144 = *(&local4);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp144, &$s145, &$s146);
// line 62
frost$core$MutableString* $tmp147 = *(&local4);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp147, &$s148, &$s149);
// line 63
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp150 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp151;
$tmp151 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp151->value = $tmp150;
frost$core$Int64 $tmp152 = (frost$core$Int64) {1};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp153 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp152);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp154;
$tmp154 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp154->value = $tmp153;
ITable* $tmp155 = ((frost$core$Equatable*) $tmp151)->$class->itable;
while ($tmp155->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp155 = $tmp155->next;
}
$fn157 $tmp156 = $tmp155->methods[1];
frost$core$Bit $tmp158 = $tmp156(((frost$core$Equatable*) $tmp151), ((frost$core$Equatable*) $tmp154));
bool $tmp159 = $tmp158.value;
if ($tmp159) goto block43; else goto block44;
block43:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp160 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp161;
$tmp161 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp161->value = $tmp160;
frost$core$Int64 $tmp162 = (frost$core$Int64) {2};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp163 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp162);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp164;
$tmp164 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp164->value = $tmp163;
ITable* $tmp165 = ((frost$core$Equatable*) $tmp161)->$class->itable;
while ($tmp165->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp165 = $tmp165->next;
}
$fn167 $tmp166 = $tmp165->methods[1];
frost$core$Bit $tmp168 = $tmp166(((frost$core$Equatable*) $tmp161), ((frost$core$Equatable*) $tmp164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp164)));
// unreffing REF($280:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp161)));
// unreffing REF($276:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
*(&local5) = $tmp168;
goto block45;
block44:;
*(&local5) = $tmp158;
goto block45;
block45:;
frost$core$Bit $tmp169 = *(&local5);
bool $tmp170 = $tmp169.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp154)));
// unreffing REF($270:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp151)));
// unreffing REF($266:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
if ($tmp170) goto block41; else goto block42;
block41:;
// line 65
frost$core$MutableString* $tmp171 = *(&local0);
org$frostlang$frostc$Pair* $tmp172 = *(&local2);
frost$core$Object** $tmp173 = &$tmp172->first;
frost$core$Object* $tmp174 = *$tmp173;
org$frostlang$frostc$parser$Token$Kind $tmp175 = ((org$frostlang$frostc$parser$Token$wrapper*) $tmp174)->value.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp176;
$tmp176 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp176->value = $tmp175;
frost$core$String* $tmp177 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s178, ((frost$core$Object*) $tmp176));
frost$core$String* $tmp179 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp177, &$s180);
frost$core$MutableString$append$frost$core$String($tmp171, $tmp179);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
// unreffing REF($312:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
// unreffing REF($311:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
// unreffing REF($310:frost.core.Object)
goto block42;
block42:;
// line 67
frost$core$MutableString* $tmp181 = *(&local0);
frost$core$MutableString* $tmp182 = *(&local4);
frost$core$MutableString$append$frost$core$Object($tmp181, ((frost$core$Object*) $tmp182));
// line 68
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp183 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp184;
$tmp184 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp184->value = $tmp183;
frost$core$Int64 $tmp185 = (frost$core$Int64) {1};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp186 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp185);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp187;
$tmp187 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp187->value = $tmp186;
ITable* $tmp188 = ((frost$core$Equatable*) $tmp184)->$class->itable;
while ($tmp188->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp188 = $tmp188->next;
}
$fn190 $tmp189 = $tmp188->methods[1];
frost$core$Bit $tmp191 = $tmp189(((frost$core$Equatable*) $tmp184), ((frost$core$Equatable*) $tmp187));
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block48; else goto block49;
block48:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp193 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp194;
$tmp194 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp194->value = $tmp193;
frost$core$Int64 $tmp195 = (frost$core$Int64) {2};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp196 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp195);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp197;
$tmp197 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp197->value = $tmp196;
ITable* $tmp198 = ((frost$core$Equatable*) $tmp194)->$class->itable;
while ($tmp198->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp198 = $tmp198->next;
}
$fn200 $tmp199 = $tmp198->methods[1];
frost$core$Bit $tmp201 = $tmp199(((frost$core$Equatable*) $tmp194), ((frost$core$Equatable*) $tmp197));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp197)));
// unreffing REF($345:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp194)));
// unreffing REF($341:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
*(&local6) = $tmp201;
goto block50;
block49:;
*(&local6) = $tmp191;
goto block50;
block50:;
frost$core$Bit $tmp202 = *(&local6);
bool $tmp203 = $tmp202.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp187)));
// unreffing REF($335:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp184)));
// unreffing REF($331:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
if ($tmp203) goto block46; else goto block47;
block46:;
// line 70
frost$core$MutableString* $tmp204 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp204, &$s205);
goto block47;
block47:;
frost$core$MutableString* $tmp206 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
// unreffing s
*(&local4) = ((frost$core$MutableString*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp28);
// unreffing REF($44:frost.collections.Iterator.T)
org$frostlang$frostc$Pair* $tmp207 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
// unreffing t
*(&local2) = ((org$frostlang$frostc$Pair*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
// unreffing REF($33:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 73
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp208 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp209;
$tmp209 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp209->value = $tmp208;
frost$core$Int64 $tmp210 = (frost$core$Int64) {0};
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp211 = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int64($tmp210);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp212;
$tmp212 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp212->value = $tmp211;
ITable* $tmp213 = ((frost$core$Equatable*) $tmp209)->$class->itable;
while ($tmp213->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp213 = $tmp213->next;
}
$fn215 $tmp214 = $tmp213->methods[1];
frost$core$Bit $tmp216 = $tmp214(((frost$core$Equatable*) $tmp209), ((frost$core$Equatable*) $tmp212));
bool $tmp217 = $tmp216.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp212)));
// unreffing REF($394:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp209)));
// unreffing REF($390:frost.core.Equatable<org.frostlang.frostc.parser.SyntaxHighlighter.Kind>)
if ($tmp217) goto block51; else goto block52;
block51:;
// line 74
frost$core$MutableString* $tmp218 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp218, &$s219);
goto block52;
block52:;
// line 76
frost$core$MutableString* $tmp220 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp220, &$s221);
// line 77
frost$core$MutableString* $tmp222 = *(&local0);
frost$core$String* $tmp223 = frost$core$MutableString$finish$R$frost$core$String($tmp222);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
// unreffing REF($414:frost.core.String)
frost$core$MutableString* $tmp224 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp223;

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
frost$threads$MessageQueue* $tmp225 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp225);
*(&local0) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
frost$threads$MessageQueue* $tmp226 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
*(&local0) = $tmp225;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
// unreffing REF($1:frost.threads.MessageQueue<org.frostlang.frostc.Compiler.Error>)
// line 82
org$frostlang$frostc$parser$Parser* $tmp227 = (org$frostlang$frostc$parser$Parser*) frostObjectAlloc(96, (frost$core$Class*) &org$frostlang$frostc$parser$Parser$class);
frost$threads$MessageQueue* $tmp228 = *(&local0);
org$frostlang$frostc$parser$Parser$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Error$GT($tmp227, $tmp228);
*(&local1) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
org$frostlang$frostc$parser$Parser* $tmp229 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
*(&local1) = $tmp227;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
// unreffing REF($15:org.frostlang.frostc.parser.Parser)
// line 83
org$frostlang$frostc$parser$Parser* $tmp230 = *(&local1);
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp231 = (org$frostlang$frostc$parser$SyntaxHighlighter*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$class);
org$frostlang$frostc$parser$SyntaxHighlighter$init($tmp231);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp232 = &$tmp230->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp233 = *$tmp232;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp234 = &$tmp230->syntaxHighlighter;
*$tmp234 = $tmp231;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
// unreffing REF($30:org.frostlang.frostc.parser.SyntaxHighlighter)
// line 84
org$frostlang$frostc$parser$Parser* $tmp235 = *(&local1);
frost$core$String* $tmp236 = frost$io$File$readFully$R$frost$core$String(param1);
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$String($tmp235, param1, $tmp236);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
// unreffing REF($46:frost.core.String)
// line 85
org$frostlang$frostc$parser$Parser* $tmp237 = *(&local1);
org$frostlang$frostc$ASTNode* $tmp238 = org$frostlang$frostc$parser$Parser$file$R$org$frostlang$frostc$ASTNode$Q($tmp237);
frost$core$Bit $tmp239 = frost$core$Bit$init$builtin_bit($tmp238 == NULL);
bool $tmp240 = $tmp239.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
// unreffing REF($53:org.frostlang.frostc.ASTNode?)
if ($tmp240) goto block1; else goto block2;
block1:;
// line 86
goto block3;
block3:;
frost$threads$MessageQueue* $tmp241 = *(&local0);
frost$core$Bit $tmp242 = frost$threads$MessageQueue$hasMessage$R$frost$core$Bit($tmp241);
bool $tmp243 = $tmp242.value;
if ($tmp243) goto block4; else goto block5;
block4:;
// line 87
frost$threads$MessageQueue* $tmp244 = *(&local0);
frost$core$Immutable* $tmp245 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp244);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Error*) $tmp245)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
// unreffing REF($71:frost.threads.MessageQueue.T)
goto block3;
block5:;
goto block2;
block2:;
// line 90
org$frostlang$frostc$parser$Parser* $tmp246 = *(&local1);
frost$core$String* $tmp247 = org$frostlang$frostc$HTMLProcessor$prettyPrint$org$frostlang$frostc$parser$Parser$R$frost$core$String(param0, $tmp246);
frost$collections$Array* $tmp248 = frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT($tmp247, &$s249);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
frost$collections$Array* $tmp250 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
*(&local2) = $tmp248;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
// unreffing REF($83:frost.collections.Array<frost.core.String>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
// unreffing REF($82:frost.core.String)
// line 91
frost$collections$Array* $tmp251 = *(&local2);
ITable* $tmp252 = ((frost$collections$CollectionView*) $tmp251)->$class->itable;
while ($tmp252->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp252 = $tmp252->next;
}
$fn254 $tmp253 = $tmp252->methods[0];
frost$core$Int64 $tmp255 = $tmp253(((frost$collections$CollectionView*) $tmp251));
frost$core$String* $tmp256 = frost$core$Int64$convert$R$frost$core$String($tmp255);
frost$core$Int64 $tmp257 = frost$core$String$get_length$R$frost$core$Int64($tmp256);
*(&local3) = $tmp257;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
// unreffing REF($102:frost.core.String)
// line 92
frost$core$MutableString* $tmp258 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp258);
*(&local4) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
frost$core$MutableString* $tmp259 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
*(&local4) = $tmp258;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
// unreffing REF($109:frost.core.MutableString)
// line 93
frost$core$Int64 $tmp260 = (frost$core$Int64) {0};
frost$collections$Array* $tmp261 = *(&local2);
ITable* $tmp262 = ((frost$collections$CollectionView*) $tmp261)->$class->itable;
while ($tmp262->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp262 = $tmp262->next;
}
$fn264 $tmp263 = $tmp262->methods[0];
frost$core$Int64 $tmp265 = $tmp263(((frost$collections$CollectionView*) $tmp261));
frost$core$Bit $tmp266 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp267 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp260, $tmp265, $tmp266);
frost$core$Int64 $tmp268 = $tmp267.min;
*(&local5) = $tmp268;
frost$core$Int64 $tmp269 = $tmp267.max;
frost$core$Bit $tmp270 = $tmp267.inclusive;
bool $tmp271 = $tmp270.value;
frost$core$Int64 $tmp272 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp273 = frost$core$Int64$convert$R$frost$core$UInt64($tmp272);
if ($tmp271) goto block9; else goto block10;
block9:;
int64_t $tmp274 = $tmp268.value;
int64_t $tmp275 = $tmp269.value;
bool $tmp276 = $tmp274 <= $tmp275;
frost$core$Bit $tmp277 = (frost$core$Bit) {$tmp276};
bool $tmp278 = $tmp277.value;
if ($tmp278) goto block6; else goto block7;
block10:;
int64_t $tmp279 = $tmp268.value;
int64_t $tmp280 = $tmp269.value;
bool $tmp281 = $tmp279 < $tmp280;
frost$core$Bit $tmp282 = (frost$core$Bit) {$tmp281};
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block6; else goto block7;
block6:;
// line 94
frost$core$Int64 $tmp284 = *(&local5);
frost$core$Int64 $tmp285 = (frost$core$Int64) {1};
int64_t $tmp286 = $tmp284.value;
int64_t $tmp287 = $tmp285.value;
int64_t $tmp288 = $tmp286 + $tmp287;
frost$core$Int64 $tmp289 = (frost$core$Int64) {$tmp288};
frost$core$String* $tmp290 = frost$core$Int64$convert$R$frost$core$String($tmp289);
frost$core$Int64 $tmp291 = *(&local3);
frost$core$String* $tmp292 = frost$core$String$rightAlign$frost$core$Int64$R$frost$core$String($tmp290, $tmp291);
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
frost$core$String* $tmp293 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
*(&local6) = $tmp292;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
// unreffing REF($158:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
// unreffing REF($156:frost.core.String)
// line 95
frost$core$MutableString* $tmp294 = *(&local4);
frost$core$String* $tmp295 = *(&local6);
frost$core$String* $tmp296 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s297, $tmp295);
frost$core$String* $tmp298 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp296, &$s299);
frost$collections$Array* $tmp300 = *(&local2);
frost$core$Int64 $tmp301 = *(&local5);
frost$core$Object* $tmp302 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp300, $tmp301);
frost$core$String* $tmp303 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp298, ((frost$core$String*) $tmp302));
frost$core$String* $tmp304 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp303, &$s305);
frost$core$MutableString$append$frost$core$String($tmp294, $tmp304);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
// unreffing REF($183:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
// unreffing REF($182:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp302);
// unreffing REF($180:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
// unreffing REF($176:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
// unreffing REF($175:frost.core.String)
frost$core$String* $tmp306 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
// unreffing lineNumber
*(&local6) = ((frost$core$String*) NULL);
goto block8;
block8:;
frost$core$Int64 $tmp307 = *(&local5);
int64_t $tmp308 = $tmp269.value;
int64_t $tmp309 = $tmp307.value;
int64_t $tmp310 = $tmp308 - $tmp309;
frost$core$Int64 $tmp311 = (frost$core$Int64) {$tmp310};
frost$core$UInt64 $tmp312 = frost$core$Int64$convert$R$frost$core$UInt64($tmp311);
if ($tmp271) goto block12; else goto block13;
block12:;
uint64_t $tmp313 = $tmp312.value;
uint64_t $tmp314 = $tmp273.value;
bool $tmp315 = $tmp313 >= $tmp314;
frost$core$Bit $tmp316 = (frost$core$Bit) {$tmp315};
bool $tmp317 = $tmp316.value;
if ($tmp317) goto block11; else goto block7;
block13:;
uint64_t $tmp318 = $tmp312.value;
uint64_t $tmp319 = $tmp273.value;
bool $tmp320 = $tmp318 > $tmp319;
frost$core$Bit $tmp321 = (frost$core$Bit) {$tmp320};
bool $tmp322 = $tmp321.value;
if ($tmp322) goto block11; else goto block7;
block11:;
int64_t $tmp323 = $tmp307.value;
int64_t $tmp324 = $tmp272.value;
int64_t $tmp325 = $tmp323 + $tmp324;
frost$core$Int64 $tmp326 = (frost$core$Int64) {$tmp325};
*(&local5) = $tmp326;
goto block6;
block7:;
// line 97
frost$io$OutputStream* $tmp327 = frost$io$File$openOutputStream$R$frost$io$OutputStream(param2);
*(&local7) = ((frost$io$OutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
frost$io$OutputStream* $tmp328 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
*(&local7) = $tmp327;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
// unreffing REF($232:frost.io.OutputStream)
// line 98
frost$io$OutputStream* $tmp329 = *(&local7);
$fn331 $tmp330 = ($fn331) $tmp329->$class->vtable[19];
$tmp330($tmp329, &$s332);
// line 99
frost$io$OutputStream* $tmp333 = *(&local7);
$fn335 $tmp334 = ($fn335) $tmp333->$class->vtable[19];
$tmp334($tmp333, &$s336);
// line 100
frost$io$OutputStream* $tmp337 = *(&local7);
frost$core$String* $tmp338 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s339, param3);
frost$core$String* $tmp340 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp338, &$s341);
$fn343 $tmp342 = ($fn343) $tmp337->$class->vtable[19];
$tmp342($tmp337, $tmp340);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
// unreffing REF($254:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
// unreffing REF($253:frost.core.String)
// line 101
frost$io$OutputStream* $tmp344 = *(&local7);
frost$core$String* $tmp345 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s346, param3);
frost$core$String* $tmp347 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp345, &$s348);
$fn350 $tmp349 = ($fn350) $tmp344->$class->vtable[19];
$tmp349($tmp344, $tmp347);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
// unreffing REF($266:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
// unreffing REF($265:frost.core.String)
// line 102
frost$io$OutputStream* $tmp351 = *(&local7);
frost$core$String* $tmp352 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s353, param3);
frost$core$String* $tmp354 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp352, &$s355);
$fn357 $tmp356 = ($fn357) $tmp351->$class->vtable[19];
$tmp356($tmp351, $tmp354);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
// unreffing REF($278:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
// unreffing REF($277:frost.core.String)
// line 103
frost$io$OutputStream* $tmp358 = *(&local7);
$fn360 $tmp359 = ($fn360) $tmp358->$class->vtable[19];
$tmp359($tmp358, &$s361);
// line 104
frost$io$OutputStream* $tmp362 = *(&local7);
$fn364 $tmp363 = ($fn364) $tmp362->$class->vtable[19];
$tmp363($tmp362, &$s365);
// line 105
frost$io$OutputStream* $tmp366 = *(&local7);
$fn368 $tmp367 = ($fn368) $tmp366->$class->vtable[19];
$tmp367($tmp366, &$s369);
// line 106
frost$io$OutputStream* $tmp370 = *(&local7);
$fn372 $tmp371 = ($fn372) $tmp370->$class->vtable[19];
$tmp371($tmp370, &$s373);
// line 107
frost$io$OutputStream* $tmp374 = *(&local7);
$fn376 $tmp375 = ($fn376) $tmp374->$class->vtable[19];
$tmp375($tmp374, &$s377);
// line 108
frost$io$OutputStream* $tmp378 = *(&local7);
$fn380 $tmp379 = ($fn380) $tmp378->$class->vtable[19];
$tmp379($tmp378, &$s381);
// line 109
frost$io$OutputStream* $tmp382 = *(&local7);
frost$core$MutableString* $tmp383 = *(&local4);
frost$core$String* $tmp384 = frost$core$MutableString$finish$R$frost$core$String($tmp383);
$fn386 $tmp385 = ($fn386) $tmp382->$class->vtable[17];
$tmp385($tmp382, $tmp384);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
// unreffing REF($314:frost.core.String)
// line 110
frost$io$OutputStream* $tmp387 = *(&local7);
$fn389 $tmp388 = ($fn389) $tmp387->$class->vtable[19];
$tmp388($tmp387, &$s390);
// line 111
frost$io$OutputStream* $tmp391 = *(&local7);
$fn393 $tmp392 = ($fn393) $tmp391->$class->vtable[19];
$tmp392($tmp391, &$s394);
// line 112
frost$io$OutputStream* $tmp395 = *(&local7);
$fn397 $tmp396 = ($fn397) $tmp395->$class->vtable[19];
$tmp396($tmp395, &$s398);
// line 113
frost$io$OutputStream* $tmp399 = *(&local7);
$fn401 $tmp400 = ($fn401) $tmp399->$class->vtable[19];
$tmp400($tmp399, &$s402);
// line 114
frost$io$OutputStream* $tmp403 = *(&local7);
$fn405 $tmp404 = ($fn405) $tmp403->$class->vtable[19];
$tmp404($tmp403, &$s406);
frost$io$OutputStream* $tmp407 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
// unreffing out
*(&local7) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp408 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
// unreffing highlighted
*(&local4) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp409 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
// unreffing lines
*(&local2) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp410 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
// unreffing parser
*(&local1) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp411 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
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

