#include "org/pandalanguage/pandac/pandadoc/Markdown.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/MutableMethod.h"
#include "panda/threads/MessageQueue.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/parser/Parser.h"
#include "panda/collections/HashMap.h"
#include "org/pandalanguage/pandac/pandadoc/Protector.h"
#include "panda/math/Random.h"
#include "panda/core/Int64.h"
#include "panda/io/File.h"
#include "org/pandalanguage/pandac/parser/SyntaxHighlighter.h"
#include "panda/core/MutableString.h"
#include "panda/core/RegularExpression.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Bit.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/Key.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown/LinkDefinition.h"
#include "panda/core/Method.h"
#include "panda/core/Immutable.h"
#include "panda/collections/Array.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/Char32.h"
#include "panda/core/Real64.h"
#include "panda/core/Int32.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown/CodeReplacer.h"
#include "org/pandalanguage/pandac/parser/SyntaxHighlighter/Kind.h"
#include "org/pandalanguage/pandac/Pair.h"
#include "org/pandalanguage/pandac/parser/Token.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "panda/core/Matcher.h"
#include "panda/core/String/Index.h"
#include "panda/core/Comparable.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown/HTMLToken.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "panda/core/Equatable.h"
#include "panda/io/OutputStream.h"
#include "panda/io/Console.h"

static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$Markdown$class_type org$pandalanguage$pandac$pandadoc$Markdown$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$cleanup, org$pandalanguage$pandac$pandadoc$Markdown$process$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$encodeBackslashEscapes$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$encodeEscapes$panda$core$MutableString$panda$collections$ListView$LTpanda$core$Char8$GT$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$stripLinkDefinitions$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$runBlockGamut$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$doHorizontalRules$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$hashHTMLBlocks$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$formParagraphs$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$doAutoLinks$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$unescapeSpecialChars$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$encodeEmail$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$doBlockQuotes$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$detabify$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$doCodeBlocks$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$prettyPrint$org$pandalanguage$pandac$parser$Parser$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$syntaxHighlight$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$encodeCode$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$doLists$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$processListItems$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$doHeaders$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$runSpanGamut$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$tokenizeHTML$panda$core$String$R$panda$collections$ListView$LTorg$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$GT, org$pandalanguage$pandac$pandadoc$Markdown$escapeSpecialCharsWithinTagAttributes$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$doImages$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$doAnchors$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$doItalicsAndBold$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$encodeAmpsAndAngles$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$doCodeSpans$panda$core$MutableString} };

typedef void (*$fn52)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn57)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn58)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn59)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn60)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn90)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef void (*$fn93)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*, panda$collections$ListView*, panda$core$String*);
typedef void (*$fn95)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*, panda$collections$ListView*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn105)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn112)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn122)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn138)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Object* (*$fn152)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn162)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn164)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Int64 (*$fn168)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn178)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn219)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn220)(panda$collections$ListView*);
typedef void (*$fn240)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn241)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn242)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn243)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn244)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn245)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn246)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$collections$Iterator* (*$fn265)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn272)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn283)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn306)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn314)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn339)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn340)(panda$collections$ListView*);
typedef panda$core$String* (*$fn361)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn362)(panda$collections$ListView*);
typedef panda$core$String* (*$fn383)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn384)(panda$collections$ListView*);
typedef panda$core$String* (*$fn405)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn406)(panda$collections$ListView*);
typedef panda$core$String* (*$fn453)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$core$String* (*$fn468)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$core$Int64 (*$fn642)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn668)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef void (*$fn677)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn698)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$core$Object* (*$fn710)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn716)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn722)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$core$String* (*$fn733)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$core$String* (*$fn768)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn769)(panda$collections$ListView*);
typedef panda$core$Bit (*$fn804)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn815)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn820)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn839)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn846)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn853)(panda$collections$Iterator*);
typedef panda$core$Real64 (*$fn858)(panda$math$Random*);
typedef panda$core$Object* (*$fn896)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn909)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn926)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn936)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Object* (*$fn981)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn1024)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1025)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1055)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1056)(panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn1097)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1104)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1115)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1185)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1190)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1195)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1200)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1205)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1269)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1292)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1315)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1327)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1334)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Object* (*$fn1346)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1354)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn1378)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$core$Object* (*$fn1422)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1430)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn1454)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$core$Object* (*$fn1585)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1597)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1605)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1606)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1607)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn1636)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1637)(panda$collections$ListView*);
typedef panda$core$Object* (*$fn1711)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1713)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Object* (*$fn1725)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn1753)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1754)(panda$collections$ListView*);
typedef panda$core$Object* (*$fn1773)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1775)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Object* (*$fn1787)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn1815)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1816)(panda$collections$ListView*);
typedef panda$core$Object* (*$fn1833)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1843)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1845)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1901)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1902)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1903)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1904)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1905)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1906)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1907)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1908)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1909)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Bit (*$fn1973)(panda$core$Comparable*, panda$core$Comparable*);
typedef panda$core$Bit (*$fn2000)(panda$core$Comparable*, panda$core$Comparable*);
typedef panda$collections$ListView* (*$fn2027)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2037)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2044)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2055)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2075)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2084)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2093)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2102)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Object* (*$fn2125)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2133)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2141)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn2170)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2181)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Bit (*$fn2194)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn2205)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2216)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2270)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn2271)(panda$collections$ListView*);
typedef panda$core$Object* (*$fn2308)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2316)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2324)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn2351)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2360)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Bit (*$fn2373)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn2382)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2391)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Object* (*$fn2441)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2449)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2457)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn2466)(panda$core$Object*, panda$core$String*);
typedef panda$core$String* (*$fn2467)(panda$core$String*);
typedef void (*$fn2476)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2494)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2505)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2524)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2533)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2576)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn2577)(panda$collections$ListView*);
typedef panda$core$Object* (*$fn2595)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2603)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn2630)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2639)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Bit (*$fn2652)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn2661)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2670)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2704)(panda$core$Object*, panda$core$String*);
typedef panda$core$String* (*$fn2705)(panda$core$String*);
typedef panda$core$Object* (*$fn2803)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2817)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn2846)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn2847)(panda$collections$ListView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e", 42, 5747153137714602429, NULL };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x74\x6d\x70\x2f\x64\x75\x6d\x6d\x79", 10, -2887356857474712656, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x72\x5c\x6e", 4, 200020409, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x72", 2, 19607, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5c\x74\x5d\x2b\x24", 12, 4609931141593742675, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x5b\x20\x5d\x2b\x24", 6, 2058973016890, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x60\x5f\x3e\x21", 4, 203944687, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x7b\x7d\x5b\x5d\x28\x29\x23\x2b\x2d\x2e", 11, -6003771304831432199, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x5c\x5c", 4, 199795969, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x5c", 3, 1978177, NULL };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29", 4, 145926154, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x71\x75\x6f\x74\x3b", 6, 1472784484255, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64\x2e\x70\x61\x6e\x64\x61", 19, 4579722322800558910, NULL };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x5b\x20\x5d\x7b\x30\x2c\x33\x7d\x5c\x5b\x28\x2e\x2b\x29\x5c\x5d\x3a\x5b\x20\x5c\x74\x5d\x2a\x5c\x6e\x3f\x5b\x20\x5c\x74\x5d\x2a\x3c\x3f\x28\x5c\x53\x2b\x3f\x29\x3e\x3f\x5b\x20\x5c\x74\x5d\x2a\x5c\x6e\x3f\x5b\x20\x5c\x74\x5d\x2a\x28\x3f\x3a\x5b\x22\x28\x5d\x28\x2e\x2b\x3f\x29\x5b\x22\x29\x5d\x5b\x20\x5c\x74\x5d\x2a\x29\x3f\x28\x3f\x3a\x5c\x6e\x2b\x7c\x5c\x5a\x29", 92, -1680259952286778556, NULL };
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5d\x7b\x30\x2c\x32\x7d\x28\x5b\x20\x5d\x3f", 18, -695802876960105267, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x3f\x29\x7b\x33\x2c\x7d\x5b\x20\x5d\x2a\x24", 14, 5711149104113814898, NULL };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x68\x72\x20\x2f\x3e", 6, 1703066247920, NULL };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64\x2e\x70\x61\x6e\x64\x61", 19, 4579722322800558910, NULL };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64\x2e\x70\x61\x6e\x64\x61", 19, 4579722322800558910, NULL };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64\x2e\x70\x61\x6e\x64\x61", 19, 4579722322800558910, NULL };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64\x2e\x70\x61\x6e\x64\x61", 19, 4579722322800558910, NULL };
static panda$core$String $s413 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s421 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70", 1, 213, NULL };
static panda$core$String $s422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x69\x76", 3, 2061124, NULL };
static panda$core$String $s423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x31", 2, 20754, NULL };
static panda$core$String $s424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x32", 2, 20755, NULL };
static panda$core$String $s425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x33", 2, 20756, NULL };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x34", 2, 20757, NULL };
static panda$core$String $s427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x35", 2, 20758, NULL };
static panda$core$String $s428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x36", 2, 20759, NULL };
static panda$core$String $s429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6c\x6f\x63\x6b\x71\x75\x6f\x74\x65", 10, -2536067448883908010, NULL };
static panda$core$String $s430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65", 3, 2184428, NULL };
static panda$core$String $s431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x61\x62\x6c\x65", 5, 22682056921, NULL };
static panda$core$String $s432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6c", 2, 20409, NULL };
static panda$core$String $s433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x6c", 2, 21520, NULL };
static panda$core$String $s434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6c", 2, 22126, NULL };
static panda$core$String $s435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x63\x72\x69\x70\x74", 6, 2280602224762, NULL };
static panda$core$String $s436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x73\x63\x72\x69\x70\x74", 8, 22741103748248783, NULL };
static panda$core$String $s437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d", 4, 210295037, NULL };
static panda$core$String $s438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x65\x6c\x64\x73\x65\x74", 8, 21876880126472849, NULL };
static panda$core$String $s439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x72\x61\x6d\x65", 6, 2175813319029, NULL };
static panda$core$String $s440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x68", 4, 217364527, NULL };
static panda$core$String $s445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x73", 3, 2112631, NULL };
static panda$core$String $s446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x6c", 3, 2060710, NULL };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5e\x3c\x28", 4, 146237435, NULL };
static panda$core$String $s490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x62", 2, 19591, NULL };
static panda$core$String $s494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2e\x2a\x5c\x6e\x29\x2a\x3f", 8, 15166389503170077, NULL };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x5c\x32\x3e", 5, 16803092312, NULL };
static panda$core$String $s498 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x2a", 4, 198153659, NULL };
static panda$core$String $s500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2b\x7c\x5c\x5a\x29\x29", 11, 1905689439221158230, NULL };
static panda$core$String $s520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5e\x3c\x28", 4, 146237435, NULL };
static panda$core$String $s522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s524 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x62", 2, 19591, NULL };
static panda$core$String $s526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2e\x2a\x5c\x6e\x29\x2a\x3f", 8, 15166389503170077, NULL };
static panda$core$String $s528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2a\x3c\x2f\x5c\x32\x3e", 7, 156491179351200, NULL };
static panda$core$String $s530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x2a", 4, 198153659, NULL };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2b\x7c\x5c\x5a\x29\x29", 11, 1905689439221158230, NULL };
static panda$core$String $s550 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29\x7c\x5c\x41\x5c\x6e\x3f\x29\x28\x5b\x20\x5d\x7b\x30\x2c", 26, 2222423814537520433, NULL };
static panda$core$String $s554 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s556 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28\x68\x72\x29", 5, 16796009060, NULL };
static panda$core$String $s558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x62", 2, 19591, NULL };
static panda$core$String $s560 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5b\x5e\x3c\x3e\x5d\x29\x2a\x3f", 9, 1536684806687938687, NULL };
static panda$core$String $s562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x3f\x3e", 3, 1516173, NULL };
static panda$core$String $s564 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x2a", 4, 198153659, NULL };
static panda$core$String $s566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x7b\x32\x2c\x7d\x7c\x5c\x5a\x29\x29", 14, 47502487764265221, NULL };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29\x7c\x5c\x41\x5c\x6e\x3f\x29\x28\x5b\x20\x5d\x7b\x30\x2c", 26, 2222423814537520433, NULL };
static panda$core$String $s588 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s590 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x73\x3a", 4, 145926777, NULL };
static panda$core$String $s592 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x21", 2, 16294, NULL };
static panda$core$String $s594 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2d\x2d\x2e\x2a\x3f\x2d\x2d\x5c\x73\x2a\x29\x2b", 13, -4188240096700658567, NULL };
static panda$core$String $s596 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s598 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x2a", 4, 198153659, NULL };
static panda$core$String $s602 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x7b\x32\x2c\x7d\x7c\x5c\x5a\x29", 13, -2921786165263253076, NULL };
static panda$core$String $s604 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x41\x5c\x6e\x2b", 5, 20151576603, NULL };
static panda$core$String $s614 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x2b\x5c\x7a", 5, 20197438560, NULL };
static panda$core$String $s618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s636 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d", 6, 2040023282445, NULL };
static panda$core$String $s680 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x70\x3e", 3, 1653735, NULL };
static panda$core$String $s682 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x70\x3e", 4, 166369282, NULL };
static panda$core$String $s695 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static panda$core$String $s729 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6c\x74\x6f\x3a", 7, 223949750184005, NULL };
static panda$core$String $s731 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static panda$core$String $s743 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e", 2, 13697, NULL };
static panda$core$String $s746 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };
static panda$core$String $s753 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s754 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64\x2e\x70\x61\x6e\x64\x61", 19, 4579722322800558910, NULL };
static panda$core$String $s776 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s782 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28\x28\x68\x74\x74\x70\x73\x3f\x7c\x66\x74\x70\x29\x3a\x5b\x5e\x27\x5c\x22\x3e\x5c\x73\x5d\x2b\x29\x3e", 27, -3769254741412201634, NULL };
static panda$core$String $s783 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22\x24\x31\x22\x3e\x24\x31\x3c\x2f\x61\x3e", 19, -7734359251480494054, NULL };
static panda$core$String $s788 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28\x5b\x2d\x2e\x5c\x77\x5d\x2b\x5c\x40\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x28\x5c\x2e\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x29\x2a\x5c\x2e\x5b\x61\x2d\x7a\x5d\x2b\x29\x3e", 46, 7932002164266535007, NULL };
static panda$core$String $s862 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x23", 2, 14074, NULL };
static panda$core$String $s870 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x23\x78", 3, 1421594, NULL };
static panda$core$String $s873 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78", 1, 221, NULL };
static panda$core$String $s887 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s898 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x20\x20", 3, 1992459, NULL };
static panda$core$String $s899 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s911 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x20\x20", 3, 1992459, NULL };
static panda$core$String $s912 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s930 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5c\x74\x5d\x2a\x3e\x5b\x20\x5c\x74\x5d\x3f", 18, -7646264414083764081, NULL };
static panda$core$String $s931 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s934 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5c\x74\x5d\x2b\x24", 12, 4609931141593742675, NULL };
static panda$core$String $s935 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s937 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s938 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20", 2, 13465, NULL };
static panda$core$String $s943 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x73\x2a\x3c\x70\x72\x65\x3e\x2e\x2a\x3f\x3c\x2f\x70\x72\x65\x3e\x29", 19, -2639512543099520141, NULL };
static panda$core$String $s950 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x62\x6c\x6f\x63\x6b\x71\x75\x6f\x74\x65\x3e\x0a", 13, -5037006854090612730, NULL };
static panda$core$String $s952 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x3c\x2f\x62\x6c\x6f\x63\x6b\x71\x75\x6f\x74\x65\x3e\x0a\x0a", 16, -5426254764564286611, NULL };
static panda$core$String $s959 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s960 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s968 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x5e\x5b\x20\x09\x5d\x2a\x3e\x5b\x20\x09\x5d\x3f\x2e\x2b\x5c\x6e\x28\x2e\x2b\x5c\x6e\x29\x2a\x5c\x6e\x2a\x29\x2b\x29", 31, 6066980682886811878, NULL };
static panda$core$String $s1009 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s1010 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1031 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64\x2e\x70\x61\x6e\x64\x61", 19, 4579722322800558910, NULL };
static panda$core$String $s1032 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1035 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2e\x2a\x3f\x29\x5c\x74", 7, 150162241731241, NULL };
static panda$core$String $s1040 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x5c\x74\x7c\x5b\x20\x5d\x7b\x31\x2c\x34\x7d\x29", 18, 7461573203115413830, NULL };
static panda$core$String $s1041 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1062 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64\x2e\x70\x61\x6e\x64\x61", 19, 4579722322800558910, NULL };
static panda$core$String $s1063 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1071 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x5c\x6e\x5c\x6e\x7c\x5c\x41\x29\x28\x28\x3f\x3a\x28\x3f\x3a\x5b\x20\x5d\x7b\x34\x7d\x29\x2e\x2a\x5c\x6e\x2b\x29\x2b\x29\x28\x28\x3f\x3d\x5e\x5b\x20\x5d\x7b\x30\x2c\x34\x7d\x5c\x53\x29\x7c\x5c\x5a\x29", 53, -4156959249454615378, NULL };
static panda$core$String $s1085 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x6e\x64\x61\x63\x6f\x64\x65\x22\x3e", 24, -1375153472772145809, NULL };
static panda$core$String $s1123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s1135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6d\x6d\x65\x6e\x74\x22\x3e", 22, -1756050522877089685, NULL };
static panda$core$String $s1138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x22\x3e", 25, 4577563245309187979, NULL };
static panda$core$String $s1141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x22\x3e", 25, 6760721592980043958, NULL };
static panda$core$String $s1144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x4e\x61\x6d\x65\x22\x3e", 28, 5111374842590752150, NULL };
static panda$core$String $s1147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x74\x79\x70\x65\x22\x3e", 19, -6878895466207673670, NULL };
static panda$core$String $s1150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6b\x65\x79\x77\x6f\x72\x64\x22\x3e", 22, -1670481277391576067, NULL };
static panda$core$String $s1153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6e\x74\x72\x6f\x6c\x22\x3e", 22, -1756049386432501671, NULL };
static panda$core$String $s1156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x74\x65\x72\x61\x6c\x22\x3e", 22, -1659229352682266791, NULL };
static panda$core$String $s1159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x73\x74\x72\x69\x6e\x67\x22\x3e", 21, -198306892965556893, NULL };
static panda$core$String $s1162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6f\x70\x65\x72\x61\x74\x6f\x72\x22\x3e", 23, 1793793249967207580, NULL };
static panda$core$String $s1165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x61\x62\x65\x6c\x22\x3e", 20, 6207823968128210400, NULL };
static panda$core$String $s1169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s1176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s1178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s1180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x67\x74\x3b", 4, 144274317, NULL };
static panda$core$String $s1182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s1184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s1187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s1189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s1192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5b", 2, 19584, NULL };
static panda$core$String $s1194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5d", 2, 19586, NULL };
static panda$core$String $s1199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s1202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s1204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s1216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22", 13, -8467438715157355368, NULL };
static panda$core$String $s1220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e", 2, 13697, NULL };
static panda$core$String $s1229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s1234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s1235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s1245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s1246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x24\x28\x5c\x73\x2a\x29\x5c\x2e\x5c\x2e\x5c\x2e\x28\x5c\x73\x2a\x29\x5e", 22, -7048023396403805866, NULL };
static panda$core$String $s1333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x31\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d\x24\x32", 13, -8807464024981417766, NULL };
static panda$core$String $s1335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d", 9, 1585511400200274083, NULL };
static panda$core$String $s1336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x65\x6c\x6c\x69\x70\x73\x69\x73\x22\x3e\x2e\x2e\x2e\x3c\x2f\x73\x70\x61\x6e\x3e", 33, 5749756206725659630, NULL };
static panda$core$String $s1359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x2a\x2b\x2d\x5d", 5, 20023312915, NULL };
static panda$core$String $s1363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6c", 2, 22126, NULL };
static panda$core$String $s1366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x6c", 2, 21520, NULL };
static panda$core$String $s1372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x6e\x7b\x32\x2c\x7d", 7, 205851892197837, NULL };
static panda$core$String $s1373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a\x0a", 3, 1133331, NULL };
static panda$core$String $s1385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x73\x2b\x24", 5, 20179622579, NULL };
static panda$core$String $s1386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f", 2, 16308, NULL };
static panda$core$String $s1404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x0a", 2, 16473, NULL };
static panda$core$String $s1411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s1412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x2a\x2b\x2d\x5d", 5, 20023312915, NULL };
static panda$core$String $s1439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6c", 2, 22126, NULL };
static panda$core$String $s1442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x6c", 2, 21520, NULL };
static panda$core$String $s1448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d", 6, 2040023282445, NULL };
static panda$core$String $s1449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a\x0a", 3, 1133331, NULL };
static panda$core$String $s1464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x0a", 2, 16473, NULL };
static panda$core$String $s1469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f", 2, 16308, NULL };
static panda$core$String $s1472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x0a", 2, 16473, NULL };
static panda$core$String $s1479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s1480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x7b\x30\x2c", 6, 2021366306632, NULL };
static panda$core$String $s1513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x29", 18, -3376353325465069725, NULL };
static panda$core$String $s1518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x2b", 4, 198153660, NULL };
static panda$core$String $s1520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x73\x3a\x2e\x2b\x3f\x29", 8, 15185198979096470, NULL };
static panda$core$String $s1524 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x7a", 2, 19615, NULL };
static panda$core$String $s1528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d", 6, 2040023282445, NULL };
static panda$core$String $s1532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x53\x29", 6, 1488543771181, NULL };
static panda$core$String $s1534 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x21\x5b\x20\x5d\x2a", 7, 150340005652795, NULL };
static panda$core$String $s1536 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29", 16, 533168213134719014, NULL };
static panda$core$String $s1538 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x2b", 4, 198153660, NULL };
static panda$core$String $s1540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1542 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1544 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1557 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e", 5, 14738541648, NULL };
static panda$core$String $s1559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1571 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29\x7c\x5c\x41\x5c\x6e\x3f\x29", 23, 6260301638587013175, NULL };
static panda$core$String $s1612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6c\x69\x3e", 4, 166990836, NULL };
static panda$core$String $s1614 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x6c\x69\x3e\x0a", 6, 1697129369393, NULL };
static panda$core$String $s1621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s1622 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1643 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64\x2e\x70\x61\x6e\x64\x61", 19, 4579722322800558910, NULL };
static panda$core$String $s1644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1656 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d\x5c\x7a", 8, 20810277504230859, NULL };
static panda$core$String $s1657 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1663 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x6e\x29\x3f\x5e\x28\x5b\x20\x5c\x74\x5d\x2a\x29\x28\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b\x28\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x6e\x7b\x31\x2c\x32\x7d\x29\x29\x28\x3f\x3d\x5c\x6e\x2a\x28\x5c\x7a\x7c\x5c\x32\x28\x5b\x2d\x2b\x5c\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5c\x74\x5d\x2b\x29\x29", 86, 9008606742683235904, NULL };
static panda$core$String $s1681 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s1682 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static panda$core$String $s1695 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1720 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x6e\x61\x6d\x65\x3d\x22", 9, 1753834143939719502, NULL };
static panda$core$String $s1728 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e\x3c\x2f\x61\x3e\x3c\x68\x31\x3e", 10, 751414109755816110, NULL };
static panda$core$String $s1731 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x68\x31\x3e", 5, 16803214623, NULL };
static panda$core$String $s1738 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s1739 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1760 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64\x2e\x70\x61\x6e\x64\x61", 19, 4579722322800558910, NULL };
static panda$core$String $s1761 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1782 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x6e\x61\x6d\x65\x3d\x22", 9, 1753834143939719502, NULL };
static panda$core$String $s1790 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e\x3c\x2f\x61\x3e\x3c\x68\x32\x3e", 10, 751414109755816211, NULL };
static panda$core$String $s1793 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x68\x32\x3e", 5, 16803214724, NULL };
static panda$core$String $s1800 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s1801 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64\x2e\x70\x61\x6e\x64\x61", 19, 4579722322800558910, NULL };
static panda$core$String $s1823 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1851 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s1863 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1865 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1868 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f", 2, 16308, NULL };
static panda$core$String $s1871 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x0a", 2, 16473, NULL };
static panda$core$String $s1878 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s1879 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1885 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x3d\x3d\x3d\x3d\x2b\x24", 17, 8644226230150951458, NULL };
static panda$core$String $s1890 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x2d\x2d\x2d\x2d\x2b\x24", 17, 8644226060307728994, NULL };
static panda$core$String $s1897 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x28\x23\x7b\x31\x2c\x36\x7d\x29\x5c\x73\x2a\x28\x2e\x2a\x3f\x29\x5c\x73\x2a\x5c\x31\x3f\x24", 24, 6625741561155563100, NULL };
static panda$core$String $s1912 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x32\x2c\x7d\x5c\x6e", 7, 142480172029377, NULL };
static panda$core$String $s1913 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x62\x72\x20\x2f\x3e\x0a", 8, 14324133278249456, NULL };
static panda$core$String $s1918 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1923 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x3c\x5b\x61\x2d\x7a\x2f\x21\x24\x5d\x28\x3f\x3a\x5b\x5e\x3c\x3e\x5d\x7c", 21, -3726567012419943545, NULL };
static panda$core$String $s1929 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2a\x3e\x29", 4, 146737487, NULL };
static panda$core$String $s1934 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s1935 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1953 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x73\x3a\x3c\x21\x28\x2d\x2d\x2e\x2a\x3f\x2d\x2d\x5c\x73\x2a\x29\x2b\x3e\x29\x7c\x28\x3f\x73\x3a\x3c\x5c\x3f\x2e\x2a\x3f\x5c\x3f\x3e\x29\x7c", 37, -5883741260455240331, NULL };
static panda$core$String $s2017 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s2018 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s2072 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s2074 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s2081 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x60", 1, 197, NULL };
static panda$core$String $s2083 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x60", 1, 197, NULL };
static panda$core$String $s2090 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s2092 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2099 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x2a", 3, 1978127, NULL };
static panda$core$String $s2169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x2a", 3, 1978127, NULL };
static panda$core$String $s2204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x61\x6c\x74\x3d\x22", 6, 1408049687549, NULL };
static panda$core$String $s2227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x20\x74\x69\x74\x6c\x65\x3d\x22", 9, 1465411637805988408, NULL };
static panda$core$String $s2230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22", 10, -7235316333681816127, NULL };
static panda$core$String $s2240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x3e", 2, 15010, NULL };
static panda$core$String $s2255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s2256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s2277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64\x2e\x70\x61\x6e\x64\x61", 19, 4579722322800558910, NULL };
static panda$core$String $s2278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s2284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x20\x5c\x22\x28\x2e\x2a\x29\x5c\x22\x5c\x5c\x29", 30, 1507772917981139974, NULL };
static panda$core$String $s2285 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x74\x69\x74\x6c\x65\x3d\x22\x24\x33\x22\x20\x2f\x3e", 36, -5185982321426610333, NULL };
static panda$core$String $s2288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x5c\x5c\x29", 21, -5830152919387063515, NULL };
static panda$core$String $s2289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x2f\x3e", 25, -7685348581218553223, NULL };
static panda$core$String $s2294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5b\x21\x5d\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d\x29", 38, 3513714089933290343, NULL };
static panda$core$String $s2331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s2350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s2381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, 14383652264361074, NULL };
static panda$core$String $s2400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static panda$core$String $s2412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s2418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };
static panda$core$String $s2430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s2431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s2472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x72\x72\x6f\x72\x3a\x20\x75\x6e\x61\x62\x6c\x65\x20\x74\x6f\x20\x72\x65\x73\x6f\x6c\x76\x65\x20\x6c\x69\x6e\x6b\x20\x27", 31, 6850877155588619032, NULL };
static panda$core$String $s2474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x65\x72\x72\x6f\x72\x29", 7, 150747842869236, NULL };
static panda$core$String $s2485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x6e\x6f\x20\x6c\x69\x6e\x6b\x20\x72\x65\x73\x6f\x6c\x76\x65\x72\x5d", 18, -5787080662771743994, NULL };
static panda$core$String $s2491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s2493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2502 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2504 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static panda$core$String $s2516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2521 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s2523 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x71\x75\x6f\x74\x3b", 6, 1472784484255, NULL };
static panda$core$String $s2542 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, 14383652264361074, NULL };
static panda$core$String $s2547 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s2549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2551 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };
static panda$core$String $s2561 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s2562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s2583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64\x2e\x70\x61\x6e\x64\x61", 19, 4579722322800558910, NULL };
static panda$core$String $s2584 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s2612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x3f\x5c\x5c\x6e", 7, 204157935605574, NULL };
static panda$core$String $s2613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2627 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s2629 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2636 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2638 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2649 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2658 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s2660 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2667 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2669 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2677 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, 14383652264361074, NULL };
static panda$core$String $s2679 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2689 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static panda$core$String $s2691 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2694 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s2697 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };
static panda$core$String $s2713 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2714 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s2716 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s2717 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s2725 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static panda$core$String $s2727 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e\x3c\x63\x6f\x64\x65\x3e", 8, 14540282526185430, NULL };
static panda$core$String $s2730 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x63\x6f\x64\x65\x3e\x3c\x2f\x61\x3e", 11, -1098056279549389125, NULL };
static panda$core$String $s2737 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x6e\x6f\x20\x6d\x61\x74\x63\x68\x3a", 10, 7838749061877918149, NULL };
static panda$core$String $s2739 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2743 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x6e\x6f\x20\x6c\x69\x6e\x6b\x20\x72\x65\x73\x6f\x6c\x76\x65\x72\x29", 18, -7339959284735798157, NULL };
static panda$core$String $s2751 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s2752 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s2760 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d\x29", 35, 4482227048438022174, NULL };
static panda$core$String $s2766 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d\x5c\x28\x5b\x20\x5c\x74\x5d\x2a\x3c\x3f\x28\x2e\x2a\x3f\x29\x3e\x3f\x5b\x20\x5c\x74\x5d\x2a\x28\x28\x5b\x27\x22\x5d\x29\x28\x2e\x2a\x3f\x29\x5c\x35\x29\x3f\x5c\x29\x29", 52, 2691589156809831866, NULL };
static panda$core$String $s2774 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x5b\x28\x5b\x5e\x5c\x5b\x5c\x5d\x5d\x2b\x29\x5c\x5d\x29", 16, 8227630457021096112, NULL };
static panda$core$String $s2780 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x2a\x5c\x5c\x2a\x7c\x5f\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x5b\x2a\x5f\x5d\x2a\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 35, 636172404878895653, NULL };
static panda$core$String $s2781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x74\x72\x6f\x6e\x67\x3e\x24\x32\x3c\x2f\x73\x74\x72\x6f\x6e\x67\x3e", 19, 504491683038092400, NULL };
static panda$core$String $s2784 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x2a\x7c\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 26, -4247179954659836315, NULL };
static panda$core$String $s2785 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x6d\x3e\x24\x32\x3c\x2f\x65\x6d\x3e", 11, 2723679958089201678, NULL };
static panda$core$String $s2788 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x28\x3f\x21\x23\x3f\x5b\x78\x58\x5d\x3f\x28\x3f\x3a\x5b\x30\x2d\x39\x61\x2d\x66\x41\x2d\x46\x5d\x2b\x7c\x5c\x77\x2b\x29\x3b\x29", 33, -6716186838887255919, NULL };
static panda$core$String $s2789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s2792 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28\x3f\x21\x5b\x61\x2d\x7a\x41\x2d\x5a\x2f\x3f\x5c\x24\x21\x5d\x29", 18, 6433614010358842861, NULL };
static panda$core$String $s2793 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s2811 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x5b\x20\x5c\x74\x5d\x2b", 7, 207956274426062, NULL };
static panda$core$String $s2812 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2815 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2b\x24", 7, 204157886156304, NULL };
static panda$core$String $s2816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x63\x6f\x64\x65\x3e", 6, 1702543554134, NULL };
static panda$core$String $s2824 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x63\x6f\x64\x65\x3e", 7, 171409136343781, NULL };
static panda$core$String $s2831 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s2832 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s2853 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64\x2e\x70\x61\x6e\x64\x61", 19, 4579722322800558910, NULL };
static panda$core$String $s2854 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s2857 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3c\x21\x5c\x5c\x29\x28\x60\x2b\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x21\x60\x29\x5c\x31\x28\x3f\x21\x60\x29", 29, 7657757978565690602, NULL };

