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

typedef panda$collections$Iterator* (*$fn13)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn17)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn22)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn33)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn43)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn57)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn152)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn162)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn185)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn195)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn210)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn249)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn259)(panda$collections$CollectionView*);
typedef void (*$fn326)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn330)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn338)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn345)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn352)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn355)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn359)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn363)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn367)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn371)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn375)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn381)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn384)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn388)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn392)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn396)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn400)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72", 38, -1829243819919329117, NULL };
static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x6e\x64\x61\x63\x6f\x64\x65\x22\x3e", 24, -1375153472772145809, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6d\x6d\x65\x6e\x74\x22\x3e", 22, -1756050522877089685, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x22\x3e", 25, 4577563245309187979, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x22\x3e", 25, 6760721592980043958, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x4e\x61\x6d\x65\x22\x3e", 28, 5111374842590752150, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x74\x79\x70\x65\x22\x3e", 19, -6878895466207673670, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6b\x65\x79\x77\x6f\x72\x64\x22\x3e", 22, -1670481277391576067, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6e\x74\x72\x6f\x6c\x22\x3e", 22, -1756049386432501671, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x74\x65\x72\x61\x6c\x22\x3e", 22, -1659229352682266791, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x73\x74\x72\x69\x6e\x67\x22\x3e", 21, -198306892965556893, NULL };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6f\x70\x65\x72\x61\x74\x6f\x72\x22\x3e", 23, 1793793249967207580, NULL };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x61\x62\x65\x6c\x22\x3e", 20, 6207823968128210400, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x70\x61\x6e\x64\x61", 19, 825358357982181388, NULL };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x67\x74\x3b", 4, 144274317, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22", 13, -8467438715157355368, NULL };
static panda$core$String $s175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e", 2, 13697, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x6e\x65\x4e\x75\x6d\x62\x65\x72\x22\x3e", 25, 2886294917360451169, NULL };
static panda$core$String $s294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e\x20\x20", 9, 1748561594372514868, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x68\x74\x6d\x6c\x3e", 6, 1703069100160, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x3c\x68\x65\x61\x64\x3e", 8, 14294010361214289, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, 658568770330923109, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x70\x61\x6e\x64\x61\x2d\x6d\x61\x69\x6e\x2e\x63\x73\x73\x22\x20\x2f\x3e", 19, 3971150118889472772, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, 658568770330923109, NULL };
static panda$core$String $s343 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x70\x61\x6e\x64\x61\x2d\x73\x6f\x75\x72\x63\x65\x2e\x63\x73\x73\x22\x20\x2f\x3e", 21, 5671880168302347572, NULL };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, 658568770330923109, NULL };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x70\x61\x6e\x64\x61\x63\x6f\x64\x65\x2d\x6d\x6f\x6e\x6f\x6b\x61\x69\x2e\x63\x73\x73\x22\x20\x2f\x3e", 26, 2764518521368357164, NULL };
static panda$core$String $s356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x3c\x2f\x68\x65\x61\x64\x3e", 9, 1443694447723190336, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x3c\x62\x6f\x64\x79\x3e", 8, 14294009747187617, NULL };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x3c\x64\x69\x76\x20\x69\x64\x3d\x22\x6d\x61\x69\x6e\x22\x3e", 19, 7391579857894992237, NULL };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x21\x2d\x2d\x54\x4f\x43\x42\x45\x47\x49\x4e\x2d\x2d\x3e\x3c\x21\x2d\x2d\x54\x4f\x43\x45\x4e\x44\x2d\x2d\x3e", 34, -1824120810441054265, NULL };
static panda$core$String $s372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x64\x69\x76\x20\x69\x64\x3d\x22\x63\x6f\x6e\x74\x65\x6e\x74\x22\x3e", 24, -2483733496706816761, NULL };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20\x3c\x70\x72\x65\x3e\x3c\x63\x6f\x64\x65\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x6e\x64\x61\x63\x6f\x64\x65\x22\x3e", 37, -1002870681665985583, NULL };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20\x3c\x2f\x63\x6f\x64\x65\x3e\x3c\x2f\x70\x72\x65\x3e", 21, 7252662077213941825, NULL };
static panda$core$String $s389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x2f\x64\x69\x76\x3e", 12, -7275120926329646243, NULL };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x3c\x2f\x64\x69\x76\x3e", 10, -1763831739482883707, NULL };
static panda$core$String $s397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x3c\x2f\x62\x6f\x64\x79\x3e", 9, 1443694447109163664, NULL };
static panda$core$String $s401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x68\x74\x6d\x6c\x3e", 7, 171409661889807, NULL };

