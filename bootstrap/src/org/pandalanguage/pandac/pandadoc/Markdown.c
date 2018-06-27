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
typedef panda$core$String* (*$fn421)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$core$String* (*$fn436)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$core$String* (*$fn633)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef void (*$fn642)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn663)(panda$collections$CollectionView*, panda$core$String*);
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
typedef panda$core$Object* (*$fn1624)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1626)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Object* (*$fn1638)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn1662)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1663)(panda$collections$ListView*);
typedef panda$core$Object* (*$fn1678)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1680)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Object* (*$fn1692)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn1716)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1717)(panda$collections$ListView*);
typedef panda$core$Object* (*$fn1730)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1740)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1742)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1794)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1795)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1796)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1797)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1798)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1799)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1800)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1801)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1802)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Bit (*$fn1862)(panda$core$Comparable*, panda$core$Comparable*);
typedef panda$core$Bit (*$fn1889)(panda$core$Comparable*, panda$core$Comparable*);
typedef panda$collections$ListView* (*$fn1912)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1922)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1929)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1940)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1960)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1969)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1978)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1987)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Object* (*$fn2010)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2018)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2026)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn2055)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2066)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Bit (*$fn2079)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn2090)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2101)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2151)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn2152)(panda$collections$ListView*);
typedef panda$core$Object* (*$fn2185)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2193)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2201)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn2228)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2237)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Bit (*$fn2250)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn2259)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2268)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Object* (*$fn2314)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2322)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2330)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn2339)(panda$core$Object*, panda$core$String*);
typedef panda$core$String* (*$fn2340)(panda$core$String*);
typedef void (*$fn2349)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2367)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2378)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2397)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2406)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2445)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn2446)(panda$collections$ListView*);
typedef panda$core$Object* (*$fn2460)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2468)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn2495)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2504)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Bit (*$fn2517)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn2526)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2535)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2569)(panda$core$Object*, panda$core$String*);
typedef panda$core$String* (*$fn2570)(panda$core$String*);
typedef panda$core$Object* (*$fn2664)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2678)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn2703)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn2704)(panda$collections$ListView*);

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
static panda$core$String $s1573 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d\x5c\x7a", 8, 20810277504230859, NULL };
static panda$core$String $s1574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x6e\x29\x3f\x5e\x28\x5b\x20\x5c\x74\x5d\x2a\x29\x28\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b\x28\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x6e\x7b\x31\x2c\x32\x7d\x29\x29\x28\x3f\x3d\x5c\x6e\x2a\x28\x5c\x7a\x7c\x5c\x32\x28\x5b\x2d\x2b\x5c\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5c\x74\x5d\x2b\x29\x29", 86, 9008606742683235904, NULL };
static panda$core$String $s1597 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static panda$core$String $s1608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x6e\x61\x6d\x65\x3d\x22", 9, 1753834143939719502, NULL };
static panda$core$String $s1641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e\x3c\x2f\x61\x3e\x3c\x68\x31\x3e", 10, 751414109755816110, NULL };
static panda$core$String $s1644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x68\x31\x3e", 5, 16803214623, NULL };
static panda$core$String $s1687 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x6e\x61\x6d\x65\x3d\x22", 9, 1753834143939719502, NULL };
static panda$core$String $s1695 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e\x3c\x2f\x61\x3e\x3c\x68\x32\x3e", 10, 751414109755816211, NULL };
static panda$core$String $s1698 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x68\x32\x3e", 5, 16803214724, NULL };
static panda$core$String $s1748 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s1760 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1762 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1765 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f", 2, 16308, NULL };
static panda$core$String $s1768 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x0a", 2, 16473, NULL };
static panda$core$String $s1778 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x3d\x3d\x3d\x3d\x2b\x24", 17, 8644226230150951458, NULL };
static panda$core$String $s1783 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x2d\x2d\x2d\x2d\x2b\x24", 17, 8644226060307728994, NULL };
static panda$core$String $s1790 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x28\x23\x7b\x31\x2c\x36\x7d\x29\x5c\x73\x2a\x28\x2e\x2a\x3f\x29\x5c\x73\x2a\x5c\x31\x3f\x24", 24, 6625741561155563100, NULL };
static panda$core$String $s1805 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x32\x2c\x7d\x5c\x6e", 7, 142480172029377, NULL };
static panda$core$String $s1806 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x62\x72\x20\x2f\x3e\x0a", 8, 14324133278249456, NULL };
static panda$core$String $s1811 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x3c\x5b\x61\x2d\x7a\x2f\x21\x24\x5d\x28\x3f\x3a\x5b\x5e\x3c\x3e\x5d\x7c", 21, -3726567012419943545, NULL };
static panda$core$String $s1822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2a\x3e\x29", 4, 146737487, NULL };
static panda$core$String $s1842 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x73\x3a\x3c\x21\x28\x2d\x2d\x2e\x2a\x3f\x2d\x2d\x5c\x73\x2a\x29\x2b\x3e\x29\x7c\x28\x3f\x73\x3a\x3c\x5c\x3f\x2e\x2a\x3f\x5c\x3f\x3e\x29\x7c", 37, -5883741260455240331, NULL };
static panda$core$String $s1957 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s1959 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s1966 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x60", 1, 197, NULL };
static panda$core$String $s1968 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x60", 1, 197, NULL };
static panda$core$String $s1975 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s1977 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s1984 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s1986 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2033 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2052 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x2a", 3, 1978127, NULL };
static panda$core$String $s2054 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2063 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2065 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2073 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2076 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2087 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x2a", 3, 1978127, NULL };
static panda$core$String $s2089 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2098 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x61\x6c\x74\x3d\x22", 6, 1408049687549, NULL };
static panda$core$String $s2112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x20\x74\x69\x74\x6c\x65\x3d\x22", 9, 1465411637805988408, NULL };
static panda$core$String $s2115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22", 10, -7235316333681816127, NULL };
static panda$core$String $s2125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x3e", 2, 15010, NULL };
static panda$core$String $s2161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x20\x5c\x22\x28\x2e\x2a\x29\x5c\x22\x5c\x5c\x29", 30, 1507772917981139974, NULL };
static panda$core$String $s2162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x74\x69\x74\x6c\x65\x3d\x22\x24\x33\x22\x20\x2f\x3e", 36, -5185982321426610333, NULL };
static panda$core$String $s2165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x5c\x5c\x29", 21, -5830152919387063515, NULL };
static panda$core$String $s2166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x2f\x3e", 25, -7685348581218553223, NULL };
static panda$core$String $s2171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5b\x21\x5d\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d\x29", 38, 3513714089933290343, NULL };
static panda$core$String $s2208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s2227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s2258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, 14383652264361074, NULL };
static panda$core$String $s2277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static panda$core$String $s2289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s2295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };
static panda$core$String $s2345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x72\x72\x6f\x72\x3a\x20\x75\x6e\x61\x62\x6c\x65\x20\x74\x6f\x20\x72\x65\x73\x6f\x6c\x76\x65\x20\x6c\x69\x6e\x6b\x20\x27", 31, 6850877155588619032, NULL };
static panda$core$String $s2347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x65\x72\x72\x6f\x72\x29", 7, 150747842869236, NULL };
static panda$core$String $s2358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x6e\x6f\x20\x6c\x69\x6e\x6b\x20\x72\x65\x73\x6f\x6c\x76\x65\x72\x5d", 18, -5787080662771743994, NULL };
static panda$core$String $s2364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s2366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2377 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static panda$core$String $s2389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2394 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s2396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2413 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x71\x75\x6f\x74\x3b", 6, 1472784484255, NULL };
static panda$core$String $s2415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, 14383652264361074, NULL };
static panda$core$String $s2420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s2422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };
static panda$core$String $s2477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x3f\x5c\x5c\x6e", 7, 204157935605574, NULL };
static panda$core$String $s2478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s2494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2501 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2523 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s2525 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2534 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2542 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, 14383652264361074, NULL };
static panda$core$String $s2544 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2554 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static panda$core$String $s2556 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s2562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };
static panda$core$String $s2578 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s2581 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s2582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s2590 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static panda$core$String $s2592 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e\x3c\x63\x6f\x64\x65\x3e", 8, 14540282526185430, NULL };
static panda$core$String $s2595 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x63\x6f\x64\x65\x3e\x3c\x2f\x61\x3e", 11, -1098056279549389125, NULL };
static panda$core$String $s2602 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x6e\x6f\x20\x6d\x61\x74\x63\x68\x3a", 10, 7838749061877918149, NULL };
static panda$core$String $s2604 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x6e\x6f\x20\x6c\x69\x6e\x6b\x20\x72\x65\x73\x6f\x6c\x76\x65\x72\x29", 18, -7339959284735798157, NULL };
static panda$core$String $s2621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d\x29", 35, 4482227048438022174, NULL };
static panda$core$String $s2627 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d\x5c\x28\x5b\x20\x5c\x74\x5d\x2a\x3c\x3f\x28\x2e\x2a\x3f\x29\x3e\x3f\x5b\x20\x5c\x74\x5d\x2a\x28\x28\x5b\x27\x22\x5d\x29\x28\x2e\x2a\x3f\x29\x5c\x35\x29\x3f\x5c\x29\x29", 52, 2691589156809831866, NULL };
static panda$core$String $s2635 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x5b\x28\x5b\x5e\x5c\x5b\x5c\x5d\x5d\x2b\x29\x5c\x5d\x29", 16, 8227630457021096112, NULL };
static panda$core$String $s2641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x2a\x5c\x5c\x2a\x7c\x5f\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x5b\x2a\x5f\x5d\x2a\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 35, 636172404878895653, NULL };
static panda$core$String $s2642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x74\x72\x6f\x6e\x67\x3e\x24\x32\x3c\x2f\x73\x74\x72\x6f\x6e\x67\x3e", 19, 504491683038092400, NULL };
static panda$core$String $s2645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x2a\x7c\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 26, -4247179954659836315, NULL };
static panda$core$String $s2646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x6d\x3e\x24\x32\x3c\x2f\x65\x6d\x3e", 11, 2723679958089201678, NULL };
static panda$core$String $s2649 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x28\x3f\x21\x23\x3f\x5b\x78\x58\x5d\x3f\x28\x3f\x3a\x5b\x30\x2d\x39\x61\x2d\x66\x41\x2d\x46\x5d\x2b\x7c\x5c\x77\x2b\x29\x3b\x29", 33, -6716186838887255919, NULL };
static panda$core$String $s2650 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s2653 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28\x3f\x21\x5b\x61\x2d\x7a\x41\x2d\x5a\x2f\x3f\x5c\x24\x21\x5d\x29", 18, 6433614010358842861, NULL };
static panda$core$String $s2654 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s2672 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x5b\x20\x5c\x74\x5d\x2b", 7, 207956274426062, NULL };
static panda$core$String $s2673 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2676 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2b\x24", 7, 204157886156304, NULL };
static panda$core$String $s2677 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2683 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x63\x6f\x64\x65\x3e", 6, 1702543554134, NULL };
static panda$core$String $s2685 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x63\x6f\x64\x65\x3e", 7, 171409136343781, NULL };
static panda$core$String $s2710 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3c\x21\x5c\x5c\x29\x28\x60\x2b\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x21\x60\x29\x5c\x31\x28\x3f\x21\x60\x29", 29, 7657757978565690602, NULL };

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
        ITable* $tmp419 = ((panda$collections$CollectionView*) tagsA385)->$class->itable;
        while ($tmp419->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp419 = $tmp419->next;
        }
        $fn421 $tmp420 = $tmp419->methods[2];
        panda$core$String* $tmp422 = $tmp420(((panda$collections$CollectionView*) tagsA385), &$s418);
        $tmp417 = $tmp422;
        $tmp416 = $tmp417;
        alternationA415 = $tmp416;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp416));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp417));
        panda$core$String* $tmp429 = panda$core$String$convert$R$panda$core$String(alternationA415);
        $tmp428 = $tmp429;
        panda$core$String* $tmp431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp428, &$s430);
        $tmp427 = $tmp431;
        ITable* $tmp434 = ((panda$collections$CollectionView*) tagsB409)->$class->itable;
        while ($tmp434->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp434 = $tmp434->next;
        }
        $fn436 $tmp435 = $tmp434->methods[2];
        panda$core$String* $tmp437 = $tmp435(((panda$collections$CollectionView*) tagsB409), &$s433);
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
        ITable* $tmp661 = ((panda$collections$CollectionView*) paragraphs587)->$class->itable;
        while ($tmp661->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp661 = $tmp661->next;
        }
        $fn663 $tmp662 = $tmp661->methods[2];
        panda$core$String* $tmp664 = $tmp662(((panda$collections$CollectionView*) paragraphs587), &$s660);
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
    org$pandalanguage$pandac$pandadoc$Markdown* $tmp1565;
    panda$core$Int64 $tmp1566;
    panda$core$String* list1568 = NULL;
    panda$core$String* $tmp1569;
    panda$core$String* $tmp1570;
    panda$core$RegularExpression* $tmp1571;
    panda$core$RegularExpression* p1576 = NULL;
    panda$core$RegularExpression* $tmp1577;
    panda$core$RegularExpression* $tmp1578;
    panda$core$Int64 $tmp1581;
    panda$core$String* $tmp1582;
    panda$core$String* $tmp1583;
    panda$core$String* $tmp1584;
    org$pandalanguage$pandac$pandadoc$Markdown* $tmp1588;
    panda$core$Int64 $tmp1589;
    panda$core$String* $returnValue1591;
    panda$core$String* $tmp1592;
    int $tmp1564;
    {
        $tmp1565 = self;
        panda$core$Int64$init$builtin_int64(&$tmp1566, 1);
        panda$core$Int64 $tmp1567 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1565->listLevel, $tmp1566);
        $tmp1565->listLevel = $tmp1567;
        panda$core$RegularExpression* $tmp1572 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp1572, &$s1573);
        $tmp1571 = $tmp1572;
        panda$core$String* $tmp1575 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(p_rawList, $tmp1571, &$s1574);
        $tmp1570 = $tmp1575;
        $tmp1569 = $tmp1570;
        list1568 = $tmp1569;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1569));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1570));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1571));
        panda$core$RegularExpression* $tmp1579 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp1581, 1);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1579, &$s1580, $tmp1581);
        $tmp1578 = $tmp1579;
        $tmp1577 = $tmp1578;
        p1576 = $tmp1577;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1577));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1578));
        {
            $tmp1582 = list1568;
            panda$core$MutableMethod* $tmp1585 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
            panda$core$MutableMethod* $tmp1586 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
            panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1586, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous18$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
            panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1585, (panda$core$Int8*) &panda$core$MutableMethod$$shim19$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp1586)));
            panda$core$String* $tmp1587 = panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(list1568, p1576, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1585)));
            $tmp1584 = $tmp1587;
            $tmp1583 = $tmp1584;
            list1568 = $tmp1583;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1583));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1584));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1585));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1586));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1582));
        }
        $tmp1588 = self;
        panda$core$Int64$init$builtin_int64(&$tmp1589, 1);
        panda$core$Int64 $tmp1590 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1588->listLevel, $tmp1589);
        $tmp1588->listLevel = $tmp1590;
        $tmp1592 = list1568;
        $returnValue1591 = $tmp1592;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1592));
        $tmp1564 = 0;
        goto $l1562;
        $l1593:;
        return $returnValue1591;
    }
    $l1562:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1576));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list1568));
    list1568 = NULL;
    p1576 = NULL;
    switch ($tmp1564) {
        case 0: goto $l1593;
    }
    $l1595:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$pandadoc$Markdown$hasParagraphBreak$panda$core$MutableString$R$panda$core$Bit(panda$core$MutableString* p_item) {
    panda$core$Bit $returnValue1596;
    panda$core$Bit $tmp1598 = panda$core$MutableString$contains$panda$core$String$R$panda$core$Bit(p_item, &$s1597);
    $returnValue1596 = $tmp1598;
    return $returnValue1596;
}
panda$core$Bit org$pandalanguage$pandac$pandadoc$Markdown$isEmptyString$panda$core$String$Q$R$panda$core$Bit(panda$core$String* p_leadingLine) {
    panda$core$Bit $returnValue1600;
    panda$core$String* $tmp1603;
    panda$core$Bit $tmp1610;
    bool $tmp1601 = ((panda$core$Bit) { p_leadingLine == NULL }).value;
    if ($tmp1601) goto $l1602;
    $tmp1603 = p_leadingLine;
    panda$core$Bit $tmp1607;
    if (((panda$core$Bit) { $tmp1603 != NULL }).value) goto $l1604; else goto $l1605;
    $l1604:;
    panda$core$Bit $tmp1609 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp1603, &$s1608);
    $tmp1607 = $tmp1609;
    goto $l1606;
    $l1605:;
    panda$core$Bit$init$builtin_bit(&$tmp1610, false);
    $tmp1607 = $tmp1610;
    goto $l1606;
    $l1606:;
    $tmp1601 = $tmp1607.value;
    $l1602:;
    panda$core$Bit $tmp1611 = { $tmp1601 };
    $returnValue1600 = $tmp1611;
    return $returnValue1600;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous20$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$MutableString* result1616 = NULL;
    panda$core$MutableString* $tmp1617;
    panda$core$MutableString* $tmp1618;
    panda$core$Object* $tmp1620;
    panda$core$Int64 $tmp1621;
    panda$core$String* $returnValue1627;
    panda$core$String* $tmp1628;
    panda$core$String* $tmp1629;
    panda$core$String* $tmp1630;
    panda$core$String* $tmp1631;
    panda$core$String* $tmp1632;
    panda$core$Object* $tmp1634;
    panda$core$Int64 $tmp1635;
    int $tmp1615;
    {
        panda$core$MutableString* $tmp1619 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$Int64$init$builtin_int64(&$tmp1621, 1);
        ITable* $tmp1622 = p_groups->$class->itable;
        while ($tmp1622->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1622 = $tmp1622->next;
        }
        $fn1624 $tmp1623 = $tmp1622->methods[0];
        panda$core$Object* $tmp1625 = $tmp1623(p_groups, $tmp1621);
        $tmp1620 = $tmp1625;
        panda$core$MutableString$init$panda$core$String($tmp1619, ((panda$core$String*) $tmp1620));
        $tmp1618 = $tmp1619;
        $tmp1617 = $tmp1618;
        result1616 = $tmp1617;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1617));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1618));
        panda$core$Panda$unref$panda$core$Object($tmp1620);
        (($fn1626) self->$class->vtable[22])(self, result1616);
        panda$core$Int64$init$builtin_int64(&$tmp1635, 1);
        ITable* $tmp1636 = p_groups->$class->itable;
        while ($tmp1636->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1636 = $tmp1636->next;
        }
        $fn1638 $tmp1637 = $tmp1636->methods[0];
        panda$core$Object* $tmp1639 = $tmp1637(p_groups, $tmp1635);
        $tmp1634 = $tmp1639;
        panda$core$String* $tmp1640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1633, ((panda$core$String*) $tmp1634));
        $tmp1632 = $tmp1640;
        panda$core$String* $tmp1642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1632, &$s1641);
        $tmp1631 = $tmp1642;
        panda$core$String* $tmp1643 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1631, ((panda$core$Object*) result1616));
        $tmp1630 = $tmp1643;
        panda$core$String* $tmp1645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1630, &$s1644);
        $tmp1629 = $tmp1645;
        $tmp1628 = $tmp1629;
        $returnValue1627 = $tmp1628;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1628));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1629));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1630));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1631));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1632));
        panda$core$Panda$unref$panda$core$Object($tmp1634);
        $tmp1615 = 0;
        goto $l1613;
        $l1646:;
        return $returnValue1627;
    }
    $l1613:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1616));
    result1616 = NULL;
    switch ($tmp1615) {
        case 0: goto $l1646;
    }
    $l1648:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim21$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar1652 = NULL;
    panda$core$Method* $tmp1653;
    panda$core$Method* $tmp1654;
    panda$core$Object* $tmp1656;
    panda$core$Object* $tmp1657;
    panda$core$Object* $returnValue1658;
    panda$core$Object* $tmp1659;
    panda$core$String* $tmp1660;
    panda$core$String* $tmp1661;
    int $tmp1651;
    {
        panda$core$Method* $tmp1655 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp1655, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp1654 = $tmp1655;
        $tmp1653 = $tmp1654;
        methodVar1652 = $tmp1653;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1653));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1654));
        {
            $tmp1656 = ((panda$core$MutableMethod*) methodVar1652)->target;
            $tmp1657 = self->target;
            ((panda$core$MutableMethod*) methodVar1652)->target = $tmp1657;
            panda$core$Panda$ref$panda$core$Object($tmp1657);
            panda$core$Panda$unref$panda$core$Object($tmp1656);
        }
        if (methodVar1652->target) {
            $tmp1661 = (($fn1662) methodVar1652->pointer)(methodVar1652->target, p_p0);
        } else {
            $tmp1661 = (($fn1663) methodVar1652->pointer)(p_p0);
        }
        $tmp1660 = $tmp1661;
        $tmp1659 = ((panda$core$Object*) $tmp1660);
        $returnValue1658 = $tmp1659;
        panda$core$Panda$ref$panda$core$Object($tmp1659);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1660));
        $tmp1651 = 0;
        goto $l1649;
        $l1664:;
        return $returnValue1658;
    }
    $l1649:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar1652));
    methodVar1652 = NULL;
    switch ($tmp1651) {
        case 0: goto $l1664;
    }
    $l1666:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous22$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$MutableString* result1670 = NULL;
    panda$core$MutableString* $tmp1671;
    panda$core$MutableString* $tmp1672;
    panda$core$Object* $tmp1674;
    panda$core$Int64 $tmp1675;
    panda$core$String* $returnValue1681;
    panda$core$String* $tmp1682;
    panda$core$String* $tmp1683;
    panda$core$String* $tmp1684;
    panda$core$String* $tmp1685;
    panda$core$String* $tmp1686;
    panda$core$Object* $tmp1688;
    panda$core$Int64 $tmp1689;
    int $tmp1669;
    {
        panda$core$MutableString* $tmp1673 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$Int64$init$builtin_int64(&$tmp1675, 1);
        ITable* $tmp1676 = p_groups->$class->itable;
        while ($tmp1676->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1676 = $tmp1676->next;
        }
        $fn1678 $tmp1677 = $tmp1676->methods[0];
        panda$core$Object* $tmp1679 = $tmp1677(p_groups, $tmp1675);
        $tmp1674 = $tmp1679;
        panda$core$MutableString$init$panda$core$String($tmp1673, ((panda$core$String*) $tmp1674));
        $tmp1672 = $tmp1673;
        $tmp1671 = $tmp1672;
        result1670 = $tmp1671;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1671));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1672));
        panda$core$Panda$unref$panda$core$Object($tmp1674);
        (($fn1680) self->$class->vtable[22])(self, result1670);
        panda$core$Int64$init$builtin_int64(&$tmp1689, 1);
        ITable* $tmp1690 = p_groups->$class->itable;
        while ($tmp1690->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1690 = $tmp1690->next;
        }
        $fn1692 $tmp1691 = $tmp1690->methods[0];
        panda$core$Object* $tmp1693 = $tmp1691(p_groups, $tmp1689);
        $tmp1688 = $tmp1693;
        panda$core$String* $tmp1694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1687, ((panda$core$String*) $tmp1688));
        $tmp1686 = $tmp1694;
        panda$core$String* $tmp1696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1686, &$s1695);
        $tmp1685 = $tmp1696;
        panda$core$String* $tmp1697 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1685, ((panda$core$Object*) result1670));
        $tmp1684 = $tmp1697;
        panda$core$String* $tmp1699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1684, &$s1698);
        $tmp1683 = $tmp1699;
        $tmp1682 = $tmp1683;
        $returnValue1681 = $tmp1682;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1682));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1683));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1684));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1685));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1686));
        panda$core$Panda$unref$panda$core$Object($tmp1688);
        $tmp1669 = 0;
        goto $l1667;
        $l1700:;
        return $returnValue1681;
    }
    $l1667:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1670));
    result1670 = NULL;
    switch ($tmp1669) {
        case 0: goto $l1700;
    }
    $l1702:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim23$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar1706 = NULL;
    panda$core$Method* $tmp1707;
    panda$core$Method* $tmp1708;
    panda$core$Object* $tmp1710;
    panda$core$Object* $tmp1711;
    panda$core$Object* $returnValue1712;
    panda$core$Object* $tmp1713;
    panda$core$String* $tmp1714;
    panda$core$String* $tmp1715;
    int $tmp1705;
    {
        panda$core$Method* $tmp1709 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp1709, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp1708 = $tmp1709;
        $tmp1707 = $tmp1708;
        methodVar1706 = $tmp1707;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1707));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1708));
        {
            $tmp1710 = ((panda$core$MutableMethod*) methodVar1706)->target;
            $tmp1711 = self->target;
            ((panda$core$MutableMethod*) methodVar1706)->target = $tmp1711;
            panda$core$Panda$ref$panda$core$Object($tmp1711);
            panda$core$Panda$unref$panda$core$Object($tmp1710);
        }
        if (methodVar1706->target) {
            $tmp1715 = (($fn1716) methodVar1706->pointer)(methodVar1706->target, p_p0);
        } else {
            $tmp1715 = (($fn1717) methodVar1706->pointer)(p_p0);
        }
        $tmp1714 = $tmp1715;
        $tmp1713 = ((panda$core$Object*) $tmp1714);
        $returnValue1712 = $tmp1713;
        panda$core$Panda$ref$panda$core$Object($tmp1713);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1714));
        $tmp1705 = 0;
        goto $l1703;
        $l1718:;
        return $returnValue1712;
    }
    $l1703:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar1706));
    methodVar1706 = NULL;
    switch ($tmp1705) {
        case 0: goto $l1718;
    }
    $l1720:;
    abort();
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous24$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* marker1724 = NULL;
    panda$core$String* $tmp1725;
    panda$core$Object* $tmp1726;
    panda$core$Int64 $tmp1727;
    panda$core$MutableString* heading1732 = NULL;
    panda$core$MutableString* $tmp1733;
    panda$core$MutableString* $tmp1734;
    panda$core$Object* $tmp1736;
    panda$core$Int64 $tmp1737;
    panda$core$Int64 level1743;
    panda$core$String* tag1745 = NULL;
    panda$core$String* $tmp1746;
    panda$core$String* $tmp1747;
    panda$core$Object* $tmp1749;
    panda$core$Object* $returnValue1752;
    panda$core$Object* $tmp1753;
    panda$core$String* $tmp1754;
    panda$core$String* $tmp1755;
    panda$core$String* $tmp1756;
    panda$core$String* $tmp1757;
    panda$core$String* $tmp1758;
    panda$core$String* $tmp1759;
    int $tmp1723;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1727, 1);
        ITable* $tmp1728 = p_groups->$class->itable;
        while ($tmp1728->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1728 = $tmp1728->next;
        }
        $fn1730 $tmp1729 = $tmp1728->methods[0];
        panda$core$Object* $tmp1731 = $tmp1729(p_groups, $tmp1727);
        $tmp1726 = $tmp1731;
        $tmp1725 = ((panda$core$String*) $tmp1726);
        marker1724 = $tmp1725;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1725));
        panda$core$Panda$unref$panda$core$Object($tmp1726);
        panda$core$MutableString* $tmp1735 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$Int64$init$builtin_int64(&$tmp1737, 2);
        ITable* $tmp1738 = p_groups->$class->itable;
        while ($tmp1738->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1738 = $tmp1738->next;
        }
        $fn1740 $tmp1739 = $tmp1738->methods[0];
        panda$core$Object* $tmp1741 = $tmp1739(p_groups, $tmp1737);
        $tmp1736 = $tmp1741;
        panda$core$MutableString$init$panda$core$String($tmp1735, ((panda$core$String*) $tmp1736));
        $tmp1734 = $tmp1735;
        $tmp1733 = $tmp1734;
        heading1732 = $tmp1733;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1733));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1734));
        panda$core$Panda$unref$panda$core$Object($tmp1736);
        (($fn1742) self->$class->vtable[22])(self, heading1732);
        panda$core$Int64 $tmp1744 = panda$core$String$length$R$panda$core$Int64(marker1724);
        level1743 = $tmp1744;
        panda$core$Int64$wrapper* $tmp1750;
        $tmp1750 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp1750->value = level1743;
        $tmp1749 = ((panda$core$Object*) $tmp1750);
        panda$core$String* $tmp1751 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1748, $tmp1749);
        $tmp1747 = $tmp1751;
        $tmp1746 = $tmp1747;
        tag1745 = $tmp1746;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1746));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1747));
        panda$core$Panda$unref$panda$core$Object($tmp1749);
        panda$core$String* $tmp1761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1760, tag1745);
        $tmp1759 = $tmp1761;
        panda$core$String* $tmp1763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1759, &$s1762);
        $tmp1758 = $tmp1763;
        panda$core$String* $tmp1764 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1758, ((panda$core$Object*) heading1732));
        $tmp1757 = $tmp1764;
        panda$core$String* $tmp1766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1757, &$s1765);
        $tmp1756 = $tmp1766;
        panda$core$String* $tmp1767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1756, tag1745);
        $tmp1755 = $tmp1767;
        panda$core$String* $tmp1769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1755, &$s1768);
        $tmp1754 = $tmp1769;
        $tmp1753 = ((panda$core$Object*) $tmp1754);
        $returnValue1752 = $tmp1753;
        panda$core$Panda$ref$panda$core$Object($tmp1753);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1754));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1755));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1756));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1757));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1758));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1759));
        $tmp1723 = 0;
        goto $l1721;
        $l1770:;
        return $returnValue1752;
    }
    $l1721:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tag1745));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) heading1732));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) marker1724));
    marker1724 = NULL;
    heading1732 = NULL;
    tag1745 = NULL;
    switch ($tmp1723) {
        case 0: goto $l1770;
    }
    $l1772:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doHeaders$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* $tmp1776;
    panda$core$RegularExpression* $tmp1781;
    panda$core$RegularExpression* p1786 = NULL;
    panda$core$RegularExpression* $tmp1787;
    panda$core$RegularExpression* $tmp1788;
    panda$core$Int64 $tmp1791;
    int $tmp1775;
    {
        panda$core$RegularExpression* $tmp1777 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp1777, &$s1778);
        $tmp1776 = $tmp1777;
        panda$core$MutableMethod* $tmp1779 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp1780 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1780, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous20$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1779, (panda$core$Int8*) &panda$core$MutableMethod$$shim21$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp1780)));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, $tmp1776, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1779)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1779));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1780));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1776));
        panda$core$RegularExpression* $tmp1782 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp1782, &$s1783);
        $tmp1781 = $tmp1782;
        panda$core$MutableMethod* $tmp1784 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp1785 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1785, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous22$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1784, (panda$core$Int8*) &panda$core$MutableMethod$$shim23$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp1785)));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, $tmp1781, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1784)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1784));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1785));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1781));
        panda$core$RegularExpression* $tmp1789 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp1791, 1);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1789, &$s1790, $tmp1791);
        $tmp1788 = $tmp1789;
        $tmp1787 = $tmp1788;
        p1786 = $tmp1787;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1787));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1788));
        panda$core$MutableMethod* $tmp1792 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1792, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous24$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) self));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, p1786, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1792)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1792));
    }
    $tmp1775 = -1;
    goto $l1773;
    $l1773:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1786));
    p1786 = NULL;
    switch ($tmp1775) {
        case -1: goto $l1793;
    }
    $l1793:;
}
void org$pandalanguage$pandac$pandadoc$Markdown$runSpanGamut$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$core$RegularExpression* $tmp1803;
    (($fn1794) self->$class->vtable[24])(self, p_text);
    (($fn1795) self->$class->vtable[29])(self, p_text);
    (($fn1796) self->$class->vtable[3])(self, p_text);
    (($fn1797) self->$class->vtable[25])(self, p_text);
    (($fn1798) self->$class->vtable[26])(self, p_text);
    (($fn1799) self->$class->vtable[10])(self, p_text);
    (($fn1800) self->$class->vtable[24])(self, p_text);
    (($fn1801) self->$class->vtable[28])(self, p_text);
    (($fn1802) self->$class->vtable[27])(self, p_text);
    panda$core$RegularExpression* $tmp1804 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp1804, &$s1805);
    $tmp1803 = $tmp1804;
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_text, $tmp1803, &$s1806);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1803));
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$nestedTagsRegex$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_depth) {
    panda$core$Int64 $tmp1807;
    panda$core$String* $returnValue1809;
    panda$core$String* $tmp1810;
    panda$core$String* $tmp1813;
    panda$core$String* $tmp1814;
    panda$core$String* $tmp1815;
    panda$core$String* $tmp1817;
    panda$core$Int64 $tmp1818;
    panda$core$Int64$init$builtin_int64(&$tmp1807, 0);
    panda$core$Bit $tmp1808 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_depth, $tmp1807);
    if ($tmp1808.value) {
    {
        $tmp1810 = &$s1811;
        $returnValue1809 = $tmp1810;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1810));
        return $returnValue1809;
    }
    }
    else {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1818, 1);
        panda$core$Int64 $tmp1819 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_depth, $tmp1818);
        panda$core$String* $tmp1820 = org$pandalanguage$pandac$pandadoc$Markdown$nestedTagsRegex$panda$core$Int64$R$panda$core$String($tmp1819);
        $tmp1817 = $tmp1820;
        panda$core$String* $tmp1821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1816, $tmp1817);
        $tmp1815 = $tmp1821;
        panda$core$String* $tmp1823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1815, &$s1822);
        $tmp1814 = $tmp1823;
        $tmp1813 = $tmp1814;
        $returnValue1809 = $tmp1813;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1813));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1814));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1815));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1817));
        return $returnValue1809;
    }
    }
    abort();
}
panda$collections$ListView* org$pandalanguage$pandac$pandadoc$Markdown$tokenizeHTML$panda$core$String$R$panda$collections$ListView$LTorg$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$GT(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$String* p_text) {
    panda$collections$Array* tokens1828 = NULL;
    panda$collections$Array* $tmp1829;
    panda$collections$Array* $tmp1830;
    panda$core$String* nestedTags1832 = NULL;
    panda$core$String* $tmp1833;
    panda$core$String* $tmp1834;
    panda$core$Int64 $tmp1835;
    panda$core$RegularExpression* p1837 = NULL;
    panda$core$RegularExpression* $tmp1838;
    panda$core$RegularExpression* $tmp1839;
    panda$core$String* $tmp1841;
    panda$core$Int64 $tmp1844;
    panda$core$Matcher* m1845 = NULL;
    panda$core$Matcher* $tmp1846;
    panda$core$Matcher* $tmp1847;
    panda$core$String$Index lastPos1849;
    panda$core$Comparable* $tmp1855;
    panda$core$Comparable* $tmp1857;
    panda$core$String$Index $tmp1858;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1864;
    panda$core$Int64 $tmp1866;
    panda$core$String* $tmp1867;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1868;
    panda$core$String$Index $tmp1869;
    panda$core$Bit $tmp1870;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1872;
    panda$core$Int64 $tmp1874;
    panda$core$String* $tmp1875;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1876;
    panda$core$String$Index $tmp1877;
    panda$core$String$Index $tmp1878;
    panda$core$Bit $tmp1879;
    panda$core$String$Index $tmp1881;
    panda$core$Comparable* $tmp1882;
    panda$core$Comparable* $tmp1884;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1891;
    panda$core$Int64 $tmp1893;
    panda$core$String* $tmp1894;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1895;
    panda$core$Bit $tmp1897;
    panda$collections$ListView* $returnValue1899;
    panda$collections$ListView* $tmp1900;
    int $tmp1827;
    {
        panda$collections$Array* $tmp1831 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1831);
        $tmp1830 = $tmp1831;
        $tmp1829 = $tmp1830;
        tokens1828 = $tmp1829;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1829));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1830));
        panda$core$Int64$init$builtin_int64(&$tmp1835, 6);
        panda$core$String* $tmp1836 = org$pandalanguage$pandac$pandadoc$Markdown$nestedTagsRegex$panda$core$Int64$R$panda$core$String($tmp1835);
        $tmp1834 = $tmp1836;
        $tmp1833 = $tmp1834;
        nestedTags1832 = $tmp1833;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1833));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1834));
        panda$core$RegularExpression* $tmp1840 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$String* $tmp1843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1842, nestedTags1832);
        $tmp1841 = $tmp1843;
        panda$core$Int64$init$builtin_int64(&$tmp1844, 2);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1840, $tmp1841, $tmp1844);
        $tmp1839 = $tmp1840;
        $tmp1838 = $tmp1839;
        p1837 = $tmp1838;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1838));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1839));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1841));
        panda$core$Matcher* $tmp1848 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p1837, p_text);
        $tmp1847 = $tmp1848;
        $tmp1846 = $tmp1847;
        m1845 = $tmp1846;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1846));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1847));
        panda$core$String$Index $tmp1850 = panda$core$String$start$R$panda$core$String$Index(p_text);
        lastPos1849 = $tmp1850;
        $l1851:;
        panda$core$Bit $tmp1854 = panda$core$Matcher$find$R$panda$core$Bit(m1845);
        bool $tmp1853 = $tmp1854.value;
        if (!$tmp1853) goto $l1852;
        {
            panda$core$String$Index$wrapper* $tmp1856;
            $tmp1856 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
            $tmp1856->value = lastPos1849;
            $tmp1855 = ((panda$core$Comparable*) $tmp1856);
            panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1858, m1845);
            panda$core$String$Index$wrapper* $tmp1859;
            $tmp1859 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
            $tmp1859->value = $tmp1858;
            $tmp1857 = ((panda$core$Comparable*) $tmp1859);
            ITable* $tmp1860 = $tmp1855->$class->itable;
            while ($tmp1860->$class != (panda$core$Class*) &panda$core$Comparable$class) {
                $tmp1860 = $tmp1860->next;
            }
            $fn1862 $tmp1861 = $tmp1860->methods[1];
            panda$core$Bit $tmp1863 = $tmp1861($tmp1855, $tmp1857);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1857));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1855));
            if ($tmp1863.value) {
            {
                org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1865 = (org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class);
                panda$core$Int64$init$builtin_int64(&$tmp1866, 1);
                panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1869, m1845);
                panda$core$Bit$init$builtin_bit(&$tmp1870, false);
                panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1868, lastPos1849, $tmp1869, $tmp1870);
                panda$core$String* $tmp1871 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(p_text, $tmp1868);
                $tmp1867 = $tmp1871;
                org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String($tmp1865, $tmp1866, $tmp1867);
                $tmp1864 = $tmp1865;
                panda$collections$Array$add$panda$collections$Array$T(tokens1828, ((panda$core$Object*) $tmp1864));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1864));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1867));
            }
            }
            org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1873 = (org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class);
            panda$core$Int64$init$builtin_int64(&$tmp1874, 0);
            panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1877, m1845);
            panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1878, m1845);
            panda$core$Bit$init$builtin_bit(&$tmp1879, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1876, $tmp1877, $tmp1878, $tmp1879);
            panda$core$String* $tmp1880 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(p_text, $tmp1876);
            $tmp1875 = $tmp1880;
            org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String($tmp1873, $tmp1874, $tmp1875);
            $tmp1872 = $tmp1873;
            panda$collections$Array$add$panda$collections$Array$T(tokens1828, ((panda$core$Object*) $tmp1872));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1872));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1875));
            panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1881, m1845);
            lastPos1849 = $tmp1881;
        }
        goto $l1851;
        $l1852:;
        panda$core$String$Index$wrapper* $tmp1883;
        $tmp1883 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
        $tmp1883->value = lastPos1849;
        $tmp1882 = ((panda$core$Comparable*) $tmp1883);
        panda$core$String$Index $tmp1885 = panda$core$String$end$R$panda$core$String$Index(p_text);
        panda$core$String$Index$wrapper* $tmp1886;
        $tmp1886 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
        $tmp1886->value = $tmp1885;
        $tmp1884 = ((panda$core$Comparable*) $tmp1886);
        ITable* $tmp1887 = $tmp1882->$class->itable;
        while ($tmp1887->$class != (panda$core$Class*) &panda$core$Comparable$class) {
            $tmp1887 = $tmp1887->next;
        }
        $fn1889 $tmp1888 = $tmp1887->methods[1];
        panda$core$Bit $tmp1890 = $tmp1888($tmp1882, $tmp1884);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1884));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1882));
        if ($tmp1890.value) {
        {
            org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1892 = (org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class);
            panda$core$Int64$init$builtin_int64(&$tmp1893, 1);
            panda$core$String$Index $tmp1896 = panda$core$String$end$R$panda$core$String$Index(p_text);
            panda$core$Bit$init$builtin_bit(&$tmp1897, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1895, lastPos1849, $tmp1896, $tmp1897);
            panda$core$String* $tmp1898 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(p_text, $tmp1895);
            $tmp1894 = $tmp1898;
            org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String($tmp1892, $tmp1893, $tmp1894);
            $tmp1891 = $tmp1892;
            panda$collections$Array$add$panda$collections$Array$T(tokens1828, ((panda$core$Object*) $tmp1891));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1891));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1894));
        }
        }
        $tmp1900 = ((panda$collections$ListView*) tokens1828);
        $returnValue1899 = $tmp1900;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1900));
        $tmp1827 = 0;
        goto $l1825;
        $l1901:;
        return $returnValue1899;
    }
    $l1825:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1845));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1837));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nestedTags1832));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokens1828));
    tokens1828 = NULL;
    nestedTags1832 = NULL;
    p1837 = NULL;
    m1845 = NULL;
    switch ($tmp1827) {
        case 0: goto $l1901;
    }
    $l1903:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$escapeSpecialCharsWithinTagAttributes$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$collections$ListView* tokens1907 = NULL;
    panda$collections$ListView* $tmp1908;
    panda$collections$ListView* $tmp1909;
    panda$core$String* $tmp1910;
    panda$collections$Iterator* Iter$852$91917 = NULL;
    panda$collections$Iterator* $tmp1918;
    panda$collections$Iterator* $tmp1919;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* token1935 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1936;
    panda$core$Object* $tmp1937;
    panda$core$String* value1942 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $match$854_131946 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1947;
    panda$core$Int64 $tmp1948;
    panda$core$String* text1950 = NULL;
    panda$core$String* $tmp1952;
    panda$core$String* $tmp1953;
    panda$core$String* $tmp1954;
    panda$core$String* $tmp1955;
    panda$core$String* $tmp1956;
    panda$core$String* $tmp1958;
    panda$core$String* $tmp1963;
    panda$core$String* $tmp1964;
    panda$core$String* $tmp1965;
    panda$core$String* $tmp1967;
    panda$core$String* $tmp1972;
    panda$core$String* $tmp1973;
    panda$core$String* $tmp1974;
    panda$core$String* $tmp1976;
    panda$core$String* $tmp1981;
    panda$core$String* $tmp1982;
    panda$core$String* $tmp1983;
    panda$core$String* $tmp1985;
    panda$core$Int64 $tmp1990;
    panda$core$String* text1992 = NULL;
    panda$core$String* $tmp1994;
    panda$core$String* $tmp1995;
    int $tmp1906;
    {
        panda$core$String* $tmp1911 = panda$core$MutableString$convert$R$panda$core$String(p_text);
        $tmp1910 = $tmp1911;
        panda$collections$ListView* $tmp1913 = (($fn1912) self->$class->vtable[23])(self, $tmp1910);
        $tmp1909 = $tmp1913;
        $tmp1908 = $tmp1909;
        tokens1907 = $tmp1908;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1908));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1909));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1910));
        panda$core$MutableString$clear(p_text);
        {
            int $tmp1916;
            {
                ITable* $tmp1920 = ((panda$collections$Iterable*) tokens1907)->$class->itable;
                while ($tmp1920->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1920 = $tmp1920->next;
                }
                $fn1922 $tmp1921 = $tmp1920->methods[0];
                panda$collections$Iterator* $tmp1923 = $tmp1921(((panda$collections$Iterable*) tokens1907));
                $tmp1919 = $tmp1923;
                $tmp1918 = $tmp1919;
                Iter$852$91917 = $tmp1918;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1918));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1919));
                $l1924:;
                ITable* $tmp1927 = Iter$852$91917->$class->itable;
                while ($tmp1927->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1927 = $tmp1927->next;
                }
                $fn1929 $tmp1928 = $tmp1927->methods[0];
                panda$core$Bit $tmp1930 = $tmp1928(Iter$852$91917);
                panda$core$Bit $tmp1931 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1930);
                bool $tmp1926 = $tmp1931.value;
                if (!$tmp1926) goto $l1925;
                {
                    int $tmp1934;
                    {
                        ITable* $tmp1938 = Iter$852$91917->$class->itable;
                        while ($tmp1938->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1938 = $tmp1938->next;
                        }
                        $fn1940 $tmp1939 = $tmp1938->methods[1];
                        panda$core$Object* $tmp1941 = $tmp1939(Iter$852$91917);
                        $tmp1937 = $tmp1941;
                        $tmp1936 = ((org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) $tmp1937);
                        token1935 = $tmp1936;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1936));
                        panda$core$Panda$unref$panda$core$Object($tmp1937);
                        memset(&value1942, 0, sizeof(value1942));
                        int $tmp1945;
                        {
                            $tmp1947 = token1935;
                            $match$854_131946 = $tmp1947;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1947));
                            panda$core$Int64$init$builtin_int64(&$tmp1948, 0);
                            panda$core$Bit $tmp1949 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$854_131946->$rawValue, $tmp1948);
                            if ($tmp1949.value) {
                            {
                                panda$core$String** $tmp1951 = ((panda$core$String**) ((char*) $match$854_131946->$data + 0));
                                text1950 = *$tmp1951;
                                {
                                    $tmp1952 = value1942;
                                    $tmp1953 = text1950;
                                    value1942 = $tmp1953;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1953));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1952));
                                }
                                {
                                    $tmp1954 = value1942;
                                    panda$core$String* $tmp1961 = (($fn1960) self->charProtector->$class->vtable[2])(self->charProtector, &$s1959);
                                    $tmp1958 = $tmp1961;
                                    panda$core$String* $tmp1962 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(value1942, &$s1957, $tmp1958);
                                    $tmp1956 = $tmp1962;
                                    $tmp1955 = $tmp1956;
                                    value1942 = $tmp1955;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1955));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1956));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1958));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1954));
                                }
                                {
                                    $tmp1963 = value1942;
                                    panda$core$String* $tmp1970 = (($fn1969) self->charProtector->$class->vtable[2])(self->charProtector, &$s1968);
                                    $tmp1967 = $tmp1970;
                                    panda$core$String* $tmp1971 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(value1942, &$s1966, $tmp1967);
                                    $tmp1965 = $tmp1971;
                                    $tmp1964 = $tmp1965;
                                    value1942 = $tmp1964;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1964));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1965));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1967));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1963));
                                }
                                {
                                    $tmp1972 = value1942;
                                    panda$core$String* $tmp1979 = (($fn1978) self->charProtector->$class->vtable[2])(self->charProtector, &$s1977);
                                    $tmp1976 = $tmp1979;
                                    panda$core$String* $tmp1980 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(value1942, &$s1975, $tmp1976);
                                    $tmp1974 = $tmp1980;
                                    $tmp1973 = $tmp1974;
                                    value1942 = $tmp1973;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1973));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1974));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1976));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1972));
                                }
                                {
                                    $tmp1981 = value1942;
                                    panda$core$String* $tmp1988 = (($fn1987) self->charProtector->$class->vtable[2])(self->charProtector, &$s1986);
                                    $tmp1985 = $tmp1988;
                                    panda$core$String* $tmp1989 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(value1942, &$s1984, $tmp1985);
                                    $tmp1983 = $tmp1989;
                                    $tmp1982 = $tmp1983;
                                    value1942 = $tmp1982;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1982));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1983));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1985));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1981));
                                }
                            }
                            }
                            else {
                            panda$core$Int64$init$builtin_int64(&$tmp1990, 1);
                            panda$core$Bit $tmp1991 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$854_131946->$rawValue, $tmp1990);
                            if ($tmp1991.value) {
                            {
                                panda$core$String** $tmp1993 = ((panda$core$String**) ((char*) $match$854_131946->$data + 0));
                                text1992 = *$tmp1993;
                                {
                                    $tmp1994 = value1942;
                                    $tmp1995 = text1992;
                                    value1942 = $tmp1995;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1995));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1994));
                                }
                            }
                            }
                            }
                        }
                        $tmp1945 = -1;
                        goto $l1943;
                        $l1943:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1947));
                        switch ($tmp1945) {
                            case -1: goto $l1996;
                        }
                        $l1996:;
                        panda$core$MutableString$append$panda$core$String(p_text, value1942);
                    }
                    $tmp1934 = -1;
                    goto $l1932;
                    $l1932:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value1942));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) token1935));
                    token1935 = NULL;
                    switch ($tmp1934) {
                        case -1: goto $l1997;
                    }
                    $l1997:;
                }
                goto $l1924;
                $l1925:;
            }
            $tmp1916 = -1;
            goto $l1914;
            $l1914:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$852$91917));
            Iter$852$91917 = NULL;
            switch ($tmp1916) {
                case -1: goto $l1998;
            }
            $l1998:;
        }
    }
    $tmp1906 = -1;
    goto $l1904;
    $l1904:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokens1907));
    tokens1907 = NULL;
    switch ($tmp1906) {
        case -1: goto $l1999;
    }
    $l1999:;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous25$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* replacementText2003 = NULL;
    panda$core$String* wholeMatch2004 = NULL;
    panda$core$String* $tmp2005;
    panda$core$Object* $tmp2006;
    panda$core$Int64 $tmp2007;
    panda$core$String* altText2012 = NULL;
    panda$core$String* $tmp2013;
    panda$core$Object* $tmp2014;
    panda$core$Int64 $tmp2015;
    panda$core$String* id2020 = NULL;
    panda$core$String* $tmp2021;
    panda$core$Object* $tmp2022;
    panda$core$Int64 $tmp2023;
    panda$core$String* $tmp2028;
    panda$core$Bit $tmp2035;
    panda$core$String* $tmp2036;
    panda$core$String* $tmp2037;
    org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* defn2038 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp2039;
    panda$core$Object* $tmp2040;
    panda$core$String* url2045 = NULL;
    panda$core$String* $tmp2046;
    panda$core$String* $tmp2047;
    panda$core$String* $tmp2048;
    panda$core$String* $tmp2049;
    panda$core$RegularExpression* $tmp2050;
    panda$core$String* $tmp2053;
    panda$core$String* $tmp2058;
    panda$core$String* $tmp2059;
    panda$core$String* $tmp2060;
    panda$core$RegularExpression* $tmp2061;
    panda$core$String* $tmp2064;
    panda$core$String* title2069 = NULL;
    panda$core$String* $tmp2070;
    panda$core$String* titleTag2071 = NULL;
    panda$core$String* $tmp2072;
    panda$core$String* $tmp2082;
    panda$core$String* $tmp2083;
    panda$core$String* $tmp2084;
    panda$core$RegularExpression* $tmp2085;
    panda$core$String* $tmp2088;
    panda$core$String* $tmp2093;
    panda$core$String* $tmp2094;
    panda$core$String* $tmp2095;
    panda$core$RegularExpression* $tmp2096;
    panda$core$String* $tmp2099;
    panda$core$String* $tmp2104;
    panda$core$String* $tmp2105;
    panda$core$String* $tmp2106;
    panda$core$String* $tmp2107;
    panda$core$String* $tmp2108;
    panda$core$String* $tmp2109;
    panda$core$String* $tmp2117;
    panda$core$String* $tmp2118;
    panda$core$String* $tmp2119;
    panda$core$String* $tmp2120;
    panda$core$String* $tmp2121;
    panda$core$String* $tmp2122;
    panda$core$String* $tmp2131;
    panda$core$String* $tmp2132;
    panda$core$String* $returnValue2133;
    panda$core$String* $tmp2134;
    int $tmp2002;
    {
        memset(&replacementText2003, 0, sizeof(replacementText2003));
        panda$core$Int64$init$builtin_int64(&$tmp2007, 1);
        ITable* $tmp2008 = p_groups->$class->itable;
        while ($tmp2008->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2008 = $tmp2008->next;
        }
        $fn2010 $tmp2009 = $tmp2008->methods[0];
        panda$core$Object* $tmp2011 = $tmp2009(p_groups, $tmp2007);
        $tmp2006 = $tmp2011;
        $tmp2005 = ((panda$core$String*) $tmp2006);
        wholeMatch2004 = $tmp2005;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2005));
        panda$core$Panda$unref$panda$core$Object($tmp2006);
        panda$core$Int64$init$builtin_int64(&$tmp2015, 2);
        ITable* $tmp2016 = p_groups->$class->itable;
        while ($tmp2016->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2016 = $tmp2016->next;
        }
        $fn2018 $tmp2017 = $tmp2016->methods[0];
        panda$core$Object* $tmp2019 = $tmp2017(p_groups, $tmp2015);
        $tmp2014 = $tmp2019;
        $tmp2013 = ((panda$core$String*) $tmp2014);
        altText2012 = $tmp2013;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2013));
        panda$core$Panda$unref$panda$core$Object($tmp2014);
        panda$core$Int64$init$builtin_int64(&$tmp2023, 3);
        ITable* $tmp2024 = p_groups->$class->itable;
        while ($tmp2024->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2024 = $tmp2024->next;
        }
        $fn2026 $tmp2025 = $tmp2024->methods[0];
        panda$core$Object* $tmp2027 = $tmp2025(p_groups, $tmp2023);
        $tmp2022 = $tmp2027;
        $tmp2021 = ((panda$core$String*) $tmp2022);
        id2020 = $tmp2021;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2021));
        panda$core$Panda$unref$panda$core$Object($tmp2022);
        $tmp2028 = id2020;
        panda$core$Bit $tmp2032;
        if (((panda$core$Bit) { $tmp2028 != NULL }).value) goto $l2029; else goto $l2030;
        $l2029:;
        panda$core$Bit $tmp2034 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp2028, &$s2033);
        $tmp2032 = $tmp2034;
        goto $l2031;
        $l2030:;
        panda$core$Bit$init$builtin_bit(&$tmp2035, false);
        $tmp2032 = $tmp2035;
        goto $l2031;
        $l2031:;
        if ($tmp2032.value) {
        {
            {
                $tmp2036 = id2020;
                $tmp2037 = altText2012;
                id2020 = $tmp2037;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2037));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2036));
            }
        }
        }
        panda$core$Object* $tmp2041 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->linkDefinitions, ((panda$collections$Key*) id2020));
        $tmp2040 = $tmp2041;
        $tmp2039 = ((org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) $tmp2040);
        defn2038 = $tmp2039;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2039));
        panda$core$Panda$unref$panda$core$Object($tmp2040);
        if (((panda$core$Bit) { defn2038 != NULL }).value) {
        {
            int $tmp2044;
            {
                $tmp2046 = defn2038->url;
                url2045 = $tmp2046;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2046));
                {
                    $tmp2047 = url2045;
                    panda$core$RegularExpression* $tmp2051 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                    panda$core$RegularExpression$init$panda$core$String($tmp2051, &$s2052);
                    $tmp2050 = $tmp2051;
                    panda$core$String* $tmp2056 = (($fn2055) self->charProtector->$class->vtable[2])(self->charProtector, &$s2054);
                    $tmp2053 = $tmp2056;
                    panda$core$String* $tmp2057 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(url2045, $tmp2050, $tmp2053);
                    $tmp2049 = $tmp2057;
                    $tmp2048 = $tmp2049;
                    url2045 = $tmp2048;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2048));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2049));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2053));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2050));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2047));
                }
                {
                    $tmp2058 = url2045;
                    panda$core$RegularExpression* $tmp2062 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                    panda$core$RegularExpression$init$panda$core$String($tmp2062, &$s2063);
                    $tmp2061 = $tmp2062;
                    panda$core$String* $tmp2067 = (($fn2066) self->charProtector->$class->vtable[2])(self->charProtector, &$s2065);
                    $tmp2064 = $tmp2067;
                    panda$core$String* $tmp2068 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(url2045, $tmp2061, $tmp2064);
                    $tmp2060 = $tmp2068;
                    $tmp2059 = $tmp2060;
                    url2045 = $tmp2059;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2059));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2060));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2064));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2061));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2058));
                }
                $tmp2070 = defn2038->title;
                title2069 = $tmp2070;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2070));
                $tmp2072 = &$s2073;
                titleTag2071 = $tmp2072;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2072));
                bool $tmp2074 = ((panda$core$Bit) { title2069 != NULL }).value;
                if (!$tmp2074) goto $l2075;
                ITable* $tmp2077 = ((panda$core$Equatable*) title2069)->$class->itable;
                while ($tmp2077->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                    $tmp2077 = $tmp2077->next;
                }
                $fn2079 $tmp2078 = $tmp2077->methods[1];
                panda$core$Bit $tmp2080 = $tmp2078(((panda$core$Equatable*) title2069), ((panda$core$Equatable*) &$s2076));
                $tmp2074 = $tmp2080.value;
                $l2075:;
                panda$core$Bit $tmp2081 = { $tmp2074 };
                if ($tmp2081.value) {
                {
                    {
                        $tmp2082 = title2069;
                        panda$core$RegularExpression* $tmp2086 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                        panda$core$RegularExpression$init$panda$core$String($tmp2086, &$s2087);
                        $tmp2085 = $tmp2086;
                        panda$core$String* $tmp2091 = (($fn2090) self->charProtector->$class->vtable[2])(self->charProtector, &$s2089);
                        $tmp2088 = $tmp2091;
                        panda$core$String* $tmp2092 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(title2069, $tmp2085, $tmp2088);
                        $tmp2084 = $tmp2092;
                        $tmp2083 = $tmp2084;
                        title2069 = $tmp2083;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2083));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2084));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2088));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2085));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2082));
                    }
                    {
                        $tmp2093 = title2069;
                        panda$core$RegularExpression* $tmp2097 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                        panda$core$RegularExpression$init$panda$core$String($tmp2097, &$s2098);
                        $tmp2096 = $tmp2097;
                        panda$core$String* $tmp2102 = (($fn2101) self->charProtector->$class->vtable[2])(self->charProtector, &$s2100);
                        $tmp2099 = $tmp2102;
                        panda$core$String* $tmp2103 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(title2069, $tmp2096, $tmp2099);
                        $tmp2095 = $tmp2103;
                        $tmp2094 = $tmp2095;
                        title2069 = $tmp2094;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2094));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2095));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2099));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2096));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2093));
                    }
                    {
                        $tmp2104 = titleTag2071;
                        panda$core$String* $tmp2111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2110, altText2012);
                        $tmp2109 = $tmp2111;
                        panda$core$String* $tmp2113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2109, &$s2112);
                        $tmp2108 = $tmp2113;
                        panda$core$String* $tmp2114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2108, title2069);
                        $tmp2107 = $tmp2114;
                        panda$core$String* $tmp2116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2107, &$s2115);
                        $tmp2106 = $tmp2116;
                        $tmp2105 = $tmp2106;
                        titleTag2071 = $tmp2105;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2105));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2106));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2107));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2108));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2109));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2104));
                    }
                }
                }
                {
                    $tmp2117 = replacementText2003;
                    panda$core$String* $tmp2124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2123, url2045);
                    $tmp2122 = $tmp2124;
                    panda$core$String* $tmp2126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2122, &$s2125);
                    $tmp2121 = $tmp2126;
                    panda$core$String* $tmp2127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2121, titleTag2071);
                    $tmp2120 = $tmp2127;
                    panda$core$String* $tmp2129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2120, &$s2128);
                    $tmp2119 = $tmp2129;
                    $tmp2118 = $tmp2119;
                    replacementText2003 = $tmp2118;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2118));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2119));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2120));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2121));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2122));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2117));
                }
            }
            $tmp2044 = -1;
            goto $l2042;
            $l2042:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) titleTag2071));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) title2069));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) url2045));
            url2045 = NULL;
            title2069 = NULL;
            titleTag2071 = NULL;
            switch ($tmp2044) {
                case -1: goto $l2130;
            }
            $l2130:;
        }
        }
        else {
        {
            {
                $tmp2131 = replacementText2003;
                $tmp2132 = wholeMatch2004;
                replacementText2003 = $tmp2132;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2132));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2131));
            }
        }
        }
        $tmp2134 = replacementText2003;
        $returnValue2133 = $tmp2134;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2134));
        $tmp2002 = 0;
        goto $l2000;
        $l2135:;
        return $returnValue2133;
    }
    $l2000:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defn2038));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) id2020));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) altText2012));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) wholeMatch2004));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) replacementText2003));
    wholeMatch2004 = NULL;
    altText2012 = NULL;
    id2020 = NULL;
    defn2038 = NULL;
    switch ($tmp2002) {
        case 0: goto $l2135;
    }
    $l2137:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim26$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar2141 = NULL;
    panda$core$Method* $tmp2142;
    panda$core$Method* $tmp2143;
    panda$core$Object* $tmp2145;
    panda$core$Object* $tmp2146;
    panda$core$Object* $returnValue2147;
    panda$core$Object* $tmp2148;
    panda$core$String* $tmp2149;
    panda$core$String* $tmp2150;
    int $tmp2140;
    {
        panda$core$Method* $tmp2144 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp2144, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp2143 = $tmp2144;
        $tmp2142 = $tmp2143;
        methodVar2141 = $tmp2142;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2142));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2143));
        {
            $tmp2145 = ((panda$core$MutableMethod*) methodVar2141)->target;
            $tmp2146 = self->target;
            ((panda$core$MutableMethod*) methodVar2141)->target = $tmp2146;
            panda$core$Panda$ref$panda$core$Object($tmp2146);
            panda$core$Panda$unref$panda$core$Object($tmp2145);
        }
        if (methodVar2141->target) {
            $tmp2150 = (($fn2151) methodVar2141->pointer)(methodVar2141->target, p_p0);
        } else {
            $tmp2150 = (($fn2152) methodVar2141->pointer)(p_p0);
        }
        $tmp2149 = $tmp2150;
        $tmp2148 = ((panda$core$Object*) $tmp2149);
        $returnValue2147 = $tmp2148;
        panda$core$Panda$ref$panda$core$Object($tmp2148);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2149));
        $tmp2140 = 0;
        goto $l2138;
        $l2153:;
        return $returnValue2147;
    }
    $l2138:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar2141));
    methodVar2141 = NULL;
    switch ($tmp2140) {
        case 0: goto $l2153;
    }
    $l2155:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doImages$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$core$RegularExpression* $tmp2159;
    panda$core$RegularExpression* $tmp2163;
    panda$core$RegularExpression* imageLink2167 = NULL;
    panda$core$RegularExpression* $tmp2168;
    panda$core$RegularExpression* $tmp2169;
    int $tmp2158;
    {
        panda$core$RegularExpression* $tmp2160 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp2160, &$s2161);
        $tmp2159 = $tmp2160;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_text, $tmp2159, &$s2162);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2159));
        panda$core$RegularExpression* $tmp2164 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp2164, &$s2165);
        $tmp2163 = $tmp2164;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_text, $tmp2163, &$s2166);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2163));
        panda$core$RegularExpression* $tmp2170 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp2170, &$s2171);
        $tmp2169 = $tmp2170;
        $tmp2168 = $tmp2169;
        imageLink2167 = $tmp2168;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2168));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2169));
        panda$core$MutableMethod* $tmp2172 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp2173 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2173, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous25$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2172, (panda$core$Int8*) &panda$core$MutableMethod$$shim26$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp2173)));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_text, imageLink2167, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp2172)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2172));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2173));
    }
    $tmp2158 = -1;
    goto $l2156;
    $l2156:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) imageLink2167));
    imageLink2167 = NULL;
    switch ($tmp2158) {
        case -1: goto $l2174;
    }
    $l2174:;
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous27$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* replacementText2178 = NULL;
    panda$core$String* wholeMatch2179 = NULL;
    panda$core$String* $tmp2180;
    panda$core$Object* $tmp2181;
    panda$core$Int64 $tmp2182;
    panda$core$String* linkText2187 = NULL;
    panda$core$String* $tmp2188;
    panda$core$Object* $tmp2189;
    panda$core$Int64 $tmp2190;
    panda$core$String* id2195 = NULL;
    panda$core$String* $tmp2196;
    panda$core$Object* $tmp2197;
    panda$core$Int64 $tmp2198;
    panda$core$String* $tmp2203;
    panda$core$Bit $tmp2210;
    panda$core$String* $tmp2211;
    panda$core$String* $tmp2212;
    org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* defn2213 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp2214;
    panda$core$Object* $tmp2215;
    panda$core$String* url2220 = NULL;
    panda$core$String* $tmp2221;
    panda$core$String* $tmp2222;
    panda$core$String* $tmp2223;
    panda$core$String* $tmp2224;
    panda$core$String* $tmp2226;
    panda$core$String* $tmp2231;
    panda$core$String* $tmp2232;
    panda$core$String* $tmp2233;
    panda$core$String* $tmp2235;
    panda$core$String* title2240 = NULL;
    panda$core$String* $tmp2241;
    panda$core$String* titleTag2242 = NULL;
    panda$core$String* $tmp2243;
    panda$core$String* $tmp2253;
    panda$core$String* $tmp2254;
    panda$core$String* $tmp2255;
    panda$core$String* $tmp2257;
    panda$core$String* $tmp2262;
    panda$core$String* $tmp2263;
    panda$core$String* $tmp2264;
    panda$core$String* $tmp2266;
    panda$core$String* $tmp2271;
    panda$core$String* $tmp2272;
    panda$core$String* $tmp2273;
    panda$core$String* $tmp2274;
    panda$core$String* $tmp2279;
    panda$core$String* $tmp2280;
    panda$core$String* $tmp2281;
    panda$core$String* $tmp2282;
    panda$core$String* $tmp2283;
    panda$core$String* $tmp2284;
    panda$core$String* $tmp2285;
    panda$core$String* $tmp2286;
    panda$core$String* $tmp2298;
    panda$core$String* $tmp2299;
    panda$core$Object* $returnValue2300;
    panda$core$Object* $tmp2301;
    int $tmp2177;
    {
        memset(&replacementText2178, 0, sizeof(replacementText2178));
        panda$core$Int64$init$builtin_int64(&$tmp2182, 1);
        ITable* $tmp2183 = p_groups->$class->itable;
        while ($tmp2183->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2183 = $tmp2183->next;
        }
        $fn2185 $tmp2184 = $tmp2183->methods[0];
        panda$core$Object* $tmp2186 = $tmp2184(p_groups, $tmp2182);
        $tmp2181 = $tmp2186;
        $tmp2180 = ((panda$core$String*) $tmp2181);
        wholeMatch2179 = $tmp2180;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2180));
        panda$core$Panda$unref$panda$core$Object($tmp2181);
        panda$core$Int64$init$builtin_int64(&$tmp2190, 2);
        ITable* $tmp2191 = p_groups->$class->itable;
        while ($tmp2191->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2191 = $tmp2191->next;
        }
        $fn2193 $tmp2192 = $tmp2191->methods[0];
        panda$core$Object* $tmp2194 = $tmp2192(p_groups, $tmp2190);
        $tmp2189 = $tmp2194;
        $tmp2188 = ((panda$core$String*) $tmp2189);
        linkText2187 = $tmp2188;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2188));
        panda$core$Panda$unref$panda$core$Object($tmp2189);
        panda$core$Int64$init$builtin_int64(&$tmp2198, 3);
        ITable* $tmp2199 = p_groups->$class->itable;
        while ($tmp2199->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2199 = $tmp2199->next;
        }
        $fn2201 $tmp2200 = $tmp2199->methods[0];
        panda$core$Object* $tmp2202 = $tmp2200(p_groups, $tmp2198);
        $tmp2197 = $tmp2202;
        $tmp2196 = ((panda$core$String*) $tmp2197);
        id2195 = $tmp2196;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2196));
        panda$core$Panda$unref$panda$core$Object($tmp2197);
        $tmp2203 = id2195;
        panda$core$Bit $tmp2207;
        if (((panda$core$Bit) { $tmp2203 != NULL }).value) goto $l2204; else goto $l2205;
        $l2204:;
        panda$core$Bit $tmp2209 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp2203, &$s2208);
        $tmp2207 = $tmp2209;
        goto $l2206;
        $l2205:;
        panda$core$Bit$init$builtin_bit(&$tmp2210, false);
        $tmp2207 = $tmp2210;
        goto $l2206;
        $l2206:;
        if ($tmp2207.value) {
        {
            {
                $tmp2211 = id2195;
                $tmp2212 = linkText2187;
                id2195 = $tmp2212;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2212));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2211));
            }
        }
        }
        panda$core$Object* $tmp2216 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->linkDefinitions, ((panda$collections$Key*) id2195));
        $tmp2215 = $tmp2216;
        $tmp2214 = ((org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) $tmp2215);
        defn2213 = $tmp2214;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2214));
        panda$core$Panda$unref$panda$core$Object($tmp2215);
        if (((panda$core$Bit) { defn2213 != NULL }).value) {
        {
            int $tmp2219;
            {
                $tmp2221 = defn2213->url;
                url2220 = $tmp2221;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2221));
                {
                    $tmp2222 = url2220;
                    panda$core$String* $tmp2229 = (($fn2228) self->charProtector->$class->vtable[2])(self->charProtector, &$s2227);
                    $tmp2226 = $tmp2229;
                    panda$core$String* $tmp2230 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(url2220, &$s2225, $tmp2226);
                    $tmp2224 = $tmp2230;
                    $tmp2223 = $tmp2224;
                    url2220 = $tmp2223;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2223));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2224));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2226));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2222));
                }
                {
                    $tmp2231 = url2220;
                    panda$core$String* $tmp2238 = (($fn2237) self->charProtector->$class->vtable[2])(self->charProtector, &$s2236);
                    $tmp2235 = $tmp2238;
                    panda$core$String* $tmp2239 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(url2220, &$s2234, $tmp2235);
                    $tmp2233 = $tmp2239;
                    $tmp2232 = $tmp2233;
                    url2220 = $tmp2232;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2232));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2233));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2235));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2231));
                }
                $tmp2241 = defn2213->title;
                title2240 = $tmp2241;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2241));
                $tmp2243 = &$s2244;
                titleTag2242 = $tmp2243;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2243));
                bool $tmp2245 = ((panda$core$Bit) { title2240 != NULL }).value;
                if (!$tmp2245) goto $l2246;
                ITable* $tmp2248 = ((panda$core$Equatable*) title2240)->$class->itable;
                while ($tmp2248->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                    $tmp2248 = $tmp2248->next;
                }
                $fn2250 $tmp2249 = $tmp2248->methods[1];
                panda$core$Bit $tmp2251 = $tmp2249(((panda$core$Equatable*) title2240), ((panda$core$Equatable*) &$s2247));
                $tmp2245 = $tmp2251.value;
                $l2246:;
                panda$core$Bit $tmp2252 = { $tmp2245 };
                if ($tmp2252.value) {
                {
                    {
                        $tmp2253 = title2240;
                        panda$core$String* $tmp2260 = (($fn2259) self->charProtector->$class->vtable[2])(self->charProtector, &$s2258);
                        $tmp2257 = $tmp2260;
                        panda$core$String* $tmp2261 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2240, &$s2256, $tmp2257);
                        $tmp2255 = $tmp2261;
                        $tmp2254 = $tmp2255;
                        title2240 = $tmp2254;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2254));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2255));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2257));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2253));
                    }
                    {
                        $tmp2262 = title2240;
                        panda$core$String* $tmp2269 = (($fn2268) self->charProtector->$class->vtable[2])(self->charProtector, &$s2267);
                        $tmp2266 = $tmp2269;
                        panda$core$String* $tmp2270 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2240, &$s2265, $tmp2266);
                        $tmp2264 = $tmp2270;
                        $tmp2263 = $tmp2264;
                        title2240 = $tmp2263;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2263));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2264));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2266));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2262));
                    }
                    {
                        $tmp2271 = titleTag2242;
                        panda$core$String* $tmp2276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2275, title2240);
                        $tmp2274 = $tmp2276;
                        panda$core$String* $tmp2278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2274, &$s2277);
                        $tmp2273 = $tmp2278;
                        $tmp2272 = $tmp2273;
                        titleTag2242 = $tmp2272;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2272));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2273));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2274));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2271));
                    }
                }
                }
                {
                    $tmp2279 = replacementText2178;
                    panda$core$String* $tmp2288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2287, url2220);
                    $tmp2286 = $tmp2288;
                    panda$core$String* $tmp2290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2286, &$s2289);
                    $tmp2285 = $tmp2290;
                    panda$core$String* $tmp2291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2285, titleTag2242);
                    $tmp2284 = $tmp2291;
                    panda$core$String* $tmp2293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2284, &$s2292);
                    $tmp2283 = $tmp2293;
                    panda$core$String* $tmp2294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2283, linkText2187);
                    $tmp2282 = $tmp2294;
                    panda$core$String* $tmp2296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2282, &$s2295);
                    $tmp2281 = $tmp2296;
                    $tmp2280 = $tmp2281;
                    replacementText2178 = $tmp2280;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2280));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2281));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2282));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2283));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2284));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2285));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2286));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2279));
                }
            }
            $tmp2219 = -1;
            goto $l2217;
            $l2217:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) titleTag2242));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) title2240));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) url2220));
            url2220 = NULL;
            title2240 = NULL;
            titleTag2242 = NULL;
            switch ($tmp2219) {
                case -1: goto $l2297;
            }
            $l2297:;
        }
        }
        else {
        {
            {
                $tmp2298 = replacementText2178;
                $tmp2299 = wholeMatch2179;
                replacementText2178 = $tmp2299;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2299));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2298));
            }
        }
        }
        $tmp2301 = ((panda$core$Object*) replacementText2178);
        $returnValue2300 = $tmp2301;
        panda$core$Panda$ref$panda$core$Object($tmp2301);
        $tmp2177 = 0;
        goto $l2175;
        $l2302:;
        return $returnValue2300;
    }
    $l2175:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defn2213));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) id2195));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) linkText2187));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) wholeMatch2179));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) replacementText2178));
    wholeMatch2179 = NULL;
    linkText2187 = NULL;
    id2195 = NULL;
    defn2213 = NULL;
    switch ($tmp2177) {
        case 0: goto $l2302;
    }
    $l2304:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous28$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* linkText2308 = NULL;
    panda$core$String* $tmp2309;
    panda$core$Object* $tmp2310;
    panda$core$Int64 $tmp2311;
    panda$core$String* url2316 = NULL;
    panda$core$String* $tmp2317;
    panda$core$Object* $tmp2318;
    panda$core$Int64 $tmp2319;
    panda$core$String* title2324 = NULL;
    panda$core$String* $tmp2325;
    panda$core$Object* $tmp2326;
    panda$core$Int64 $tmp2327;
    panda$core$String* newURL2335 = NULL;
    panda$core$String* $tmp2336;
    panda$core$String* $tmp2337;
    panda$core$String* $tmp2338;
    panda$io$OutputStream* $tmp2341;
    panda$core$String* $tmp2343;
    panda$core$String* $tmp2344;
    panda$core$String* $tmp2350;
    panda$core$String* $tmp2351;
    panda$core$String* $tmp2353;
    panda$core$String* $tmp2354;
    panda$core$String* $tmp2356;
    panda$core$String* $tmp2357;
    panda$core$String* $tmp2359;
    panda$core$String* $tmp2360;
    panda$core$String* $tmp2361;
    panda$core$RegularExpression* $tmp2362;
    panda$core$String* $tmp2365;
    panda$core$String* $tmp2370;
    panda$core$String* $tmp2371;
    panda$core$String* $tmp2372;
    panda$core$RegularExpression* $tmp2373;
    panda$core$String* $tmp2376;
    panda$core$MutableString* result2381 = NULL;
    panda$core$MutableString* $tmp2382;
    panda$core$MutableString* $tmp2383;
    panda$core$String* $tmp2385;
    panda$core$String* $tmp2386;
    panda$core$String* $tmp2391;
    panda$core$String* $tmp2392;
    panda$core$String* $tmp2393;
    panda$core$String* $tmp2395;
    panda$core$String* $tmp2400;
    panda$core$String* $tmp2401;
    panda$core$String* $tmp2402;
    panda$core$String* $tmp2404;
    panda$core$String* $tmp2409;
    panda$core$String* $tmp2410;
    panda$core$String* $tmp2411;
    panda$core$Char8 $tmp2416;
    panda$core$UInt8 $tmp2417;
    panda$core$String* $tmp2418;
    panda$core$String* $tmp2419;
    panda$core$String* $returnValue2425;
    panda$core$String* $tmp2426;
    panda$core$String* $tmp2427;
    int $tmp2307;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2311, 2);
        ITable* $tmp2312 = p_groups->$class->itable;
        while ($tmp2312->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2312 = $tmp2312->next;
        }
        $fn2314 $tmp2313 = $tmp2312->methods[0];
        panda$core$Object* $tmp2315 = $tmp2313(p_groups, $tmp2311);
        $tmp2310 = $tmp2315;
        $tmp2309 = ((panda$core$String*) $tmp2310);
        linkText2308 = $tmp2309;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2309));
        panda$core$Panda$unref$panda$core$Object($tmp2310);
        panda$core$Int64$init$builtin_int64(&$tmp2319, 3);
        ITable* $tmp2320 = p_groups->$class->itable;
        while ($tmp2320->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2320 = $tmp2320->next;
        }
        $fn2322 $tmp2321 = $tmp2320->methods[0];
        panda$core$Object* $tmp2323 = $tmp2321(p_groups, $tmp2319);
        $tmp2318 = $tmp2323;
        $tmp2317 = ((panda$core$String*) $tmp2318);
        url2316 = $tmp2317;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2317));
        panda$core$Panda$unref$panda$core$Object($tmp2318);
        panda$core$Int64$init$builtin_int64(&$tmp2327, 6);
        ITable* $tmp2328 = p_groups->$class->itable;
        while ($tmp2328->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2328 = $tmp2328->next;
        }
        $fn2330 $tmp2329 = $tmp2328->methods[0];
        panda$core$Object* $tmp2331 = $tmp2329(p_groups, $tmp2327);
        $tmp2326 = $tmp2331;
        $tmp2325 = ((panda$core$String*) $tmp2326);
        title2324 = $tmp2325;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2325));
        panda$core$Panda$unref$panda$core$Object($tmp2326);
        if (((panda$core$Bit) { self->linkResolver != NULL }).value) {
        {
            int $tmp2334;
            {
                if (self->linkResolver->target) {
                    $tmp2338 = (($fn2339) self->linkResolver->pointer)(self->linkResolver->target, url2316);
                } else {
                    $tmp2338 = (($fn2340) self->linkResolver->pointer)(url2316);
                }
                $tmp2337 = $tmp2338;
                $tmp2336 = $tmp2337;
                newURL2335 = $tmp2336;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2336));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2337));
                if (((panda$core$Bit) { newURL2335 == NULL }).value) {
                {
                    panda$io$OutputStream* $tmp2342 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                    $tmp2341 = $tmp2342;
                    panda$core$String* $tmp2346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2345, url2316);
                    $tmp2344 = $tmp2346;
                    panda$core$String* $tmp2348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2344, &$s2347);
                    $tmp2343 = $tmp2348;
                    (($fn2349) $tmp2341->$class->vtable[19])($tmp2341, $tmp2343);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2343));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2344));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2341));
                    {
                        $tmp2350 = newURL2335;
                        $tmp2351 = &$s2352;
                        newURL2335 = $tmp2351;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2351));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2350));
                    }
                }
                }
                {
                    $tmp2353 = url2316;
                    $tmp2354 = newURL2335;
                    url2316 = $tmp2354;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2354));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2353));
                }
            }
            $tmp2334 = -1;
            goto $l2332;
            $l2332:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newURL2335));
            newURL2335 = NULL;
            switch ($tmp2334) {
                case -1: goto $l2355;
            }
            $l2355:;
        }
        }
        else {
        {
            {
                $tmp2356 = url2316;
                $tmp2357 = &$s2358;
                url2316 = $tmp2357;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2357));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2356));
            }
        }
        }
        {
            $tmp2359 = url2316;
            panda$core$RegularExpression* $tmp2363 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
            panda$core$RegularExpression$init$panda$core$String($tmp2363, &$s2364);
            $tmp2362 = $tmp2363;
            panda$core$String* $tmp2368 = (($fn2367) self->charProtector->$class->vtable[2])(self->charProtector, &$s2366);
            $tmp2365 = $tmp2368;
            panda$core$String* $tmp2369 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(url2316, $tmp2362, $tmp2365);
            $tmp2361 = $tmp2369;
            $tmp2360 = $tmp2361;
            url2316 = $tmp2360;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2360));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2361));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2365));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2362));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2359));
        }
        {
            $tmp2370 = url2316;
            panda$core$RegularExpression* $tmp2374 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
            panda$core$RegularExpression$init$panda$core$String($tmp2374, &$s2375);
            $tmp2373 = $tmp2374;
            panda$core$String* $tmp2379 = (($fn2378) self->charProtector->$class->vtable[2])(self->charProtector, &$s2377);
            $tmp2376 = $tmp2379;
            panda$core$String* $tmp2380 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(url2316, $tmp2373, $tmp2376);
            $tmp2372 = $tmp2380;
            $tmp2371 = $tmp2372;
            url2316 = $tmp2371;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2371));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2372));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2376));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2373));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2370));
        }
        panda$core$MutableString* $tmp2384 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp2384);
        $tmp2383 = $tmp2384;
        $tmp2382 = $tmp2383;
        result2381 = $tmp2382;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2382));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2383));
        panda$core$String* $tmp2388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2387, url2316);
        $tmp2386 = $tmp2388;
        panda$core$String* $tmp2390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2386, &$s2389);
        $tmp2385 = $tmp2390;
        panda$core$MutableString$append$panda$core$String(result2381, $tmp2385);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2385));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2386));
        if (((panda$core$Bit) { title2324 != NULL }).value) {
        {
            {
                $tmp2391 = title2324;
                panda$core$String* $tmp2398 = (($fn2397) self->charProtector->$class->vtable[2])(self->charProtector, &$s2396);
                $tmp2395 = $tmp2398;
                panda$core$String* $tmp2399 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2324, &$s2394, $tmp2395);
                $tmp2393 = $tmp2399;
                $tmp2392 = $tmp2393;
                title2324 = $tmp2392;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2392));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2393));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2395));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2391));
            }
            {
                $tmp2400 = title2324;
                panda$core$String* $tmp2407 = (($fn2406) self->charProtector->$class->vtable[2])(self->charProtector, &$s2405);
                $tmp2404 = $tmp2407;
                panda$core$String* $tmp2408 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2324, &$s2403, $tmp2404);
                $tmp2402 = $tmp2408;
                $tmp2401 = $tmp2402;
                title2324 = $tmp2401;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2401));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2402));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2404));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2400));
            }
            {
                $tmp2409 = title2324;
                panda$core$String* $tmp2414 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2324, &$s2412, &$s2413);
                $tmp2411 = $tmp2414;
                $tmp2410 = $tmp2411;
                title2324 = $tmp2410;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2410));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2411));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2409));
            }
            panda$core$MutableString$append$panda$core$String(result2381, &$s2415);
            panda$core$MutableString$append$panda$core$String(result2381, title2324);
            panda$core$UInt8$init$builtin_uint8(&$tmp2417, 34);
            panda$core$Char8$init$panda$core$UInt8(&$tmp2416, $tmp2417);
            panda$core$MutableString$append$panda$core$Char8(result2381, $tmp2416);
        }
        }
        panda$core$String* $tmp2421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2420, linkText2308);
        $tmp2419 = $tmp2421;
        panda$core$String* $tmp2423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2419, &$s2422);
        $tmp2418 = $tmp2423;
        panda$core$MutableString$append$panda$core$String(result2381, $tmp2418);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2418));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2419));
        panda$core$MutableString$append$panda$core$String(result2381, &$s2424);
        panda$core$String* $tmp2428 = panda$core$MutableString$convert$R$panda$core$String(result2381);
        $tmp2427 = $tmp2428;
        $tmp2426 = $tmp2427;
        $returnValue2425 = $tmp2426;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2426));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2427));
        $tmp2307 = 0;
        goto $l2305;
        $l2429:;
        return $returnValue2425;
    }
    $l2305:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2381));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) title2324));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) url2316));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) linkText2308));
    linkText2308 = NULL;
    url2316 = NULL;
    title2324 = NULL;
    result2381 = NULL;
    switch ($tmp2307) {
        case 0: goto $l2429;
    }
    $l2431:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim29$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar2435 = NULL;
    panda$core$Method* $tmp2436;
    panda$core$Method* $tmp2437;
    panda$core$Object* $tmp2439;
    panda$core$Object* $tmp2440;
    panda$core$Object* $returnValue2441;
    panda$core$Object* $tmp2442;
    panda$core$String* $tmp2443;
    panda$core$String* $tmp2444;
    int $tmp2434;
    {
        panda$core$Method* $tmp2438 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp2438, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp2437 = $tmp2438;
        $tmp2436 = $tmp2437;
        methodVar2435 = $tmp2436;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2436));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2437));
        {
            $tmp2439 = ((panda$core$MutableMethod*) methodVar2435)->target;
            $tmp2440 = self->target;
            ((panda$core$MutableMethod*) methodVar2435)->target = $tmp2440;
            panda$core$Panda$ref$panda$core$Object($tmp2440);
            panda$core$Panda$unref$panda$core$Object($tmp2439);
        }
        if (methodVar2435->target) {
            $tmp2444 = (($fn2445) methodVar2435->pointer)(methodVar2435->target, p_p0);
        } else {
            $tmp2444 = (($fn2446) methodVar2435->pointer)(p_p0);
        }
        $tmp2443 = $tmp2444;
        $tmp2442 = ((panda$core$Object*) $tmp2443);
        $returnValue2441 = $tmp2442;
        panda$core$Panda$ref$panda$core$Object($tmp2442);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2443));
        $tmp2434 = 0;
        goto $l2432;
        $l2447:;
        return $returnValue2441;
    }
    $l2432:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar2435));
    methodVar2435 = NULL;
    switch ($tmp2434) {
        case 0: goto $l2447;
    }
    $l2449:;
    abort();
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous30$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* replacementText2453 = NULL;
    panda$core$String* wholeMatch2454 = NULL;
    panda$core$String* $tmp2455;
    panda$core$Object* $tmp2456;
    panda$core$Int64 $tmp2457;
    panda$core$String* linkText2462 = NULL;
    panda$core$String* $tmp2463;
    panda$core$Object* $tmp2464;
    panda$core$Int64 $tmp2465;
    panda$core$String* id2470 = NULL;
    panda$core$String* $tmp2471;
    panda$core$String* $tmp2472;
    panda$core$String* $tmp2473;
    panda$core$String* $tmp2474;
    panda$core$RegularExpression* $tmp2475;
    org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* defn2480 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp2481;
    panda$core$Object* $tmp2482;
    panda$core$String* url2487 = NULL;
    panda$core$String* $tmp2488;
    panda$core$String* $tmp2489;
    panda$core$String* $tmp2490;
    panda$core$String* $tmp2491;
    panda$core$String* $tmp2493;
    panda$core$String* $tmp2498;
    panda$core$String* $tmp2499;
    panda$core$String* $tmp2500;
    panda$core$String* $tmp2502;
    panda$core$String* title2507 = NULL;
    panda$core$String* $tmp2508;
    panda$core$String* titleTag2509 = NULL;
    panda$core$String* $tmp2510;
    panda$core$String* $tmp2520;
    panda$core$String* $tmp2521;
    panda$core$String* $tmp2522;
    panda$core$String* $tmp2524;
    panda$core$String* $tmp2529;
    panda$core$String* $tmp2530;
    panda$core$String* $tmp2531;
    panda$core$String* $tmp2533;
    panda$core$String* $tmp2538;
    panda$core$String* $tmp2539;
    panda$core$String* $tmp2540;
    panda$core$String* $tmp2541;
    panda$core$String* $tmp2546;
    panda$core$String* $tmp2547;
    panda$core$String* $tmp2548;
    panda$core$String* $tmp2549;
    panda$core$String* $tmp2550;
    panda$core$String* $tmp2551;
    panda$core$String* $tmp2552;
    panda$core$String* $tmp2553;
    panda$core$String* $tmp2565;
    panda$core$String* $tmp2566;
    panda$core$String* $tmp2567;
    panda$core$String* $tmp2568;
    panda$core$String* escaped2574 = NULL;
    panda$core$String* $tmp2575;
    panda$core$String* $tmp2576;
    panda$core$String* $tmp2577;
    panda$core$String* $tmp2584;
    panda$core$String* $tmp2585;
    panda$core$String* $tmp2586;
    panda$core$String* $tmp2587;
    panda$core$String* $tmp2588;
    panda$core$String* $tmp2589;
    panda$core$String* $tmp2598;
    panda$core$String* $tmp2599;
    panda$core$String* $tmp2600;
    panda$core$String* $tmp2601;
    panda$core$String* $tmp2606;
    panda$core$String* $tmp2607;
    panda$core$Object* $returnValue2609;
    panda$core$Object* $tmp2610;
    int $tmp2452;
    {
        memset(&replacementText2453, 0, sizeof(replacementText2453));
        panda$core$Int64$init$builtin_int64(&$tmp2457, 1);
        ITable* $tmp2458 = p_groups->$class->itable;
        while ($tmp2458->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2458 = $tmp2458->next;
        }
        $fn2460 $tmp2459 = $tmp2458->methods[0];
        panda$core$Object* $tmp2461 = $tmp2459(p_groups, $tmp2457);
        $tmp2456 = $tmp2461;
        $tmp2455 = ((panda$core$String*) $tmp2456);
        wholeMatch2454 = $tmp2455;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2455));
        panda$core$Panda$unref$panda$core$Object($tmp2456);
        panda$core$Int64$init$builtin_int64(&$tmp2465, 2);
        ITable* $tmp2466 = p_groups->$class->itable;
        while ($tmp2466->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2466 = $tmp2466->next;
        }
        $fn2468 $tmp2467 = $tmp2466->methods[0];
        panda$core$Object* $tmp2469 = $tmp2467(p_groups, $tmp2465);
        $tmp2464 = $tmp2469;
        $tmp2463 = ((panda$core$String*) $tmp2464);
        linkText2462 = $tmp2463;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2463));
        panda$core$Panda$unref$panda$core$Object($tmp2464);
        $tmp2471 = linkText2462;
        id2470 = $tmp2471;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2471));
        {
            $tmp2472 = id2470;
            panda$core$RegularExpression* $tmp2476 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
            panda$core$RegularExpression$init$panda$core$String($tmp2476, &$s2477);
            $tmp2475 = $tmp2476;
            panda$core$String* $tmp2479 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(id2470, $tmp2475, &$s2478);
            $tmp2474 = $tmp2479;
            $tmp2473 = $tmp2474;
            id2470 = $tmp2473;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2473));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2474));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2475));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2472));
        }
        panda$core$Object* $tmp2483 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->linkDefinitions, ((panda$collections$Key*) id2470));
        $tmp2482 = $tmp2483;
        $tmp2481 = ((org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) $tmp2482);
        defn2480 = $tmp2481;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2481));
        panda$core$Panda$unref$panda$core$Object($tmp2482);
        if (((panda$core$Bit) { defn2480 != NULL }).value) {
        {
            int $tmp2486;
            {
                $tmp2488 = defn2480->url;
                url2487 = $tmp2488;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2488));
                {
                    $tmp2489 = url2487;
                    panda$core$String* $tmp2496 = (($fn2495) self->charProtector->$class->vtable[2])(self->charProtector, &$s2494);
                    $tmp2493 = $tmp2496;
                    panda$core$String* $tmp2497 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(url2487, &$s2492, $tmp2493);
                    $tmp2491 = $tmp2497;
                    $tmp2490 = $tmp2491;
                    url2487 = $tmp2490;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2490));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2491));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2493));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2489));
                }
                {
                    $tmp2498 = url2487;
                    panda$core$String* $tmp2505 = (($fn2504) self->charProtector->$class->vtable[2])(self->charProtector, &$s2503);
                    $tmp2502 = $tmp2505;
                    panda$core$String* $tmp2506 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(url2487, &$s2501, $tmp2502);
                    $tmp2500 = $tmp2506;
                    $tmp2499 = $tmp2500;
                    url2487 = $tmp2499;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2499));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2500));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2502));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2498));
                }
                $tmp2508 = defn2480->title;
                title2507 = $tmp2508;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2508));
                $tmp2510 = &$s2511;
                titleTag2509 = $tmp2510;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2510));
                bool $tmp2512 = ((panda$core$Bit) { title2507 != NULL }).value;
                if (!$tmp2512) goto $l2513;
                ITable* $tmp2515 = ((panda$core$Equatable*) title2507)->$class->itable;
                while ($tmp2515->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                    $tmp2515 = $tmp2515->next;
                }
                $fn2517 $tmp2516 = $tmp2515->methods[1];
                panda$core$Bit $tmp2518 = $tmp2516(((panda$core$Equatable*) title2507), ((panda$core$Equatable*) &$s2514));
                $tmp2512 = $tmp2518.value;
                $l2513:;
                panda$core$Bit $tmp2519 = { $tmp2512 };
                if ($tmp2519.value) {
                {
                    {
                        $tmp2520 = title2507;
                        panda$core$String* $tmp2527 = (($fn2526) self->charProtector->$class->vtable[2])(self->charProtector, &$s2525);
                        $tmp2524 = $tmp2527;
                        panda$core$String* $tmp2528 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2507, &$s2523, $tmp2524);
                        $tmp2522 = $tmp2528;
                        $tmp2521 = $tmp2522;
                        title2507 = $tmp2521;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2521));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2522));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2524));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2520));
                    }
                    {
                        $tmp2529 = title2507;
                        panda$core$String* $tmp2536 = (($fn2535) self->charProtector->$class->vtable[2])(self->charProtector, &$s2534);
                        $tmp2533 = $tmp2536;
                        panda$core$String* $tmp2537 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2507, &$s2532, $tmp2533);
                        $tmp2531 = $tmp2537;
                        $tmp2530 = $tmp2531;
                        title2507 = $tmp2530;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2530));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2531));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2533));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2529));
                    }
                    {
                        $tmp2538 = titleTag2509;
                        panda$core$String* $tmp2543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2542, title2507);
                        $tmp2541 = $tmp2543;
                        panda$core$String* $tmp2545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2541, &$s2544);
                        $tmp2540 = $tmp2545;
                        $tmp2539 = $tmp2540;
                        titleTag2509 = $tmp2539;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2539));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2540));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2541));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2538));
                    }
                }
                }
                {
                    $tmp2546 = replacementText2453;
                    panda$core$String* $tmp2555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2554, url2487);
                    $tmp2553 = $tmp2555;
                    panda$core$String* $tmp2557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2553, &$s2556);
                    $tmp2552 = $tmp2557;
                    panda$core$String* $tmp2558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2552, titleTag2509);
                    $tmp2551 = $tmp2558;
                    panda$core$String* $tmp2560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2551, &$s2559);
                    $tmp2550 = $tmp2560;
                    panda$core$String* $tmp2561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2550, linkText2462);
                    $tmp2549 = $tmp2561;
                    panda$core$String* $tmp2563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2549, &$s2562);
                    $tmp2548 = $tmp2563;
                    $tmp2547 = $tmp2548;
                    replacementText2453 = $tmp2547;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2547));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2548));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2549));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2550));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2551));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2552));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2553));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2546));
                }
            }
            $tmp2486 = -1;
            goto $l2484;
            $l2484:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) titleTag2509));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) title2507));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) url2487));
            url2487 = NULL;
            title2507 = NULL;
            titleTag2509 = NULL;
            switch ($tmp2486) {
                case -1: goto $l2564;
            }
            $l2564:;
        }
        }
        else {
        {
            if (((panda$core$Bit) { self->linkResolver != NULL }).value) {
            {
                {
                    $tmp2565 = replacementText2453;
                    if (self->linkResolver->target) {
                        $tmp2568 = (($fn2569) self->linkResolver->pointer)(self->linkResolver->target, linkText2462);
                    } else {
                        $tmp2568 = (($fn2570) self->linkResolver->pointer)(linkText2462);
                    }
                    $tmp2567 = $tmp2568;
                    $tmp2566 = $tmp2567;
                    replacementText2453 = $tmp2566;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2566));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2567));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2565));
                }
                if (((panda$core$Bit) { replacementText2453 != NULL }).value) {
                {
                    int $tmp2573;
                    {
                        panda$core$String* $tmp2580 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(linkText2462, &$s2578, &$s2579);
                        $tmp2577 = $tmp2580;
                        panda$core$String* $tmp2583 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp2577, &$s2581, &$s2582);
                        $tmp2576 = $tmp2583;
                        $tmp2575 = $tmp2576;
                        escaped2574 = $tmp2575;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2575));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2576));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2577));
                        {
                            $tmp2584 = replacementText2453;
                            panda$core$String* $tmp2591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2590, replacementText2453);
                            $tmp2589 = $tmp2591;
                            panda$core$String* $tmp2593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2589, &$s2592);
                            $tmp2588 = $tmp2593;
                            panda$core$String* $tmp2594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2588, escaped2574);
                            $tmp2587 = $tmp2594;
                            panda$core$String* $tmp2596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2587, &$s2595);
                            $tmp2586 = $tmp2596;
                            $tmp2585 = $tmp2586;
                            replacementText2453 = $tmp2585;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2585));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2586));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2587));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2588));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2589));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2584));
                        }
                    }
                    $tmp2573 = -1;
                    goto $l2571;
                    $l2571:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escaped2574));
                    escaped2574 = NULL;
                    switch ($tmp2573) {
                        case -1: goto $l2597;
                    }
                    $l2597:;
                }
                }
                else {
                {
                    {
                        $tmp2598 = replacementText2453;
                        panda$core$String* $tmp2603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2602, linkText2462);
                        $tmp2601 = $tmp2603;
                        panda$core$String* $tmp2605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2601, &$s2604);
                        $tmp2600 = $tmp2605;
                        $tmp2599 = $tmp2600;
                        replacementText2453 = $tmp2599;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2599));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2600));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2601));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2598));
                    }
                }
                }
            }
            }
            else {
            {
                {
                    $tmp2606 = replacementText2453;
                    $tmp2607 = &$s2608;
                    replacementText2453 = $tmp2607;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2607));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2606));
                }
            }
            }
        }
        }
        $tmp2610 = ((panda$core$Object*) replacementText2453);
        $returnValue2609 = $tmp2610;
        panda$core$Panda$ref$panda$core$Object($tmp2610);
        $tmp2452 = 0;
        goto $l2450;
        $l2611:;
        return $returnValue2609;
    }
    $l2450:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defn2480));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) id2470));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) linkText2462));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) wholeMatch2454));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) replacementText2453));
    wholeMatch2454 = NULL;
    linkText2462 = NULL;
    id2470 = NULL;
    defn2480 = NULL;
    switch ($tmp2452) {
        case 0: goto $l2611;
    }
    $l2613:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doAnchors$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* internalLink2617 = NULL;
    panda$core$RegularExpression* $tmp2618;
    panda$core$RegularExpression* $tmp2619;
    panda$core$RegularExpression* inlineLink2623 = NULL;
    panda$core$RegularExpression* $tmp2624;
    panda$core$RegularExpression* $tmp2625;
    panda$core$Int64 $tmp2628;
    panda$core$RegularExpression* referenceShortcut2631 = NULL;
    panda$core$RegularExpression* $tmp2632;
    panda$core$RegularExpression* $tmp2633;
    panda$core$Int64 $tmp2636;
    int $tmp2616;
    {
        panda$core$RegularExpression* $tmp2620 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp2620, &$s2621);
        $tmp2619 = $tmp2620;
        $tmp2618 = $tmp2619;
        internalLink2617 = $tmp2618;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2618));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2619));
        panda$core$MutableMethod* $tmp2622 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2622, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous27$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) self));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, internalLink2617, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp2622)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2622));
        panda$core$RegularExpression* $tmp2626 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp2628, 4);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp2626, &$s2627, $tmp2628);
        $tmp2625 = $tmp2626;
        $tmp2624 = $tmp2625;
        inlineLink2623 = $tmp2624;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2624));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2625));
        panda$core$MutableMethod* $tmp2629 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp2630 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2630, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous28$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2629, (panda$core$Int8*) &panda$core$MutableMethod$$shim29$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp2630)));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, inlineLink2623, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp2629)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2629));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2630));
        panda$core$RegularExpression* $tmp2634 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp2636, 4);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp2634, &$s2635, $tmp2636);
        $tmp2633 = $tmp2634;
        $tmp2632 = $tmp2633;
        referenceShortcut2631 = $tmp2632;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2632));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2633));
        panda$core$MutableMethod* $tmp2637 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2637, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous30$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) self));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, referenceShortcut2631, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp2637)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2637));
    }
    $tmp2616 = -1;
    goto $l2614;
    $l2614:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) referenceShortcut2631));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inlineLink2623));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) internalLink2617));
    internalLink2617 = NULL;
    inlineLink2623 = NULL;
    referenceShortcut2631 = NULL;
    switch ($tmp2616) {
        case -1: goto $l2638;
    }
    $l2638:;
}
void org$pandalanguage$pandac$pandadoc$Markdown$doItalicsAndBold$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* $tmp2639;
    panda$core$RegularExpression* $tmp2643;
    panda$core$RegularExpression* $tmp2640 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp2640, &$s2641);
    $tmp2639 = $tmp2640;
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_markup, $tmp2639, &$s2642);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2639));
    panda$core$RegularExpression* $tmp2644 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp2644, &$s2645);
    $tmp2643 = $tmp2644;
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_markup, $tmp2643, &$s2646);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2643));
}
void org$pandalanguage$pandac$pandadoc$Markdown$encodeAmpsAndAngles$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* $tmp2647;
    panda$core$RegularExpression* $tmp2651;
    panda$core$RegularExpression* $tmp2648 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp2648, &$s2649);
    $tmp2647 = $tmp2648;
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_markup, $tmp2647, &$s2650);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2647));
    panda$core$RegularExpression* $tmp2652 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp2652, &$s2653);
    $tmp2651 = $tmp2652;
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_markup, $tmp2651, &$s2654);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2651));
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous31$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* code2658 = NULL;
    panda$core$String* $tmp2659;
    panda$core$Object* $tmp2660;
    panda$core$Int64 $tmp2661;
    panda$core$MutableString* sub2666 = NULL;
    panda$core$MutableString* $tmp2667;
    panda$core$MutableString* $tmp2668;
    panda$core$RegularExpression* $tmp2670;
    panda$core$RegularExpression* $tmp2674;
    panda$core$String* $returnValue2679;
    panda$core$String* $tmp2680;
    panda$core$String* $tmp2681;
    panda$core$String* $tmp2682;
    int $tmp2657;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2661, 2);
        ITable* $tmp2662 = p_groups->$class->itable;
        while ($tmp2662->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2662 = $tmp2662->next;
        }
        $fn2664 $tmp2663 = $tmp2662->methods[0];
        panda$core$Object* $tmp2665 = $tmp2663(p_groups, $tmp2661);
        $tmp2660 = $tmp2665;
        $tmp2659 = ((panda$core$String*) $tmp2660);
        code2658 = $tmp2659;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2659));
        panda$core$Panda$unref$panda$core$Object($tmp2660);
        panda$core$MutableString* $tmp2669 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp2669, code2658);
        $tmp2668 = $tmp2669;
        $tmp2667 = $tmp2668;
        sub2666 = $tmp2667;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2667));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2668));
        panda$core$RegularExpression* $tmp2671 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp2671, &$s2672);
        $tmp2670 = $tmp2671;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(sub2666, $tmp2670, &$s2673);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2670));
        panda$core$RegularExpression* $tmp2675 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp2675, &$s2676);
        $tmp2674 = $tmp2675;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(sub2666, $tmp2674, &$s2677);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2674));
        (($fn2678) self->$class->vtable[18])(self, sub2666);
        panda$core$String* $tmp2684 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2683, ((panda$core$Object*) sub2666));
        $tmp2682 = $tmp2684;
        panda$core$String* $tmp2686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2682, &$s2685);
        $tmp2681 = $tmp2686;
        $tmp2680 = $tmp2681;
        $returnValue2679 = $tmp2680;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2680));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2681));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2682));
        $tmp2657 = 0;
        goto $l2655;
        $l2687:;
        return $returnValue2679;
    }
    $l2655:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) sub2666));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) code2658));
    code2658 = NULL;
    sub2666 = NULL;
    switch ($tmp2657) {
        case 0: goto $l2687;
    }
    $l2689:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim32$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar2693 = NULL;
    panda$core$Method* $tmp2694;
    panda$core$Method* $tmp2695;
    panda$core$Object* $tmp2697;
    panda$core$Object* $tmp2698;
    panda$core$Object* $returnValue2699;
    panda$core$Object* $tmp2700;
    panda$core$String* $tmp2701;
    panda$core$String* $tmp2702;
    int $tmp2692;
    {
        panda$core$Method* $tmp2696 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp2696, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp2695 = $tmp2696;
        $tmp2694 = $tmp2695;
        methodVar2693 = $tmp2694;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2694));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2695));
        {
            $tmp2697 = ((panda$core$MutableMethod*) methodVar2693)->target;
            $tmp2698 = self->target;
            ((panda$core$MutableMethod*) methodVar2693)->target = $tmp2698;
            panda$core$Panda$ref$panda$core$Object($tmp2698);
            panda$core$Panda$unref$panda$core$Object($tmp2697);
        }
        if (methodVar2693->target) {
            $tmp2702 = (($fn2703) methodVar2693->pointer)(methodVar2693->target, p_p0);
        } else {
            $tmp2702 = (($fn2704) methodVar2693->pointer)(p_p0);
        }
        $tmp2701 = $tmp2702;
        $tmp2700 = ((panda$core$Object*) $tmp2701);
        $returnValue2699 = $tmp2700;
        panda$core$Panda$ref$panda$core$Object($tmp2700);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2701));
        $tmp2692 = 0;
        goto $l2690;
        $l2705:;
        return $returnValue2699;
    }
    $l2690:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar2693));
    methodVar2693 = NULL;
    switch ($tmp2692) {
        case 0: goto $l2705;
    }
    $l2707:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doCodeSpans$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* $tmp2708;
    panda$core$RegularExpression* $tmp2709 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp2709, &$s2710);
    $tmp2708 = $tmp2709;
    panda$core$MutableMethod* $tmp2711 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
    panda$core$MutableMethod* $tmp2712 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
    panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2712, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous31$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
    panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2711, (panda$core$Int8*) &panda$core$MutableMethod$$shim32$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp2712)));
    panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, $tmp2708, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp2711)));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2711));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2712));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2708));
}
void org$pandalanguage$pandac$pandadoc$Markdown$cleanup(org$pandalanguage$pandac$pandadoc$Markdown* self) {
    int $tmp2715;
    {
    }
    $tmp2715 = -1;
    goto $l2713;
    $l2713:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2715) {
        case -1: goto $l2716;
    }
    $l2716:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->errorQueue));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parser));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->linkResolver));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->linkDefinitions));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->charProtector));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->htmlProtector));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->random));
}

