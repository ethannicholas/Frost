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
#include "panda/collections/ListView.h"
#include "panda/core/Char8.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown/_Closure2.h"
#include "panda/core/Method.h"
#include "panda/collections/Array.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown/_Closure4.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"
#include "panda/core/Range.LTpanda/core/MutableString/Index.Q.GT.h"
#include "panda/core/MutableString/Index.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown/_Closure6.h"
#include "panda/collections/MapView.h"
#include "panda/core/Char32.h"
#include "panda/core/Real64.h"
#include "panda/core/Int32.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown/_Closure9.h"
#include "panda/core/Immutable.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown/CodeReplacer.h"
#include "org/pandalanguage/pandac/parser/SyntaxHighlighter/Kind.h"
#include "org/pandalanguage/pandac/Pair.h"
#include "panda/core/Equatable.h"
#include "org/pandalanguage/pandac/parser/Token.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown/_Closure12.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown/_Closure14.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown/_Closure16.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown/_Closure18.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown/_Closure20.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown/_Closure22.h"
#include "panda/core/Matcher.h"
#include "panda/core/String/Index.h"
#include "panda/core/Comparable.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown/HTMLToken.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown/_Closure24.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown/_Closure26.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown/_Closure28.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown/_Closure30.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown/_Closure32.h"


static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$Markdown$class_type org$pandalanguage$pandac$pandadoc$Markdown$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$cleanup, org$pandalanguage$pandac$pandadoc$Markdown$process$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$encodeBackslashEscapes$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$encodeEscapes$panda$core$MutableString$panda$collections$ListView$LTpanda$core$Char8$GT$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$stripLinkDefinitions$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$runBlockGamut$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$doHorizontalRules$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$hashHTMLBlocks$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$formParagraphs$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$doAutoLinks$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$unescapeSpecialChars$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$encodeEmail$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$doBlockQuotes$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$detabify$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$doCodeBlocks$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$prettyPrint$org$pandalanguage$pandac$parser$Parser$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$syntaxHighlight$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$encodeCode$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$doLists$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$processListItems$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$doHeaders$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$runSpanGamut$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$tokenizeHTML$panda$core$String$R$panda$collections$ListView$LTorg$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$GT, org$pandalanguage$pandac$pandadoc$Markdown$escapeSpecialCharsWithinTagAttributes$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$doImages$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$doAnchors$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$doItalicsAndBold$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$encodeAmpsAndAngles$panda$core$MutableString, org$pandalanguage$pandac$pandadoc$Markdown$doCodeSpans$panda$core$MutableString} };

typedef void (*$fn62)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn69)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn72)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn75)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn78)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn93)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef void (*$fn99)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*, panda$collections$ListView*, panda$core$String*);
typedef void (*$fn103)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*, panda$collections$ListView*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn109)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn113)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn118)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn133)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn151)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure2*, panda$collections$ListView*);
typedef void (*$fn155)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn157)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn159)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn161)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn163)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn165)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn167)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$collections$Iterator* (*$fn179)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn183)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn188)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn251)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$core$String* (*$fn262)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$core$String* (*$fn296)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure4*, panda$collections$ListView*);
typedef panda$core$Int64 (*$fn425)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn453)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef void (*$fn472)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn508)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$core$String* (*$fn520)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure6*, panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn529)(panda$collections$MapView*);
typedef panda$core$Bit (*$fn533)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn538)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn545)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn561)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn565)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn570)(panda$collections$Iterator*);
typedef panda$core$Real64 (*$fn576)(panda$math$Random*);
typedef panda$core$Object* (*$fn632)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure9*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn638)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn679)(panda$collections$ListView*);
typedef panda$core$String* (*$fn700)(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer*, panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn719)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn723)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn728)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn739)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn749)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn763)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn855)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn863)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn871)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn879)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn887)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Bit (*$fn898)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn908)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn931)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn941)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn956)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn995)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$Bit (*$fn1016)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn1040)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$Bit (*$fn1061)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn1085)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$Bit (*$fn1107)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn1115)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1123)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Object* (*$fn1158)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure12*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn1168)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure14*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1196)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure16*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1226)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure18*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1231)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure20*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn1239)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure22*, panda$collections$ListView*);
typedef void (*$fn1243)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1245)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1247)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1249)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1251)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1253)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1255)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1257)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1259)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Bit (*$fn1312)(panda$core$Comparable*, panda$core$Comparable*);
typedef panda$core$Bit (*$fn1342)(panda$core$Comparable*, panda$core$Comparable*);
typedef panda$collections$ListView* (*$fn1360)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1366)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1370)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1375)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1393)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1403)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1413)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1423)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1460)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure24*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn1474)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure26*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1504)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure28*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn1518)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure30*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1538)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure32*, panda$collections$ListView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e", 42, 5747153137714602429, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x74\x6d\x70\x2f\x64\x75\x6d\x6d\x79", 10, -2887356857474712656, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x72\x5c\x6e", 4, 200020409, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x72", 2, 19607, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5c\x74\x5d\x2b\x24", 12, 4609931141593742675, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x5b\x20\x5d\x2b\x24", 6, 2058973016890, NULL };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x60\x5f\x3e\x21", 4, 203944687, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a\x7b\x7d\x5b\x5d\x28\x29\x23\x2b\x2d\x2e", 11, -6003771304831432199, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x5c\x5c", 4, 199795969, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x5c", 3, 1978177, NULL };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29", 4, 145926154, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x5b\x20\x5d\x7b\x30\x2c\x33\x7d\x5c\x5b\x28\x2e\x2b\x29\x5c\x5d\x3a\x5b\x20\x5c\x74\x5d\x2a\x5c\x6e\x3f\x5b\x20\x5c\x74\x5d\x2a", 33, -4589409330981298645, NULL };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3f\x28\x5c\x53\x2b\x3f\x29\x3e\x3f", 10, -7697525032227164949, NULL };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a\x5c\x6e\x3f\x5b\x20\x5c\x74\x5d\x2a", 15, 4344893690925401026, NULL };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x5b\x22\x28\x5d\x28\x2e\x2b\x3f\x29\x5b\x22\x29\x5d\x5b\x20\x5c\x74\x5d\x2a\x29\x3f", 24, -4892301784787365954, NULL };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x5c\x6e\x2b\x7c\x5c\x5a\x29", 10, 7324187788974597826, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5d\x7b\x30\x2c\x32\x7d\x28\x5b\x20\x5d\x3f", 18, -695802876960105267, NULL };
static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x3f\x29\x7b\x33\x2c\x7d\x5b\x20\x5d\x2a\x24", 14, 5711149104113814898, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x68\x72\x20\x2f\x3e", 6, 1703066247920, NULL };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70", 1, 213, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x69\x76", 3, 2061124, NULL };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x31", 2, 20754, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x32", 2, 20755, NULL };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x33", 2, 20756, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x34", 2, 20757, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x35", 2, 20758, NULL };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x36", 2, 20759, NULL };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6c\x6f\x63\x6b\x71\x75\x6f\x74\x65", 10, -2536067448883908010, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65", 3, 2184428, NULL };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x61\x62\x6c\x65", 5, 22682056921, NULL };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6c", 2, 20409, NULL };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x6c", 2, 21520, NULL };
static panda$core$String $s229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6c", 2, 22126, NULL };
static panda$core$String $s231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x63\x72\x69\x70\x74", 6, 2280602224762, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x73\x63\x72\x69\x70\x74", 8, 22741103748248783, NULL };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d", 4, 210295037, NULL };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x65\x6c\x64\x73\x65\x74", 8, 21876880126472849, NULL };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x72\x61\x6d\x65", 6, 2175813319029, NULL };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x68", 4, 217364527, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x73", 3, 2112631, NULL };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x6c", 3, 2060710, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5e\x3c\x28", 4, 146237435, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x62", 2, 19591, NULL };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2e\x2a\x5c\x6e\x29\x2a\x3f", 8, 15166389503170077, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x5c\x32\x3e", 5, 16803092312, NULL };
static panda$core$String $s288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x2a", 4, 198153659, NULL };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2b\x7c\x5c\x5a\x29\x29", 11, 1905689439221158230, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5e", 2, 14335, NULL };
static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28", 2, 16301, NULL };
static panda$core$String $s308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x62", 2, 19591, NULL };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2e\x2a\x5c\x6e\x29\x2a\x3f", 8, 15166389503170077, NULL };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2a\x3c\x2f\x5c\x32\x3e", 7, 156491179351200, NULL };
static panda$core$String $s316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x2a", 4, 198153659, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2b\x7c\x5c\x5a\x29\x29", 11, 1905689439221158230, NULL };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29", 12, 4158029666834239703, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x41\x5c\x6e\x3f", 5, 20151576623, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x7b\x30\x2c", 6, 2021366306632, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s343 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28\x68\x72\x29", 5, 16796009060, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x62", 2, 19591, NULL };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5b\x5e\x3c\x3e\x5d\x29\x2a\x3f", 9, 1536684806687938687, NULL };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x3f\x3e", 3, 1516173, NULL };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x2a", 4, 198153659, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x7b\x32\x2c\x7d\x7c\x5c\x5a\x29\x29", 14, 47502487764265221, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29", 12, 4158029666834239703, NULL };
static panda$core$String $s361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x41\x5c\x6e\x3f", 5, 20151576623, NULL };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x7b\x30\x2c", 6, 2021366306632, NULL };
static panda$core$String $s374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x73\x3a", 4, 145926777, NULL };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x21", 2, 16294, NULL };
static panda$core$String $s380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2d\x2d\x2e\x2a\x3f\x2d\x2d\x5c\x73\x2a\x29\x2b", 13, -4188240096700658567, NULL };
static panda$core$String $s382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x2a", 4, 198153659, NULL };
static panda$core$String $s388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x7b\x32\x2c\x7d\x7c\x5c\x5a\x29", 13, -2921786165263253076, NULL };
static panda$core$String $s390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x41\x5c\x6e\x2b", 5, 20151576603, NULL };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x2b\x5c\x7a", 5, 20197438560, NULL };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d", 6, 2040023282445, NULL };
static panda$core$String $s465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x70\x3e", 3, 1653735, NULL };
static panda$core$String $s479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x70\x3e", 4, 166369282, NULL };
static panda$core$String $s510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static panda$core$String $s513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28\x28\x68\x74\x74\x70\x73\x3f\x7c\x66\x74\x70\x29\x3a\x5b\x5e\x27\x5c\x22\x3e\x5c\x73\x5d\x2b\x29\x3e", 27, -3769254741412201634, NULL };
static panda$core$String $s514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22\x24\x31\x22\x3e\x24\x31\x3c\x2f\x61\x3e", 19, -7734359251480494054, NULL };
static panda$core$String $s516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28\x5b\x2d\x2e\x5c\x77\x5d\x2b\x5c\x40\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x28\x5c\x2e\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x29\x2a\x5c\x2e\x5b\x61\x2d\x7a\x5d\x2b\x29\x3e", 46, 7932002164266535007, NULL };
static panda$core$String $s553 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s554 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x23", 2, 14074, NULL };
static panda$core$String $s592 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s601 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x23\x78", 3, 1421594, NULL };
static panda$core$String $s606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78", 1, 221, NULL };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s616 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x5b\x20\x09\x5d\x2a\x3e\x5b\x20\x09\x5d\x3f", 12, -3582088860114369432, NULL };
static panda$core$String $s619 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2b\x5c\x6e", 4, 151902292, NULL };
static panda$core$String $s621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2e\x2b\x5c\x6e\x29\x2a", 7, 150162376369015, NULL };
static panda$core$String $s623 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x2a", 3, 1979945, NULL };
static panda$core$String $s625 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2b", 2, 14385, NULL };
static panda$core$String $s627 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s653 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s654 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s657 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s678 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2e\x2a\x3f\x29\x5c\x74", 7, 150162241731241, NULL };
static panda$core$String $s682 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x5c\x74\x7c\x5b\x20\x5d\x7b\x31\x2c\x34\x7d\x29", 18, 7461573203115413830, NULL };
static panda$core$String $s683 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s686 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x5c\x6e\x5c\x6e\x7c\x5c\x41\x29\x28\x28\x3f\x3a", 15, -8559916856311689575, NULL };
static panda$core$String $s687 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x5b\x20\x5d\x7b\x34\x7d\x29", 10, 7324185912868193391, NULL };
static panda$core$String $s689 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2a\x5c\x6e\x2b", 5, 15341101234, NULL };
static panda$core$String $s691 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2b", 2, 14385, NULL };
static panda$core$String $s693 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s695 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x3f\x3d\x5e\x5b\x20\x5d\x7b\x30\x2c\x34\x7d\x5c\x53\x29\x7c\x5c\x5a\x29", 20, -1268815784794221538, NULL };
static panda$core$String $s704 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x6e\x64\x61\x63\x6f\x64\x65\x22\x3e", 24, -1375153472772145809, NULL };
static panda$core$String $s713 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s714 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72\x27", 137, 2390994241317501497, NULL };
static panda$core$String $s754 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6d\x6d\x65\x6e\x74\x22\x3e", 22, -1756050522877089685, NULL };
static panda$core$String $s786 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x22\x3e", 25, 4577563245309187979, NULL };
static panda$core$String $s791 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x22\x3e", 25, 6760721592980043958, NULL };
static panda$core$String $s796 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x4e\x61\x6d\x65\x22\x3e", 28, 5111374842590752150, NULL };
static panda$core$String $s801 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x74\x79\x70\x65\x22\x3e", 19, -6878895466207673670, NULL };
static panda$core$String $s806 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6b\x65\x79\x77\x6f\x72\x64\x22\x3e", 22, -1670481277391576067, NULL };
static panda$core$String $s811 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6e\x74\x72\x6f\x6c\x22\x3e", 22, -1756049386432501671, NULL };
static panda$core$String $s816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x74\x65\x72\x61\x6c\x22\x3e", 22, -1659229352682266791, NULL };
static panda$core$String $s821 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x73\x74\x72\x69\x6e\x67\x22\x3e", 21, -198306892965556893, NULL };
static panda$core$String $s826 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6f\x70\x65\x72\x61\x74\x6f\x72\x22\x3e", 23, 1793793249967207580, NULL };
static panda$core$String $s831 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x61\x62\x65\x6c\x22\x3e", 20, 6207823968128210400, NULL };
static panda$core$String $s835 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s843 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s844 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s846 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s847 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s849 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s850 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x67\x74\x3b", 4, 144274317, NULL };
static panda$core$String $s857 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s858 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s865 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s866 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s873 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s874 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5b", 2, 19584, NULL };
static panda$core$String $s881 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s882 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5d", 2, 19586, NULL };
static panda$core$String $s889 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s890 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s919 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22", 13, -8467438715157355368, NULL };
static panda$core$String $s921 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e", 2, 13697, NULL };
static panda$core$String $s946 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s960 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s962 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s1120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x24\x28\x5c\x73\x2a\x29\x5c\x2e\x5c\x2e\x5c\x2e\x28\x5c\x73\x2a\x29\x5e", 22, -7048023396403805866, NULL };
static panda$core$String $s1121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x31\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d\x24\x32", 13, -8807464024981417766, NULL };
static panda$core$String $s1124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d", 9, 1585511400200274083, NULL };
static panda$core$String $s1125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x65\x6c\x6c\x69\x70\x73\x69\x73\x22\x3e\x2e\x2e\x2e\x3c\x2f\x73\x70\x61\x6e\x3e", 33, 5749756206725659630, NULL };
static panda$core$String $s1135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x5b\x20\x5d\x7b\x30\x2c", 8, 15160529116888912, NULL };
static panda$core$String $s1137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x28\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x29\x5b\x20\x5d\x2b\x29\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x7a\x7c\x5c\x6e\x7b\x32\x2c\x7d", 42, -5883137854691898449, NULL };
static panda$core$String $s1139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x53\x29\x28\x3f\x21\x5b\x20\x5d\x2a\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b\x29\x29\x29", 36, 8434742182533998850, NULL };
static panda$core$String $s1152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e", 5, 14738541648, NULL };
static panda$core$String $s1154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29\x7c\x5c\x41\x5c\x6e\x3f\x29", 23, 6260301638587013175, NULL };
static panda$core$String $s1181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d\x5c\x7a", 8, 20810277504230859, NULL };
static panda$core$String $s1183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x6e\x29\x3f\x5e\x28\x5b\x20\x5c\x74\x5d\x2a\x29\x28\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b", 32, 116054090365740223, NULL };
static panda$core$String $s1188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x6e\x7b\x31\x2c\x32\x7d\x29\x29", 19, 4304152477369649477, NULL };
static panda$core$String $s1190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2a\x28\x5c\x7a\x7c\x5c\x32\x28\x5b\x2d\x2b\x5c\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5c\x74\x5d\x2b\x29\x29", 35, -2157463411774501410, NULL };
static panda$core$String $s1212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static panda$core$String $s1218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s1219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s1221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x3d\x3d\x3d\x3d\x2b\x24", 17, 8644226230150951458, NULL };
static panda$core$String $s1229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x2d\x2d\x2d\x2d\x2b\x24", 17, 8644226060307728994, NULL };
static panda$core$String $s1235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x28\x23\x7b\x31\x2c\x36\x7d\x29\x5c\x73\x2a\x28\x2e\x2a\x3f\x29\x5c\x73\x2a\x5c\x31\x3f\x24", 24, 6625741561155563100, NULL };
static panda$core$String $s1261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x32\x2c\x7d\x5c\x6e", 7, 142480172029377, NULL };
static panda$core$String $s1262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x62\x72\x20\x2f\x3e\x0a", 8, 14324133278249456, NULL };
static panda$core$String $s1266 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x3c\x5b\x61\x2d\x7a\x2f\x21\x24\x5d\x28\x3f\x3a\x5b\x5e\x3c\x3e\x5d\x7c", 21, -3726567012419943545, NULL };
static panda$core$String $s1277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2a\x3e\x29", 4, 146737487, NULL };
static panda$core$String $s1281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s1282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x6e\x65\x73\x74\x65\x64\x54\x61\x67\x73\x52\x65\x67\x65\x78\x28\x64\x65\x70\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 134, 6382497733495402167, NULL };
static panda$core$String $s1290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x73\x3a\x3c\x21\x28\x2d\x2d\x2e\x2a\x3f\x2d\x2d\x5c\x73\x2a\x29\x2b\x3e\x29\x7c", 22, -7717011245258052727, NULL };
static panda$core$String $s1291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x73\x3a\x3c\x5c\x3f\x2e\x2a\x3f\x5c\x3f\x3e\x29", 14, -1964502928120912323, NULL };
static panda$core$String $s1293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s1397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s1405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x60", 1, 197, NULL };
static panda$core$String $s1407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x60", 1, 197, NULL };
static panda$core$String $s1415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s1417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s1425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s1427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s1444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x20\x5c\x22\x28\x2e\x2a\x29\x5c\x22\x5c\x5c\x29", 30, 1507772917981139974, NULL };
static panda$core$String $s1445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x74\x69\x74\x6c\x65\x3d\x22\x24\x33\x22\x20\x2f\x3e", 36, -5185982321426610333, NULL };
static panda$core$String $s1447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x5c\x5c\x29", 21, -5830152919387063515, NULL };
static panda$core$String $s1448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x2f\x3e", 25, -7685348581218553223, NULL };
static panda$core$String $s1451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5b\x21\x5d\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 13, -4389225286389518346, NULL };
static panda$core$String $s1452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f", 15, -5004708712015115107, NULL };
static panda$core$String $s1454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 9, 2099712822272888901, NULL };
static panda$core$String $s1456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 10, 7641698408407002113, NULL };
static panda$core$String $s1466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f", 15, -5004708712015115107, NULL };
static panda$core$String $s1468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 9, 2099712822272888901, NULL };
static panda$core$String $s1470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 10, 7641698408407002113, NULL };
static panda$core$String $s1479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x28", 2, 19533, NULL };
static panda$core$String $s1481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a", 6, 2021365209467, NULL };
static panda$core$String $s1483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3f\x28\x2e\x2a\x3f\x29\x3e\x3f", 9, 1750196697486000581, NULL };
static panda$core$String $s1485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a", 6, 2021365209467, NULL };
static panda$core$String $s1487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1489 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5b\x27\x22\x5d\x29", 6, 1491434205139, NULL };
static panda$core$String $s1491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2e\x2a\x3f\x29", 5, 14720345233, NULL };
static panda$core$String $s1493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x35", 2, 19546, NULL };
static panda$core$String $s1495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3f", 2, 14405, NULL };
static panda$core$String $s1497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x29", 2, 19534, NULL };
static panda$core$String $s1499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x5b", 3, 1447724, NULL };
static panda$core$String $s1509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5b\x5e\x5c\x5b\x5c\x5d\x5d\x2b\x29", 10, 7631247159193161743, NULL };
static panda$core$String $s1511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5d", 2, 19586, NULL };
static panda$core$String $s1513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1524 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x2a\x5c\x5c\x2a\x7c\x5f\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x5b\x2a\x5f\x5d\x2a\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 35, 636172404878895653, NULL };
static panda$core$String $s1525 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x74\x72\x6f\x6e\x67\x3e\x24\x32\x3c\x2f\x73\x74\x72\x6f\x6e\x67\x3e", 19, 504491683038092400, NULL };
static panda$core$String $s1527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x2a\x7c\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 26, -4247179954659836315, NULL };
static panda$core$String $s1528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x6d\x3e\x24\x32\x3c\x2f\x65\x6d\x3e", 11, 2723679958089201678, NULL };
static panda$core$String $s1530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x28\x3f\x21\x23\x3f\x5b\x78\x58\x5d\x3f\x28\x3f\x3a\x5b\x30\x2d\x39\x61\x2d\x66\x41\x2d\x46\x5d\x2b\x7c\x5c\x77\x2b\x29\x3b\x29", 33, -6716186838887255919, NULL };
static panda$core$String $s1531 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s1533 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28\x3f\x21\x5b\x61\x2d\x7a\x41\x2d\x5a\x2f\x3f\x5c\x24\x21\x5d\x29", 18, 6433614010358842861, NULL };
static panda$core$String $s1534 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s1536 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3c\x21\x5c\x5c\x29\x28\x60\x2b\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x21\x60\x29\x5c\x31\x28\x3f\x21\x60\x29", 29, 7657757978565690602, NULL };

