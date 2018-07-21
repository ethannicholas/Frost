#include "org/pandalanguage/pandac/HTMLProcessor.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/parser/Parser.h"
#include "panda/core/MutableString.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/parser/SyntaxHighlighter/Kind.h"
#include "panda/core/Int64.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/parser/SyntaxHighlighter.h"
#include "panda/collections/Array.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/Pair.h"
#include "org/pandalanguage/pandac/parser/Token.h"
#include "panda/io/File.h"
#include "panda/threads/MessageQueue.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/io/Console.h"
#include "panda/core/Immutable.h"
#include "org/pandalanguage/pandac/Compiler/Error.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/io/OutputStream.h"

static panda$core$String $s1;
org$pandalanguage$pandac$HTMLProcessor$class_type org$pandalanguage$pandac$HTMLProcessor$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$HTMLProcessor$cleanup, org$pandalanguage$pandac$HTMLProcessor$prettyPrint$org$pandalanguage$pandac$parser$Parser$R$panda$core$String, org$pandalanguage$pandac$HTMLProcessor$process$panda$io$File$panda$io$File$panda$core$String} };

typedef panda$collections$Iterator* (*$fn21)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn28)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn39)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn182)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn194)(panda$collections$CollectionView*);
typedef void (*$fn246)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn248)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn255)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn262)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn269)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn271)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn273)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn275)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn277)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn279)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn281)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn284)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn286)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn288)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn290)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn292)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn294)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72", 38, -1829243819919329117, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x6e\x64\x61\x63\x6f\x64\x65\x22\x3e", 24, -1375153472772145809, NULL };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6d\x6d\x65\x6e\x74\x22\x3e", 22, -1756050522877089685, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x22\x3e", 25, 4577563245309187979, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x22\x3e", 25, 6760721592980043958, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x4e\x61\x6d\x65\x22\x3e", 28, 5111374842590752150, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x74\x79\x70\x65\x22\x3e", 19, -6878895466207673670, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6b\x65\x79\x77\x6f\x72\x64\x22\x3e", 22, -1670481277391576067, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6e\x74\x72\x6f\x6c\x22\x3e", 22, -1756049386432501671, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x74\x65\x72\x61\x6c\x22\x3e", 22, -1659229352682266791, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x73\x74\x72\x69\x6e\x67\x22\x3e", 21, -198306892965556893, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6f\x70\x65\x72\x61\x74\x6f\x72\x22\x3e", 23, 1793793249967207580, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x61\x62\x65\x6c\x22\x3e", 20, 6207823968128210400, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x70\x61\x6e\x64\x61", 19, 825358357982181388, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x67\x74\x3b", 4, 144274317, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22", 13, -8467438715157355368, NULL };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e", 2, 13697, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x70\x61\x6e\x64\x61", 19, 825358357982181388, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x6e\x65\x4e\x75\x6d\x62\x65\x72\x22\x3e", 25, 2886294917360451169, NULL };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e\x20\x20", 9, 1748561594372514868, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x68\x74\x6d\x6c\x3e", 6, 1703069100160, NULL };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x3c\x68\x65\x61\x64\x3e", 8, 14294010361214289, NULL };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, 658568770330923109, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x70\x61\x6e\x64\x61\x2d\x6d\x61\x69\x6e\x2e\x63\x73\x73\x22\x20\x2f\x3e", 19, 3971150118889472772, NULL };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, 658568770330923109, NULL };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x70\x61\x6e\x64\x61\x2d\x73\x6f\x75\x72\x63\x65\x2e\x63\x73\x73\x22\x20\x2f\x3e", 21, 5671880168302347572, NULL };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, 658568770330923109, NULL };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x70\x61\x6e\x64\x61\x63\x6f\x64\x65\x2d\x6d\x6f\x6e\x6f\x6b\x61\x69\x2e\x63\x73\x73\x22\x20\x2f\x3e", 26, 2764518521368357164, NULL };
static panda$core$String $s270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x3c\x2f\x68\x65\x61\x64\x3e", 9, 1443694447723190336, NULL };
static panda$core$String $s272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x3c\x62\x6f\x64\x79\x3e", 8, 14294009747187617, NULL };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x3c\x64\x69\x76\x20\x69\x64\x3d\x22\x6d\x61\x69\x6e\x22\x3e", 19, 7391579857894992237, NULL };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x21\x2d\x2d\x54\x4f\x43\x42\x45\x47\x49\x4e\x2d\x2d\x3e\x3c\x21\x2d\x2d\x54\x4f\x43\x45\x4e\x44\x2d\x2d\x3e", 34, -1824120810441054265, NULL };
static panda$core$String $s278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x64\x69\x76\x20\x69\x64\x3d\x22\x63\x6f\x6e\x74\x65\x6e\x74\x22\x3e", 24, -2483733496706816761, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20\x3c\x70\x72\x65\x3e\x3c\x63\x6f\x64\x65\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x6e\x64\x61\x63\x6f\x64\x65\x22\x3e", 37, -1002870681665985583, NULL };
static panda$core$String $s285 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20\x3c\x2f\x63\x6f\x64\x65\x3e\x3c\x2f\x70\x72\x65\x3e", 21, 7252662077213941825, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x2f\x64\x69\x76\x3e", 12, -7275120926329646243, NULL };
static panda$core$String $s289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x3c\x2f\x64\x69\x76\x3e", 10, -1763831739482883707, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x3c\x2f\x62\x6f\x64\x79\x3e", 9, 1443694447109163664, NULL };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x68\x74\x6d\x6c\x3e", 7, 171409661889807, NULL };

