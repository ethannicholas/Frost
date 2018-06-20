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
#include "org/pandalanguage/pandac/pandadoc/Markdown/HTMLToken.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"

static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$Markdown$class_type org$pandalanguage$pandac$pandadoc$Markdown$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$cleanup, org$pandalanguage$pandac$pandadoc$Markdown$process$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$encodeBackslashEscapes$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$encodeEscapes$panda$core$MutableString$panda$collections$ListView$LTpanda$core$Char8$GT$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$stripLinkDefinitions$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$runBlockGamut$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$doHorizontalRules$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$hashHTMLBlocks$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$formParagraphs$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$doAutoLinks$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$unescapeSpecialChars$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$encodeEmail$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$doBlockQuotes$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$detabify$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$doCodeBlocks$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$prettyPrint$org$pandalanguage$pandac$parser$Parser$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$syntaxHighlight$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$encodeCode$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$doLists$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$processListItems$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$doHeaders$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$runSpanGamut$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$tokenizeHTML$panda$core$String$R$panda$collections$ListView$LTorg$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$GT, org$pandalanguage$pandac$pandadoc$Markdown$escapeSpecialCharsWithinTagAttributes$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$doImages$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$doAnchors$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$doItalicsAndBold$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$encodeAmpsAndAngles$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$doCodeSpans$panda$core$MutableString} };

typedef void (*$fn52)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn57)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn58)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn59)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn60)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn86)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef void (*$fn89)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*, panda$collections$ListView*, panda$core$String*);
typedef void (*$fn91)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*, panda$collections$ListView*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn101)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn108)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn118)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn134)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Object* (*$fn148)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn158)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn160)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Int64 (*$fn164)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn174)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn211)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn212)(panda$collections$ListView*);
typedef void (*$fn228)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn229)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn230)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn231)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn232)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn233)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn234)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$collections$Iterator* (*$fn253)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn260)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn271)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn294)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn302)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn323)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn324)(panda$collections$ListView*);
typedef panda$core$String* (*$fn341)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn342)(panda$collections$ListView*);
typedef panda$core$String* (*$fn359)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn360)(panda$collections$ListView*);
typedef panda$core$String* (*$fn377)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn378)(panda$collections$ListView*);
typedef panda$core$String* (*$fn421)(panda$collections$ListView*, panda$core$String*);
typedef panda$core$String* (*$fn436)(panda$collections$ListView*, panda$core$String*);
typedef panda$core$String* (*$fn633)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef void (*$fn642)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn663)(panda$collections$ListView*, panda$core$String*);
typedef panda$core$Object* (*$fn675)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn681)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn687)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$core$String* (*$fn698)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$core$String* (*$fn729)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn730)(panda$collections$ListView*);
typedef panda$core$Bit (*$fn761)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn772)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn777)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn796)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn803)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn810)(panda$collections$Iterator*);
typedef panda$core$Real64 (*$fn815)(panda$math$Random*);
typedef panda$core$Object* (*$fn849)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn862)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn879)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn889)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Object* (*$fn930)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn969)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn970)(panda$collections$ListView*);
typedef panda$core$String* (*$fn996)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn997)(panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn1034)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1041)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1052)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1122)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1127)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1132)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1137)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1142)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1202)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1225)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1248)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1260)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1267)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Object* (*$fn1279)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1287)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn1311)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$core$Object* (*$fn1351)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1359)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn1383)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$core$Object* (*$fn1510)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1522)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1530)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1531)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1532)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn1557)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1558)(panda$collections$ListView*);
typedef panda$core$Object* (*$fn1622)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1624)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn1649)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1650)(panda$collections$ListView*);
typedef panda$core$Object* (*$fn1665)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1667)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn1692)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1693)(panda$collections$ListView*);
typedef panda$core$Object* (*$fn1706)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1716)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1718)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1770)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1771)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1772)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1773)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1774)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1775)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1776)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1777)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1778)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$collections$ListView* (*$fn1874)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1884)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1891)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1902)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1922)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1931)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1940)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1949)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Object* (*$fn1972)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1980)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1988)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn2017)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2028)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2049)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2060)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2110)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn2111)(panda$collections$ListView*);
typedef panda$core$Object* (*$fn2144)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2152)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2160)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn2187)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2196)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2215)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2224)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Object* (*$fn2270)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2278)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2286)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn2296)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2307)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2329)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2338)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2377)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn2378)(panda$collections$ListView*);
typedef panda$core$Object* (*$fn2392)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2400)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn2427)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2436)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2455)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2464)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Object* (*$fn2551)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2565)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn2590)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn2591)(panda$collections$ListView*);

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
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x60\x5f\x3e\x21", 4, 203944687, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x7b\x7d\x5b\x5d\x28\x29\x23\x2b\x2d\x2e", 11, -6003771304831432199, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x5c\x5c", 4, 199795969, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x5c", 3, 1978177, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29", 4, 145926154, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x71\x75\x6f\x74\x3b", 6, 1472784484255, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x5b\x20\x5d\x7b\x30\x2c\x33\x7d\x5c\x5b\x28\x2e\x2b\x29\x5c\x5d\x3a\x5b\x20\x5c\x74\x5d\x2a\x5c\x6e\x3f\x5b\x20\x5c\x74\x5d\x2a\x3c\x3f\x28\x5c\x53\x2b\x3f\x29\x3e\x3f\x5b\x20\x5c\x74\x5d\x2a\x5c\x6e\x3f\x5b\x20\x5c\x74\x5d\x2a\x28\x3f\x3a\x5b\x22\x28\x5d\x28\x2e\x2b\x3f\x29\x5b\x22\x29\x5d\x5b\x20\x5c\x74\x5d\x2a\x29\x3f\x28\x3f\x3a\x5c\x6e\x2b\x7c\x5c\x5a\x29", 92, -1680259952286778556, NULL };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5d\x7b\x30\x2c\x32\x7d\x28\x5b\x20\x5d\x3f", 18, -695802876960105267, NULL };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x3f\x29\x7b\x33\x2c\x7d\x5b\x20\x5d\x2a\x24", 14, 5711149104113814898, NULL };
static panda$core$String $s281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x68\x72\x20\x2f\x3e", 6, 1703066247920, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static panda$core$String $s389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70", 1, 213, NULL };
static panda$core$String $s390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x69\x76", 3, 2061124, NULL };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x31", 2, 20754, NULL };
static panda$core$String $s392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x32", 2, 20755, NULL };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x33", 2, 20756, NULL };
static panda$core$String $s394 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x34", 2, 20757, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x35", 2, 20758, NULL };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x36", 2, 20759, NULL };
static panda$core$String $s397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6c\x6f\x63\x6b\x71\x75\x6f\x74\x65", 10, -2536067448883908010, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65", 3, 2184428, NULL };
static panda$core$String $s399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x61\x62\x6c\x65", 5, 22682056921, NULL };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6c", 2, 20409, NULL };
static panda$core$String $s401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x6c", 2, 21520, NULL };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6c", 2, 22126, NULL };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x63\x72\x69\x70\x74", 6, 2280602224762, NULL };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x73\x63\x72\x69\x70\x74", 8, 22741103748248783, NULL };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d", 4, 210295037, NULL };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x65\x6c\x64\x73\x65\x74", 8, 21876880126472849, NULL };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x72\x61\x6d\x65", 6, 2175813319029, NULL };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x68", 4, 217364527, NULL };
static panda$core$String $s413 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x73", 3, 2112631, NULL };
static panda$core$String $s414 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x6c", 3, 2060710, NULL };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5e\x3c\x28", 4, 146237435, NULL };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x62", 2, 19591, NULL };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2e\x2a\x5c\x6e\x29\x2a\x3f", 8, 15166389503170077, NULL };
static panda$core$String $s464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x5c\x32\x3e", 5, 16803092312, NULL };
static panda$core$String $s466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x2a", 4, 198153659, NULL };
static panda$core$String $s468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2b\x7c\x5c\x5a\x29\x29", 11, 1905689439221158230, NULL };
static panda$core$String $s488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5e\x3c\x28", 4, 146237435, NULL };
static panda$core$String $s490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x62", 2, 19591, NULL };
static panda$core$String $s494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2e\x2a\x5c\x6e\x29\x2a\x3f", 8, 15166389503170077, NULL };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2a\x3c\x2f\x5c\x32\x3e", 7, 156491179351200, NULL };
static panda$core$String $s498 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x2a", 4, 198153659, NULL };
static panda$core$String $s500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2b\x7c\x5c\x5a\x29\x29", 11, 1905689439221158230, NULL };
static panda$core$String $s518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29\x7c\x5c\x41\x5c\x6e\x3f\x29\x28\x5b\x20\x5d\x7b\x30\x2c", 26, 2222423814537520433, NULL };
static panda$core$String $s522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s524 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28\x68\x72\x29", 5, 16796009060, NULL };
static panda$core$String $s526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x62", 2, 19591, NULL };
static panda$core$String $s528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5b\x5e\x3c\x3e\x5d\x29\x2a\x3f", 9, 1536684806687938687, NULL };
static panda$core$String $s530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x3f\x3e", 3, 1516173, NULL };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x2a", 4, 198153659, NULL };
static panda$core$String $s534 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x7b\x32\x2c\x7d\x7c\x5c\x5a\x29\x29", 14, 47502487764265221, NULL };
static panda$core$String $s552 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29\x7c\x5c\x41\x5c\x6e\x3f\x29\x28\x5b\x20\x5d\x7b\x30\x2c", 26, 2222423814537520433, NULL };
static panda$core$String $s556 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x73\x3a", 4, 145926777, NULL };
static panda$core$String $s560 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x21", 2, 16294, NULL };
static panda$core$String $s562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2d\x2d\x2e\x2a\x3f\x2d\x2d\x5c\x73\x2a\x29\x2b", 13, -4188240096700658567, NULL };
static panda$core$String $s564 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s568 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x2a", 4, 198153659, NULL };
static panda$core$String $s570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x7b\x32\x2c\x7d\x7c\x5c\x5a\x29", 13, -2921786165263253076, NULL };
static panda$core$String $s572 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s581 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x41\x5c\x6e\x2b", 5, 20151576603, NULL };
static panda$core$String $s582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x2b\x5c\x7a", 5, 20197438560, NULL };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s604 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d", 6, 2040023282445, NULL };
static panda$core$String $s645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x70\x3e", 3, 1653735, NULL };
static panda$core$String $s647 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x70\x3e", 4, 166369282, NULL };
static panda$core$String $s660 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static panda$core$String $s694 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6c\x74\x6f\x3a", 7, 223949750184005, NULL };
static panda$core$String $s696 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s706 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static panda$core$String $s708 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e", 2, 13697, NULL };
static panda$core$String $s711 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };
static panda$core$String $s739 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28\x28\x68\x74\x74\x70\x73\x3f\x7c\x66\x74\x70\x29\x3a\x5b\x5e\x27\x5c\x22\x3e\x5c\x73\x5d\x2b\x29\x3e", 27, -3769254741412201634, NULL };
static panda$core$String $s740 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22\x24\x31\x22\x3e\x24\x31\x3c\x2f\x61\x3e", 19, -7734359251480494054, NULL };
static panda$core$String $s745 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28\x5b\x2d\x2e\x5c\x77\x5d\x2b\x5c\x40\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x28\x5c\x2e\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x29\x2a\x5c\x2e\x5b\x61\x2d\x7a\x5d\x2b\x29\x3e", 46, 7932002164266535007, NULL };
static panda$core$String $s819 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x23", 2, 14074, NULL };
static panda$core$String $s827 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x23\x78", 3, 1421594, NULL };
static panda$core$String $s830 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78", 1, 221, NULL };
static panda$core$String $s851 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x20\x20", 3, 1992459, NULL };
static panda$core$String $s852 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s864 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x20\x20", 3, 1992459, NULL };
static panda$core$String $s865 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s883 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5c\x74\x5d\x2a\x3e\x5b\x20\x5c\x74\x5d\x3f", 18, -7646264414083764081, NULL };
static panda$core$String $s884 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s887 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5c\x74\x5d\x2b\x24", 12, 4609931141593742675, NULL };
static panda$core$String $s888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s890 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s891 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20", 2, 13465, NULL };
static panda$core$String $s896 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x73\x2a\x3c\x70\x72\x65\x3e\x2e\x2a\x3f\x3c\x2f\x70\x72\x65\x3e\x29", 19, -2639512543099520141, NULL };
static panda$core$String $s903 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x62\x6c\x6f\x63\x6b\x71\x75\x6f\x74\x65\x3e\x0a", 13, -5037006854090612730, NULL };
static panda$core$String $s905 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x3c\x2f\x62\x6c\x6f\x63\x6b\x71\x75\x6f\x74\x65\x3e\x0a\x0a", 16, -5426254764564286611, NULL };
static panda$core$String $s917 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x5e\x5b\x20\x09\x5d\x2a\x3e\x5b\x20\x09\x5d\x3f\x2e\x2b\x5c\x6e\x28\x2e\x2b\x5c\x6e\x29\x2a\x5c\x6e\x2a\x29\x2b\x29", 31, 6066980682886811878, NULL };
static panda$core$String $s976 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2e\x2a\x3f\x29\x5c\x74", 7, 150162241731241, NULL };
static panda$core$String $s981 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x5c\x74\x7c\x5b\x20\x5d\x7b\x31\x2c\x34\x7d\x29", 18, 7461573203115413830, NULL };
static panda$core$String $s982 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1008 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x5c\x6e\x5c\x6e\x7c\x5c\x41\x29\x28\x28\x3f\x3a\x28\x3f\x3a\x5b\x20\x5d\x7b\x34\x7d\x29\x2e\x2a\x5c\x6e\x2b\x29\x2b\x29\x28\x28\x3f\x3d\x5e\x5b\x20\x5d\x7b\x30\x2c\x34\x7d\x5c\x53\x29\x7c\x5c\x5a\x29", 53, -4156959249454615378, NULL };
static panda$core$String $s1022 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x6e\x64\x61\x63\x6f\x64\x65\x22\x3e", 24, -1375153472772145809, NULL };
static panda$core$String $s1060 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s1072 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6d\x6d\x65\x6e\x74\x22\x3e", 22, -1756050522877089685, NULL };
static panda$core$String $s1075 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x22\x3e", 25, 4577563245309187979, NULL };
static panda$core$String $s1078 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x22\x3e", 25, 6760721592980043958, NULL };
static panda$core$String $s1081 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x4e\x61\x6d\x65\x22\x3e", 28, 5111374842590752150, NULL };
static panda$core$String $s1084 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x74\x79\x70\x65\x22\x3e", 19, -6878895466207673670, NULL };
static panda$core$String $s1087 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6b\x65\x79\x77\x6f\x72\x64\x22\x3e", 22, -1670481277391576067, NULL };
static panda$core$String $s1090 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6e\x74\x72\x6f\x6c\x22\x3e", 22, -1756049386432501671, NULL };
static panda$core$String $s1093 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x74\x65\x72\x61\x6c\x22\x3e", 22, -1659229352682266791, NULL };
static panda$core$String $s1096 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x73\x74\x72\x69\x6e\x67\x22\x3e", 21, -198306892965556893, NULL };
static panda$core$String $s1099 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6f\x70\x65\x72\x61\x74\x6f\x72\x22\x3e", 23, 1793793249967207580, NULL };
static panda$core$String $s1102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x61\x62\x65\x6c\x22\x3e", 20, 6207823968128210400, NULL };
static panda$core$String $s1106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s1113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s1115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s1117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x67\x74\x3b", 4, 144274317, NULL };
static panda$core$String $s1119 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s1121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s1124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s1126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s1129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5b", 2, 19584, NULL };
static panda$core$String $s1131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5d", 2, 19586, NULL };
static panda$core$String $s1136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s1139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s1141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s1153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22", 13, -8467438715157355368, NULL };
static panda$core$String $s1157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e", 2, 13697, NULL };
static panda$core$String $s1166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s1171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s1172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s1265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x24\x28\x5c\x73\x2a\x29\x5c\x2e\x5c\x2e\x5c\x2e\x28\x5c\x73\x2a\x29\x5e", 22, -7048023396403805866, NULL };
static panda$core$String $s1266 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x31\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d\x24\x32", 13, -8807464024981417766, NULL };
static panda$core$String $s1268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d", 9, 1585511400200274083, NULL };
static panda$core$String $s1269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x65\x6c\x6c\x69\x70\x73\x69\x73\x22\x3e\x2e\x2e\x2e\x3c\x2f\x73\x70\x61\x6e\x3e", 33, 5749756206725659630, NULL };
static panda$core$String $s1292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x2a\x2b\x2d\x5d", 5, 20023312915, NULL };
static panda$core$String $s1296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6c", 2, 22126, NULL };
static panda$core$String $s1299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x6c", 2, 21520, NULL };
static panda$core$String $s1305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x6e\x7b\x32\x2c\x7d", 7, 205851892197837, NULL };
static panda$core$String $s1306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a\x0a", 3, 1133331, NULL };
static panda$core$String $s1318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x73\x2b\x24", 5, 20179622579, NULL };
static panda$core$String $s1319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f", 2, 16308, NULL };
static panda$core$String $s1337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x0a", 2, 16473, NULL };
static panda$core$String $s1364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x2a\x2b\x2d\x5d", 5, 20023312915, NULL };
static panda$core$String $s1368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6c", 2, 22126, NULL };
static panda$core$String $s1371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x6c", 2, 21520, NULL };
static panda$core$String $s1377 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d", 6, 2040023282445, NULL };
static panda$core$String $s1378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a\x0a", 3, 1133331, NULL };
static panda$core$String $s1393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x0a", 2, 16473, NULL };
static panda$core$String $s1398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f", 2, 16308, NULL };
static panda$core$String $s1401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x0a", 2, 16473, NULL };
static panda$core$String $s1431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x7b\x30\x2c", 6, 2021366306632, NULL };
static panda$core$String $s1438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x29", 18, -3376353325465069725, NULL };
static panda$core$String $s1443 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x2b", 4, 198153660, NULL };
static panda$core$String $s1445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x73\x3a\x2e\x2b\x3f\x29", 8, 15185198979096470, NULL };
static panda$core$String $s1449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x7a", 2, 19615, NULL };
static panda$core$String $s1453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d", 6, 2040023282445, NULL };
static panda$core$String $s1457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x53\x29", 6, 1488543771181, NULL };
static panda$core$String $s1459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x21\x5b\x20\x5d\x2a", 7, 150340005652795, NULL };
static panda$core$String $s1461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29", 16, 533168213134719014, NULL };
static panda$core$String $s1463 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x2b", 4, 198153660, NULL };
static panda$core$String $s1465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1482 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e", 5, 14738541648, NULL };
static panda$core$String $s1484 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29\x7c\x5c\x41\x5c\x6e\x3f\x29", 23, 6260301638587013175, NULL };
static panda$core$String $s1537 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6c\x69\x3e", 4, 166990836, NULL };
static panda$core$String $s1539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x6c\x69\x3e\x0a", 6, 1697129369393, NULL };
static panda$core$String $s1572 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d\x5c\x7a", 8, 20810277504230859, NULL };
static panda$core$String $s1573 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x6e\x29\x3f\x5e\x28\x5b\x20\x5c\x74\x5d\x2a\x29\x28\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b\x28\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x6e\x7b\x31\x2c\x32\x7d\x29\x29\x28\x3f\x3d\x5c\x6e\x2a\x28\x5c\x7a\x7c\x5c\x32\x28\x5b\x2d\x2b\x5c\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5c\x74\x5d\x2b\x29\x29", 86, 9008606742683235904, NULL };
static panda$core$String $s1595 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static panda$core$String $s1606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1629 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x68\x31\x3e", 4, 166944376, NULL };
static panda$core$String $s1631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x68\x31\x3e", 5, 16803214623, NULL };
static panda$core$String $s1672 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x68\x32\x3e", 4, 166944477, NULL };
static panda$core$String $s1674 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x68\x32\x3e", 5, 16803214724, NULL };
static panda$core$String $s1724 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s1736 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1738 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f", 2, 16308, NULL };
static panda$core$String $s1744 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x0a", 2, 16473, NULL };
static panda$core$String $s1754 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x3d\x3d\x3d\x3d\x2b\x24", 17, 8644226230150951458, NULL };
static panda$core$String $s1759 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x2d\x2d\x2d\x2d\x2b\x24", 17, 8644226060307728994, NULL };
static panda$core$String $s1766 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x28\x23\x7b\x31\x2c\x36\x7d\x29\x5c\x73\x2a\x28\x2e\x2a\x3f\x29\x5c\x73\x2a\x5c\x31\x3f\x24", 24, 6625741561155563100, NULL };
static panda$core$String $s1781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x32\x2c\x7d\x5c\x6e", 7, 142480172029377, NULL };
static panda$core$String $s1782 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x62\x72\x20\x2f\x3e\x0a", 8, 14324133278249456, NULL };
static panda$core$String $s1787 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1792 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x3c\x5b\x61\x2d\x7a\x2f\x21\x24\x5d\x28\x3f\x3a\x5b\x5e\x3c\x3e\x5d\x7c", 21, -3726567012419943545, NULL };
static panda$core$String $s1798 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2a\x3e\x29", 4, 146737487, NULL };
static panda$core$String $s1818 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x73\x3a\x3c\x21\x28\x2d\x2d\x2e\x2a\x3f\x2d\x2d\x5c\x73\x2a\x29\x2b\x3e\x29\x7c\x28\x3f\x73\x3a\x3c\x5c\x3f\x2e\x2a\x3f\x5c\x3f\x3e\x29\x7c", 37, -5883741260455240331, NULL };
static panda$core$String $s1919 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s1921 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s1928 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x60", 1, 197, NULL };
static panda$core$String $s1930 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x60", 1, 197, NULL };
static panda$core$String $s1937 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s1939 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s1946 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s1948 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s1995 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2014 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x2a", 3, 1978127, NULL };
static panda$core$String $s2016 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2025 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2027 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2035 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2038 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2046 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x2a", 3, 1978127, NULL };
static panda$core$String $s2048 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2057 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2059 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2069 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x61\x6c\x74\x3d\x22", 6, 1408049687549, NULL };
static panda$core$String $s2071 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x20\x74\x69\x74\x6c\x65\x3d\x22", 9, 1465411637805988408, NULL };
static panda$core$String $s2074 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2082 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22", 10, -7235316333681816127, NULL };
static panda$core$String $s2084 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2087 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x3e", 2, 15010, NULL };
static panda$core$String $s2120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x20\x5c\x22\x28\x2e\x2a\x29\x5c\x22\x5c\x5c\x29", 30, 1507772917981139974, NULL };
static panda$core$String $s2121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x74\x69\x74\x6c\x65\x3d\x22\x24\x33\x22\x20\x2f\x3e", 36, -5185982321426610333, NULL };
static panda$core$String $s2124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x5c\x5c\x29", 21, -5830152919387063515, NULL };
static panda$core$String $s2125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x2f\x3e", 25, -7685348581218553223, NULL };
static panda$core$String $s2130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5b\x21\x5d\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d\x29", 38, 3513714089933290343, NULL };
static panda$core$String $s2167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s2186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s2214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, 14383652264361074, NULL };
static panda$core$String $s2233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static panda$core$String $s2245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2248 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s2251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };
static panda$core$String $s2293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s2295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x61\x69\x74\x69\x6e\x67\x20\x6f\x6e\x20\x6c\x69\x6e\x6b\x20\x72\x65\x73\x6f\x6c\x76\x65\x72", 24, 6436901740777774405, NULL };
static panda$core$String $s2319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static panda$core$String $s2321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s2328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x71\x75\x6f\x74\x3b", 6, 1472784484255, NULL };
static panda$core$String $s2347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, 14383652264361074, NULL };
static panda$core$String $s2352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s2354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };
static panda$core$String $s2409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x3f\x5c\x5c\x6e", 7, 204157935605574, NULL };
static panda$core$String $s2410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s2426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2443 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s2454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2463 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, 14383652264361074, NULL };
static panda$core$String $s2473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static panda$core$String $s2485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s2491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };
static panda$core$String $s2508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d\x29", 35, 4482227048438022174, NULL };
static panda$core$String $s2514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d\x5c\x28\x5b\x20\x5c\x74\x5d\x2a\x3c\x3f\x28\x2e\x2a\x3f\x29\x3e\x3f\x5b\x20\x5c\x74\x5d\x2a\x28\x28\x5b\x27\x22\x5d\x29\x28\x2e\x2a\x3f\x29\x5c\x35\x29\x3f\x5c\x29\x29", 52, 2691589156809831866, NULL };
static panda$core$String $s2522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x5b\x28\x5b\x5e\x5c\x5b\x5c\x5d\x5d\x2b\x29\x5c\x5d\x29", 16, 8227630457021096112, NULL };
static panda$core$String $s2528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x2a\x5c\x5c\x2a\x7c\x5f\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x5b\x2a\x5f\x5d\x2a\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 35, 636172404878895653, NULL };
static panda$core$String $s2529 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x74\x72\x6f\x6e\x67\x3e\x24\x32\x3c\x2f\x73\x74\x72\x6f\x6e\x67\x3e", 19, 504491683038092400, NULL };
static panda$core$String $s2532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x2a\x7c\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 26, -4247179954659836315, NULL };
static panda$core$String $s2533 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x6d\x3e\x24\x32\x3c\x2f\x65\x6d\x3e", 11, 2723679958089201678, NULL };
static panda$core$String $s2536 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x28\x3f\x21\x23\x3f\x5b\x78\x58\x5d\x3f\x28\x3f\x3a\x5b\x30\x2d\x39\x61\x2d\x66\x41\x2d\x46\x5d\x2b\x7c\x5c\x77\x2b\x29\x3b\x29", 33, -6716186838887255919, NULL };
static panda$core$String $s2537 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s2540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28\x3f\x21\x5b\x61\x2d\x7a\x41\x2d\x5a\x2f\x3f\x5c\x24\x21\x5d\x29", 18, 6433614010358842861, NULL };
static panda$core$String $s2541 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s2559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x5b\x20\x5c\x74\x5d\x2b", 7, 207956274426062, NULL };
static panda$core$String $s2560 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2b\x24", 7, 204157886156304, NULL };
static panda$core$String $s2564 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x63\x6f\x64\x65\x3e", 6, 1702543554134, NULL };
static panda$core$String $s2572 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x63\x6f\x64\x65\x3e", 7, 171409136343781, NULL };
static panda$core$String $s2597 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3c\x21\x5c\x5c\x29\x28\x60\x2b\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x21\x60\x29\x5c\x31\x28\x3f\x21\x60\x29", 29, 7657757978565690602, NULL };