void org$pandalanguage$pandac$pandadoc$Markdown$init(org$pandalanguage$pandac$pandadoc$Markdown* param0) {

// line 120
org$pandalanguage$pandac$pandadoc$Markdown$init$$LPpanda$core$String$RP$EQ$AM$GT$LPpanda$core$String$Q$RP$Q(param0, ((panda$core$MutableMethod*) NULL));
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$init$$LPpanda$core$String$RP$EQ$AM$GT$LPpanda$core$String$Q$RP$Q(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableMethod* param1) {

// line 98
panda$threads$MessageQueue* $tmp2 = (panda$threads$MessageQueue*) frostObjectAlloc(56, (panda$core$Class*) &panda$threads$MessageQueue$class);
panda$threads$MessageQueue$init($tmp2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
panda$threads$MessageQueue** $tmp3 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp4 = *$tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$threads$MessageQueue** $tmp5 = &param0->errorQueue;
*$tmp5 = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// unreffing REF($1:panda.threads.MessageQueue<org.pandalanguage.pandac.Compiler.Error>)
// line 100
org$pandalanguage$pandac$parser$Parser* $tmp6 = (org$pandalanguage$pandac$parser$Parser*) frostObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$class);
panda$threads$MessageQueue** $tmp7 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp8 = *$tmp7;
org$pandalanguage$pandac$parser$Parser$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT($tmp6, $tmp8);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
org$pandalanguage$pandac$parser$Parser** $tmp9 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp10 = *$tmp9;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
org$pandalanguage$pandac$parser$Parser** $tmp11 = &param0->parser;
*$tmp11 = $tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
// unreffing REF($16:org.pandalanguage.pandac.parser.Parser)
// line 105
panda$collections$HashMap* $tmp12 = (panda$collections$HashMap*) frostObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp12);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
panda$collections$HashMap** $tmp13 = &param0->linkDefinitions;
panda$collections$HashMap* $tmp14 = *$tmp13;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
panda$collections$HashMap** $tmp15 = &param0->linkDefinitions;
*$tmp15 = $tmp12;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
// unreffing REF($32:panda.collections.HashMap<panda.core.String, org.pandalanguage.pandac.pandadoc.Markdown.LinkDefinition>)
// line 108
org$pandalanguage$pandac$pandadoc$Protector* $tmp16 = (org$pandalanguage$pandac$pandadoc$Protector*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Protector$class);
org$pandalanguage$pandac$pandadoc$Protector$init($tmp16);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
org$pandalanguage$pandac$pandadoc$Protector** $tmp17 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp18 = *$tmp17;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
org$pandalanguage$pandac$pandadoc$Protector** $tmp19 = &param0->charProtector;
*$tmp19 = $tmp16;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
// unreffing REF($47:org.pandalanguage.pandac.pandadoc.Protector)
// line 111
org$pandalanguage$pandac$pandadoc$Protector* $tmp20 = (org$pandalanguage$pandac$pandadoc$Protector*) frostObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Protector$class);
org$pandalanguage$pandac$pandadoc$Protector$init($tmp20);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
org$pandalanguage$pandac$pandadoc$Protector** $tmp21 = &param0->htmlProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp22 = *$tmp21;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
org$pandalanguage$pandac$pandadoc$Protector** $tmp23 = &param0->htmlProtector;
*$tmp23 = $tmp20;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
// unreffing REF($61:org.pandalanguage.pandac.pandadoc.Protector)
// line 114
panda$math$Random* $tmp24 = panda$math$Random$default$R$panda$math$Random();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
panda$math$Random** $tmp25 = &param0->random;
panda$math$Random* $tmp26 = *$tmp25;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
panda$math$Random** $tmp27 = &param0->random;
*$tmp27 = $tmp24;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
// unreffing REF($75:panda.math.Random)
// line 117
panda$core$Int64 $tmp28 = (panda$core$Int64) {0};
panda$core$Int64* $tmp29 = &param0->listLevel;
*$tmp29 = $tmp28;
// line 124
panda$io$File* $tmp30 = (panda$io$File*) frostObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$io$File$init$panda$core$String($tmp30, &$s31);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
panda$io$File** $tmp32 = &param0->source;
panda$io$File* $tmp33 = *$tmp32;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
panda$io$File** $tmp34 = &param0->source;
*$tmp34 = $tmp30;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
// unreffing REF($92:panda.io.File)
// line 125
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$core$MutableMethod** $tmp35 = &param0->linkResolver;
panda$core$MutableMethod* $tmp36 = *$tmp35;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
panda$core$MutableMethod** $tmp37 = &param0->linkResolver;
*$tmp37 = param1;
// line 126
org$pandalanguage$pandac$parser$Parser** $tmp38 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp39 = *$tmp38;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp40 = (org$pandalanguage$pandac$parser$SyntaxHighlighter*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$class);
org$pandalanguage$pandac$parser$SyntaxHighlighter$init($tmp40);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp41 = &$tmp39->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp42 = *$tmp41;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp43 = &$tmp39->syntaxHighlighter;
*$tmp43 = $tmp40;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
// unreffing REF($117:org.pandalanguage.pandac.parser.SyntaxHighlighter)
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$process$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$String* param1) {

panda$core$MutableString* local0 = NULL;
// line 130
panda$core$MutableString* $tmp44 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp44, param1);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
panda$core$MutableString* $tmp45 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
*(&local0) = $tmp44;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
// unreffing REF($1:panda.core.MutableString)
// line 131
panda$core$MutableString* $tmp46 = *(&local0);
panda$core$RegularExpression* $tmp47 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp47, &$s48);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String($tmp46, $tmp47, &$s49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
// unreffing REF($15:panda.core.RegularExpression)
// line 132
panda$core$MutableString* $tmp50 = *(&local0);
panda$core$RegularExpression* $tmp51 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp51, &$s52);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String($tmp50, $tmp51, &$s53);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
// unreffing REF($23:panda.core.RegularExpression)
// line 133
panda$core$MutableString* $tmp54 = *(&local0);
panda$core$RegularExpression* $tmp55 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp55, &$s56);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String($tmp54, $tmp55, &$s57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
// unreffing REF($31:panda.core.RegularExpression)
// line 136
panda$core$MutableString* $tmp58 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp58, &$s59);
// line 138
panda$core$MutableString* $tmp60 = *(&local0);
$fn62 $tmp61 = ($fn62) param0->$class->vtable[14];
$tmp61(param0, $tmp60);
// line 139
panda$core$MutableString* $tmp63 = *(&local0);
panda$core$RegularExpression* $tmp64 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp64, &$s65);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String($tmp63, $tmp64, &$s66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
// unreffing REF($46:panda.core.RegularExpression)
// line 140
panda$core$MutableString* $tmp67 = *(&local0);
$fn69 $tmp68 = ($fn69) param0->$class->vtable[8];
$tmp68(param0, $tmp67);
// line 141
panda$core$MutableString* $tmp70 = *(&local0);
$fn72 $tmp71 = ($fn72) param0->$class->vtable[5];
$tmp71(param0, $tmp70);
// line 142
panda$core$MutableString* $tmp73 = *(&local0);
$fn75 $tmp74 = ($fn75) param0->$class->vtable[6];
$tmp74(param0, $tmp73);
// line 143
panda$core$MutableString* $tmp76 = *(&local0);
$fn78 $tmp77 = ($fn78) param0->$class->vtable[11];
$tmp77(param0, $tmp76);
// line 145
panda$core$MutableString* $tmp79 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp79, &$s80);
// line 146
panda$core$MutableString* $tmp81 = *(&local0);
panda$core$String* $tmp82 = panda$core$MutableString$convert$R$panda$core$String($tmp81);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
// unreffing REF($73:panda.core.String)
panda$core$MutableString* $tmp83 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
// unreffing text
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp82;

}
void org$pandalanguage$pandac$pandadoc$Markdown$encodeBackslashEscapes$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$collections$ListView* local0 = NULL;
panda$collections$ListView* local1 = NULL;
// line 150
panda$collections$ListView* $tmp84 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s85);
*(&local0) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
panda$collections$ListView* $tmp86 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp86));
*(&local0) = $tmp84;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
// unreffing REF($1:panda.collections.ListView<panda.core.Char8>)
// line 151
panda$collections$ListView* $tmp87 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s88);
*(&local1) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
panda$collections$ListView* $tmp89 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
*(&local1) = $tmp87;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
// unreffing REF($13:panda.collections.ListView<panda.core.Char8>)
// line 154
org$pandalanguage$pandac$pandadoc$Protector** $tmp90 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp91 = *$tmp90;
$fn93 $tmp92 = ($fn93) $tmp91->$class->vtable[2];
panda$core$String* $tmp94 = $tmp92($tmp91, &$s95);
panda$core$MutableString$replace$panda$core$String$panda$core$String(param1, &$s96, $tmp94);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
// unreffing REF($28:panda.core.String)
// line 157
panda$collections$ListView* $tmp97 = *(&local0);
$fn99 $tmp98 = ($fn99) param0->$class->vtable[4];
$tmp98(param0, param1, $tmp97, &$s100);
// line 158
panda$collections$ListView* $tmp101 = *(&local1);
$fn103 $tmp102 = ($fn103) param0->$class->vtable[4];
$tmp102(param0, param1, $tmp101, &$s104);
panda$collections$ListView* $tmp105 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp105));
// unreffing escapedChars
*(&local1) = ((panda$collections$ListView*) NULL);
panda$collections$ListView* $tmp106 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
// unreffing normalChars
*(&local0) = ((panda$collections$ListView*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$encodeEscapes$panda$core$MutableString$panda$collections$ListView$LTpanda$core$Char8$GT$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1, panda$collections$ListView* param2, panda$core$String* param3) {

panda$core$Char8 local0;
panda$core$RegularExpression* local1 = NULL;
// line 162
ITable* $tmp107 = ((panda$collections$Iterable*) param2)->$class->itable;
while ($tmp107->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp107 = $tmp107->next;
}
$fn109 $tmp108 = $tmp107->methods[0];
panda$collections$Iterator* $tmp110 = $tmp108(((panda$collections$Iterable*) param2));
goto block1;
block1:;
ITable* $tmp111 = $tmp110->$class->itable;
while ($tmp111->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp111 = $tmp111->next;
}
$fn113 $tmp112 = $tmp111->methods[0];
panda$core$Bit $tmp114 = $tmp112($tmp110);
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block3; else goto block2;
block2:;
ITable* $tmp116 = $tmp110->$class->itable;
while ($tmp116->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp116 = $tmp116->next;
}
$fn118 $tmp117 = $tmp116->methods[1];
panda$core$Object* $tmp119 = $tmp117($tmp110);
*(&local0) = ((panda$core$Char8$wrapper*) $tmp119)->value;
// line 163
panda$core$RegularExpression* $tmp120 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s122, param3);
panda$core$Char8 $tmp123 = *(&local0);
panda$core$Char8$wrapper* $tmp124;
$tmp124 = (panda$core$Char8$wrapper*) frostObjectAlloc(13, (panda$core$Class*) &panda$core$Char8$wrapperclass);
$tmp124->value = $tmp123;
panda$core$String* $tmp125 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp121, ((panda$core$Object*) $tmp124));
panda$core$RegularExpression$init$panda$core$String($tmp120, $tmp125);
*(&local1) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
panda$core$RegularExpression* $tmp126 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp126));
*(&local1) = $tmp120;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
// unreffing REF($22:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
// unreffing REF($21:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp121));
// unreffing REF($19:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
// unreffing REF($18:panda.core.RegularExpression)
// line 164
panda$core$RegularExpression* $tmp127 = *(&local1);
org$pandalanguage$pandac$pandadoc$Protector** $tmp128 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp129 = *$tmp128;
panda$core$Char8 $tmp130 = *(&local0);
panda$core$String* $tmp131 = panda$core$Char8$convert$R$panda$core$String($tmp130);
$fn133 $tmp132 = ($fn133) $tmp129->$class->vtable[2];
panda$core$String* $tmp134 = $tmp132($tmp129, $tmp131);
panda$core$Bit $tmp135 = panda$core$Bit$init$builtin_bit(false);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit(param1, $tmp127, $tmp134, $tmp135);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
// unreffing REF($50:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
// unreffing REF($48:panda.core.String)
panda$core$RegularExpression* $tmp136 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp136));
// unreffing regex
*(&local1) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp119);
// unreffing REF($14:panda.collections.Iterator.T)
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
// unreffing REF($4:panda.collections.Iterator<panda.collections.Iterable.T>)
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$stripLinkDefinitions$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
// line 169
panda$core$RegularExpression* $tmp137 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s139, &$s140);
panda$core$String* $tmp141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp138, &$s142);
panda$core$String* $tmp143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp141, &$s144);
panda$core$String* $tmp145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp143, &$s146);
panda$core$Int64 $tmp147 = (panda$core$Int64) {1};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp137, $tmp145, $tmp147);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp137));
panda$core$RegularExpression* $tmp148 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp148));
*(&local0) = $tmp137;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp145));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp143));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp138));
// unreffing REF($2:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp137));
// unreffing REF($1:panda.core.RegularExpression)
// line 177
panda$core$RegularExpression* $tmp149 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure2* $tmp150 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure2*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure2$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure2$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp150, param0);
panda$core$MutableMethod* $tmp152 = (panda$core$MutableMethod*) frostObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp152, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure2$$anonymous1$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp150));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp149, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp152)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp152));
// unreffing REF($35:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
// unreffing REF($32:org.pandalanguage.pandac.pandadoc.Markdown._Closure2)
panda$core$RegularExpression* $tmp153 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp153));
// unreffing p
*(&local0) = ((panda$core$RegularExpression*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$runBlockGamut$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 199
$fn155 $tmp154 = ($fn155) param0->$class->vtable[21];
$tmp154(param0, param1);
// line 200
$fn157 $tmp156 = ($fn157) param0->$class->vtable[7];
$tmp156(param0, param1);
// line 201
$fn159 $tmp158 = ($fn159) param0->$class->vtable[19];
$tmp158(param0, param1);
// line 202
$fn161 $tmp160 = ($fn161) param0->$class->vtable[15];
$tmp160(param0, param1);
// line 203
$fn163 $tmp162 = ($fn163) param0->$class->vtable[13];
$tmp162(param0, param1);
// line 204
$fn165 $tmp164 = ($fn165) param0->$class->vtable[8];
$tmp164(param0, param1);
// line 205
$fn167 $tmp166 = ($fn167) param0->$class->vtable[9];
$tmp166(param0, param1);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doHorizontalRules$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$collections$Array* local0 = NULL;
panda$core$String* local1 = NULL;
// line 209
panda$collections$Array* $tmp168 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp168);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp168));
panda$collections$Array* $tmp169 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp169));
*(&local0) = $tmp168;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp168));
// unreffing REF($1:panda.collections.Array<panda.core.String>)
// line 210
panda$collections$Array* $tmp170 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp170, ((panda$core$Object*) &$s171));
// line 211
panda$collections$Array* $tmp172 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp172, ((panda$core$Object*) &$s173));
// line 212
panda$collections$Array* $tmp174 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp174, ((panda$core$Object*) &$s175));
// line 213
panda$collections$Array* $tmp176 = *(&local0);
ITable* $tmp177 = ((panda$collections$Iterable*) $tmp176)->$class->itable;
while ($tmp177->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp177 = $tmp177->next;
}
$fn179 $tmp178 = $tmp177->methods[0];
panda$collections$Iterator* $tmp180 = $tmp178(((panda$collections$Iterable*) $tmp176));
goto block1;
block1:;
ITable* $tmp181 = $tmp180->$class->itable;
while ($tmp181->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp181 = $tmp181->next;
}
$fn183 $tmp182 = $tmp181->methods[0];
panda$core$Bit $tmp184 = $tmp182($tmp180);
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block3; else goto block2;
block2:;
*(&local1) = ((panda$core$String*) NULL);
ITable* $tmp186 = $tmp180->$class->itable;
while ($tmp186->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp186 = $tmp186->next;
}
$fn188 $tmp187 = $tmp186->methods[1];
panda$core$Object* $tmp189 = $tmp187($tmp180);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp189)));
panda$core$String* $tmp190 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp190));
*(&local1) = ((panda$core$String*) $tmp189);
// line 214
panda$core$RegularExpression* $tmp191 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp192 = *(&local1);
panda$core$String* $tmp193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s194, $tmp192);
panda$core$String* $tmp195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp193, &$s196);
panda$core$RegularExpression$init$panda$core$String($tmp191, $tmp195);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp191, &$s197);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp195));
// unreffing REF($57:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp193));
// unreffing REF($56:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp191));
// unreffing REF($54:panda.core.RegularExpression)
panda$core$Panda$unref$panda$core$Object$Q($tmp189);
// unreffing REF($45:panda.collections.Iterator.T)
panda$core$String* $tmp198 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
// unreffing hrDelimiter
*(&local1) = ((panda$core$String*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp180));
// unreffing REF($34:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$collections$Array* $tmp199 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
// unreffing hrDelimiters
*(&local0) = ((panda$collections$Array*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$hashHTMLBlocks$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$collections$Array* local0 = NULL;
panda$collections$Array* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
panda$core$Int64 local4;
panda$core$RegularExpression* local5 = NULL;
panda$core$Method* local6 = NULL;
panda$core$RegularExpression* local7 = NULL;
panda$core$RegularExpression* local8 = NULL;
panda$core$RegularExpression* local9 = NULL;
// line 227
panda$collections$Array* $tmp200 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp200);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp200));
panda$collections$Array* $tmp201 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp201));
*(&local0) = $tmp200;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp200));
// unreffing REF($1:panda.collections.Array<panda.core.String>)
// line 228
panda$collections$Array* $tmp202 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp202, ((panda$core$Object*) &$s203));
// line 229
panda$collections$Array* $tmp204 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp204, ((panda$core$Object*) &$s205));
// line 230
panda$collections$Array* $tmp206 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp206, ((panda$core$Object*) &$s207));
// line 231
panda$collections$Array* $tmp208 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp208, ((panda$core$Object*) &$s209));
// line 232
panda$collections$Array* $tmp210 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp210, ((panda$core$Object*) &$s211));
// line 233
panda$collections$Array* $tmp212 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp212, ((panda$core$Object*) &$s213));
// line 234
panda$collections$Array* $tmp214 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp214, ((panda$core$Object*) &$s215));
// line 235
panda$collections$Array* $tmp216 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp216, ((panda$core$Object*) &$s217));
// line 236
panda$collections$Array* $tmp218 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp218, ((panda$core$Object*) &$s219));
// line 237
panda$collections$Array* $tmp220 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp220, ((panda$core$Object*) &$s221));
// line 238
panda$collections$Array* $tmp222 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp222, ((panda$core$Object*) &$s223));
// line 239
panda$collections$Array* $tmp224 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp224, ((panda$core$Object*) &$s225));
// line 240
panda$collections$Array* $tmp226 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp226, ((panda$core$Object*) &$s227));
// line 241
panda$collections$Array* $tmp228 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp228, ((panda$core$Object*) &$s229));
// line 242
panda$collections$Array* $tmp230 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp230, ((panda$core$Object*) &$s231));
// line 243
panda$collections$Array* $tmp232 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp232, ((panda$core$Object*) &$s233));
// line 244
panda$collections$Array* $tmp234 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp234, ((panda$core$Object*) &$s235));
// line 245
panda$collections$Array* $tmp236 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp236, ((panda$core$Object*) &$s237));
// line 246
panda$collections$Array* $tmp238 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp238, ((panda$core$Object*) &$s239));
// line 247
panda$collections$Array* $tmp240 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp240, ((panda$core$Object*) &$s241));
// line 248
panda$collections$Array* $tmp242 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp242);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
panda$collections$Array* $tmp243 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp243));
*(&local1) = $tmp242;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
// unreffing REF($115:panda.collections.Array<panda.core.String>)
// line 249
panda$collections$Array* $tmp244 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp244, ((panda$core$Object*) &$s245));
// line 250
panda$collections$Array* $tmp246 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp246, ((panda$core$Object*) &$s247));
// line 252
panda$collections$Array* $tmp248 = *(&local0);
ITable* $tmp249 = ((panda$collections$CollectionView*) $tmp248)->$class->itable;
while ($tmp249->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp249 = $tmp249->next;
}
$fn251 $tmp250 = $tmp249->methods[2];
panda$core$String* $tmp252 = $tmp250(((panda$collections$CollectionView*) $tmp248), &$s253);
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp252));
panda$core$String* $tmp254 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp254));
*(&local2) = $tmp252;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp252));
// unreffing REF($142:panda.core.String)
// line 253
panda$core$String* $tmp255 = *(&local2);
panda$core$String* $tmp256 = panda$core$String$convert$R$panda$core$String($tmp255);
panda$core$String* $tmp257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp256, &$s258);
panda$collections$Array* $tmp259 = *(&local1);
ITable* $tmp260 = ((panda$collections$CollectionView*) $tmp259)->$class->itable;
while ($tmp260->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp260 = $tmp260->next;
}
$fn262 $tmp261 = $tmp260->methods[2];
panda$core$String* $tmp263 = $tmp261(((panda$collections$CollectionView*) $tmp259), &$s264);
panda$core$String* $tmp265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp257, $tmp263);
panda$core$String* $tmp266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp265, &$s267);
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp266));
panda$core$String* $tmp268 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp268));
*(&local3) = $tmp266;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp266));
// unreffing REF($162:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp265));
// unreffing REF($161:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp263));
// unreffing REF($160:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp257));
// unreffing REF($156:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp256));
// unreffing REF($155:panda.core.String)
// line 255
panda$core$Int64 $tmp269 = (panda$core$Int64) {4};
panda$core$Int64 $tmp270 = (panda$core$Int64) {1};
int64_t $tmp271 = $tmp269.value;
int64_t $tmp272 = $tmp270.value;
int64_t $tmp273 = $tmp271 - $tmp272;
panda$core$Int64 $tmp274 = (panda$core$Int64) {$tmp273};
*(&local4) = $tmp274;
// line 268
panda$core$RegularExpression* $tmp275 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp276 = *(&local2);
panda$core$String* $tmp277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s278, $tmp276);
panda$core$String* $tmp279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp277, &$s280);
panda$core$String* $tmp281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp279, &$s282);
panda$core$String* $tmp283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp281, &$s284);
panda$core$String* $tmp285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp283, &$s286);
panda$core$String* $tmp287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp285, &$s288);
panda$core$String* $tmp289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp287, &$s290);
panda$core$Int64 $tmp291 = (panda$core$Int64) {1};
panda$core$Int64 $tmp292 = (panda$core$Int64) {2};
panda$core$Int64 $tmp293 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp291, $tmp292);
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp275, $tmp289, $tmp293);
*(&local5) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp275));
panda$core$RegularExpression* $tmp294 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp294));
*(&local5) = $tmp275;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp289));
// unreffing REF($202:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp287));
// unreffing REF($201:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp285));
// unreffing REF($200:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp283));
// unreffing REF($199:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp281));
// unreffing REF($198:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp279));
// unreffing REF($197:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp277));
// unreffing REF($196:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp275));
// unreffing REF($194:panda.core.RegularExpression)
// line 277
org$pandalanguage$pandac$pandadoc$Markdown$_Closure4* $tmp295 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure4*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure4$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure4$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp295, param0);
panda$core$MutableMethod* $tmp297 = (panda$core$MutableMethod*) frostObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp297, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure4$$anonymous3$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp295));
// line 277
*(&local6) = ((panda$core$Method*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Method*) $tmp297)));
panda$core$Method* $tmp298 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp298));
*(&local6) = ((panda$core$Method*) $tmp297);
// line 281
panda$core$RegularExpression* $tmp299 = *(&local5);
panda$core$Method* $tmp300 = *(&local6);
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp299, ((panda$core$MutableMethod*) $tmp300));
// line 284
panda$core$RegularExpression* $tmp301 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s303, &$s304);
panda$core$String* $tmp305 = *(&local3);
panda$core$String* $tmp306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp302, $tmp305);
panda$core$String* $tmp307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp306, &$s308);
panda$core$String* $tmp309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp307, &$s310);
panda$core$String* $tmp311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp309, &$s312);
panda$core$String* $tmp313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp311, &$s314);
panda$core$String* $tmp315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp313, &$s316);
panda$core$String* $tmp317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp315, &$s318);
panda$core$Int64 $tmp319 = (panda$core$Int64) {1};
panda$core$Int64 $tmp320 = (panda$core$Int64) {2};
panda$core$Int64 $tmp321 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp319, $tmp320);
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp301, $tmp317, $tmp321);
*(&local7) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp301));
panda$core$RegularExpression* $tmp322 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
*(&local7) = $tmp301;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp317));
// unreffing REF($269:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp315));
// unreffing REF($268:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp313));
// unreffing REF($267:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp311));
// unreffing REF($266:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp309));
// unreffing REF($265:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp307));
// unreffing REF($264:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp306));
// unreffing REF($263:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp302));
// unreffing REF($261:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp301));
// unreffing REF($260:panda.core.RegularExpression)
// line 293
panda$core$RegularExpression* $tmp323 = *(&local7);
panda$core$Method* $tmp324 = *(&local6);
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp323, ((panda$core$MutableMethod*) $tmp324));
// line 296
panda$core$RegularExpression* $tmp325 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s327, &$s328);
panda$core$String* $tmp329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp326, &$s330);
panda$core$String* $tmp331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp329, &$s332);
panda$core$String* $tmp333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp331, &$s334);
panda$core$String* $tmp335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp333, &$s336);
panda$core$Int64 $tmp337 = *(&local4);
panda$core$Int64$wrapper* $tmp338;
$tmp338 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp338->value = $tmp337;
panda$core$String* $tmp339 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp335, ((panda$core$Object*) $tmp338));
panda$core$String* $tmp340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp339, &$s341);
panda$core$String* $tmp342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp340, &$s343);
panda$core$String* $tmp344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp342, &$s345);
panda$core$String* $tmp346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp344, &$s347);
panda$core$String* $tmp348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp346, &$s349);
panda$core$String* $tmp350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp348, &$s351);
panda$core$String* $tmp352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp350, &$s353);
panda$core$Int64 $tmp354 = (panda$core$Int64) {2};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp325, $tmp352, $tmp354);
*(&local8) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp325));
panda$core$RegularExpression* $tmp355 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp355));
*(&local8) = $tmp325;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp352));
// unreffing REF($329:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp350));
// unreffing REF($328:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp348));
// unreffing REF($327:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp346));
// unreffing REF($326:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp344));
// unreffing REF($325:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp342));
// unreffing REF($324:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp340));
// unreffing REF($323:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp339));
// unreffing REF($322:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp338));
// unreffing REF($321:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp335));
// unreffing REF($319:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp333));
// unreffing REF($318:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp331));
// unreffing REF($317:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp329));
// unreffing REF($316:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp326));
// unreffing REF($315:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp325));
// unreffing REF($314:panda.core.RegularExpression)
// line 310
panda$core$RegularExpression* $tmp356 = *(&local8);
panda$core$Method* $tmp357 = *(&local6);
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp356, ((panda$core$MutableMethod*) $tmp357));
// line 313
panda$core$RegularExpression* $tmp358 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s360, &$s361);
panda$core$String* $tmp362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp359, &$s363);
panda$core$String* $tmp364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp362, &$s365);
panda$core$String* $tmp366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp364, &$s367);
panda$core$String* $tmp368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp366, &$s369);
panda$core$Int64 $tmp370 = *(&local4);
panda$core$Int64$wrapper* $tmp371;
$tmp371 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp371->value = $tmp370;
panda$core$String* $tmp372 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp368, ((panda$core$Object*) $tmp371));
panda$core$String* $tmp373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp372, &$s374);
panda$core$String* $tmp375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp373, &$s376);
panda$core$String* $tmp377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp375, &$s378);
panda$core$String* $tmp379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp377, &$s380);
panda$core$String* $tmp381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp379, &$s382);
panda$core$String* $tmp383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp381, &$s384);
panda$core$String* $tmp385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp383, &$s386);
panda$core$String* $tmp387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp385, &$s388);
panda$core$String* $tmp389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp387, &$s390);
panda$core$RegularExpression$init$panda$core$String($tmp358, $tmp389);
*(&local9) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp358));
panda$core$RegularExpression* $tmp391 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp391));
*(&local9) = $tmp358;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp389));
// unreffing REF($407:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp387));
// unreffing REF($406:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp385));
// unreffing REF($405:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp383));
// unreffing REF($404:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp381));
// unreffing REF($403:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp379));
// unreffing REF($402:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp377));
// unreffing REF($401:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp375));
// unreffing REF($400:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp373));
// unreffing REF($399:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp372));
// unreffing REF($398:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp371));
// unreffing REF($397:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp368));
// unreffing REF($395:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp366));
// unreffing REF($394:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp364));
// unreffing REF($393:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp362));
// unreffing REF($392:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp359));
// unreffing REF($391:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp358));
// unreffing REF($390:panda.core.RegularExpression)
// line 328
panda$core$RegularExpression* $tmp392 = *(&local9);
panda$core$Method* $tmp393 = *(&local6);
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp392, ((panda$core$MutableMethod*) $tmp393));
panda$core$RegularExpression* $tmp394 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp394));
// unreffing p4
*(&local9) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp395 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp395));
// unreffing p3
*(&local8) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp396 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp396));
// unreffing p2
*(&local7) = ((panda$core$RegularExpression*) NULL);
panda$core$Method* $tmp397 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp397));
// unreffing protectHTML
*(&local6) = ((panda$core$Method*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp297));
// unreffing REF($242:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp295));
// unreffing REF($239:org.pandalanguage.pandac.pandadoc.Markdown._Closure4)
panda$core$RegularExpression* $tmp398 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp398));
// unreffing p1
*(&local5) = ((panda$core$RegularExpression*) NULL);
panda$core$String* $tmp399 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp399));
// unreffing alternationB
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp400 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp400));
// unreffing alternationA
*(&local2) = ((panda$core$String*) NULL);
panda$collections$Array* $tmp401 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp401));
// unreffing tagsB
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp402 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp402));
// unreffing tagsA
*(&local0) = ((panda$collections$Array*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$formParagraphs$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$collections$Array* local0 = NULL;
panda$core$Int64 local1;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
panda$core$MutableString* local4 = NULL;
// line 332
panda$core$RegularExpression* $tmp403 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp403, &$s404);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp403, &$s405);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp403));
// unreffing REF($1:panda.core.RegularExpression)
// line 333
panda$core$RegularExpression* $tmp406 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp406, &$s407);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp406, &$s408);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp406));
// unreffing REF($8:panda.core.RegularExpression)
// line 335
*(&local0) = ((panda$collections$Array*) NULL);
// line 336
panda$core$Int64 $tmp409 = panda$core$MutableString$get_byteLength$R$panda$core$Int64(param1);
panda$core$Int64 $tmp410 = (panda$core$Int64) {0};
panda$core$Bit $tmp411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp409, $tmp410);
bool $tmp412 = $tmp411.value;
if ($tmp412) goto block1; else goto block3;
block1:;
// line 337
panda$collections$Array* $tmp413 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp413);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp413));
panda$collections$Array* $tmp414 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp414));
*(&local0) = $tmp413;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp413));
// unreffing REF($23:panda.collections.Array<panda.core.String>)
goto block2;
block3:;
// line 1
// line 339
panda$collections$Array* $tmp415 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$String* $tmp416 = panda$core$MutableString$convert$R$panda$core$String(param1);
panda$core$RegularExpression* $tmp417 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp417, &$s418);
panda$collections$Array* $tmp419 = panda$core$String$split$panda$core$RegularExpression$R$panda$collections$Array$LTpanda$core$String$GT($tmp416, $tmp417);
panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp415, ((panda$collections$CollectionView*) $tmp419));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp415));
panda$collections$Array* $tmp420 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp420));
*(&local0) = $tmp415;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp419));
// unreffing REF($43:panda.collections.Array<panda.core.String>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp417));
// unreffing REF($41:panda.core.RegularExpression)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp416));
// unreffing REF($40:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp415));
// unreffing REF($38:panda.collections.Array<panda.core.String>)
goto block2;
block2:;
// line 341
panda$core$Int64 $tmp421 = (panda$core$Int64) {0};
panda$collections$Array* $tmp422 = *(&local0);
ITable* $tmp423 = ((panda$collections$CollectionView*) $tmp422)->$class->itable;
while ($tmp423->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp423 = $tmp423->next;
}
$fn425 $tmp424 = $tmp423->methods[0];
panda$core$Int64 $tmp426 = $tmp424(((panda$collections$CollectionView*) $tmp422));
panda$core$Bit $tmp427 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp428 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp421, $tmp426, $tmp427);
panda$core$Int64 $tmp429 = $tmp428.min;
*(&local1) = $tmp429;
panda$core$Int64 $tmp430 = $tmp428.max;
panda$core$Bit $tmp431 = $tmp428.inclusive;
bool $tmp432 = $tmp431.value;
panda$core$Int64 $tmp433 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp434 = panda$core$Int64$convert$R$panda$core$UInt64($tmp433);
if ($tmp432) goto block7; else goto block8;
block7:;
int64_t $tmp435 = $tmp429.value;
int64_t $tmp436 = $tmp430.value;
bool $tmp437 = $tmp435 <= $tmp436;
panda$core$Bit $tmp438 = (panda$core$Bit) {$tmp437};
bool $tmp439 = $tmp438.value;
if ($tmp439) goto block4; else goto block5;
block8:;
int64_t $tmp440 = $tmp429.value;
int64_t $tmp441 = $tmp430.value;
bool $tmp442 = $tmp440 < $tmp441;
panda$core$Bit $tmp443 = (panda$core$Bit) {$tmp442};
bool $tmp444 = $tmp443.value;
if ($tmp444) goto block4; else goto block5;
block4:;
// line 342
panda$collections$Array* $tmp445 = *(&local0);
panda$core$Int64 $tmp446 = *(&local1);
panda$core$Object* $tmp447 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp445, $tmp446);
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp447)));
panda$core$String* $tmp448 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp448));
*(&local2) = ((panda$core$String*) $tmp447);
panda$core$Panda$unref$panda$core$Object$Q($tmp447);
// unreffing REF($98:panda.collections.Array.T)
// line 343
org$pandalanguage$pandac$pandadoc$Protector** $tmp449 = &param0->htmlProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp450 = *$tmp449;
panda$core$String* $tmp451 = *(&local2);
$fn453 $tmp452 = ($fn453) $tmp450->$class->vtable[3];
panda$core$String* $tmp454 = $tmp452($tmp450, $tmp451);
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp454));
panda$core$String* $tmp455 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp455));
*(&local3) = $tmp454;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp454));
// unreffing REF($115:panda.core.String?)
// line 344
panda$core$String* $tmp456 = *(&local3);
panda$core$Bit $tmp457 = panda$core$Bit$init$builtin_bit($tmp456 != NULL);
bool $tmp458 = $tmp457.value;
if ($tmp458) goto block9; else goto block11;
block9:;
// line 345
panda$collections$Array* $tmp459 = *(&local0);
panda$core$Int64 $tmp460 = *(&local1);
panda$core$String* $tmp461 = *(&local3);
panda$core$Bit $tmp462 = panda$core$Bit$init$builtin_bit($tmp461 != NULL);
bool $tmp463 = $tmp462.value;
if ($tmp463) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp464 = (panda$core$Int64) {345};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s465, $tmp464, &$s466);
abort(); // unreachable
block12:;
panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T($tmp459, $tmp460, ((panda$core$Object*) $tmp461));
goto block10;
block11:;
// line 1
// line 348
panda$core$MutableString* $tmp467 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$String* $tmp468 = *(&local2);
panda$core$MutableString$init$panda$core$String($tmp467, $tmp468);
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp467));
panda$core$MutableString* $tmp469 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp469));
*(&local4) = $tmp467;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp467));
// unreffing REF($150:panda.core.MutableString)
// line 349
panda$core$MutableString* $tmp470 = *(&local4);
$fn472 $tmp471 = ($fn472) param0->$class->vtable[22];
$tmp471(param0, $tmp470);
// line 350
panda$collections$Array* $tmp473 = *(&local0);
panda$core$Int64 $tmp474 = *(&local1);
panda$core$MutableString* $tmp475 = *(&local4);
panda$core$String* $tmp476 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s477, ((panda$core$Object*) $tmp475));
panda$core$String* $tmp478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp476, &$s479);
panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T($tmp473, $tmp474, ((panda$core$Object*) $tmp478));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp478));
// unreffing REF($174:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp476));
// unreffing REF($173:panda.core.String)
panda$core$MutableString* $tmp480 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp480));
// unreffing mutable
*(&local4) = ((panda$core$MutableString*) NULL);
goto block10;
block10:;
panda$core$String* $tmp481 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp481));
// unreffing decoded
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp482 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp482));
// unreffing paragraph
*(&local2) = ((panda$core$String*) NULL);
goto block6;
block6:;
panda$core$Int64 $tmp483 = *(&local1);
int64_t $tmp484 = $tmp430.value;
int64_t $tmp485 = $tmp483.value;
int64_t $tmp486 = $tmp484 - $tmp485;
panda$core$Int64 $tmp487 = (panda$core$Int64) {$tmp486};
panda$core$UInt64 $tmp488 = panda$core$Int64$convert$R$panda$core$UInt64($tmp487);
if ($tmp432) goto block15; else goto block16;
block15:;
uint64_t $tmp489 = $tmp488.value;
uint64_t $tmp490 = $tmp434.value;
bool $tmp491 = $tmp489 >= $tmp490;
panda$core$Bit $tmp492 = (panda$core$Bit) {$tmp491};
bool $tmp493 = $tmp492.value;
if ($tmp493) goto block14; else goto block5;
block16:;
uint64_t $tmp494 = $tmp488.value;
uint64_t $tmp495 = $tmp434.value;
bool $tmp496 = $tmp494 > $tmp495;
panda$core$Bit $tmp497 = (panda$core$Bit) {$tmp496};
bool $tmp498 = $tmp497.value;
if ($tmp498) goto block14; else goto block5;
block14:;
int64_t $tmp499 = $tmp483.value;
int64_t $tmp500 = $tmp433.value;
int64_t $tmp501 = $tmp499 + $tmp500;
panda$core$Int64 $tmp502 = (panda$core$Int64) {$tmp501};
*(&local1) = $tmp502;
goto block4;
block5:;
// line 353
panda$core$Bit $tmp503 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$MutableString$Index$Q$GT $tmp504 = panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$init$panda$core$MutableString$Index$Q$panda$core$MutableString$Index$Q$panda$core$Bit(((panda$core$MutableString$Index$nullable) { .nonnull = false }), ((panda$core$MutableString$Index$nullable) { .nonnull = false }), $tmp503);
panda$collections$Array* $tmp505 = *(&local0);
ITable* $tmp506 = ((panda$collections$CollectionView*) $tmp505)->$class->itable;
while ($tmp506->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp506 = $tmp506->next;
}
$fn508 $tmp507 = $tmp506->methods[2];
panda$core$String* $tmp509 = $tmp507(((panda$collections$CollectionView*) $tmp505), &$s510);
panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String(param1, $tmp504, $tmp509);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp509));
// unreffing REF($231:panda.core.String)
panda$collections$Array* $tmp511 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp511));
// unreffing paragraphs
*(&local0) = ((panda$collections$Array*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doAutoLinks$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
// line 357
panda$core$RegularExpression* $tmp512 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp512, &$s513);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp512, &$s514);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp512));
// unreffing REF($1:panda.core.RegularExpression)
// line 358
panda$core$RegularExpression* $tmp515 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp515, &$s516);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp515));
panda$core$RegularExpression* $tmp517 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp517));
*(&local0) = $tmp515;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp515));
// unreffing REF($8:panda.core.RegularExpression)
// line 359
panda$core$RegularExpression* $tmp518 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure6* $tmp519 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure6*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure6$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure6$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp519, param0);
panda$core$MutableMethod* $tmp521 = (panda$core$MutableMethod*) frostObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp521, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure6$$anonymous5$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp519));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp518, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp521)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp521));
// unreffing REF($25:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp519));
// unreffing REF($22:org.pandalanguage.pandac.pandadoc.Markdown._Closure6)
panda$core$RegularExpression* $tmp522 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp522));
// unreffing email
*(&local0) = ((panda$core$RegularExpression*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$unescapeSpecialChars$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
// line 370
org$pandalanguage$pandac$pandadoc$Protector** $tmp523 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp524 = *$tmp523;
panda$collections$HashMap** $tmp525 = &$tmp524->decodeMap;
panda$collections$HashMap* $tmp526 = *$tmp525;
ITable* $tmp527 = ((panda$collections$MapView*) $tmp526)->$class->itable;
while ($tmp527->$class != (panda$core$Class*) &panda$collections$MapView$class) {
    $tmp527 = $tmp527->next;
}
$fn529 $tmp528 = $tmp527->methods[3];
panda$collections$Iterator* $tmp530 = $tmp528(((panda$collections$MapView*) $tmp526));
goto block1;
block1:;
ITable* $tmp531 = $tmp530->$class->itable;
while ($tmp531->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp531 = $tmp531->next;
}
$fn533 $tmp532 = $tmp531->methods[0];
panda$core$Bit $tmp534 = $tmp532($tmp530);
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block3; else goto block2;
block2:;
*(&local0) = ((panda$core$String*) NULL);
ITable* $tmp536 = $tmp530->$class->itable;
while ($tmp536->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp536 = $tmp536->next;
}
$fn538 $tmp537 = $tmp536->methods[1];
panda$core$Object* $tmp539 = $tmp537($tmp530);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp539)));
panda$core$String* $tmp540 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp540));
*(&local0) = ((panda$core$String*) $tmp539);
// line 371
org$pandalanguage$pandac$pandadoc$Protector** $tmp541 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp542 = *$tmp541;
panda$core$String* $tmp543 = *(&local0);
$fn545 $tmp544 = ($fn545) $tmp542->$class->vtable[3];
panda$core$String* $tmp546 = $tmp544($tmp542, $tmp543);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp546));
panda$core$String* $tmp547 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp547));
*(&local1) = $tmp546;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp546));
// unreffing REF($31:panda.core.String?)
// line 372
panda$core$String* $tmp548 = *(&local0);
panda$core$String* $tmp549 = *(&local1);
panda$core$Bit $tmp550 = panda$core$Bit$init$builtin_bit($tmp549 != NULL);
bool $tmp551 = $tmp550.value;
if ($tmp551) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp552 = (panda$core$Int64) {372};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s553, $tmp552, &$s554);
abort(); // unreachable
block4:;
panda$core$MutableString$replace$panda$core$String$panda$core$String(param1, $tmp548, $tmp549);
panda$core$String* $tmp555 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp555));
// unreffing plaintext
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp539);
// unreffing REF($18:panda.collections.Iterator.T)
panda$core$String* $tmp556 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp556));
// unreffing hash
*(&local0) = ((panda$core$String*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp530));
// unreffing REF($7:panda.collections.Iterator<panda.collections.MapView.K>)
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$encodeEmail$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$String* param1) {

panda$core$MutableString* local0 = NULL;
panda$core$Char32 local1;
panda$core$Real64 local2;
// line 377
panda$core$MutableString* $tmp557 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp557);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp557));
panda$core$MutableString* $tmp558 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp558));
*(&local0) = $tmp557;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp557));
// unreffing REF($1:panda.core.MutableString)
// line 378
ITable* $tmp559 = ((panda$collections$Iterable*) param1)->$class->itable;
while ($tmp559->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp559 = $tmp559->next;
}
$fn561 $tmp560 = $tmp559->methods[0];
panda$collections$Iterator* $tmp562 = $tmp560(((panda$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp563 = $tmp562->$class->itable;
while ($tmp563->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp563 = $tmp563->next;
}
$fn565 $tmp564 = $tmp563->methods[0];
panda$core$Bit $tmp566 = $tmp564($tmp562);
bool $tmp567 = $tmp566.value;
if ($tmp567) goto block3; else goto block2;
block2:;
ITable* $tmp568 = $tmp562->$class->itable;
while ($tmp568->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp568 = $tmp568->next;
}
$fn570 $tmp569 = $tmp568->methods[1];
panda$core$Object* $tmp571 = $tmp569($tmp562);
*(&local1) = ((panda$core$Char32$wrapper*) $tmp571)->value;
// line 380
panda$math$Random** $tmp572 = &param0->random;
panda$math$Random* $tmp573 = *$tmp572;
ITable* $tmp574 = $tmp573->$class->itable;
while ($tmp574->$class != (panda$core$Class*) &panda$math$Random$class) {
    $tmp574 = $tmp574->next;
}
$fn576 $tmp575 = $tmp574->methods[5];
panda$core$Real64 $tmp577 = $tmp575($tmp573);
*(&local2) = $tmp577;
// line 381
panda$core$Real64 $tmp578 = *(&local2);
panda$core$Real64 $tmp579 = (panda$core$Real64) {0.45};
double $tmp580 = $tmp578.value;
double $tmp581 = $tmp579.value;
bool $tmp582 = $tmp580 < $tmp581;
panda$core$Bit $tmp583 = (panda$core$Bit) {$tmp582};
bool $tmp584 = $tmp583.value;
if ($tmp584) goto block4; else goto block6;
block4:;
// line 382
panda$core$MutableString* $tmp585 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp585, &$s586);
// line 383
panda$core$MutableString* $tmp587 = *(&local0);
panda$core$Char32 $tmp588 = *(&local1);
panda$core$Int32 $tmp589 = panda$core$Char32$convert$R$panda$core$Int32($tmp588);
panda$core$Int32$wrapper* $tmp590;
$tmp590 = (panda$core$Int32$wrapper*) frostObjectAlloc(16, (panda$core$Class*) &panda$core$Int32$wrapperclass);
$tmp590->value = $tmp589;
panda$core$MutableString$append$panda$core$Object($tmp587, ((panda$core$Object*) $tmp590));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp590));
// unreffing REF($52:panda.core.Object)
// line 384
panda$core$MutableString* $tmp591 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp591, &$s592);
goto block5;
block6:;
// line 386
panda$core$Real64 $tmp593 = *(&local2);
panda$core$Real64 $tmp594 = (panda$core$Real64) {0.9};
double $tmp595 = $tmp593.value;
double $tmp596 = $tmp594.value;
bool $tmp597 = $tmp595 < $tmp596;
panda$core$Bit $tmp598 = (panda$core$Bit) {$tmp597};
bool $tmp599 = $tmp598.value;
if ($tmp599) goto block7; else goto block9;
block7:;
// line 387
panda$core$MutableString* $tmp600 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp600, &$s601);
// line 388
panda$core$MutableString* $tmp602 = *(&local0);
panda$core$Char32 $tmp603 = *(&local1);
panda$core$Int32 $tmp604 = panda$core$Char32$convert$R$panda$core$Int32($tmp603);
panda$core$String* $tmp605 = panda$core$Int32$format$panda$core$String$R$panda$core$String($tmp604, &$s606);
panda$core$MutableString$append$panda$core$String($tmp602, $tmp605);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp605));
// unreffing REF($77:panda.core.String)
// line 389
panda$core$MutableString* $tmp607 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp607, &$s608);
goto block8;
block9:;
// line 1
// line 392
panda$core$MutableString* $tmp609 = *(&local0);
panda$core$Char32 $tmp610 = *(&local1);
panda$core$MutableString$append$panda$core$Char32($tmp609, $tmp610);
goto block8;
block8:;
goto block5;
block5:;
panda$core$Panda$unref$panda$core$Object$Q($tmp571);
// unreffing REF($27:panda.collections.Iterator.T)
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp562));
// unreffing REF($17:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 395
panda$core$MutableString* $tmp611 = *(&local0);
panda$core$String* $tmp612 = panda$core$MutableString$convert$R$panda$core$String($tmp611);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp612));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp612));
// unreffing REF($102:panda.core.String)
panda$core$MutableString* $tmp613 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp613));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp612;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doBlockQuotes$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
// line 399
panda$core$RegularExpression* $tmp614 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s616, &$s617);
panda$core$String* $tmp618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp615, &$s619);
panda$core$String* $tmp620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp618, &$s621);
panda$core$String* $tmp622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp620, &$s623);
panda$core$String* $tmp624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp622, &$s625);
panda$core$String* $tmp626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp624, &$s627);
panda$core$Int64 $tmp628 = (panda$core$Int64) {1};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp614, $tmp626, $tmp628);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp614));
panda$core$RegularExpression* $tmp629 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp629));
*(&local0) = $tmp614;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp626));
// unreffing REF($7:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp624));
// unreffing REF($6:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp622));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp620));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp618));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp615));
// unreffing REF($2:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp614));
// unreffing REF($1:panda.core.RegularExpression)
// line 408
panda$core$RegularExpression* $tmp630 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure9* $tmp631 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure9*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure9$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure9$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp631, param0);
panda$core$MutableMethod* $tmp633 = (panda$core$MutableMethod*) frostObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp633, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure9$$anonymous7$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp631));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp630, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp633)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp633));
// unreffing REF($43:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp631));
// unreffing REF($40:org.pandalanguage.pandac.pandadoc.Markdown._Closure9)
panda$core$RegularExpression* $tmp634 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp634));
// unreffing p
*(&local0) = ((panda$core$RegularExpression*) NULL);
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous10$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(panda$collections$ListView* param0) {

panda$core$String* local0 = NULL;
panda$core$Int64 local1;
panda$core$MutableString* local2 = NULL;
// line 423
panda$core$Int64 $tmp635 = (panda$core$Int64) {1};
ITable* $tmp636 = param0->$class->itable;
while ($tmp636->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp636 = $tmp636->next;
}
$fn638 $tmp637 = $tmp636->methods[0];
panda$core$Object* $tmp639 = $tmp637(param0, $tmp635);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp639)));
panda$core$String* $tmp640 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp640));
*(&local0) = ((panda$core$String*) $tmp639);
panda$core$Panda$unref$panda$core$Object$Q($tmp639);
// unreffing REF($4:panda.collections.ListView.T)
// line 424
panda$core$String* $tmp641 = *(&local0);
panda$core$Bit $tmp642 = panda$core$Bit$init$builtin_bit($tmp641 != NULL);
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp644 = (panda$core$Int64) {424};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s645, $tmp644, &$s646);
abort(); // unreachable
block1:;
panda$core$Int64 $tmp647 = panda$core$String$get_length$R$panda$core$Int64($tmp641);
*(&local1) = $tmp647;
// line 425
panda$core$MutableString* $tmp648 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$String* $tmp649 = *(&local0);
panda$core$Bit $tmp650 = panda$core$Bit$init$builtin_bit($tmp649 != NULL);
bool $tmp651 = $tmp650.value;
if ($tmp651) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp652 = (panda$core$Int64) {425};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s653, $tmp652, &$s654);
abort(); // unreachable
block3:;
panda$core$MutableString$init$panda$core$String($tmp648, $tmp649);
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp648));
panda$core$MutableString* $tmp655 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp655));
*(&local2) = $tmp648;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp648));
// unreffing REF($29:panda.core.MutableString)
// line 426
goto block5;
block5:;
// line 427
panda$core$MutableString* $tmp656 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp656, &$s657);
// line 428
panda$core$Int64 $tmp658 = *(&local1);
panda$core$Int64 $tmp659 = (panda$core$Int64) {1};
int64_t $tmp660 = $tmp658.value;
int64_t $tmp661 = $tmp659.value;
int64_t $tmp662 = $tmp660 + $tmp661;
panda$core$Int64 $tmp663 = (panda$core$Int64) {$tmp662};
*(&local1) = $tmp663;
goto block6;
block6:;
panda$core$Int64 $tmp664 = *(&local1);
panda$core$Int64 $tmp665 = (panda$core$Int64) {4};
panda$core$Int64 $tmp666 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp664, $tmp665);
panda$core$Int64 $tmp667 = (panda$core$Int64) {0};
int64_t $tmp668 = $tmp666.value;
int64_t $tmp669 = $tmp667.value;
bool $tmp670 = $tmp668 != $tmp669;
panda$core$Bit $tmp671 = (panda$core$Bit) {$tmp670};
bool $tmp672 = $tmp671.value;
if ($tmp672) goto block5; else goto block7;
block7:;
// line 431
panda$core$MutableString* $tmp673 = *(&local2);
panda$core$String* $tmp674 = panda$core$MutableString$convert$R$panda$core$String($tmp673);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp674));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp674));
// unreffing REF($76:panda.core.String)
panda$core$MutableString* $tmp675 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp675));
// unreffing replacement
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$String* $tmp676 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp676));
// unreffing lineSoFar
*(&local0) = ((panda$core$String*) NULL);
return $tmp674;

}
void org$pandalanguage$pandac$pandadoc$Markdown$detabify$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 422
panda$core$RegularExpression* $tmp677 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp677, &$s678);
panda$core$Method* $tmp680 = (panda$core$Method*) frostObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp680, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$$anonymous10$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Immutable*) NULL));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp677, ((panda$core$MutableMethod*) $tmp680));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp680));
// unreffing REF($4:panda.core.Method)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp677));
// unreffing REF($1:panda.core.RegularExpression)
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$outdent$panda$core$MutableString(panda$core$MutableString* param0) {

// line 437
panda$core$RegularExpression* $tmp681 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp681, &$s682);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param0, $tmp681, &$s683);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp681));
// unreffing REF($1:panda.core.RegularExpression)
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doCodeBlocks$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
// line 493
panda$core$RegularExpression* $tmp684 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s686, &$s687);
panda$core$String* $tmp688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp685, &$s689);
panda$core$String* $tmp690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp688, &$s691);
panda$core$String* $tmp692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp690, &$s693);
panda$core$String* $tmp694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp692, &$s695);
panda$core$Int64 $tmp696 = (panda$core$Int64) {1};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp684, $tmp694, $tmp696);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp684));
panda$core$RegularExpression* $tmp697 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp697));
*(&local0) = $tmp684;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp694));
// unreffing REF($6:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp692));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp690));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp688));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp685));
// unreffing REF($2:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp684));
// unreffing REF($1:panda.core.RegularExpression)
// line 501
panda$core$RegularExpression* $tmp698 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* $tmp699 = (org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$class);
org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp699, param0);
panda$core$MutableMethod* $tmp701 = (panda$core$MutableMethod*) frostObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp701, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$replacement$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp699));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp698, $tmp701);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp701));
// unreffing REF($39:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp699));
// unreffing REF($36:org.pandalanguage.pandac.pandadoc.Markdown.CodeReplacer)
panda$core$RegularExpression* $tmp702 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp702));
// unreffing p
*(&local0) = ((panda$core$RegularExpression*) NULL);
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$prettyPrint$org$pandalanguage$pandac$parser$Parser$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* param0, org$pandalanguage$pandac$parser$Parser* param1) {

panda$core$MutableString* local0 = NULL;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind local1;
org$pandalanguage$pandac$Pair* local2 = NULL;
panda$core$Bit local3;
panda$core$MutableString* local4 = NULL;
panda$core$Bit local5;
panda$core$Bit local6;
// line 505
panda$core$MutableString* $tmp703 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp703, &$s704);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp703));
panda$core$MutableString* $tmp705 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp705));
*(&local0) = $tmp703;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp703));
// unreffing REF($1:panda.core.MutableString)
// line 506
panda$core$Int64 $tmp706 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp707 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp706);
*(&local1) = $tmp707;
// line 507
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp708 = &param1->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp709 = *$tmp708;
panda$core$Bit $tmp710 = panda$core$Bit$init$builtin_bit($tmp709 != NULL);
bool $tmp711 = $tmp710.value;
if ($tmp711) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp712 = (panda$core$Int64) {507};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s713, $tmp712, &$s714);
abort(); // unreachable
block1:;
panda$collections$Array** $tmp715 = &$tmp709->tokens;
panda$collections$Array* $tmp716 = *$tmp715;
ITable* $tmp717 = ((panda$collections$Iterable*) $tmp716)->$class->itable;
while ($tmp717->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp717 = $tmp717->next;
}
$fn719 $tmp718 = $tmp717->methods[0];
panda$collections$Iterator* $tmp720 = $tmp718(((panda$collections$Iterable*) $tmp716));
goto block3;
block3:;
ITable* $tmp721 = $tmp720->$class->itable;
while ($tmp721->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp721 = $tmp721->next;
}
$fn723 $tmp722 = $tmp721->methods[0];
panda$core$Bit $tmp724 = $tmp722($tmp720);
bool $tmp725 = $tmp724.value;
if ($tmp725) goto block5; else goto block4;
block4:;
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
ITable* $tmp726 = $tmp720->$class->itable;
while ($tmp726->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp726 = $tmp726->next;
}
$fn728 $tmp727 = $tmp726->methods[1];
panda$core$Object* $tmp729 = $tmp727($tmp720);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Pair*) $tmp729)));
org$pandalanguage$pandac$Pair* $tmp730 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp730));
*(&local2) = ((org$pandalanguage$pandac$Pair*) $tmp729);
// line 508
org$pandalanguage$pandac$Pair* $tmp731 = *(&local2);
panda$core$Object** $tmp732 = &$tmp731->second;
panda$core$Object* $tmp733 = *$tmp732;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp734;
$tmp734 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp734->value = ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp733)->value;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp735 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp736;
$tmp736 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp736->value = $tmp735;
ITable* $tmp737 = ((panda$core$Equatable*) $tmp734)->$class->itable;
while ($tmp737->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp737 = $tmp737->next;
}
$fn739 $tmp738 = $tmp737->methods[1];
panda$core$Bit $tmp740 = $tmp738(((panda$core$Equatable*) $tmp734), ((panda$core$Equatable*) $tmp736));
bool $tmp741 = $tmp740.value;
if ($tmp741) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp742 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp743;
$tmp743 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp743->value = $tmp742;
panda$core$Int64 $tmp744 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp745 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp744);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp746;
$tmp746 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp746->value = $tmp745;
ITable* $tmp747 = ((panda$core$Equatable*) $tmp743)->$class->itable;
while ($tmp747->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp747 = $tmp747->next;
}
$fn749 $tmp748 = $tmp747->methods[1];
panda$core$Bit $tmp750 = $tmp748(((panda$core$Equatable*) $tmp743), ((panda$core$Equatable*) $tmp746));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp746)));
// unreffing REF($71:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp743)));
// unreffing REF($67:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
*(&local3) = $tmp750;
goto block10;
block9:;
*(&local3) = $tmp740;
goto block10;
block10:;
panda$core$Bit $tmp751 = *(&local3);
bool $tmp752 = $tmp751.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp736)));
// unreffing REF($61:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp734)));
// unreffing REF($58:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
if ($tmp752) goto block6; else goto block7;
block6:;
// line 509
panda$core$MutableString* $tmp753 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp753, &$s754);
goto block7;
block7:;
// line 511
org$pandalanguage$pandac$Pair* $tmp755 = *(&local2);
panda$core$Object** $tmp756 = &$tmp755->second;
panda$core$Object* $tmp757 = *$tmp756;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp758;
$tmp758 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp758->value = ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp757)->value;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp759 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp760;
$tmp760 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp760->value = $tmp759;
ITable* $tmp761 = ((panda$core$Equatable*) $tmp758)->$class->itable;
while ($tmp761->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp761 = $tmp761->next;
}
$fn763 $tmp762 = $tmp761->methods[1];
panda$core$Bit $tmp764 = $tmp762(((panda$core$Equatable*) $tmp758), ((panda$core$Equatable*) $tmp760));
bool $tmp765 = $tmp764.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp760)));
// unreffing REF($106:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp758)));
// unreffing REF($103:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
if ($tmp765) goto block11; else goto block12;
block11:;
// line 512
org$pandalanguage$pandac$Pair* $tmp766 = *(&local2);
panda$core$Object** $tmp767 = &$tmp766->second;
panda$core$Object* $tmp768 = *$tmp767;
*(&local1) = ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp768)->value;
// line 513
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp769 = *(&local1);
panda$core$Int64 $tmp770 = $tmp769.$rawValue;
panda$core$Int64 $tmp771 = (panda$core$Int64) {0};
panda$core$Bit $tmp772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp770, $tmp771);
bool $tmp773 = $tmp772.value;
if ($tmp773) goto block14; else goto block15;
block14:;
goto block13;
block15:;
panda$core$Int64 $tmp774 = (panda$core$Int64) {1};
panda$core$Bit $tmp775 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp770, $tmp774);
bool $tmp776 = $tmp775.value;
if ($tmp776) goto block16; else goto block17;
block17:;
panda$core$Int64 $tmp777 = (panda$core$Int64) {2};
panda$core$Bit $tmp778 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp770, $tmp777);
bool $tmp779 = $tmp778.value;
if ($tmp779) goto block16; else goto block18;
block16:;
// line 518
panda$core$MutableString* $tmp780 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp780, &$s781);
goto block13;
block18:;
panda$core$Int64 $tmp782 = (panda$core$Int64) {3};
panda$core$Bit $tmp783 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp770, $tmp782);
bool $tmp784 = $tmp783.value;
if ($tmp784) goto block19; else goto block20;
block19:;
// line 521
panda$core$MutableString* $tmp785 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp785, &$s786);
goto block13;
block20:;
panda$core$Int64 $tmp787 = (panda$core$Int64) {4};
panda$core$Bit $tmp788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp770, $tmp787);
bool $tmp789 = $tmp788.value;
if ($tmp789) goto block21; else goto block22;
block21:;
// line 524
panda$core$MutableString* $tmp790 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp790, &$s791);
goto block13;
block22:;
panda$core$Int64 $tmp792 = (panda$core$Int64) {5};
panda$core$Bit $tmp793 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp770, $tmp792);
bool $tmp794 = $tmp793.value;
if ($tmp794) goto block23; else goto block24;
block23:;
// line 527
panda$core$MutableString* $tmp795 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp795, &$s796);
goto block13;
block24:;
panda$core$Int64 $tmp797 = (panda$core$Int64) {6};
panda$core$Bit $tmp798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp770, $tmp797);
bool $tmp799 = $tmp798.value;
if ($tmp799) goto block25; else goto block26;
block25:;
// line 530
panda$core$MutableString* $tmp800 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp800, &$s801);
goto block13;
block26:;
panda$core$Int64 $tmp802 = (panda$core$Int64) {7};
panda$core$Bit $tmp803 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp770, $tmp802);
bool $tmp804 = $tmp803.value;
if ($tmp804) goto block27; else goto block28;
block27:;
// line 533
panda$core$MutableString* $tmp805 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp805, &$s806);
goto block13;
block28:;
panda$core$Int64 $tmp807 = (panda$core$Int64) {8};
panda$core$Bit $tmp808 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp770, $tmp807);
bool $tmp809 = $tmp808.value;
if ($tmp809) goto block29; else goto block30;
block29:;
// line 536
panda$core$MutableString* $tmp810 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp810, &$s811);
goto block13;
block30:;
panda$core$Int64 $tmp812 = (panda$core$Int64) {9};
panda$core$Bit $tmp813 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp770, $tmp812);
bool $tmp814 = $tmp813.value;
if ($tmp814) goto block31; else goto block32;
block31:;
// line 539
panda$core$MutableString* $tmp815 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp815, &$s816);
goto block13;
block32:;
panda$core$Int64 $tmp817 = (panda$core$Int64) {10};
panda$core$Bit $tmp818 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp770, $tmp817);
bool $tmp819 = $tmp818.value;
if ($tmp819) goto block33; else goto block34;
block33:;
// line 542
panda$core$MutableString* $tmp820 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp820, &$s821);
goto block13;
block34:;
panda$core$Int64 $tmp822 = (panda$core$Int64) {11};
panda$core$Bit $tmp823 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp770, $tmp822);
bool $tmp824 = $tmp823.value;
if ($tmp824) goto block35; else goto block36;
block35:;
// line 545
panda$core$MutableString* $tmp825 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp825, &$s826);
goto block13;
block36:;
panda$core$Int64 $tmp827 = (panda$core$Int64) {12};
panda$core$Bit $tmp828 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp770, $tmp827);
bool $tmp829 = $tmp828.value;
if ($tmp829) goto block37; else goto block38;
block37:;
// line 548
panda$core$MutableString* $tmp830 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp830, &$s831);
goto block13;
block38:;
// line 551
panda$core$Bit $tmp832 = panda$core$Bit$init$builtin_bit(false);
bool $tmp833 = $tmp832.value;
if ($tmp833) goto block39; else goto block40;
block40:;
panda$core$Int64 $tmp834 = (panda$core$Int64) {551};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s835, $tmp834);
abort(); // unreachable
block39:;
goto block13;
block13:;
goto block12;
block12:;
// line 555
panda$core$MutableString* $tmp836 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$Pair* $tmp837 = *(&local2);
panda$core$Object** $tmp838 = &$tmp837->first;
panda$core$Object* $tmp839 = *$tmp838;
panda$core$String* $tmp840 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param1, ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp839)->value);
panda$core$MutableString$init$panda$core$String($tmp836, $tmp840);
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp836));
panda$core$MutableString* $tmp841 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp841));
*(&local4) = $tmp836;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp840));
// unreffing REF($240:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp836));
// unreffing REF($234:panda.core.MutableString)
// line 556
panda$core$MutableString* $tmp842 = *(&local4);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp842, &$s843, &$s844);
// line 557
panda$core$MutableString* $tmp845 = *(&local4);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp845, &$s846, &$s847);
// line 558
panda$core$MutableString* $tmp848 = *(&local4);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp848, &$s849, &$s850);
// line 559
panda$core$MutableString* $tmp851 = *(&local4);
org$pandalanguage$pandac$pandadoc$Protector** $tmp852 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp853 = *$tmp852;
$fn855 $tmp854 = ($fn855) $tmp853->$class->vtable[2];
panda$core$String* $tmp856 = $tmp854($tmp853, &$s857);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp851, &$s858, $tmp856);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp856));
// unreffing REF($269:panda.core.String)
// line 560
panda$core$MutableString* $tmp859 = *(&local4);
org$pandalanguage$pandac$pandadoc$Protector** $tmp860 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp861 = *$tmp860;
$fn863 $tmp862 = ($fn863) $tmp861->$class->vtable[2];
panda$core$String* $tmp864 = $tmp862($tmp861, &$s865);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp859, &$s866, $tmp864);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp864));
// unreffing REF($279:panda.core.String)
// line 561
panda$core$MutableString* $tmp867 = *(&local4);
org$pandalanguage$pandac$pandadoc$Protector** $tmp868 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp869 = *$tmp868;
$fn871 $tmp870 = ($fn871) $tmp869->$class->vtable[2];
panda$core$String* $tmp872 = $tmp870($tmp869, &$s873);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp867, &$s874, $tmp872);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp872));
// unreffing REF($289:panda.core.String)
// line 562
panda$core$MutableString* $tmp875 = *(&local4);
org$pandalanguage$pandac$pandadoc$Protector** $tmp876 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp877 = *$tmp876;
$fn879 $tmp878 = ($fn879) $tmp877->$class->vtable[2];
panda$core$String* $tmp880 = $tmp878($tmp877, &$s881);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp875, &$s882, $tmp880);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp880));
// unreffing REF($299:panda.core.String)
// line 563
panda$core$MutableString* $tmp883 = *(&local4);
org$pandalanguage$pandac$pandadoc$Protector** $tmp884 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp885 = *$tmp884;
$fn887 $tmp886 = ($fn887) $tmp885->$class->vtable[2];
panda$core$String* $tmp888 = $tmp886($tmp885, &$s889);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp883, &$s890, $tmp888);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp888));
// unreffing REF($309:panda.core.String)
// line 564
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp891 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp892;
$tmp892 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp892->value = $tmp891;
panda$core$Int64 $tmp893 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp894 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp893);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp895;
$tmp895 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp895->value = $tmp894;
ITable* $tmp896 = ((panda$core$Equatable*) $tmp892)->$class->itable;
while ($tmp896->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp896 = $tmp896->next;
}
$fn898 $tmp897 = $tmp896->methods[1];
panda$core$Bit $tmp899 = $tmp897(((panda$core$Equatable*) $tmp892), ((panda$core$Equatable*) $tmp895));
bool $tmp900 = $tmp899.value;
if ($tmp900) goto block43; else goto block44;
block43:;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp901 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp902;
$tmp902 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp902->value = $tmp901;
panda$core$Int64 $tmp903 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp904 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp903);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp905;
$tmp905 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp905->value = $tmp904;
ITable* $tmp906 = ((panda$core$Equatable*) $tmp902)->$class->itable;
while ($tmp906->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp906 = $tmp906->next;
}
$fn908 $tmp907 = $tmp906->methods[1];
panda$core$Bit $tmp909 = $tmp907(((panda$core$Equatable*) $tmp902), ((panda$core$Equatable*) $tmp905));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp905)));
// unreffing REF($330:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp902)));
// unreffing REF($326:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
*(&local5) = $tmp909;
goto block45;
block44:;
*(&local5) = $tmp899;
goto block45;
block45:;
panda$core$Bit $tmp910 = *(&local5);
bool $tmp911 = $tmp910.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp895)));
// unreffing REF($320:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp892)));
// unreffing REF($316:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
if ($tmp911) goto block41; else goto block42;
block41:;
// line 566
panda$core$MutableString* $tmp912 = *(&local0);
org$pandalanguage$pandac$Pair* $tmp913 = *(&local2);
panda$core$Object** $tmp914 = &$tmp913->first;
panda$core$Object* $tmp915 = *$tmp914;
org$pandalanguage$pandac$parser$Token$Kind $tmp916 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp915)->value.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp917;
$tmp917 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp917->value = $tmp916;
panda$core$String* $tmp918 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s919, ((panda$core$Object*) $tmp917));
panda$core$String* $tmp920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp918, &$s921);
panda$core$MutableString$append$panda$core$String($tmp912, $tmp920);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp920));
// unreffing REF($362:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp918));
// unreffing REF($361:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp917));
// unreffing REF($360:panda.core.Object)
goto block42;
block42:;
// line 568
panda$core$MutableString* $tmp922 = *(&local0);
panda$core$MutableString* $tmp923 = *(&local4);
panda$core$MutableString$append$panda$core$Object($tmp922, ((panda$core$Object*) $tmp923));
// line 569
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp924 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp925;
$tmp925 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp925->value = $tmp924;
panda$core$Int64 $tmp926 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp927 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp926);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp928;
$tmp928 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp928->value = $tmp927;
ITable* $tmp929 = ((panda$core$Equatable*) $tmp925)->$class->itable;
while ($tmp929->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp929 = $tmp929->next;
}
$fn931 $tmp930 = $tmp929->methods[1];
panda$core$Bit $tmp932 = $tmp930(((panda$core$Equatable*) $tmp925), ((panda$core$Equatable*) $tmp928));
bool $tmp933 = $tmp932.value;
if ($tmp933) goto block48; else goto block49;
block48:;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp934 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp935;
$tmp935 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp935->value = $tmp934;
panda$core$Int64 $tmp936 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp937 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp936);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp938;
$tmp938 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp938->value = $tmp937;
ITable* $tmp939 = ((panda$core$Equatable*) $tmp935)->$class->itable;
while ($tmp939->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp939 = $tmp939->next;
}
$fn941 $tmp940 = $tmp939->methods[1];
panda$core$Bit $tmp942 = $tmp940(((panda$core$Equatable*) $tmp935), ((panda$core$Equatable*) $tmp938));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp938)));
// unreffing REF($395:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp935)));
// unreffing REF($391:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
*(&local6) = $tmp942;
goto block50;
block49:;
*(&local6) = $tmp932;
goto block50;
block50:;
panda$core$Bit $tmp943 = *(&local6);
bool $tmp944 = $tmp943.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp928)));
// unreffing REF($385:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp925)));
// unreffing REF($381:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
if ($tmp944) goto block46; else goto block47;
block46:;
// line 571
panda$core$MutableString* $tmp945 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp945, &$s946);
goto block47;
block47:;
panda$core$MutableString* $tmp947 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp947));
// unreffing s
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp729);
// unreffing REF($44:panda.collections.Iterator.T)
org$pandalanguage$pandac$Pair* $tmp948 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp948));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp720));
// unreffing REF($33:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 574
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp949 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp950;
$tmp950 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp950->value = $tmp949;
panda$core$Int64 $tmp951 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp952 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp951);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp953;
$tmp953 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp953->value = $tmp952;
ITable* $tmp954 = ((panda$core$Equatable*) $tmp950)->$class->itable;
while ($tmp954->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp954 = $tmp954->next;
}
$fn956 $tmp955 = $tmp954->methods[1];
panda$core$Bit $tmp957 = $tmp955(((panda$core$Equatable*) $tmp950), ((panda$core$Equatable*) $tmp953));
bool $tmp958 = $tmp957.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp953)));
// unreffing REF($444:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp950)));
// unreffing REF($440:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
if ($tmp958) goto block51; else goto block52;
block51:;
// line 575
panda$core$MutableString* $tmp959 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp959, &$s960);
goto block52;
block52:;
// line 577
panda$core$MutableString* $tmp961 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp961, &$s962);
// line 578
panda$core$MutableString* $tmp963 = *(&local0);
panda$core$String* $tmp964 = panda$core$MutableString$finish$R$panda$core$String($tmp963);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp964));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp964));
// unreffing REF($464:panda.core.String)
panda$core$MutableString* $tmp965 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp965));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp964;

}
void org$pandalanguage$pandac$pandadoc$Markdown$syntaxHighlight$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$core$Bit local2;
panda$core$Bit local3;
panda$core$Bit local4;
org$pandalanguage$pandac$parser$Token local5;
// line 582
panda$threads$MessageQueue** $tmp966 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp967 = *$tmp966;
panda$threads$MessageQueue$clear($tmp967);
// line 583
panda$core$String* $tmp968 = panda$core$MutableString$convert$R$panda$core$String(param1);
panda$core$String* $tmp969 = panda$core$String$get_trimmed$R$panda$core$String($tmp968);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp969));
panda$core$String* $tmp970 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp970));
*(&local0) = $tmp969;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp969));
// unreffing REF($7:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp968));
// unreffing REF($6:panda.core.String)
// line 584
org$pandalanguage$pandac$parser$Parser** $tmp971 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp972 = *$tmp971;
panda$io$File** $tmp973 = &param0->source;
panda$io$File* $tmp974 = *$tmp973;
panda$core$String* $tmp975 = *(&local0);
org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String($tmp972, $tmp974, $tmp975);
// line 585
org$pandalanguage$pandac$parser$Parser** $tmp976 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp977 = *$tmp976;
org$pandalanguage$pandac$ASTNode* $tmp978 = org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q($tmp977);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp978));
org$pandalanguage$pandac$ASTNode* $tmp979 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp979));
*(&local1) = $tmp978;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp978));
// unreffing REF($31:org.pandalanguage.pandac.ASTNode?)
// line 586
org$pandalanguage$pandac$ASTNode* $tmp980 = *(&local1);
panda$core$Bit $tmp981 = panda$core$Bit$init$builtin_bit($tmp980 != NULL);
bool $tmp982 = $tmp981.value;
if ($tmp982) goto block3; else goto block4;
block3:;
panda$threads$MessageQueue** $tmp983 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp984 = *$tmp983;
panda$core$Int64 $tmp985 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp984);
panda$core$Int64 $tmp986 = (panda$core$Int64) {0};
panda$core$Bit $tmp987 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp985, $tmp986);
*(&local2) = $tmp987;
goto block5;
block4:;
*(&local2) = $tmp981;
goto block5;
block5:;
panda$core$Bit $tmp988 = *(&local2);
bool $tmp989 = $tmp988.value;
if ($tmp989) goto block1; else goto block2;
block1:;
// line 587
panda$core$Bit $tmp990 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$MutableString$Index$Q$GT $tmp991 = panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$init$panda$core$MutableString$Index$Q$panda$core$MutableString$Index$Q$panda$core$Bit(((panda$core$MutableString$Index$nullable) { .nonnull = false }), ((panda$core$MutableString$Index$nullable) { .nonnull = false }), $tmp990);
org$pandalanguage$pandac$parser$Parser** $tmp992 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp993 = *$tmp992;
$fn995 $tmp994 = ($fn995) param0->$class->vtable[16];
panda$core$String* $tmp996 = $tmp994(param0, $tmp993);
panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String(param1, $tmp991, $tmp996);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp996));
// unreffing REF($67:panda.core.String)
// line 588
org$pandalanguage$pandac$ASTNode* $tmp997 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp997));
// unreffing file
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp998 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp998));
// unreffing text
*(&local0) = ((panda$core$String*) NULL);
return;
block2:;
// line 591
panda$threads$MessageQueue** $tmp999 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1000 = *$tmp999;
panda$threads$MessageQueue$clear($tmp1000);
// line 592
org$pandalanguage$pandac$parser$Parser** $tmp1001 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1002 = *$tmp1001;
panda$io$File** $tmp1003 = &param0->source;
panda$io$File* $tmp1004 = *$tmp1003;
panda$core$String* $tmp1005 = *(&local0);
org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String($tmp1002, $tmp1004, $tmp1005);
// line 593
goto block6;
block6:;
org$pandalanguage$pandac$parser$Parser** $tmp1006 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1007 = *$tmp1006;
org$pandalanguage$pandac$parser$Token $tmp1008 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token($tmp1007);
org$pandalanguage$pandac$parser$Token$Kind $tmp1009 = $tmp1008.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1010;
$tmp1010 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1010->value = $tmp1009;
panda$core$Int64 $tmp1011 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp1012 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1011);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1013;
$tmp1013 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1013->value = $tmp1012;
ITable* $tmp1014 = ((panda$core$Equatable*) $tmp1010)->$class->itable;
while ($tmp1014->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1014 = $tmp1014->next;
}
$fn1016 $tmp1015 = $tmp1014->methods[1];
panda$core$Bit $tmp1017 = $tmp1015(((panda$core$Equatable*) $tmp1010), ((panda$core$Equatable*) $tmp1013));
bool $tmp1018 = $tmp1017.value;
if ($tmp1018) goto block9; else goto block10;
block9:;
panda$threads$MessageQueue** $tmp1019 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1020 = *$tmp1019;
panda$core$Int64 $tmp1021 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp1020);
panda$core$Int64 $tmp1022 = (panda$core$Int64) {0};
panda$core$Bit $tmp1023 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1021, $tmp1022);
*(&local3) = $tmp1023;
goto block11;
block10:;
*(&local3) = $tmp1017;
goto block11;
block11:;
panda$core$Bit $tmp1024 = *(&local3);
bool $tmp1025 = $tmp1024.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1013)));
// unreffing REF($106:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1010)));
// unreffing REF($102:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp1025) goto block7; else goto block8;
block7:;
// line 594
org$pandalanguage$pandac$parser$Parser** $tmp1026 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1027 = *$tmp1026;
org$pandalanguage$pandac$ASTNode* $tmp1028 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q($tmp1027);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1028));
// unreffing REF($133:org.pandalanguage.pandac.ASTNode?)
goto block6;
block8:;
// line 596
panda$threads$MessageQueue** $tmp1029 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1030 = *$tmp1029;
panda$core$Int64 $tmp1031 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp1030);
panda$core$Int64 $tmp1032 = (panda$core$Int64) {0};
panda$core$Bit $tmp1033 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1031, $tmp1032);
bool $tmp1034 = $tmp1033.value;
if ($tmp1034) goto block12; else goto block13;
block12:;
// line 597
panda$core$Bit $tmp1035 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$MutableString$Index$Q$GT $tmp1036 = panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$init$panda$core$MutableString$Index$Q$panda$core$MutableString$Index$Q$panda$core$Bit(((panda$core$MutableString$Index$nullable) { .nonnull = false }), ((panda$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1035);
org$pandalanguage$pandac$parser$Parser** $tmp1037 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1038 = *$tmp1037;
$fn1040 $tmp1039 = ($fn1040) param0->$class->vtable[16];
panda$core$String* $tmp1041 = $tmp1039(param0, $tmp1038);
panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String(param1, $tmp1036, $tmp1041);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1041));
// unreffing REF($153:panda.core.String)
// line 598
org$pandalanguage$pandac$ASTNode* $tmp1042 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1042));
// unreffing file
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1043 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1043));
// unreffing text
*(&local0) = ((panda$core$String*) NULL);
return;
block13:;
// line 601
panda$threads$MessageQueue** $tmp1044 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1045 = *$tmp1044;
panda$threads$MessageQueue$clear($tmp1045);
// line 602
org$pandalanguage$pandac$parser$Parser** $tmp1046 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1047 = *$tmp1046;
panda$io$File** $tmp1048 = &param0->source;
panda$io$File* $tmp1049 = *$tmp1048;
panda$core$String* $tmp1050 = *(&local0);
org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String($tmp1047, $tmp1049, $tmp1050);
// line 603
goto block14;
block14:;
org$pandalanguage$pandac$parser$Parser** $tmp1051 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1052 = *$tmp1051;
org$pandalanguage$pandac$parser$Token $tmp1053 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token($tmp1052);
org$pandalanguage$pandac$parser$Token$Kind $tmp1054 = $tmp1053.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1055;
$tmp1055 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1055->value = $tmp1054;
panda$core$Int64 $tmp1056 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp1057 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1056);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1058;
$tmp1058 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1058->value = $tmp1057;
ITable* $tmp1059 = ((panda$core$Equatable*) $tmp1055)->$class->itable;
while ($tmp1059->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1059 = $tmp1059->next;
}
$fn1061 $tmp1060 = $tmp1059->methods[1];
panda$core$Bit $tmp1062 = $tmp1060(((panda$core$Equatable*) $tmp1055), ((panda$core$Equatable*) $tmp1058));
bool $tmp1063 = $tmp1062.value;
if ($tmp1063) goto block17; else goto block18;
block17:;
panda$threads$MessageQueue** $tmp1064 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1065 = *$tmp1064;
panda$core$Int64 $tmp1066 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp1065);
panda$core$Int64 $tmp1067 = (panda$core$Int64) {0};
panda$core$Bit $tmp1068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1066, $tmp1067);
*(&local4) = $tmp1068;
goto block19;
block18:;
*(&local4) = $tmp1062;
goto block19;
block19:;
panda$core$Bit $tmp1069 = *(&local4);
bool $tmp1070 = $tmp1069.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1058)));
// unreffing REF($192:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1055)));
// unreffing REF($188:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp1070) goto block15; else goto block16;
block15:;
// line 604
org$pandalanguage$pandac$parser$Parser** $tmp1071 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1072 = *$tmp1071;
org$pandalanguage$pandac$ASTNode* $tmp1073 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q($tmp1072);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1073));
// unreffing REF($219:org.pandalanguage.pandac.ASTNode?)
goto block14;
block16:;
// line 606
panda$threads$MessageQueue** $tmp1074 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1075 = *$tmp1074;
panda$core$Int64 $tmp1076 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp1075);
panda$core$Int64 $tmp1077 = (panda$core$Int64) {0};
panda$core$Bit $tmp1078 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1076, $tmp1077);
bool $tmp1079 = $tmp1078.value;
if ($tmp1079) goto block20; else goto block21;
block20:;
// line 607
panda$core$Bit $tmp1080 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$MutableString$Index$Q$GT $tmp1081 = panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$init$panda$core$MutableString$Index$Q$panda$core$MutableString$Index$Q$panda$core$Bit(((panda$core$MutableString$Index$nullable) { .nonnull = false }), ((panda$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1080);
org$pandalanguage$pandac$parser$Parser** $tmp1082 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1083 = *$tmp1082;
$fn1085 $tmp1084 = ($fn1085) param0->$class->vtable[16];
panda$core$String* $tmp1086 = $tmp1084(param0, $tmp1083);
panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String(param1, $tmp1081, $tmp1086);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1086));
// unreffing REF($239:panda.core.String)
// line 608
org$pandalanguage$pandac$ASTNode* $tmp1087 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1087));
// unreffing file
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1088 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1088));
// unreffing text
*(&local0) = ((panda$core$String*) NULL);
return;
block21:;
// line 611
panda$threads$MessageQueue** $tmp1089 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1090 = *$tmp1089;
panda$threads$MessageQueue$clear($tmp1090);
// line 612
org$pandalanguage$pandac$parser$Parser** $tmp1091 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1092 = *$tmp1091;
panda$io$File** $tmp1093 = &param0->source;
panda$io$File* $tmp1094 = *$tmp1093;
panda$core$String* $tmp1095 = *(&local0);
org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String($tmp1092, $tmp1094, $tmp1095);
// line 613
goto block22;
block22:;
// line 614
org$pandalanguage$pandac$parser$Parser** $tmp1096 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1097 = *$tmp1096;
org$pandalanguage$pandac$parser$Token $tmp1098 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token($tmp1097);
*(&local5) = $tmp1098;
// line 615
org$pandalanguage$pandac$parser$Token $tmp1099 = *(&local5);
org$pandalanguage$pandac$parser$Token$Kind $tmp1100 = $tmp1099.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1101;
$tmp1101 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1101->value = $tmp1100;
panda$core$Int64 $tmp1102 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp1103 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1102);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1104;
$tmp1104 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1104->value = $tmp1103;
ITable* $tmp1105 = ((panda$core$Equatable*) $tmp1101)->$class->itable;
while ($tmp1105->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1105 = $tmp1105->next;
}
$fn1107 $tmp1106 = $tmp1105->methods[0];
panda$core$Bit $tmp1108 = $tmp1106(((panda$core$Equatable*) $tmp1101), ((panda$core$Equatable*) $tmp1104));
bool $tmp1109 = $tmp1108.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1104)));
// unreffing REF($282:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1101)));
// unreffing REF($278:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp1109) goto block24; else goto block25;
block24:;
// line 616
goto block23;
block25:;
goto block22;
block23:;
// line 619
panda$core$Bit $tmp1110 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$MutableString$Index$Q$GT $tmp1111 = panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$init$panda$core$MutableString$Index$Q$panda$core$MutableString$Index$Q$panda$core$Bit(((panda$core$MutableString$Index$nullable) { .nonnull = false }), ((panda$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1110);
org$pandalanguage$pandac$parser$Parser** $tmp1112 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1113 = *$tmp1112;
$fn1115 $tmp1114 = ($fn1115) param0->$class->vtable[16];
panda$core$String* $tmp1116 = $tmp1114(param0, $tmp1113);
panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String(param1, $tmp1111, $tmp1116);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1116));
// unreffing REF($302:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1117 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1117));
// unreffing file
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1118 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1118));
// unreffing text
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$encodeCode$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 625
panda$core$RegularExpression* $tmp1119 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1119, &$s1120);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1119, &$s1121);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1119));
// unreffing REF($1:panda.core.RegularExpression)
// line 626
$fn1123 $tmp1122 = ($fn1123) param0->$class->vtable[17];
$tmp1122(param0, param1);
// line 627
panda$core$MutableString$replace$panda$core$String$panda$core$String(param1, &$s1124, &$s1125);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doLists$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$Int64 local0;
panda$core$String* local1 = NULL;
panda$core$RegularExpression* local2 = NULL;
panda$core$RegularExpression* local3 = NULL;
// line 631
panda$core$Int64 $tmp1126 = (panda$core$Int64) {4};
panda$core$Int64 $tmp1127 = (panda$core$Int64) {1};
int64_t $tmp1128 = $tmp1126.value;
int64_t $tmp1129 = $tmp1127.value;
int64_t $tmp1130 = $tmp1128 - $tmp1129;
panda$core$Int64 $tmp1131 = (panda$core$Int64) {$tmp1130};
*(&local0) = $tmp1131;
// line 633
panda$core$Int64 $tmp1132 = *(&local0);
panda$core$Int64$wrapper* $tmp1133;
$tmp1133 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp1133->value = $tmp1132;
panda$core$String* $tmp1134 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1135, ((panda$core$Object*) $tmp1133));
panda$core$String* $tmp1136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1134, &$s1137);
panda$core$String* $tmp1138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1136, &$s1139);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1138));
panda$core$String* $tmp1140 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1140));
*(&local1) = $tmp1138;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1138));
// unreffing REF($13:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1136));
// unreffing REF($12:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1134));
// unreffing REF($11:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1133));
// unreffing REF($10:panda.core.Object)
// line 656
panda$core$Int64* $tmp1141 = &param0->listLevel;
panda$core$Int64 $tmp1142 = *$tmp1141;
panda$core$Int64 $tmp1143 = (panda$core$Int64) {0};
int64_t $tmp1144 = $tmp1142.value;
int64_t $tmp1145 = $tmp1143.value;
bool $tmp1146 = $tmp1144 > $tmp1145;
panda$core$Bit $tmp1147 = (panda$core$Bit) {$tmp1146};
bool $tmp1148 = $tmp1147.value;
if ($tmp1148) goto block1; else goto block3;
block1:;
// line 657
panda$core$RegularExpression* $tmp1149 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1150 = *(&local1);
panda$core$String* $tmp1151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1152, $tmp1150);
panda$core$String* $tmp1153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1151, &$s1154);
panda$core$RegularExpression$init$panda$core$String($tmp1149, $tmp1153);
*(&local2) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1149));
panda$core$RegularExpression* $tmp1155 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1155));
*(&local2) = $tmp1149;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1153));
// unreffing REF($47:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1151));
// unreffing REF($46:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1149));
// unreffing REF($44:panda.core.RegularExpression)
// line 658
panda$core$RegularExpression* $tmp1156 = *(&local2);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure12* $tmp1157 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure12*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure12$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure12$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1157, param0);
panda$core$MutableMethod* $tmp1159 = (panda$core$MutableMethod*) frostObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1159, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure12$$anonymous11$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp1157));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1156, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1159)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1159));
// unreffing REF($70:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1157));
// unreffing REF($67:org.pandalanguage.pandac.pandadoc.Markdown._Closure12)
panda$core$RegularExpression* $tmp1160 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1160));
// unreffing matchStartOfLine
*(&local2) = ((panda$core$RegularExpression*) NULL);
goto block2;
block3:;
// line 1
// line 684
panda$core$RegularExpression* $tmp1161 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1162 = *(&local1);
panda$core$String* $tmp1163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1164, $tmp1162);
panda$core$RegularExpression$init$panda$core$String($tmp1161, $tmp1163);
*(&local3) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1161));
panda$core$RegularExpression* $tmp1165 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1165));
*(&local3) = $tmp1161;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1163));
// unreffing REF($92:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1161));
// unreffing REF($90:panda.core.RegularExpression)
// line 685
panda$core$RegularExpression* $tmp1166 = *(&local3);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure14* $tmp1167 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure14*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure14$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure14$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1167, param0);
panda$core$MutableMethod* $tmp1169 = (panda$core$MutableMethod*) frostObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1169, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure14$$anonymous13$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp1167));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1166, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1169)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1169));
// unreffing REF($112:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1167));
// unreffing REF($109:org.pandalanguage.pandac.pandadoc.Markdown._Closure14)
panda$core$RegularExpression* $tmp1170 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1170));
// unreffing matchStartOfLine
*(&local3) = ((panda$core$RegularExpression*) NULL);
goto block2;
block2:;
panda$core$String* $tmp1171 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1171));
// unreffing wholeList
*(&local1) = ((panda$core$String*) NULL);
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$processListItems$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$String* param1) {

panda$core$String* local0 = NULL;
panda$core$RegularExpression* local1 = NULL;
// line 726
panda$core$Int64* $tmp1172 = &param0->listLevel;
panda$core$Int64 $tmp1173 = *$tmp1172;
panda$core$Int64 $tmp1174 = (panda$core$Int64) {1};
int64_t $tmp1175 = $tmp1173.value;
int64_t $tmp1176 = $tmp1174.value;
int64_t $tmp1177 = $tmp1175 + $tmp1176;
panda$core$Int64 $tmp1178 = (panda$core$Int64) {$tmp1177};
panda$core$Int64* $tmp1179 = &param0->listLevel;
*$tmp1179 = $tmp1178;
// line 729
panda$core$RegularExpression* $tmp1180 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1180, &$s1181);
panda$core$String* $tmp1182 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(param1, $tmp1180, &$s1183);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1182));
panda$core$String* $tmp1184 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1184));
*(&local0) = $tmp1182;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1182));
// unreffing REF($13:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1180));
// unreffing REF($11:panda.core.RegularExpression)
// line 731
panda$core$RegularExpression* $tmp1185 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1187, &$s1188);
panda$core$String* $tmp1189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1186, &$s1190);
panda$core$Int64 $tmp1191 = (panda$core$Int64) {1};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1185, $tmp1189, $tmp1191);
*(&local1) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1185));
panda$core$RegularExpression* $tmp1192 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1192));
*(&local1) = $tmp1185;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1189));
// unreffing REF($30:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1186));
// unreffing REF($29:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1185));
// unreffing REF($28:panda.core.RegularExpression)
// line 736
panda$core$String* $tmp1193 = *(&local0);
panda$core$RegularExpression* $tmp1194 = *(&local1);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure16* $tmp1195 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure16*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure16$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure16$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1195, param0);
panda$core$MutableMethod* $tmp1197 = (panda$core$MutableMethod*) frostObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1197, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure16$$anonymous15$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1195));
panda$core$String* $tmp1198 = panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String($tmp1193, $tmp1194, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1197)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1198));
panda$core$String* $tmp1199 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1199));
*(&local0) = $tmp1198;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1198));
// unreffing REF($60:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1197));
// unreffing REF($55:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1195));
// unreffing REF($52:org.pandalanguage.pandac.pandadoc.Markdown._Closure16)
// line 753
panda$core$Int64* $tmp1200 = &param0->listLevel;
panda$core$Int64 $tmp1201 = *$tmp1200;
panda$core$Int64 $tmp1202 = (panda$core$Int64) {1};
int64_t $tmp1203 = $tmp1201.value;
int64_t $tmp1204 = $tmp1202.value;
int64_t $tmp1205 = $tmp1203 - $tmp1204;
panda$core$Int64 $tmp1206 = (panda$core$Int64) {$tmp1205};
panda$core$Int64* $tmp1207 = &param0->listLevel;
*$tmp1207 = $tmp1206;
// line 754
panda$core$String* $tmp1208 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1208));
panda$core$RegularExpression* $tmp1209 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1209));
// unreffing p
*(&local1) = ((panda$core$RegularExpression*) NULL);
panda$core$String* $tmp1210 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1210));
// unreffing list
*(&local0) = ((panda$core$String*) NULL);
return $tmp1208;

}
panda$core$Bit org$pandalanguage$pandac$pandadoc$Markdown$hasParagraphBreak$panda$core$MutableString$R$panda$core$Bit(panda$core$MutableString* param0) {

// line 759
panda$core$Bit $tmp1211 = panda$core$MutableString$contains$panda$core$String$R$panda$core$Bit(param0, &$s1212);
return $tmp1211;

}
panda$core$Bit org$pandalanguage$pandac$pandadoc$Markdown$isEmptyString$panda$core$String$Q$R$panda$core$Bit(panda$core$String* param0) {

panda$core$Bit local0;
// line 764
panda$core$Bit $tmp1213 = panda$core$Bit$init$builtin_bit(param0 == NULL);
bool $tmp1214 = $tmp1213.value;
if ($tmp1214) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1213;
goto block3;
block2:;
panda$core$Bit $tmp1215 = panda$core$Bit$init$builtin_bit(param0 != NULL);
bool $tmp1216 = $tmp1215.value;
if ($tmp1216) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp1217 = (panda$core$Int64) {764};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1218, $tmp1217, &$s1219);
abort(); // unreachable
block4:;
panda$core$Bit $tmp1220 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(param0, &$s1221);
*(&local0) = $tmp1220;
goto block3;
block3:;
panda$core$Bit $tmp1222 = *(&local0);
return $tmp1222;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doHeaders$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
// line 769
panda$core$RegularExpression* $tmp1223 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1223, &$s1224);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure18* $tmp1225 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure18*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure18$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure18$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1225, param0);
panda$core$MutableMethod* $tmp1227 = (panda$core$MutableMethod*) frostObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1227, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure18$$anonymous17$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1225));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1223, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1227)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1227));
// unreffing REF($6:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1225));
// unreffing REF($3:org.pandalanguage.pandac.pandadoc.Markdown._Closure18)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1223));
// unreffing REF($1:panda.core.RegularExpression)
// line 774
panda$core$RegularExpression* $tmp1228 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1228, &$s1229);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure20* $tmp1230 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure20*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure20$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure20$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1230, param0);
panda$core$MutableMethod* $tmp1232 = (panda$core$MutableMethod*) frostObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1232, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure20$$anonymous19$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1230));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1228, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1232)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1232));
// unreffing REF($27:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1230));
// unreffing REF($24:org.pandalanguage.pandac.pandadoc.Markdown._Closure20)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1228));
// unreffing REF($22:panda.core.RegularExpression)
// line 781
panda$core$RegularExpression* $tmp1233 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$Int64 $tmp1234 = (panda$core$Int64) {1};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1233, &$s1235, $tmp1234);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1233));
panda$core$RegularExpression* $tmp1236 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1236));
*(&local0) = $tmp1233;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1233));
// unreffing REF($43:panda.core.RegularExpression)
// line 782
panda$core$RegularExpression* $tmp1237 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure22* $tmp1238 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure22*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure22$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure22$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1238, param0);
panda$core$MutableMethod* $tmp1240 = (panda$core$MutableMethod*) frostObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1240, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure22$$anonymous21$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp1238));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1237, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1240)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1240));
// unreffing REF($61:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1238));
// unreffing REF($58:org.pandalanguage.pandac.pandadoc.Markdown._Closure22)
panda$core$RegularExpression* $tmp1241 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1241));
// unreffing p
*(&local0) = ((panda$core$RegularExpression*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$runSpanGamut$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 793
$fn1243 $tmp1242 = ($fn1243) param0->$class->vtable[24];
$tmp1242(param0, param1);
// line 794
$fn1245 $tmp1244 = ($fn1245) param0->$class->vtable[29];
$tmp1244(param0, param1);
// line 795
$fn1247 $tmp1246 = ($fn1247) param0->$class->vtable[3];
$tmp1246(param0, param1);
// line 797
$fn1249 $tmp1248 = ($fn1249) param0->$class->vtable[25];
$tmp1248(param0, param1);
// line 798
$fn1251 $tmp1250 = ($fn1251) param0->$class->vtable[26];
$tmp1250(param0, param1);
// line 799
$fn1253 $tmp1252 = ($fn1253) param0->$class->vtable[10];
$tmp1252(param0, param1);
// line 805
$fn1255 $tmp1254 = ($fn1255) param0->$class->vtable[24];
$tmp1254(param0, param1);
// line 807
$fn1257 $tmp1256 = ($fn1257) param0->$class->vtable[28];
$tmp1256(param0, param1);
// line 808
$fn1259 $tmp1258 = ($fn1259) param0->$class->vtable[27];
$tmp1258(param0, param1);
// line 810
panda$core$RegularExpression* $tmp1260 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1260, &$s1261);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1260, &$s1262);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1260));
// unreffing REF($28:panda.core.RegularExpression)
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$nestedTagsRegex$panda$core$Int64$R$panda$core$String(panda$core$Int64 param0) {

// line 820
panda$core$Int64 $tmp1263 = (panda$core$Int64) {0};
panda$core$Bit $tmp1264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(param0, $tmp1263);
bool $tmp1265 = $tmp1264.value;
if ($tmp1265) goto block1; else goto block3;
block1:;
// line 821
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1266));
return &$s1267;
block3:;
// line 1
// line 824
panda$core$Int64 $tmp1268 = (panda$core$Int64) {1};
int64_t $tmp1269 = param0.value;
int64_t $tmp1270 = $tmp1268.value;
int64_t $tmp1271 = $tmp1269 - $tmp1270;
panda$core$Int64 $tmp1272 = (panda$core$Int64) {$tmp1271};
panda$core$String* $tmp1273 = org$pandalanguage$pandac$pandadoc$Markdown$nestedTagsRegex$panda$core$Int64$R$panda$core$String($tmp1272);
panda$core$String* $tmp1274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1275, $tmp1273);
panda$core$String* $tmp1276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1274, &$s1277);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1276));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1276));
// unreffing REF($18:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1274));
// unreffing REF($17:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1273));
// unreffing REF($16:panda.core.String)
return $tmp1276;
block2:;
panda$core$Bit $tmp1278 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1279 = $tmp1278.value;
if ($tmp1279) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp1280 = (panda$core$Int64) {819};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1281, $tmp1280, &$s1282);
abort(); // unreachable
block4:;
abort(); // unreachable

}
panda$collections$ListView* org$pandalanguage$pandac$pandadoc$Markdown$tokenizeHTML$panda$core$String$R$panda$collections$ListView$LTorg$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$GT(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$String* param1) {

panda$collections$Array* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$RegularExpression* local2 = NULL;
panda$core$Matcher* local3 = NULL;
panda$core$String$Index local4;
// line 829
panda$collections$Array* $tmp1283 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1283);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1283));
panda$collections$Array* $tmp1284 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1284));
*(&local0) = $tmp1283;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1283));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.pandadoc.Markdown.HTMLToken>)
// line 830
panda$core$Int64 $tmp1285 = (panda$core$Int64) {6};
panda$core$String* $tmp1286 = org$pandalanguage$pandac$pandadoc$Markdown$nestedTagsRegex$panda$core$Int64$R$panda$core$String($tmp1285);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1286));
panda$core$String* $tmp1287 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1287));
*(&local1) = $tmp1286;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1286));
// unreffing REF($16:panda.core.String)
// line 832
panda$core$RegularExpression* $tmp1288 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1290, &$s1291);
panda$core$String* $tmp1292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1289, &$s1293);
panda$core$String* $tmp1294 = *(&local1);
panda$core$String* $tmp1295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1292, $tmp1294);
panda$core$Int64 $tmp1296 = (panda$core$Int64) {2};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1288, $tmp1295, $tmp1296);
*(&local2) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1288));
panda$core$RegularExpression* $tmp1297 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1297));
*(&local2) = $tmp1288;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1295));
// unreffing REF($32:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1292));
// unreffing REF($30:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1289));
// unreffing REF($29:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1288));
// unreffing REF($28:panda.core.RegularExpression)
// line 840
panda$core$RegularExpression* $tmp1298 = *(&local2);
panda$core$Matcher* $tmp1299 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher($tmp1298, param1);
*(&local3) = ((panda$core$Matcher*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1299));
panda$core$Matcher* $tmp1300 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1300));
*(&local3) = $tmp1299;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1299));
// unreffing REF($56:panda.core.Matcher)
// line 841
panda$core$String$Index $tmp1301 = panda$core$String$get_start$R$panda$core$String$Index(param1);
*(&local4) = $tmp1301;
// line 842
goto block1;
block1:;
panda$core$Matcher* $tmp1302 = *(&local3);
panda$core$Bit $tmp1303 = panda$core$Matcher$find$R$panda$core$Bit($tmp1302);
bool $tmp1304 = $tmp1303.value;
if ($tmp1304) goto block2; else goto block3;
block2:;
// line 843
panda$core$String$Index $tmp1305 = *(&local4);
panda$core$String$Index$wrapper* $tmp1306;
$tmp1306 = (panda$core$String$Index$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp1306->value = $tmp1305;
panda$core$Matcher* $tmp1307 = *(&local3);
panda$core$String$Index $tmp1308;
panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1308, $tmp1307);
panda$core$String$Index$wrapper* $tmp1309;
$tmp1309 = (panda$core$String$Index$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp1309->value = $tmp1308;
ITable* $tmp1310 = ((panda$core$Comparable*) $tmp1306)->$class->itable;
while ($tmp1310->$class != (panda$core$Class*) &panda$core$Comparable$class) {
    $tmp1310 = $tmp1310->next;
}
$fn1312 $tmp1311 = $tmp1310->methods[1];
panda$core$Bit $tmp1313 = $tmp1311(((panda$core$Comparable*) $tmp1306), ((panda$core$Comparable*) $tmp1309));
bool $tmp1314 = $tmp1313.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp1309)));
// unreffing REF($82:panda.core.Comparable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp1306)));
// unreffing REF($78:panda.core.Comparable<panda.core.String.Index>)
if ($tmp1314) goto block4; else goto block5;
block4:;
// line 844
panda$collections$Array* $tmp1315 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1316 = (org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class);
panda$core$Int64 $tmp1317 = (panda$core$Int64) {1};
panda$core$String$Index $tmp1318 = *(&local4);
panda$core$Matcher* $tmp1319 = *(&local3);
panda$core$String$Index $tmp1320;
panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1320, $tmp1319);
panda$core$Bit $tmp1321 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp1322 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp1318, $tmp1320, $tmp1321);
panda$core$String* $tmp1323 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param1, $tmp1322);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String($tmp1316, $tmp1317, $tmp1323);
panda$collections$Array$add$panda$collections$Array$T($tmp1315, ((panda$core$Object*) $tmp1316));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1323));
// unreffing REF($103:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1316));
// unreffing REF($96:org.pandalanguage.pandac.pandadoc.Markdown.HTMLToken)
goto block5;
block5:;
// line 846
panda$collections$Array* $tmp1324 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1325 = (org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class);
panda$core$Int64 $tmp1326 = (panda$core$Int64) {0};
panda$core$Matcher* $tmp1327 = *(&local3);
panda$core$String$Index $tmp1328;
panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1328, $tmp1327);
panda$core$Matcher* $tmp1329 = *(&local3);
panda$core$String$Index $tmp1330;
panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1330, $tmp1329);
panda$core$Bit $tmp1331 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp1332 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp1328, $tmp1330, $tmp1331);
panda$core$String* $tmp1333 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param1, $tmp1332);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String($tmp1325, $tmp1326, $tmp1333);
panda$collections$Array$add$panda$collections$Array$T($tmp1324, ((panda$core$Object*) $tmp1325));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1333));
// unreffing REF($125:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1325));
// unreffing REF($117:org.pandalanguage.pandac.pandadoc.Markdown.HTMLToken)
// line 847
panda$core$Matcher* $tmp1334 = *(&local3);
panda$core$String$Index $tmp1335;
panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1335, $tmp1334);
*(&local4) = $tmp1335;
goto block1;
block3:;
// line 849
panda$core$String$Index $tmp1336 = *(&local4);
panda$core$String$Index$wrapper* $tmp1337;
$tmp1337 = (panda$core$String$Index$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp1337->value = $tmp1336;
panda$core$String$Index $tmp1338 = panda$core$String$get_end$R$panda$core$String$Index(param1);
panda$core$String$Index$wrapper* $tmp1339;
$tmp1339 = (panda$core$String$Index$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp1339->value = $tmp1338;
ITable* $tmp1340 = ((panda$core$Comparable*) $tmp1337)->$class->itable;
while ($tmp1340->$class != (panda$core$Class*) &panda$core$Comparable$class) {
    $tmp1340 = $tmp1340->next;
}
$fn1342 $tmp1341 = $tmp1340->methods[1];
panda$core$Bit $tmp1343 = $tmp1341(((panda$core$Comparable*) $tmp1337), ((panda$core$Comparable*) $tmp1339));
bool $tmp1344 = $tmp1343.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp1339)));
// unreffing REF($145:panda.core.Comparable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp1337)));
// unreffing REF($142:panda.core.Comparable<panda.core.String.Index>)
if ($tmp1344) goto block6; else goto block7;
block6:;
// line 850
panda$collections$Array* $tmp1345 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1346 = (org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class);
panda$core$Int64 $tmp1347 = (panda$core$Int64) {1};
panda$core$String$Index $tmp1348 = *(&local4);
panda$core$String$Index $tmp1349 = panda$core$String$get_end$R$panda$core$String$Index(param1);
panda$core$Bit $tmp1350 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp1351 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp1348, $tmp1349, $tmp1350);
panda$core$String* $tmp1352 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param1, $tmp1351);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String($tmp1346, $tmp1347, $tmp1352);
panda$collections$Array$add$panda$collections$Array$T($tmp1345, ((panda$core$Object*) $tmp1346));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1352));
// unreffing REF($165:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1346));
// unreffing REF($159:org.pandalanguage.pandac.pandadoc.Markdown.HTMLToken)
goto block7;
block7:;
// line 853
panda$collections$Array* $tmp1353 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp1353)));
panda$core$Matcher* $tmp1354 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1354));
// unreffing m
*(&local3) = ((panda$core$Matcher*) NULL);
panda$core$RegularExpression* $tmp1355 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1355));
// unreffing p
*(&local2) = ((panda$core$RegularExpression*) NULL);
panda$core$String* $tmp1356 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1356));
// unreffing nestedTags
*(&local1) = ((panda$core$String*) NULL);
panda$collections$Array* $tmp1357 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1357));
// unreffing tokens
*(&local0) = ((panda$collections$Array*) NULL);
return ((panda$collections$ListView*) $tmp1353);

}
void org$pandalanguage$pandac$pandadoc$Markdown$escapeSpecialCharsWithinTagAttributes$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$collections$ListView* local0 = NULL;
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
panda$core$String* local4 = NULL;
// line 866
panda$core$String* $tmp1358 = panda$core$MutableString$convert$R$panda$core$String(param1);
$fn1360 $tmp1359 = ($fn1360) param0->$class->vtable[23];
panda$collections$ListView* $tmp1361 = $tmp1359(param0, $tmp1358);
*(&local0) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1361));
panda$collections$ListView* $tmp1362 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1362));
*(&local0) = $tmp1361;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1361));
// unreffing REF($3:panda.collections.ListView<org.pandalanguage.pandac.pandadoc.Markdown.HTMLToken>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1358));
// unreffing REF($1:panda.core.String)
// line 867
panda$core$MutableString$clear(param1);
// line 869
panda$collections$ListView* $tmp1363 = *(&local0);
ITable* $tmp1364 = ((panda$collections$Iterable*) $tmp1363)->$class->itable;
while ($tmp1364->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1364 = $tmp1364->next;
}
$fn1366 $tmp1365 = $tmp1364->methods[0];
panda$collections$Iterator* $tmp1367 = $tmp1365(((panda$collections$Iterable*) $tmp1363));
goto block1;
block1:;
ITable* $tmp1368 = $tmp1367->$class->itable;
while ($tmp1368->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1368 = $tmp1368->next;
}
$fn1370 $tmp1369 = $tmp1368->methods[0];
panda$core$Bit $tmp1371 = $tmp1369($tmp1367);
bool $tmp1372 = $tmp1371.value;
if ($tmp1372) goto block3; else goto block2;
block2:;
*(&local1) = ((org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) NULL);
ITable* $tmp1373 = $tmp1367->$class->itable;
while ($tmp1373->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1373 = $tmp1373->next;
}
$fn1375 $tmp1374 = $tmp1373->methods[1];
panda$core$Object* $tmp1376 = $tmp1374($tmp1367);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) $tmp1376)));
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1377 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1377));
*(&local1) = ((org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) $tmp1376);
// line 870
*(&local2) = ((panda$core$String*) NULL);
// line 871
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1378 = *(&local1);
panda$core$Int64* $tmp1379 = &$tmp1378->$rawValue;
panda$core$Int64 $tmp1380 = *$tmp1379;
panda$core$Int64 $tmp1381 = (panda$core$Int64) {0};
panda$core$Bit $tmp1382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1380, $tmp1381);
bool $tmp1383 = $tmp1382.value;
if ($tmp1383) goto block5; else goto block6;
block5:;
panda$core$String** $tmp1384 = (panda$core$String**) ($tmp1378->$data + 0);
panda$core$String* $tmp1385 = *$tmp1384;
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1385));
panda$core$String* $tmp1386 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1386));
*(&local3) = $tmp1385;
// line 873
panda$core$String* $tmp1387 = *(&local3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1387));
panda$core$String* $tmp1388 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1388));
*(&local2) = $tmp1387;
// line 874
panda$core$String* $tmp1389 = *(&local2);
org$pandalanguage$pandac$pandadoc$Protector** $tmp1390 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp1391 = *$tmp1390;
$fn1393 $tmp1392 = ($fn1393) $tmp1391->$class->vtable[2];
panda$core$String* $tmp1394 = $tmp1392($tmp1391, &$s1395);
panda$core$String* $tmp1396 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1389, &$s1397, $tmp1394);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1396));
panda$core$String* $tmp1398 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1398));
*(&local2) = $tmp1396;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1396));
// unreffing REF($76:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1394));
// unreffing REF($75:panda.core.String)
// line 875
panda$core$String* $tmp1399 = *(&local2);
org$pandalanguage$pandac$pandadoc$Protector** $tmp1400 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp1401 = *$tmp1400;
$fn1403 $tmp1402 = ($fn1403) $tmp1401->$class->vtable[2];
panda$core$String* $tmp1404 = $tmp1402($tmp1401, &$s1405);
panda$core$String* $tmp1406 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1399, &$s1407, $tmp1404);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1406));
panda$core$String* $tmp1408 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1408));
*(&local2) = $tmp1406;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1406));
// unreffing REF($95:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1404));
// unreffing REF($94:panda.core.String)
// line 876
panda$core$String* $tmp1409 = *(&local2);
org$pandalanguage$pandac$pandadoc$Protector** $tmp1410 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp1411 = *$tmp1410;
$fn1413 $tmp1412 = ($fn1413) $tmp1411->$class->vtable[2];
panda$core$String* $tmp1414 = $tmp1412($tmp1411, &$s1415);
panda$core$String* $tmp1416 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1409, &$s1417, $tmp1414);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1416));
panda$core$String* $tmp1418 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1418));
*(&local2) = $tmp1416;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1416));
// unreffing REF($114:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1414));
// unreffing REF($113:panda.core.String)
// line 877
panda$core$String* $tmp1419 = *(&local2);
org$pandalanguage$pandac$pandadoc$Protector** $tmp1420 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp1421 = *$tmp1420;
$fn1423 $tmp1422 = ($fn1423) $tmp1421->$class->vtable[2];
panda$core$String* $tmp1424 = $tmp1422($tmp1421, &$s1425);
panda$core$String* $tmp1426 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1419, &$s1427, $tmp1424);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1426));
panda$core$String* $tmp1428 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1428));
*(&local2) = $tmp1426;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1426));
// unreffing REF($133:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1424));
// unreffing REF($132:panda.core.String)
panda$core$String* $tmp1429 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1429));
// unreffing text
*(&local3) = ((panda$core$String*) NULL);
goto block4;
block6:;
panda$core$Int64 $tmp1430 = (panda$core$Int64) {1};
panda$core$Bit $tmp1431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1380, $tmp1430);
bool $tmp1432 = $tmp1431.value;
if ($tmp1432) goto block7; else goto block4;
block7:;
panda$core$String** $tmp1433 = (panda$core$String**) ($tmp1378->$data + 0);
panda$core$String* $tmp1434 = *$tmp1433;
*(&local4) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1434));
panda$core$String* $tmp1435 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1435));
*(&local4) = $tmp1434;
// line 880
panda$core$String* $tmp1436 = *(&local4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1436));
panda$core$String* $tmp1437 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1437));
*(&local2) = $tmp1436;
panda$core$String* $tmp1438 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1438));
// unreffing text
*(&local4) = ((panda$core$String*) NULL);
goto block4;
block4:;
// line 883
panda$core$String* $tmp1439 = *(&local2);
panda$core$MutableString$append$panda$core$String(param1, $tmp1439);
panda$core$String* $tmp1440 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1440));
// unreffing value
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp1376);
// unreffing REF($35:panda.collections.Iterator.T)
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1441 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1441));
// unreffing token
*(&local1) = ((org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1367));
// unreffing REF($24:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$collections$ListView* $tmp1442 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1442));
// unreffing tokens
*(&local0) = ((panda$collections$ListView*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doImages$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
// line 889
panda$core$RegularExpression* $tmp1443 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1443, &$s1444);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1443, &$s1445);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1443));
// unreffing REF($1:panda.core.RegularExpression)
// line 890
panda$core$RegularExpression* $tmp1446 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1446, &$s1447);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1446, &$s1448);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1446));
// unreffing REF($8:panda.core.RegularExpression)
// line 893
panda$core$RegularExpression* $tmp1449 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1451, &$s1452);
panda$core$String* $tmp1453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1450, &$s1454);
panda$core$String* $tmp1455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1453, &$s1456);
panda$core$RegularExpression$init$panda$core$String($tmp1449, $tmp1455);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1449));
panda$core$RegularExpression* $tmp1457 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1457));
*(&local0) = $tmp1449;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1455));
// unreffing REF($18:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1453));
// unreffing REF($17:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1450));
// unreffing REF($16:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1449));
// unreffing REF($15:panda.core.RegularExpression)
// line 898
panda$core$RegularExpression* $tmp1458 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure24* $tmp1459 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure24*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure24$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure24$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1459, param0);
panda$core$MutableMethod* $tmp1461 = (panda$core$MutableMethod*) frostObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1461, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure24$$anonymous23$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1459));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1458, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1461)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1461));
// unreffing REF($44:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1459));
// unreffing REF($41:org.pandalanguage.pandac.pandadoc.Markdown._Closure24)
panda$core$RegularExpression* $tmp1462 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1462));
// unreffing imageLink
*(&local0) = ((panda$core$RegularExpression*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doAnchors$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
panda$core$RegularExpression* local1 = NULL;
panda$core$RegularExpression* local2 = NULL;
// line 931
panda$core$RegularExpression* $tmp1463 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1465, &$s1466);
panda$core$String* $tmp1467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1464, &$s1468);
panda$core$String* $tmp1469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1467, &$s1470);
panda$core$RegularExpression$init$panda$core$String($tmp1463, $tmp1469);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1463));
panda$core$RegularExpression* $tmp1471 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1471));
*(&local0) = $tmp1463;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1469));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1467));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1464));
// unreffing REF($2:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1463));
// unreffing REF($1:panda.core.RegularExpression)
// line 936
panda$core$RegularExpression* $tmp1472 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure26* $tmp1473 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure26*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure26$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure26$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1473, param0);
panda$core$MutableMethod* $tmp1475 = (panda$core$MutableMethod*) frostObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1475, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure26$$anonymous25$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp1473));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1472, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1475)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1475));
// unreffing REF($30:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1473));
// unreffing REF($27:org.pandalanguage.pandac.pandadoc.Markdown._Closure26)
// line 968
panda$core$RegularExpression* $tmp1476 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1478, &$s1479);
panda$core$String* $tmp1480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1477, &$s1481);
panda$core$String* $tmp1482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1480, &$s1483);
panda$core$String* $tmp1484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1482, &$s1485);
panda$core$String* $tmp1486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1484, &$s1487);
panda$core$String* $tmp1488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1486, &$s1489);
panda$core$String* $tmp1490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1488, &$s1491);
panda$core$String* $tmp1492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1490, &$s1493);
panda$core$String* $tmp1494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1492, &$s1495);
panda$core$String* $tmp1496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1494, &$s1497);
panda$core$String* $tmp1498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1496, &$s1499);
panda$core$Int64 $tmp1500 = (panda$core$Int64) {4};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1476, $tmp1498, $tmp1500);
*(&local1) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1476));
panda$core$RegularExpression* $tmp1501 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1501));
*(&local1) = $tmp1476;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1498));
// unreffing REF($54:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1496));
// unreffing REF($53:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1494));
// unreffing REF($52:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1492));
// unreffing REF($51:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1490));
// unreffing REF($50:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1488));
// unreffing REF($49:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1486));
// unreffing REF($48:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1484));
// unreffing REF($47:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1482));
// unreffing REF($46:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1480));
// unreffing REF($45:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1477));
// unreffing REF($44:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1476));
// unreffing REF($43:panda.core.RegularExpression)
// line 982
panda$core$RegularExpression* $tmp1502 = *(&local1);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure28* $tmp1503 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure28*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure28$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure28$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1503, param0);
panda$core$MutableMethod* $tmp1505 = (panda$core$MutableMethod*) frostObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1505, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure28$$anonymous27$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1503));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1502, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1505)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1505));
// unreffing REF($105:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1503));
// unreffing REF($102:org.pandalanguage.pandac.pandadoc.Markdown._Closure28)
// line 1019
panda$core$RegularExpression* $tmp1506 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1508, &$s1509);
panda$core$String* $tmp1510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1507, &$s1511);
panda$core$String* $tmp1512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1510, &$s1513);
panda$core$Int64 $tmp1514 = (panda$core$Int64) {4};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1506, $tmp1512, $tmp1514);
*(&local2) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1506));
panda$core$RegularExpression* $tmp1515 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1515));
*(&local2) = $tmp1506;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1512));
// unreffing REF($121:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1510));
// unreffing REF($120:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1507));
// unreffing REF($119:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1506));
// unreffing REF($118:panda.core.RegularExpression)
// line 1025
panda$core$RegularExpression* $tmp1516 = *(&local2);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure30* $tmp1517 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure30*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure30$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure30$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1517, param0);
panda$core$MutableMethod* $tmp1519 = (panda$core$MutableMethod*) frostObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1519, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure30$$anonymous29$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp1517));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1516, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1519)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1519));
// unreffing REF($148:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1517));
// unreffing REF($145:org.pandalanguage.pandac.pandadoc.Markdown._Closure30)
panda$core$RegularExpression* $tmp1520 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1520));
// unreffing referenceShortcut
*(&local2) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1521 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1521));
// unreffing inlineLink
*(&local1) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1522 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1522));
// unreffing internalLink
*(&local0) = ((panda$core$RegularExpression*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doItalicsAndBold$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 1067
panda$core$RegularExpression* $tmp1523 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1523, &$s1524);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1523, &$s1525);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1523));
// unreffing REF($1:panda.core.RegularExpression)
// line 1068
panda$core$RegularExpression* $tmp1526 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1526, &$s1527);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1526, &$s1528);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1526));
// unreffing REF($8:panda.core.RegularExpression)
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$encodeAmpsAndAngles$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 1074
panda$core$RegularExpression* $tmp1529 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1529, &$s1530);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1529, &$s1531);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1529));
// unreffing REF($1:panda.core.RegularExpression)
// line 1075
panda$core$RegularExpression* $tmp1532 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1532, &$s1533);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1532, &$s1534);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1532));
// unreffing REF($8:panda.core.RegularExpression)
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doCodeSpans$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 1079
panda$core$RegularExpression* $tmp1535 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1535, &$s1536);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure32* $tmp1537 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure32*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure32$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure32$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1537, param0);
panda$core$MutableMethod* $tmp1539 = (panda$core$MutableMethod*) frostObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1539, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure32$$anonymous31$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1537));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1535, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1539)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1539));
// unreffing REF($6:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1537));
// unreffing REF($3:org.pandalanguage.pandac.pandadoc.Markdown._Closure32)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1535));
// unreffing REF($1:panda.core.RegularExpression)
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$cleanup(org$pandalanguage$pandac$pandadoc$Markdown* param0) {

// line 83
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$io$File** $tmp1540 = &param0->source;
panda$io$File* $tmp1541 = *$tmp1540;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1541));
panda$threads$MessageQueue** $tmp1542 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1543 = *$tmp1542;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1543));
org$pandalanguage$pandac$parser$Parser** $tmp1544 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1545 = *$tmp1544;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1545));
panda$core$MutableMethod** $tmp1546 = &param0->linkResolver;
panda$core$MutableMethod* $tmp1547 = *$tmp1546;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1547));
panda$collections$HashMap** $tmp1548 = &param0->linkDefinitions;
panda$collections$HashMap* $tmp1549 = *$tmp1548;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1549));
org$pandalanguage$pandac$pandadoc$Protector** $tmp1550 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp1551 = *$tmp1550;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1551));
org$pandalanguage$pandac$pandadoc$Protector** $tmp1552 = &param0->htmlProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp1553 = *$tmp1552;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1553));
panda$math$Random** $tmp1554 = &param0->random;
panda$math$Random* $tmp1555 = *$tmp1554;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1555));
return;

}