panda$core$String* org$pandalanguage$pandac$HTMLProcessor$prettyPrint$org$pandalanguage$pandac$parser$Parser$R$panda$core$String(org$pandalanguage$pandac$HTMLProcessor* self, org$pandalanguage$pandac$parser$Parser* p_parser) {
    panda$core$MutableString* result5 = NULL;
    panda$core$MutableString* $tmp6;
    panda$core$MutableString* $tmp7;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind current10;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp11;
    panda$core$Int64 $tmp12;
    panda$collections$Iterator* Iter$11$916 = NULL;
    panda$collections$Iterator* $tmp17;
    panda$collections$Iterator* $tmp18;
    org$pandalanguage$pandac$Pair* t34 = NULL;
    org$pandalanguage$pandac$Pair* $tmp35;
    panda$core$Object* $tmp36;
    panda$core$Int64 $tmp44;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $match$17_1749;
    panda$core$Int64 $tmp50;
    panda$core$Int64 $tmp53;
    panda$core$Int64 $tmp56;
    panda$core$Int64 $tmp60;
    panda$core$Int64 $tmp63;
    panda$core$Int64 $tmp66;
    panda$core$Int64 $tmp69;
    panda$core$Int64 $tmp72;
    panda$core$Int64 $tmp75;
    panda$core$Int64 $tmp78;
    panda$core$Int64 $tmp81;
    panda$core$Int64 $tmp84;
    panda$core$Int64 $tmp87;
    panda$core$Bit $tmp90;
    panda$core$MutableString* s94 = NULL;
    panda$core$MutableString* $tmp95;
    panda$core$MutableString* $tmp96;
    panda$core$String* $tmp98;
    panda$core$Int64 $tmp107;
    panda$core$Int64 $tmp110;
    panda$core$String* $tmp113;
    panda$core$String* $tmp114;
    panda$core$Object* $tmp116;
    panda$core$Int64 $tmp122;
    panda$core$Int64 $tmp125;
    panda$core$Int64 $tmp131;
    panda$core$String* $returnValue135;
    panda$core$String* $tmp136;
    panda$core$String* $tmp137;
    int $tmp4;
    {
        panda$core$MutableString* $tmp8 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp8, &$s9);
        $tmp7 = $tmp8;
        $tmp6 = $tmp7;
        result5 = $tmp6;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
        panda$core$Int64$init$builtin_int64(&$tmp12, 0);
        org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp11, $tmp12);
        current10 = $tmp11;
        {
            int $tmp15;
            {
                ITable* $tmp19 = ((panda$collections$Iterable*) p_parser->syntaxHighlighter->tokens)->$class->itable;
                while ($tmp19->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp19 = $tmp19->next;
                }
                $fn21 $tmp20 = $tmp19->methods[0];
                panda$collections$Iterator* $tmp22 = $tmp20(((panda$collections$Iterable*) p_parser->syntaxHighlighter->tokens));
                $tmp18 = $tmp22;
                $tmp17 = $tmp18;
                Iter$11$916 = $tmp17;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
                $l23:;
                ITable* $tmp26 = Iter$11$916->$class->itable;
                while ($tmp26->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp26 = $tmp26->next;
                }
                $fn28 $tmp27 = $tmp26->methods[0];
                panda$core$Bit $tmp29 = $tmp27(Iter$11$916);
                panda$core$Bit $tmp30 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp29);
                bool $tmp25 = $tmp30.value;
                if (!$tmp25) goto $l24;
                {
                    int $tmp33;
                    {
                        ITable* $tmp37 = Iter$11$916->$class->itable;
                        while ($tmp37->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp37 = $tmp37->next;
                        }
                        $fn39 $tmp38 = $tmp37->methods[1];
                        panda$core$Object* $tmp40 = $tmp38(Iter$11$916);
                        $tmp36 = $tmp40;
                        $tmp35 = ((org$pandalanguage$pandac$Pair*) $tmp36);
                        t34 = $tmp35;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
                        panda$core$Panda$unref$panda$core$Object$Q($tmp36);
                        panda$core$Bit $tmp42 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) t34->second)->value.$rawValue, current10.$rawValue);
                        bool $tmp41 = $tmp42.value;
                        if (!$tmp41) goto $l43;
                        panda$core$Int64$init$builtin_int64(&$tmp44, 0);
                        panda$core$Bit $tmp45 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(current10.$rawValue, $tmp44);
                        $tmp41 = $tmp45.value;
                        $l43:;
                        panda$core$Bit $tmp46 = { $tmp41 };
                        if ($tmp46.value) {
                        {
                            panda$core$MutableString$append$panda$core$String(result5, &$s47);
                        }
                        }
                        panda$core$Bit $tmp48 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) t34->second)->value.$rawValue, current10.$rawValue);
                        if ($tmp48.value) {
                        {
                            current10 = ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) t34->second)->value;
                            {
                                $match$17_1749 = current10;
                                panda$core$Int64$init$builtin_int64(&$tmp50, 0);
                                panda$core$Bit $tmp51 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$17_1749.$rawValue, $tmp50);
                                if ($tmp51.value) {
                                {
                                    {
                                    }
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp53, 1);
                                panda$core$Bit $tmp54 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$17_1749.$rawValue, $tmp53);
                                bool $tmp52 = $tmp54.value;
                                if ($tmp52) goto $l55;
                                panda$core$Int64$init$builtin_int64(&$tmp56, 2);
                                panda$core$Bit $tmp57 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$17_1749.$rawValue, $tmp56);
                                $tmp52 = $tmp57.value;
                                $l55:;
                                panda$core$Bit $tmp58 = { $tmp52 };
                                if ($tmp58.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result5, &$s59);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp60, 3);
                                panda$core$Bit $tmp61 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$17_1749.$rawValue, $tmp60);
                                if ($tmp61.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result5, &$s62);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp63, 4);
                                panda$core$Bit $tmp64 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$17_1749.$rawValue, $tmp63);
                                if ($tmp64.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result5, &$s65);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp66, 5);
                                panda$core$Bit $tmp67 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$17_1749.$rawValue, $tmp66);
                                if ($tmp67.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result5, &$s68);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp69, 6);
                                panda$core$Bit $tmp70 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$17_1749.$rawValue, $tmp69);
                                if ($tmp70.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result5, &$s71);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp72, 7);
                                panda$core$Bit $tmp73 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$17_1749.$rawValue, $tmp72);
                                if ($tmp73.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result5, &$s74);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp75, 8);
                                panda$core$Bit $tmp76 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$17_1749.$rawValue, $tmp75);
                                if ($tmp76.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result5, &$s77);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp78, 9);
                                panda$core$Bit $tmp79 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$17_1749.$rawValue, $tmp78);
                                if ($tmp79.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result5, &$s80);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp81, 10);
                                panda$core$Bit $tmp82 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$17_1749.$rawValue, $tmp81);
                                if ($tmp82.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result5, &$s83);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp84, 11);
                                panda$core$Bit $tmp85 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$17_1749.$rawValue, $tmp84);
                                if ($tmp85.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result5, &$s86);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp87, 12);
                                panda$core$Bit $tmp88 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$17_1749.$rawValue, $tmp87);
                                if ($tmp88.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result5, &$s89);
                                }
                                }
                                else {
                                {
                                    panda$core$Bit$init$builtin_bit(&$tmp90, false);
                                    if ($tmp90.value) goto $l91; else goto $l92;
                                    $l92:;
                                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s93, (panda$core$Int64) { 42 });
                                    abort();
                                    $l91:;
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                            }
                        }
                        }
                        panda$core$MutableString* $tmp97 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                        panda$core$String* $tmp99 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(p_parser, ((org$pandalanguage$pandac$parser$Token$wrapper*) t34->first)->value);
                        $tmp98 = $tmp99;
                        panda$core$MutableString$init$panda$core$String($tmp97, $tmp98);
                        $tmp96 = $tmp97;
                        $tmp95 = $tmp96;
                        s94 = $tmp95;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp95));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp96));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp98));
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s94, &$s100, &$s101);
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s94, &$s102, &$s103);
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s94, &$s104, &$s105);
                        panda$core$Int64$init$builtin_int64(&$tmp107, 1);
                        panda$core$Bit $tmp108 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(current10.$rawValue, $tmp107);
                        bool $tmp106 = $tmp108.value;
                        if (!$tmp106) goto $l109;
                        panda$core$Int64$init$builtin_int64(&$tmp110, 2);
                        panda$core$Bit $tmp111 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(current10.$rawValue, $tmp110);
                        $tmp106 = $tmp111.value;
                        $l109:;
                        panda$core$Bit $tmp112 = { $tmp106 };
                        if ($tmp112.value) {
                        {
                            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp117;
                            $tmp117 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
                            $tmp117->value = ((org$pandalanguage$pandac$parser$Token$wrapper*) t34->first)->value.kind;
                            $tmp116 = ((panda$core$Object*) $tmp117);
                            panda$core$String* $tmp118 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s115, $tmp116);
                            $tmp114 = $tmp118;
                            panda$core$String* $tmp120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp114, &$s119);
                            $tmp113 = $tmp120;
                            panda$core$MutableString$append$panda$core$String(result5, $tmp113);
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp114));
                            panda$core$Panda$unref$panda$core$Object$Q($tmp116);
                        }
                        }
                        panda$core$MutableString$append$panda$core$Object(result5, ((panda$core$Object*) s94));
                        panda$core$Int64$init$builtin_int64(&$tmp122, 1);
                        panda$core$Bit $tmp123 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(current10.$rawValue, $tmp122);
                        bool $tmp121 = $tmp123.value;
                        if (!$tmp121) goto $l124;
                        panda$core$Int64$init$builtin_int64(&$tmp125, 2);
                        panda$core$Bit $tmp126 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(current10.$rawValue, $tmp125);
                        $tmp121 = $tmp126.value;
                        $l124:;
                        panda$core$Bit $tmp127 = { $tmp121 };
                        if ($tmp127.value) {
                        {
                            panda$core$MutableString$append$panda$core$String(result5, &$s128);
                        }
                        }
                    }
                    $tmp33 = -1;
                    goto $l31;
                    $l31:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) s94));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) t34));
                    t34 = NULL;
                    s94 = NULL;
                    switch ($tmp33) {
                        case -1: goto $l129;
                    }
                    $l129:;
                }
                goto $l23;
                $l24:;
            }
            $tmp15 = -1;
            goto $l13;
            $l13:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$11$916));
            Iter$11$916 = NULL;
            switch ($tmp15) {
                case -1: goto $l130;
            }
            $l130:;
        }
        panda$core$Int64$init$builtin_int64(&$tmp131, 0);
        panda$core$Bit $tmp132 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(current10.$rawValue, $tmp131);
        if ($tmp132.value) {
        {
            panda$core$MutableString$append$panda$core$String(result5, &$s133);
        }
        }
        panda$core$MutableString$append$panda$core$String(result5, &$s134);
        panda$core$String* $tmp138 = panda$core$MutableString$finish$R$panda$core$String(result5);
        $tmp137 = $tmp138;
        $tmp136 = $tmp137;
        $returnValue135 = $tmp136;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp136));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp137));
        $tmp4 = 0;
        goto $l2;
        $l139:;
        return $returnValue135;
    }
    $l2:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result5));
    result5 = NULL;
    switch ($tmp4) {
        case 0: goto $l139;
    }
    $l141:;
    if (false) goto $l142; else goto $l143;
    $l143:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s144, (panda$core$Int64) { 8 }, &$s145);
    abort();
    $l142:;
    abort();
}
void org$pandalanguage$pandac$HTMLProcessor$process$panda$io$File$panda$io$File$panda$core$String(org$pandalanguage$pandac$HTMLProcessor* self, panda$io$File* p_input, panda$io$File* p_output, panda$core$String* p_root) {
    panda$threads$MessageQueue* errors149 = NULL;
    panda$threads$MessageQueue* $tmp150;
    panda$threads$MessageQueue* $tmp151;
    org$pandalanguage$pandac$parser$Parser* parser153 = NULL;
    org$pandalanguage$pandac$parser$Parser* $tmp154;
    org$pandalanguage$pandac$parser$Parser* $tmp155;
    org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp157;
    org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp158;
    org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp159;
    panda$core$String* $tmp161;
    org$pandalanguage$pandac$ASTNode* $tmp163;
    panda$core$Immutable* $tmp169;
    panda$collections$Array* lines171 = NULL;
    panda$collections$Array* $tmp172;
    panda$collections$Array* $tmp173;
    panda$core$String* $tmp174;
    panda$core$Int64 width178;
    panda$core$String* $tmp179;
    panda$core$MutableString* highlighted186 = NULL;
    panda$core$MutableString* $tmp187;
    panda$core$MutableString* $tmp188;
    panda$core$Range$LTpanda$core$Int64$GT $tmp190;
    panda$core$Int64 $tmp191;
    panda$core$Bit $tmp196;
    panda$core$String* lineNumber213 = NULL;
    panda$core$String* $tmp214;
    panda$core$String* $tmp215;
    panda$core$String* $tmp216;
    panda$core$Int64 $tmp217;
    panda$core$String* $tmp221;
    panda$core$String* $tmp222;
    panda$core$String* $tmp223;
    panda$core$String* $tmp224;
    panda$core$Object* $tmp229;
    panda$io$OutputStream* out241 = NULL;
    panda$io$OutputStream* $tmp242;
    panda$io$OutputStream* $tmp243;
    panda$core$String* $tmp249;
    panda$core$String* $tmp250;
    panda$core$String* $tmp256;
    panda$core$String* $tmp257;
    panda$core$String* $tmp263;
    panda$core$String* $tmp264;
    panda$core$String* $tmp282;
    int $tmp148;
    {
        panda$threads$MessageQueue* $tmp152 = (panda$threads$MessageQueue*) pandaObjectAlloc(56, (panda$core$Class*) &panda$threads$MessageQueue$class);
        panda$threads$MessageQueue$init($tmp152);
        $tmp151 = $tmp152;
        $tmp150 = $tmp151;
        errors149 = $tmp150;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp151));
        org$pandalanguage$pandac$parser$Parser* $tmp156 = (org$pandalanguage$pandac$parser$Parser*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$class);
        org$pandalanguage$pandac$parser$Parser$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT($tmp156, errors149);
        $tmp155 = $tmp156;
        $tmp154 = $tmp155;
        parser153 = $tmp154;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp154));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp155));
        {
            $tmp157 = parser153->syntaxHighlighter;
            org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp160 = (org$pandalanguage$pandac$parser$SyntaxHighlighter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$class);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$init($tmp160);
            $tmp159 = $tmp160;
            $tmp158 = $tmp159;
            parser153->syntaxHighlighter = $tmp158;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp158));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp159));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp157));
        }
        panda$core$String* $tmp162 = panda$io$File$readFully$R$panda$core$String(p_input);
        $tmp161 = $tmp162;
        org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(parser153, p_input, $tmp161);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp161));
        org$pandalanguage$pandac$ASTNode* $tmp164 = org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(parser153);
        $tmp163 = $tmp164;
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp163));
        if (((panda$core$Bit) { $tmp163 == NULL }).value) {
        {
            $l165:;
            panda$core$Bit $tmp168 = panda$threads$MessageQueue$hasMessage$R$panda$core$Bit(errors149);
            bool $tmp167 = $tmp168.value;
            if (!$tmp167) goto $l166;
            {
                panda$core$Immutable* $tmp170 = panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T(errors149);
                $tmp169 = $tmp170;
                panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) ((org$pandalanguage$pandac$Compiler$Error*) $tmp169)));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp169));
            }
            goto $l165;
            $l166:;
        }
        }
        panda$core$String* $tmp175 = org$pandalanguage$pandac$HTMLProcessor$prettyPrint$org$pandalanguage$pandac$parser$Parser$R$panda$core$String(self, parser153);
        $tmp174 = $tmp175;
        panda$collections$Array* $tmp177 = panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT($tmp174, &$s176);
        $tmp173 = $tmp177;
        $tmp172 = $tmp173;
        lines171 = $tmp172;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp172));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp173));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp174));
        ITable* $tmp180 = ((panda$collections$CollectionView*) lines171)->$class->itable;
        while ($tmp180->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp180 = $tmp180->next;
        }
        $fn182 $tmp181 = $tmp180->methods[0];
        panda$core$Int64 $tmp183 = $tmp181(((panda$collections$CollectionView*) lines171));
        panda$core$String* $tmp184 = panda$core$Int64$convert$R$panda$core$String($tmp183);
        $tmp179 = $tmp184;
        panda$core$Int64 $tmp185 = panda$core$String$length$R$panda$core$Int64($tmp179);
        width178 = $tmp185;
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp179));
        panda$core$MutableString* $tmp189 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp189);
        $tmp188 = $tmp189;
        $tmp187 = $tmp188;
        highlighted186 = $tmp187;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp187));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp188));
        panda$core$Int64$init$builtin_int64(&$tmp191, 0);
        ITable* $tmp192 = ((panda$collections$CollectionView*) lines171)->$class->itable;
        while ($tmp192->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp192 = $tmp192->next;
        }
        $fn194 $tmp193 = $tmp192->methods[0];
        panda$core$Int64 $tmp195 = $tmp193(((panda$collections$CollectionView*) lines171));
        panda$core$Bit$init$builtin_bit(&$tmp196, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp190, $tmp191, $tmp195, $tmp196);
        int64_t $tmp198 = $tmp190.min.value;
        panda$core$Int64 i197 = { $tmp198 };
        int64_t $tmp200 = $tmp190.max.value;
        bool $tmp201 = $tmp190.inclusive.value;
        if ($tmp201) goto $l208; else goto $l209;
        $l208:;
        if ($tmp198 <= $tmp200) goto $l202; else goto $l204;
        $l209:;
        if ($tmp198 < $tmp200) goto $l202; else goto $l204;
        $l202:;
        {
            int $tmp212;
            {
                panda$core$Int64$init$builtin_int64(&$tmp217, 1);
                panda$core$Int64 $tmp218 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i197, $tmp217);
                panda$core$String* $tmp219 = panda$core$Int64$convert$R$panda$core$String($tmp218);
                $tmp216 = $tmp219;
                panda$core$String* $tmp220 = panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String($tmp216, width178);
                $tmp215 = $tmp220;
                $tmp214 = $tmp215;
                lineNumber213 = $tmp214;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp214));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp215));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp216));
                panda$core$String* $tmp226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s225, lineNumber213);
                $tmp224 = $tmp226;
                panda$core$String* $tmp228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp224, &$s227);
                $tmp223 = $tmp228;
                panda$core$Object* $tmp230 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(lines171, i197);
                $tmp229 = $tmp230;
                panda$core$String* $tmp231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp223, ((panda$core$String*) $tmp229));
                $tmp222 = $tmp231;
                panda$core$String* $tmp233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp222, &$s232);
                $tmp221 = $tmp233;
                panda$core$MutableString$append$panda$core$String(highlighted186, $tmp221);
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp221));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
                panda$core$Panda$unref$panda$core$Object$Q($tmp229);
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp223));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp224));
            }
            $tmp212 = -1;
            goto $l210;
            $l210:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) lineNumber213));
            lineNumber213 = NULL;
            switch ($tmp212) {
                case -1: goto $l234;
            }
            $l234:;
        }
        $l205:;
        int64_t $tmp236 = $tmp200 - i197.value;
        if ($tmp201) goto $l237; else goto $l238;
        $l237:;
        if ((uint64_t) $tmp236 >= 1) goto $l235; else goto $l204;
        $l238:;
        if ((uint64_t) $tmp236 > 1) goto $l235; else goto $l204;
        $l235:;
        i197.value += 1;
        goto $l202;
        $l204:;
        panda$io$OutputStream* $tmp244 = panda$io$File$openOutputStream$R$panda$io$OutputStream(p_output);
        $tmp243 = $tmp244;
        $tmp242 = $tmp243;
        out241 = $tmp242;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp243));
        (($fn246) out241->$class->vtable[19])(out241, &$s245);
        (($fn248) out241->$class->vtable[19])(out241, &$s247);
        panda$core$String* $tmp252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s251, p_root);
        $tmp250 = $tmp252;
        panda$core$String* $tmp254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp250, &$s253);
        $tmp249 = $tmp254;
        (($fn255) out241->$class->vtable[19])(out241, $tmp249);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp249));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp250));
        panda$core$String* $tmp259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s258, p_root);
        $tmp257 = $tmp259;
        panda$core$String* $tmp261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp257, &$s260);
        $tmp256 = $tmp261;
        (($fn262) out241->$class->vtable[19])(out241, $tmp256);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp256));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp257));
        panda$core$String* $tmp266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s265, p_root);
        $tmp264 = $tmp266;
        panda$core$String* $tmp268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp264, &$s267);
        $tmp263 = $tmp268;
        (($fn269) out241->$class->vtable[19])(out241, $tmp263);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp263));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp264));
        (($fn271) out241->$class->vtable[19])(out241, &$s270);
        (($fn273) out241->$class->vtable[19])(out241, &$s272);
        (($fn275) out241->$class->vtable[19])(out241, &$s274);
        (($fn277) out241->$class->vtable[19])(out241, &$s276);
        (($fn279) out241->$class->vtable[19])(out241, &$s278);
        (($fn281) out241->$class->vtable[19])(out241, &$s280);
        panda$core$String* $tmp283 = panda$core$MutableString$finish$R$panda$core$String(highlighted186);
        $tmp282 = $tmp283;
        (($fn284) out241->$class->vtable[17])(out241, $tmp282);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp282));
        (($fn286) out241->$class->vtable[19])(out241, &$s285);
        (($fn288) out241->$class->vtable[19])(out241, &$s287);
        (($fn290) out241->$class->vtable[19])(out241, &$s289);
        (($fn292) out241->$class->vtable[19])(out241, &$s291);
        (($fn294) out241->$class->vtable[19])(out241, &$s293);
    }
    $tmp148 = -1;
    goto $l146;
    $l146:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) out241));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) highlighted186));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) lines171));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) parser153));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) errors149));
    errors149 = NULL;
    parser153 = NULL;
    lines171 = NULL;
    highlighted186 = NULL;
    out241 = NULL;
    switch ($tmp148) {
        case -1: goto $l295;
    }
    $l295:;
}
void org$pandalanguage$pandac$HTMLProcessor$init(org$pandalanguage$pandac$HTMLProcessor* self) {
}
void org$pandalanguage$pandac$HTMLProcessor$cleanup(org$pandalanguage$pandac$HTMLProcessor* self) {
    int $tmp298;
    {
    }
    $tmp298 = -1;
    goto $l296;
    $l296:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp298) {
        case -1: goto $l299;
    }
    $l299:;
}

