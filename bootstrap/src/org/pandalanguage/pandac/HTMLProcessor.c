#include "org/pandalanguage/pandac/HTMLProcessor.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/parser/Parser.h"
#include "panda/core/MutableString.h"
#include "org/pandalanguage/pandac/parser/SyntaxHighlighter/Kind.h"
#include "org/pandalanguage/pandac/Pair.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/parser/SyntaxHighlighter.h"
#include "panda/collections/Array.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Equatable.h"
#include "org/pandalanguage/pandac/parser/Token.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "panda/io/File.h"
#include "panda/threads/MessageQueue.h"
#include "panda/io/OutputStream.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Immutable.h"
#include "org/pandalanguage/pandac/Compiler/Error.h"
#include "panda/io/Console.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"


static panda$core$String $s1;
org$pandalanguage$pandac$HTMLProcessor$class_type org$pandalanguage$pandac$HTMLProcessor$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$HTMLProcessor$cleanup, org$pandalanguage$pandac$HTMLProcessor$prettyPrint$org$pandalanguage$pandac$parser$Parser$R$panda$core$String, org$pandalanguage$pandac$HTMLProcessor$process$panda$io$File$panda$io$File$panda$core$String} };

typedef panda$collections$Iterator* (*$fn18)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn22)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn27)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn38)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn48)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn62)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn157)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn167)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn190)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn200)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn215)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn254)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn264)(panda$collections$CollectionView*);
typedef void (*$fn331)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn335)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn343)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn350)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn357)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn360)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn364)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn368)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn372)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn376)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn380)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn386)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn389)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn393)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn397)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn401)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn405)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72", 38, -1829243819919329117, NULL };
static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x6e\x64\x61\x63\x6f\x64\x65\x22\x3e", 24, -1375153472772145809, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, 825358356959104230, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72\x27", 137, 2390994241317501497, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6d\x6d\x65\x6e\x74\x22\x3e", 22, -1756050522877089685, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x22\x3e", 25, 4577563245309187979, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x22\x3e", 25, 6760721592980043958, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x4e\x61\x6d\x65\x22\x3e", 28, 5111374842590752150, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x74\x79\x70\x65\x22\x3e", 19, -6878895466207673670, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6b\x65\x79\x77\x6f\x72\x64\x22\x3e", 22, -1670481277391576067, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6e\x74\x72\x6f\x6c\x22\x3e", 22, -1756049386432501671, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x74\x65\x72\x61\x6c\x22\x3e", 22, -1659229352682266791, NULL };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x73\x74\x72\x69\x6e\x67\x22\x3e", 21, -198306892965556893, NULL };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6f\x70\x65\x72\x61\x74\x6f\x72\x22\x3e", 23, 1793793249967207580, NULL };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x61\x62\x65\x6c\x22\x3e", 20, 6207823968128210400, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, 825358356959104230, NULL };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x67\x74\x3b", 4, 144274317, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22", 13, -8467438715157355368, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e", 2, 13697, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x6e\x65\x4e\x75\x6d\x62\x65\x72\x22\x3e", 25, 2886294917360451169, NULL };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e\x20\x20", 9, 1748561594372514868, NULL };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x68\x74\x6d\x6c\x3e", 6, 1703069100160, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x3c\x68\x65\x61\x64\x3e", 8, 14294010361214289, NULL };
static panda$core$String $s339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, 658568770330923109, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x70\x61\x6e\x64\x61\x2d\x6d\x61\x69\x6e\x2e\x63\x73\x73\x22\x20\x2f\x3e", 19, 3971150118889472772, NULL };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, 658568770330923109, NULL };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x70\x61\x6e\x64\x61\x2d\x73\x6f\x75\x72\x63\x65\x2e\x63\x73\x73\x22\x20\x2f\x3e", 21, 5671880168302347572, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, 658568770330923109, NULL };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x70\x61\x6e\x64\x61\x63\x6f\x64\x65\x2d\x6d\x6f\x6e\x6f\x6b\x61\x69\x2e\x63\x73\x73\x22\x20\x2f\x3e", 26, 2764518521368357164, NULL };
static panda$core$String $s361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x3c\x2f\x68\x65\x61\x64\x3e", 9, 1443694447723190336, NULL };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x3c\x62\x6f\x64\x79\x3e", 8, 14294009747187617, NULL };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x3c\x64\x69\x76\x20\x69\x64\x3d\x22\x6d\x61\x69\x6e\x22\x3e", 19, 7391579857894992237, NULL };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x21\x2d\x2d\x54\x4f\x43\x42\x45\x47\x49\x4e\x2d\x2d\x3e\x3c\x21\x2d\x2d\x54\x4f\x43\x45\x4e\x44\x2d\x2d\x3e", 34, -1824120810441054265, NULL };
static panda$core$String $s377 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x64\x69\x76\x20\x69\x64\x3d\x22\x63\x6f\x6e\x74\x65\x6e\x74\x22\x3e", 24, -2483733496706816761, NULL };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20\x3c\x70\x72\x65\x3e\x3c\x63\x6f\x64\x65\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x6e\x64\x61\x63\x6f\x64\x65\x22\x3e", 37, -1002870681665985583, NULL };
static panda$core$String $s390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20\x3c\x2f\x63\x6f\x64\x65\x3e\x3c\x2f\x70\x72\x65\x3e", 21, 7252662077213941825, NULL };
static panda$core$String $s394 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x2f\x64\x69\x76\x3e", 12, -7275120926329646243, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x3c\x2f\x64\x69\x76\x3e", 10, -1763831739482883707, NULL };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x3c\x2f\x62\x6f\x64\x79\x3e", 9, 1443694447109163664, NULL };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x68\x74\x6d\x6c\x3e", 7, 171409661889807, NULL };