panda$core$String* org$pandalanguage$pandac$HTMLProcessor$prettyPrint$org$pandalanguage$pandac$parser$Parser$R$panda$core$String(org$pandalanguage$pandac$HTMLProcessor* param0, org$pandalanguage$pandac$parser$Parser* param1) {

panda$core$MutableString* local0 = NULL;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind local1;
org$pandalanguage$pandac$Pair* local2 = NULL;
panda$core$Bit local3;
panda$core$MutableString* local4 = NULL;
panda$core$Bit local5;
panda$core$Bit local6;
// line 9
panda$core$MutableString* $tmp2 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp2, &$s3);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp4 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
*(&local0) = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// line 10
panda$core$Int64 $tmp5 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp6 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp5);
*(&local1) = $tmp6;
// line 11
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp7 = &param1->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp8 = *$tmp7;
panda$collections$Array** $tmp9 = &$tmp8->tokens;
panda$collections$Array* $tmp10 = *$tmp9;
ITable* $tmp11 = ((panda$collections$Iterable*) $tmp10)->$class->itable;
while ($tmp11->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp11 = $tmp11->next;
}
$fn13 $tmp12 = $tmp11->methods[0];
panda$collections$Iterator* $tmp14 = $tmp12(((panda$collections$Iterable*) $tmp10));
goto block1;
block1:;
ITable* $tmp15 = $tmp14->$class->itable;
while ($tmp15->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp15 = $tmp15->next;
}
$fn17 $tmp16 = $tmp15->methods[0];
panda$core$Bit $tmp18 = $tmp16($tmp14);
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block3; else goto block2;
block2:;
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
ITable* $tmp20 = $tmp14->$class->itable;
while ($tmp20->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp20 = $tmp20->next;
}
$fn22 $tmp21 = $tmp20->methods[1];
panda$core$Object* $tmp23 = $tmp21($tmp14);
org$pandalanguage$pandac$Pair* $tmp24 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Pair*) $tmp23)));
*(&local2) = ((org$pandalanguage$pandac$Pair*) $tmp23);
// line 12
org$pandalanguage$pandac$Pair* $tmp25 = *(&local2);
panda$core$Object** $tmp26 = &$tmp25->second;
panda$core$Object* $tmp27 = *$tmp26;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp28;
$tmp28 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp28->value = ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp27)->value;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp29 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp30;
$tmp30 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp30->value = $tmp29;
ITable* $tmp31 = ((panda$core$Equatable*) $tmp28)->$class->itable;
while ($tmp31->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp31 = $tmp31->next;
}
$fn33 $tmp32 = $tmp31->methods[1];
panda$core$Bit $tmp34 = $tmp32(((panda$core$Equatable*) $tmp28), ((panda$core$Equatable*) $tmp30));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp28)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp30)));
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp36 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp37;
$tmp37 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp37->value = $tmp36;
panda$core$Int64 $tmp38 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp39 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp38);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp40;
$tmp40 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp40->value = $tmp39;
ITable* $tmp41 = ((panda$core$Equatable*) $tmp37)->$class->itable;
while ($tmp41->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp41 = $tmp41->next;
}
$fn43 $tmp42 = $tmp41->methods[1];
panda$core$Bit $tmp44 = $tmp42(((panda$core$Equatable*) $tmp37), ((panda$core$Equatable*) $tmp40));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp37)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp40)));
*(&local3) = $tmp44;
goto block6;
block5:;
*(&local3) = $tmp34;
goto block6;
block6:;
panda$core$Bit $tmp45 = *(&local3);
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block7; else goto block8;
block7:;
// line 13
panda$core$MutableString* $tmp47 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp47, &$s48);
goto block8;
block8:;
// line 15
org$pandalanguage$pandac$Pair* $tmp49 = *(&local2);
panda$core$Object** $tmp50 = &$tmp49->second;
panda$core$Object* $tmp51 = *$tmp50;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp52;
$tmp52 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp52->value = ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp51)->value;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp53 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp54;
$tmp54 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp54->value = $tmp53;
ITable* $tmp55 = ((panda$core$Equatable*) $tmp52)->$class->itable;
while ($tmp55->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp55 = $tmp55->next;
}
$fn57 $tmp56 = $tmp55->methods[1];
panda$core$Bit $tmp58 = $tmp56(((panda$core$Equatable*) $tmp52), ((panda$core$Equatable*) $tmp54));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp52)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp54)));
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block9; else goto block10;
block9:;
// line 16
org$pandalanguage$pandac$Pair* $tmp60 = *(&local2);
panda$core$Object** $tmp61 = &$tmp60->second;
panda$core$Object* $tmp62 = *$tmp61;
*(&local1) = ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp62)->value;
// line 17
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp63 = *(&local1);
panda$core$Int64 $tmp64 = $tmp63.$rawValue;
panda$core$Int64 $tmp65 = (panda$core$Int64) {0};
panda$core$Bit $tmp66 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp64, $tmp65);
bool $tmp67 = $tmp66.value;
if ($tmp67) goto block12; else goto block13;
block12:;
// line 1
goto block11;
block13:;
panda$core$Int64 $tmp68 = (panda$core$Int64) {1};
panda$core$Bit $tmp69 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp64, $tmp68);
bool $tmp70 = $tmp69.value;
if ($tmp70) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp71 = (panda$core$Int64) {2};
panda$core$Bit $tmp72 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp64, $tmp71);
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block14; else goto block16;
block14:;
// line 20
panda$core$MutableString* $tmp74 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp74, &$s75);
goto block11;
block16:;
panda$core$Int64 $tmp76 = (panda$core$Int64) {3};
panda$core$Bit $tmp77 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp64, $tmp76);
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block17; else goto block18;
block17:;
// line 22
panda$core$MutableString* $tmp79 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp79, &$s80);
goto block11;
block18:;
panda$core$Int64 $tmp81 = (panda$core$Int64) {4};
panda$core$Bit $tmp82 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp64, $tmp81);
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block19; else goto block20;
block19:;
// line 24
panda$core$MutableString* $tmp84 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp84, &$s85);
goto block11;
block20:;
panda$core$Int64 $tmp86 = (panda$core$Int64) {5};
panda$core$Bit $tmp87 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp64, $tmp86);
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block21; else goto block22;
block21:;
// line 26
panda$core$MutableString* $tmp89 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp89, &$s90);
goto block11;
block22:;
panda$core$Int64 $tmp91 = (panda$core$Int64) {6};
panda$core$Bit $tmp92 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp64, $tmp91);
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block23; else goto block24;
block23:;
// line 28
panda$core$MutableString* $tmp94 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp94, &$s95);
goto block11;
block24:;
panda$core$Int64 $tmp96 = (panda$core$Int64) {7};
panda$core$Bit $tmp97 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp64, $tmp96);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block25; else goto block26;
block25:;
// line 30
panda$core$MutableString* $tmp99 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp99, &$s100);
goto block11;
block26:;
panda$core$Int64 $tmp101 = (panda$core$Int64) {8};
panda$core$Bit $tmp102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp64, $tmp101);
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block27; else goto block28;
block27:;
// line 32
panda$core$MutableString* $tmp104 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp104, &$s105);
goto block11;
block28:;
panda$core$Int64 $tmp106 = (panda$core$Int64) {9};
panda$core$Bit $tmp107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp64, $tmp106);
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block29; else goto block30;
block29:;
// line 34
panda$core$MutableString* $tmp109 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp109, &$s110);
goto block11;
block30:;
panda$core$Int64 $tmp111 = (panda$core$Int64) {10};
panda$core$Bit $tmp112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp64, $tmp111);
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block31; else goto block32;
block31:;
// line 36
panda$core$MutableString* $tmp114 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp114, &$s115);
goto block11;
block32:;
panda$core$Int64 $tmp116 = (panda$core$Int64) {11};
panda$core$Bit $tmp117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp64, $tmp116);
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block33; else goto block34;
block33:;
// line 38
panda$core$MutableString* $tmp119 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp119, &$s120);
goto block11;
block34:;
panda$core$Int64 $tmp121 = (panda$core$Int64) {12};
panda$core$Bit $tmp122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp64, $tmp121);
bool $tmp123 = $tmp122.value;
if ($tmp123) goto block35; else goto block36;
block35:;
// line 40
panda$core$MutableString* $tmp124 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp124, &$s125);
goto block11;
block36:;
// line 42
panda$core$Bit $tmp126 = panda$core$Bit$init$builtin_bit(false);
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block37; else goto block38;
block38:;
panda$core$Int64 $tmp128 = (panda$core$Int64) {42};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s129, $tmp128);
abort(); // unreachable
block37:;
goto block11;
block11:;
goto block10;
block10:;
// line 45
panda$core$MutableString* $tmp130 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$Pair* $tmp131 = *(&local2);
panda$core$Object** $tmp132 = &$tmp131->first;
panda$core$Object* $tmp133 = *$tmp132;
panda$core$String* $tmp134 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param1, ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp133)->value);
panda$core$MutableString$init$panda$core$String($tmp130, $tmp134);
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp135 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp135));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp130));
*(&local4) = $tmp130;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp130));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
// line 46
panda$core$MutableString* $tmp136 = *(&local4);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp136, &$s137, &$s138);
// line 47
panda$core$MutableString* $tmp139 = *(&local4);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp139, &$s140, &$s141);
// line 48
panda$core$MutableString* $tmp142 = *(&local4);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp142, &$s143, &$s144);
// line 49
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp145 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp146;
$tmp146 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp146->value = $tmp145;
panda$core$Int64 $tmp147 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp148 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp147);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp149;
$tmp149 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp149->value = $tmp148;
ITable* $tmp150 = ((panda$core$Equatable*) $tmp146)->$class->itable;
while ($tmp150->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp150 = $tmp150->next;
}
$fn152 $tmp151 = $tmp150->methods[1];
panda$core$Bit $tmp153 = $tmp151(((panda$core$Equatable*) $tmp146), ((panda$core$Equatable*) $tmp149));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp146)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp149)));
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block39; else goto block40;
block39:;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp155 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp156;
$tmp156 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp156->value = $tmp155;
panda$core$Int64 $tmp157 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp158 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp157);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp159;
$tmp159 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp159->value = $tmp158;
ITable* $tmp160 = ((panda$core$Equatable*) $tmp156)->$class->itable;
while ($tmp160->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp160 = $tmp160->next;
}
$fn162 $tmp161 = $tmp160->methods[1];
panda$core$Bit $tmp163 = $tmp161(((panda$core$Equatable*) $tmp156), ((panda$core$Equatable*) $tmp159));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp156)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp159)));
*(&local5) = $tmp163;
goto block41;
block40:;
*(&local5) = $tmp153;
goto block41;
block41:;
panda$core$Bit $tmp164 = *(&local5);
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block42; else goto block43;
block42:;
// line 51
panda$core$MutableString* $tmp166 = *(&local0);
org$pandalanguage$pandac$Pair* $tmp167 = *(&local2);
panda$core$Object** $tmp168 = &$tmp167->first;
panda$core$Object* $tmp169 = *$tmp168;
org$pandalanguage$pandac$parser$Token$Kind $tmp170 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp169)->value.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp171;
$tmp171 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp171->value = $tmp170;
panda$core$String* $tmp172 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s173, ((panda$core$Object*) $tmp171));
panda$core$String* $tmp174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp172, &$s175);
panda$core$MutableString$append$panda$core$String($tmp166, $tmp174);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp171));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp172));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp174));
goto block43;
block43:;
// line 53
panda$core$MutableString* $tmp176 = *(&local0);
panda$core$MutableString* $tmp177 = *(&local4);
panda$core$MutableString$append$panda$core$Object($tmp176, ((panda$core$Object*) $tmp177));
// line 54
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp178 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp179;
$tmp179 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp179->value = $tmp178;
panda$core$Int64 $tmp180 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp181 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp180);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp182;
$tmp182 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp182->value = $tmp181;
ITable* $tmp183 = ((panda$core$Equatable*) $tmp179)->$class->itable;
while ($tmp183->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp183 = $tmp183->next;
}
$fn185 $tmp184 = $tmp183->methods[1];
panda$core$Bit $tmp186 = $tmp184(((panda$core$Equatable*) $tmp179), ((panda$core$Equatable*) $tmp182));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp179)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp182)));
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block44; else goto block45;
block44:;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp188 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp189;
$tmp189 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp189->value = $tmp188;
panda$core$Int64 $tmp190 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp191 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp190);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp192;
$tmp192 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp192->value = $tmp191;
ITable* $tmp193 = ((panda$core$Equatable*) $tmp189)->$class->itable;
while ($tmp193->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp193 = $tmp193->next;
}
$fn195 $tmp194 = $tmp193->methods[1];
panda$core$Bit $tmp196 = $tmp194(((panda$core$Equatable*) $tmp189), ((panda$core$Equatable*) $tmp192));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp189)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp192)));
*(&local6) = $tmp196;
goto block46;
block45:;
*(&local6) = $tmp186;
goto block46;
block46:;
panda$core$Bit $tmp197 = *(&local6);
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block47; else goto block48;
block47:;
// line 56
panda$core$MutableString* $tmp199 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp199, &$s200);
goto block48;
block48:;
panda$core$Panda$unref$panda$core$Object$Q($tmp23);
panda$core$MutableString* $tmp201 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp201));
// unreffing s
*(&local4) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$Pair* $tmp202 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp202));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
// line 59
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp203 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp204;
$tmp204 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp204->value = $tmp203;
panda$core$Int64 $tmp205 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp206 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp205);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp207;
$tmp207 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp207->value = $tmp206;
ITable* $tmp208 = ((panda$core$Equatable*) $tmp204)->$class->itable;
while ($tmp208->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp208 = $tmp208->next;
}
$fn210 $tmp209 = $tmp208->methods[1];
panda$core$Bit $tmp211 = $tmp209(((panda$core$Equatable*) $tmp204), ((panda$core$Equatable*) $tmp207));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp204)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp207)));
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block49; else goto block50;
block49:;
// line 60
panda$core$MutableString* $tmp213 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp213, &$s214);
goto block50;
block50:;
// line 62
panda$core$MutableString* $tmp215 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp215, &$s216);
// line 63
panda$core$MutableString* $tmp217 = *(&local0);
panda$core$String* $tmp218 = panda$core$MutableString$finish$R$panda$core$String($tmp217);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp218));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp218));
panda$core$MutableString* $tmp219 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp219));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp218;

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
// line 67
panda$threads$MessageQueue* $tmp220 = (panda$threads$MessageQueue*) pandaObjectAlloc(56, (panda$core$Class*) &panda$threads$MessageQueue$class);
panda$threads$MessageQueue$init($tmp220);
*(&local0) = ((panda$threads$MessageQueue*) NULL);
panda$threads$MessageQueue* $tmp221 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp221));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp220));
*(&local0) = $tmp220;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp220));
// line 68
org$pandalanguage$pandac$parser$Parser* $tmp222 = (org$pandalanguage$pandac$parser$Parser*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$class);
panda$threads$MessageQueue* $tmp223 = *(&local0);
org$pandalanguage$pandac$parser$Parser$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT($tmp222, $tmp223);
*(&local1) = ((org$pandalanguage$pandac$parser$Parser*) NULL);
org$pandalanguage$pandac$parser$Parser* $tmp224 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp224));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
*(&local1) = $tmp222;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
// line 69
org$pandalanguage$pandac$parser$Parser* $tmp225 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp226 = (org$pandalanguage$pandac$parser$SyntaxHighlighter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$class);
org$pandalanguage$pandac$parser$SyntaxHighlighter$init($tmp226);
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp227 = &$tmp225->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp228 = *$tmp227;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp228));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp226));
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp229 = &$tmp225->syntaxHighlighter;
*$tmp229 = $tmp226;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp226));
// line 70
org$pandalanguage$pandac$parser$Parser* $tmp230 = *(&local1);
panda$core$String* $tmp231 = panda$io$File$readFully$R$panda$core$String(param1);
org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String($tmp230, param1, $tmp231);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp231));
// line 71
org$pandalanguage$pandac$parser$Parser* $tmp232 = *(&local1);
org$pandalanguage$pandac$ASTNode* $tmp233 = org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q($tmp232);
panda$core$Bit $tmp234 = panda$core$Bit$init$builtin_bit($tmp233 == NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp233));
bool $tmp235 = $tmp234.value;
if ($tmp235) goto block1; else goto block2;
block1:;
// line 72
goto block3;
block3:;
panda$threads$MessageQueue* $tmp236 = *(&local0);
panda$core$Bit $tmp237 = panda$threads$MessageQueue$hasMessage$R$panda$core$Bit($tmp236);
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block4; else goto block5;
block4:;
// line 73
panda$threads$MessageQueue* $tmp239 = *(&local0);
panda$core$Immutable* $tmp240 = panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T($tmp239);
panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) ((org$pandalanguage$pandac$Compiler$Error*) $tmp240)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp240));
goto block3;
block5:;
goto block2;
block2:;
// line 76
org$pandalanguage$pandac$parser$Parser* $tmp241 = *(&local1);
panda$core$String* $tmp242 = org$pandalanguage$pandac$HTMLProcessor$prettyPrint$org$pandalanguage$pandac$parser$Parser$R$panda$core$String(param0, $tmp241);
panda$collections$Array* $tmp243 = panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT($tmp242, &$s244);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp245 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp245));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp243));
*(&local2) = $tmp243;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp243));
// line 77
panda$collections$Array* $tmp246 = *(&local2);
ITable* $tmp247 = ((panda$collections$CollectionView*) $tmp246)->$class->itable;
while ($tmp247->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp247 = $tmp247->next;
}
$fn249 $tmp248 = $tmp247->methods[0];
panda$core$Int64 $tmp250 = $tmp248(((panda$collections$CollectionView*) $tmp246));
panda$core$String* $tmp251 = panda$core$Int64$convert$R$panda$core$String($tmp250);
panda$core$Int64 $tmp252 = panda$core$String$get_length$R$panda$core$Int64($tmp251);
*(&local3) = $tmp252;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp251));
// line 78
panda$core$MutableString* $tmp253 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp253);
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp254 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp254));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp253));
*(&local4) = $tmp253;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp253));
// line 79
panda$core$Int64 $tmp255 = (panda$core$Int64) {0};
panda$collections$Array* $tmp256 = *(&local2);
ITable* $tmp257 = ((panda$collections$CollectionView*) $tmp256)->$class->itable;
while ($tmp257->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp257 = $tmp257->next;
}
$fn259 $tmp258 = $tmp257->methods[0];
panda$core$Int64 $tmp260 = $tmp258(((panda$collections$CollectionView*) $tmp256));
panda$core$Bit $tmp261 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp262 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp255, $tmp260, $tmp261);
panda$core$Int64 $tmp263 = $tmp262.min;
*(&local5) = $tmp263;
panda$core$Int64 $tmp264 = $tmp262.max;
panda$core$Bit $tmp265 = $tmp262.inclusive;
bool $tmp266 = $tmp265.value;
panda$core$Int64 $tmp267 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp268 = panda$core$Int64$convert$R$panda$core$UInt64($tmp267);
if ($tmp266) goto block9; else goto block10;
block9:;
int64_t $tmp269 = $tmp263.value;
int64_t $tmp270 = $tmp264.value;
bool $tmp271 = $tmp269 <= $tmp270;
panda$core$Bit $tmp272 = (panda$core$Bit) {$tmp271};
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block6; else goto block7;
block10:;
int64_t $tmp274 = $tmp263.value;
int64_t $tmp275 = $tmp264.value;
bool $tmp276 = $tmp274 < $tmp275;
panda$core$Bit $tmp277 = (panda$core$Bit) {$tmp276};
bool $tmp278 = $tmp277.value;
if ($tmp278) goto block6; else goto block7;
block6:;
// line 80
panda$core$Int64 $tmp279 = *(&local5);
panda$core$Int64 $tmp280 = (panda$core$Int64) {1};
int64_t $tmp281 = $tmp279.value;
int64_t $tmp282 = $tmp280.value;
int64_t $tmp283 = $tmp281 + $tmp282;
panda$core$Int64 $tmp284 = (panda$core$Int64) {$tmp283};
panda$core$String* $tmp285 = panda$core$Int64$convert$R$panda$core$String($tmp284);
panda$core$Int64 $tmp286 = *(&local3);
panda$core$String* $tmp287 = panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String($tmp285, $tmp286);
*(&local6) = ((panda$core$String*) NULL);
panda$core$String* $tmp288 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp288));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp287));
*(&local6) = $tmp287;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp285));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp287));
// line 81
panda$core$MutableString* $tmp289 = *(&local4);
panda$core$String* $tmp290 = *(&local6);
panda$core$String* $tmp291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s292, $tmp290);
panda$core$String* $tmp293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp291, &$s294);
panda$collections$Array* $tmp295 = *(&local2);
panda$core$Int64 $tmp296 = *(&local5);
panda$core$Object* $tmp297 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp295, $tmp296);
panda$core$String* $tmp298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp293, ((panda$core$String*) $tmp297));
panda$core$String* $tmp299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp298, &$s300);
panda$core$MutableString$append$panda$core$String($tmp289, $tmp299);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp291));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp293));
panda$core$Panda$unref$panda$core$Object$Q($tmp297);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp298));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp299));
panda$core$String* $tmp301 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp301));
// unreffing lineNumber
*(&local6) = ((panda$core$String*) NULL);
goto block8;
block8:;
panda$core$Int64 $tmp302 = *(&local5);
int64_t $tmp303 = $tmp264.value;
int64_t $tmp304 = $tmp302.value;
int64_t $tmp305 = $tmp303 - $tmp304;
panda$core$Int64 $tmp306 = (panda$core$Int64) {$tmp305};
panda$core$UInt64 $tmp307 = panda$core$Int64$convert$R$panda$core$UInt64($tmp306);
if ($tmp266) goto block12; else goto block13;
block12:;
uint64_t $tmp308 = $tmp307.value;
uint64_t $tmp309 = $tmp268.value;
bool $tmp310 = $tmp308 >= $tmp309;
panda$core$Bit $tmp311 = (panda$core$Bit) {$tmp310};
bool $tmp312 = $tmp311.value;
if ($tmp312) goto block11; else goto block7;
block13:;
uint64_t $tmp313 = $tmp307.value;
uint64_t $tmp314 = $tmp268.value;
bool $tmp315 = $tmp313 > $tmp314;
panda$core$Bit $tmp316 = (panda$core$Bit) {$tmp315};
bool $tmp317 = $tmp316.value;
if ($tmp317) goto block11; else goto block7;
block11:;
int64_t $tmp318 = $tmp302.value;
int64_t $tmp319 = $tmp267.value;
int64_t $tmp320 = $tmp318 + $tmp319;
panda$core$Int64 $tmp321 = (panda$core$Int64) {$tmp320};
*(&local5) = $tmp321;
goto block6;
block7:;
// line 83
panda$io$OutputStream* $tmp322 = panda$io$File$openOutputStream$R$panda$io$OutputStream(param2);
*(&local7) = ((panda$io$OutputStream*) NULL);
panda$io$OutputStream* $tmp323 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp323));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
*(&local7) = $tmp322;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
// line 84
panda$io$OutputStream* $tmp324 = *(&local7);
$fn326 $tmp325 = ($fn326) $tmp324->$class->vtable[19];
$tmp325($tmp324, &$s327);
// line 85
panda$io$OutputStream* $tmp328 = *(&local7);
$fn330 $tmp329 = ($fn330) $tmp328->$class->vtable[19];
$tmp329($tmp328, &$s331);
// line 86
panda$io$OutputStream* $tmp332 = *(&local7);
panda$core$String* $tmp333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s334, param3);
panda$core$String* $tmp335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp333, &$s336);
$fn338 $tmp337 = ($fn338) $tmp332->$class->vtable[19];
$tmp337($tmp332, $tmp335);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp333));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp335));
// line 87
panda$io$OutputStream* $tmp339 = *(&local7);
panda$core$String* $tmp340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s341, param3);
panda$core$String* $tmp342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp340, &$s343);
$fn345 $tmp344 = ($fn345) $tmp339->$class->vtable[19];
$tmp344($tmp339, $tmp342);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp340));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp342));
// line 88
panda$io$OutputStream* $tmp346 = *(&local7);
panda$core$String* $tmp347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s348, param3);
panda$core$String* $tmp349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp347, &$s350);
$fn352 $tmp351 = ($fn352) $tmp346->$class->vtable[19];
$tmp351($tmp346, $tmp349);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp347));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp349));
// line 89
panda$io$OutputStream* $tmp353 = *(&local7);
$fn355 $tmp354 = ($fn355) $tmp353->$class->vtable[19];
$tmp354($tmp353, &$s356);
// line 90
panda$io$OutputStream* $tmp357 = *(&local7);
$fn359 $tmp358 = ($fn359) $tmp357->$class->vtable[19];
$tmp358($tmp357, &$s360);
// line 91
panda$io$OutputStream* $tmp361 = *(&local7);
$fn363 $tmp362 = ($fn363) $tmp361->$class->vtable[19];
$tmp362($tmp361, &$s364);
// line 92
panda$io$OutputStream* $tmp365 = *(&local7);
$fn367 $tmp366 = ($fn367) $tmp365->$class->vtable[19];
$tmp366($tmp365, &$s368);
// line 93
panda$io$OutputStream* $tmp369 = *(&local7);
$fn371 $tmp370 = ($fn371) $tmp369->$class->vtable[19];
$tmp370($tmp369, &$s372);
// line 94
panda$io$OutputStream* $tmp373 = *(&local7);
$fn375 $tmp374 = ($fn375) $tmp373->$class->vtable[19];
$tmp374($tmp373, &$s376);
// line 95
panda$io$OutputStream* $tmp377 = *(&local7);
panda$core$MutableString* $tmp378 = *(&local4);
panda$core$String* $tmp379 = panda$core$MutableString$finish$R$panda$core$String($tmp378);
$fn381 $tmp380 = ($fn381) $tmp377->$class->vtable[17];
$tmp380($tmp377, $tmp379);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp379));
// line 96
panda$io$OutputStream* $tmp382 = *(&local7);
$fn384 $tmp383 = ($fn384) $tmp382->$class->vtable[19];
$tmp383($tmp382, &$s385);
// line 97
panda$io$OutputStream* $tmp386 = *(&local7);
$fn388 $tmp387 = ($fn388) $tmp386->$class->vtable[19];
$tmp387($tmp386, &$s389);
// line 98
panda$io$OutputStream* $tmp390 = *(&local7);
$fn392 $tmp391 = ($fn392) $tmp390->$class->vtable[19];
$tmp391($tmp390, &$s393);
// line 99
panda$io$OutputStream* $tmp394 = *(&local7);
$fn396 $tmp395 = ($fn396) $tmp394->$class->vtable[19];
$tmp395($tmp394, &$s397);
// line 100
panda$io$OutputStream* $tmp398 = *(&local7);
$fn400 $tmp399 = ($fn400) $tmp398->$class->vtable[19];
$tmp399($tmp398, &$s401);
panda$io$OutputStream* $tmp402 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp402));
// unreffing out
*(&local7) = ((panda$io$OutputStream*) NULL);
panda$core$MutableString* $tmp403 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp403));
// unreffing highlighted
*(&local4) = ((panda$core$MutableString*) NULL);
panda$collections$Array* $tmp404 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp404));
// unreffing lines
*(&local2) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$parser$Parser* $tmp405 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp405));
// unreffing parser
*(&local1) = ((org$pandalanguage$pandac$parser$Parser*) NULL);
panda$threads$MessageQueue* $tmp406 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp406));
// unreffing errors
*(&local0) = ((panda$threads$MessageQueue*) NULL);
return;

}
void org$pandalanguage$pandac$HTMLProcessor$init(org$pandalanguage$pandac$HTMLProcessor* param0) {

return;

}
void org$pandalanguage$pandac$HTMLProcessor$cleanup(org$pandalanguage$pandac$HTMLProcessor* param0) {

return;

}

