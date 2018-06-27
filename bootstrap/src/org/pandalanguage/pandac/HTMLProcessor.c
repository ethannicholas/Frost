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
#include "panda/collections/ListView.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/io/OutputStream.h"

static panda$core$String $s1;
org$pandalanguage$pandac$HTMLProcessor$class_type org$pandalanguage$pandac$HTMLProcessor$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$HTMLProcessor$cleanup, org$pandalanguage$pandac$HTMLProcessor$prettyPrint$org$pandalanguage$pandac$parser$Parser$R$panda$core$String, org$pandalanguage$pandac$HTMLProcessor$process$panda$io$File$panda$io$File$panda$core$String} };

typedef panda$collections$Iterator* (*$fn21)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn28)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn39)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn178)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn190)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn228)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn245)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn247)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn254)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn261)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn268)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn270)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn272)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn274)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn276)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn278)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn280)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn283)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn285)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn287)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn289)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn291)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn293)(panda$io$OutputStream*, panda$core$String*);

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
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x6e\x65\x4e\x75\x6d\x62\x65\x72\x22\x3e", 25, 2886294917360451169, NULL };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e\x20\x20", 9, 1748561594372514868, NULL };
static panda$core$String $s231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x68\x74\x6d\x6c\x3e", 6, 1703069100160, NULL };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x3c\x68\x65\x61\x64\x3e", 8, 14294010361214289, NULL };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, 658568770330923109, NULL };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x70\x61\x6e\x64\x61\x2d\x6d\x61\x69\x6e\x2e\x63\x73\x73\x22\x20\x2f\x3e", 19, 3971150118889472772, NULL };
static panda$core$String $s257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, 658568770330923109, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x70\x61\x6e\x64\x61\x2d\x73\x6f\x75\x72\x63\x65\x2e\x63\x73\x73\x22\x20\x2f\x3e", 21, 5671880168302347572, NULL };
static panda$core$String $s264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, 658568770330923109, NULL };
static panda$core$String $s266 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x70\x61\x6e\x64\x61\x63\x6f\x64\x65\x2d\x6d\x6f\x6e\x6f\x6b\x61\x69\x2e\x63\x73\x73\x22\x20\x2f\x3e", 26, 2764518521368357164, NULL };
static panda$core$String $s269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x3c\x2f\x68\x65\x61\x64\x3e", 9, 1443694447723190336, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x3c\x62\x6f\x64\x79\x3e", 8, 14294009747187617, NULL };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x3c\x64\x69\x76\x20\x69\x64\x3d\x22\x6d\x61\x69\x6e\x22\x3e", 19, 7391579857894992237, NULL };
static panda$core$String $s275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x21\x2d\x2d\x54\x4f\x43\x42\x45\x47\x49\x4e\x2d\x2d\x3e\x3c\x21\x2d\x2d\x54\x4f\x43\x45\x4e\x44\x2d\x2d\x3e", 34, -1824120810441054265, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x64\x69\x76\x20\x69\x64\x3d\x22\x63\x6f\x6e\x74\x65\x6e\x74\x22\x3e", 24, -2483733496706816761, NULL };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20\x3c\x70\x72\x65\x3e\x3c\x63\x6f\x64\x65\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x6e\x64\x61\x63\x6f\x64\x65\x22\x3e", 37, -1002870681665985583, NULL };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20\x3c\x2f\x63\x6f\x64\x65\x3e\x3c\x2f\x70\x72\x65\x3e", 21, 7252662077213941825, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x2f\x64\x69\x76\x3e", 12, -7275120926329646243, NULL };
static panda$core$String $s288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x20\x20\x3c\x2f\x64\x69\x76\x3e", 10, -1763831739482883707, NULL };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x3c\x2f\x62\x6f\x64\x79\x3e", 9, 1443694447109163664, NULL };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x68\x74\x6d\x6c\x3e", 7, 171409661889807, NULL };

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
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp7));
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
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp17));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
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
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp35));
                        panda$core$Panda$unref$panda$core$Object($tmp36);
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
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp95));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp96));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp98));
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
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp113));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp114));
                            panda$core$Panda$unref$panda$core$Object($tmp116);
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s94));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t34));
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
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$11$916));
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
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp136));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp137));
        $tmp4 = 0;
        goto $l2;
        $l139:;
        return $returnValue135;
    }
    $l2:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result5));
    result5 = NULL;
    switch ($tmp4) {
        case 0: goto $l139;
    }
    $l141:;
    abort();
}
void org$pandalanguage$pandac$HTMLProcessor$process$panda$io$File$panda$io$File$panda$core$String(org$pandalanguage$pandac$HTMLProcessor* self, panda$io$File* p_input, panda$io$File* p_output, panda$core$String* p_root) {
    panda$threads$MessageQueue* errors145 = NULL;
    panda$threads$MessageQueue* $tmp146;
    panda$threads$MessageQueue* $tmp147;
    org$pandalanguage$pandac$parser$Parser* parser149 = NULL;
    org$pandalanguage$pandac$parser$Parser* $tmp150;
    org$pandalanguage$pandac$parser$Parser* $tmp151;
    org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp153;
    org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp154;
    org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp155;
    panda$core$String* $tmp157;
    org$pandalanguage$pandac$ASTNode* $tmp159;
    panda$core$Immutable* $tmp165;
    panda$collections$ListView* lines167 = NULL;
    panda$collections$ListView* $tmp168;
    panda$collections$ListView* $tmp169;
    panda$core$String* $tmp170;
    panda$core$Int64 width174;
    panda$core$String* $tmp175;
    panda$core$MutableString* highlighted182 = NULL;
    panda$core$MutableString* $tmp183;
    panda$core$MutableString* $tmp184;
    panda$core$Range$LTpanda$core$Int64$GT $tmp186;
    panda$core$Int64 $tmp187;
    panda$core$Bit $tmp192;
    panda$core$String* lineNumber209 = NULL;
    panda$core$String* $tmp210;
    panda$core$String* $tmp211;
    panda$core$String* $tmp212;
    panda$core$Int64 $tmp213;
    panda$core$String* $tmp217;
    panda$core$String* $tmp218;
    panda$core$String* $tmp219;
    panda$core$String* $tmp220;
    panda$core$Object* $tmp225;
    panda$io$OutputStream* out240 = NULL;
    panda$io$OutputStream* $tmp241;
    panda$io$OutputStream* $tmp242;
    panda$core$String* $tmp248;
    panda$core$String* $tmp249;
    panda$core$String* $tmp255;
    panda$core$String* $tmp256;
    panda$core$String* $tmp262;
    panda$core$String* $tmp263;
    panda$core$String* $tmp281;
    int $tmp144;
    {
        panda$threads$MessageQueue* $tmp148 = (panda$threads$MessageQueue*) pandaObjectAlloc(56, (panda$core$Class*) &panda$threads$MessageQueue$class);
        panda$threads$MessageQueue$init($tmp148);
        $tmp147 = $tmp148;
        $tmp146 = $tmp147;
        errors145 = $tmp146;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp146));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp147));
        org$pandalanguage$pandac$parser$Parser* $tmp152 = (org$pandalanguage$pandac$parser$Parser*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$class);
        org$pandalanguage$pandac$parser$Parser$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT($tmp152, errors145);
        $tmp151 = $tmp152;
        $tmp150 = $tmp151;
        parser149 = $tmp150;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp150));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp151));
        {
            $tmp153 = parser149->syntaxHighlighter;
            org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp156 = (org$pandalanguage$pandac$parser$SyntaxHighlighter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$class);
            org$pandalanguage$pandac$parser$SyntaxHighlighter$init($tmp156);
            $tmp155 = $tmp156;
            $tmp154 = $tmp155;
            parser149->syntaxHighlighter = $tmp154;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp154));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp155));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp153));
        }
        panda$core$String* $tmp158 = panda$io$File$readFully$R$panda$core$String(p_input);
        $tmp157 = $tmp158;
        org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(parser149, p_input, $tmp157);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp157));
        org$pandalanguage$pandac$ASTNode* $tmp160 = org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(parser149);
        $tmp159 = $tmp160;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp159));
        if (((panda$core$Bit) { $tmp159 == NULL }).value) {
        {
            $l161:;
            panda$core$Bit $tmp164 = panda$threads$MessageQueue$hasMessage$R$panda$core$Bit(errors145);
            bool $tmp163 = $tmp164.value;
            if (!$tmp163) goto $l162;
            {
                panda$core$Immutable* $tmp166 = panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T(errors145);
                $tmp165 = $tmp166;
                panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) ((org$pandalanguage$pandac$Compiler$Error*) $tmp165)));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp165));
            }
            goto $l161;
            $l162:;
        }
        }
        panda$core$String* $tmp171 = org$pandalanguage$pandac$HTMLProcessor$prettyPrint$org$pandalanguage$pandac$parser$Parser$R$panda$core$String(self, parser149);
        $tmp170 = $tmp171;
        panda$collections$ListView* $tmp173 = panda$core$String$split$panda$core$String$R$panda$collections$ListView$LTpanda$core$String$GT($tmp170, &$s172);
        $tmp169 = $tmp173;
        $tmp168 = $tmp169;
        lines167 = $tmp168;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp168));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp169));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp170));
        ITable* $tmp176 = ((panda$collections$CollectionView*) lines167)->$class->itable;
        while ($tmp176->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp176 = $tmp176->next;
        }
        $fn178 $tmp177 = $tmp176->methods[0];
        panda$core$Int64 $tmp179 = $tmp177(((panda$collections$CollectionView*) lines167));
        panda$core$String* $tmp180 = panda$core$Int64$convert$R$panda$core$String($tmp179);
        $tmp175 = $tmp180;
        panda$core$Int64 $tmp181 = panda$core$String$length$R$panda$core$Int64($tmp175);
        width174 = $tmp181;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp175));
        panda$core$MutableString* $tmp185 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp185);
        $tmp184 = $tmp185;
        $tmp183 = $tmp184;
        highlighted182 = $tmp183;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp183));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp184));
        panda$core$Int64$init$builtin_int64(&$tmp187, 0);
        ITable* $tmp188 = ((panda$collections$CollectionView*) lines167)->$class->itable;
        while ($tmp188->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp188 = $tmp188->next;
        }
        $fn190 $tmp189 = $tmp188->methods[0];
        panda$core$Int64 $tmp191 = $tmp189(((panda$collections$CollectionView*) lines167));
        panda$core$Bit$init$builtin_bit(&$tmp192, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp186, $tmp187, $tmp191, $tmp192);
        int64_t $tmp194 = $tmp186.min.value;
        panda$core$Int64 i193 = { $tmp194 };
        int64_t $tmp196 = $tmp186.max.value;
        bool $tmp197 = $tmp186.inclusive.value;
        if ($tmp197) goto $l204; else goto $l205;
        $l204:;
        if ($tmp194 <= $tmp196) goto $l198; else goto $l200;
        $l205:;
        if ($tmp194 < $tmp196) goto $l198; else goto $l200;
        $l198:;
        {
            int $tmp208;
            {
                panda$core$Int64$init$builtin_int64(&$tmp213, 1);
                panda$core$Int64 $tmp214 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i193, $tmp213);
                panda$core$String* $tmp215 = panda$core$Int64$convert$R$panda$core$String($tmp214);
                $tmp212 = $tmp215;
                panda$core$String* $tmp216 = panda$core$String$rightAlign$panda$core$Int64$R$panda$core$String($tmp212, width174);
                $tmp211 = $tmp216;
                $tmp210 = $tmp211;
                lineNumber209 = $tmp210;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp210));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp211));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp212));
                panda$core$String* $tmp222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s221, lineNumber209);
                $tmp220 = $tmp222;
                panda$core$String* $tmp224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp220, &$s223);
                $tmp219 = $tmp224;
                ITable* $tmp226 = lines167->$class->itable;
                while ($tmp226->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp226 = $tmp226->next;
                }
                $fn228 $tmp227 = $tmp226->methods[0];
                panda$core$Object* $tmp229 = $tmp227(lines167, i193);
                $tmp225 = $tmp229;
                panda$core$String* $tmp230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp219, ((panda$core$String*) $tmp225));
                $tmp218 = $tmp230;
                panda$core$String* $tmp232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp218, &$s231);
                $tmp217 = $tmp232;
                panda$core$MutableString$append$panda$core$String(highlighted182, $tmp217);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp217));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp218));
                panda$core$Panda$unref$panda$core$Object($tmp225);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp219));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp220));
            }
            $tmp208 = -1;
            goto $l206;
            $l206:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) lineNumber209));
            lineNumber209 = NULL;
            switch ($tmp208) {
                case -1: goto $l233;
            }
            $l233:;
        }
        $l201:;
        int64_t $tmp235 = $tmp196 - i193.value;
        if ($tmp197) goto $l236; else goto $l237;
        $l236:;
        if ((uint64_t) $tmp235 >= 1) goto $l234; else goto $l200;
        $l237:;
        if ((uint64_t) $tmp235 > 1) goto $l234; else goto $l200;
        $l234:;
        i193.value += 1;
        goto $l198;
        $l200:;
        panda$io$OutputStream* $tmp243 = panda$io$File$openOutputStream$R$panda$io$OutputStream(p_output);
        $tmp242 = $tmp243;
        $tmp241 = $tmp242;
        out240 = $tmp241;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp241));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp242));
        (($fn245) out240->$class->vtable[19])(out240, &$s244);
        (($fn247) out240->$class->vtable[19])(out240, &$s246);
        panda$core$String* $tmp251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s250, p_root);
        $tmp249 = $tmp251;
        panda$core$String* $tmp253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp249, &$s252);
        $tmp248 = $tmp253;
        (($fn254) out240->$class->vtable[19])(out240, $tmp248);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp248));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp249));
        panda$core$String* $tmp258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s257, p_root);
        $tmp256 = $tmp258;
        panda$core$String* $tmp260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp256, &$s259);
        $tmp255 = $tmp260;
        (($fn261) out240->$class->vtable[19])(out240, $tmp255);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp255));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp256));
        panda$core$String* $tmp265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s264, p_root);
        $tmp263 = $tmp265;
        panda$core$String* $tmp267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp263, &$s266);
        $tmp262 = $tmp267;
        (($fn268) out240->$class->vtable[19])(out240, $tmp262);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp262));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp263));
        (($fn270) out240->$class->vtable[19])(out240, &$s269);
        (($fn272) out240->$class->vtable[19])(out240, &$s271);
        (($fn274) out240->$class->vtable[19])(out240, &$s273);
        (($fn276) out240->$class->vtable[19])(out240, &$s275);
        (($fn278) out240->$class->vtable[19])(out240, &$s277);
        (($fn280) out240->$class->vtable[19])(out240, &$s279);
        panda$core$String* $tmp282 = panda$core$MutableString$finish$R$panda$core$String(highlighted182);
        $tmp281 = $tmp282;
        (($fn283) out240->$class->vtable[17])(out240, $tmp281);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp281));
        (($fn285) out240->$class->vtable[19])(out240, &$s284);
        (($fn287) out240->$class->vtable[19])(out240, &$s286);
        (($fn289) out240->$class->vtable[19])(out240, &$s288);
        (($fn291) out240->$class->vtable[19])(out240, &$s290);
        (($fn293) out240->$class->vtable[19])(out240, &$s292);
    }
    $tmp144 = -1;
    goto $l142;
    $l142:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) out240));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) highlighted182));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) lines167));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parser149));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) errors145));
    errors145 = NULL;
    parser149 = NULL;
    lines167 = NULL;
    highlighted182 = NULL;
    out240 = NULL;
    switch ($tmp144) {
        case -1: goto $l294;
    }
    $l294:;
}
void org$pandalanguage$pandac$HTMLProcessor$init(org$pandalanguage$pandac$HTMLProcessor* self) {
}
void org$pandalanguage$pandac$HTMLProcessor$cleanup(org$pandalanguage$pandac$HTMLProcessor* self) {
    int $tmp297;
    {
    }
    $tmp297 = -1;
    goto $l295;
    $l295:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp297) {
        case -1: goto $l298;
    }
    $l298:;
}