panda$core$String* org$pandalanguage$pandac$HTMLProcessor$prettyPrint$org$pandalanguage$pandac$parser$Parser$R$panda$core$String(org$pandalanguage$pandac$HTMLProcessor* param0, org$pandalanguage$pandac$parser$Parser* param1) {

panda$core$MutableString* local0 = NULL;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind local1;
org$pandalanguage$pandac$Pair* local2 = NULL;
panda$core$Bit local3;
panda$core$MutableString* local4 = NULL;
panda$core$Bit local5;
panda$core$Bit local6;
// line 9
panda$core$MutableString* $tmp2 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp2, &$s3);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
panda$core$MutableString* $tmp4 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
*(&local0) = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// unreffing REF($1:panda.core.MutableString)
// line 10
panda$core$Int64 $tmp5 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp6 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp5);
*(&local1) = $tmp6;
// line 11
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp7 = &param1->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp8 = *$tmp7;
panda$core$Bit $tmp9 = panda$core$Bit$init$builtin_bit($tmp8 != NULL);
bool $tmp10 = $tmp9.value;
if ($tmp10) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp11 = (panda$core$Int64) {11};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s12, $tmp11, &$s13);
abort(); // unreachable
block1:;
panda$collections$Array** $tmp14 = &$tmp8->tokens;
panda$collections$Array* $tmp15 = *$tmp14;
ITable* $tmp16 = ((panda$collections$Iterable*) $tmp15)->$class->itable;
while ($tmp16->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp16 = $tmp16->next;
}
$fn18 $tmp17 = $tmp16->methods[0];
panda$collections$Iterator* $tmp19 = $tmp17(((panda$collections$Iterable*) $tmp15));
goto block3;
block3:;
ITable* $tmp20 = $tmp19->$class->itable;
while ($tmp20->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp20 = $tmp20->next;
}
$fn22 $tmp21 = $tmp20->methods[0];
panda$core$Bit $tmp23 = $tmp21($tmp19);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block5; else goto block4;
block4:;
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
ITable* $tmp25 = $tmp19->$class->itable;
while ($tmp25->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp25 = $tmp25->next;
}
$fn27 $tmp26 = $tmp25->methods[1];
panda$core$Object* $tmp28 = $tmp26($tmp19);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Pair*) $tmp28)));
org$pandalanguage$pandac$Pair* $tmp29 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
*(&local2) = ((org$pandalanguage$pandac$Pair*) $tmp28);
// line 12
org$pandalanguage$pandac$Pair* $tmp30 = *(&local2);
panda$core$Object** $tmp31 = &$tmp30->second;
panda$core$Object* $tmp32 = *$tmp31;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp33;
$tmp33 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp33->value = ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp32)->value;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp34 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp35;
$tmp35 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp35->value = $tmp34;
ITable* $tmp36 = ((panda$core$Equatable*) $tmp33)->$class->itable;
while ($tmp36->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp36 = $tmp36->next;
}
$fn38 $tmp37 = $tmp36->methods[1];
panda$core$Bit $tmp39 = $tmp37(((panda$core$Equatable*) $tmp33), ((panda$core$Equatable*) $tmp35));
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp41 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp42;
$tmp42 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp42->value = $tmp41;
panda$core$Int64 $tmp43 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp44 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp43);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp45;
$tmp45 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp45->value = $tmp44;
ITable* $tmp46 = ((panda$core$Equatable*) $tmp42)->$class->itable;
while ($tmp46->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp46 = $tmp46->next;
}
$fn48 $tmp47 = $tmp46->methods[1];
panda$core$Bit $tmp49 = $tmp47(((panda$core$Equatable*) $tmp42), ((panda$core$Equatable*) $tmp45));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp45)));
// unreffing REF($71:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp42)));
// unreffing REF($67:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
*(&local3) = $tmp49;
goto block10;
block9:;
*(&local3) = $tmp39;
goto block10;
block10:;
panda$core$Bit $tmp50 = *(&local3);
bool $tmp51 = $tmp50.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp35)));
// unreffing REF($61:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp33)));
// unreffing REF($58:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
if ($tmp51) goto block6; else goto block7;
block6:;
// line 13
panda$core$MutableString* $tmp52 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp52, &$s53);
goto block7;
block7:;
// line 15
org$pandalanguage$pandac$Pair* $tmp54 = *(&local2);
panda$core$Object** $tmp55 = &$tmp54->second;
panda$core$Object* $tmp56 = *$tmp55;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp57;
$tmp57 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp57->value = ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp56)->value;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp58 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp59;
$tmp59 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp59->value = $tmp58;
ITable* $tmp60 = ((panda$core$Equatable*) $tmp57)->$class->itable;
while ($tmp60->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp60 = $tmp60->next;
}
$fn62 $tmp61 = $tmp60->methods[1];
panda$core$Bit $tmp63 = $tmp61(((panda$core$Equatable*) $tmp57), ((panda$core$Equatable*) $tmp59));
bool $tmp64 = $tmp63.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp59)));
// unreffing REF($106:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp57)));
// unreffing REF($103:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
if ($tmp64) goto block11; else goto block12;
block11:;
// line 16
org$pandalanguage$pandac$Pair* $tmp65 = *(&local2);
panda$core$Object** $tmp66 = &$tmp65->second;
panda$core$Object* $tmp67 = *$tmp66;
*(&local1) = ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp67)->value;
// line 17
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp68 = *(&local1);
panda$core$Int64 $tmp69 = $tmp68.$rawValue;
panda$core$Int64 $tmp70 = (panda$core$Int64) {0};
panda$core$Bit $tmp71 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp69, $tmp70);
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block14; else goto block15;
block14:;
goto block13;
block15:;
panda$core$Int64 $tmp73 = (panda$core$Int64) {1};
panda$core$Bit $tmp74 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp69, $tmp73);
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp76 = (panda$core$Int64) {2};
panda$core$Bit $tmp77 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp69, $tmp76);
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block16; else goto block18;
block16:;
// line 22
panda$core$MutableString* $tmp79 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp79, &$s80);
goto block13;
block18:;
panda$core$Int64 $tmp81 = (panda$core$Int64) {3};
panda$core$Bit $tmp82 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp69, $tmp81);
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block19; else goto block20;
block19:;
// line 25
panda$core$MutableString* $tmp84 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp84, &$s85);
goto block13;
block20:;
panda$core$Int64 $tmp86 = (panda$core$Int64) {4};
panda$core$Bit $tmp87 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp69, $tmp86);
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block21; else goto block22;
block21:;
// line 28
panda$core$MutableString* $tmp89 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp89, &$s90);
goto block13;
block22:;
panda$core$Int64 $tmp91 = (panda$core$Int64) {5};
panda$core$Bit $tmp92 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp69, $tmp91);
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block23; else goto block24;
block23:;
// line 31
panda$core$MutableString* $tmp94 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp94, &$s95);
goto block13;
block24:;
panda$core$Int64 $tmp96 = (panda$core$Int64) {6};
panda$core$Bit $tmp97 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp69, $tmp96);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block25; else goto block26;
block25:;
// line 34
panda$core$MutableString* $tmp99 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp99, &$s100);
goto block13;
block26:;
panda$core$Int64 $tmp101 = (panda$core$Int64) {7};
panda$core$Bit $tmp102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp69, $tmp101);
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block27; else goto block28;
block27:;
// line 37
panda$core$MutableString* $tmp104 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp104, &$s105);
goto block13;
block28:;
panda$core$Int64 $tmp106 = (panda$core$Int64) {8};
panda$core$Bit $tmp107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp69, $tmp106);
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block29; else goto block30;
block29:;
// line 40
panda$core$MutableString* $tmp109 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp109, &$s110);
goto block13;
block30:;
panda$core$Int64 $tmp111 = (panda$core$Int64) {9};
panda$core$Bit $tmp112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp69, $tmp111);
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block31; else goto block32;
block31:;
// line 43
panda$core$MutableString* $tmp114 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp114, &$s115);
goto block13;
block32:;
panda$core$Int64 $tmp116 = (panda$core$Int64) {10};
panda$core$Bit $tmp117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp69, $tmp116);
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block33; else goto block34;
block33:;
// line 46
panda$core$MutableString* $tmp119 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp119, &$s120);
goto block13;
block34:;
panda$core$Int64 $tmp121 = (panda$core$Int64) {11};
panda$core$Bit $tmp122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp69, $tmp121);
bool $tmp123 = $tmp122.value;
if ($tmp123) goto block35; else goto block36;
block35:;
// line 49
panda$core$MutableString* $tmp124 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp124, &$s125);
goto block13;
block36:;
panda$core$Int64 $tmp126 = (panda$core$Int64) {12};
panda$core$Bit $tmp127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp69, $tmp126);
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block37; else goto block38;
block37:;
// line 52
panda$core$MutableString* $tmp129 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp129, &$s130);
goto block13;
block38:;
// line 55
panda$core$Bit $tmp131 = panda$core$Bit$init$builtin_bit(false);
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block39; else goto block40;
block40:;
panda$core$Int64 $tmp133 = (panda$core$Int64) {55};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s134, $tmp133);
abort(); // unreachable
block39:;
goto block13;
block13:;
goto block12;
block12:;
// line 59
panda$core$MutableString* $tmp135 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$Pair* $tmp136 = *(&local2);
panda$core$Object** $tmp137 = &$tmp136->first;
panda$core$Object* $tmp138 = *$tmp137;
panda$core$String* $tmp139 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param1, ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp138)->value);
panda$core$MutableString$init$panda$core$String($tmp135, $tmp139);
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp135));
panda$core$MutableString* $tmp140 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp140));
*(&local4) = $tmp135;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp139));
// unreffing REF($240:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp135));
// unreffing REF($234:panda.core.MutableString)
// line 60
panda$core$MutableString* $tmp141 = *(&local4);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp141, &$s142, &$s143);
// line 61
panda$core$MutableString* $tmp144 = *(&local4);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp144, &$s145, &$s146);
// line 62
panda$core$MutableString* $tmp147 = *(&local4);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp147, &$s148, &$s149);
// line 63
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp150 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp151;
$tmp151 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp151->value = $tmp150;
panda$core$Int64 $tmp152 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp153 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp152);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp154;
$tmp154 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp154->value = $tmp153;
ITable* $tmp155 = ((panda$core$Equatable*) $tmp151)->$class->itable;
while ($tmp155->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp155 = $tmp155->next;
}
$fn157 $tmp156 = $tmp155->methods[1];
panda$core$Bit $tmp158 = $tmp156(((panda$core$Equatable*) $tmp151), ((panda$core$Equatable*) $tmp154));
bool $tmp159 = $tmp158.value;
if ($tmp159) goto block43; else goto block44;
block43:;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp160 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp161;
$tmp161 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp161->value = $tmp160;
panda$core$Int64 $tmp162 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp163 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp162);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp164;
$tmp164 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp164->value = $tmp163;
ITable* $tmp165 = ((panda$core$Equatable*) $tmp161)->$class->itable;
while ($tmp165->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp165 = $tmp165->next;
}
$fn167 $tmp166 = $tmp165->methods[1];
panda$core$Bit $tmp168 = $tmp166(((panda$core$Equatable*) $tmp161), ((panda$core$Equatable*) $tmp164));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp164)));
// unreffing REF($280:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp161)));
// unreffing REF($276:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
*(&local5) = $tmp168;
goto block45;
block44:;
*(&local5) = $tmp158;
goto block45;
block45:;
panda$core$Bit $tmp169 = *(&local5);
bool $tmp170 = $tmp169.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp154)));
// unreffing REF($270:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp151)));
// unreffing REF($266:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
if ($tmp170) goto block41; else goto block42;
block41:;
// line 65
panda$core$MutableString* $tmp171 = *(&local0);
org$pandalanguage$pandac$Pair* $tmp172 = *(&local2);
panda$core$Object** $tmp173 = &$tmp172->first;
panda$core$Object* $tmp174 = *$tmp173;
org$pandalanguage$pandac$parser$Token$Kind $tmp175 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp174)->value.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp176;
$tmp176 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp176->value = $tmp175;
panda$core$String* $tmp177 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s178, ((panda$core$Object*) $tmp176));
panda$core$String* $tmp179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp177, &$s180);
panda$core$MutableString$append$panda$core$String($tmp171, $tmp179);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp179));
// unreffing REF($312:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp177));
// unreffing REF($311:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp176));
// unreffing REF($310:panda.core.Object)
goto block42;
block42:;
// line 67
panda$core$MutableString* $tmp181 = *(&local0);
panda$core$MutableString* $tmp182 = *(&local4);
panda$core$MutableString$append$panda$core$Object($tmp181, ((panda$core$Object*) $tmp182));
// line 68
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp183 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp184;
$tmp184 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp184->value = $tmp183;
panda$core$Int64 $tmp185 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp186 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp185);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp187;
$tmp187 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp187->value = $tmp186;
ITable* $tmp188 = ((panda$core$Equatable*) $tmp184)->$class->itable;
while ($tmp188->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp188 = $tmp188->next;
}
$fn190 $tmp189 = $tmp188->methods[1];
panda$core$Bit $tmp191 = $tmp189(((panda$core$Equatable*) $tmp184), ((panda$core$Equatable*) $tmp187));
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block48; else goto block49;
block48:;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp193 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp194;
$tmp194 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp194->value = $tmp193;
panda$core$Int64 $tmp195 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp196 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp195);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp197;
$tmp197 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp197->value = $tmp196;
ITable* $tmp198 = ((panda$core$Equatable*) $tmp194)->$class->itable;
while ($tmp198->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp198 = $tmp198->next;
}
$fn200 $tmp199 = $tmp198->methods[1];
panda$core$Bit $tmp201 = $tmp199(((panda$core$Equatable*) $tmp194), ((panda$core$Equatable*) $tmp197));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp197)));
// unreffing REF($345:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp194)));
// unreffing REF($341:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
*(&local6) = $tmp201;
goto block50;
block49:;
*(&local6) = $tmp191;
goto block50;
block50:;
panda$core$Bit $tmp202 = *(&local6);
bool $tmp203 = $tmp202.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp187)));
// unreffing REF($335:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp184)));
// unreffing REF($331:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
if ($tmp203) goto block46; else goto block47;
block46:;
// line 70
panda$core$MutableString* $tmp204 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp204, &$s205);
goto block47;
block47:;
panda$core$MutableString* $tmp206 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
// unreffing s
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp28);
// unreffing REF($44:panda.collections.Iterator.T)
org$pandalanguage$pandac$Pair* $tmp207 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp207));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
// unreffing REF($33:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 73
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp208 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp209;
$tmp209 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp209->value = $tmp208;
panda$core$Int64 $tmp210 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp211 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp210);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp212;
$tmp212 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp212->value = $tmp211;
ITable* $tmp213 = ((panda$core$Equatable*) $tmp209)->$class->itable;
while ($tmp213->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp213 = $tmp213->next;
}
$fn215 $tmp214 = $tmp213->methods[1];
panda$core$Bit $tmp216 = $tmp214(((panda$core$Equatable*) $tmp209), ((panda$core$Equatable*) $tmp212));
bool $tmp217 = $tmp216.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp212)));
// unreffing REF($394:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp209)));
// unreffing REF($390:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
if ($tmp217) goto block51; else goto block52;
block51:;
// line 74
panda$core$MutableString* $tmp218 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp218, &$s219);
goto block52;
block52:;
// line 76
panda$core$MutableString* $tmp220 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp220, &$s221);
// line 77
panda$core$MutableString* $tmp222 = *(&local0);
panda$core$String* $tmp223 = panda$core$MutableString$finish$R$panda$core$String($tmp222);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp223));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp223));
// unreffing REF($414:panda.core.String)
panda$core$MutableString* $tmp224 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp224));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp223;

}
void org$pandalanguage$pandac$HTMLProcessor$process$panda$io$File$panda$io$File$panda$core$String(org$pandalanguage$pandac$HTMLProcessor* param0, panda$io$File* param1, panda$io$File* param2, panda$core$String* param3) {

panda$threads$MessageQueue* local0 = NULL;
org$pandalanguage$pandac$parser$Parser* local1 = NULL;
panda$collections$Array* local2 = NULL;
panda$core$Int64 local3;
panda$core$MutableString* local4 = NULL;
panda$core$Int64 local5;
panda$core$String* local6 = NULL;
panda$io$OutputStream* local7 = NULL;
// line 81
panda$threads$MessageQueue* $tmp225 = (panda$threads$MessageQueue*) frostObjectAlloc(56, (panda$core$Class*) &panda$threads$MessageQueue$class);
panda$threads$MessageQueue$init($tmp225);
*(&local0) = ((panda$threads$MessageQueue*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp225));
panda$threads$MessageQueue* $tmp226 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp226));
*(&local0) = $tmp225;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp225));
// unreffing REF($1:panda.threads.MessageQueue<org.pandalanguage.pandac.Compiler.Error>)
// line 82
org$pandalanguage$pandac$parser$Parser* $tmp227 = (org$pandalanguage$pandac$parser$Parser*) frostObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$class);
panda$threads$MessageQueue* $tmp228 = *(&local0);
org$pandalanguage$pandac$parser$Parser$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT($tmp227, $tmp228);
*(&local1) = ((org$pandalanguage$pandac$parser$Parser*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp227));
org$pandalanguage$pandac$parser$Parser* $tmp229 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp229));
*(&local1) = $tmp227;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp227));
// unreffing REF($15:org.pandalanguage.pandac.parser.Parser)
// line 83
org$pandalanguage$pandac$parser$Parser* $tmp230 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp231 = (org$pandalanguage$pandac$parser$SyntaxHighlighter*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$class);
org$pandalanguage$pandac$parser$SyntaxHighlighter$init($tmp231);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp231));
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp232 = &$tmp230->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp233 = *$tmp232;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp233));
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp234 = &$tmp230->syntaxHighlighter;
*$tmp234 = $tmp231;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp231));
// unreffing REF($30:org.pandalanguage.pandac.parser.SyntaxHighlighter)
// line 84
org$pandalanguage$pandac$parser$Parser* $tmp235 = *(&local1);
panda$core$String* $tmp236 = panda$io$File$readFully$R$panda$core$String(param1);
org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String($tmp235, param1, $tmp236);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp236));
// unreffing REF($46:panda.core.String)
// line 85
org$pandalanguage$pandac$parser$Parser* $tmp237 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp238 = org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q($tmp237);
panda$core$Bit $tmp239 = panda$core$Bit$init$builtin_bit($tmp238 == NULL);
bool $tmp240 = $tmp239.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp238));
// unreffing REF($53:org.pandalanguage.pandac.ASTNode?)
if ($tmp240) goto block1; else goto block2;
block1:;
// line 86
goto block3;
block3:;
panda$threads$MessageQueue* $tmp241 = *(&local0);
panda$core$Bit $tmp242 = panda$threads$MessageQueue$hasMessage$R$panda$core$Bit($tmp241);
bool $tmp243 = $tmp242.value;
if ($tmp243) goto block4; else goto block5;
block4:;
// line 87
panda$threads$MessageQueue* $tmp244 = *(&local0);
panda$core$Immutable* $tmp245 = panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T($tmp244);
panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) ((org$pandalanguage$pandac$Compiler$Error*) $tmp245)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp245));
// unreffing REF($71:panda.threads.MessageQueue.T)
goto block3;
block5:;
goto block2;
block2:;
// line 90
org$pandalanguage$pandac$parser$Parser* $tmp246 = *(&local1);
panda$core$String* $tmp247 = org$pandalanguage$pandac$HTMLProcessor$prettyPrint$org$pandalanguage$pandac$parser$Parser$R$panda$core$String(param0, $tmp246);
panda$collections$Array* $tmp248 = panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT($tmp247, &$s249);
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp248));
panda$collections$Array* $tmp250 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp250));
*(&local2) = $tmp248;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp248));
// unreffing REF($83:panda.collections.Array<panda.core.String>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp247));
// unreffing REF($82:panda.core.String)
// line 91
panda$collections$Array* $tmp251 = *(&local2);
ITable* $tmp252 = ((panda$collections$CollectionView*) $tmp251)->$class->itable;
while ($tmp252->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp252 = $tmp252->next;
}
$fn254 $tmp253 = $tmp252->methods[0];
panda$core$Int64 $tmp255 = $tmp253(((panda$collections$CollectionView*) $tmp251));
panda$core$String* $tmp256 = panda$core$Int64$convert$R$panda$core$String($tmp255);
panda$core$Int64 $tmp257 = panda$core$String$get_length$R$panda$core$Int64($tmp256);
*(&local3) = $tmp257;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp256));
// unreffing REF($102:panda.core.String)
// line 92
panda$core$MutableString* $tmp258 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp258);
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp258));
panda$core$MutableString* $tmp259 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp259));
*(&local4) = $tmp258;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp258));
// unreffing REF($109:panda.core.MutableString)
// line 93
panda$core$Int64 $tmp260 = (panda$core$Int64) {0};
panda$collections$Array* $tmp261 = *(&local2);
ITable* $tmp262 = ((panda$collections$CollectionView*) $tmp261)->$class->itable;
while ($tmp262->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp262 = $tmp262->next;
}
$fn264 $tmp263 = $tmp262->methods[0];
panda$core$Int64 $tmp265 = $tmp263(((panda$collections$CollectionView*) $tmp261));
panda$core$Bit $tmp266 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp267 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp260, $tmp265, $tmp266);
panda$core$Int64 $tmp268 = $tmp267.min;
*(&local5) = $tmp268;
panda$core$Int64 $tmp269 = $tmp267.max;
panda$core$Bit $tmp270 = $tmp267.inclusive;
bool $tmp271 = $tmp270.value;
panda$core$Int64 $tmp272 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp273 = panda$core$Int64$convert$R$panda$core$UInt64($tmp272);
if ($tmp271) goto block9; else goto block10;
block9:;
int64_t $tmp274 = $tmp268.value;
int64_t $tmp275 = $tmp269.value;
bool $tmp276 = $tmp274 <= $tmp275;
panda$core$Bit $tmp277 = (panda$core$Bit) {$tmp276};
bool $tmp278 = $tmp277.value;
if ($tmp278) goto block6; else goto block7;
block10:;
int64_t $tmp279 = $tmp268.value;
int64_t $tmp280 = $tmp269.value;
bool $tmp281 = $tmp279 < $tmp280;
panda$core$Bit $tmp282 = (panda$core$Bit) {$tmp281};
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block6; else goto block7;
block6:;
// line 94
panda$core$Int64 $tmp284 = *(&local5);
panda$core$Int64 $tmp285 = (panda$core$Int64) {1};
int64_t $tmp286 = $tmp284.value;
int64_t $tmp287 = $tmp285.value;
int64_t $tmp288 = $tmp286 + $tmp287;
panda$core$Int64 $tmp289 = (panda$core$Int64) {$tmp288};
panda$core$String* $tmp290 = panda$core$Int64$convert$R$panda$core$String($tmp289);
panda$core$Int64 $tmp291 = *(&local3);
panda$core$String* $tmp292 = panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String($tmp290, $tmp291);
*(&local6) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp292));
panda$core$String* $tmp293 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp293));
*(&local6) = $tmp292;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp292));
// unreffing REF($158:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp290));
// unreffing REF($156:panda.core.String)
// line 95
panda$core$MutableString* $tmp294 = *(&local4);
panda$core$String* $tmp295 = *(&local6);
panda$core$String* $tmp296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s297, $tmp295);
panda$core$String* $tmp298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp296, &$s299);
panda$collections$Array* $tmp300 = *(&local2);
panda$core$Int64 $tmp301 = *(&local5);
panda$core$Object* $tmp302 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp300, $tmp301);
panda$core$String* $tmp303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp298, ((panda$core$String*) $tmp302));
panda$core$String* $tmp304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp303, &$s305);
panda$core$MutableString$append$panda$core$String($tmp294, $tmp304);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp304));
// unreffing REF($183:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp303));
// unreffing REF($182:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp302);
// unreffing REF($180:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp298));
// unreffing REF($176:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp296));
// unreffing REF($175:panda.core.String)
panda$core$String* $tmp306 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp306));
// unreffing lineNumber
*(&local6) = ((panda$core$String*) NULL);
goto block8;
block8:;
panda$core$Int64 $tmp307 = *(&local5);
int64_t $tmp308 = $tmp269.value;
int64_t $tmp309 = $tmp307.value;
int64_t $tmp310 = $tmp308 - $tmp309;
panda$core$Int64 $tmp311 = (panda$core$Int64) {$tmp310};
panda$core$UInt64 $tmp312 = panda$core$Int64$convert$R$panda$core$UInt64($tmp311);
if ($tmp271) goto block12; else goto block13;
block12:;
uint64_t $tmp313 = $tmp312.value;
uint64_t $tmp314 = $tmp273.value;
bool $tmp315 = $tmp313 >= $tmp314;
panda$core$Bit $tmp316 = (panda$core$Bit) {$tmp315};
bool $tmp317 = $tmp316.value;
if ($tmp317) goto block11; else goto block7;
block13:;
uint64_t $tmp318 = $tmp312.value;
uint64_t $tmp319 = $tmp273.value;
bool $tmp320 = $tmp318 > $tmp319;
panda$core$Bit $tmp321 = (panda$core$Bit) {$tmp320};
bool $tmp322 = $tmp321.value;
if ($tmp322) goto block11; else goto block7;
block11:;
int64_t $tmp323 = $tmp307.value;
int64_t $tmp324 = $tmp272.value;
int64_t $tmp325 = $tmp323 + $tmp324;
panda$core$Int64 $tmp326 = (panda$core$Int64) {$tmp325};
*(&local5) = $tmp326;
goto block6;
block7:;
// line 97
panda$io$OutputStream* $tmp327 = panda$io$File$openOutputStream$R$panda$io$OutputStream(param2);
*(&local7) = ((panda$io$OutputStream*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp327));
panda$io$OutputStream* $tmp328 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp328));
*(&local7) = $tmp327;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp327));
// unreffing REF($232:panda.io.OutputStream)
// line 98
panda$io$OutputStream* $tmp329 = *(&local7);
$fn331 $tmp330 = ($fn331) $tmp329->$class->vtable[19];
$tmp330($tmp329, &$s332);
// line 99
panda$io$OutputStream* $tmp333 = *(&local7);
$fn335 $tmp334 = ($fn335) $tmp333->$class->vtable[19];
$tmp334($tmp333, &$s336);
// line 100
panda$io$OutputStream* $tmp337 = *(&local7);
panda$core$String* $tmp338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s339, param3);
panda$core$String* $tmp340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp338, &$s341);
$fn343 $tmp342 = ($fn343) $tmp337->$class->vtable[19];
$tmp342($tmp337, $tmp340);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp340));
// unreffing REF($254:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp338));
// unreffing REF($253:panda.core.String)
// line 101
panda$io$OutputStream* $tmp344 = *(&local7);
panda$core$String* $tmp345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s346, param3);
panda$core$String* $tmp347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp345, &$s348);
$fn350 $tmp349 = ($fn350) $tmp344->$class->vtable[19];
$tmp349($tmp344, $tmp347);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp347));
// unreffing REF($266:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp345));
// unreffing REF($265:panda.core.String)
// line 102
panda$io$OutputStream* $tmp351 = *(&local7);
panda$core$String* $tmp352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s353, param3);
panda$core$String* $tmp354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp352, &$s355);
$fn357 $tmp356 = ($fn357) $tmp351->$class->vtable[19];
$tmp356($tmp351, $tmp354);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp354));
// unreffing REF($278:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp352));
// unreffing REF($277:panda.core.String)
// line 103
panda$io$OutputStream* $tmp358 = *(&local7);
$fn360 $tmp359 = ($fn360) $tmp358->$class->vtable[19];
$tmp359($tmp358, &$s361);
// line 104
panda$io$OutputStream* $tmp362 = *(&local7);
$fn364 $tmp363 = ($fn364) $tmp362->$class->vtable[19];
$tmp363($tmp362, &$s365);
// line 105
panda$io$OutputStream* $tmp366 = *(&local7);
$fn368 $tmp367 = ($fn368) $tmp366->$class->vtable[19];
$tmp367($tmp366, &$s369);
// line 106
panda$io$OutputStream* $tmp370 = *(&local7);
$fn372 $tmp371 = ($fn372) $tmp370->$class->vtable[19];
$tmp371($tmp370, &$s373);
// line 107
panda$io$OutputStream* $tmp374 = *(&local7);
$fn376 $tmp375 = ($fn376) $tmp374->$class->vtable[19];
$tmp375($tmp374, &$s377);
// line 108
panda$io$OutputStream* $tmp378 = *(&local7);
$fn380 $tmp379 = ($fn380) $tmp378->$class->vtable[19];
$tmp379($tmp378, &$s381);
// line 109
panda$io$OutputStream* $tmp382 = *(&local7);
panda$core$MutableString* $tmp383 = *(&local4);
panda$core$String* $tmp384 = panda$core$MutableString$finish$R$panda$core$String($tmp383);
$fn386 $tmp385 = ($fn386) $tmp382->$class->vtable[17];
$tmp385($tmp382, $tmp384);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp384));
// unreffing REF($314:panda.core.String)
// line 110
panda$io$OutputStream* $tmp387 = *(&local7);
$fn389 $tmp388 = ($fn389) $tmp387->$class->vtable[19];
$tmp388($tmp387, &$s390);
// line 111
panda$io$OutputStream* $tmp391 = *(&local7);
$fn393 $tmp392 = ($fn393) $tmp391->$class->vtable[19];
$tmp392($tmp391, &$s394);
// line 112
panda$io$OutputStream* $tmp395 = *(&local7);
$fn397 $tmp396 = ($fn397) $tmp395->$class->vtable[19];
$tmp396($tmp395, &$s398);
// line 113
panda$io$OutputStream* $tmp399 = *(&local7);
$fn401 $tmp400 = ($fn401) $tmp399->$class->vtable[19];
$tmp400($tmp399, &$s402);
// line 114
panda$io$OutputStream* $tmp403 = *(&local7);
$fn405 $tmp404 = ($fn405) $tmp403->$class->vtable[19];
$tmp404($tmp403, &$s406);
panda$io$OutputStream* $tmp407 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp407));
// unreffing out
*(&local7) = ((panda$io$OutputStream*) NULL);
panda$core$MutableString* $tmp408 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp408));
// unreffing highlighted
*(&local4) = ((panda$core$MutableString*) NULL);
panda$collections$Array* $tmp409 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp409));
// unreffing lines
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$parser$Parser* $tmp410 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp410));
// unreffing parser
*(&local1) = ((org$pandalanguage$pandac$parser$Parser*) NULL);
panda$threads$MessageQueue* $tmp411 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp411));
// unreffing errors
*(&local0) = ((panda$threads$MessageQueue*) NULL);
return;

}
void org$pandalanguage$pandac$HTMLProcessor$init(org$pandalanguage$pandac$HTMLProcessor* param0) {

return;

}
void org$pandalanguage$pandac$HTMLProcessor$cleanup(org$pandalanguage$pandac$HTMLProcessor* param0) {

// line 6
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}

