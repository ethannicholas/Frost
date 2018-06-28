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
typedef panda$core$Int64 (*$fn610)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn636)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef void (*$fn645)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn666)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$core$Object* (*$fn678)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn684)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn690)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$core$String* (*$fn701)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$core$String* (*$fn732)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn733)(panda$collections$ListView*);
typedef panda$core$Bit (*$fn764)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn775)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn780)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn799)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn806)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn813)(panda$collections$Iterator*);
typedef panda$core$Real64 (*$fn818)(panda$math$Random*);
typedef panda$core$Object* (*$fn852)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn865)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn882)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn892)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Object* (*$fn933)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn972)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn973)(panda$collections$ListView*);
typedef panda$core$String* (*$fn999)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1000)(panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn1037)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1044)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1055)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1125)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1130)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1135)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1140)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1145)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1205)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1228)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1251)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1263)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1270)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Object* (*$fn1282)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1290)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn1314)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$core$Object* (*$fn1354)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1362)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn1386)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$core$Object* (*$fn1513)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1525)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1533)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1534)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1535)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn1560)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1561)(panda$collections$ListView*);
typedef panda$core$Object* (*$fn1627)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1629)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Object* (*$fn1641)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn1665)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1666)(panda$collections$ListView*);
typedef panda$core$Object* (*$fn1681)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1683)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Object* (*$fn1695)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn1719)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1720)(panda$collections$ListView*);
typedef panda$core$Object* (*$fn1733)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn1743)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1745)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1797)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1798)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1799)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1800)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1801)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1802)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1803)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1804)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1805)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Bit (*$fn1865)(panda$core$Comparable*, panda$core$Comparable*);
typedef panda$core$Bit (*$fn1892)(panda$core$Comparable*, panda$core$Comparable*);
typedef panda$collections$ListView* (*$fn1915)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1925)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1932)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1943)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1963)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1972)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1981)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1990)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Object* (*$fn2013)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2021)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2029)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn2058)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2069)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Bit (*$fn2082)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn2093)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2104)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2154)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn2155)(panda$collections$ListView*);
typedef panda$core$Object* (*$fn2188)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2196)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2204)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn2231)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2240)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Bit (*$fn2253)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn2262)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2271)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Object* (*$fn2317)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2325)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2333)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn2342)(panda$core$Object*, panda$core$String*);
typedef panda$core$String* (*$fn2343)(panda$core$String*);
typedef void (*$fn2352)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2370)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2381)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2400)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2409)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2448)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn2449)(panda$collections$ListView*);
typedef panda$core$Object* (*$fn2463)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2471)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn2498)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2507)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Bit (*$fn2520)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn2529)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2538)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn2572)(panda$core$Object*, panda$core$String*);
typedef panda$core$String* (*$fn2573)(panda$core$String*);
typedef panda$core$Object* (*$fn2667)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2681)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn2706)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$String* (*$fn2707)(panda$collections$ListView*);

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
static panda$core$String $s648 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x70\x3e", 3, 1653735, NULL };
static panda$core$String $s650 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x70\x3e", 4, 166369282, NULL };
static panda$core$String $s663 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static panda$core$String $s697 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6c\x74\x6f\x3a", 7, 223949750184005, NULL };
static panda$core$String $s699 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s709 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static panda$core$String $s711 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e", 2, 13697, NULL };
static panda$core$String $s714 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };
static panda$core$String $s742 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28\x28\x68\x74\x74\x70\x73\x3f\x7c\x66\x74\x70\x29\x3a\x5b\x5e\x27\x5c\x22\x3e\x5c\x73\x5d\x2b\x29\x3e", 27, -3769254741412201634, NULL };
static panda$core$String $s743 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22\x24\x31\x22\x3e\x24\x31\x3c\x2f\x61\x3e", 19, -7734359251480494054, NULL };
static panda$core$String $s748 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28\x5b\x2d\x2e\x5c\x77\x5d\x2b\x5c\x40\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x28\x5c\x2e\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x29\x2a\x5c\x2e\x5b\x61\x2d\x7a\x5d\x2b\x29\x3e", 46, 7932002164266535007, NULL };
static panda$core$String $s822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x23", 2, 14074, NULL };
static panda$core$String $s830 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x23\x78", 3, 1421594, NULL };
static panda$core$String $s833 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78", 1, 221, NULL };
static panda$core$String $s854 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x20\x20", 3, 1992459, NULL };
static panda$core$String $s855 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s867 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x20\x20", 3, 1992459, NULL };
static panda$core$String $s868 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s886 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5c\x74\x5d\x2a\x3e\x5b\x20\x5c\x74\x5d\x3f", 18, -7646264414083764081, NULL };
static panda$core$String $s887 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s890 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5c\x74\x5d\x2b\x24", 12, 4609931141593742675, NULL };
static panda$core$String $s891 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s893 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s894 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20", 2, 13465, NULL };
static panda$core$String $s899 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x73\x2a\x3c\x70\x72\x65\x3e\x2e\x2a\x3f\x3c\x2f\x70\x72\x65\x3e\x29", 19, -2639512543099520141, NULL };
static panda$core$String $s906 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x62\x6c\x6f\x63\x6b\x71\x75\x6f\x74\x65\x3e\x0a", 13, -5037006854090612730, NULL };
static panda$core$String $s908 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x3c\x2f\x62\x6c\x6f\x63\x6b\x71\x75\x6f\x74\x65\x3e\x0a\x0a", 16, -5426254764564286611, NULL };
static panda$core$String $s920 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x5e\x5b\x20\x09\x5d\x2a\x3e\x5b\x20\x09\x5d\x3f\x2e\x2b\x5c\x6e\x28\x2e\x2b\x5c\x6e\x29\x2a\x5c\x6e\x2a\x29\x2b\x29", 31, 6066980682886811878, NULL };
static panda$core$String $s979 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2e\x2a\x3f\x29\x5c\x74", 7, 150162241731241, NULL };
static panda$core$String $s984 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x5c\x74\x7c\x5b\x20\x5d\x7b\x31\x2c\x34\x7d\x29", 18, 7461573203115413830, NULL };
static panda$core$String $s985 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1011 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x5c\x6e\x5c\x6e\x7c\x5c\x41\x29\x28\x28\x3f\x3a\x28\x3f\x3a\x5b\x20\x5d\x7b\x34\x7d\x29\x2e\x2a\x5c\x6e\x2b\x29\x2b\x29\x28\x28\x3f\x3d\x5e\x5b\x20\x5d\x7b\x30\x2c\x34\x7d\x5c\x53\x29\x7c\x5c\x5a\x29", 53, -4156959249454615378, NULL };
static panda$core$String $s1025 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x6e\x64\x61\x63\x6f\x64\x65\x22\x3e", 24, -1375153472772145809, NULL };
static panda$core$String $s1063 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s1075 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6d\x6d\x65\x6e\x74\x22\x3e", 22, -1756050522877089685, NULL };
static panda$core$String $s1078 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x22\x3e", 25, 4577563245309187979, NULL };
static panda$core$String $s1081 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x22\x3e", 25, 6760721592980043958, NULL };
static panda$core$String $s1084 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x4e\x61\x6d\x65\x22\x3e", 28, 5111374842590752150, NULL };
static panda$core$String $s1087 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x74\x79\x70\x65\x22\x3e", 19, -6878895466207673670, NULL };
static panda$core$String $s1090 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6b\x65\x79\x77\x6f\x72\x64\x22\x3e", 22, -1670481277391576067, NULL };
static panda$core$String $s1093 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6e\x74\x72\x6f\x6c\x22\x3e", 22, -1756049386432501671, NULL };
static panda$core$String $s1096 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x74\x65\x72\x61\x6c\x22\x3e", 22, -1659229352682266791, NULL };
static panda$core$String $s1099 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x73\x74\x72\x69\x6e\x67\x22\x3e", 21, -198306892965556893, NULL };
static panda$core$String $s1102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6f\x70\x65\x72\x61\x74\x6f\x72\x22\x3e", 23, 1793793249967207580, NULL };
static panda$core$String $s1105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x61\x62\x65\x6c\x22\x3e", 20, 6207823968128210400, NULL };
static panda$core$String $s1109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s1116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s1118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1119 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s1120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x67\x74\x3b", 4, 144274317, NULL };
static panda$core$String $s1122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s1124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s1127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s1129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s1132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5b", 2, 19584, NULL };
static panda$core$String $s1134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5d", 2, 19586, NULL };
static panda$core$String $s1139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s1142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s1144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s1156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22", 13, -8467438715157355368, NULL };
static panda$core$String $s1160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e", 2, 13697, NULL };
static panda$core$String $s1169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s1174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s1175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s1268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x24\x28\x5c\x73\x2a\x29\x5c\x2e\x5c\x2e\x5c\x2e\x28\x5c\x73\x2a\x29\x5e", 22, -7048023396403805866, NULL };
static panda$core$String $s1269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x31\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d\x24\x32", 13, -8807464024981417766, NULL };
static panda$core$String $s1271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d", 9, 1585511400200274083, NULL };
static panda$core$String $s1272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x65\x6c\x6c\x69\x70\x73\x69\x73\x22\x3e\x2e\x2e\x2e\x3c\x2f\x73\x70\x61\x6e\x3e", 33, 5749756206725659630, NULL };
static panda$core$String $s1295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x2a\x2b\x2d\x5d", 5, 20023312915, NULL };
static panda$core$String $s1299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6c", 2, 22126, NULL };
static panda$core$String $s1302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x6c", 2, 21520, NULL };
static panda$core$String $s1308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x6e\x7b\x32\x2c\x7d", 7, 205851892197837, NULL };
static panda$core$String $s1309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a\x0a", 3, 1133331, NULL };
static panda$core$String $s1321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x73\x2b\x24", 5, 20179622579, NULL };
static panda$core$String $s1322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f", 2, 16308, NULL };
static panda$core$String $s1340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x0a", 2, 16473, NULL };
static panda$core$String $s1367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x2a\x2b\x2d\x5d", 5, 20023312915, NULL };
static panda$core$String $s1371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6c", 2, 22126, NULL };
static panda$core$String $s1374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x6c", 2, 21520, NULL };
static panda$core$String $s1380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d", 6, 2040023282445, NULL };
static panda$core$String $s1381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a\x0a", 3, 1133331, NULL };
static panda$core$String $s1396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x0a", 2, 16473, NULL };
static panda$core$String $s1401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f", 2, 16308, NULL };
static panda$core$String $s1404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x0a", 2, 16473, NULL };
static panda$core$String $s1434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x7b\x30\x2c", 6, 2021366306632, NULL };
static panda$core$String $s1441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x29", 18, -3376353325465069725, NULL };
static panda$core$String $s1446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x2b", 4, 198153660, NULL };
static panda$core$String $s1448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x73\x3a\x2e\x2b\x3f\x29", 8, 15185198979096470, NULL };
static panda$core$String $s1452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x7a", 2, 19615, NULL };
static panda$core$String $s1456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d", 6, 2040023282445, NULL };
static panda$core$String $s1460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x53\x29", 6, 1488543771181, NULL };
static panda$core$String $s1462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x21\x5b\x20\x5d\x2a", 7, 150340005652795, NULL };
static panda$core$String $s1464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29", 16, 533168213134719014, NULL };
static panda$core$String $s1466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x2b", 4, 198153660, NULL };
static panda$core$String $s1468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e", 5, 14738541648, NULL };
static panda$core$String $s1487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29\x7c\x5c\x41\x5c\x6e\x3f\x29", 23, 6260301638587013175, NULL };
static panda$core$String $s1540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6c\x69\x3e", 4, 166990836, NULL };
static panda$core$String $s1542 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x6c\x69\x3e\x0a", 6, 1697129369393, NULL };
static panda$core$String $s1576 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d\x5c\x7a", 8, 20810277504230859, NULL };
static panda$core$String $s1577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x6e\x29\x3f\x5e\x28\x5b\x20\x5c\x74\x5d\x2a\x29\x28\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b\x28\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x6e\x7b\x31\x2c\x32\x7d\x29\x29\x28\x3f\x3d\x5c\x6e\x2a\x28\x5c\x7a\x7c\x5c\x32\x28\x5b\x2d\x2b\x5c\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5c\x74\x5d\x2b\x29\x29", 86, 9008606742683235904, NULL };
static panda$core$String $s1600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static panda$core$String $s1611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1636 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x6e\x61\x6d\x65\x3d\x22", 9, 1753834143939719502, NULL };
static panda$core$String $s1644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e\x3c\x2f\x61\x3e\x3c\x68\x31\x3e", 10, 751414109755816110, NULL };
static panda$core$String $s1647 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x68\x31\x3e", 5, 16803214623, NULL };
static panda$core$String $s1690 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x6e\x61\x6d\x65\x3d\x22", 9, 1753834143939719502, NULL };
static panda$core$String $s1698 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e\x3c\x2f\x61\x3e\x3c\x68\x32\x3e", 10, 751414109755816211, NULL };
static panda$core$String $s1701 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x68\x32\x3e", 5, 16803214724, NULL };
static panda$core$String $s1751 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s1763 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1765 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1768 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f", 2, 16308, NULL };
static panda$core$String $s1771 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x0a", 2, 16473, NULL };
static panda$core$String $s1781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x3d\x3d\x3d\x3d\x2b\x24", 17, 8644226230150951458, NULL };
static panda$core$String $s1786 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x2d\x2d\x2d\x2d\x2b\x24", 17, 8644226060307728994, NULL };
static panda$core$String $s1793 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x28\x23\x7b\x31\x2c\x36\x7d\x29\x5c\x73\x2a\x28\x2e\x2a\x3f\x29\x5c\x73\x2a\x5c\x31\x3f\x24", 24, 6625741561155563100, NULL };
static panda$core$String $s1808 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x32\x2c\x7d\x5c\x6e", 7, 142480172029377, NULL };
static panda$core$String $s1809 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x62\x72\x20\x2f\x3e\x0a", 8, 14324133278249456, NULL };
static panda$core$String $s1814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1819 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x3c\x5b\x61\x2d\x7a\x2f\x21\x24\x5d\x28\x3f\x3a\x5b\x5e\x3c\x3e\x5d\x7c", 21, -3726567012419943545, NULL };
static panda$core$String $s1825 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2a\x3e\x29", 4, 146737487, NULL };
static panda$core$String $s1845 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x73\x3a\x3c\x21\x28\x2d\x2d\x2e\x2a\x3f\x2d\x2d\x5c\x73\x2a\x29\x2b\x3e\x29\x7c\x28\x3f\x73\x3a\x3c\x5c\x3f\x2e\x2a\x3f\x5c\x3f\x3e\x29\x7c", 37, -5883741260455240331, NULL };
static panda$core$String $s1960 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s1962 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s1969 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x60", 1, 197, NULL };
static panda$core$String $s1971 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x60", 1, 197, NULL };
static panda$core$String $s1978 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s1980 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s1987 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s1989 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2036 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2055 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x2a", 3, 1978127, NULL };
static panda$core$String $s2057 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2066 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2068 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2076 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2079 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2090 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x2a", 3, 1978127, NULL };
static panda$core$String $s2092 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x61\x6c\x74\x3d\x22", 6, 1408049687549, NULL };
static panda$core$String $s2115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x20\x74\x69\x74\x6c\x65\x3d\x22", 9, 1465411637805988408, NULL };
static panda$core$String $s2118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22", 10, -7235316333681816127, NULL };
static panda$core$String $s2128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x3e", 2, 15010, NULL };
static panda$core$String $s2164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x20\x5c\x22\x28\x2e\x2a\x29\x5c\x22\x5c\x5c\x29", 30, 1507772917981139974, NULL };
static panda$core$String $s2165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x74\x69\x74\x6c\x65\x3d\x22\x24\x33\x22\x20\x2f\x3e", 36, -5185982321426610333, NULL };
static panda$core$String $s2168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x5c\x5c\x29", 21, -5830152919387063515, NULL };
static panda$core$String $s2169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x2f\x3e", 25, -7685348581218553223, NULL };
static panda$core$String $s2174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5b\x21\x5d\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d\x29", 38, 3513714089933290343, NULL };
static panda$core$String $s2211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s2230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s2261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, 14383652264361074, NULL };
static panda$core$String $s2280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static panda$core$String $s2292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s2298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };
static panda$core$String $s2348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x72\x72\x6f\x72\x3a\x20\x75\x6e\x61\x62\x6c\x65\x20\x74\x6f\x20\x72\x65\x73\x6f\x6c\x76\x65\x20\x6c\x69\x6e\x6b\x20\x27", 31, 6850877155588619032, NULL };
static panda$core$String $s2350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x65\x72\x72\x6f\x72\x29", 7, 150747842869236, NULL };
static panda$core$String $s2361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x6e\x6f\x20\x6c\x69\x6e\x6b\x20\x72\x65\x73\x6f\x6c\x76\x65\x72\x5d", 18, -5787080662771743994, NULL };
static panda$core$String $s2367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s2369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static panda$core$String $s2392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s2399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2416 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x71\x75\x6f\x74\x3b", 6, 1472784484255, NULL };
static panda$core$String $s2418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, 14383652264361074, NULL };
static panda$core$String $s2423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s2425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };
static panda$core$String $s2480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x3f\x5c\x5c\x6e", 7, 204157935605574, NULL };
static panda$core$String $s2481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s2497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2504 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2517 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s2528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2537 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s2545 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, 14383652264361074, NULL };
static panda$core$String $s2547 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2557 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static panda$core$String $s2559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s2562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s2565 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };
static panda$core$String $s2581 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s2584 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s2585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s2593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static panda$core$String $s2595 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e\x3c\x63\x6f\x64\x65\x3e", 8, 14540282526185430, NULL };
static panda$core$String $s2598 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x63\x6f\x64\x65\x3e\x3c\x2f\x61\x3e", 11, -1098056279549389125, NULL };
static panda$core$String $s2605 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x6e\x6f\x20\x6d\x61\x74\x63\x68\x3a", 10, 7838749061877918149, NULL };
static panda$core$String $s2607 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x6e\x6f\x20\x6c\x69\x6e\x6b\x20\x72\x65\x73\x6f\x6c\x76\x65\x72\x29", 18, -7339959284735798157, NULL };
static panda$core$String $s2624 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d\x29", 35, 4482227048438022174, NULL };
static panda$core$String $s2630 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d\x5c\x28\x5b\x20\x5c\x74\x5d\x2a\x3c\x3f\x28\x2e\x2a\x3f\x29\x3e\x3f\x5b\x20\x5c\x74\x5d\x2a\x28\x28\x5b\x27\x22\x5d\x29\x28\x2e\x2a\x3f\x29\x5c\x35\x29\x3f\x5c\x29\x29", 52, 2691589156809831866, NULL };
static panda$core$String $s2638 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x5b\x28\x5b\x5e\x5c\x5b\x5c\x5d\x5d\x2b\x29\x5c\x5d\x29", 16, 8227630457021096112, NULL };
static panda$core$String $s2644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x2a\x5c\x5c\x2a\x7c\x5f\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x5b\x2a\x5f\x5d\x2a\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 35, 636172404878895653, NULL };
static panda$core$String $s2645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x74\x72\x6f\x6e\x67\x3e\x24\x32\x3c\x2f\x73\x74\x72\x6f\x6e\x67\x3e", 19, 504491683038092400, NULL };
static panda$core$String $s2648 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x2a\x7c\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 26, -4247179954659836315, NULL };
static panda$core$String $s2649 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x6d\x3e\x24\x32\x3c\x2f\x65\x6d\x3e", 11, 2723679958089201678, NULL };
static panda$core$String $s2652 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x28\x3f\x21\x23\x3f\x5b\x78\x58\x5d\x3f\x28\x3f\x3a\x5b\x30\x2d\x39\x61\x2d\x66\x41\x2d\x46\x5d\x2b\x7c\x5c\x77\x2b\x29\x3b\x29", 33, -6716186838887255919, NULL };
static panda$core$String $s2653 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s2656 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28\x3f\x21\x5b\x61\x2d\x7a\x41\x2d\x5a\x2f\x3f\x5c\x24\x21\x5d\x29", 18, 6433614010358842861, NULL };
static panda$core$String $s2657 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s2675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x5b\x20\x5c\x74\x5d\x2b", 7, 207956274426062, NULL };
static panda$core$String $s2676 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2679 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2b\x24", 7, 204157886156304, NULL };
static panda$core$String $s2680 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2686 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x63\x6f\x64\x65\x3e", 6, 1702543554134, NULL };
static panda$core$String $s2688 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x63\x6f\x64\x65\x3e", 7, 171409136343781, NULL };
static panda$core$String $s2713 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3c\x21\x5c\x5c\x29\x28\x60\x2b\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x21\x60\x29\x5c\x31\x28\x3f\x21\x60\x29", 29, 7657757978565690602, NULL };

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
    panda$collections$Array* $tmp599;
    panda$core$String* $tmp600;
    panda$core$RegularExpression* $tmp602;
    panda$core$Range$LTpanda$core$Int64$GT $tmp606;
    panda$core$Int64 $tmp607;
    panda$core$Bit $tmp612;
    panda$core$String* paragraph629 = NULL;
    panda$core$String* $tmp630;
    panda$core$Object* $tmp631;
    panda$core$String* decoded633 = NULL;
    panda$core$String* $tmp634;
    panda$core$String* $tmp635;
    panda$core$MutableString* mutable641 = NULL;
    panda$core$MutableString* $tmp642;
    panda$core$MutableString* $tmp643;
    panda$core$String* $tmp646;
    panda$core$String* $tmp647;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp660;
    panda$core$Bit $tmp661;
    panda$core$String* $tmp662;
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
                panda$collections$Array* $tmp605 = panda$core$String$split$panda$core$RegularExpression$R$panda$collections$Array$LTpanda$core$String$GT($tmp600, $tmp602);
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
        ITable* $tmp608 = ((panda$collections$CollectionView*) paragraphs587)->$class->itable;
        while ($tmp608->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp608 = $tmp608->next;
        }
        $fn610 $tmp609 = $tmp608->methods[0];
        panda$core$Int64 $tmp611 = $tmp609(((panda$collections$CollectionView*) paragraphs587));
        panda$core$Bit$init$builtin_bit(&$tmp612, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp606, $tmp607, $tmp611, $tmp612);
        int64_t $tmp614 = $tmp606.min.value;
        panda$core$Int64 i613 = { $tmp614 };
        int64_t $tmp616 = $tmp606.max.value;
        bool $tmp617 = $tmp606.inclusive.value;
        if ($tmp617) goto $l624; else goto $l625;
        $l624:;
        if ($tmp614 <= $tmp616) goto $l618; else goto $l620;
        $l625:;
        if ($tmp614 < $tmp616) goto $l618; else goto $l620;
        $l618:;
        {
            int $tmp628;
            {
                panda$core$Object* $tmp632 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(paragraphs587, i613);
                $tmp631 = $tmp632;
                $tmp630 = ((panda$core$String*) $tmp631);
                paragraph629 = $tmp630;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp630));
                panda$core$Panda$unref$panda$core$Object($tmp631);
                panda$core$String* $tmp637 = (($fn636) self->htmlProtector->$class->vtable[3])(self->htmlProtector, paragraph629);
                $tmp635 = $tmp637;
                $tmp634 = $tmp635;
                decoded633 = $tmp634;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp634));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp635));
                if (((panda$core$Bit) { decoded633 != NULL }).value) {
                {
                    panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(paragraphs587, i613, ((panda$core$Object*) decoded633));
                }
                }
                else {
                {
                    int $tmp640;
                    {
                        panda$core$MutableString* $tmp644 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                        panda$core$MutableString$init$panda$core$String($tmp644, paragraph629);
                        $tmp643 = $tmp644;
                        $tmp642 = $tmp643;
                        mutable641 = $tmp642;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp642));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp643));
                        (($fn645) self->$class->vtable[22])(self, mutable641);
                        panda$core$String* $tmp649 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s648, ((panda$core$Object*) mutable641));
                        $tmp647 = $tmp649;
                        panda$core$String* $tmp651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp647, &$s650);
                        $tmp646 = $tmp651;
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(paragraphs587, i613, ((panda$core$Object*) $tmp646));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp646));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp647));
                    }
                    $tmp640 = -1;
                    goto $l638;
                    $l638:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) mutable641));
                    mutable641 = NULL;
                    switch ($tmp640) {
                        case -1: goto $l652;
                    }
                    $l652:;
                }
                }
            }
            $tmp628 = -1;
            goto $l626;
            $l626:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decoded633));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) paragraph629));
            paragraph629 = NULL;
            decoded633 = NULL;
            switch ($tmp628) {
                case -1: goto $l653;
            }
            $l653:;
        }
        $l621:;
        int64_t $tmp655 = $tmp616 - i613.value;
        if ($tmp617) goto $l656; else goto $l657;
        $l656:;
        if ((uint64_t) $tmp655 >= 1) goto $l654; else goto $l620;
        $l657:;
        if ((uint64_t) $tmp655 > 1) goto $l654; else goto $l620;
        $l654:;
        i613.value += 1;
        goto $l618;
        $l620:;
        panda$core$Bit$init$builtin_bit(&$tmp661, false);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp660, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp661);
        ITable* $tmp664 = ((panda$collections$CollectionView*) paragraphs587)->$class->itable;
        while ($tmp664->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp664 = $tmp664->next;
        }
        $fn666 $tmp665 = $tmp664->methods[2];
        panda$core$String* $tmp667 = $tmp665(((panda$collections$CollectionView*) paragraphs587), &$s663);
        $tmp662 = $tmp667;
        panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$core$String(p_markup, $tmp660, $tmp662);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp662));
    }
    $tmp578 = -1;
    goto $l576;
    $l576:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) paragraphs587));
    switch ($tmp578) {
        case -1: goto $l668;
    }
    $l668:;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous8$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* address672 = NULL;
    panda$core$String* $tmp673;
    panda$core$Object* $tmp674;
    panda$core$Int64 $tmp675;
    panda$core$MutableString* ed680 = NULL;
    panda$core$MutableString* $tmp681;
    panda$core$MutableString* $tmp682;
    panda$core$String* addr685 = NULL;
    panda$core$String* $tmp686;
    panda$core$String* $tmp687;
    panda$core$String* $tmp688;
    panda$core$String* url692 = NULL;
    panda$core$String* $tmp693;
    panda$core$String* $tmp694;
    panda$core$String* $tmp695;
    panda$core$String* $tmp696;
    panda$core$String* $returnValue703;
    panda$core$String* $tmp704;
    panda$core$String* $tmp705;
    panda$core$String* $tmp706;
    panda$core$String* $tmp707;
    panda$core$String* $tmp708;
    int $tmp671;
    {
        panda$core$Int64$init$builtin_int64(&$tmp675, 1);
        ITable* $tmp676 = p_groups->$class->itable;
        while ($tmp676->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp676 = $tmp676->next;
        }
        $fn678 $tmp677 = $tmp676->methods[0];
        panda$core$Object* $tmp679 = $tmp677(p_groups, $tmp675);
        $tmp674 = $tmp679;
        $tmp673 = ((panda$core$String*) $tmp674);
        address672 = $tmp673;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp673));
        panda$core$Panda$unref$panda$core$Object($tmp674);
        panda$core$MutableString* $tmp683 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp683, address672);
        $tmp682 = $tmp683;
        $tmp681 = $tmp682;
        ed680 = $tmp681;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp681));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp682));
        (($fn684) self->$class->vtable[11])(self, ed680);
        panda$core$String* $tmp689 = panda$core$MutableString$convert$R$panda$core$String(ed680);
        $tmp688 = $tmp689;
        panda$core$String* $tmp691 = (($fn690) self->$class->vtable[12])(self, $tmp688);
        $tmp687 = $tmp691;
        $tmp686 = $tmp687;
        addr685 = $tmp686;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp686));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp687));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp688));
        panda$core$String* $tmp698 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s697, ((panda$core$Object*) ed680));
        $tmp696 = $tmp698;
        panda$core$String* $tmp700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp696, &$s699);
        $tmp695 = $tmp700;
        panda$core$String* $tmp702 = (($fn701) self->$class->vtable[12])(self, $tmp695);
        $tmp694 = $tmp702;
        $tmp693 = $tmp694;
        url692 = $tmp693;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp693));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp694));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp695));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp696));
        panda$core$String* $tmp710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s709, url692);
        $tmp708 = $tmp710;
        panda$core$String* $tmp712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp708, &$s711);
        $tmp707 = $tmp712;
        panda$core$String* $tmp713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp707, addr685);
        $tmp706 = $tmp713;
        panda$core$String* $tmp715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp706, &$s714);
        $tmp705 = $tmp715;
        $tmp704 = $tmp705;
        $returnValue703 = $tmp704;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp704));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp705));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp706));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp707));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp708));
        $tmp671 = 0;
        goto $l669;
        $l716:;
        return $returnValue703;
    }
    $l669:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) url692));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) addr685));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ed680));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) address672));
    address672 = NULL;
    ed680 = NULL;
    addr685 = NULL;
    url692 = NULL;
    switch ($tmp671) {
        case 0: goto $l716;
    }
    $l718:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim9$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar722 = NULL;
    panda$core$Method* $tmp723;
    panda$core$Method* $tmp724;
    panda$core$Object* $tmp726;
    panda$core$Object* $tmp727;
    panda$core$Object* $returnValue728;
    panda$core$Object* $tmp729;
    panda$core$String* $tmp730;
    panda$core$String* $tmp731;
    int $tmp721;
    {
        panda$core$Method* $tmp725 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp725, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp724 = $tmp725;
        $tmp723 = $tmp724;
        methodVar722 = $tmp723;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp723));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp724));
        {
            $tmp726 = ((panda$core$MutableMethod*) methodVar722)->target;
            $tmp727 = self->target;
            ((panda$core$MutableMethod*) methodVar722)->target = $tmp727;
            panda$core$Panda$ref$panda$core$Object($tmp727);
            panda$core$Panda$unref$panda$core$Object($tmp726);
        }
        if (methodVar722->target) {
            $tmp731 = (($fn732) methodVar722->pointer)(methodVar722->target, p_p0);
        } else {
            $tmp731 = (($fn733) methodVar722->pointer)(p_p0);
        }
        $tmp730 = $tmp731;
        $tmp729 = ((panda$core$Object*) $tmp730);
        $returnValue728 = $tmp729;
        panda$core$Panda$ref$panda$core$Object($tmp729);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp730));
        $tmp721 = 0;
        goto $l719;
        $l734:;
        return $returnValue728;
    }
    $l719:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar722));
    methodVar722 = NULL;
    switch ($tmp721) {
        case 0: goto $l734;
    }
    $l736:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doAutoLinks$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* $tmp740;
    panda$core$RegularExpression* email744 = NULL;
    panda$core$RegularExpression* $tmp745;
    panda$core$RegularExpression* $tmp746;
    int $tmp739;
    {
        panda$core$RegularExpression* $tmp741 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp741, &$s742);
        $tmp740 = $tmp741;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_markup, $tmp740, &$s743);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp740));
        panda$core$RegularExpression* $tmp747 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp747, &$s748);
        $tmp746 = $tmp747;
        $tmp745 = $tmp746;
        email744 = $tmp745;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp745));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp746));
        panda$core$MutableMethod* $tmp749 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp750 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp750, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous8$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp749, (panda$core$Int8*) &panda$core$MutableMethod$$shim9$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp750)));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, email744, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp749)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp749));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp750));
    }
    $tmp739 = -1;
    goto $l737;
    $l737:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) email744));
    email744 = NULL;
    switch ($tmp739) {
        case -1: goto $l751;
    }
    $l751:;
}
void org$pandalanguage$pandac$pandadoc$Markdown$unescapeSpecialChars$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_ed) {
    panda$collections$Iterator* Iter$370$9755 = NULL;
    panda$collections$Iterator* $tmp756;
    panda$collections$Iterator* $tmp757;
    panda$core$String* hash770 = NULL;
    panda$core$String* $tmp771;
    panda$core$Object* $tmp772;
    panda$core$String* plaintext777 = NULL;
    panda$core$String* $tmp778;
    panda$core$String* $tmp779;
    {
        int $tmp754;
        {
            panda$collections$Iterator* $tmp758 = panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(self->charProtector->decodeMap);
            $tmp757 = $tmp758;
            $tmp756 = $tmp757;
            Iter$370$9755 = $tmp756;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp756));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp757));
            $l759:;
            ITable* $tmp762 = Iter$370$9755->$class->itable;
            while ($tmp762->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp762 = $tmp762->next;
            }
            $fn764 $tmp763 = $tmp762->methods[0];
            panda$core$Bit $tmp765 = $tmp763(Iter$370$9755);
            panda$core$Bit $tmp766 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp765);
            bool $tmp761 = $tmp766.value;
            if (!$tmp761) goto $l760;
            {
                int $tmp769;
                {
                    ITable* $tmp773 = Iter$370$9755->$class->itable;
                    while ($tmp773->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp773 = $tmp773->next;
                    }
                    $fn775 $tmp774 = $tmp773->methods[1];
                    panda$core$Object* $tmp776 = $tmp774(Iter$370$9755);
                    $tmp772 = $tmp776;
                    $tmp771 = ((panda$core$String*) $tmp772);
                    hash770 = $tmp771;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp771));
                    panda$core$Panda$unref$panda$core$Object($tmp772);
                    panda$core$String* $tmp781 = (($fn780) self->charProtector->$class->vtable[3])(self->charProtector, hash770);
                    $tmp779 = $tmp781;
                    $tmp778 = $tmp779;
                    plaintext777 = $tmp778;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp778));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp779));
                    panda$core$MutableString$replace$panda$core$String$panda$core$String(p_ed, hash770, plaintext777);
                }
                $tmp769 = -1;
                goto $l767;
                $l767:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) plaintext777));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) hash770));
                hash770 = NULL;
                plaintext777 = NULL;
                switch ($tmp769) {
                    case -1: goto $l782;
                }
                $l782:;
            }
            goto $l759;
            $l760:;
        }
        $tmp754 = -1;
        goto $l752;
        $l752:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$370$9755));
        Iter$370$9755 = NULL;
        switch ($tmp754) {
            case -1: goto $l783;
        }
        $l783:;
    }
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$encodeEmail$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$String* p_s) {
    panda$core$MutableString* result787 = NULL;
    panda$core$MutableString* $tmp788;
    panda$core$MutableString* $tmp789;
    panda$collections$Iterator* Iter$378$9794 = NULL;
    panda$collections$Iterator* $tmp795;
    panda$collections$Iterator* $tmp796;
    panda$core$Char32 ch809;
    panda$core$Object* $tmp810;
    panda$core$Real64 r815;
    panda$core$Real64 $tmp820;
    panda$core$Object* $tmp823;
    panda$core$Char8 $tmp826;
    panda$core$UInt8 $tmp827;
    panda$core$Real64 $tmp828;
    panda$core$String* $tmp831;
    panda$core$Char8 $tmp835;
    panda$core$UInt8 $tmp836;
    panda$core$String* $returnValue838;
    panda$core$String* $tmp839;
    panda$core$String* $tmp840;
    int $tmp786;
    {
        panda$core$MutableString* $tmp790 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp790);
        $tmp789 = $tmp790;
        $tmp788 = $tmp789;
        result787 = $tmp788;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp788));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp789));
        {
            int $tmp793;
            {
                ITable* $tmp797 = ((panda$collections$Iterable*) p_s)->$class->itable;
                while ($tmp797->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp797 = $tmp797->next;
                }
                $fn799 $tmp798 = $tmp797->methods[0];
                panda$collections$Iterator* $tmp800 = $tmp798(((panda$collections$Iterable*) p_s));
                $tmp796 = $tmp800;
                $tmp795 = $tmp796;
                Iter$378$9794 = $tmp795;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp795));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp796));
                $l801:;
                ITable* $tmp804 = Iter$378$9794->$class->itable;
                while ($tmp804->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp804 = $tmp804->next;
                }
                $fn806 $tmp805 = $tmp804->methods[0];
                panda$core$Bit $tmp807 = $tmp805(Iter$378$9794);
                panda$core$Bit $tmp808 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp807);
                bool $tmp803 = $tmp808.value;
                if (!$tmp803) goto $l802;
                {
                    ITable* $tmp811 = Iter$378$9794->$class->itable;
                    while ($tmp811->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp811 = $tmp811->next;
                    }
                    $fn813 $tmp812 = $tmp811->methods[1];
                    panda$core$Object* $tmp814 = $tmp812(Iter$378$9794);
                    $tmp810 = $tmp814;
                    ch809 = ((panda$core$Char32$wrapper*) $tmp810)->value;
                    panda$core$Panda$unref$panda$core$Object($tmp810);
                    ITable* $tmp816 = self->random->$class->itable;
                    while ($tmp816->$class != (panda$core$Class*) &panda$math$Random$class) {
                        $tmp816 = $tmp816->next;
                    }
                    $fn818 $tmp817 = $tmp816->methods[5];
                    panda$core$Real64 $tmp819 = $tmp817(self->random);
                    r815 = $tmp819;
                    panda$core$Real64$init$builtin_float64(&$tmp820, 0.45);
                    panda$core$Bit $tmp821 = panda$core$Real64$$LT$panda$core$Real64$R$panda$core$Bit(r815, $tmp820);
                    if ($tmp821.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result787, &$s822);
                        panda$core$Int32 $tmp824 = panda$core$Char32$convert$R$panda$core$Int32(ch809);
                        panda$core$Int32$wrapper* $tmp825;
                        $tmp825 = (panda$core$Int32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$Int32$wrapperclass);
                        $tmp825->value = $tmp824;
                        $tmp823 = ((panda$core$Object*) $tmp825);
                        panda$core$MutableString$append$panda$core$Object(result787, $tmp823);
                        panda$core$Panda$unref$panda$core$Object($tmp823);
                        panda$core$UInt8$init$builtin_uint8(&$tmp827, 59);
                        panda$core$Char8$init$panda$core$UInt8(&$tmp826, $tmp827);
                        panda$core$MutableString$append$panda$core$Char8(result787, $tmp826);
                    }
                    }
                    else {
                    panda$core$Real64$init$builtin_float64(&$tmp828, 0.9);
                    panda$core$Bit $tmp829 = panda$core$Real64$$LT$panda$core$Real64$R$panda$core$Bit(r815, $tmp828);
                    if ($tmp829.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result787, &$s830);
                        panda$core$Int32 $tmp832 = panda$core$Char32$convert$R$panda$core$Int32(ch809);
                        panda$core$String* $tmp834 = panda$core$Int32$format$panda$core$String$R$panda$core$String($tmp832, &$s833);
                        $tmp831 = $tmp834;
                        panda$core$MutableString$append$panda$core$String(result787, $tmp831);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp831));
                        panda$core$UInt8$init$builtin_uint8(&$tmp836, 59);
                        panda$core$Char8$init$panda$core$UInt8(&$tmp835, $tmp836);
                        panda$core$MutableString$append$panda$core$Char8(result787, $tmp835);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$Char32(result787, ch809);
                    }
                    }
                    }
                }
                goto $l801;
                $l802:;
            }
            $tmp793 = -1;
            goto $l791;
            $l791:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$378$9794));
            Iter$378$9794 = NULL;
            switch ($tmp793) {
                case -1: goto $l837;
            }
            $l837:;
        }
        panda$core$String* $tmp841 = panda$core$MutableString$convert$R$panda$core$String(result787);
        $tmp840 = $tmp841;
        $tmp839 = $tmp840;
        $returnValue838 = $tmp839;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp839));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp840));
        $tmp786 = 0;
        goto $l784;
        $l842:;
        return $returnValue838;
    }
    $l784:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result787));
    result787 = NULL;
    switch ($tmp786) {
        case 0: goto $l842;
    }
    $l844:;
    abort();
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous11$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$Object* $returnValue845;
    panda$core$Object* $tmp846;
    panda$core$String* $tmp847;
    panda$core$Object* $tmp848;
    panda$core$Int64 $tmp849;
    panda$core$Int64$init$builtin_int64(&$tmp849, 1);
    ITable* $tmp850 = p_groups->$class->itable;
    while ($tmp850->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp850 = $tmp850->next;
    }
    $fn852 $tmp851 = $tmp850->methods[0];
    panda$core$Object* $tmp853 = $tmp851(p_groups, $tmp849);
    $tmp848 = $tmp853;
    panda$core$String* $tmp856 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(((panda$core$String*) $tmp848), &$s854, &$s855);
    $tmp847 = $tmp856;
    $tmp846 = ((panda$core$Object*) $tmp847);
    $returnValue845 = $tmp846;
    panda$core$Panda$ref$panda$core$Object($tmp846);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp847));
    panda$core$Panda$unref$panda$core$Object($tmp848);
    return $returnValue845;
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous12$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$Object* $returnValue858;
    panda$core$Object* $tmp859;
    panda$core$String* $tmp860;
    panda$core$Object* $tmp861;
    panda$core$Int64 $tmp862;
    panda$core$Int64$init$builtin_int64(&$tmp862, 1);
    ITable* $tmp863 = p_groups->$class->itable;
    while ($tmp863->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp863 = $tmp863->next;
    }
    $fn865 $tmp864 = $tmp863->methods[0];
    panda$core$Object* $tmp866 = $tmp864(p_groups, $tmp862);
    $tmp861 = $tmp866;
    panda$core$String* $tmp869 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(((panda$core$String*) $tmp861), &$s867, &$s868);
    $tmp860 = $tmp869;
    $tmp859 = ((panda$core$Object*) $tmp860);
    $returnValue858 = $tmp859;
    panda$core$Panda$ref$panda$core$Object($tmp859);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp860));
    panda$core$Panda$unref$panda$core$Object($tmp861);
    return $returnValue858;
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous10$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$MutableString* blockQuote874 = NULL;
    panda$core$MutableString* $tmp875;
    panda$core$MutableString* $tmp876;
    panda$core$Object* $tmp878;
    panda$core$Int64 $tmp879;
    panda$core$RegularExpression* $tmp884;
    panda$core$RegularExpression* $tmp888;
    panda$core$RegularExpression* p1895 = NULL;
    panda$core$RegularExpression* $tmp896;
    panda$core$RegularExpression* $tmp897;
    panda$core$Int64 $tmp900;
    panda$core$Object* $returnValue902;
    panda$core$Object* $tmp903;
    panda$core$String* $tmp904;
    panda$core$String* $tmp905;
    int $tmp873;
    {
        panda$core$MutableString* $tmp877 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$Int64$init$builtin_int64(&$tmp879, 1);
        ITable* $tmp880 = p_groups->$class->itable;
        while ($tmp880->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp880 = $tmp880->next;
        }
        $fn882 $tmp881 = $tmp880->methods[0];
        panda$core$Object* $tmp883 = $tmp881(p_groups, $tmp879);
        $tmp878 = $tmp883;
        panda$core$MutableString$init$panda$core$String($tmp877, ((panda$core$String*) $tmp878));
        $tmp876 = $tmp877;
        $tmp875 = $tmp876;
        blockQuote874 = $tmp875;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp875));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp876));
        panda$core$Panda$unref$panda$core$Object($tmp878);
        panda$core$RegularExpression* $tmp885 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp885, &$s886);
        $tmp884 = $tmp885;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(blockQuote874, $tmp884, &$s887);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp884));
        panda$core$RegularExpression* $tmp889 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp889, &$s890);
        $tmp888 = $tmp889;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(blockQuote874, $tmp888, &$s891);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp888));
        (($fn892) self->$class->vtable[6])(self, blockQuote874);
        panda$core$MutableString$replace$panda$core$String$panda$core$String(blockQuote874, &$s893, &$s894);
        panda$core$RegularExpression* $tmp898 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp900, 4);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp898, &$s899, $tmp900);
        $tmp897 = $tmp898;
        $tmp896 = $tmp897;
        p1895 = $tmp896;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp896));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp897));
        panda$core$MutableMethod* $tmp901 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp901, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous12$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) self));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(blockQuote874, p1895, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp901)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp901));
        panda$core$String* $tmp907 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s906, ((panda$core$Object*) blockQuote874));
        $tmp905 = $tmp907;
        panda$core$String* $tmp909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp905, &$s908);
        $tmp904 = $tmp909;
        $tmp903 = ((panda$core$Object*) $tmp904);
        $returnValue902 = $tmp903;
        panda$core$Panda$ref$panda$core$Object($tmp903);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp904));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp905));
        $tmp873 = 0;
        goto $l871;
        $l910:;
        return $returnValue902;
    }
    $l871:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1895));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) blockQuote874));
    blockQuote874 = NULL;
    p1895 = NULL;
    switch ($tmp873) {
        case 0: goto $l910;
    }
    $l912:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doBlockQuotes$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* p916 = NULL;
    panda$core$RegularExpression* $tmp917;
    panda$core$RegularExpression* $tmp918;
    panda$core$Int64 $tmp921;
    int $tmp915;
    {
        panda$core$RegularExpression* $tmp919 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp921, 1);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp919, &$s920, $tmp921);
        $tmp918 = $tmp919;
        $tmp917 = $tmp918;
        p916 = $tmp917;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp917));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp918));
        panda$core$MutableMethod* $tmp922 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp922, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous10$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) self));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, p916, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp922)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp922));
    }
    $tmp915 = -1;
    goto $l913;
    $l913:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p916));
    p916 = NULL;
    switch ($tmp915) {
        case -1: goto $l923;
    }
    $l923:;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous13$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* lineSoFar927 = NULL;
    panda$core$String* $tmp928;
    panda$core$Object* $tmp929;
    panda$core$Int64 $tmp930;
    panda$core$Int64 width935;
    panda$core$MutableString* replacement937 = NULL;
    panda$core$MutableString* $tmp938;
    panda$core$MutableString* $tmp939;
    panda$core$Char8 $tmp943;
    panda$core$UInt8 $tmp944;
    panda$core$Int64 $tmp945;
    panda$core$Int64 $tmp948;
    panda$core$Int64 $tmp950;
    panda$core$String* $returnValue952;
    panda$core$String* $tmp953;
    panda$core$String* $tmp954;
    int $tmp926;
    {
        panda$core$Int64$init$builtin_int64(&$tmp930, 1);
        ITable* $tmp931 = p_groups->$class->itable;
        while ($tmp931->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp931 = $tmp931->next;
        }
        $fn933 $tmp932 = $tmp931->methods[0];
        panda$core$Object* $tmp934 = $tmp932(p_groups, $tmp930);
        $tmp929 = $tmp934;
        $tmp928 = ((panda$core$String*) $tmp929);
        lineSoFar927 = $tmp928;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp928));
        panda$core$Panda$unref$panda$core$Object($tmp929);
        panda$core$Int64 $tmp936 = panda$core$String$length$R$panda$core$Int64(lineSoFar927);
        width935 = $tmp936;
        panda$core$MutableString* $tmp940 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp940, lineSoFar927);
        $tmp939 = $tmp940;
        $tmp938 = $tmp939;
        replacement937 = $tmp938;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp938));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp939));
        $l941:;
        {
            panda$core$UInt8$init$builtin_uint8(&$tmp944, 32);
            panda$core$Char8$init$panda$core$UInt8(&$tmp943, $tmp944);
            panda$core$MutableString$append$panda$core$Char8(replacement937, $tmp943);
            panda$core$Int64$init$builtin_int64(&$tmp945, 1);
            panda$core$Int64 $tmp946 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(width935, $tmp945);
            width935 = $tmp946;
        }
        panda$core$Int64$init$builtin_int64(&$tmp948, 4);
        panda$core$Int64 $tmp949 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(width935, $tmp948);
        panda$core$Int64$init$builtin_int64(&$tmp950, 0);
        panda$core$Bit $tmp951 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp949, $tmp950);
        bool $tmp947 = $tmp951.value;
        if ($tmp947) goto $l941;
        $l942:;
        panda$core$String* $tmp955 = panda$core$MutableString$convert$R$panda$core$String(replacement937);
        $tmp954 = $tmp955;
        $tmp953 = $tmp954;
        $returnValue952 = $tmp953;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp953));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp954));
        $tmp926 = 0;
        goto $l924;
        $l956:;
        return $returnValue952;
    }
    $l924:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) replacement937));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) lineSoFar927));
    lineSoFar927 = NULL;
    replacement937 = NULL;
    switch ($tmp926) {
        case 0: goto $l956;
    }
    $l958:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim14$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar962 = NULL;
    panda$core$Method* $tmp963;
    panda$core$Method* $tmp964;
    panda$core$Object* $tmp966;
    panda$core$Object* $tmp967;
    panda$core$Object* $returnValue968;
    panda$core$Object* $tmp969;
    panda$core$String* $tmp970;
    panda$core$String* $tmp971;
    int $tmp961;
    {
        panda$core$Method* $tmp965 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp965, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp964 = $tmp965;
        $tmp963 = $tmp964;
        methodVar962 = $tmp963;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp963));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp964));
        {
            $tmp966 = ((panda$core$MutableMethod*) methodVar962)->target;
            $tmp967 = self->target;
            ((panda$core$MutableMethod*) methodVar962)->target = $tmp967;
            panda$core$Panda$ref$panda$core$Object($tmp967);
            panda$core$Panda$unref$panda$core$Object($tmp966);
        }
        if (methodVar962->target) {
            $tmp971 = (($fn972) methodVar962->pointer)(methodVar962->target, p_p0);
        } else {
            $tmp971 = (($fn973) methodVar962->pointer)(p_p0);
        }
        $tmp970 = $tmp971;
        $tmp969 = ((panda$core$Object*) $tmp970);
        $returnValue968 = $tmp969;
        panda$core$Panda$ref$panda$core$Object($tmp969);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp970));
        $tmp961 = 0;
        goto $l959;
        $l974:;
        return $returnValue968;
    }
    $l959:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar962));
    methodVar962 = NULL;
    switch ($tmp961) {
        case 0: goto $l974;
    }
    $l976:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$detabify$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$core$RegularExpression* $tmp977;
    panda$core$RegularExpression* $tmp978 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp978, &$s979);
    $tmp977 = $tmp978;
    panda$core$MutableMethod* $tmp980 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
    panda$core$MutableMethod* $tmp981 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
    panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp981, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous13$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
    panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp980, (panda$core$Int8*) &panda$core$MutableMethod$$shim14$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp981)));
    panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_text, $tmp977, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp980)));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp980));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp981));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp977));
}
void org$pandalanguage$pandac$pandadoc$Markdown$outdent$panda$core$MutableString(panda$core$MutableString* p_s) {
    panda$core$RegularExpression* $tmp982;
    panda$core$RegularExpression* $tmp983 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp983, &$s984);
    $tmp982 = $tmp983;
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_s, $tmp982, &$s985);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp982));
}
panda$core$Object* panda$core$MutableMethod$$shim15$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$MutableMethod* methodVar989 = NULL;
    panda$core$MutableMethod* $tmp990;
    panda$core$Method* $tmp991;
    panda$core$Object* $tmp993;
    panda$core$Object* $tmp994;
    panda$core$Object* $returnValue995;
    panda$core$Object* $tmp996;
    panda$core$String* $tmp997;
    panda$core$String* $tmp998;
    int $tmp988;
    {
        panda$core$Method* $tmp992 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp992, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp991 = $tmp992;
        $tmp990 = ((panda$core$MutableMethod*) $tmp991);
        methodVar989 = $tmp990;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp990));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp991));
        {
            $tmp993 = methodVar989->target;
            $tmp994 = self->target;
            methodVar989->target = $tmp994;
            panda$core$Panda$ref$panda$core$Object($tmp994);
            panda$core$Panda$unref$panda$core$Object($tmp993);
        }
        if (methodVar989->target) {
            $tmp998 = (($fn999) methodVar989->pointer)(methodVar989->target, p_p0);
        } else {
            $tmp998 = (($fn1000) methodVar989->pointer)(p_p0);
        }
        $tmp997 = $tmp998;
        $tmp996 = ((panda$core$Object*) $tmp997);
        $returnValue995 = $tmp996;
        panda$core$Panda$ref$panda$core$Object($tmp996);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp997));
        $tmp988 = 0;
        goto $l986;
        $l1001:;
        return $returnValue995;
    }
    $l986:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar989));
    methodVar989 = NULL;
    switch ($tmp988) {
        case 0: goto $l1001;
    }
    $l1003:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doCodeBlocks$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* p1007 = NULL;
    panda$core$RegularExpression* $tmp1008;
    panda$core$RegularExpression* $tmp1009;
    panda$core$Int64 $tmp1012;
    org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* $tmp1015;
    int $tmp1006;
    {
        panda$core$RegularExpression* $tmp1010 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp1012, 1);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1010, &$s1011, $tmp1012);
        $tmp1009 = $tmp1010;
        $tmp1008 = $tmp1009;
        p1007 = $tmp1008;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1008));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1009));
        panda$core$MutableMethod* $tmp1013 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp1014 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* $tmp1016 = (org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$class);
        org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1016, self);
        $tmp1015 = $tmp1016;
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1014, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$replacement$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) $tmp1015));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1013, (panda$core$Int8*) &panda$core$MutableMethod$$shim15$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp1014)));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, p1007, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1013)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1013));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1014));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1015));
    }
    $tmp1006 = -1;
    goto $l1004;
    $l1004:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1007));
    p1007 = NULL;
    switch ($tmp1006) {
        case -1: goto $l1017;
    }
    $l1017:;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$prettyPrint$org$pandalanguage$pandac$parser$Parser$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, org$pandalanguage$pandac$parser$Parser* p_parser) {
    panda$core$MutableString* result1021 = NULL;
    panda$core$MutableString* $tmp1022;
    panda$core$MutableString* $tmp1023;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind current1026;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp1027;
    panda$core$Int64 $tmp1028;
    panda$collections$Iterator* Iter$507$91032 = NULL;
    panda$collections$Iterator* $tmp1033;
    panda$collections$Iterator* $tmp1034;
    org$pandalanguage$pandac$Pair* t1050 = NULL;
    org$pandalanguage$pandac$Pair* $tmp1051;
    panda$core$Object* $tmp1052;
    panda$core$Int64 $tmp1060;
    org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $match$513_171065;
    panda$core$Int64 $tmp1066;
    panda$core$Int64 $tmp1069;
    panda$core$Int64 $tmp1072;
    panda$core$Int64 $tmp1076;
    panda$core$Int64 $tmp1079;
    panda$core$Int64 $tmp1082;
    panda$core$Int64 $tmp1085;
    panda$core$Int64 $tmp1088;
    panda$core$Int64 $tmp1091;
    panda$core$Int64 $tmp1094;
    panda$core$Int64 $tmp1097;
    panda$core$Int64 $tmp1100;
    panda$core$Int64 $tmp1103;
    panda$core$Bit $tmp1106;
    panda$core$MutableString* s1110 = NULL;
    panda$core$MutableString* $tmp1111;
    panda$core$MutableString* $tmp1112;
    panda$core$String* $tmp1114;
    panda$core$String* $tmp1123;
    panda$core$String* $tmp1128;
    panda$core$String* $tmp1133;
    panda$core$String* $tmp1138;
    panda$core$String* $tmp1143;
    panda$core$Int64 $tmp1148;
    panda$core$Int64 $tmp1151;
    panda$core$String* $tmp1154;
    panda$core$String* $tmp1155;
    panda$core$Object* $tmp1157;
    panda$core$Int64 $tmp1163;
    panda$core$Int64 $tmp1166;
    panda$core$Int64 $tmp1172;
    panda$core$String* $returnValue1176;
    panda$core$String* $tmp1177;
    panda$core$String* $tmp1178;
    int $tmp1020;
    {
        panda$core$MutableString* $tmp1024 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp1024, &$s1025);
        $tmp1023 = $tmp1024;
        $tmp1022 = $tmp1023;
        result1021 = $tmp1022;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1022));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1023));
        panda$core$Int64$init$builtin_int64(&$tmp1028, 0);
        org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64(&$tmp1027, $tmp1028);
        current1026 = $tmp1027;
        {
            int $tmp1031;
            {
                ITable* $tmp1035 = ((panda$collections$Iterable*) p_parser->syntaxHighlighter->tokens)->$class->itable;
                while ($tmp1035->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1035 = $tmp1035->next;
                }
                $fn1037 $tmp1036 = $tmp1035->methods[0];
                panda$collections$Iterator* $tmp1038 = $tmp1036(((panda$collections$Iterable*) p_parser->syntaxHighlighter->tokens));
                $tmp1034 = $tmp1038;
                $tmp1033 = $tmp1034;
                Iter$507$91032 = $tmp1033;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1033));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1034));
                $l1039:;
                ITable* $tmp1042 = Iter$507$91032->$class->itable;
                while ($tmp1042->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1042 = $tmp1042->next;
                }
                $fn1044 $tmp1043 = $tmp1042->methods[0];
                panda$core$Bit $tmp1045 = $tmp1043(Iter$507$91032);
                panda$core$Bit $tmp1046 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1045);
                bool $tmp1041 = $tmp1046.value;
                if (!$tmp1041) goto $l1040;
                {
                    int $tmp1049;
                    {
                        ITable* $tmp1053 = Iter$507$91032->$class->itable;
                        while ($tmp1053->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1053 = $tmp1053->next;
                        }
                        $fn1055 $tmp1054 = $tmp1053->methods[1];
                        panda$core$Object* $tmp1056 = $tmp1054(Iter$507$91032);
                        $tmp1052 = $tmp1056;
                        $tmp1051 = ((org$pandalanguage$pandac$Pair*) $tmp1052);
                        t1050 = $tmp1051;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1051));
                        panda$core$Panda$unref$panda$core$Object($tmp1052);
                        panda$core$Bit $tmp1058 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) t1050->second)->value.$rawValue, current1026.$rawValue);
                        bool $tmp1057 = $tmp1058.value;
                        if (!$tmp1057) goto $l1059;
                        panda$core$Int64$init$builtin_int64(&$tmp1060, 0);
                        panda$core$Bit $tmp1061 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(current1026.$rawValue, $tmp1060);
                        $tmp1057 = $tmp1061.value;
                        $l1059:;
                        panda$core$Bit $tmp1062 = { $tmp1057 };
                        if ($tmp1062.value) {
                        {
                            panda$core$MutableString$append$panda$core$String(result1021, &$s1063);
                        }
                        }
                        panda$core$Bit $tmp1064 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) t1050->second)->value.$rawValue, current1026.$rawValue);
                        if ($tmp1064.value) {
                        {
                            current1026 = ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) t1050->second)->value;
                            {
                                $match$513_171065 = current1026;
                                panda$core$Int64$init$builtin_int64(&$tmp1066, 0);
                                panda$core$Bit $tmp1067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171065.$rawValue, $tmp1066);
                                if ($tmp1067.value) {
                                {
                                    {
                                    }
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1069, 1);
                                panda$core$Bit $tmp1070 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171065.$rawValue, $tmp1069);
                                bool $tmp1068 = $tmp1070.value;
                                if ($tmp1068) goto $l1071;
                                panda$core$Int64$init$builtin_int64(&$tmp1072, 2);
                                panda$core$Bit $tmp1073 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171065.$rawValue, $tmp1072);
                                $tmp1068 = $tmp1073.value;
                                $l1071:;
                                panda$core$Bit $tmp1074 = { $tmp1068 };
                                if ($tmp1074.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1021, &$s1075);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1076, 3);
                                panda$core$Bit $tmp1077 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171065.$rawValue, $tmp1076);
                                if ($tmp1077.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1021, &$s1078);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1079, 4);
                                panda$core$Bit $tmp1080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171065.$rawValue, $tmp1079);
                                if ($tmp1080.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1021, &$s1081);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1082, 5);
                                panda$core$Bit $tmp1083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171065.$rawValue, $tmp1082);
                                if ($tmp1083.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1021, &$s1084);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1085, 6);
                                panda$core$Bit $tmp1086 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171065.$rawValue, $tmp1085);
                                if ($tmp1086.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1021, &$s1087);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1088, 7);
                                panda$core$Bit $tmp1089 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171065.$rawValue, $tmp1088);
                                if ($tmp1089.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1021, &$s1090);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1091, 8);
                                panda$core$Bit $tmp1092 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171065.$rawValue, $tmp1091);
                                if ($tmp1092.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1021, &$s1093);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1094, 9);
                                panda$core$Bit $tmp1095 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171065.$rawValue, $tmp1094);
                                if ($tmp1095.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1021, &$s1096);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1097, 10);
                                panda$core$Bit $tmp1098 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171065.$rawValue, $tmp1097);
                                if ($tmp1098.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1021, &$s1099);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1100, 11);
                                panda$core$Bit $tmp1101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171065.$rawValue, $tmp1100);
                                if ($tmp1101.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1021, &$s1102);
                                }
                                }
                                else {
                                panda$core$Int64$init$builtin_int64(&$tmp1103, 12);
                                panda$core$Bit $tmp1104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$513_171065.$rawValue, $tmp1103);
                                if ($tmp1104.value) {
                                {
                                    panda$core$MutableString$append$panda$core$String(result1021, &$s1105);
                                }
                                }
                                else {
                                {
                                    panda$core$Bit$init$builtin_bit(&$tmp1106, false);
                                    if ($tmp1106.value) goto $l1107; else goto $l1108;
                                    $l1108:;
                                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1109, (panda$core$Int64) { 538 });
                                    abort();
                                    $l1107:;
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
                        panda$core$MutableString* $tmp1113 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                        panda$core$String* $tmp1115 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(p_parser, ((org$pandalanguage$pandac$parser$Token$wrapper*) t1050->first)->value);
                        $tmp1114 = $tmp1115;
                        panda$core$MutableString$init$panda$core$String($tmp1113, $tmp1114);
                        $tmp1112 = $tmp1113;
                        $tmp1111 = $tmp1112;
                        s1110 = $tmp1111;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1111));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1112));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1114));
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s1110, &$s1116, &$s1117);
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s1110, &$s1118, &$s1119);
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s1110, &$s1120, &$s1121);
                        panda$core$String* $tmp1126 = (($fn1125) self->charProtector->$class->vtable[2])(self->charProtector, &$s1124);
                        $tmp1123 = $tmp1126;
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s1110, &$s1122, $tmp1123);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1123));
                        panda$core$String* $tmp1131 = (($fn1130) self->charProtector->$class->vtable[2])(self->charProtector, &$s1129);
                        $tmp1128 = $tmp1131;
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s1110, &$s1127, $tmp1128);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1128));
                        panda$core$String* $tmp1136 = (($fn1135) self->charProtector->$class->vtable[2])(self->charProtector, &$s1134);
                        $tmp1133 = $tmp1136;
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s1110, &$s1132, $tmp1133);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1133));
                        panda$core$String* $tmp1141 = (($fn1140) self->charProtector->$class->vtable[2])(self->charProtector, &$s1139);
                        $tmp1138 = $tmp1141;
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s1110, &$s1137, $tmp1138);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1138));
                        panda$core$String* $tmp1146 = (($fn1145) self->charProtector->$class->vtable[2])(self->charProtector, &$s1144);
                        $tmp1143 = $tmp1146;
                        panda$core$MutableString$replace$panda$core$String$panda$core$String(s1110, &$s1142, $tmp1143);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1143));
                        panda$core$Int64$init$builtin_int64(&$tmp1148, 1);
                        panda$core$Bit $tmp1149 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(current1026.$rawValue, $tmp1148);
                        bool $tmp1147 = $tmp1149.value;
                        if (!$tmp1147) goto $l1150;
                        panda$core$Int64$init$builtin_int64(&$tmp1151, 2);
                        panda$core$Bit $tmp1152 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(current1026.$rawValue, $tmp1151);
                        $tmp1147 = $tmp1152.value;
                        $l1150:;
                        panda$core$Bit $tmp1153 = { $tmp1147 };
                        if ($tmp1153.value) {
                        {
                            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1158;
                            $tmp1158 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
                            $tmp1158->value = ((org$pandalanguage$pandac$parser$Token$wrapper*) t1050->first)->value.kind;
                            $tmp1157 = ((panda$core$Object*) $tmp1158);
                            panda$core$String* $tmp1159 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1156, $tmp1157);
                            $tmp1155 = $tmp1159;
                            panda$core$String* $tmp1161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1155, &$s1160);
                            $tmp1154 = $tmp1161;
                            panda$core$MutableString$append$panda$core$String(result1021, $tmp1154);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1154));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1155));
                            panda$core$Panda$unref$panda$core$Object($tmp1157);
                        }
                        }
                        panda$core$MutableString$append$panda$core$Object(result1021, ((panda$core$Object*) s1110));
                        panda$core$Int64$init$builtin_int64(&$tmp1163, 1);
                        panda$core$Bit $tmp1164 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(current1026.$rawValue, $tmp1163);
                        bool $tmp1162 = $tmp1164.value;
                        if (!$tmp1162) goto $l1165;
                        panda$core$Int64$init$builtin_int64(&$tmp1166, 2);
                        panda$core$Bit $tmp1167 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(current1026.$rawValue, $tmp1166);
                        $tmp1162 = $tmp1167.value;
                        $l1165:;
                        panda$core$Bit $tmp1168 = { $tmp1162 };
                        if ($tmp1168.value) {
                        {
                            panda$core$MutableString$append$panda$core$String(result1021, &$s1169);
                        }
                        }
                    }
                    $tmp1049 = -1;
                    goto $l1047;
                    $l1047:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1110));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1050));
                    t1050 = NULL;
                    s1110 = NULL;
                    switch ($tmp1049) {
                        case -1: goto $l1170;
                    }
                    $l1170:;
                }
                goto $l1039;
                $l1040:;
            }
            $tmp1031 = -1;
            goto $l1029;
            $l1029:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$507$91032));
            Iter$507$91032 = NULL;
            switch ($tmp1031) {
                case -1: goto $l1171;
            }
            $l1171:;
        }
        panda$core$Int64$init$builtin_int64(&$tmp1172, 0);
        panda$core$Bit $tmp1173 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(current1026.$rawValue, $tmp1172);
        if ($tmp1173.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1021, &$s1174);
        }
        }
        panda$core$MutableString$append$panda$core$String(result1021, &$s1175);
        panda$core$String* $tmp1179 = panda$core$MutableString$finish$R$panda$core$String(result1021);
        $tmp1178 = $tmp1179;
        $tmp1177 = $tmp1178;
        $returnValue1176 = $tmp1177;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1177));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1178));
        $tmp1020 = 0;
        goto $l1018;
        $l1180:;
        return $returnValue1176;
    }
    $l1018:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1021));
    result1021 = NULL;
    switch ($tmp1020) {
        case 0: goto $l1180;
    }
    $l1182:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$syntaxHighlight$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_ed) {
    panda$core$String* text1186 = NULL;
    panda$core$String* $tmp1187;
    panda$core$String* $tmp1188;
    panda$core$String* $tmp1189;
    org$pandalanguage$pandac$ASTNode* file1192 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1193;
    org$pandalanguage$pandac$ASTNode* $tmp1194;
    panda$core$Int64 $tmp1199;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1202;
    panda$core$Bit $tmp1203;
    panda$core$String* $tmp1204;
    panda$core$Int64 $tmp1213;
    panda$core$Int64 $tmp1217;
    org$pandalanguage$pandac$ASTNode* $tmp1220;
    panda$core$Int64 $tmp1223;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1225;
    panda$core$Bit $tmp1226;
    panda$core$String* $tmp1227;
    panda$core$Int64 $tmp1236;
    panda$core$Int64 $tmp1240;
    org$pandalanguage$pandac$ASTNode* $tmp1243;
    panda$core$Int64 $tmp1246;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1248;
    panda$core$Bit $tmp1249;
    panda$core$String* $tmp1250;
    org$pandalanguage$pandac$parser$Token next1256;
    panda$core$Int64 $tmp1258;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1260;
    panda$core$Bit $tmp1261;
    panda$core$String* $tmp1262;
    int $tmp1185;
    {
        panda$threads$MessageQueue$clear(self->errorQueue);
        panda$core$String* $tmp1190 = panda$core$MutableString$convert$R$panda$core$String(p_ed);
        $tmp1189 = $tmp1190;
        panda$core$String* $tmp1191 = panda$core$String$trim$R$panda$core$String($tmp1189);
        $tmp1188 = $tmp1191;
        $tmp1187 = $tmp1188;
        text1186 = $tmp1187;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1187));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1188));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1189));
        org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->parser, self->source, text1186);
        org$pandalanguage$pandac$ASTNode* $tmp1195 = org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(self->parser);
        $tmp1194 = $tmp1195;
        $tmp1193 = $tmp1194;
        file1192 = $tmp1193;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1193));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1194));
        bool $tmp1196 = ((panda$core$Bit) { file1192 != NULL }).value;
        if (!$tmp1196) goto $l1197;
        panda$core$Int64 $tmp1198 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(self->errorQueue);
        panda$core$Int64$init$builtin_int64(&$tmp1199, 0);
        panda$core$Bit $tmp1200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1198, $tmp1199);
        $tmp1196 = $tmp1200.value;
        $l1197:;
        panda$core$Bit $tmp1201 = { $tmp1196 };
        if ($tmp1201.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1203, false);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1202, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1203);
            panda$core$String* $tmp1206 = (($fn1205) self->$class->vtable[16])(self, self->parser);
            $tmp1204 = $tmp1206;
            panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$core$String(p_ed, $tmp1202, $tmp1204);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1204));
            $tmp1185 = 0;
            goto $l1183;
            $l1207:;
            return;
        }
        }
        panda$threads$MessageQueue$clear(self->errorQueue);
        org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->parser, self->source, text1186);
        $l1208:;
        org$pandalanguage$pandac$parser$Token $tmp1212 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self->parser);
        panda$core$Int64$init$builtin_int64(&$tmp1213, 0);
        panda$core$Bit $tmp1214 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1212.kind.$rawValue, $tmp1213);
        bool $tmp1211 = $tmp1214.value;
        if (!$tmp1211) goto $l1215;
        panda$core$Int64 $tmp1216 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(self->errorQueue);
        panda$core$Int64$init$builtin_int64(&$tmp1217, 0);
        panda$core$Bit $tmp1218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1216, $tmp1217);
        $tmp1211 = $tmp1218.value;
        $l1215:;
        panda$core$Bit $tmp1219 = { $tmp1211 };
        bool $tmp1210 = $tmp1219.value;
        if (!$tmp1210) goto $l1209;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1221 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self->parser);
            $tmp1220 = $tmp1221;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1220));
        }
        goto $l1208;
        $l1209:;
        panda$core$Int64 $tmp1222 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(self->errorQueue);
        panda$core$Int64$init$builtin_int64(&$tmp1223, 0);
        panda$core$Bit $tmp1224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1222, $tmp1223);
        if ($tmp1224.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1226, false);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1225, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1226);
            panda$core$String* $tmp1229 = (($fn1228) self->$class->vtable[16])(self, self->parser);
            $tmp1227 = $tmp1229;
            panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$core$String(p_ed, $tmp1225, $tmp1227);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1227));
            $tmp1185 = 1;
            goto $l1183;
            $l1230:;
            return;
        }
        }
        panda$threads$MessageQueue$clear(self->errorQueue);
        org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->parser, self->source, text1186);
        $l1231:;
        org$pandalanguage$pandac$parser$Token $tmp1235 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self->parser);
        panda$core$Int64$init$builtin_int64(&$tmp1236, 0);
        panda$core$Bit $tmp1237 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1235.kind.$rawValue, $tmp1236);
        bool $tmp1234 = $tmp1237.value;
        if (!$tmp1234) goto $l1238;
        panda$core$Int64 $tmp1239 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(self->errorQueue);
        panda$core$Int64$init$builtin_int64(&$tmp1240, 0);
        panda$core$Bit $tmp1241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1239, $tmp1240);
        $tmp1234 = $tmp1241.value;
        $l1238:;
        panda$core$Bit $tmp1242 = { $tmp1234 };
        bool $tmp1233 = $tmp1242.value;
        if (!$tmp1233) goto $l1232;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1244 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self->parser);
            $tmp1243 = $tmp1244;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1243));
        }
        goto $l1231;
        $l1232:;
        panda$core$Int64 $tmp1245 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(self->errorQueue);
        panda$core$Int64$init$builtin_int64(&$tmp1246, 0);
        panda$core$Bit $tmp1247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1245, $tmp1246);
        if ($tmp1247.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1249, false);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1248, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1249);
            panda$core$String* $tmp1252 = (($fn1251) self->$class->vtable[16])(self, self->parser);
            $tmp1250 = $tmp1252;
            panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$core$String(p_ed, $tmp1248, $tmp1250);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1250));
            $tmp1185 = 2;
            goto $l1183;
            $l1253:;
            return;
        }
        }
        panda$threads$MessageQueue$clear(self->errorQueue);
        org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->parser, self->source, text1186);
        $l1254:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1257 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self->parser);
            next1256 = $tmp1257;
            panda$core$Int64$init$builtin_int64(&$tmp1258, 0);
            panda$core$Bit $tmp1259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1256.kind.$rawValue, $tmp1258);
            if ($tmp1259.value) {
            {
                goto $l1255;
            }
            }
        }
        }
        $l1255:;
        panda$core$Bit$init$builtin_bit(&$tmp1261, false);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1260, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1261);
        panda$core$String* $tmp1264 = (($fn1263) self->$class->vtable[16])(self, self->parser);
        $tmp1262 = $tmp1264;
        panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$core$String(p_ed, $tmp1260, $tmp1262);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1262));
    }
    $tmp1185 = -1;
    goto $l1183;
    $l1183:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) file1192));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) text1186));
    text1186 = NULL;
    file1192 = NULL;
    switch ($tmp1185) {
        case 2: goto $l1253;
        case -1: goto $l1265;
        case 1: goto $l1230;
        case 0: goto $l1207;
    }
    $l1265:;
}
void org$pandalanguage$pandac$pandadoc$Markdown$encodeCode$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_ed) {
    panda$core$RegularExpression* $tmp1266;
    panda$core$RegularExpression* $tmp1267 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp1267, &$s1268);
    $tmp1266 = $tmp1267;
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_ed, $tmp1266, &$s1269);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1266));
    (($fn1270) self->$class->vtable[17])(self, p_ed);
    panda$core$MutableString$replace$panda$core$String$panda$core$String(p_ed, &$s1271, &$s1272);
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous16$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* list1276 = NULL;
    panda$core$String* $tmp1277;
    panda$core$Object* $tmp1278;
    panda$core$Int64 $tmp1279;
    panda$core$String* listStart1284 = NULL;
    panda$core$String* $tmp1285;
    panda$core$Object* $tmp1286;
    panda$core$Int64 $tmp1287;
    panda$core$String* listType1292 = NULL;
    panda$core$RegularExpression* $tmp1293;
    panda$core$String* $tmp1297;
    panda$core$String* $tmp1298;
    panda$core$String* $tmp1300;
    panda$core$String* $tmp1301;
    panda$core$String* $tmp1303;
    panda$core$String* $tmp1304;
    panda$core$String* $tmp1305;
    panda$core$RegularExpression* $tmp1306;
    panda$core$String* result1311 = NULL;
    panda$core$String* $tmp1312;
    panda$core$String* $tmp1313;
    panda$core$String* $tmp1316;
    panda$core$String* $tmp1317;
    panda$core$String* $tmp1318;
    panda$core$RegularExpression* $tmp1319;
    panda$core$Object* $returnValue1324;
    panda$core$Object* $tmp1325;
    panda$core$String* $tmp1326;
    panda$core$String* $tmp1327;
    panda$core$String* $tmp1328;
    panda$core$String* $tmp1329;
    panda$core$String* $tmp1330;
    panda$core$String* $tmp1331;
    int $tmp1275;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1279, 1);
        ITable* $tmp1280 = p_groups->$class->itable;
        while ($tmp1280->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1280 = $tmp1280->next;
        }
        $fn1282 $tmp1281 = $tmp1280->methods[0];
        panda$core$Object* $tmp1283 = $tmp1281(p_groups, $tmp1279);
        $tmp1278 = $tmp1283;
        $tmp1277 = ((panda$core$String*) $tmp1278);
        list1276 = $tmp1277;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1277));
        panda$core$Panda$unref$panda$core$Object($tmp1278);
        panda$core$Int64$init$builtin_int64(&$tmp1287, 3);
        ITable* $tmp1288 = p_groups->$class->itable;
        while ($tmp1288->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1288 = $tmp1288->next;
        }
        $fn1290 $tmp1289 = $tmp1288->methods[0];
        panda$core$Object* $tmp1291 = $tmp1289(p_groups, $tmp1287);
        $tmp1286 = $tmp1291;
        $tmp1285 = ((panda$core$String*) $tmp1286);
        listStart1284 = $tmp1285;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1285));
        panda$core$Panda$unref$panda$core$Object($tmp1286);
        memset(&listType1292, 0, sizeof(listType1292));
        panda$core$RegularExpression* $tmp1294 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp1294, &$s1295);
        $tmp1293 = $tmp1294;
        panda$core$Bit $tmp1296 = panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(listStart1284, $tmp1293);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1293));
        if ($tmp1296.value) {
        {
            {
                $tmp1297 = listType1292;
                $tmp1298 = &$s1299;
                listType1292 = $tmp1298;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1298));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1297));
            }
        }
        }
        else {
        {
            {
                $tmp1300 = listType1292;
                $tmp1301 = &$s1302;
                listType1292 = $tmp1301;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1301));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1300));
            }
        }
        }
        {
            $tmp1303 = list1276;
            panda$core$RegularExpression* $tmp1307 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
            panda$core$RegularExpression$init$panda$core$String($tmp1307, &$s1308);
            $tmp1306 = $tmp1307;
            panda$core$String* $tmp1310 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(list1276, $tmp1306, &$s1309);
            $tmp1305 = $tmp1310;
            $tmp1304 = $tmp1305;
            list1276 = $tmp1304;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1304));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1305));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1306));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1303));
        }
        panda$core$String* $tmp1315 = (($fn1314) self->$class->vtable[20])(self, list1276);
        $tmp1313 = $tmp1315;
        $tmp1312 = $tmp1313;
        result1311 = $tmp1312;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1312));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1313));
        {
            $tmp1316 = result1311;
            panda$core$RegularExpression* $tmp1320 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
            panda$core$RegularExpression$init$panda$core$String($tmp1320, &$s1321);
            $tmp1319 = $tmp1320;
            panda$core$String* $tmp1323 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(result1311, $tmp1319, &$s1322);
            $tmp1318 = $tmp1323;
            $tmp1317 = $tmp1318;
            result1311 = $tmp1317;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1317));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1318));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1319));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1316));
        }
        panda$core$String* $tmp1333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1332, listType1292);
        $tmp1331 = $tmp1333;
        panda$core$String* $tmp1335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1331, &$s1334);
        $tmp1330 = $tmp1335;
        panda$core$String* $tmp1336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1330, result1311);
        $tmp1329 = $tmp1336;
        panda$core$String* $tmp1338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1329, &$s1337);
        $tmp1328 = $tmp1338;
        panda$core$String* $tmp1339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1328, listType1292);
        $tmp1327 = $tmp1339;
        panda$core$String* $tmp1341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1327, &$s1340);
        $tmp1326 = $tmp1341;
        $tmp1325 = ((panda$core$Object*) $tmp1326);
        $returnValue1324 = $tmp1325;
        panda$core$Panda$ref$panda$core$Object($tmp1325);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1326));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1327));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1328));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1329));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1330));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1331));
        $tmp1275 = 0;
        goto $l1273;
        $l1342:;
        return $returnValue1324;
    }
    $l1273:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1311));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) listType1292));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) listStart1284));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list1276));
    list1276 = NULL;
    listStart1284 = NULL;
    result1311 = NULL;
    switch ($tmp1275) {
        case 0: goto $l1342;
    }
    $l1344:;
    abort();
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous17$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* list1348 = NULL;
    panda$core$String* $tmp1349;
    panda$core$Object* $tmp1350;
    panda$core$Int64 $tmp1351;
    panda$core$String* listStart1356 = NULL;
    panda$core$String* $tmp1357;
    panda$core$Object* $tmp1358;
    panda$core$Int64 $tmp1359;
    panda$core$String* listType1364 = NULL;
    panda$core$RegularExpression* $tmp1365;
    panda$core$String* $tmp1369;
    panda$core$String* $tmp1370;
    panda$core$String* $tmp1372;
    panda$core$String* $tmp1373;
    panda$core$String* $tmp1375;
    panda$core$String* $tmp1376;
    panda$core$String* $tmp1377;
    panda$core$RegularExpression* $tmp1378;
    panda$core$String* result1383 = NULL;
    panda$core$String* $tmp1384;
    panda$core$String* $tmp1385;
    panda$core$Object* $returnValue1388;
    panda$core$Object* $tmp1389;
    panda$core$String* $tmp1390;
    panda$core$String* $tmp1391;
    panda$core$String* $tmp1392;
    panda$core$String* $tmp1393;
    panda$core$String* $tmp1394;
    panda$core$String* $tmp1395;
    int $tmp1347;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1351, 1);
        ITable* $tmp1352 = p_groups->$class->itable;
        while ($tmp1352->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1352 = $tmp1352->next;
        }
        $fn1354 $tmp1353 = $tmp1352->methods[0];
        panda$core$Object* $tmp1355 = $tmp1353(p_groups, $tmp1351);
        $tmp1350 = $tmp1355;
        $tmp1349 = ((panda$core$String*) $tmp1350);
        list1348 = $tmp1349;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1349));
        panda$core$Panda$unref$panda$core$Object($tmp1350);
        panda$core$Int64$init$builtin_int64(&$tmp1359, 3);
        ITable* $tmp1360 = p_groups->$class->itable;
        while ($tmp1360->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1360 = $tmp1360->next;
        }
        $fn1362 $tmp1361 = $tmp1360->methods[0];
        panda$core$Object* $tmp1363 = $tmp1361(p_groups, $tmp1359);
        $tmp1358 = $tmp1363;
        $tmp1357 = ((panda$core$String*) $tmp1358);
        listStart1356 = $tmp1357;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1357));
        panda$core$Panda$unref$panda$core$Object($tmp1358);
        memset(&listType1364, 0, sizeof(listType1364));
        panda$core$RegularExpression* $tmp1366 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp1366, &$s1367);
        $tmp1365 = $tmp1366;
        panda$core$Bit $tmp1368 = panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit(listStart1356, $tmp1365);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1365));
        if ($tmp1368.value) {
        {
            {
                $tmp1369 = listType1364;
                $tmp1370 = &$s1371;
                listType1364 = $tmp1370;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1370));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1369));
            }
        }
        }
        else {
        {
            {
                $tmp1372 = listType1364;
                $tmp1373 = &$s1374;
                listType1364 = $tmp1373;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1373));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1372));
            }
        }
        }
        {
            $tmp1375 = list1348;
            panda$core$RegularExpression* $tmp1379 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
            panda$core$RegularExpression$init$panda$core$String($tmp1379, &$s1380);
            $tmp1378 = $tmp1379;
            panda$core$String* $tmp1382 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(list1348, $tmp1378, &$s1381);
            $tmp1377 = $tmp1382;
            $tmp1376 = $tmp1377;
            list1348 = $tmp1376;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1376));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1377));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1378));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1375));
        }
        panda$core$String* $tmp1387 = (($fn1386) self->$class->vtable[20])(self, list1348);
        $tmp1385 = $tmp1387;
        $tmp1384 = $tmp1385;
        result1383 = $tmp1384;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1384));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1385));
        panda$core$String* $tmp1397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1396, listType1364);
        $tmp1395 = $tmp1397;
        panda$core$String* $tmp1399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1395, &$s1398);
        $tmp1394 = $tmp1399;
        panda$core$String* $tmp1400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1394, result1383);
        $tmp1393 = $tmp1400;
        panda$core$String* $tmp1402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1393, &$s1401);
        $tmp1392 = $tmp1402;
        panda$core$String* $tmp1403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1392, listType1364);
        $tmp1391 = $tmp1403;
        panda$core$String* $tmp1405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1391, &$s1404);
        $tmp1390 = $tmp1405;
        $tmp1389 = ((panda$core$Object*) $tmp1390);
        $returnValue1388 = $tmp1389;
        panda$core$Panda$ref$panda$core$Object($tmp1389);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1390));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1391));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1392));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1393));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1394));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1395));
        $tmp1347 = 0;
        goto $l1345;
        $l1406:;
        return $returnValue1388;
    }
    $l1345:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1383));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) listType1364));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) listStart1356));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list1348));
    list1348 = NULL;
    listStart1356 = NULL;
    result1383 = NULL;
    switch ($tmp1347) {
        case 0: goto $l1406;
    }
    $l1408:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doLists$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$core$Int64 lessThanTab1412;
    panda$core$Int64 $tmp1413;
    panda$core$Int64 $tmp1414;
    panda$core$String* wholeList1416 = NULL;
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
    panda$core$String* $tmp1431;
    panda$core$String* $tmp1432;
    panda$core$String* $tmp1433;
    panda$core$String* $tmp1435;
    panda$core$String* $tmp1436;
    panda$core$Object* $tmp1438;
    panda$core$Int64 $tmp1474;
    panda$core$RegularExpression* matchStartOfLine1479 = NULL;
    panda$core$RegularExpression* $tmp1480;
    panda$core$RegularExpression* $tmp1481;
    panda$core$String* $tmp1483;
    panda$core$String* $tmp1484;
    panda$core$RegularExpression* matchStartOfLine1494 = NULL;
    panda$core$RegularExpression* $tmp1495;
    panda$core$RegularExpression* $tmp1496;
    panda$core$String* $tmp1498;
    int $tmp1411;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1413, 4);
        panda$core$Int64$init$builtin_int64(&$tmp1414, 1);
        panda$core$Int64 $tmp1415 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1413, $tmp1414);
        lessThanTab1412 = $tmp1415;
        panda$core$Int64$wrapper* $tmp1439;
        $tmp1439 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp1439->value = lessThanTab1412;
        $tmp1438 = ((panda$core$Object*) $tmp1439);
        panda$core$String* $tmp1440 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1437, $tmp1438);
        $tmp1436 = $tmp1440;
        panda$core$String* $tmp1442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1436, &$s1441);
        $tmp1435 = $tmp1442;
        panda$core$String* $tmp1443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1434, $tmp1435);
        $tmp1433 = $tmp1443;
        panda$core$String* $tmp1445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1433, &$s1444);
        $tmp1432 = $tmp1445;
        panda$core$String* $tmp1447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1432, &$s1446);
        $tmp1431 = $tmp1447;
        panda$core$String* $tmp1449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1431, &$s1448);
        $tmp1430 = $tmp1449;
        panda$core$String* $tmp1451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1430, &$s1450);
        $tmp1429 = $tmp1451;
        panda$core$String* $tmp1453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1429, &$s1452);
        $tmp1428 = $tmp1453;
        panda$core$String* $tmp1455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1428, &$s1454);
        $tmp1427 = $tmp1455;
        panda$core$String* $tmp1457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1427, &$s1456);
        $tmp1426 = $tmp1457;
        panda$core$String* $tmp1459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1426, &$s1458);
        $tmp1425 = $tmp1459;
        panda$core$String* $tmp1461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1425, &$s1460);
        $tmp1424 = $tmp1461;
        panda$core$String* $tmp1463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1424, &$s1462);
        $tmp1423 = $tmp1463;
        panda$core$String* $tmp1465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1423, &$s1464);
        $tmp1422 = $tmp1465;
        panda$core$String* $tmp1467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1422, &$s1466);
        $tmp1421 = $tmp1467;
        panda$core$String* $tmp1469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1421, &$s1468);
        $tmp1420 = $tmp1469;
        panda$core$String* $tmp1471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1420, &$s1470);
        $tmp1419 = $tmp1471;
        panda$core$String* $tmp1473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1419, &$s1472);
        $tmp1418 = $tmp1473;
        $tmp1417 = $tmp1418;
        wholeList1416 = $tmp1417;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1417));
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
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1431));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1432));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1433));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1435));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1436));
        panda$core$Panda$unref$panda$core$Object($tmp1438);
        panda$core$Int64$init$builtin_int64(&$tmp1474, 0);
        panda$core$Bit $tmp1475 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->listLevel, $tmp1474);
        if ($tmp1475.value) {
        {
            int $tmp1478;
            {
                panda$core$RegularExpression* $tmp1482 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                panda$core$String* $tmp1486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1485, wholeList1416);
                $tmp1484 = $tmp1486;
                panda$core$String* $tmp1488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1484, &$s1487);
                $tmp1483 = $tmp1488;
                panda$core$RegularExpression$init$panda$core$String($tmp1482, $tmp1483);
                $tmp1481 = $tmp1482;
                $tmp1480 = $tmp1481;
                matchStartOfLine1479 = $tmp1480;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1480));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1481));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1483));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1484));
                panda$core$MutableMethod* $tmp1489 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
                panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1489, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous16$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) self));
                panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_text, matchStartOfLine1479, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1489)));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1489));
            }
            $tmp1478 = -1;
            goto $l1476;
            $l1476:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matchStartOfLine1479));
            matchStartOfLine1479 = NULL;
            switch ($tmp1478) {
                case -1: goto $l1490;
            }
            $l1490:;
        }
        }
        else {
        {
            int $tmp1493;
            {
                panda$core$RegularExpression* $tmp1497 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                panda$core$String* $tmp1500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1499, wholeList1416);
                $tmp1498 = $tmp1500;
                panda$core$RegularExpression$init$panda$core$String($tmp1497, $tmp1498);
                $tmp1496 = $tmp1497;
                $tmp1495 = $tmp1496;
                matchStartOfLine1494 = $tmp1495;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1495));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1496));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1498));
                panda$core$MutableMethod* $tmp1501 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
                panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1501, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous17$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) self));
                panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_text, matchStartOfLine1494, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1501)));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1501));
            }
            $tmp1493 = -1;
            goto $l1491;
            $l1491:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matchStartOfLine1494));
            matchStartOfLine1494 = NULL;
            switch ($tmp1493) {
                case -1: goto $l1502;
            }
            $l1502:;
        }
        }
    }
    $tmp1411 = -1;
    goto $l1409;
    $l1409:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) wholeList1416));
    wholeList1416 = NULL;
    switch ($tmp1411) {
        case -1: goto $l1503;
    }
    $l1503:;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous18$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* text1507 = NULL;
    panda$core$String* $tmp1508;
    panda$core$Object* $tmp1509;
    panda$core$Int64 $tmp1510;
    panda$core$MutableString* item1515 = NULL;
    panda$core$MutableString* $tmp1516;
    panda$core$MutableString* $tmp1517;
    panda$core$String* leadingLine1519 = NULL;
    panda$core$String* $tmp1520;
    panda$core$Object* $tmp1521;
    panda$core$Int64 $tmp1522;
    panda$core$String* $returnValue1536;
    panda$core$String* $tmp1537;
    panda$core$String* $tmp1538;
    panda$core$String* $tmp1539;
    int $tmp1506;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1510, 4);
        ITable* $tmp1511 = p_groups->$class->itable;
        while ($tmp1511->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1511 = $tmp1511->next;
        }
        $fn1513 $tmp1512 = $tmp1511->methods[0];
        panda$core$Object* $tmp1514 = $tmp1512(p_groups, $tmp1510);
        $tmp1509 = $tmp1514;
        $tmp1508 = ((panda$core$String*) $tmp1509);
        text1507 = $tmp1508;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1508));
        panda$core$Panda$unref$panda$core$Object($tmp1509);
        panda$core$MutableString* $tmp1518 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp1518, text1507);
        $tmp1517 = $tmp1518;
        $tmp1516 = $tmp1517;
        item1515 = $tmp1516;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1516));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1517));
        panda$core$Int64$init$builtin_int64(&$tmp1522, 1);
        ITable* $tmp1523 = p_groups->$class->itable;
        while ($tmp1523->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1523 = $tmp1523->next;
        }
        $fn1525 $tmp1524 = $tmp1523->methods[0];
        panda$core$Object* $tmp1526 = $tmp1524(p_groups, $tmp1522);
        $tmp1521 = $tmp1526;
        $tmp1520 = ((panda$core$String*) $tmp1521);
        leadingLine1519 = $tmp1520;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1520));
        panda$core$Panda$unref$panda$core$Object($tmp1521);
        panda$core$Bit $tmp1528 = org$pandalanguage$pandac$pandadoc$Markdown$isEmptyString$panda$core$String$Q$R$panda$core$Bit(leadingLine1519);
        panda$core$Bit $tmp1529 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1528);
        bool $tmp1527 = $tmp1529.value;
        if ($tmp1527) goto $l1530;
        panda$core$Bit $tmp1531 = org$pandalanguage$pandac$pandadoc$Markdown$hasParagraphBreak$panda$core$MutableString$R$panda$core$Bit(item1515);
        $tmp1527 = $tmp1531.value;
        $l1530:;
        panda$core$Bit $tmp1532 = { $tmp1527 };
        if ($tmp1532.value) {
        {
            org$pandalanguage$pandac$pandadoc$Markdown$outdent$panda$core$MutableString(item1515);
            (($fn1533) self->$class->vtable[6])(self, item1515);
        }
        }
        else {
        {
            org$pandalanguage$pandac$pandadoc$Markdown$outdent$panda$core$MutableString(item1515);
            (($fn1534) self->$class->vtable[19])(self, item1515);
            (($fn1535) self->$class->vtable[22])(self, item1515);
        }
        }
        panda$core$MutableString$trim(item1515);
        panda$core$String* $tmp1541 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1540, ((panda$core$Object*) item1515));
        $tmp1539 = $tmp1541;
        panda$core$String* $tmp1543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1539, &$s1542);
        $tmp1538 = $tmp1543;
        $tmp1537 = $tmp1538;
        $returnValue1536 = $tmp1537;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1537));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1538));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1539));
        $tmp1506 = 0;
        goto $l1504;
        $l1544:;
        return $returnValue1536;
    }
    $l1504:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) leadingLine1519));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) item1515));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) text1507));
    text1507 = NULL;
    item1515 = NULL;
    leadingLine1519 = NULL;
    switch ($tmp1506) {
        case 0: goto $l1544;
    }
    $l1546:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim19$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar1550 = NULL;
    panda$core$Method* $tmp1551;
    panda$core$Method* $tmp1552;
    panda$core$Object* $tmp1554;
    panda$core$Object* $tmp1555;
    panda$core$Object* $returnValue1556;
    panda$core$Object* $tmp1557;
    panda$core$String* $tmp1558;
    panda$core$String* $tmp1559;
    int $tmp1549;
    {
        panda$core$Method* $tmp1553 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp1553, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp1552 = $tmp1553;
        $tmp1551 = $tmp1552;
        methodVar1550 = $tmp1551;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1551));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1552));
        {
            $tmp1554 = ((panda$core$MutableMethod*) methodVar1550)->target;
            $tmp1555 = self->target;
            ((panda$core$MutableMethod*) methodVar1550)->target = $tmp1555;
            panda$core$Panda$ref$panda$core$Object($tmp1555);
            panda$core$Panda$unref$panda$core$Object($tmp1554);
        }
        if (methodVar1550->target) {
            $tmp1559 = (($fn1560) methodVar1550->pointer)(methodVar1550->target, p_p0);
        } else {
            $tmp1559 = (($fn1561) methodVar1550->pointer)(p_p0);
        }
        $tmp1558 = $tmp1559;
        $tmp1557 = ((panda$core$Object*) $tmp1558);
        $returnValue1556 = $tmp1557;
        panda$core$Panda$ref$panda$core$Object($tmp1557);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1558));
        $tmp1549 = 0;
        goto $l1547;
        $l1562:;
        return $returnValue1556;
    }
    $l1547:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar1550));
    methodVar1550 = NULL;
    switch ($tmp1549) {
        case 0: goto $l1562;
    }
    $l1564:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$processListItems$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$String* p_rawList) {
    org$pandalanguage$pandac$pandadoc$Markdown* $tmp1568;
    panda$core$Int64 $tmp1569;
    panda$core$String* list1571 = NULL;
    panda$core$String* $tmp1572;
    panda$core$String* $tmp1573;
    panda$core$RegularExpression* $tmp1574;
    panda$core$RegularExpression* p1579 = NULL;
    panda$core$RegularExpression* $tmp1580;
    panda$core$RegularExpression* $tmp1581;
    panda$core$Int64 $tmp1584;
    panda$core$String* $tmp1585;
    panda$core$String* $tmp1586;
    panda$core$String* $tmp1587;
    org$pandalanguage$pandac$pandadoc$Markdown* $tmp1591;
    panda$core$Int64 $tmp1592;
    panda$core$String* $returnValue1594;
    panda$core$String* $tmp1595;
    int $tmp1567;
    {
        $tmp1568 = self;
        panda$core$Int64$init$builtin_int64(&$tmp1569, 1);
        panda$core$Int64 $tmp1570 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1568->listLevel, $tmp1569);
        $tmp1568->listLevel = $tmp1570;
        panda$core$RegularExpression* $tmp1575 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp1575, &$s1576);
        $tmp1574 = $tmp1575;
        panda$core$String* $tmp1578 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(p_rawList, $tmp1574, &$s1577);
        $tmp1573 = $tmp1578;
        $tmp1572 = $tmp1573;
        list1571 = $tmp1572;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1572));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1573));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1574));
        panda$core$RegularExpression* $tmp1582 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp1584, 1);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1582, &$s1583, $tmp1584);
        $tmp1581 = $tmp1582;
        $tmp1580 = $tmp1581;
        p1579 = $tmp1580;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1580));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1581));
        {
            $tmp1585 = list1571;
            panda$core$MutableMethod* $tmp1588 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
            panda$core$MutableMethod* $tmp1589 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
            panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1589, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous18$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
            panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1588, (panda$core$Int8*) &panda$core$MutableMethod$$shim19$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp1589)));
            panda$core$String* $tmp1590 = panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String(list1571, p1579, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1588)));
            $tmp1587 = $tmp1590;
            $tmp1586 = $tmp1587;
            list1571 = $tmp1586;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1586));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1587));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1588));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1589));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1585));
        }
        $tmp1591 = self;
        panda$core$Int64$init$builtin_int64(&$tmp1592, 1);
        panda$core$Int64 $tmp1593 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1591->listLevel, $tmp1592);
        $tmp1591->listLevel = $tmp1593;
        $tmp1595 = list1571;
        $returnValue1594 = $tmp1595;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1595));
        $tmp1567 = 0;
        goto $l1565;
        $l1596:;
        return $returnValue1594;
    }
    $l1565:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1579));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list1571));
    list1571 = NULL;
    p1579 = NULL;
    switch ($tmp1567) {
        case 0: goto $l1596;
    }
    $l1598:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$pandadoc$Markdown$hasParagraphBreak$panda$core$MutableString$R$panda$core$Bit(panda$core$MutableString* p_item) {
    panda$core$Bit $returnValue1599;
    panda$core$Bit $tmp1601 = panda$core$MutableString$contains$panda$core$String$R$panda$core$Bit(p_item, &$s1600);
    $returnValue1599 = $tmp1601;
    return $returnValue1599;
}
panda$core$Bit org$pandalanguage$pandac$pandadoc$Markdown$isEmptyString$panda$core$String$Q$R$panda$core$Bit(panda$core$String* p_leadingLine) {
    panda$core$Bit $returnValue1603;
    panda$core$String* $tmp1606;
    panda$core$Bit $tmp1613;
    bool $tmp1604 = ((panda$core$Bit) { p_leadingLine == NULL }).value;
    if ($tmp1604) goto $l1605;
    $tmp1606 = p_leadingLine;
    panda$core$Bit $tmp1610;
    if (((panda$core$Bit) { $tmp1606 != NULL }).value) goto $l1607; else goto $l1608;
    $l1607:;
    panda$core$Bit $tmp1612 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp1606, &$s1611);
    $tmp1610 = $tmp1612;
    goto $l1609;
    $l1608:;
    panda$core$Bit$init$builtin_bit(&$tmp1613, false);
    $tmp1610 = $tmp1613;
    goto $l1609;
    $l1609:;
    $tmp1604 = $tmp1610.value;
    $l1605:;
    panda$core$Bit $tmp1614 = { $tmp1604 };
    $returnValue1603 = $tmp1614;
    return $returnValue1603;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous20$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$MutableString* result1619 = NULL;
    panda$core$MutableString* $tmp1620;
    panda$core$MutableString* $tmp1621;
    panda$core$Object* $tmp1623;
    panda$core$Int64 $tmp1624;
    panda$core$String* $returnValue1630;
    panda$core$String* $tmp1631;
    panda$core$String* $tmp1632;
    panda$core$String* $tmp1633;
    panda$core$String* $tmp1634;
    panda$core$String* $tmp1635;
    panda$core$Object* $tmp1637;
    panda$core$Int64 $tmp1638;
    int $tmp1618;
    {
        panda$core$MutableString* $tmp1622 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$Int64$init$builtin_int64(&$tmp1624, 1);
        ITable* $tmp1625 = p_groups->$class->itable;
        while ($tmp1625->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1625 = $tmp1625->next;
        }
        $fn1627 $tmp1626 = $tmp1625->methods[0];
        panda$core$Object* $tmp1628 = $tmp1626(p_groups, $tmp1624);
        $tmp1623 = $tmp1628;
        panda$core$MutableString$init$panda$core$String($tmp1622, ((panda$core$String*) $tmp1623));
        $tmp1621 = $tmp1622;
        $tmp1620 = $tmp1621;
        result1619 = $tmp1620;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1620));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1621));
        panda$core$Panda$unref$panda$core$Object($tmp1623);
        (($fn1629) self->$class->vtable[22])(self, result1619);
        panda$core$Int64$init$builtin_int64(&$tmp1638, 1);
        ITable* $tmp1639 = p_groups->$class->itable;
        while ($tmp1639->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1639 = $tmp1639->next;
        }
        $fn1641 $tmp1640 = $tmp1639->methods[0];
        panda$core$Object* $tmp1642 = $tmp1640(p_groups, $tmp1638);
        $tmp1637 = $tmp1642;
        panda$core$String* $tmp1643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1636, ((panda$core$String*) $tmp1637));
        $tmp1635 = $tmp1643;
        panda$core$String* $tmp1645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1635, &$s1644);
        $tmp1634 = $tmp1645;
        panda$core$String* $tmp1646 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1634, ((panda$core$Object*) result1619));
        $tmp1633 = $tmp1646;
        panda$core$String* $tmp1648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1633, &$s1647);
        $tmp1632 = $tmp1648;
        $tmp1631 = $tmp1632;
        $returnValue1630 = $tmp1631;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1631));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1632));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1633));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1634));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1635));
        panda$core$Panda$unref$panda$core$Object($tmp1637);
        $tmp1618 = 0;
        goto $l1616;
        $l1649:;
        return $returnValue1630;
    }
    $l1616:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1619));
    result1619 = NULL;
    switch ($tmp1618) {
        case 0: goto $l1649;
    }
    $l1651:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim21$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar1655 = NULL;
    panda$core$Method* $tmp1656;
    panda$core$Method* $tmp1657;
    panda$core$Object* $tmp1659;
    panda$core$Object* $tmp1660;
    panda$core$Object* $returnValue1661;
    panda$core$Object* $tmp1662;
    panda$core$String* $tmp1663;
    panda$core$String* $tmp1664;
    int $tmp1654;
    {
        panda$core$Method* $tmp1658 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp1658, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp1657 = $tmp1658;
        $tmp1656 = $tmp1657;
        methodVar1655 = $tmp1656;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1656));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1657));
        {
            $tmp1659 = ((panda$core$MutableMethod*) methodVar1655)->target;
            $tmp1660 = self->target;
            ((panda$core$MutableMethod*) methodVar1655)->target = $tmp1660;
            panda$core$Panda$ref$panda$core$Object($tmp1660);
            panda$core$Panda$unref$panda$core$Object($tmp1659);
        }
        if (methodVar1655->target) {
            $tmp1664 = (($fn1665) methodVar1655->pointer)(methodVar1655->target, p_p0);
        } else {
            $tmp1664 = (($fn1666) methodVar1655->pointer)(p_p0);
        }
        $tmp1663 = $tmp1664;
        $tmp1662 = ((panda$core$Object*) $tmp1663);
        $returnValue1661 = $tmp1662;
        panda$core$Panda$ref$panda$core$Object($tmp1662);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1663));
        $tmp1654 = 0;
        goto $l1652;
        $l1667:;
        return $returnValue1661;
    }
    $l1652:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar1655));
    methodVar1655 = NULL;
    switch ($tmp1654) {
        case 0: goto $l1667;
    }
    $l1669:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous22$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$MutableString* result1673 = NULL;
    panda$core$MutableString* $tmp1674;
    panda$core$MutableString* $tmp1675;
    panda$core$Object* $tmp1677;
    panda$core$Int64 $tmp1678;
    panda$core$String* $returnValue1684;
    panda$core$String* $tmp1685;
    panda$core$String* $tmp1686;
    panda$core$String* $tmp1687;
    panda$core$String* $tmp1688;
    panda$core$String* $tmp1689;
    panda$core$Object* $tmp1691;
    panda$core$Int64 $tmp1692;
    int $tmp1672;
    {
        panda$core$MutableString* $tmp1676 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$Int64$init$builtin_int64(&$tmp1678, 1);
        ITable* $tmp1679 = p_groups->$class->itable;
        while ($tmp1679->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1679 = $tmp1679->next;
        }
        $fn1681 $tmp1680 = $tmp1679->methods[0];
        panda$core$Object* $tmp1682 = $tmp1680(p_groups, $tmp1678);
        $tmp1677 = $tmp1682;
        panda$core$MutableString$init$panda$core$String($tmp1676, ((panda$core$String*) $tmp1677));
        $tmp1675 = $tmp1676;
        $tmp1674 = $tmp1675;
        result1673 = $tmp1674;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1674));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1675));
        panda$core$Panda$unref$panda$core$Object($tmp1677);
        (($fn1683) self->$class->vtable[22])(self, result1673);
        panda$core$Int64$init$builtin_int64(&$tmp1692, 1);
        ITable* $tmp1693 = p_groups->$class->itable;
        while ($tmp1693->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1693 = $tmp1693->next;
        }
        $fn1695 $tmp1694 = $tmp1693->methods[0];
        panda$core$Object* $tmp1696 = $tmp1694(p_groups, $tmp1692);
        $tmp1691 = $tmp1696;
        panda$core$String* $tmp1697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1690, ((panda$core$String*) $tmp1691));
        $tmp1689 = $tmp1697;
        panda$core$String* $tmp1699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1689, &$s1698);
        $tmp1688 = $tmp1699;
        panda$core$String* $tmp1700 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1688, ((panda$core$Object*) result1673));
        $tmp1687 = $tmp1700;
        panda$core$String* $tmp1702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1687, &$s1701);
        $tmp1686 = $tmp1702;
        $tmp1685 = $tmp1686;
        $returnValue1684 = $tmp1685;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1685));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1686));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1687));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1688));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1689));
        panda$core$Panda$unref$panda$core$Object($tmp1691);
        $tmp1672 = 0;
        goto $l1670;
        $l1703:;
        return $returnValue1684;
    }
    $l1670:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1673));
    result1673 = NULL;
    switch ($tmp1672) {
        case 0: goto $l1703;
    }
    $l1705:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim23$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar1709 = NULL;
    panda$core$Method* $tmp1710;
    panda$core$Method* $tmp1711;
    panda$core$Object* $tmp1713;
    panda$core$Object* $tmp1714;
    panda$core$Object* $returnValue1715;
    panda$core$Object* $tmp1716;
    panda$core$String* $tmp1717;
    panda$core$String* $tmp1718;
    int $tmp1708;
    {
        panda$core$Method* $tmp1712 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp1712, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp1711 = $tmp1712;
        $tmp1710 = $tmp1711;
        methodVar1709 = $tmp1710;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1710));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1711));
        {
            $tmp1713 = ((panda$core$MutableMethod*) methodVar1709)->target;
            $tmp1714 = self->target;
            ((panda$core$MutableMethod*) methodVar1709)->target = $tmp1714;
            panda$core$Panda$ref$panda$core$Object($tmp1714);
            panda$core$Panda$unref$panda$core$Object($tmp1713);
        }
        if (methodVar1709->target) {
            $tmp1718 = (($fn1719) methodVar1709->pointer)(methodVar1709->target, p_p0);
        } else {
            $tmp1718 = (($fn1720) methodVar1709->pointer)(p_p0);
        }
        $tmp1717 = $tmp1718;
        $tmp1716 = ((panda$core$Object*) $tmp1717);
        $returnValue1715 = $tmp1716;
        panda$core$Panda$ref$panda$core$Object($tmp1716);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1717));
        $tmp1708 = 0;
        goto $l1706;
        $l1721:;
        return $returnValue1715;
    }
    $l1706:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar1709));
    methodVar1709 = NULL;
    switch ($tmp1708) {
        case 0: goto $l1721;
    }
    $l1723:;
    abort();
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous24$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* marker1727 = NULL;
    panda$core$String* $tmp1728;
    panda$core$Object* $tmp1729;
    panda$core$Int64 $tmp1730;
    panda$core$MutableString* heading1735 = NULL;
    panda$core$MutableString* $tmp1736;
    panda$core$MutableString* $tmp1737;
    panda$core$Object* $tmp1739;
    panda$core$Int64 $tmp1740;
    panda$core$Int64 level1746;
    panda$core$String* tag1748 = NULL;
    panda$core$String* $tmp1749;
    panda$core$String* $tmp1750;
    panda$core$Object* $tmp1752;
    panda$core$Object* $returnValue1755;
    panda$core$Object* $tmp1756;
    panda$core$String* $tmp1757;
    panda$core$String* $tmp1758;
    panda$core$String* $tmp1759;
    panda$core$String* $tmp1760;
    panda$core$String* $tmp1761;
    panda$core$String* $tmp1762;
    int $tmp1726;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1730, 1);
        ITable* $tmp1731 = p_groups->$class->itable;
        while ($tmp1731->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1731 = $tmp1731->next;
        }
        $fn1733 $tmp1732 = $tmp1731->methods[0];
        panda$core$Object* $tmp1734 = $tmp1732(p_groups, $tmp1730);
        $tmp1729 = $tmp1734;
        $tmp1728 = ((panda$core$String*) $tmp1729);
        marker1727 = $tmp1728;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1728));
        panda$core$Panda$unref$panda$core$Object($tmp1729);
        panda$core$MutableString* $tmp1738 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$Int64$init$builtin_int64(&$tmp1740, 2);
        ITable* $tmp1741 = p_groups->$class->itable;
        while ($tmp1741->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1741 = $tmp1741->next;
        }
        $fn1743 $tmp1742 = $tmp1741->methods[0];
        panda$core$Object* $tmp1744 = $tmp1742(p_groups, $tmp1740);
        $tmp1739 = $tmp1744;
        panda$core$MutableString$init$panda$core$String($tmp1738, ((panda$core$String*) $tmp1739));
        $tmp1737 = $tmp1738;
        $tmp1736 = $tmp1737;
        heading1735 = $tmp1736;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1736));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1737));
        panda$core$Panda$unref$panda$core$Object($tmp1739);
        (($fn1745) self->$class->vtable[22])(self, heading1735);
        panda$core$Int64 $tmp1747 = panda$core$String$length$R$panda$core$Int64(marker1727);
        level1746 = $tmp1747;
        panda$core$Int64$wrapper* $tmp1753;
        $tmp1753 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp1753->value = level1746;
        $tmp1752 = ((panda$core$Object*) $tmp1753);
        panda$core$String* $tmp1754 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1751, $tmp1752);
        $tmp1750 = $tmp1754;
        $tmp1749 = $tmp1750;
        tag1748 = $tmp1749;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1749));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1750));
        panda$core$Panda$unref$panda$core$Object($tmp1752);
        panda$core$String* $tmp1764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1763, tag1748);
        $tmp1762 = $tmp1764;
        panda$core$String* $tmp1766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1762, &$s1765);
        $tmp1761 = $tmp1766;
        panda$core$String* $tmp1767 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1761, ((panda$core$Object*) heading1735));
        $tmp1760 = $tmp1767;
        panda$core$String* $tmp1769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1760, &$s1768);
        $tmp1759 = $tmp1769;
        panda$core$String* $tmp1770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1759, tag1748);
        $tmp1758 = $tmp1770;
        panda$core$String* $tmp1772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1758, &$s1771);
        $tmp1757 = $tmp1772;
        $tmp1756 = ((panda$core$Object*) $tmp1757);
        $returnValue1755 = $tmp1756;
        panda$core$Panda$ref$panda$core$Object($tmp1756);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1757));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1758));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1759));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1760));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1761));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1762));
        $tmp1726 = 0;
        goto $l1724;
        $l1773:;
        return $returnValue1755;
    }
    $l1724:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tag1748));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) heading1735));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) marker1727));
    marker1727 = NULL;
    heading1735 = NULL;
    tag1748 = NULL;
    switch ($tmp1726) {
        case 0: goto $l1773;
    }
    $l1775:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doHeaders$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* $tmp1779;
    panda$core$RegularExpression* $tmp1784;
    panda$core$RegularExpression* p1789 = NULL;
    panda$core$RegularExpression* $tmp1790;
    panda$core$RegularExpression* $tmp1791;
    panda$core$Int64 $tmp1794;
    int $tmp1778;
    {
        panda$core$RegularExpression* $tmp1780 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp1780, &$s1781);
        $tmp1779 = $tmp1780;
        panda$core$MutableMethod* $tmp1782 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp1783 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1783, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous20$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1782, (panda$core$Int8*) &panda$core$MutableMethod$$shim21$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp1783)));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, $tmp1779, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1782)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1782));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1783));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1779));
        panda$core$RegularExpression* $tmp1785 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp1785, &$s1786);
        $tmp1784 = $tmp1785;
        panda$core$MutableMethod* $tmp1787 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp1788 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1788, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous22$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1787, (panda$core$Int8*) &panda$core$MutableMethod$$shim23$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp1788)));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, $tmp1784, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1787)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1787));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1788));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1784));
        panda$core$RegularExpression* $tmp1792 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp1794, 1);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1792, &$s1793, $tmp1794);
        $tmp1791 = $tmp1792;
        $tmp1790 = $tmp1791;
        p1789 = $tmp1790;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1790));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1791));
        panda$core$MutableMethod* $tmp1795 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1795, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous24$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) self));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, p1789, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1795)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1795));
    }
    $tmp1778 = -1;
    goto $l1776;
    $l1776:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1789));
    p1789 = NULL;
    switch ($tmp1778) {
        case -1: goto $l1796;
    }
    $l1796:;
}
void org$pandalanguage$pandac$pandadoc$Markdown$runSpanGamut$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$core$RegularExpression* $tmp1806;
    (($fn1797) self->$class->vtable[24])(self, p_text);
    (($fn1798) self->$class->vtable[29])(self, p_text);
    (($fn1799) self->$class->vtable[3])(self, p_text);
    (($fn1800) self->$class->vtable[25])(self, p_text);
    (($fn1801) self->$class->vtable[26])(self, p_text);
    (($fn1802) self->$class->vtable[10])(self, p_text);
    (($fn1803) self->$class->vtable[24])(self, p_text);
    (($fn1804) self->$class->vtable[28])(self, p_text);
    (($fn1805) self->$class->vtable[27])(self, p_text);
    panda$core$RegularExpression* $tmp1807 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp1807, &$s1808);
    $tmp1806 = $tmp1807;
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_text, $tmp1806, &$s1809);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1806));
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$nestedTagsRegex$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_depth) {
    panda$core$Int64 $tmp1810;
    panda$core$String* $returnValue1812;
    panda$core$String* $tmp1813;
    panda$core$String* $tmp1816;
    panda$core$String* $tmp1817;
    panda$core$String* $tmp1818;
    panda$core$String* $tmp1820;
    panda$core$Int64 $tmp1821;
    panda$core$Int64$init$builtin_int64(&$tmp1810, 0);
    panda$core$Bit $tmp1811 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_depth, $tmp1810);
    if ($tmp1811.value) {
    {
        $tmp1813 = &$s1814;
        $returnValue1812 = $tmp1813;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1813));
        return $returnValue1812;
    }
    }
    else {
    {
        panda$core$Int64$init$builtin_int64(&$tmp1821, 1);
        panda$core$Int64 $tmp1822 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_depth, $tmp1821);
        panda$core$String* $tmp1823 = org$pandalanguage$pandac$pandadoc$Markdown$nestedTagsRegex$panda$core$Int64$R$panda$core$String($tmp1822);
        $tmp1820 = $tmp1823;
        panda$core$String* $tmp1824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1819, $tmp1820);
        $tmp1818 = $tmp1824;
        panda$core$String* $tmp1826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1818, &$s1825);
        $tmp1817 = $tmp1826;
        $tmp1816 = $tmp1817;
        $returnValue1812 = $tmp1816;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1816));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1817));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1818));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1820));
        return $returnValue1812;
    }
    }
    abort();
}
panda$collections$ListView* org$pandalanguage$pandac$pandadoc$Markdown$tokenizeHTML$panda$core$String$R$panda$collections$ListView$LTorg$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$GT(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$String* p_text) {
    panda$collections$Array* tokens1831 = NULL;
    panda$collections$Array* $tmp1832;
    panda$collections$Array* $tmp1833;
    panda$core$String* nestedTags1835 = NULL;
    panda$core$String* $tmp1836;
    panda$core$String* $tmp1837;
    panda$core$Int64 $tmp1838;
    panda$core$RegularExpression* p1840 = NULL;
    panda$core$RegularExpression* $tmp1841;
    panda$core$RegularExpression* $tmp1842;
    panda$core$String* $tmp1844;
    panda$core$Int64 $tmp1847;
    panda$core$Matcher* m1848 = NULL;
    panda$core$Matcher* $tmp1849;
    panda$core$Matcher* $tmp1850;
    panda$core$String$Index lastPos1852;
    panda$core$Comparable* $tmp1858;
    panda$core$Comparable* $tmp1860;
    panda$core$String$Index $tmp1861;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1867;
    panda$core$Int64 $tmp1869;
    panda$core$String* $tmp1870;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1871;
    panda$core$String$Index $tmp1872;
    panda$core$Bit $tmp1873;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1875;
    panda$core$Int64 $tmp1877;
    panda$core$String* $tmp1878;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1879;
    panda$core$String$Index $tmp1880;
    panda$core$String$Index $tmp1881;
    panda$core$Bit $tmp1882;
    panda$core$String$Index $tmp1884;
    panda$core$Comparable* $tmp1885;
    panda$core$Comparable* $tmp1887;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1894;
    panda$core$Int64 $tmp1896;
    panda$core$String* $tmp1897;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp1898;
    panda$core$Bit $tmp1900;
    panda$collections$ListView* $returnValue1902;
    panda$collections$ListView* $tmp1903;
    int $tmp1830;
    {
        panda$collections$Array* $tmp1834 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1834);
        $tmp1833 = $tmp1834;
        $tmp1832 = $tmp1833;
        tokens1831 = $tmp1832;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1832));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1833));
        panda$core$Int64$init$builtin_int64(&$tmp1838, 6);
        panda$core$String* $tmp1839 = org$pandalanguage$pandac$pandadoc$Markdown$nestedTagsRegex$panda$core$Int64$R$panda$core$String($tmp1838);
        $tmp1837 = $tmp1839;
        $tmp1836 = $tmp1837;
        nestedTags1835 = $tmp1836;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1836));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1837));
        panda$core$RegularExpression* $tmp1843 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$String* $tmp1846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1845, nestedTags1835);
        $tmp1844 = $tmp1846;
        panda$core$Int64$init$builtin_int64(&$tmp1847, 2);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1843, $tmp1844, $tmp1847);
        $tmp1842 = $tmp1843;
        $tmp1841 = $tmp1842;
        p1840 = $tmp1841;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1841));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1842));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1844));
        panda$core$Matcher* $tmp1851 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p1840, p_text);
        $tmp1850 = $tmp1851;
        $tmp1849 = $tmp1850;
        m1848 = $tmp1849;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1849));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1850));
        panda$core$String$Index $tmp1853 = panda$core$String$start$R$panda$core$String$Index(p_text);
        lastPos1852 = $tmp1853;
        $l1854:;
        panda$core$Bit $tmp1857 = panda$core$Matcher$find$R$panda$core$Bit(m1848);
        bool $tmp1856 = $tmp1857.value;
        if (!$tmp1856) goto $l1855;
        {
            panda$core$String$Index$wrapper* $tmp1859;
            $tmp1859 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
            $tmp1859->value = lastPos1852;
            $tmp1858 = ((panda$core$Comparable*) $tmp1859);
            panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1861, m1848);
            panda$core$String$Index$wrapper* $tmp1862;
            $tmp1862 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
            $tmp1862->value = $tmp1861;
            $tmp1860 = ((panda$core$Comparable*) $tmp1862);
            ITable* $tmp1863 = $tmp1858->$class->itable;
            while ($tmp1863->$class != (panda$core$Class*) &panda$core$Comparable$class) {
                $tmp1863 = $tmp1863->next;
            }
            $fn1865 $tmp1864 = $tmp1863->methods[1];
            panda$core$Bit $tmp1866 = $tmp1864($tmp1858, $tmp1860);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1860));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1858));
            if ($tmp1866.value) {
            {
                org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1868 = (org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class);
                panda$core$Int64$init$builtin_int64(&$tmp1869, 1);
                panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1872, m1848);
                panda$core$Bit$init$builtin_bit(&$tmp1873, false);
                panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1871, lastPos1852, $tmp1872, $tmp1873);
                panda$core$String* $tmp1874 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(p_text, $tmp1871);
                $tmp1870 = $tmp1874;
                org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String($tmp1868, $tmp1869, $tmp1870);
                $tmp1867 = $tmp1868;
                panda$collections$Array$add$panda$collections$Array$T(tokens1831, ((panda$core$Object*) $tmp1867));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1867));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1870));
            }
            }
            org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1876 = (org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class);
            panda$core$Int64$init$builtin_int64(&$tmp1877, 0);
            panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1880, m1848);
            panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1881, m1848);
            panda$core$Bit$init$builtin_bit(&$tmp1882, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1879, $tmp1880, $tmp1881, $tmp1882);
            panda$core$String* $tmp1883 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(p_text, $tmp1879);
            $tmp1878 = $tmp1883;
            org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String($tmp1876, $tmp1877, $tmp1878);
            $tmp1875 = $tmp1876;
            panda$collections$Array$add$panda$collections$Array$T(tokens1831, ((panda$core$Object*) $tmp1875));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1875));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1878));
            panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1884, m1848);
            lastPos1852 = $tmp1884;
        }
        goto $l1854;
        $l1855:;
        panda$core$String$Index$wrapper* $tmp1886;
        $tmp1886 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
        $tmp1886->value = lastPos1852;
        $tmp1885 = ((panda$core$Comparable*) $tmp1886);
        panda$core$String$Index $tmp1888 = panda$core$String$end$R$panda$core$String$Index(p_text);
        panda$core$String$Index$wrapper* $tmp1889;
        $tmp1889 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
        $tmp1889->value = $tmp1888;
        $tmp1887 = ((panda$core$Comparable*) $tmp1889);
        ITable* $tmp1890 = $tmp1885->$class->itable;
        while ($tmp1890->$class != (panda$core$Class*) &panda$core$Comparable$class) {
            $tmp1890 = $tmp1890->next;
        }
        $fn1892 $tmp1891 = $tmp1890->methods[1];
        panda$core$Bit $tmp1893 = $tmp1891($tmp1885, $tmp1887);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1887));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1885));
        if ($tmp1893.value) {
        {
            org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1895 = (org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class);
            panda$core$Int64$init$builtin_int64(&$tmp1896, 1);
            panda$core$String$Index $tmp1899 = panda$core$String$end$R$panda$core$String$Index(p_text);
            panda$core$Bit$init$builtin_bit(&$tmp1900, false);
            panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp1898, lastPos1852, $tmp1899, $tmp1900);
            panda$core$String* $tmp1901 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(p_text, $tmp1898);
            $tmp1897 = $tmp1901;
            org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String($tmp1895, $tmp1896, $tmp1897);
            $tmp1894 = $tmp1895;
            panda$collections$Array$add$panda$collections$Array$T(tokens1831, ((panda$core$Object*) $tmp1894));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1894));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1897));
        }
        }
        $tmp1903 = ((panda$collections$ListView*) tokens1831);
        $returnValue1902 = $tmp1903;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1903));
        $tmp1830 = 0;
        goto $l1828;
        $l1904:;
        return $returnValue1902;
    }
    $l1828:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1848));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1840));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nestedTags1835));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokens1831));
    tokens1831 = NULL;
    nestedTags1835 = NULL;
    p1840 = NULL;
    m1848 = NULL;
    switch ($tmp1830) {
        case 0: goto $l1904;
    }
    $l1906:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$escapeSpecialCharsWithinTagAttributes$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$collections$ListView* tokens1910 = NULL;
    panda$collections$ListView* $tmp1911;
    panda$collections$ListView* $tmp1912;
    panda$core$String* $tmp1913;
    panda$collections$Iterator* Iter$852$91920 = NULL;
    panda$collections$Iterator* $tmp1921;
    panda$collections$Iterator* $tmp1922;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* token1938 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1939;
    panda$core$Object* $tmp1940;
    panda$core$String* value1945 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $match$854_131949 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1950;
    panda$core$Int64 $tmp1951;
    panda$core$String* text1953 = NULL;
    panda$core$String* $tmp1955;
    panda$core$String* $tmp1956;
    panda$core$String* $tmp1957;
    panda$core$String* $tmp1958;
    panda$core$String* $tmp1959;
    panda$core$String* $tmp1961;
    panda$core$String* $tmp1966;
    panda$core$String* $tmp1967;
    panda$core$String* $tmp1968;
    panda$core$String* $tmp1970;
    panda$core$String* $tmp1975;
    panda$core$String* $tmp1976;
    panda$core$String* $tmp1977;
    panda$core$String* $tmp1979;
    panda$core$String* $tmp1984;
    panda$core$String* $tmp1985;
    panda$core$String* $tmp1986;
    panda$core$String* $tmp1988;
    panda$core$Int64 $tmp1993;
    panda$core$String* text1995 = NULL;
    panda$core$String* $tmp1997;
    panda$core$String* $tmp1998;
    int $tmp1909;
    {
        panda$core$String* $tmp1914 = panda$core$MutableString$convert$R$panda$core$String(p_text);
        $tmp1913 = $tmp1914;
        panda$collections$ListView* $tmp1916 = (($fn1915) self->$class->vtable[23])(self, $tmp1913);
        $tmp1912 = $tmp1916;
        $tmp1911 = $tmp1912;
        tokens1910 = $tmp1911;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1911));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1912));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1913));
        panda$core$MutableString$clear(p_text);
        {
            int $tmp1919;
            {
                ITable* $tmp1923 = ((panda$collections$Iterable*) tokens1910)->$class->itable;
                while ($tmp1923->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1923 = $tmp1923->next;
                }
                $fn1925 $tmp1924 = $tmp1923->methods[0];
                panda$collections$Iterator* $tmp1926 = $tmp1924(((panda$collections$Iterable*) tokens1910));
                $tmp1922 = $tmp1926;
                $tmp1921 = $tmp1922;
                Iter$852$91920 = $tmp1921;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1921));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1922));
                $l1927:;
                ITable* $tmp1930 = Iter$852$91920->$class->itable;
                while ($tmp1930->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1930 = $tmp1930->next;
                }
                $fn1932 $tmp1931 = $tmp1930->methods[0];
                panda$core$Bit $tmp1933 = $tmp1931(Iter$852$91920);
                panda$core$Bit $tmp1934 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1933);
                bool $tmp1929 = $tmp1934.value;
                if (!$tmp1929) goto $l1928;
                {
                    int $tmp1937;
                    {
                        ITable* $tmp1941 = Iter$852$91920->$class->itable;
                        while ($tmp1941->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1941 = $tmp1941->next;
                        }
                        $fn1943 $tmp1942 = $tmp1941->methods[1];
                        panda$core$Object* $tmp1944 = $tmp1942(Iter$852$91920);
                        $tmp1940 = $tmp1944;
                        $tmp1939 = ((org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) $tmp1940);
                        token1938 = $tmp1939;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1939));
                        panda$core$Panda$unref$panda$core$Object($tmp1940);
                        memset(&value1945, 0, sizeof(value1945));
                        int $tmp1948;
                        {
                            $tmp1950 = token1938;
                            $match$854_131949 = $tmp1950;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1950));
                            panda$core$Int64$init$builtin_int64(&$tmp1951, 0);
                            panda$core$Bit $tmp1952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$854_131949->$rawValue, $tmp1951);
                            if ($tmp1952.value) {
                            {
                                panda$core$String** $tmp1954 = ((panda$core$String**) ((char*) $match$854_131949->$data + 0));
                                text1953 = *$tmp1954;
                                {
                                    $tmp1955 = value1945;
                                    $tmp1956 = text1953;
                                    value1945 = $tmp1956;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1956));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1955));
                                }
                                {
                                    $tmp1957 = value1945;
                                    panda$core$String* $tmp1964 = (($fn1963) self->charProtector->$class->vtable[2])(self->charProtector, &$s1962);
                                    $tmp1961 = $tmp1964;
                                    panda$core$String* $tmp1965 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(value1945, &$s1960, $tmp1961);
                                    $tmp1959 = $tmp1965;
                                    $tmp1958 = $tmp1959;
                                    value1945 = $tmp1958;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1958));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1959));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1961));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1957));
                                }
                                {
                                    $tmp1966 = value1945;
                                    panda$core$String* $tmp1973 = (($fn1972) self->charProtector->$class->vtable[2])(self->charProtector, &$s1971);
                                    $tmp1970 = $tmp1973;
                                    panda$core$String* $tmp1974 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(value1945, &$s1969, $tmp1970);
                                    $tmp1968 = $tmp1974;
                                    $tmp1967 = $tmp1968;
                                    value1945 = $tmp1967;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1967));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1968));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1970));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1966));
                                }
                                {
                                    $tmp1975 = value1945;
                                    panda$core$String* $tmp1982 = (($fn1981) self->charProtector->$class->vtable[2])(self->charProtector, &$s1980);
                                    $tmp1979 = $tmp1982;
                                    panda$core$String* $tmp1983 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(value1945, &$s1978, $tmp1979);
                                    $tmp1977 = $tmp1983;
                                    $tmp1976 = $tmp1977;
                                    value1945 = $tmp1976;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1976));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1977));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1979));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1975));
                                }
                                {
                                    $tmp1984 = value1945;
                                    panda$core$String* $tmp1991 = (($fn1990) self->charProtector->$class->vtable[2])(self->charProtector, &$s1989);
                                    $tmp1988 = $tmp1991;
                                    panda$core$String* $tmp1992 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(value1945, &$s1987, $tmp1988);
                                    $tmp1986 = $tmp1992;
                                    $tmp1985 = $tmp1986;
                                    value1945 = $tmp1985;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1985));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1986));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1988));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1984));
                                }
                            }
                            }
                            else {
                            panda$core$Int64$init$builtin_int64(&$tmp1993, 1);
                            panda$core$Bit $tmp1994 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$854_131949->$rawValue, $tmp1993);
                            if ($tmp1994.value) {
                            {
                                panda$core$String** $tmp1996 = ((panda$core$String**) ((char*) $match$854_131949->$data + 0));
                                text1995 = *$tmp1996;
                                {
                                    $tmp1997 = value1945;
                                    $tmp1998 = text1995;
                                    value1945 = $tmp1998;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1998));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1997));
                                }
                            }
                            }
                            }
                        }
                        $tmp1948 = -1;
                        goto $l1946;
                        $l1946:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1950));
                        switch ($tmp1948) {
                            case -1: goto $l1999;
                        }
                        $l1999:;
                        panda$core$MutableString$append$panda$core$String(p_text, value1945);
                    }
                    $tmp1937 = -1;
                    goto $l1935;
                    $l1935:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value1945));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) token1938));
                    token1938 = NULL;
                    switch ($tmp1937) {
                        case -1: goto $l2000;
                    }
                    $l2000:;
                }
                goto $l1927;
                $l1928:;
            }
            $tmp1919 = -1;
            goto $l1917;
            $l1917:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$852$91920));
            Iter$852$91920 = NULL;
            switch ($tmp1919) {
                case -1: goto $l2001;
            }
            $l2001:;
        }
    }
    $tmp1909 = -1;
    goto $l1907;
    $l1907:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokens1910));
    tokens1910 = NULL;
    switch ($tmp1909) {
        case -1: goto $l2002;
    }
    $l2002:;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous25$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* replacementText2006 = NULL;
    panda$core$String* wholeMatch2007 = NULL;
    panda$core$String* $tmp2008;
    panda$core$Object* $tmp2009;
    panda$core$Int64 $tmp2010;
    panda$core$String* altText2015 = NULL;
    panda$core$String* $tmp2016;
    panda$core$Object* $tmp2017;
    panda$core$Int64 $tmp2018;
    panda$core$String* id2023 = NULL;
    panda$core$String* $tmp2024;
    panda$core$Object* $tmp2025;
    panda$core$Int64 $tmp2026;
    panda$core$String* $tmp2031;
    panda$core$Bit $tmp2038;
    panda$core$String* $tmp2039;
    panda$core$String* $tmp2040;
    org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* defn2041 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp2042;
    panda$core$Object* $tmp2043;
    panda$core$String* url2048 = NULL;
    panda$core$String* $tmp2049;
    panda$core$String* $tmp2050;
    panda$core$String* $tmp2051;
    panda$core$String* $tmp2052;
    panda$core$RegularExpression* $tmp2053;
    panda$core$String* $tmp2056;
    panda$core$String* $tmp2061;
    panda$core$String* $tmp2062;
    panda$core$String* $tmp2063;
    panda$core$RegularExpression* $tmp2064;
    panda$core$String* $tmp2067;
    panda$core$String* title2072 = NULL;
    panda$core$String* $tmp2073;
    panda$core$String* titleTag2074 = NULL;
    panda$core$String* $tmp2075;
    panda$core$String* $tmp2085;
    panda$core$String* $tmp2086;
    panda$core$String* $tmp2087;
    panda$core$RegularExpression* $tmp2088;
    panda$core$String* $tmp2091;
    panda$core$String* $tmp2096;
    panda$core$String* $tmp2097;
    panda$core$String* $tmp2098;
    panda$core$RegularExpression* $tmp2099;
    panda$core$String* $tmp2102;
    panda$core$String* $tmp2107;
    panda$core$String* $tmp2108;
    panda$core$String* $tmp2109;
    panda$core$String* $tmp2110;
    panda$core$String* $tmp2111;
    panda$core$String* $tmp2112;
    panda$core$String* $tmp2120;
    panda$core$String* $tmp2121;
    panda$core$String* $tmp2122;
    panda$core$String* $tmp2123;
    panda$core$String* $tmp2124;
    panda$core$String* $tmp2125;
    panda$core$String* $tmp2134;
    panda$core$String* $tmp2135;
    panda$core$String* $returnValue2136;
    panda$core$String* $tmp2137;
    int $tmp2005;
    {
        memset(&replacementText2006, 0, sizeof(replacementText2006));
        panda$core$Int64$init$builtin_int64(&$tmp2010, 1);
        ITable* $tmp2011 = p_groups->$class->itable;
        while ($tmp2011->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2011 = $tmp2011->next;
        }
        $fn2013 $tmp2012 = $tmp2011->methods[0];
        panda$core$Object* $tmp2014 = $tmp2012(p_groups, $tmp2010);
        $tmp2009 = $tmp2014;
        $tmp2008 = ((panda$core$String*) $tmp2009);
        wholeMatch2007 = $tmp2008;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2008));
        panda$core$Panda$unref$panda$core$Object($tmp2009);
        panda$core$Int64$init$builtin_int64(&$tmp2018, 2);
        ITable* $tmp2019 = p_groups->$class->itable;
        while ($tmp2019->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2019 = $tmp2019->next;
        }
        $fn2021 $tmp2020 = $tmp2019->methods[0];
        panda$core$Object* $tmp2022 = $tmp2020(p_groups, $tmp2018);
        $tmp2017 = $tmp2022;
        $tmp2016 = ((panda$core$String*) $tmp2017);
        altText2015 = $tmp2016;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2016));
        panda$core$Panda$unref$panda$core$Object($tmp2017);
        panda$core$Int64$init$builtin_int64(&$tmp2026, 3);
        ITable* $tmp2027 = p_groups->$class->itable;
        while ($tmp2027->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2027 = $tmp2027->next;
        }
        $fn2029 $tmp2028 = $tmp2027->methods[0];
        panda$core$Object* $tmp2030 = $tmp2028(p_groups, $tmp2026);
        $tmp2025 = $tmp2030;
        $tmp2024 = ((panda$core$String*) $tmp2025);
        id2023 = $tmp2024;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2024));
        panda$core$Panda$unref$panda$core$Object($tmp2025);
        $tmp2031 = id2023;
        panda$core$Bit $tmp2035;
        if (((panda$core$Bit) { $tmp2031 != NULL }).value) goto $l2032; else goto $l2033;
        $l2032:;
        panda$core$Bit $tmp2037 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp2031, &$s2036);
        $tmp2035 = $tmp2037;
        goto $l2034;
        $l2033:;
        panda$core$Bit$init$builtin_bit(&$tmp2038, false);
        $tmp2035 = $tmp2038;
        goto $l2034;
        $l2034:;
        if ($tmp2035.value) {
        {
            {
                $tmp2039 = id2023;
                $tmp2040 = altText2015;
                id2023 = $tmp2040;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2040));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2039));
            }
        }
        }
        panda$core$Object* $tmp2044 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->linkDefinitions, ((panda$collections$Key*) id2023));
        $tmp2043 = $tmp2044;
        $tmp2042 = ((org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) $tmp2043);
        defn2041 = $tmp2042;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2042));
        panda$core$Panda$unref$panda$core$Object($tmp2043);
        if (((panda$core$Bit) { defn2041 != NULL }).value) {
        {
            int $tmp2047;
            {
                $tmp2049 = defn2041->url;
                url2048 = $tmp2049;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2049));
                {
                    $tmp2050 = url2048;
                    panda$core$RegularExpression* $tmp2054 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                    panda$core$RegularExpression$init$panda$core$String($tmp2054, &$s2055);
                    $tmp2053 = $tmp2054;
                    panda$core$String* $tmp2059 = (($fn2058) self->charProtector->$class->vtable[2])(self->charProtector, &$s2057);
                    $tmp2056 = $tmp2059;
                    panda$core$String* $tmp2060 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(url2048, $tmp2053, $tmp2056);
                    $tmp2052 = $tmp2060;
                    $tmp2051 = $tmp2052;
                    url2048 = $tmp2051;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2051));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2052));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2056));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2053));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2050));
                }
                {
                    $tmp2061 = url2048;
                    panda$core$RegularExpression* $tmp2065 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                    panda$core$RegularExpression$init$panda$core$String($tmp2065, &$s2066);
                    $tmp2064 = $tmp2065;
                    panda$core$String* $tmp2070 = (($fn2069) self->charProtector->$class->vtable[2])(self->charProtector, &$s2068);
                    $tmp2067 = $tmp2070;
                    panda$core$String* $tmp2071 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(url2048, $tmp2064, $tmp2067);
                    $tmp2063 = $tmp2071;
                    $tmp2062 = $tmp2063;
                    url2048 = $tmp2062;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2062));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2063));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2067));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2064));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2061));
                }
                $tmp2073 = defn2041->title;
                title2072 = $tmp2073;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2073));
                $tmp2075 = &$s2076;
                titleTag2074 = $tmp2075;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2075));
                bool $tmp2077 = ((panda$core$Bit) { title2072 != NULL }).value;
                if (!$tmp2077) goto $l2078;
                ITable* $tmp2080 = ((panda$core$Equatable*) title2072)->$class->itable;
                while ($tmp2080->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                    $tmp2080 = $tmp2080->next;
                }
                $fn2082 $tmp2081 = $tmp2080->methods[1];
                panda$core$Bit $tmp2083 = $tmp2081(((panda$core$Equatable*) title2072), ((panda$core$Equatable*) &$s2079));
                $tmp2077 = $tmp2083.value;
                $l2078:;
                panda$core$Bit $tmp2084 = { $tmp2077 };
                if ($tmp2084.value) {
                {
                    {
                        $tmp2085 = title2072;
                        panda$core$RegularExpression* $tmp2089 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                        panda$core$RegularExpression$init$panda$core$String($tmp2089, &$s2090);
                        $tmp2088 = $tmp2089;
                        panda$core$String* $tmp2094 = (($fn2093) self->charProtector->$class->vtable[2])(self->charProtector, &$s2092);
                        $tmp2091 = $tmp2094;
                        panda$core$String* $tmp2095 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(title2072, $tmp2088, $tmp2091);
                        $tmp2087 = $tmp2095;
                        $tmp2086 = $tmp2087;
                        title2072 = $tmp2086;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2086));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2087));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2091));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2088));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2085));
                    }
                    {
                        $tmp2096 = title2072;
                        panda$core$RegularExpression* $tmp2100 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                        panda$core$RegularExpression$init$panda$core$String($tmp2100, &$s2101);
                        $tmp2099 = $tmp2100;
                        panda$core$String* $tmp2105 = (($fn2104) self->charProtector->$class->vtable[2])(self->charProtector, &$s2103);
                        $tmp2102 = $tmp2105;
                        panda$core$String* $tmp2106 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(title2072, $tmp2099, $tmp2102);
                        $tmp2098 = $tmp2106;
                        $tmp2097 = $tmp2098;
                        title2072 = $tmp2097;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2097));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2098));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2102));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2099));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2096));
                    }
                    {
                        $tmp2107 = titleTag2074;
                        panda$core$String* $tmp2114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2113, altText2015);
                        $tmp2112 = $tmp2114;
                        panda$core$String* $tmp2116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2112, &$s2115);
                        $tmp2111 = $tmp2116;
                        panda$core$String* $tmp2117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2111, title2072);
                        $tmp2110 = $tmp2117;
                        panda$core$String* $tmp2119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2110, &$s2118);
                        $tmp2109 = $tmp2119;
                        $tmp2108 = $tmp2109;
                        titleTag2074 = $tmp2108;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2108));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2109));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2110));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2111));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2112));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2107));
                    }
                }
                }
                {
                    $tmp2120 = replacementText2006;
                    panda$core$String* $tmp2127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2126, url2048);
                    $tmp2125 = $tmp2127;
                    panda$core$String* $tmp2129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2125, &$s2128);
                    $tmp2124 = $tmp2129;
                    panda$core$String* $tmp2130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2124, titleTag2074);
                    $tmp2123 = $tmp2130;
                    panda$core$String* $tmp2132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2123, &$s2131);
                    $tmp2122 = $tmp2132;
                    $tmp2121 = $tmp2122;
                    replacementText2006 = $tmp2121;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2121));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2122));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2123));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2124));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2125));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2120));
                }
            }
            $tmp2047 = -1;
            goto $l2045;
            $l2045:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) titleTag2074));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) title2072));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) url2048));
            url2048 = NULL;
            title2072 = NULL;
            titleTag2074 = NULL;
            switch ($tmp2047) {
                case -1: goto $l2133;
            }
            $l2133:;
        }
        }
        else {
        {
            {
                $tmp2134 = replacementText2006;
                $tmp2135 = wholeMatch2007;
                replacementText2006 = $tmp2135;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2135));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2134));
            }
        }
        }
        $tmp2137 = replacementText2006;
        $returnValue2136 = $tmp2137;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2137));
        $tmp2005 = 0;
        goto $l2003;
        $l2138:;
        return $returnValue2136;
    }
    $l2003:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defn2041));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) id2023));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) altText2015));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) wholeMatch2007));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) replacementText2006));
    wholeMatch2007 = NULL;
    altText2015 = NULL;
    id2023 = NULL;
    defn2041 = NULL;
    switch ($tmp2005) {
        case 0: goto $l2138;
    }
    $l2140:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim26$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar2144 = NULL;
    panda$core$Method* $tmp2145;
    panda$core$Method* $tmp2146;
    panda$core$Object* $tmp2148;
    panda$core$Object* $tmp2149;
    panda$core$Object* $returnValue2150;
    panda$core$Object* $tmp2151;
    panda$core$String* $tmp2152;
    panda$core$String* $tmp2153;
    int $tmp2143;
    {
        panda$core$Method* $tmp2147 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp2147, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp2146 = $tmp2147;
        $tmp2145 = $tmp2146;
        methodVar2144 = $tmp2145;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2145));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2146));
        {
            $tmp2148 = ((panda$core$MutableMethod*) methodVar2144)->target;
            $tmp2149 = self->target;
            ((panda$core$MutableMethod*) methodVar2144)->target = $tmp2149;
            panda$core$Panda$ref$panda$core$Object($tmp2149);
            panda$core$Panda$unref$panda$core$Object($tmp2148);
        }
        if (methodVar2144->target) {
            $tmp2153 = (($fn2154) methodVar2144->pointer)(methodVar2144->target, p_p0);
        } else {
            $tmp2153 = (($fn2155) methodVar2144->pointer)(p_p0);
        }
        $tmp2152 = $tmp2153;
        $tmp2151 = ((panda$core$Object*) $tmp2152);
        $returnValue2150 = $tmp2151;
        panda$core$Panda$ref$panda$core$Object($tmp2151);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2152));
        $tmp2143 = 0;
        goto $l2141;
        $l2156:;
        return $returnValue2150;
    }
    $l2141:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar2144));
    methodVar2144 = NULL;
    switch ($tmp2143) {
        case 0: goto $l2156;
    }
    $l2158:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doImages$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_text) {
    panda$core$RegularExpression* $tmp2162;
    panda$core$RegularExpression* $tmp2166;
    panda$core$RegularExpression* imageLink2170 = NULL;
    panda$core$RegularExpression* $tmp2171;
    panda$core$RegularExpression* $tmp2172;
    int $tmp2161;
    {
        panda$core$RegularExpression* $tmp2163 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp2163, &$s2164);
        $tmp2162 = $tmp2163;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_text, $tmp2162, &$s2165);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2162));
        panda$core$RegularExpression* $tmp2167 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp2167, &$s2168);
        $tmp2166 = $tmp2167;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_text, $tmp2166, &$s2169);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2166));
        panda$core$RegularExpression* $tmp2173 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp2173, &$s2174);
        $tmp2172 = $tmp2173;
        $tmp2171 = $tmp2172;
        imageLink2170 = $tmp2171;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2171));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2172));
        panda$core$MutableMethod* $tmp2175 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp2176 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2176, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous25$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2175, (panda$core$Int8*) &panda$core$MutableMethod$$shim26$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp2176)));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_text, imageLink2170, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp2175)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2175));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2176));
    }
    $tmp2161 = -1;
    goto $l2159;
    $l2159:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) imageLink2170));
    imageLink2170 = NULL;
    switch ($tmp2161) {
        case -1: goto $l2177;
    }
    $l2177:;
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous27$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* replacementText2181 = NULL;
    panda$core$String* wholeMatch2182 = NULL;
    panda$core$String* $tmp2183;
    panda$core$Object* $tmp2184;
    panda$core$Int64 $tmp2185;
    panda$core$String* linkText2190 = NULL;
    panda$core$String* $tmp2191;
    panda$core$Object* $tmp2192;
    panda$core$Int64 $tmp2193;
    panda$core$String* id2198 = NULL;
    panda$core$String* $tmp2199;
    panda$core$Object* $tmp2200;
    panda$core$Int64 $tmp2201;
    panda$core$String* $tmp2206;
    panda$core$Bit $tmp2213;
    panda$core$String* $tmp2214;
    panda$core$String* $tmp2215;
    org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* defn2216 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp2217;
    panda$core$Object* $tmp2218;
    panda$core$String* url2223 = NULL;
    panda$core$String* $tmp2224;
    panda$core$String* $tmp2225;
    panda$core$String* $tmp2226;
    panda$core$String* $tmp2227;
    panda$core$String* $tmp2229;
    panda$core$String* $tmp2234;
    panda$core$String* $tmp2235;
    panda$core$String* $tmp2236;
    panda$core$String* $tmp2238;
    panda$core$String* title2243 = NULL;
    panda$core$String* $tmp2244;
    panda$core$String* titleTag2245 = NULL;
    panda$core$String* $tmp2246;
    panda$core$String* $tmp2256;
    panda$core$String* $tmp2257;
    panda$core$String* $tmp2258;
    panda$core$String* $tmp2260;
    panda$core$String* $tmp2265;
    panda$core$String* $tmp2266;
    panda$core$String* $tmp2267;
    panda$core$String* $tmp2269;
    panda$core$String* $tmp2274;
    panda$core$String* $tmp2275;
    panda$core$String* $tmp2276;
    panda$core$String* $tmp2277;
    panda$core$String* $tmp2282;
    panda$core$String* $tmp2283;
    panda$core$String* $tmp2284;
    panda$core$String* $tmp2285;
    panda$core$String* $tmp2286;
    panda$core$String* $tmp2287;
    panda$core$String* $tmp2288;
    panda$core$String* $tmp2289;
    panda$core$String* $tmp2301;
    panda$core$String* $tmp2302;
    panda$core$Object* $returnValue2303;
    panda$core$Object* $tmp2304;
    int $tmp2180;
    {
        memset(&replacementText2181, 0, sizeof(replacementText2181));
        panda$core$Int64$init$builtin_int64(&$tmp2185, 1);
        ITable* $tmp2186 = p_groups->$class->itable;
        while ($tmp2186->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2186 = $tmp2186->next;
        }
        $fn2188 $tmp2187 = $tmp2186->methods[0];
        panda$core$Object* $tmp2189 = $tmp2187(p_groups, $tmp2185);
        $tmp2184 = $tmp2189;
        $tmp2183 = ((panda$core$String*) $tmp2184);
        wholeMatch2182 = $tmp2183;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2183));
        panda$core$Panda$unref$panda$core$Object($tmp2184);
        panda$core$Int64$init$builtin_int64(&$tmp2193, 2);
        ITable* $tmp2194 = p_groups->$class->itable;
        while ($tmp2194->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2194 = $tmp2194->next;
        }
        $fn2196 $tmp2195 = $tmp2194->methods[0];
        panda$core$Object* $tmp2197 = $tmp2195(p_groups, $tmp2193);
        $tmp2192 = $tmp2197;
        $tmp2191 = ((panda$core$String*) $tmp2192);
        linkText2190 = $tmp2191;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2191));
        panda$core$Panda$unref$panda$core$Object($tmp2192);
        panda$core$Int64$init$builtin_int64(&$tmp2201, 3);
        ITable* $tmp2202 = p_groups->$class->itable;
        while ($tmp2202->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2202 = $tmp2202->next;
        }
        $fn2204 $tmp2203 = $tmp2202->methods[0];
        panda$core$Object* $tmp2205 = $tmp2203(p_groups, $tmp2201);
        $tmp2200 = $tmp2205;
        $tmp2199 = ((panda$core$String*) $tmp2200);
        id2198 = $tmp2199;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2199));
        panda$core$Panda$unref$panda$core$Object($tmp2200);
        $tmp2206 = id2198;
        panda$core$Bit $tmp2210;
        if (((panda$core$Bit) { $tmp2206 != NULL }).value) goto $l2207; else goto $l2208;
        $l2207:;
        panda$core$Bit $tmp2212 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp2206, &$s2211);
        $tmp2210 = $tmp2212;
        goto $l2209;
        $l2208:;
        panda$core$Bit$init$builtin_bit(&$tmp2213, false);
        $tmp2210 = $tmp2213;
        goto $l2209;
        $l2209:;
        if ($tmp2210.value) {
        {
            {
                $tmp2214 = id2198;
                $tmp2215 = linkText2190;
                id2198 = $tmp2215;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2215));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2214));
            }
        }
        }
        panda$core$Object* $tmp2219 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->linkDefinitions, ((panda$collections$Key*) id2198));
        $tmp2218 = $tmp2219;
        $tmp2217 = ((org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) $tmp2218);
        defn2216 = $tmp2217;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2217));
        panda$core$Panda$unref$panda$core$Object($tmp2218);
        if (((panda$core$Bit) { defn2216 != NULL }).value) {
        {
            int $tmp2222;
            {
                $tmp2224 = defn2216->url;
                url2223 = $tmp2224;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2224));
                {
                    $tmp2225 = url2223;
                    panda$core$String* $tmp2232 = (($fn2231) self->charProtector->$class->vtable[2])(self->charProtector, &$s2230);
                    $tmp2229 = $tmp2232;
                    panda$core$String* $tmp2233 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(url2223, &$s2228, $tmp2229);
                    $tmp2227 = $tmp2233;
                    $tmp2226 = $tmp2227;
                    url2223 = $tmp2226;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2226));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2227));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2229));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2225));
                }
                {
                    $tmp2234 = url2223;
                    panda$core$String* $tmp2241 = (($fn2240) self->charProtector->$class->vtable[2])(self->charProtector, &$s2239);
                    $tmp2238 = $tmp2241;
                    panda$core$String* $tmp2242 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(url2223, &$s2237, $tmp2238);
                    $tmp2236 = $tmp2242;
                    $tmp2235 = $tmp2236;
                    url2223 = $tmp2235;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2235));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2236));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2238));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2234));
                }
                $tmp2244 = defn2216->title;
                title2243 = $tmp2244;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2244));
                $tmp2246 = &$s2247;
                titleTag2245 = $tmp2246;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2246));
                bool $tmp2248 = ((panda$core$Bit) { title2243 != NULL }).value;
                if (!$tmp2248) goto $l2249;
                ITable* $tmp2251 = ((panda$core$Equatable*) title2243)->$class->itable;
                while ($tmp2251->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                    $tmp2251 = $tmp2251->next;
                }
                $fn2253 $tmp2252 = $tmp2251->methods[1];
                panda$core$Bit $tmp2254 = $tmp2252(((panda$core$Equatable*) title2243), ((panda$core$Equatable*) &$s2250));
                $tmp2248 = $tmp2254.value;
                $l2249:;
                panda$core$Bit $tmp2255 = { $tmp2248 };
                if ($tmp2255.value) {
                {
                    {
                        $tmp2256 = title2243;
                        panda$core$String* $tmp2263 = (($fn2262) self->charProtector->$class->vtable[2])(self->charProtector, &$s2261);
                        $tmp2260 = $tmp2263;
                        panda$core$String* $tmp2264 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2243, &$s2259, $tmp2260);
                        $tmp2258 = $tmp2264;
                        $tmp2257 = $tmp2258;
                        title2243 = $tmp2257;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2257));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2258));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2260));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2256));
                    }
                    {
                        $tmp2265 = title2243;
                        panda$core$String* $tmp2272 = (($fn2271) self->charProtector->$class->vtable[2])(self->charProtector, &$s2270);
                        $tmp2269 = $tmp2272;
                        panda$core$String* $tmp2273 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2243, &$s2268, $tmp2269);
                        $tmp2267 = $tmp2273;
                        $tmp2266 = $tmp2267;
                        title2243 = $tmp2266;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2266));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2267));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2269));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2265));
                    }
                    {
                        $tmp2274 = titleTag2245;
                        panda$core$String* $tmp2279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2278, title2243);
                        $tmp2277 = $tmp2279;
                        panda$core$String* $tmp2281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2277, &$s2280);
                        $tmp2276 = $tmp2281;
                        $tmp2275 = $tmp2276;
                        titleTag2245 = $tmp2275;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2275));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2276));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2277));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2274));
                    }
                }
                }
                {
                    $tmp2282 = replacementText2181;
                    panda$core$String* $tmp2291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2290, url2223);
                    $tmp2289 = $tmp2291;
                    panda$core$String* $tmp2293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2289, &$s2292);
                    $tmp2288 = $tmp2293;
                    panda$core$String* $tmp2294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2288, titleTag2245);
                    $tmp2287 = $tmp2294;
                    panda$core$String* $tmp2296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2287, &$s2295);
                    $tmp2286 = $tmp2296;
                    panda$core$String* $tmp2297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2286, linkText2190);
                    $tmp2285 = $tmp2297;
                    panda$core$String* $tmp2299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2285, &$s2298);
                    $tmp2284 = $tmp2299;
                    $tmp2283 = $tmp2284;
                    replacementText2181 = $tmp2283;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2283));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2284));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2285));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2286));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2287));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2288));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2289));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2282));
                }
            }
            $tmp2222 = -1;
            goto $l2220;
            $l2220:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) titleTag2245));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) title2243));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) url2223));
            url2223 = NULL;
            title2243 = NULL;
            titleTag2245 = NULL;
            switch ($tmp2222) {
                case -1: goto $l2300;
            }
            $l2300:;
        }
        }
        else {
        {
            {
                $tmp2301 = replacementText2181;
                $tmp2302 = wholeMatch2182;
                replacementText2181 = $tmp2302;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2302));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2301));
            }
        }
        }
        $tmp2304 = ((panda$core$Object*) replacementText2181);
        $returnValue2303 = $tmp2304;
        panda$core$Panda$ref$panda$core$Object($tmp2304);
        $tmp2180 = 0;
        goto $l2178;
        $l2305:;
        return $returnValue2303;
    }
    $l2178:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defn2216));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) id2198));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) linkText2190));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) wholeMatch2182));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) replacementText2181));
    wholeMatch2182 = NULL;
    linkText2190 = NULL;
    id2198 = NULL;
    defn2216 = NULL;
    switch ($tmp2180) {
        case 0: goto $l2305;
    }
    $l2307:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous28$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* linkText2311 = NULL;
    panda$core$String* $tmp2312;
    panda$core$Object* $tmp2313;
    panda$core$Int64 $tmp2314;
    panda$core$String* url2319 = NULL;
    panda$core$String* $tmp2320;
    panda$core$Object* $tmp2321;
    panda$core$Int64 $tmp2322;
    panda$core$String* title2327 = NULL;
    panda$core$String* $tmp2328;
    panda$core$Object* $tmp2329;
    panda$core$Int64 $tmp2330;
    panda$core$String* newURL2338 = NULL;
    panda$core$String* $tmp2339;
    panda$core$String* $tmp2340;
    panda$core$String* $tmp2341;
    panda$io$OutputStream* $tmp2344;
    panda$core$String* $tmp2346;
    panda$core$String* $tmp2347;
    panda$core$String* $tmp2353;
    panda$core$String* $tmp2354;
    panda$core$String* $tmp2356;
    panda$core$String* $tmp2357;
    panda$core$String* $tmp2359;
    panda$core$String* $tmp2360;
    panda$core$String* $tmp2362;
    panda$core$String* $tmp2363;
    panda$core$String* $tmp2364;
    panda$core$RegularExpression* $tmp2365;
    panda$core$String* $tmp2368;
    panda$core$String* $tmp2373;
    panda$core$String* $tmp2374;
    panda$core$String* $tmp2375;
    panda$core$RegularExpression* $tmp2376;
    panda$core$String* $tmp2379;
    panda$core$MutableString* result2384 = NULL;
    panda$core$MutableString* $tmp2385;
    panda$core$MutableString* $tmp2386;
    panda$core$String* $tmp2388;
    panda$core$String* $tmp2389;
    panda$core$String* $tmp2394;
    panda$core$String* $tmp2395;
    panda$core$String* $tmp2396;
    panda$core$String* $tmp2398;
    panda$core$String* $tmp2403;
    panda$core$String* $tmp2404;
    panda$core$String* $tmp2405;
    panda$core$String* $tmp2407;
    panda$core$String* $tmp2412;
    panda$core$String* $tmp2413;
    panda$core$String* $tmp2414;
    panda$core$Char8 $tmp2419;
    panda$core$UInt8 $tmp2420;
    panda$core$String* $tmp2421;
    panda$core$String* $tmp2422;
    panda$core$String* $returnValue2428;
    panda$core$String* $tmp2429;
    panda$core$String* $tmp2430;
    int $tmp2310;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2314, 2);
        ITable* $tmp2315 = p_groups->$class->itable;
        while ($tmp2315->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2315 = $tmp2315->next;
        }
        $fn2317 $tmp2316 = $tmp2315->methods[0];
        panda$core$Object* $tmp2318 = $tmp2316(p_groups, $tmp2314);
        $tmp2313 = $tmp2318;
        $tmp2312 = ((panda$core$String*) $tmp2313);
        linkText2311 = $tmp2312;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2312));
        panda$core$Panda$unref$panda$core$Object($tmp2313);
        panda$core$Int64$init$builtin_int64(&$tmp2322, 3);
        ITable* $tmp2323 = p_groups->$class->itable;
        while ($tmp2323->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2323 = $tmp2323->next;
        }
        $fn2325 $tmp2324 = $tmp2323->methods[0];
        panda$core$Object* $tmp2326 = $tmp2324(p_groups, $tmp2322);
        $tmp2321 = $tmp2326;
        $tmp2320 = ((panda$core$String*) $tmp2321);
        url2319 = $tmp2320;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2320));
        panda$core$Panda$unref$panda$core$Object($tmp2321);
        panda$core$Int64$init$builtin_int64(&$tmp2330, 6);
        ITable* $tmp2331 = p_groups->$class->itable;
        while ($tmp2331->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2331 = $tmp2331->next;
        }
        $fn2333 $tmp2332 = $tmp2331->methods[0];
        panda$core$Object* $tmp2334 = $tmp2332(p_groups, $tmp2330);
        $tmp2329 = $tmp2334;
        $tmp2328 = ((panda$core$String*) $tmp2329);
        title2327 = $tmp2328;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2328));
        panda$core$Panda$unref$panda$core$Object($tmp2329);
        if (((panda$core$Bit) { self->linkResolver != NULL }).value) {
        {
            int $tmp2337;
            {
                if (self->linkResolver->target) {
                    $tmp2341 = (($fn2342) self->linkResolver->pointer)(self->linkResolver->target, url2319);
                } else {
                    $tmp2341 = (($fn2343) self->linkResolver->pointer)(url2319);
                }
                $tmp2340 = $tmp2341;
                $tmp2339 = $tmp2340;
                newURL2338 = $tmp2339;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2339));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2340));
                if (((panda$core$Bit) { newURL2338 == NULL }).value) {
                {
                    panda$io$OutputStream* $tmp2345 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                    $tmp2344 = $tmp2345;
                    panda$core$String* $tmp2349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2348, url2319);
                    $tmp2347 = $tmp2349;
                    panda$core$String* $tmp2351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2347, &$s2350);
                    $tmp2346 = $tmp2351;
                    (($fn2352) $tmp2344->$class->vtable[19])($tmp2344, $tmp2346);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2346));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2347));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2344));
                    {
                        $tmp2353 = newURL2338;
                        $tmp2354 = &$s2355;
                        newURL2338 = $tmp2354;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2354));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2353));
                    }
                }
                }
                {
                    $tmp2356 = url2319;
                    $tmp2357 = newURL2338;
                    url2319 = $tmp2357;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2357));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2356));
                }
            }
            $tmp2337 = -1;
            goto $l2335;
            $l2335:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newURL2338));
            newURL2338 = NULL;
            switch ($tmp2337) {
                case -1: goto $l2358;
            }
            $l2358:;
        }
        }
        else {
        {
            {
                $tmp2359 = url2319;
                $tmp2360 = &$s2361;
                url2319 = $tmp2360;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2360));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2359));
            }
        }
        }
        {
            $tmp2362 = url2319;
            panda$core$RegularExpression* $tmp2366 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
            panda$core$RegularExpression$init$panda$core$String($tmp2366, &$s2367);
            $tmp2365 = $tmp2366;
            panda$core$String* $tmp2371 = (($fn2370) self->charProtector->$class->vtable[2])(self->charProtector, &$s2369);
            $tmp2368 = $tmp2371;
            panda$core$String* $tmp2372 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(url2319, $tmp2365, $tmp2368);
            $tmp2364 = $tmp2372;
            $tmp2363 = $tmp2364;
            url2319 = $tmp2363;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2363));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2364));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2368));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2365));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2362));
        }
        {
            $tmp2373 = url2319;
            panda$core$RegularExpression* $tmp2377 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
            panda$core$RegularExpression$init$panda$core$String($tmp2377, &$s2378);
            $tmp2376 = $tmp2377;
            panda$core$String* $tmp2382 = (($fn2381) self->charProtector->$class->vtable[2])(self->charProtector, &$s2380);
            $tmp2379 = $tmp2382;
            panda$core$String* $tmp2383 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(url2319, $tmp2376, $tmp2379);
            $tmp2375 = $tmp2383;
            $tmp2374 = $tmp2375;
            url2319 = $tmp2374;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2374));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2375));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2379));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2376));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2373));
        }
        panda$core$MutableString* $tmp2387 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp2387);
        $tmp2386 = $tmp2387;
        $tmp2385 = $tmp2386;
        result2384 = $tmp2385;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2385));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2386));
        panda$core$String* $tmp2391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2390, url2319);
        $tmp2389 = $tmp2391;
        panda$core$String* $tmp2393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2389, &$s2392);
        $tmp2388 = $tmp2393;
        panda$core$MutableString$append$panda$core$String(result2384, $tmp2388);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2388));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2389));
        if (((panda$core$Bit) { title2327 != NULL }).value) {
        {
            {
                $tmp2394 = title2327;
                panda$core$String* $tmp2401 = (($fn2400) self->charProtector->$class->vtable[2])(self->charProtector, &$s2399);
                $tmp2398 = $tmp2401;
                panda$core$String* $tmp2402 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2327, &$s2397, $tmp2398);
                $tmp2396 = $tmp2402;
                $tmp2395 = $tmp2396;
                title2327 = $tmp2395;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2395));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2396));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2398));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2394));
            }
            {
                $tmp2403 = title2327;
                panda$core$String* $tmp2410 = (($fn2409) self->charProtector->$class->vtable[2])(self->charProtector, &$s2408);
                $tmp2407 = $tmp2410;
                panda$core$String* $tmp2411 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2327, &$s2406, $tmp2407);
                $tmp2405 = $tmp2411;
                $tmp2404 = $tmp2405;
                title2327 = $tmp2404;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2404));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2405));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2407));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2403));
            }
            {
                $tmp2412 = title2327;
                panda$core$String* $tmp2417 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2327, &$s2415, &$s2416);
                $tmp2414 = $tmp2417;
                $tmp2413 = $tmp2414;
                title2327 = $tmp2413;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2413));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2414));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2412));
            }
            panda$core$MutableString$append$panda$core$String(result2384, &$s2418);
            panda$core$MutableString$append$panda$core$String(result2384, title2327);
            panda$core$UInt8$init$builtin_uint8(&$tmp2420, 34);
            panda$core$Char8$init$panda$core$UInt8(&$tmp2419, $tmp2420);
            panda$core$MutableString$append$panda$core$Char8(result2384, $tmp2419);
        }
        }
        panda$core$String* $tmp2424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2423, linkText2311);
        $tmp2422 = $tmp2424;
        panda$core$String* $tmp2426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2422, &$s2425);
        $tmp2421 = $tmp2426;
        panda$core$MutableString$append$panda$core$String(result2384, $tmp2421);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2421));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2422));
        panda$core$MutableString$append$panda$core$String(result2384, &$s2427);
        panda$core$String* $tmp2431 = panda$core$MutableString$convert$R$panda$core$String(result2384);
        $tmp2430 = $tmp2431;
        $tmp2429 = $tmp2430;
        $returnValue2428 = $tmp2429;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2429));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2430));
        $tmp2310 = 0;
        goto $l2308;
        $l2432:;
        return $returnValue2428;
    }
    $l2308:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2384));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) title2327));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) url2319));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) linkText2311));
    linkText2311 = NULL;
    url2319 = NULL;
    title2327 = NULL;
    result2384 = NULL;
    switch ($tmp2310) {
        case 0: goto $l2432;
    }
    $l2434:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim29$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar2438 = NULL;
    panda$core$Method* $tmp2439;
    panda$core$Method* $tmp2440;
    panda$core$Object* $tmp2442;
    panda$core$Object* $tmp2443;
    panda$core$Object* $returnValue2444;
    panda$core$Object* $tmp2445;
    panda$core$String* $tmp2446;
    panda$core$String* $tmp2447;
    int $tmp2437;
    {
        panda$core$Method* $tmp2441 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp2441, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp2440 = $tmp2441;
        $tmp2439 = $tmp2440;
        methodVar2438 = $tmp2439;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2439));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2440));
        {
            $tmp2442 = ((panda$core$MutableMethod*) methodVar2438)->target;
            $tmp2443 = self->target;
            ((panda$core$MutableMethod*) methodVar2438)->target = $tmp2443;
            panda$core$Panda$ref$panda$core$Object($tmp2443);
            panda$core$Panda$unref$panda$core$Object($tmp2442);
        }
        if (methodVar2438->target) {
            $tmp2447 = (($fn2448) methodVar2438->pointer)(methodVar2438->target, p_p0);
        } else {
            $tmp2447 = (($fn2449) methodVar2438->pointer)(p_p0);
        }
        $tmp2446 = $tmp2447;
        $tmp2445 = ((panda$core$Object*) $tmp2446);
        $returnValue2444 = $tmp2445;
        panda$core$Panda$ref$panda$core$Object($tmp2445);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2446));
        $tmp2437 = 0;
        goto $l2435;
        $l2450:;
        return $returnValue2444;
    }
    $l2435:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar2438));
    methodVar2438 = NULL;
    switch ($tmp2437) {
        case 0: goto $l2450;
    }
    $l2452:;
    abort();
}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous30$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* replacementText2456 = NULL;
    panda$core$String* wholeMatch2457 = NULL;
    panda$core$String* $tmp2458;
    panda$core$Object* $tmp2459;
    panda$core$Int64 $tmp2460;
    panda$core$String* linkText2465 = NULL;
    panda$core$String* $tmp2466;
    panda$core$Object* $tmp2467;
    panda$core$Int64 $tmp2468;
    panda$core$String* id2473 = NULL;
    panda$core$String* $tmp2474;
    panda$core$String* $tmp2475;
    panda$core$String* $tmp2476;
    panda$core$String* $tmp2477;
    panda$core$RegularExpression* $tmp2478;
    org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* defn2483 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp2484;
    panda$core$Object* $tmp2485;
    panda$core$String* url2490 = NULL;
    panda$core$String* $tmp2491;
    panda$core$String* $tmp2492;
    panda$core$String* $tmp2493;
    panda$core$String* $tmp2494;
    panda$core$String* $tmp2496;
    panda$core$String* $tmp2501;
    panda$core$String* $tmp2502;
    panda$core$String* $tmp2503;
    panda$core$String* $tmp2505;
    panda$core$String* title2510 = NULL;
    panda$core$String* $tmp2511;
    panda$core$String* titleTag2512 = NULL;
    panda$core$String* $tmp2513;
    panda$core$String* $tmp2523;
    panda$core$String* $tmp2524;
    panda$core$String* $tmp2525;
    panda$core$String* $tmp2527;
    panda$core$String* $tmp2532;
    panda$core$String* $tmp2533;
    panda$core$String* $tmp2534;
    panda$core$String* $tmp2536;
    panda$core$String* $tmp2541;
    panda$core$String* $tmp2542;
    panda$core$String* $tmp2543;
    panda$core$String* $tmp2544;
    panda$core$String* $tmp2549;
    panda$core$String* $tmp2550;
    panda$core$String* $tmp2551;
    panda$core$String* $tmp2552;
    panda$core$String* $tmp2553;
    panda$core$String* $tmp2554;
    panda$core$String* $tmp2555;
    panda$core$String* $tmp2556;
    panda$core$String* $tmp2568;
    panda$core$String* $tmp2569;
    panda$core$String* $tmp2570;
    panda$core$String* $tmp2571;
    panda$core$String* escaped2577 = NULL;
    panda$core$String* $tmp2578;
    panda$core$String* $tmp2579;
    panda$core$String* $tmp2580;
    panda$core$String* $tmp2587;
    panda$core$String* $tmp2588;
    panda$core$String* $tmp2589;
    panda$core$String* $tmp2590;
    panda$core$String* $tmp2591;
    panda$core$String* $tmp2592;
    panda$core$String* $tmp2601;
    panda$core$String* $tmp2602;
    panda$core$String* $tmp2603;
    panda$core$String* $tmp2604;
    panda$core$String* $tmp2609;
    panda$core$String* $tmp2610;
    panda$core$Object* $returnValue2612;
    panda$core$Object* $tmp2613;
    int $tmp2455;
    {
        memset(&replacementText2456, 0, sizeof(replacementText2456));
        panda$core$Int64$init$builtin_int64(&$tmp2460, 1);
        ITable* $tmp2461 = p_groups->$class->itable;
        while ($tmp2461->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2461 = $tmp2461->next;
        }
        $fn2463 $tmp2462 = $tmp2461->methods[0];
        panda$core$Object* $tmp2464 = $tmp2462(p_groups, $tmp2460);
        $tmp2459 = $tmp2464;
        $tmp2458 = ((panda$core$String*) $tmp2459);
        wholeMatch2457 = $tmp2458;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2458));
        panda$core$Panda$unref$panda$core$Object($tmp2459);
        panda$core$Int64$init$builtin_int64(&$tmp2468, 2);
        ITable* $tmp2469 = p_groups->$class->itable;
        while ($tmp2469->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2469 = $tmp2469->next;
        }
        $fn2471 $tmp2470 = $tmp2469->methods[0];
        panda$core$Object* $tmp2472 = $tmp2470(p_groups, $tmp2468);
        $tmp2467 = $tmp2472;
        $tmp2466 = ((panda$core$String*) $tmp2467);
        linkText2465 = $tmp2466;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2466));
        panda$core$Panda$unref$panda$core$Object($tmp2467);
        $tmp2474 = linkText2465;
        id2473 = $tmp2474;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2474));
        {
            $tmp2475 = id2473;
            panda$core$RegularExpression* $tmp2479 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
            panda$core$RegularExpression$init$panda$core$String($tmp2479, &$s2480);
            $tmp2478 = $tmp2479;
            panda$core$String* $tmp2482 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(id2473, $tmp2478, &$s2481);
            $tmp2477 = $tmp2482;
            $tmp2476 = $tmp2477;
            id2473 = $tmp2476;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2476));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2477));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2478));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2475));
        }
        panda$core$Object* $tmp2486 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->linkDefinitions, ((panda$collections$Key*) id2473));
        $tmp2485 = $tmp2486;
        $tmp2484 = ((org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) $tmp2485);
        defn2483 = $tmp2484;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2484));
        panda$core$Panda$unref$panda$core$Object($tmp2485);
        if (((panda$core$Bit) { defn2483 != NULL }).value) {
        {
            int $tmp2489;
            {
                $tmp2491 = defn2483->url;
                url2490 = $tmp2491;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2491));
                {
                    $tmp2492 = url2490;
                    panda$core$String* $tmp2499 = (($fn2498) self->charProtector->$class->vtable[2])(self->charProtector, &$s2497);
                    $tmp2496 = $tmp2499;
                    panda$core$String* $tmp2500 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(url2490, &$s2495, $tmp2496);
                    $tmp2494 = $tmp2500;
                    $tmp2493 = $tmp2494;
                    url2490 = $tmp2493;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2493));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2494));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2496));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2492));
                }
                {
                    $tmp2501 = url2490;
                    panda$core$String* $tmp2508 = (($fn2507) self->charProtector->$class->vtable[2])(self->charProtector, &$s2506);
                    $tmp2505 = $tmp2508;
                    panda$core$String* $tmp2509 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(url2490, &$s2504, $tmp2505);
                    $tmp2503 = $tmp2509;
                    $tmp2502 = $tmp2503;
                    url2490 = $tmp2502;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2502));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2503));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2505));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2501));
                }
                $tmp2511 = defn2483->title;
                title2510 = $tmp2511;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2511));
                $tmp2513 = &$s2514;
                titleTag2512 = $tmp2513;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2513));
                bool $tmp2515 = ((panda$core$Bit) { title2510 != NULL }).value;
                if (!$tmp2515) goto $l2516;
                ITable* $tmp2518 = ((panda$core$Equatable*) title2510)->$class->itable;
                while ($tmp2518->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                    $tmp2518 = $tmp2518->next;
                }
                $fn2520 $tmp2519 = $tmp2518->methods[1];
                panda$core$Bit $tmp2521 = $tmp2519(((panda$core$Equatable*) title2510), ((panda$core$Equatable*) &$s2517));
                $tmp2515 = $tmp2521.value;
                $l2516:;
                panda$core$Bit $tmp2522 = { $tmp2515 };
                if ($tmp2522.value) {
                {
                    {
                        $tmp2523 = title2510;
                        panda$core$String* $tmp2530 = (($fn2529) self->charProtector->$class->vtable[2])(self->charProtector, &$s2528);
                        $tmp2527 = $tmp2530;
                        panda$core$String* $tmp2531 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2510, &$s2526, $tmp2527);
                        $tmp2525 = $tmp2531;
                        $tmp2524 = $tmp2525;
                        title2510 = $tmp2524;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2524));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2525));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2527));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2523));
                    }
                    {
                        $tmp2532 = title2510;
                        panda$core$String* $tmp2539 = (($fn2538) self->charProtector->$class->vtable[2])(self->charProtector, &$s2537);
                        $tmp2536 = $tmp2539;
                        panda$core$String* $tmp2540 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(title2510, &$s2535, $tmp2536);
                        $tmp2534 = $tmp2540;
                        $tmp2533 = $tmp2534;
                        title2510 = $tmp2533;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2533));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2534));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2536));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2532));
                    }
                    {
                        $tmp2541 = titleTag2512;
                        panda$core$String* $tmp2546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2545, title2510);
                        $tmp2544 = $tmp2546;
                        panda$core$String* $tmp2548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2544, &$s2547);
                        $tmp2543 = $tmp2548;
                        $tmp2542 = $tmp2543;
                        titleTag2512 = $tmp2542;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2542));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2543));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2544));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2541));
                    }
                }
                }
                {
                    $tmp2549 = replacementText2456;
                    panda$core$String* $tmp2558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2557, url2490);
                    $tmp2556 = $tmp2558;
                    panda$core$String* $tmp2560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2556, &$s2559);
                    $tmp2555 = $tmp2560;
                    panda$core$String* $tmp2561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2555, titleTag2512);
                    $tmp2554 = $tmp2561;
                    panda$core$String* $tmp2563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2554, &$s2562);
                    $tmp2553 = $tmp2563;
                    panda$core$String* $tmp2564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2553, linkText2465);
                    $tmp2552 = $tmp2564;
                    panda$core$String* $tmp2566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2552, &$s2565);
                    $tmp2551 = $tmp2566;
                    $tmp2550 = $tmp2551;
                    replacementText2456 = $tmp2550;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2550));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2551));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2552));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2553));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2554));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2555));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2556));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2549));
                }
            }
            $tmp2489 = -1;
            goto $l2487;
            $l2487:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) titleTag2512));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) title2510));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) url2490));
            url2490 = NULL;
            title2510 = NULL;
            titleTag2512 = NULL;
            switch ($tmp2489) {
                case -1: goto $l2567;
            }
            $l2567:;
        }
        }
        else {
        {
            if (((panda$core$Bit) { self->linkResolver != NULL }).value) {
            {
                {
                    $tmp2568 = replacementText2456;
                    if (self->linkResolver->target) {
                        $tmp2571 = (($fn2572) self->linkResolver->pointer)(self->linkResolver->target, linkText2465);
                    } else {
                        $tmp2571 = (($fn2573) self->linkResolver->pointer)(linkText2465);
                    }
                    $tmp2570 = $tmp2571;
                    $tmp2569 = $tmp2570;
                    replacementText2456 = $tmp2569;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2569));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2570));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2568));
                }
                if (((panda$core$Bit) { replacementText2456 != NULL }).value) {
                {
                    int $tmp2576;
                    {
                        panda$core$String* $tmp2583 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(linkText2465, &$s2581, &$s2582);
                        $tmp2580 = $tmp2583;
                        panda$core$String* $tmp2586 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp2580, &$s2584, &$s2585);
                        $tmp2579 = $tmp2586;
                        $tmp2578 = $tmp2579;
                        escaped2577 = $tmp2578;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2578));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2579));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2580));
                        {
                            $tmp2587 = replacementText2456;
                            panda$core$String* $tmp2594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2593, replacementText2456);
                            $tmp2592 = $tmp2594;
                            panda$core$String* $tmp2596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2592, &$s2595);
                            $tmp2591 = $tmp2596;
                            panda$core$String* $tmp2597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2591, escaped2577);
                            $tmp2590 = $tmp2597;
                            panda$core$String* $tmp2599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2590, &$s2598);
                            $tmp2589 = $tmp2599;
                            $tmp2588 = $tmp2589;
                            replacementText2456 = $tmp2588;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2588));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2589));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2590));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2591));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2592));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2587));
                        }
                    }
                    $tmp2576 = -1;
                    goto $l2574;
                    $l2574:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escaped2577));
                    escaped2577 = NULL;
                    switch ($tmp2576) {
                        case -1: goto $l2600;
                    }
                    $l2600:;
                }
                }
                else {
                {
                    {
                        $tmp2601 = replacementText2456;
                        panda$core$String* $tmp2606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2605, linkText2465);
                        $tmp2604 = $tmp2606;
                        panda$core$String* $tmp2608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2604, &$s2607);
                        $tmp2603 = $tmp2608;
                        $tmp2602 = $tmp2603;
                        replacementText2456 = $tmp2602;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2602));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2603));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2604));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2601));
                    }
                }
                }
            }
            }
            else {
            {
                {
                    $tmp2609 = replacementText2456;
                    $tmp2610 = &$s2611;
                    replacementText2456 = $tmp2610;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2610));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2609));
                }
            }
            }
        }
        }
        $tmp2613 = ((panda$core$Object*) replacementText2456);
        $returnValue2612 = $tmp2613;
        panda$core$Panda$ref$panda$core$Object($tmp2613);
        $tmp2455 = 0;
        goto $l2453;
        $l2614:;
        return $returnValue2612;
    }
    $l2453:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defn2483));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) id2473));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) linkText2465));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) wholeMatch2457));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) replacementText2456));
    wholeMatch2457 = NULL;
    linkText2465 = NULL;
    id2473 = NULL;
    defn2483 = NULL;
    switch ($tmp2455) {
        case 0: goto $l2614;
    }
    $l2616:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doAnchors$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* internalLink2620 = NULL;
    panda$core$RegularExpression* $tmp2621;
    panda$core$RegularExpression* $tmp2622;
    panda$core$RegularExpression* inlineLink2626 = NULL;
    panda$core$RegularExpression* $tmp2627;
    panda$core$RegularExpression* $tmp2628;
    panda$core$Int64 $tmp2631;
    panda$core$RegularExpression* referenceShortcut2634 = NULL;
    panda$core$RegularExpression* $tmp2635;
    panda$core$RegularExpression* $tmp2636;
    panda$core$Int64 $tmp2639;
    int $tmp2619;
    {
        panda$core$RegularExpression* $tmp2623 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp2623, &$s2624);
        $tmp2622 = $tmp2623;
        $tmp2621 = $tmp2622;
        internalLink2620 = $tmp2621;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2621));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2622));
        panda$core$MutableMethod* $tmp2625 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2625, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous27$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) self));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, internalLink2620, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp2625)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2625));
        panda$core$RegularExpression* $tmp2629 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp2631, 4);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp2629, &$s2630, $tmp2631);
        $tmp2628 = $tmp2629;
        $tmp2627 = $tmp2628;
        inlineLink2626 = $tmp2627;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2627));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2628));
        panda$core$MutableMethod* $tmp2632 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp2633 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2633, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous28$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2632, (panda$core$Int8*) &panda$core$MutableMethod$$shim29$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp2633)));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, inlineLink2626, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp2632)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2632));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2633));
        panda$core$RegularExpression* $tmp2637 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$Int64$init$builtin_int64(&$tmp2639, 4);
        panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp2637, &$s2638, $tmp2639);
        $tmp2636 = $tmp2637;
        $tmp2635 = $tmp2636;
        referenceShortcut2634 = $tmp2635;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2635));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2636));
        panda$core$MutableMethod* $tmp2640 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2640, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous30$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) self));
        panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, referenceShortcut2634, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp2640)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2640));
    }
    $tmp2619 = -1;
    goto $l2617;
    $l2617:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) referenceShortcut2634));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inlineLink2626));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) internalLink2620));
    internalLink2620 = NULL;
    inlineLink2626 = NULL;
    referenceShortcut2634 = NULL;
    switch ($tmp2619) {
        case -1: goto $l2641;
    }
    $l2641:;
}
void org$pandalanguage$pandac$pandadoc$Markdown$doItalicsAndBold$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* $tmp2642;
    panda$core$RegularExpression* $tmp2646;
    panda$core$RegularExpression* $tmp2643 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp2643, &$s2644);
    $tmp2642 = $tmp2643;
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_markup, $tmp2642, &$s2645);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2642));
    panda$core$RegularExpression* $tmp2647 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp2647, &$s2648);
    $tmp2646 = $tmp2647;
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_markup, $tmp2646, &$s2649);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2646));
}
void org$pandalanguage$pandac$pandadoc$Markdown$encodeAmpsAndAngles$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* $tmp2650;
    panda$core$RegularExpression* $tmp2654;
    panda$core$RegularExpression* $tmp2651 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp2651, &$s2652);
    $tmp2650 = $tmp2651;
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_markup, $tmp2650, &$s2653);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2650));
    panda$core$RegularExpression* $tmp2655 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp2655, &$s2656);
    $tmp2654 = $tmp2655;
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(p_markup, $tmp2654, &$s2657);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2654));
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous31$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$collections$ListView* p_groups) {
    panda$core$String* code2661 = NULL;
    panda$core$String* $tmp2662;
    panda$core$Object* $tmp2663;
    panda$core$Int64 $tmp2664;
    panda$core$MutableString* sub2669 = NULL;
    panda$core$MutableString* $tmp2670;
    panda$core$MutableString* $tmp2671;
    panda$core$RegularExpression* $tmp2673;
    panda$core$RegularExpression* $tmp2677;
    panda$core$String* $returnValue2682;
    panda$core$String* $tmp2683;
    panda$core$String* $tmp2684;
    panda$core$String* $tmp2685;
    int $tmp2660;
    {
        panda$core$Int64$init$builtin_int64(&$tmp2664, 2);
        ITable* $tmp2665 = p_groups->$class->itable;
        while ($tmp2665->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2665 = $tmp2665->next;
        }
        $fn2667 $tmp2666 = $tmp2665->methods[0];
        panda$core$Object* $tmp2668 = $tmp2666(p_groups, $tmp2664);
        $tmp2663 = $tmp2668;
        $tmp2662 = ((panda$core$String*) $tmp2663);
        code2661 = $tmp2662;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2662));
        panda$core$Panda$unref$panda$core$Object($tmp2663);
        panda$core$MutableString* $tmp2672 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp2672, code2661);
        $tmp2671 = $tmp2672;
        $tmp2670 = $tmp2671;
        sub2669 = $tmp2670;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2670));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2671));
        panda$core$RegularExpression* $tmp2674 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp2674, &$s2675);
        $tmp2673 = $tmp2674;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(sub2669, $tmp2673, &$s2676);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2673));
        panda$core$RegularExpression* $tmp2678 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp2678, &$s2679);
        $tmp2677 = $tmp2678;
        panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(sub2669, $tmp2677, &$s2680);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2677));
        (($fn2681) self->$class->vtable[18])(self, sub2669);
        panda$core$String* $tmp2687 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2686, ((panda$core$Object*) sub2669));
        $tmp2685 = $tmp2687;
        panda$core$String* $tmp2689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2685, &$s2688);
        $tmp2684 = $tmp2689;
        $tmp2683 = $tmp2684;
        $returnValue2682 = $tmp2683;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2683));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2684));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2685));
        $tmp2660 = 0;
        goto $l2658;
        $l2690:;
        return $returnValue2682;
    }
    $l2658:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) sub2669));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) code2661));
    code2661 = NULL;
    sub2669 = NULL;
    switch ($tmp2660) {
        case 0: goto $l2690;
    }
    $l2692:;
    abort();
}
panda$core$Object* panda$core$MutableMethod$$shim32$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$core$MutableMethod* self, panda$collections$ListView* p_p0) {
    panda$core$Method* methodVar2696 = NULL;
    panda$core$Method* $tmp2697;
    panda$core$Method* $tmp2698;
    panda$core$Object* $tmp2700;
    panda$core$Object* $tmp2701;
    panda$core$Object* $returnValue2702;
    panda$core$Object* $tmp2703;
    panda$core$String* $tmp2704;
    panda$core$String* $tmp2705;
    int $tmp2695;
    {
        panda$core$Method* $tmp2699 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp2699, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp2698 = $tmp2699;
        $tmp2697 = $tmp2698;
        methodVar2696 = $tmp2697;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2697));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2698));
        {
            $tmp2700 = ((panda$core$MutableMethod*) methodVar2696)->target;
            $tmp2701 = self->target;
            ((panda$core$MutableMethod*) methodVar2696)->target = $tmp2701;
            panda$core$Panda$ref$panda$core$Object($tmp2701);
            panda$core$Panda$unref$panda$core$Object($tmp2700);
        }
        if (methodVar2696->target) {
            $tmp2705 = (($fn2706) methodVar2696->pointer)(methodVar2696->target, p_p0);
        } else {
            $tmp2705 = (($fn2707) methodVar2696->pointer)(p_p0);
        }
        $tmp2704 = $tmp2705;
        $tmp2703 = ((panda$core$Object*) $tmp2704);
        $returnValue2702 = $tmp2703;
        panda$core$Panda$ref$panda$core$Object($tmp2703);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2704));
        $tmp2695 = 0;
        goto $l2693;
        $l2708:;
        return $returnValue2702;
    }
    $l2693:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar2696));
    methodVar2696 = NULL;
    switch ($tmp2695) {
        case 0: goto $l2708;
    }
    $l2710:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Markdown$doCodeSpans$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* self, panda$core$MutableString* p_markup) {
    panda$core$RegularExpression* $tmp2711;
    panda$core$RegularExpression* $tmp2712 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
    panda$core$RegularExpression$init$panda$core$String($tmp2712, &$s2713);
    $tmp2711 = $tmp2712;
    panda$core$MutableMethod* $tmp2714 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
    panda$core$MutableMethod* $tmp2715 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
    panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2715, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$Markdown$$anonymous31$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String, ((panda$core$Object*) self));
    panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp2714, (panda$core$Int8*) &panda$core$MutableMethod$$shim32$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object, ((panda$core$Object*) ((panda$core$Object*) $tmp2715)));
    panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(p_markup, $tmp2711, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp2714)));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2714));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2715));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2711));
}
void org$pandalanguage$pandac$pandadoc$Markdown$cleanup(org$pandalanguage$pandac$pandadoc$Markdown* self) {
    int $tmp2718;
    {
    }
    $tmp2718 = -1;
    goto $l2716;
    $l2716:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2718) {
        case -1: goto $l2719;
    }
    $l2719:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->errorQueue));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parser));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->linkResolver));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->linkDefinitions));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->charProtector));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->htmlProtector));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->random));
}