void org$pandalanguage$pandac$pandadoc$Markdown$init(org$pandalanguage$pandac$pandadoc$Markdown* self) {
    self->source = NULL;
    self->errorQueue = NULL;
    self->parser = NULL;
    self->linkResolver = NULL;
    self->linkDefinitions = NULL;
    self->charProtector = NULL;
    self->htmlProtector = NULL;
    self->random = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown$init$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$String$RP$Q(self, NULL);
}
void org$pandalanguage$pandac$pandadoc$Markdown$init$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$String$RP$Q(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableMethod* p_linkResolver) {
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
        panda$io$File* $tmp24 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp24, &$s25);
        $tmp23 = $tmp24;
        $tmp22 = $tmp23;
        self->source = $tmp22;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp22));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp23));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp21));
    }
    {
        $tmp26 = self->linkResolver;
        $tmp27 = p_linkResolver;
        self->linkResolver = $tmp27;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp27));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp26));
    }
    {
        $tmp28 = self->parser->syntaxHighlighter;
        org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp31 = (org$pandalanguage$pandac$parser$SyntaxHighlighter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$class);
        org$pandalanguage$pandac$parser$SyntaxHighlighter$init($tmp31);
        $tmp30 = $tmp31;
        $tmp29 = $tmp30;
        self->parser->syntaxHighlighter = $tmp29;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp29));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp30));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp28));
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
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp36));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp37));
        panda$core$RegularExpression* $tmp40 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp40, &$s41);
        $tmp39 = $tmp40;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(text35, $tmp39, &$s42);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp39));
        panda$core$RegularExpression* $tmp44 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp44, &$s45);
        $tmp43 = $tmp44;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(text35, $tmp43, &$s46);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
        panda$core$RegularExpression* $tmp48 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp48, &$s49);
        $tmp47 = $tmp48;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(text35, $tmp47, &$s50);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp47));
        panda$core$MutableString$append$panda$core$String(text35, &$s51);
        (($fn52) self->$class->vtable[14])(self, text35);
        panda$core$RegularExpression* $tmp54 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp54, &$s55);
        $tmp53 = $tmp54;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(text35, $tmp53, &$s56);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp53));
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
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp64));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp65));
        $tmp34 = 0;
        goto $l32;
        $l67:;
        return $returnValue63;
    }
    $l32:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) text35));
    text35 = NULL;
    switch ($tmp34) {
        case 0: goto $l67;
    }
    $l69:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$encodeBackslashEscapes$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$collections$ListView* normalChars73 = NULL;
    panda$collections$ListView* $tmp74;
    panda$collections$ListView* $tmp75;
    panda$collections$ListView* escapedChars78 = NULL;
    panda$collections$ListView* $tmp79;
    panda$collections$ListView* $tmp80;
    panda$core$String* $tmp84;
    int $tmp72;
    {
        panda$collections$ListView* $tmp77 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s76);
        $tmp75 = $tmp77;
        $tmp74 = $tmp75;
        normalChars73 = $tmp74;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp74));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp75));
        panda$collections$ListView* $tmp82 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s81);
        $tmp80 = $tmp82;
        $tmp79 = $tmp80;
        escapedChars78 = $tmp79;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp79));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp80));
        panda$core$String* $tmp87 = (($fn86) self->charProtector->$class->vtable[2])(self->charProtector, &$s85);
        $tmp84 = $tmp87;
        panda$core$MutableString$replace$panda$core$String$panda$core$String(p_text, &$s83, $tmp84);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp84));
        (($fn89) self->$class->vtable[4])(self, p_text, normalChars73, &$s88);
        (($fn91) self->$class->vtable[4])(self, p_text, escapedChars78, &$s90);
    }
    $tmp72 = -1;
    goto $l70;
    $l70:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapedChars78));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) normalChars73));
    normalChars73 = NULL;
    escapedChars78 = NULL;
    switch ($tmp72) {
        case -1: goto $l92;
    }
    $l92:;
}
void org$pandalanguage$pandac$pandadoc$Markdown$encodeEscapes$panda$core$MutableString$panda$collections$ListView$LTpanda$core$Char8$GT$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text, panda$collections$ListView* p_chars, panda$core$String* p_slashes) {
    panda$collections$Iterator* Iter$162$996 = NULL;
    panda$collections$Iterator* $tmp97;
    panda$collections$Iterator* $tmp98;
    panda$core$Char8 ch114;
    panda$core$Object* $tmp115;
    panda$core$RegularExpression* regex120 = NULL;
    panda$core$RegularExpression* $tmp121;
    panda$core$RegularExpression* $tmp122;
    panda$core$String* $tmp124;
    panda$core$String* $tmp125;
    panda$core$Object* $tmp128;
    panda$core$String* $tmp131;
    panda$core$String* $tmp132;
    panda$core$Bit $tmp136;
    {
        int $tmp95;
        {
            ITable* $tmp99 = ((panda$collections$Iterable*) p_chars)->$class->itable;
            while ($tmp99->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp99 = $tmp99->next;
            }
            $fn101 $tmp100 = $tmp99->methods[0];
            panda$collections$Iterator* $tmp102 = $tmp100(((panda$collections$Iterable*) p_chars));
            $tmp98 = $tmp102;
            $tmp97 = $tmp98;
            Iter$162$996 = $tmp97;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp97));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp98));
            $l103:;
            ITable* $tmp106 = Iter$162$996->$class->itable;
            while ($tmp106->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp106 = $tmp106->next;
            }
            $fn108 $tmp107 = $tmp106->methods[0];
            panda$core$Bit $tmp109 = $tmp107(Iter$162$996);
            panda$core$Bit $tmp110 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp109);
            bool $tmp105 = $tmp110.value;
            if (!$tmp105) goto $l104;
            {
                int $tmp113;
                {
                    ITable* $tmp116 = Iter$162$996->$class->itable;
                    while ($tmp116->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp116 = $tmp116->next;
                    }
                    $fn118 $tmp117 = $tmp116->methods[1];
                    panda$core$Object* $tmp119 = $tmp117(Iter$162$996);
                    $tmp115 = $tmp119;
                    ch114 = ((panda$core$Char8$wrapper*) $tmp115)->value;
                    panda$core$Panda$unref$panda$core$Object($tmp115);
                    panda$core$RegularExpression* $tmp123 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                    panda$core$String* $tmp127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s126, p_slashes);
                    $tmp125 = $tmp127;
                    panda$core$Char8$wrapper* $tmp129;
                    $tmp129 = (panda$core$Char8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Char8$wrapperclass);
                    $tmp129->value = ch114;
                    $tmp128 = ((panda$core$Object*) $tmp129);
                    panda$core$String* $tmp130 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp125, $tmp128);
                    $tmp124 = $tmp130;
                    panda$core$RegularExpression$init$panda$core$String($tmp123, $tmp124);
                    $tmp122 = $tmp123;
                    $tmp121 = $tmp122;
                    regex120 = $tmp121;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp121));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp122));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp124));
                    panda$core$Panda$unref$panda$core$Object($tmp128);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp125));
                    panda$core$String* $tmp133 = panda$core$Char8$convert$R$panda$core$String(ch114);
                    $tmp132 = $tmp133;
                    panda$core$String* $tmp135 = (($fn134) self->charProtector->$class->vtable[2])(self->charProtector, $tmp132);
                    $tmp131 = $tmp135;
                    panda$core$Bit$init$builtin_bit(&$tmp136, false);
                    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit(p_text, regex120, $tmp131, $tmp136);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp131));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp132));
                }
                $tmp113 = -1;
                goto $l111;
                $l111:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) regex120));
                regex120 = NULL;
                switch ($tmp113) {
                    case -1: goto $l137;
                }
                $l137:;
            }
            goto $l103;
            $l104:;
        }
        $tmp95 = -1;
        goto $l93;
        $l93:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$162$996));
        Iter$162$996 = NULL;
        switch ($tmp95) {
            case -1: goto $l138;
        }
        $l138:;
    }
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous1$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* id142 = NULL;
    panda$core$String* $tmp143;
    panda$core$Object* $tmp144;
    panda$core$Int64 $tmp145;
    panda$core$MutableString* url150 = NULL;
    panda$core$MutableString* $tmp151;
    panda$core$MutableString* $tmp152;
    panda$core$Object* $tmp154;
    panda$core$Int64 $tmp155;
    panda$core$String* title161 = NULL;
    panda$core$Int64 $tmp166;
    panda$core$String* $tmp168;
    panda$core$String* $tmp169;
    panda$core$Object* $tmp170;
    panda$core$Int64 $tmp171;
    panda$core$String* $tmp176;
    panda$core$String* $tmp177;
    panda$core$String* $tmp179;
    panda$core$String* $tmp180;
    panda$core$String* $tmp181;
    panda$core$String* $tmp185;
    panda$core$String* $tmp186;
    org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp188;
    panda$core$String* $tmp190;
    panda$core$String* $returnValue192;
    panda$core$String* $tmp193;
    int $tmp141;
    {
        panda$core$Int64$init$builtin_int64(&$tmp145, 1);
        ITable* $tmp146 = p_groups->$class->itable;
        while ($tmp146->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp146 = $tmp146->next;
        }
        $fn148 $tmp147 = $tmp146->methods[0];
        panda$core$Object* $tmp149 = $tmp147(p_groups, $tmp145);
        $tmp144 = $tmp149;
        $tmp143 = ((panda$core$String*) $tmp144);
        id142 = $tmp143;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp143));
        panda$core$Panda$unref$panda$core$Object($tmp144);
        panda$core$MutableString* $tmp153 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$Int64$init$builtin_int64(&$tmp155, 2);
        ITable* $tmp156 = p_groups->$class->itable;
        while ($tmp156->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp156 = $tmp156->next;
        }
        $fn158 $tmp157 = $tmp156->methods[0];
        panda$core$Object* $tmp159 = $tmp157(p_groups, $tmp155);
        $tmp154 = $tmp159;
        panda$core$MutableString$init$panda$core$String($tmp153, ((panda$core$String*) $tmp154));
        $tmp152 = $tmp153;
        $tmp151 = $tmp152;
        url150 = $tmp151;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp151));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp152));
        panda$core$Panda$unref$panda$core$Object($tmp154);
        (($fn160) self->$class->vtable[28])(self, url150);
        memset(&title161, 0, sizeof(title161));
        ITable* $tmp162 = ((panda$collections$CollectionView*) p_groups)->$class->itable;
        while ($tmp162->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp162 = $tmp162->next;
        }
        $fn164 $tmp163 = $tmp162->methods[0];
        panda$core$Int64 $tmp165 = $tmp163(((panda$collections$CollectionView*) p_groups));
        panda$core$Int64$init$builtin_int64(&$tmp166, 3);
        panda$core$Bit $tmp167 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp165, $tmp166);
        if ($tmp167.value) {
        {
            {
                $tmp168 = title161;
                panda$core$Int64$init$builtin_int64(&$tmp171, 3);
                ITable* $tmp172 = p_groups->$class->itable;
                while ($tmp172->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp172 = $tmp172->next;
                }
                $fn174 $tmp173 = $tmp172->methods[0];
                panda$core$Object* $tmp175 = $tmp173(p_groups, $tmp171);
                $tmp170 = $tmp175;
                $tmp169 = ((panda$core$String*) $tmp170);
                title161 = $tmp169;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp169));
                panda$core$Panda$unref$panda$core$Object($tmp170);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp168));
            }
            if (((panda$core$Bit) { title161 == NULL }).value) {
            {
                {
                    $tmp176 = title161;
                    $tmp177 = &$s178;
                    title161 = $tmp177;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp177));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp176));
                }
            }
            }
            {
                $tmp179 = title161;
                panda$core$String* $tmp184 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title161, &$s182, &$s183);
                $tmp181 = $tmp184;
                $tmp180 = $tmp181;
                title161 = $tmp180;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp180));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp181));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp179));
            }
        }
        }
        else {
        {
            {
                $tmp185 = title161;
                $tmp186 = &$s187;
                title161 = $tmp186;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp186));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp185));
            }
        }
        }
        org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp189 = (org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition$class);
        panda$core$String* $tmp191 = panda$core$MutableString$finish$R$panda$core$String(url150);
        $tmp190 = $tmp191;
        org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition$init$panda$core$String$panda$core$String($tmp189, $tmp190, title161);
        $tmp188 = $tmp189;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->linkDefinitions, ((panda$collections$Key*) id142), ((panda$core$Object*) $tmp188));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp188));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp190));
        $tmp193 = &$s194;
        $returnValue192 = $tmp193;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp193));
        $tmp141 = 0;
        goto $l139;
        $l195:;
        return $returnValue192;
    }
    $l139:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) title161));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) url150));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) id142));
    id142 = NULL;
    url150 = NULL;
    switch ($tmp141) {
        case 0: goto $l195;
    }
    $l197:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim2$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar201 = NULL;
    panda$core$Method* $tmp202;
    panda$core$Method* $tmp203;
    panda$core$Object* $tmp205;
    panda$core$Object* $tmp206;
    panda$core$Object* $returnValue207;
    panda$core$Object* $tmp208;
    panda$core$String* $tmp209;
    panda$core$String* $tmp210;
    int $tmp200;
    {
        panda$core$Method* $tmp204 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp204, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp203 = $tmp204;
        $tmp202 = $tmp203;
        methodVar201 = $tmp202;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp202));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp203));
        {
            $tmp205 = ((panda$core$MutableMethod*) methodVar201)->target;
            $tmp206 = self->target;
            ((panda$core$MutableMethod*) methodVar201)->target = $tmp206;
            panda$core$Panda$ref$panda$core$Object($tmp206);
            panda$core$Panda$unref$panda$core$Object($tmp205);
        }
        if (methodVar201->target) {
            $tmp210 = (($fn211) methodVar201->pointer)(methodVar201->target, p_p0);
        } else {
            $tmp210 = (($fn212) methodVar201->pointer)(p_p0);
        }
        $tmp209 = $tmp210;
        $tmp208 = ((panda$core$Object*) $tmp209);
        $returnValue207 = $tmp208;
        panda$core$Panda$ref$panda$core$Object($tmp208);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp209));
        $tmp200 = 0;
        goto $l198;
        $l213:;
        return $returnValue207;
    }
    $l198:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar201));
    methodVar201 = NULL;
    switch ($tmp200) {
        case 0: goto $l213;
    }
    $l215:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$stripLinkDefinitions$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$core$RegularExpression* p219 = NULL;
    panda$core$RegularExpression* $tmp220;
    panda$core$RegularExpression* $tmp221;
    panda$core$Int64 $tmp224;
    int $tmp218;
    {
        panda$core$RegularExpression* $tmp222 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp224, 1);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp222, &$s223, $tmp224);
        $tmp221 = $tmp222;
        $tmp220 = $tmp221;
        p219 = $tmp220;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp220));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp221));
        panda$core$MutableMethod* $tmp225 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp226 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp226, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous1$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp225, (panda$core$Int8*) &panda$core$MutableMethod$$shim2$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp226)));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_text, p219, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp225)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp225));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp226));
    }
    $tmp218 = -1;
    goto $l216;
    $l216:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p219));
    p219 = NULL;
    switch ($tmp218) {
        case -1: goto $l227;
    }
    $l227:;
}
void org$pandalanguage$pandac$pandadoc$Markdown$runBlockGamut$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    (($fn228) self->$class->vtable[21])(self, p_text);
    (($fn229) self->$class->vtable[7])(self, p_text);
    (($fn230) self->$class->vtable[19])(self, p_text);
    (($fn231) self->$class->vtable[15])(self, p_text);
    (($fn232) self->$class->vtable[13])(self, p_text);
    (($fn233) self->$class->vtable[8])(self, p_text);
    (($fn234) self->$class->vtable[9])(self, p_text);
}
void org$pandalanguage$pandac$pandadoc$Markdown$doHorizontalRules$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$collections$Array* hrDelimiters238 = NULL;
    panda$collections$Array* $tmp239;
    panda$collections$Array* $tmp240;
    panda$collections$Iterator* Iter$213$9248 = NULL;
    panda$collections$Iterator* $tmp249;
    panda$collections$Iterator* $tmp250;
    panda$core$String* hrDelimiter266 = NULL;
    panda$core$String* $tmp267;
    panda$core$Object* $tmp268;
    panda$core$RegularExpression* $tmp273;
    panda$core$String* $tmp275;
    panda$core$String* $tmp276;
    int $tmp237;
    {
        panda$collections$Array* $tmp241 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp241);
        $tmp240 = $tmp241;
        $tmp239 = $tmp240;
        hrDelimiters238 = $tmp239;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp239));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp240));
        panda$collections$Array$add$panda$collections$Array$T(hrDelimiters238, ((panda$core$Object*) &$s242));
        panda$collections$Array$add$panda$collections$Array$T(hrDelimiters238, ((panda$core$Object*) &$s243));
        panda$collections$Array$add$panda$collections$Array$T(hrDelimiters238, ((panda$core$Object*) &$s244));
        {
            int $tmp247;
            {
                ITable* $tmp251 = ((panda$collections$Iterable*) hrDelimiters238)->$class->itable;
                while ($tmp251->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp251 = $tmp251->next;
                }
                $fn253 $tmp252 = $tmp251->methods[0];
                panda$collections$Iterator* $tmp254 = $tmp252(((panda$collections$Iterable*) hrDelimiters238));
                $tmp250 = $tmp254;
                $tmp249 = $tmp250;
                Iter$213$9248 = $tmp249;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp249));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp250));
                $l255:;
                ITable* $tmp258 = Iter$213$9248->$class->itable;
                while ($tmp258->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp258 = $tmp258->next;
                }
                $fn260 $tmp259 = $tmp258->methods[0];
                panda$core$Bit $tmp261 = $tmp259(Iter$213$9248);
                panda$core$Bit $tmp262 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp261);
                bool $tmp257 = $tmp262.value;
                if (!$tmp257) goto $l256;
                {
                    int $tmp265;
                    {
                        ITable* $tmp269 = Iter$213$9248->$class->itable;
                        while ($tmp269->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp269 = $tmp269->next;
                        }
                        $fn271 $tmp270 = $tmp269->methods[1];
                        panda$core$Object* $tmp272 = $tmp270(Iter$213$9248);
                        $tmp268 = $tmp272;
                        $tmp267 = ((panda$core$String*) $tmp268);
                        hrDelimiter266 = $tmp267;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp267));
                        panda$core$Panda$unref$panda$core$Object($tmp268);
                        panda$core$RegularExpression* $tmp274 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                        panda$core$String* $tmp278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s277, hrDelimiter266);
                        $tmp276 = $tmp278;
                        panda$core$String* $tmp280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp276, &$s279);
                        $tmp275 = $tmp280;
                        panda$core$RegularExpression$init$panda$core$String($tmp274, $tmp275);
                        $tmp273 = $tmp274;
                        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_text, $tmp273, &$s281);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp273));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp275));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp276));
                    }
                    $tmp265 = -1;
                    goto $l263;
                    $l263:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) hrDelimiter266));
                    hrDelimiter266 = NULL;
                    switch ($tmp265) {
                        case -1: goto $l282;
                    }
                    $l282:;
                }
                goto $l255;
                $l256:;
            }
            $tmp247 = -1;
            goto $l245;
            $l245:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$213$9248));
            Iter$213$9248 = NULL;
            switch ($tmp247) {
                case -1: goto $l283;
            }
            $l283:;
        }
    }
    $tmp237 = -1;
    goto $l235;
    $l235:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) hrDelimiters238));
    hrDelimiters238 = NULL;
    switch ($tmp237) {
        case -1: goto $l284;
    }
    $l284:;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous3$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* literal288 = NULL;
    panda$core$String* $tmp289;
    panda$core$Object* $tmp290;
    panda$core$Int64 $tmp291;
    panda$core$String* $returnValue296;
    panda$core$String* $tmp297;
    panda$core$String* $tmp298;
    panda$core$String* $tmp299;
    panda$core$String* $tmp301;
    int $tmp287;
    {
        panda$core$Int64$init$builtin_int64(&$tmp291, 0);
        ITable* $tmp292 = p_groups->$class->itable;
        while ($tmp292->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp292 = $tmp292->next;
        }
        $fn294 $tmp293 = $tmp292->methods[0];
        panda$core$Object* $tmp295 = $tmp293(p_groups, $tmp291);
        $tmp290 = $tmp295;
        $tmp289 = ((panda$core$String*) $tmp290);
        literal288 = $tmp289;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp289));
        panda$core$Panda$unref$panda$core$Object($tmp290);
        panda$core$String* $tmp303 = (($fn302) self->htmlProtector->$class->vtable[2])(self->htmlProtector, literal288);
        $tmp301 = $tmp303;
        panda$core$String* $tmp304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s300, $tmp301);
        $tmp299 = $tmp304;
        panda$core$String* $tmp306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp299, &$s305);
        $tmp298 = $tmp306;
        $tmp297 = $tmp298;
        $returnValue296 = $tmp297;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp297));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp298));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp299));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp301));
        $tmp287 = 0;
        goto $l285;
        $l307:;
        return $returnValue296;
    }
    $l285:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) literal288));
    literal288 = NULL;
    switch ($tmp287) {
        case 0: goto $l307;
    }
    $l309:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim4$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar313 = NULL;
    panda$core$Method* $tmp314;
    panda$core$Method* $tmp315;
    panda$core$Object* $tmp317;
    panda$core$Object* $tmp318;
    panda$core$Object* $returnValue319;
    panda$core$Object* $tmp320;
    panda$core$String* $tmp321;
    panda$core$String* $tmp322;
    int $tmp312;
    {
        panda$core$Method* $tmp316 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp316, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp315 = $tmp316;
        $tmp314 = $tmp315;
        methodVar313 = $tmp314;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp314));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp315));
        {
            $tmp317 = ((panda$core$MutableMethod*) methodVar313)->target;
            $tmp318 = self->target;
            ((panda$core$MutableMethod*) methodVar313)->target = $tmp318;
            panda$core$Panda$ref$panda$core$Object($tmp318);
            panda$core$Panda$unref$panda$core$Object($tmp317);
        }
        if (methodVar313->target) {
            $tmp322 = (($fn323) methodVar313->pointer)(methodVar313->target, p_p0);
        } else {
            $tmp322 = (($fn324) methodVar313->pointer)(p_p0);
        }
        $tmp321 = $tmp322;
        $tmp320 = ((panda$core$Object*) $tmp321);
        $returnValue319 = $tmp320;
        panda$core$Panda$ref$panda$core$Object($tmp320);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp321));
        $tmp312 = 0;
        goto $l310;
        $l325:;
        return $returnValue319;
    }
    $l310:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar313));
    methodVar313 = NULL;
    switch ($tmp312) {
        case 0: goto $l325;
    }
    $l327:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim5$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar331 = NULL;
    panda$core$Method* $tmp332;
    panda$core$Method* $tmp333;
    panda$core$Object* $tmp335;
    panda$core$Object* $tmp336;
    panda$core$Object* $returnValue337;
    panda$core$Object* $tmp338;
    panda$core$String* $tmp339;
    panda$core$String* $tmp340;
    int $tmp330;
    {
        panda$core$Method* $tmp334 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp334, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp333 = $tmp334;
        $tmp332 = $tmp333;
        methodVar331 = $tmp332;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp332));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp333));
        {
            $tmp335 = ((panda$core$MutableMethod*) methodVar331)->target;
            $tmp336 = self->target;
            ((panda$core$MutableMethod*) methodVar331)->target = $tmp336;
            panda$core$Panda$ref$panda$core$Object($tmp336);
            panda$core$Panda$unref$panda$core$Object($tmp335);
        }
        if (methodVar331->target) {
            $tmp340 = (($fn341) methodVar331->pointer)(methodVar331->target, p_p0);
        } else {
            $tmp340 = (($fn342) methodVar331->pointer)(p_p0);
        }
        $tmp339 = $tmp340;
        $tmp338 = ((panda$core$Object*) $tmp339);
        $returnValue337 = $tmp338;
        panda$core$Panda$ref$panda$core$Object($tmp338);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp339));
        $tmp330 = 0;
        goto $l328;
        $l343:;
        return $returnValue337;
    }
    $l328:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar331));
    methodVar331 = NULL;
    switch ($tmp330) {
        case 0: goto $l343;
    }
    $l345:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim6$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar349 = NULL;
    panda$core$Method* $tmp350;
    panda$core$Method* $tmp351;
    panda$core$Object* $tmp353;
    panda$core$Object* $tmp354;
    panda$core$Object* $returnValue355;
    panda$core$Object* $tmp356;
    panda$core$String* $tmp357;
    panda$core$String* $tmp358;
    int $tmp348;
    {
        panda$core$Method* $tmp352 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp352, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp351 = $tmp352;
        $tmp350 = $tmp351;
        methodVar349 = $tmp350;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp350));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp351));
        {
            $tmp353 = ((panda$core$MutableMethod*) methodVar349)->target;
            $tmp354 = self->target;
            ((panda$core$MutableMethod*) methodVar349)->target = $tmp354;
            panda$core$Panda$ref$panda$core$Object($tmp354);
            panda$core$Panda$unref$panda$core$Object($tmp353);
        }
        if (methodVar349->target) {
            $tmp358 = (($fn359) methodVar349->pointer)(methodVar349->target, p_p0);
        } else {
            $tmp358 = (($fn360) methodVar349->pointer)(p_p0);
        }
        $tmp357 = $tmp358;
        $tmp356 = ((panda$core$Object*) $tmp357);
        $returnValue355 = $tmp356;
        panda$core$Panda$ref$panda$core$Object($tmp356);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp357));
        $tmp348 = 0;
        goto $l346;
        $l361:;
        return $returnValue355;
    }
    $l346:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar349));
    methodVar349 = NULL;
    switch ($tmp348) {
        case 0: goto $l361;
    }
    $l363:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim7$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar367 = NULL;
    panda$core$Method* $tmp368;
    panda$core$Method* $tmp369;
    panda$core$Object* $tmp371;
    panda$core$Object* $tmp372;
    panda$core$Object* $returnValue373;
    panda$core$Object* $tmp374;
    panda$core$String* $tmp375;
    panda$core$String* $tmp376;
    int $tmp366;
    {
        panda$core$Method* $tmp370 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp370, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp369 = $tmp370;
        $tmp368 = $tmp369;
        methodVar367 = $tmp368;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp368));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp369));
        {
            $tmp371 = ((panda$core$MutableMethod*) methodVar367)->target;
            $tmp372 = self->target;
            ((panda$core$MutableMethod*) methodVar367)->target = $tmp372;
            panda$core$Panda$ref$panda$core$Object($tmp372);
            panda$core$Panda$unref$panda$core$Object($tmp371);
        }
        if (methodVar367->target) {
            $tmp376 = (($fn377) methodVar367->pointer)(methodVar367->target, p_p0);
        } else {
            $tmp376 = (($fn378) methodVar367->pointer)(p_p0);
        }
        $tmp375 = $tmp376;
        $tmp374 = ((panda$core$Object*) $tmp375);
        $returnValue373 = $tmp374;
        panda$core$Panda$ref$panda$core$Object($tmp374);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp375));
        $tmp366 = 0;
        goto $l364;
        $l379:;
        return $returnValue373;
    }
    $l364:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar367));
    methodVar367 = NULL;
    switch ($tmp366) {
        case 0: goto $l379;
    }
    $l381:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$hashHTMLBlocks$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$collections$Array* tagsA385 = NULL;
    panda$collections$Array* $tmp386;
    panda$collections$Array* $tmp387;
    panda$collections$Array* tagsB409 = NULL;
    panda$collections$Array* $tmp410;
    panda$collections$Array* $tmp411;
    panda$core$String* alternationA415 = NULL;
    panda$core$String* $tmp416;
    panda$core$String* $tmp417;
    panda$core$String* alternationB423 = NULL;
    panda$core$String* $tmp424;
    panda$core$String* $tmp425;
    panda$core$String* $tmp426;
    panda$core$String* $tmp427;
    panda$core$String* $tmp428;
    panda$core$String* $tmp432;
    panda$core$Int64 lessThanTab441;
    panda$core$Int64 $tmp442;
    panda$core$Int64 $tmp443;
    panda$core$RegularExpression* p1445 = NULL;
    panda$core$RegularExpression* $tmp446;
    panda$core$RegularExpression* $tmp447;
    panda$core$String* $tmp449;
    panda$core$String* $tmp450;
    panda$core$String* $tmp451;
    panda$core$String* $tmp452;
    panda$core$String* $tmp453;
    panda$core$String* $tmp454;
    panda$core$String* $tmp455;
    panda$core$Int64 $tmp470;
    panda$core$Int64 $tmp471;
    panda$core$Method* protectHTML473 = NULL;
    panda$core$Method* $tmp474;
    panda$core$RegularExpression* p2477 = NULL;
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
    panda$core$RegularExpression* p3506 = NULL;
    panda$core$RegularExpression* $tmp507;
    panda$core$RegularExpression* $tmp508;
    panda$core$String* $tmp510;
    panda$core$String* $tmp511;
    panda$core$String* $tmp512;
    panda$core$String* $tmp513;
    panda$core$String* $tmp514;
    panda$core$String* $tmp515;
    panda$core$String* $tmp516;
    panda$core$String* $tmp517;
    panda$core$Object* $tmp519;
    panda$core$Int64 $tmp536;
    panda$core$RegularExpression* p4538 = NULL;
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
    panda$core$String* $tmp550;
    panda$core$String* $tmp551;
    panda$core$Object* $tmp553;
    int $tmp384;
    {
        panda$collections$Array* $tmp388 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp388);
        $tmp387 = $tmp388;
        $tmp386 = $tmp387;
        tagsA385 = $tmp386;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp386));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp387));
        panda$collections$Array$add$panda$collections$Array$T(tagsA385, ((panda$core$Object*) &$s389));
        panda$collections$Array$add$panda$collections$Array$T(tagsA385, ((panda$core$Object*) &$s390));
        panda$collections$Array$add$panda$collections$Array$T(tagsA385, ((panda$core$Object*) &$s391));
        panda$collections$Array$add$panda$collections$Array$T(tagsA385, ((panda$core$Object*) &$s392));
        panda$collections$Array$add$panda$collections$Array$T(tagsA385, ((panda$core$Object*) &$s393));
        panda$collections$Array$add$panda$collections$Array$T(tagsA385, ((panda$core$Object*) &$s394));
        panda$collections$Array$add$panda$collections$Array$T(tagsA385, ((panda$core$Object*) &$s395));
        panda$collections$Array$add$panda$collections$Array$T(tagsA385, ((panda$core$Object*) &$s396));
        panda$collections$Array$add$panda$collections$Array$T(tagsA385, ((panda$core$Object*) &$s397));
        panda$collections$Array$add$panda$collections$Array$T(tagsA385, ((panda$core$Object*) &$s398));
        panda$collections$Array$add$panda$collections$Array$T(tagsA385, ((panda$core$Object*) &$s399));
        panda$collections$Array$add$panda$collections$Array$T(tagsA385, ((panda$core$Object*) &$s400));
        panda$collections$Array$add$panda$collections$Array$T(tagsA385, ((panda$core$Object*) &$s401));
        panda$collections$Array$add$panda$collections$Array$T(tagsA385, ((panda$core$Object*) &$s402));
        panda$collections$Array$add$panda$collections$Array$T(tagsA385, ((panda$core$Object*) &$s403));
        panda$collections$Array$add$panda$collections$Array$T(tagsA385, ((panda$core$Object*) &$s404));
        panda$collections$Array$add$panda$collections$Array$T(tagsA385, ((panda$core$Object*) &$s405));
        panda$collections$Array$add$panda$collections$Array$T(tagsA385, ((panda$core$Object*) &$s406));
        panda$collections$Array$add$panda$collections$Array$T(tagsA385, ((panda$core$Object*) &$s407));
        panda$collections$Array$add$panda$collections$Array$T(tagsA385, ((panda$core$Object*) &$s408));
        panda$collections$Array* $tmp412 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp412);
        $tmp411 = $tmp412;
        $tmp410 = $tmp411;
        tagsB409 = $tmp410;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp410));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp411));
        panda$collections$Array$add$panda$collections$Array$T(tagsB409, ((panda$core$Object*) &$s413));
        panda$collections$Array$add$panda$collections$Array$T(tagsB409, ((panda$core$Object*) &$s414));
        ITable* $tmp419 = ((panda$collections$ListView*) tagsA385)->$class->itable;
        while ($tmp419->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp419 = $tmp419->next;
        }
        $fn421 $tmp420 = $tmp419->methods[5];
        panda$core$String* $tmp422 = $tmp420(((panda$collections$ListView*) tagsA385), &$s418);
        $tmp417 = $tmp422;
        $tmp416 = $tmp417;
        alternationA415 = $tmp416;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp416));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp417));
        panda$core$String* $tmp429 = panda$core$String$convert$R$panda$core$String(alternationA415);
        $tmp428 = $tmp429;
        panda$core$String* $tmp431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp428, &$s430);
        $tmp427 = $tmp431;
        ITable* $tmp434 = ((panda$collections$ListView*) tagsB409)->$class->itable;
        while ($tmp434->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp434 = $tmp434->next;
        }
        $fn436 $tmp435 = $tmp434->methods[5];
        panda$core$String* $tmp437 = $tmp435(((panda$collections$ListView*) tagsB409), &$s433);
        $tmp432 = $tmp437;
        panda$core$String* $tmp438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp427, $tmp432);
        $tmp426 = $tmp438;
        panda$core$String* $tmp440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp426, &$s439);
        $tmp425 = $tmp440;
        $tmp424 = $tmp425;
        alternationB423 = $tmp424;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp424));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp425));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp426));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp432));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp427));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp428));
        panda$core$Int64$init$builtin_int64(&$tmp442, 4);
        panda$core$Int64$init$builtin_int64(&$tmp443, 1);
        panda$core$Int64 $tmp444 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp442, $tmp443);
        lessThanTab441 = $tmp444;
        panda$core$RegularExpression* $tmp448 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$String* $tmp457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s456, alternationA415);
        $tmp455 = $tmp457;
        panda$core$String* $tmp459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp455, &$s458);
        $tmp454 = $tmp459;
        panda$core$String* $tmp461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp454, &$s460);
        $tmp453 = $tmp461;
        panda$core$String* $tmp463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp453, &$s462);
        $tmp452 = $tmp463;
        panda$core$String* $tmp465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp452, &$s464);
        $tmp451 = $tmp465;
        panda$core$String* $tmp467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp451, &$s466);
        $tmp450 = $tmp467;
        panda$core$String* $tmp469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp450, &$s468);
        $tmp449 = $tmp469;
        panda$core$Int64$init$builtin_int64(&$tmp470, 1);
        panda$core$Int64$init$builtin_int64(&$tmp471, 2);
        panda$core$Int64 $tmp472 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp470, $tmp471);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp448, $tmp449, $tmp472);
        $tmp447 = $tmp448;
        $tmp446 = $tmp447;
        p1445 = $tmp446;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp446));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp447));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp449));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp450));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp451));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp452));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp453));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp454));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp455));
        panda$core$MutableMethod* $tmp475 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp475, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous3$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
        $tmp474 = ((panda$core$Object*) $tmp475);
        protectHTML473 = $tmp474;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp474));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp475));
        panda$core$MutableMethod* $tmp476 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp476, (panda$core$Int8*) &panda$core$MutableMethod$$shim4$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) protectHTML473));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_text, p1445, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp476)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp476));
        panda$core$RegularExpression* $tmp480 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$String* $tmp489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s488, alternationB423);
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
        p2477 = $tmp478;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp478));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp479));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp481));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp482));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp483));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp484));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp485));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp486));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp487));
        panda$core$MutableMethod* $tmp505 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp505, (panda$core$Int8*) &panda$core$MutableMethod$$shim5$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) protectHTML473));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_text, p2477, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp505)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp505));
        panda$core$RegularExpression* $tmp509 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$wrapper* $tmp520;
        $tmp520 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp520->value = lessThanTab441;
        $tmp519 = ((panda$core$Object*) $tmp520);
        panda$core$String* $tmp521 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s518, $tmp519);
        $tmp517 = $tmp521;
        panda$core$String* $tmp523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp517, &$s522);
        $tmp516 = $tmp523;
        panda$core$String* $tmp525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp516, &$s524);
        $tmp515 = $tmp525;
        panda$core$String* $tmp527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp515, &$s526);
        $tmp514 = $tmp527;
        panda$core$String* $tmp529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp514, &$s528);
        $tmp513 = $tmp529;
        panda$core$String* $tmp531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp513, &$s530);
        $tmp512 = $tmp531;
        panda$core$String* $tmp533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp512, &$s532);
        $tmp511 = $tmp533;
        panda$core$String* $tmp535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp511, &$s534);
        $tmp510 = $tmp535;
        panda$core$Int64$init$builtin_int64(&$tmp536, 2);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp509, $tmp510, $tmp536);
        $tmp508 = $tmp509;
        $tmp507 = $tmp508;
        p3506 = $tmp507;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp507));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp508));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp510));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp511));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp512));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp513));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp514));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp515));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp516));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp517));
        panda$core$Panda$unref$panda$core$Object($tmp519);
        panda$core$MutableMethod* $tmp537 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp537, (panda$core$Int8*) &panda$core$MutableMethod$$shim6$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) protectHTML473));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_text, p3506, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp537)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp537));
        panda$core$RegularExpression* $tmp541 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$wrapper* $tmp554;
        $tmp554 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp554->value = lessThanTab441;
        $tmp553 = ((panda$core$Object*) $tmp554);
        panda$core$String* $tmp555 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s552, $tmp553);
        $tmp551 = $tmp555;
        panda$core$String* $tmp557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp551, &$s556);
        $tmp550 = $tmp557;
        panda$core$String* $tmp559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp550, &$s558);
        $tmp549 = $tmp559;
        panda$core$String* $tmp561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp549, &$s560);
        $tmp548 = $tmp561;
        panda$core$String* $tmp563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp548, &$s562);
        $tmp547 = $tmp563;
        panda$core$String* $tmp565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp547, &$s564);
        $tmp546 = $tmp565;
        panda$core$String* $tmp567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp546, &$s566);
        $tmp545 = $tmp567;
        panda$core$String* $tmp569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp545, &$s568);
        $tmp544 = $tmp569;
        panda$core$String* $tmp571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp544, &$s570);
        $tmp543 = $tmp571;
        panda$core$String* $tmp573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp543, &$s572);
        $tmp542 = $tmp573;
        panda$core$RegularExpression$init$panda$core$String($tmp541, $tmp542);
        $tmp540 = $tmp541;
        $tmp539 = $tmp540;
        p4538 = $tmp539;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp539));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp540));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp542));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp543));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp544));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp545));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp546));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp547));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp548));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp549));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp550));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp551));
        panda$core$Panda$unref$panda$core$Object($tmp553);
        panda$core$MutableMethod* $tmp574 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp574, (panda$core$Int8*) &panda$core$MutableMethod$$shim7$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) protectHTML473));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_text, p4538, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp574)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp574));
    }
    $tmp384 = -1;
    goto $l382;
    $l382:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p4538));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p3506));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p2477));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) protectHTML473));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1445));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) alternationB423));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) alternationA415));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tagsB409));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tagsA385));
    tagsA385 = NULL;
    tagsB409 = NULL;
    alternationA415 = NULL;
    alternationB423 = NULL;
    p1445 = NULL;
    protectHTML473 = NULL;
    p2477 = NULL;
    p3506 = NULL;
    p4538 = NULL;
    switch ($tmp384) {
        case -1: goto $l575;
    }
    $l575:;
}
void org$pandalanguage$pandac$pandadoc$Markdown$formParagraphs$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* $tmp579;
    panda$core$RegularExpression* $tmp583;
    panda$collections$Array* paragraphs587 = NULL;
    panda$core$Int64 $tmp589;
    panda$collections$Array* $tmp591;
    panda$collections$Array* $tmp592;
    panda$collections$Array* $tmp593;
    panda$collections$Array* $tmp595;
    panda$collections$Array* $tmp596;
    panda$collections$Array* $tmp597;
    panda$collections$ListView* $tmp599;
    panda$core$String* $tmp600;
    panda$core$RegularExpression* $tmp602;
    panda$core$Range$LTpanda$core$Int64$GT $tmp606;
    panda$core$Int64 $tmp607;
    panda$core$Bit $tmp609;
    panda$core$String* paragraph626 = NULL;
    panda$core$String* $tmp627;
    panda$core$Object* $tmp628;
    panda$core$String* decoded630 = NULL;
    panda$core$String* $tmp631;
    panda$core$String* $tmp632;
    panda$core$MutableString* mutable638 = NULL;
    panda$core$MutableString* $tmp639;
    panda$core$MutableString* $tmp640;
    panda$core$String* $tmp643;
    panda$core$String* $tmp644;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp657;
    panda$core$Bit $tmp658;
    panda$core$String* $tmp659;
    int $tmp578;
    {
        panda$core$RegularExpression* $tmp580 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp580, &$s581);
        $tmp579 = $tmp580;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_markup, $tmp579, &$s582);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp579));
        panda$core$RegularExpression* $tmp584 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp584, &$s585);
        $tmp583 = $tmp584;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_markup, $tmp583, &$s586);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp583));
        memset(&paragraphs587, 0, sizeof(paragraphs587));
        panda$core$Int64 $tmp588 = panda$core$MutableString$byteLength$R$panda$core$Int64(p_markup);
        panda$core$Int64$init$builtin_int64(&$tmp589, 0);
        panda$core$Bit $tmp590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp588, $tmp589);
        if ($tmp590.value) {
        {
            {
                $tmp591 = paragraphs587;
                panda$collections$Array* $tmp594 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp594);
                $tmp593 = $tmp594;
                $tmp592 = $tmp593;
                paragraphs587 = $tmp592;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp592));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp593));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp591));
            }
        }
        }
        else {
        {
            {
                $tmp595 = paragraphs587;
                panda$collections$Array* $tmp598 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$core$String* $tmp601 = panda$core$MutableString$convert$R$panda$core$String(p_markup);
                $tmp600 = $tmp601;
                panda$core$RegularExpression* $tmp603 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                panda$core$RegularExpression$init$panda$core$String($tmp603, &$s604);
                $tmp602 = $tmp603;
                panda$collections$ListView* $tmp605 = panda$core$String$split$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT($tmp600, $tmp602);
                $tmp599 = $tmp605;
                panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp598, ((panda$collections$CollectionView*) $tmp599));
                $tmp597 = $tmp598;
                $tmp596 = $tmp597;
                paragraphs587 = $tmp596;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp596));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp597));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp599));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp602));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp600));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp595));
            }
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp607, 0);
        panda$core$Int64 $tmp608 = panda$collections$Array$get_count$R$panda$core$Int64(paragraphs587);
        panda$core$Bit$init$builtin_bit(&$tmp609, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp606, $tmp607, $tmp608, $tmp609);
        int64_t $tmp611 = $tmp606.min.value;
        panda$core$Int64 i610 = { $tmp611 };
        int64_t $tmp613 = $tmp606.max.value;
        bool $tmp614 = $tmp606.inclusive.value;
        if ($tmp614) goto $l621; else goto $l622;
        $l621:;
        if ($tmp611 <= $tmp613) goto $l615; else goto $l617;
        $l622:;
        if ($tmp611 < $tmp613) goto $l615; else goto $l617;
        $l615:;
        {
            int $tmp625;
            {
                panda$core$Object* $tmp629 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(paragraphs587, i610);
                $tmp628 = $tmp629;
                $tmp627 = ((panda$core$String*) $tmp628);
                paragraph626 = $tmp627;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp627));
                panda$core$Panda$unref$panda$core$Object($tmp628);
                panda$core$String* $tmp634 = (($fn633) self->htmlProtector->$class->vtable[3])(self->htmlProtector, paragraph626);
                $tmp632 = $tmp634;
                $tmp631 = $tmp632;
                decoded630 = $tmp631;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp631));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp632));
                if (((panda$core$Bit) { decoded630 != NULL }).value) {
                {
                    panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(paragraphs587, i610, ((panda$core$Object*) decoded630));
                }
                }
                else {
                {
                    int $tmp637;
                    {
                        panda$core$MutableString* $tmp641 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                        panda$core$MutableString$init$panda$core$String($tmp641, paragraph626);
                        $tmp640 = $tmp641;
                        $tmp639 = $tmp640;
                        mutable638 = $tmp639;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp639));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp640));
                        (($fn642) self->$class->vtable[22])(self, mutable638);
                        panda$core$String* $tmp646 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s645, ((panda$core$Object*) mutable638));
                        $tmp644 = $tmp646;
                        panda$core$String* $tmp648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp644, &$s647);
                        $tmp643 = $tmp648;
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(paragraphs587, i610, ((panda$core$Object*) $tmp643));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp643));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp644));
                    }
                    $tmp637 = -1;
                    goto $l635;
                    $l635:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mutable638));
                    mutable638 = NULL;
                    switch ($tmp637) {
                        case -1: goto $l649;
                    }
                    $l649:;
                }
                }
            }
            $tmp625 = -1;
            goto $l623;
            $l623:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decoded630));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) paragraph626));
            paragraph626 = NULL;
            decoded630 = NULL;
            switch ($tmp625) {
                case -1: goto $l650;
            }
            $l650:;
        }
        $l618:;
        int64_t $tmp652 = $tmp613 - i610.value;
        if ($tmp614) goto $l653; else goto $l654;
        $l653:;
        if ((uint64_t) $tmp652 >= 1) goto $l651; else goto $l617;
        $l654:;
        if ((uint64_t) $tmp652 > 1) goto $l651; else goto $l617;
        $l651:;
        i610.value += 1;
        goto $l615;
        $l617:;
        panda$core$Bit$init$builtin_bit(&$tmp658, false);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp657, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp658);
        ITable* $tmp661 = ((panda$collections$ListView*) paragraphs587)->$class->itable;
        while ($tmp661->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp661 = $tmp661->next;
        }
        $fn663 $tmp662 = $tmp661->methods[5];
        panda$core$String* $tmp664 = $tmp662(((panda$collections$ListView*) paragraphs587), &$s660);
        $tmp659 = $tmp664;
        panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$core$String(p_markup, $tmp657, $tmp659);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp659));
    }
    $tmp578 = -1;
    goto $l576;
    $l576:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) paragraphs587));
    switch ($tmp578) {
        case -1: goto $l665;
    }
    $l665:;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous8$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* address669 = NULL;
    panda$core$String* $tmp670;
    panda$core$Object* $tmp671;
    panda$core$Int64 $tmp672;
    panda$core$MutableString* ed677 = NULL;
    panda$core$MutableString* $tmp678;
    panda$core$MutableString* $tmp679;
    panda$core$String* addr682 = NULL;
    panda$core$String* $tmp683;
    panda$core$String* $tmp684;
    panda$core$String* $tmp685;
    panda$core$String* url689 = NULL;
    panda$core$String* $tmp690;
    panda$core$String* $tmp691;
    panda$core$String* $tmp692;
    panda$core$String* $tmp693;
    panda$core$String* $returnValue700;
    panda$core$String* $tmp701;
    panda$core$String* $tmp702;
    panda$core$String* $tmp703;
    panda$core$String* $tmp704;
    panda$core$String* $tmp705;
    int $tmp668;
    {
        panda$core$Int64$init$builtin_int64(&$tmp672, 1);
        ITable* $tmp673 = p_groups->$class->itable;
        while ($tmp673->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp673 = $tmp673->next;
        }
        $fn675 $tmp674 = $tmp673->methods[0];
        panda$core$Object* $tmp676 = $tmp674(p_groups, $tmp672);
        $tmp671 = $tmp676;
        $tmp670 = ((panda$core$String*) $tmp671);
        address669 = $tmp670;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp670));
        panda$core$Panda$unref$panda$core$Object($tmp671);
        panda$core$MutableString* $tmp680 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp680, address669);
        $tmp679 = $tmp680;
        $tmp678 = $tmp679;
        ed677 = $tmp678;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp678));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp679));
        (($fn681) self->$class->vtable[11])(self, ed677);
        panda$core$String* $tmp686 = panda$core$MutableString$convert$R$panda$core$String(ed677);
        $tmp685 = $tmp686;
        panda$core$String* $tmp688 = (($fn687) self->$class->vtable[12])(self, $tmp685);
        $tmp684 = $tmp688;
        $tmp683 = $tmp684;
        addr682 = $tmp683;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp683));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp684));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp685));
        panda$core$String* $tmp695 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s694, ((panda$core$Object*) ed677));
        $tmp693 = $tmp695;
        panda$core$String* $tmp697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp693, &$s696);
        $tmp692 = $tmp697;
        panda$core$String* $tmp699 = (($fn698) self->$class->vtable[12])(self, $tmp692);
        $tmp691 = $tmp699;
        $tmp690 = $tmp691;
        url689 = $tmp690;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp690));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp691));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp692));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp693));
        panda$core$String* $tmp707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s706, url689);
        $tmp705 = $tmp707;
        panda$core$String* $tmp709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp705, &$s708);
        $tmp704 = $tmp709;
        panda$core$String* $tmp710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp704, addr682);
        $tmp703 = $tmp710;
        panda$core$String* $tmp712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp703, &$s711);
        $tmp702 = $tmp712;
        $tmp701 = $tmp702;
        $returnValue700 = $tmp701;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp701));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp702));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp703));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp704));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp705));
        $tmp668 = 0;
        goto $l666;
        $l713:;
        return $returnValue700;
    }
    $l666:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) url689));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) addr682));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ed677));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) address669));
    address669 = NULL;
    ed677 = NULL;
    addr682 = NULL;
    url689 = NULL;
    switch ($tmp668) {
        case 0: goto $l713;
    }
    $l715:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim9$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar719 = NULL;
    panda$core$Method* $tmp720;
    panda$core$Method* $tmp721;
    panda$core$Object* $tmp723;
    panda$core$Object* $tmp724;
    panda$core$Object* $returnValue725;
    panda$core$Object* $tmp726;
    panda$core$String* $tmp727;
    panda$core$String* $tmp728;
    int $tmp718;
    {
        panda$core$Method* $tmp722 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp722, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp721 = $tmp722;
        $tmp720 = $tmp721;
        methodVar719 = $tmp720;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp720));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp721));
        {
            $tmp723 = ((panda$core$MutableMethod*) methodVar719)->target;
            $tmp724 = self->target;
            ((panda$core$MutableMethod*) methodVar719)->target = $tmp724;
            panda$core$Panda$ref$panda$core$Object($tmp724);
            panda$core$Panda$unref$panda$core$Object($tmp723);
        }
        if (methodVar719->target) {
            $tmp728 = (($fn729) methodVar719->pointer)(methodVar719->target, p_p0);
        } else {
            $tmp728 = (($fn730) methodVar719->pointer)(p_p0);
        }
        $tmp727 = $tmp728;
        $tmp726 = ((panda$core$Object*) $tmp727);
        $returnValue725 = $tmp726;
        panda$core$Panda$ref$panda$core$Object($tmp726);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp727));
        $tmp718 = 0;
        goto $l716;
        $l731:;
        return $returnValue725;
    }
    $l716:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar719));
    methodVar719 = NULL;
    switch ($tmp718) {
        case 0: goto $l731;
    }
    $l733:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doAutoLinks$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* $tmp737;
    panda$core$RegularExpression* email741 = NULL;
    panda$core$RegularExpression* $tmp742;
    panda$core$RegularExpression* $tmp743;
    int $tmp736;
    {
        panda$core$RegularExpression* $tmp738 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp738, &$s739);
        $tmp737 = $tmp738;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_markup, $tmp737, &$s740);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp737));
        panda$core$RegularExpression* $tmp744 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp744, &$s745);
        $tmp743 = $tmp744;
        $tmp742 = $tmp743;
        email741 = $tmp742;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp742));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp743));
        panda$core$MutableMethod* $tmp746 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp747 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp747, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous8$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp746, (panda$core$Int8*) &panda$core$MutableMethod$$shim9$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp747)));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, email741, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp746)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp746));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp747));
    }
    $tmp736 = -1;
    goto $l734;
    $l734:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) email741));
    email741 = NULL;
    switch ($tmp736) {
        case -1: goto $l748;
    }
    $l748:;
}
void org$pandalanguage$pandac$pandadoc$Markdown$unescapeSpecialChars$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_ed) {
    panda$collections$Iterator* Iter$370$9752 = NULL;
    panda$collections$Iterator* $tmp753;
    panda$collections$Iterator* $tmp754;
    panda$core$String* hash767 = NULL;
    panda$core$String* $tmp768;
    panda$core$Object* $tmp769;
    panda$core$String* plaintext774 = NULL;
    panda$core$String* $tmp775;
    panda$core$String* $tmp776;
    {
        int $tmp751;
        {
            panda$collections$Iterator* $tmp755 = panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(self->charProtector->decodeMap);
            $tmp754 = $tmp755;
            $tmp753 = $tmp754;
            Iter$370$9752 = $tmp753;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp753));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp754));
            $l756:;
            ITable* $tmp759 = Iter$370$9752->$class->itable;
            while ($tmp759->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp759 = $tmp759->next;
            }
            $fn761 $tmp760 = $tmp759->methods[0];
            panda$core$Bit $tmp762 = $tmp760(Iter$370$9752);
            panda$core$Bit $tmp763 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp762);
            bool $tmp758 = $tmp763.value;
            if (!$tmp758) goto $l757;
            {
                int $tmp766;
                {
                    ITable* $tmp770 = Iter$370$9752->$class->itable;
                    while ($tmp770->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp770 = $tmp770->next;
                    }
                    $fn772 $tmp771 = $tmp770->methods[1];
                    panda$core$Object* $tmp773 = $tmp771(Iter$370$9752);
                    $tmp769 = $tmp773;
                    $tmp768 = ((panda$core$String*) $tmp769);
                    hash767 = $tmp768;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp768));
                    panda$core$Panda$unref$panda$core$Object($tmp769);
                    panda$core$String* $tmp778 = (($fn777) self->charProtector->$class->vtable[3])(self->charProtector, hash767);
                    $tmp776 = $tmp778;
                    $tmp775 = $tmp776;
                    plaintext774 = $tmp775;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp775));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp776));
                    panda$core$MutableString$replace$panda$core$String$panda$core$String(p_ed, hash767, plaintext774);
                }
                $tmp766 = -1;
                goto $l764;
                $l764:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) plaintext774));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) hash767));
                hash767 = NULL;
                plaintext774 = NULL;
                switch ($tmp766) {
                    case -1: goto $l779;
                }
                $l779:;
            }
            goto $l756;
            $l757:;
        }
        $tmp751 = -1;
        goto $l749;
        $l749:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$370$9752));
        Iter$370$9752 = NULL;
        switch ($tmp751) {
            case -1: goto $l780;
        }
        $l780:;
    }
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$encodeEmail$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$String* p_s) {
    panda$core$MutableString* result784 = NULL;
    panda$core$MutableString* $tmp785;
    panda$core$MutableString* $tmp786;
    panda$collections$Iterator* Iter$378$9791 = NULL;
    panda$collections$Iterator* $tmp792;
    panda$collections$Iterator* $tmp793;
    panda$core$Char32 ch806;
    panda$core$Object* $tmp807;
    panda$core$Real64 r812;
    panda$core$Real64 $tmp817;
    panda$core$Object* $tmp820;
    panda$core$Char8 $tmp823;
    panda$core$UInt8 $tmp824;
    panda$core$Real64 $tmp825;
    panda$core$String* $tmp828;
    panda$core$Char8 $tmp832;
    panda$core$UInt8 $tmp833;
    panda$core$String* $returnValue835;
    panda$core$String* $tmp836;
    panda$core$String* $tmp837;
    int $tmp783;
    {
        panda$core$MutableString* $tmp787 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp787);
        $tmp786 = $tmp787;
        $tmp785 = $tmp786;
        result784 = $tmp785;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp785));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp786));
        {
            int $tmp790;
            {
                ITable* $tmp794 = ((panda$collections$Iterable*) p_s)->$class->itable;
                while ($tmp794->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp794 = $tmp794->next;
                }
                $fn796 $tmp795 = $tmp794->methods[0];
                panda$collections$Iterator* $tmp797 = $tmp795(((panda$collections$Iterable*) p_s));
                $tmp793 = $tmp797;
                $tmp792 = $tmp793;
                Iter$378$9791 = $tmp792;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp792));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp793));
                $l798:;
                ITable* $tmp801 = Iter$378$9791->$class->itable;
                while ($tmp801->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp801 = $tmp801->next;
                }
                $fn803 $tmp802 = $tmp801->methods[0];
                panda$core$Bit $tmp804 = $tmp802(Iter$378$9791);
                panda$core$Bit $tmp805 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp804);
                bool $tmp800 = $tmp805.value;
                if (!$tmp800) goto $l799;
                {
                    ITable* $tmp808 = Iter$378$9791->$class->itable;
                    while ($tmp808->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp808 = $tmp808->next;
                    }
                    $fn810 $tmp809 = $tmp808->methods[1];
                    panda$core$Object* $tmp811 = $tmp809(Iter$378$9791);
                    $tmp807 = $tmp811;
                    ch806 = ((panda$core$Char32$wrapper*) $tmp807)->value;
                    panda$core$Panda$unref$panda$core$Object($tmp807);
                    ITable* $tmp813 = self->random->$class->itable;
                    while ($tmp813->$class != (panda$core$Class*) &panda$math$Random$class) {
                        $tmp813 = $tmp813->next;
                    }
                    $fn815 $tmp814 = $tmp813->methods[5];
                    panda$core$Real64 $tmp816 = $tmp814(self->random);
                    r812 = $tmp816;
                    panda$core$Real64$init$builtin_float64(&$tmp817, 0.45);
                    panda$core$Bit $tmp818 = panda$core$Real64$$LT$panda$core$Real64$R$panda$core$Bit(r812, $tmp817);
                    if ($tmp818.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result784, &$s819);
                        panda$core$Int32 $tmp821 = panda$core$Char32$convert$R$panda$core$Int32(ch806);
                        panda$core$Int32$wrapper* $tmp822;
                        $tmp822 = (panda$core$Int32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$Int32$wrapperclass);
                        $tmp822->value = $tmp821;
                        $tmp820 = ((panda$core$Object*) $tmp822);
                        panda$core$MutableString$append$panda$core$Object(result784, $tmp820);
                        panda$core$Panda$unref$panda$core$Object($tmp820);
                        panda$core$UInt8$init$builtin_uint8(&$tmp824, 59);
                        panda$core$Char8$init$panda$core$UInt8(&$tmp823, $tmp824);
                        panda$core$MutableString$append$panda$core$Char8(result784, $tmp823);
                    }
                    }
                    else {
                    panda$core$Real64$init$builtin_float64(&$tmp825, 0.9);
                    panda$core$Bit $tmp826 = panda$core$Real64$$LT$panda$core$Real64$R$panda$core$Bit(r812, $tmp825);
                    if ($tmp826.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result784, &$s827);
                        panda$core$Int32 $tmp829 = panda$core$Char32$convert$R$panda$core$Int32(ch806);
                        panda$core$String* $tmp831 = panda$core$Int32$format$panda$core$String$R$panda$core$String($tmp829, &$s830);
                        $tmp828 = $tmp831;
                        panda$core$MutableString$append$panda$core$String(result784, $tmp828);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp828));
                        panda$core$UInt8$init$builtin_uint8(&$tmp833, 59);
                        panda$core$Char8$init$panda$core$UInt8(&$tmp832, $tmp833);
                        panda$core$MutableString$append$panda$core$Char8(result784, $tmp832);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$Char32(result784, ch806);
                    }
                    }
                    }
                }
                goto $l798;
                $l799:;
            }
            $tmp790 = -1;
            goto $l788;
            $l788:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$378$9791));
            Iter$378$9791 = NULL;
            switch ($tmp790) {
                case -1: goto $l834;
            }
            $l834:;
        }
        panda$core$String* $tmp838 = panda$core$MutableString$convert$R$panda$core$String(result784);
        $tmp837 = $tmp838;
        $tmp836 = $tmp837;
        $returnValue835 = $tmp836;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp836));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp837));
        $tmp783 = 0;
        goto $l781;
        $l839:;
        return $returnValue835;
    }
    $l781:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result784));
    result784 = NULL;
    switch ($tmp783) {
        case 0: goto $l839;
    }
    $l841:;
    abort();
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous11$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$Object* $returnValue842;
    panda$core$Object* $tmp843;
    panda$core$String* $tmp844;
    panda$core$Object* $tmp845;
    panda$core$Int64 $tmp846;
    panda$core$Int64$init$builtin_int64(&$tmp846, 1);
    ITable* $tmp847 = p_groups->$class->itable;
    while ($tmp847->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp847 = $tmp847->next;
    }
    $fn849 $tmp848 = $tmp847->methods[0];
    panda$core$Object* $tmp850 = $tmp848(p_groups, $tmp846);
    $tmp845 = $tmp850;
    panda$core$String* $tmp853 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(((panda$core$String*) $tmp845), &$s851, &$s852);
    $tmp844 = $tmp853;
    $tmp843 = ((panda$core$Object*) $tmp844);
    $returnValue842 = $tmp843;
    panda$core$Panda$ref$panda$core$Object($tmp843);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp844));
    panda$core$Panda$unref$panda$core$Object($tmp845);
    return $returnValue842;
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous12$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$Object* $returnValue855;
    panda$core$Object* $tmp856;
    panda$core$String* $tmp857;
    panda$core$Object* $tmp858;
    panda$core$Int64 $tmp859;
    panda$core$Int64$init$builtin_int64(&$tmp859, 1);
    ITable* $tmp860 = p_groups->$class->itable;
    while ($tmp860->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp860 = $tmp860->next;
    }
    $fn862 $tmp861 = $tmp860->methods[0];
    panda$core$Object* $tmp863 = $tmp861(p_groups, $tmp859);
    $tmp858 = $tmp863;
    panda$core$String* $tmp866 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(((panda$core$String*) $tmp858), &$s864, &$s865);
    $tmp857 = $tmp866;
    $tmp856 = ((panda$core$Object*) $tmp857);
    $returnValue855 = $tmp856;
    panda$core$Panda$ref$panda$core$Object($tmp856);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp857));
    panda$core$Panda$unref$panda$core$Object($tmp858);
    return $returnValue855;
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous10$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$MutableString* blockQuote871 = NULL;
    panda$core$MutableString* $tmp872;
    panda$core$MutableString* $tmp873;
    panda$core$Object* $tmp875;
    panda$core$Int64 $tmp876;
    panda$core$RegularExpression* $tmp881;
    panda$core$RegularExpression* $tmp885;
    panda$core$RegularExpression* p1892 = NULL;
    panda$core$RegularExpression* $tmp893;
    panda$core$RegularExpression* $tmp894;
    panda$core$Int64 $tmp897;
    panda$core$Object* $returnValue899;
    panda$core$Object* $tmp900;
    panda$core$String* $tmp901;
    panda$core$String* $tmp902;
    int $tmp870;
    {
        panda$core$MutableString* $tmp874 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$Int64$init$builtin_int64(&$tmp876, 1);
        ITable* $tmp877 = p_groups->$class->itable;
        while ($tmp877->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp877 = $tmp877->next;
        }
        $fn879 $tmp878 = $tmp877->methods[0];
        panda$core$Object* $tmp880 = $tmp878(p_groups, $tmp876);
        $tmp875 = $tmp880;
        panda$core$MutableString$init$panda$core$String($tmp874, ((panda$core$String*) $tmp875));
        $tmp873 = $tmp874;
        $tmp872 = $tmp873;
        blockQuote871 = $tmp872;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp872));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp873));
        panda$core$Panda$unref$panda$core$Object($tmp875);
        panda$core$RegularExpression* $tmp882 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp882, &$s883);
        $tmp881 = $tmp882;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(blockQuote871, $tmp881, &$s884);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp881));
        panda$core$RegularExpression* $tmp886 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp886, &$s887);
        $tmp885 = $tmp886;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(blockQuote871, $tmp885, &$s888);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp885));
        (($fn889) self->$class->vtable[6])(self, blockQuote871);
        panda$core$MutableString$replace$panda$core$String$panda$core$String(blockQuote871, &$s890, &$s891);
        panda$core$RegularExpression* $tmp895 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp897, 4);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp895, &$s896, $tmp897);
        $tmp894 = $tmp895;
        $tmp893 = $tmp894;
        p1892 = $tmp893;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp893));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp894));
        panda$core$MutableMethod* $tmp898 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp898, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous12$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) self));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(blockQuote871, p1892, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp898)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp898));
        panda$core$String* $tmp904 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s903, ((panda$core$Object*) blockQuote871));
        $tmp902 = $tmp904;
        panda$core$String* $tmp906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp902, &$s905);
        $tmp901 = $tmp906;
        $tmp900 = ((panda$core$Object*) $tmp901);
        $returnValue899 = $tmp900;
        panda$core$Panda$ref$panda$core$Object($tmp900);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp901));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp902));
        $tmp870 = 0;
        goto $l868;
        $l907:;
        return $returnValue899;
    }
    $l868:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1892));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) blockQuote871));
    blockQuote871 = NULL;
    p1892 = NULL;
    switch ($tmp870) {
        case 0: goto $l907;
    }
    $l909:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doBlockQuotes$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* p913 = NULL;
    panda$core$RegularExpression* $tmp914;
    panda$core$RegularExpression* $tmp915;
    panda$core$Int64 $tmp918;
    int $tmp912;
    {
        panda$core$RegularExpression* $tmp916 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp918, 1);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp916, &$s917, $tmp918);
        $tmp915 = $tmp916;
        $tmp914 = $tmp915;
        p913 = $tmp914;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp914));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp915));
        panda$core$MutableMethod* $tmp919 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp919, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous10$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) self));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, p913, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp919)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp919));
    }
    $tmp912 = -1;
    goto $l910;
    $l910:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p913));
    p913 = NULL;
    switch ($tmp912) {
        case -1: goto $l920;
    }
    $l920:;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous13$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* lineSoFar924 = NULL;
    panda$core$String* $tmp925;
    panda$core$Object* $tmp926;
    panda$core$Int64 $tmp927;
    panda$core$Int64 width932;
    panda$core$MutableString* replacement934 = NULL;
    panda$core$MutableString* $tmp935;
    panda$core$MutableString* $tmp936;
    panda$core$Char8 $tmp940;
    panda$core$UInt8 $tmp941;
    panda$core$Int64 $tmp942;
    panda$core$Int64 $tmp945;
    panda$core$Int64 $tmp947;
    panda$core$String* $returnValue949;
    panda$core$String* $tmp950;
    panda$core$String* $tmp951;
    int $tmp923;
    {
        panda$core$Int64$init$builtin_int64(&$tmp927, 1);
        ITable* $tmp928 = p_groups->$class->itable;
        while ($tmp928->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp928 = $tmp928->next;
        }
        $fn930 $tmp929 = $tmp928->methods[0];
        panda$core$Object* $tmp931 = $tmp929(p_groups, $tmp927);
        $tmp926 = $tmp931;
        $tmp925 = ((panda$core$String*) $tmp926);
        lineSoFar924 = $tmp925;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp925));
        panda$core$Panda$unref$panda$core$Object($tmp926);
        panda$core$Int64 $tmp933 = panda$core$String$length$R$panda$core$Int64(lineSoFar924);
        width932 = $tmp933;
        panda$core$MutableString* $tmp937 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp937, lineSoFar924);
        $tmp936 = $tmp937;
        $tmp935 = $tmp936;
        replacement934 = $tmp935;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp935));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp936));
        $l938:;
        {
            panda$core$UInt8$init$builtin_uint8(&$tmp941, 32);
            panda$core$Char8$init$panda$core$UInt8(&$tmp940, $tmp941);
            panda$core$MutableString$append$panda$core$Char8(replacement934, $tmp940);
            panda$core$Int64$init$builtin_int64(&$tmp942, 1);
            panda$core$Int64 $tmp943 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(width932, $tmp942);
            width932 = $tmp943;
        }
        panda$core$Int64$init$builtin_int64(&$tmp945, 4);
        panda$core$Int64 $tmp946 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(width932, $tmp945);
        panda$core$Int64$init$builtin_int64(&$tmp947, 0);
        panda$core$Bit $tmp948 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp946, $tmp947);
        bool $tmp944 = $tmp948.value;
        if ($tmp944) goto $l938;
        $l939:;
        panda$core$String* $tmp952 = panda$core$MutableString$convert$R$panda$core$String(replacement934);
        $tmp951 = $tmp952;
        $tmp950 = $tmp951;
        $returnValue949 = $tmp950;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp950));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp951));
        $tmp923 = 0;
        goto $l921;
        $l953:;
        return $returnValue949;
    }
    $l921:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) replacement934));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) lineSoFar924));
    lineSoFar924 = NULL;
    replacement934 = NULL;
    switch ($tmp923) {
        case 0: goto $l953;
    }
    $l955:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim14$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar959 = NULL;
    panda$core$Method* $tmp960;
    panda$core$Method* $tmp961;
    panda$core$Object* $tmp963;
    panda$core$Object* $tmp964;
    panda$core$Object* $returnValue965;
    panda$core$Object* $tmp966;
    panda$core$String* $tmp967;
    panda$core$String* $tmp968;
    int $tmp958;
    {
        panda$core$Method* $tmp962 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp962, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp961 = $tmp962;
        $tmp960 = $tmp961;
        methodVar959 = $tmp960;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp960));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp961));
        {
            $tmp963 = ((panda$core$MutableMethod*) methodVar959)->target;
            $tmp964 = self->target;
            ((panda$core$MutableMethod*) methodVar959)->target = $tmp964;
            panda$core$Panda$ref$panda$core$Object($tmp964);
            panda$core$Panda$unref$panda$core$Object($tmp963);
        }
        if (methodVar959->target) {
            $tmp968 = (($fn969) methodVar959->pointer)(methodVar959->target, p_p0);
        } else {
            $tmp968 = (($fn970) methodVar959->pointer)(p_p0);
        }
        $tmp967 = $tmp968;
        $tmp966 = ((panda$core$Object*) $tmp967);
        $returnValue965 = $tmp966;
        panda$core$Panda$ref$panda$core$Object($tmp966);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp967));
        $tmp958 = 0;
        goto $l956;
        $l971:;
        return $returnValue965;
    }
    $l956:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar959));
    methodVar959 = NULL;
    switch ($tmp958) {
        case 0: goto $l971;
    }
    $l973:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$detabify$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$core$RegularExpression* $tmp974;
    panda$core$RegularExpression* $tmp975 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp975, &$s976);
    $tmp974 = $tmp975;
    panda$core$MutableMethod* $tmp977 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
    panda$core$MutableMethod* $tmp978 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
    panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp978, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous13$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
    panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp977, (panda$core$Int8*) &panda$core$MutableMethod$$shim14$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp978)));
    panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_text, $tmp974, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp977)));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp977));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp978));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp974));
}
void org$pandalanguage$pandac$pandadoc$Markdown$outdent$panda$core$MutableString(panda$core$MutableString* p_s) {
    panda$core$RegularExpression* $tmp979;
    panda$core$RegularExpression* $tmp980 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp980, &$s981);
    $tmp979 = $tmp980;
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_s, $tmp979, &$s982);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp979));
}
panda$core$Object* panda$core$MutableMethod$$shim15$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$MutableMethod* methodVar986 = NULL;
    panda$core$MutableMethod* $tmp987;
    panda$core$Method* $tmp988;
    panda$core$Object* $tmp990;
    panda$core$Object* $tmp991;
    panda$core$Object* $returnValue992;
    panda$core$Object* $tmp993;
    panda$core$String* $tmp994;
    panda$core$String* $tmp995;
    int $tmp985;
    {
        panda$core$Method* $tmp989 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp989, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp988 = $tmp989;
        $tmp987 = ((panda$core$MutableMethod*) $tmp988);
        methodVar986 = $tmp987;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp987));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp988));
        {
            $tmp990 = methodVar986->target;
            $tmp991 = self->target;
            methodVar986->target = $tmp991;
            panda$core$Panda$ref$panda$core$Object($tmp991);
            panda$core$Panda$unref$panda$core$Object($tmp990);
        }
        if (methodVar986->target) {
            $tmp995 = (($fn996) methodVar986->pointer)(methodVar986->target, p_p0);
        } else {
            $tmp995 = (($fn997) methodVar986->pointer)(p_p0);
        }
        $tmp994 = $tmp995;
        $tmp993 = ((panda$core$Object*) $tmp994);
        $returnValue992 = $tmp993;
        panda$core$Panda$ref$panda$core$Object($tmp993);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp994));
        $tmp985 = 0;
        goto $l983;
        $l998:;
        return $returnValue992;
    }
    $l983:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar986));
    methodVar986 = NULL;
    switch ($tmp985) {
        case 0: goto $l998;
    }
    $l1000:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doCodeBlocks$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* p1004 = NULL;
    panda$core$RegularExpression* $tmp1005;
    panda$core$RegularExpression* $tmp1006;
    panda$core$Int64 $tmp1009;
    org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* $tmp1012;
    int $tmp1003;
    {
        panda$core$RegularExpression* $tmp1007 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp1009, 1);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1007, &$s1008, $tmp1009);
        $tmp1006 = $tmp1007;
        $tmp1005 = $tmp1006;
        p1004 = $tmp1005;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1005));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1006));
        panda$core$MutableMethod* $tmp1010 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp1011 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* $tmp1013 = (org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$class);
        org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1013, self);
        $tmp1012 = $tmp1013;
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1011, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$replacement$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) $tmp1012));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1010, (panda$core$Int8*) &panda$core$MutableMethod$$shim15$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp1011)));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, p1004, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1010)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1010));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1011));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1012));
    }
    $tmp1003 = -1;
    goto $l1001;
    $l1001:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1004));
    p1004 = NULL;
    switch ($tmp1003) {
        case -1: goto $l1014;
    }
    $l1014:;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$prettyPrint$org$pandalanguage$pandac$parser$Parser$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, org$pandalanguage$pandac$parser$Parser* p_parser) {
    panda$core$MutableString* result1018 = NULL;
    panda$core$MutableString* $tmp1019;
    panda$core$MutableString* $tmp1020;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind current1023;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp1024;
    panda$core$Int64 $tmp1025;
    panda$collections$Iterator* Iter$507$91029 = NULL;
    panda$collections$Iterator* $tmp1030;
    panda$collections$Iterator* $tmp1031;
    org$pandalanguage$pandac$Pair* t1047 = NULL;
    org$pandalanguage$pandac$Pair* $tmp1048;
    panda$core$Object* $tmp1049;
    panda$core$Int64 $tmp1057;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $match$513_171062;
    panda$core$Int64 $tmp1063;
    panda$core$Int64 $tmp1066;
    panda$core$Int64 $tmp1069;
    panda$core$Int64 $tmp1073;
    panda$core$Int64 $tmp1076;
    panda$core$Int64 $tmp1079;
    panda$core$Int64 $tmp1082;
    panda$core$Int64 $tmp1085;
    panda$core$Int64 $tmp1088;
    panda$core$Int64 $tmp1091;
    panda$core$Int64 $tmp1094;
    panda$core$Int64 $tmp1097;
    panda$core$Int64 $tmp1100;
    panda$core$Bit $tmp1103;
    panda$core$MutableString* s1107 = NULL;
    panda$core$MutableString* $tmp1108;
    panda$core$MutableString* $tmp1109;
    panda$core$String* $tmp1111;
    panda$core$String* $tmp1120;
    panda$core$String* $tmp1125;
    panda$core$String* $tmp1130;
    panda$core$String* $tmp1135;
    panda$core$String* $tmp1140;
    panda$core$Int64 $tmp1145;
    panda$core$Int64 $tmp1148;
    panda$core$String* $tmp1151;
    panda$core$String* $tmp1152;
    panda$core$Object* $tmp1154;
    panda$core$Int64 $tmp1160;
    panda$core$Int64 $tmp1163;
    panda$core$Int64 $tmp1169;
    panda$core$String* $returnValue1173;
    panda$core$String* $tmp1174;
    panda$core$String* $tmp1175;
    int $tmp1017;
    {
        panda$core$MutableString* $tmp1021 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp1021, &$s1022);
        $tmp1020 = $tmp1021;
        $tmp1019 = $tmp1020;
        result1018 = $tmp1019;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1019));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1020));
        panda$core$Int64$init$builtin_int64(&$tmp1025, 0);
        org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp1024, $tmp1025);
        current1023 = $tmp1024;
        {
            int $tmp1028;
            {
                ITable* $tmp1032 = ((panda$collections$Iterable*) p_parser->syntaxHighlighter->tokens)->$class->itable;
                while ($tmp1032->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1032 = $tmp1032->next;
                }
                $fn1034 $tmp1033 = $tmp1032->methods[0];
                panda$collections$Iterator* $tmp1035 = $tmp1033(((panda$collections$Iterable*) p_parser->syntaxHighlighter->tokens));
                $tmp1031 = $tmp1035;
                $tmp1030 = $tmp1031;
                Iter$507$91029 = $tmp1030;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1030));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1031));
                $l1036:;
                ITable* $tmp1039 = Iter$507$91029->$class->itable;
                while ($tmp1039->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1039 = $tmp1039->next;
                }
                $fn1041 $tmp1040 = $tmp1039->methods[0];
                panda$core$Bit $tmp1042 = $tmp1040(Iter$507$91029);
                panda$core$Bit $tmp1043 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1042);
                bool $tmp1038 = $tmp1043.value;
                if (!$tmp1038) goto $l1037;
                {
                    int $tmp1046;
                    {
                        ITable* $tmp1050 = Iter$507$91029->$class->itable;
                        while ($tmp1050->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1050 = $tmp1050->next;
                        }
                        $fn1052 $tmp1051 = $tmp1050->methods[1];
                        panda$core$Object* $tmp1053 = $tmp1051(Iter$507$91029);
                        $tmp1049 = $tmp1053;
                        $tmp1048 = ((org$pandalanguage$pandac$Pair*) $tmp1049);
                        t1047 = $tmp1048;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1048));
                        panda$core$Panda$unref$panda$core$Object($tmp1049);
                        panda$core$Bit $tmp1055 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) t1047->second)->value.$rawValue, current1023.$rawValue);
                        bool $tmp1054 = $tmp1055.value;
                        if (!$tmp1054) goto $l1056;
                        panda$core$Int64$init$builtin_int64(&$tmp1057, 0);
                        panda$core$Bit $tmp1058 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(current1023.$rawValue, $tmp1057);
                        $tmp1054 = $tmp1058.value;
                        $l1056:;
                        panda$core$Bit $tmp1059 = { $tmp1054 };
                        if ($tmp1059.value) {
                        {
                            panda$core$MutableString$append$panda$core$String(result1018, &$s1060);
                        }
                        }
                        panda$core$Bit $tmp1061 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) t1047->second)->value.$rawValue, current1023.$rawValue);
                        if ($tmp1061.value) {
                        {
                            current1023 = ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) t1047->second)->value;
                            {
                                $match$513_171062 = current1023;
                                panda$core$Int64$init$builtin_int64(&$tmp1063, 0);
                                panda$core$Bit $tmp1064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171062.$rawValue, $tmp1063);
                                if ($tmp1064.value) {
                                {
                                    {
                                    }
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1066, 1);
                                panda$core$Bit $tmp1067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171062.$rawValue, $tmp1066);
                                bool $tmp1065 = $tmp1067.value;
                                if ($tmp1065) goto $l1068;
                                panda$core$Int64$init$builtin_int64(&$tmp1069, 2);
                                panda$core$Bit $tmp1070 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171062.$rawValue, $tmp1069);
                                $tmp1065 = $tmp1070.value;
                                $l1068:;
                                panda$core$Bit $tmp1071 = { $tmp1065 };
                                if ($tmp1071.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1018, &$s1072);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1073, 3);
                                panda$core$Bit $tmp1074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171062.$rawValue, $tmp1073);
                                if ($tmp1074.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1018, &$s1075);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1076, 4);
                                panda$core$Bit $tmp1077 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171062.$rawValue, $tmp1076);
                                if ($tmp1077.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1018, &$s1078);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1079, 5);
                                panda$core$Bit $tmp1080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171062.$rawValue, $tmp1079);
                                if ($tmp1080.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1018, &$s1081);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1082, 6);
                                panda$core$Bit $tmp1083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171062.$rawValue, $tmp1082);
                                if ($tmp1083.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1018, &$s1084);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1085, 7);
                                panda$core$Bit $tmp1086 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171062.$rawValue, $tmp1085);
                                if ($tmp1086.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1018, &$s1087);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1088, 8);
                                panda$core$Bit $tmp1089 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171062.$rawValue, $tmp1088);
                                if ($tmp1089.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1018, &$s1090);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1091, 9);
                                panda$core$Bit $tmp1092 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171062.$rawValue, $tmp1091);
                                if ($tmp1092.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1018, &$s1093);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1094, 10);
                                panda$core$Bit $tmp1095 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171062.$rawValue, $tmp1094);
                                if ($tmp1095.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1018, &$s1096);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1097, 11);
                                panda$core$Bit $tmp1098 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171062.$rawValue, $tmp1097);
                                if ($tmp1098.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1018, &$s1099);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1100, 12);
                                panda$core$Bit $tmp1101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171062.$rawValue, $tmp1100);
                                if ($tmp1101.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1018, &$s1102);
                                }
                                }
                                else {
                                {
                                    panda$core$Bit$init$builtin_bit(&$tmp1103, false);
                                    if ($tmp1103.value) goto $l1104; else goto $l1105;
                                    $l1105:;
                                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1106, (panda$core$Int64) { 538 });
                                    abort();
                                    $l1104:;
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
                        panda$core$MutableString* $tmp1110 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                        panda$core$String* $tmp1112 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(p_parser, ((org$pandalanguage$pandac$parser$Token$wrapper*) t1047->first)->value);
                        $tmp1111 = $tmp1112;
                        panda$core$MutableString$init$panda$core$String($tmp1110, $tmp1111);
                        $tmp1109 = $tmp1110;
                        $tmp1108 = $tmp1109;
                        s1107 = $tmp1108;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1108));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1109));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1111));
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s1107, &$s1113, &$s1114);
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s1107, &$s1115, &$s1116);
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s1107, &$s1117, &$s1118);
                        panda$core$String* $tmp1123 = (($fn1122) self->charProtector->$class->vtable[2])(self->charProtector, &$s1121);
                        $tmp1120 = $tmp1123;
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s1107, &$s1119, $tmp1120);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1120));
                        panda$core$String* $tmp1128 = (($fn1127) self->charProtector->$class->vtable[2])(self->charProtector, &$s1126);
                        $tmp1125 = $tmp1128;
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s1107, &$s1124, $tmp1125);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1125));
                        panda$core$String* $tmp1133 = (($fn1132) self->charProtector->$class->vtable[2])(self->charProtector, &$s1131);
                        $tmp1130 = $tmp1133;
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s1107, &$s1129, $tmp1130);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1130));
                        panda$core$String* $tmp1138 = (($fn1137) self->charProtector->$class->vtable[2])(self->charProtector, &$s1136);
                        $tmp1135 = $tmp1138;
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s1107, &$s1134, $tmp1135);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1135));
                        panda$core$String* $tmp1143 = (($fn1142) self->charProtector->$class->vtable[2])(self->charProtector, &$s1141);
                        $tmp1140 = $tmp1143;
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s1107, &$s1139, $tmp1140);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1140));
                        panda$core$Int64$init$builtin_int64(&$tmp1145, 1);
                        panda$core$Bit $tmp1146 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(current1023.$rawValue, $tmp1145);
                        bool $tmp1144 = $tmp1146.value;
                        if (!$tmp1144) goto $l1147;
                        panda$core$Int64$init$builtin_int64(&$tmp1148, 2);
                        panda$core$Bit $tmp1149 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(current1023.$rawValue, $tmp1148);
                        $tmp1144 = $tmp1149.value;
                        $l1147:;
                        panda$core$Bit $tmp1150 = { $tmp1144 };
                        if ($tmp1150.value) {
                        {
                            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1155;
                            $tmp1155 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
                            $tmp1155->value = ((org$pandalanguage$pandac$parser$Token$wrapper*) t1047->first)->value.kind;
                            $tmp1154 = ((panda$core$Object*) $tmp1155);
                            panda$core$String* $tmp1156 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1153, $tmp1154);
                            $tmp1152 = $tmp1156;
                            panda$core$String* $tmp1158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1152, &$s1157);
                            $tmp1151 = $tmp1158;
                            panda$core$MutableString$append$panda$core$String(result1018, $tmp1151);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1151));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1152));
                            panda$core$Panda$unref$panda$core$Object($tmp1154);
                        }
                        }
                        panda$core$MutableString$append$panda$core$Object(result1018, ((panda$core$Object*) s1107));
                        panda$core$Int64$init$builtin_int64(&$tmp1160, 1);
                        panda$core$Bit $tmp1161 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(current1023.$rawValue, $tmp1160);
                        bool $tmp1159 = $tmp1161.value;
                        if (!$tmp1159) goto $l1162;
                        panda$core$Int64$init$builtin_int64(&$tmp1163, 2);
                        panda$core$Bit $tmp1164 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(current1023.$rawValue, $tmp1163);
                        $tmp1159 = $tmp1164.value;
                        $l1162:;
                        panda$core$Bit $tmp1165 = { $tmp1159 };
                        if ($tmp1165.value) {
                        {
                            panda$core$MutableString$append$panda$core$String(result1018, &$s1166);
                        }
                        }
                    }
                    $tmp1046 = -1;
                    goto $l1044;
                    $l1044:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1107));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1047));
                    t1047 = NULL;
                    s1107 = NULL;
                    switch ($tmp1046) {
                        case -1: goto $l1167;
                    }
                    $l1167:;
                }
                goto $l1036;
                $l1037:;
            }
            $tmp1028 = -1;
            goto $l1026;
            $l1026:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$507$91029));
            Iter$507$91029 = NULL;
            switch ($tmp1028) {
                case -1: goto $l1168;
            }
            $l1168:;
        }
        panda$core$Int64$init$builtin_int64(&$tmp1169, 0);
        panda$core$Bit $tmp1170 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(current1023.$rawValue, $tmp1169);
        if ($tmp1170.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1018, &$s1171);
        }
        }
        panda$core$MutableString$append$panda$core$String(result1018, &$s1172);
        panda$core$String* $tmp1176 = panda$core$MutableString$finish$R$panda$core$String(result1018);
        $tmp1175 = $tmp1176;
        $tmp1174 = $tmp1175;
        $returnValue1173 = $tmp1174;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1174));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1175));
        $tmp1017 = 0;
        goto $l1015;
        $l1177:;
        return $returnValue1173;
    }
    $l1015:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1018));
    result1018 = NULL;
    switch ($tmp1017) {
        case 0: goto $l1177;
    }
    $l1179:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$syntaxHighlight$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_ed) {
    panda$core$String* text1183 = NULL;
    panda$core$String* $tmp1184;
    panda$core$String* $tmp1185;
    panda$core$String* $tmp1186;
    org$pandalanguage$pandac$ASTNode* file1189 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1190;
    org$pandalanguage$pandac$ASTNode* $tmp1191;
    panda$core$Int64 $tmp1196;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1199;
    panda$core$Bit $tmp1200;
    panda$core$String* $tmp1201;
    panda$core$Int64 $tmp1210;
    panda$core$Int64 $tmp1214;
    org$pandalanguage$pandac$ASTNode* $tmp1217;
    panda$core$Int64 $tmp1220;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1222;
    panda$core$Bit $tmp1223;
    panda$core$String* $tmp1224;
    panda$core$Int64 $tmp1233;
    panda$core$Int64 $tmp1237;
    org$pandalanguage$pandac$ASTNode* $tmp1240;
    panda$core$Int64 $tmp1243;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1245;
    panda$core$Bit $tmp1246;
    panda$core$String* $tmp1247;
    org$pandalanguage$pandac$parser$Token next1253;
    panda$core$Int64 $tmp1255;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1257;
    panda$core$Bit $tmp1258;
    panda$core$String* $tmp1259;
    int $tmp1182;
    {
        panda$threads$MessageQueue$clear(self->errorQueue);
        panda$core$String* $tmp1187 = panda$core$MutableString$convert$R$panda$core$String(p_ed);
        $tmp1186 = $tmp1187;
        panda$core$String* $tmp1188 = panda$core$String$trim$R$panda$core$String($tmp1186);
        $tmp1185 = $tmp1188;
        $tmp1184 = $tmp1185;
        text1183 = $tmp1184;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1184));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1185));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1186));
        org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->parser, self->source, text1183);
        org$pandalanguage$pandac$ASTNode* $tmp1192 = org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(self->parser);
        $tmp1191 = $tmp1192;
        $tmp1190 = $tmp1191;
        file1189 = $tmp1190;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1190));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1191));
        bool $tmp1193 = ((panda$core$Bit) { file1189 != NULL }).value;
        if (!$tmp1193) goto $l1194;
        panda$core$Int64 $tmp1195 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(self->errorQueue);
        panda$core$Int64$init$builtin_int64(&$tmp1196, 0);
        panda$core$Bit $tmp1197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1195, $tmp1196);
        $tmp1193 = $tmp1197.value;
        $l1194:;
        panda$core$Bit $tmp1198 = { $tmp1193 };
        if ($tmp1198.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1200, false);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1199, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1200);
            panda$core$String* $tmp1203 = (($fn1202) self->$class->vtable[16])(self, self->parser);
            $tmp1201 = $tmp1203;
            panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$core$String(p_ed, $tmp1199, $tmp1201);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1201));
            $tmp1182 = 0;
            goto $l1180;
            $l1204:;
            return;
        }
        }
        panda$threads$MessageQueue$clear(self->errorQueue);
        org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->parser, self->source, text1183);
        $l1205:;
        org$pandalanguage$pandac$parser$Token $tmp1209 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self->parser);
        panda$core$Int64$init$builtin_int64(&$tmp1210, 0);
        panda$core$Bit $tmp1211 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1209.kind.$rawValue, $tmp1210);
        bool $tmp1208 = $tmp1211.value;
        if (!$tmp1208) goto $l1212;
        panda$core$Int64 $tmp1213 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(self->errorQueue);
        panda$core$Int64$init$builtin_int64(&$tmp1214, 0);
        panda$core$Bit $tmp1215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1213, $tmp1214);
        $tmp1208 = $tmp1215.value;
        $l1212:;
        panda$core$Bit $tmp1216 = { $tmp1208 };
        bool $tmp1207 = $tmp1216.value;
        if (!$tmp1207) goto $l1206;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1218 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self->parser);
            $tmp1217 = $tmp1218;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1217));
        }
        goto $l1205;
        $l1206:;
        panda$core$Int64 $tmp1219 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(self->errorQueue);
        panda$core$Int64$init$builtin_int64(&$tmp1220, 0);
        panda$core$Bit $tmp1221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1219, $tmp1220);
        if ($tmp1221.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1223, false);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1222, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1223);
            panda$core$String* $tmp1226 = (($fn1225) self->$class->vtable[16])(self, self->parser);
            $tmp1224 = $tmp1226;
            panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$core$String(p_ed, $tmp1222, $tmp1224);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1224));
            $tmp1182 = 1;
            goto $l1180;
            $l1227:;
            return;
        }
        }
        panda$threads$MessageQueue$clear(self->errorQueue);
        org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->parser, self->source, text1183);
        $l1228:;
        org$pandalanguage$pandac$parser$Token $tmp1232 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self->parser);
        panda$core$Int64$init$builtin_int64(&$tmp1233, 0);
        panda$core$Bit $tmp1234 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1232.kind.$rawValue, $tmp1233);
        bool $tmp1231 = $tmp1234.value;
        if (!$tmp1231) goto $l1235;
        panda$core$Int64 $tmp1236 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(self->errorQueue);
        panda$core$Int64$init$builtin_int64(&$tmp1237, 0);
        panda$core$Bit $tmp1238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1236, $tmp1237);
        $tmp1231 = $tmp1238.value;
        $l1235:;
        panda$core$Bit $tmp1239 = { $tmp1231 };
        bool $tmp1230 = $tmp1239.value;
        if (!$tmp1230) goto $l1229;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1241 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self->parser);
            $tmp1240 = $tmp1241;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1240));
        }
        goto $l1228;
        $l1229:;
        panda$core$Int64 $tmp1242 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(self->errorQueue);
        panda$core$Int64$init$builtin_int64(&$tmp1243, 0);
        panda$core$Bit $tmp1244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1242, $tmp1243);
        if ($tmp1244.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1246, false);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1245, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1246);
            panda$core$String* $tmp1249 = (($fn1248) self->$class->vtable[16])(self, self->parser);
            $tmp1247 = $tmp1249;
            panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$core$String(p_ed, $tmp1245, $tmp1247);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1247));
            $tmp1182 = 2;
            goto $l1180;
            $l1250:;
            return;
        }
        }
        panda$threads$MessageQueue$clear(self->errorQueue);
        org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->parser, self->source, text1183);
        $l1251:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1254 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self->parser);
            next1253 = $tmp1254;
            panda$core$Int64$init$builtin_int64(&$tmp1255, 0);
            panda$core$Bit $tmp1256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1253.kind.$rawValue, $tmp1255);
            if ($tmp1256.value) {
            {
                goto $l1252;
            }
            }
        }
        }
        $l1252:;
        panda$core$Bit$init$builtin_bit(&$tmp1258, false);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1257, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1258);
        panda$core$String* $tmp1261 = (($fn1260) self->$class->vtable[16])(self, self->parser);
        $tmp1259 = $tmp1261;
        panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$core$String(p_ed, $tmp1257, $tmp1259);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1259));
    }
    $tmp1182 = -1;
    goto $l1180;
    $l1180:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) file1189));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) text1183));
    text1183 = NULL;
    file1189 = NULL;
    switch ($tmp1182) {
        case 2: goto $l1250;
        case -1: goto $l1262;
        case 1: goto $l1227;
        case 0: goto $l1204;
    }
    $l1262:;
}
void org$pandalanguage$pandac$pandadoc$Markdown$encodeCode$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_ed) {
    panda$core$RegularExpression* $tmp1263;
    panda$core$RegularExpression* $tmp1264 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp1264, &$s1265);
    $tmp1263 = $tmp1264;
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_ed, $tmp1263, &$s1266);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1263));
    (($fn1267) self->$class->vtable[17])(self, p_ed);
    panda$core$MutableString$replace$panda$core$String$panda$core$String(p_ed, &$s1268, &$s1269);
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous16$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* list1273 = NULL;
    panda$core$String* $tmp1274;
    panda$core$Object* $tmp1275;
    panda$core$Int64 $tmp1276;
    panda$core$String* listStart1281 = NULL;
    panda$core$String* $tmp1282;
    panda$core$Object* $tmp1283;
    panda$core$Int64 $tmp1284;
    panda$core$String* listType1289 = NULL;
    panda$core$RegularExpression* $tmp1290;
    panda$core$String* $tmp1294;
    panda$core$String* $tmp1295;
    panda$core$String* $tmp1297;
    panda$core$String* $tmp1298;
    panda$core$String* $tmp1300;
    panda$core$String* $tmp1301;
    panda$core$String* $tmp1302;
    panda$core$RegularExpression* $tmp1303;
    panda$core$String* result1308 = NULL;
    panda$core$String* $tmp1309;
    panda$core$String* $tmp1310;
    panda$core$String* $tmp1313;
    panda$core$String* $tmp1314;
    panda$core$String* $tmp1315;
    panda$core$RegularExpression* $tmp1316;
    panda$core$Object* $returnValue1321;
    panda$core$Object* $tmp1322;
    panda$core$String* $tmp1323;
    panda$core$String* $tmp1324;
    panda$core$String* $tmp1325;
    panda$core$String* $tmp1326;
    panda$core$String* $tmp1327;
    panda$core$String* $tmp1328;
    int $tmp1272;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1276, 1);
        ITable* $tmp1277 = p_groups->$class->itable;
        while ($tmp1277->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1277 = $tmp1277->next;
        }
        $fn1279 $tmp1278 = $tmp1277->methods[0];
        panda$core$Object* $tmp1280 = $tmp1278(p_groups, $tmp1276);
        $tmp1275 = $tmp1280;
        $tmp1274 = ((panda$core$String*) $tmp1275);
        list1273 = $tmp1274;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1274));
        panda$core$Panda$unref$panda$core$Object($tmp1275);
        panda$core$Int64$init$builtin_int64(&$tmp1284, 3);
        ITable* $tmp1285 = p_groups->$class->itable;
        while ($tmp1285->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1285 = $tmp1285->next;
        }
        $fn1287 $tmp1286 = $tmp1285->methods[0];
        panda$core$Object* $tmp1288 = $tmp1286(p_groups, $tmp1284);
        $tmp1283 = $tmp1288;
        $tmp1282 = ((panda$core$String*) $tmp1283);
        listStart1281 = $tmp1282;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1282));
        panda$core$Panda$unref$panda$core$Object($tmp1283);
        memset(&listType1289, 0, sizeof(listType1289));
        panda$core$RegularExpression* $tmp1291 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp1291, &$s1292);
        $tmp1290 = $tmp1291;
        panda$core$Bit $tmp1293 = panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(listStart1281, $tmp1290);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1290));
        if ($tmp1293.value) {
        {
            {
                $tmp1294 = listType1289;
                $tmp1295 = &$s1296;
                listType1289 = $tmp1295;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1295));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1294));
            }
        }
        }
        else {
        {
            {
                $tmp1297 = listType1289;
                $tmp1298 = &$s1299;
                listType1289 = $tmp1298;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1298));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1297));
            }
        }
        }
        {
            $tmp1300 = list1273;
            panda$core$RegularExpression* $tmp1304 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
            panda$core$RegularExpression$init$panda$core$String($tmp1304, &$s1305);
            $tmp1303 = $tmp1304;
            panda$core$String* $tmp1307 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(list1273, $tmp1303, &$s1306);
            $tmp1302 = $tmp1307;
            $tmp1301 = $tmp1302;
            list1273 = $tmp1301;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1301));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1302));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1303));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1300));
        }
        panda$core$String* $tmp1312 = (($fn1311) self->$class->vtable[20])(self, list1273);
        $tmp1310 = $tmp1312;
        $tmp1309 = $tmp1310;
        result1308 = $tmp1309;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1309));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1310));
        {
            $tmp1313 = result1308;
            panda$core$RegularExpression* $tmp1317 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
            panda$core$RegularExpression$init$panda$core$String($tmp1317, &$s1318);
            $tmp1316 = $tmp1317;
            panda$core$String* $tmp1320 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(result1308, $tmp1316, &$s1319);
            $tmp1315 = $tmp1320;
            $tmp1314 = $tmp1315;
            result1308 = $tmp1314;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1314));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1315));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1316));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1313));
        }
        panda$core$String* $tmp1330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1329, listType1289);
        $tmp1328 = $tmp1330;
        panda$core$String* $tmp1332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1328, &$s1331);
        $tmp1327 = $tmp1332;
        panda$core$String* $tmp1333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1327, result1308);
        $tmp1326 = $tmp1333;
        panda$core$String* $tmp1335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1326, &$s1334);
        $tmp1325 = $tmp1335;
        panda$core$String* $tmp1336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1325, listType1289);
        $tmp1324 = $tmp1336;
        panda$core$String* $tmp1338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1324, &$s1337);
        $tmp1323 = $tmp1338;
        $tmp1322 = ((panda$core$Object*) $tmp1323);
        $returnValue1321 = $tmp1322;
        panda$core$Panda$ref$panda$core$Object($tmp1322);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1323));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1324));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1325));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1326));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1327));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1328));
        $tmp1272 = 0;
        goto $l1270;
        $l1339:;
        return $returnValue1321;
    }
    $l1270:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1308));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) listType1289));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) listStart1281));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list1273));
    list1273 = NULL;
    listStart1281 = NULL;
    result1308 = NULL;
    switch ($tmp1272) {
        case 0: goto $l1339;
    }
    $l1341:;
    abort();
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous17$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* list1345 = NULL;
    panda$core$String* $tmp1346;
    panda$core$Object* $tmp1347;
    panda$core$Int64 $tmp1348;
    panda$core$String* listStart1353 = NULL;
    panda$core$String* $tmp1354;
    panda$core$Object* $tmp1355;
    panda$core$Int64 $tmp1356;
    panda$core$String* listType1361 = NULL;
    panda$core$RegularExpression* $tmp1362;
    panda$core$String* $tmp1366;
    panda$core$String* $tmp1367;
    panda$core$String* $tmp1369;
    panda$core$String* $tmp1370;
    panda$core$String* $tmp1372;
    panda$core$String* $tmp1373;
    panda$core$String* $tmp1374;
    panda$core$RegularExpression* $tmp1375;
    panda$core$String* result1380 = NULL;
    panda$core$String* $tmp1381;
    panda$core$String* $tmp1382;
    panda$core$Object* $returnValue1385;
    panda$core$Object* $tmp1386;
    panda$core$String* $tmp1387;
    panda$core$String* $tmp1388;
    panda$core$String* $tmp1389;
    panda$core$String* $tmp1390;
    panda$core$String* $tmp1391;
    panda$core$String* $tmp1392;
    int $tmp1344;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1348, 1);
        ITable* $tmp1349 = p_groups->$class->itable;
        while ($tmp1349->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1349 = $tmp1349->next;
        }
        $fn1351 $tmp1350 = $tmp1349->methods[0];
        panda$core$Object* $tmp1352 = $tmp1350(p_groups, $tmp1348);
        $tmp1347 = $tmp1352;
        $tmp1346 = ((panda$core$String*) $tmp1347);
        list1345 = $tmp1346;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1346));
        panda$core$Panda$unref$panda$core$Object($tmp1347);
        panda$core$Int64$init$builtin_int64(&$tmp1356, 3);
        ITable* $tmp1357 = p_groups->$class->itable;
        while ($tmp1357->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1357 = $tmp1357->next;
        }
        $fn1359 $tmp1358 = $tmp1357->methods[0];
        panda$core$Object* $tmp1360 = $tmp1358(p_groups, $tmp1356);
        $tmp1355 = $tmp1360;
        $tmp1354 = ((panda$core$String*) $tmp1355);
        listStart1353 = $tmp1354;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1354));
        panda$core$Panda$unref$panda$core$Object($tmp1355);
        memset(&listType1361, 0, sizeof(listType1361));
        panda$core$RegularExpression* $tmp1363 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp1363, &$s1364);
        $tmp1362 = $tmp1363;
        panda$core$Bit $tmp1365 = panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(listStart1353, $tmp1362);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1362));
        if ($tmp1365.value) {
        {
            {
                $tmp1366 = listType1361;
                $tmp1367 = &$s1368;
                listType1361 = $tmp1367;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1367));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1366));
            }
        }
        }
        else {
        {
            {
                $tmp1369 = listType1361;
                $tmp1370 = &$s1371;
                listType1361 = $tmp1370;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1370));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1369));
            }
        }
        }
        {
            $tmp1372 = list1345;
            panda$core$RegularExpression* $tmp1376 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
            panda$core$RegularExpression$init$panda$core$String($tmp1376, &$s1377);
            $tmp1375 = $tmp1376;
            panda$core$String* $tmp1379 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(list1345, $tmp1375, &$s1378);
            $tmp1374 = $tmp1379;
            $tmp1373 = $tmp1374;
            list1345 = $tmp1373;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1373));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1374));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1375));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1372));
        }
        panda$core$String* $tmp1384 = (($fn1383) self->$class->vtable[20])(self, list1345);
        $tmp1382 = $tmp1384;
        $tmp1381 = $tmp1382;
        result1380 = $tmp1381;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1381));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1382));
        panda$core$String* $tmp1394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1393, listType1361);
        $tmp1392 = $tmp1394;
        panda$core$String* $tmp1396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1392, &$s1395);
        $tmp1391 = $tmp1396;
        panda$core$String* $tmp1397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1391, result1380);
        $tmp1390 = $tmp1397;
        panda$core$String* $tmp1399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1390, &$s1398);
        $tmp1389 = $tmp1399;
        panda$core$String* $tmp1400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1389, listType1361);
        $tmp1388 = $tmp1400;
        panda$core$String* $tmp1402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1388, &$s1401);
        $tmp1387 = $tmp1402;
        $tmp1386 = ((panda$core$Object*) $tmp1387);
        $returnValue1385 = $tmp1386;
        panda$core$Panda$ref$panda$core$Object($tmp1386);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1387));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1388));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1389));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1390));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1391));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1392));
        $tmp1344 = 0;
        goto $l1342;
        $l1403:;
        return $returnValue1385;
    }
    $l1342:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1380));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) listType1361));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) listStart1353));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list1345));
    list1345 = NULL;
    listStart1353 = NULL;
    result1380 = NULL;
    switch ($tmp1344) {
        case 0: goto $l1403;
    }
    $l1405:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doLists$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$core$Int64 lessThanTab1409;
    panda$core$Int64 $tmp1410;
    panda$core$Int64 $tmp1411;
    panda$core$String* wholeList1413 = NULL;
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
    panda$core$String* $tmp1428;
    panda$core$String* $tmp1429;
    panda$core$String* $tmp1430;
    panda$core$String* $tmp1432;
    panda$core$String* $tmp1433;
    panda$core$Object* $tmp1435;
    panda$core$Int64 $tmp1471;
    panda$core$RegularExpression* matchStartOfLine1476 = NULL;
    panda$core$RegularExpression* $tmp1477;
    panda$core$RegularExpression* $tmp1478;
    panda$core$String* $tmp1480;
    panda$core$String* $tmp1481;
    panda$core$RegularExpression* matchStartOfLine1491 = NULL;
    panda$core$RegularExpression* $tmp1492;
    panda$core$RegularExpression* $tmp1493;
    panda$core$String* $tmp1495;
    int $tmp1408;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1410, 4);
        panda$core$Int64$init$builtin_int64(&$tmp1411, 1);
        panda$core$Int64 $tmp1412 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1410, $tmp1411);
        lessThanTab1409 = $tmp1412;
        panda$core$Int64$wrapper* $tmp1436;
        $tmp1436 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp1436->value = lessThanTab1409;
        $tmp1435 = ((panda$core$Object*) $tmp1436);
        panda$core$String* $tmp1437 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1434, $tmp1435);
        $tmp1433 = $tmp1437;
        panda$core$String* $tmp1439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1433, &$s1438);
        $tmp1432 = $tmp1439;
        panda$core$String* $tmp1440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1431, $tmp1432);
        $tmp1430 = $tmp1440;
        panda$core$String* $tmp1442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1430, &$s1441);
        $tmp1429 = $tmp1442;
        panda$core$String* $tmp1444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1429, &$s1443);
        $tmp1428 = $tmp1444;
        panda$core$String* $tmp1446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1428, &$s1445);
        $tmp1427 = $tmp1446;
        panda$core$String* $tmp1448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1427, &$s1447);
        $tmp1426 = $tmp1448;
        panda$core$String* $tmp1450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1426, &$s1449);
        $tmp1425 = $tmp1450;
        panda$core$String* $tmp1452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1425, &$s1451);
        $tmp1424 = $tmp1452;
        panda$core$String* $tmp1454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1424, &$s1453);
        $tmp1423 = $tmp1454;
        panda$core$String* $tmp1456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1423, &$s1455);
        $tmp1422 = $tmp1456;
        panda$core$String* $tmp1458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1422, &$s1457);
        $tmp1421 = $tmp1458;
        panda$core$String* $tmp1460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1421, &$s1459);
        $tmp1420 = $tmp1460;
        panda$core$String* $tmp1462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1420, &$s1461);
        $tmp1419 = $tmp1462;
        panda$core$String* $tmp1464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1419, &$s1463);
        $tmp1418 = $tmp1464;
        panda$core$String* $tmp1466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1418, &$s1465);
        $tmp1417 = $tmp1466;
        panda$core$String* $tmp1468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1417, &$s1467);
        $tmp1416 = $tmp1468;
        panda$core$String* $tmp1470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1416, &$s1469);
        $tmp1415 = $tmp1470;
        $tmp1414 = $tmp1415;
        wholeList1413 = $tmp1414;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1414));
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
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1428));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1429));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1430));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1432));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1433));
        panda$core$Panda$unref$panda$core$Object($tmp1435);
        panda$core$Int64$init$builtin_int64(&$tmp1471, 0);
        panda$core$Bit $tmp1472 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->listLevel, $tmp1471);
        if ($tmp1472.value) {
        {
            int $tmp1475;
            {
                panda$core$RegularExpression* $tmp1479 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                panda$core$String* $tmp1483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1482, wholeList1413);
                $tmp1481 = $tmp1483;
                panda$core$String* $tmp1485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1481, &$s1484);
                $tmp1480 = $tmp1485;
                panda$core$RegularExpression$init$panda$core$String($tmp1479, $tmp1480);
                $tmp1478 = $tmp1479;
                $tmp1477 = $tmp1478;
                matchStartOfLine1476 = $tmp1477;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1477));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1478));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1480));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1481));
                panda$core$MutableMethod* $tmp1486 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
                panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1486, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous16$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) self));
                panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_text, matchStartOfLine1476, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1486)));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1486));
            }
            $tmp1475 = -1;
            goto $l1473;
            $l1473:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matchStartOfLine1476));
            matchStartOfLine1476 = NULL;
            switch ($tmp1475) {
                case -1: goto $l1487;
            }
            $l1487:;
        }
        }
        else {
        {
            int $tmp1490;
            {
                panda$core$RegularExpression* $tmp1494 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                panda$core$String* $tmp1497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1496, wholeList1413);
                $tmp1495 = $tmp1497;
                panda$core$RegularExpression$init$panda$core$String($tmp1494, $tmp1495);
                $tmp1493 = $tmp1494;
                $tmp1492 = $tmp1493;
                matchStartOfLine1491 = $tmp1492;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1492));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1493));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1495));
                panda$core$MutableMethod* $tmp1498 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
                panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1498, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous17$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) self));
                panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_text, matchStartOfLine1491, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1498)));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1498));
            }
            $tmp1490 = -1;
            goto $l1488;
            $l1488:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matchStartOfLine1491));
            matchStartOfLine1491 = NULL;
            switch ($tmp1490) {
                case -1: goto $l1499;
            }
            $l1499:;
        }
        }
    }
    $tmp1408 = -1;
    goto $l1406;
    $l1406:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) wholeList1413));
    wholeList1413 = NULL;
    switch ($tmp1408) {
        case -1: goto $l1500;
    }
    $l1500:;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous18$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* text1504 = NULL;
    panda$core$String* $tmp1505;
    panda$core$Object* $tmp1506;
    panda$core$Int64 $tmp1507;
    panda$core$MutableString* item1512 = NULL;
    panda$core$MutableString* $tmp1513;
    panda$core$MutableString* $tmp1514;
    panda$core$String* leadingLine1516 = NULL;
    panda$core$String* $tmp1517;
    panda$core$Object* $tmp1518;
    panda$core$Int64 $tmp1519;
    panda$core$String* $returnValue1533;
    panda$core$String* $tmp1534;
    panda$core$String* $tmp1535;
    panda$core$String* $tmp1536;
    int $tmp1503;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1507, 4);
        ITable* $tmp1508 = p_groups->$class->itable;
        while ($tmp1508->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1508 = $tmp1508->next;
        }
        $fn1510 $tmp1509 = $tmp1508->methods[0];
        panda$core$Object* $tmp1511 = $tmp1509(p_groups, $tmp1507);
        $tmp1506 = $tmp1511;
        $tmp1505 = ((panda$core$String*) $tmp1506);
        text1504 = $tmp1505;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1505));
        panda$core$Panda$unref$panda$core$Object($tmp1506);
        panda$core$MutableString* $tmp1515 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp1515, text1504);
        $tmp1514 = $tmp1515;
        $tmp1513 = $tmp1514;
        item1512 = $tmp1513;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1513));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1514));
        panda$core$Int64$init$builtin_int64(&$tmp1519, 1);
        ITable* $tmp1520 = p_groups->$class->itable;
        while ($tmp1520->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1520 = $tmp1520->next;
        }
        $fn1522 $tmp1521 = $tmp1520->methods[0];
        panda$core$Object* $tmp1523 = $tmp1521(p_groups, $tmp1519);
        $tmp1518 = $tmp1523;
        $tmp1517 = ((panda$core$String*) $tmp1518);
        leadingLine1516 = $tmp1517;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1517));
        panda$core$Panda$unref$panda$core$Object($tmp1518);
        panda$core$Bit $tmp1525 = org$pandalanguage$pandac$pandadoc$Markdown$isEmptyString$panda$core$String$Q$R$panda$core$Bit(leadingLine1516);
        panda$core$Bit $tmp1526 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1525);
        bool $tmp1524 = $tmp1526.value;
        if ($tmp1524) goto $l1527;
        panda$core$Bit $tmp1528 = org$pandalanguage$pandac$pandadoc$Markdown$hasParagraphBreak$panda$core$MutableString$R$panda$core$Bit(item1512);
        $tmp1524 = $tmp1528.value;
        $l1527:;
        panda$core$Bit $tmp1529 = { $tmp1524 };
        if ($tmp1529.value) {
        {
            org$pandalanguage$pandac$pandadoc$Markdown$outdent$panda$core$MutableString(item1512);
            (($fn1530) self->$class->vtable[6])(self, item1512);
        }
        }
        else {
        {
            org$pandalanguage$pandac$pandadoc$Markdown$outdent$panda$core$MutableString(item1512);
            (($fn1531) self->$class->vtable[19])(self, item1512);
            (($fn1532) self->$class->vtable[22])(self, item1512);
        }
        }
        panda$core$MutableString$trim(item1512);
        panda$core$String* $tmp1538 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1537, ((panda$core$Object*) item1512));
        $tmp1536 = $tmp1538;
        panda$core$String* $tmp1540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1536, &$s1539);
        $tmp1535 = $tmp1540;
        $tmp1534 = $tmp1535;
        $returnValue1533 = $tmp1534;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1534));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1535));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1536));
        $tmp1503 = 0;
        goto $l1501;
        $l1541:;
        return $returnValue1533;
    }
    $l1501:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leadingLine1516));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) item1512));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) text1504));
    text1504 = NULL;
    item1512 = NULL;
    leadingLine1516 = NULL;
    switch ($tmp1503) {
        case 0: goto $l1541;
    }
    $l1543:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim19$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar1547 = NULL;
    panda$core$Method* $tmp1548;
    panda$core$Method* $tmp1549;
    panda$core$Object* $tmp1551;
    panda$core$Object* $tmp1552;
    panda$core$Object* $returnValue1553;
    panda$core$Object* $tmp1554;
    panda$core$String* $tmp1555;
    panda$core$String* $tmp1556;
    int $tmp1546;
    {
        panda$core$Method* $tmp1550 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp1550, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp1549 = $tmp1550;
        $tmp1548 = $tmp1549;
        methodVar1547 = $tmp1548;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1548));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1549));
        {
            $tmp1551 = ((panda$core$MutableMethod*) methodVar1547)->target;
            $tmp1552 = self->target;
            ((panda$core$MutableMethod*) methodVar1547)->target = $tmp1552;
            panda$core$Panda$ref$panda$core$Object($tmp1552);
            panda$core$Panda$unref$panda$core$Object($tmp1551);
        }
        if (methodVar1547->target) {
            $tmp1556 = (($fn1557) methodVar1547->pointer)(methodVar1547->target, p_p0);
        } else {
            $tmp1556 = (($fn1558) methodVar1547->pointer)(p_p0);
        }
        $tmp1555 = $tmp1556;
        $tmp1554 = ((panda$core$Object*) $tmp1555);
        $returnValue1553 = $tmp1554;
        panda$core$Panda$ref$panda$core$Object($tmp1554);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1555));
        $tmp1546 = 0;
        goto $l1544;
        $l1559:;
        return $returnValue1553;
    }
    $l1544:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar1547));
    methodVar1547 = NULL;
    switch ($tmp1546) {
        case 0: goto $l1559;
    }
    $l1561:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$processListItems$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$String* p_rawList) {
    panda$core$Int64 $tmp1565;
    panda$core$String* list1567 = NULL;
    panda$core$String* $tmp1568;
    panda$core$String* $tmp1569;
    panda$core$RegularExpression* $tmp1570;
    panda$core$RegularExpression* p1575 = NULL;
    panda$core$RegularExpression* $tmp1576;
    panda$core$RegularExpression* $tmp1577;
    panda$core$Int64 $tmp1580;
    panda$core$String* $tmp1581;
    panda$core$String* $tmp1582;
    panda$core$String* $tmp1583;
    panda$core$Int64 $tmp1587;
    panda$core$String* $returnValue1589;
    panda$core$String* $tmp1590;
    int $tmp1564;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1565, 1);
        panda$core$Int64 $tmp1566 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->listLevel, $tmp1565);
        self->listLevel = $tmp1566;
        panda$core$RegularExpression* $tmp1571 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp1571, &$s1572);
        $tmp1570 = $tmp1571;
        panda$core$String* $tmp1574 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(p_rawList, $tmp1570, &$s1573);
        $tmp1569 = $tmp1574;
        $tmp1568 = $tmp1569;
        list1567 = $tmp1568;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1568));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1569));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1570));
        panda$core$RegularExpression* $tmp1578 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp1580, 1);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1578, &$s1579, $tmp1580);
        $tmp1577 = $tmp1578;
        $tmp1576 = $tmp1577;
        p1575 = $tmp1576;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1576));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1577));
        {
            $tmp1581 = list1567;
            panda$core$MutableMethod* $tmp1584 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
            panda$core$MutableMethod* $tmp1585 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
            panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1585, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous18$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
            panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1584, (panda$core$Int8*) &panda$core$MutableMethod$$shim19$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp1585)));
            panda$core$String* $tmp1586 = panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(list1567, p1575, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1584)));
            $tmp1583 = $tmp1586;
            $tmp1582 = $tmp1583;
            list1567 = $tmp1582;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1582));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1583));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1584));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1585));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1581));
        }
        panda$core$Int64$init$builtin_int64(&$tmp1587, 1);
        panda$core$Int64 $tmp1588 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->listLevel, $tmp1587);
        self->listLevel = $tmp1588;
        $tmp1590 = list1567;
        $returnValue1589 = $tmp1590;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1590));
        $tmp1564 = 0;
        goto $l1562;
        $l1591:;
        return $returnValue1589;
    }
    $l1562:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1575));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list1567));
    list1567 = NULL;
    p1575 = NULL;
    switch ($tmp1564) {
        case 0: goto $l1591;
    }
    $l1593:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$pandadoc$Markdown$hasParagraphBreak$panda$core$MutableString$R$panda$core$Bit(panda$core$MutableString* p_item) {
    panda$core$Bit $returnValue1594;
    panda$core$Bit $tmp1596 = panda$core$MutableString$contains$panda$core$String$R$panda$core$Bit(p_item, &$s1595);
    $returnValue1594 = $tmp1596;
    return $returnValue1594;
}
panda$core$Bit org$pandalanguage$pandac$pandadoc$Markdown$isEmptyString$panda$core$String$Q$R$panda$core$Bit(panda$core$String* p_leadingLine) {
    panda$core$Bit $returnValue1598;
    panda$core$String* $tmp1601;
    panda$core$Bit $tmp1608;
    bool $tmp1599 = ((panda$core$Bit) { p_leadingLine == NULL }).value;
    if ($tmp1599) goto $l1600;
    $tmp1601 = p_leadingLine;
    panda$core$Bit $tmp1605;
    if (((panda$core$Bit) { $tmp1601 != NULL }).value) goto $l1602; else goto $l1603;
    $l1602:;
    panda$core$Bit $tmp1607 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp1601, &$s1606);
    $tmp1605 = $tmp1607;
    goto $l1604;
    $l1603:;
    panda$core$Bit$init$builtin_bit(&$tmp1608, false);
    $tmp1605 = $tmp1608;
    goto $l1604;
    $l1604:;
    $tmp1599 = $tmp1605.value;
    $l1600:;
    panda$core$Bit $tmp1609 = { $tmp1599 };
    $returnValue1598 = $tmp1609;
    return $returnValue1598;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous20$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$MutableString* result1614 = NULL;
    panda$core$MutableString* $tmp1615;
    panda$core$MutableString* $tmp1616;
    panda$core$Object* $tmp1618;
    panda$core$Int64 $tmp1619;
    panda$core$String* $returnValue1625;
    panda$core$String* $tmp1626;
    panda$core$String* $tmp1627;
    panda$core$String* $tmp1628;
    int $tmp1613;
    {
        panda$core$MutableString* $tmp1617 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$Int64$init$builtin_int64(&$tmp1619, 1);
        ITable* $tmp1620 = p_groups->$class->itable;
        while ($tmp1620->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1620 = $tmp1620->next;
        }
        $fn1622 $tmp1621 = $tmp1620->methods[0];
        panda$core$Object* $tmp1623 = $tmp1621(p_groups, $tmp1619);
        $tmp1618 = $tmp1623;
        panda$core$MutableString$init$panda$core$String($tmp1617, ((panda$core$String*) $tmp1618));
        $tmp1616 = $tmp1617;
        $tmp1615 = $tmp1616;
        result1614 = $tmp1615;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1615));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1616));
        panda$core$Panda$unref$panda$core$Object($tmp1618);
        (($fn1624) self->$class->vtable[22])(self, result1614);
        panda$core$String* $tmp1630 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1629, ((panda$core$Object*) result1614));
        $tmp1628 = $tmp1630;
        panda$core$String* $tmp1632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1628, &$s1631);
        $tmp1627 = $tmp1632;
        $tmp1626 = $tmp1627;
        $returnValue1625 = $tmp1626;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1626));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1627));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1628));
        $tmp1613 = 0;
        goto $l1611;
        $l1633:;
        return $returnValue1625;
    }
    $l1611:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1614));
    result1614 = NULL;
    switch ($tmp1613) {
        case 0: goto $l1633;
    }
    $l1635:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim21$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar1639 = NULL;
    panda$core$Method* $tmp1640;
    panda$core$Method* $tmp1641;
    panda$core$Object* $tmp1643;
    panda$core$Object* $tmp1644;
    panda$core$Object* $returnValue1645;
    panda$core$Object* $tmp1646;
    panda$core$String* $tmp1647;
    panda$core$String* $tmp1648;
    int $tmp1638;
    {
        panda$core$Method* $tmp1642 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp1642, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp1641 = $tmp1642;
        $tmp1640 = $tmp1641;
        methodVar1639 = $tmp1640;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1640));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1641));
        {
            $tmp1643 = ((panda$core$MutableMethod*) methodVar1639)->target;
            $tmp1644 = self->target;
            ((panda$core$MutableMethod*) methodVar1639)->target = $tmp1644;
            panda$core$Panda$ref$panda$core$Object($tmp1644);
            panda$core$Panda$unref$panda$core$Object($tmp1643);
        }
        if (methodVar1639->target) {
            $tmp1648 = (($fn1649) methodVar1639->pointer)(methodVar1639->target, p_p0);
        } else {
            $tmp1648 = (($fn1650) methodVar1639->pointer)(p_p0);
        }
        $tmp1647 = $tmp1648;
        $tmp1646 = ((panda$core$Object*) $tmp1647);
        $returnValue1645 = $tmp1646;
        panda$core$Panda$ref$panda$core$Object($tmp1646);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1647));
        $tmp1638 = 0;
        goto $l1636;
        $l1651:;
        return $returnValue1645;
    }
    $l1636:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar1639));
    methodVar1639 = NULL;
    switch ($tmp1638) {
        case 0: goto $l1651;
    }
    $l1653:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous22$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$MutableString* result1657 = NULL;
    panda$core$MutableString* $tmp1658;
    panda$core$MutableString* $tmp1659;
    panda$core$Object* $tmp1661;
    panda$core$Int64 $tmp1662;
    panda$core$String* $returnValue1668;
    panda$core$String* $tmp1669;
    panda$core$String* $tmp1670;
    panda$core$String* $tmp1671;
    int $tmp1656;
    {
        panda$core$MutableString* $tmp1660 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$Int64$init$builtin_int64(&$tmp1662, 1);
        ITable* $tmp1663 = p_groups->$class->itable;
        while ($tmp1663->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1663 = $tmp1663->next;
        }
        $fn1665 $tmp1664 = $tmp1663->methods[0];
        panda$core$Object* $tmp1666 = $tmp1664(p_groups, $tmp1662);
        $tmp1661 = $tmp1666;
        panda$core$MutableString$init$panda$core$String($tmp1660, ((panda$core$String*) $tmp1661));
        $tmp1659 = $tmp1660;
        $tmp1658 = $tmp1659;
        result1657 = $tmp1658;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1658));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1659));
        panda$core$Panda$unref$panda$core$Object($tmp1661);
        (($fn1667) self->$class->vtable[22])(self, result1657);
        panda$core$String* $tmp1673 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1672, ((panda$core$Object*) result1657));
        $tmp1671 = $tmp1673;
        panda$core$String* $tmp1675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1671, &$s1674);
        $tmp1670 = $tmp1675;
        $tmp1669 = $tmp1670;
        $returnValue1668 = $tmp1669;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1669));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1670));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1671));
        $tmp1656 = 0;
        goto $l1654;
        $l1676:;
        return $returnValue1668;
    }
    $l1654:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1657));
    result1657 = NULL;
    switch ($tmp1656) {
        case 0: goto $l1676;
    }
    $l1678:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim23$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar1682 = NULL;
    panda$core$Method* $tmp1683;
    panda$core$Method* $tmp1684;
    panda$core$Object* $tmp1686;
    panda$core$Object* $tmp1687;
    panda$core$Object* $returnValue1688;
    panda$core$Object* $tmp1689;
    panda$core$String* $tmp1690;
    panda$core$String* $tmp1691;
    int $tmp1681;
    {
        panda$core$Method* $tmp1685 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp1685, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp1684 = $tmp1685;
        $tmp1683 = $tmp1684;
        methodVar1682 = $tmp1683;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1683));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1684));
        {
            $tmp1686 = ((panda$core$MutableMethod*) methodVar1682)->target;
            $tmp1687 = self->target;
            ((panda$core$MutableMethod*) methodVar1682)->target = $tmp1687;
            panda$core$Panda$ref$panda$core$Object($tmp1687);
            panda$core$Panda$unref$panda$core$Object($tmp1686);
        }
        if (methodVar1682->target) {
            $tmp1691 = (($fn1692) methodVar1682->pointer)(methodVar1682->target, p_p0);
        } else {
            $tmp1691 = (($fn1693) methodVar1682->pointer)(p_p0);
        }
        $tmp1690 = $tmp1691;
        $tmp1689 = ((panda$core$Object*) $tmp1690);
        $returnValue1688 = $tmp1689;
        panda$core$Panda$ref$panda$core$Object($tmp1689);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1690));
        $tmp1681 = 0;
        goto $l1679;
        $l1694:;
        return $returnValue1688;
    }
    $l1679:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar1682));
    methodVar1682 = NULL;
    switch ($tmp1681) {
        case 0: goto $l1694;
    }
    $l1696:;
    abort();
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous24$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* marker1700 = NULL;
    panda$core$String* $tmp1701;
    panda$core$Object* $tmp1702;
    panda$core$Int64 $tmp1703;
    panda$core$MutableString* heading1708 = NULL;
    panda$core$MutableString* $tmp1709;
    panda$core$MutableString* $tmp1710;
    panda$core$Object* $tmp1712;
    panda$core$Int64 $tmp1713;
    panda$core$Int64 level1719;
    panda$core$String* tag1721 = NULL;
    panda$core$String* $tmp1722;
    panda$core$String* $tmp1723;
    panda$core$Object* $tmp1725;
    panda$core$Object* $returnValue1728;
    panda$core$Object* $tmp1729;
    panda$core$String* $tmp1730;
    panda$core$String* $tmp1731;
    panda$core$String* $tmp1732;
    panda$core$String* $tmp1733;
    panda$core$String* $tmp1734;
    panda$core$String* $tmp1735;
    int $tmp1699;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1703, 1);
        ITable* $tmp1704 = p_groups->$class->itable;
        while ($tmp1704->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1704 = $tmp1704->next;
        }
        $fn1706 $tmp1705 = $tmp1704->methods[0];
        panda$core$Object* $tmp1707 = $tmp1705(p_groups, $tmp1703);
        $tmp1702 = $tmp1707;
        $tmp1701 = ((panda$core$String*) $tmp1702);
        marker1700 = $tmp1701;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1701));
        panda$core$Panda$unref$panda$core$Object($tmp1702);
        panda$core$MutableString* $tmp1711 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$Int64$init$builtin_int64(&$tmp1713, 2);
        ITable* $tmp1714 = p_groups->$class->itable;
        while ($tmp1714->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1714 = $tmp1714->next;
        }
        $fn1716 $tmp1715 = $tmp1714->methods[0];
        panda$core$Object* $tmp1717 = $tmp1715(p_groups, $tmp1713);
        $tmp1712 = $tmp1717;
        panda$core$MutableString$init$panda$core$String($tmp1711, ((panda$core$String*) $tmp1712));
        $tmp1710 = $tmp1711;
        $tmp1709 = $tmp1710;
        heading1708 = $tmp1709;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1709));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1710));
        panda$core$Panda$unref$panda$core$Object($tmp1712);
        (($fn1718) self->$class->vtable[22])(self, heading1708);
        panda$core$Int64 $tmp1720 = panda$core$String$length$R$panda$core$Int64(marker1700);
        level1719 = $tmp1720;
        panda$core$Int64$wrapper* $tmp1726;
        $tmp1726 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp1726->value = level1719;
        $tmp1725 = ((panda$core$Object*) $tmp1726);
        panda$core$String* $tmp1727 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1724, $tmp1725);
        $tmp1723 = $tmp1727;
        $tmp1722 = $tmp1723;
        tag1721 = $tmp1722;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1722));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1723));
        panda$core$Panda$unref$panda$core$Object($tmp1725);
        panda$core$String* $tmp1737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1736, tag1721);
        $tmp1735 = $tmp1737;
        panda$core$String* $tmp1739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1735, &$s1738);
        $tmp1734 = $tmp1739;
        panda$core$String* $tmp1740 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1734, ((panda$core$Object*) heading1708));
        $tmp1733 = $tmp1740;
        panda$core$String* $tmp1742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1733, &$s1741);
        $tmp1732 = $tmp1742;
        panda$core$String* $tmp1743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1732, tag1721);
        $tmp1731 = $tmp1743;
        panda$core$String* $tmp1745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1731, &$s1744);
        $tmp1730 = $tmp1745;
        $tmp1729 = ((panda$core$Object*) $tmp1730);
        $returnValue1728 = $tmp1729;
        panda$core$Panda$ref$panda$core$Object($tmp1729);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1730));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1731));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1732));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1733));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1734));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1735));
        $tmp1699 = 0;
        goto $l1697;
        $l1746:;
        return $returnValue1728;
    }
    $l1697:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tag1721));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) heading1708));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) marker1700));
    marker1700 = NULL;
    heading1708 = NULL;
    tag1721 = NULL;
    switch ($tmp1699) {
        case 0: goto $l1746;
    }
    $l1748:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doHeaders$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* $tmp1752;
    panda$core$RegularExpression* $tmp1757;
    panda$core$RegularExpression* p1762 = NULL;
    panda$core$RegularExpression* $tmp1763;
    panda$core$RegularExpression* $tmp1764;
    panda$core$Int64 $tmp1767;
    int $tmp1751;
    {
        panda$core$RegularExpression* $tmp1753 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp1753, &$s1754);
        $tmp1752 = $tmp1753;
        panda$core$MutableMethod* $tmp1755 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp1756 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1756, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous20$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1755, (panda$core$Int8*) &panda$core$MutableMethod$$shim21$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp1756)));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, $tmp1752, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1755)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1755));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1756));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1752));
        panda$core$RegularExpression* $tmp1758 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp1758, &$s1759);
        $tmp1757 = $tmp1758;
        panda$core$MutableMethod* $tmp1760 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp1761 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1761, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous22$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1760, (panda$core$Int8*) &panda$core$MutableMethod$$shim23$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp1761)));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, $tmp1757, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1760)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1760));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1761));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1757));
        panda$core$RegularExpression* $tmp1765 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp1767, 1);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1765, &$s1766, $tmp1767);
        $tmp1764 = $tmp1765;
        $tmp1763 = $tmp1764;
        p1762 = $tmp1763;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1763));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1764));
        panda$core$MutableMethod* $tmp1768 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1768, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous24$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) self));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, p1762, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1768)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1768));
    }
    $tmp1751 = -1;
    goto $l1749;
    $l1749:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1762));
    p1762 = NULL;
    switch ($tmp1751) {
        case -1: goto $l1769;
    }
    $l1769:;
}
void org$pandalanguage$pandac$pandadoc$Markdown$runSpanGamut$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$core$RegularExpression* $tmp1779;
    (($fn1770) self->$class->vtable[24])(self, p_text);
    (($fn1771) self->$class->vtable[29])(self, p_text);
    (($fn1772) self->$class->vtable[3])(self, p_text);
    (($fn1773) self->$class->vtable[25])(self, p_text);
    (($fn1774) self->$class->vtable[26])(self, p_text);
    (($fn1775) self->$class->vtable[10])(self, p_text);
    (($fn1776) self->$class->vtable[24])(self, p_text);
    (($fn1777) self->$class->vtable[28])(self, p_text);
    (($fn1778) self->$class->vtable[27])(self, p_text);
    panda$core$RegularExpression* $tmp1780 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp1780, &$s1781);
    $tmp1779 = $tmp1780;
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_text, $tmp1779, &$s1782);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1779));
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$nestedTagsRegex$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_depth) {
    panda$core$Int64 $tmp1783;
    panda$core$String* $returnValue1785;
    panda$core$String* $tmp1786;
    panda$core$String* $tmp1789;
    panda$core$String* $tmp1790;
    panda$core$String* $tmp1791;
    panda$core$String* $tmp1793;
    panda$core$Int64 $tmp1794;
    panda$core$Int64$init$builtin_int64(&$tmp1783, 0);
    panda$core$Bit $tmp1784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_depth, $tmp1783);
    if ($tmp1784.value) {
    {
        $tmp1786 = &$s1787;
        $returnValue1785 = $tmp1786;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1786));
        return $returnValue1785;
    }
    }
    else {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1794, 1);
        panda$core$Int64 $tmp1795 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_depth, $tmp1794);
        panda$core$String* $tmp1796 = org$pandalanguage$pandac$pandadoc$Markdown$nestedTagsRegex$panda$core$Int64$R$panda$core$String($tmp1795);
        $tmp1793 = $tmp1796;
        panda$core$String* $tmp1797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1792, $tmp1793);
        $tmp1791 = $tmp1797;
        panda$core$String* $tmp1799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1791, &$s1798);
        $tmp1790 = $tmp1799;
        $tmp1789 = $tmp1790;
        $returnValue1785 = $tmp1789;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1789));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1790));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1791));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1793));
        return $returnValue1785;
    }
    }
    abort();
}
panda$collections$ListView* org$pandalanguage$pandac$pandadoc$Markdown$tokenizeHTML$panda$core$String$R$panda$collections$ListView$LTorg$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$GT(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$String* p_text) {
    panda$collections$Array* tokens1804 = NULL;
    panda$collections$Array* $tmp1805;
    panda$collections$Array* $tmp1806;
    panda$core$String* nestedTags1808 = NULL;
    panda$core$String* $tmp1809;
    panda$core$String* $tmp1810;
    panda$core$Int64 $tmp1811;
    panda$core$RegularExpression* p1813 = NULL;
    panda$core$RegularExpression* $tmp1814;
    panda$core$RegularExpression* $tmp1815;
    panda$core$String* $tmp1817;
    panda$core$Int64 $tmp1820;
    panda$core$Matcher* m1821 = NULL;
    panda$core$Matcher* $tmp1822;
    panda$core$Matcher* $tmp1823;
    panda$core$String$Index lastPos1825;
    panda$core$String$Index $tmp1831;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1833;
    panda$core$Int64 $tmp1835;
    panda$core$String* $tmp1836;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1837;
    panda$core$String$Index $tmp1838;
    panda$core$Bit $tmp1839;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1841;
    panda$core$Int64 $tmp1843;
    panda$core$String* $tmp1844;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1845;
    panda$core$String$Index $tmp1846;
    panda$core$String$Index $tmp1847;
    panda$core$Bit $tmp1848;
    panda$core$String$Index $tmp1850;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1853;
    panda$core$Int64 $tmp1855;
    panda$core$String* $tmp1856;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1857;
    panda$core$Bit $tmp1859;
    panda$collections$ListView* $returnValue1861;
    panda$collections$ListView* $tmp1862;
    int $tmp1803;
    {
        panda$collections$Array* $tmp1807 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1807);
        $tmp1806 = $tmp1807;
        $tmp1805 = $tmp1806;
        tokens1804 = $tmp1805;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1805));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1806));
        panda$core$Int64$init$builtin_int64(&$tmp1811, 6);
        panda$core$String* $tmp1812 = org$pandalanguage$pandac$pandadoc$Markdown$nestedTagsRegex$panda$core$Int64$R$panda$core$String($tmp1811);
        $tmp1810 = $tmp1812;
        $tmp1809 = $tmp1810;
        nestedTags1808 = $tmp1809;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1809));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1810));
        panda$core$RegularExpression* $tmp1816 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$String* $tmp1819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1818, nestedTags1808);
        $tmp1817 = $tmp1819;
        panda$core$Int64$init$builtin_int64(&$tmp1820, 2);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1816, $tmp1817, $tmp1820);
        $tmp1815 = $tmp1816;
        $tmp1814 = $tmp1815;
        p1813 = $tmp1814;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1814));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1815));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1817));
        panda$core$Matcher* $tmp1824 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p1813, p_text);
        $tmp1823 = $tmp1824;
        $tmp1822 = $tmp1823;
        m1821 = $tmp1822;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1822));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1823));
        panda$core$String$Index $tmp1826 = panda$core$String$start$R$panda$core$String$Index(p_text);
        lastPos1825 = $tmp1826;
        $l1827:;
        panda$core$Bit $tmp1830 = panda$core$Matcher$find$R$panda$core$Bit(m1821);
        bool $tmp1829 = $tmp1830.value;
        if (!$tmp1829) goto $l1828;
        {
            panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1831, m1821);
            panda$core$Bit $tmp1832 = panda$core$String$Index$$LT$panda$core$String$Index$R$panda$core$Bit(lastPos1825, $tmp1831);
            if ($tmp1832.value) {
            {
                org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1834 = (org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class);
                panda$core$Int64$init$builtin_int64(&$tmp1835, 1);
                panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1838, m1821);
                panda$core$Bit$init$builtin_bit(&$tmp1839, false);
                panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1837, lastPos1825, $tmp1838, $tmp1839);
                panda$core$String* $tmp1840 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(p_text, $tmp1837);
                $tmp1836 = $tmp1840;
                org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String($tmp1834, $tmp1835, $tmp1836);
                $tmp1833 = $tmp1834;
                panda$collections$Array$add$panda$collections$Array$T(tokens1804, ((panda$core$Object*) $tmp1833));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1833));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1836));
            }
            }
            org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1842 = (org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class);
            panda$core$Int64$init$builtin_int64(&$tmp1843, 0);
            panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1846, m1821);
            panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1847, m1821);
            panda$core$Bit$init$builtin_bit(&$tmp1848, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1845, $tmp1846, $tmp1847, $tmp1848);
            panda$core$String* $tmp1849 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(p_text, $tmp1845);
            $tmp1844 = $tmp1849;
            org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String($tmp1842, $tmp1843, $tmp1844);
            $tmp1841 = $tmp1842;
            panda$collections$Array$add$panda$collections$Array$T(tokens1804, ((panda$core$Object*) $tmp1841));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1841));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1844));
            panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1850, m1821);
            lastPos1825 = $tmp1850;
        }
        goto $l1827;
        $l1828:;
        panda$core$String$Index $tmp1851 = panda$core$String$end$R$panda$core$String$Index(p_text);
        panda$core$Bit $tmp1852 = panda$core$String$Index$$LT$panda$core$String$Index$R$panda$core$Bit(lastPos1825, $tmp1851);
        if ($tmp1852.value) {
        {
            org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1854 = (org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class);
            panda$core$Int64$init$builtin_int64(&$tmp1855, 1);
            panda$core$String$Index $tmp1858 = panda$core$String$end$R$panda$core$String$Index(p_text);
            panda$core$Bit$init$builtin_bit(&$tmp1859, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1857, lastPos1825, $tmp1858, $tmp1859);
            panda$core$String* $tmp1860 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(p_text, $tmp1857);
            $tmp1856 = $tmp1860;
            org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String($tmp1854, $tmp1855, $tmp1856);
            $tmp1853 = $tmp1854;
            panda$collections$Array$add$panda$collections$Array$T(tokens1804, ((panda$core$Object*) $tmp1853));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1853));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1856));
        }
        }
        $tmp1862 = ((panda$collections$ListView*) tokens1804);
        $returnValue1861 = $tmp1862;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1862));
        $tmp1803 = 0;
        goto $l1801;
        $l1863:;
        return $returnValue1861;
    }
    $l1801:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1821));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1813));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nestedTags1808));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokens1804));
    tokens1804 = NULL;
    nestedTags1808 = NULL;
    p1813 = NULL;
    m1821 = NULL;
    switch ($tmp1803) {
        case 0: goto $l1863;
    }
    $l1865:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$escapeSpecialCharsWithinTagAttributes$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$collections$ListView* tokens1869 = NULL;
    panda$collections$ListView* $tmp1870;
    panda$collections$ListView* $tmp1871;
    panda$core$String* $tmp1872;
    panda$collections$Iterator* Iter$852$91879 = NULL;
    panda$collections$Iterator* $tmp1880;
    panda$collections$Iterator* $tmp1881;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* token1897 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1898;
    panda$core$Object* $tmp1899;
    panda$core$String* value1904 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $match$854_131908 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1909;
    panda$core$Int64 $tmp1910;
    panda$core$String* text1912 = NULL;
    panda$core$String* $tmp1914;
    panda$core$String* $tmp1915;
    panda$core$String* $tmp1916;
    panda$core$String* $tmp1917;
    panda$core$String* $tmp1918;
    panda$core$String* $tmp1920;
    panda$core$String* $tmp1925;
    panda$core$String* $tmp1926;
    panda$core$String* $tmp1927;
    panda$core$String* $tmp1929;
    panda$core$String* $tmp1934;
    panda$core$String* $tmp1935;
    panda$core$String* $tmp1936;
    panda$core$String* $tmp1938;
    panda$core$String* $tmp1943;
    panda$core$String* $tmp1944;
    panda$core$String* $tmp1945;
    panda$core$String* $tmp1947;
    panda$core$Int64 $tmp1952;
    panda$core$String* text1954 = NULL;
    panda$core$String* $tmp1956;
    panda$core$String* $tmp1957;
    int $tmp1868;
    {
        panda$core$String* $tmp1873 = panda$core$MutableString$convert$R$panda$core$String(p_text);
        $tmp1872 = $tmp1873;
        panda$collections$ListView* $tmp1875 = (($fn1874) self->$class->vtable[23])(self, $tmp1872);
        $tmp1871 = $tmp1875;
        $tmp1870 = $tmp1871;
        tokens1869 = $tmp1870;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1870));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1871));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1872));
        panda$core$MutableString$clear(p_text);
        {
            int $tmp1878;
            {
                ITable* $tmp1882 = ((panda$collections$Iterable*) tokens1869)->$class->itable;
                while ($tmp1882->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1882 = $tmp1882->next;
                }
                $fn1884 $tmp1883 = $tmp1882->methods[0];
                panda$collections$Iterator* $tmp1885 = $tmp1883(((panda$collections$Iterable*) tokens1869));
                $tmp1881 = $tmp1885;
                $tmp1880 = $tmp1881;
                Iter$852$91879 = $tmp1880;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1880));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1881));
                $l1886:;
                ITable* $tmp1889 = Iter$852$91879->$class->itable;
                while ($tmp1889->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1889 = $tmp1889->next;
                }
                $fn1891 $tmp1890 = $tmp1889->methods[0];
                panda$core$Bit $tmp1892 = $tmp1890(Iter$852$91879);
                panda$core$Bit $tmp1893 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1892);
                bool $tmp1888 = $tmp1893.value;
                if (!$tmp1888) goto $l1887;
                {
                    int $tmp1896;
                    {
                        ITable* $tmp1900 = Iter$852$91879->$class->itable;
                        while ($tmp1900->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1900 = $tmp1900->next;
                        }
                        $fn1902 $tmp1901 = $tmp1900->methods[1];
                        panda$core$Object* $tmp1903 = $tmp1901(Iter$852$91879);
                        $tmp1899 = $tmp1903;
                        $tmp1898 = ((org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) $tmp1899);
                        token1897 = $tmp1898;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1898));
                        panda$core$Panda$unref$panda$core$Object($tmp1899);
                        memset(&value1904, 0, sizeof(value1904));
                        int $tmp1907;
                        {
                            $tmp1909 = token1897;
                            $match$854_131908 = $tmp1909;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1909));
                            panda$core$Int64$init$builtin_int64(&$tmp1910, 0);
                            panda$core$Bit $tmp1911 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$854_131908->$rawValue, $tmp1910);
                            if ($tmp1911.value) {
                            {
                                panda$core$String** $tmp1913 = ((panda$core$String**) ((char*) $match$854_131908->$data + 0));
                                text1912 = *$tmp1913;
                                {
                                    $tmp1914 = value1904;
                                    $tmp1915 = text1912;
                                    value1904 = $tmp1915;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1915));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1914));
                                }
                                {
                                    $tmp1916 = value1904;
                                    panda$core$String* $tmp1923 = (($fn1922) self->charProtector->$class->vtable[2])(self->charProtector, &$s1921);
                                    $tmp1920 = $tmp1923;
                                    panda$core$String* $tmp1924 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(value1904, &$s1919, $tmp1920);
                                    $tmp1918 = $tmp1924;
                                    $tmp1917 = $tmp1918;
                                    value1904 = $tmp1917;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1917));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1918));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1920));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1916));
                                }
                                {
                                    $tmp1925 = value1904;
                                    panda$core$String* $tmp1932 = (($fn1931) self->charProtector->$class->vtable[2])(self->charProtector, &$s1930);
                                    $tmp1929 = $tmp1932;
                                    panda$core$String* $tmp1933 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(value1904, &$s1928, $tmp1929);
                                    $tmp1927 = $tmp1933;
                                    $tmp1926 = $tmp1927;
                                    value1904 = $tmp1926;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1926));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1927));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1929));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1925));
                                }
                                {
                                    $tmp1934 = value1904;
                                    panda$core$String* $tmp1941 = (($fn1940) self->charProtector->$class->vtable[2])(self->charProtector, &$s1939);
                                    $tmp1938 = $tmp1941;
                                    panda$core$String* $tmp1942 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(value1904, &$s1937, $tmp1938);
                                    $tmp1936 = $tmp1942;
                                    $tmp1935 = $tmp1936;
                                    value1904 = $tmp1935;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1935));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1936));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1938));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1934));
                                }
                                {
                                    $tmp1943 = value1904;
                                    panda$core$String* $tmp1950 = (($fn1949) self->charProtector->$class->vtable[2])(self->charProtector, &$s1948);
                                    $tmp1947 = $tmp1950;
                                    panda$core$String* $tmp1951 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(value1904, &$s1946, $tmp1947);
                                    $tmp1945 = $tmp1951;
                                    $tmp1944 = $tmp1945;
                                    value1904 = $tmp1944;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1944));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1945));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1947));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1943));
                                }
                            }
                            }
                            else {
                            panda$core$Int64$init$builtin_int64(&$tmp1952, 1);
                            panda$core$Bit $tmp1953 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$854_131908->$rawValue, $tmp1952);
                            if ($tmp1953.value) {
                            {
                                panda$core$String** $tmp1955 = ((panda$core$String**) ((char*) $match$854_131908->$data + 0));
                                text1954 = *$tmp1955;
                                {
                                    $tmp1956 = value1904;
                                    $tmp1957 = text1954;
                                    value1904 = $tmp1957;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1957));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1956));
                                }
                            }
                            }
                            }
                        }
                        $tmp1907 = -1;
                        goto $l1905;
                        $l1905:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1909));
                        switch ($tmp1907) {
                            case -1: goto $l1958;
                        }
                        $l1958:;
                        panda$core$MutableString$append$panda$core$String(p_text, value1904);
                    }
                    $tmp1896 = -1;
                    goto $l1894;
                    $l1894:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value1904));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) token1897));
                    token1897 = NULL;
                    switch ($tmp1896) {
                        case -1: goto $l1959;
                    }
                    $l1959:;
                }
                goto $l1886;
                $l1887:;
            }
            $tmp1878 = -1;
            goto $l1876;
            $l1876:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$852$91879));
            Iter$852$91879 = NULL;
            switch ($tmp1878) {
                case -1: goto $l1960;
            }
            $l1960:;
        }
    }
    $tmp1868 = -1;
    goto $l1866;
    $l1866:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokens1869));
    tokens1869 = NULL;
    switch ($tmp1868) {
        case -1: goto $l1961;
    }
    $l1961:;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous25$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* replacementText1965 = NULL;
    panda$core$String* wholeMatch1966 = NULL;
    panda$core$String* $tmp1967;
    panda$core$Object* $tmp1968;
    panda$core$Int64 $tmp1969;
    panda$core$String* altText1974 = NULL;
    panda$core$String* $tmp1975;
    panda$core$Object* $tmp1976;
    panda$core$Int64 $tmp1977;
    panda$core$String* id1982 = NULL;
    panda$core$String* $tmp1983;
    panda$core$Object* $tmp1984;
    panda$core$Int64 $tmp1985;
    panda$core$String* $tmp1990;
    panda$core$Bit $tmp1997;
    panda$core$String* $tmp1998;
    panda$core$String* $tmp1999;
    org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* defn2000 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp2001;
    panda$core$Object* $tmp2002;
    panda$core$String* url2007 = NULL;
    panda$core$String* $tmp2008;
    panda$core$String* $tmp2009;
    panda$core$String* $tmp2010;
    panda$core$String* $tmp2011;
    panda$core$RegularExpression* $tmp2012;
    panda$core$String* $tmp2015;
    panda$core$String* $tmp2020;
    panda$core$String* $tmp2021;
    panda$core$String* $tmp2022;
    panda$core$RegularExpression* $tmp2023;
    panda$core$String* $tmp2026;
    panda$core$String* title2031 = NULL;
    panda$core$String* $tmp2032;
    panda$core$String* titleTag2033 = NULL;
    panda$core$String* $tmp2034;
    panda$core$String* $tmp2041;
    panda$core$String* $tmp2042;
    panda$core$String* $tmp2043;
    panda$core$RegularExpression* $tmp2044;
    panda$core$String* $tmp2047;
    panda$core$String* $tmp2052;
    panda$core$String* $tmp2053;
    panda$core$String* $tmp2054;
    panda$core$RegularExpression* $tmp2055;
    panda$core$String* $tmp2058;
    panda$core$String* $tmp2063;
    panda$core$String* $tmp2064;
    panda$core$String* $tmp2065;
    panda$core$String* $tmp2066;
    panda$core$String* $tmp2067;
    panda$core$String* $tmp2068;
    panda$core$String* $tmp2076;
    panda$core$String* $tmp2077;
    panda$core$String* $tmp2078;
    panda$core$String* $tmp2079;
    panda$core$String* $tmp2080;
    panda$core$String* $tmp2081;
    panda$core$String* $tmp2090;
    panda$core$String* $tmp2091;
    panda$core$String* $returnValue2092;
    panda$core$String* $tmp2093;
    int $tmp1964;
    {
        memset(&replacementText1965, 0, sizeof(replacementText1965));
        panda$core$Int64$init$builtin_int64(&$tmp1969, 1);
        ITable* $tmp1970 = p_groups->$class->itable;
        while ($tmp1970->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1970 = $tmp1970->next;
        }
        $fn1972 $tmp1971 = $tmp1970->methods[0];
        panda$core$Object* $tmp1973 = $tmp1971(p_groups, $tmp1969);
        $tmp1968 = $tmp1973;
        $tmp1967 = ((panda$core$String*) $tmp1968);
        wholeMatch1966 = $tmp1967;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1967));
        panda$core$Panda$unref$panda$core$Object($tmp1968);
        panda$core$Int64$init$builtin_int64(&$tmp1977, 2);
        ITable* $tmp1978 = p_groups->$class->itable;
        while ($tmp1978->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1978 = $tmp1978->next;
        }
        $fn1980 $tmp1979 = $tmp1978->methods[0];
        panda$core$Object* $tmp1981 = $tmp1979(p_groups, $tmp1977);
        $tmp1976 = $tmp1981;
        $tmp1975 = ((panda$core$String*) $tmp1976);
        altText1974 = $tmp1975;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1975));
        panda$core$Panda$unref$panda$core$Object($tmp1976);
        panda$core$Int64$init$builtin_int64(&$tmp1985, 3);
        ITable* $tmp1986 = p_groups->$class->itable;
        while ($tmp1986->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1986 = $tmp1986->next;
        }
        $fn1988 $tmp1987 = $tmp1986->methods[0];
        panda$core$Object* $tmp1989 = $tmp1987(p_groups, $tmp1985);
        $tmp1984 = $tmp1989;
        $tmp1983 = ((panda$core$String*) $tmp1984);
        id1982 = $tmp1983;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1983));
        panda$core$Panda$unref$panda$core$Object($tmp1984);
        $tmp1990 = id1982;
        panda$core$Bit $tmp1994;
        if (((panda$core$Bit) { $tmp1990 != NULL }).value) goto $l1991; else goto $l1992;
        $l1991:;
        panda$core$Bit $tmp1996 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp1990, &$s1995);
        $tmp1994 = $tmp1996;
        goto $l1993;
        $l1992:;
        panda$core$Bit$init$builtin_bit(&$tmp1997, false);
        $tmp1994 = $tmp1997;
        goto $l1993;
        $l1993:;
        if ($tmp1994.value) {
        {
            {
                $tmp1998 = id1982;
                $tmp1999 = altText1974;
                id1982 = $tmp1999;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1999));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1998));
            }
        }
        }
        panda$core$Object* $tmp2003 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->linkDefinitions, ((panda$collections$Key*) id1982));
        $tmp2002 = $tmp2003;
        $tmp2001 = ((org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) $tmp2002);
        defn2000 = $tmp2001;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2001));
        panda$core$Panda$unref$panda$core$Object($tmp2002);
        if (((panda$core$Bit) { defn2000 != NULL }).value) {
        {
            int $tmp2006;
            {
                $tmp2008 = defn2000->url;
                url2007 = $tmp2008;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2008));
                {
                    $tmp2009 = url2007;
                    panda$core$RegularExpression* $tmp2013 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                    panda$core$RegularExpression$init$panda$core$String($tmp2013, &$s2014);
                    $tmp2012 = $tmp2013;
                    panda$core$String* $tmp2018 = (($fn2017) self->charProtector->$class->vtable[2])(self->charProtector, &$s2016);
                    $tmp2015 = $tmp2018;
                    panda$core$String* $tmp2019 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(url2007, $tmp2012, $tmp2015);
                    $tmp2011 = $tmp2019;
                    $tmp2010 = $tmp2011;
                    url2007 = $tmp2010;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2010));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2011));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2015));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2012));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2009));
                }
                {
                    $tmp2020 = url2007;
                    panda$core$RegularExpression* $tmp2024 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                    panda$core$RegularExpression$init$panda$core$String($tmp2024, &$s2025);
                    $tmp2023 = $tmp2024;
                    panda$core$String* $tmp2029 = (($fn2028) self->charProtector->$class->vtable[2])(self->charProtector, &$s2027);
                    $tmp2026 = $tmp2029;
                    panda$core$String* $tmp2030 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(url2007, $tmp2023, $tmp2026);
                    $tmp2022 = $tmp2030;
                    $tmp2021 = $tmp2022;
                    url2007 = $tmp2021;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2021));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2022));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2026));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2023));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2020));
                }
                $tmp2032 = defn2000->title;
                title2031 = $tmp2032;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2032));
                $tmp2034 = &$s2035;
                titleTag2033 = $tmp2034;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2034));
                bool $tmp2036 = ((panda$core$Bit) { title2031 != NULL }).value;
                if (!$tmp2036) goto $l2037;
                panda$core$Bit $tmp2039 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(title2031, &$s2038);
                $tmp2036 = $tmp2039.value;
                $l2037:;
                panda$core$Bit $tmp2040 = { $tmp2036 };
                if ($tmp2040.value) {
                {
                    {
                        $tmp2041 = title2031;
                        panda$core$RegularExpression* $tmp2045 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                        panda$core$RegularExpression$init$panda$core$String($tmp2045, &$s2046);
                        $tmp2044 = $tmp2045;
                        panda$core$String* $tmp2050 = (($fn2049) self->charProtector->$class->vtable[2])(self->charProtector, &$s2048);
                        $tmp2047 = $tmp2050;
                        panda$core$String* $tmp2051 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(title2031, $tmp2044, $tmp2047);
                        $tmp2043 = $tmp2051;
                        $tmp2042 = $tmp2043;
                        title2031 = $tmp2042;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2042));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2043));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2047));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2044));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2041));
                    }
                    {
                        $tmp2052 = title2031;
                        panda$core$RegularExpression* $tmp2056 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                        panda$core$RegularExpression$init$panda$core$String($tmp2056, &$s2057);
                        $tmp2055 = $tmp2056;
                        panda$core$String* $tmp2061 = (($fn2060) self->charProtector->$class->vtable[2])(self->charProtector, &$s2059);
                        $tmp2058 = $tmp2061;
                        panda$core$String* $tmp2062 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(title2031, $tmp2055, $tmp2058);
                        $tmp2054 = $tmp2062;
                        $tmp2053 = $tmp2054;
                        title2031 = $tmp2053;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2053));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2054));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2058));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2055));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2052));
                    }
                    {
                        $tmp2063 = titleTag2033;
                        panda$core$String* $tmp2070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2069, altText1974);
                        $tmp2068 = $tmp2070;
                        panda$core$String* $tmp2072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2068, &$s2071);
                        $tmp2067 = $tmp2072;
                        panda$core$String* $tmp2073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2067, title2031);
                        $tmp2066 = $tmp2073;
                        panda$core$String* $tmp2075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2066, &$s2074);
                        $tmp2065 = $tmp2075;
                        $tmp2064 = $tmp2065;
                        titleTag2033 = $tmp2064;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2064));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2065));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2066));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2067));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2068));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2063));
                    }
                }
                }
                {
                    $tmp2076 = replacementText1965;
                    panda$core$String* $tmp2083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2082, url2007);
                    $tmp2081 = $tmp2083;
                    panda$core$String* $tmp2085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2081, &$s2084);
                    $tmp2080 = $tmp2085;
                    panda$core$String* $tmp2086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2080, titleTag2033);
                    $tmp2079 = $tmp2086;
                    panda$core$String* $tmp2088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2079, &$s2087);
                    $tmp2078 = $tmp2088;
                    $tmp2077 = $tmp2078;
                    replacementText1965 = $tmp2077;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2077));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2078));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2079));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2080));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2081));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2076));
                }
            }
            $tmp2006 = -1;
            goto $l2004;
            $l2004:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) titleTag2033));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) title2031));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) url2007));
            url2007 = NULL;
            title2031 = NULL;
            titleTag2033 = NULL;
            switch ($tmp2006) {
                case -1: goto $l2089;
            }
            $l2089:;
        }
        }
        else {
        {
            {
                $tmp2090 = replacementText1965;
                $tmp2091 = wholeMatch1966;
                replacementText1965 = $tmp2091;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2091));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2090));
            }
        }
        }
        $tmp2093 = replacementText1965;
        $returnValue2092 = $tmp2093;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2093));
        $tmp1964 = 0;
        goto $l1962;
        $l2094:;
        return $returnValue2092;
    }
    $l1962:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defn2000));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) id1982));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) altText1974));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) wholeMatch1966));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) replacementText1965));
    wholeMatch1966 = NULL;
    altText1974 = NULL;
    id1982 = NULL;
    defn2000 = NULL;
    switch ($tmp1964) {
        case 0: goto $l2094;
    }
    $l2096:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim26$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar2100 = NULL;
    panda$core$Method* $tmp2101;
    panda$core$Method* $tmp2102;
    panda$core$Object* $tmp2104;
    panda$core$Object* $tmp2105;
    panda$core$Object* $returnValue2106;
    panda$core$Object* $tmp2107;
    panda$core$String* $tmp2108;
    panda$core$String* $tmp2109;
    int $tmp2099;
    {
        panda$core$Method* $tmp2103 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp2103, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp2102 = $tmp2103;
        $tmp2101 = $tmp2102;
        methodVar2100 = $tmp2101;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2101));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2102));
        {
            $tmp2104 = ((panda$core$MutableMethod*) methodVar2100)->target;
            $tmp2105 = self->target;
            ((panda$core$MutableMethod*) methodVar2100)->target = $tmp2105;
            panda$core$Panda$ref$panda$core$Object($tmp2105);
            panda$core$Panda$unref$panda$core$Object($tmp2104);
        }
        if (methodVar2100->target) {
            $tmp2109 = (($fn2110) methodVar2100->pointer)(methodVar2100->target, p_p0);
        } else {
            $tmp2109 = (($fn2111) methodVar2100->pointer)(p_p0);
        }
        $tmp2108 = $tmp2109;
        $tmp2107 = ((panda$core$Object*) $tmp2108);
        $returnValue2106 = $tmp2107;
        panda$core$Panda$ref$panda$core$Object($tmp2107);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2108));
        $tmp2099 = 0;
        goto $l2097;
        $l2112:;
        return $returnValue2106;
    }
    $l2097:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar2100));
    methodVar2100 = NULL;
    switch ($tmp2099) {
        case 0: goto $l2112;
    }
    $l2114:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doImages$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$core$RegularExpression* $tmp2118;
    panda$core$RegularExpression* $tmp2122;
    panda$core$RegularExpression* imageLink2126 = NULL;
    panda$core$RegularExpression* $tmp2127;
    panda$core$RegularExpression* $tmp2128;
    int $tmp2117;
    {
        panda$core$RegularExpression* $tmp2119 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp2119, &$s2120);
        $tmp2118 = $tmp2119;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_text, $tmp2118, &$s2121);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2118));
        panda$core$RegularExpression* $tmp2123 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp2123, &$s2124);
        $tmp2122 = $tmp2123;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_text, $tmp2122, &$s2125);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2122));
        panda$core$RegularExpression* $tmp2129 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp2129, &$s2130);
        $tmp2128 = $tmp2129;
        $tmp2127 = $tmp2128;
        imageLink2126 = $tmp2127;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2127));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2128));
        panda$core$MutableMethod* $tmp2131 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp2132 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2132, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous25$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2131, (panda$core$Int8*) &panda$core$MutableMethod$$shim26$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp2132)));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_text, imageLink2126, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp2131)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2131));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2132));
    }
    $tmp2117 = -1;
    goto $l2115;
    $l2115:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) imageLink2126));
    imageLink2126 = NULL;
    switch ($tmp2117) {
        case -1: goto $l2133;
    }
    $l2133:;
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous27$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* replacementText2137 = NULL;
    panda$core$String* wholeMatch2138 = NULL;
    panda$core$String* $tmp2139;
    panda$core$Object* $tmp2140;
    panda$core$Int64 $tmp2141;
    panda$core$String* linkText2146 = NULL;
    panda$core$String* $tmp2147;
    panda$core$Object* $tmp2148;
    panda$core$Int64 $tmp2149;
    panda$core$String* id2154 = NULL;
    panda$core$String* $tmp2155;
    panda$core$Object* $tmp2156;
    panda$core$Int64 $tmp2157;
    panda$core$String* $tmp2162;
    panda$core$Bit $tmp2169;
    panda$core$String* $tmp2170;
    panda$core$String* $tmp2171;
    org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* defn2172 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp2173;
    panda$core$Object* $tmp2174;
    panda$core$String* url2179 = NULL;
    panda$core$String* $tmp2180;
    panda$core$String* $tmp2181;
    panda$core$String* $tmp2182;
    panda$core$String* $tmp2183;
    panda$core$String* $tmp2185;
    panda$core$String* $tmp2190;
    panda$core$String* $tmp2191;
    panda$core$String* $tmp2192;
    panda$core$String* $tmp2194;
    panda$core$String* title2199 = NULL;
    panda$core$String* $tmp2200;
    panda$core$String* titleTag2201 = NULL;
    panda$core$String* $tmp2202;
    panda$core$String* $tmp2209;
    panda$core$String* $tmp2210;
    panda$core$String* $tmp2211;
    panda$core$String* $tmp2213;
    panda$core$String* $tmp2218;
    panda$core$String* $tmp2219;
    panda$core$String* $tmp2220;
    panda$core$String* $tmp2222;
    panda$core$String* $tmp2227;
    panda$core$String* $tmp2228;
    panda$core$String* $tmp2229;
    panda$core$String* $tmp2230;
    panda$core$String* $tmp2235;
    panda$core$String* $tmp2236;
    panda$core$String* $tmp2237;
    panda$core$String* $tmp2238;
    panda$core$String* $tmp2239;
    panda$core$String* $tmp2240;
    panda$core$String* $tmp2241;
    panda$core$String* $tmp2242;
    panda$core$String* $tmp2254;
    panda$core$String* $tmp2255;
    panda$core$Object* $returnValue2256;
    panda$core$Object* $tmp2257;
    int $tmp2136;
    {
        memset(&replacementText2137, 0, sizeof(replacementText2137));
        panda$core$Int64$init$builtin_int64(&$tmp2141, 1);
        ITable* $tmp2142 = p_groups->$class->itable;
        while ($tmp2142->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2142 = $tmp2142->next;
        }
        $fn2144 $tmp2143 = $tmp2142->methods[0];
        panda$core$Object* $tmp2145 = $tmp2143(p_groups, $tmp2141);
        $tmp2140 = $tmp2145;
        $tmp2139 = ((panda$core$String*) $tmp2140);
        wholeMatch2138 = $tmp2139;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2139));
        panda$core$Panda$unref$panda$core$Object($tmp2140);
        panda$core$Int64$init$builtin_int64(&$tmp2149, 2);
        ITable* $tmp2150 = p_groups->$class->itable;
        while ($tmp2150->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2150 = $tmp2150->next;
        }
        $fn2152 $tmp2151 = $tmp2150->methods[0];
        panda$core$Object* $tmp2153 = $tmp2151(p_groups, $tmp2149);
        $tmp2148 = $tmp2153;
        $tmp2147 = ((panda$core$String*) $tmp2148);
        linkText2146 = $tmp2147;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2147));
        panda$core$Panda$unref$panda$core$Object($tmp2148);
        panda$core$Int64$init$builtin_int64(&$tmp2157, 3);
        ITable* $tmp2158 = p_groups->$class->itable;
        while ($tmp2158->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2158 = $tmp2158->next;
        }
        $fn2160 $tmp2159 = $tmp2158->methods[0];
        panda$core$Object* $tmp2161 = $tmp2159(p_groups, $tmp2157);
        $tmp2156 = $tmp2161;
        $tmp2155 = ((panda$core$String*) $tmp2156);
        id2154 = $tmp2155;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2155));
        panda$core$Panda$unref$panda$core$Object($tmp2156);
        $tmp2162 = id2154;
        panda$core$Bit $tmp2166;
        if (((panda$core$Bit) { $tmp2162 != NULL }).value) goto $l2163; else goto $l2164;
        $l2163:;
        panda$core$Bit $tmp2168 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp2162, &$s2167);
        $tmp2166 = $tmp2168;
        goto $l2165;
        $l2164:;
        panda$core$Bit$init$builtin_bit(&$tmp2169, false);
        $tmp2166 = $tmp2169;
        goto $l2165;
        $l2165:;
        if ($tmp2166.value) {
        {
            {
                $tmp2170 = id2154;
                $tmp2171 = linkText2146;
                id2154 = $tmp2171;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2171));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2170));
            }
        }
        }
        panda$core$Object* $tmp2175 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->linkDefinitions, ((panda$collections$Key*) id2154));
        $tmp2174 = $tmp2175;
        $tmp2173 = ((org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) $tmp2174);
        defn2172 = $tmp2173;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2173));
        panda$core$Panda$unref$panda$core$Object($tmp2174);
        if (((panda$core$Bit) { defn2172 != NULL }).value) {
        {
            int $tmp2178;
            {
                $tmp2180 = defn2172->url;
                url2179 = $tmp2180;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2180));
                {
                    $tmp2181 = url2179;
                    panda$core$String* $tmp2188 = (($fn2187) self->charProtector->$class->vtable[2])(self->charProtector, &$s2186);
                    $tmp2185 = $tmp2188;
                    panda$core$String* $tmp2189 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(url2179, &$s2184, $tmp2185);
                    $tmp2183 = $tmp2189;
                    $tmp2182 = $tmp2183;
                    url2179 = $tmp2182;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2182));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2183));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2185));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2181));
                }
                {
                    $tmp2190 = url2179;
                    panda$core$String* $tmp2197 = (($fn2196) self->charProtector->$class->vtable[2])(self->charProtector, &$s2195);
                    $tmp2194 = $tmp2197;
                    panda$core$String* $tmp2198 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(url2179, &$s2193, $tmp2194);
                    $tmp2192 = $tmp2198;
                    $tmp2191 = $tmp2192;
                    url2179 = $tmp2191;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2191));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2192));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2194));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2190));
                }
                $tmp2200 = defn2172->title;
                title2199 = $tmp2200;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2200));
                $tmp2202 = &$s2203;
                titleTag2201 = $tmp2202;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2202));
                bool $tmp2204 = ((panda$core$Bit) { title2199 != NULL }).value;
                if (!$tmp2204) goto $l2205;
                panda$core$Bit $tmp2207 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(title2199, &$s2206);
                $tmp2204 = $tmp2207.value;
                $l2205:;
                panda$core$Bit $tmp2208 = { $tmp2204 };
                if ($tmp2208.value) {
                {
                    {
                        $tmp2209 = title2199;
                        panda$core$String* $tmp2216 = (($fn2215) self->charProtector->$class->vtable[2])(self->charProtector, &$s2214);
                        $tmp2213 = $tmp2216;
                        panda$core$String* $tmp2217 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2199, &$s2212, $tmp2213);
                        $tmp2211 = $tmp2217;
                        $tmp2210 = $tmp2211;
                        title2199 = $tmp2210;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2210));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2211));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2213));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2209));
                    }
                    {
                        $tmp2218 = title2199;
                        panda$core$String* $tmp2225 = (($fn2224) self->charProtector->$class->vtable[2])(self->charProtector, &$s2223);
                        $tmp2222 = $tmp2225;
                        panda$core$String* $tmp2226 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2199, &$s2221, $tmp2222);
                        $tmp2220 = $tmp2226;
                        $tmp2219 = $tmp2220;
                        title2199 = $tmp2219;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2219));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2220));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2222));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2218));
                    }
                    {
                        $tmp2227 = titleTag2201;
                        panda$core$String* $tmp2232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2231, title2199);
                        $tmp2230 = $tmp2232;
                        panda$core$String* $tmp2234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2230, &$s2233);
                        $tmp2229 = $tmp2234;
                        $tmp2228 = $tmp2229;
                        titleTag2201 = $tmp2228;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2228));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2229));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2230));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2227));
                    }
                }
                }
                {
                    $tmp2235 = replacementText2137;
                    panda$core$String* $tmp2244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2243, url2179);
                    $tmp2242 = $tmp2244;
                    panda$core$String* $tmp2246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2242, &$s2245);
                    $tmp2241 = $tmp2246;
                    panda$core$String* $tmp2247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2241, titleTag2201);
                    $tmp2240 = $tmp2247;
                    panda$core$String* $tmp2249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2240, &$s2248);
                    $tmp2239 = $tmp2249;
                    panda$core$String* $tmp2250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2239, linkText2146);
                    $tmp2238 = $tmp2250;
                    panda$core$String* $tmp2252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2238, &$s2251);
                    $tmp2237 = $tmp2252;
                    $tmp2236 = $tmp2237;
                    replacementText2137 = $tmp2236;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2236));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2237));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2238));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2239));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2240));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2241));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2242));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2235));
                }
            }
            $tmp2178 = -1;
            goto $l2176;
            $l2176:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) titleTag2201));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) title2199));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) url2179));
            url2179 = NULL;
            title2199 = NULL;
            titleTag2201 = NULL;
            switch ($tmp2178) {
                case -1: goto $l2253;
            }
            $l2253:;
        }
        }
        else {
        {
            {
                $tmp2254 = replacementText2137;
                $tmp2255 = wholeMatch2138;
                replacementText2137 = $tmp2255;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2255));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2254));
            }
        }
        }
        $tmp2257 = ((panda$core$Object*) replacementText2137);
        $returnValue2256 = $tmp2257;
        panda$core$Panda$ref$panda$core$Object($tmp2257);
        $tmp2136 = 0;
        goto $l2134;
        $l2258:;
        return $returnValue2256;
    }
    $l2134:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defn2172));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) id2154));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) linkText2146));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) wholeMatch2138));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) replacementText2137));
    wholeMatch2138 = NULL;
    linkText2146 = NULL;
    id2154 = NULL;
    defn2172 = NULL;
    switch ($tmp2136) {
        case 0: goto $l2258;
    }
    $l2260:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous28$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* linkText2264 = NULL;
    panda$core$String* $tmp2265;
    panda$core$Object* $tmp2266;
    panda$core$Int64 $tmp2267;
    panda$core$String* url2272 = NULL;
    panda$core$String* $tmp2273;
    panda$core$Object* $tmp2274;
    panda$core$Int64 $tmp2275;
    panda$core$String* title2280 = NULL;
    panda$core$String* $tmp2281;
    panda$core$Object* $tmp2282;
    panda$core$Int64 $tmp2283;
    panda$core$String* $tmp2288;
    panda$core$String* $tmp2289;
    panda$core$String* $tmp2290;
    panda$core$RegularExpression* $tmp2291;
    panda$core$String* $tmp2294;
    panda$core$String* $tmp2299;
    panda$core$String* $tmp2300;
    panda$core$String* $tmp2301;
    panda$core$RegularExpression* $tmp2302;
    panda$core$String* $tmp2305;
    panda$core$String* $tmp2310;
    panda$core$String* $tmp2311;
    panda$core$MutableString* result2313 = NULL;
    panda$core$MutableString* $tmp2314;
    panda$core$MutableString* $tmp2315;
    panda$core$String* $tmp2317;
    panda$core$String* $tmp2318;
    panda$core$String* $tmp2323;
    panda$core$String* $tmp2324;
    panda$core$String* $tmp2325;
    panda$core$String* $tmp2327;
    panda$core$String* $tmp2332;
    panda$core$String* $tmp2333;
    panda$core$String* $tmp2334;
    panda$core$String* $tmp2336;
    panda$core$String* $tmp2341;
    panda$core$String* $tmp2342;
    panda$core$String* $tmp2343;
    panda$core$Char8 $tmp2348;
    panda$core$UInt8 $tmp2349;
    panda$core$String* $tmp2350;
    panda$core$String* $tmp2351;
    panda$core$String* $returnValue2357;
    panda$core$String* $tmp2358;
    panda$core$String* $tmp2359;
    int $tmp2263;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2267, 2);
        ITable* $tmp2268 = p_groups->$class->itable;
        while ($tmp2268->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2268 = $tmp2268->next;
        }
        $fn2270 $tmp2269 = $tmp2268->methods[0];
        panda$core$Object* $tmp2271 = $tmp2269(p_groups, $tmp2267);
        $tmp2266 = $tmp2271;
        $tmp2265 = ((panda$core$String*) $tmp2266);
        linkText2264 = $tmp2265;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2265));
        panda$core$Panda$unref$panda$core$Object($tmp2266);
        panda$core$Int64$init$builtin_int64(&$tmp2275, 3);
        ITable* $tmp2276 = p_groups->$class->itable;
        while ($tmp2276->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2276 = $tmp2276->next;
        }
        $fn2278 $tmp2277 = $tmp2276->methods[0];
        panda$core$Object* $tmp2279 = $tmp2277(p_groups, $tmp2275);
        $tmp2274 = $tmp2279;
        $tmp2273 = ((panda$core$String*) $tmp2274);
        url2272 = $tmp2273;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2273));
        panda$core$Panda$unref$panda$core$Object($tmp2274);
        panda$core$Int64$init$builtin_int64(&$tmp2283, 6);
        ITable* $tmp2284 = p_groups->$class->itable;
        while ($tmp2284->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2284 = $tmp2284->next;
        }
        $fn2286 $tmp2285 = $tmp2284->methods[0];
        panda$core$Object* $tmp2287 = $tmp2285(p_groups, $tmp2283);
        $tmp2282 = $tmp2287;
        $tmp2281 = ((panda$core$String*) $tmp2282);
        title2280 = $tmp2281;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2281));
        panda$core$Panda$unref$panda$core$Object($tmp2282);
        {
            $tmp2288 = url2272;
            panda$core$RegularExpression* $tmp2292 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
            panda$core$RegularExpression$init$panda$core$String($tmp2292, &$s2293);
            $tmp2291 = $tmp2292;
            panda$core$String* $tmp2297 = (($fn2296) self->charProtector->$class->vtable[2])(self->charProtector, &$s2295);
            $tmp2294 = $tmp2297;
            panda$core$String* $tmp2298 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(url2272, $tmp2291, $tmp2294);
            $tmp2290 = $tmp2298;
            $tmp2289 = $tmp2290;
            url2272 = $tmp2289;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2289));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2290));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2294));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2291));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2288));
        }
        {
            $tmp2299 = url2272;
            panda$core$RegularExpression* $tmp2303 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
            panda$core$RegularExpression$init$panda$core$String($tmp2303, &$s2304);
            $tmp2302 = $tmp2303;
            panda$core$String* $tmp2308 = (($fn2307) self->charProtector->$class->vtable[2])(self->charProtector, &$s2306);
            $tmp2305 = $tmp2308;
            panda$core$String* $tmp2309 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(url2272, $tmp2302, $tmp2305);
            $tmp2301 = $tmp2309;
            $tmp2300 = $tmp2301;
            url2272 = $tmp2300;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2300));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2301));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2305));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2302));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2299));
        }
        {
            $tmp2310 = url2272;
            $tmp2311 = &$s2312;
            url2272 = $tmp2311;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2311));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2310));
        }
        panda$core$MutableString* $tmp2316 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp2316);
        $tmp2315 = $tmp2316;
        $tmp2314 = $tmp2315;
        result2313 = $tmp2314;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2314));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2315));
        panda$core$String* $tmp2320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2319, url2272);
        $tmp2318 = $tmp2320;
        panda$core$String* $tmp2322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2318, &$s2321);
        $tmp2317 = $tmp2322;
        panda$core$MutableString$append$panda$core$String(result2313, $tmp2317);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2317));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2318));
        if (((panda$core$Bit) { title2280 != NULL }).value) {
        {
            {
                $tmp2323 = title2280;
                panda$core$String* $tmp2330 = (($fn2329) self->charProtector->$class->vtable[2])(self->charProtector, &$s2328);
                $tmp2327 = $tmp2330;
                panda$core$String* $tmp2331 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2280, &$s2326, $tmp2327);
                $tmp2325 = $tmp2331;
                $tmp2324 = $tmp2325;
                title2280 = $tmp2324;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2324));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2325));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2327));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2323));
            }
            {
                $tmp2332 = title2280;
                panda$core$String* $tmp2339 = (($fn2338) self->charProtector->$class->vtable[2])(self->charProtector, &$s2337);
                $tmp2336 = $tmp2339;
                panda$core$String* $tmp2340 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2280, &$s2335, $tmp2336);
                $tmp2334 = $tmp2340;
                $tmp2333 = $tmp2334;
                title2280 = $tmp2333;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2333));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2334));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2336));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2332));
            }
            {
                $tmp2341 = title2280;
                panda$core$String* $tmp2346 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2280, &$s2344, &$s2345);
                $tmp2343 = $tmp2346;
                $tmp2342 = $tmp2343;
                title2280 = $tmp2342;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2342));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2343));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2341));
            }
            panda$core$MutableString$append$panda$core$String(result2313, &$s2347);
            panda$core$MutableString$append$panda$core$String(result2313, title2280);
            panda$core$UInt8$init$builtin_uint8(&$tmp2349, 34);
            panda$core$Char8$init$panda$core$UInt8(&$tmp2348, $tmp2349);
            panda$core$MutableString$append$panda$core$Char8(result2313, $tmp2348);
        }
        }
        panda$core$String* $tmp2353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2352, linkText2264);
        $tmp2351 = $tmp2353;
        panda$core$String* $tmp2355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2351, &$s2354);
        $tmp2350 = $tmp2355;
        panda$core$MutableString$append$panda$core$String(result2313, $tmp2350);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2350));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2351));
        panda$core$MutableString$append$panda$core$String(result2313, &$s2356);
        panda$core$String* $tmp2360 = panda$core$MutableString$convert$R$panda$core$String(result2313);
        $tmp2359 = $tmp2360;
        $tmp2358 = $tmp2359;
        $returnValue2357 = $tmp2358;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2358));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2359));
        $tmp2263 = 0;
        goto $l2261;
        $l2361:;
        return $returnValue2357;
    }
    $l2261:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2313));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) title2280));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) url2272));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) linkText2264));
    linkText2264 = NULL;
    url2272 = NULL;
    title2280 = NULL;
    result2313 = NULL;
    switch ($tmp2263) {
        case 0: goto $l2361;
    }
    $l2363:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim29$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar2367 = NULL;
    panda$core$Method* $tmp2368;
    panda$core$Method* $tmp2369;
    panda$core$Object* $tmp2371;
    panda$core$Object* $tmp2372;
    panda$core$Object* $returnValue2373;
    panda$core$Object* $tmp2374;
    panda$core$String* $tmp2375;
    panda$core$String* $tmp2376;
    int $tmp2366;
    {
        panda$core$Method* $tmp2370 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp2370, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp2369 = $tmp2370;
        $tmp2368 = $tmp2369;
        methodVar2367 = $tmp2368;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2368));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2369));
        {
            $tmp2371 = ((panda$core$MutableMethod*) methodVar2367)->target;
            $tmp2372 = self->target;
            ((panda$core$MutableMethod*) methodVar2367)->target = $tmp2372;
            panda$core$Panda$ref$panda$core$Object($tmp2372);
            panda$core$Panda$unref$panda$core$Object($tmp2371);
        }
        if (methodVar2367->target) {
            $tmp2376 = (($fn2377) methodVar2367->pointer)(methodVar2367->target, p_p0);
        } else {
            $tmp2376 = (($fn2378) methodVar2367->pointer)(p_p0);
        }
        $tmp2375 = $tmp2376;
        $tmp2374 = ((panda$core$Object*) $tmp2375);
        $returnValue2373 = $tmp2374;
        panda$core$Panda$ref$panda$core$Object($tmp2374);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2375));
        $tmp2366 = 0;
        goto $l2364;
        $l2379:;
        return $returnValue2373;
    }
    $l2364:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar2367));
    methodVar2367 = NULL;
    switch ($tmp2366) {
        case 0: goto $l2379;
    }
    $l2381:;
    abort();
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous30$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* replacementText2385 = NULL;
    panda$core$String* wholeMatch2386 = NULL;
    panda$core$String* $tmp2387;
    panda$core$Object* $tmp2388;
    panda$core$Int64 $tmp2389;
    panda$core$String* linkText2394 = NULL;
    panda$core$String* $tmp2395;
    panda$core$Object* $tmp2396;
    panda$core$Int64 $tmp2397;
    panda$core$String* id2402 = NULL;
    panda$core$String* $tmp2403;
    panda$core$String* $tmp2404;
    panda$core$String* $tmp2405;
    panda$core$String* $tmp2406;
    panda$core$RegularExpression* $tmp2407;
    org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* defn2412 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp2413;
    panda$core$Object* $tmp2414;
    panda$core$String* url2419 = NULL;
    panda$core$String* $tmp2420;
    panda$core$String* $tmp2421;
    panda$core$String* $tmp2422;
    panda$core$String* $tmp2423;
    panda$core$String* $tmp2425;
    panda$core$String* $tmp2430;
    panda$core$String* $tmp2431;
    panda$core$String* $tmp2432;
    panda$core$String* $tmp2434;
    panda$core$String* title2439 = NULL;
    panda$core$String* $tmp2440;
    panda$core$String* titleTag2441 = NULL;
    panda$core$String* $tmp2442;
    panda$core$String* $tmp2449;
    panda$core$String* $tmp2450;
    panda$core$String* $tmp2451;
    panda$core$String* $tmp2453;
    panda$core$String* $tmp2458;
    panda$core$String* $tmp2459;
    panda$core$String* $tmp2460;
    panda$core$String* $tmp2462;
    panda$core$String* $tmp2467;
    panda$core$String* $tmp2468;
    panda$core$String* $tmp2469;
    panda$core$String* $tmp2470;
    panda$core$String* $tmp2475;
    panda$core$String* $tmp2476;
    panda$core$String* $tmp2477;
    panda$core$String* $tmp2478;
    panda$core$String* $tmp2479;
    panda$core$String* $tmp2480;
    panda$core$String* $tmp2481;
    panda$core$String* $tmp2482;
    panda$core$String* $tmp2494;
    panda$core$String* $tmp2495;
    panda$core$Object* $returnValue2496;
    panda$core$Object* $tmp2497;
    int $tmp2384;
    {
        memset(&replacementText2385, 0, sizeof(replacementText2385));
        panda$core$Int64$init$builtin_int64(&$tmp2389, 1);
        ITable* $tmp2390 = p_groups->$class->itable;
        while ($tmp2390->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2390 = $tmp2390->next;
        }
        $fn2392 $tmp2391 = $tmp2390->methods[0];
        panda$core$Object* $tmp2393 = $tmp2391(p_groups, $tmp2389);
        $tmp2388 = $tmp2393;
        $tmp2387 = ((panda$core$String*) $tmp2388);
        wholeMatch2386 = $tmp2387;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2387));
        panda$core$Panda$unref$panda$core$Object($tmp2388);
        panda$core$Int64$init$builtin_int64(&$tmp2397, 2);
        ITable* $tmp2398 = p_groups->$class->itable;
        while ($tmp2398->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2398 = $tmp2398->next;
        }
        $fn2400 $tmp2399 = $tmp2398->methods[0];
        panda$core$Object* $tmp2401 = $tmp2399(p_groups, $tmp2397);
        $tmp2396 = $tmp2401;
        $tmp2395 = ((panda$core$String*) $tmp2396);
        linkText2394 = $tmp2395;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2395));
        panda$core$Panda$unref$panda$core$Object($tmp2396);
        $tmp2403 = linkText2394;
        id2402 = $tmp2403;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2403));
        {
            $tmp2404 = id2402;
            panda$core$RegularExpression* $tmp2408 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
            panda$core$RegularExpression$init$panda$core$String($tmp2408, &$s2409);
            $tmp2407 = $tmp2408;
            panda$core$String* $tmp2411 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(id2402, $tmp2407, &$s2410);
            $tmp2406 = $tmp2411;
            $tmp2405 = $tmp2406;
            id2402 = $tmp2405;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2405));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2406));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2407));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2404));
        }
        panda$core$Object* $tmp2415 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->linkDefinitions, ((panda$collections$Key*) id2402));
        $tmp2414 = $tmp2415;
        $tmp2413 = ((org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) $tmp2414);
        defn2412 = $tmp2413;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2413));
        panda$core$Panda$unref$panda$core$Object($tmp2414);
        if (((panda$core$Bit) { defn2412 != NULL }).value) {
        {
            int $tmp2418;
            {
                $tmp2420 = defn2412->url;
                url2419 = $tmp2420;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2420));
                {
                    $tmp2421 = url2419;
                    panda$core$String* $tmp2428 = (($fn2427) self->charProtector->$class->vtable[2])(self->charProtector, &$s2426);
                    $tmp2425 = $tmp2428;
                    panda$core$String* $tmp2429 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(url2419, &$s2424, $tmp2425);
                    $tmp2423 = $tmp2429;
                    $tmp2422 = $tmp2423;
                    url2419 = $tmp2422;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2422));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2423));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2425));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2421));
                }
                {
                    $tmp2430 = url2419;
                    panda$core$String* $tmp2437 = (($fn2436) self->charProtector->$class->vtable[2])(self->charProtector, &$s2435);
                    $tmp2434 = $tmp2437;
                    panda$core$String* $tmp2438 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(url2419, &$s2433, $tmp2434);
                    $tmp2432 = $tmp2438;
                    $tmp2431 = $tmp2432;
                    url2419 = $tmp2431;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2431));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2432));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2434));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2430));
                }
                $tmp2440 = defn2412->title;
                title2439 = $tmp2440;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2440));
                $tmp2442 = &$s2443;
                titleTag2441 = $tmp2442;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2442));
                bool $tmp2444 = ((panda$core$Bit) { title2439 != NULL }).value;
                if (!$tmp2444) goto $l2445;
                panda$core$Bit $tmp2447 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(title2439, &$s2446);
                $tmp2444 = $tmp2447.value;
                $l2445:;
                panda$core$Bit $tmp2448 = { $tmp2444 };
                if ($tmp2448.value) {
                {
                    {
                        $tmp2449 = title2439;
                        panda$core$String* $tmp2456 = (($fn2455) self->charProtector->$class->vtable[2])(self->charProtector, &$s2454);
                        $tmp2453 = $tmp2456;
                        panda$core$String* $tmp2457 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2439, &$s2452, $tmp2453);
                        $tmp2451 = $tmp2457;
                        $tmp2450 = $tmp2451;
                        title2439 = $tmp2450;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2450));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2451));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2453));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2449));
                    }
                    {
                        $tmp2458 = title2439;
                        panda$core$String* $tmp2465 = (($fn2464) self->charProtector->$class->vtable[2])(self->charProtector, &$s2463);
                        $tmp2462 = $tmp2465;
                        panda$core$String* $tmp2466 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2439, &$s2461, $tmp2462);
                        $tmp2460 = $tmp2466;
                        $tmp2459 = $tmp2460;
                        title2439 = $tmp2459;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2459));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2460));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2462));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2458));
                    }
                    {
                        $tmp2467 = titleTag2441;
                        panda$core$String* $tmp2472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2471, title2439);
                        $tmp2470 = $tmp2472;
                        panda$core$String* $tmp2474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2470, &$s2473);
                        $tmp2469 = $tmp2474;
                        $tmp2468 = $tmp2469;
                        titleTag2441 = $tmp2468;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2468));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2469));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2470));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2467));
                    }
                }
                }
                {
                    $tmp2475 = replacementText2385;
                    panda$core$String* $tmp2484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2483, url2419);
                    $tmp2482 = $tmp2484;
                    panda$core$String* $tmp2486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2482, &$s2485);
                    $tmp2481 = $tmp2486;
                    panda$core$String* $tmp2487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2481, titleTag2441);
                    $tmp2480 = $tmp2487;
                    panda$core$String* $tmp2489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2480, &$s2488);
                    $tmp2479 = $tmp2489;
                    panda$core$String* $tmp2490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2479, linkText2394);
                    $tmp2478 = $tmp2490;
                    panda$core$String* $tmp2492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2478, &$s2491);
                    $tmp2477 = $tmp2492;
                    $tmp2476 = $tmp2477;
                    replacementText2385 = $tmp2476;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2476));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2477));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2478));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2479));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2480));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2481));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2482));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2475));
                }
            }
            $tmp2418 = -1;
            goto $l2416;
            $l2416:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) titleTag2441));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) title2439));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) url2419));
            url2419 = NULL;
            title2439 = NULL;
            titleTag2441 = NULL;
            switch ($tmp2418) {
                case -1: goto $l2493;
            }
            $l2493:;
        }
        }
        else {
        {
            {
                $tmp2494 = replacementText2385;
                $tmp2495 = wholeMatch2386;
                replacementText2385 = $tmp2495;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2495));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2494));
            }
        }
        }
        $tmp2497 = ((panda$core$Object*) replacementText2385);
        $returnValue2496 = $tmp2497;
        panda$core$Panda$ref$panda$core$Object($tmp2497);
        $tmp2384 = 0;
        goto $l2382;
        $l2498:;
        return $returnValue2496;
    }
    $l2382:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defn2412));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) id2402));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) linkText2394));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) wholeMatch2386));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) replacementText2385));
    wholeMatch2386 = NULL;
    linkText2394 = NULL;
    id2402 = NULL;
    defn2412 = NULL;
    switch ($tmp2384) {
        case 0: goto $l2498;
    }
    $l2500:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doAnchors$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* internalLink2504 = NULL;
    panda$core$RegularExpression* $tmp2505;
    panda$core$RegularExpression* $tmp2506;
    panda$core$RegularExpression* inlineLink2510 = NULL;
    panda$core$RegularExpression* $tmp2511;
    panda$core$RegularExpression* $tmp2512;
    panda$core$Int64 $tmp2515;
    panda$core$RegularExpression* referenceShortcut2518 = NULL;
    panda$core$RegularExpression* $tmp2519;
    panda$core$RegularExpression* $tmp2520;
    panda$core$Int64 $tmp2523;
    int $tmp2503;
    {
        panda$core$RegularExpression* $tmp2507 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp2507, &$s2508);
        $tmp2506 = $tmp2507;
        $tmp2505 = $tmp2506;
        internalLink2504 = $tmp2505;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2505));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2506));
        panda$core$MutableMethod* $tmp2509 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2509, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous27$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) self));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, internalLink2504, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp2509)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2509));
        panda$core$RegularExpression* $tmp2513 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp2515, 4);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp2513, &$s2514, $tmp2515);
        $tmp2512 = $tmp2513;
        $tmp2511 = $tmp2512;
        inlineLink2510 = $tmp2511;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2511));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2512));
        panda$core$MutableMethod* $tmp2516 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp2517 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2517, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous28$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2516, (panda$core$Int8*) &panda$core$MutableMethod$$shim29$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp2517)));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, inlineLink2510, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp2516)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2516));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2517));
        panda$core$RegularExpression* $tmp2521 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp2523, 4);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp2521, &$s2522, $tmp2523);
        $tmp2520 = $tmp2521;
        $tmp2519 = $tmp2520;
        referenceShortcut2518 = $tmp2519;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2519));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2520));
        panda$core$MutableMethod* $tmp2524 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2524, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous30$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) self));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, referenceShortcut2518, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp2524)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2524));
    }
    $tmp2503 = -1;
    goto $l2501;
    $l2501:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) referenceShortcut2518));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inlineLink2510));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) internalLink2504));
    internalLink2504 = NULL;
    inlineLink2510 = NULL;
    referenceShortcut2518 = NULL;
    switch ($tmp2503) {
        case -1: goto $l2525;
    }
    $l2525:;
}
void org$pandalanguage$pandac$pandadoc$Markdown$doItalicsAndBold$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* $tmp2526;
    panda$core$RegularExpression* $tmp2530;
    panda$core$RegularExpression* $tmp2527 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp2527, &$s2528);
    $tmp2526 = $tmp2527;
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_markup, $tmp2526, &$s2529);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2526));
    panda$core$RegularExpression* $tmp2531 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp2531, &$s2532);
    $tmp2530 = $tmp2531;
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_markup, $tmp2530, &$s2533);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2530));
}
void org$pandalanguage$pandac$pandadoc$Markdown$encodeAmpsAndAngles$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* $tmp2534;
    panda$core$RegularExpression* $tmp2538;
    panda$core$RegularExpression* $tmp2535 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp2535, &$s2536);
    $tmp2534 = $tmp2535;
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_markup, $tmp2534, &$s2537);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2534));
    panda$core$RegularExpression* $tmp2539 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp2539, &$s2540);
    $tmp2538 = $tmp2539;
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_markup, $tmp2538, &$s2541);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2538));
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous31$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* code2545 = NULL;
    panda$core$String* $tmp2546;
    panda$core$Object* $tmp2547;
    panda$core$Int64 $tmp2548;
    panda$core$MutableString* sub2553 = NULL;
    panda$core$MutableString* $tmp2554;
    panda$core$MutableString* $tmp2555;
    panda$core$RegularExpression* $tmp2557;
    panda$core$RegularExpression* $tmp2561;
    panda$core$String* $returnValue2566;
    panda$core$String* $tmp2567;
    panda$core$String* $tmp2568;
    panda$core$String* $tmp2569;
    int $tmp2544;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2548, 2);
        ITable* $tmp2549 = p_groups->$class->itable;
        while ($tmp2549->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2549 = $tmp2549->next;
        }
        $fn2551 $tmp2550 = $tmp2549->methods[0];
        panda$core$Object* $tmp2552 = $tmp2550(p_groups, $tmp2548);
        $tmp2547 = $tmp2552;
        $tmp2546 = ((panda$core$String*) $tmp2547);
        code2545 = $tmp2546;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2546));
        panda$core$Panda$unref$panda$core$Object($tmp2547);
        panda$core$MutableString* $tmp2556 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp2556, code2545);
        $tmp2555 = $tmp2556;
        $tmp2554 = $tmp2555;
        sub2553 = $tmp2554;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2554));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2555));
        panda$core$RegularExpression* $tmp2558 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp2558, &$s2559);
        $tmp2557 = $tmp2558;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(sub2553, $tmp2557, &$s2560);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2557));
        panda$core$RegularExpression* $tmp2562 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp2562, &$s2563);
        $tmp2561 = $tmp2562;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(sub2553, $tmp2561, &$s2564);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2561));
        (($fn2565) self->$class->vtable[18])(self, sub2553);
        panda$core$String* $tmp2571 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2570, ((panda$core$Object*) sub2553));
        $tmp2569 = $tmp2571;
        panda$core$String* $tmp2573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2569, &$s2572);
        $tmp2568 = $tmp2573;
        $tmp2567 = $tmp2568;
        $returnValue2566 = $tmp2567;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2567));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2568));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2569));
        $tmp2544 = 0;
        goto $l2542;
        $l2574:;
        return $returnValue2566;
    }
    $l2542:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) sub2553));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) code2545));
    code2545 = NULL;
    sub2553 = NULL;
    switch ($tmp2544) {
        case 0: goto $l2574;
    }
    $l2576:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim32$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar2580 = NULL;
    panda$core$Method* $tmp2581;
    panda$core$Method* $tmp2582;
    panda$core$Object* $tmp2584;
    panda$core$Object* $tmp2585;
    panda$core$Object* $returnValue2586;
    panda$core$Object* $tmp2587;
    panda$core$String* $tmp2588;
    panda$core$String* $tmp2589;
    int $tmp2579;
    {
        panda$core$Method* $tmp2583 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp2583, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp2582 = $tmp2583;
        $tmp2581 = $tmp2582;
        methodVar2580 = $tmp2581;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2581));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2582));
        {
            $tmp2584 = ((panda$core$MutableMethod*) methodVar2580)->target;
            $tmp2585 = self->target;
            ((panda$core$MutableMethod*) methodVar2580)->target = $tmp2585;
            panda$core$Panda$ref$panda$core$Object($tmp2585);
            panda$core$Panda$unref$panda$core$Object($tmp2584);
        }
        if (methodVar2580->target) {
            $tmp2589 = (($fn2590) methodVar2580->pointer)(methodVar2580->target, p_p0);
        } else {
            $tmp2589 = (($fn2591) methodVar2580->pointer)(p_p0);
        }
        $tmp2588 = $tmp2589;
        $tmp2587 = ((panda$core$Object*) $tmp2588);
        $returnValue2586 = $tmp2587;
        panda$core$Panda$ref$panda$core$Object($tmp2587);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2588));
        $tmp2579 = 0;
        goto $l2577;
        $l2592:;
        return $returnValue2586;
    }
    $l2577:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar2580));
    methodVar2580 = NULL;
    switch ($tmp2579) {
        case 0: goto $l2592;
    }
    $l2594:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doCodeSpans$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* $tmp2595;
    panda$core$RegularExpression* $tmp2596 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp2596, &$s2597);
    $tmp2595 = $tmp2596;
    panda$core$MutableMethod* $tmp2598 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
    panda$core$MutableMethod* $tmp2599 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
    panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2599, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous31$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
    panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2598, (panda$core$Int8*) &panda$core$MutableMethod$$shim32$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp2599)));
    panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, $tmp2595, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp2598)));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2598));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2599));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2595));
}
void org$pandalanguage$pandac$pandadoc$Markdown$cleanup(org$pandalanguage$pandac$pandadoc$Markdown* self) {
    int $tmp2602;
    {
    }
    $tmp2602 = -1;
    goto $l2600;
    $l2600:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2602) {
        case -1: goto $l2603;
    }
    $l2603:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->errorQueue));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parser));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->linkResolver));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->linkDefinitions));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->charProtector));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->htmlProtector));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->random));
}