void org$pandalanguage$pandac$pandadoc$Markdown$init(org$pandalanguage$pandac$pandadoc$Markdown* self) {
    self->source = NULL;
    self->errorQueue = NULL;
    self->parser = NULL;
    self->linkResolver = NULL;
    self->linkDefinitions = NULL;
    self->charProtector = NULL;
    self->htmlProtector = NULL;
    self->random = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown$init$$LPpanda$core$String$RP$EQ$AM$GT$LPpanda$core$String$Q$RP$Q(self, NULL);
}
void org$pandalanguage$pandac$pandadoc$Markdown$init$$LPpanda$core$String$RP$EQ$AM$GT$LPpanda$core$String$Q$RP$Q(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableMethod* p_linkResolver) {
    panda$threads$MessageQueue* $tmp2;
    panda$threads$MessageQueue* $tmp3;
    org$pandalanguage$pandac$parser$Parser* $tmp5;
    org$pandalanguage$pandac$parser$Parser* $tmp6;
    panda$collections$HashMap* $tmp8;
    panda$collections$HashMap* $tmp9;
    org$pandalanguage$pandac$pandadoc$Protector* $tmp11;
    org$pandalanguage$pandac$pandadoc$Protector* $tmp12;
    org$pandalanguage$pandac$pandadoc$Protector* $tmp14;
    org$pandalanguage$pandac$pandadoc$Protector* $tmp15;
    panda$math$Random* $tmp17;
    panda$math$Random* $tmp18;
    panda$core$Int64 $tmp20;
    panda$io$File* $tmp21;
    panda$io$File* $tmp22;
    panda$io$File* $tmp23;
    panda$core$MutableMethod* $tmp26;
    panda$core$MutableMethod* $tmp27;
    org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp28;
    org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp29;
    org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp30;
    self->source = NULL;
    self->errorQueue = NULL;
    self->parser = NULL;
    self->linkResolver = NULL;
    self->linkDefinitions = NULL;
    self->charProtector = NULL;
    self->htmlProtector = NULL;
    self->random = NULL;
    panda$threads$MessageQueue* $tmp4 = (panda$threads$MessageQueue*) pandaObjectAlloc(56, (panda$core$Class*) &panda$threads$MessageQueue$class);
    panda$threads$MessageQueue$init($tmp4);
    $tmp3 = $tmp4;
    $tmp2 = $tmp3;
    self->errorQueue = $tmp2;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
    org$pandalanguage$pandac$parser$Parser* $tmp7 = (org$pandalanguage$pandac$parser$Parser*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$class);
    org$pandalanguage$pandac$parser$Parser$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT($tmp7, self->errorQueue);
    $tmp6 = $tmp7;
    $tmp5 = $tmp6;
    self->parser = $tmp5;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
    panda$collections$HashMap* $tmp10 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp10);
    $tmp9 = $tmp10;
    $tmp8 = $tmp9;
    self->linkDefinitions = $tmp8;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
    org$pandalanguage$pandac$pandadoc$Protector* $tmp13 = (org$pandalanguage$pandac$pandadoc$Protector*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Protector$class);
    org$pandalanguage$pandac$pandadoc$Protector$init($tmp13);
    $tmp12 = $tmp13;
    $tmp11 = $tmp12;
    self->charProtector = $tmp11;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
    org$pandalanguage$pandac$pandadoc$Protector* $tmp16 = (org$pandalanguage$pandac$pandadoc$Protector*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Protector$class);
    org$pandalanguage$pandac$pandadoc$Protector$init($tmp16);
    $tmp15 = $tmp16;
    $tmp14 = $tmp15;
    self->htmlProtector = $tmp14;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
    panda$math$Random* $tmp19 = panda$math$Random$default$R$panda$math$Random();
    $tmp18 = $tmp19;
    $tmp17 = $tmp18;
    self->random = $tmp17;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
    panda$core$Int64$init$builtin_int64(&$tmp20, 0);
    self->listLevel = $tmp20;
    {
        $tmp21 = self->source;
        panda$io$File* $tmp24 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp24, &$s25);
        $tmp23 = $tmp24;
        $tmp22 = $tmp23;
        self->source = $tmp22;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
    }
    {
        $tmp26 = self->linkResolver;
        $tmp27 = p_linkResolver;
        self->linkResolver = $tmp27;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
    }
    {
        $tmp28 = self->parser->syntaxHighlighter;
        org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp31 = (org$pandalanguage$pandac$parser$SyntaxHighlighter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$class);
        org$pandalanguage$pandac$parser$SyntaxHighlighter$init($tmp31);
        $tmp30 = $tmp31;
        $tmp29 = $tmp30;
        self->parser->syntaxHighlighter = $tmp29;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
    }
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$process$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$String* p_raw) {
    panda$core$MutableString* text35 = NULL;
    panda$core$MutableString* $tmp36;
    panda$core$MutableString* $tmp37;
    panda$core$RegularExpression* $tmp39;
    panda$core$RegularExpression* $tmp43;
    panda$core$RegularExpression* $tmp47;
    panda$core$RegularExpression* $tmp53;
    panda$core$Char8 $tmp61;
    panda$core$UInt8 $tmp62;
    panda$core$String* $returnValue63;
    panda$core$String* $tmp64;
    panda$core$String* $tmp65;
    int $tmp34;
    {
        panda$core$MutableString* $tmp38 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp38, p_raw);
        $tmp37 = $tmp38;
        $tmp36 = $tmp37;
        text35 = $tmp36;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
        panda$core$RegularExpression* $tmp40 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp40, &$s41);
        $tmp39 = $tmp40;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(text35, $tmp39, &$s42);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
        panda$core$RegularExpression* $tmp44 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp44, &$s45);
        $tmp43 = $tmp44;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(text35, $tmp43, &$s46);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
        panda$core$RegularExpression* $tmp48 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp48, &$s49);
        $tmp47 = $tmp48;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(text35, $tmp47, &$s50);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
        panda$core$MutableString$append$panda$core$String(text35, &$s51);
        (($fn52) self->$class->vtable[14])(self, text35);
        panda$core$RegularExpression* $tmp54 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp54, &$s55);
        $tmp53 = $tmp54;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(text35, $tmp53, &$s56);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp53));
        (($fn57) self->$class->vtable[8])(self, text35);
        (($fn58) self->$class->vtable[5])(self, text35);
        (($fn59) self->$class->vtable[6])(self, text35);
        (($fn60) self->$class->vtable[11])(self, text35);
        panda$core$UInt8$init$builtin_uint8(&$tmp62, 10);
        panda$core$Char8$init$panda$core$UInt8(&$tmp61, $tmp62);
        panda$core$MutableString$append$panda$core$Char8(text35, $tmp61);
        panda$core$String* $tmp66 = panda$core$MutableString$convert$R$panda$core$String(text35);
        $tmp65 = $tmp66;
        $tmp64 = $tmp65;
        $returnValue63 = $tmp64;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
        $tmp34 = 0;
        goto $l32;
        $l67:;
        return $returnValue63;
    }
    $l32:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) text35));
    text35 = NULL;
    switch ($tmp34) {
        case 0: goto $l67;
    }
    $l69:;
    if (false) goto $l70; else goto $l71;
    $l71:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s72, (panda$core$Int64) { 129 }, &$s73);
    abort();
    $l70:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$encodeBackslashEscapes$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$collections$ListView* normalChars77 = NULL;
    panda$collections$ListView* $tmp78;
    panda$collections$ListView* $tmp79;
    panda$collections$ListView* escapedChars82 = NULL;
    panda$collections$ListView* $tmp83;
    panda$collections$ListView* $tmp84;
    panda$core$String* $tmp88;
    int $tmp76;
    {
        panda$collections$ListView* $tmp81 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s80);
        $tmp79 = $tmp81;
        $tmp78 = $tmp79;
        normalChars77 = $tmp78;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp78));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
        panda$collections$ListView* $tmp86 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s85);
        $tmp84 = $tmp86;
        $tmp83 = $tmp84;
        escapedChars82 = $tmp83;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
        panda$core$String* $tmp91 = (($fn90) self->charProtector->$class->vtable[2])(self->charProtector, &$s89);
        $tmp88 = $tmp91;
        panda$core$MutableString$replace$panda$core$String$panda$core$String(p_text, &$s87, $tmp88);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp88));
        (($fn93) self->$class->vtable[4])(self, p_text, normalChars77, &$s92);
        (($fn95) self->$class->vtable[4])(self, p_text, escapedChars82, &$s94);
    }
    $tmp76 = -1;
    goto $l74;
    $l74:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) escapedChars82));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) normalChars77));
    normalChars77 = NULL;
    escapedChars82 = NULL;
    switch ($tmp76) {
        case -1: goto $l96;
    }
    $l96:;
}
void org$pandalanguage$pandac$pandadoc$Markdown$encodeEscapes$panda$core$MutableString$panda$collections$ListView$LTpanda$core$Char8$GT$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text, panda$collections$ListView* p_chars, panda$core$String* p_slashes) {
    panda$collections$Iterator* Iter$162$9100 = NULL;
    panda$collections$Iterator* $tmp101;
    panda$collections$Iterator* $tmp102;
    panda$core$Char8 ch118;
    panda$core$Object* $tmp119;
    panda$core$RegularExpression* regex124 = NULL;
    panda$core$RegularExpression* $tmp125;
    panda$core$RegularExpression* $tmp126;
    panda$core$String* $tmp128;
    panda$core$String* $tmp129;
    panda$core$Object* $tmp132;
    panda$core$String* $tmp135;
    panda$core$String* $tmp136;
    panda$core$Bit $tmp140;
    {
        int $tmp99;
        {
            ITable* $tmp103 = ((panda$collections$Iterable*) p_chars)->$class->itable;
            while ($tmp103->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp103 = $tmp103->next;
            }
            $fn105 $tmp104 = $tmp103->methods[0];
            panda$collections$Iterator* $tmp106 = $tmp104(((panda$collections$Iterable*) p_chars));
            $tmp102 = $tmp106;
            $tmp101 = $tmp102;
            Iter$162$9100 = $tmp101;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
            $l107:;
            ITable* $tmp110 = Iter$162$9100->$class->itable;
            while ($tmp110->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp110 = $tmp110->next;
            }
            $fn112 $tmp111 = $tmp110->methods[0];
            panda$core$Bit $tmp113 = $tmp111(Iter$162$9100);
            panda$core$Bit $tmp114 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp113);
            bool $tmp109 = $tmp114.value;
            if (!$tmp109) goto $l108;
            {
                int $tmp117;
                {
                    ITable* $tmp120 = Iter$162$9100->$class->itable;
                    while ($tmp120->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp120 = $tmp120->next;
                    }
                    $fn122 $tmp121 = $tmp120->methods[1];
                    panda$core$Object* $tmp123 = $tmp121(Iter$162$9100);
                    $tmp119 = $tmp123;
                    ch118 = ((panda$core$Char8$wrapper*) $tmp119)->value;
                    panda$core$Panda$unref$panda$core$Object$Q($tmp119);
                    panda$core$RegularExpression* $tmp127 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                    panda$core$String* $tmp131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s130, p_slashes);
                    $tmp129 = $tmp131;
                    panda$core$Char8$wrapper* $tmp133;
                    $tmp133 = (panda$core$Char8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Char8$wrapperclass);
                    $tmp133->value = ch118;
                    $tmp132 = ((panda$core$Object*) $tmp133);
                    panda$core$String* $tmp134 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp129, $tmp132);
                    $tmp128 = $tmp134;
                    panda$core$RegularExpression$init$panda$core$String($tmp127, $tmp128);
                    $tmp126 = $tmp127;
                    $tmp125 = $tmp126;
                    regex124 = $tmp125;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp126));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
                    panda$core$Panda$unref$panda$core$Object$Q($tmp132);
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp129));
                    panda$core$String* $tmp137 = panda$core$Char8$convert$R$panda$core$String(ch118);
                    $tmp136 = $tmp137;
                    panda$core$String* $tmp139 = (($fn138) self->charProtector->$class->vtable[2])(self->charProtector, $tmp136);
                    $tmp135 = $tmp139;
                    panda$core$Bit$init$builtin_bit(&$tmp140, false);
                    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit(p_text, regex124, $tmp135, $tmp140);
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp135));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp136));
                }
                $tmp117 = -1;
                goto $l115;
                $l115:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) regex124));
                regex124 = NULL;
                switch ($tmp117) {
                    case -1: goto $l141;
                }
                $l141:;
            }
            goto $l107;
            $l108:;
        }
        $tmp99 = -1;
        goto $l97;
        $l97:;
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$162$9100));
        Iter$162$9100 = NULL;
        switch ($tmp99) {
            case -1: goto $l142;
        }
        $l142:;
    }
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous1$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* id146 = NULL;
    panda$core$String* $tmp147;
    panda$core$Object* $tmp148;
    panda$core$Int64 $tmp149;
    panda$core$MutableString* url154 = NULL;
    panda$core$MutableString* $tmp155;
    panda$core$MutableString* $tmp156;
    panda$core$Object* $tmp158;
    panda$core$Int64 $tmp159;
    panda$core$String* title165 = NULL;
    panda$core$Int64 $tmp170;
    panda$core$String* $tmp172;
    panda$core$String* $tmp173;
    panda$core$Object* $tmp174;
    panda$core$Int64 $tmp175;
    panda$core$String* $tmp180;
    panda$core$String* $tmp181;
    panda$core$String* $tmp183;
    panda$core$String* $tmp184;
    panda$core$String* $tmp185;
    panda$core$String* $tmp189;
    panda$core$String* $tmp190;
    org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp192;
    panda$core$String* $tmp194;
    panda$core$String* $returnValue196;
    panda$core$String* $tmp197;
    int $tmp145;
    {
        panda$core$Int64$init$builtin_int64(&$tmp149, 1);
        ITable* $tmp150 = p_groups->$class->itable;
        while ($tmp150->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp150 = $tmp150->next;
        }
        $fn152 $tmp151 = $tmp150->methods[0];
        panda$core$Object* $tmp153 = $tmp151(p_groups, $tmp149);
        $tmp148 = $tmp153;
        $tmp147 = ((panda$core$String*) $tmp148);
        id146 = $tmp147;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp147));
        panda$core$Panda$unref$panda$core$Object$Q($tmp148);
        panda$core$MutableString* $tmp157 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$Int64$init$builtin_int64(&$tmp159, 2);
        ITable* $tmp160 = p_groups->$class->itable;
        while ($tmp160->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp160 = $tmp160->next;
        }
        $fn162 $tmp161 = $tmp160->methods[0];
        panda$core$Object* $tmp163 = $tmp161(p_groups, $tmp159);
        $tmp158 = $tmp163;
        panda$core$MutableString$init$panda$core$String($tmp157, ((panda$core$String*) $tmp158));
        $tmp156 = $tmp157;
        $tmp155 = $tmp156;
        url154 = $tmp155;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp155));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp156));
        panda$core$Panda$unref$panda$core$Object$Q($tmp158);
        (($fn164) self->$class->vtable[28])(self, url154);
        memset(&title165, 0, sizeof(title165));
        ITable* $tmp166 = ((panda$collections$CollectionView*) p_groups)->$class->itable;
        while ($tmp166->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp166 = $tmp166->next;
        }
        $fn168 $tmp167 = $tmp166->methods[0];
        panda$core$Int64 $tmp169 = $tmp167(((panda$collections$CollectionView*) p_groups));
        panda$core$Int64$init$builtin_int64(&$tmp170, 3);
        panda$core$Bit $tmp171 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp169, $tmp170);
        if ($tmp171.value) {
        {
            {
                $tmp172 = title165;
                panda$core$Int64$init$builtin_int64(&$tmp175, 3);
                ITable* $tmp176 = p_groups->$class->itable;
                while ($tmp176->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp176 = $tmp176->next;
                }
                $fn178 $tmp177 = $tmp176->methods[0];
                panda$core$Object* $tmp179 = $tmp177(p_groups, $tmp175);
                $tmp174 = $tmp179;
                $tmp173 = ((panda$core$String*) $tmp174);
                title165 = $tmp173;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp173));
                panda$core$Panda$unref$panda$core$Object$Q($tmp174);
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp172));
            }
            if (((panda$core$Bit) { title165 == NULL }).value) {
            {
                {
                    $tmp180 = title165;
                    $tmp181 = &$s182;
                    title165 = $tmp181;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp181));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp180));
                }
            }
            }
            {
                $tmp183 = title165;
                panda$core$String* $tmp188 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title165, &$s186, &$s187);
                $tmp185 = $tmp188;
                $tmp184 = $tmp185;
                title165 = $tmp184;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp184));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp185));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp183));
            }
        }
        }
        else {
        {
            {
                $tmp189 = title165;
                $tmp190 = &$s191;
                title165 = $tmp190;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp190));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp189));
            }
        }
        }
        org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp193 = (org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition$class);
        panda$core$String* $tmp195 = panda$core$MutableString$finish$R$panda$core$String(url154);
        $tmp194 = $tmp195;
        org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition$init$panda$core$String$panda$core$String($tmp193, $tmp194, title165);
        $tmp192 = $tmp193;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->linkDefinitions, ((panda$collections$Key*) id146), ((panda$core$Object*) $tmp192));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp192));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp194));
        $tmp197 = &$s198;
        $returnValue196 = $tmp197;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp197));
        $tmp145 = 0;
        goto $l143;
        $l199:;
        return $returnValue196;
    }
    $l143:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) title165));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) url154));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) id146));
    id146 = NULL;
    url154 = NULL;
    switch ($tmp145) {
        case 0: goto $l199;
    }
    $l201:;
    if (false) goto $l202; else goto $l203;
    $l203:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s204, (panda$core$Int64) { 177 }, &$s205);
    abort();
    $l202:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim2$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar209 = NULL;
    panda$core$Method* $tmp210;
    panda$core$Method* $tmp211;
    panda$core$Object* $tmp213;
    panda$core$Object* $tmp214;
    panda$core$Object* $returnValue215;
    panda$core$Object* $tmp216;
    panda$core$String* $tmp217;
    panda$core$String* $tmp218;
    int $tmp208;
    {
        panda$core$Method* $tmp212 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp212, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp211 = $tmp212;
        $tmp210 = $tmp211;
        methodVar209 = $tmp210;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp210));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp211));
        {
            $tmp213 = ((panda$core$MutableMethod*) methodVar209)->target;
            $tmp214 = self->target;
            ((panda$core$MutableMethod*) methodVar209)->target = $tmp214;
            panda$core$Panda$ref$panda$core$Object$Q($tmp214);
            panda$core$Panda$unref$panda$core$Object$Q($tmp213);
        }
        if (methodVar209->target) {
            $tmp218 = (($fn219) methodVar209->pointer)(methodVar209->target, p_p0);
        } else {
            $tmp218 = (($fn220) methodVar209->pointer)(p_p0);
        }
        $tmp217 = $tmp218;
        $tmp216 = ((panda$core$Object*) $tmp217);
        $returnValue215 = $tmp216;
        panda$core$Panda$ref$panda$core$Object$Q($tmp216);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp217));
        $tmp208 = 0;
        goto $l206;
        $l221:;
        return $returnValue215;
    }
    $l206:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) methodVar209));
    methodVar209 = NULL;
    switch ($tmp208) {
        case 0: goto $l221;
    }
    $l223:;
    if (false) goto $l224; else goto $l225;
    $l225:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s226, (panda$core$Int64) { 177 }, &$s227);
    abort();
    $l224:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$stripLinkDefinitions$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$core$RegularExpression* p231 = NULL;
    panda$core$RegularExpression* $tmp232;
    panda$core$RegularExpression* $tmp233;
    panda$core$Int64 $tmp236;
    int $tmp230;
    {
        panda$core$RegularExpression* $tmp234 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp236, 1);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp234, &$s235, $tmp236);
        $tmp233 = $tmp234;
        $tmp232 = $tmp233;
        p231 = $tmp232;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp232));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp233));
        panda$core$MutableMethod* $tmp237 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp238 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp238, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous1$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp237, (panda$core$Int8*) &panda$core$MutableMethod$$shim2$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp238)));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_text, p231, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp237)));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp238));
    }
    $tmp230 = -1;
    goto $l228;
    $l228:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) p231));
    p231 = NULL;
    switch ($tmp230) {
        case -1: goto $l239;
    }
    $l239:;
}
void org$pandalanguage$pandac$pandadoc$Markdown$runBlockGamut$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    (($fn240) self->$class->vtable[21])(self, p_text);
    (($fn241) self->$class->vtable[7])(self, p_text);
    (($fn242) self->$class->vtable[19])(self, p_text);
    (($fn243) self->$class->vtable[15])(self, p_text);
    (($fn244) self->$class->vtable[13])(self, p_text);
    (($fn245) self->$class->vtable[8])(self, p_text);
    (($fn246) self->$class->vtable[9])(self, p_text);
}
void org$pandalanguage$pandac$pandadoc$Markdown$doHorizontalRules$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$collections$Array* hrDelimiters250 = NULL;
    panda$collections$Array* $tmp251;
    panda$collections$Array* $tmp252;
    panda$collections$Iterator* Iter$213$9260 = NULL;
    panda$collections$Iterator* $tmp261;
    panda$collections$Iterator* $tmp262;
    panda$core$String* hrDelimiter278 = NULL;
    panda$core$String* $tmp279;
    panda$core$Object* $tmp280;
    panda$core$RegularExpression* $tmp285;
    panda$core$String* $tmp287;
    panda$core$String* $tmp288;
    int $tmp249;
    {
        panda$collections$Array* $tmp253 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp253);
        $tmp252 = $tmp253;
        $tmp251 = $tmp252;
        hrDelimiters250 = $tmp251;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp251));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp252));
        panda$collections$Array$add$panda$collections$Array$T(hrDelimiters250, ((panda$core$Object*) &$s254));
        panda$collections$Array$add$panda$collections$Array$T(hrDelimiters250, ((panda$core$Object*) &$s255));
        panda$collections$Array$add$panda$collections$Array$T(hrDelimiters250, ((panda$core$Object*) &$s256));
        {
            int $tmp259;
            {
                ITable* $tmp263 = ((panda$collections$Iterable*) hrDelimiters250)->$class->itable;
                while ($tmp263->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp263 = $tmp263->next;
                }
                $fn265 $tmp264 = $tmp263->methods[0];
                panda$collections$Iterator* $tmp266 = $tmp264(((panda$collections$Iterable*) hrDelimiters250));
                $tmp262 = $tmp266;
                $tmp261 = $tmp262;
                Iter$213$9260 = $tmp261;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp261));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp262));
                $l267:;
                ITable* $tmp270 = Iter$213$9260->$class->itable;
                while ($tmp270->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp270 = $tmp270->next;
                }
                $fn272 $tmp271 = $tmp270->methods[0];
                panda$core$Bit $tmp273 = $tmp271(Iter$213$9260);
                panda$core$Bit $tmp274 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp273);
                bool $tmp269 = $tmp274.value;
                if (!$tmp269) goto $l268;
                {
                    int $tmp277;
                    {
                        ITable* $tmp281 = Iter$213$9260->$class->itable;
                        while ($tmp281->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp281 = $tmp281->next;
                        }
                        $fn283 $tmp282 = $tmp281->methods[1];
                        panda$core$Object* $tmp284 = $tmp282(Iter$213$9260);
                        $tmp280 = $tmp284;
                        $tmp279 = ((panda$core$String*) $tmp280);
                        hrDelimiter278 = $tmp279;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp279));
                        panda$core$Panda$unref$panda$core$Object$Q($tmp280);
                        panda$core$RegularExpression* $tmp286 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                        panda$core$String* $tmp290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s289, hrDelimiter278);
                        $tmp288 = $tmp290;
                        panda$core$String* $tmp292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp288, &$s291);
                        $tmp287 = $tmp292;
                        panda$core$RegularExpression$init$panda$core$String($tmp286, $tmp287);
                        $tmp285 = $tmp286;
                        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_text, $tmp285, &$s293);
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp285));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp287));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp288));
                    }
                    $tmp277 = -1;
                    goto $l275;
                    $l275:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) hrDelimiter278));
                    hrDelimiter278 = NULL;
                    switch ($tmp277) {
                        case -1: goto $l294;
                    }
                    $l294:;
                }
                goto $l267;
                $l268:;
            }
            $tmp259 = -1;
            goto $l257;
            $l257:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$213$9260));
            Iter$213$9260 = NULL;
            switch ($tmp259) {
                case -1: goto $l295;
            }
            $l295:;
        }
    }
    $tmp249 = -1;
    goto $l247;
    $l247:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) hrDelimiters250));
    hrDelimiters250 = NULL;
    switch ($tmp249) {
        case -1: goto $l296;
    }
    $l296:;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous3$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* literal300 = NULL;
    panda$core$String* $tmp301;
    panda$core$Object* $tmp302;
    panda$core$Int64 $tmp303;
    panda$core$String* $returnValue308;
    panda$core$String* $tmp309;
    panda$core$String* $tmp310;
    panda$core$String* $tmp311;
    panda$core$String* $tmp313;
    int $tmp299;
    {
        panda$core$Int64$init$builtin_int64(&$tmp303, 0);
        ITable* $tmp304 = p_groups->$class->itable;
        while ($tmp304->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp304 = $tmp304->next;
        }
        $fn306 $tmp305 = $tmp304->methods[0];
        panda$core$Object* $tmp307 = $tmp305(p_groups, $tmp303);
        $tmp302 = $tmp307;
        $tmp301 = ((panda$core$String*) $tmp302);
        literal300 = $tmp301;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp301));
        panda$core$Panda$unref$panda$core$Object$Q($tmp302);
        panda$core$String* $tmp315 = (($fn314) self->htmlProtector->$class->vtable[2])(self->htmlProtector, literal300);
        $tmp313 = $tmp315;
        panda$core$String* $tmp316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s312, $tmp313);
        $tmp311 = $tmp316;
        panda$core$String* $tmp318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp311, &$s317);
        $tmp310 = $tmp318;
        $tmp309 = $tmp310;
        $returnValue308 = $tmp309;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp309));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp310));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp311));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp313));
        $tmp299 = 0;
        goto $l297;
        $l319:;
        return $returnValue308;
    }
    $l297:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) literal300));
    literal300 = NULL;
    switch ($tmp299) {
        case 0: goto $l319;
    }
    $l321:;
    if (false) goto $l322; else goto $l323;
    $l323:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s324, (panda$core$Int64) { 277 }, &$s325);
    abort();
    $l322:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim4$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar329 = NULL;
    panda$core$Method* $tmp330;
    panda$core$Method* $tmp331;
    panda$core$Object* $tmp333;
    panda$core$Object* $tmp334;
    panda$core$Object* $returnValue335;
    panda$core$Object* $tmp336;
    panda$core$String* $tmp337;
    panda$core$String* $tmp338;
    int $tmp328;
    {
        panda$core$Method* $tmp332 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp332, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp331 = $tmp332;
        $tmp330 = $tmp331;
        methodVar329 = $tmp330;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp330));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp331));
        {
            $tmp333 = ((panda$core$MutableMethod*) methodVar329)->target;
            $tmp334 = self->target;
            ((panda$core$MutableMethod*) methodVar329)->target = $tmp334;
            panda$core$Panda$ref$panda$core$Object$Q($tmp334);
            panda$core$Panda$unref$panda$core$Object$Q($tmp333);
        }
        if (methodVar329->target) {
            $tmp338 = (($fn339) methodVar329->pointer)(methodVar329->target, p_p0);
        } else {
            $tmp338 = (($fn340) methodVar329->pointer)(p_p0);
        }
        $tmp337 = $tmp338;
        $tmp336 = ((panda$core$Object*) $tmp337);
        $returnValue335 = $tmp336;
        panda$core$Panda$ref$panda$core$Object$Q($tmp336);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp337));
        $tmp328 = 0;
        goto $l326;
        $l341:;
        return $returnValue335;
    }
    $l326:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) methodVar329));
    methodVar329 = NULL;
    switch ($tmp328) {
        case 0: goto $l341;
    }
    $l343:;
    if (false) goto $l344; else goto $l345;
    $l345:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s346, (panda$core$Int64) { 281 }, &$s347);
    abort();
    $l344:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim5$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar351 = NULL;
    panda$core$Method* $tmp352;
    panda$core$Method* $tmp353;
    panda$core$Object* $tmp355;
    panda$core$Object* $tmp356;
    panda$core$Object* $returnValue357;
    panda$core$Object* $tmp358;
    panda$core$String* $tmp359;
    panda$core$String* $tmp360;
    int $tmp350;
    {
        panda$core$Method* $tmp354 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp354, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp353 = $tmp354;
        $tmp352 = $tmp353;
        methodVar351 = $tmp352;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp352));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp353));
        {
            $tmp355 = ((panda$core$MutableMethod*) methodVar351)->target;
            $tmp356 = self->target;
            ((panda$core$MutableMethod*) methodVar351)->target = $tmp356;
            panda$core$Panda$ref$panda$core$Object$Q($tmp356);
            panda$core$Panda$unref$panda$core$Object$Q($tmp355);
        }
        if (methodVar351->target) {
            $tmp360 = (($fn361) methodVar351->pointer)(methodVar351->target, p_p0);
        } else {
            $tmp360 = (($fn362) methodVar351->pointer)(p_p0);
        }
        $tmp359 = $tmp360;
        $tmp358 = ((panda$core$Object*) $tmp359);
        $returnValue357 = $tmp358;
        panda$core$Panda$ref$panda$core$Object$Q($tmp358);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp359));
        $tmp350 = 0;
        goto $l348;
        $l363:;
        return $returnValue357;
    }
    $l348:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) methodVar351));
    methodVar351 = NULL;
    switch ($tmp350) {
        case 0: goto $l363;
    }
    $l365:;
    if (false) goto $l366; else goto $l367;
    $l367:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s368, (panda$core$Int64) { 293 }, &$s369);
    abort();
    $l366:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim6$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar373 = NULL;
    panda$core$Method* $tmp374;
    panda$core$Method* $tmp375;
    panda$core$Object* $tmp377;
    panda$core$Object* $tmp378;
    panda$core$Object* $returnValue379;
    panda$core$Object* $tmp380;
    panda$core$String* $tmp381;
    panda$core$String* $tmp382;
    int $tmp372;
    {
        panda$core$Method* $tmp376 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp376, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp375 = $tmp376;
        $tmp374 = $tmp375;
        methodVar373 = $tmp374;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp374));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp375));
        {
            $tmp377 = ((panda$core$MutableMethod*) methodVar373)->target;
            $tmp378 = self->target;
            ((panda$core$MutableMethod*) methodVar373)->target = $tmp378;
            panda$core$Panda$ref$panda$core$Object$Q($tmp378);
            panda$core$Panda$unref$panda$core$Object$Q($tmp377);
        }
        if (methodVar373->target) {
            $tmp382 = (($fn383) methodVar373->pointer)(methodVar373->target, p_p0);
        } else {
            $tmp382 = (($fn384) methodVar373->pointer)(p_p0);
        }
        $tmp381 = $tmp382;
        $tmp380 = ((panda$core$Object*) $tmp381);
        $returnValue379 = $tmp380;
        panda$core$Panda$ref$panda$core$Object$Q($tmp380);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp381));
        $tmp372 = 0;
        goto $l370;
        $l385:;
        return $returnValue379;
    }
    $l370:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) methodVar373));
    methodVar373 = NULL;
    switch ($tmp372) {
        case 0: goto $l385;
    }
    $l387:;
    if (false) goto $l388; else goto $l389;
    $l389:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s390, (panda$core$Int64) { 310 }, &$s391);
    abort();
    $l388:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim7$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar395 = NULL;
    panda$core$Method* $tmp396;
    panda$core$Method* $tmp397;
    panda$core$Object* $tmp399;
    panda$core$Object* $tmp400;
    panda$core$Object* $returnValue401;
    panda$core$Object* $tmp402;
    panda$core$String* $tmp403;
    panda$core$String* $tmp404;
    int $tmp394;
    {
        panda$core$Method* $tmp398 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp398, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp397 = $tmp398;
        $tmp396 = $tmp397;
        methodVar395 = $tmp396;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp396));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp397));
        {
            $tmp399 = ((panda$core$MutableMethod*) methodVar395)->target;
            $tmp400 = self->target;
            ((panda$core$MutableMethod*) methodVar395)->target = $tmp400;
            panda$core$Panda$ref$panda$core$Object$Q($tmp400);
            panda$core$Panda$unref$panda$core$Object$Q($tmp399);
        }
        if (methodVar395->target) {
            $tmp404 = (($fn405) methodVar395->pointer)(methodVar395->target, p_p0);
        } else {
            $tmp404 = (($fn406) methodVar395->pointer)(p_p0);
        }
        $tmp403 = $tmp404;
        $tmp402 = ((panda$core$Object*) $tmp403);
        $returnValue401 = $tmp402;
        panda$core$Panda$ref$panda$core$Object$Q($tmp402);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp403));
        $tmp394 = 0;
        goto $l392;
        $l407:;
        return $returnValue401;
    }
    $l392:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) methodVar395));
    methodVar395 = NULL;
    switch ($tmp394) {
        case 0: goto $l407;
    }
    $l409:;
    if (false) goto $l410; else goto $l411;
    $l411:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s412, (panda$core$Int64) { 328 }, &$s413);
    abort();
    $l410:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$hashHTMLBlocks$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$collections$Array* tagsA417 = NULL;
    panda$collections$Array* $tmp418;
    panda$collections$Array* $tmp419;
    panda$collections$Array* tagsB441 = NULL;
    panda$collections$Array* $tmp442;
    panda$collections$Array* $tmp443;
    panda$core$String* alternationA447 = NULL;
    panda$core$String* $tmp448;
    panda$core$String* $tmp449;
    panda$core$String* alternationB455 = NULL;
    panda$core$String* $tmp456;
    panda$core$String* $tmp457;
    panda$core$String* $tmp458;
    panda$core$String* $tmp459;
    panda$core$String* $tmp460;
    panda$core$String* $tmp464;
    panda$core$Int64 lessThanTab473;
    panda$core$Int64 $tmp474;
    panda$core$Int64 $tmp475;
    panda$core$RegularExpression* p1477 = NULL;
    panda$core$RegularExpression* $tmp478;
    panda$core$RegularExpression* $tmp479;
    panda$core$String* $tmp481;
    panda$core$String* $tmp482;
    panda$core$String* $tmp483;
    panda$core$String* $tmp484;
    panda$core$String* $tmp485;
    panda$core$String* $tmp486;
    panda$core$String* $tmp487;
    panda$core$Int64 $tmp502;
    panda$core$Int64 $tmp503;
    panda$core$Method* protectHTML505 = NULL;
    panda$core$Method* $tmp506;
    panda$core$RegularExpression* p2509 = NULL;
    panda$core$RegularExpression* $tmp510;
    panda$core$RegularExpression* $tmp511;
    panda$core$String* $tmp513;
    panda$core$String* $tmp514;
    panda$core$String* $tmp515;
    panda$core$String* $tmp516;
    panda$core$String* $tmp517;
    panda$core$String* $tmp518;
    panda$core$String* $tmp519;
    panda$core$Int64 $tmp534;
    panda$core$Int64 $tmp535;
    panda$core$RegularExpression* p3538 = NULL;
    panda$core$RegularExpression* $tmp539;
    panda$core$RegularExpression* $tmp540;
    panda$core$String* $tmp542;
    panda$core$String* $tmp543;
    panda$core$String* $tmp544;
    panda$core$String* $tmp545;
    panda$core$String* $tmp546;
    panda$core$String* $tmp547;
    panda$core$String* $tmp548;
    panda$core$String* $tmp549;
    panda$core$Object* $tmp551;
    panda$core$Int64 $tmp568;
    panda$core$RegularExpression* p4570 = NULL;
    panda$core$RegularExpression* $tmp571;
    panda$core$RegularExpression* $tmp572;
    panda$core$String* $tmp574;
    panda$core$String* $tmp575;
    panda$core$String* $tmp576;
    panda$core$String* $tmp577;
    panda$core$String* $tmp578;
    panda$core$String* $tmp579;
    panda$core$String* $tmp580;
    panda$core$String* $tmp581;
    panda$core$String* $tmp582;
    panda$core$String* $tmp583;
    panda$core$Object* $tmp585;
    int $tmp416;
    {
        panda$collections$Array* $tmp420 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp420);
        $tmp419 = $tmp420;
        $tmp418 = $tmp419;
        tagsA417 = $tmp418;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp418));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp419));
        panda$collections$Array$add$panda$collections$Array$T(tagsA417, ((panda$core$Object*) &$s421));
        panda$collections$Array$add$panda$collections$Array$T(tagsA417, ((panda$core$Object*) &$s422));
        panda$collections$Array$add$panda$collections$Array$T(tagsA417, ((panda$core$Object*) &$s423));
        panda$collections$Array$add$panda$collections$Array$T(tagsA417, ((panda$core$Object*) &$s424));
        panda$collections$Array$add$panda$collections$Array$T(tagsA417, ((panda$core$Object*) &$s425));
        panda$collections$Array$add$panda$collections$Array$T(tagsA417, ((panda$core$Object*) &$s426));
        panda$collections$Array$add$panda$collections$Array$T(tagsA417, ((panda$core$Object*) &$s427));
        panda$collections$Array$add$panda$collections$Array$T(tagsA417, ((panda$core$Object*) &$s428));
        panda$collections$Array$add$panda$collections$Array$T(tagsA417, ((panda$core$Object*) &$s429));
        panda$collections$Array$add$panda$collections$Array$T(tagsA417, ((panda$core$Object*) &$s430));
        panda$collections$Array$add$panda$collections$Array$T(tagsA417, ((panda$core$Object*) &$s431));
        panda$collections$Array$add$panda$collections$Array$T(tagsA417, ((panda$core$Object*) &$s432));
        panda$collections$Array$add$panda$collections$Array$T(tagsA417, ((panda$core$Object*) &$s433));
        panda$collections$Array$add$panda$collections$Array$T(tagsA417, ((panda$core$Object*) &$s434));
        panda$collections$Array$add$panda$collections$Array$T(tagsA417, ((panda$core$Object*) &$s435));
        panda$collections$Array$add$panda$collections$Array$T(tagsA417, ((panda$core$Object*) &$s436));
        panda$collections$Array$add$panda$collections$Array$T(tagsA417, ((panda$core$Object*) &$s437));
        panda$collections$Array$add$panda$collections$Array$T(tagsA417, ((panda$core$Object*) &$s438));
        panda$collections$Array$add$panda$collections$Array$T(tagsA417, ((panda$core$Object*) &$s439));
        panda$collections$Array$add$panda$collections$Array$T(tagsA417, ((panda$core$Object*) &$s440));
        panda$collections$Array* $tmp444 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp444);
        $tmp443 = $tmp444;
        $tmp442 = $tmp443;
        tagsB441 = $tmp442;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp442));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp443));
        panda$collections$Array$add$panda$collections$Array$T(tagsB441, ((panda$core$Object*) &$s445));
        panda$collections$Array$add$panda$collections$Array$T(tagsB441, ((panda$core$Object*) &$s446));
        ITable* $tmp451 = ((panda$collections$CollectionView*) tagsA417)->$class->itable;
        while ($tmp451->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp451 = $tmp451->next;
        }
        $fn453 $tmp452 = $tmp451->methods[2];
        panda$core$String* $tmp454 = $tmp452(((panda$collections$CollectionView*) tagsA417), &$s450);
        $tmp449 = $tmp454;
        $tmp448 = $tmp449;
        alternationA447 = $tmp448;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp448));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp449));
        panda$core$String* $tmp461 = panda$core$String$convert$R$panda$core$String(alternationA447);
        $tmp460 = $tmp461;
        panda$core$String* $tmp463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp460, &$s462);
        $tmp459 = $tmp463;
        ITable* $tmp466 = ((panda$collections$CollectionView*) tagsB441)->$class->itable;
        while ($tmp466->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp466 = $tmp466->next;
        }
        $fn468 $tmp467 = $tmp466->methods[2];
        panda$core$String* $tmp469 = $tmp467(((panda$collections$CollectionView*) tagsB441), &$s465);
        $tmp464 = $tmp469;
        panda$core$String* $tmp470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp459, $tmp464);
        $tmp458 = $tmp470;
        panda$core$String* $tmp472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp458, &$s471);
        $tmp457 = $tmp472;
        $tmp456 = $tmp457;
        alternationB455 = $tmp456;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp456));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp457));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp458));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp464));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp459));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp460));
        panda$core$Int64$init$builtin_int64(&$tmp474, 4);
        panda$core$Int64$init$builtin_int64(&$tmp475, 1);
        panda$core$Int64 $tmp476 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp474, $tmp475);
        lessThanTab473 = $tmp476;
        panda$core$RegularExpression* $tmp480 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$String* $tmp489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s488, alternationA447);
        $tmp487 = $tmp489;
        panda$core$String* $tmp491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp487, &$s490);
        $tmp486 = $tmp491;
        panda$core$String* $tmp493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp486, &$s492);
        $tmp485 = $tmp493;
        panda$core$String* $tmp495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp485, &$s494);
        $tmp484 = $tmp495;
        panda$core$String* $tmp497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp484, &$s496);
        $tmp483 = $tmp497;
        panda$core$String* $tmp499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp483, &$s498);
        $tmp482 = $tmp499;
        panda$core$String* $tmp501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp482, &$s500);
        $tmp481 = $tmp501;
        panda$core$Int64$init$builtin_int64(&$tmp502, 1);
        panda$core$Int64$init$builtin_int64(&$tmp503, 2);
        panda$core$Int64 $tmp504 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp502, $tmp503);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp480, $tmp481, $tmp504);
        $tmp479 = $tmp480;
        $tmp478 = $tmp479;
        p1477 = $tmp478;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp478));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp479));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp481));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp482));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp483));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp484));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp485));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp486));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp487));
        panda$core$MutableMethod* $tmp507 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp507, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous3$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
        $tmp506 = ((panda$core$Object*) $tmp507);
        protectHTML505 = $tmp506;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp506));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp507));
        panda$core$MutableMethod* $tmp508 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp508, (panda$core$Int8*) &panda$core$MutableMethod$$shim4$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) protectHTML505));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_text, p1477, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp508)));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp508));
        panda$core$RegularExpression* $tmp512 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$String* $tmp521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s520, alternationB455);
        $tmp519 = $tmp521;
        panda$core$String* $tmp523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp519, &$s522);
        $tmp518 = $tmp523;
        panda$core$String* $tmp525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp518, &$s524);
        $tmp517 = $tmp525;
        panda$core$String* $tmp527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp517, &$s526);
        $tmp516 = $tmp527;
        panda$core$String* $tmp529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp516, &$s528);
        $tmp515 = $tmp529;
        panda$core$String* $tmp531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp515, &$s530);
        $tmp514 = $tmp531;
        panda$core$String* $tmp533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp514, &$s532);
        $tmp513 = $tmp533;
        panda$core$Int64$init$builtin_int64(&$tmp534, 1);
        panda$core$Int64$init$builtin_int64(&$tmp535, 2);
        panda$core$Int64 $tmp536 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp534, $tmp535);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp512, $tmp513, $tmp536);
        $tmp511 = $tmp512;
        $tmp510 = $tmp511;
        p2509 = $tmp510;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp510));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp511));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp513));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp514));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp515));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp516));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp517));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp518));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp519));
        panda$core$MutableMethod* $tmp537 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp537, (panda$core$Int8*) &panda$core$MutableMethod$$shim5$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) protectHTML505));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_text, p2509, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp537)));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp537));
        panda$core$RegularExpression* $tmp541 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$wrapper* $tmp552;
        $tmp552 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp552->value = lessThanTab473;
        $tmp551 = ((panda$core$Object*) $tmp552);
        panda$core$String* $tmp553 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s550, $tmp551);
        $tmp549 = $tmp553;
        panda$core$String* $tmp555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp549, &$s554);
        $tmp548 = $tmp555;
        panda$core$String* $tmp557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp548, &$s556);
        $tmp547 = $tmp557;
        panda$core$String* $tmp559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp547, &$s558);
        $tmp546 = $tmp559;
        panda$core$String* $tmp561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp546, &$s560);
        $tmp545 = $tmp561;
        panda$core$String* $tmp563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp545, &$s562);
        $tmp544 = $tmp563;
        panda$core$String* $tmp565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp544, &$s564);
        $tmp543 = $tmp565;
        panda$core$String* $tmp567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp543, &$s566);
        $tmp542 = $tmp567;
        panda$core$Int64$init$builtin_int64(&$tmp568, 2);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp541, $tmp542, $tmp568);
        $tmp540 = $tmp541;
        $tmp539 = $tmp540;
        p3538 = $tmp539;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp539));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp540));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp542));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp543));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp544));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp545));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp546));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp547));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp548));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp549));
        panda$core$Panda$unref$panda$core$Object$Q($tmp551);
        panda$core$MutableMethod* $tmp569 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp569, (panda$core$Int8*) &panda$core$MutableMethod$$shim6$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) protectHTML505));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_text, p3538, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp569)));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp569));
        panda$core$RegularExpression* $tmp573 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$wrapper* $tmp586;
        $tmp586 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp586->value = lessThanTab473;
        $tmp585 = ((panda$core$Object*) $tmp586);
        panda$core$String* $tmp587 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s584, $tmp585);
        $tmp583 = $tmp587;
        panda$core$String* $tmp589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp583, &$s588);
        $tmp582 = $tmp589;
        panda$core$String* $tmp591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp582, &$s590);
        $tmp581 = $tmp591;
        panda$core$String* $tmp593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp581, &$s592);
        $tmp580 = $tmp593;
        panda$core$String* $tmp595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp580, &$s594);
        $tmp579 = $tmp595;
        panda$core$String* $tmp597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp579, &$s596);
        $tmp578 = $tmp597;
        panda$core$String* $tmp599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp578, &$s598);
        $tmp577 = $tmp599;
        panda$core$String* $tmp601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp577, &$s600);
        $tmp576 = $tmp601;
        panda$core$String* $tmp603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp576, &$s602);
        $tmp575 = $tmp603;
        panda$core$String* $tmp605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp575, &$s604);
        $tmp574 = $tmp605;
        panda$core$RegularExpression$init$panda$core$String($tmp573, $tmp574);
        $tmp572 = $tmp573;
        $tmp571 = $tmp572;
        p4570 = $tmp571;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp571));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp572));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp574));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp575));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp576));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp577));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp578));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp579));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp580));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp581));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp582));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp583));
        panda$core$Panda$unref$panda$core$Object$Q($tmp585);
        panda$core$MutableMethod* $tmp606 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp606, (panda$core$Int8*) &panda$core$MutableMethod$$shim7$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) protectHTML505));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_text, p4570, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp606)));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp606));
    }
    $tmp416 = -1;
    goto $l414;
    $l414:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) p4570));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) p3538));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) p2509));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) protectHTML505));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) p1477));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) alternationB455));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) alternationA447));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) tagsB441));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) tagsA417));
    tagsA417 = NULL;
    tagsB441 = NULL;
    alternationA447 = NULL;
    alternationB455 = NULL;
    p1477 = NULL;
    protectHTML505 = NULL;
    p2509 = NULL;
    p3538 = NULL;
    p4570 = NULL;
    switch ($tmp416) {
        case -1: goto $l607;
    }
    $l607:;
}
void org$pandalanguage$pandac$pandadoc$Markdown$formParagraphs$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* $tmp611;
    panda$core$RegularExpression* $tmp615;
    panda$collections$Array* paragraphs619 = NULL;
    panda$core$Int64 $tmp621;
    panda$collections$Array* $tmp623;
    panda$collections$Array* $tmp624;
    panda$collections$Array* $tmp625;
    panda$collections$Array* $tmp627;
    panda$collections$Array* $tmp628;
    panda$collections$Array* $tmp629;
    panda$collections$Array* $tmp631;
    panda$core$String* $tmp632;
    panda$core$RegularExpression* $tmp634;
    panda$core$Range$LTpanda$core$Int64$GT $tmp638;
    panda$core$Int64 $tmp639;
    panda$core$Bit $tmp644;
    panda$core$String* paragraph661 = NULL;
    panda$core$String* $tmp662;
    panda$core$Object* $tmp663;
    panda$core$String* decoded665 = NULL;
    panda$core$String* $tmp666;
    panda$core$String* $tmp667;
    panda$core$MutableString* mutable673 = NULL;
    panda$core$MutableString* $tmp674;
    panda$core$MutableString* $tmp675;
    panda$core$String* $tmp678;
    panda$core$String* $tmp679;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp692;
    panda$core$Bit $tmp693;
    panda$core$String* $tmp694;
    int $tmp610;
    {
        panda$core$RegularExpression* $tmp612 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp612, &$s613);
        $tmp611 = $tmp612;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_markup, $tmp611, &$s614);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp611));
        panda$core$RegularExpression* $tmp616 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp616, &$s617);
        $tmp615 = $tmp616;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_markup, $tmp615, &$s618);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp615));
        memset(&paragraphs619, 0, sizeof(paragraphs619));
        panda$core$Int64 $tmp620 = panda$core$MutableString$byteLength$R$panda$core$Int64(p_markup);
        panda$core$Int64$init$builtin_int64(&$tmp621, 0);
        panda$core$Bit $tmp622 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp620, $tmp621);
        if ($tmp622.value) {
        {
            {
                $tmp623 = paragraphs619;
                panda$collections$Array* $tmp626 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp626);
                $tmp625 = $tmp626;
                $tmp624 = $tmp625;
                paragraphs619 = $tmp624;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp624));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp625));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp623));
            }
        }
        }
        else {
        {
            {
                $tmp627 = paragraphs619;
                panda$collections$Array* $tmp630 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$core$String* $tmp633 = panda$core$MutableString$convert$R$panda$core$String(p_markup);
                $tmp632 = $tmp633;
                panda$core$RegularExpression* $tmp635 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                panda$core$RegularExpression$init$panda$core$String($tmp635, &$s636);
                $tmp634 = $tmp635;
                panda$collections$Array* $tmp637 = panda$core$String$split$panda$core$RegularExpression$R$panda$collections$Array$LTpanda$core$String$GT($tmp632, $tmp634);
                $tmp631 = $tmp637;
                panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp630, ((panda$collections$CollectionView*) $tmp631));
                $tmp629 = $tmp630;
                $tmp628 = $tmp629;
                paragraphs619 = $tmp628;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp628));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp629));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp631));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp634));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp632));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp627));
            }
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp639, 0);
        ITable* $tmp640 = ((panda$collections$CollectionView*) paragraphs619)->$class->itable;
        while ($tmp640->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp640 = $tmp640->next;
        }
        $fn642 $tmp641 = $tmp640->methods[0];
        panda$core$Int64 $tmp643 = $tmp641(((panda$collections$CollectionView*) paragraphs619));
        panda$core$Bit$init$builtin_bit(&$tmp644, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp638, $tmp639, $tmp643, $tmp644);
        int64_t $tmp646 = $tmp638.min.value;
        panda$core$Int64 i645 = { $tmp646 };
        int64_t $tmp648 = $tmp638.max.value;
        bool $tmp649 = $tmp638.inclusive.value;
        if ($tmp649) goto $l656; else goto $l657;
        $l656:;
        if ($tmp646 <= $tmp648) goto $l650; else goto $l652;
        $l657:;
        if ($tmp646 < $tmp648) goto $l650; else goto $l652;
        $l650:;
        {
            int $tmp660;
            {
                panda$core$Object* $tmp664 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(paragraphs619, i645);
                $tmp663 = $tmp664;
                $tmp662 = ((panda$core$String*) $tmp663);
                paragraph661 = $tmp662;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp662));
                panda$core$Panda$unref$panda$core$Object$Q($tmp663);
                panda$core$String* $tmp669 = (($fn668) self->htmlProtector->$class->vtable[3])(self->htmlProtector, paragraph661);
                $tmp667 = $tmp669;
                $tmp666 = $tmp667;
                decoded665 = $tmp666;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp666));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp667));
                if (((panda$core$Bit) { decoded665 != NULL }).value) {
                {
                    panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(paragraphs619, i645, ((panda$core$Object*) decoded665));
                }
                }
                else {
                {
                    int $tmp672;
                    {
                        panda$core$MutableString* $tmp676 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                        panda$core$MutableString$init$panda$core$String($tmp676, paragraph661);
                        $tmp675 = $tmp676;
                        $tmp674 = $tmp675;
                        mutable673 = $tmp674;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp674));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp675));
                        (($fn677) self->$class->vtable[22])(self, mutable673);
                        panda$core$String* $tmp681 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s680, ((panda$core$Object*) mutable673));
                        $tmp679 = $tmp681;
                        panda$core$String* $tmp683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp679, &$s682);
                        $tmp678 = $tmp683;
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(paragraphs619, i645, ((panda$core$Object*) $tmp678));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp678));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp679));
                    }
                    $tmp672 = -1;
                    goto $l670;
                    $l670:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) mutable673));
                    mutable673 = NULL;
                    switch ($tmp672) {
                        case -1: goto $l684;
                    }
                    $l684:;
                }
                }
            }
            $tmp660 = -1;
            goto $l658;
            $l658:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) decoded665));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) paragraph661));
            paragraph661 = NULL;
            decoded665 = NULL;
            switch ($tmp660) {
                case -1: goto $l685;
            }
            $l685:;
        }
        $l653:;
        int64_t $tmp687 = $tmp648 - i645.value;
        if ($tmp649) goto $l688; else goto $l689;
        $l688:;
        if ((uint64_t) $tmp687 >= 1) goto $l686; else goto $l652;
        $l689:;
        if ((uint64_t) $tmp687 > 1) goto $l686; else goto $l652;
        $l686:;
        i645.value += 1;
        goto $l650;
        $l652:;
        panda$core$Bit$init$builtin_bit(&$tmp693, false);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp692, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp693);
        ITable* $tmp696 = ((panda$collections$CollectionView*) paragraphs619)->$class->itable;
        while ($tmp696->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp696 = $tmp696->next;
        }
        $fn698 $tmp697 = $tmp696->methods[2];
        panda$core$String* $tmp699 = $tmp697(((panda$collections$CollectionView*) paragraphs619), &$s695);
        $tmp694 = $tmp699;
        panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$core$String(p_markup, $tmp692, $tmp694);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp694));
    }
    $tmp610 = -1;
    goto $l608;
    $l608:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) paragraphs619));
    switch ($tmp610) {
        case -1: goto $l700;
    }
    $l700:;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous8$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* address704 = NULL;
    panda$core$String* $tmp705;
    panda$core$Object* $tmp706;
    panda$core$Int64 $tmp707;
    panda$core$MutableString* ed712 = NULL;
    panda$core$MutableString* $tmp713;
    panda$core$MutableString* $tmp714;
    panda$core$String* addr717 = NULL;
    panda$core$String* $tmp718;
    panda$core$String* $tmp719;
    panda$core$String* $tmp720;
    panda$core$String* url724 = NULL;
    panda$core$String* $tmp725;
    panda$core$String* $tmp726;
    panda$core$String* $tmp727;
    panda$core$String* $tmp728;
    panda$core$String* $returnValue735;
    panda$core$String* $tmp736;
    panda$core$String* $tmp737;
    panda$core$String* $tmp738;
    panda$core$String* $tmp739;
    panda$core$String* $tmp740;
    int $tmp703;
    {
        panda$core$Int64$init$builtin_int64(&$tmp707, 1);
        ITable* $tmp708 = p_groups->$class->itable;
        while ($tmp708->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp708 = $tmp708->next;
        }
        $fn710 $tmp709 = $tmp708->methods[0];
        panda$core$Object* $tmp711 = $tmp709(p_groups, $tmp707);
        $tmp706 = $tmp711;
        $tmp705 = ((panda$core$String*) $tmp706);
        address704 = $tmp705;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp705));
        panda$core$Panda$unref$panda$core$Object$Q($tmp706);
        panda$core$MutableString* $tmp715 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp715, address704);
        $tmp714 = $tmp715;
        $tmp713 = $tmp714;
        ed712 = $tmp713;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp713));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp714));
        (($fn716) self->$class->vtable[11])(self, ed712);
        panda$core$String* $tmp721 = panda$core$MutableString$convert$R$panda$core$String(ed712);
        $tmp720 = $tmp721;
        panda$core$String* $tmp723 = (($fn722) self->$class->vtable[12])(self, $tmp720);
        $tmp719 = $tmp723;
        $tmp718 = $tmp719;
        addr717 = $tmp718;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp718));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp719));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp720));
        panda$core$String* $tmp730 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s729, ((panda$core$Object*) ed712));
        $tmp728 = $tmp730;
        panda$core$String* $tmp732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp728, &$s731);
        $tmp727 = $tmp732;
        panda$core$String* $tmp734 = (($fn733) self->$class->vtable[12])(self, $tmp727);
        $tmp726 = $tmp734;
        $tmp725 = $tmp726;
        url724 = $tmp725;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp725));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp726));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp727));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp728));
        panda$core$String* $tmp742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s741, url724);
        $tmp740 = $tmp742;
        panda$core$String* $tmp744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp740, &$s743);
        $tmp739 = $tmp744;
        panda$core$String* $tmp745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp739, addr717);
        $tmp738 = $tmp745;
        panda$core$String* $tmp747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp738, &$s746);
        $tmp737 = $tmp747;
        $tmp736 = $tmp737;
        $returnValue735 = $tmp736;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp736));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp737));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp738));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp739));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp740));
        $tmp703 = 0;
        goto $l701;
        $l748:;
        return $returnValue735;
    }
    $l701:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) url724));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) addr717));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ed712));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) address704));
    address704 = NULL;
    ed712 = NULL;
    addr717 = NULL;
    url724 = NULL;
    switch ($tmp703) {
        case 0: goto $l748;
    }
    $l750:;
    if (false) goto $l751; else goto $l752;
    $l752:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s753, (panda$core$Int64) { 359 }, &$s754);
    abort();
    $l751:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim9$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar758 = NULL;
    panda$core$Method* $tmp759;
    panda$core$Method* $tmp760;
    panda$core$Object* $tmp762;
    panda$core$Object* $tmp763;
    panda$core$Object* $returnValue764;
    panda$core$Object* $tmp765;
    panda$core$String* $tmp766;
    panda$core$String* $tmp767;
    int $tmp757;
    {
        panda$core$Method* $tmp761 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp761, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp760 = $tmp761;
        $tmp759 = $tmp760;
        methodVar758 = $tmp759;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp759));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp760));
        {
            $tmp762 = ((panda$core$MutableMethod*) methodVar758)->target;
            $tmp763 = self->target;
            ((panda$core$MutableMethod*) methodVar758)->target = $tmp763;
            panda$core$Panda$ref$panda$core$Object$Q($tmp763);
            panda$core$Panda$unref$panda$core$Object$Q($tmp762);
        }
        if (methodVar758->target) {
            $tmp767 = (($fn768) methodVar758->pointer)(methodVar758->target, p_p0);
        } else {
            $tmp767 = (($fn769) methodVar758->pointer)(p_p0);
        }
        $tmp766 = $tmp767;
        $tmp765 = ((panda$core$Object*) $tmp766);
        $returnValue764 = $tmp765;
        panda$core$Panda$ref$panda$core$Object$Q($tmp765);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp766));
        $tmp757 = 0;
        goto $l755;
        $l770:;
        return $returnValue764;
    }
    $l755:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) methodVar758));
    methodVar758 = NULL;
    switch ($tmp757) {
        case 0: goto $l770;
    }
    $l772:;
    if (false) goto $l773; else goto $l774;
    $l774:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s775, (panda$core$Int64) { 359 }, &$s776);
    abort();
    $l773:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doAutoLinks$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* $tmp780;
    panda$core$RegularExpression* email784 = NULL;
    panda$core$RegularExpression* $tmp785;
    panda$core$RegularExpression* $tmp786;
    int $tmp779;
    {
        panda$core$RegularExpression* $tmp781 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp781, &$s782);
        $tmp780 = $tmp781;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_markup, $tmp780, &$s783);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp780));
        panda$core$RegularExpression* $tmp787 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp787, &$s788);
        $tmp786 = $tmp787;
        $tmp785 = $tmp786;
        email784 = $tmp785;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp785));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp786));
        panda$core$MutableMethod* $tmp789 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp790 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp790, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous8$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp789, (panda$core$Int8*) &panda$core$MutableMethod$$shim9$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp790)));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, email784, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp789)));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp789));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp790));
    }
    $tmp779 = -1;
    goto $l777;
    $l777:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) email784));
    email784 = NULL;
    switch ($tmp779) {
        case -1: goto $l791;
    }
    $l791:;
}
void org$pandalanguage$pandac$pandadoc$Markdown$unescapeSpecialChars$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_ed) {
    panda$collections$Iterator* Iter$370$9795 = NULL;
    panda$collections$Iterator* $tmp796;
    panda$collections$Iterator* $tmp797;
    panda$core$String* hash810 = NULL;
    panda$core$String* $tmp811;
    panda$core$Object* $tmp812;
    panda$core$String* plaintext817 = NULL;
    panda$core$String* $tmp818;
    panda$core$String* $tmp819;
    {
        int $tmp794;
        {
            panda$collections$Iterator* $tmp798 = panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(self->charProtector->decodeMap);
            $tmp797 = $tmp798;
            $tmp796 = $tmp797;
            Iter$370$9795 = $tmp796;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp796));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp797));
            $l799:;
            ITable* $tmp802 = Iter$370$9795->$class->itable;
            while ($tmp802->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp802 = $tmp802->next;
            }
            $fn804 $tmp803 = $tmp802->methods[0];
            panda$core$Bit $tmp805 = $tmp803(Iter$370$9795);
            panda$core$Bit $tmp806 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp805);
            bool $tmp801 = $tmp806.value;
            if (!$tmp801) goto $l800;
            {
                int $tmp809;
                {
                    ITable* $tmp813 = Iter$370$9795->$class->itable;
                    while ($tmp813->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp813 = $tmp813->next;
                    }
                    $fn815 $tmp814 = $tmp813->methods[1];
                    panda$core$Object* $tmp816 = $tmp814(Iter$370$9795);
                    $tmp812 = $tmp816;
                    $tmp811 = ((panda$core$String*) $tmp812);
                    hash810 = $tmp811;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp811));
                    panda$core$Panda$unref$panda$core$Object$Q($tmp812);
                    panda$core$String* $tmp821 = (($fn820) self->charProtector->$class->vtable[3])(self->charProtector, hash810);
                    $tmp819 = $tmp821;
                    $tmp818 = $tmp819;
                    plaintext817 = $tmp818;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp818));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp819));
                    panda$core$MutableString$replace$panda$core$String$panda$core$String(p_ed, hash810, plaintext817);
                }
                $tmp809 = -1;
                goto $l807;
                $l807:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) plaintext817));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) hash810));
                hash810 = NULL;
                plaintext817 = NULL;
                switch ($tmp809) {
                    case -1: goto $l822;
                }
                $l822:;
            }
            goto $l799;
            $l800:;
        }
        $tmp794 = -1;
        goto $l792;
        $l792:;
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$370$9795));
        Iter$370$9795 = NULL;
        switch ($tmp794) {
            case -1: goto $l823;
        }
        $l823:;
    }
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$encodeEmail$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$String* p_s) {
    panda$core$MutableString* result827 = NULL;
    panda$core$MutableString* $tmp828;
    panda$core$MutableString* $tmp829;
    panda$collections$Iterator* Iter$378$9834 = NULL;
    panda$collections$Iterator* $tmp835;
    panda$collections$Iterator* $tmp836;
    panda$core$Char32 ch849;
    panda$core$Object* $tmp850;
    panda$core$Real64 r855;
    panda$core$Real64 $tmp860;
    panda$core$Object* $tmp863;
    panda$core$Char8 $tmp866;
    panda$core$UInt8 $tmp867;
    panda$core$Real64 $tmp868;
    panda$core$String* $tmp871;
    panda$core$Char8 $tmp875;
    panda$core$UInt8 $tmp876;
    panda$core$String* $returnValue878;
    panda$core$String* $tmp879;
    panda$core$String* $tmp880;
    int $tmp826;
    {
        panda$core$MutableString* $tmp830 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp830);
        $tmp829 = $tmp830;
        $tmp828 = $tmp829;
        result827 = $tmp828;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp828));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp829));
        {
            int $tmp833;
            {
                ITable* $tmp837 = ((panda$collections$Iterable*) p_s)->$class->itable;
                while ($tmp837->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp837 = $tmp837->next;
                }
                $fn839 $tmp838 = $tmp837->methods[0];
                panda$collections$Iterator* $tmp840 = $tmp838(((panda$collections$Iterable*) p_s));
                $tmp836 = $tmp840;
                $tmp835 = $tmp836;
                Iter$378$9834 = $tmp835;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp835));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp836));
                $l841:;
                ITable* $tmp844 = Iter$378$9834->$class->itable;
                while ($tmp844->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp844 = $tmp844->next;
                }
                $fn846 $tmp845 = $tmp844->methods[0];
                panda$core$Bit $tmp847 = $tmp845(Iter$378$9834);
                panda$core$Bit $tmp848 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp847);
                bool $tmp843 = $tmp848.value;
                if (!$tmp843) goto $l842;
                {
                    ITable* $tmp851 = Iter$378$9834->$class->itable;
                    while ($tmp851->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp851 = $tmp851->next;
                    }
                    $fn853 $tmp852 = $tmp851->methods[1];
                    panda$core$Object* $tmp854 = $tmp852(Iter$378$9834);
                    $tmp850 = $tmp854;
                    ch849 = ((panda$core$Char32$wrapper*) $tmp850)->value;
                    panda$core$Panda$unref$panda$core$Object$Q($tmp850);
                    ITable* $tmp856 = self->random->$class->itable;
                    while ($tmp856->$class != (panda$core$Class*) &panda$math$Random$class) {
                        $tmp856 = $tmp856->next;
                    }
                    $fn858 $tmp857 = $tmp856->methods[5];
                    panda$core$Real64 $tmp859 = $tmp857(self->random);
                    r855 = $tmp859;
                    panda$core$Real64$init$builtin_float64(&$tmp860, 0.45);
                    panda$core$Bit $tmp861 = panda$core$Real64$$LT$panda$core$Real64$R$panda$core$Bit(r855, $tmp860);
                    if ($tmp861.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result827, &$s862);
                        panda$core$Int32 $tmp864 = panda$core$Char32$convert$R$panda$core$Int32(ch849);
                        panda$core$Int32$wrapper* $tmp865;
                        $tmp865 = (panda$core$Int32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$Int32$wrapperclass);
                        $tmp865->value = $tmp864;
                        $tmp863 = ((panda$core$Object*) $tmp865);
                        panda$core$MutableString$append$panda$core$Object(result827, $tmp863);
                        panda$core$Panda$unref$panda$core$Object$Q($tmp863);
                        panda$core$UInt8$init$builtin_uint8(&$tmp867, 59);
                        panda$core$Char8$init$panda$core$UInt8(&$tmp866, $tmp867);
                        panda$core$MutableString$append$panda$core$Char8(result827, $tmp866);
                    }
                    }
                    else {
                    panda$core$Real64$init$builtin_float64(&$tmp868, 0.9);
                    panda$core$Bit $tmp869 = panda$core$Real64$$LT$panda$core$Real64$R$panda$core$Bit(r855, $tmp868);
                    if ($tmp869.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result827, &$s870);
                        panda$core$Int32 $tmp872 = panda$core$Char32$convert$R$panda$core$Int32(ch849);
                        panda$core$String* $tmp874 = panda$core$Int32$format$panda$core$String$R$panda$core$String($tmp872, &$s873);
                        $tmp871 = $tmp874;
                        panda$core$MutableString$append$panda$core$String(result827, $tmp871);
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp871));
                        panda$core$UInt8$init$builtin_uint8(&$tmp876, 59);
                        panda$core$Char8$init$panda$core$UInt8(&$tmp875, $tmp876);
                        panda$core$MutableString$append$panda$core$Char8(result827, $tmp875);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$Char32(result827, ch849);
                    }
                    }
                    }
                }
                goto $l841;
                $l842:;
            }
            $tmp833 = -1;
            goto $l831;
            $l831:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$378$9834));
            Iter$378$9834 = NULL;
            switch ($tmp833) {
                case -1: goto $l877;
            }
            $l877:;
        }
        panda$core$String* $tmp881 = panda$core$MutableString$convert$R$panda$core$String(result827);
        $tmp880 = $tmp881;
        $tmp879 = $tmp880;
        $returnValue878 = $tmp879;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp879));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp880));
        $tmp826 = 0;
        goto $l824;
        $l882:;
        return $returnValue878;
    }
    $l824:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result827));
    result827 = NULL;
    switch ($tmp826) {
        case 0: goto $l882;
    }
    $l884:;
    if (false) goto $l885; else goto $l886;
    $l886:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s887, (panda$core$Int64) { 376 }, &$s888);
    abort();
    $l885:;
    abort();
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous11$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$Object* $returnValue889;
    panda$core$Object* $tmp890;
    panda$core$String* $tmp891;
    panda$core$Object* $tmp892;
    panda$core$Int64 $tmp893;
    panda$core$Int64$init$builtin_int64(&$tmp893, 1);
    ITable* $tmp894 = p_groups->$class->itable;
    while ($tmp894->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp894 = $tmp894->next;
    }
    $fn896 $tmp895 = $tmp894->methods[0];
    panda$core$Object* $tmp897 = $tmp895(p_groups, $tmp893);
    $tmp892 = $tmp897;
    panda$core$String* $tmp900 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(((panda$core$String*) $tmp892), &$s898, &$s899);
    $tmp891 = $tmp900;
    $tmp890 = ((panda$core$Object*) $tmp891);
    $returnValue889 = $tmp890;
    panda$core$Panda$ref$panda$core$Object$Q($tmp890);
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp891));
    panda$core$Panda$unref$panda$core$Object$Q($tmp892);
    return $returnValue889;
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous12$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$Object* $returnValue902;
    panda$core$Object* $tmp903;
    panda$core$String* $tmp904;
    panda$core$Object* $tmp905;
    panda$core$Int64 $tmp906;
    panda$core$Int64$init$builtin_int64(&$tmp906, 1);
    ITable* $tmp907 = p_groups->$class->itable;
    while ($tmp907->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp907 = $tmp907->next;
    }
    $fn909 $tmp908 = $tmp907->methods[0];
    panda$core$Object* $tmp910 = $tmp908(p_groups, $tmp906);
    $tmp905 = $tmp910;
    panda$core$String* $tmp913 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(((panda$core$String*) $tmp905), &$s911, &$s912);
    $tmp904 = $tmp913;
    $tmp903 = ((panda$core$Object*) $tmp904);
    $returnValue902 = $tmp903;
    panda$core$Panda$ref$panda$core$Object$Q($tmp903);
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp904));
    panda$core$Panda$unref$panda$core$Object$Q($tmp905);
    return $returnValue902;
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous10$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$MutableString* blockQuote918 = NULL;
    panda$core$MutableString* $tmp919;
    panda$core$MutableString* $tmp920;
    panda$core$Object* $tmp922;
    panda$core$Int64 $tmp923;
    panda$core$RegularExpression* $tmp928;
    panda$core$RegularExpression* $tmp932;
    panda$core$RegularExpression* p1939 = NULL;
    panda$core$RegularExpression* $tmp940;
    panda$core$RegularExpression* $tmp941;
    panda$core$Int64 $tmp944;
    panda$core$Object* $returnValue946;
    panda$core$Object* $tmp947;
    panda$core$String* $tmp948;
    panda$core$String* $tmp949;
    int $tmp917;
    {
        panda$core$MutableString* $tmp921 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$Int64$init$builtin_int64(&$tmp923, 1);
        ITable* $tmp924 = p_groups->$class->itable;
        while ($tmp924->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp924 = $tmp924->next;
        }
        $fn926 $tmp925 = $tmp924->methods[0];
        panda$core$Object* $tmp927 = $tmp925(p_groups, $tmp923);
        $tmp922 = $tmp927;
        panda$core$MutableString$init$panda$core$String($tmp921, ((panda$core$String*) $tmp922));
        $tmp920 = $tmp921;
        $tmp919 = $tmp920;
        blockQuote918 = $tmp919;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp919));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp920));
        panda$core$Panda$unref$panda$core$Object$Q($tmp922);
        panda$core$RegularExpression* $tmp929 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp929, &$s930);
        $tmp928 = $tmp929;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(blockQuote918, $tmp928, &$s931);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp928));
        panda$core$RegularExpression* $tmp933 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp933, &$s934);
        $tmp932 = $tmp933;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(blockQuote918, $tmp932, &$s935);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp932));
        (($fn936) self->$class->vtable[6])(self, blockQuote918);
        panda$core$MutableString$replace$panda$core$String$panda$core$String(blockQuote918, &$s937, &$s938);
        panda$core$RegularExpression* $tmp942 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp944, 4);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp942, &$s943, $tmp944);
        $tmp941 = $tmp942;
        $tmp940 = $tmp941;
        p1939 = $tmp940;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp940));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp941));
        panda$core$MutableMethod* $tmp945 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp945, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous12$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) self));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(blockQuote918, p1939, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp945)));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp945));
        panda$core$String* $tmp951 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s950, ((panda$core$Object*) blockQuote918));
        $tmp949 = $tmp951;
        panda$core$String* $tmp953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp949, &$s952);
        $tmp948 = $tmp953;
        $tmp947 = ((panda$core$Object*) $tmp948);
        $returnValue946 = $tmp947;
        panda$core$Panda$ref$panda$core$Object$Q($tmp947);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp948));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp949));
        $tmp917 = 0;
        goto $l915;
        $l954:;
        return $returnValue946;
    }
    $l915:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) p1939));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) blockQuote918));
    blockQuote918 = NULL;
    p1939 = NULL;
    switch ($tmp917) {
        case 0: goto $l954;
    }
    $l956:;
    if (false) goto $l957; else goto $l958;
    $l958:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s959, (panda$core$Int64) { 408 }, &$s960);
    abort();
    $l957:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doBlockQuotes$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* p964 = NULL;
    panda$core$RegularExpression* $tmp965;
    panda$core$RegularExpression* $tmp966;
    panda$core$Int64 $tmp969;
    int $tmp963;
    {
        panda$core$RegularExpression* $tmp967 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp969, 1);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp967, &$s968, $tmp969);
        $tmp966 = $tmp967;
        $tmp965 = $tmp966;
        p964 = $tmp965;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp965));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp966));
        panda$core$MutableMethod* $tmp970 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp970, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous10$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) self));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, p964, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp970)));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp970));
    }
    $tmp963 = -1;
    goto $l961;
    $l961:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) p964));
    p964 = NULL;
    switch ($tmp963) {
        case -1: goto $l971;
    }
    $l971:;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous13$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* lineSoFar975 = NULL;
    panda$core$String* $tmp976;
    panda$core$Object* $tmp977;
    panda$core$Int64 $tmp978;
    panda$core$Int64 width983;
    panda$core$MutableString* replacement985 = NULL;
    panda$core$MutableString* $tmp986;
    panda$core$MutableString* $tmp987;
    panda$core$Char8 $tmp991;
    panda$core$UInt8 $tmp992;
    panda$core$Int64 $tmp993;
    panda$core$Int64 $tmp996;
    panda$core$Int64 $tmp998;
    panda$core$String* $returnValue1000;
    panda$core$String* $tmp1001;
    panda$core$String* $tmp1002;
    int $tmp974;
    {
        panda$core$Int64$init$builtin_int64(&$tmp978, 1);
        ITable* $tmp979 = p_groups->$class->itable;
        while ($tmp979->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp979 = $tmp979->next;
        }
        $fn981 $tmp980 = $tmp979->methods[0];
        panda$core$Object* $tmp982 = $tmp980(p_groups, $tmp978);
        $tmp977 = $tmp982;
        $tmp976 = ((panda$core$String*) $tmp977);
        lineSoFar975 = $tmp976;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp976));
        panda$core$Panda$unref$panda$core$Object$Q($tmp977);
        panda$core$Int64 $tmp984 = panda$core$String$length$R$panda$core$Int64(lineSoFar975);
        width983 = $tmp984;
        panda$core$MutableString* $tmp988 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp988, lineSoFar975);
        $tmp987 = $tmp988;
        $tmp986 = $tmp987;
        replacement985 = $tmp986;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp986));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp987));
        $l989:;
        {
            panda$core$UInt8$init$builtin_uint8(&$tmp992, 32);
            panda$core$Char8$init$panda$core$UInt8(&$tmp991, $tmp992);
            panda$core$MutableString$append$panda$core$Char8(replacement985, $tmp991);
            panda$core$Int64$init$builtin_int64(&$tmp993, 1);
            panda$core$Int64 $tmp994 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(width983, $tmp993);
            width983 = $tmp994;
        }
        panda$core$Int64$init$builtin_int64(&$tmp996, 4);
        panda$core$Int64 $tmp997 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(width983, $tmp996);
        panda$core$Int64$init$builtin_int64(&$tmp998, 0);
        panda$core$Bit $tmp999 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp997, $tmp998);
        bool $tmp995 = $tmp999.value;
        if ($tmp995) goto $l989;
        $l990:;
        panda$core$String* $tmp1003 = panda$core$MutableString$convert$R$panda$core$String(replacement985);
        $tmp1002 = $tmp1003;
        $tmp1001 = $tmp1002;
        $returnValue1000 = $tmp1001;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1001));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1002));
        $tmp974 = 0;
        goto $l972;
        $l1004:;
        return $returnValue1000;
    }
    $l972:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) replacement985));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) lineSoFar975));
    lineSoFar975 = NULL;
    replacement985 = NULL;
    switch ($tmp974) {
        case 0: goto $l1004;
    }
    $l1006:;
    if (false) goto $l1007; else goto $l1008;
    $l1008:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1009, (panda$core$Int64) { 422 }, &$s1010);
    abort();
    $l1007:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim14$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar1014 = NULL;
    panda$core$Method* $tmp1015;
    panda$core$Method* $tmp1016;
    panda$core$Object* $tmp1018;
    panda$core$Object* $tmp1019;
    panda$core$Object* $returnValue1020;
    panda$core$Object* $tmp1021;
    panda$core$String* $tmp1022;
    panda$core$String* $tmp1023;
    int $tmp1013;
    {
        panda$core$Method* $tmp1017 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp1017, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp1016 = $tmp1017;
        $tmp1015 = $tmp1016;
        methodVar1014 = $tmp1015;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1015));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1016));
        {
            $tmp1018 = ((panda$core$MutableMethod*) methodVar1014)->target;
            $tmp1019 = self->target;
            ((panda$core$MutableMethod*) methodVar1014)->target = $tmp1019;
            panda$core$Panda$ref$panda$core$Object$Q($tmp1019);
            panda$core$Panda$unref$panda$core$Object$Q($tmp1018);
        }
        if (methodVar1014->target) {
            $tmp1023 = (($fn1024) methodVar1014->pointer)(methodVar1014->target, p_p0);
        } else {
            $tmp1023 = (($fn1025) methodVar1014->pointer)(p_p0);
        }
        $tmp1022 = $tmp1023;
        $tmp1021 = ((panda$core$Object*) $tmp1022);
        $returnValue1020 = $tmp1021;
        panda$core$Panda$ref$panda$core$Object$Q($tmp1021);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1022));
        $tmp1013 = 0;
        goto $l1011;
        $l1026:;
        return $returnValue1020;
    }
    $l1011:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) methodVar1014));
    methodVar1014 = NULL;
    switch ($tmp1013) {
        case 0: goto $l1026;
    }
    $l1028:;
    if (false) goto $l1029; else goto $l1030;
    $l1030:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1031, (panda$core$Int64) { 422 }, &$s1032);
    abort();
    $l1029:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$detabify$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$core$RegularExpression* $tmp1033;
    panda$core$RegularExpression* $tmp1034 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp1034, &$s1035);
    $tmp1033 = $tmp1034;
    panda$core$MutableMethod* $tmp1036 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
    panda$core$MutableMethod* $tmp1037 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
    panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1037, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous13$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
    panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1036, (panda$core$Int8*) &panda$core$MutableMethod$$shim14$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp1037)));
    panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_text, $tmp1033, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1036)));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1036));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1037));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1033));
}
void org$pandalanguage$pandac$pandadoc$Markdown$outdent$panda$core$MutableString(panda$core$MutableString* p_s) {
    panda$core$RegularExpression* $tmp1038;
    panda$core$RegularExpression* $tmp1039 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp1039, &$s1040);
    $tmp1038 = $tmp1039;
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_s, $tmp1038, &$s1041);
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1038));
}
panda$core$Object* panda$core$MutableMethod$$shim15$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$MutableMethod* methodVar1045 = NULL;
    panda$core$MutableMethod* $tmp1046;
    panda$core$Method* $tmp1047;
    panda$core$Object* $tmp1049;
    panda$core$Object* $tmp1050;
    panda$core$Object* $returnValue1051;
    panda$core$Object* $tmp1052;
    panda$core$String* $tmp1053;
    panda$core$String* $tmp1054;
    int $tmp1044;
    {
        panda$core$Method* $tmp1048 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp1048, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp1047 = $tmp1048;
        $tmp1046 = ((panda$core$MutableMethod*) $tmp1047);
        methodVar1045 = $tmp1046;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1046));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1047));
        {
            $tmp1049 = methodVar1045->target;
            $tmp1050 = self->target;
            methodVar1045->target = $tmp1050;
            panda$core$Panda$ref$panda$core$Object$Q($tmp1050);
            panda$core$Panda$unref$panda$core$Object$Q($tmp1049);
        }
        if (methodVar1045->target) {
            $tmp1054 = (($fn1055) methodVar1045->pointer)(methodVar1045->target, p_p0);
        } else {
            $tmp1054 = (($fn1056) methodVar1045->pointer)(p_p0);
        }
        $tmp1053 = $tmp1054;
        $tmp1052 = ((panda$core$Object*) $tmp1053);
        $returnValue1051 = $tmp1052;
        panda$core$Panda$ref$panda$core$Object$Q($tmp1052);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1053));
        $tmp1044 = 0;
        goto $l1042;
        $l1057:;
        return $returnValue1051;
    }
    $l1042:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) methodVar1045));
    methodVar1045 = NULL;
    switch ($tmp1044) {
        case 0: goto $l1057;
    }
    $l1059:;
    if (false) goto $l1060; else goto $l1061;
    $l1061:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1062, (panda$core$Int64) { 501 }, &$s1063);
    abort();
    $l1060:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doCodeBlocks$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* p1067 = NULL;
    panda$core$RegularExpression* $tmp1068;
    panda$core$RegularExpression* $tmp1069;
    panda$core$Int64 $tmp1072;
    org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* $tmp1075;
    int $tmp1066;
    {
        panda$core$RegularExpression* $tmp1070 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp1072, 1);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1070, &$s1071, $tmp1072);
        $tmp1069 = $tmp1070;
        $tmp1068 = $tmp1069;
        p1067 = $tmp1068;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1068));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1069));
        panda$core$MutableMethod* $tmp1073 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp1074 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* $tmp1076 = (org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$class);
        org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1076, self);
        $tmp1075 = $tmp1076;
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1074, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$replacement$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) $tmp1075));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1073, (panda$core$Int8*) &panda$core$MutableMethod$$shim15$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp1074)));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, p1067, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1073)));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1073));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1074));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1075));
    }
    $tmp1066 = -1;
    goto $l1064;
    $l1064:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) p1067));
    p1067 = NULL;
    switch ($tmp1066) {
        case -1: goto $l1077;
    }
    $l1077:;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$prettyPrint$org$pandalanguage$pandac$parser$Parser$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, org$pandalanguage$pandac$parser$Parser* p_parser) {
    panda$core$MutableString* result1081 = NULL;
    panda$core$MutableString* $tmp1082;
    panda$core$MutableString* $tmp1083;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind current1086;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp1087;
    panda$core$Int64 $tmp1088;
    panda$collections$Iterator* Iter$507$91092 = NULL;
    panda$collections$Iterator* $tmp1093;
    panda$collections$Iterator* $tmp1094;
    org$pandalanguage$pandac$Pair* t1110 = NULL;
    org$pandalanguage$pandac$Pair* $tmp1111;
    panda$core$Object* $tmp1112;
    panda$core$Int64 $tmp1120;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $match$513_171125;
    panda$core$Int64 $tmp1126;
    panda$core$Int64 $tmp1129;
    panda$core$Int64 $tmp1132;
    panda$core$Int64 $tmp1136;
    panda$core$Int64 $tmp1139;
    panda$core$Int64 $tmp1142;
    panda$core$Int64 $tmp1145;
    panda$core$Int64 $tmp1148;
    panda$core$Int64 $tmp1151;
    panda$core$Int64 $tmp1154;
    panda$core$Int64 $tmp1157;
    panda$core$Int64 $tmp1160;
    panda$core$Int64 $tmp1163;
    panda$core$Bit $tmp1166;
    panda$core$MutableString* s1170 = NULL;
    panda$core$MutableString* $tmp1171;
    panda$core$MutableString* $tmp1172;
    panda$core$String* $tmp1174;
    panda$core$String* $tmp1183;
    panda$core$String* $tmp1188;
    panda$core$String* $tmp1193;
    panda$core$String* $tmp1198;
    panda$core$String* $tmp1203;
    panda$core$Int64 $tmp1208;
    panda$core$Int64 $tmp1211;
    panda$core$String* $tmp1214;
    panda$core$String* $tmp1215;
    panda$core$Object* $tmp1217;
    panda$core$Int64 $tmp1223;
    panda$core$Int64 $tmp1226;
    panda$core$Int64 $tmp1232;
    panda$core$String* $returnValue1236;
    panda$core$String* $tmp1237;
    panda$core$String* $tmp1238;
    int $tmp1080;
    {
        panda$core$MutableString* $tmp1084 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp1084, &$s1085);
        $tmp1083 = $tmp1084;
        $tmp1082 = $tmp1083;
        result1081 = $tmp1082;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1082));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1083));
        panda$core$Int64$init$builtin_int64(&$tmp1088, 0);
        org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp1087, $tmp1088);
        current1086 = $tmp1087;
        {
            int $tmp1091;
            {
                ITable* $tmp1095 = ((panda$collections$Iterable*) p_parser->syntaxHighlighter->tokens)->$class->itable;
                while ($tmp1095->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1095 = $tmp1095->next;
                }
                $fn1097 $tmp1096 = $tmp1095->methods[0];
                panda$collections$Iterator* $tmp1098 = $tmp1096(((panda$collections$Iterable*) p_parser->syntaxHighlighter->tokens));
                $tmp1094 = $tmp1098;
                $tmp1093 = $tmp1094;
                Iter$507$91092 = $tmp1093;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1093));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1094));
                $l1099:;
                ITable* $tmp1102 = Iter$507$91092->$class->itable;
                while ($tmp1102->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1102 = $tmp1102->next;
                }
                $fn1104 $tmp1103 = $tmp1102->methods[0];
                panda$core$Bit $tmp1105 = $tmp1103(Iter$507$91092);
                panda$core$Bit $tmp1106 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1105);
                bool $tmp1101 = $tmp1106.value;
                if (!$tmp1101) goto $l1100;
                {
                    int $tmp1109;
                    {
                        ITable* $tmp1113 = Iter$507$91092->$class->itable;
                        while ($tmp1113->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1113 = $tmp1113->next;
                        }
                        $fn1115 $tmp1114 = $tmp1113->methods[1];
                        panda$core$Object* $tmp1116 = $tmp1114(Iter$507$91092);
                        $tmp1112 = $tmp1116;
                        $tmp1111 = ((org$pandalanguage$pandac$Pair*) $tmp1112);
                        t1110 = $tmp1111;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1111));
                        panda$core$Panda$unref$panda$core$Object$Q($tmp1112);
                        panda$core$Bit $tmp1118 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) t1110->second)->value.$rawValue, current1086.$rawValue);
                        bool $tmp1117 = $tmp1118.value;
                        if (!$tmp1117) goto $l1119;
                        panda$core$Int64$init$builtin_int64(&$tmp1120, 0);
                        panda$core$Bit $tmp1121 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(current1086.$rawValue, $tmp1120);
                        $tmp1117 = $tmp1121.value;
                        $l1119:;
                        panda$core$Bit $tmp1122 = { $tmp1117 };
                        if ($tmp1122.value) {
                        {
                            panda$core$MutableString$append$panda$core$String(result1081, &$s1123);
                        }
                        }
                        panda$core$Bit $tmp1124 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) t1110->second)->value.$rawValue, current1086.$rawValue);
                        if ($tmp1124.value) {
                        {
                            current1086 = ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) t1110->second)->value;
                            {
                                $match$513_171125 = current1086;
                                panda$core$Int64$init$builtin_int64(&$tmp1126, 0);
                                panda$core$Bit $tmp1127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171125.$rawValue, $tmp1126);
                                if ($tmp1127.value) {
                                {
                                    {
                                    }
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1129, 1);
                                panda$core$Bit $tmp1130 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171125.$rawValue, $tmp1129);
                                bool $tmp1128 = $tmp1130.value;
                                if ($tmp1128) goto $l1131;
                                panda$core$Int64$init$builtin_int64(&$tmp1132, 2);
                                panda$core$Bit $tmp1133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171125.$rawValue, $tmp1132);
                                $tmp1128 = $tmp1133.value;
                                $l1131:;
                                panda$core$Bit $tmp1134 = { $tmp1128 };
                                if ($tmp1134.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1081, &$s1135);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1136, 3);
                                panda$core$Bit $tmp1137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171125.$rawValue, $tmp1136);
                                if ($tmp1137.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1081, &$s1138);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1139, 4);
                                panda$core$Bit $tmp1140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171125.$rawValue, $tmp1139);
                                if ($tmp1140.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1081, &$s1141);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1142, 5);
                                panda$core$Bit $tmp1143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171125.$rawValue, $tmp1142);
                                if ($tmp1143.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1081, &$s1144);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1145, 6);
                                panda$core$Bit $tmp1146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171125.$rawValue, $tmp1145);
                                if ($tmp1146.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1081, &$s1147);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1148, 7);
                                panda$core$Bit $tmp1149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171125.$rawValue, $tmp1148);
                                if ($tmp1149.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1081, &$s1150);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1151, 8);
                                panda$core$Bit $tmp1152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171125.$rawValue, $tmp1151);
                                if ($tmp1152.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1081, &$s1153);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1154, 9);
                                panda$core$Bit $tmp1155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171125.$rawValue, $tmp1154);
                                if ($tmp1155.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1081, &$s1156);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1157, 10);
                                panda$core$Bit $tmp1158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171125.$rawValue, $tmp1157);
                                if ($tmp1158.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1081, &$s1159);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1160, 11);
                                panda$core$Bit $tmp1161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171125.$rawValue, $tmp1160);
                                if ($tmp1161.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1081, &$s1162);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1163, 12);
                                panda$core$Bit $tmp1164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171125.$rawValue, $tmp1163);
                                if ($tmp1164.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1081, &$s1165);
                                }
                                }
                                else {
                                {
                                    panda$core$Bit$init$builtin_bit(&$tmp1166, false);
                                    if ($tmp1166.value) goto $l1167; else goto $l1168;
                                    $l1168:;
                                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1169, (panda$core$Int64) { 538 });
                                    abort();
                                    $l1167:;
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
                        panda$core$MutableString* $tmp1173 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                        panda$core$String* $tmp1175 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(p_parser, ((org$pandalanguage$pandac$parser$Token$wrapper*) t1110->first)->value);
                        $tmp1174 = $tmp1175;
                        panda$core$MutableString$init$panda$core$String($tmp1173, $tmp1174);
                        $tmp1172 = $tmp1173;
                        $tmp1171 = $tmp1172;
                        s1170 = $tmp1171;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1171));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1172));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1174));
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s1170, &$s1176, &$s1177);
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s1170, &$s1178, &$s1179);
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s1170, &$s1180, &$s1181);
                        panda$core$String* $tmp1186 = (($fn1185) self->charProtector->$class->vtable[2])(self->charProtector, &$s1184);
                        $tmp1183 = $tmp1186;
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s1170, &$s1182, $tmp1183);
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1183));
                        panda$core$String* $tmp1191 = (($fn1190) self->charProtector->$class->vtable[2])(self->charProtector, &$s1189);
                        $tmp1188 = $tmp1191;
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s1170, &$s1187, $tmp1188);
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1188));
                        panda$core$String* $tmp1196 = (($fn1195) self->charProtector->$class->vtable[2])(self->charProtector, &$s1194);
                        $tmp1193 = $tmp1196;
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s1170, &$s1192, $tmp1193);
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1193));
                        panda$core$String* $tmp1201 = (($fn1200) self->charProtector->$class->vtable[2])(self->charProtector, &$s1199);
                        $tmp1198 = $tmp1201;
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s1170, &$s1197, $tmp1198);
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1198));
                        panda$core$String* $tmp1206 = (($fn1205) self->charProtector->$class->vtable[2])(self->charProtector, &$s1204);
                        $tmp1203 = $tmp1206;
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s1170, &$s1202, $tmp1203);
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1203));
                        panda$core$Int64$init$builtin_int64(&$tmp1208, 1);
                        panda$core$Bit $tmp1209 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(current1086.$rawValue, $tmp1208);
                        bool $tmp1207 = $tmp1209.value;
                        if (!$tmp1207) goto $l1210;
                        panda$core$Int64$init$builtin_int64(&$tmp1211, 2);
                        panda$core$Bit $tmp1212 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(current1086.$rawValue, $tmp1211);
                        $tmp1207 = $tmp1212.value;
                        $l1210:;
                        panda$core$Bit $tmp1213 = { $tmp1207 };
                        if ($tmp1213.value) {
                        {
                            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1218;
                            $tmp1218 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
                            $tmp1218->value = ((org$pandalanguage$pandac$parser$Token$wrapper*) t1110->first)->value.kind;
                            $tmp1217 = ((panda$core$Object*) $tmp1218);
                            panda$core$String* $tmp1219 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1216, $tmp1217);
                            $tmp1215 = $tmp1219;
                            panda$core$String* $tmp1221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1215, &$s1220);
                            $tmp1214 = $tmp1221;
                            panda$core$MutableString$append$panda$core$String(result1081, $tmp1214);
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1214));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1215));
                            panda$core$Panda$unref$panda$core$Object$Q($tmp1217);
                        }
                        }
                        panda$core$MutableString$append$panda$core$Object(result1081, ((panda$core$Object*) s1170));
                        panda$core$Int64$init$builtin_int64(&$tmp1223, 1);
                        panda$core$Bit $tmp1224 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(current1086.$rawValue, $tmp1223);
                        bool $tmp1222 = $tmp1224.value;
                        if (!$tmp1222) goto $l1225;
                        panda$core$Int64$init$builtin_int64(&$tmp1226, 2);
                        panda$core$Bit $tmp1227 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(current1086.$rawValue, $tmp1226);
                        $tmp1222 = $tmp1227.value;
                        $l1225:;
                        panda$core$Bit $tmp1228 = { $tmp1222 };
                        if ($tmp1228.value) {
                        {
                            panda$core$MutableString$append$panda$core$String(result1081, &$s1229);
                        }
                        }
                    }
                    $tmp1109 = -1;
                    goto $l1107;
                    $l1107:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) s1170));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) t1110));
                    t1110 = NULL;
                    s1170 = NULL;
                    switch ($tmp1109) {
                        case -1: goto $l1230;
                    }
                    $l1230:;
                }
                goto $l1099;
                $l1100:;
            }
            $tmp1091 = -1;
            goto $l1089;
            $l1089:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$507$91092));
            Iter$507$91092 = NULL;
            switch ($tmp1091) {
                case -1: goto $l1231;
            }
            $l1231:;
        }
        panda$core$Int64$init$builtin_int64(&$tmp1232, 0);
        panda$core$Bit $tmp1233 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(current1086.$rawValue, $tmp1232);
        if ($tmp1233.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1081, &$s1234);
        }
        }
        panda$core$MutableString$append$panda$core$String(result1081, &$s1235);
        panda$core$String* $tmp1239 = panda$core$MutableString$finish$R$panda$core$String(result1081);
        $tmp1238 = $tmp1239;
        $tmp1237 = $tmp1238;
        $returnValue1236 = $tmp1237;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1237));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1238));
        $tmp1080 = 0;
        goto $l1078;
        $l1240:;
        return $returnValue1236;
    }
    $l1078:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result1081));
    result1081 = NULL;
    switch ($tmp1080) {
        case 0: goto $l1240;
    }
    $l1242:;
    if (false) goto $l1243; else goto $l1244;
    $l1244:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1245, (panda$core$Int64) { 504 }, &$s1246);
    abort();
    $l1243:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$syntaxHighlight$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_ed) {
    panda$core$String* text1250 = NULL;
    panda$core$String* $tmp1251;
    panda$core$String* $tmp1252;
    panda$core$String* $tmp1253;
    org$pandalanguage$pandac$ASTNode* file1256 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1257;
    org$pandalanguage$pandac$ASTNode* $tmp1258;
    panda$core$Int64 $tmp1263;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1266;
    panda$core$Bit $tmp1267;
    panda$core$String* $tmp1268;
    panda$core$Int64 $tmp1277;
    panda$core$Int64 $tmp1281;
    org$pandalanguage$pandac$ASTNode* $tmp1284;
    panda$core$Int64 $tmp1287;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1289;
    panda$core$Bit $tmp1290;
    panda$core$String* $tmp1291;
    panda$core$Int64 $tmp1300;
    panda$core$Int64 $tmp1304;
    org$pandalanguage$pandac$ASTNode* $tmp1307;
    panda$core$Int64 $tmp1310;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1312;
    panda$core$Bit $tmp1313;
    panda$core$String* $tmp1314;
    org$pandalanguage$pandac$parser$Token next1320;
    panda$core$Int64 $tmp1322;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1324;
    panda$core$Bit $tmp1325;
    panda$core$String* $tmp1326;
    int $tmp1249;
    {
        panda$threads$MessageQueue$clear(self->errorQueue);
        panda$core$String* $tmp1254 = panda$core$MutableString$convert$R$panda$core$String(p_ed);
        $tmp1253 = $tmp1254;
        panda$core$String* $tmp1255 = panda$core$String$trim$R$panda$core$String($tmp1253);
        $tmp1252 = $tmp1255;
        $tmp1251 = $tmp1252;
        text1250 = $tmp1251;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1251));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1252));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1253));
        org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->parser, self->source, text1250);
        org$pandalanguage$pandac$ASTNode* $tmp1259 = org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(self->parser);
        $tmp1258 = $tmp1259;
        $tmp1257 = $tmp1258;
        file1256 = $tmp1257;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1257));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1258));
        bool $tmp1260 = ((panda$core$Bit) { file1256 != NULL }).value;
        if (!$tmp1260) goto $l1261;
        panda$core$Int64 $tmp1262 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(self->errorQueue);
        panda$core$Int64$init$builtin_int64(&$tmp1263, 0);
        panda$core$Bit $tmp1264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1262, $tmp1263);
        $tmp1260 = $tmp1264.value;
        $l1261:;
        panda$core$Bit $tmp1265 = { $tmp1260 };
        if ($tmp1265.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1267, false);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1266, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1267);
            panda$core$String* $tmp1270 = (($fn1269) self->$class->vtable[16])(self, self->parser);
            $tmp1268 = $tmp1270;
            panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$core$String(p_ed, $tmp1266, $tmp1268);
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1268));
            $tmp1249 = 0;
            goto $l1247;
            $l1271:;
            return;
        }
        }
        panda$threads$MessageQueue$clear(self->errorQueue);
        org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->parser, self->source, text1250);
        $l1272:;
        org$pandalanguage$pandac$parser$Token $tmp1276 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self->parser);
        panda$core$Int64$init$builtin_int64(&$tmp1277, 0);
        panda$core$Bit $tmp1278 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1276.kind.$rawValue, $tmp1277);
        bool $tmp1275 = $tmp1278.value;
        if (!$tmp1275) goto $l1279;
        panda$core$Int64 $tmp1280 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(self->errorQueue);
        panda$core$Int64$init$builtin_int64(&$tmp1281, 0);
        panda$core$Bit $tmp1282 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1280, $tmp1281);
        $tmp1275 = $tmp1282.value;
        $l1279:;
        panda$core$Bit $tmp1283 = { $tmp1275 };
        bool $tmp1274 = $tmp1283.value;
        if (!$tmp1274) goto $l1273;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1285 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self->parser);
            $tmp1284 = $tmp1285;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1284));
        }
        goto $l1272;
        $l1273:;
        panda$core$Int64 $tmp1286 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(self->errorQueue);
        panda$core$Int64$init$builtin_int64(&$tmp1287, 0);
        panda$core$Bit $tmp1288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1286, $tmp1287);
        if ($tmp1288.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1290, false);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1289, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1290);
            panda$core$String* $tmp1293 = (($fn1292) self->$class->vtable[16])(self, self->parser);
            $tmp1291 = $tmp1293;
            panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$core$String(p_ed, $tmp1289, $tmp1291);
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1291));
            $tmp1249 = 1;
            goto $l1247;
            $l1294:;
            return;
        }
        }
        panda$threads$MessageQueue$clear(self->errorQueue);
        org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->parser, self->source, text1250);
        $l1295:;
        org$pandalanguage$pandac$parser$Token $tmp1299 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self->parser);
        panda$core$Int64$init$builtin_int64(&$tmp1300, 0);
        panda$core$Bit $tmp1301 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1299.kind.$rawValue, $tmp1300);
        bool $tmp1298 = $tmp1301.value;
        if (!$tmp1298) goto $l1302;
        panda$core$Int64 $tmp1303 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(self->errorQueue);
        panda$core$Int64$init$builtin_int64(&$tmp1304, 0);
        panda$core$Bit $tmp1305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1303, $tmp1304);
        $tmp1298 = $tmp1305.value;
        $l1302:;
        panda$core$Bit $tmp1306 = { $tmp1298 };
        bool $tmp1297 = $tmp1306.value;
        if (!$tmp1297) goto $l1296;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1308 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self->parser);
            $tmp1307 = $tmp1308;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1307));
        }
        goto $l1295;
        $l1296:;
        panda$core$Int64 $tmp1309 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(self->errorQueue);
        panda$core$Int64$init$builtin_int64(&$tmp1310, 0);
        panda$core$Bit $tmp1311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1309, $tmp1310);
        if ($tmp1311.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1313, false);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1312, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1313);
            panda$core$String* $tmp1316 = (($fn1315) self->$class->vtable[16])(self, self->parser);
            $tmp1314 = $tmp1316;
            panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$core$String(p_ed, $tmp1312, $tmp1314);
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1314));
            $tmp1249 = 2;
            goto $l1247;
            $l1317:;
            return;
        }
        }
        panda$threads$MessageQueue$clear(self->errorQueue);
        org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->parser, self->source, text1250);
        $l1318:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1321 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self->parser);
            next1320 = $tmp1321;
            panda$core$Int64$init$builtin_int64(&$tmp1322, 0);
            panda$core$Bit $tmp1323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1320.kind.$rawValue, $tmp1322);
            if ($tmp1323.value) {
            {
                goto $l1319;
            }
            }
        }
        }
        $l1319:;
        panda$core$Bit$init$builtin_bit(&$tmp1325, false);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1324, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1325);
        panda$core$String* $tmp1328 = (($fn1327) self->$class->vtable[16])(self, self->parser);
        $tmp1326 = $tmp1328;
        panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$core$String(p_ed, $tmp1324, $tmp1326);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1326));
    }
    $tmp1249 = -1;
    goto $l1247;
    $l1247:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) file1256));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) text1250));
    text1250 = NULL;
    file1256 = NULL;
    switch ($tmp1249) {
        case 0: goto $l1271;
        case -1: goto $l1329;
        case 2: goto $l1317;
        case 1: goto $l1294;
    }
    $l1329:;
}
void org$pandalanguage$pandac$pandadoc$Markdown$encodeCode$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_ed) {
    panda$core$RegularExpression* $tmp1330;
    panda$core$RegularExpression* $tmp1331 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp1331, &$s1332);
    $tmp1330 = $tmp1331;
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_ed, $tmp1330, &$s1333);
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1330));
    (($fn1334) self->$class->vtable[17])(self, p_ed);
    panda$core$MutableString$replace$panda$core$String$panda$core$String(p_ed, &$s1335, &$s1336);
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous16$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* list1340 = NULL;
    panda$core$String* $tmp1341;
    panda$core$Object* $tmp1342;
    panda$core$Int64 $tmp1343;
    panda$core$String* listStart1348 = NULL;
    panda$core$String* $tmp1349;
    panda$core$Object* $tmp1350;
    panda$core$Int64 $tmp1351;
    panda$core$String* listType1356 = NULL;
    panda$core$RegularExpression* $tmp1357;
    panda$core$String* $tmp1361;
    panda$core$String* $tmp1362;
    panda$core$String* $tmp1364;
    panda$core$String* $tmp1365;
    panda$core$String* $tmp1367;
    panda$core$String* $tmp1368;
    panda$core$String* $tmp1369;
    panda$core$RegularExpression* $tmp1370;
    panda$core$String* result1375 = NULL;
    panda$core$String* $tmp1376;
    panda$core$String* $tmp1377;
    panda$core$String* $tmp1380;
    panda$core$String* $tmp1381;
    panda$core$String* $tmp1382;
    panda$core$RegularExpression* $tmp1383;
    panda$core$Object* $returnValue1388;
    panda$core$Object* $tmp1389;
    panda$core$String* $tmp1390;
    panda$core$String* $tmp1391;
    panda$core$String* $tmp1392;
    panda$core$String* $tmp1393;
    panda$core$String* $tmp1394;
    panda$core$String* $tmp1395;
    int $tmp1339;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1343, 1);
        ITable* $tmp1344 = p_groups->$class->itable;
        while ($tmp1344->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1344 = $tmp1344->next;
        }
        $fn1346 $tmp1345 = $tmp1344->methods[0];
        panda$core$Object* $tmp1347 = $tmp1345(p_groups, $tmp1343);
        $tmp1342 = $tmp1347;
        $tmp1341 = ((panda$core$String*) $tmp1342);
        list1340 = $tmp1341;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1341));
        panda$core$Panda$unref$panda$core$Object$Q($tmp1342);
        panda$core$Int64$init$builtin_int64(&$tmp1351, 3);
        ITable* $tmp1352 = p_groups->$class->itable;
        while ($tmp1352->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1352 = $tmp1352->next;
        }
        $fn1354 $tmp1353 = $tmp1352->methods[0];
        panda$core$Object* $tmp1355 = $tmp1353(p_groups, $tmp1351);
        $tmp1350 = $tmp1355;
        $tmp1349 = ((panda$core$String*) $tmp1350);
        listStart1348 = $tmp1349;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1349));
        panda$core$Panda$unref$panda$core$Object$Q($tmp1350);
        memset(&listType1356, 0, sizeof(listType1356));
        panda$core$RegularExpression* $tmp1358 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp1358, &$s1359);
        $tmp1357 = $tmp1358;
        panda$core$Bit $tmp1360 = panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(listStart1348, $tmp1357);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1357));
        if ($tmp1360.value) {
        {
            {
                $tmp1361 = listType1356;
                $tmp1362 = &$s1363;
                listType1356 = $tmp1362;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1362));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1361));
            }
        }
        }
        else {
        {
            {
                $tmp1364 = listType1356;
                $tmp1365 = &$s1366;
                listType1356 = $tmp1365;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1365));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1364));
            }
        }
        }
        {
            $tmp1367 = list1340;
            panda$core$RegularExpression* $tmp1371 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
            panda$core$RegularExpression$init$panda$core$String($tmp1371, &$s1372);
            $tmp1370 = $tmp1371;
            panda$core$String* $tmp1374 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(list1340, $tmp1370, &$s1373);
            $tmp1369 = $tmp1374;
            $tmp1368 = $tmp1369;
            list1340 = $tmp1368;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1368));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1369));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1370));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1367));
        }
        panda$core$String* $tmp1379 = (($fn1378) self->$class->vtable[20])(self, list1340);
        $tmp1377 = $tmp1379;
        $tmp1376 = $tmp1377;
        result1375 = $tmp1376;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1376));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1377));
        {
            $tmp1380 = result1375;
            panda$core$RegularExpression* $tmp1384 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
            panda$core$RegularExpression$init$panda$core$String($tmp1384, &$s1385);
            $tmp1383 = $tmp1384;
            panda$core$String* $tmp1387 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(result1375, $tmp1383, &$s1386);
            $tmp1382 = $tmp1387;
            $tmp1381 = $tmp1382;
            result1375 = $tmp1381;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1381));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1382));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1383));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1380));
        }
        panda$core$String* $tmp1397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1396, listType1356);
        $tmp1395 = $tmp1397;
        panda$core$String* $tmp1399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1395, &$s1398);
        $tmp1394 = $tmp1399;
        panda$core$String* $tmp1400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1394, result1375);
        $tmp1393 = $tmp1400;
        panda$core$String* $tmp1402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1393, &$s1401);
        $tmp1392 = $tmp1402;
        panda$core$String* $tmp1403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1392, listType1356);
        $tmp1391 = $tmp1403;
        panda$core$String* $tmp1405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1391, &$s1404);
        $tmp1390 = $tmp1405;
        $tmp1389 = ((panda$core$Object*) $tmp1390);
        $returnValue1388 = $tmp1389;
        panda$core$Panda$ref$panda$core$Object$Q($tmp1389);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1390));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1391));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1392));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1393));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1394));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1395));
        $tmp1339 = 0;
        goto $l1337;
        $l1406:;
        return $returnValue1388;
    }
    $l1337:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result1375));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) listType1356));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) listStart1348));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) list1340));
    list1340 = NULL;
    listStart1348 = NULL;
    result1375 = NULL;
    switch ($tmp1339) {
        case 0: goto $l1406;
    }
    $l1408:;
    if (false) goto $l1409; else goto $l1410;
    $l1410:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1411, (panda$core$Int64) { 641 }, &$s1412);
    abort();
    $l1409:;
    abort();
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous17$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* list1416 = NULL;
    panda$core$String* $tmp1417;
    panda$core$Object* $tmp1418;
    panda$core$Int64 $tmp1419;
    panda$core$String* listStart1424 = NULL;
    panda$core$String* $tmp1425;
    panda$core$Object* $tmp1426;
    panda$core$Int64 $tmp1427;
    panda$core$String* listType1432 = NULL;
    panda$core$RegularExpression* $tmp1433;
    panda$core$String* $tmp1437;
    panda$core$String* $tmp1438;
    panda$core$String* $tmp1440;
    panda$core$String* $tmp1441;
    panda$core$String* $tmp1443;
    panda$core$String* $tmp1444;
    panda$core$String* $tmp1445;
    panda$core$RegularExpression* $tmp1446;
    panda$core$String* result1451 = NULL;
    panda$core$String* $tmp1452;
    panda$core$String* $tmp1453;
    panda$core$Object* $returnValue1456;
    panda$core$Object* $tmp1457;
    panda$core$String* $tmp1458;
    panda$core$String* $tmp1459;
    panda$core$String* $tmp1460;
    panda$core$String* $tmp1461;
    panda$core$String* $tmp1462;
    panda$core$String* $tmp1463;
    int $tmp1415;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1419, 1);
        ITable* $tmp1420 = p_groups->$class->itable;
        while ($tmp1420->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1420 = $tmp1420->next;
        }
        $fn1422 $tmp1421 = $tmp1420->methods[0];
        panda$core$Object* $tmp1423 = $tmp1421(p_groups, $tmp1419);
        $tmp1418 = $tmp1423;
        $tmp1417 = ((panda$core$String*) $tmp1418);
        list1416 = $tmp1417;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1417));
        panda$core$Panda$unref$panda$core$Object$Q($tmp1418);
        panda$core$Int64$init$builtin_int64(&$tmp1427, 3);
        ITable* $tmp1428 = p_groups->$class->itable;
        while ($tmp1428->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1428 = $tmp1428->next;
        }
        $fn1430 $tmp1429 = $tmp1428->methods[0];
        panda$core$Object* $tmp1431 = $tmp1429(p_groups, $tmp1427);
        $tmp1426 = $tmp1431;
        $tmp1425 = ((panda$core$String*) $tmp1426);
        listStart1424 = $tmp1425;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1425));
        panda$core$Panda$unref$panda$core$Object$Q($tmp1426);
        memset(&listType1432, 0, sizeof(listType1432));
        panda$core$RegularExpression* $tmp1434 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp1434, &$s1435);
        $tmp1433 = $tmp1434;
        panda$core$Bit $tmp1436 = panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(listStart1424, $tmp1433);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1433));
        if ($tmp1436.value) {
        {
            {
                $tmp1437 = listType1432;
                $tmp1438 = &$s1439;
                listType1432 = $tmp1438;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1438));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1437));
            }
        }
        }
        else {
        {
            {
                $tmp1440 = listType1432;
                $tmp1441 = &$s1442;
                listType1432 = $tmp1441;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1441));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1440));
            }
        }
        }
        {
            $tmp1443 = list1416;
            panda$core$RegularExpression* $tmp1447 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
            panda$core$RegularExpression$init$panda$core$String($tmp1447, &$s1448);
            $tmp1446 = $tmp1447;
            panda$core$String* $tmp1450 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(list1416, $tmp1446, &$s1449);
            $tmp1445 = $tmp1450;
            $tmp1444 = $tmp1445;
            list1416 = $tmp1444;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1444));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1445));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1446));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1443));
        }
        panda$core$String* $tmp1455 = (($fn1454) self->$class->vtable[20])(self, list1416);
        $tmp1453 = $tmp1455;
        $tmp1452 = $tmp1453;
        result1451 = $tmp1452;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1452));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1453));
        panda$core$String* $tmp1465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1464, listType1432);
        $tmp1463 = $tmp1465;
        panda$core$String* $tmp1467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1463, &$s1466);
        $tmp1462 = $tmp1467;
        panda$core$String* $tmp1468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1462, result1451);
        $tmp1461 = $tmp1468;
        panda$core$String* $tmp1470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1461, &$s1469);
        $tmp1460 = $tmp1470;
        panda$core$String* $tmp1471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1460, listType1432);
        $tmp1459 = $tmp1471;
        panda$core$String* $tmp1473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1459, &$s1472);
        $tmp1458 = $tmp1473;
        $tmp1457 = ((panda$core$Object*) $tmp1458);
        $returnValue1456 = $tmp1457;
        panda$core$Panda$ref$panda$core$Object$Q($tmp1457);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1458));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1459));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1460));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1461));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1462));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1463));
        $tmp1415 = 0;
        goto $l1413;
        $l1474:;
        return $returnValue1456;
    }
    $l1413:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result1451));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) listType1432));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) listStart1424));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) list1416));
    list1416 = NULL;
    listStart1424 = NULL;
    result1451 = NULL;
    switch ($tmp1415) {
        case 0: goto $l1474;
    }
    $l1476:;
    if (false) goto $l1477; else goto $l1478;
    $l1478:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1479, (panda$core$Int64) { 668 }, &$s1480);
    abort();
    $l1477:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doLists$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$core$Int64 lessThanTab1484;
    panda$core$Int64 $tmp1485;
    panda$core$Int64 $tmp1486;
    panda$core$String* wholeList1488 = NULL;
    panda$core$String* $tmp1489;
    panda$core$String* $tmp1490;
    panda$core$String* $tmp1491;
    panda$core$String* $tmp1492;
    panda$core$String* $tmp1493;
    panda$core$String* $tmp1494;
    panda$core$String* $tmp1495;
    panda$core$String* $tmp1496;
    panda$core$String* $tmp1497;
    panda$core$String* $tmp1498;
    panda$core$String* $tmp1499;
    panda$core$String* $tmp1500;
    panda$core$String* $tmp1501;
    panda$core$String* $tmp1502;
    panda$core$String* $tmp1503;
    panda$core$String* $tmp1504;
    panda$core$String* $tmp1505;
    panda$core$String* $tmp1507;
    panda$core$String* $tmp1508;
    panda$core$Object* $tmp1510;
    panda$core$Int64 $tmp1546;
    panda$core$RegularExpression* matchStartOfLine1551 = NULL;
    panda$core$RegularExpression* $tmp1552;
    panda$core$RegularExpression* $tmp1553;
    panda$core$String* $tmp1555;
    panda$core$String* $tmp1556;
    panda$core$RegularExpression* matchStartOfLine1566 = NULL;
    panda$core$RegularExpression* $tmp1567;
    panda$core$RegularExpression* $tmp1568;
    panda$core$String* $tmp1570;
    int $tmp1483;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1485, 4);
        panda$core$Int64$init$builtin_int64(&$tmp1486, 1);
        panda$core$Int64 $tmp1487 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1485, $tmp1486);
        lessThanTab1484 = $tmp1487;
        panda$core$Int64$wrapper* $tmp1511;
        $tmp1511 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp1511->value = lessThanTab1484;
        $tmp1510 = ((panda$core$Object*) $tmp1511);
        panda$core$String* $tmp1512 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1509, $tmp1510);
        $tmp1508 = $tmp1512;
        panda$core$String* $tmp1514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1508, &$s1513);
        $tmp1507 = $tmp1514;
        panda$core$String* $tmp1515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1506, $tmp1507);
        $tmp1505 = $tmp1515;
        panda$core$String* $tmp1517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1505, &$s1516);
        $tmp1504 = $tmp1517;
        panda$core$String* $tmp1519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1504, &$s1518);
        $tmp1503 = $tmp1519;
        panda$core$String* $tmp1521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1503, &$s1520);
        $tmp1502 = $tmp1521;
        panda$core$String* $tmp1523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1502, &$s1522);
        $tmp1501 = $tmp1523;
        panda$core$String* $tmp1525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1501, &$s1524);
        $tmp1500 = $tmp1525;
        panda$core$String* $tmp1527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1500, &$s1526);
        $tmp1499 = $tmp1527;
        panda$core$String* $tmp1529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1499, &$s1528);
        $tmp1498 = $tmp1529;
        panda$core$String* $tmp1531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1498, &$s1530);
        $tmp1497 = $tmp1531;
        panda$core$String* $tmp1533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1497, &$s1532);
        $tmp1496 = $tmp1533;
        panda$core$String* $tmp1535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1496, &$s1534);
        $tmp1495 = $tmp1535;
        panda$core$String* $tmp1537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1495, &$s1536);
        $tmp1494 = $tmp1537;
        panda$core$String* $tmp1539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1494, &$s1538);
        $tmp1493 = $tmp1539;
        panda$core$String* $tmp1541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1493, &$s1540);
        $tmp1492 = $tmp1541;
        panda$core$String* $tmp1543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1492, &$s1542);
        $tmp1491 = $tmp1543;
        panda$core$String* $tmp1545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1491, &$s1544);
        $tmp1490 = $tmp1545;
        $tmp1489 = $tmp1490;
        wholeList1488 = $tmp1489;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1489));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1490));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1491));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1492));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1493));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1494));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1495));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1496));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1497));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1498));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1499));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1500));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1501));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1502));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1503));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1504));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1505));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1507));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1508));
        panda$core$Panda$unref$panda$core$Object$Q($tmp1510);
        panda$core$Int64$init$builtin_int64(&$tmp1546, 0);
        panda$core$Bit $tmp1547 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->listLevel, $tmp1546);
        if ($tmp1547.value) {
        {
            int $tmp1550;
            {
                panda$core$RegularExpression* $tmp1554 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                panda$core$String* $tmp1558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1557, wholeList1488);
                $tmp1556 = $tmp1558;
                panda$core$String* $tmp1560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1556, &$s1559);
                $tmp1555 = $tmp1560;
                panda$core$RegularExpression$init$panda$core$String($tmp1554, $tmp1555);
                $tmp1553 = $tmp1554;
                $tmp1552 = $tmp1553;
                matchStartOfLine1551 = $tmp1552;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1552));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1553));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1555));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1556));
                panda$core$MutableMethod* $tmp1561 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
                panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1561, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous16$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) self));
                panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_text, matchStartOfLine1551, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1561)));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1561));
            }
            $tmp1550 = -1;
            goto $l1548;
            $l1548:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) matchStartOfLine1551));
            matchStartOfLine1551 = NULL;
            switch ($tmp1550) {
                case -1: goto $l1562;
            }
            $l1562:;
        }
        }
        else {
        {
            int $tmp1565;
            {
                panda$core$RegularExpression* $tmp1569 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                panda$core$String* $tmp1572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1571, wholeList1488);
                $tmp1570 = $tmp1572;
                panda$core$RegularExpression$init$panda$core$String($tmp1569, $tmp1570);
                $tmp1568 = $tmp1569;
                $tmp1567 = $tmp1568;
                matchStartOfLine1566 = $tmp1567;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1567));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1568));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1570));
                panda$core$MutableMethod* $tmp1573 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
                panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1573, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous17$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) self));
                panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_text, matchStartOfLine1566, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1573)));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1573));
            }
            $tmp1565 = -1;
            goto $l1563;
            $l1563:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) matchStartOfLine1566));
            matchStartOfLine1566 = NULL;
            switch ($tmp1565) {
                case -1: goto $l1574;
            }
            $l1574:;
        }
        }
    }
    $tmp1483 = -1;
    goto $l1481;
    $l1481:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) wholeList1488));
    wholeList1488 = NULL;
    switch ($tmp1483) {
        case -1: goto $l1575;
    }
    $l1575:;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous18$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* text1579 = NULL;
    panda$core$String* $tmp1580;
    panda$core$Object* $tmp1581;
    panda$core$Int64 $tmp1582;
    panda$core$MutableString* item1587 = NULL;
    panda$core$MutableString* $tmp1588;
    panda$core$MutableString* $tmp1589;
    panda$core$String* leadingLine1591 = NULL;
    panda$core$String* $tmp1592;
    panda$core$Object* $tmp1593;
    panda$core$Int64 $tmp1594;
    panda$core$String* $returnValue1608;
    panda$core$String* $tmp1609;
    panda$core$String* $tmp1610;
    panda$core$String* $tmp1611;
    int $tmp1578;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1582, 4);
        ITable* $tmp1583 = p_groups->$class->itable;
        while ($tmp1583->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1583 = $tmp1583->next;
        }
        $fn1585 $tmp1584 = $tmp1583->methods[0];
        panda$core$Object* $tmp1586 = $tmp1584(p_groups, $tmp1582);
        $tmp1581 = $tmp1586;
        $tmp1580 = ((panda$core$String*) $tmp1581);
        text1579 = $tmp1580;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1580));
        panda$core$Panda$unref$panda$core$Object$Q($tmp1581);
        panda$core$MutableString* $tmp1590 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp1590, text1579);
        $tmp1589 = $tmp1590;
        $tmp1588 = $tmp1589;
        item1587 = $tmp1588;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1588));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1589));
        panda$core$Int64$init$builtin_int64(&$tmp1594, 1);
        ITable* $tmp1595 = p_groups->$class->itable;
        while ($tmp1595->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1595 = $tmp1595->next;
        }
        $fn1597 $tmp1596 = $tmp1595->methods[0];
        panda$core$Object* $tmp1598 = $tmp1596(p_groups, $tmp1594);
        $tmp1593 = $tmp1598;
        $tmp1592 = ((panda$core$String*) $tmp1593);
        leadingLine1591 = $tmp1592;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1592));
        panda$core$Panda$unref$panda$core$Object$Q($tmp1593);
        panda$core$Bit $tmp1600 = org$pandalanguage$pandac$pandadoc$Markdown$isEmptyString$panda$core$String$Q$R$panda$core$Bit(leadingLine1591);
        panda$core$Bit $tmp1601 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1600);
        bool $tmp1599 = $tmp1601.value;
        if ($tmp1599) goto $l1602;
        panda$core$Bit $tmp1603 = org$pandalanguage$pandac$pandadoc$Markdown$hasParagraphBreak$panda$core$MutableString$R$panda$core$Bit(item1587);
        $tmp1599 = $tmp1603.value;
        $l1602:;
        panda$core$Bit $tmp1604 = { $tmp1599 };
        if ($tmp1604.value) {
        {
            org$pandalanguage$pandac$pandadoc$Markdown$outdent$panda$core$MutableString(item1587);
            (($fn1605) self->$class->vtable[6])(self, item1587);
        }
        }
        else {
        {
            org$pandalanguage$pandac$pandadoc$Markdown$outdent$panda$core$MutableString(item1587);
            (($fn1606) self->$class->vtable[19])(self, item1587);
            (($fn1607) self->$class->vtable[22])(self, item1587);
        }
        }
        panda$core$MutableString$trim(item1587);
        panda$core$String* $tmp1613 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1612, ((panda$core$Object*) item1587));
        $tmp1611 = $tmp1613;
        panda$core$String* $tmp1615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1611, &$s1614);
        $tmp1610 = $tmp1615;
        $tmp1609 = $tmp1610;
        $returnValue1608 = $tmp1609;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1609));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1610));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1611));
        $tmp1578 = 0;
        goto $l1576;
        $l1616:;
        return $returnValue1608;
    }
    $l1576:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) leadingLine1591));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) item1587));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) text1579));
    text1579 = NULL;
    item1587 = NULL;
    leadingLine1591 = NULL;
    switch ($tmp1578) {
        case 0: goto $l1616;
    }
    $l1618:;
    if (false) goto $l1619; else goto $l1620;
    $l1620:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1621, (panda$core$Int64) { 719 }, &$s1622);
    abort();
    $l1619:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim19$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar1626 = NULL;
    panda$core$Method* $tmp1627;
    panda$core$Method* $tmp1628;
    panda$core$Object* $tmp1630;
    panda$core$Object* $tmp1631;
    panda$core$Object* $returnValue1632;
    panda$core$Object* $tmp1633;
    panda$core$String* $tmp1634;
    panda$core$String* $tmp1635;
    int $tmp1625;
    {
        panda$core$Method* $tmp1629 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp1629, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp1628 = $tmp1629;
        $tmp1627 = $tmp1628;
        methodVar1626 = $tmp1627;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1627));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1628));
        {
            $tmp1630 = ((panda$core$MutableMethod*) methodVar1626)->target;
            $tmp1631 = self->target;
            ((panda$core$MutableMethod*) methodVar1626)->target = $tmp1631;
            panda$core$Panda$ref$panda$core$Object$Q($tmp1631);
            panda$core$Panda$unref$panda$core$Object$Q($tmp1630);
        }
        if (methodVar1626->target) {
            $tmp1635 = (($fn1636) methodVar1626->pointer)(methodVar1626->target, p_p0);
        } else {
            $tmp1635 = (($fn1637) methodVar1626->pointer)(p_p0);
        }
        $tmp1634 = $tmp1635;
        $tmp1633 = ((panda$core$Object*) $tmp1634);
        $returnValue1632 = $tmp1633;
        panda$core$Panda$ref$panda$core$Object$Q($tmp1633);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1634));
        $tmp1625 = 0;
        goto $l1623;
        $l1638:;
        return $returnValue1632;
    }
    $l1623:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) methodVar1626));
    methodVar1626 = NULL;
    switch ($tmp1625) {
        case 0: goto $l1638;
    }
    $l1640:;
    if (false) goto $l1641; else goto $l1642;
    $l1642:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1643, (panda$core$Int64) { 719 }, &$s1644);
    abort();
    $l1641:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$processListItems$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$String* p_rawList) {
    org$pandalanguage$pandac$pandadoc$Markdown* $tmp1648;
    panda$core$Int64 $tmp1649;
    panda$core$String* list1651 = NULL;
    panda$core$String* $tmp1652;
    panda$core$String* $tmp1653;
    panda$core$RegularExpression* $tmp1654;
    panda$core$RegularExpression* p1659 = NULL;
    panda$core$RegularExpression* $tmp1660;
    panda$core$RegularExpression* $tmp1661;
    panda$core$Int64 $tmp1664;
    panda$core$String* $tmp1665;
    panda$core$String* $tmp1666;
    panda$core$String* $tmp1667;
    org$pandalanguage$pandac$pandadoc$Markdown* $tmp1671;
    panda$core$Int64 $tmp1672;
    panda$core$String* $returnValue1674;
    panda$core$String* $tmp1675;
    int $tmp1647;
    {
        $tmp1648 = self;
        panda$core$Int64$init$builtin_int64(&$tmp1649, 1);
        panda$core$Int64 $tmp1650 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1648->listLevel, $tmp1649);
        $tmp1648->listLevel = $tmp1650;
        panda$core$RegularExpression* $tmp1655 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp1655, &$s1656);
        $tmp1654 = $tmp1655;
        panda$core$String* $tmp1658 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(p_rawList, $tmp1654, &$s1657);
        $tmp1653 = $tmp1658;
        $tmp1652 = $tmp1653;
        list1651 = $tmp1652;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1652));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1653));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1654));
        panda$core$RegularExpression* $tmp1662 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp1664, 1);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1662, &$s1663, $tmp1664);
        $tmp1661 = $tmp1662;
        $tmp1660 = $tmp1661;
        p1659 = $tmp1660;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1660));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1661));
        {
            $tmp1665 = list1651;
            panda$core$MutableMethod* $tmp1668 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
            panda$core$MutableMethod* $tmp1669 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
            panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1669, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous18$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
            panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1668, (panda$core$Int8*) &panda$core$MutableMethod$$shim19$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp1669)));
            panda$core$String* $tmp1670 = panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(list1651, p1659, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1668)));
            $tmp1667 = $tmp1670;
            $tmp1666 = $tmp1667;
            list1651 = $tmp1666;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1666));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1667));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1668));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1669));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1665));
        }
        $tmp1671 = self;
        panda$core$Int64$init$builtin_int64(&$tmp1672, 1);
        panda$core$Int64 $tmp1673 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1671->listLevel, $tmp1672);
        $tmp1671->listLevel = $tmp1673;
        $tmp1675 = list1651;
        $returnValue1674 = $tmp1675;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1675));
        $tmp1647 = 0;
        goto $l1645;
        $l1676:;
        return $returnValue1674;
    }
    $l1645:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) p1659));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) list1651));
    list1651 = NULL;
    p1659 = NULL;
    switch ($tmp1647) {
        case 0: goto $l1676;
    }
    $l1678:;
    if (false) goto $l1679; else goto $l1680;
    $l1680:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1681, (panda$core$Int64) { 689 }, &$s1682);
    abort();
    $l1679:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$pandadoc$Markdown$hasParagraphBreak$panda$core$MutableString$R$panda$core$Bit(panda$core$MutableString* p_item) {
    panda$core$Bit $returnValue1683;
    panda$core$Bit $tmp1685 = panda$core$MutableString$contains$panda$core$String$R$panda$core$Bit(p_item, &$s1684);
    $returnValue1683 = $tmp1685;
    return $returnValue1683;
}
panda$core$Bit org$pandalanguage$pandac$pandadoc$Markdown$isEmptyString$panda$core$String$Q$R$panda$core$Bit(panda$core$String* p_leadingLine) {
    panda$core$Bit $returnValue1687;
    panda$core$String* $tmp1690;
    panda$core$Bit $tmp1697;
    bool $tmp1688 = ((panda$core$Bit) { p_leadingLine == NULL }).value;
    if ($tmp1688) goto $l1689;
    $tmp1690 = p_leadingLine;
    panda$core$Bit $tmp1694;
    if (((panda$core$Bit) { $tmp1690 != NULL }).value) goto $l1691; else goto $l1692;
    $l1691:;
    panda$core$Bit $tmp1696 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp1690, &$s1695);
    $tmp1694 = $tmp1696;
    goto $l1693;
    $l1692:;
    panda$core$Bit$init$builtin_bit(&$tmp1697, false);
    $tmp1694 = $tmp1697;
    goto $l1693;
    $l1693:;
    $tmp1688 = $tmp1694.value;
    $l1689:;
    panda$core$Bit $tmp1698 = { $tmp1688 };
    $returnValue1687 = $tmp1698;
    return $returnValue1687;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous20$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$MutableString* result1703 = NULL;
    panda$core$MutableString* $tmp1704;
    panda$core$MutableString* $tmp1705;
    panda$core$Object* $tmp1707;
    panda$core$Int64 $tmp1708;
    panda$core$String* $returnValue1714;
    panda$core$String* $tmp1715;
    panda$core$String* $tmp1716;
    panda$core$String* $tmp1717;
    panda$core$String* $tmp1718;
    panda$core$String* $tmp1719;
    panda$core$Object* $tmp1721;
    panda$core$Int64 $tmp1722;
    int $tmp1702;
    {
        panda$core$MutableString* $tmp1706 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$Int64$init$builtin_int64(&$tmp1708, 1);
        ITable* $tmp1709 = p_groups->$class->itable;
        while ($tmp1709->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1709 = $tmp1709->next;
        }
        $fn1711 $tmp1710 = $tmp1709->methods[0];
        panda$core$Object* $tmp1712 = $tmp1710(p_groups, $tmp1708);
        $tmp1707 = $tmp1712;
        panda$core$MutableString$init$panda$core$String($tmp1706, ((panda$core$String*) $tmp1707));
        $tmp1705 = $tmp1706;
        $tmp1704 = $tmp1705;
        result1703 = $tmp1704;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1704));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1705));
        panda$core$Panda$unref$panda$core$Object$Q($tmp1707);
        (($fn1713) self->$class->vtable[22])(self, result1703);
        panda$core$Int64$init$builtin_int64(&$tmp1722, 1);
        ITable* $tmp1723 = p_groups->$class->itable;
        while ($tmp1723->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1723 = $tmp1723->next;
        }
        $fn1725 $tmp1724 = $tmp1723->methods[0];
        panda$core$Object* $tmp1726 = $tmp1724(p_groups, $tmp1722);
        $tmp1721 = $tmp1726;
        panda$core$String* $tmp1727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1720, ((panda$core$String*) $tmp1721));
        $tmp1719 = $tmp1727;
        panda$core$String* $tmp1729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1719, &$s1728);
        $tmp1718 = $tmp1729;
        panda$core$String* $tmp1730 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1718, ((panda$core$Object*) result1703));
        $tmp1717 = $tmp1730;
        panda$core$String* $tmp1732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1717, &$s1731);
        $tmp1716 = $tmp1732;
        $tmp1715 = $tmp1716;
        $returnValue1714 = $tmp1715;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1715));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1716));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1717));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1718));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1719));
        panda$core$Panda$unref$panda$core$Object$Q($tmp1721);
        $tmp1702 = 0;
        goto $l1700;
        $l1733:;
        return $returnValue1714;
    }
    $l1700:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result1703));
    result1703 = NULL;
    switch ($tmp1702) {
        case 0: goto $l1733;
    }
    $l1735:;
    if (false) goto $l1736; else goto $l1737;
    $l1737:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1738, (panda$core$Int64) { 752 }, &$s1739);
    abort();
    $l1736:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim21$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar1743 = NULL;
    panda$core$Method* $tmp1744;
    panda$core$Method* $tmp1745;
    panda$core$Object* $tmp1747;
    panda$core$Object* $tmp1748;
    panda$core$Object* $returnValue1749;
    panda$core$Object* $tmp1750;
    panda$core$String* $tmp1751;
    panda$core$String* $tmp1752;
    int $tmp1742;
    {
        panda$core$Method* $tmp1746 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp1746, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp1745 = $tmp1746;
        $tmp1744 = $tmp1745;
        methodVar1743 = $tmp1744;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1744));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1745));
        {
            $tmp1747 = ((panda$core$MutableMethod*) methodVar1743)->target;
            $tmp1748 = self->target;
            ((panda$core$MutableMethod*) methodVar1743)->target = $tmp1748;
            panda$core$Panda$ref$panda$core$Object$Q($tmp1748);
            panda$core$Panda$unref$panda$core$Object$Q($tmp1747);
        }
        if (methodVar1743->target) {
            $tmp1752 = (($fn1753) methodVar1743->pointer)(methodVar1743->target, p_p0);
        } else {
            $tmp1752 = (($fn1754) methodVar1743->pointer)(p_p0);
        }
        $tmp1751 = $tmp1752;
        $tmp1750 = ((panda$core$Object*) $tmp1751);
        $returnValue1749 = $tmp1750;
        panda$core$Panda$ref$panda$core$Object$Q($tmp1750);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1751));
        $tmp1742 = 0;
        goto $l1740;
        $l1755:;
        return $returnValue1749;
    }
    $l1740:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) methodVar1743));
    methodVar1743 = NULL;
    switch ($tmp1742) {
        case 0: goto $l1755;
    }
    $l1757:;
    if (false) goto $l1758; else goto $l1759;
    $l1759:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1760, (panda$core$Int64) { 752 }, &$s1761);
    abort();
    $l1758:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous22$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$MutableString* result1765 = NULL;
    panda$core$MutableString* $tmp1766;
    panda$core$MutableString* $tmp1767;
    panda$core$Object* $tmp1769;
    panda$core$Int64 $tmp1770;
    panda$core$String* $returnValue1776;
    panda$core$String* $tmp1777;
    panda$core$String* $tmp1778;
    panda$core$String* $tmp1779;
    panda$core$String* $tmp1780;
    panda$core$String* $tmp1781;
    panda$core$Object* $tmp1783;
    panda$core$Int64 $tmp1784;
    int $tmp1764;
    {
        panda$core$MutableString* $tmp1768 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$Int64$init$builtin_int64(&$tmp1770, 1);
        ITable* $tmp1771 = p_groups->$class->itable;
        while ($tmp1771->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1771 = $tmp1771->next;
        }
        $fn1773 $tmp1772 = $tmp1771->methods[0];
        panda$core$Object* $tmp1774 = $tmp1772(p_groups, $tmp1770);
        $tmp1769 = $tmp1774;
        panda$core$MutableString$init$panda$core$String($tmp1768, ((panda$core$String*) $tmp1769));
        $tmp1767 = $tmp1768;
        $tmp1766 = $tmp1767;
        result1765 = $tmp1766;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1766));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1767));
        panda$core$Panda$unref$panda$core$Object$Q($tmp1769);
        (($fn1775) self->$class->vtable[22])(self, result1765);
        panda$core$Int64$init$builtin_int64(&$tmp1784, 1);
        ITable* $tmp1785 = p_groups->$class->itable;
        while ($tmp1785->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1785 = $tmp1785->next;
        }
        $fn1787 $tmp1786 = $tmp1785->methods[0];
        panda$core$Object* $tmp1788 = $tmp1786(p_groups, $tmp1784);
        $tmp1783 = $tmp1788;
        panda$core$String* $tmp1789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1782, ((panda$core$String*) $tmp1783));
        $tmp1781 = $tmp1789;
        panda$core$String* $tmp1791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1781, &$s1790);
        $tmp1780 = $tmp1791;
        panda$core$String* $tmp1792 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1780, ((panda$core$Object*) result1765));
        $tmp1779 = $tmp1792;
        panda$core$String* $tmp1794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1779, &$s1793);
        $tmp1778 = $tmp1794;
        $tmp1777 = $tmp1778;
        $returnValue1776 = $tmp1777;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1777));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1778));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1779));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1780));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1781));
        panda$core$Panda$unref$panda$core$Object$Q($tmp1783);
        $tmp1764 = 0;
        goto $l1762;
        $l1795:;
        return $returnValue1776;
    }
    $l1762:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result1765));
    result1765 = NULL;
    switch ($tmp1764) {
        case 0: goto $l1795;
    }
    $l1797:;
    if (false) goto $l1798; else goto $l1799;
    $l1799:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1800, (panda$core$Int64) { 757 }, &$s1801);
    abort();
    $l1798:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim23$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar1805 = NULL;
    panda$core$Method* $tmp1806;
    panda$core$Method* $tmp1807;
    panda$core$Object* $tmp1809;
    panda$core$Object* $tmp1810;
    panda$core$Object* $returnValue1811;
    panda$core$Object* $tmp1812;
    panda$core$String* $tmp1813;
    panda$core$String* $tmp1814;
    int $tmp1804;
    {
        panda$core$Method* $tmp1808 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp1808, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp1807 = $tmp1808;
        $tmp1806 = $tmp1807;
        methodVar1805 = $tmp1806;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1806));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1807));
        {
            $tmp1809 = ((panda$core$MutableMethod*) methodVar1805)->target;
            $tmp1810 = self->target;
            ((panda$core$MutableMethod*) methodVar1805)->target = $tmp1810;
            panda$core$Panda$ref$panda$core$Object$Q($tmp1810);
            panda$core$Panda$unref$panda$core$Object$Q($tmp1809);
        }
        if (methodVar1805->target) {
            $tmp1814 = (($fn1815) methodVar1805->pointer)(methodVar1805->target, p_p0);
        } else {
            $tmp1814 = (($fn1816) methodVar1805->pointer)(p_p0);
        }
        $tmp1813 = $tmp1814;
        $tmp1812 = ((panda$core$Object*) $tmp1813);
        $returnValue1811 = $tmp1812;
        panda$core$Panda$ref$panda$core$Object$Q($tmp1812);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1813));
        $tmp1804 = 0;
        goto $l1802;
        $l1817:;
        return $returnValue1811;
    }
    $l1802:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) methodVar1805));
    methodVar1805 = NULL;
    switch ($tmp1804) {
        case 0: goto $l1817;
    }
    $l1819:;
    if (false) goto $l1820; else goto $l1821;
    $l1821:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1822, (panda$core$Int64) { 757 }, &$s1823);
    abort();
    $l1820:;
    abort();
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous24$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* marker1827 = NULL;
    panda$core$String* $tmp1828;
    panda$core$Object* $tmp1829;
    panda$core$Int64 $tmp1830;
    panda$core$MutableString* heading1835 = NULL;
    panda$core$MutableString* $tmp1836;
    panda$core$MutableString* $tmp1837;
    panda$core$Object* $tmp1839;
    panda$core$Int64 $tmp1840;
    panda$core$Int64 level1846;
    panda$core$String* tag1848 = NULL;
    panda$core$String* $tmp1849;
    panda$core$String* $tmp1850;
    panda$core$Object* $tmp1852;
    panda$core$Object* $returnValue1855;
    panda$core$Object* $tmp1856;
    panda$core$String* $tmp1857;
    panda$core$String* $tmp1858;
    panda$core$String* $tmp1859;
    panda$core$String* $tmp1860;
    panda$core$String* $tmp1861;
    panda$core$String* $tmp1862;
    int $tmp1826;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1830, 1);
        ITable* $tmp1831 = p_groups->$class->itable;
        while ($tmp1831->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1831 = $tmp1831->next;
        }
        $fn1833 $tmp1832 = $tmp1831->methods[0];
        panda$core$Object* $tmp1834 = $tmp1832(p_groups, $tmp1830);
        $tmp1829 = $tmp1834;
        $tmp1828 = ((panda$core$String*) $tmp1829);
        marker1827 = $tmp1828;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1828));
        panda$core$Panda$unref$panda$core$Object$Q($tmp1829);
        panda$core$MutableString* $tmp1838 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$Int64$init$builtin_int64(&$tmp1840, 2);
        ITable* $tmp1841 = p_groups->$class->itable;
        while ($tmp1841->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1841 = $tmp1841->next;
        }
        $fn1843 $tmp1842 = $tmp1841->methods[0];
        panda$core$Object* $tmp1844 = $tmp1842(p_groups, $tmp1840);
        $tmp1839 = $tmp1844;
        panda$core$MutableString$init$panda$core$String($tmp1838, ((panda$core$String*) $tmp1839));
        $tmp1837 = $tmp1838;
        $tmp1836 = $tmp1837;
        heading1835 = $tmp1836;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1836));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1837));
        panda$core$Panda$unref$panda$core$Object$Q($tmp1839);
        (($fn1845) self->$class->vtable[22])(self, heading1835);
        panda$core$Int64 $tmp1847 = panda$core$String$length$R$panda$core$Int64(marker1827);
        level1846 = $tmp1847;
        panda$core$Int64$wrapper* $tmp1853;
        $tmp1853 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp1853->value = level1846;
        $tmp1852 = ((panda$core$Object*) $tmp1853);
        panda$core$String* $tmp1854 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1851, $tmp1852);
        $tmp1850 = $tmp1854;
        $tmp1849 = $tmp1850;
        tag1848 = $tmp1849;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1849));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1850));
        panda$core$Panda$unref$panda$core$Object$Q($tmp1852);
        panda$core$String* $tmp1864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1863, tag1848);
        $tmp1862 = $tmp1864;
        panda$core$String* $tmp1866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1862, &$s1865);
        $tmp1861 = $tmp1866;
        panda$core$String* $tmp1867 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1861, ((panda$core$Object*) heading1835));
        $tmp1860 = $tmp1867;
        panda$core$String* $tmp1869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1860, &$s1868);
        $tmp1859 = $tmp1869;
        panda$core$String* $tmp1870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1859, tag1848);
        $tmp1858 = $tmp1870;
        panda$core$String* $tmp1872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1858, &$s1871);
        $tmp1857 = $tmp1872;
        $tmp1856 = ((panda$core$Object*) $tmp1857);
        $returnValue1855 = $tmp1856;
        panda$core$Panda$ref$panda$core$Object$Q($tmp1856);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1857));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1858));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1859));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1860));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1861));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1862));
        $tmp1826 = 0;
        goto $l1824;
        $l1873:;
        return $returnValue1855;
    }
    $l1824:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) tag1848));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) heading1835));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) marker1827));
    marker1827 = NULL;
    heading1835 = NULL;
    tag1848 = NULL;
    switch ($tmp1826) {
        case 0: goto $l1873;
    }
    $l1875:;
    if (false) goto $l1876; else goto $l1877;
    $l1877:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1878, (panda$core$Int64) { 765 }, &$s1879);
    abort();
    $l1876:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doHeaders$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* $tmp1883;
    panda$core$RegularExpression* $tmp1888;
    panda$core$RegularExpression* p1893 = NULL;
    panda$core$RegularExpression* $tmp1894;
    panda$core$RegularExpression* $tmp1895;
    panda$core$Int64 $tmp1898;
    int $tmp1882;
    {
        panda$core$RegularExpression* $tmp1884 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp1884, &$s1885);
        $tmp1883 = $tmp1884;
        panda$core$MutableMethod* $tmp1886 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp1887 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1887, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous20$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1886, (panda$core$Int8*) &panda$core$MutableMethod$$shim21$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp1887)));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, $tmp1883, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1886)));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1886));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1887));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1883));
        panda$core$RegularExpression* $tmp1889 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp1889, &$s1890);
        $tmp1888 = $tmp1889;
        panda$core$MutableMethod* $tmp1891 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp1892 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1892, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous22$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1891, (panda$core$Int8*) &panda$core$MutableMethod$$shim23$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp1892)));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, $tmp1888, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1891)));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1891));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1892));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1888));
        panda$core$RegularExpression* $tmp1896 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp1898, 1);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1896, &$s1897, $tmp1898);
        $tmp1895 = $tmp1896;
        $tmp1894 = $tmp1895;
        p1893 = $tmp1894;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1894));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1895));
        panda$core$MutableMethod* $tmp1899 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1899, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous24$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) self));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, p1893, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1899)));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1899));
    }
    $tmp1882 = -1;
    goto $l1880;
    $l1880:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) p1893));
    p1893 = NULL;
    switch ($tmp1882) {
        case -1: goto $l1900;
    }
    $l1900:;
}
void org$pandalanguage$pandac$pandadoc$Markdown$runSpanGamut$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$core$RegularExpression* $tmp1910;
    (($fn1901) self->$class->vtable[24])(self, p_text);
    (($fn1902) self->$class->vtable[29])(self, p_text);
    (($fn1903) self->$class->vtable[3])(self, p_text);
    (($fn1904) self->$class->vtable[25])(self, p_text);
    (($fn1905) self->$class->vtable[26])(self, p_text);
    (($fn1906) self->$class->vtable[10])(self, p_text);
    (($fn1907) self->$class->vtable[24])(self, p_text);
    (($fn1908) self->$class->vtable[28])(self, p_text);
    (($fn1909) self->$class->vtable[27])(self, p_text);
    panda$core$RegularExpression* $tmp1911 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp1911, &$s1912);
    $tmp1910 = $tmp1911;
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_text, $tmp1910, &$s1913);
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1910));
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$nestedTagsRegex$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_depth) {
    panda$core$Int64 $tmp1914;
    panda$core$String* $returnValue1916;
    panda$core$String* $tmp1917;
    panda$core$String* $tmp1920;
    panda$core$String* $tmp1921;
    panda$core$String* $tmp1922;
    panda$core$String* $tmp1924;
    panda$core$Int64 $tmp1925;
    panda$core$Int64$init$builtin_int64(&$tmp1914, 0);
    panda$core$Bit $tmp1915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_depth, $tmp1914);
    if ($tmp1915.value) {
    {
        $tmp1917 = &$s1918;
        $returnValue1916 = $tmp1917;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1917));
        return $returnValue1916;
    }
    }
    else {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1925, 1);
        panda$core$Int64 $tmp1926 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_depth, $tmp1925);
        panda$core$String* $tmp1927 = org$pandalanguage$pandac$pandadoc$Markdown$nestedTagsRegex$panda$core$Int64$R$panda$core$String($tmp1926);
        $tmp1924 = $tmp1927;
        panda$core$String* $tmp1928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1923, $tmp1924);
        $tmp1922 = $tmp1928;
        panda$core$String* $tmp1930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1922, &$s1929);
        $tmp1921 = $tmp1930;
        $tmp1920 = $tmp1921;
        $returnValue1916 = $tmp1920;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1920));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1921));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1922));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1924));
        return $returnValue1916;
    }
    }
    if (false) goto $l1932; else goto $l1933;
    $l1933:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1934, (panda$core$Int64) { 802 }, &$s1935);
    abort();
    $l1932:;
    abort();
}
panda$collections$ListView* org$pandalanguage$pandac$pandadoc$Markdown$tokenizeHTML$panda$core$String$R$panda$collections$ListView$LTorg$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$GT(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$String* p_text) {
    panda$collections$Array* tokens1939 = NULL;
    panda$collections$Array* $tmp1940;
    panda$collections$Array* $tmp1941;
    panda$core$String* nestedTags1943 = NULL;
    panda$core$String* $tmp1944;
    panda$core$String* $tmp1945;
    panda$core$Int64 $tmp1946;
    panda$core$RegularExpression* p1948 = NULL;
    panda$core$RegularExpression* $tmp1949;
    panda$core$RegularExpression* $tmp1950;
    panda$core$String* $tmp1952;
    panda$core$Int64 $tmp1955;
    panda$core$Matcher* m1956 = NULL;
    panda$core$Matcher* $tmp1957;
    panda$core$Matcher* $tmp1958;
    panda$core$String$Index lastPos1960;
    panda$core$Comparable* $tmp1966;
    panda$core$Comparable* $tmp1968;
    panda$core$String$Index $tmp1969;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1975;
    panda$core$Int64 $tmp1977;
    panda$core$String* $tmp1978;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1979;
    panda$core$String$Index $tmp1980;
    panda$core$Bit $tmp1981;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1983;
    panda$core$Int64 $tmp1985;
    panda$core$String* $tmp1986;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1987;
    panda$core$String$Index $tmp1988;
    panda$core$String$Index $tmp1989;
    panda$core$Bit $tmp1990;
    panda$core$String$Index $tmp1992;
    panda$core$Comparable* $tmp1993;
    panda$core$Comparable* $tmp1995;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp2002;
    panda$core$Int64 $tmp2004;
    panda$core$String* $tmp2005;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp2006;
    panda$core$Bit $tmp2008;
    panda$collections$ListView* $returnValue2010;
    panda$collections$ListView* $tmp2011;
    int $tmp1938;
    {
        panda$collections$Array* $tmp1942 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1942);
        $tmp1941 = $tmp1942;
        $tmp1940 = $tmp1941;
        tokens1939 = $tmp1940;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1940));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1941));
        panda$core$Int64$init$builtin_int64(&$tmp1946, 6);
        panda$core$String* $tmp1947 = org$pandalanguage$pandac$pandadoc$Markdown$nestedTagsRegex$panda$core$Int64$R$panda$core$String($tmp1946);
        $tmp1945 = $tmp1947;
        $tmp1944 = $tmp1945;
        nestedTags1943 = $tmp1944;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1944));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1945));
        panda$core$RegularExpression* $tmp1951 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$String* $tmp1954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1953, nestedTags1943);
        $tmp1952 = $tmp1954;
        panda$core$Int64$init$builtin_int64(&$tmp1955, 2);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1951, $tmp1952, $tmp1955);
        $tmp1950 = $tmp1951;
        $tmp1949 = $tmp1950;
        p1948 = $tmp1949;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1949));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1950));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1952));
        panda$core$Matcher* $tmp1959 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p1948, p_text);
        $tmp1958 = $tmp1959;
        $tmp1957 = $tmp1958;
        m1956 = $tmp1957;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1957));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1958));
        panda$core$String$Index $tmp1961 = panda$core$String$start$R$panda$core$String$Index(p_text);
        lastPos1960 = $tmp1961;
        $l1962:;
        panda$core$Bit $tmp1965 = panda$core$Matcher$find$R$panda$core$Bit(m1956);
        bool $tmp1964 = $tmp1965.value;
        if (!$tmp1964) goto $l1963;
        {
            panda$core$String$Index$wrapper* $tmp1967;
            $tmp1967 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
            $tmp1967->value = lastPos1960;
            $tmp1966 = ((panda$core$Comparable*) $tmp1967);
            panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1969, m1956);
            panda$core$String$Index$wrapper* $tmp1970;
            $tmp1970 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
            $tmp1970->value = $tmp1969;
            $tmp1968 = ((panda$core$Comparable*) $tmp1970);
            ITable* $tmp1971 = $tmp1966->$class->itable;
            while ($tmp1971->$class != (panda$core$Class*) &panda$core$Comparable$class) {
                $tmp1971 = $tmp1971->next;
            }
            $fn1973 $tmp1972 = $tmp1971->methods[1];
            panda$core$Bit $tmp1974 = $tmp1972($tmp1966, $tmp1968);
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1968));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1966));
            if ($tmp1974.value) {
            {
                org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1976 = (org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class);
                panda$core$Int64$init$builtin_int64(&$tmp1977, 1);
                panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1980, m1956);
                panda$core$Bit$init$builtin_bit(&$tmp1981, false);
                panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1979, lastPos1960, $tmp1980, $tmp1981);
                panda$core$String* $tmp1982 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(p_text, $tmp1979);
                $tmp1978 = $tmp1982;
                org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String($tmp1976, $tmp1977, $tmp1978);
                $tmp1975 = $tmp1976;
                panda$collections$Array$add$panda$collections$Array$T(tokens1939, ((panda$core$Object*) $tmp1975));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1975));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1978));
            }
            }
            org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1984 = (org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class);
            panda$core$Int64$init$builtin_int64(&$tmp1985, 0);
            panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1988, m1956);
            panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1989, m1956);
            panda$core$Bit$init$builtin_bit(&$tmp1990, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1987, $tmp1988, $tmp1989, $tmp1990);
            panda$core$String* $tmp1991 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(p_text, $tmp1987);
            $tmp1986 = $tmp1991;
            org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String($tmp1984, $tmp1985, $tmp1986);
            $tmp1983 = $tmp1984;
            panda$collections$Array$add$panda$collections$Array$T(tokens1939, ((panda$core$Object*) $tmp1983));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1983));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1986));
            panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1992, m1956);
            lastPos1960 = $tmp1992;
        }
        goto $l1962;
        $l1963:;
        panda$core$String$Index$wrapper* $tmp1994;
        $tmp1994 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
        $tmp1994->value = lastPos1960;
        $tmp1993 = ((panda$core$Comparable*) $tmp1994);
        panda$core$String$Index $tmp1996 = panda$core$String$end$R$panda$core$String$Index(p_text);
        panda$core$String$Index$wrapper* $tmp1997;
        $tmp1997 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
        $tmp1997->value = $tmp1996;
        $tmp1995 = ((panda$core$Comparable*) $tmp1997);
        ITable* $tmp1998 = $tmp1993->$class->itable;
        while ($tmp1998->$class != (panda$core$Class*) &panda$core$Comparable$class) {
            $tmp1998 = $tmp1998->next;
        }
        $fn2000 $tmp1999 = $tmp1998->methods[1];
        panda$core$Bit $tmp2001 = $tmp1999($tmp1993, $tmp1995);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1995));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1993));
        if ($tmp2001.value) {
        {
            org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp2003 = (org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class);
            panda$core$Int64$init$builtin_int64(&$tmp2004, 1);
            panda$core$String$Index $tmp2007 = panda$core$String$end$R$panda$core$String$Index(p_text);
            panda$core$Bit$init$builtin_bit(&$tmp2008, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp2006, lastPos1960, $tmp2007, $tmp2008);
            panda$core$String* $tmp2009 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(p_text, $tmp2006);
            $tmp2005 = $tmp2009;
            org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String($tmp2003, $tmp2004, $tmp2005);
            $tmp2002 = $tmp2003;
            panda$collections$Array$add$panda$collections$Array$T(tokens1939, ((panda$core$Object*) $tmp2002));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2002));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2005));
        }
        }
        $tmp2011 = ((panda$collections$ListView*) tokens1939);
        $returnValue2010 = $tmp2011;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2011));
        $tmp1938 = 0;
        goto $l1936;
        $l2012:;
        return $returnValue2010;
    }
    $l1936:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) m1956));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) p1948));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) nestedTags1943));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) tokens1939));
    tokens1939 = NULL;
    nestedTags1943 = NULL;
    p1948 = NULL;
    m1956 = NULL;
    switch ($tmp1938) {
        case 0: goto $l2012;
    }
    $l2014:;
    if (false) goto $l2015; else goto $l2016;
    $l2016:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2017, (panda$core$Int64) { 811 }, &$s2018);
    abort();
    $l2015:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$escapeSpecialCharsWithinTagAttributes$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$collections$ListView* tokens2022 = NULL;
    panda$collections$ListView* $tmp2023;
    panda$collections$ListView* $tmp2024;
    panda$core$String* $tmp2025;
    panda$collections$Iterator* Iter$852$92032 = NULL;
    panda$collections$Iterator* $tmp2033;
    panda$collections$Iterator* $tmp2034;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* token2050 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp2051;
    panda$core$Object* $tmp2052;
    panda$core$String* value2057 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $match$854_132061 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp2062;
    panda$core$Int64 $tmp2063;
    panda$core$String* text2065 = NULL;
    panda$core$String* $tmp2067;
    panda$core$String* $tmp2068;
    panda$core$String* $tmp2069;
    panda$core$String* $tmp2070;
    panda$core$String* $tmp2071;
    panda$core$String* $tmp2073;
    panda$core$String* $tmp2078;
    panda$core$String* $tmp2079;
    panda$core$String* $tmp2080;
    panda$core$String* $tmp2082;
    panda$core$String* $tmp2087;
    panda$core$String* $tmp2088;
    panda$core$String* $tmp2089;
    panda$core$String* $tmp2091;
    panda$core$String* $tmp2096;
    panda$core$String* $tmp2097;
    panda$core$String* $tmp2098;
    panda$core$String* $tmp2100;
    panda$core$Int64 $tmp2105;
    panda$core$String* text2107 = NULL;
    panda$core$String* $tmp2109;
    panda$core$String* $tmp2110;
    int $tmp2021;
    {
        panda$core$String* $tmp2026 = panda$core$MutableString$convert$R$panda$core$String(p_text);
        $tmp2025 = $tmp2026;
        panda$collections$ListView* $tmp2028 = (($fn2027) self->$class->vtable[23])(self, $tmp2025);
        $tmp2024 = $tmp2028;
        $tmp2023 = $tmp2024;
        tokens2022 = $tmp2023;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2023));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2024));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2025));
        panda$core$MutableString$clear(p_text);
        {
            int $tmp2031;
            {
                ITable* $tmp2035 = ((panda$collections$Iterable*) tokens2022)->$class->itable;
                while ($tmp2035->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2035 = $tmp2035->next;
                }
                $fn2037 $tmp2036 = $tmp2035->methods[0];
                panda$collections$Iterator* $tmp2038 = $tmp2036(((panda$collections$Iterable*) tokens2022));
                $tmp2034 = $tmp2038;
                $tmp2033 = $tmp2034;
                Iter$852$92032 = $tmp2033;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2033));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2034));
                $l2039:;
                ITable* $tmp2042 = Iter$852$92032->$class->itable;
                while ($tmp2042->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2042 = $tmp2042->next;
                }
                $fn2044 $tmp2043 = $tmp2042->methods[0];
                panda$core$Bit $tmp2045 = $tmp2043(Iter$852$92032);
                panda$core$Bit $tmp2046 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2045);
                bool $tmp2041 = $tmp2046.value;
                if (!$tmp2041) goto $l2040;
                {
                    int $tmp2049;
                    {
                        ITable* $tmp2053 = Iter$852$92032->$class->itable;
                        while ($tmp2053->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2053 = $tmp2053->next;
                        }
                        $fn2055 $tmp2054 = $tmp2053->methods[1];
                        panda$core$Object* $tmp2056 = $tmp2054(Iter$852$92032);
                        $tmp2052 = $tmp2056;
                        $tmp2051 = ((org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) $tmp2052);
                        token2050 = $tmp2051;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2051));
                        panda$core$Panda$unref$panda$core$Object$Q($tmp2052);
                        memset(&value2057, 0, sizeof(value2057));
                        int $tmp2060;
                        {
                            $tmp2062 = token2050;
                            $match$854_132061 = $tmp2062;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2062));
                            panda$core$Int64$init$builtin_int64(&$tmp2063, 0);
                            panda$core$Bit $tmp2064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$854_132061->$rawValue, $tmp2063);
                            if ($tmp2064.value) {
                            {
                                panda$core$String** $tmp2066 = ((panda$core$String**) ((char*) $match$854_132061->$data + 0));
                                text2065 = *$tmp2066;
                                {
                                    $tmp2067 = value2057;
                                    $tmp2068 = text2065;
                                    value2057 = $tmp2068;
                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2068));
                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2067));
                                }
                                {
                                    $tmp2069 = value2057;
                                    panda$core$String* $tmp2076 = (($fn2075) self->charProtector->$class->vtable[2])(self->charProtector, &$s2074);
                                    $tmp2073 = $tmp2076;
                                    panda$core$String* $tmp2077 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(value2057, &$s2072, $tmp2073);
                                    $tmp2071 = $tmp2077;
                                    $tmp2070 = $tmp2071;
                                    value2057 = $tmp2070;
                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2070));
                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2071));
                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2073));
                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2069));
                                }
                                {
                                    $tmp2078 = value2057;
                                    panda$core$String* $tmp2085 = (($fn2084) self->charProtector->$class->vtable[2])(self->charProtector, &$s2083);
                                    $tmp2082 = $tmp2085;
                                    panda$core$String* $tmp2086 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(value2057, &$s2081, $tmp2082);
                                    $tmp2080 = $tmp2086;
                                    $tmp2079 = $tmp2080;
                                    value2057 = $tmp2079;
                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2079));
                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2080));
                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2082));
                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2078));
                                }
                                {
                                    $tmp2087 = value2057;
                                    panda$core$String* $tmp2094 = (($fn2093) self->charProtector->$class->vtable[2])(self->charProtector, &$s2092);
                                    $tmp2091 = $tmp2094;
                                    panda$core$String* $tmp2095 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(value2057, &$s2090, $tmp2091);
                                    $tmp2089 = $tmp2095;
                                    $tmp2088 = $tmp2089;
                                    value2057 = $tmp2088;
                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2088));
                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2089));
                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2091));
                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2087));
                                }
                                {
                                    $tmp2096 = value2057;
                                    panda$core$String* $tmp2103 = (($fn2102) self->charProtector->$class->vtable[2])(self->charProtector, &$s2101);
                                    $tmp2100 = $tmp2103;
                                    panda$core$String* $tmp2104 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(value2057, &$s2099, $tmp2100);
                                    $tmp2098 = $tmp2104;
                                    $tmp2097 = $tmp2098;
                                    value2057 = $tmp2097;
                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2097));
                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2098));
                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2100));
                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2096));
                                }
                            }
                            }
                            else {
                            panda$core$Int64$init$builtin_int64(&$tmp2105, 1);
                            panda$core$Bit $tmp2106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$854_132061->$rawValue, $tmp2105);
                            if ($tmp2106.value) {
                            {
                                panda$core$String** $tmp2108 = ((panda$core$String**) ((char*) $match$854_132061->$data + 0));
                                text2107 = *$tmp2108;
                                {
                                    $tmp2109 = value2057;
                                    $tmp2110 = text2107;
                                    value2057 = $tmp2110;
                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2110));
                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2109));
                                }
                            }
                            }
                            }
                        }
                        $tmp2060 = -1;
                        goto $l2058;
                        $l2058:;
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2062));
                        switch ($tmp2060) {
                            case -1: goto $l2111;
                        }
                        $l2111:;
                        panda$core$MutableString$append$panda$core$String(p_text, value2057);
                    }
                    $tmp2049 = -1;
                    goto $l2047;
                    $l2047:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) value2057));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) token2050));
                    token2050 = NULL;
                    switch ($tmp2049) {
                        case -1: goto $l2112;
                    }
                    $l2112:;
                }
                goto $l2039;
                $l2040:;
            }
            $tmp2031 = -1;
            goto $l2029;
            $l2029:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$852$92032));
            Iter$852$92032 = NULL;
            switch ($tmp2031) {
                case -1: goto $l2113;
            }
            $l2113:;
        }
    }
    $tmp2021 = -1;
    goto $l2019;
    $l2019:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) tokens2022));
    tokens2022 = NULL;
    switch ($tmp2021) {
        case -1: goto $l2114;
    }
    $l2114:;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous25$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* replacementText2118 = NULL;
    panda$core$String* wholeMatch2119 = NULL;
    panda$core$String* $tmp2120;
    panda$core$Object* $tmp2121;
    panda$core$Int64 $tmp2122;
    panda$core$String* altText2127 = NULL;
    panda$core$String* $tmp2128;
    panda$core$Object* $tmp2129;
    panda$core$Int64 $tmp2130;
    panda$core$String* id2135 = NULL;
    panda$core$String* $tmp2136;
    panda$core$Object* $tmp2137;
    panda$core$Int64 $tmp2138;
    panda$core$String* $tmp2143;
    panda$core$Bit $tmp2150;
    panda$core$String* $tmp2151;
    panda$core$String* $tmp2152;
    org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* defn2153 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp2154;
    panda$core$Object* $tmp2155;
    panda$core$String* url2160 = NULL;
    panda$core$String* $tmp2161;
    panda$core$String* $tmp2162;
    panda$core$String* $tmp2163;
    panda$core$String* $tmp2164;
    panda$core$RegularExpression* $tmp2165;
    panda$core$String* $tmp2168;
    panda$core$String* $tmp2173;
    panda$core$String* $tmp2174;
    panda$core$String* $tmp2175;
    panda$core$RegularExpression* $tmp2176;
    panda$core$String* $tmp2179;
    panda$core$String* title2184 = NULL;
    panda$core$String* $tmp2185;
    panda$core$String* titleTag2186 = NULL;
    panda$core$String* $tmp2187;
    panda$core$String* $tmp2197;
    panda$core$String* $tmp2198;
    panda$core$String* $tmp2199;
    panda$core$RegularExpression* $tmp2200;
    panda$core$String* $tmp2203;
    panda$core$String* $tmp2208;
    panda$core$String* $tmp2209;
    panda$core$String* $tmp2210;
    panda$core$RegularExpression* $tmp2211;
    panda$core$String* $tmp2214;
    panda$core$String* $tmp2219;
    panda$core$String* $tmp2220;
    panda$core$String* $tmp2221;
    panda$core$String* $tmp2222;
    panda$core$String* $tmp2223;
    panda$core$String* $tmp2224;
    panda$core$String* $tmp2232;
    panda$core$String* $tmp2233;
    panda$core$String* $tmp2234;
    panda$core$String* $tmp2235;
    panda$core$String* $tmp2236;
    panda$core$String* $tmp2237;
    panda$core$String* $tmp2246;
    panda$core$String* $tmp2247;
    panda$core$String* $returnValue2248;
    panda$core$String* $tmp2249;
    int $tmp2117;
    {
        memset(&replacementText2118, 0, sizeof(replacementText2118));
        panda$core$Int64$init$builtin_int64(&$tmp2122, 1);
        ITable* $tmp2123 = p_groups->$class->itable;
        while ($tmp2123->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2123 = $tmp2123->next;
        }
        $fn2125 $tmp2124 = $tmp2123->methods[0];
        panda$core$Object* $tmp2126 = $tmp2124(p_groups, $tmp2122);
        $tmp2121 = $tmp2126;
        $tmp2120 = ((panda$core$String*) $tmp2121);
        wholeMatch2119 = $tmp2120;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2120));
        panda$core$Panda$unref$panda$core$Object$Q($tmp2121);
        panda$core$Int64$init$builtin_int64(&$tmp2130, 2);
        ITable* $tmp2131 = p_groups->$class->itable;
        while ($tmp2131->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2131 = $tmp2131->next;
        }
        $fn2133 $tmp2132 = $tmp2131->methods[0];
        panda$core$Object* $tmp2134 = $tmp2132(p_groups, $tmp2130);
        $tmp2129 = $tmp2134;
        $tmp2128 = ((panda$core$String*) $tmp2129);
        altText2127 = $tmp2128;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2128));
        panda$core$Panda$unref$panda$core$Object$Q($tmp2129);
        panda$core$Int64$init$builtin_int64(&$tmp2138, 3);
        ITable* $tmp2139 = p_groups->$class->itable;
        while ($tmp2139->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2139 = $tmp2139->next;
        }
        $fn2141 $tmp2140 = $tmp2139->methods[0];
        panda$core$Object* $tmp2142 = $tmp2140(p_groups, $tmp2138);
        $tmp2137 = $tmp2142;
        $tmp2136 = ((panda$core$String*) $tmp2137);
        id2135 = $tmp2136;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2136));
        panda$core$Panda$unref$panda$core$Object$Q($tmp2137);
        $tmp2143 = id2135;
        panda$core$Bit $tmp2147;
        if (((panda$core$Bit) { $tmp2143 != NULL }).value) goto $l2144; else goto $l2145;
        $l2144:;
        panda$core$Bit $tmp2149 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp2143, &$s2148);
        $tmp2147 = $tmp2149;
        goto $l2146;
        $l2145:;
        panda$core$Bit$init$builtin_bit(&$tmp2150, false);
        $tmp2147 = $tmp2150;
        goto $l2146;
        $l2146:;
        if ($tmp2147.value) {
        {
            {
                $tmp2151 = id2135;
                $tmp2152 = altText2127;
                id2135 = $tmp2152;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2152));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2151));
            }
        }
        }
        panda$core$Object* $tmp2156 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->linkDefinitions, ((panda$collections$Key*) id2135));
        $tmp2155 = $tmp2156;
        $tmp2154 = ((org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) $tmp2155);
        defn2153 = $tmp2154;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2154));
        panda$core$Panda$unref$panda$core$Object$Q($tmp2155);
        if (((panda$core$Bit) { defn2153 != NULL }).value) {
        {
            int $tmp2159;
            {
                $tmp2161 = defn2153->url;
                url2160 = $tmp2161;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2161));
                {
                    $tmp2162 = url2160;
                    panda$core$RegularExpression* $tmp2166 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                    panda$core$RegularExpression$init$panda$core$String($tmp2166, &$s2167);
                    $tmp2165 = $tmp2166;
                    panda$core$String* $tmp2171 = (($fn2170) self->charProtector->$class->vtable[2])(self->charProtector, &$s2169);
                    $tmp2168 = $tmp2171;
                    panda$core$String* $tmp2172 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(url2160, $tmp2165, $tmp2168);
                    $tmp2164 = $tmp2172;
                    $tmp2163 = $tmp2164;
                    url2160 = $tmp2163;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2163));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2164));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2168));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2165));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2162));
                }
                {
                    $tmp2173 = url2160;
                    panda$core$RegularExpression* $tmp2177 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                    panda$core$RegularExpression$init$panda$core$String($tmp2177, &$s2178);
                    $tmp2176 = $tmp2177;
                    panda$core$String* $tmp2182 = (($fn2181) self->charProtector->$class->vtable[2])(self->charProtector, &$s2180);
                    $tmp2179 = $tmp2182;
                    panda$core$String* $tmp2183 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(url2160, $tmp2176, $tmp2179);
                    $tmp2175 = $tmp2183;
                    $tmp2174 = $tmp2175;
                    url2160 = $tmp2174;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2174));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2175));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2179));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2176));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2173));
                }
                $tmp2185 = defn2153->title;
                title2184 = $tmp2185;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2185));
                $tmp2187 = &$s2188;
                titleTag2186 = $tmp2187;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2187));
                bool $tmp2189 = ((panda$core$Bit) { title2184 != NULL }).value;
                if (!$tmp2189) goto $l2190;
                ITable* $tmp2192 = ((panda$core$Equatable*) title2184)->$class->itable;
                while ($tmp2192->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                    $tmp2192 = $tmp2192->next;
                }
                $fn2194 $tmp2193 = $tmp2192->methods[1];
                panda$core$Bit $tmp2195 = $tmp2193(((panda$core$Equatable*) title2184), ((panda$core$Equatable*) &$s2191));
                $tmp2189 = $tmp2195.value;
                $l2190:;
                panda$core$Bit $tmp2196 = { $tmp2189 };
                if ($tmp2196.value) {
                {
                    {
                        $tmp2197 = title2184;
                        panda$core$RegularExpression* $tmp2201 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                        panda$core$RegularExpression$init$panda$core$String($tmp2201, &$s2202);
                        $tmp2200 = $tmp2201;
                        panda$core$String* $tmp2206 = (($fn2205) self->charProtector->$class->vtable[2])(self->charProtector, &$s2204);
                        $tmp2203 = $tmp2206;
                        panda$core$String* $tmp2207 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(title2184, $tmp2200, $tmp2203);
                        $tmp2199 = $tmp2207;
                        $tmp2198 = $tmp2199;
                        title2184 = $tmp2198;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2198));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2199));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2203));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2200));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2197));
                    }
                    {
                        $tmp2208 = title2184;
                        panda$core$RegularExpression* $tmp2212 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                        panda$core$RegularExpression$init$panda$core$String($tmp2212, &$s2213);
                        $tmp2211 = $tmp2212;
                        panda$core$String* $tmp2217 = (($fn2216) self->charProtector->$class->vtable[2])(self->charProtector, &$s2215);
                        $tmp2214 = $tmp2217;
                        panda$core$String* $tmp2218 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(title2184, $tmp2211, $tmp2214);
                        $tmp2210 = $tmp2218;
                        $tmp2209 = $tmp2210;
                        title2184 = $tmp2209;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2209));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2210));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2214));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2211));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2208));
                    }
                    {
                        $tmp2219 = titleTag2186;
                        panda$core$String* $tmp2226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2225, altText2127);
                        $tmp2224 = $tmp2226;
                        panda$core$String* $tmp2228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2224, &$s2227);
                        $tmp2223 = $tmp2228;
                        panda$core$String* $tmp2229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2223, title2184);
                        $tmp2222 = $tmp2229;
                        panda$core$String* $tmp2231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2222, &$s2230);
                        $tmp2221 = $tmp2231;
                        $tmp2220 = $tmp2221;
                        titleTag2186 = $tmp2220;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2220));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2221));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2222));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2223));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2224));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2219));
                    }
                }
                }
                {
                    $tmp2232 = replacementText2118;
                    panda$core$String* $tmp2239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2238, url2160);
                    $tmp2237 = $tmp2239;
                    panda$core$String* $tmp2241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2237, &$s2240);
                    $tmp2236 = $tmp2241;
                    panda$core$String* $tmp2242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2236, titleTag2186);
                    $tmp2235 = $tmp2242;
                    panda$core$String* $tmp2244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2235, &$s2243);
                    $tmp2234 = $tmp2244;
                    $tmp2233 = $tmp2234;
                    replacementText2118 = $tmp2233;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2233));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2234));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2235));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2236));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2237));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2232));
                }
            }
            $tmp2159 = -1;
            goto $l2157;
            $l2157:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) titleTag2186));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) title2184));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) url2160));
            url2160 = NULL;
            title2184 = NULL;
            titleTag2186 = NULL;
            switch ($tmp2159) {
                case -1: goto $l2245;
            }
            $l2245:;
        }
        }
        else {
        {
            {
                $tmp2246 = replacementText2118;
                $tmp2247 = wholeMatch2119;
                replacementText2118 = $tmp2247;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2247));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2246));
            }
        }
        }
        $tmp2249 = replacementText2118;
        $returnValue2248 = $tmp2249;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2249));
        $tmp2117 = 0;
        goto $l2115;
        $l2250:;
        return $returnValue2248;
    }
    $l2115:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) defn2153));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) id2135));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) altText2127));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) wholeMatch2119));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) replacementText2118));
    wholeMatch2119 = NULL;
    altText2127 = NULL;
    id2135 = NULL;
    defn2153 = NULL;
    switch ($tmp2117) {
        case 0: goto $l2250;
    }
    $l2252:;
    if (false) goto $l2253; else goto $l2254;
    $l2254:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2255, (panda$core$Int64) { 879 }, &$s2256);
    abort();
    $l2253:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim26$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar2260 = NULL;
    panda$core$Method* $tmp2261;
    panda$core$Method* $tmp2262;
    panda$core$Object* $tmp2264;
    panda$core$Object* $tmp2265;
    panda$core$Object* $returnValue2266;
    panda$core$Object* $tmp2267;
    panda$core$String* $tmp2268;
    panda$core$String* $tmp2269;
    int $tmp2259;
    {
        panda$core$Method* $tmp2263 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp2263, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp2262 = $tmp2263;
        $tmp2261 = $tmp2262;
        methodVar2260 = $tmp2261;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2261));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2262));
        {
            $tmp2264 = ((panda$core$MutableMethod*) methodVar2260)->target;
            $tmp2265 = self->target;
            ((panda$core$MutableMethod*) methodVar2260)->target = $tmp2265;
            panda$core$Panda$ref$panda$core$Object$Q($tmp2265);
            panda$core$Panda$unref$panda$core$Object$Q($tmp2264);
        }
        if (methodVar2260->target) {
            $tmp2269 = (($fn2270) methodVar2260->pointer)(methodVar2260->target, p_p0);
        } else {
            $tmp2269 = (($fn2271) methodVar2260->pointer)(p_p0);
        }
        $tmp2268 = $tmp2269;
        $tmp2267 = ((panda$core$Object*) $tmp2268);
        $returnValue2266 = $tmp2267;
        panda$core$Panda$ref$panda$core$Object$Q($tmp2267);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2268));
        $tmp2259 = 0;
        goto $l2257;
        $l2272:;
        return $returnValue2266;
    }
    $l2257:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) methodVar2260));
    methodVar2260 = NULL;
    switch ($tmp2259) {
        case 0: goto $l2272;
    }
    $l2274:;
    if (false) goto $l2275; else goto $l2276;
    $l2276:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2277, (panda$core$Int64) { 879 }, &$s2278);
    abort();
    $l2275:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doImages$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$core$RegularExpression* $tmp2282;
    panda$core$RegularExpression* $tmp2286;
    panda$core$RegularExpression* imageLink2290 = NULL;
    panda$core$RegularExpression* $tmp2291;
    panda$core$RegularExpression* $tmp2292;
    int $tmp2281;
    {
        panda$core$RegularExpression* $tmp2283 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp2283, &$s2284);
        $tmp2282 = $tmp2283;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_text, $tmp2282, &$s2285);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2282));
        panda$core$RegularExpression* $tmp2287 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp2287, &$s2288);
        $tmp2286 = $tmp2287;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_text, $tmp2286, &$s2289);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2286));
        panda$core$RegularExpression* $tmp2293 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp2293, &$s2294);
        $tmp2292 = $tmp2293;
        $tmp2291 = $tmp2292;
        imageLink2290 = $tmp2291;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2291));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2292));
        panda$core$MutableMethod* $tmp2295 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp2296 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2296, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous25$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2295, (panda$core$Int8*) &panda$core$MutableMethod$$shim26$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp2296)));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_text, imageLink2290, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp2295)));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2295));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2296));
    }
    $tmp2281 = -1;
    goto $l2279;
    $l2279:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) imageLink2290));
    imageLink2290 = NULL;
    switch ($tmp2281) {
        case -1: goto $l2297;
    }
    $l2297:;
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous27$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* replacementText2301 = NULL;
    panda$core$String* wholeMatch2302 = NULL;
    panda$core$String* $tmp2303;
    panda$core$Object* $tmp2304;
    panda$core$Int64 $tmp2305;
    panda$core$String* linkText2310 = NULL;
    panda$core$String* $tmp2311;
    panda$core$Object* $tmp2312;
    panda$core$Int64 $tmp2313;
    panda$core$String* id2318 = NULL;
    panda$core$String* $tmp2319;
    panda$core$Object* $tmp2320;
    panda$core$Int64 $tmp2321;
    panda$core$String* $tmp2326;
    panda$core$Bit $tmp2333;
    panda$core$String* $tmp2334;
    panda$core$String* $tmp2335;
    org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* defn2336 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp2337;
    panda$core$Object* $tmp2338;
    panda$core$String* url2343 = NULL;
    panda$core$String* $tmp2344;
    panda$core$String* $tmp2345;
    panda$core$String* $tmp2346;
    panda$core$String* $tmp2347;
    panda$core$String* $tmp2349;
    panda$core$String* $tmp2354;
    panda$core$String* $tmp2355;
    panda$core$String* $tmp2356;
    panda$core$String* $tmp2358;
    panda$core$String* title2363 = NULL;
    panda$core$String* $tmp2364;
    panda$core$String* titleTag2365 = NULL;
    panda$core$String* $tmp2366;
    panda$core$String* $tmp2376;
    panda$core$String* $tmp2377;
    panda$core$String* $tmp2378;
    panda$core$String* $tmp2380;
    panda$core$String* $tmp2385;
    panda$core$String* $tmp2386;
    panda$core$String* $tmp2387;
    panda$core$String* $tmp2389;
    panda$core$String* $tmp2394;
    panda$core$String* $tmp2395;
    panda$core$String* $tmp2396;
    panda$core$String* $tmp2397;
    panda$core$String* $tmp2402;
    panda$core$String* $tmp2403;
    panda$core$String* $tmp2404;
    panda$core$String* $tmp2405;
    panda$core$String* $tmp2406;
    panda$core$String* $tmp2407;
    panda$core$String* $tmp2408;
    panda$core$String* $tmp2409;
    panda$core$String* $tmp2421;
    panda$core$String* $tmp2422;
    panda$core$Object* $returnValue2423;
    panda$core$Object* $tmp2424;
    int $tmp2300;
    {
        memset(&replacementText2301, 0, sizeof(replacementText2301));
        panda$core$Int64$init$builtin_int64(&$tmp2305, 1);
        ITable* $tmp2306 = p_groups->$class->itable;
        while ($tmp2306->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2306 = $tmp2306->next;
        }
        $fn2308 $tmp2307 = $tmp2306->methods[0];
        panda$core$Object* $tmp2309 = $tmp2307(p_groups, $tmp2305);
        $tmp2304 = $tmp2309;
        $tmp2303 = ((panda$core$String*) $tmp2304);
        wholeMatch2302 = $tmp2303;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2303));
        panda$core$Panda$unref$panda$core$Object$Q($tmp2304);
        panda$core$Int64$init$builtin_int64(&$tmp2313, 2);
        ITable* $tmp2314 = p_groups->$class->itable;
        while ($tmp2314->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2314 = $tmp2314->next;
        }
        $fn2316 $tmp2315 = $tmp2314->methods[0];
        panda$core$Object* $tmp2317 = $tmp2315(p_groups, $tmp2313);
        $tmp2312 = $tmp2317;
        $tmp2311 = ((panda$core$String*) $tmp2312);
        linkText2310 = $tmp2311;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2311));
        panda$core$Panda$unref$panda$core$Object$Q($tmp2312);
        panda$core$Int64$init$builtin_int64(&$tmp2321, 3);
        ITable* $tmp2322 = p_groups->$class->itable;
        while ($tmp2322->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2322 = $tmp2322->next;
        }
        $fn2324 $tmp2323 = $tmp2322->methods[0];
        panda$core$Object* $tmp2325 = $tmp2323(p_groups, $tmp2321);
        $tmp2320 = $tmp2325;
        $tmp2319 = ((panda$core$String*) $tmp2320);
        id2318 = $tmp2319;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2319));
        panda$core$Panda$unref$panda$core$Object$Q($tmp2320);
        $tmp2326 = id2318;
        panda$core$Bit $tmp2330;
        if (((panda$core$Bit) { $tmp2326 != NULL }).value) goto $l2327; else goto $l2328;
        $l2327:;
        panda$core$Bit $tmp2332 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp2326, &$s2331);
        $tmp2330 = $tmp2332;
        goto $l2329;
        $l2328:;
        panda$core$Bit$init$builtin_bit(&$tmp2333, false);
        $tmp2330 = $tmp2333;
        goto $l2329;
        $l2329:;
        if ($tmp2330.value) {
        {
            {
                $tmp2334 = id2318;
                $tmp2335 = linkText2310;
                id2318 = $tmp2335;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2335));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2334));
            }
        }
        }
        panda$core$Object* $tmp2339 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->linkDefinitions, ((panda$collections$Key*) id2318));
        $tmp2338 = $tmp2339;
        $tmp2337 = ((org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) $tmp2338);
        defn2336 = $tmp2337;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2337));
        panda$core$Panda$unref$panda$core$Object$Q($tmp2338);
        if (((panda$core$Bit) { defn2336 != NULL }).value) {
        {
            int $tmp2342;
            {
                $tmp2344 = defn2336->url;
                url2343 = $tmp2344;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2344));
                {
                    $tmp2345 = url2343;
                    panda$core$String* $tmp2352 = (($fn2351) self->charProtector->$class->vtable[2])(self->charProtector, &$s2350);
                    $tmp2349 = $tmp2352;
                    panda$core$String* $tmp2353 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(url2343, &$s2348, $tmp2349);
                    $tmp2347 = $tmp2353;
                    $tmp2346 = $tmp2347;
                    url2343 = $tmp2346;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2346));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2347));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2349));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2345));
                }
                {
                    $tmp2354 = url2343;
                    panda$core$String* $tmp2361 = (($fn2360) self->charProtector->$class->vtable[2])(self->charProtector, &$s2359);
                    $tmp2358 = $tmp2361;
                    panda$core$String* $tmp2362 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(url2343, &$s2357, $tmp2358);
                    $tmp2356 = $tmp2362;
                    $tmp2355 = $tmp2356;
                    url2343 = $tmp2355;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2355));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2356));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2358));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2354));
                }
                $tmp2364 = defn2336->title;
                title2363 = $tmp2364;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2364));
                $tmp2366 = &$s2367;
                titleTag2365 = $tmp2366;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2366));
                bool $tmp2368 = ((panda$core$Bit) { title2363 != NULL }).value;
                if (!$tmp2368) goto $l2369;
                ITable* $tmp2371 = ((panda$core$Equatable*) title2363)->$class->itable;
                while ($tmp2371->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                    $tmp2371 = $tmp2371->next;
                }
                $fn2373 $tmp2372 = $tmp2371->methods[1];
                panda$core$Bit $tmp2374 = $tmp2372(((panda$core$Equatable*) title2363), ((panda$core$Equatable*) &$s2370));
                $tmp2368 = $tmp2374.value;
                $l2369:;
                panda$core$Bit $tmp2375 = { $tmp2368 };
                if ($tmp2375.value) {
                {
                    {
                        $tmp2376 = title2363;
                        panda$core$String* $tmp2383 = (($fn2382) self->charProtector->$class->vtable[2])(self->charProtector, &$s2381);
                        $tmp2380 = $tmp2383;
                        panda$core$String* $tmp2384 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2363, &$s2379, $tmp2380);
                        $tmp2378 = $tmp2384;
                        $tmp2377 = $tmp2378;
                        title2363 = $tmp2377;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2377));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2378));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2380));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2376));
                    }
                    {
                        $tmp2385 = title2363;
                        panda$core$String* $tmp2392 = (($fn2391) self->charProtector->$class->vtable[2])(self->charProtector, &$s2390);
                        $tmp2389 = $tmp2392;
                        panda$core$String* $tmp2393 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2363, &$s2388, $tmp2389);
                        $tmp2387 = $tmp2393;
                        $tmp2386 = $tmp2387;
                        title2363 = $tmp2386;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2386));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2387));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2389));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2385));
                    }
                    {
                        $tmp2394 = titleTag2365;
                        panda$core$String* $tmp2399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2398, title2363);
                        $tmp2397 = $tmp2399;
                        panda$core$String* $tmp2401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2397, &$s2400);
                        $tmp2396 = $tmp2401;
                        $tmp2395 = $tmp2396;
                        titleTag2365 = $tmp2395;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2395));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2396));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2397));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2394));
                    }
                }
                }
                {
                    $tmp2402 = replacementText2301;
                    panda$core$String* $tmp2411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2410, url2343);
                    $tmp2409 = $tmp2411;
                    panda$core$String* $tmp2413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2409, &$s2412);
                    $tmp2408 = $tmp2413;
                    panda$core$String* $tmp2414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2408, titleTag2365);
                    $tmp2407 = $tmp2414;
                    panda$core$String* $tmp2416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2407, &$s2415);
                    $tmp2406 = $tmp2416;
                    panda$core$String* $tmp2417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2406, linkText2310);
                    $tmp2405 = $tmp2417;
                    panda$core$String* $tmp2419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2405, &$s2418);
                    $tmp2404 = $tmp2419;
                    $tmp2403 = $tmp2404;
                    replacementText2301 = $tmp2403;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2403));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2404));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2405));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2406));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2407));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2408));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2409));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2402));
                }
            }
            $tmp2342 = -1;
            goto $l2340;
            $l2340:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) titleTag2365));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) title2363));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) url2343));
            url2343 = NULL;
            title2363 = NULL;
            titleTag2365 = NULL;
            switch ($tmp2342) {
                case -1: goto $l2420;
            }
            $l2420:;
        }
        }
        else {
        {
            {
                $tmp2421 = replacementText2301;
                $tmp2422 = wholeMatch2302;
                replacementText2301 = $tmp2422;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2422));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2421));
            }
        }
        }
        $tmp2424 = ((panda$core$Object*) replacementText2301);
        $returnValue2423 = $tmp2424;
        panda$core$Panda$ref$panda$core$Object$Q($tmp2424);
        $tmp2300 = 0;
        goto $l2298;
        $l2425:;
        return $returnValue2423;
    }
    $l2298:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) defn2336));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) id2318));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) linkText2310));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) wholeMatch2302));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) replacementText2301));
    wholeMatch2302 = NULL;
    linkText2310 = NULL;
    id2318 = NULL;
    defn2336 = NULL;
    switch ($tmp2300) {
        case 0: goto $l2425;
    }
    $l2427:;
    if (false) goto $l2428; else goto $l2429;
    $l2429:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2430, (panda$core$Int64) { 917 }, &$s2431);
    abort();
    $l2428:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous28$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* linkText2435 = NULL;
    panda$core$String* $tmp2436;
    panda$core$Object* $tmp2437;
    panda$core$Int64 $tmp2438;
    panda$core$String* url2443 = NULL;
    panda$core$String* $tmp2444;
    panda$core$Object* $tmp2445;
    panda$core$Int64 $tmp2446;
    panda$core$String* title2451 = NULL;
    panda$core$String* $tmp2452;
    panda$core$Object* $tmp2453;
    panda$core$Int64 $tmp2454;
    panda$core$String* newURL2462 = NULL;
    panda$core$String* $tmp2463;
    panda$core$String* $tmp2464;
    panda$core$String* $tmp2465;
    panda$io$OutputStream* $tmp2468;
    panda$core$String* $tmp2470;
    panda$core$String* $tmp2471;
    panda$core$String* $tmp2477;
    panda$core$String* $tmp2478;
    panda$core$String* $tmp2480;
    panda$core$String* $tmp2481;
    panda$core$String* $tmp2483;
    panda$core$String* $tmp2484;
    panda$core$String* $tmp2486;
    panda$core$String* $tmp2487;
    panda$core$String* $tmp2488;
    panda$core$RegularExpression* $tmp2489;
    panda$core$String* $tmp2492;
    panda$core$String* $tmp2497;
    panda$core$String* $tmp2498;
    panda$core$String* $tmp2499;
    panda$core$RegularExpression* $tmp2500;
    panda$core$String* $tmp2503;
    panda$core$MutableString* result2508 = NULL;
    panda$core$MutableString* $tmp2509;
    panda$core$MutableString* $tmp2510;
    panda$core$String* $tmp2512;
    panda$core$String* $tmp2513;
    panda$core$String* $tmp2518;
    panda$core$String* $tmp2519;
    panda$core$String* $tmp2520;
    panda$core$String* $tmp2522;
    panda$core$String* $tmp2527;
    panda$core$String* $tmp2528;
    panda$core$String* $tmp2529;
    panda$core$String* $tmp2531;
    panda$core$String* $tmp2536;
    panda$core$String* $tmp2537;
    panda$core$String* $tmp2538;
    panda$core$Char8 $tmp2543;
    panda$core$UInt8 $tmp2544;
    panda$core$String* $tmp2545;
    panda$core$String* $tmp2546;
    panda$core$String* $returnValue2552;
    panda$core$String* $tmp2553;
    panda$core$String* $tmp2554;
    int $tmp2434;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2438, 2);
        ITable* $tmp2439 = p_groups->$class->itable;
        while ($tmp2439->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2439 = $tmp2439->next;
        }
        $fn2441 $tmp2440 = $tmp2439->methods[0];
        panda$core$Object* $tmp2442 = $tmp2440(p_groups, $tmp2438);
        $tmp2437 = $tmp2442;
        $tmp2436 = ((panda$core$String*) $tmp2437);
        linkText2435 = $tmp2436;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2436));
        panda$core$Panda$unref$panda$core$Object$Q($tmp2437);
        panda$core$Int64$init$builtin_int64(&$tmp2446, 3);
        ITable* $tmp2447 = p_groups->$class->itable;
        while ($tmp2447->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2447 = $tmp2447->next;
        }
        $fn2449 $tmp2448 = $tmp2447->methods[0];
        panda$core$Object* $tmp2450 = $tmp2448(p_groups, $tmp2446);
        $tmp2445 = $tmp2450;
        $tmp2444 = ((panda$core$String*) $tmp2445);
        url2443 = $tmp2444;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2444));
        panda$core$Panda$unref$panda$core$Object$Q($tmp2445);
        panda$core$Int64$init$builtin_int64(&$tmp2454, 6);
        ITable* $tmp2455 = p_groups->$class->itable;
        while ($tmp2455->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2455 = $tmp2455->next;
        }
        $fn2457 $tmp2456 = $tmp2455->methods[0];
        panda$core$Object* $tmp2458 = $tmp2456(p_groups, $tmp2454);
        $tmp2453 = $tmp2458;
        $tmp2452 = ((panda$core$String*) $tmp2453);
        title2451 = $tmp2452;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2452));
        panda$core$Panda$unref$panda$core$Object$Q($tmp2453);
        if (((panda$core$Bit) { self->linkResolver != NULL }).value) {
        {
            int $tmp2461;
            {
                if (self->linkResolver->target) {
                    $tmp2465 = (($fn2466) self->linkResolver->pointer)(self->linkResolver->target, url2443);
                } else {
                    $tmp2465 = (($fn2467) self->linkResolver->pointer)(url2443);
                }
                $tmp2464 = $tmp2465;
                $tmp2463 = $tmp2464;
                newURL2462 = $tmp2463;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2463));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2464));
                if (((panda$core$Bit) { newURL2462 == NULL }).value) {
                {
                    panda$io$OutputStream* $tmp2469 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                    $tmp2468 = $tmp2469;
                    panda$core$String* $tmp2473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2472, url2443);
                    $tmp2471 = $tmp2473;
                    panda$core$String* $tmp2475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2471, &$s2474);
                    $tmp2470 = $tmp2475;
                    (($fn2476) $tmp2468->$class->vtable[19])($tmp2468, $tmp2470);
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2470));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2471));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2468));
                    {
                        $tmp2477 = newURL2462;
                        $tmp2478 = &$s2479;
                        newURL2462 = $tmp2478;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2478));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2477));
                    }
                }
                }
                {
                    $tmp2480 = url2443;
                    $tmp2481 = newURL2462;
                    url2443 = $tmp2481;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2481));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2480));
                }
            }
            $tmp2461 = -1;
            goto $l2459;
            $l2459:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) newURL2462));
            newURL2462 = NULL;
            switch ($tmp2461) {
                case -1: goto $l2482;
            }
            $l2482:;
        }
        }
        else {
        {
            {
                $tmp2483 = url2443;
                $tmp2484 = &$s2485;
                url2443 = $tmp2484;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2484));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2483));
            }
        }
        }
        {
            $tmp2486 = url2443;
            panda$core$RegularExpression* $tmp2490 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
            panda$core$RegularExpression$init$panda$core$String($tmp2490, &$s2491);
            $tmp2489 = $tmp2490;
            panda$core$String* $tmp2495 = (($fn2494) self->charProtector->$class->vtable[2])(self->charProtector, &$s2493);
            $tmp2492 = $tmp2495;
            panda$core$String* $tmp2496 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(url2443, $tmp2489, $tmp2492);
            $tmp2488 = $tmp2496;
            $tmp2487 = $tmp2488;
            url2443 = $tmp2487;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2487));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2488));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2492));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2489));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2486));
        }
        {
            $tmp2497 = url2443;
            panda$core$RegularExpression* $tmp2501 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
            panda$core$RegularExpression$init$panda$core$String($tmp2501, &$s2502);
            $tmp2500 = $tmp2501;
            panda$core$String* $tmp2506 = (($fn2505) self->charProtector->$class->vtable[2])(self->charProtector, &$s2504);
            $tmp2503 = $tmp2506;
            panda$core$String* $tmp2507 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(url2443, $tmp2500, $tmp2503);
            $tmp2499 = $tmp2507;
            $tmp2498 = $tmp2499;
            url2443 = $tmp2498;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2498));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2499));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2503));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2500));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2497));
        }
        panda$core$MutableString* $tmp2511 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp2511);
        $tmp2510 = $tmp2511;
        $tmp2509 = $tmp2510;
        result2508 = $tmp2509;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2509));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2510));
        panda$core$String* $tmp2515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2514, url2443);
        $tmp2513 = $tmp2515;
        panda$core$String* $tmp2517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2513, &$s2516);
        $tmp2512 = $tmp2517;
        panda$core$MutableString$append$panda$core$String(result2508, $tmp2512);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2512));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2513));
        if (((panda$core$Bit) { title2451 != NULL }).value) {
        {
            {
                $tmp2518 = title2451;
                panda$core$String* $tmp2525 = (($fn2524) self->charProtector->$class->vtable[2])(self->charProtector, &$s2523);
                $tmp2522 = $tmp2525;
                panda$core$String* $tmp2526 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2451, &$s2521, $tmp2522);
                $tmp2520 = $tmp2526;
                $tmp2519 = $tmp2520;
                title2451 = $tmp2519;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2519));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2520));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2522));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2518));
            }
            {
                $tmp2527 = title2451;
                panda$core$String* $tmp2534 = (($fn2533) self->charProtector->$class->vtable[2])(self->charProtector, &$s2532);
                $tmp2531 = $tmp2534;
                panda$core$String* $tmp2535 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2451, &$s2530, $tmp2531);
                $tmp2529 = $tmp2535;
                $tmp2528 = $tmp2529;
                title2451 = $tmp2528;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2528));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2529));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2531));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2527));
            }
            {
                $tmp2536 = title2451;
                panda$core$String* $tmp2541 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2451, &$s2539, &$s2540);
                $tmp2538 = $tmp2541;
                $tmp2537 = $tmp2538;
                title2451 = $tmp2537;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2537));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2538));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2536));
            }
            panda$core$MutableString$append$panda$core$String(result2508, &$s2542);
            panda$core$MutableString$append$panda$core$String(result2508, title2451);
            panda$core$UInt8$init$builtin_uint8(&$tmp2544, 34);
            panda$core$Char8$init$panda$core$UInt8(&$tmp2543, $tmp2544);
            panda$core$MutableString$append$panda$core$Char8(result2508, $tmp2543);
        }
        }
        panda$core$String* $tmp2548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2547, linkText2435);
        $tmp2546 = $tmp2548;
        panda$core$String* $tmp2550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2546, &$s2549);
        $tmp2545 = $tmp2550;
        panda$core$MutableString$append$panda$core$String(result2508, $tmp2545);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2545));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2546));
        panda$core$MutableString$append$panda$core$String(result2508, &$s2551);
        panda$core$String* $tmp2555 = panda$core$MutableString$convert$R$panda$core$String(result2508);
        $tmp2554 = $tmp2555;
        $tmp2553 = $tmp2554;
        $returnValue2552 = $tmp2553;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2553));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2554));
        $tmp2434 = 0;
        goto $l2432;
        $l2556:;
        return $returnValue2552;
    }
    $l2432:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result2508));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) title2451));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) url2443));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) linkText2435));
    linkText2435 = NULL;
    url2443 = NULL;
    title2451 = NULL;
    result2508 = NULL;
    switch ($tmp2434) {
        case 0: goto $l2556;
    }
    $l2558:;
    if (false) goto $l2559; else goto $l2560;
    $l2560:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2561, (panda$core$Int64) { 963 }, &$s2562);
    abort();
    $l2559:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim29$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar2566 = NULL;
    panda$core$Method* $tmp2567;
    panda$core$Method* $tmp2568;
    panda$core$Object* $tmp2570;
    panda$core$Object* $tmp2571;
    panda$core$Object* $returnValue2572;
    panda$core$Object* $tmp2573;
    panda$core$String* $tmp2574;
    panda$core$String* $tmp2575;
    int $tmp2565;
    {
        panda$core$Method* $tmp2569 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp2569, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp2568 = $tmp2569;
        $tmp2567 = $tmp2568;
        methodVar2566 = $tmp2567;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2567));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2568));
        {
            $tmp2570 = ((panda$core$MutableMethod*) methodVar2566)->target;
            $tmp2571 = self->target;
            ((panda$core$MutableMethod*) methodVar2566)->target = $tmp2571;
            panda$core$Panda$ref$panda$core$Object$Q($tmp2571);
            panda$core$Panda$unref$panda$core$Object$Q($tmp2570);
        }
        if (methodVar2566->target) {
            $tmp2575 = (($fn2576) methodVar2566->pointer)(methodVar2566->target, p_p0);
        } else {
            $tmp2575 = (($fn2577) methodVar2566->pointer)(p_p0);
        }
        $tmp2574 = $tmp2575;
        $tmp2573 = ((panda$core$Object*) $tmp2574);
        $returnValue2572 = $tmp2573;
        panda$core$Panda$ref$panda$core$Object$Q($tmp2573);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2574));
        $tmp2565 = 0;
        goto $l2563;
        $l2578:;
        return $returnValue2572;
    }
    $l2563:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) methodVar2566));
    methodVar2566 = NULL;
    switch ($tmp2565) {
        case 0: goto $l2578;
    }
    $l2580:;
    if (false) goto $l2581; else goto $l2582;
    $l2582:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2583, (panda$core$Int64) { 963 }, &$s2584);
    abort();
    $l2581:;
    abort();
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous30$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* replacementText2588 = NULL;
    panda$core$String* wholeMatch2589 = NULL;
    panda$core$String* $tmp2590;
    panda$core$Object* $tmp2591;
    panda$core$Int64 $tmp2592;
    panda$core$String* linkText2597 = NULL;
    panda$core$String* $tmp2598;
    panda$core$Object* $tmp2599;
    panda$core$Int64 $tmp2600;
    panda$core$String* id2605 = NULL;
    panda$core$String* $tmp2606;
    panda$core$String* $tmp2607;
    panda$core$String* $tmp2608;
    panda$core$String* $tmp2609;
    panda$core$RegularExpression* $tmp2610;
    org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* defn2615 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp2616;
    panda$core$Object* $tmp2617;
    panda$core$String* url2622 = NULL;
    panda$core$String* $tmp2623;
    panda$core$String* $tmp2624;
    panda$core$String* $tmp2625;
    panda$core$String* $tmp2626;
    panda$core$String* $tmp2628;
    panda$core$String* $tmp2633;
    panda$core$String* $tmp2634;
    panda$core$String* $tmp2635;
    panda$core$String* $tmp2637;
    panda$core$String* title2642 = NULL;
    panda$core$String* $tmp2643;
    panda$core$String* titleTag2644 = NULL;
    panda$core$String* $tmp2645;
    panda$core$String* $tmp2655;
    panda$core$String* $tmp2656;
    panda$core$String* $tmp2657;
    panda$core$String* $tmp2659;
    panda$core$String* $tmp2664;
    panda$core$String* $tmp2665;
    panda$core$String* $tmp2666;
    panda$core$String* $tmp2668;
    panda$core$String* $tmp2673;
    panda$core$String* $tmp2674;
    panda$core$String* $tmp2675;
    panda$core$String* $tmp2676;
    panda$core$String* $tmp2681;
    panda$core$String* $tmp2682;
    panda$core$String* $tmp2683;
    panda$core$String* $tmp2684;
    panda$core$String* $tmp2685;
    panda$core$String* $tmp2686;
    panda$core$String* $tmp2687;
    panda$core$String* $tmp2688;
    panda$core$String* $tmp2700;
    panda$core$String* $tmp2701;
    panda$core$String* $tmp2702;
    panda$core$String* $tmp2703;
    panda$core$String* escaped2709 = NULL;
    panda$core$String* $tmp2710;
    panda$core$String* $tmp2711;
    panda$core$String* $tmp2712;
    panda$core$String* $tmp2719;
    panda$core$String* $tmp2720;
    panda$core$String* $tmp2721;
    panda$core$String* $tmp2722;
    panda$core$String* $tmp2723;
    panda$core$String* $tmp2724;
    panda$core$String* $tmp2733;
    panda$core$String* $tmp2734;
    panda$core$String* $tmp2735;
    panda$core$String* $tmp2736;
    panda$core$String* $tmp2741;
    panda$core$String* $tmp2742;
    panda$core$Object* $returnValue2744;
    panda$core$Object* $tmp2745;
    int $tmp2587;
    {
        memset(&replacementText2588, 0, sizeof(replacementText2588));
        panda$core$Int64$init$builtin_int64(&$tmp2592, 1);
        ITable* $tmp2593 = p_groups->$class->itable;
        while ($tmp2593->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2593 = $tmp2593->next;
        }
        $fn2595 $tmp2594 = $tmp2593->methods[0];
        panda$core$Object* $tmp2596 = $tmp2594(p_groups, $tmp2592);
        $tmp2591 = $tmp2596;
        $tmp2590 = ((panda$core$String*) $tmp2591);
        wholeMatch2589 = $tmp2590;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2590));
        panda$core$Panda$unref$panda$core$Object$Q($tmp2591);
        panda$core$Int64$init$builtin_int64(&$tmp2600, 2);
        ITable* $tmp2601 = p_groups->$class->itable;
        while ($tmp2601->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2601 = $tmp2601->next;
        }
        $fn2603 $tmp2602 = $tmp2601->methods[0];
        panda$core$Object* $tmp2604 = $tmp2602(p_groups, $tmp2600);
        $tmp2599 = $tmp2604;
        $tmp2598 = ((panda$core$String*) $tmp2599);
        linkText2597 = $tmp2598;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2598));
        panda$core$Panda$unref$panda$core$Object$Q($tmp2599);
        $tmp2606 = linkText2597;
        id2605 = $tmp2606;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2606));
        {
            $tmp2607 = id2605;
            panda$core$RegularExpression* $tmp2611 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
            panda$core$RegularExpression$init$panda$core$String($tmp2611, &$s2612);
            $tmp2610 = $tmp2611;
            panda$core$String* $tmp2614 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(id2605, $tmp2610, &$s2613);
            $tmp2609 = $tmp2614;
            $tmp2608 = $tmp2609;
            id2605 = $tmp2608;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2608));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2609));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2610));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2607));
        }
        panda$core$Object* $tmp2618 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->linkDefinitions, ((panda$collections$Key*) id2605));
        $tmp2617 = $tmp2618;
        $tmp2616 = ((org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) $tmp2617);
        defn2615 = $tmp2616;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2616));
        panda$core$Panda$unref$panda$core$Object$Q($tmp2617);
        if (((panda$core$Bit) { defn2615 != NULL }).value) {
        {
            int $tmp2621;
            {
                $tmp2623 = defn2615->url;
                url2622 = $tmp2623;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2623));
                {
                    $tmp2624 = url2622;
                    panda$core$String* $tmp2631 = (($fn2630) self->charProtector->$class->vtable[2])(self->charProtector, &$s2629);
                    $tmp2628 = $tmp2631;
                    panda$core$String* $tmp2632 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(url2622, &$s2627, $tmp2628);
                    $tmp2626 = $tmp2632;
                    $tmp2625 = $tmp2626;
                    url2622 = $tmp2625;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2625));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2626));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2628));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2624));
                }
                {
                    $tmp2633 = url2622;
                    panda$core$String* $tmp2640 = (($fn2639) self->charProtector->$class->vtable[2])(self->charProtector, &$s2638);
                    $tmp2637 = $tmp2640;
                    panda$core$String* $tmp2641 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(url2622, &$s2636, $tmp2637);
                    $tmp2635 = $tmp2641;
                    $tmp2634 = $tmp2635;
                    url2622 = $tmp2634;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2634));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2635));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2637));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2633));
                }
                $tmp2643 = defn2615->title;
                title2642 = $tmp2643;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2643));
                $tmp2645 = &$s2646;
                titleTag2644 = $tmp2645;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2645));
                bool $tmp2647 = ((panda$core$Bit) { title2642 != NULL }).value;
                if (!$tmp2647) goto $l2648;
                ITable* $tmp2650 = ((panda$core$Equatable*) title2642)->$class->itable;
                while ($tmp2650->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                    $tmp2650 = $tmp2650->next;
                }
                $fn2652 $tmp2651 = $tmp2650->methods[1];
                panda$core$Bit $tmp2653 = $tmp2651(((panda$core$Equatable*) title2642), ((panda$core$Equatable*) &$s2649));
                $tmp2647 = $tmp2653.value;
                $l2648:;
                panda$core$Bit $tmp2654 = { $tmp2647 };
                if ($tmp2654.value) {
                {
                    {
                        $tmp2655 = title2642;
                        panda$core$String* $tmp2662 = (($fn2661) self->charProtector->$class->vtable[2])(self->charProtector, &$s2660);
                        $tmp2659 = $tmp2662;
                        panda$core$String* $tmp2663 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2642, &$s2658, $tmp2659);
                        $tmp2657 = $tmp2663;
                        $tmp2656 = $tmp2657;
                        title2642 = $tmp2656;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2656));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2657));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2659));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2655));
                    }
                    {
                        $tmp2664 = title2642;
                        panda$core$String* $tmp2671 = (($fn2670) self->charProtector->$class->vtable[2])(self->charProtector, &$s2669);
                        $tmp2668 = $tmp2671;
                        panda$core$String* $tmp2672 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2642, &$s2667, $tmp2668);
                        $tmp2666 = $tmp2672;
                        $tmp2665 = $tmp2666;
                        title2642 = $tmp2665;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2665));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2666));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2668));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2664));
                    }
                    {
                        $tmp2673 = titleTag2644;
                        panda$core$String* $tmp2678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2677, title2642);
                        $tmp2676 = $tmp2678;
                        panda$core$String* $tmp2680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2676, &$s2679);
                        $tmp2675 = $tmp2680;
                        $tmp2674 = $tmp2675;
                        titleTag2644 = $tmp2674;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2674));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2675));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2676));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2673));
                    }
                }
                }
                {
                    $tmp2681 = replacementText2588;
                    panda$core$String* $tmp2690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2689, url2622);
                    $tmp2688 = $tmp2690;
                    panda$core$String* $tmp2692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2688, &$s2691);
                    $tmp2687 = $tmp2692;
                    panda$core$String* $tmp2693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2687, titleTag2644);
                    $tmp2686 = $tmp2693;
                    panda$core$String* $tmp2695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2686, &$s2694);
                    $tmp2685 = $tmp2695;
                    panda$core$String* $tmp2696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2685, linkText2597);
                    $tmp2684 = $tmp2696;
                    panda$core$String* $tmp2698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2684, &$s2697);
                    $tmp2683 = $tmp2698;
                    $tmp2682 = $tmp2683;
                    replacementText2588 = $tmp2682;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2682));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2683));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2684));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2685));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2686));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2687));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2688));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2681));
                }
            }
            $tmp2621 = -1;
            goto $l2619;
            $l2619:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) titleTag2644));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) title2642));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) url2622));
            url2622 = NULL;
            title2642 = NULL;
            titleTag2644 = NULL;
            switch ($tmp2621) {
                case -1: goto $l2699;
            }
            $l2699:;
        }
        }
        else {
        {
            if (((panda$core$Bit) { self->linkResolver != NULL }).value) {
            {
                {
                    $tmp2700 = replacementText2588;
                    if (self->linkResolver->target) {
                        $tmp2703 = (($fn2704) self->linkResolver->pointer)(self->linkResolver->target, linkText2597);
                    } else {
                        $tmp2703 = (($fn2705) self->linkResolver->pointer)(linkText2597);
                    }
                    $tmp2702 = $tmp2703;
                    $tmp2701 = $tmp2702;
                    replacementText2588 = $tmp2701;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2701));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2702));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2700));
                }
                if (((panda$core$Bit) { replacementText2588 != NULL }).value) {
                {
                    int $tmp2708;
                    {
                        panda$core$String* $tmp2715 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(linkText2597, &$s2713, &$s2714);
                        $tmp2712 = $tmp2715;
                        panda$core$String* $tmp2718 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp2712, &$s2716, &$s2717);
                        $tmp2711 = $tmp2718;
                        $tmp2710 = $tmp2711;
                        escaped2709 = $tmp2710;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2710));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2711));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2712));
                        {
                            $tmp2719 = replacementText2588;
                            panda$core$String* $tmp2726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2725, replacementText2588);
                            $tmp2724 = $tmp2726;
                            panda$core$String* $tmp2728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2724, &$s2727);
                            $tmp2723 = $tmp2728;
                            panda$core$String* $tmp2729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2723, escaped2709);
                            $tmp2722 = $tmp2729;
                            panda$core$String* $tmp2731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2722, &$s2730);
                            $tmp2721 = $tmp2731;
                            $tmp2720 = $tmp2721;
                            replacementText2588 = $tmp2720;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2720));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2721));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2722));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2723));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2724));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2719));
                        }
                    }
                    $tmp2708 = -1;
                    goto $l2706;
                    $l2706:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) escaped2709));
                    escaped2709 = NULL;
                    switch ($tmp2708) {
                        case -1: goto $l2732;
                    }
                    $l2732:;
                }
                }
                else {
                {
                    {
                        $tmp2733 = replacementText2588;
                        panda$core$String* $tmp2738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2737, linkText2597);
                        $tmp2736 = $tmp2738;
                        panda$core$String* $tmp2740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2736, &$s2739);
                        $tmp2735 = $tmp2740;
                        $tmp2734 = $tmp2735;
                        replacementText2588 = $tmp2734;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2734));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2735));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2736));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2733));
                    }
                }
                }
            }
            }
            else {
            {
                {
                    $tmp2741 = replacementText2588;
                    $tmp2742 = &$s2743;
                    replacementText2588 = $tmp2742;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2742));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2741));
                }
            }
            }
        }
        }
        $tmp2745 = ((panda$core$Object*) replacementText2588);
        $returnValue2744 = $tmp2745;
        panda$core$Panda$ref$panda$core$Object$Q($tmp2745);
        $tmp2587 = 0;
        goto $l2585;
        $l2746:;
        return $returnValue2744;
    }
    $l2585:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) defn2615));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) id2605));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) linkText2597));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) wholeMatch2589));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) replacementText2588));
    wholeMatch2589 = NULL;
    linkText2597 = NULL;
    id2605 = NULL;
    defn2615 = NULL;
    switch ($tmp2587) {
        case 0: goto $l2746;
    }
    $l2748:;
    if (false) goto $l2749; else goto $l2750;
    $l2750:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2751, (panda$core$Int64) { 1006 }, &$s2752);
    abort();
    $l2749:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doAnchors$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* internalLink2756 = NULL;
    panda$core$RegularExpression* $tmp2757;
    panda$core$RegularExpression* $tmp2758;
    panda$core$RegularExpression* inlineLink2762 = NULL;
    panda$core$RegularExpression* $tmp2763;
    panda$core$RegularExpression* $tmp2764;
    panda$core$Int64 $tmp2767;
    panda$core$RegularExpression* referenceShortcut2770 = NULL;
    panda$core$RegularExpression* $tmp2771;
    panda$core$RegularExpression* $tmp2772;
    panda$core$Int64 $tmp2775;
    int $tmp2755;
    {
        panda$core$RegularExpression* $tmp2759 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp2759, &$s2760);
        $tmp2758 = $tmp2759;
        $tmp2757 = $tmp2758;
        internalLink2756 = $tmp2757;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2757));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2758));
        panda$core$MutableMethod* $tmp2761 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2761, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous27$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) self));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, internalLink2756, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp2761)));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2761));
        panda$core$RegularExpression* $tmp2765 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp2767, 4);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp2765, &$s2766, $tmp2767);
        $tmp2764 = $tmp2765;
        $tmp2763 = $tmp2764;
        inlineLink2762 = $tmp2763;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2763));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2764));
        panda$core$MutableMethod* $tmp2768 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp2769 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2769, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous28$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2768, (panda$core$Int8*) &panda$core$MutableMethod$$shim29$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp2769)));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, inlineLink2762, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp2768)));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2768));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2769));
        panda$core$RegularExpression* $tmp2773 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp2775, 4);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp2773, &$s2774, $tmp2775);
        $tmp2772 = $tmp2773;
        $tmp2771 = $tmp2772;
        referenceShortcut2770 = $tmp2771;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2771));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2772));
        panda$core$MutableMethod* $tmp2776 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2776, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous30$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) self));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, referenceShortcut2770, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp2776)));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2776));
    }
    $tmp2755 = -1;
    goto $l2753;
    $l2753:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) referenceShortcut2770));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) inlineLink2762));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) internalLink2756));
    internalLink2756 = NULL;
    inlineLink2762 = NULL;
    referenceShortcut2770 = NULL;
    switch ($tmp2755) {
        case -1: goto $l2777;
    }
    $l2777:;
}
void org$pandalanguage$pandac$pandadoc$Markdown$doItalicsAndBold$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* $tmp2778;
    panda$core$RegularExpression* $tmp2782;
    panda$core$RegularExpression* $tmp2779 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp2779, &$s2780);
    $tmp2778 = $tmp2779;
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_markup, $tmp2778, &$s2781);
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2778));
    panda$core$RegularExpression* $tmp2783 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp2783, &$s2784);
    $tmp2782 = $tmp2783;
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_markup, $tmp2782, &$s2785);
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2782));
}
void org$pandalanguage$pandac$pandadoc$Markdown$encodeAmpsAndAngles$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* $tmp2786;
    panda$core$RegularExpression* $tmp2790;
    panda$core$RegularExpression* $tmp2787 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp2787, &$s2788);
    $tmp2786 = $tmp2787;
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_markup, $tmp2786, &$s2789);
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2786));
    panda$core$RegularExpression* $tmp2791 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp2791, &$s2792);
    $tmp2790 = $tmp2791;
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_markup, $tmp2790, &$s2793);
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2790));
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous31$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* code2797 = NULL;
    panda$core$String* $tmp2798;
    panda$core$Object* $tmp2799;
    panda$core$Int64 $tmp2800;
    panda$core$MutableString* sub2805 = NULL;
    panda$core$MutableString* $tmp2806;
    panda$core$MutableString* $tmp2807;
    panda$core$RegularExpression* $tmp2809;
    panda$core$RegularExpression* $tmp2813;
    panda$core$String* $returnValue2818;
    panda$core$String* $tmp2819;
    panda$core$String* $tmp2820;
    panda$core$String* $tmp2821;
    int $tmp2796;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2800, 2);
        ITable* $tmp2801 = p_groups->$class->itable;
        while ($tmp2801->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2801 = $tmp2801->next;
        }
        $fn2803 $tmp2802 = $tmp2801->methods[0];
        panda$core$Object* $tmp2804 = $tmp2802(p_groups, $tmp2800);
        $tmp2799 = $tmp2804;
        $tmp2798 = ((panda$core$String*) $tmp2799);
        code2797 = $tmp2798;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2798));
        panda$core$Panda$unref$panda$core$Object$Q($tmp2799);
        panda$core$MutableString* $tmp2808 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp2808, code2797);
        $tmp2807 = $tmp2808;
        $tmp2806 = $tmp2807;
        sub2805 = $tmp2806;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2806));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2807));
        panda$core$RegularExpression* $tmp2810 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp2810, &$s2811);
        $tmp2809 = $tmp2810;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(sub2805, $tmp2809, &$s2812);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2809));
        panda$core$RegularExpression* $tmp2814 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp2814, &$s2815);
        $tmp2813 = $tmp2814;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(sub2805, $tmp2813, &$s2816);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2813));
        (($fn2817) self->$class->vtable[18])(self, sub2805);
        panda$core$String* $tmp2823 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2822, ((panda$core$Object*) sub2805));
        $tmp2821 = $tmp2823;
        panda$core$String* $tmp2825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2821, &$s2824);
        $tmp2820 = $tmp2825;
        $tmp2819 = $tmp2820;
        $returnValue2818 = $tmp2819;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2819));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2820));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2821));
        $tmp2796 = 0;
        goto $l2794;
        $l2826:;
        return $returnValue2818;
    }
    $l2794:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) sub2805));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) code2797));
    code2797 = NULL;
    sub2805 = NULL;
    switch ($tmp2796) {
        case 0: goto $l2826;
    }
    $l2828:;
    if (false) goto $l2829; else goto $l2830;
    $l2830:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2831, (panda$core$Int64) { 1061 }, &$s2832);
    abort();
    $l2829:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim32$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar2836 = NULL;
    panda$core$Method* $tmp2837;
    panda$core$Method* $tmp2838;
    panda$core$Object* $tmp2840;
    panda$core$Object* $tmp2841;
    panda$core$Object* $returnValue2842;
    panda$core$Object* $tmp2843;
    panda$core$String* $tmp2844;
    panda$core$String* $tmp2845;
    int $tmp2835;
    {
        panda$core$Method* $tmp2839 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp2839, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp2838 = $tmp2839;
        $tmp2837 = $tmp2838;
        methodVar2836 = $tmp2837;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2837));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2838));
        {
            $tmp2840 = ((panda$core$MutableMethod*) methodVar2836)->target;
            $tmp2841 = self->target;
            ((panda$core$MutableMethod*) methodVar2836)->target = $tmp2841;
            panda$core$Panda$ref$panda$core$Object$Q($tmp2841);
            panda$core$Panda$unref$panda$core$Object$Q($tmp2840);
        }
        if (methodVar2836->target) {
            $tmp2845 = (($fn2846) methodVar2836->pointer)(methodVar2836->target, p_p0);
        } else {
            $tmp2845 = (($fn2847) methodVar2836->pointer)(p_p0);
        }
        $tmp2844 = $tmp2845;
        $tmp2843 = ((panda$core$Object*) $tmp2844);
        $returnValue2842 = $tmp2843;
        panda$core$Panda$ref$panda$core$Object$Q($tmp2843);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2844));
        $tmp2835 = 0;
        goto $l2833;
        $l2848:;
        return $returnValue2842;
    }
    $l2833:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) methodVar2836));
    methodVar2836 = NULL;
    switch ($tmp2835) {
        case 0: goto $l2848;
    }
    $l2850:;
    if (false) goto $l2851; else goto $l2852;
    $l2852:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2853, (panda$core$Int64) { 1061 }, &$s2854);
    abort();
    $l2851:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doCodeSpans$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* $tmp2855;
    panda$core$RegularExpression* $tmp2856 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp2856, &$s2857);
    $tmp2855 = $tmp2856;
    panda$core$MutableMethod* $tmp2858 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
    panda$core$MutableMethod* $tmp2859 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
    panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2859, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous31$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
    panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2858, (panda$core$Int8*) &panda$core$MutableMethod$$shim32$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp2859)));
    panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, $tmp2855, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp2858)));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2858));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2859));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2855));
}
void org$pandalanguage$pandac$pandadoc$Markdown$cleanup(org$pandalanguage$pandac$pandadoc$Markdown* self) {
    int $tmp2862;
    {
    }
    $tmp2862 = -1;
    goto $l2860;
    $l2860:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2862) {
        case -1: goto $l2863;
    }
    $l2863:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->errorQueue));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->parser));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->linkResolver));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->linkDefinitions));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->charProtector));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->htmlProtector));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->random));
}

