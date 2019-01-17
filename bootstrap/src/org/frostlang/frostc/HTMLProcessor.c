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
#include "frost/core/UInt8.h"
#include "frost/core/System.h"


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
typedef frost$core$Int64 (*$fn264)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn274)(frost$collections$CollectionView*);
typedef void (*$fn353)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn357)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn365)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn372)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn379)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn382)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn386)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn390)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn394)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn398)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn402)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn408)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn411)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn415)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn419)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn423)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn427)(frost$io$OutputStream*, frost$core$String*);

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
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s307 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x6e\x65\x4e\x75\x6d\x62\x65\x72\x22\x3e", 25, 2886294917360451169, NULL };
static frost$core$String $s309 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e\x20\x20", 9, 1748561594372514868, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x0a", 1, 111, NULL };
static frost$core$String $s354 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x68\x74\x6d\x6c\x3e", 6, 1703069100160, NULL };
static frost$core$String $s358 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x3c\x68\x65\x61\x64\x3e", 8, 14294010361214289, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, 658568770330923109, NULL };
static frost$core$String $s363 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x66\x72\x6f\x73\x74\x2d\x6d\x61\x69\x6e\x2e\x63\x73\x73\x22\x20\x2f\x3e", 19, 3064929400175920806, NULL };
static frost$core$String $s368 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, 658568770330923109, NULL };
static frost$core$String $s370 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x66\x72\x6f\x73\x74\x2d\x73\x6f\x75\x72\x63\x65\x2e\x63\x73\x73\x22\x20\x2f\x3e", 21, 3133109499844102022, NULL };
static frost$core$String $s375 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, 658568770330923109, NULL };
static frost$core$String $s377 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x66\x72\x6f\x73\x74\x63\x6f\x64\x65\x2d\x6d\x6f\x6e\x6f\x6b\x61\x69\x2e\x63\x73\x73\x22\x20\x2f\x3e", 26, 3895617789714049510, NULL };
static frost$core$String $s383 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x3c\x2f\x68\x65\x61\x64\x3e", 9, 1443694447723190336, NULL };
static frost$core$String $s387 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x3c\x62\x6f\x64\x79\x3e", 8, 14294009747187617, NULL };
static frost$core$String $s391 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x64\x69\x76\x20\x69\x64\x3d\x22\x6d\x61\x69\x6e\x22\x3e", 19, 7391579857894992237, NULL };
static frost$core$String $s395 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x21\x2d\x2d\x54\x4f\x43\x42\x45\x47\x49\x4e\x2d\x2d\x3e\x3c\x21\x2d\x2d\x54\x4f\x43\x45\x4e\x44\x2d\x2d\x3e", 34, -1824120810441054265, NULL };
static frost$core$String $s399 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x64\x69\x76\x20\x69\x64\x3d\x22\x63\x6f\x6e\x74\x65\x6e\x74\x22\x3e", 24, -2483733496706816761, NULL };
static frost$core$String $s403 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20\x3c\x70\x72\x65\x3e\x3c\x63\x6f\x64\x65\x20\x63\x6c\x61\x73\x73\x3d\x22\x66\x72\x6f\x73\x74\x63\x6f\x64\x65\x22\x3e", 37, 1338010830594487803, NULL };
static frost$core$String $s412 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20\x3c\x2f\x63\x6f\x64\x65\x3e\x3c\x2f\x70\x72\x65\x3e", 21, 7252662077213941825, NULL };
static frost$core$String $s416 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x2f\x64\x69\x76\x3e", 12, -7275120926329646243, NULL };
static frost$core$String $s420 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x2f\x64\x69\x76\x3e", 10, -1763831739482883707, NULL };
static frost$core$String $s424 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x3c\x2f\x62\x6f\x64\x79\x3e", 9, 1443694447109163664, NULL };
static frost$core$String $s428 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x2f\x68\x74\x6d\x6c\x3e", 7, 171409661889807, NULL };

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
frost$threads$MessageQueue* $tmp225 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp225);
*(&local1) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
frost$threads$MessageQueue* $tmp226 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
*(&local1) = $tmp225;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
// unreffing REF($3:frost.threads.MessageQueue<org.frostlang.frostc.Compiler.ErrorMsg>)
// line 83
org$frostlang$frostc$parser$Parser* $tmp227 = (org$frostlang$frostc$parser$Parser*) frostObjectAlloc(96, (frost$core$Class*) &org$frostlang$frostc$parser$Parser$class);
frost$threads$MessageQueue* $tmp228 = *(&local1);
org$frostlang$frostc$parser$Parser$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$ErrorMsg$GT($tmp227, $tmp228);
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
org$frostlang$frostc$parser$Parser* $tmp229 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
*(&local2) = $tmp227;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
// unreffing REF($17:org.frostlang.frostc.parser.Parser)
// line 84
org$frostlang$frostc$parser$Parser* $tmp230 = *(&local2);
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp231 = (org$frostlang$frostc$parser$SyntaxHighlighter*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$class);
org$frostlang$frostc$parser$SyntaxHighlighter$init($tmp231);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp232 = &$tmp230->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp233 = *$tmp232;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp234 = &$tmp230->syntaxHighlighter;
*$tmp234 = $tmp231;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
// unreffing REF($32:org.frostlang.frostc.parser.SyntaxHighlighter)
// line 85
org$frostlang$frostc$parser$Parser* $tmp235 = *(&local2);
frost$core$Maybe* $tmp236 = frost$io$File$readFully$R$frost$core$Maybe$LTfrost$core$String$GT(param1);
// try maybe check
frost$core$Int64* $tmp237 = &$tmp236->$rawValue;
frost$core$Int64 $tmp238 = *$tmp237;
int64_t $tmp239 = $tmp238.value;
bool $tmp240 = $tmp239 == 0;
if ($tmp240) goto block3; else goto block4;
block4:;
frost$core$Error** $tmp241 = (frost$core$Error**) ($tmp236->$data + 0);
frost$core$Error* $tmp242 = *$tmp241;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
*(&local0) = $tmp242;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
// unreffing REF($48:frost.core.Maybe<frost.core.String>)
org$frostlang$frostc$parser$Parser* $tmp243 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
// unreffing parser
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp244 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
// unreffing errors
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block3:;
frost$core$Object** $tmp245 = (frost$core$Object**) ($tmp236->$data + 0);
frost$core$Object* $tmp246 = *$tmp245;
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$String($tmp235, param1, ((frost$core$String*) $tmp246));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
// unreffing REF($48:frost.core.Maybe<frost.core.String>)
// line 86
org$frostlang$frostc$parser$Parser* $tmp247 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp248 = org$frostlang$frostc$parser$Parser$file$R$org$frostlang$frostc$ASTNode$Q($tmp247);
frost$core$Bit $tmp249 = frost$core$Bit$init$builtin_bit($tmp248 == NULL);
bool $tmp250 = $tmp249.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
// unreffing REF($84:org.frostlang.frostc.ASTNode?)
if ($tmp250) goto block5; else goto block6;
block5:;
// line 87
goto block7;
block7:;
frost$threads$MessageQueue* $tmp251 = *(&local1);
frost$core$Bit $tmp252 = frost$threads$MessageQueue$hasMessage$R$frost$core$Bit($tmp251);
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block8; else goto block9;
block8:;
// line 88
frost$threads$MessageQueue* $tmp254 = *(&local1);
frost$core$Immutable* $tmp255 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp254);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) ((org$frostlang$frostc$Compiler$ErrorMsg*) $tmp255)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
// unreffing REF($102:frost.threads.MessageQueue.T)
goto block7;
block9:;
goto block6;
block6:;
// line 91
org$frostlang$frostc$parser$Parser* $tmp256 = *(&local2);
frost$core$String* $tmp257 = org$frostlang$frostc$HTMLProcessor$prettyPrint$org$frostlang$frostc$parser$Parser$R$frost$core$String(param0, $tmp256);
frost$collections$Array* $tmp258 = frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT($tmp257, &$s259);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
frost$collections$Array* $tmp260 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
*(&local3) = $tmp258;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
// unreffing REF($114:frost.collections.Array<frost.core.String>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
// unreffing REF($113:frost.core.String)
// line 92
frost$collections$Array* $tmp261 = *(&local3);
ITable* $tmp262 = ((frost$collections$CollectionView*) $tmp261)->$class->itable;
while ($tmp262->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp262 = $tmp262->next;
}
$fn264 $tmp263 = $tmp262->methods[0];
frost$core$Int64 $tmp265 = $tmp263(((frost$collections$CollectionView*) $tmp261));
frost$core$String* $tmp266 = frost$core$Int64$convert$R$frost$core$String($tmp265);
frost$core$Int64 $tmp267 = frost$core$String$get_length$R$frost$core$Int64($tmp266);
*(&local4) = $tmp267;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
// unreffing REF($133:frost.core.String)
// line 93
frost$core$MutableString* $tmp268 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp268);
*(&local5) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
frost$core$MutableString* $tmp269 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
*(&local5) = $tmp268;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
// unreffing REF($140:frost.core.MutableString)
// line 94
frost$core$Int64 $tmp270 = (frost$core$Int64) {0};
frost$collections$Array* $tmp271 = *(&local3);
ITable* $tmp272 = ((frost$collections$CollectionView*) $tmp271)->$class->itable;
while ($tmp272->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp272 = $tmp272->next;
}
$fn274 $tmp273 = $tmp272->methods[0];
frost$core$Int64 $tmp275 = $tmp273(((frost$collections$CollectionView*) $tmp271));
frost$core$Bit $tmp276 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp277 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp270, $tmp275, $tmp276);
frost$core$Int64 $tmp278 = $tmp277.min;
*(&local6) = $tmp278;
frost$core$Int64 $tmp279 = $tmp277.max;
frost$core$Bit $tmp280 = $tmp277.inclusive;
bool $tmp281 = $tmp280.value;
frost$core$Int64 $tmp282 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp283 = frost$core$Int64$convert$R$frost$core$UInt64($tmp282);
if ($tmp281) goto block13; else goto block14;
block13:;
int64_t $tmp284 = $tmp278.value;
int64_t $tmp285 = $tmp279.value;
bool $tmp286 = $tmp284 <= $tmp285;
frost$core$Bit $tmp287 = (frost$core$Bit) {$tmp286};
bool $tmp288 = $tmp287.value;
if ($tmp288) goto block10; else goto block11;
block14:;
int64_t $tmp289 = $tmp278.value;
int64_t $tmp290 = $tmp279.value;
bool $tmp291 = $tmp289 < $tmp290;
frost$core$Bit $tmp292 = (frost$core$Bit) {$tmp291};
bool $tmp293 = $tmp292.value;
if ($tmp293) goto block10; else goto block11;
block10:;
// line 95
frost$core$Int64 $tmp294 = *(&local6);
frost$core$Int64 $tmp295 = (frost$core$Int64) {1};
int64_t $tmp296 = $tmp294.value;
int64_t $tmp297 = $tmp295.value;
int64_t $tmp298 = $tmp296 + $tmp297;
frost$core$Int64 $tmp299 = (frost$core$Int64) {$tmp298};
frost$core$String* $tmp300 = frost$core$Int64$convert$R$frost$core$String($tmp299);
frost$core$Int64 $tmp301 = *(&local4);
frost$core$String* $tmp302 = frost$core$String$rightAlign$frost$core$Int64$R$frost$core$String($tmp300, $tmp301);
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
frost$core$String* $tmp303 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
*(&local7) = $tmp302;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
// unreffing REF($189:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp300));
// unreffing REF($187:frost.core.String)
// line 96
frost$core$MutableString* $tmp304 = *(&local5);
frost$core$String* $tmp305 = *(&local7);
frost$core$String* $tmp306 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s307, $tmp305);
frost$core$String* $tmp308 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp306, &$s309);
frost$collections$Array* $tmp310 = *(&local3);
frost$core$Int64 $tmp311 = *(&local6);
frost$core$Object* $tmp312 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp310, $tmp311);
frost$core$String* $tmp313 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp308, ((frost$core$String*) $tmp312));
frost$core$String* $tmp314 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp313, &$s315);
frost$core$MutableString$append$frost$core$String($tmp304, $tmp314);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
// unreffing REF($214:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
// unreffing REF($213:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q($tmp312);
// unreffing REF($211:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
// unreffing REF($207:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
// unreffing REF($206:frost.core.String)
frost$core$String* $tmp316 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
// unreffing lineNumber
*(&local7) = ((frost$core$String*) NULL);
goto block12;
block12:;
frost$core$Int64 $tmp317 = *(&local6);
int64_t $tmp318 = $tmp279.value;
int64_t $tmp319 = $tmp317.value;
int64_t $tmp320 = $tmp318 - $tmp319;
frost$core$Int64 $tmp321 = (frost$core$Int64) {$tmp320};
frost$core$UInt64 $tmp322 = frost$core$Int64$convert$R$frost$core$UInt64($tmp321);
if ($tmp281) goto block16; else goto block17;
block16:;
uint64_t $tmp323 = $tmp322.value;
uint64_t $tmp324 = $tmp283.value;
bool $tmp325 = $tmp323 >= $tmp324;
frost$core$Bit $tmp326 = (frost$core$Bit) {$tmp325};
bool $tmp327 = $tmp326.value;
if ($tmp327) goto block15; else goto block11;
block17:;
uint64_t $tmp328 = $tmp322.value;
uint64_t $tmp329 = $tmp283.value;
bool $tmp330 = $tmp328 > $tmp329;
frost$core$Bit $tmp331 = (frost$core$Bit) {$tmp330};
bool $tmp332 = $tmp331.value;
if ($tmp332) goto block15; else goto block11;
block15:;
int64_t $tmp333 = $tmp317.value;
int64_t $tmp334 = $tmp282.value;
int64_t $tmp335 = $tmp333 + $tmp334;
frost$core$Int64 $tmp336 = (frost$core$Int64) {$tmp335};
*(&local6) = $tmp336;
goto block10;
block11:;
// line 98
frost$core$Maybe* $tmp337 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT(param2);
// try maybe check
frost$core$Int64* $tmp338 = &$tmp337->$rawValue;
frost$core$Int64 $tmp339 = *$tmp338;
int64_t $tmp340 = $tmp339.value;
bool $tmp341 = $tmp340 == 0;
if ($tmp341) goto block18; else goto block19;
block19:;
frost$core$Error** $tmp342 = (frost$core$Error**) ($tmp337->$data + 0);
frost$core$Error* $tmp343 = *$tmp342;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
*(&local0) = $tmp343;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
// unreffing REF($263:frost.core.Maybe<frost.io.OutputStream>)
frost$core$MutableString* $tmp344 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
// unreffing highlighted
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp345 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
// unreffing lines
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp346 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
// unreffing parser
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp347 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
// unreffing errors
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block18:;
frost$core$Object** $tmp348 = (frost$core$Object**) ($tmp337->$data + 0);
frost$core$Object* $tmp349 = *$tmp348;
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$OutputStream*) $tmp349)));
frost$io$OutputStream* $tmp350 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
*(&local8) = ((frost$io$OutputStream*) $tmp349);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
// unreffing REF($263:frost.core.Maybe<frost.io.OutputStream>)
// line 99
frost$io$OutputStream* $tmp351 = *(&local8);
$fn353 $tmp352 = ($fn353) $tmp351->$class->vtable[19];
$tmp352($tmp351, &$s354);
// line 100
frost$io$OutputStream* $tmp355 = *(&local8);
$fn357 $tmp356 = ($fn357) $tmp355->$class->vtable[19];
$tmp356($tmp355, &$s358);
// line 101
frost$io$OutputStream* $tmp359 = *(&local8);
frost$core$String* $tmp360 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s361, param3);
frost$core$String* $tmp362 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp360, &$s363);
$fn365 $tmp364 = ($fn365) $tmp359->$class->vtable[19];
$tmp364($tmp359, $tmp362);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp362));
// unreffing REF($324:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
// unreffing REF($323:frost.core.String)
// line 102
frost$io$OutputStream* $tmp366 = *(&local8);
frost$core$String* $tmp367 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s368, param3);
frost$core$String* $tmp369 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp367, &$s370);
$fn372 $tmp371 = ($fn372) $tmp366->$class->vtable[19];
$tmp371($tmp366, $tmp369);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp369));
// unreffing REF($336:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
// unreffing REF($335:frost.core.String)
// line 103
frost$io$OutputStream* $tmp373 = *(&local8);
frost$core$String* $tmp374 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s375, param3);
frost$core$String* $tmp376 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp374, &$s377);
$fn379 $tmp378 = ($fn379) $tmp373->$class->vtable[19];
$tmp378($tmp373, $tmp376);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
// unreffing REF($348:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp374));
// unreffing REF($347:frost.core.String)
// line 104
frost$io$OutputStream* $tmp380 = *(&local8);
$fn382 $tmp381 = ($fn382) $tmp380->$class->vtable[19];
$tmp381($tmp380, &$s383);
// line 105
frost$io$OutputStream* $tmp384 = *(&local8);
$fn386 $tmp385 = ($fn386) $tmp384->$class->vtable[19];
$tmp385($tmp384, &$s387);
// line 106
frost$io$OutputStream* $tmp388 = *(&local8);
$fn390 $tmp389 = ($fn390) $tmp388->$class->vtable[19];
$tmp389($tmp388, &$s391);
// line 107
frost$io$OutputStream* $tmp392 = *(&local8);
$fn394 $tmp393 = ($fn394) $tmp392->$class->vtable[19];
$tmp393($tmp392, &$s395);
// line 108
frost$io$OutputStream* $tmp396 = *(&local8);
$fn398 $tmp397 = ($fn398) $tmp396->$class->vtable[19];
$tmp397($tmp396, &$s399);
// line 109
frost$io$OutputStream* $tmp400 = *(&local8);
$fn402 $tmp401 = ($fn402) $tmp400->$class->vtable[19];
$tmp401($tmp400, &$s403);
// line 110
frost$io$OutputStream* $tmp404 = *(&local8);
frost$core$MutableString* $tmp405 = *(&local5);
frost$core$String* $tmp406 = frost$core$MutableString$finish$R$frost$core$String($tmp405);
$fn408 $tmp407 = ($fn408) $tmp404->$class->vtable[17];
$tmp407($tmp404, $tmp406);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
// unreffing REF($384:frost.core.String)
// line 111
frost$io$OutputStream* $tmp409 = *(&local8);
$fn411 $tmp410 = ($fn411) $tmp409->$class->vtable[19];
$tmp410($tmp409, &$s412);
// line 112
frost$io$OutputStream* $tmp413 = *(&local8);
$fn415 $tmp414 = ($fn415) $tmp413->$class->vtable[19];
$tmp414($tmp413, &$s416);
// line 113
frost$io$OutputStream* $tmp417 = *(&local8);
$fn419 $tmp418 = ($fn419) $tmp417->$class->vtable[19];
$tmp418($tmp417, &$s420);
// line 114
frost$io$OutputStream* $tmp421 = *(&local8);
$fn423 $tmp422 = ($fn423) $tmp421->$class->vtable[19];
$tmp422($tmp421, &$s424);
// line 115
frost$io$OutputStream* $tmp425 = *(&local8);
$fn427 $tmp426 = ($fn427) $tmp425->$class->vtable[19];
$tmp426($tmp425, &$s428);
frost$io$OutputStream* $tmp429 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
// unreffing out
*(&local8) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp430 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
// unreffing highlighted
*(&local5) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp431 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
// unreffing lines
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp432 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
// unreffing parser
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp433 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
// unreffing errors
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block2;
block1:;
// line 118
frost$core$Error* $tmp434 = *(&local0);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp434));
// line 119
frost$core$UInt8 $tmp435 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp435);
goto block2;
block2:;
frost$core$Error* $tmp436 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
// unreffing error
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

