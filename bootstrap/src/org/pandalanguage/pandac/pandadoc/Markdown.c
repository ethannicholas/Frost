#include "org/pandalanguage/pandac/pandadoc/Markdown.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/io/File.h"
#include "panda/core/MutableMethod.h"
#include "panda/threads/MessageQueue.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/parser/Parser.h"
#include "panda/collections/HashMap.h"
#include "org/pandalanguage/pandac/pandadoc/Protector.h"
#include "panda/math/Random.h"
#include "panda/core/Int64.h"
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
#include "org/pandalanguage/pandac/pandadoc/Markdown/HTMLToken.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"

static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$Markdown$class_type org$pandalanguage$pandac$pandadoc$Markdown$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$cleanup, org$pandalanguage$pandac$pandadoc$Markdown$process$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$encodeBackslashEscapes$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$encodeEscapes$panda$core$MutableString$panda$collections$ListView$LTpanda$core$Char8$GT$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$stripLinkDefinitions$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$runBlockGamut$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$doHorizontalRules$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$hashHTMLBlocks$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$formParagraphs$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$doAutoLinks$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$unescapeSpecialChars$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$encodeEmail$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$doBlockQuotes$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$detabify$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$doCodeBlocks$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$prettyPrint$org$pandalanguage$pandac$parser$Parser$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$syntaxHighlight$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$encodeCode$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$doLists$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$processListItems$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$doHeaders$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$runSpanGamut$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$tokenizeHTML$panda$core$String$R$panda$collections$ListView$LTorg$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$GT, org$pandalanguage$pandac$pandadoc$Markdown$escapeSpecialCharsWithinTagAttributes$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$doImages$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$doAnchors$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$doItalicsAndBold$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$encodeAmpsAndAngles$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$doCodeSpans$panda$core$MutableString} };

typedef void (*$fn49)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn54)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn55)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn56)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn57)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn83)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef void (*$fn86)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*, panda$collections$ListView*, panda$core$String*);
typedef void (*$fn88)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*, panda$collections$ListView*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn98)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn105)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn115)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn131)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Object* (*$fn145)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn155)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn157)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Int64 (*$fn161)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn171)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn208)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn209)(panda$collections$ListView*);
typedef void (*$fn225)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn226)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn227)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn228)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn229)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn230)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn231)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$collections$Iterator* (*$fn250)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn257)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn268)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn291)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn299)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn320)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn321)(panda$collections$ListView*);
typedef panda$core$String* (*$fn338)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn339)(panda$collections$ListView*);
typedef panda$core$String* (*$fn356)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn357)(panda$collections$ListView*);
typedef panda$core$String* (*$fn374)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn375)(panda$collections$ListView*);
typedef panda$core$String* (*$fn418)(panda$collections$ListView*, panda$core$String*);
typedef panda$core$String* (*$fn433)(panda$collections$ListView*, panda$core$String*);
typedef panda$core$String* (*$fn630)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef void (*$fn639)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn660)(panda$collections$ListView*, panda$core$String*);
typedef panda$core$Object* (*$fn672)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn678)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn684)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$core$String* (*$fn695)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$core$String* (*$fn726)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn727)(panda$collections$ListView*);
typedef panda$core$Bit (*$fn758)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn769)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn774)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn793)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn800)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn807)(panda$collections$Iterator*);
typedef panda$core$Real64 (*$fn812)(panda$math$Random*);
typedef panda$core$Object* (*$fn846)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn859)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn876)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn886)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Object* (*$fn927)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn966)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn967)(panda$collections$ListView*);
typedef panda$core$String* (*$fn993)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn994)(panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn1031)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1038)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1049)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1119)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1124)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1129)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1134)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1139)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1199)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1222)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1245)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1257)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1264)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Object* (*$fn1276)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1284)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn1308)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$core$Object* (*$fn1348)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1356)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn1380)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$core$Object* (*$fn1507)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1519)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1527)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1528)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1529)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn1554)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1555)(panda$collections$ListView*);
typedef panda$core$Object* (*$fn1619)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1621)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn1646)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1647)(panda$collections$ListView*);
typedef panda$core$Object* (*$fn1662)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1664)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn1689)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1690)(panda$collections$ListView*);
typedef panda$core$Object* (*$fn1703)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1713)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1715)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1767)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1768)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1769)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1770)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1771)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1772)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1773)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1774)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1775)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$collections$ListView* (*$fn1871)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1881)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1888)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1899)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1919)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1928)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1937)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1946)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Object* (*$fn1969)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1977)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1985)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn2014)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2025)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2046)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2057)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2107)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn2108)(panda$collections$ListView*);
typedef panda$core$Object* (*$fn2141)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2149)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2157)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn2184)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2193)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2212)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2221)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Object* (*$fn2267)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2275)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2283)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn2293)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2304)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2323)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2332)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2371)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn2372)(panda$collections$ListView*);
typedef panda$core$Object* (*$fn2386)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2394)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn2421)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2430)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2449)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2458)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Object* (*$fn2545)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2559)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn2584)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn2585)(panda$collections$ListView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e", 42, 5747153137714602429, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x72\x5c\x6e", 4, 200020409, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x72", 2, 19607, NULL };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5c\x74\x5d\x2b\x24", 12, 4609931141593742675, NULL };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x5b\x20\x5d\x2b\x24", 6, 2058973016890, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x60\x5f\x3e\x21", 4, 203944687, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x7b\x7d\x5b\x5d\x28\x29\x23\x2b\x2d\x2e", 11, -6003771304831432199, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x5c\x5c", 4, 199795969, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x5c", 3, 1978177, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29", 4, 145926154, NULL };
static panda$core$String $s175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x71\x75\x6f\x74\x3b", 6, 1472784484255, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x5b\x20\x5d\x7b\x30\x2c\x33\x7d\x5c\x5b\x28\x2e\x2b\x29\x5c\x5d\x3a\x5b\x20\x5c\x74\x5d\x2a\x5c\x6e\x3f\x5b\x20\x5c\x74\x5d\x2a\x3c\x3f\x28\x5c\x53\x2b\x3f\x29\x3e\x3f\x5b\x20\x5c\x74\x5d\x2a\x5c\x6e\x3f\x5b\x20\x5c\x74\x5d\x2a\x28\x3f\x3a\x5b\x22\x28\x5d\x28\x2e\x2b\x3f\x29\x5b\x22\x29\x5d\x5b\x20\x5c\x74\x5d\x2a\x29\x3f\x28\x3f\x3a\x5c\x6e\x2b\x7c\x5c\x5a\x29", 92, -1680259952286778556, NULL };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5d\x7b\x30\x2c\x32\x7d\x28\x5b\x20\x5d\x3f", 18, -695802876960105267, NULL };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x3f\x29\x7b\x33\x2c\x7d\x5b\x20\x5d\x2a\x24", 14, 5711149104113814898, NULL };
static panda$core$String $s278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x68\x72\x20\x2f\x3e", 6, 1703066247920, NULL };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static panda$core$String $s302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static panda$core$String $s386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70", 1, 213, NULL };
static panda$core$String $s387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x69\x76", 3, 2061124, NULL };
static panda$core$String $s388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x31", 2, 20754, NULL };
static panda$core$String $s389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x32", 2, 20755, NULL };
static panda$core$String $s390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x33", 2, 20756, NULL };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x34", 2, 20757, NULL };
static panda$core$String $s392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x35", 2, 20758, NULL };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x36", 2, 20759, NULL };
static panda$core$String $s394 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6c\x6f\x63\x6b\x71\x75\x6f\x74\x65", 10, -2536067448883908010, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65", 3, 2184428, NULL };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x61\x62\x6c\x65", 5, 22682056921, NULL };
static panda$core$String $s397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6c", 2, 20409, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x6c", 2, 21520, NULL };
static panda$core$String $s399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6c", 2, 22126, NULL };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x63\x72\x69\x70\x74", 6, 2280602224762, NULL };
static panda$core$String $s401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x73\x63\x72\x69\x70\x74", 8, 22741103748248783, NULL };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d", 4, 210295037, NULL };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x65\x6c\x64\x73\x65\x74", 8, 21876880126472849, NULL };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x72\x61\x6d\x65", 6, 2175813319029, NULL };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x68", 4, 217364527, NULL };
static panda$core$String $s410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x73", 3, 2112631, NULL };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x6c", 3, 2060710, NULL };
static panda$core$String $s415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5e\x3c\x28", 4, 146237435, NULL };
static panda$core$String $s455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x62", 2, 19591, NULL };
static panda$core$String $s459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2e\x2a\x5c\x6e\x29\x2a\x3f", 8, 15166389503170077, NULL };
static panda$core$String $s461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x5c\x32\x3e", 5, 16803092312, NULL };
static panda$core$String $s463 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x2a", 4, 198153659, NULL };
static panda$core$String $s465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2b\x7c\x5c\x5a\x29\x29", 11, 1905689439221158230, NULL };
static panda$core$String $s485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5e\x3c\x28", 4, 146237435, NULL };
static panda$core$String $s487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s489 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x62", 2, 19591, NULL };
static panda$core$String $s491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2e\x2a\x5c\x6e\x29\x2a\x3f", 8, 15166389503170077, NULL };
static panda$core$String $s493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2a\x3c\x2f\x5c\x32\x3e", 7, 156491179351200, NULL };
static panda$core$String $s495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x2a", 4, 198153659, NULL };
static panda$core$String $s497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2b\x7c\x5c\x5a\x29\x29", 11, 1905689439221158230, NULL };
static panda$core$String $s515 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29\x7c\x5c\x41\x5c\x6e\x3f\x29\x28\x5b\x20\x5d\x7b\x30\x2c", 26, 2222423814537520433, NULL };
static panda$core$String $s519 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s521 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28\x68\x72\x29", 5, 16796009060, NULL };
static panda$core$String $s523 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x62", 2, 19591, NULL };
static panda$core$String $s525 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5b\x5e\x3c\x3e\x5d\x29\x2a\x3f", 9, 1536684806687938687, NULL };
static panda$core$String $s527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x3f\x3e", 3, 1516173, NULL };
static panda$core$String $s529 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x2a", 4, 198153659, NULL };
static panda$core$String $s531 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x7b\x32\x2c\x7d\x7c\x5c\x5a\x29\x29", 14, 47502487764265221, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29\x7c\x5c\x41\x5c\x6e\x3f\x29\x28\x5b\x20\x5d\x7b\x30\x2c", 26, 2222423814537520433, NULL };
static panda$core$String $s553 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x73\x3a", 4, 145926777, NULL };
static panda$core$String $s557 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x21", 2, 16294, NULL };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2d\x2d\x2e\x2a\x3f\x2d\x2d\x5c\x73\x2a\x29\x2b", 13, -4188240096700658567, NULL };
static panda$core$String $s561 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s565 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x2a", 4, 198153659, NULL };
static panda$core$String $s567 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x7b\x32\x2c\x7d\x7c\x5c\x5a\x29", 13, -2921786165263253076, NULL };
static panda$core$String $s569 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s578 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x41\x5c\x6e\x2b", 5, 20151576603, NULL };
static panda$core$String $s579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x2b\x5c\x7a", 5, 20197438560, NULL };
static panda$core$String $s583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s601 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d", 6, 2040023282445, NULL };
static panda$core$String $s642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x70\x3e", 3, 1653735, NULL };
static panda$core$String $s644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x70\x3e", 4, 166369282, NULL };
static panda$core$String $s657 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static panda$core$String $s691 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6c\x74\x6f\x3a", 7, 223949750184005, NULL };
static panda$core$String $s693 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s703 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static panda$core$String $s705 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e", 2, 13697, NULL };
static panda$core$String $s708 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };
static panda$core$String $s736 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28\x28\x68\x74\x74\x70\x73\x3f\x7c\x66\x74\x70\x29\x3a\x5b\x5e\x27\x5c\x22\x3e\x5c\x73\x5d\x2b\x29\x3e", 27, -3769254741412201634, NULL };
static panda$core$String $s737 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22\x24\x31\x22\x3e\x24\x31\x3c\x2f\x61\x3e", 19, -7734359251480494054, NULL };
static panda$core$String $s742 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28\x5b\x2d\x2e\x5c\x77\x5d\x2b\x5c\x40\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x28\x5c\x2e\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x29\x2a\x5c\x2e\x5b\x61\x2d\x7a\x5d\x2b\x29\x3e", 46, 7932002164266535007, NULL };
static panda$core$String $s816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x23", 2, 14074, NULL };
static panda$core$String $s824 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x23\x78", 3, 1421594, NULL };
static panda$core$String $s827 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78", 1, 221, NULL };
static panda$core$String $s848 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x20\x20", 3, 1992459, NULL };
static panda$core$String $s849 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s861 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x20\x20", 3, 1992459, NULL };
static panda$core$String $s862 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s880 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5c\x74\x5d\x2a\x3e\x5b\x20\x5c\x74\x5d\x3f", 18, -7646264414083764081, NULL };
static panda$core$String $s881 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s884 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5c\x74\x5d\x2b\x24", 12, 4609931141593742675, NULL };
static panda$core$String $s885 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s887 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20", 2, 13465, NULL };
static panda$core$String $s893 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x73\x2a\x3c\x70\x72\x65\x3e\x2e\x2a\x3f\x3c\x2f\x70\x72\x65\x3e\x29", 19, -2639512543099520141, NULL };
static panda$core$String $s900 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x62\x6c\x6f\x63\x6b\x71\x75\x6f\x74\x65\x3e\x0a", 13, -5037006854090612730, NULL };
static panda$core$String $s902 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x3c\x2f\x62\x6c\x6f\x63\x6b\x71\x75\x6f\x74\x65\x3e\x0a\x0a", 16, -5426254764564286611, NULL };
static panda$core$String $s914 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x5e\x5b\x20\x09\x5d\x2a\x3e\x5b\x20\x09\x5d\x3f\x2e\x2b\x5c\x6e\x28\x2e\x2b\x5c\x6e\x29\x2a\x5c\x6e\x2a\x29\x2b\x29", 31, 6066980682886811878, NULL };
static panda$core$String $s973 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2e\x2a\x3f\x29\x5c\x74", 7, 150162241731241, NULL };
static panda$core$String $s978 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x5c\x74\x7c\x5b\x20\x5d\x7b\x31\x2c\x34\x7d\x29", 18, 7461573203115413830, NULL };
static panda$core$String $s979 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1005 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x5c\x6e\x5c\x6e\x7c\x5c\x41\x29\x28\x28\x3f\x3a\x28\x3f\x3a\x5b\x20\x5d\x7b\x34\x7d\x29\x2e\x2a\x5c\x6e\x2b\x29\x2b\x29\x28\x28\x3f\x3d\x5e\x5b\x20\x5d\x7b\x30\x2c\x34\x7d\x5c\x53\x29\x7c\x5c\x5a\x29", 53, -4156959249454615378, NULL };
static panda$core$String $s1019 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x6e\x64\x61\x63\x6f\x64\x65\x22\x3e", 24, -1375153472772145809, NULL };
static panda$core$String $s1057 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s1069 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6d\x6d\x65\x6e\x74\x22\x3e", 22, -1756050522877089685, NULL };
static panda$core$String $s1072 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x22\x3e", 25, 4577563245309187979, NULL };
static panda$core$String $s1075 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x22\x3e", 25, 6760721592980043958, NULL };
static panda$core$String $s1078 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x4e\x61\x6d\x65\x22\x3e", 28, 5111374842590752150, NULL };
static panda$core$String $s1081 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x74\x79\x70\x65\x22\x3e", 19, -6878895466207673670, NULL };
static panda$core$String $s1084 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6b\x65\x79\x77\x6f\x72\x64\x22\x3e", 22, -1670481277391576067, NULL };
static panda$core$String $s1087 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6e\x74\x72\x6f\x6c\x22\x3e", 22, -1756049386432501671, NULL };
static panda$core$String $s1090 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x74\x65\x72\x61\x6c\x22\x3e", 22, -1659229352682266791, NULL };
static panda$core$String $s1093 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x73\x74\x72\x69\x6e\x67\x22\x3e", 21, -198306892965556893, NULL };
static panda$core$String $s1096 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6f\x70\x65\x72\x61\x74\x6f\x72\x22\x3e", 23, 1793793249967207580, NULL };
static panda$core$String $s1099 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x61\x62\x65\x6c\x22\x3e", 20, 6207823968128210400, NULL };
static panda$core$String $s1103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s1110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s1112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s1114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x67\x74\x3b", 4, 144274317, NULL };
static panda$core$String $s1116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s1118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s1121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s1123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s1126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5b", 2, 19584, NULL };
static panda$core$String $s1128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5d", 2, 19586, NULL };
static panda$core$String $s1133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s1136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s1138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s1150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22", 13, -8467438715157355368, NULL };
static panda$core$String $s1154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e", 2, 13697, NULL };
static panda$core$String $s1163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s1168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s1169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s1262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x24\x28\x5c\x73\x2a\x29\x5c\x2e\x5c\x2e\x5c\x2e\x28\x5c\x73\x2a\x29\x5e", 22, -7048023396403805866, NULL };
static panda$core$String $s1263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x31\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d\x24\x32", 13, -8807464024981417766, NULL };
static panda$core$String $s1265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d", 9, 1585511400200274083, NULL };
static panda$core$String $s1266 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x65\x6c\x6c\x69\x70\x73\x69\x73\x22\x3e\x2e\x2e\x2e\x3c\x2f\x73\x70\x61\x6e\x3e", 33, 5749756206725659630, NULL };
static panda$core$String $s1289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x2a\x2b\x2d\x5d", 5, 20023312915, NULL };
static panda$core$String $s1293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6c", 2, 22126, NULL };
static panda$core$String $s1296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x6c", 2, 21520, NULL };
static panda$core$String $s1302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x6e\x7b\x32\x2c\x7d", 7, 205851892197837, NULL };
static panda$core$String $s1303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a\x0a", 3, 1133331, NULL };
static panda$core$String $s1315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x73\x2b\x24", 5, 20179622579, NULL };
static panda$core$String $s1316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f", 2, 16308, NULL };
static panda$core$String $s1334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x0a", 2, 16473, NULL };
static panda$core$String $s1361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x2a\x2b\x2d\x5d", 5, 20023312915, NULL };
static panda$core$String $s1365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6c", 2, 22126, NULL };
static panda$core$String $s1368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x6c", 2, 21520, NULL };
static panda$core$String $s1374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d", 6, 2040023282445, NULL };
static panda$core$String $s1375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a\x0a", 3, 1133331, NULL };
static panda$core$String $s1390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x0a", 2, 16473, NULL };
static panda$core$String $s1395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f", 2, 16308, NULL };
static panda$core$String $s1398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x0a", 2, 16473, NULL };
static panda$core$String $s1428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x7b\x30\x2c", 6, 2021366306632, NULL };
static panda$core$String $s1435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x29", 18, -3376353325465069725, NULL };
static panda$core$String $s1440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x2b", 4, 198153660, NULL };
static panda$core$String $s1442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x73\x3a\x2e\x2b\x3f\x29", 8, 15185198979096470, NULL };
static panda$core$String $s1446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x7a", 2, 19615, NULL };
static panda$core$String $s1450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d", 6, 2040023282445, NULL };
static panda$core$String $s1454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x53\x29", 6, 1488543771181, NULL };
static panda$core$String $s1456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x21\x5b\x20\x5d\x2a", 7, 150340005652795, NULL };
static panda$core$String $s1458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29", 16, 533168213134719014, NULL };
static panda$core$String $s1460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x2b", 4, 198153660, NULL };
static panda$core$String $s1462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e", 5, 14738541648, NULL };
static panda$core$String $s1481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29\x7c\x5c\x41\x5c\x6e\x3f\x29", 23, 6260301638587013175, NULL };
static panda$core$String $s1534 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6c\x69\x3e", 4, 166990836, NULL };
static panda$core$String $s1536 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x6c\x69\x3e\x0a", 6, 1697129369393, NULL };
static panda$core$String $s1569 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d\x5c\x7a", 8, 20810277504230859, NULL };
static panda$core$String $s1570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1576 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x6e\x29\x3f\x5e\x28\x5b\x20\x5c\x74\x5d\x2a\x29\x28\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b\x28\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x6e\x7b\x31\x2c\x32\x7d\x29\x29\x28\x3f\x3d\x5c\x6e\x2a\x28\x5c\x7a\x7c\x5c\x32\x28\x5b\x2d\x2b\x5c\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5c\x74\x5d\x2b\x29\x29", 86, 9008606742683235904, NULL };
static panda$core$String $s1592 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static panda$core$String $s1603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x68\x31\x3e", 4, 166944376, NULL };
static panda$core$String $s1628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x68\x31\x3e", 5, 16803214623, NULL };
static panda$core$String $s1669 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x68\x32\x3e", 4, 166944477, NULL };
static panda$core$String $s1671 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x68\x32\x3e", 5, 16803214724, NULL };
static panda$core$String $s1721 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s1733 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1735 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1738 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f", 2, 16308, NULL };
static panda$core$String $s1741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x0a", 2, 16473, NULL };
static panda$core$String $s1751 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x3d\x3d\x3d\x3d\x2b\x24", 17, 8644226230150951458, NULL };
static panda$core$String $s1756 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x2d\x2d\x2d\x2d\x2b\x24", 17, 8644226060307728994, NULL };
static panda$core$String $s1763 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x28\x23\x7b\x31\x2c\x36\x7d\x29\x5c\x73\x2a\x28\x2e\x2a\x3f\x29\x5c\x73\x2a\x5c\x31\x3f\x24", 24, 6625741561155563100, NULL };
static panda$core$String $s1778 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x32\x2c\x7d\x5c\x6e", 7, 142480172029377, NULL };
static panda$core$String $s1779 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x62\x72\x20\x2f\x3e\x0a", 8, 14324133278249456, NULL };
static panda$core$String $s1784 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x3c\x5b\x61\x2d\x7a\x2f\x21\x24\x5d\x28\x3f\x3a\x5b\x5e\x3c\x3e\x5d\x7c", 21, -3726567012419943545, NULL };
static panda$core$String $s1795 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2a\x3e\x29", 4, 146737487, NULL };
static panda$core$String $s1815 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x73\x3a\x3c\x21\x28\x2d\x2d\x2e\x2a\x3f\x2d\x2d\x5c\x73\x2a\x29\x2b\x3e\x29\x7c\x28\x3f\x73\x3a\x3c\x5c\x3f\x2e\x2a\x3f\x5c\x3f\x3e\x29\x7c", 37, -5883741260455240331, NULL };
static panda$core$String $s1916 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s1918 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s1925 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x60", 1, 197, NULL };
static panda$core$String $s1927 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x60", 1, 197, NULL };
static panda$core$String $s1934 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s1936 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s1943 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s1945 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s1992 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2011 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x2a", 3, 1978127, NULL };
static panda$core$String $s2013 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2022 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2024 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2032 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2035 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2043 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x2a", 3, 1978127, NULL };
static panda$core$String $s2045 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2054 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2056 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2066 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x61\x6c\x74\x3d\x22", 6, 1408049687549, NULL };
static panda$core$String $s2068 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x20\x74\x69\x74\x6c\x65\x3d\x22", 9, 1465411637805988408, NULL };
static panda$core$String $s2071 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2079 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22", 10, -7235316333681816127, NULL };
static panda$core$String $s2081 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2084 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x3e", 2, 15010, NULL };
static panda$core$String $s2117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x20\x5c\x22\x28\x2e\x2a\x29\x5c\x22\x5c\x5c\x29", 30, 1507772917981139974, NULL };
static panda$core$String $s2118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x74\x69\x74\x6c\x65\x3d\x22\x24\x33\x22\x20\x2f\x3e", 36, -5185982321426610333, NULL };
static panda$core$String $s2121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x5c\x5c\x29", 21, -5830152919387063515, NULL };
static panda$core$String $s2122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x2f\x3e", 25, -7685348581218553223, NULL };
static panda$core$String $s2127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5b\x21\x5d\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d\x29", 38, 3513714089933290343, NULL };
static panda$core$String $s2164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s2183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s2211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, 14383652264361074, NULL };
static panda$core$String $s2230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static panda$core$String $s2242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s2248 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };
static panda$core$String $s2290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s2292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static panda$core$String $s2315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2320 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s2322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x71\x75\x6f\x74\x3b", 6, 1472784484255, NULL };
static panda$core$String $s2341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, 14383652264361074, NULL };
static panda$core$String $s2346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s2348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };
static panda$core$String $s2403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x3f\x5c\x5c\x6e", 7, 204157935605574, NULL };
static panda$core$String $s2404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s2420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s2448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, 14383652264361074, NULL };
static panda$core$String $s2467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static panda$core$String $s2479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2482 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s2485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };
static panda$core$String $s2502 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d\x29", 35, 4482227048438022174, NULL };
static panda$core$String $s2508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d\x5c\x28\x5b\x20\x5c\x74\x5d\x2a\x3c\x3f\x28\x2e\x2a\x3f\x29\x3e\x3f\x5b\x20\x5c\x74\x5d\x2a\x28\x28\x5b\x27\x22\x5d\x29\x28\x2e\x2a\x3f\x29\x5c\x35\x29\x3f\x5c\x29\x29", 52, 2691589156809831866, NULL };
static panda$core$String $s2516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x5b\x28\x5b\x5e\x5c\x5b\x5c\x5d\x5d\x2b\x29\x5c\x5d\x29", 16, 8227630457021096112, NULL };
static panda$core$String $s2522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x2a\x5c\x5c\x2a\x7c\x5f\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x5b\x2a\x5f\x5d\x2a\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 35, 636172404878895653, NULL };
static panda$core$String $s2523 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x74\x72\x6f\x6e\x67\x3e\x24\x32\x3c\x2f\x73\x74\x72\x6f\x6e\x67\x3e", 19, 504491683038092400, NULL };
static panda$core$String $s2526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x2a\x7c\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 26, -4247179954659836315, NULL };
static panda$core$String $s2527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x6d\x3e\x24\x32\x3c\x2f\x65\x6d\x3e", 11, 2723679958089201678, NULL };
static panda$core$String $s2530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x28\x3f\x21\x23\x3f\x5b\x78\x58\x5d\x3f\x28\x3f\x3a\x5b\x30\x2d\x39\x61\x2d\x66\x41\x2d\x46\x5d\x2b\x7c\x5c\x77\x2b\x29\x3b\x29", 33, -6716186838887255919, NULL };
static panda$core$String $s2531 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s2534 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28\x3f\x21\x5b\x61\x2d\x7a\x41\x2d\x5a\x2f\x3f\x5c\x24\x21\x5d\x29", 18, 6433614010358842861, NULL };
static panda$core$String $s2535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s2553 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x5b\x20\x5c\x74\x5d\x2b", 7, 207956274426062, NULL };
static panda$core$String $s2554 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2557 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2b\x24", 7, 204157886156304, NULL };
static panda$core$String $s2558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2564 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x63\x6f\x64\x65\x3e", 6, 1702543554134, NULL };
static panda$core$String $s2566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x63\x6f\x64\x65\x3e", 7, 171409136343781, NULL };
static panda$core$String $s2591 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3c\x21\x5c\x5c\x29\x28\x60\x2b\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x21\x60\x29\x5c\x31\x28\x3f\x21\x60\x29", 29, 7657757978565690602, NULL };

void org$pandalanguage$pandac$pandadoc$Markdown$init$panda$io$File$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$String$RP$Q(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$io$File* p_source, panda$core$MutableMethod* p_linkResolver) {
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
    panda$core$MutableMethod* $tmp23;
    panda$core$MutableMethod* $tmp24;
    org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp25;
    org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp26;
    org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp27;
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    org$pandalanguage$pandac$parser$Parser* $tmp7 = (org$pandalanguage$pandac$parser$Parser*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$class);
    org$pandalanguage$pandac$parser$Parser$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT($tmp7, self->errorQueue);
    $tmp6 = $tmp7;
    $tmp5 = $tmp6;
    self->parser = $tmp5;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    panda$collections$HashMap* $tmp10 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp10);
    $tmp9 = $tmp10;
    $tmp8 = $tmp9;
    self->linkDefinitions = $tmp8;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp8));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
    org$pandalanguage$pandac$pandadoc$Protector* $tmp13 = (org$pandalanguage$pandac$pandadoc$Protector*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Protector$class);
    org$pandalanguage$pandac$pandadoc$Protector$init($tmp13);
    $tmp12 = $tmp13;
    $tmp11 = $tmp12;
    self->charProtector = $tmp11;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    org$pandalanguage$pandac$pandadoc$Protector* $tmp16 = (org$pandalanguage$pandac$pandadoc$Protector*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Protector$class);
    org$pandalanguage$pandac$pandadoc$Protector$init($tmp16);
    $tmp15 = $tmp16;
    $tmp14 = $tmp15;
    self->htmlProtector = $tmp14;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp14));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp15));
    panda$math$Random* $tmp19 = panda$math$Random$default$R$panda$math$Random();
    $tmp18 = $tmp19;
    $tmp17 = $tmp18;
    self->random = $tmp17;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp17));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
    panda$core$Int64$init$builtin_int64(&$tmp20, 0);
    self->listLevel = $tmp20;
    {
        $tmp21 = self->source;
        $tmp22 = p_source;
        self->source = $tmp22;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp22));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp21));
    }
    {
        $tmp23 = self->linkResolver;
        $tmp24 = p_linkResolver;
        self->linkResolver = $tmp24;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp24));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp23));
    }
    {
        $tmp25 = self->parser->syntaxHighlighter;
        org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp28 = (org$pandalanguage$pandac$parser$SyntaxHighlighter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$class);
        org$pandalanguage$pandac$parser$SyntaxHighlighter$init($tmp28);
        $tmp27 = $tmp28;
        $tmp26 = $tmp27;
        self->parser->syntaxHighlighter = $tmp26;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp26));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp27));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp25));
    }
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$process$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$String* p_raw) {
    panda$core$MutableString* text32 = NULL;
    panda$core$MutableString* $tmp33;
    panda$core$MutableString* $tmp34;
    panda$core$RegularExpression* $tmp36;
    panda$core$RegularExpression* $tmp40;
    panda$core$RegularExpression* $tmp44;
    panda$core$RegularExpression* $tmp50;
    panda$core$Char8 $tmp58;
    panda$core$UInt8 $tmp59;
    panda$core$String* $returnValue60;
    panda$core$String* $tmp61;
    panda$core$String* $tmp62;
    int $tmp31;
    {
        panda$core$MutableString* $tmp35 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp35, p_raw);
        $tmp34 = $tmp35;
        $tmp33 = $tmp34;
        text32 = $tmp33;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp33));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp34));
        panda$core$RegularExpression* $tmp37 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp37, &$s38);
        $tmp36 = $tmp37;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(text32, $tmp36, &$s39);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp36));
        panda$core$RegularExpression* $tmp41 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp41, &$s42);
        $tmp40 = $tmp41;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(text32, $tmp40, &$s43);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp40));
        panda$core$RegularExpression* $tmp45 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp45, &$s46);
        $tmp44 = $tmp45;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(text32, $tmp44, &$s47);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp44));
        panda$core$MutableString$append$panda$core$String(text32, &$s48);
        (($fn49) self->$class->vtable[14])(self, text32);
        panda$core$RegularExpression* $tmp51 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp51, &$s52);
        $tmp50 = $tmp51;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(text32, $tmp50, &$s53);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp50));
        (($fn54) self->$class->vtable[8])(self, text32);
        (($fn55) self->$class->vtable[5])(self, text32);
        (($fn56) self->$class->vtable[6])(self, text32);
        (($fn57) self->$class->vtable[11])(self, text32);
        panda$core$UInt8$init$builtin_uint8(&$tmp59, 10);
        panda$core$Char8$init$panda$core$UInt8(&$tmp58, $tmp59);
        panda$core$MutableString$append$panda$core$Char8(text32, $tmp58);
        panda$core$String* $tmp63 = panda$core$MutableString$convert$R$panda$core$String(text32);
        $tmp62 = $tmp63;
        $tmp61 = $tmp62;
        $returnValue60 = $tmp61;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp61));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp62));
        $tmp31 = 0;
        goto $l29;
        $l64:;
        return $returnValue60;
    }
    $l29:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) text32));
    text32 = NULL;
    switch ($tmp31) {
        case 0: goto $l64;
    }
    $l66:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$encodeBackslashEscapes$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$collections$ListView* normalChars70 = NULL;
    panda$collections$ListView* $tmp71;
    panda$collections$ListView* $tmp72;
    panda$collections$ListView* escapedChars75 = NULL;
    panda$collections$ListView* $tmp76;
    panda$collections$ListView* $tmp77;
    panda$core$String* $tmp81;
    int $tmp69;
    {
        panda$collections$ListView* $tmp74 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s73);
        $tmp72 = $tmp74;
        $tmp71 = $tmp72;
        normalChars70 = $tmp71;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp71));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp72));
        panda$collections$ListView* $tmp79 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s78);
        $tmp77 = $tmp79;
        $tmp76 = $tmp77;
        escapedChars75 = $tmp76;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp76));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp77));
        panda$core$String* $tmp84 = (($fn83) self->charProtector->$class->vtable[2])(self->charProtector, &$s82);
        $tmp81 = $tmp84;
        panda$core$MutableString$replace$panda$core$String$panda$core$String(p_text, &$s80, $tmp81);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp81));
        (($fn86) self->$class->vtable[4])(self, p_text, normalChars70, &$s85);
        (($fn88) self->$class->vtable[4])(self, p_text, escapedChars75, &$s87);
    }
    $tmp69 = -1;
    goto $l67;
    $l67:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapedChars75));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) normalChars70));
    normalChars70 = NULL;
    escapedChars75 = NULL;
    switch ($tmp69) {
        case -1: goto $l89;
    }
    $l89:;
}
void org$pandalanguage$pandac$pandadoc$Markdown$encodeEscapes$panda$core$MutableString$panda$collections$ListView$LTpanda$core$Char8$GT$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text, panda$collections$ListView* p_chars, panda$core$String* p_slashes) {
    panda$collections$Iterator* Iter$158$993 = NULL;
    panda$collections$Iterator* $tmp94;
    panda$collections$Iterator* $tmp95;
    panda$core$Char8 ch111;
    panda$core$Object* $tmp112;
    panda$core$RegularExpression* regex117 = NULL;
    panda$core$RegularExpression* $tmp118;
    panda$core$RegularExpression* $tmp119;
    panda$core$String* $tmp121;
    panda$core$String* $tmp122;
    panda$core$Object* $tmp125;
    panda$core$String* $tmp128;
    panda$core$String* $tmp129;
    panda$core$Bit $tmp133;
    {
        int $tmp92;
        {
            ITable* $tmp96 = ((panda$collections$Iterable*) p_chars)->$class->itable;
            while ($tmp96->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp96 = $tmp96->next;
            }
            $fn98 $tmp97 = $tmp96->methods[0];
            panda$collections$Iterator* $tmp99 = $tmp97(((panda$collections$Iterable*) p_chars));
            $tmp95 = $tmp99;
            $tmp94 = $tmp95;
            Iter$158$993 = $tmp94;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp94));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp95));
            $l100:;
            ITable* $tmp103 = Iter$158$993->$class->itable;
            while ($tmp103->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp103 = $tmp103->next;
            }
            $fn105 $tmp104 = $tmp103->methods[0];
            panda$core$Bit $tmp106 = $tmp104(Iter$158$993);
            panda$core$Bit $tmp107 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp106);
            bool $tmp102 = $tmp107.value;
            if (!$tmp102) goto $l101;
            {
                int $tmp110;
                {
                    ITable* $tmp113 = Iter$158$993->$class->itable;
                    while ($tmp113->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp113 = $tmp113->next;
                    }
                    $fn115 $tmp114 = $tmp113->methods[1];
                    panda$core$Object* $tmp116 = $tmp114(Iter$158$993);
                    $tmp112 = $tmp116;
                    ch111 = ((panda$core$Char8$wrapper*) $tmp112)->value;
                    panda$core$Panda$unref$panda$core$Object($tmp112);
                    panda$core$RegularExpression* $tmp120 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                    panda$core$String* $tmp124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s123, p_slashes);
                    $tmp122 = $tmp124;
                    panda$core$Char8$wrapper* $tmp126;
                    $tmp126 = (panda$core$Char8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Char8$wrapperclass);
                    $tmp126->value = ch111;
                    $tmp125 = ((panda$core$Object*) $tmp126);
                    panda$core$String* $tmp127 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp122, $tmp125);
                    $tmp121 = $tmp127;
                    panda$core$RegularExpression$init$panda$core$String($tmp120, $tmp121);
                    $tmp119 = $tmp120;
                    $tmp118 = $tmp119;
                    regex117 = $tmp118;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp118));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp119));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp121));
                    panda$core$Panda$unref$panda$core$Object($tmp125);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp122));
                    panda$core$String* $tmp130 = panda$core$Char8$convert$R$panda$core$String(ch111);
                    $tmp129 = $tmp130;
                    panda$core$String* $tmp132 = (($fn131) self->charProtector->$class->vtable[2])(self->charProtector, $tmp129);
                    $tmp128 = $tmp132;
                    panda$core$Bit$init$builtin_bit(&$tmp133, false);
                    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit(p_text, regex117, $tmp128, $tmp133);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp128));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp129));
                }
                $tmp110 = -1;
                goto $l108;
                $l108:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) regex117));
                regex117 = NULL;
                switch ($tmp110) {
                    case -1: goto $l134;
                }
                $l134:;
            }
            goto $l100;
            $l101:;
        }
        $tmp92 = -1;
        goto $l90;
        $l90:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$158$993));
        Iter$158$993 = NULL;
        switch ($tmp92) {
            case -1: goto $l135;
        }
        $l135:;
    }
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous1$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* id139 = NULL;
    panda$core$String* $tmp140;
    panda$core$Object* $tmp141;
    panda$core$Int64 $tmp142;
    panda$core$MutableString* url147 = NULL;
    panda$core$MutableString* $tmp148;
    panda$core$MutableString* $tmp149;
    panda$core$Object* $tmp151;
    panda$core$Int64 $tmp152;
    panda$core$String* title158 = NULL;
    panda$core$Int64 $tmp163;
    panda$core$String* $tmp165;
    panda$core$String* $tmp166;
    panda$core$Object* $tmp167;
    panda$core$Int64 $tmp168;
    panda$core$String* $tmp173;
    panda$core$String* $tmp174;
    panda$core$String* $tmp176;
    panda$core$String* $tmp177;
    panda$core$String* $tmp178;
    panda$core$String* $tmp182;
    panda$core$String* $tmp183;
    org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp185;
    panda$core$String* $tmp187;
    panda$core$String* $returnValue189;
    panda$core$String* $tmp190;
    int $tmp138;
    {
        panda$core$Int64$init$builtin_int64(&$tmp142, 1);
        ITable* $tmp143 = p_groups->$class->itable;
        while ($tmp143->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp143 = $tmp143->next;
        }
        $fn145 $tmp144 = $tmp143->methods[0];
        panda$core$Object* $tmp146 = $tmp144(p_groups, $tmp142);
        $tmp141 = $tmp146;
        $tmp140 = ((panda$core$String*) $tmp141);
        id139 = $tmp140;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp140));
        panda$core$Panda$unref$panda$core$Object($tmp141);
        panda$core$MutableString* $tmp150 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$Int64$init$builtin_int64(&$tmp152, 2);
        ITable* $tmp153 = p_groups->$class->itable;
        while ($tmp153->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp153 = $tmp153->next;
        }
        $fn155 $tmp154 = $tmp153->methods[0];
        panda$core$Object* $tmp156 = $tmp154(p_groups, $tmp152);
        $tmp151 = $tmp156;
        panda$core$MutableString$init$panda$core$String($tmp150, ((panda$core$String*) $tmp151));
        $tmp149 = $tmp150;
        $tmp148 = $tmp149;
        url147 = $tmp148;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp148));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp149));
        panda$core$Panda$unref$panda$core$Object($tmp151);
        (($fn157) self->$class->vtable[28])(self, url147);
        memset(&title158, 0, sizeof(title158));
        ITable* $tmp159 = ((panda$collections$CollectionView*) p_groups)->$class->itable;
        while ($tmp159->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp159 = $tmp159->next;
        }
        $fn161 $tmp160 = $tmp159->methods[0];
        panda$core$Int64 $tmp162 = $tmp160(((panda$collections$CollectionView*) p_groups));
        panda$core$Int64$init$builtin_int64(&$tmp163, 3);
        panda$core$Bit $tmp164 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp162, $tmp163);
        if ($tmp164.value) {
        {
            {
                $tmp165 = title158;
                panda$core$Int64$init$builtin_int64(&$tmp168, 3);
                ITable* $tmp169 = p_groups->$class->itable;
                while ($tmp169->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp169 = $tmp169->next;
                }
                $fn171 $tmp170 = $tmp169->methods[0];
                panda$core$Object* $tmp172 = $tmp170(p_groups, $tmp168);
                $tmp167 = $tmp172;
                $tmp166 = ((panda$core$String*) $tmp167);
                title158 = $tmp166;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp166));
                panda$core$Panda$unref$panda$core$Object($tmp167);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp165));
            }
            if (((panda$core$Bit) { title158 == NULL }).value) {
            {
                {
                    $tmp173 = title158;
                    $tmp174 = &$s175;
                    title158 = $tmp174;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp174));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp173));
                }
            }
            }
            {
                $tmp176 = title158;
                panda$core$String* $tmp181 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title158, &$s179, &$s180);
                $tmp178 = $tmp181;
                $tmp177 = $tmp178;
                title158 = $tmp177;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp177));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp178));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp176));
            }
        }
        }
        else {
        {
            {
                $tmp182 = title158;
                $tmp183 = &$s184;
                title158 = $tmp183;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp183));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp182));
            }
        }
        }
        org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp186 = (org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition$class);
        panda$core$String* $tmp188 = panda$core$MutableString$finish$R$panda$core$String(url147);
        $tmp187 = $tmp188;
        org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition$init$panda$core$String$panda$core$String($tmp186, $tmp187, title158);
        $tmp185 = $tmp186;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->linkDefinitions, ((panda$collections$Key*) id139), ((panda$core$Object*) $tmp185));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp185));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp187));
        $tmp190 = &$s191;
        $returnValue189 = $tmp190;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp190));
        $tmp138 = 0;
        goto $l136;
        $l192:;
        return $returnValue189;
    }
    $l136:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) title158));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) url147));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) id139));
    id139 = NULL;
    url147 = NULL;
    switch ($tmp138) {
        case 0: goto $l192;
    }
    $l194:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim2$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar198 = NULL;
    panda$core$Method* $tmp199;
    panda$core$Method* $tmp200;
    panda$core$Object* $tmp202;
    panda$core$Object* $tmp203;
    panda$core$Object* $returnValue204;
    panda$core$Object* $tmp205;
    panda$core$String* $tmp206;
    panda$core$String* $tmp207;
    int $tmp197;
    {
        panda$core$Method* $tmp201 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp201, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp200 = $tmp201;
        $tmp199 = $tmp200;
        methodVar198 = $tmp199;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp199));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp200));
        {
            $tmp202 = ((panda$core$MutableMethod*) methodVar198)->target;
            $tmp203 = self->target;
            ((panda$core$MutableMethod*) methodVar198)->target = $tmp203;
            panda$core$Panda$ref$panda$core$Object($tmp203);
            panda$core$Panda$unref$panda$core$Object($tmp202);
        }
        if (methodVar198->target) {
            $tmp207 = (($fn208) methodVar198->pointer)(methodVar198->target, p_p0);
        } else {
            $tmp207 = (($fn209) methodVar198->pointer)(p_p0);
        }
        $tmp206 = $tmp207;
        $tmp205 = ((panda$core$Object*) $tmp206);
        $returnValue204 = $tmp205;
        panda$core$Panda$ref$panda$core$Object($tmp205);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp206));
        $tmp197 = 0;
        goto $l195;
        $l210:;
        return $returnValue204;
    }
    $l195:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar198));
    methodVar198 = NULL;
    switch ($tmp197) {
        case 0: goto $l210;
    }
    $l212:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$stripLinkDefinitions$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$core$RegularExpression* p216 = NULL;
    panda$core$RegularExpression* $tmp217;
    panda$core$RegularExpression* $tmp218;
    panda$core$Int64 $tmp221;
    int $tmp215;
    {
        panda$core$RegularExpression* $tmp219 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp221, 1);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp219, &$s220, $tmp221);
        $tmp218 = $tmp219;
        $tmp217 = $tmp218;
        p216 = $tmp217;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp217));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp218));
        panda$core$MutableMethod* $tmp222 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp223 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp223, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous1$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp222, (panda$core$Int8*) &panda$core$MutableMethod$$shim2$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp223)));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_text, p216, ((panda$core$Object*) $tmp222));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp222));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp223));
    }
    $tmp215 = -1;
    goto $l213;
    $l213:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p216));
    p216 = NULL;
    switch ($tmp215) {
        case -1: goto $l224;
    }
    $l224:;
}
void org$pandalanguage$pandac$pandadoc$Markdown$runBlockGamut$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    (($fn225) self->$class->vtable[21])(self, p_text);
    (($fn226) self->$class->vtable[7])(self, p_text);
    (($fn227) self->$class->vtable[19])(self, p_text);
    (($fn228) self->$class->vtable[15])(self, p_text);
    (($fn229) self->$class->vtable[13])(self, p_text);
    (($fn230) self->$class->vtable[8])(self, p_text);
    (($fn231) self->$class->vtable[9])(self, p_text);
}
void org$pandalanguage$pandac$pandadoc$Markdown$doHorizontalRules$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$collections$Array* hrDelimiters235 = NULL;
    panda$collections$Array* $tmp236;
    panda$collections$Array* $tmp237;
    panda$collections$Iterator* Iter$209$9245 = NULL;
    panda$collections$Iterator* $tmp246;
    panda$collections$Iterator* $tmp247;
    panda$core$String* hrDelimiter263 = NULL;
    panda$core$String* $tmp264;
    panda$core$Object* $tmp265;
    panda$core$RegularExpression* $tmp270;
    panda$core$String* $tmp272;
    panda$core$String* $tmp273;
    int $tmp234;
    {
        panda$collections$Array* $tmp238 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp238);
        $tmp237 = $tmp238;
        $tmp236 = $tmp237;
        hrDelimiters235 = $tmp236;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp236));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp237));
        panda$collections$Array$add$panda$collections$Array$T(hrDelimiters235, ((panda$core$Object*) &$s239));
        panda$collections$Array$add$panda$collections$Array$T(hrDelimiters235, ((panda$core$Object*) &$s240));
        panda$collections$Array$add$panda$collections$Array$T(hrDelimiters235, ((panda$core$Object*) &$s241));
        {
            int $tmp244;
            {
                ITable* $tmp248 = ((panda$collections$Iterable*) hrDelimiters235)->$class->itable;
                while ($tmp248->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp248 = $tmp248->next;
                }
                $fn250 $tmp249 = $tmp248->methods[0];
                panda$collections$Iterator* $tmp251 = $tmp249(((panda$collections$Iterable*) hrDelimiters235));
                $tmp247 = $tmp251;
                $tmp246 = $tmp247;
                Iter$209$9245 = $tmp246;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp246));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp247));
                $l252:;
                ITable* $tmp255 = Iter$209$9245->$class->itable;
                while ($tmp255->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp255 = $tmp255->next;
                }
                $fn257 $tmp256 = $tmp255->methods[0];
                panda$core$Bit $tmp258 = $tmp256(Iter$209$9245);
                panda$core$Bit $tmp259 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp258);
                bool $tmp254 = $tmp259.value;
                if (!$tmp254) goto $l253;
                {
                    int $tmp262;
                    {
                        ITable* $tmp266 = Iter$209$9245->$class->itable;
                        while ($tmp266->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp266 = $tmp266->next;
                        }
                        $fn268 $tmp267 = $tmp266->methods[1];
                        panda$core$Object* $tmp269 = $tmp267(Iter$209$9245);
                        $tmp265 = $tmp269;
                        $tmp264 = ((panda$core$String*) $tmp265);
                        hrDelimiter263 = $tmp264;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp264));
                        panda$core$Panda$unref$panda$core$Object($tmp265);
                        panda$core$RegularExpression* $tmp271 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                        panda$core$String* $tmp275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s274, hrDelimiter263);
                        $tmp273 = $tmp275;
                        panda$core$String* $tmp277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp273, &$s276);
                        $tmp272 = $tmp277;
                        panda$core$RegularExpression$init$panda$core$String($tmp271, $tmp272);
                        $tmp270 = $tmp271;
                        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_text, $tmp270, &$s278);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp270));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp272));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp273));
                    }
                    $tmp262 = -1;
                    goto $l260;
                    $l260:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) hrDelimiter263));
                    hrDelimiter263 = NULL;
                    switch ($tmp262) {
                        case -1: goto $l279;
                    }
                    $l279:;
                }
                goto $l252;
                $l253:;
            }
            $tmp244 = -1;
            goto $l242;
            $l242:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$209$9245));
            Iter$209$9245 = NULL;
            switch ($tmp244) {
                case -1: goto $l280;
            }
            $l280:;
        }
    }
    $tmp234 = -1;
    goto $l232;
    $l232:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) hrDelimiters235));
    hrDelimiters235 = NULL;
    switch ($tmp234) {
        case -1: goto $l281;
    }
    $l281:;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous3$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* literal285 = NULL;
    panda$core$String* $tmp286;
    panda$core$Object* $tmp287;
    panda$core$Int64 $tmp288;
    panda$core$String* $returnValue293;
    panda$core$String* $tmp294;
    panda$core$String* $tmp295;
    panda$core$String* $tmp296;
    panda$core$String* $tmp298;
    int $tmp284;
    {
        panda$core$Int64$init$builtin_int64(&$tmp288, 0);
        ITable* $tmp289 = p_groups->$class->itable;
        while ($tmp289->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp289 = $tmp289->next;
        }
        $fn291 $tmp290 = $tmp289->methods[0];
        panda$core$Object* $tmp292 = $tmp290(p_groups, $tmp288);
        $tmp287 = $tmp292;
        $tmp286 = ((panda$core$String*) $tmp287);
        literal285 = $tmp286;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp286));
        panda$core$Panda$unref$panda$core$Object($tmp287);
        panda$core$String* $tmp300 = (($fn299) self->htmlProtector->$class->vtable[2])(self->htmlProtector, literal285);
        $tmp298 = $tmp300;
        panda$core$String* $tmp301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s297, $tmp298);
        $tmp296 = $tmp301;
        panda$core$String* $tmp303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp296, &$s302);
        $tmp295 = $tmp303;
        $tmp294 = $tmp295;
        $returnValue293 = $tmp294;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp294));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp295));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp296));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp298));
        $tmp284 = 0;
        goto $l282;
        $l304:;
        return $returnValue293;
    }
    $l282:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) literal285));
    literal285 = NULL;
    switch ($tmp284) {
        case 0: goto $l304;
    }
    $l306:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim4$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar310 = NULL;
    panda$core$Method* $tmp311;
    panda$core$Method* $tmp312;
    panda$core$Object* $tmp314;
    panda$core$Object* $tmp315;
    panda$core$Object* $returnValue316;
    panda$core$Object* $tmp317;
    panda$core$String* $tmp318;
    panda$core$String* $tmp319;
    int $tmp309;
    {
        panda$core$Method* $tmp313 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp313, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp312 = $tmp313;
        $tmp311 = $tmp312;
        methodVar310 = $tmp311;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp311));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp312));
        {
            $tmp314 = ((panda$core$MutableMethod*) methodVar310)->target;
            $tmp315 = self->target;
            ((panda$core$MutableMethod*) methodVar310)->target = $tmp315;
            panda$core$Panda$ref$panda$core$Object($tmp315);
            panda$core$Panda$unref$panda$core$Object($tmp314);
        }
        if (methodVar310->target) {
            $tmp319 = (($fn320) methodVar310->pointer)(methodVar310->target, p_p0);
        } else {
            $tmp319 = (($fn321) methodVar310->pointer)(p_p0);
        }
        $tmp318 = $tmp319;
        $tmp317 = ((panda$core$Object*) $tmp318);
        $returnValue316 = $tmp317;
        panda$core$Panda$ref$panda$core$Object($tmp317);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp318));
        $tmp309 = 0;
        goto $l307;
        $l322:;
        return $returnValue316;
    }
    $l307:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar310));
    methodVar310 = NULL;
    switch ($tmp309) {
        case 0: goto $l322;
    }
    $l324:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim5$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar328 = NULL;
    panda$core$Method* $tmp329;
    panda$core$Method* $tmp330;
    panda$core$Object* $tmp332;
    panda$core$Object* $tmp333;
    panda$core$Object* $returnValue334;
    panda$core$Object* $tmp335;
    panda$core$String* $tmp336;
    panda$core$String* $tmp337;
    int $tmp327;
    {
        panda$core$Method* $tmp331 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp331, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp330 = $tmp331;
        $tmp329 = $tmp330;
        methodVar328 = $tmp329;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp329));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp330));
        {
            $tmp332 = ((panda$core$MutableMethod*) methodVar328)->target;
            $tmp333 = self->target;
            ((panda$core$MutableMethod*) methodVar328)->target = $tmp333;
            panda$core$Panda$ref$panda$core$Object($tmp333);
            panda$core$Panda$unref$panda$core$Object($tmp332);
        }
        if (methodVar328->target) {
            $tmp337 = (($fn338) methodVar328->pointer)(methodVar328->target, p_p0);
        } else {
            $tmp337 = (($fn339) methodVar328->pointer)(p_p0);
        }
        $tmp336 = $tmp337;
        $tmp335 = ((panda$core$Object*) $tmp336);
        $returnValue334 = $tmp335;
        panda$core$Panda$ref$panda$core$Object($tmp335);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp336));
        $tmp327 = 0;
        goto $l325;
        $l340:;
        return $returnValue334;
    }
    $l325:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar328));
    methodVar328 = NULL;
    switch ($tmp327) {
        case 0: goto $l340;
    }
    $l342:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim6$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar346 = NULL;
    panda$core$Method* $tmp347;
    panda$core$Method* $tmp348;
    panda$core$Object* $tmp350;
    panda$core$Object* $tmp351;
    panda$core$Object* $returnValue352;
    panda$core$Object* $tmp353;
    panda$core$String* $tmp354;
    panda$core$String* $tmp355;
    int $tmp345;
    {
        panda$core$Method* $tmp349 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp349, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp348 = $tmp349;
        $tmp347 = $tmp348;
        methodVar346 = $tmp347;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp347));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp348));
        {
            $tmp350 = ((panda$core$MutableMethod*) methodVar346)->target;
            $tmp351 = self->target;
            ((panda$core$MutableMethod*) methodVar346)->target = $tmp351;
            panda$core$Panda$ref$panda$core$Object($tmp351);
            panda$core$Panda$unref$panda$core$Object($tmp350);
        }
        if (methodVar346->target) {
            $tmp355 = (($fn356) methodVar346->pointer)(methodVar346->target, p_p0);
        } else {
            $tmp355 = (($fn357) methodVar346->pointer)(p_p0);
        }
        $tmp354 = $tmp355;
        $tmp353 = ((panda$core$Object*) $tmp354);
        $returnValue352 = $tmp353;
        panda$core$Panda$ref$panda$core$Object($tmp353);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp354));
        $tmp345 = 0;
        goto $l343;
        $l358:;
        return $returnValue352;
    }
    $l343:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar346));
    methodVar346 = NULL;
    switch ($tmp345) {
        case 0: goto $l358;
    }
    $l360:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim7$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar364 = NULL;
    panda$core$Method* $tmp365;
    panda$core$Method* $tmp366;
    panda$core$Object* $tmp368;
    panda$core$Object* $tmp369;
    panda$core$Object* $returnValue370;
    panda$core$Object* $tmp371;
    panda$core$String* $tmp372;
    panda$core$String* $tmp373;
    int $tmp363;
    {
        panda$core$Method* $tmp367 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp367, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp366 = $tmp367;
        $tmp365 = $tmp366;
        methodVar364 = $tmp365;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp365));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp366));
        {
            $tmp368 = ((panda$core$MutableMethod*) methodVar364)->target;
            $tmp369 = self->target;
            ((panda$core$MutableMethod*) methodVar364)->target = $tmp369;
            panda$core$Panda$ref$panda$core$Object($tmp369);
            panda$core$Panda$unref$panda$core$Object($tmp368);
        }
        if (methodVar364->target) {
            $tmp373 = (($fn374) methodVar364->pointer)(methodVar364->target, p_p0);
        } else {
            $tmp373 = (($fn375) methodVar364->pointer)(p_p0);
        }
        $tmp372 = $tmp373;
        $tmp371 = ((panda$core$Object*) $tmp372);
        $returnValue370 = $tmp371;
        panda$core$Panda$ref$panda$core$Object($tmp371);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp372));
        $tmp363 = 0;
        goto $l361;
        $l376:;
        return $returnValue370;
    }
    $l361:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar364));
    methodVar364 = NULL;
    switch ($tmp363) {
        case 0: goto $l376;
    }
    $l378:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$hashHTMLBlocks$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$collections$Array* tagsA382 = NULL;
    panda$collections$Array* $tmp383;
    panda$collections$Array* $tmp384;
    panda$collections$Array* tagsB406 = NULL;
    panda$collections$Array* $tmp407;
    panda$collections$Array* $tmp408;
    panda$core$String* alternationA412 = NULL;
    panda$core$String* $tmp413;
    panda$core$String* $tmp414;
    panda$core$String* alternationB420 = NULL;
    panda$core$String* $tmp421;
    panda$core$String* $tmp422;
    panda$core$String* $tmp423;
    panda$core$String* $tmp424;
    panda$core$String* $tmp425;
    panda$core$String* $tmp429;
    panda$core$Int64 lessThanTab438;
    panda$core$Int64 $tmp439;
    panda$core$Int64 $tmp440;
    panda$core$RegularExpression* p1442 = NULL;
    panda$core$RegularExpression* $tmp443;
    panda$core$RegularExpression* $tmp444;
    panda$core$String* $tmp446;
    panda$core$String* $tmp447;
    panda$core$String* $tmp448;
    panda$core$String* $tmp449;
    panda$core$String* $tmp450;
    panda$core$String* $tmp451;
    panda$core$String* $tmp452;
    panda$core$Int64 $tmp467;
    panda$core$Int64 $tmp468;
    panda$core$Method* protectHTML470 = NULL;
    panda$core$Method* $tmp471;
    panda$core$RegularExpression* p2474 = NULL;
    panda$core$RegularExpression* $tmp475;
    panda$core$RegularExpression* $tmp476;
    panda$core$String* $tmp478;
    panda$core$String* $tmp479;
    panda$core$String* $tmp480;
    panda$core$String* $tmp481;
    panda$core$String* $tmp482;
    panda$core$String* $tmp483;
    panda$core$String* $tmp484;
    panda$core$Int64 $tmp499;
    panda$core$Int64 $tmp500;
    panda$core$RegularExpression* p3503 = NULL;
    panda$core$RegularExpression* $tmp504;
    panda$core$RegularExpression* $tmp505;
    panda$core$String* $tmp507;
    panda$core$String* $tmp508;
    panda$core$String* $tmp509;
    panda$core$String* $tmp510;
    panda$core$String* $tmp511;
    panda$core$String* $tmp512;
    panda$core$String* $tmp513;
    panda$core$String* $tmp514;
    panda$core$Object* $tmp516;
    panda$core$Int64 $tmp533;
    panda$core$RegularExpression* p4535 = NULL;
    panda$core$RegularExpression* $tmp536;
    panda$core$RegularExpression* $tmp537;
    panda$core$String* $tmp539;
    panda$core$String* $tmp540;
    panda$core$String* $tmp541;
    panda$core$String* $tmp542;
    panda$core$String* $tmp543;
    panda$core$String* $tmp544;
    panda$core$String* $tmp545;
    panda$core$String* $tmp546;
    panda$core$String* $tmp547;
    panda$core$String* $tmp548;
    panda$core$Object* $tmp550;
    int $tmp381;
    {
        panda$collections$Array* $tmp385 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp385);
        $tmp384 = $tmp385;
        $tmp383 = $tmp384;
        tagsA382 = $tmp383;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp383));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp384));
        panda$collections$Array$add$panda$collections$Array$T(tagsA382, ((panda$core$Object*) &$s386));
        panda$collections$Array$add$panda$collections$Array$T(tagsA382, ((panda$core$Object*) &$s387));
        panda$collections$Array$add$panda$collections$Array$T(tagsA382, ((panda$core$Object*) &$s388));
        panda$collections$Array$add$panda$collections$Array$T(tagsA382, ((panda$core$Object*) &$s389));
        panda$collections$Array$add$panda$collections$Array$T(tagsA382, ((panda$core$Object*) &$s390));
        panda$collections$Array$add$panda$collections$Array$T(tagsA382, ((panda$core$Object*) &$s391));
        panda$collections$Array$add$panda$collections$Array$T(tagsA382, ((panda$core$Object*) &$s392));
        panda$collections$Array$add$panda$collections$Array$T(tagsA382, ((panda$core$Object*) &$s393));
        panda$collections$Array$add$panda$collections$Array$T(tagsA382, ((panda$core$Object*) &$s394));
        panda$collections$Array$add$panda$collections$Array$T(tagsA382, ((panda$core$Object*) &$s395));
        panda$collections$Array$add$panda$collections$Array$T(tagsA382, ((panda$core$Object*) &$s396));
        panda$collections$Array$add$panda$collections$Array$T(tagsA382, ((panda$core$Object*) &$s397));
        panda$collections$Array$add$panda$collections$Array$T(tagsA382, ((panda$core$Object*) &$s398));
        panda$collections$Array$add$panda$collections$Array$T(tagsA382, ((panda$core$Object*) &$s399));
        panda$collections$Array$add$panda$collections$Array$T(tagsA382, ((panda$core$Object*) &$s400));
        panda$collections$Array$add$panda$collections$Array$T(tagsA382, ((panda$core$Object*) &$s401));
        panda$collections$Array$add$panda$collections$Array$T(tagsA382, ((panda$core$Object*) &$s402));
        panda$collections$Array$add$panda$collections$Array$T(tagsA382, ((panda$core$Object*) &$s403));
        panda$collections$Array$add$panda$collections$Array$T(tagsA382, ((panda$core$Object*) &$s404));
        panda$collections$Array$add$panda$collections$Array$T(tagsA382, ((panda$core$Object*) &$s405));
        panda$collections$Array* $tmp409 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp409);
        $tmp408 = $tmp409;
        $tmp407 = $tmp408;
        tagsB406 = $tmp407;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp407));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp408));
        panda$collections$Array$add$panda$collections$Array$T(tagsB406, ((panda$core$Object*) &$s410));
        panda$collections$Array$add$panda$collections$Array$T(tagsB406, ((panda$core$Object*) &$s411));
        ITable* $tmp416 = ((panda$collections$ListView*) tagsA382)->$class->itable;
        while ($tmp416->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp416 = $tmp416->next;
        }
        $fn418 $tmp417 = $tmp416->methods[5];
        panda$core$String* $tmp419 = $tmp417(((panda$collections$ListView*) tagsA382), &$s415);
        $tmp414 = $tmp419;
        $tmp413 = $tmp414;
        alternationA412 = $tmp413;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp413));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp414));
        panda$core$String* $tmp426 = panda$core$String$convert$R$panda$core$String(alternationA412);
        $tmp425 = $tmp426;
        panda$core$String* $tmp428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp425, &$s427);
        $tmp424 = $tmp428;
        ITable* $tmp431 = ((panda$collections$ListView*) tagsB406)->$class->itable;
        while ($tmp431->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp431 = $tmp431->next;
        }
        $fn433 $tmp432 = $tmp431->methods[5];
        panda$core$String* $tmp434 = $tmp432(((panda$collections$ListView*) tagsB406), &$s430);
        $tmp429 = $tmp434;
        panda$core$String* $tmp435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp424, $tmp429);
        $tmp423 = $tmp435;
        panda$core$String* $tmp437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp423, &$s436);
        $tmp422 = $tmp437;
        $tmp421 = $tmp422;
        alternationB420 = $tmp421;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp421));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp422));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp423));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp429));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp424));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp425));
        panda$core$Int64$init$builtin_int64(&$tmp439, 4);
        panda$core$Int64$init$builtin_int64(&$tmp440, 1);
        panda$core$Int64 $tmp441 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp439, $tmp440);
        lessThanTab438 = $tmp441;
        panda$core$RegularExpression* $tmp445 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$String* $tmp454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s453, alternationA412);
        $tmp452 = $tmp454;
        panda$core$String* $tmp456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp452, &$s455);
        $tmp451 = $tmp456;
        panda$core$String* $tmp458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp451, &$s457);
        $tmp450 = $tmp458;
        panda$core$String* $tmp460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp450, &$s459);
        $tmp449 = $tmp460;
        panda$core$String* $tmp462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp449, &$s461);
        $tmp448 = $tmp462;
        panda$core$String* $tmp464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp448, &$s463);
        $tmp447 = $tmp464;
        panda$core$String* $tmp466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp447, &$s465);
        $tmp446 = $tmp466;
        panda$core$Int64$init$builtin_int64(&$tmp467, 1);
        panda$core$Int64$init$builtin_int64(&$tmp468, 2);
        panda$core$Int64 $tmp469 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp467, $tmp468);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp445, $tmp446, $tmp469);
        $tmp444 = $tmp445;
        $tmp443 = $tmp444;
        p1442 = $tmp443;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp443));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp444));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp446));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp447));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp448));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp449));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp450));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp451));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp452));
        panda$core$MutableMethod* $tmp472 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp472, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous3$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
        $tmp471 = ((panda$core$Object*) $tmp472);
        protectHTML470 = $tmp471;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp471));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp472));
        panda$core$MutableMethod* $tmp473 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp473, (panda$core$Int8*) &panda$core$MutableMethod$$shim4$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) protectHTML470));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_text, p1442, ((panda$core$Object*) $tmp473));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp473));
        panda$core$RegularExpression* $tmp477 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$String* $tmp486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s485, alternationB420);
        $tmp484 = $tmp486;
        panda$core$String* $tmp488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp484, &$s487);
        $tmp483 = $tmp488;
        panda$core$String* $tmp490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp483, &$s489);
        $tmp482 = $tmp490;
        panda$core$String* $tmp492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp482, &$s491);
        $tmp481 = $tmp492;
        panda$core$String* $tmp494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp481, &$s493);
        $tmp480 = $tmp494;
        panda$core$String* $tmp496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp480, &$s495);
        $tmp479 = $tmp496;
        panda$core$String* $tmp498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp479, &$s497);
        $tmp478 = $tmp498;
        panda$core$Int64$init$builtin_int64(&$tmp499, 1);
        panda$core$Int64$init$builtin_int64(&$tmp500, 2);
        panda$core$Int64 $tmp501 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp499, $tmp500);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp477, $tmp478, $tmp501);
        $tmp476 = $tmp477;
        $tmp475 = $tmp476;
        p2474 = $tmp475;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp475));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp476));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp478));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp479));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp480));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp481));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp482));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp483));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp484));
        panda$core$MutableMethod* $tmp502 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp502, (panda$core$Int8*) &panda$core$MutableMethod$$shim5$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) protectHTML470));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_text, p2474, ((panda$core$Object*) $tmp502));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp502));
        panda$core$RegularExpression* $tmp506 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$wrapper* $tmp517;
        $tmp517 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp517->value = lessThanTab438;
        $tmp516 = ((panda$core$Object*) $tmp517);
        panda$core$String* $tmp518 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s515, $tmp516);
        $tmp514 = $tmp518;
        panda$core$String* $tmp520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp514, &$s519);
        $tmp513 = $tmp520;
        panda$core$String* $tmp522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp513, &$s521);
        $tmp512 = $tmp522;
        panda$core$String* $tmp524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp512, &$s523);
        $tmp511 = $tmp524;
        panda$core$String* $tmp526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp511, &$s525);
        $tmp510 = $tmp526;
        panda$core$String* $tmp528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp510, &$s527);
        $tmp509 = $tmp528;
        panda$core$String* $tmp530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp509, &$s529);
        $tmp508 = $tmp530;
        panda$core$String* $tmp532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp508, &$s531);
        $tmp507 = $tmp532;
        panda$core$Int64$init$builtin_int64(&$tmp533, 2);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp506, $tmp507, $tmp533);
        $tmp505 = $tmp506;
        $tmp504 = $tmp505;
        p3503 = $tmp504;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp504));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp505));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp507));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp508));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp509));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp510));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp511));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp512));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp513));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp514));
        panda$core$Panda$unref$panda$core$Object($tmp516);
        panda$core$MutableMethod* $tmp534 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp534, (panda$core$Int8*) &panda$core$MutableMethod$$shim6$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) protectHTML470));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_text, p3503, ((panda$core$Object*) $tmp534));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp534));
        panda$core$RegularExpression* $tmp538 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$wrapper* $tmp551;
        $tmp551 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp551->value = lessThanTab438;
        $tmp550 = ((panda$core$Object*) $tmp551);
        panda$core$String* $tmp552 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s549, $tmp550);
        $tmp548 = $tmp552;
        panda$core$String* $tmp554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp548, &$s553);
        $tmp547 = $tmp554;
        panda$core$String* $tmp556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp547, &$s555);
        $tmp546 = $tmp556;
        panda$core$String* $tmp558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp546, &$s557);
        $tmp545 = $tmp558;
        panda$core$String* $tmp560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp545, &$s559);
        $tmp544 = $tmp560;
        panda$core$String* $tmp562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp544, &$s561);
        $tmp543 = $tmp562;
        panda$core$String* $tmp564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp543, &$s563);
        $tmp542 = $tmp564;
        panda$core$String* $tmp566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp542, &$s565);
        $tmp541 = $tmp566;
        panda$core$String* $tmp568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp541, &$s567);
        $tmp540 = $tmp568;
        panda$core$String* $tmp570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp540, &$s569);
        $tmp539 = $tmp570;
        panda$core$RegularExpression$init$panda$core$String($tmp538, $tmp539);
        $tmp537 = $tmp538;
        $tmp536 = $tmp537;
        p4535 = $tmp536;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp536));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp537));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp539));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp540));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp541));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp542));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp543));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp544));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp545));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp546));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp547));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp548));
        panda$core$Panda$unref$panda$core$Object($tmp550);
        panda$core$MutableMethod* $tmp571 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp571, (panda$core$Int8*) &panda$core$MutableMethod$$shim7$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) protectHTML470));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_text, p4535, ((panda$core$Object*) $tmp571));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp571));
    }
    $tmp381 = -1;
    goto $l379;
    $l379:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p4535));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p3503));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p2474));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) protectHTML470));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1442));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) alternationB420));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) alternationA412));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tagsB406));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tagsA382));
    tagsA382 = NULL;
    tagsB406 = NULL;
    alternationA412 = NULL;
    alternationB420 = NULL;
    p1442 = NULL;
    protectHTML470 = NULL;
    p2474 = NULL;
    p3503 = NULL;
    p4535 = NULL;
    switch ($tmp381) {
        case -1: goto $l572;
    }
    $l572:;
}
void org$pandalanguage$pandac$pandadoc$Markdown$formParagraphs$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* $tmp576;
    panda$core$RegularExpression* $tmp580;
    panda$collections$Array* paragraphs584 = NULL;
    panda$core$Int64 $tmp586;
    panda$collections$Array* $tmp588;
    panda$collections$Array* $tmp589;
    panda$collections$Array* $tmp590;
    panda$collections$Array* $tmp592;
    panda$collections$Array* $tmp593;
    panda$collections$Array* $tmp594;
    panda$collections$ListView* $tmp596;
    panda$core$String* $tmp597;
    panda$core$RegularExpression* $tmp599;
    panda$core$Range$LTpanda$core$Int64$GT $tmp603;
    panda$core$Int64 $tmp604;
    panda$core$Bit $tmp606;
    panda$core$String* paragraph623 = NULL;
    panda$core$String* $tmp624;
    panda$core$Object* $tmp625;
    panda$core$String* decoded627 = NULL;
    panda$core$String* $tmp628;
    panda$core$String* $tmp629;
    panda$core$MutableString* mutable635 = NULL;
    panda$core$MutableString* $tmp636;
    panda$core$MutableString* $tmp637;
    panda$core$String* $tmp640;
    panda$core$String* $tmp641;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp654;
    panda$core$Bit $tmp655;
    panda$core$String* $tmp656;
    int $tmp575;
    {
        panda$core$RegularExpression* $tmp577 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp577, &$s578);
        $tmp576 = $tmp577;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_markup, $tmp576, &$s579);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp576));
        panda$core$RegularExpression* $tmp581 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp581, &$s582);
        $tmp580 = $tmp581;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_markup, $tmp580, &$s583);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp580));
        memset(&paragraphs584, 0, sizeof(paragraphs584));
        panda$core$Int64 $tmp585 = panda$core$MutableString$byteLength$R$panda$core$Int64(p_markup);
        panda$core$Int64$init$builtin_int64(&$tmp586, 0);
        panda$core$Bit $tmp587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp585, $tmp586);
        if ($tmp587.value) {
        {
            {
                $tmp588 = paragraphs584;
                panda$collections$Array* $tmp591 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp591);
                $tmp590 = $tmp591;
                $tmp589 = $tmp590;
                paragraphs584 = $tmp589;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp589));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp590));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp588));
            }
        }
        }
        else {
        {
            {
                $tmp592 = paragraphs584;
                panda$collections$Array* $tmp595 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$core$String* $tmp598 = panda$core$MutableString$convert$R$panda$core$String(p_markup);
                $tmp597 = $tmp598;
                panda$core$RegularExpression* $tmp600 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                panda$core$RegularExpression$init$panda$core$String($tmp600, &$s601);
                $tmp599 = $tmp600;
                panda$collections$ListView* $tmp602 = panda$core$String$split$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT($tmp597, $tmp599);
                $tmp596 = $tmp602;
                panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp595, ((panda$collections$CollectionView*) $tmp596));
                $tmp594 = $tmp595;
                $tmp593 = $tmp594;
                paragraphs584 = $tmp593;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp593));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp594));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp596));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp599));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp597));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp592));
            }
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp604, 0);
        panda$core$Int64 $tmp605 = panda$collections$Array$get_count$R$panda$core$Int64(paragraphs584);
        panda$core$Bit$init$builtin_bit(&$tmp606, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp603, $tmp604, $tmp605, $tmp606);
        int64_t $tmp608 = $tmp603.min.value;
        panda$core$Int64 i607 = { $tmp608 };
        int64_t $tmp610 = $tmp603.max.value;
        bool $tmp611 = $tmp603.inclusive.value;
        if ($tmp611) goto $l618; else goto $l619;
        $l618:;
        if ($tmp608 <= $tmp610) goto $l612; else goto $l614;
        $l619:;
        if ($tmp608 < $tmp610) goto $l612; else goto $l614;
        $l612:;
        {
            int $tmp622;
            {
                panda$core$Object* $tmp626 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(paragraphs584, i607);
                $tmp625 = $tmp626;
                $tmp624 = ((panda$core$String*) $tmp625);
                paragraph623 = $tmp624;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp624));
                panda$core$Panda$unref$panda$core$Object($tmp625);
                panda$core$String* $tmp631 = (($fn630) self->htmlProtector->$class->vtable[3])(self->htmlProtector, paragraph623);
                $tmp629 = $tmp631;
                $tmp628 = $tmp629;
                decoded627 = $tmp628;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp628));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp629));
                if (((panda$core$Bit) { decoded627 != NULL }).value) {
                {
                    panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(paragraphs584, i607, ((panda$core$Object*) decoded627));
                }
                }
                else {
                {
                    int $tmp634;
                    {
                        panda$core$MutableString* $tmp638 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                        panda$core$MutableString$init$panda$core$String($tmp638, paragraph623);
                        $tmp637 = $tmp638;
                        $tmp636 = $tmp637;
                        mutable635 = $tmp636;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp636));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp637));
                        (($fn639) self->$class->vtable[22])(self, mutable635);
                        panda$core$String* $tmp643 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s642, ((panda$core$Object*) mutable635));
                        $tmp641 = $tmp643;
                        panda$core$String* $tmp645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp641, &$s644);
                        $tmp640 = $tmp645;
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(paragraphs584, i607, ((panda$core$Object*) $tmp640));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp640));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp641));
                    }
                    $tmp634 = -1;
                    goto $l632;
                    $l632:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mutable635));
                    mutable635 = NULL;
                    switch ($tmp634) {
                        case -1: goto $l646;
                    }
                    $l646:;
                }
                }
            }
            $tmp622 = -1;
            goto $l620;
            $l620:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decoded627));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) paragraph623));
            paragraph623 = NULL;
            decoded627 = NULL;
            switch ($tmp622) {
                case -1: goto $l647;
            }
            $l647:;
        }
        $l615:;
        int64_t $tmp649 = $tmp610 - i607.value;
        if ($tmp611) goto $l650; else goto $l651;
        $l650:;
        if ((uint64_t) $tmp649 >= 1) goto $l648; else goto $l614;
        $l651:;
        if ((uint64_t) $tmp649 > 1) goto $l648; else goto $l614;
        $l648:;
        i607.value += 1;
        goto $l612;
        $l614:;
        panda$core$Bit$init$builtin_bit(&$tmp655, false);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp654, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp655);
        ITable* $tmp658 = ((panda$collections$ListView*) paragraphs584)->$class->itable;
        while ($tmp658->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp658 = $tmp658->next;
        }
        $fn660 $tmp659 = $tmp658->methods[5];
        panda$core$String* $tmp661 = $tmp659(((panda$collections$ListView*) paragraphs584), &$s657);
        $tmp656 = $tmp661;
        panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$core$String(p_markup, $tmp654, $tmp656);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp656));
    }
    $tmp575 = -1;
    goto $l573;
    $l573:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) paragraphs584));
    switch ($tmp575) {
        case -1: goto $l662;
    }
    $l662:;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous8$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* address666 = NULL;
    panda$core$String* $tmp667;
    panda$core$Object* $tmp668;
    panda$core$Int64 $tmp669;
    panda$core$MutableString* ed674 = NULL;
    panda$core$MutableString* $tmp675;
    panda$core$MutableString* $tmp676;
    panda$core$String* addr679 = NULL;
    panda$core$String* $tmp680;
    panda$core$String* $tmp681;
    panda$core$String* $tmp682;
    panda$core$String* url686 = NULL;
    panda$core$String* $tmp687;
    panda$core$String* $tmp688;
    panda$core$String* $tmp689;
    panda$core$String* $tmp690;
    panda$core$String* $returnValue697;
    panda$core$String* $tmp698;
    panda$core$String* $tmp699;
    panda$core$String* $tmp700;
    panda$core$String* $tmp701;
    panda$core$String* $tmp702;
    int $tmp665;
    {
        panda$core$Int64$init$builtin_int64(&$tmp669, 1);
        ITable* $tmp670 = p_groups->$class->itable;
        while ($tmp670->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp670 = $tmp670->next;
        }
        $fn672 $tmp671 = $tmp670->methods[0];
        panda$core$Object* $tmp673 = $tmp671(p_groups, $tmp669);
        $tmp668 = $tmp673;
        $tmp667 = ((panda$core$String*) $tmp668);
        address666 = $tmp667;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp667));
        panda$core$Panda$unref$panda$core$Object($tmp668);
        panda$core$MutableString* $tmp677 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp677, address666);
        $tmp676 = $tmp677;
        $tmp675 = $tmp676;
        ed674 = $tmp675;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp675));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp676));
        (($fn678) self->$class->vtable[11])(self, ed674);
        panda$core$String* $tmp683 = panda$core$MutableString$convert$R$panda$core$String(ed674);
        $tmp682 = $tmp683;
        panda$core$String* $tmp685 = (($fn684) self->$class->vtable[12])(self, $tmp682);
        $tmp681 = $tmp685;
        $tmp680 = $tmp681;
        addr679 = $tmp680;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp680));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp681));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp682));
        panda$core$String* $tmp692 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s691, ((panda$core$Object*) ed674));
        $tmp690 = $tmp692;
        panda$core$String* $tmp694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp690, &$s693);
        $tmp689 = $tmp694;
        panda$core$String* $tmp696 = (($fn695) self->$class->vtable[12])(self, $tmp689);
        $tmp688 = $tmp696;
        $tmp687 = $tmp688;
        url686 = $tmp687;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp687));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp688));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp689));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp690));
        panda$core$String* $tmp704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s703, url686);
        $tmp702 = $tmp704;
        panda$core$String* $tmp706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp702, &$s705);
        $tmp701 = $tmp706;
        panda$core$String* $tmp707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp701, addr679);
        $tmp700 = $tmp707;
        panda$core$String* $tmp709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp700, &$s708);
        $tmp699 = $tmp709;
        $tmp698 = $tmp699;
        $returnValue697 = $tmp698;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp698));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp699));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp700));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp701));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp702));
        $tmp665 = 0;
        goto $l663;
        $l710:;
        return $returnValue697;
    }
    $l663:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) url686));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) addr679));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ed674));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) address666));
    address666 = NULL;
    ed674 = NULL;
    addr679 = NULL;
    url686 = NULL;
    switch ($tmp665) {
        case 0: goto $l710;
    }
    $l712:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim9$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar716 = NULL;
    panda$core$Method* $tmp717;
    panda$core$Method* $tmp718;
    panda$core$Object* $tmp720;
    panda$core$Object* $tmp721;
    panda$core$Object* $returnValue722;
    panda$core$Object* $tmp723;
    panda$core$String* $tmp724;
    panda$core$String* $tmp725;
    int $tmp715;
    {
        panda$core$Method* $tmp719 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp719, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp718 = $tmp719;
        $tmp717 = $tmp718;
        methodVar716 = $tmp717;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp717));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp718));
        {
            $tmp720 = ((panda$core$MutableMethod*) methodVar716)->target;
            $tmp721 = self->target;
            ((panda$core$MutableMethod*) methodVar716)->target = $tmp721;
            panda$core$Panda$ref$panda$core$Object($tmp721);
            panda$core$Panda$unref$panda$core$Object($tmp720);
        }
        if (methodVar716->target) {
            $tmp725 = (($fn726) methodVar716->pointer)(methodVar716->target, p_p0);
        } else {
            $tmp725 = (($fn727) methodVar716->pointer)(p_p0);
        }
        $tmp724 = $tmp725;
        $tmp723 = ((panda$core$Object*) $tmp724);
        $returnValue722 = $tmp723;
        panda$core$Panda$ref$panda$core$Object($tmp723);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp724));
        $tmp715 = 0;
        goto $l713;
        $l728:;
        return $returnValue722;
    }
    $l713:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar716));
    methodVar716 = NULL;
    switch ($tmp715) {
        case 0: goto $l728;
    }
    $l730:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doAutoLinks$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* $tmp734;
    panda$core$RegularExpression* email738 = NULL;
    panda$core$RegularExpression* $tmp739;
    panda$core$RegularExpression* $tmp740;
    int $tmp733;
    {
        panda$core$RegularExpression* $tmp735 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp735, &$s736);
        $tmp734 = $tmp735;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_markup, $tmp734, &$s737);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp734));
        panda$core$RegularExpression* $tmp741 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp741, &$s742);
        $tmp740 = $tmp741;
        $tmp739 = $tmp740;
        email738 = $tmp739;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp739));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp740));
        panda$core$MutableMethod* $tmp743 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp744 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp744, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous8$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp743, (panda$core$Int8*) &panda$core$MutableMethod$$shim9$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp744)));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, email738, ((panda$core$Object*) $tmp743));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp743));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp744));
    }
    $tmp733 = -1;
    goto $l731;
    $l731:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) email738));
    email738 = NULL;
    switch ($tmp733) {
        case -1: goto $l745;
    }
    $l745:;
}
void org$pandalanguage$pandac$pandadoc$Markdown$unescapeSpecialChars$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_ed) {
    panda$collections$Iterator* Iter$366$9749 = NULL;
    panda$collections$Iterator* $tmp750;
    panda$collections$Iterator* $tmp751;
    panda$core$String* hash764 = NULL;
    panda$core$String* $tmp765;
    panda$core$Object* $tmp766;
    panda$core$String* plaintext771 = NULL;
    panda$core$String* $tmp772;
    panda$core$String* $tmp773;
    {
        int $tmp748;
        {
            panda$collections$Iterator* $tmp752 = panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(self->charProtector->decodeMap);
            $tmp751 = $tmp752;
            $tmp750 = $tmp751;
            Iter$366$9749 = $tmp750;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp750));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp751));
            $l753:;
            ITable* $tmp756 = Iter$366$9749->$class->itable;
            while ($tmp756->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp756 = $tmp756->next;
            }
            $fn758 $tmp757 = $tmp756->methods[0];
            panda$core$Bit $tmp759 = $tmp757(Iter$366$9749);
            panda$core$Bit $tmp760 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp759);
            bool $tmp755 = $tmp760.value;
            if (!$tmp755) goto $l754;
            {
                int $tmp763;
                {
                    ITable* $tmp767 = Iter$366$9749->$class->itable;
                    while ($tmp767->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp767 = $tmp767->next;
                    }
                    $fn769 $tmp768 = $tmp767->methods[1];
                    panda$core$Object* $tmp770 = $tmp768(Iter$366$9749);
                    $tmp766 = $tmp770;
                    $tmp765 = ((panda$core$String*) $tmp766);
                    hash764 = $tmp765;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp765));
                    panda$core$Panda$unref$panda$core$Object($tmp766);
                    panda$core$String* $tmp775 = (($fn774) self->charProtector->$class->vtable[3])(self->charProtector, hash764);
                    $tmp773 = $tmp775;
                    $tmp772 = $tmp773;
                    plaintext771 = $tmp772;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp772));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp773));
                    panda$core$MutableString$replace$panda$core$String$panda$core$String(p_ed, hash764, plaintext771);
                }
                $tmp763 = -1;
                goto $l761;
                $l761:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) plaintext771));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) hash764));
                hash764 = NULL;
                plaintext771 = NULL;
                switch ($tmp763) {
                    case -1: goto $l776;
                }
                $l776:;
            }
            goto $l753;
            $l754:;
        }
        $tmp748 = -1;
        goto $l746;
        $l746:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$366$9749));
        Iter$366$9749 = NULL;
        switch ($tmp748) {
            case -1: goto $l777;
        }
        $l777:;
    }
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$encodeEmail$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$String* p_s) {
    panda$core$MutableString* result781 = NULL;
    panda$core$MutableString* $tmp782;
    panda$core$MutableString* $tmp783;
    panda$collections$Iterator* Iter$374$9788 = NULL;
    panda$collections$Iterator* $tmp789;
    panda$collections$Iterator* $tmp790;
    panda$core$Char32 ch803;
    panda$core$Object* $tmp804;
    panda$core$Real64 r809;
    panda$core$Real64 $tmp814;
    panda$core$Object* $tmp817;
    panda$core$Char8 $tmp820;
    panda$core$UInt8 $tmp821;
    panda$core$Real64 $tmp822;
    panda$core$String* $tmp825;
    panda$core$Char8 $tmp829;
    panda$core$UInt8 $tmp830;
    panda$core$String* $returnValue832;
    panda$core$String* $tmp833;
    panda$core$String* $tmp834;
    int $tmp780;
    {
        panda$core$MutableString* $tmp784 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp784);
        $tmp783 = $tmp784;
        $tmp782 = $tmp783;
        result781 = $tmp782;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp782));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp783));
        {
            int $tmp787;
            {
                ITable* $tmp791 = ((panda$collections$Iterable*) p_s)->$class->itable;
                while ($tmp791->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp791 = $tmp791->next;
                }
                $fn793 $tmp792 = $tmp791->methods[0];
                panda$collections$Iterator* $tmp794 = $tmp792(((panda$collections$Iterable*) p_s));
                $tmp790 = $tmp794;
                $tmp789 = $tmp790;
                Iter$374$9788 = $tmp789;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp789));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp790));
                $l795:;
                ITable* $tmp798 = Iter$374$9788->$class->itable;
                while ($tmp798->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp798 = $tmp798->next;
                }
                $fn800 $tmp799 = $tmp798->methods[0];
                panda$core$Bit $tmp801 = $tmp799(Iter$374$9788);
                panda$core$Bit $tmp802 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp801);
                bool $tmp797 = $tmp802.value;
                if (!$tmp797) goto $l796;
                {
                    ITable* $tmp805 = Iter$374$9788->$class->itable;
                    while ($tmp805->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp805 = $tmp805->next;
                    }
                    $fn807 $tmp806 = $tmp805->methods[1];
                    panda$core$Object* $tmp808 = $tmp806(Iter$374$9788);
                    $tmp804 = $tmp808;
                    ch803 = ((panda$core$Char32$wrapper*) $tmp804)->value;
                    panda$core$Panda$unref$panda$core$Object($tmp804);
                    ITable* $tmp810 = self->random->$class->itable;
                    while ($tmp810->$class != (panda$core$Class*) &panda$math$Random$class) {
                        $tmp810 = $tmp810->next;
                    }
                    $fn812 $tmp811 = $tmp810->methods[5];
                    panda$core$Real64 $tmp813 = $tmp811(self->random);
                    r809 = $tmp813;
                    panda$core$Real64$init$builtin_float64(&$tmp814, 0.45);
                    panda$core$Bit $tmp815 = panda$core$Real64$$LT$panda$core$Real64$R$panda$core$Bit(r809, $tmp814);
                    if ($tmp815.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result781, &$s816);
                        panda$core$Int32 $tmp818 = panda$core$Char32$convert$R$panda$core$Int32(ch803);
                        panda$core$Int32$wrapper* $tmp819;
                        $tmp819 = (panda$core$Int32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$Int32$wrapperclass);
                        $tmp819->value = $tmp818;
                        $tmp817 = ((panda$core$Object*) $tmp819);
                        panda$core$MutableString$append$panda$core$Object(result781, $tmp817);
                        panda$core$Panda$unref$panda$core$Object($tmp817);
                        panda$core$UInt8$init$builtin_uint8(&$tmp821, 59);
                        panda$core$Char8$init$panda$core$UInt8(&$tmp820, $tmp821);
                        panda$core$MutableString$append$panda$core$Char8(result781, $tmp820);
                    }
                    }
                    else {
                    panda$core$Real64$init$builtin_float64(&$tmp822, 0.9);
                    panda$core$Bit $tmp823 = panda$core$Real64$$LT$panda$core$Real64$R$panda$core$Bit(r809, $tmp822);
                    if ($tmp823.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result781, &$s824);
                        panda$core$Int32 $tmp826 = panda$core$Char32$convert$R$panda$core$Int32(ch803);
                        panda$core$String* $tmp828 = panda$core$Int32$format$panda$core$String$R$panda$core$String($tmp826, &$s827);
                        $tmp825 = $tmp828;
                        panda$core$MutableString$append$panda$core$String(result781, $tmp825);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp825));
                        panda$core$UInt8$init$builtin_uint8(&$tmp830, 59);
                        panda$core$Char8$init$panda$core$UInt8(&$tmp829, $tmp830);
                        panda$core$MutableString$append$panda$core$Char8(result781, $tmp829);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$Char32(result781, ch803);
                    }
                    }
                    }
                }
                goto $l795;
                $l796:;
            }
            $tmp787 = -1;
            goto $l785;
            $l785:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$374$9788));
            Iter$374$9788 = NULL;
            switch ($tmp787) {
                case -1: goto $l831;
            }
            $l831:;
        }
        panda$core$String* $tmp835 = panda$core$MutableString$convert$R$panda$core$String(result781);
        $tmp834 = $tmp835;
        $tmp833 = $tmp834;
        $returnValue832 = $tmp833;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp833));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp834));
        $tmp780 = 0;
        goto $l778;
        $l836:;
        return $returnValue832;
    }
    $l778:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result781));
    result781 = NULL;
    switch ($tmp780) {
        case 0: goto $l836;
    }
    $l838:;
    abort();
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous11$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$Object* $returnValue839;
    panda$core$Object* $tmp840;
    panda$core$String* $tmp841;
    panda$core$Object* $tmp842;
    panda$core$Int64 $tmp843;
    panda$core$Int64$init$builtin_int64(&$tmp843, 1);
    ITable* $tmp844 = p_groups->$class->itable;
    while ($tmp844->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp844 = $tmp844->next;
    }
    $fn846 $tmp845 = $tmp844->methods[0];
    panda$core$Object* $tmp847 = $tmp845(p_groups, $tmp843);
    $tmp842 = $tmp847;
    panda$core$String* $tmp850 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(((panda$core$String*) $tmp842), &$s848, &$s849);
    $tmp841 = $tmp850;
    $tmp840 = ((panda$core$Object*) $tmp841);
    $returnValue839 = $tmp840;
    panda$core$Panda$ref$panda$core$Object($tmp840);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp841));
    panda$core$Panda$unref$panda$core$Object($tmp842);
    return $returnValue839;
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous12$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$Object* $returnValue852;
    panda$core$Object* $tmp853;
    panda$core$String* $tmp854;
    panda$core$Object* $tmp855;
    panda$core$Int64 $tmp856;
    panda$core$Int64$init$builtin_int64(&$tmp856, 1);
    ITable* $tmp857 = p_groups->$class->itable;
    while ($tmp857->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp857 = $tmp857->next;
    }
    $fn859 $tmp858 = $tmp857->methods[0];
    panda$core$Object* $tmp860 = $tmp858(p_groups, $tmp856);
    $tmp855 = $tmp860;
    panda$core$String* $tmp863 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(((panda$core$String*) $tmp855), &$s861, &$s862);
    $tmp854 = $tmp863;
    $tmp853 = ((panda$core$Object*) $tmp854);
    $returnValue852 = $tmp853;
    panda$core$Panda$ref$panda$core$Object($tmp853);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp854));
    panda$core$Panda$unref$panda$core$Object($tmp855);
    return $returnValue852;
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous10$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$MutableString* blockQuote868 = NULL;
    panda$core$MutableString* $tmp869;
    panda$core$MutableString* $tmp870;
    panda$core$Object* $tmp872;
    panda$core$Int64 $tmp873;
    panda$core$RegularExpression* $tmp878;
    panda$core$RegularExpression* $tmp882;
    panda$core$RegularExpression* p1889 = NULL;
    panda$core$RegularExpression* $tmp890;
    panda$core$RegularExpression* $tmp891;
    panda$core$Int64 $tmp894;
    panda$core$Object* $returnValue896;
    panda$core$Object* $tmp897;
    panda$core$String* $tmp898;
    panda$core$String* $tmp899;
    int $tmp867;
    {
        panda$core$MutableString* $tmp871 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$Int64$init$builtin_int64(&$tmp873, 1);
        ITable* $tmp874 = p_groups->$class->itable;
        while ($tmp874->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp874 = $tmp874->next;
        }
        $fn876 $tmp875 = $tmp874->methods[0];
        panda$core$Object* $tmp877 = $tmp875(p_groups, $tmp873);
        $tmp872 = $tmp877;
        panda$core$MutableString$init$panda$core$String($tmp871, ((panda$core$String*) $tmp872));
        $tmp870 = $tmp871;
        $tmp869 = $tmp870;
        blockQuote868 = $tmp869;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp869));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp870));
        panda$core$Panda$unref$panda$core$Object($tmp872);
        panda$core$RegularExpression* $tmp879 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp879, &$s880);
        $tmp878 = $tmp879;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(blockQuote868, $tmp878, &$s881);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp878));
        panda$core$RegularExpression* $tmp883 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp883, &$s884);
        $tmp882 = $tmp883;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(blockQuote868, $tmp882, &$s885);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp882));
        (($fn886) self->$class->vtable[6])(self, blockQuote868);
        panda$core$MutableString$replace$panda$core$String$panda$core$String(blockQuote868, &$s887, &$s888);
        panda$core$RegularExpression* $tmp892 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp894, 4);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp892, &$s893, $tmp894);
        $tmp891 = $tmp892;
        $tmp890 = $tmp891;
        p1889 = $tmp890;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp890));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp891));
        panda$core$MutableMethod* $tmp895 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp895, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous12$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) self));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(blockQuote868, p1889, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp895)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp895));
        panda$core$String* $tmp901 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s900, ((panda$core$Object*) blockQuote868));
        $tmp899 = $tmp901;
        panda$core$String* $tmp903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp899, &$s902);
        $tmp898 = $tmp903;
        $tmp897 = ((panda$core$Object*) $tmp898);
        $returnValue896 = $tmp897;
        panda$core$Panda$ref$panda$core$Object($tmp897);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp898));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp899));
        $tmp867 = 0;
        goto $l865;
        $l904:;
        return $returnValue896;
    }
    $l865:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1889));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) blockQuote868));
    blockQuote868 = NULL;
    p1889 = NULL;
    switch ($tmp867) {
        case 0: goto $l904;
    }
    $l906:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doBlockQuotes$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* p910 = NULL;
    panda$core$RegularExpression* $tmp911;
    panda$core$RegularExpression* $tmp912;
    panda$core$Int64 $tmp915;
    int $tmp909;
    {
        panda$core$RegularExpression* $tmp913 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp915, 1);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp913, &$s914, $tmp915);
        $tmp912 = $tmp913;
        $tmp911 = $tmp912;
        p910 = $tmp911;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp911));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp912));
        panda$core$MutableMethod* $tmp916 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp916, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous10$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) self));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, p910, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp916)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp916));
    }
    $tmp909 = -1;
    goto $l907;
    $l907:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p910));
    p910 = NULL;
    switch ($tmp909) {
        case -1: goto $l917;
    }
    $l917:;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous13$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* lineSoFar921 = NULL;
    panda$core$String* $tmp922;
    panda$core$Object* $tmp923;
    panda$core$Int64 $tmp924;
    panda$core$Int64 width929;
    panda$core$MutableString* replacement931 = NULL;
    panda$core$MutableString* $tmp932;
    panda$core$MutableString* $tmp933;
    panda$core$Char8 $tmp937;
    panda$core$UInt8 $tmp938;
    panda$core$Int64 $tmp939;
    panda$core$Int64 $tmp942;
    panda$core$Int64 $tmp944;
    panda$core$String* $returnValue946;
    panda$core$String* $tmp947;
    panda$core$String* $tmp948;
    int $tmp920;
    {
        panda$core$Int64$init$builtin_int64(&$tmp924, 1);
        ITable* $tmp925 = p_groups->$class->itable;
        while ($tmp925->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp925 = $tmp925->next;
        }
        $fn927 $tmp926 = $tmp925->methods[0];
        panda$core$Object* $tmp928 = $tmp926(p_groups, $tmp924);
        $tmp923 = $tmp928;
        $tmp922 = ((panda$core$String*) $tmp923);
        lineSoFar921 = $tmp922;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp922));
        panda$core$Panda$unref$panda$core$Object($tmp923);
        panda$core$Int64 $tmp930 = panda$core$String$length$R$panda$core$Int64(lineSoFar921);
        width929 = $tmp930;
        panda$core$MutableString* $tmp934 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp934, lineSoFar921);
        $tmp933 = $tmp934;
        $tmp932 = $tmp933;
        replacement931 = $tmp932;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp932));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp933));
        $l935:;
        {
            panda$core$UInt8$init$builtin_uint8(&$tmp938, 32);
            panda$core$Char8$init$panda$core$UInt8(&$tmp937, $tmp938);
            panda$core$MutableString$append$panda$core$Char8(replacement931, $tmp937);
            panda$core$Int64$init$builtin_int64(&$tmp939, 1);
            panda$core$Int64 $tmp940 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(width929, $tmp939);
            width929 = $tmp940;
        }
        panda$core$Int64$init$builtin_int64(&$tmp942, 4);
        panda$core$Int64 $tmp943 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(width929, $tmp942);
        panda$core$Int64$init$builtin_int64(&$tmp944, 0);
        panda$core$Bit $tmp945 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp943, $tmp944);
        bool $tmp941 = $tmp945.value;
        if ($tmp941) goto $l935;
        $l936:;
        panda$core$String* $tmp949 = panda$core$MutableString$convert$R$panda$core$String(replacement931);
        $tmp948 = $tmp949;
        $tmp947 = $tmp948;
        $returnValue946 = $tmp947;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp947));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp948));
        $tmp920 = 0;
        goto $l918;
        $l950:;
        return $returnValue946;
    }
    $l918:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) replacement931));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) lineSoFar921));
    lineSoFar921 = NULL;
    replacement931 = NULL;
    switch ($tmp920) {
        case 0: goto $l950;
    }
    $l952:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim14$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar956 = NULL;
    panda$core$Method* $tmp957;
    panda$core$Method* $tmp958;
    panda$core$Object* $tmp960;
    panda$core$Object* $tmp961;
    panda$core$Object* $returnValue962;
    panda$core$Object* $tmp963;
    panda$core$String* $tmp964;
    panda$core$String* $tmp965;
    int $tmp955;
    {
        panda$core$Method* $tmp959 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp959, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp958 = $tmp959;
        $tmp957 = $tmp958;
        methodVar956 = $tmp957;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp957));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp958));
        {
            $tmp960 = ((panda$core$MutableMethod*) methodVar956)->target;
            $tmp961 = self->target;
            ((panda$core$MutableMethod*) methodVar956)->target = $tmp961;
            panda$core$Panda$ref$panda$core$Object($tmp961);
            panda$core$Panda$unref$panda$core$Object($tmp960);
        }
        if (methodVar956->target) {
            $tmp965 = (($fn966) methodVar956->pointer)(methodVar956->target, p_p0);
        } else {
            $tmp965 = (($fn967) methodVar956->pointer)(p_p0);
        }
        $tmp964 = $tmp965;
        $tmp963 = ((panda$core$Object*) $tmp964);
        $returnValue962 = $tmp963;
        panda$core$Panda$ref$panda$core$Object($tmp963);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp964));
        $tmp955 = 0;
        goto $l953;
        $l968:;
        return $returnValue962;
    }
    $l953:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar956));
    methodVar956 = NULL;
    switch ($tmp955) {
        case 0: goto $l968;
    }
    $l970:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$detabify$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$core$RegularExpression* $tmp971;
    panda$core$RegularExpression* $tmp972 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp972, &$s973);
    $tmp971 = $tmp972;
    panda$core$MutableMethod* $tmp974 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
    panda$core$MutableMethod* $tmp975 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
    panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp975, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous13$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
    panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp974, (panda$core$Int8*) &panda$core$MutableMethod$$shim14$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp975)));
    panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_text, $tmp971, ((panda$core$Object*) $tmp974));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp974));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp975));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp971));
}
void org$pandalanguage$pandac$pandadoc$Markdown$outdent$panda$core$MutableString(panda$core$MutableString* p_s) {
    panda$core$RegularExpression* $tmp976;
    panda$core$RegularExpression* $tmp977 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp977, &$s978);
    $tmp976 = $tmp977;
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_s, $tmp976, &$s979);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp976));
}
panda$core$Object* panda$core$MutableMethod$$shim15$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$MutableMethod* methodVar983 = NULL;
    panda$core$MutableMethod* $tmp984;
    panda$core$Method* $tmp985;
    panda$core$Object* $tmp987;
    panda$core$Object* $tmp988;
    panda$core$Object* $returnValue989;
    panda$core$Object* $tmp990;
    panda$core$String* $tmp991;
    panda$core$String* $tmp992;
    int $tmp982;
    {
        panda$core$Method* $tmp986 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp986, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp985 = $tmp986;
        $tmp984 = ((panda$core$MutableMethod*) $tmp985);
        methodVar983 = $tmp984;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp984));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp985));
        {
            $tmp987 = methodVar983->target;
            $tmp988 = self->target;
            methodVar983->target = $tmp988;
            panda$core$Panda$ref$panda$core$Object($tmp988);
            panda$core$Panda$unref$panda$core$Object($tmp987);
        }
        if (methodVar983->target) {
            $tmp992 = (($fn993) methodVar983->pointer)(methodVar983->target, p_p0);
        } else {
            $tmp992 = (($fn994) methodVar983->pointer)(p_p0);
        }
        $tmp991 = $tmp992;
        $tmp990 = ((panda$core$Object*) $tmp991);
        $returnValue989 = $tmp990;
        panda$core$Panda$ref$panda$core$Object($tmp990);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp991));
        $tmp982 = 0;
        goto $l980;
        $l995:;
        return $returnValue989;
    }
    $l980:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar983));
    methodVar983 = NULL;
    switch ($tmp982) {
        case 0: goto $l995;
    }
    $l997:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doCodeBlocks$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* p1001 = NULL;
    panda$core$RegularExpression* $tmp1002;
    panda$core$RegularExpression* $tmp1003;
    panda$core$Int64 $tmp1006;
    org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* $tmp1009;
    int $tmp1000;
    {
        panda$core$RegularExpression* $tmp1004 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp1006, 1);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1004, &$s1005, $tmp1006);
        $tmp1003 = $tmp1004;
        $tmp1002 = $tmp1003;
        p1001 = $tmp1002;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1002));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1003));
        panda$core$MutableMethod* $tmp1007 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp1008 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* $tmp1010 = (org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$class);
        org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1010, self);
        $tmp1009 = $tmp1010;
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1008, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$replacement$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) $tmp1009));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1007, (panda$core$Int8*) &panda$core$MutableMethod$$shim15$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp1008)));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, p1001, ((panda$core$Object*) $tmp1007));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1007));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1008));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1009));
    }
    $tmp1000 = -1;
    goto $l998;
    $l998:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1001));
    p1001 = NULL;
    switch ($tmp1000) {
        case -1: goto $l1011;
    }
    $l1011:;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$prettyPrint$org$pandalanguage$pandac$parser$Parser$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, org$pandalanguage$pandac$parser$Parser* p_parser) {
    panda$core$MutableString* result1015 = NULL;
    panda$core$MutableString* $tmp1016;
    panda$core$MutableString* $tmp1017;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind current1020;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp1021;
    panda$core$Int64 $tmp1022;
    panda$collections$Iterator* Iter$503$91026 = NULL;
    panda$collections$Iterator* $tmp1027;
    panda$collections$Iterator* $tmp1028;
    org$pandalanguage$pandac$Pair* t1044 = NULL;
    org$pandalanguage$pandac$Pair* $tmp1045;
    panda$core$Object* $tmp1046;
    panda$core$Int64 $tmp1054;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $match$509_171059;
    panda$core$Int64 $tmp1060;
    panda$core$Int64 $tmp1063;
    panda$core$Int64 $tmp1066;
    panda$core$Int64 $tmp1070;
    panda$core$Int64 $tmp1073;
    panda$core$Int64 $tmp1076;
    panda$core$Int64 $tmp1079;
    panda$core$Int64 $tmp1082;
    panda$core$Int64 $tmp1085;
    panda$core$Int64 $tmp1088;
    panda$core$Int64 $tmp1091;
    panda$core$Int64 $tmp1094;
    panda$core$Int64 $tmp1097;
    panda$core$Bit $tmp1100;
    panda$core$MutableString* s1104 = NULL;
    panda$core$MutableString* $tmp1105;
    panda$core$MutableString* $tmp1106;
    panda$core$String* $tmp1108;
    panda$core$String* $tmp1117;
    panda$core$String* $tmp1122;
    panda$core$String* $tmp1127;
    panda$core$String* $tmp1132;
    panda$core$String* $tmp1137;
    panda$core$Int64 $tmp1142;
    panda$core$Int64 $tmp1145;
    panda$core$String* $tmp1148;
    panda$core$String* $tmp1149;
    panda$core$Object* $tmp1151;
    panda$core$Int64 $tmp1157;
    panda$core$Int64 $tmp1160;
    panda$core$Int64 $tmp1166;
    panda$core$String* $returnValue1170;
    panda$core$String* $tmp1171;
    panda$core$String* $tmp1172;
    int $tmp1014;
    {
        panda$core$MutableString* $tmp1018 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp1018, &$s1019);
        $tmp1017 = $tmp1018;
        $tmp1016 = $tmp1017;
        result1015 = $tmp1016;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1016));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1017));
        panda$core$Int64$init$builtin_int64(&$tmp1022, 0);
        org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp1021, $tmp1022);
        current1020 = $tmp1021;
        {
            int $tmp1025;
            {
                ITable* $tmp1029 = ((panda$collections$Iterable*) p_parser->syntaxHighlighter->tokens)->$class->itable;
                while ($tmp1029->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1029 = $tmp1029->next;
                }
                $fn1031 $tmp1030 = $tmp1029->methods[0];
                panda$collections$Iterator* $tmp1032 = $tmp1030(((panda$collections$Iterable*) p_parser->syntaxHighlighter->tokens));
                $tmp1028 = $tmp1032;
                $tmp1027 = $tmp1028;
                Iter$503$91026 = $tmp1027;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1027));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1028));
                $l1033:;
                ITable* $tmp1036 = Iter$503$91026->$class->itable;
                while ($tmp1036->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1036 = $tmp1036->next;
                }
                $fn1038 $tmp1037 = $tmp1036->methods[0];
                panda$core$Bit $tmp1039 = $tmp1037(Iter$503$91026);
                panda$core$Bit $tmp1040 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1039);
                bool $tmp1035 = $tmp1040.value;
                if (!$tmp1035) goto $l1034;
                {
                    int $tmp1043;
                    {
                        ITable* $tmp1047 = Iter$503$91026->$class->itable;
                        while ($tmp1047->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1047 = $tmp1047->next;
                        }
                        $fn1049 $tmp1048 = $tmp1047->methods[1];
                        panda$core$Object* $tmp1050 = $tmp1048(Iter$503$91026);
                        $tmp1046 = $tmp1050;
                        $tmp1045 = ((org$pandalanguage$pandac$Pair*) $tmp1046);
                        t1044 = $tmp1045;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1045));
                        panda$core$Panda$unref$panda$core$Object($tmp1046);
                        panda$core$Bit $tmp1052 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) t1044->second)->value.$rawValue, current1020.$rawValue);
                        bool $tmp1051 = $tmp1052.value;
                        if (!$tmp1051) goto $l1053;
                        panda$core$Int64$init$builtin_int64(&$tmp1054, 0);
                        panda$core$Bit $tmp1055 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(current1020.$rawValue, $tmp1054);
                        $tmp1051 = $tmp1055.value;
                        $l1053:;
                        panda$core$Bit $tmp1056 = { $tmp1051 };
                        if ($tmp1056.value) {
                        {
                            panda$core$MutableString$append$panda$core$String(result1015, &$s1057);
                        }
                        }
                        panda$core$Bit $tmp1058 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) t1044->second)->value.$rawValue, current1020.$rawValue);
                        if ($tmp1058.value) {
                        {
                            current1020 = ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) t1044->second)->value;
                            {
                                $match$509_171059 = current1020;
                                panda$core$Int64$init$builtin_int64(&$tmp1060, 0);
                                panda$core$Bit $tmp1061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$509_171059.$rawValue, $tmp1060);
                                if ($tmp1061.value) {
                                {
                                    {
                                    }
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1063, 1);
                                panda$core$Bit $tmp1064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$509_171059.$rawValue, $tmp1063);
                                bool $tmp1062 = $tmp1064.value;
                                if ($tmp1062) goto $l1065;
                                panda$core$Int64$init$builtin_int64(&$tmp1066, 2);
                                panda$core$Bit $tmp1067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$509_171059.$rawValue, $tmp1066);
                                $tmp1062 = $tmp1067.value;
                                $l1065:;
                                panda$core$Bit $tmp1068 = { $tmp1062 };
                                if ($tmp1068.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1015, &$s1069);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1070, 3);
                                panda$core$Bit $tmp1071 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$509_171059.$rawValue, $tmp1070);
                                if ($tmp1071.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1015, &$s1072);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1073, 4);
                                panda$core$Bit $tmp1074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$509_171059.$rawValue, $tmp1073);
                                if ($tmp1074.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1015, &$s1075);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1076, 5);
                                panda$core$Bit $tmp1077 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$509_171059.$rawValue, $tmp1076);
                                if ($tmp1077.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1015, &$s1078);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1079, 6);
                                panda$core$Bit $tmp1080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$509_171059.$rawValue, $tmp1079);
                                if ($tmp1080.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1015, &$s1081);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1082, 7);
                                panda$core$Bit $tmp1083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$509_171059.$rawValue, $tmp1082);
                                if ($tmp1083.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1015, &$s1084);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1085, 8);
                                panda$core$Bit $tmp1086 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$509_171059.$rawValue, $tmp1085);
                                if ($tmp1086.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1015, &$s1087);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1088, 9);
                                panda$core$Bit $tmp1089 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$509_171059.$rawValue, $tmp1088);
                                if ($tmp1089.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1015, &$s1090);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1091, 10);
                                panda$core$Bit $tmp1092 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$509_171059.$rawValue, $tmp1091);
                                if ($tmp1092.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1015, &$s1093);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1094, 11);
                                panda$core$Bit $tmp1095 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$509_171059.$rawValue, $tmp1094);
                                if ($tmp1095.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1015, &$s1096);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1097, 12);
                                panda$core$Bit $tmp1098 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$509_171059.$rawValue, $tmp1097);
                                if ($tmp1098.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1015, &$s1099);
                                }
                                }
                                else {
                                {
                                    panda$core$Bit$init$builtin_bit(&$tmp1100, false);
                                    if ($tmp1100.value) goto $l1101; else goto $l1102;
                                    $l1102:;
                                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1103, (panda$core$Int64) { 534 });
                                    abort();
                                    $l1101:;
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
                        panda$core$MutableString* $tmp1107 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                        panda$core$String* $tmp1109 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(p_parser, ((org$pandalanguage$pandac$parser$Token$wrapper*) t1044->first)->value);
                        $tmp1108 = $tmp1109;
                        panda$core$MutableString$init$panda$core$String($tmp1107, $tmp1108);
                        $tmp1106 = $tmp1107;
                        $tmp1105 = $tmp1106;
                        s1104 = $tmp1105;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1105));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1106));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1108));
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s1104, &$s1110, &$s1111);
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s1104, &$s1112, &$s1113);
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s1104, &$s1114, &$s1115);
                        panda$core$String* $tmp1120 = (($fn1119) self->charProtector->$class->vtable[2])(self->charProtector, &$s1118);
                        $tmp1117 = $tmp1120;
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s1104, &$s1116, $tmp1117);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1117));
                        panda$core$String* $tmp1125 = (($fn1124) self->charProtector->$class->vtable[2])(self->charProtector, &$s1123);
                        $tmp1122 = $tmp1125;
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s1104, &$s1121, $tmp1122);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1122));
                        panda$core$String* $tmp1130 = (($fn1129) self->charProtector->$class->vtable[2])(self->charProtector, &$s1128);
                        $tmp1127 = $tmp1130;
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s1104, &$s1126, $tmp1127);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1127));
                        panda$core$String* $tmp1135 = (($fn1134) self->charProtector->$class->vtable[2])(self->charProtector, &$s1133);
                        $tmp1132 = $tmp1135;
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s1104, &$s1131, $tmp1132);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1132));
                        panda$core$String* $tmp1140 = (($fn1139) self->charProtector->$class->vtable[2])(self->charProtector, &$s1138);
                        $tmp1137 = $tmp1140;
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s1104, &$s1136, $tmp1137);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1137));
                        panda$core$Int64$init$builtin_int64(&$tmp1142, 1);
                        panda$core$Bit $tmp1143 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(current1020.$rawValue, $tmp1142);
                        bool $tmp1141 = $tmp1143.value;
                        if (!$tmp1141) goto $l1144;
                        panda$core$Int64$init$builtin_int64(&$tmp1145, 2);
                        panda$core$Bit $tmp1146 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(current1020.$rawValue, $tmp1145);
                        $tmp1141 = $tmp1146.value;
                        $l1144:;
                        panda$core$Bit $tmp1147 = { $tmp1141 };
                        if ($tmp1147.value) {
                        {
                            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1152;
                            $tmp1152 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
                            $tmp1152->value = ((org$pandalanguage$pandac$parser$Token$wrapper*) t1044->first)->value.kind;
                            $tmp1151 = ((panda$core$Object*) $tmp1152);
                            panda$core$String* $tmp1153 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1150, $tmp1151);
                            $tmp1149 = $tmp1153;
                            panda$core$String* $tmp1155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1149, &$s1154);
                            $tmp1148 = $tmp1155;
                            panda$core$MutableString$append$panda$core$String(result1015, $tmp1148);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1148));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1149));
                            panda$core$Panda$unref$panda$core$Object($tmp1151);
                        }
                        }
                        panda$core$MutableString$append$panda$core$Object(result1015, ((panda$core$Object*) s1104));
                        panda$core$Int64$init$builtin_int64(&$tmp1157, 1);
                        panda$core$Bit $tmp1158 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(current1020.$rawValue, $tmp1157);
                        bool $tmp1156 = $tmp1158.value;
                        if (!$tmp1156) goto $l1159;
                        panda$core$Int64$init$builtin_int64(&$tmp1160, 2);
                        panda$core$Bit $tmp1161 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(current1020.$rawValue, $tmp1160);
                        $tmp1156 = $tmp1161.value;
                        $l1159:;
                        panda$core$Bit $tmp1162 = { $tmp1156 };
                        if ($tmp1162.value) {
                        {
                            panda$core$MutableString$append$panda$core$String(result1015, &$s1163);
                        }
                        }
                    }
                    $tmp1043 = -1;
                    goto $l1041;
                    $l1041:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1104));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1044));
                    t1044 = NULL;
                    s1104 = NULL;
                    switch ($tmp1043) {
                        case -1: goto $l1164;
                    }
                    $l1164:;
                }
                goto $l1033;
                $l1034:;
            }
            $tmp1025 = -1;
            goto $l1023;
            $l1023:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$503$91026));
            Iter$503$91026 = NULL;
            switch ($tmp1025) {
                case -1: goto $l1165;
            }
            $l1165:;
        }
        panda$core$Int64$init$builtin_int64(&$tmp1166, 0);
        panda$core$Bit $tmp1167 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(current1020.$rawValue, $tmp1166);
        if ($tmp1167.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1015, &$s1168);
        }
        }
        panda$core$MutableString$append$panda$core$String(result1015, &$s1169);
        panda$core$String* $tmp1173 = panda$core$MutableString$finish$R$panda$core$String(result1015);
        $tmp1172 = $tmp1173;
        $tmp1171 = $tmp1172;
        $returnValue1170 = $tmp1171;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1171));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1172));
        $tmp1014 = 0;
        goto $l1012;
        $l1174:;
        return $returnValue1170;
    }
    $l1012:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1015));
    result1015 = NULL;
    switch ($tmp1014) {
        case 0: goto $l1174;
    }
    $l1176:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$syntaxHighlight$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_ed) {
    panda$core$String* text1180 = NULL;
    panda$core$String* $tmp1181;
    panda$core$String* $tmp1182;
    panda$core$String* $tmp1183;
    org$pandalanguage$pandac$ASTNode* file1186 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1187;
    org$pandalanguage$pandac$ASTNode* $tmp1188;
    panda$core$Int64 $tmp1193;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1196;
    panda$core$Bit $tmp1197;
    panda$core$String* $tmp1198;
    panda$core$Int64 $tmp1207;
    panda$core$Int64 $tmp1211;
    org$pandalanguage$pandac$ASTNode* $tmp1214;
    panda$core$Int64 $tmp1217;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1219;
    panda$core$Bit $tmp1220;
    panda$core$String* $tmp1221;
    panda$core$Int64 $tmp1230;
    panda$core$Int64 $tmp1234;
    org$pandalanguage$pandac$ASTNode* $tmp1237;
    panda$core$Int64 $tmp1240;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1242;
    panda$core$Bit $tmp1243;
    panda$core$String* $tmp1244;
    org$pandalanguage$pandac$parser$Token next1250;
    panda$core$Int64 $tmp1252;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1254;
    panda$core$Bit $tmp1255;
    panda$core$String* $tmp1256;
    int $tmp1179;
    {
        panda$threads$MessageQueue$clear(self->errorQueue);
        panda$core$String* $tmp1184 = panda$core$MutableString$convert$R$panda$core$String(p_ed);
        $tmp1183 = $tmp1184;
        panda$core$String* $tmp1185 = panda$core$String$trim$R$panda$core$String($tmp1183);
        $tmp1182 = $tmp1185;
        $tmp1181 = $tmp1182;
        text1180 = $tmp1181;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1181));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1182));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1183));
        org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->parser, self->source, text1180);
        org$pandalanguage$pandac$ASTNode* $tmp1189 = org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(self->parser);
        $tmp1188 = $tmp1189;
        $tmp1187 = $tmp1188;
        file1186 = $tmp1187;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1187));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1188));
        bool $tmp1190 = ((panda$core$Bit) { file1186 != NULL }).value;
        if (!$tmp1190) goto $l1191;
        panda$core$Int64 $tmp1192 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(self->errorQueue);
        panda$core$Int64$init$builtin_int64(&$tmp1193, 0);
        panda$core$Bit $tmp1194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1192, $tmp1193);
        $tmp1190 = $tmp1194.value;
        $l1191:;
        panda$core$Bit $tmp1195 = { $tmp1190 };
        if ($tmp1195.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1197, false);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1196, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1197);
            panda$core$String* $tmp1200 = (($fn1199) self->$class->vtable[16])(self, self->parser);
            $tmp1198 = $tmp1200;
            panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$core$String(p_ed, $tmp1196, $tmp1198);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1198));
            $tmp1179 = 0;
            goto $l1177;
            $l1201:;
            return;
        }
        }
        panda$threads$MessageQueue$clear(self->errorQueue);
        org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->parser, self->source, text1180);
        $l1202:;
        org$pandalanguage$pandac$parser$Token $tmp1206 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self->parser);
        panda$core$Int64$init$builtin_int64(&$tmp1207, 0);
        panda$core$Bit $tmp1208 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1206.kind.$rawValue, $tmp1207);
        bool $tmp1205 = $tmp1208.value;
        if (!$tmp1205) goto $l1209;
        panda$core$Int64 $tmp1210 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(self->errorQueue);
        panda$core$Int64$init$builtin_int64(&$tmp1211, 0);
        panda$core$Bit $tmp1212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1210, $tmp1211);
        $tmp1205 = $tmp1212.value;
        $l1209:;
        panda$core$Bit $tmp1213 = { $tmp1205 };
        bool $tmp1204 = $tmp1213.value;
        if (!$tmp1204) goto $l1203;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1215 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self->parser);
            $tmp1214 = $tmp1215;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1214));
        }
        goto $l1202;
        $l1203:;
        panda$core$Int64 $tmp1216 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(self->errorQueue);
        panda$core$Int64$init$builtin_int64(&$tmp1217, 0);
        panda$core$Bit $tmp1218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1216, $tmp1217);
        if ($tmp1218.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1220, false);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1219, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1220);
            panda$core$String* $tmp1223 = (($fn1222) self->$class->vtable[16])(self, self->parser);
            $tmp1221 = $tmp1223;
            panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$core$String(p_ed, $tmp1219, $tmp1221);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1221));
            $tmp1179 = 1;
            goto $l1177;
            $l1224:;
            return;
        }
        }
        panda$threads$MessageQueue$clear(self->errorQueue);
        org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->parser, self->source, text1180);
        $l1225:;
        org$pandalanguage$pandac$parser$Token $tmp1229 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self->parser);
        panda$core$Int64$init$builtin_int64(&$tmp1230, 0);
        panda$core$Bit $tmp1231 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1229.kind.$rawValue, $tmp1230);
        bool $tmp1228 = $tmp1231.value;
        if (!$tmp1228) goto $l1232;
        panda$core$Int64 $tmp1233 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(self->errorQueue);
        panda$core$Int64$init$builtin_int64(&$tmp1234, 0);
        panda$core$Bit $tmp1235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1233, $tmp1234);
        $tmp1228 = $tmp1235.value;
        $l1232:;
        panda$core$Bit $tmp1236 = { $tmp1228 };
        bool $tmp1227 = $tmp1236.value;
        if (!$tmp1227) goto $l1226;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1238 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self->parser);
            $tmp1237 = $tmp1238;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1237));
        }
        goto $l1225;
        $l1226:;
        panda$core$Int64 $tmp1239 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(self->errorQueue);
        panda$core$Int64$init$builtin_int64(&$tmp1240, 0);
        panda$core$Bit $tmp1241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1239, $tmp1240);
        if ($tmp1241.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1243, false);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1242, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1243);
            panda$core$String* $tmp1246 = (($fn1245) self->$class->vtable[16])(self, self->parser);
            $tmp1244 = $tmp1246;
            panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$core$String(p_ed, $tmp1242, $tmp1244);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1244));
            $tmp1179 = 2;
            goto $l1177;
            $l1247:;
            return;
        }
        }
        panda$threads$MessageQueue$clear(self->errorQueue);
        org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->parser, self->source, text1180);
        $l1248:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1251 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self->parser);
            next1250 = $tmp1251;
            panda$core$Int64$init$builtin_int64(&$tmp1252, 0);
            panda$core$Bit $tmp1253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1250.kind.$rawValue, $tmp1252);
            if ($tmp1253.value) {
            {
                goto $l1249;
            }
            }
        }
        }
        $l1249:;
        panda$core$Bit$init$builtin_bit(&$tmp1255, false);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1254, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1255);
        panda$core$String* $tmp1258 = (($fn1257) self->$class->vtable[16])(self, self->parser);
        $tmp1256 = $tmp1258;
        panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$core$String(p_ed, $tmp1254, $tmp1256);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1256));
    }
    $tmp1179 = -1;
    goto $l1177;
    $l1177:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) file1186));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) text1180));
    text1180 = NULL;
    file1186 = NULL;
    switch ($tmp1179) {
        case 0: goto $l1201;
        case 1: goto $l1224;
        case 2: goto $l1247;
        case -1: goto $l1259;
    }
    $l1259:;
}
void org$pandalanguage$pandac$pandadoc$Markdown$encodeCode$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_ed) {
    panda$core$RegularExpression* $tmp1260;
    panda$core$RegularExpression* $tmp1261 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp1261, &$s1262);
    $tmp1260 = $tmp1261;
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_ed, $tmp1260, &$s1263);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1260));
    (($fn1264) self->$class->vtable[17])(self, p_ed);
    panda$core$MutableString$replace$panda$core$String$panda$core$String(p_ed, &$s1265, &$s1266);
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous16$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* list1270 = NULL;
    panda$core$String* $tmp1271;
    panda$core$Object* $tmp1272;
    panda$core$Int64 $tmp1273;
    panda$core$String* listStart1278 = NULL;
    panda$core$String* $tmp1279;
    panda$core$Object* $tmp1280;
    panda$core$Int64 $tmp1281;
    panda$core$String* listType1286 = NULL;
    panda$core$RegularExpression* $tmp1287;
    panda$core$String* $tmp1291;
    panda$core$String* $tmp1292;
    panda$core$String* $tmp1294;
    panda$core$String* $tmp1295;
    panda$core$String* $tmp1297;
    panda$core$String* $tmp1298;
    panda$core$String* $tmp1299;
    panda$core$RegularExpression* $tmp1300;
    panda$core$String* result1305 = NULL;
    panda$core$String* $tmp1306;
    panda$core$String* $tmp1307;
    panda$core$String* $tmp1310;
    panda$core$String* $tmp1311;
    panda$core$String* $tmp1312;
    panda$core$RegularExpression* $tmp1313;
    panda$core$Object* $returnValue1318;
    panda$core$Object* $tmp1319;
    panda$core$String* $tmp1320;
    panda$core$String* $tmp1321;
    panda$core$String* $tmp1322;
    panda$core$String* $tmp1323;
    panda$core$String* $tmp1324;
    panda$core$String* $tmp1325;
    int $tmp1269;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1273, 1);
        ITable* $tmp1274 = p_groups->$class->itable;
        while ($tmp1274->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1274 = $tmp1274->next;
        }
        $fn1276 $tmp1275 = $tmp1274->methods[0];
        panda$core$Object* $tmp1277 = $tmp1275(p_groups, $tmp1273);
        $tmp1272 = $tmp1277;
        $tmp1271 = ((panda$core$String*) $tmp1272);
        list1270 = $tmp1271;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1271));
        panda$core$Panda$unref$panda$core$Object($tmp1272);
        panda$core$Int64$init$builtin_int64(&$tmp1281, 3);
        ITable* $tmp1282 = p_groups->$class->itable;
        while ($tmp1282->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1282 = $tmp1282->next;
        }
        $fn1284 $tmp1283 = $tmp1282->methods[0];
        panda$core$Object* $tmp1285 = $tmp1283(p_groups, $tmp1281);
        $tmp1280 = $tmp1285;
        $tmp1279 = ((panda$core$String*) $tmp1280);
        listStart1278 = $tmp1279;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1279));
        panda$core$Panda$unref$panda$core$Object($tmp1280);
        memset(&listType1286, 0, sizeof(listType1286));
        panda$core$RegularExpression* $tmp1288 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp1288, &$s1289);
        $tmp1287 = $tmp1288;
        panda$core$Bit $tmp1290 = panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(listStart1278, $tmp1287);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1287));
        if ($tmp1290.value) {
        {
            {
                $tmp1291 = listType1286;
                $tmp1292 = &$s1293;
                listType1286 = $tmp1292;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1292));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1291));
            }
        }
        }
        else {
        {
            {
                $tmp1294 = listType1286;
                $tmp1295 = &$s1296;
                listType1286 = $tmp1295;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1295));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1294));
            }
        }
        }
        {
            $tmp1297 = list1270;
            panda$core$RegularExpression* $tmp1301 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
            panda$core$RegularExpression$init$panda$core$String($tmp1301, &$s1302);
            $tmp1300 = $tmp1301;
            panda$core$String* $tmp1304 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(list1270, $tmp1300, &$s1303);
            $tmp1299 = $tmp1304;
            $tmp1298 = $tmp1299;
            list1270 = $tmp1298;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1298));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1299));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1300));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1297));
        }
        panda$core$String* $tmp1309 = (($fn1308) self->$class->vtable[20])(self, list1270);
        $tmp1307 = $tmp1309;
        $tmp1306 = $tmp1307;
        result1305 = $tmp1306;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1306));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1307));
        {
            $tmp1310 = result1305;
            panda$core$RegularExpression* $tmp1314 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
            panda$core$RegularExpression$init$panda$core$String($tmp1314, &$s1315);
            $tmp1313 = $tmp1314;
            panda$core$String* $tmp1317 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(result1305, $tmp1313, &$s1316);
            $tmp1312 = $tmp1317;
            $tmp1311 = $tmp1312;
            result1305 = $tmp1311;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1311));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1312));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1313));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1310));
        }
        panda$core$String* $tmp1327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1326, listType1286);
        $tmp1325 = $tmp1327;
        panda$core$String* $tmp1329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1325, &$s1328);
        $tmp1324 = $tmp1329;
        panda$core$String* $tmp1330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1324, result1305);
        $tmp1323 = $tmp1330;
        panda$core$String* $tmp1332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1323, &$s1331);
        $tmp1322 = $tmp1332;
        panda$core$String* $tmp1333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1322, listType1286);
        $tmp1321 = $tmp1333;
        panda$core$String* $tmp1335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1321, &$s1334);
        $tmp1320 = $tmp1335;
        $tmp1319 = ((panda$core$Object*) $tmp1320);
        $returnValue1318 = $tmp1319;
        panda$core$Panda$ref$panda$core$Object($tmp1319);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1320));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1321));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1322));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1323));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1324));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1325));
        $tmp1269 = 0;
        goto $l1267;
        $l1336:;
        return $returnValue1318;
    }
    $l1267:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1305));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) listType1286));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) listStart1278));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list1270));
    list1270 = NULL;
    listStart1278 = NULL;
    result1305 = NULL;
    switch ($tmp1269) {
        case 0: goto $l1336;
    }
    $l1338:;
    abort();
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous17$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* list1342 = NULL;
    panda$core$String* $tmp1343;
    panda$core$Object* $tmp1344;
    panda$core$Int64 $tmp1345;
    panda$core$String* listStart1350 = NULL;
    panda$core$String* $tmp1351;
    panda$core$Object* $tmp1352;
    panda$core$Int64 $tmp1353;
    panda$core$String* listType1358 = NULL;
    panda$core$RegularExpression* $tmp1359;
    panda$core$String* $tmp1363;
    panda$core$String* $tmp1364;
    panda$core$String* $tmp1366;
    panda$core$String* $tmp1367;
    panda$core$String* $tmp1369;
    panda$core$String* $tmp1370;
    panda$core$String* $tmp1371;
    panda$core$RegularExpression* $tmp1372;
    panda$core$String* result1377 = NULL;
    panda$core$String* $tmp1378;
    panda$core$String* $tmp1379;
    panda$core$Object* $returnValue1382;
    panda$core$Object* $tmp1383;
    panda$core$String* $tmp1384;
    panda$core$String* $tmp1385;
    panda$core$String* $tmp1386;
    panda$core$String* $tmp1387;
    panda$core$String* $tmp1388;
    panda$core$String* $tmp1389;
    int $tmp1341;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1345, 1);
        ITable* $tmp1346 = p_groups->$class->itable;
        while ($tmp1346->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1346 = $tmp1346->next;
        }
        $fn1348 $tmp1347 = $tmp1346->methods[0];
        panda$core$Object* $tmp1349 = $tmp1347(p_groups, $tmp1345);
        $tmp1344 = $tmp1349;
        $tmp1343 = ((panda$core$String*) $tmp1344);
        list1342 = $tmp1343;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1343));
        panda$core$Panda$unref$panda$core$Object($tmp1344);
        panda$core$Int64$init$builtin_int64(&$tmp1353, 3);
        ITable* $tmp1354 = p_groups->$class->itable;
        while ($tmp1354->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1354 = $tmp1354->next;
        }
        $fn1356 $tmp1355 = $tmp1354->methods[0];
        panda$core$Object* $tmp1357 = $tmp1355(p_groups, $tmp1353);
        $tmp1352 = $tmp1357;
        $tmp1351 = ((panda$core$String*) $tmp1352);
        listStart1350 = $tmp1351;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1351));
        panda$core$Panda$unref$panda$core$Object($tmp1352);
        memset(&listType1358, 0, sizeof(listType1358));
        panda$core$RegularExpression* $tmp1360 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp1360, &$s1361);
        $tmp1359 = $tmp1360;
        panda$core$Bit $tmp1362 = panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(listStart1350, $tmp1359);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1359));
        if ($tmp1362.value) {
        {
            {
                $tmp1363 = listType1358;
                $tmp1364 = &$s1365;
                listType1358 = $tmp1364;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1364));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1363));
            }
        }
        }
        else {
        {
            {
                $tmp1366 = listType1358;
                $tmp1367 = &$s1368;
                listType1358 = $tmp1367;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1367));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1366));
            }
        }
        }
        {
            $tmp1369 = list1342;
            panda$core$RegularExpression* $tmp1373 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
            panda$core$RegularExpression$init$panda$core$String($tmp1373, &$s1374);
            $tmp1372 = $tmp1373;
            panda$core$String* $tmp1376 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(list1342, $tmp1372, &$s1375);
            $tmp1371 = $tmp1376;
            $tmp1370 = $tmp1371;
            list1342 = $tmp1370;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1370));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1371));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1372));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1369));
        }
        panda$core$String* $tmp1381 = (($fn1380) self->$class->vtable[20])(self, list1342);
        $tmp1379 = $tmp1381;
        $tmp1378 = $tmp1379;
        result1377 = $tmp1378;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1378));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1379));
        panda$core$String* $tmp1391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1390, listType1358);
        $tmp1389 = $tmp1391;
        panda$core$String* $tmp1393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1389, &$s1392);
        $tmp1388 = $tmp1393;
        panda$core$String* $tmp1394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1388, result1377);
        $tmp1387 = $tmp1394;
        panda$core$String* $tmp1396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1387, &$s1395);
        $tmp1386 = $tmp1396;
        panda$core$String* $tmp1397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1386, listType1358);
        $tmp1385 = $tmp1397;
        panda$core$String* $tmp1399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1385, &$s1398);
        $tmp1384 = $tmp1399;
        $tmp1383 = ((panda$core$Object*) $tmp1384);
        $returnValue1382 = $tmp1383;
        panda$core$Panda$ref$panda$core$Object($tmp1383);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1384));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1385));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1386));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1387));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1388));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1389));
        $tmp1341 = 0;
        goto $l1339;
        $l1400:;
        return $returnValue1382;
    }
    $l1339:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1377));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) listType1358));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) listStart1350));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list1342));
    list1342 = NULL;
    listStart1350 = NULL;
    result1377 = NULL;
    switch ($tmp1341) {
        case 0: goto $l1400;
    }
    $l1402:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doLists$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$core$Int64 lessThanTab1406;
    panda$core$Int64 $tmp1407;
    panda$core$Int64 $tmp1408;
    panda$core$String* wholeList1410 = NULL;
    panda$core$String* $tmp1411;
    panda$core$String* $tmp1412;
    panda$core$String* $tmp1413;
    panda$core$String* $tmp1414;
    panda$core$String* $tmp1415;
    panda$core$String* $tmp1416;
    panda$core$String* $tmp1417;
    panda$core$String* $tmp1418;
    panda$core$String* $tmp1419;
    panda$core$String* $tmp1420;
    panda$core$String* $tmp1421;
    panda$core$String* $tmp1422;
    panda$core$String* $tmp1423;
    panda$core$String* $tmp1424;
    panda$core$String* $tmp1425;
    panda$core$String* $tmp1426;
    panda$core$String* $tmp1427;
    panda$core$String* $tmp1429;
    panda$core$String* $tmp1430;
    panda$core$Object* $tmp1432;
    panda$core$Int64 $tmp1468;
    panda$core$RegularExpression* matchStartOfLine1473 = NULL;
    panda$core$RegularExpression* $tmp1474;
    panda$core$RegularExpression* $tmp1475;
    panda$core$String* $tmp1477;
    panda$core$String* $tmp1478;
    panda$core$RegularExpression* matchStartOfLine1488 = NULL;
    panda$core$RegularExpression* $tmp1489;
    panda$core$RegularExpression* $tmp1490;
    panda$core$String* $tmp1492;
    int $tmp1405;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1407, 4);
        panda$core$Int64$init$builtin_int64(&$tmp1408, 1);
        panda$core$Int64 $tmp1409 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1407, $tmp1408);
        lessThanTab1406 = $tmp1409;
        panda$core$Int64$wrapper* $tmp1433;
        $tmp1433 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp1433->value = lessThanTab1406;
        $tmp1432 = ((panda$core$Object*) $tmp1433);
        panda$core$String* $tmp1434 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1431, $tmp1432);
        $tmp1430 = $tmp1434;
        panda$core$String* $tmp1436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1430, &$s1435);
        $tmp1429 = $tmp1436;
        panda$core$String* $tmp1437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1428, $tmp1429);
        $tmp1427 = $tmp1437;
        panda$core$String* $tmp1439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1427, &$s1438);
        $tmp1426 = $tmp1439;
        panda$core$String* $tmp1441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1426, &$s1440);
        $tmp1425 = $tmp1441;
        panda$core$String* $tmp1443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1425, &$s1442);
        $tmp1424 = $tmp1443;
        panda$core$String* $tmp1445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1424, &$s1444);
        $tmp1423 = $tmp1445;
        panda$core$String* $tmp1447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1423, &$s1446);
        $tmp1422 = $tmp1447;
        panda$core$String* $tmp1449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1422, &$s1448);
        $tmp1421 = $tmp1449;
        panda$core$String* $tmp1451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1421, &$s1450);
        $tmp1420 = $tmp1451;
        panda$core$String* $tmp1453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1420, &$s1452);
        $tmp1419 = $tmp1453;
        panda$core$String* $tmp1455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1419, &$s1454);
        $tmp1418 = $tmp1455;
        panda$core$String* $tmp1457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1418, &$s1456);
        $tmp1417 = $tmp1457;
        panda$core$String* $tmp1459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1417, &$s1458);
        $tmp1416 = $tmp1459;
        panda$core$String* $tmp1461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1416, &$s1460);
        $tmp1415 = $tmp1461;
        panda$core$String* $tmp1463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1415, &$s1462);
        $tmp1414 = $tmp1463;
        panda$core$String* $tmp1465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1414, &$s1464);
        $tmp1413 = $tmp1465;
        panda$core$String* $tmp1467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1413, &$s1466);
        $tmp1412 = $tmp1467;
        $tmp1411 = $tmp1412;
        wholeList1410 = $tmp1411;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1411));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1412));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1413));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1414));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1415));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1416));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1417));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1418));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1419));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1420));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1421));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1422));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1423));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1424));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1425));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1426));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1427));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1429));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1430));
        panda$core$Panda$unref$panda$core$Object($tmp1432);
        panda$core$Int64$init$builtin_int64(&$tmp1468, 0);
        panda$core$Bit $tmp1469 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->listLevel, $tmp1468);
        if ($tmp1469.value) {
        {
            int $tmp1472;
            {
                panda$core$RegularExpression* $tmp1476 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                panda$core$String* $tmp1480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1479, wholeList1410);
                $tmp1478 = $tmp1480;
                panda$core$String* $tmp1482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1478, &$s1481);
                $tmp1477 = $tmp1482;
                panda$core$RegularExpression$init$panda$core$String($tmp1476, $tmp1477);
                $tmp1475 = $tmp1476;
                $tmp1474 = $tmp1475;
                matchStartOfLine1473 = $tmp1474;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1474));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1475));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1477));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1478));
                panda$core$MutableMethod* $tmp1483 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
                panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1483, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous16$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) self));
                panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_text, matchStartOfLine1473, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1483)));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1483));
            }
            $tmp1472 = -1;
            goto $l1470;
            $l1470:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matchStartOfLine1473));
            matchStartOfLine1473 = NULL;
            switch ($tmp1472) {
                case -1: goto $l1484;
            }
            $l1484:;
        }
        }
        else {
        {
            int $tmp1487;
            {
                panda$core$RegularExpression* $tmp1491 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                panda$core$String* $tmp1494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1493, wholeList1410);
                $tmp1492 = $tmp1494;
                panda$core$RegularExpression$init$panda$core$String($tmp1491, $tmp1492);
                $tmp1490 = $tmp1491;
                $tmp1489 = $tmp1490;
                matchStartOfLine1488 = $tmp1489;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1489));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1490));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1492));
                panda$core$MutableMethod* $tmp1495 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
                panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1495, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous17$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) self));
                panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_text, matchStartOfLine1488, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1495)));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1495));
            }
            $tmp1487 = -1;
            goto $l1485;
            $l1485:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matchStartOfLine1488));
            matchStartOfLine1488 = NULL;
            switch ($tmp1487) {
                case -1: goto $l1496;
            }
            $l1496:;
        }
        }
    }
    $tmp1405 = -1;
    goto $l1403;
    $l1403:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) wholeList1410));
    wholeList1410 = NULL;
    switch ($tmp1405) {
        case -1: goto $l1497;
    }
    $l1497:;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous18$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* text1501 = NULL;
    panda$core$String* $tmp1502;
    panda$core$Object* $tmp1503;
    panda$core$Int64 $tmp1504;
    panda$core$MutableString* item1509 = NULL;
    panda$core$MutableString* $tmp1510;
    panda$core$MutableString* $tmp1511;
    panda$core$String* leadingLine1513 = NULL;
    panda$core$String* $tmp1514;
    panda$core$Object* $tmp1515;
    panda$core$Int64 $tmp1516;
    panda$core$String* $returnValue1530;
    panda$core$String* $tmp1531;
    panda$core$String* $tmp1532;
    panda$core$String* $tmp1533;
    int $tmp1500;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1504, 4);
        ITable* $tmp1505 = p_groups->$class->itable;
        while ($tmp1505->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1505 = $tmp1505->next;
        }
        $fn1507 $tmp1506 = $tmp1505->methods[0];
        panda$core$Object* $tmp1508 = $tmp1506(p_groups, $tmp1504);
        $tmp1503 = $tmp1508;
        $tmp1502 = ((panda$core$String*) $tmp1503);
        text1501 = $tmp1502;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1502));
        panda$core$Panda$unref$panda$core$Object($tmp1503);
        panda$core$MutableString* $tmp1512 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp1512, text1501);
        $tmp1511 = $tmp1512;
        $tmp1510 = $tmp1511;
        item1509 = $tmp1510;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1510));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1511));
        panda$core$Int64$init$builtin_int64(&$tmp1516, 1);
        ITable* $tmp1517 = p_groups->$class->itable;
        while ($tmp1517->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1517 = $tmp1517->next;
        }
        $fn1519 $tmp1518 = $tmp1517->methods[0];
        panda$core$Object* $tmp1520 = $tmp1518(p_groups, $tmp1516);
        $tmp1515 = $tmp1520;
        $tmp1514 = ((panda$core$String*) $tmp1515);
        leadingLine1513 = $tmp1514;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1514));
        panda$core$Panda$unref$panda$core$Object($tmp1515);
        panda$core$Bit $tmp1522 = org$pandalanguage$pandac$pandadoc$Markdown$isEmptyString$panda$core$String$Q$R$panda$core$Bit(leadingLine1513);
        panda$core$Bit $tmp1523 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1522);
        bool $tmp1521 = $tmp1523.value;
        if ($tmp1521) goto $l1524;
        panda$core$Bit $tmp1525 = org$pandalanguage$pandac$pandadoc$Markdown$hasParagraphBreak$panda$core$MutableString$R$panda$core$Bit(item1509);
        $tmp1521 = $tmp1525.value;
        $l1524:;
        panda$core$Bit $tmp1526 = { $tmp1521 };
        if ($tmp1526.value) {
        {
            org$pandalanguage$pandac$pandadoc$Markdown$outdent$panda$core$MutableString(item1509);
            (($fn1527) self->$class->vtable[6])(self, item1509);
        }
        }
        else {
        {
            org$pandalanguage$pandac$pandadoc$Markdown$outdent$panda$core$MutableString(item1509);
            (($fn1528) self->$class->vtable[19])(self, item1509);
            (($fn1529) self->$class->vtable[22])(self, item1509);
        }
        }
        panda$core$MutableString$trim(item1509);
        panda$core$String* $tmp1535 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1534, ((panda$core$Object*) item1509));
        $tmp1533 = $tmp1535;
        panda$core$String* $tmp1537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1533, &$s1536);
        $tmp1532 = $tmp1537;
        $tmp1531 = $tmp1532;
        $returnValue1530 = $tmp1531;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1531));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1532));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1533));
        $tmp1500 = 0;
        goto $l1498;
        $l1538:;
        return $returnValue1530;
    }
    $l1498:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leadingLine1513));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) item1509));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) text1501));
    text1501 = NULL;
    item1509 = NULL;
    leadingLine1513 = NULL;
    switch ($tmp1500) {
        case 0: goto $l1538;
    }
    $l1540:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim19$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar1544 = NULL;
    panda$core$Method* $tmp1545;
    panda$core$Method* $tmp1546;
    panda$core$Object* $tmp1548;
    panda$core$Object* $tmp1549;
    panda$core$Object* $returnValue1550;
    panda$core$Object* $tmp1551;
    panda$core$String* $tmp1552;
    panda$core$String* $tmp1553;
    int $tmp1543;
    {
        panda$core$Method* $tmp1547 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp1547, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp1546 = $tmp1547;
        $tmp1545 = $tmp1546;
        methodVar1544 = $tmp1545;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1545));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1546));
        {
            $tmp1548 = ((panda$core$MutableMethod*) methodVar1544)->target;
            $tmp1549 = self->target;
            ((panda$core$MutableMethod*) methodVar1544)->target = $tmp1549;
            panda$core$Panda$ref$panda$core$Object($tmp1549);
            panda$core$Panda$unref$panda$core$Object($tmp1548);
        }
        if (methodVar1544->target) {
            $tmp1553 = (($fn1554) methodVar1544->pointer)(methodVar1544->target, p_p0);
        } else {
            $tmp1553 = (($fn1555) methodVar1544->pointer)(p_p0);
        }
        $tmp1552 = $tmp1553;
        $tmp1551 = ((panda$core$Object*) $tmp1552);
        $returnValue1550 = $tmp1551;
        panda$core$Panda$ref$panda$core$Object($tmp1551);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1552));
        $tmp1543 = 0;
        goto $l1541;
        $l1556:;
        return $returnValue1550;
    }
    $l1541:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar1544));
    methodVar1544 = NULL;
    switch ($tmp1543) {
        case 0: goto $l1556;
    }
    $l1558:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$processListItems$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$String* p_rawList) {
    panda$core$Int64 $tmp1562;
    panda$core$String* list1564 = NULL;
    panda$core$String* $tmp1565;
    panda$core$String* $tmp1566;
    panda$core$RegularExpression* $tmp1567;
    panda$core$RegularExpression* p1572 = NULL;
    panda$core$RegularExpression* $tmp1573;
    panda$core$RegularExpression* $tmp1574;
    panda$core$Int64 $tmp1577;
    panda$core$String* $tmp1578;
    panda$core$String* $tmp1579;
    panda$core$String* $tmp1580;
    panda$core$Int64 $tmp1584;
    panda$core$String* $returnValue1586;
    panda$core$String* $tmp1587;
    int $tmp1561;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1562, 1);
        panda$core$Int64 $tmp1563 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->listLevel, $tmp1562);
        self->listLevel = $tmp1563;
        panda$core$RegularExpression* $tmp1568 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp1568, &$s1569);
        $tmp1567 = $tmp1568;
        panda$core$String* $tmp1571 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(p_rawList, $tmp1567, &$s1570);
        $tmp1566 = $tmp1571;
        $tmp1565 = $tmp1566;
        list1564 = $tmp1565;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1565));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1566));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1567));
        panda$core$RegularExpression* $tmp1575 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp1577, 1);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1575, &$s1576, $tmp1577);
        $tmp1574 = $tmp1575;
        $tmp1573 = $tmp1574;
        p1572 = $tmp1573;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1573));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1574));
        {
            $tmp1578 = list1564;
            panda$core$MutableMethod* $tmp1581 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
            panda$core$MutableMethod* $tmp1582 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
            panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1582, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous18$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
            panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1581, (panda$core$Int8*) &panda$core$MutableMethod$$shim19$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp1582)));
            panda$core$String* $tmp1583 = panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(list1564, p1572, ((panda$core$Object*) $tmp1581));
            $tmp1580 = $tmp1583;
            $tmp1579 = $tmp1580;
            list1564 = $tmp1579;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1579));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1580));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1581));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1582));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1578));
        }
        panda$core$Int64$init$builtin_int64(&$tmp1584, 1);
        panda$core$Int64 $tmp1585 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->listLevel, $tmp1584);
        self->listLevel = $tmp1585;
        $tmp1587 = list1564;
        $returnValue1586 = $tmp1587;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1587));
        $tmp1561 = 0;
        goto $l1559;
        $l1588:;
        return $returnValue1586;
    }
    $l1559:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1572));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list1564));
    list1564 = NULL;
    p1572 = NULL;
    switch ($tmp1561) {
        case 0: goto $l1588;
    }
    $l1590:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$pandadoc$Markdown$hasParagraphBreak$panda$core$MutableString$R$panda$core$Bit(panda$core$MutableString* p_item) {
    panda$core$Bit $returnValue1591;
    panda$core$Bit $tmp1593 = panda$core$MutableString$contains$panda$core$String$R$panda$core$Bit(p_item, &$s1592);
    $returnValue1591 = $tmp1593;
    return $returnValue1591;
}
panda$core$Bit org$pandalanguage$pandac$pandadoc$Markdown$isEmptyString$panda$core$String$Q$R$panda$core$Bit(panda$core$String* p_leadingLine) {
    panda$core$Bit $returnValue1595;
    panda$core$String* $tmp1598;
    panda$core$Bit $tmp1605;
    bool $tmp1596 = ((panda$core$Bit) { p_leadingLine == NULL }).value;
    if ($tmp1596) goto $l1597;
    $tmp1598 = p_leadingLine;
    panda$core$Bit $tmp1602;
    if (((panda$core$Bit) { $tmp1598 != NULL }).value) goto $l1599; else goto $l1600;
    $l1599:;
    panda$core$Bit $tmp1604 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp1598, &$s1603);
    $tmp1602 = $tmp1604;
    goto $l1601;
    $l1600:;
    panda$core$Bit$init$builtin_bit(&$tmp1605, false);
    $tmp1602 = $tmp1605;
    goto $l1601;
    $l1601:;
    $tmp1596 = $tmp1602.value;
    $l1597:;
    panda$core$Bit $tmp1606 = { $tmp1596 };
    $returnValue1595 = $tmp1606;
    return $returnValue1595;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous20$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$MutableString* result1611 = NULL;
    panda$core$MutableString* $tmp1612;
    panda$core$MutableString* $tmp1613;
    panda$core$Object* $tmp1615;
    panda$core$Int64 $tmp1616;
    panda$core$String* $returnValue1622;
    panda$core$String* $tmp1623;
    panda$core$String* $tmp1624;
    panda$core$String* $tmp1625;
    int $tmp1610;
    {
        panda$core$MutableString* $tmp1614 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$Int64$init$builtin_int64(&$tmp1616, 1);
        ITable* $tmp1617 = p_groups->$class->itable;
        while ($tmp1617->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1617 = $tmp1617->next;
        }
        $fn1619 $tmp1618 = $tmp1617->methods[0];
        panda$core$Object* $tmp1620 = $tmp1618(p_groups, $tmp1616);
        $tmp1615 = $tmp1620;
        panda$core$MutableString$init$panda$core$String($tmp1614, ((panda$core$String*) $tmp1615));
        $tmp1613 = $tmp1614;
        $tmp1612 = $tmp1613;
        result1611 = $tmp1612;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1612));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1613));
        panda$core$Panda$unref$panda$core$Object($tmp1615);
        (($fn1621) self->$class->vtable[22])(self, result1611);
        panda$core$String* $tmp1627 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1626, ((panda$core$Object*) result1611));
        $tmp1625 = $tmp1627;
        panda$core$String* $tmp1629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1625, &$s1628);
        $tmp1624 = $tmp1629;
        $tmp1623 = $tmp1624;
        $returnValue1622 = $tmp1623;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1623));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1624));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1625));
        $tmp1610 = 0;
        goto $l1608;
        $l1630:;
        return $returnValue1622;
    }
    $l1608:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1611));
    result1611 = NULL;
    switch ($tmp1610) {
        case 0: goto $l1630;
    }
    $l1632:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim21$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar1636 = NULL;
    panda$core$Method* $tmp1637;
    panda$core$Method* $tmp1638;
    panda$core$Object* $tmp1640;
    panda$core$Object* $tmp1641;
    panda$core$Object* $returnValue1642;
    panda$core$Object* $tmp1643;
    panda$core$String* $tmp1644;
    panda$core$String* $tmp1645;
    int $tmp1635;
    {
        panda$core$Method* $tmp1639 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp1639, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp1638 = $tmp1639;
        $tmp1637 = $tmp1638;
        methodVar1636 = $tmp1637;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1637));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1638));
        {
            $tmp1640 = ((panda$core$MutableMethod*) methodVar1636)->target;
            $tmp1641 = self->target;
            ((panda$core$MutableMethod*) methodVar1636)->target = $tmp1641;
            panda$core$Panda$ref$panda$core$Object($tmp1641);
            panda$core$Panda$unref$panda$core$Object($tmp1640);
        }
        if (methodVar1636->target) {
            $tmp1645 = (($fn1646) methodVar1636->pointer)(methodVar1636->target, p_p0);
        } else {
            $tmp1645 = (($fn1647) methodVar1636->pointer)(p_p0);
        }
        $tmp1644 = $tmp1645;
        $tmp1643 = ((panda$core$Object*) $tmp1644);
        $returnValue1642 = $tmp1643;
        panda$core$Panda$ref$panda$core$Object($tmp1643);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1644));
        $tmp1635 = 0;
        goto $l1633;
        $l1648:;
        return $returnValue1642;
    }
    $l1633:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar1636));
    methodVar1636 = NULL;
    switch ($tmp1635) {
        case 0: goto $l1648;
    }
    $l1650:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous22$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$MutableString* result1654 = NULL;
    panda$core$MutableString* $tmp1655;
    panda$core$MutableString* $tmp1656;
    panda$core$Object* $tmp1658;
    panda$core$Int64 $tmp1659;
    panda$core$String* $returnValue1665;
    panda$core$String* $tmp1666;
    panda$core$String* $tmp1667;
    panda$core$String* $tmp1668;
    int $tmp1653;
    {
        panda$core$MutableString* $tmp1657 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$Int64$init$builtin_int64(&$tmp1659, 1);
        ITable* $tmp1660 = p_groups->$class->itable;
        while ($tmp1660->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1660 = $tmp1660->next;
        }
        $fn1662 $tmp1661 = $tmp1660->methods[0];
        panda$core$Object* $tmp1663 = $tmp1661(p_groups, $tmp1659);
        $tmp1658 = $tmp1663;
        panda$core$MutableString$init$panda$core$String($tmp1657, ((panda$core$String*) $tmp1658));
        $tmp1656 = $tmp1657;
        $tmp1655 = $tmp1656;
        result1654 = $tmp1655;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1655));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1656));
        panda$core$Panda$unref$panda$core$Object($tmp1658);
        (($fn1664) self->$class->vtable[22])(self, result1654);
        panda$core$String* $tmp1670 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1669, ((panda$core$Object*) result1654));
        $tmp1668 = $tmp1670;
        panda$core$String* $tmp1672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1668, &$s1671);
        $tmp1667 = $tmp1672;
        $tmp1666 = $tmp1667;
        $returnValue1665 = $tmp1666;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1666));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1667));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1668));
        $tmp1653 = 0;
        goto $l1651;
        $l1673:;
        return $returnValue1665;
    }
    $l1651:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1654));
    result1654 = NULL;
    switch ($tmp1653) {
        case 0: goto $l1673;
    }
    $l1675:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim23$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar1679 = NULL;
    panda$core$Method* $tmp1680;
    panda$core$Method* $tmp1681;
    panda$core$Object* $tmp1683;
    panda$core$Object* $tmp1684;
    panda$core$Object* $returnValue1685;
    panda$core$Object* $tmp1686;
    panda$core$String* $tmp1687;
    panda$core$String* $tmp1688;
    int $tmp1678;
    {
        panda$core$Method* $tmp1682 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp1682, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp1681 = $tmp1682;
        $tmp1680 = $tmp1681;
        methodVar1679 = $tmp1680;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1680));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1681));
        {
            $tmp1683 = ((panda$core$MutableMethod*) methodVar1679)->target;
            $tmp1684 = self->target;
            ((panda$core$MutableMethod*) methodVar1679)->target = $tmp1684;
            panda$core$Panda$ref$panda$core$Object($tmp1684);
            panda$core$Panda$unref$panda$core$Object($tmp1683);
        }
        if (methodVar1679->target) {
            $tmp1688 = (($fn1689) methodVar1679->pointer)(methodVar1679->target, p_p0);
        } else {
            $tmp1688 = (($fn1690) methodVar1679->pointer)(p_p0);
        }
        $tmp1687 = $tmp1688;
        $tmp1686 = ((panda$core$Object*) $tmp1687);
        $returnValue1685 = $tmp1686;
        panda$core$Panda$ref$panda$core$Object($tmp1686);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1687));
        $tmp1678 = 0;
        goto $l1676;
        $l1691:;
        return $returnValue1685;
    }
    $l1676:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar1679));
    methodVar1679 = NULL;
    switch ($tmp1678) {
        case 0: goto $l1691;
    }
    $l1693:;
    abort();
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous24$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* marker1697 = NULL;
    panda$core$String* $tmp1698;
    panda$core$Object* $tmp1699;
    panda$core$Int64 $tmp1700;
    panda$core$MutableString* heading1705 = NULL;
    panda$core$MutableString* $tmp1706;
    panda$core$MutableString* $tmp1707;
    panda$core$Object* $tmp1709;
    panda$core$Int64 $tmp1710;
    panda$core$Int64 level1716;
    panda$core$String* tag1718 = NULL;
    panda$core$String* $tmp1719;
    panda$core$String* $tmp1720;
    panda$core$Object* $tmp1722;
    panda$core$Object* $returnValue1725;
    panda$core$Object* $tmp1726;
    panda$core$String* $tmp1727;
    panda$core$String* $tmp1728;
    panda$core$String* $tmp1729;
    panda$core$String* $tmp1730;
    panda$core$String* $tmp1731;
    panda$core$String* $tmp1732;
    int $tmp1696;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1700, 1);
        ITable* $tmp1701 = p_groups->$class->itable;
        while ($tmp1701->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1701 = $tmp1701->next;
        }
        $fn1703 $tmp1702 = $tmp1701->methods[0];
        panda$core$Object* $tmp1704 = $tmp1702(p_groups, $tmp1700);
        $tmp1699 = $tmp1704;
        $tmp1698 = ((panda$core$String*) $tmp1699);
        marker1697 = $tmp1698;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1698));
        panda$core$Panda$unref$panda$core$Object($tmp1699);
        panda$core$MutableString* $tmp1708 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$Int64$init$builtin_int64(&$tmp1710, 2);
        ITable* $tmp1711 = p_groups->$class->itable;
        while ($tmp1711->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1711 = $tmp1711->next;
        }
        $fn1713 $tmp1712 = $tmp1711->methods[0];
        panda$core$Object* $tmp1714 = $tmp1712(p_groups, $tmp1710);
        $tmp1709 = $tmp1714;
        panda$core$MutableString$init$panda$core$String($tmp1708, ((panda$core$String*) $tmp1709));
        $tmp1707 = $tmp1708;
        $tmp1706 = $tmp1707;
        heading1705 = $tmp1706;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1706));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1707));
        panda$core$Panda$unref$panda$core$Object($tmp1709);
        (($fn1715) self->$class->vtable[22])(self, heading1705);
        panda$core$Int64 $tmp1717 = panda$core$String$length$R$panda$core$Int64(marker1697);
        level1716 = $tmp1717;
        panda$core$Int64$wrapper* $tmp1723;
        $tmp1723 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp1723->value = level1716;
        $tmp1722 = ((panda$core$Object*) $tmp1723);
        panda$core$String* $tmp1724 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1721, $tmp1722);
        $tmp1720 = $tmp1724;
        $tmp1719 = $tmp1720;
        tag1718 = $tmp1719;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1719));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1720));
        panda$core$Panda$unref$panda$core$Object($tmp1722);
        panda$core$String* $tmp1734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1733, tag1718);
        $tmp1732 = $tmp1734;
        panda$core$String* $tmp1736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1732, &$s1735);
        $tmp1731 = $tmp1736;
        panda$core$String* $tmp1737 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1731, ((panda$core$Object*) heading1705));
        $tmp1730 = $tmp1737;
        panda$core$String* $tmp1739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1730, &$s1738);
        $tmp1729 = $tmp1739;
        panda$core$String* $tmp1740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1729, tag1718);
        $tmp1728 = $tmp1740;
        panda$core$String* $tmp1742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1728, &$s1741);
        $tmp1727 = $tmp1742;
        $tmp1726 = ((panda$core$Object*) $tmp1727);
        $returnValue1725 = $tmp1726;
        panda$core$Panda$ref$panda$core$Object($tmp1726);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1727));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1728));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1729));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1730));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1731));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1732));
        $tmp1696 = 0;
        goto $l1694;
        $l1743:;
        return $returnValue1725;
    }
    $l1694:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tag1718));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) heading1705));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) marker1697));
    marker1697 = NULL;
    heading1705 = NULL;
    tag1718 = NULL;
    switch ($tmp1696) {
        case 0: goto $l1743;
    }
    $l1745:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doHeaders$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* $tmp1749;
    panda$core$RegularExpression* $tmp1754;
    panda$core$RegularExpression* p1759 = NULL;
    panda$core$RegularExpression* $tmp1760;
    panda$core$RegularExpression* $tmp1761;
    panda$core$Int64 $tmp1764;
    int $tmp1748;
    {
        panda$core$RegularExpression* $tmp1750 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp1750, &$s1751);
        $tmp1749 = $tmp1750;
        panda$core$MutableMethod* $tmp1752 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp1753 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1753, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous20$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1752, (panda$core$Int8*) &panda$core$MutableMethod$$shim21$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp1753)));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, $tmp1749, ((panda$core$Object*) $tmp1752));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1752));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1753));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1749));
        panda$core$RegularExpression* $tmp1755 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp1755, &$s1756);
        $tmp1754 = $tmp1755;
        panda$core$MutableMethod* $tmp1757 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp1758 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1758, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous22$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1757, (panda$core$Int8*) &panda$core$MutableMethod$$shim23$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp1758)));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, $tmp1754, ((panda$core$Object*) $tmp1757));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1757));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1758));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1754));
        panda$core$RegularExpression* $tmp1762 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp1764, 1);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1762, &$s1763, $tmp1764);
        $tmp1761 = $tmp1762;
        $tmp1760 = $tmp1761;
        p1759 = $tmp1760;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1760));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1761));
        panda$core$MutableMethod* $tmp1765 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1765, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous24$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) self));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, p1759, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1765)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1765));
    }
    $tmp1748 = -1;
    goto $l1746;
    $l1746:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1759));
    p1759 = NULL;
    switch ($tmp1748) {
        case -1: goto $l1766;
    }
    $l1766:;
}
void org$pandalanguage$pandac$pandadoc$Markdown$runSpanGamut$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$core$RegularExpression* $tmp1776;
    (($fn1767) self->$class->vtable[24])(self, p_text);
    (($fn1768) self->$class->vtable[29])(self, p_text);
    (($fn1769) self->$class->vtable[3])(self, p_text);
    (($fn1770) self->$class->vtable[25])(self, p_text);
    (($fn1771) self->$class->vtable[26])(self, p_text);
    (($fn1772) self->$class->vtable[10])(self, p_text);
    (($fn1773) self->$class->vtable[24])(self, p_text);
    (($fn1774) self->$class->vtable[28])(self, p_text);
    (($fn1775) self->$class->vtable[27])(self, p_text);
    panda$core$RegularExpression* $tmp1777 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp1777, &$s1778);
    $tmp1776 = $tmp1777;
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_text, $tmp1776, &$s1779);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1776));
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$nestedTagsRegex$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_depth) {
    panda$core$Int64 $tmp1780;
    panda$core$String* $returnValue1782;
    panda$core$String* $tmp1783;
    panda$core$String* $tmp1786;
    panda$core$String* $tmp1787;
    panda$core$String* $tmp1788;
    panda$core$String* $tmp1790;
    panda$core$Int64 $tmp1791;
    panda$core$Int64$init$builtin_int64(&$tmp1780, 0);
    panda$core$Bit $tmp1781 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_depth, $tmp1780);
    if ($tmp1781.value) {
    {
        $tmp1783 = &$s1784;
        $returnValue1782 = $tmp1783;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1783));
        return $returnValue1782;
    }
    }
    else {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1791, 1);
        panda$core$Int64 $tmp1792 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_depth, $tmp1791);
        panda$core$String* $tmp1793 = org$pandalanguage$pandac$pandadoc$Markdown$nestedTagsRegex$panda$core$Int64$R$panda$core$String($tmp1792);
        $tmp1790 = $tmp1793;
        panda$core$String* $tmp1794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1789, $tmp1790);
        $tmp1788 = $tmp1794;
        panda$core$String* $tmp1796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1788, &$s1795);
        $tmp1787 = $tmp1796;
        $tmp1786 = $tmp1787;
        $returnValue1782 = $tmp1786;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1786));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1787));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1788));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1790));
        return $returnValue1782;
    }
    }
    abort();
}
panda$collections$ListView* org$pandalanguage$pandac$pandadoc$Markdown$tokenizeHTML$panda$core$String$R$panda$collections$ListView$LTorg$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$GT(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$String* p_text) {
    panda$collections$Array* tokens1801 = NULL;
    panda$collections$Array* $tmp1802;
    panda$collections$Array* $tmp1803;
    panda$core$String* nestedTags1805 = NULL;
    panda$core$String* $tmp1806;
    panda$core$String* $tmp1807;
    panda$core$Int64 $tmp1808;
    panda$core$RegularExpression* p1810 = NULL;
    panda$core$RegularExpression* $tmp1811;
    panda$core$RegularExpression* $tmp1812;
    panda$core$String* $tmp1814;
    panda$core$Int64 $tmp1817;
    panda$core$Matcher* m1818 = NULL;
    panda$core$Matcher* $tmp1819;
    panda$core$Matcher* $tmp1820;
    panda$core$String$Index lastPos1822;
    panda$core$String$Index $tmp1828;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1830;
    panda$core$Int64 $tmp1832;
    panda$core$String* $tmp1833;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1834;
    panda$core$String$Index $tmp1835;
    panda$core$Bit $tmp1836;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1838;
    panda$core$Int64 $tmp1840;
    panda$core$String* $tmp1841;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1842;
    panda$core$String$Index $tmp1843;
    panda$core$String$Index $tmp1844;
    panda$core$Bit $tmp1845;
    panda$core$String$Index $tmp1847;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1850;
    panda$core$Int64 $tmp1852;
    panda$core$String* $tmp1853;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1854;
    panda$core$Bit $tmp1856;
    panda$collections$ListView* $returnValue1858;
    panda$collections$ListView* $tmp1859;
    int $tmp1800;
    {
        panda$collections$Array* $tmp1804 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1804);
        $tmp1803 = $tmp1804;
        $tmp1802 = $tmp1803;
        tokens1801 = $tmp1802;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1802));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1803));
        panda$core$Int64$init$builtin_int64(&$tmp1808, 6);
        panda$core$String* $tmp1809 = org$pandalanguage$pandac$pandadoc$Markdown$nestedTagsRegex$panda$core$Int64$R$panda$core$String($tmp1808);
        $tmp1807 = $tmp1809;
        $tmp1806 = $tmp1807;
        nestedTags1805 = $tmp1806;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1806));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1807));
        panda$core$RegularExpression* $tmp1813 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$String* $tmp1816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1815, nestedTags1805);
        $tmp1814 = $tmp1816;
        panda$core$Int64$init$builtin_int64(&$tmp1817, 2);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1813, $tmp1814, $tmp1817);
        $tmp1812 = $tmp1813;
        $tmp1811 = $tmp1812;
        p1810 = $tmp1811;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1811));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1812));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1814));
        panda$core$Matcher* $tmp1821 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p1810, p_text);
        $tmp1820 = $tmp1821;
        $tmp1819 = $tmp1820;
        m1818 = $tmp1819;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1819));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1820));
        panda$core$String$Index $tmp1823 = panda$core$String$start$R$panda$core$String$Index(p_text);
        lastPos1822 = $tmp1823;
        $l1824:;
        panda$core$Bit $tmp1827 = panda$core$Matcher$find$R$panda$core$Bit(m1818);
        bool $tmp1826 = $tmp1827.value;
        if (!$tmp1826) goto $l1825;
        {
            panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1828, m1818);
            panda$core$Bit $tmp1829 = panda$core$String$Index$$LT$panda$core$String$Index$R$panda$core$Bit(lastPos1822, $tmp1828);
            if ($tmp1829.value) {
            {
                org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1831 = (org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class);
                panda$core$Int64$init$builtin_int64(&$tmp1832, 1);
                panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1835, m1818);
                panda$core$Bit$init$builtin_bit(&$tmp1836, false);
                panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1834, lastPos1822, $tmp1835, $tmp1836);
                panda$core$String* $tmp1837 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(p_text, $tmp1834);
                $tmp1833 = $tmp1837;
                org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String($tmp1831, $tmp1832, $tmp1833);
                $tmp1830 = $tmp1831;
                panda$collections$Array$add$panda$collections$Array$T(tokens1801, ((panda$core$Object*) $tmp1830));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1830));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1833));
            }
            }
            org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1839 = (org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class);
            panda$core$Int64$init$builtin_int64(&$tmp1840, 0);
            panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1843, m1818);
            panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1844, m1818);
            panda$core$Bit$init$builtin_bit(&$tmp1845, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1842, $tmp1843, $tmp1844, $tmp1845);
            panda$core$String* $tmp1846 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(p_text, $tmp1842);
            $tmp1841 = $tmp1846;
            org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String($tmp1839, $tmp1840, $tmp1841);
            $tmp1838 = $tmp1839;
            panda$collections$Array$add$panda$collections$Array$T(tokens1801, ((panda$core$Object*) $tmp1838));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1838));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1841));
            panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1847, m1818);
            lastPos1822 = $tmp1847;
        }
        goto $l1824;
        $l1825:;
        panda$core$String$Index $tmp1848 = panda$core$String$end$R$panda$core$String$Index(p_text);
        panda$core$Bit $tmp1849 = panda$core$String$Index$$LT$panda$core$String$Index$R$panda$core$Bit(lastPos1822, $tmp1848);
        if ($tmp1849.value) {
        {
            org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1851 = (org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class);
            panda$core$Int64$init$builtin_int64(&$tmp1852, 1);
            panda$core$String$Index $tmp1855 = panda$core$String$end$R$panda$core$String$Index(p_text);
            panda$core$Bit$init$builtin_bit(&$tmp1856, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1854, lastPos1822, $tmp1855, $tmp1856);
            panda$core$String* $tmp1857 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(p_text, $tmp1854);
            $tmp1853 = $tmp1857;
            org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String($tmp1851, $tmp1852, $tmp1853);
            $tmp1850 = $tmp1851;
            panda$collections$Array$add$panda$collections$Array$T(tokens1801, ((panda$core$Object*) $tmp1850));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1850));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1853));
        }
        }
        $tmp1859 = ((panda$collections$ListView*) tokens1801);
        $returnValue1858 = $tmp1859;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1859));
        $tmp1800 = 0;
        goto $l1798;
        $l1860:;
        return $returnValue1858;
    }
    $l1798:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1818));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1810));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nestedTags1805));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokens1801));
    tokens1801 = NULL;
    nestedTags1805 = NULL;
    p1810 = NULL;
    m1818 = NULL;
    switch ($tmp1800) {
        case 0: goto $l1860;
    }
    $l1862:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$escapeSpecialCharsWithinTagAttributes$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$collections$ListView* tokens1866 = NULL;
    panda$collections$ListView* $tmp1867;
    panda$collections$ListView* $tmp1868;
    panda$core$String* $tmp1869;
    panda$collections$Iterator* Iter$848$91876 = NULL;
    panda$collections$Iterator* $tmp1877;
    panda$collections$Iterator* $tmp1878;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* token1894 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1895;
    panda$core$Object* $tmp1896;
    panda$core$String* value1901 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $match$850_131905 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1906;
    panda$core$Int64 $tmp1907;
    panda$core$String* text1909 = NULL;
    panda$core$String* $tmp1911;
    panda$core$String* $tmp1912;
    panda$core$String* $tmp1913;
    panda$core$String* $tmp1914;
    panda$core$String* $tmp1915;
    panda$core$String* $tmp1917;
    panda$core$String* $tmp1922;
    panda$core$String* $tmp1923;
    panda$core$String* $tmp1924;
    panda$core$String* $tmp1926;
    panda$core$String* $tmp1931;
    panda$core$String* $tmp1932;
    panda$core$String* $tmp1933;
    panda$core$String* $tmp1935;
    panda$core$String* $tmp1940;
    panda$core$String* $tmp1941;
    panda$core$String* $tmp1942;
    panda$core$String* $tmp1944;
    panda$core$Int64 $tmp1949;
    panda$core$String* text1951 = NULL;
    panda$core$String* $tmp1953;
    panda$core$String* $tmp1954;
    int $tmp1865;
    {
        panda$core$String* $tmp1870 = panda$core$MutableString$convert$R$panda$core$String(p_text);
        $tmp1869 = $tmp1870;
        panda$collections$ListView* $tmp1872 = (($fn1871) self->$class->vtable[23])(self, $tmp1869);
        $tmp1868 = $tmp1872;
        $tmp1867 = $tmp1868;
        tokens1866 = $tmp1867;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1867));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1868));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1869));
        panda$core$MutableString$clear(p_text);
        {
            int $tmp1875;
            {
                ITable* $tmp1879 = ((panda$collections$Iterable*) tokens1866)->$class->itable;
                while ($tmp1879->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1879 = $tmp1879->next;
                }
                $fn1881 $tmp1880 = $tmp1879->methods[0];
                panda$collections$Iterator* $tmp1882 = $tmp1880(((panda$collections$Iterable*) tokens1866));
                $tmp1878 = $tmp1882;
                $tmp1877 = $tmp1878;
                Iter$848$91876 = $tmp1877;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1877));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1878));
                $l1883:;
                ITable* $tmp1886 = Iter$848$91876->$class->itable;
                while ($tmp1886->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1886 = $tmp1886->next;
                }
                $fn1888 $tmp1887 = $tmp1886->methods[0];
                panda$core$Bit $tmp1889 = $tmp1887(Iter$848$91876);
                panda$core$Bit $tmp1890 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1889);
                bool $tmp1885 = $tmp1890.value;
                if (!$tmp1885) goto $l1884;
                {
                    int $tmp1893;
                    {
                        ITable* $tmp1897 = Iter$848$91876->$class->itable;
                        while ($tmp1897->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1897 = $tmp1897->next;
                        }
                        $fn1899 $tmp1898 = $tmp1897->methods[1];
                        panda$core$Object* $tmp1900 = $tmp1898(Iter$848$91876);
                        $tmp1896 = $tmp1900;
                        $tmp1895 = ((org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) $tmp1896);
                        token1894 = $tmp1895;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1895));
                        panda$core$Panda$unref$panda$core$Object($tmp1896);
                        memset(&value1901, 0, sizeof(value1901));
                        int $tmp1904;
                        {
                            $tmp1906 = token1894;
                            $match$850_131905 = $tmp1906;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1906));
                            panda$core$Int64$init$builtin_int64(&$tmp1907, 0);
                            panda$core$Bit $tmp1908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$850_131905->$rawValue, $tmp1907);
                            if ($tmp1908.value) {
                            {
                                panda$core$String** $tmp1910 = ((panda$core$String**) ((char*) $match$850_131905->$data + 0));
                                text1909 = *$tmp1910;
                                {
                                    $tmp1911 = value1901;
                                    $tmp1912 = text1909;
                                    value1901 = $tmp1912;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1912));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1911));
                                }
                                {
                                    $tmp1913 = value1901;
                                    panda$core$String* $tmp1920 = (($fn1919) self->charProtector->$class->vtable[2])(self->charProtector, &$s1918);
                                    $tmp1917 = $tmp1920;
                                    panda$core$String* $tmp1921 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(value1901, &$s1916, $tmp1917);
                                    $tmp1915 = $tmp1921;
                                    $tmp1914 = $tmp1915;
                                    value1901 = $tmp1914;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1914));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1915));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1917));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1913));
                                }
                                {
                                    $tmp1922 = value1901;
                                    panda$core$String* $tmp1929 = (($fn1928) self->charProtector->$class->vtable[2])(self->charProtector, &$s1927);
                                    $tmp1926 = $tmp1929;
                                    panda$core$String* $tmp1930 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(value1901, &$s1925, $tmp1926);
                                    $tmp1924 = $tmp1930;
                                    $tmp1923 = $tmp1924;
                                    value1901 = $tmp1923;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1923));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1924));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1926));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1922));
                                }
                                {
                                    $tmp1931 = value1901;
                                    panda$core$String* $tmp1938 = (($fn1937) self->charProtector->$class->vtable[2])(self->charProtector, &$s1936);
                                    $tmp1935 = $tmp1938;
                                    panda$core$String* $tmp1939 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(value1901, &$s1934, $tmp1935);
                                    $tmp1933 = $tmp1939;
                                    $tmp1932 = $tmp1933;
                                    value1901 = $tmp1932;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1932));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1933));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1935));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1931));
                                }
                                {
                                    $tmp1940 = value1901;
                                    panda$core$String* $tmp1947 = (($fn1946) self->charProtector->$class->vtable[2])(self->charProtector, &$s1945);
                                    $tmp1944 = $tmp1947;
                                    panda$core$String* $tmp1948 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(value1901, &$s1943, $tmp1944);
                                    $tmp1942 = $tmp1948;
                                    $tmp1941 = $tmp1942;
                                    value1901 = $tmp1941;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1941));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1942));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1944));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1940));
                                }
                            }
                            }
                            else {
                            panda$core$Int64$init$builtin_int64(&$tmp1949, 1);
                            panda$core$Bit $tmp1950 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$850_131905->$rawValue, $tmp1949);
                            if ($tmp1950.value) {
                            {
                                panda$core$String** $tmp1952 = ((panda$core$String**) ((char*) $match$850_131905->$data + 0));
                                text1951 = *$tmp1952;
                                {
                                    $tmp1953 = value1901;
                                    $tmp1954 = text1951;
                                    value1901 = $tmp1954;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1954));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1953));
                                }
                            }
                            }
                            }
                        }
                        $tmp1904 = -1;
                        goto $l1902;
                        $l1902:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1906));
                        switch ($tmp1904) {
                            case -1: goto $l1955;
                        }
                        $l1955:;
                        panda$core$MutableString$append$panda$core$String(p_text, value1901);
                    }
                    $tmp1893 = -1;
                    goto $l1891;
                    $l1891:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value1901));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) token1894));
                    token1894 = NULL;
                    switch ($tmp1893) {
                        case -1: goto $l1956;
                    }
                    $l1956:;
                }
                goto $l1883;
                $l1884:;
            }
            $tmp1875 = -1;
            goto $l1873;
            $l1873:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$848$91876));
            Iter$848$91876 = NULL;
            switch ($tmp1875) {
                case -1: goto $l1957;
            }
            $l1957:;
        }
    }
    $tmp1865 = -1;
    goto $l1863;
    $l1863:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokens1866));
    tokens1866 = NULL;
    switch ($tmp1865) {
        case -1: goto $l1958;
    }
    $l1958:;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous25$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* replacementText1962 = NULL;
    panda$core$String* wholeMatch1963 = NULL;
    panda$core$String* $tmp1964;
    panda$core$Object* $tmp1965;
    panda$core$Int64 $tmp1966;
    panda$core$String* altText1971 = NULL;
    panda$core$String* $tmp1972;
    panda$core$Object* $tmp1973;
    panda$core$Int64 $tmp1974;
    panda$core$String* id1979 = NULL;
    panda$core$String* $tmp1980;
    panda$core$Object* $tmp1981;
    panda$core$Int64 $tmp1982;
    panda$core$String* $tmp1987;
    panda$core$Bit $tmp1994;
    panda$core$String* $tmp1995;
    panda$core$String* $tmp1996;
    org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* defn1997 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp1998;
    panda$core$Object* $tmp1999;
    panda$core$String* url2004 = NULL;
    panda$core$String* $tmp2005;
    panda$core$String* $tmp2006;
    panda$core$String* $tmp2007;
    panda$core$String* $tmp2008;
    panda$core$RegularExpression* $tmp2009;
    panda$core$String* $tmp2012;
    panda$core$String* $tmp2017;
    panda$core$String* $tmp2018;
    panda$core$String* $tmp2019;
    panda$core$RegularExpression* $tmp2020;
    panda$core$String* $tmp2023;
    panda$core$String* title2028 = NULL;
    panda$core$String* $tmp2029;
    panda$core$String* titleTag2030 = NULL;
    panda$core$String* $tmp2031;
    panda$core$String* $tmp2038;
    panda$core$String* $tmp2039;
    panda$core$String* $tmp2040;
    panda$core$RegularExpression* $tmp2041;
    panda$core$String* $tmp2044;
    panda$core$String* $tmp2049;
    panda$core$String* $tmp2050;
    panda$core$String* $tmp2051;
    panda$core$RegularExpression* $tmp2052;
    panda$core$String* $tmp2055;
    panda$core$String* $tmp2060;
    panda$core$String* $tmp2061;
    panda$core$String* $tmp2062;
    panda$core$String* $tmp2063;
    panda$core$String* $tmp2064;
    panda$core$String* $tmp2065;
    panda$core$String* $tmp2073;
    panda$core$String* $tmp2074;
    panda$core$String* $tmp2075;
    panda$core$String* $tmp2076;
    panda$core$String* $tmp2077;
    panda$core$String* $tmp2078;
    panda$core$String* $tmp2087;
    panda$core$String* $tmp2088;
    panda$core$String* $returnValue2089;
    panda$core$String* $tmp2090;
    int $tmp1961;
    {
        memset(&replacementText1962, 0, sizeof(replacementText1962));
        panda$core$Int64$init$builtin_int64(&$tmp1966, 1);
        ITable* $tmp1967 = p_groups->$class->itable;
        while ($tmp1967->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1967 = $tmp1967->next;
        }
        $fn1969 $tmp1968 = $tmp1967->methods[0];
        panda$core$Object* $tmp1970 = $tmp1968(p_groups, $tmp1966);
        $tmp1965 = $tmp1970;
        $tmp1964 = ((panda$core$String*) $tmp1965);
        wholeMatch1963 = $tmp1964;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1964));
        panda$core$Panda$unref$panda$core$Object($tmp1965);
        panda$core$Int64$init$builtin_int64(&$tmp1974, 2);
        ITable* $tmp1975 = p_groups->$class->itable;
        while ($tmp1975->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1975 = $tmp1975->next;
        }
        $fn1977 $tmp1976 = $tmp1975->methods[0];
        panda$core$Object* $tmp1978 = $tmp1976(p_groups, $tmp1974);
        $tmp1973 = $tmp1978;
        $tmp1972 = ((panda$core$String*) $tmp1973);
        altText1971 = $tmp1972;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1972));
        panda$core$Panda$unref$panda$core$Object($tmp1973);
        panda$core$Int64$init$builtin_int64(&$tmp1982, 3);
        ITable* $tmp1983 = p_groups->$class->itable;
        while ($tmp1983->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1983 = $tmp1983->next;
        }
        $fn1985 $tmp1984 = $tmp1983->methods[0];
        panda$core$Object* $tmp1986 = $tmp1984(p_groups, $tmp1982);
        $tmp1981 = $tmp1986;
        $tmp1980 = ((panda$core$String*) $tmp1981);
        id1979 = $tmp1980;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1980));
        panda$core$Panda$unref$panda$core$Object($tmp1981);
        $tmp1987 = id1979;
        panda$core$Bit $tmp1991;
        if (((panda$core$Bit) { $tmp1987 != NULL }).value) goto $l1988; else goto $l1989;
        $l1988:;
        panda$core$Bit $tmp1993 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp1987, &$s1992);
        $tmp1991 = $tmp1993;
        goto $l1990;
        $l1989:;
        panda$core$Bit$init$builtin_bit(&$tmp1994, false);
        $tmp1991 = $tmp1994;
        goto $l1990;
        $l1990:;
        if ($tmp1991.value) {
        {
            {
                $tmp1995 = id1979;
                $tmp1996 = altText1971;
                id1979 = $tmp1996;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1996));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1995));
            }
        }
        }
        panda$core$Object* $tmp2000 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->linkDefinitions, ((panda$collections$Key*) id1979));
        $tmp1999 = $tmp2000;
        $tmp1998 = ((org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) $tmp1999);
        defn1997 = $tmp1998;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1998));
        panda$core$Panda$unref$panda$core$Object($tmp1999);
        if (((panda$core$Bit) { defn1997 != NULL }).value) {
        {
            int $tmp2003;
            {
                $tmp2005 = defn1997->url;
                url2004 = $tmp2005;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2005));
                {
                    $tmp2006 = url2004;
                    panda$core$RegularExpression* $tmp2010 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                    panda$core$RegularExpression$init$panda$core$String($tmp2010, &$s2011);
                    $tmp2009 = $tmp2010;
                    panda$core$String* $tmp2015 = (($fn2014) self->charProtector->$class->vtable[2])(self->charProtector, &$s2013);
                    $tmp2012 = $tmp2015;
                    panda$core$String* $tmp2016 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(url2004, $tmp2009, $tmp2012);
                    $tmp2008 = $tmp2016;
                    $tmp2007 = $tmp2008;
                    url2004 = $tmp2007;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2007));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2008));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2012));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2009));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2006));
                }
                {
                    $tmp2017 = url2004;
                    panda$core$RegularExpression* $tmp2021 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                    panda$core$RegularExpression$init$panda$core$String($tmp2021, &$s2022);
                    $tmp2020 = $tmp2021;
                    panda$core$String* $tmp2026 = (($fn2025) self->charProtector->$class->vtable[2])(self->charProtector, &$s2024);
                    $tmp2023 = $tmp2026;
                    panda$core$String* $tmp2027 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(url2004, $tmp2020, $tmp2023);
                    $tmp2019 = $tmp2027;
                    $tmp2018 = $tmp2019;
                    url2004 = $tmp2018;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2018));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2019));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2023));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2020));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2017));
                }
                $tmp2029 = defn1997->title;
                title2028 = $tmp2029;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2029));
                $tmp2031 = &$s2032;
                titleTag2030 = $tmp2031;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2031));
                bool $tmp2033 = ((panda$core$Bit) { title2028 != NULL }).value;
                if (!$tmp2033) goto $l2034;
                panda$core$Bit $tmp2036 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(title2028, &$s2035);
                $tmp2033 = $tmp2036.value;
                $l2034:;
                panda$core$Bit $tmp2037 = { $tmp2033 };
                if ($tmp2037.value) {
                {
                    {
                        $tmp2038 = title2028;
                        panda$core$RegularExpression* $tmp2042 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                        panda$core$RegularExpression$init$panda$core$String($tmp2042, &$s2043);
                        $tmp2041 = $tmp2042;
                        panda$core$String* $tmp2047 = (($fn2046) self->charProtector->$class->vtable[2])(self->charProtector, &$s2045);
                        $tmp2044 = $tmp2047;
                        panda$core$String* $tmp2048 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(title2028, $tmp2041, $tmp2044);
                        $tmp2040 = $tmp2048;
                        $tmp2039 = $tmp2040;
                        title2028 = $tmp2039;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2039));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2040));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2044));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2041));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2038));
                    }
                    {
                        $tmp2049 = title2028;
                        panda$core$RegularExpression* $tmp2053 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                        panda$core$RegularExpression$init$panda$core$String($tmp2053, &$s2054);
                        $tmp2052 = $tmp2053;
                        panda$core$String* $tmp2058 = (($fn2057) self->charProtector->$class->vtable[2])(self->charProtector, &$s2056);
                        $tmp2055 = $tmp2058;
                        panda$core$String* $tmp2059 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(title2028, $tmp2052, $tmp2055);
                        $tmp2051 = $tmp2059;
                        $tmp2050 = $tmp2051;
                        title2028 = $tmp2050;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2050));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2051));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2055));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2052));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2049));
                    }
                    {
                        $tmp2060 = titleTag2030;
                        panda$core$String* $tmp2067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2066, altText1971);
                        $tmp2065 = $tmp2067;
                        panda$core$String* $tmp2069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2065, &$s2068);
                        $tmp2064 = $tmp2069;
                        panda$core$String* $tmp2070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2064, title2028);
                        $tmp2063 = $tmp2070;
                        panda$core$String* $tmp2072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2063, &$s2071);
                        $tmp2062 = $tmp2072;
                        $tmp2061 = $tmp2062;
                        titleTag2030 = $tmp2061;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2061));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2062));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2063));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2064));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2065));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2060));
                    }
                }
                }
                {
                    $tmp2073 = replacementText1962;
                    panda$core$String* $tmp2080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2079, url2004);
                    $tmp2078 = $tmp2080;
                    panda$core$String* $tmp2082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2078, &$s2081);
                    $tmp2077 = $tmp2082;
                    panda$core$String* $tmp2083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2077, titleTag2030);
                    $tmp2076 = $tmp2083;
                    panda$core$String* $tmp2085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2076, &$s2084);
                    $tmp2075 = $tmp2085;
                    $tmp2074 = $tmp2075;
                    replacementText1962 = $tmp2074;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2074));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2075));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2076));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2077));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2078));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2073));
                }
            }
            $tmp2003 = -1;
            goto $l2001;
            $l2001:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) titleTag2030));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) title2028));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) url2004));
            url2004 = NULL;
            title2028 = NULL;
            titleTag2030 = NULL;
            switch ($tmp2003) {
                case -1: goto $l2086;
            }
            $l2086:;
        }
        }
        else {
        {
            {
                $tmp2087 = replacementText1962;
                $tmp2088 = wholeMatch1963;
                replacementText1962 = $tmp2088;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2088));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2087));
            }
        }
        }
        $tmp2090 = replacementText1962;
        $returnValue2089 = $tmp2090;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2090));
        $tmp1961 = 0;
        goto $l1959;
        $l2091:;
        return $returnValue2089;
    }
    $l1959:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defn1997));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) id1979));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) altText1971));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) wholeMatch1963));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) replacementText1962));
    wholeMatch1963 = NULL;
    altText1971 = NULL;
    id1979 = NULL;
    defn1997 = NULL;
    switch ($tmp1961) {
        case 0: goto $l2091;
    }
    $l2093:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim26$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar2097 = NULL;
    panda$core$Method* $tmp2098;
    panda$core$Method* $tmp2099;
    panda$core$Object* $tmp2101;
    panda$core$Object* $tmp2102;
    panda$core$Object* $returnValue2103;
    panda$core$Object* $tmp2104;
    panda$core$String* $tmp2105;
    panda$core$String* $tmp2106;
    int $tmp2096;
    {
        panda$core$Method* $tmp2100 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp2100, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp2099 = $tmp2100;
        $tmp2098 = $tmp2099;
        methodVar2097 = $tmp2098;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2098));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2099));
        {
            $tmp2101 = ((panda$core$MutableMethod*) methodVar2097)->target;
            $tmp2102 = self->target;
            ((panda$core$MutableMethod*) methodVar2097)->target = $tmp2102;
            panda$core$Panda$ref$panda$core$Object($tmp2102);
            panda$core$Panda$unref$panda$core$Object($tmp2101);
        }
        if (methodVar2097->target) {
            $tmp2106 = (($fn2107) methodVar2097->pointer)(methodVar2097->target, p_p0);
        } else {
            $tmp2106 = (($fn2108) methodVar2097->pointer)(p_p0);
        }
        $tmp2105 = $tmp2106;
        $tmp2104 = ((panda$core$Object*) $tmp2105);
        $returnValue2103 = $tmp2104;
        panda$core$Panda$ref$panda$core$Object($tmp2104);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2105));
        $tmp2096 = 0;
        goto $l2094;
        $l2109:;
        return $returnValue2103;
    }
    $l2094:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar2097));
    methodVar2097 = NULL;
    switch ($tmp2096) {
        case 0: goto $l2109;
    }
    $l2111:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doImages$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$core$RegularExpression* $tmp2115;
    panda$core$RegularExpression* $tmp2119;
    panda$core$RegularExpression* imageLink2123 = NULL;
    panda$core$RegularExpression* $tmp2124;
    panda$core$RegularExpression* $tmp2125;
    int $tmp2114;
    {
        panda$core$RegularExpression* $tmp2116 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp2116, &$s2117);
        $tmp2115 = $tmp2116;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_text, $tmp2115, &$s2118);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2115));
        panda$core$RegularExpression* $tmp2120 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp2120, &$s2121);
        $tmp2119 = $tmp2120;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_text, $tmp2119, &$s2122);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2119));
        panda$core$RegularExpression* $tmp2126 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp2126, &$s2127);
        $tmp2125 = $tmp2126;
        $tmp2124 = $tmp2125;
        imageLink2123 = $tmp2124;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2124));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2125));
        panda$core$MutableMethod* $tmp2128 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp2129 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2129, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous25$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2128, (panda$core$Int8*) &panda$core$MutableMethod$$shim26$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp2129)));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_text, imageLink2123, ((panda$core$Object*) $tmp2128));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2128));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2129));
    }
    $tmp2114 = -1;
    goto $l2112;
    $l2112:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) imageLink2123));
    imageLink2123 = NULL;
    switch ($tmp2114) {
        case -1: goto $l2130;
    }
    $l2130:;
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous27$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* replacementText2134 = NULL;
    panda$core$String* wholeMatch2135 = NULL;
    panda$core$String* $tmp2136;
    panda$core$Object* $tmp2137;
    panda$core$Int64 $tmp2138;
    panda$core$String* linkText2143 = NULL;
    panda$core$String* $tmp2144;
    panda$core$Object* $tmp2145;
    panda$core$Int64 $tmp2146;
    panda$core$String* id2151 = NULL;
    panda$core$String* $tmp2152;
    panda$core$Object* $tmp2153;
    panda$core$Int64 $tmp2154;
    panda$core$String* $tmp2159;
    panda$core$Bit $tmp2166;
    panda$core$String* $tmp2167;
    panda$core$String* $tmp2168;
    org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* defn2169 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp2170;
    panda$core$Object* $tmp2171;
    panda$core$String* url2176 = NULL;
    panda$core$String* $tmp2177;
    panda$core$String* $tmp2178;
    panda$core$String* $tmp2179;
    panda$core$String* $tmp2180;
    panda$core$String* $tmp2182;
    panda$core$String* $tmp2187;
    panda$core$String* $tmp2188;
    panda$core$String* $tmp2189;
    panda$core$String* $tmp2191;
    panda$core$String* title2196 = NULL;
    panda$core$String* $tmp2197;
    panda$core$String* titleTag2198 = NULL;
    panda$core$String* $tmp2199;
    panda$core$String* $tmp2206;
    panda$core$String* $tmp2207;
    panda$core$String* $tmp2208;
    panda$core$String* $tmp2210;
    panda$core$String* $tmp2215;
    panda$core$String* $tmp2216;
    panda$core$String* $tmp2217;
    panda$core$String* $tmp2219;
    panda$core$String* $tmp2224;
    panda$core$String* $tmp2225;
    panda$core$String* $tmp2226;
    panda$core$String* $tmp2227;
    panda$core$String* $tmp2232;
    panda$core$String* $tmp2233;
    panda$core$String* $tmp2234;
    panda$core$String* $tmp2235;
    panda$core$String* $tmp2236;
    panda$core$String* $tmp2237;
    panda$core$String* $tmp2238;
    panda$core$String* $tmp2239;
    panda$core$String* $tmp2251;
    panda$core$String* $tmp2252;
    panda$core$Object* $returnValue2253;
    panda$core$Object* $tmp2254;
    int $tmp2133;
    {
        memset(&replacementText2134, 0, sizeof(replacementText2134));
        panda$core$Int64$init$builtin_int64(&$tmp2138, 1);
        ITable* $tmp2139 = p_groups->$class->itable;
        while ($tmp2139->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2139 = $tmp2139->next;
        }
        $fn2141 $tmp2140 = $tmp2139->methods[0];
        panda$core$Object* $tmp2142 = $tmp2140(p_groups, $tmp2138);
        $tmp2137 = $tmp2142;
        $tmp2136 = ((panda$core$String*) $tmp2137);
        wholeMatch2135 = $tmp2136;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2136));
        panda$core$Panda$unref$panda$core$Object($tmp2137);
        panda$core$Int64$init$builtin_int64(&$tmp2146, 2);
        ITable* $tmp2147 = p_groups->$class->itable;
        while ($tmp2147->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2147 = $tmp2147->next;
        }
        $fn2149 $tmp2148 = $tmp2147->methods[0];
        panda$core$Object* $tmp2150 = $tmp2148(p_groups, $tmp2146);
        $tmp2145 = $tmp2150;
        $tmp2144 = ((panda$core$String*) $tmp2145);
        linkText2143 = $tmp2144;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2144));
        panda$core$Panda$unref$panda$core$Object($tmp2145);
        panda$core$Int64$init$builtin_int64(&$tmp2154, 3);
        ITable* $tmp2155 = p_groups->$class->itable;
        while ($tmp2155->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2155 = $tmp2155->next;
        }
        $fn2157 $tmp2156 = $tmp2155->methods[0];
        panda$core$Object* $tmp2158 = $tmp2156(p_groups, $tmp2154);
        $tmp2153 = $tmp2158;
        $tmp2152 = ((panda$core$String*) $tmp2153);
        id2151 = $tmp2152;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2152));
        panda$core$Panda$unref$panda$core$Object($tmp2153);
        $tmp2159 = id2151;
        panda$core$Bit $tmp2163;
        if (((panda$core$Bit) { $tmp2159 != NULL }).value) goto $l2160; else goto $l2161;
        $l2160:;
        panda$core$Bit $tmp2165 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp2159, &$s2164);
        $tmp2163 = $tmp2165;
        goto $l2162;
        $l2161:;
        panda$core$Bit$init$builtin_bit(&$tmp2166, false);
        $tmp2163 = $tmp2166;
        goto $l2162;
        $l2162:;
        if ($tmp2163.value) {
        {
            {
                $tmp2167 = id2151;
                $tmp2168 = linkText2143;
                id2151 = $tmp2168;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2168));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2167));
            }
        }
        }
        panda$core$Object* $tmp2172 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->linkDefinitions, ((panda$collections$Key*) id2151));
        $tmp2171 = $tmp2172;
        $tmp2170 = ((org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) $tmp2171);
        defn2169 = $tmp2170;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2170));
        panda$core$Panda$unref$panda$core$Object($tmp2171);
        if (((panda$core$Bit) { defn2169 != NULL }).value) {
        {
            int $tmp2175;
            {
                $tmp2177 = defn2169->url;
                url2176 = $tmp2177;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2177));
                {
                    $tmp2178 = url2176;
                    panda$core$String* $tmp2185 = (($fn2184) self->charProtector->$class->vtable[2])(self->charProtector, &$s2183);
                    $tmp2182 = $tmp2185;
                    panda$core$String* $tmp2186 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(url2176, &$s2181, $tmp2182);
                    $tmp2180 = $tmp2186;
                    $tmp2179 = $tmp2180;
                    url2176 = $tmp2179;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2179));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2180));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2182));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2178));
                }
                {
                    $tmp2187 = url2176;
                    panda$core$String* $tmp2194 = (($fn2193) self->charProtector->$class->vtable[2])(self->charProtector, &$s2192);
                    $tmp2191 = $tmp2194;
                    panda$core$String* $tmp2195 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(url2176, &$s2190, $tmp2191);
                    $tmp2189 = $tmp2195;
                    $tmp2188 = $tmp2189;
                    url2176 = $tmp2188;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2188));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2189));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2191));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2187));
                }
                $tmp2197 = defn2169->title;
                title2196 = $tmp2197;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2197));
                $tmp2199 = &$s2200;
                titleTag2198 = $tmp2199;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2199));
                bool $tmp2201 = ((panda$core$Bit) { title2196 != NULL }).value;
                if (!$tmp2201) goto $l2202;
                panda$core$Bit $tmp2204 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(title2196, &$s2203);
                $tmp2201 = $tmp2204.value;
                $l2202:;
                panda$core$Bit $tmp2205 = { $tmp2201 };
                if ($tmp2205.value) {
                {
                    {
                        $tmp2206 = title2196;
                        panda$core$String* $tmp2213 = (($fn2212) self->charProtector->$class->vtable[2])(self->charProtector, &$s2211);
                        $tmp2210 = $tmp2213;
                        panda$core$String* $tmp2214 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2196, &$s2209, $tmp2210);
                        $tmp2208 = $tmp2214;
                        $tmp2207 = $tmp2208;
                        title2196 = $tmp2207;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2207));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2208));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2210));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2206));
                    }
                    {
                        $tmp2215 = title2196;
                        panda$core$String* $tmp2222 = (($fn2221) self->charProtector->$class->vtable[2])(self->charProtector, &$s2220);
                        $tmp2219 = $tmp2222;
                        panda$core$String* $tmp2223 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2196, &$s2218, $tmp2219);
                        $tmp2217 = $tmp2223;
                        $tmp2216 = $tmp2217;
                        title2196 = $tmp2216;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2216));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2217));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2219));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2215));
                    }
                    {
                        $tmp2224 = titleTag2198;
                        panda$core$String* $tmp2229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2228, title2196);
                        $tmp2227 = $tmp2229;
                        panda$core$String* $tmp2231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2227, &$s2230);
                        $tmp2226 = $tmp2231;
                        $tmp2225 = $tmp2226;
                        titleTag2198 = $tmp2225;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2225));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2226));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2227));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2224));
                    }
                }
                }
                {
                    $tmp2232 = replacementText2134;
                    panda$core$String* $tmp2241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2240, url2176);
                    $tmp2239 = $tmp2241;
                    panda$core$String* $tmp2243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2239, &$s2242);
                    $tmp2238 = $tmp2243;
                    panda$core$String* $tmp2244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2238, titleTag2198);
                    $tmp2237 = $tmp2244;
                    panda$core$String* $tmp2246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2237, &$s2245);
                    $tmp2236 = $tmp2246;
                    panda$core$String* $tmp2247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2236, linkText2143);
                    $tmp2235 = $tmp2247;
                    panda$core$String* $tmp2249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2235, &$s2248);
                    $tmp2234 = $tmp2249;
                    $tmp2233 = $tmp2234;
                    replacementText2134 = $tmp2233;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2233));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2234));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2235));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2236));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2237));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2238));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2239));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2232));
                }
            }
            $tmp2175 = -1;
            goto $l2173;
            $l2173:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) titleTag2198));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) title2196));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) url2176));
            url2176 = NULL;
            title2196 = NULL;
            titleTag2198 = NULL;
            switch ($tmp2175) {
                case -1: goto $l2250;
            }
            $l2250:;
        }
        }
        else {
        {
            {
                $tmp2251 = replacementText2134;
                $tmp2252 = wholeMatch2135;
                replacementText2134 = $tmp2252;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2252));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2251));
            }
        }
        }
        $tmp2254 = ((panda$core$Object*) replacementText2134);
        $returnValue2253 = $tmp2254;
        panda$core$Panda$ref$panda$core$Object($tmp2254);
        $tmp2133 = 0;
        goto $l2131;
        $l2255:;
        return $returnValue2253;
    }
    $l2131:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defn2169));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) id2151));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) linkText2143));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) wholeMatch2135));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) replacementText2134));
    wholeMatch2135 = NULL;
    linkText2143 = NULL;
    id2151 = NULL;
    defn2169 = NULL;
    switch ($tmp2133) {
        case 0: goto $l2255;
    }
    $l2257:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous28$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* linkText2261 = NULL;
    panda$core$String* $tmp2262;
    panda$core$Object* $tmp2263;
    panda$core$Int64 $tmp2264;
    panda$core$String* url2269 = NULL;
    panda$core$String* $tmp2270;
    panda$core$Object* $tmp2271;
    panda$core$Int64 $tmp2272;
    panda$core$String* title2277 = NULL;
    panda$core$String* $tmp2278;
    panda$core$Object* $tmp2279;
    panda$core$Int64 $tmp2280;
    panda$core$String* $tmp2285;
    panda$core$String* $tmp2286;
    panda$core$String* $tmp2287;
    panda$core$RegularExpression* $tmp2288;
    panda$core$String* $tmp2291;
    panda$core$String* $tmp2296;
    panda$core$String* $tmp2297;
    panda$core$String* $tmp2298;
    panda$core$RegularExpression* $tmp2299;
    panda$core$String* $tmp2302;
    panda$core$MutableString* result2307 = NULL;
    panda$core$MutableString* $tmp2308;
    panda$core$MutableString* $tmp2309;
    panda$core$String* $tmp2311;
    panda$core$String* $tmp2312;
    panda$core$String* $tmp2317;
    panda$core$String* $tmp2318;
    panda$core$String* $tmp2319;
    panda$core$String* $tmp2321;
    panda$core$String* $tmp2326;
    panda$core$String* $tmp2327;
    panda$core$String* $tmp2328;
    panda$core$String* $tmp2330;
    panda$core$String* $tmp2335;
    panda$core$String* $tmp2336;
    panda$core$String* $tmp2337;
    panda$core$Char8 $tmp2342;
    panda$core$UInt8 $tmp2343;
    panda$core$String* $tmp2344;
    panda$core$String* $tmp2345;
    panda$core$String* $returnValue2351;
    panda$core$String* $tmp2352;
    panda$core$String* $tmp2353;
    int $tmp2260;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2264, 2);
        ITable* $tmp2265 = p_groups->$class->itable;
        while ($tmp2265->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2265 = $tmp2265->next;
        }
        $fn2267 $tmp2266 = $tmp2265->methods[0];
        panda$core$Object* $tmp2268 = $tmp2266(p_groups, $tmp2264);
        $tmp2263 = $tmp2268;
        $tmp2262 = ((panda$core$String*) $tmp2263);
        linkText2261 = $tmp2262;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2262));
        panda$core$Panda$unref$panda$core$Object($tmp2263);
        panda$core$Int64$init$builtin_int64(&$tmp2272, 3);
        ITable* $tmp2273 = p_groups->$class->itable;
        while ($tmp2273->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2273 = $tmp2273->next;
        }
        $fn2275 $tmp2274 = $tmp2273->methods[0];
        panda$core$Object* $tmp2276 = $tmp2274(p_groups, $tmp2272);
        $tmp2271 = $tmp2276;
        $tmp2270 = ((panda$core$String*) $tmp2271);
        url2269 = $tmp2270;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2270));
        panda$core$Panda$unref$panda$core$Object($tmp2271);
        panda$core$Int64$init$builtin_int64(&$tmp2280, 6);
        ITable* $tmp2281 = p_groups->$class->itable;
        while ($tmp2281->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2281 = $tmp2281->next;
        }
        $fn2283 $tmp2282 = $tmp2281->methods[0];
        panda$core$Object* $tmp2284 = $tmp2282(p_groups, $tmp2280);
        $tmp2279 = $tmp2284;
        $tmp2278 = ((panda$core$String*) $tmp2279);
        title2277 = $tmp2278;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2278));
        panda$core$Panda$unref$panda$core$Object($tmp2279);
        {
            $tmp2285 = url2269;
            panda$core$RegularExpression* $tmp2289 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
            panda$core$RegularExpression$init$panda$core$String($tmp2289, &$s2290);
            $tmp2288 = $tmp2289;
            panda$core$String* $tmp2294 = (($fn2293) self->charProtector->$class->vtable[2])(self->charProtector, &$s2292);
            $tmp2291 = $tmp2294;
            panda$core$String* $tmp2295 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(url2269, $tmp2288, $tmp2291);
            $tmp2287 = $tmp2295;
            $tmp2286 = $tmp2287;
            url2269 = $tmp2286;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2286));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2287));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2291));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2288));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2285));
        }
        {
            $tmp2296 = url2269;
            panda$core$RegularExpression* $tmp2300 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
            panda$core$RegularExpression$init$panda$core$String($tmp2300, &$s2301);
            $tmp2299 = $tmp2300;
            panda$core$String* $tmp2305 = (($fn2304) self->charProtector->$class->vtable[2])(self->charProtector, &$s2303);
            $tmp2302 = $tmp2305;
            panda$core$String* $tmp2306 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(url2269, $tmp2299, $tmp2302);
            $tmp2298 = $tmp2306;
            $tmp2297 = $tmp2298;
            url2269 = $tmp2297;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2297));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2298));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2302));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2299));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2296));
        }
        panda$core$MutableString* $tmp2310 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp2310);
        $tmp2309 = $tmp2310;
        $tmp2308 = $tmp2309;
        result2307 = $tmp2308;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2308));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2309));
        panda$core$String* $tmp2314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2313, url2269);
        $tmp2312 = $tmp2314;
        panda$core$String* $tmp2316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2312, &$s2315);
        $tmp2311 = $tmp2316;
        panda$core$MutableString$append$panda$core$String(result2307, $tmp2311);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2311));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2312));
        if (((panda$core$Bit) { title2277 != NULL }).value) {
        {
            {
                $tmp2317 = title2277;
                panda$core$String* $tmp2324 = (($fn2323) self->charProtector->$class->vtable[2])(self->charProtector, &$s2322);
                $tmp2321 = $tmp2324;
                panda$core$String* $tmp2325 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2277, &$s2320, $tmp2321);
                $tmp2319 = $tmp2325;
                $tmp2318 = $tmp2319;
                title2277 = $tmp2318;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2318));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2319));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2321));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2317));
            }
            {
                $tmp2326 = title2277;
                panda$core$String* $tmp2333 = (($fn2332) self->charProtector->$class->vtable[2])(self->charProtector, &$s2331);
                $tmp2330 = $tmp2333;
                panda$core$String* $tmp2334 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2277, &$s2329, $tmp2330);
                $tmp2328 = $tmp2334;
                $tmp2327 = $tmp2328;
                title2277 = $tmp2327;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2327));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2328));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2330));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2326));
            }
            {
                $tmp2335 = title2277;
                panda$core$String* $tmp2340 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2277, &$s2338, &$s2339);
                $tmp2337 = $tmp2340;
                $tmp2336 = $tmp2337;
                title2277 = $tmp2336;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2336));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2337));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2335));
            }
            panda$core$MutableString$append$panda$core$String(result2307, &$s2341);
            panda$core$MutableString$append$panda$core$String(result2307, title2277);
            panda$core$UInt8$init$builtin_uint8(&$tmp2343, 34);
            panda$core$Char8$init$panda$core$UInt8(&$tmp2342, $tmp2343);
            panda$core$MutableString$append$panda$core$Char8(result2307, $tmp2342);
        }
        }
        panda$core$String* $tmp2347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2346, linkText2261);
        $tmp2345 = $tmp2347;
        panda$core$String* $tmp2349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2345, &$s2348);
        $tmp2344 = $tmp2349;
        panda$core$MutableString$append$panda$core$String(result2307, $tmp2344);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2344));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2345));
        panda$core$MutableString$append$panda$core$String(result2307, &$s2350);
        panda$core$String* $tmp2354 = panda$core$MutableString$convert$R$panda$core$String(result2307);
        $tmp2353 = $tmp2354;
        $tmp2352 = $tmp2353;
        $returnValue2351 = $tmp2352;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2352));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2353));
        $tmp2260 = 0;
        goto $l2258;
        $l2355:;
        return $returnValue2351;
    }
    $l2258:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2307));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) title2277));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) url2269));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) linkText2261));
    linkText2261 = NULL;
    url2269 = NULL;
    title2277 = NULL;
    result2307 = NULL;
    switch ($tmp2260) {
        case 0: goto $l2355;
    }
    $l2357:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim29$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar2361 = NULL;
    panda$core$Method* $tmp2362;
    panda$core$Method* $tmp2363;
    panda$core$Object* $tmp2365;
    panda$core$Object* $tmp2366;
    panda$core$Object* $returnValue2367;
    panda$core$Object* $tmp2368;
    panda$core$String* $tmp2369;
    panda$core$String* $tmp2370;
    int $tmp2360;
    {
        panda$core$Method* $tmp2364 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp2364, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp2363 = $tmp2364;
        $tmp2362 = $tmp2363;
        methodVar2361 = $tmp2362;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2362));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2363));
        {
            $tmp2365 = ((panda$core$MutableMethod*) methodVar2361)->target;
            $tmp2366 = self->target;
            ((panda$core$MutableMethod*) methodVar2361)->target = $tmp2366;
            panda$core$Panda$ref$panda$core$Object($tmp2366);
            panda$core$Panda$unref$panda$core$Object($tmp2365);
        }
        if (methodVar2361->target) {
            $tmp2370 = (($fn2371) methodVar2361->pointer)(methodVar2361->target, p_p0);
        } else {
            $tmp2370 = (($fn2372) methodVar2361->pointer)(p_p0);
        }
        $tmp2369 = $tmp2370;
        $tmp2368 = ((panda$core$Object*) $tmp2369);
        $returnValue2367 = $tmp2368;
        panda$core$Panda$ref$panda$core$Object($tmp2368);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2369));
        $tmp2360 = 0;
        goto $l2358;
        $l2373:;
        return $returnValue2367;
    }
    $l2358:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar2361));
    methodVar2361 = NULL;
    switch ($tmp2360) {
        case 0: goto $l2373;
    }
    $l2375:;
    abort();
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous30$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* replacementText2379 = NULL;
    panda$core$String* wholeMatch2380 = NULL;
    panda$core$String* $tmp2381;
    panda$core$Object* $tmp2382;
    panda$core$Int64 $tmp2383;
    panda$core$String* linkText2388 = NULL;
    panda$core$String* $tmp2389;
    panda$core$Object* $tmp2390;
    panda$core$Int64 $tmp2391;
    panda$core$String* id2396 = NULL;
    panda$core$String* $tmp2397;
    panda$core$String* $tmp2398;
    panda$core$String* $tmp2399;
    panda$core$String* $tmp2400;
    panda$core$RegularExpression* $tmp2401;
    org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* defn2406 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp2407;
    panda$core$Object* $tmp2408;
    panda$core$String* url2413 = NULL;
    panda$core$String* $tmp2414;
    panda$core$String* $tmp2415;
    panda$core$String* $tmp2416;
    panda$core$String* $tmp2417;
    panda$core$String* $tmp2419;
    panda$core$String* $tmp2424;
    panda$core$String* $tmp2425;
    panda$core$String* $tmp2426;
    panda$core$String* $tmp2428;
    panda$core$String* title2433 = NULL;
    panda$core$String* $tmp2434;
    panda$core$String* titleTag2435 = NULL;
    panda$core$String* $tmp2436;
    panda$core$String* $tmp2443;
    panda$core$String* $tmp2444;
    panda$core$String* $tmp2445;
    panda$core$String* $tmp2447;
    panda$core$String* $tmp2452;
    panda$core$String* $tmp2453;
    panda$core$String* $tmp2454;
    panda$core$String* $tmp2456;
    panda$core$String* $tmp2461;
    panda$core$String* $tmp2462;
    panda$core$String* $tmp2463;
    panda$core$String* $tmp2464;
    panda$core$String* $tmp2469;
    panda$core$String* $tmp2470;
    panda$core$String* $tmp2471;
    panda$core$String* $tmp2472;
    panda$core$String* $tmp2473;
    panda$core$String* $tmp2474;
    panda$core$String* $tmp2475;
    panda$core$String* $tmp2476;
    panda$core$String* $tmp2488;
    panda$core$String* $tmp2489;
    panda$core$Object* $returnValue2490;
    panda$core$Object* $tmp2491;
    int $tmp2378;
    {
        memset(&replacementText2379, 0, sizeof(replacementText2379));
        panda$core$Int64$init$builtin_int64(&$tmp2383, 1);
        ITable* $tmp2384 = p_groups->$class->itable;
        while ($tmp2384->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2384 = $tmp2384->next;
        }
        $fn2386 $tmp2385 = $tmp2384->methods[0];
        panda$core$Object* $tmp2387 = $tmp2385(p_groups, $tmp2383);
        $tmp2382 = $tmp2387;
        $tmp2381 = ((panda$core$String*) $tmp2382);
        wholeMatch2380 = $tmp2381;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2381));
        panda$core$Panda$unref$panda$core$Object($tmp2382);
        panda$core$Int64$init$builtin_int64(&$tmp2391, 2);
        ITable* $tmp2392 = p_groups->$class->itable;
        while ($tmp2392->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2392 = $tmp2392->next;
        }
        $fn2394 $tmp2393 = $tmp2392->methods[0];
        panda$core$Object* $tmp2395 = $tmp2393(p_groups, $tmp2391);
        $tmp2390 = $tmp2395;
        $tmp2389 = ((panda$core$String*) $tmp2390);
        linkText2388 = $tmp2389;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2389));
        panda$core$Panda$unref$panda$core$Object($tmp2390);
        $tmp2397 = linkText2388;
        id2396 = $tmp2397;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2397));
        {
            $tmp2398 = id2396;
            panda$core$RegularExpression* $tmp2402 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
            panda$core$RegularExpression$init$panda$core$String($tmp2402, &$s2403);
            $tmp2401 = $tmp2402;
            panda$core$String* $tmp2405 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(id2396, $tmp2401, &$s2404);
            $tmp2400 = $tmp2405;
            $tmp2399 = $tmp2400;
            id2396 = $tmp2399;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2399));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2400));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2401));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2398));
        }
        panda$core$Object* $tmp2409 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->linkDefinitions, ((panda$collections$Key*) id2396));
        $tmp2408 = $tmp2409;
        $tmp2407 = ((org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) $tmp2408);
        defn2406 = $tmp2407;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2407));
        panda$core$Panda$unref$panda$core$Object($tmp2408);
        if (((panda$core$Bit) { defn2406 != NULL }).value) {
        {
            int $tmp2412;
            {
                $tmp2414 = defn2406->url;
                url2413 = $tmp2414;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2414));
                {
                    $tmp2415 = url2413;
                    panda$core$String* $tmp2422 = (($fn2421) self->charProtector->$class->vtable[2])(self->charProtector, &$s2420);
                    $tmp2419 = $tmp2422;
                    panda$core$String* $tmp2423 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(url2413, &$s2418, $tmp2419);
                    $tmp2417 = $tmp2423;
                    $tmp2416 = $tmp2417;
                    url2413 = $tmp2416;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2416));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2417));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2419));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2415));
                }
                {
                    $tmp2424 = url2413;
                    panda$core$String* $tmp2431 = (($fn2430) self->charProtector->$class->vtable[2])(self->charProtector, &$s2429);
                    $tmp2428 = $tmp2431;
                    panda$core$String* $tmp2432 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(url2413, &$s2427, $tmp2428);
                    $tmp2426 = $tmp2432;
                    $tmp2425 = $tmp2426;
                    url2413 = $tmp2425;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2425));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2426));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2428));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2424));
                }
                $tmp2434 = defn2406->title;
                title2433 = $tmp2434;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2434));
                $tmp2436 = &$s2437;
                titleTag2435 = $tmp2436;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2436));
                bool $tmp2438 = ((panda$core$Bit) { title2433 != NULL }).value;
                if (!$tmp2438) goto $l2439;
                panda$core$Bit $tmp2441 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(title2433, &$s2440);
                $tmp2438 = $tmp2441.value;
                $l2439:;
                panda$core$Bit $tmp2442 = { $tmp2438 };
                if ($tmp2442.value) {
                {
                    {
                        $tmp2443 = title2433;
                        panda$core$String* $tmp2450 = (($fn2449) self->charProtector->$class->vtable[2])(self->charProtector, &$s2448);
                        $tmp2447 = $tmp2450;
                        panda$core$String* $tmp2451 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2433, &$s2446, $tmp2447);
                        $tmp2445 = $tmp2451;
                        $tmp2444 = $tmp2445;
                        title2433 = $tmp2444;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2444));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2445));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2447));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2443));
                    }
                    {
                        $tmp2452 = title2433;
                        panda$core$String* $tmp2459 = (($fn2458) self->charProtector->$class->vtable[2])(self->charProtector, &$s2457);
                        $tmp2456 = $tmp2459;
                        panda$core$String* $tmp2460 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2433, &$s2455, $tmp2456);
                        $tmp2454 = $tmp2460;
                        $tmp2453 = $tmp2454;
                        title2433 = $tmp2453;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2453));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2454));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2456));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2452));
                    }
                    {
                        $tmp2461 = titleTag2435;
                        panda$core$String* $tmp2466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2465, title2433);
                        $tmp2464 = $tmp2466;
                        panda$core$String* $tmp2468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2464, &$s2467);
                        $tmp2463 = $tmp2468;
                        $tmp2462 = $tmp2463;
                        titleTag2435 = $tmp2462;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2462));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2463));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2464));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2461));
                    }
                }
                }
                {
                    $tmp2469 = replacementText2379;
                    panda$core$String* $tmp2478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2477, url2413);
                    $tmp2476 = $tmp2478;
                    panda$core$String* $tmp2480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2476, &$s2479);
                    $tmp2475 = $tmp2480;
                    panda$core$String* $tmp2481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2475, titleTag2435);
                    $tmp2474 = $tmp2481;
                    panda$core$String* $tmp2483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2474, &$s2482);
                    $tmp2473 = $tmp2483;
                    panda$core$String* $tmp2484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2473, linkText2388);
                    $tmp2472 = $tmp2484;
                    panda$core$String* $tmp2486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2472, &$s2485);
                    $tmp2471 = $tmp2486;
                    $tmp2470 = $tmp2471;
                    replacementText2379 = $tmp2470;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2470));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2471));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2472));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2473));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2474));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2475));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2476));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2469));
                }
            }
            $tmp2412 = -1;
            goto $l2410;
            $l2410:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) titleTag2435));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) title2433));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) url2413));
            url2413 = NULL;
            title2433 = NULL;
            titleTag2435 = NULL;
            switch ($tmp2412) {
                case -1: goto $l2487;
            }
            $l2487:;
        }
        }
        else {
        {
            {
                $tmp2488 = replacementText2379;
                $tmp2489 = wholeMatch2380;
                replacementText2379 = $tmp2489;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2489));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2488));
            }
        }
        }
        $tmp2491 = ((panda$core$Object*) replacementText2379);
        $returnValue2490 = $tmp2491;
        panda$core$Panda$ref$panda$core$Object($tmp2491);
        $tmp2378 = 0;
        goto $l2376;
        $l2492:;
        return $returnValue2490;
    }
    $l2376:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defn2406));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) id2396));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) linkText2388));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) wholeMatch2380));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) replacementText2379));
    wholeMatch2380 = NULL;
    linkText2388 = NULL;
    id2396 = NULL;
    defn2406 = NULL;
    switch ($tmp2378) {
        case 0: goto $l2492;
    }
    $l2494:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doAnchors$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* internalLink2498 = NULL;
    panda$core$RegularExpression* $tmp2499;
    panda$core$RegularExpression* $tmp2500;
    panda$core$RegularExpression* inlineLink2504 = NULL;
    panda$core$RegularExpression* $tmp2505;
    panda$core$RegularExpression* $tmp2506;
    panda$core$Int64 $tmp2509;
    panda$core$RegularExpression* referenceShortcut2512 = NULL;
    panda$core$RegularExpression* $tmp2513;
    panda$core$RegularExpression* $tmp2514;
    panda$core$Int64 $tmp2517;
    int $tmp2497;
    {
        panda$core$RegularExpression* $tmp2501 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp2501, &$s2502);
        $tmp2500 = $tmp2501;
        $tmp2499 = $tmp2500;
        internalLink2498 = $tmp2499;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2499));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2500));
        panda$core$MutableMethod* $tmp2503 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2503, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous27$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) self));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, internalLink2498, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp2503)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2503));
        panda$core$RegularExpression* $tmp2507 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp2509, 4);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp2507, &$s2508, $tmp2509);
        $tmp2506 = $tmp2507;
        $tmp2505 = $tmp2506;
        inlineLink2504 = $tmp2505;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2505));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2506));
        panda$core$MutableMethod* $tmp2510 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp2511 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2511, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous28$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2510, (panda$core$Int8*) &panda$core$MutableMethod$$shim29$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp2511)));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, inlineLink2504, ((panda$core$Object*) $tmp2510));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2510));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2511));
        panda$core$RegularExpression* $tmp2515 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp2517, 4);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp2515, &$s2516, $tmp2517);
        $tmp2514 = $tmp2515;
        $tmp2513 = $tmp2514;
        referenceShortcut2512 = $tmp2513;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2513));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2514));
        panda$core$MutableMethod* $tmp2518 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2518, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous30$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) self));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, referenceShortcut2512, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp2518)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2518));
    }
    $tmp2497 = -1;
    goto $l2495;
    $l2495:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) referenceShortcut2512));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inlineLink2504));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) internalLink2498));
    internalLink2498 = NULL;
    inlineLink2504 = NULL;
    referenceShortcut2512 = NULL;
    switch ($tmp2497) {
        case -1: goto $l2519;
    }
    $l2519:;
}
void org$pandalanguage$pandac$pandadoc$Markdown$doItalicsAndBold$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* $tmp2520;
    panda$core$RegularExpression* $tmp2524;
    panda$core$RegularExpression* $tmp2521 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp2521, &$s2522);
    $tmp2520 = $tmp2521;
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_markup, $tmp2520, &$s2523);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2520));
    panda$core$RegularExpression* $tmp2525 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp2525, &$s2526);
    $tmp2524 = $tmp2525;
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_markup, $tmp2524, &$s2527);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2524));
}
void org$pandalanguage$pandac$pandadoc$Markdown$encodeAmpsAndAngles$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* $tmp2528;
    panda$core$RegularExpression* $tmp2532;
    panda$core$RegularExpression* $tmp2529 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp2529, &$s2530);
    $tmp2528 = $tmp2529;
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_markup, $tmp2528, &$s2531);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2528));
    panda$core$RegularExpression* $tmp2533 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp2533, &$s2534);
    $tmp2532 = $tmp2533;
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_markup, $tmp2532, &$s2535);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2532));
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous31$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* code2539 = NULL;
    panda$core$String* $tmp2540;
    panda$core$Object* $tmp2541;
    panda$core$Int64 $tmp2542;
    panda$core$MutableString* sub2547 = NULL;
    panda$core$MutableString* $tmp2548;
    panda$core$MutableString* $tmp2549;
    panda$core$RegularExpression* $tmp2551;
    panda$core$RegularExpression* $tmp2555;
    panda$core$String* $returnValue2560;
    panda$core$String* $tmp2561;
    panda$core$String* $tmp2562;
    panda$core$String* $tmp2563;
    int $tmp2538;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2542, 2);
        ITable* $tmp2543 = p_groups->$class->itable;
        while ($tmp2543->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2543 = $tmp2543->next;
        }
        $fn2545 $tmp2544 = $tmp2543->methods[0];
        panda$core$Object* $tmp2546 = $tmp2544(p_groups, $tmp2542);
        $tmp2541 = $tmp2546;
        $tmp2540 = ((panda$core$String*) $tmp2541);
        code2539 = $tmp2540;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2540));
        panda$core$Panda$unref$panda$core$Object($tmp2541);
        panda$core$MutableString* $tmp2550 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp2550, code2539);
        $tmp2549 = $tmp2550;
        $tmp2548 = $tmp2549;
        sub2547 = $tmp2548;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2548));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2549));
        panda$core$RegularExpression* $tmp2552 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp2552, &$s2553);
        $tmp2551 = $tmp2552;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(sub2547, $tmp2551, &$s2554);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2551));
        panda$core$RegularExpression* $tmp2556 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp2556, &$s2557);
        $tmp2555 = $tmp2556;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(sub2547, $tmp2555, &$s2558);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2555));
        (($fn2559) self->$class->vtable[18])(self, sub2547);
        panda$core$String* $tmp2565 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2564, ((panda$core$Object*) sub2547));
        $tmp2563 = $tmp2565;
        panda$core$String* $tmp2567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2563, &$s2566);
        $tmp2562 = $tmp2567;
        $tmp2561 = $tmp2562;
        $returnValue2560 = $tmp2561;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2561));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2562));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2563));
        $tmp2538 = 0;
        goto $l2536;
        $l2568:;
        return $returnValue2560;
    }
    $l2536:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) sub2547));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) code2539));
    code2539 = NULL;
    sub2547 = NULL;
    switch ($tmp2538) {
        case 0: goto $l2568;
    }
    $l2570:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim32$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar2574 = NULL;
    panda$core$Method* $tmp2575;
    panda$core$Method* $tmp2576;
    panda$core$Object* $tmp2578;
    panda$core$Object* $tmp2579;
    panda$core$Object* $returnValue2580;
    panda$core$Object* $tmp2581;
    panda$core$String* $tmp2582;
    panda$core$String* $tmp2583;
    int $tmp2573;
    {
        panda$core$Method* $tmp2577 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp2577, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp2576 = $tmp2577;
        $tmp2575 = $tmp2576;
        methodVar2574 = $tmp2575;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2575));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2576));
        {
            $tmp2578 = ((panda$core$MutableMethod*) methodVar2574)->target;
            $tmp2579 = self->target;
            ((panda$core$MutableMethod*) methodVar2574)->target = $tmp2579;
            panda$core$Panda$ref$panda$core$Object($tmp2579);
            panda$core$Panda$unref$panda$core$Object($tmp2578);
        }
        if (methodVar2574->target) {
            $tmp2583 = (($fn2584) methodVar2574->pointer)(methodVar2574->target, p_p0);
        } else {
            $tmp2583 = (($fn2585) methodVar2574->pointer)(p_p0);
        }
        $tmp2582 = $tmp2583;
        $tmp2581 = ((panda$core$Object*) $tmp2582);
        $returnValue2580 = $tmp2581;
        panda$core$Panda$ref$panda$core$Object($tmp2581);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2582));
        $tmp2573 = 0;
        goto $l2571;
        $l2586:;
        return $returnValue2580;
    }
    $l2571:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar2574));
    methodVar2574 = NULL;
    switch ($tmp2573) {
        case 0: goto $l2586;
    }
    $l2588:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doCodeSpans$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* $tmp2589;
    panda$core$RegularExpression* $tmp2590 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp2590, &$s2591);
    $tmp2589 = $tmp2590;
    panda$core$MutableMethod* $tmp2592 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
    panda$core$MutableMethod* $tmp2593 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
    panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2593, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous31$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
    panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2592, (panda$core$Int8*) &panda$core$MutableMethod$$shim32$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp2593)));
    panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, $tmp2589, ((panda$core$Object*) $tmp2592));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2592));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2593));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2589));
}
void org$pandalanguage$pandac$pandadoc$Markdown$cleanup(org$pandalanguage$pandac$pandadoc$Markdown* self) {
    int $tmp2596;
    {
    }
    $tmp2596 = -1;
    goto $l2594;
    $l2594:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2596) {
        case -1: goto $l2597;
    }
    $l2597:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->errorQueue));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parser));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->linkResolver));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->linkDefinitions));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->charProtector));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->htmlProtector));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->random));
}

