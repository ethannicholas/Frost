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
typedef void (*$fn467)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn503)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$core$String* (*$fn515)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure6*, panda$collections$ListView*);
typedef panda$core$Bit (*$fn525)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn530)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn537)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn548)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn552)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn557)(panda$collections$Iterator*);
typedef panda$core$Real64 (*$fn563)(panda$math$Random*);
typedef panda$core$Object* (*$fn619)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure9*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn625)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn656)(panda$collections$ListView*);
typedef panda$core$String* (*$fn677)(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer*, panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn691)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn695)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn700)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn711)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn721)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn735)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn827)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn835)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn843)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn851)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn859)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Bit (*$fn870)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn880)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn903)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn913)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn928)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn967)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$Bit (*$fn988)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn1012)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$Bit (*$fn1033)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn1057)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$Bit (*$fn1079)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn1087)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1095)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Object* (*$fn1130)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure12*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn1140)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure14*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1168)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure16*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1193)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure18*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1198)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure20*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn1206)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure22*, panda$collections$ListView*);
typedef void (*$fn1210)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1212)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1214)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1216)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1218)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1220)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1222)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1224)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1226)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Bit (*$fn1279)(panda$core$Comparable*, panda$core$Comparable*);
typedef panda$core$Bit (*$fn1309)(panda$core$Comparable*, panda$core$Comparable*);
typedef panda$collections$ListView* (*$fn1327)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1333)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1337)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1342)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1360)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1370)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1380)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1390)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1427)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure24*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn1441)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure26*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1471)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure28*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn1485)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure30*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1505)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure32*, panda$collections$ListView*);

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
static panda$core$String $s472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x70\x3e", 3, 1653735, NULL };
static panda$core$String $s474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x70\x3e", 4, 166369282, NULL };
static panda$core$String $s505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static panda$core$String $s508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28\x28\x68\x74\x74\x70\x73\x3f\x7c\x66\x74\x70\x29\x3a\x5b\x5e\x27\x5c\x22\x3e\x5c\x73\x5d\x2b\x29\x3e", 27, -3769254741412201634, NULL };
static panda$core$String $s509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22\x24\x31\x22\x3e\x24\x31\x3c\x2f\x61\x3e", 19, -7734359251480494054, NULL };
static panda$core$String $s511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28\x5b\x2d\x2e\x5c\x77\x5d\x2b\x5c\x40\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x28\x5c\x2e\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x29\x2a\x5c\x2e\x5b\x61\x2d\x7a\x5d\x2b\x29\x3e", 46, 7932002164266535007, NULL };
static panda$core$String $s573 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x23", 2, 14074, NULL };
static panda$core$String $s579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s588 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x23\x78", 3, 1421594, NULL };
static panda$core$String $s593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78", 1, 221, NULL };
static panda$core$String $s595 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s604 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x5b\x20\x09\x5d\x2a\x3e\x5b\x20\x09\x5d\x3f", 12, -3582088860114369432, NULL };
static panda$core$String $s606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2b\x5c\x6e", 4, 151902292, NULL };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2e\x2b\x5c\x6e\x29\x2a", 7, 150162376369015, NULL };
static panda$core$String $s610 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x2a", 3, 1979945, NULL };
static panda$core$String $s612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2b", 2, 14385, NULL };
static panda$core$String $s614 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s634 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s655 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2e\x2a\x3f\x29\x5c\x74", 7, 150162241731241, NULL };
static panda$core$String $s659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x5c\x74\x7c\x5b\x20\x5d\x7b\x31\x2c\x34\x7d\x29", 18, 7461573203115413830, NULL };
static panda$core$String $s660 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s663 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x5c\x6e\x5c\x6e\x7c\x5c\x41\x29\x28\x28\x3f\x3a", 15, -8559916856311689575, NULL };
static panda$core$String $s664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x5b\x20\x5d\x7b\x34\x7d\x29", 10, 7324185912868193391, NULL };
static panda$core$String $s666 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2a\x5c\x6e\x2b", 5, 15341101234, NULL };
static panda$core$String $s668 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2b", 2, 14385, NULL };
static panda$core$String $s670 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s672 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x3f\x3d\x5e\x5b\x20\x5d\x7b\x30\x2c\x34\x7d\x5c\x53\x29\x7c\x5c\x5a\x29", 20, -1268815784794221538, NULL };
static panda$core$String $s681 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x6e\x64\x61\x63\x6f\x64\x65\x22\x3e", 24, -1375153472772145809, NULL };
static panda$core$String $s726 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s753 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6d\x6d\x65\x6e\x74\x22\x3e", 22, -1756050522877089685, NULL };
static panda$core$String $s758 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x22\x3e", 25, 4577563245309187979, NULL };
static panda$core$String $s763 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x22\x3e", 25, 6760721592980043958, NULL };
static panda$core$String $s768 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x4e\x61\x6d\x65\x22\x3e", 28, 5111374842590752150, NULL };
static panda$core$String $s773 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x74\x79\x70\x65\x22\x3e", 19, -6878895466207673670, NULL };
static panda$core$String $s778 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6b\x65\x79\x77\x6f\x72\x64\x22\x3e", 22, -1670481277391576067, NULL };
static panda$core$String $s783 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6e\x74\x72\x6f\x6c\x22\x3e", 22, -1756049386432501671, NULL };
static panda$core$String $s788 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x74\x65\x72\x61\x6c\x22\x3e", 22, -1659229352682266791, NULL };
static panda$core$String $s793 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x73\x74\x72\x69\x6e\x67\x22\x3e", 21, -198306892965556893, NULL };
static panda$core$String $s798 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6f\x70\x65\x72\x61\x74\x6f\x72\x22\x3e", 23, 1793793249967207580, NULL };
static panda$core$String $s803 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x61\x62\x65\x6c\x22\x3e", 20, 6207823968128210400, NULL };
static panda$core$String $s807 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s815 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s818 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s819 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s821 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x67\x74\x3b", 4, 144274317, NULL };
static panda$core$String $s829 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s830 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s837 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s838 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s845 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s846 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5b", 2, 19584, NULL };
static panda$core$String $s853 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s854 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5d", 2, 19586, NULL };
static panda$core$String $s861 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s862 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s891 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22", 13, -8467438715157355368, NULL };
static panda$core$String $s893 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e", 2, 13697, NULL };
static panda$core$String $s918 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s932 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s934 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s1092 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x24\x28\x5c\x73\x2a\x29\x5c\x2e\x5c\x2e\x5c\x2e\x28\x5c\x73\x2a\x29\x5e", 22, -7048023396403805866, NULL };
static panda$core$String $s1093 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x31\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d\x24\x32", 13, -8807464024981417766, NULL };
static panda$core$String $s1096 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d", 9, 1585511400200274083, NULL };
static panda$core$String $s1097 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x65\x6c\x6c\x69\x70\x73\x69\x73\x22\x3e\x2e\x2e\x2e\x3c\x2f\x73\x70\x61\x6e\x3e", 33, 5749756206725659630, NULL };
static panda$core$String $s1107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x5b\x20\x5d\x7b\x30\x2c", 8, 15160529116888912, NULL };
static panda$core$String $s1109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x28\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x29\x5b\x20\x5d\x2b\x29\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x7a\x7c\x5c\x6e\x7b\x32\x2c\x7d", 42, -5883137854691898449, NULL };
static panda$core$String $s1111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x53\x29\x28\x3f\x21\x5b\x20\x5d\x2a\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b\x29\x29\x29", 36, 8434742182533998850, NULL };
static panda$core$String $s1124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e", 5, 14738541648, NULL };
static panda$core$String $s1126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29\x7c\x5c\x41\x5c\x6e\x3f\x29", 23, 6260301638587013175, NULL };
static panda$core$String $s1153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d\x5c\x7a", 8, 20810277504230859, NULL };
static panda$core$String $s1155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x6e\x29\x3f\x5e\x28\x5b\x20\x5c\x74\x5d\x2a\x29\x28\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b", 32, 116054090365740223, NULL };
static panda$core$String $s1160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x6e\x7b\x31\x2c\x32\x7d\x29\x29", 19, 4304152477369649477, NULL };
static panda$core$String $s1162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2a\x28\x5c\x7a\x7c\x5c\x32\x28\x5b\x2d\x2b\x5c\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5c\x74\x5d\x2b\x29\x29", 35, -2157463411774501410, NULL };
static panda$core$String $s1184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static panda$core$String $s1188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x3d\x3d\x3d\x3d\x2b\x24", 17, 8644226230150951458, NULL };
static panda$core$String $s1196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x2d\x2d\x2d\x2d\x2b\x24", 17, 8644226060307728994, NULL };
static panda$core$String $s1202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x28\x23\x7b\x31\x2c\x36\x7d\x29\x5c\x73\x2a\x28\x2e\x2a\x3f\x29\x5c\x73\x2a\x5c\x31\x3f\x24", 24, 6625741561155563100, NULL };
static panda$core$String $s1228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x32\x2c\x7d\x5c\x6e", 7, 142480172029377, NULL };
static panda$core$String $s1229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x62\x72\x20\x2f\x3e\x0a", 8, 14324133278249456, NULL };
static panda$core$String $s1233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x3c\x5b\x61\x2d\x7a\x2f\x21\x24\x5d\x28\x3f\x3a\x5b\x5e\x3c\x3e\x5d\x7c", 21, -3726567012419943545, NULL };
static panda$core$String $s1244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2a\x3e\x29", 4, 146737487, NULL };
static panda$core$String $s1248 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s1249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x6e\x65\x73\x74\x65\x64\x54\x61\x67\x73\x52\x65\x67\x65\x78\x28\x64\x65\x70\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 134, 6382497733495402167, NULL };
static panda$core$String $s1257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x73\x3a\x3c\x21\x28\x2d\x2d\x2e\x2a\x3f\x2d\x2d\x5c\x73\x2a\x29\x2b\x3e\x29\x7c", 22, -7717011245258052727, NULL };
static panda$core$String $s1258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x73\x3a\x3c\x5c\x3f\x2e\x2a\x3f\x5c\x3f\x3e\x29", 14, -1964502928120912323, NULL };
static panda$core$String $s1260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s1364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s1372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x60", 1, 197, NULL };
static panda$core$String $s1374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x60", 1, 197, NULL };
static panda$core$String $s1382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s1384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s1392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s1394 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s1411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x20\x5c\x22\x28\x2e\x2a\x29\x5c\x22\x5c\x5c\x29", 30, 1507772917981139974, NULL };
static panda$core$String $s1412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x74\x69\x74\x6c\x65\x3d\x22\x24\x33\x22\x20\x2f\x3e", 36, -5185982321426610333, NULL };
static panda$core$String $s1414 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x5c\x5c\x29", 21, -5830152919387063515, NULL };
static panda$core$String $s1415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x2f\x3e", 25, -7685348581218553223, NULL };
static panda$core$String $s1418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5b\x21\x5d\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 13, -4389225286389518346, NULL };
static panda$core$String $s1419 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f", 15, -5004708712015115107, NULL };
static panda$core$String $s1421 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 9, 2099712822272888901, NULL };
static panda$core$String $s1423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 10, 7641698408407002113, NULL };
static panda$core$String $s1433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f", 15, -5004708712015115107, NULL };
static panda$core$String $s1435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 9, 2099712822272888901, NULL };
static panda$core$String $s1437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 10, 7641698408407002113, NULL };
static panda$core$String $s1446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x28", 2, 19533, NULL };
static panda$core$String $s1448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a", 6, 2021365209467, NULL };
static panda$core$String $s1450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3f\x28\x2e\x2a\x3f\x29\x3e\x3f", 9, 1750196697486000581, NULL };
static panda$core$String $s1452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a", 6, 2021365209467, NULL };
static panda$core$String $s1454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5b\x27\x22\x5d\x29", 6, 1491434205139, NULL };
static panda$core$String $s1458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2e\x2a\x3f\x29", 5, 14720345233, NULL };
static panda$core$String $s1460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x35", 2, 19546, NULL };
static panda$core$String $s1462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3f", 2, 14405, NULL };
static panda$core$String $s1464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x29", 2, 19534, NULL };
static panda$core$String $s1466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x5b", 3, 1447724, NULL };
static panda$core$String $s1476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5b\x5e\x5c\x5b\x5c\x5d\x5d\x2b\x29", 10, 7631247159193161743, NULL };
static panda$core$String $s1478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5d", 2, 19586, NULL };
static panda$core$String $s1480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x2a\x5c\x5c\x2a\x7c\x5f\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x5b\x2a\x5f\x5d\x2a\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 35, 636172404878895653, NULL };
static panda$core$String $s1492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x74\x72\x6f\x6e\x67\x3e\x24\x32\x3c\x2f\x73\x74\x72\x6f\x6e\x67\x3e", 19, 504491683038092400, NULL };
static panda$core$String $s1494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x2a\x7c\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 26, -4247179954659836315, NULL };
static panda$core$String $s1495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x6d\x3e\x24\x32\x3c\x2f\x65\x6d\x3e", 11, 2723679958089201678, NULL };
static panda$core$String $s1497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x28\x3f\x21\x23\x3f\x5b\x78\x58\x5d\x3f\x28\x3f\x3a\x5b\x30\x2d\x39\x61\x2d\x66\x41\x2d\x46\x5d\x2b\x7c\x5c\x77\x2b\x29\x3b\x29", 33, -6716186838887255919, NULL };
static panda$core$String $s1498 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s1500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28\x3f\x21\x5b\x61\x2d\x7a\x41\x2d\x5a\x2f\x3f\x5c\x24\x21\x5d\x29", 18, 6433614010358842861, NULL };
static panda$core$String $s1501 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s1503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3c\x21\x5c\x5c\x29\x28\x60\x2b\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x21\x60\x29\x5c\x31\x28\x3f\x21\x60\x29", 29, 7657757978565690602, NULL };

void org$pandalanguage$pandac$pandadoc$Markdown$init(org$pandalanguage$pandac$pandadoc$Markdown* param0) {

// line 120
org$pandalanguage$pandac$pandadoc$Markdown$init$$LPpanda$core$String$RP$EQ$AM$GT$LPpanda$core$String$Q$RP$Q(param0, ((panda$core$MutableMethod*) NULL));
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$init$$LPpanda$core$String$RP$EQ$AM$GT$LPpanda$core$String$Q$RP$Q(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableMethod* param1) {

// line 98
panda$threads$MessageQueue* $tmp2 = (panda$threads$MessageQueue*) pandaObjectAlloc(56, (panda$core$Class*) &panda$threads$MessageQueue$class);
panda$threads$MessageQueue$init($tmp2);
panda$threads$MessageQueue** $tmp3 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp4 = *$tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
panda$threads$MessageQueue** $tmp5 = &param0->errorQueue;
*$tmp5 = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// unreffing REF($1:panda.threads.MessageQueue<org.pandalanguage.pandac.Compiler.Error>)
// line 100
org$pandalanguage$pandac$parser$Parser* $tmp6 = (org$pandalanguage$pandac$parser$Parser*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$class);
panda$threads$MessageQueue** $tmp7 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp8 = *$tmp7;
org$pandalanguage$pandac$parser$Parser$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT($tmp6, $tmp8);
org$pandalanguage$pandac$parser$Parser** $tmp9 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp10 = *$tmp9;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
org$pandalanguage$pandac$parser$Parser** $tmp11 = &param0->parser;
*$tmp11 = $tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
// unreffing REF($16:org.pandalanguage.pandac.parser.Parser)
// line 105
panda$collections$HashMap* $tmp12 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp12);
panda$collections$HashMap** $tmp13 = &param0->linkDefinitions;
panda$collections$HashMap* $tmp14 = *$tmp13;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
panda$collections$HashMap** $tmp15 = &param0->linkDefinitions;
*$tmp15 = $tmp12;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
// unreffing REF($32:panda.collections.HashMap<panda.core.String, org.pandalanguage.pandac.pandadoc.Markdown.LinkDefinition>)
// line 108
org$pandalanguage$pandac$pandadoc$Protector* $tmp16 = (org$pandalanguage$pandac$pandadoc$Protector*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Protector$class);
org$pandalanguage$pandac$pandadoc$Protector$init($tmp16);
org$pandalanguage$pandac$pandadoc$Protector** $tmp17 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp18 = *$tmp17;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
org$pandalanguage$pandac$pandadoc$Protector** $tmp19 = &param0->charProtector;
*$tmp19 = $tmp16;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
// unreffing REF($47:org.pandalanguage.pandac.pandadoc.Protector)
// line 111
org$pandalanguage$pandac$pandadoc$Protector* $tmp20 = (org$pandalanguage$pandac$pandadoc$Protector*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Protector$class);
org$pandalanguage$pandac$pandadoc$Protector$init($tmp20);
org$pandalanguage$pandac$pandadoc$Protector** $tmp21 = &param0->htmlProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp22 = *$tmp21;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
org$pandalanguage$pandac$pandadoc$Protector** $tmp23 = &param0->htmlProtector;
*$tmp23 = $tmp20;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
// unreffing REF($61:org.pandalanguage.pandac.pandadoc.Protector)
// line 114
panda$math$Random* $tmp24 = panda$math$Random$default$R$panda$math$Random();
panda$math$Random** $tmp25 = &param0->random;
panda$math$Random* $tmp26 = *$tmp25;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
panda$math$Random** $tmp27 = &param0->random;
*$tmp27 = $tmp24;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
// unreffing REF($75:panda.math.Random)
// line 117
panda$core$Int64 $tmp28 = (panda$core$Int64) {0};
panda$core$Int64* $tmp29 = &param0->listLevel;
*$tmp29 = $tmp28;
// line 124
panda$io$File* $tmp30 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$io$File$init$panda$core$String($tmp30, &$s31);
panda$io$File** $tmp32 = &param0->source;
panda$io$File* $tmp33 = *$tmp32;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
panda$io$File** $tmp34 = &param0->source;
*$tmp34 = $tmp30;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
// unreffing REF($92:panda.io.File)
// line 125
panda$core$MutableMethod** $tmp35 = &param0->linkResolver;
panda$core$MutableMethod* $tmp36 = *$tmp35;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$core$MutableMethod** $tmp37 = &param0->linkResolver;
*$tmp37 = param1;
// line 126
org$pandalanguage$pandac$parser$Parser** $tmp38 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp39 = *$tmp38;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp40 = (org$pandalanguage$pandac$parser$SyntaxHighlighter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$class);
org$pandalanguage$pandac$parser$SyntaxHighlighter$init($tmp40);
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp41 = &$tmp39->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp42 = *$tmp41;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp43 = &$tmp39->syntaxHighlighter;
*$tmp43 = $tmp40;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
// unreffing REF($117:org.pandalanguage.pandac.parser.SyntaxHighlighter)
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$process$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$String* param1) {

panda$core$MutableString* local0 = NULL;
// line 130
panda$core$MutableString* $tmp44 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp44, param1);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp45 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
*(&local0) = $tmp44;
// line 131
panda$core$MutableString* $tmp46 = *(&local0);
panda$core$RegularExpression* $tmp47 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp47, &$s48);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String($tmp46, $tmp47, &$s49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
// unreffing REF($12:panda.core.RegularExpression)
// line 132
panda$core$MutableString* $tmp50 = *(&local0);
panda$core$RegularExpression* $tmp51 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp51, &$s52);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String($tmp50, $tmp51, &$s53);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
// unreffing REF($20:panda.core.RegularExpression)
// line 133
panda$core$MutableString* $tmp54 = *(&local0);
panda$core$RegularExpression* $tmp55 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp55, &$s56);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String($tmp54, $tmp55, &$s57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
// unreffing REF($28:panda.core.RegularExpression)
// line 136
panda$core$MutableString* $tmp58 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp58, &$s59);
// line 138
panda$core$MutableString* $tmp60 = *(&local0);
$fn62 $tmp61 = ($fn62) param0->$class->vtable[14];
$tmp61(param0, $tmp60);
// line 139
panda$core$MutableString* $tmp63 = *(&local0);
panda$core$RegularExpression* $tmp64 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp64, &$s65);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String($tmp63, $tmp64, &$s66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
// unreffing REF($43:panda.core.RegularExpression)
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
// unreffing REF($70:panda.core.String)
panda$core$MutableString* $tmp83 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
// unreffing text
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
// unreffing REF($1:panda.core.MutableString)
return $tmp82;

}
void org$pandalanguage$pandac$pandadoc$Markdown$encodeBackslashEscapes$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$collections$ListView* local0 = NULL;
panda$collections$ListView* local1 = NULL;
// line 150
panda$collections$ListView* $tmp84 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s85);
*(&local0) = ((panda$collections$ListView*) NULL);
panda$collections$ListView* $tmp86 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp86));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
*(&local0) = $tmp84;
// line 151
panda$collections$ListView* $tmp87 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s88);
*(&local1) = ((panda$collections$ListView*) NULL);
panda$collections$ListView* $tmp89 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
*(&local1) = $tmp87;
// line 154
org$pandalanguage$pandac$pandadoc$Protector** $tmp90 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp91 = *$tmp90;
$fn93 $tmp92 = ($fn93) $tmp91->$class->vtable[2];
panda$core$String* $tmp94 = $tmp92($tmp91, &$s95);
panda$core$MutableString$replace$panda$core$String$panda$core$String(param1, &$s96, $tmp94);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
// unreffing REF($22:panda.core.String)
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
// unreffing REF($10:panda.collections.ListView<panda.core.Char8>)
panda$collections$ListView* $tmp106 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
// unreffing normalChars
*(&local0) = ((panda$collections$ListView*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
// unreffing REF($1:panda.collections.ListView<panda.core.Char8>)
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
panda$core$RegularExpression* $tmp120 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s122, param3);
panda$core$Char8 $tmp123 = *(&local0);
panda$core$Char8$wrapper* $tmp124;
$tmp124 = (panda$core$Char8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Char8$wrapperclass);
$tmp124->value = $tmp123;
panda$core$String* $tmp125 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp121, ((panda$core$Object*) $tmp124));
panda$core$RegularExpression$init$panda$core$String($tmp120, $tmp125);
*(&local1) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp126 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp126));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
*(&local1) = $tmp120;
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
// unreffing REF($38:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
// unreffing REF($36:panda.core.String)
panda$core$RegularExpression* $tmp136 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp136));
// unreffing regex
*(&local1) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
// unreffing REF($22:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
// unreffing REF($21:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp121));
// unreffing REF($19:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
// unreffing REF($18:panda.core.RegularExpression)
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
panda$core$RegularExpression* $tmp137 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s139, &$s140);
panda$core$String* $tmp141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp138, &$s142);
panda$core$String* $tmp143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp141, &$s144);
panda$core$String* $tmp145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp143, &$s146);
panda$core$Int64 $tmp147 = (panda$core$Int64) {1};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp137, $tmp145, $tmp147);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp148 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp148));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp137));
*(&local0) = $tmp137;
// line 177
panda$core$RegularExpression* $tmp149 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure2* $tmp150 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure2*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure2$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure2$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp150, param0);
panda$core$MutableMethod* $tmp152 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp152, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure2$$anonymous1$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp150));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp149, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp152)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp152));
// unreffing REF($20:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
// unreffing REF($17:org.pandalanguage.pandac.pandadoc.Markdown._Closure2)
panda$core$RegularExpression* $tmp153 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp153));
// unreffing p
*(&local0) = ((panda$core$RegularExpression*) NULL);
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
panda$collections$Array* $tmp168 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp168);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp169 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp169));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp168));
*(&local0) = $tmp168;
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
panda$core$String* $tmp190 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp190));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp189)));
*(&local1) = ((panda$core$String*) $tmp189);
// line 214
panda$core$RegularExpression* $tmp191 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp192 = *(&local1);
panda$core$String* $tmp193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s194, $tmp192);
panda$core$String* $tmp195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp193, &$s196);
panda$core$RegularExpression$init$panda$core$String($tmp191, $tmp195);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp191, &$s197);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp195));
// unreffing REF($54:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp193));
// unreffing REF($53:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp191));
// unreffing REF($51:panda.core.RegularExpression)
panda$core$Panda$unref$panda$core$Object$Q($tmp189);
// unreffing REF($42:panda.collections.Iterator.T)
panda$core$String* $tmp198 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
// unreffing hrDelimiter
*(&local1) = ((panda$core$String*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp180));
// unreffing REF($31:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$collections$Array* $tmp199 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
// unreffing hrDelimiters
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp168));
// unreffing REF($1:panda.collections.Array<panda.core.String>)
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
panda$collections$Array* $tmp200 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp200);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp201 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp201));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp200));
*(&local0) = $tmp200;
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
panda$collections$Array* $tmp242 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp242);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp243 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp243));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
*(&local1) = $tmp242;
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
panda$core$String* $tmp254 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp254));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp252));
*(&local2) = $tmp252;
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
panda$core$String* $tmp268 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp268));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp266));
*(&local3) = $tmp266;
// line 255
panda$core$Int64 $tmp269 = (panda$core$Int64) {4};
panda$core$Int64 $tmp270 = (panda$core$Int64) {1};
int64_t $tmp271 = $tmp269.value;
int64_t $tmp272 = $tmp270.value;
int64_t $tmp273 = $tmp271 - $tmp272;
panda$core$Int64 $tmp274 = (panda$core$Int64) {$tmp273};
*(&local4) = $tmp274;
// line 268
panda$core$RegularExpression* $tmp275 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
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
panda$core$RegularExpression* $tmp294 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp294));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp275));
*(&local5) = $tmp275;
// line 277
org$pandalanguage$pandac$pandadoc$Markdown$_Closure4* $tmp295 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure4*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure4$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure4$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp295, param0);
panda$core$MutableMethod* $tmp297 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp297, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure4$$anonymous3$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp295));
// line 277
*(&local6) = ((panda$core$Method*) NULL);
panda$core$Method* $tmp298 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp298));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Method*) $tmp297)));
*(&local6) = ((panda$core$Method*) $tmp297);
// line 281
panda$core$RegularExpression* $tmp299 = *(&local5);
panda$core$Method* $tmp300 = *(&local6);
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp299, ((panda$core$MutableMethod*) $tmp300));
// line 284
panda$core$RegularExpression* $tmp301 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
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
panda$core$RegularExpression* $tmp322 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp301));
*(&local7) = $tmp301;
// line 293
panda$core$RegularExpression* $tmp323 = *(&local7);
panda$core$Method* $tmp324 = *(&local6);
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp323, ((panda$core$MutableMethod*) $tmp324));
// line 296
panda$core$RegularExpression* $tmp325 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s327, &$s328);
panda$core$String* $tmp329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp326, &$s330);
panda$core$String* $tmp331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp329, &$s332);
panda$core$String* $tmp333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp331, &$s334);
panda$core$String* $tmp335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp333, &$s336);
panda$core$Int64 $tmp337 = *(&local4);
panda$core$Int64$wrapper* $tmp338;
$tmp338 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
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
panda$core$RegularExpression* $tmp355 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp355));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp325));
*(&local8) = $tmp325;
// line 310
panda$core$RegularExpression* $tmp356 = *(&local8);
panda$core$Method* $tmp357 = *(&local6);
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp356, ((panda$core$MutableMethod*) $tmp357));
// line 313
panda$core$RegularExpression* $tmp358 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s360, &$s361);
panda$core$String* $tmp362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp359, &$s363);
panda$core$String* $tmp364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp362, &$s365);
panda$core$String* $tmp366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp364, &$s367);
panda$core$String* $tmp368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp366, &$s369);
panda$core$Int64 $tmp370 = *(&local4);
panda$core$Int64$wrapper* $tmp371;
$tmp371 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
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
panda$core$RegularExpression* $tmp391 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp391));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp358));
*(&local9) = $tmp358;
// line 328
panda$core$RegularExpression* $tmp392 = *(&local9);
panda$core$Method* $tmp393 = *(&local6);
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp392, ((panda$core$MutableMethod*) $tmp393));
panda$core$RegularExpression* $tmp394 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp394));
// unreffing p4
*(&local9) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp389));
// unreffing REF($287:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp387));
// unreffing REF($286:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp385));
// unreffing REF($285:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp383));
// unreffing REF($284:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp381));
// unreffing REF($283:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp379));
// unreffing REF($282:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp377));
// unreffing REF($281:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp375));
// unreffing REF($280:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp373));
// unreffing REF($279:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp372));
// unreffing REF($278:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp371));
// unreffing REF($277:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp368));
// unreffing REF($275:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp366));
// unreffing REF($274:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp364));
// unreffing REF($273:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp362));
// unreffing REF($272:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp359));
// unreffing REF($271:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp358));
// unreffing REF($270:panda.core.RegularExpression)
panda$core$RegularExpression* $tmp395 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp395));
// unreffing p3
*(&local8) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp352));
// unreffing REF($254:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp350));
// unreffing REF($253:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp348));
// unreffing REF($252:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp346));
// unreffing REF($251:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp344));
// unreffing REF($250:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp342));
// unreffing REF($249:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp340));
// unreffing REF($248:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp339));
// unreffing REF($247:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp338));
// unreffing REF($246:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp335));
// unreffing REF($244:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp333));
// unreffing REF($243:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp331));
// unreffing REF($242:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp329));
// unreffing REF($241:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp326));
// unreffing REF($240:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp325));
// unreffing REF($239:panda.core.RegularExpression)
panda$core$RegularExpression* $tmp396 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp396));
// unreffing p2
*(&local7) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp317));
// unreffing REF($221:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp315));
// unreffing REF($220:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp313));
// unreffing REF($219:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp311));
// unreffing REF($218:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp309));
// unreffing REF($217:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp307));
// unreffing REF($216:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp306));
// unreffing REF($215:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp302));
// unreffing REF($213:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp301));
// unreffing REF($212:panda.core.RegularExpression)
panda$core$Method* $tmp397 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp397));
// unreffing protectHTML
*(&local6) = ((panda$core$Method*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp297));
// unreffing REF($194:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp295));
// unreffing REF($191:org.pandalanguage.pandac.pandadoc.Markdown._Closure4)
panda$core$RegularExpression* $tmp398 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp398));
// unreffing p1
*(&local5) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp289));
// unreffing REF($178:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp287));
// unreffing REF($177:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp285));
// unreffing REF($176:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp283));
// unreffing REF($175:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp281));
// unreffing REF($174:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp279));
// unreffing REF($173:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp277));
// unreffing REF($172:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp275));
// unreffing REF($170:panda.core.RegularExpression)
panda$core$String* $tmp399 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp399));
// unreffing alternationB
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp266));
// unreffing REF($153:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp265));
// unreffing REF($152:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp263));
// unreffing REF($151:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp257));
// unreffing REF($147:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp256));
// unreffing REF($146:panda.core.String)
panda$core$String* $tmp400 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp400));
// unreffing alternationA
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp252));
// unreffing REF($136:panda.core.String)
panda$collections$Array* $tmp401 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp401));
// unreffing tagsB
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
// unreffing REF($112:panda.collections.Array<panda.core.String>)
panda$collections$Array* $tmp402 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp402));
// unreffing tagsA
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp200));
// unreffing REF($1:panda.collections.Array<panda.core.String>)
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$formParagraphs$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$collections$Array* local0 = NULL;
panda$core$Int64 local1;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
panda$core$MutableString* local4 = NULL;
// line 332
panda$core$RegularExpression* $tmp403 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp403, &$s404);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp403, &$s405);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp403));
// unreffing REF($1:panda.core.RegularExpression)
// line 333
panda$core$RegularExpression* $tmp406 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp406, &$s407);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp406, &$s408);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp406));
// unreffing REF($8:panda.core.RegularExpression)
// line 335
*(&local0) = ((panda$collections$Array*) NULL);
// line 336
panda$core$Int64 $tmp409 = panda$core$MutableString$byteLength$R$panda$core$Int64(param1);
panda$core$Int64 $tmp410 = (panda$core$Int64) {0};
panda$core$Bit $tmp411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp409, $tmp410);
bool $tmp412 = $tmp411.value;
if ($tmp412) goto block1; else goto block3;
block1:;
// line 337
panda$collections$Array* $tmp413 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp413);
panda$collections$Array* $tmp414 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp414));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp413));
*(&local0) = $tmp413;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp413));
// unreffing REF($23:panda.collections.Array<panda.core.String>)
goto block2;
block3:;
// line 1
// line 339
panda$collections$Array* $tmp415 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$String* $tmp416 = panda$core$MutableString$convert$R$panda$core$String(param1);
panda$core$RegularExpression* $tmp417 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp417, &$s418);
panda$collections$Array* $tmp419 = panda$core$String$split$panda$core$RegularExpression$R$panda$collections$Array$LTpanda$core$String$GT($tmp416, $tmp417);
panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp415, ((panda$collections$CollectionView*) $tmp419));
panda$collections$Array* $tmp420 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp420));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp415));
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
panda$core$String* $tmp448 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp448));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp447)));
*(&local2) = ((panda$core$String*) $tmp447);
// line 343
org$pandalanguage$pandac$pandadoc$Protector** $tmp449 = &param0->htmlProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp450 = *$tmp449;
panda$core$String* $tmp451 = *(&local2);
$fn453 $tmp452 = ($fn453) $tmp450->$class->vtable[3];
panda$core$String* $tmp454 = $tmp452($tmp450, $tmp451);
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp455 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp455));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp454));
*(&local3) = $tmp454;
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
panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T($tmp459, $tmp460, ((panda$core$Object*) $tmp461));
goto block10;
block11:;
// line 1
// line 348
panda$core$MutableString* $tmp462 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$String* $tmp463 = *(&local2);
panda$core$MutableString$init$panda$core$String($tmp462, $tmp463);
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp464 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp464));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp462));
*(&local4) = $tmp462;
// line 349
panda$core$MutableString* $tmp465 = *(&local4);
$fn467 $tmp466 = ($fn467) param0->$class->vtable[22];
$tmp466(param0, $tmp465);
// line 350
panda$collections$Array* $tmp468 = *(&local0);
panda$core$Int64 $tmp469 = *(&local1);
panda$core$MutableString* $tmp470 = *(&local4);
panda$core$String* $tmp471 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s472, ((panda$core$Object*) $tmp470));
panda$core$String* $tmp473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp471, &$s474);
panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T($tmp468, $tmp469, ((panda$core$Object*) $tmp473));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp473));
// unreffing REF($158:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp471));
// unreffing REF($157:panda.core.String)
panda$core$MutableString* $tmp475 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp475));
// unreffing mutable
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp462));
// unreffing REF($137:panda.core.MutableString)
goto block10;
block10:;
panda$core$String* $tmp476 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp476));
// unreffing decoded
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp454));
// unreffing REF($112:panda.core.String?)
panda$core$String* $tmp477 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp477));
// unreffing paragraph
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp447);
// unreffing REF($98:panda.collections.Array.T)
goto block6;
block6:;
panda$core$Int64 $tmp478 = *(&local1);
int64_t $tmp479 = $tmp430.value;
int64_t $tmp480 = $tmp478.value;
int64_t $tmp481 = $tmp479 - $tmp480;
panda$core$Int64 $tmp482 = (panda$core$Int64) {$tmp481};
panda$core$UInt64 $tmp483 = panda$core$Int64$convert$R$panda$core$UInt64($tmp482);
if ($tmp432) goto block13; else goto block14;
block13:;
uint64_t $tmp484 = $tmp483.value;
uint64_t $tmp485 = $tmp434.value;
bool $tmp486 = $tmp484 >= $tmp485;
panda$core$Bit $tmp487 = (panda$core$Bit) {$tmp486};
bool $tmp488 = $tmp487.value;
if ($tmp488) goto block12; else goto block5;
block14:;
uint64_t $tmp489 = $tmp483.value;
uint64_t $tmp490 = $tmp434.value;
bool $tmp491 = $tmp489 > $tmp490;
panda$core$Bit $tmp492 = (panda$core$Bit) {$tmp491};
bool $tmp493 = $tmp492.value;
if ($tmp493) goto block12; else goto block5;
block12:;
int64_t $tmp494 = $tmp478.value;
int64_t $tmp495 = $tmp433.value;
int64_t $tmp496 = $tmp494 + $tmp495;
panda$core$Int64 $tmp497 = (panda$core$Int64) {$tmp496};
*(&local1) = $tmp497;
goto block4;
block5:;
// line 353
panda$core$Bit $tmp498 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$MutableString$Index$Q$GT $tmp499 = panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$init$panda$core$MutableString$Index$Q$panda$core$MutableString$Index$Q$panda$core$Bit(((panda$core$MutableString$Index$nullable) { .nonnull = false }), ((panda$core$MutableString$Index$nullable) { .nonnull = false }), $tmp498);
panda$collections$Array* $tmp500 = *(&local0);
ITable* $tmp501 = ((panda$collections$CollectionView*) $tmp500)->$class->itable;
while ($tmp501->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp501 = $tmp501->next;
}
$fn503 $tmp502 = $tmp501->methods[2];
panda$core$String* $tmp504 = $tmp502(((panda$collections$CollectionView*) $tmp500), &$s505);
panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String(param1, $tmp499, $tmp504);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp504));
// unreffing REF($224:panda.core.String)
panda$collections$Array* $tmp506 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp506));
// unreffing paragraphs
*(&local0) = ((panda$collections$Array*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doAutoLinks$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
// line 357
panda$core$RegularExpression* $tmp507 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp507, &$s508);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp507, &$s509);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp507));
// unreffing REF($1:panda.core.RegularExpression)
// line 358
panda$core$RegularExpression* $tmp510 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp510, &$s511);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp512 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp512));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp510));
*(&local0) = $tmp510;
// line 359
panda$core$RegularExpression* $tmp513 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure6* $tmp514 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure6*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure6$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure6$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp514, param0);
panda$core$MutableMethod* $tmp516 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp516, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure6$$anonymous5$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp514));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp513, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp516)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp516));
// unreffing REF($22:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp514));
// unreffing REF($19:org.pandalanguage.pandac.pandadoc.Markdown._Closure6)
panda$core$RegularExpression* $tmp517 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp517));
// unreffing email
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp510));
// unreffing REF($8:panda.core.RegularExpression)
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$unescapeSpecialChars$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
// line 370
org$pandalanguage$pandac$pandadoc$Protector** $tmp518 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp519 = *$tmp518;
panda$collections$HashMap** $tmp520 = &$tmp519->decodeMap;
panda$collections$HashMap* $tmp521 = *$tmp520;
panda$collections$Iterator* $tmp522 = panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT($tmp521);
goto block1;
block1:;
ITable* $tmp523 = $tmp522->$class->itable;
while ($tmp523->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp523 = $tmp523->next;
}
$fn525 $tmp524 = $tmp523->methods[0];
panda$core$Bit $tmp526 = $tmp524($tmp522);
bool $tmp527 = $tmp526.value;
if ($tmp527) goto block3; else goto block2;
block2:;
*(&local0) = ((panda$core$String*) NULL);
ITable* $tmp528 = $tmp522->$class->itable;
while ($tmp528->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp528 = $tmp528->next;
}
$fn530 $tmp529 = $tmp528->methods[1];
panda$core$Object* $tmp531 = $tmp529($tmp522);
panda$core$String* $tmp532 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp532));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp531)));
*(&local0) = ((panda$core$String*) $tmp531);
// line 371
org$pandalanguage$pandac$pandadoc$Protector** $tmp533 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp534 = *$tmp533;
panda$core$String* $tmp535 = *(&local0);
$fn537 $tmp536 = ($fn537) $tmp534->$class->vtable[3];
panda$core$String* $tmp538 = $tmp536($tmp534, $tmp535);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp539 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp539));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp538));
*(&local1) = $tmp538;
// line 372
panda$core$String* $tmp540 = *(&local0);
panda$core$String* $tmp541 = *(&local1);
panda$core$MutableString$replace$panda$core$String$panda$core$String(param1, $tmp540, $tmp541);
panda$core$String* $tmp542 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp542));
// unreffing plaintext
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp538));
// unreffing REF($30:panda.core.String?)
panda$core$Panda$unref$panda$core$Object$Q($tmp531);
// unreffing REF($17:panda.collections.Iterator.T)
panda$core$String* $tmp543 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp543));
// unreffing hash
*(&local0) = ((panda$core$String*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp522));
// unreffing REF($6:panda.collections.Iterator<panda.collections.HashMap.K>)
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$encodeEmail$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$String* param1) {

panda$core$MutableString* local0 = NULL;
panda$core$Char32 local1;
panda$core$Real64 local2;
// line 377
panda$core$MutableString* $tmp544 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp544);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp545 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp545));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp544));
*(&local0) = $tmp544;
// line 378
ITable* $tmp546 = ((panda$collections$Iterable*) param1)->$class->itable;
while ($tmp546->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp546 = $tmp546->next;
}
$fn548 $tmp547 = $tmp546->methods[0];
panda$collections$Iterator* $tmp549 = $tmp547(((panda$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp550 = $tmp549->$class->itable;
while ($tmp550->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp550 = $tmp550->next;
}
$fn552 $tmp551 = $tmp550->methods[0];
panda$core$Bit $tmp553 = $tmp551($tmp549);
bool $tmp554 = $tmp553.value;
if ($tmp554) goto block3; else goto block2;
block2:;
ITable* $tmp555 = $tmp549->$class->itable;
while ($tmp555->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp555 = $tmp555->next;
}
$fn557 $tmp556 = $tmp555->methods[1];
panda$core$Object* $tmp558 = $tmp556($tmp549);
*(&local1) = ((panda$core$Char32$wrapper*) $tmp558)->value;
// line 380
panda$math$Random** $tmp559 = &param0->random;
panda$math$Random* $tmp560 = *$tmp559;
ITable* $tmp561 = $tmp560->$class->itable;
while ($tmp561->$class != (panda$core$Class*) &panda$math$Random$class) {
    $tmp561 = $tmp561->next;
}
$fn563 $tmp562 = $tmp561->methods[5];
panda$core$Real64 $tmp564 = $tmp562($tmp560);
*(&local2) = $tmp564;
// line 381
panda$core$Real64 $tmp565 = *(&local2);
panda$core$Real64 $tmp566 = (panda$core$Real64) {0.45};
double $tmp567 = $tmp565.value;
double $tmp568 = $tmp566.value;
bool $tmp569 = $tmp567 < $tmp568;
panda$core$Bit $tmp570 = (panda$core$Bit) {$tmp569};
bool $tmp571 = $tmp570.value;
if ($tmp571) goto block4; else goto block6;
block4:;
// line 382
panda$core$MutableString* $tmp572 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp572, &$s573);
// line 383
panda$core$MutableString* $tmp574 = *(&local0);
panda$core$Char32 $tmp575 = *(&local1);
panda$core$Int32 $tmp576 = panda$core$Char32$convert$R$panda$core$Int32($tmp575);
panda$core$Int32$wrapper* $tmp577;
$tmp577 = (panda$core$Int32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$Int32$wrapperclass);
$tmp577->value = $tmp576;
panda$core$MutableString$append$panda$core$Object($tmp574, ((panda$core$Object*) $tmp577));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp577));
// unreffing REF($49:panda.core.Object)
// line 384
panda$core$MutableString* $tmp578 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp578, &$s579);
goto block5;
block6:;
// line 386
panda$core$Real64 $tmp580 = *(&local2);
panda$core$Real64 $tmp581 = (panda$core$Real64) {0.9};
double $tmp582 = $tmp580.value;
double $tmp583 = $tmp581.value;
bool $tmp584 = $tmp582 < $tmp583;
panda$core$Bit $tmp585 = (panda$core$Bit) {$tmp584};
bool $tmp586 = $tmp585.value;
if ($tmp586) goto block7; else goto block9;
block7:;
// line 387
panda$core$MutableString* $tmp587 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp587, &$s588);
// line 388
panda$core$MutableString* $tmp589 = *(&local0);
panda$core$Char32 $tmp590 = *(&local1);
panda$core$Int32 $tmp591 = panda$core$Char32$convert$R$panda$core$Int32($tmp590);
panda$core$String* $tmp592 = panda$core$Int32$format$panda$core$String$R$panda$core$String($tmp591, &$s593);
panda$core$MutableString$append$panda$core$String($tmp589, $tmp592);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp592));
// unreffing REF($74:panda.core.String)
// line 389
panda$core$MutableString* $tmp594 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp594, &$s595);
goto block8;
block9:;
// line 1
// line 392
panda$core$MutableString* $tmp596 = *(&local0);
panda$core$Char32 $tmp597 = *(&local1);
panda$core$MutableString$append$panda$core$Char32($tmp596, $tmp597);
goto block8;
block8:;
goto block5;
block5:;
panda$core$Panda$unref$panda$core$Object$Q($tmp558);
// unreffing REF($24:panda.collections.Iterator.T)
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp549));
// unreffing REF($14:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 395
panda$core$MutableString* $tmp598 = *(&local0);
panda$core$String* $tmp599 = panda$core$MutableString$convert$R$panda$core$String($tmp598);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp599));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp599));
// unreffing REF($99:panda.core.String)
panda$core$MutableString* $tmp600 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp600));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp544));
// unreffing REF($1:panda.core.MutableString)
return $tmp599;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doBlockQuotes$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
// line 399
panda$core$RegularExpression* $tmp601 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s603, &$s604);
panda$core$String* $tmp605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp602, &$s606);
panda$core$String* $tmp607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp605, &$s608);
panda$core$String* $tmp609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp607, &$s610);
panda$core$String* $tmp611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp609, &$s612);
panda$core$String* $tmp613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp611, &$s614);
panda$core$Int64 $tmp615 = (panda$core$Int64) {1};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp601, $tmp613, $tmp615);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp616 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp616));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp601));
*(&local0) = $tmp601;
// line 408
panda$core$RegularExpression* $tmp617 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure9* $tmp618 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure9*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure9$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure9$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp618, param0);
panda$core$MutableMethod* $tmp620 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp620, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure9$$anonymous7$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp618));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp617, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp620)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp620));
// unreffing REF($22:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp618));
// unreffing REF($19:org.pandalanguage.pandac.pandadoc.Markdown._Closure9)
panda$core$RegularExpression* $tmp621 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp621));
// unreffing p
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp613));
// unreffing REF($7:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp611));
// unreffing REF($6:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp609));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp607));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp605));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp602));
// unreffing REF($2:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp601));
// unreffing REF($1:panda.core.RegularExpression)
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous10$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(panda$collections$ListView* param0) {

panda$core$String* local0 = NULL;
panda$core$Int64 local1;
panda$core$MutableString* local2 = NULL;
// line 423
panda$core$Int64 $tmp622 = (panda$core$Int64) {1};
ITable* $tmp623 = param0->$class->itable;
while ($tmp623->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp623 = $tmp623->next;
}
$fn625 $tmp624 = $tmp623->methods[0];
panda$core$Object* $tmp626 = $tmp624(param0, $tmp622);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp627 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp627));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp626)));
*(&local0) = ((panda$core$String*) $tmp626);
// line 424
panda$core$String* $tmp628 = *(&local0);
panda$core$Int64 $tmp629 = panda$core$String$get_length$R$panda$core$Int64($tmp628);
*(&local1) = $tmp629;
// line 425
panda$core$MutableString* $tmp630 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$String* $tmp631 = *(&local0);
panda$core$MutableString$init$panda$core$String($tmp630, $tmp631);
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp632 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp632));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp630));
*(&local2) = $tmp630;
// line 426
goto block1;
block1:;
// line 427
panda$core$MutableString* $tmp633 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp633, &$s634);
// line 428
panda$core$Int64 $tmp635 = *(&local1);
panda$core$Int64 $tmp636 = (panda$core$Int64) {1};
int64_t $tmp637 = $tmp635.value;
int64_t $tmp638 = $tmp636.value;
int64_t $tmp639 = $tmp637 + $tmp638;
panda$core$Int64 $tmp640 = (panda$core$Int64) {$tmp639};
*(&local1) = $tmp640;
goto block2;
block2:;
panda$core$Int64 $tmp641 = *(&local1);
panda$core$Int64 $tmp642 = (panda$core$Int64) {4};
panda$core$Int64 $tmp643 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp641, $tmp642);
panda$core$Int64 $tmp644 = (panda$core$Int64) {0};
int64_t $tmp645 = $tmp643.value;
int64_t $tmp646 = $tmp644.value;
bool $tmp647 = $tmp645 != $tmp646;
panda$core$Bit $tmp648 = (panda$core$Bit) {$tmp647};
bool $tmp649 = $tmp648.value;
if ($tmp649) goto block1; else goto block3;
block3:;
// line 431
panda$core$MutableString* $tmp650 = *(&local2);
panda$core$String* $tmp651 = panda$core$MutableString$convert$R$panda$core$String($tmp650);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp651));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp651));
// unreffing REF($56:panda.core.String)
panda$core$MutableString* $tmp652 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp652));
// unreffing replacement
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp630));
// unreffing REF($19:panda.core.MutableString)
panda$core$String* $tmp653 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp653));
// unreffing lineSoFar
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp626);
// unreffing REF($4:panda.collections.ListView.T)
return $tmp651;

}
void org$pandalanguage$pandac$pandadoc$Markdown$detabify$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 422
panda$core$RegularExpression* $tmp654 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp654, &$s655);
panda$core$Method* $tmp657 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp657, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$$anonymous10$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Immutable*) NULL));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp654, ((panda$core$MutableMethod*) $tmp657));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp657));
// unreffing REF($4:panda.core.Method)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp654));
// unreffing REF($1:panda.core.RegularExpression)
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$outdent$panda$core$MutableString(panda$core$MutableString* param0) {

// line 437
panda$core$RegularExpression* $tmp658 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp658, &$s659);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param0, $tmp658, &$s660);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp658));
// unreffing REF($1:panda.core.RegularExpression)
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doCodeBlocks$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
// line 493
panda$core$RegularExpression* $tmp661 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s663, &$s664);
panda$core$String* $tmp665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp662, &$s666);
panda$core$String* $tmp667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp665, &$s668);
panda$core$String* $tmp669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp667, &$s670);
panda$core$String* $tmp671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp669, &$s672);
panda$core$Int64 $tmp673 = (panda$core$Int64) {1};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp661, $tmp671, $tmp673);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp674 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp674));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp661));
*(&local0) = $tmp661;
// line 501
panda$core$RegularExpression* $tmp675 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* $tmp676 = (org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$class);
org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp676, param0);
panda$core$MutableMethod* $tmp678 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp678, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$replacement$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp676));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp675, $tmp678);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp678));
// unreffing REF($21:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp676));
// unreffing REF($18:org.pandalanguage.pandac.pandadoc.Markdown.CodeReplacer)
panda$core$RegularExpression* $tmp679 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp679));
// unreffing p
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp671));
// unreffing REF($6:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp669));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp667));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp665));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp662));
// unreffing REF($2:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp661));
// unreffing REF($1:panda.core.RegularExpression)
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
panda$core$MutableString* $tmp680 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp680, &$s681);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp682 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp682));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp680));
*(&local0) = $tmp680;
// line 506
panda$core$Int64 $tmp683 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp684 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp683);
*(&local1) = $tmp684;
// line 507
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp685 = &param1->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp686 = *$tmp685;
panda$collections$Array** $tmp687 = &$tmp686->tokens;
panda$collections$Array* $tmp688 = *$tmp687;
ITable* $tmp689 = ((panda$collections$Iterable*) $tmp688)->$class->itable;
while ($tmp689->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp689 = $tmp689->next;
}
$fn691 $tmp690 = $tmp689->methods[0];
panda$collections$Iterator* $tmp692 = $tmp690(((panda$collections$Iterable*) $tmp688));
goto block1;
block1:;
ITable* $tmp693 = $tmp692->$class->itable;
while ($tmp693->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp693 = $tmp693->next;
}
$fn695 $tmp694 = $tmp693->methods[0];
panda$core$Bit $tmp696 = $tmp694($tmp692);
bool $tmp697 = $tmp696.value;
if ($tmp697) goto block3; else goto block2;
block2:;
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
ITable* $tmp698 = $tmp692->$class->itable;
while ($tmp698->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp698 = $tmp698->next;
}
$fn700 $tmp699 = $tmp698->methods[1];
panda$core$Object* $tmp701 = $tmp699($tmp692);
org$pandalanguage$pandac$Pair* $tmp702 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp702));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Pair*) $tmp701)));
*(&local2) = ((org$pandalanguage$pandac$Pair*) $tmp701);
// line 508
org$pandalanguage$pandac$Pair* $tmp703 = *(&local2);
panda$core$Object** $tmp704 = &$tmp703->second;
panda$core$Object* $tmp705 = *$tmp704;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp706;
$tmp706 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp706->value = ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp705)->value;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp707 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp708;
$tmp708 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp708->value = $tmp707;
ITable* $tmp709 = ((panda$core$Equatable*) $tmp706)->$class->itable;
while ($tmp709->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp709 = $tmp709->next;
}
$fn711 $tmp710 = $tmp709->methods[1];
panda$core$Bit $tmp712 = $tmp710(((panda$core$Equatable*) $tmp706), ((panda$core$Equatable*) $tmp708));
bool $tmp713 = $tmp712.value;
if ($tmp713) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp714 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp715;
$tmp715 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp715->value = $tmp714;
panda$core$Int64 $tmp716 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp717 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp716);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp718;
$tmp718 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp718->value = $tmp717;
ITable* $tmp719 = ((panda$core$Equatable*) $tmp715)->$class->itable;
while ($tmp719->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp719 = $tmp719->next;
}
$fn721 $tmp720 = $tmp719->methods[1];
panda$core$Bit $tmp722 = $tmp720(((panda$core$Equatable*) $tmp715), ((panda$core$Equatable*) $tmp718));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp718)));
// unreffing REF($61:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp715)));
// unreffing REF($57:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
*(&local3) = $tmp722;
goto block8;
block7:;
*(&local3) = $tmp712;
goto block8;
block8:;
panda$core$Bit $tmp723 = *(&local3);
bool $tmp724 = $tmp723.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp708)));
// unreffing REF($51:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp706)));
// unreffing REF($48:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
if ($tmp724) goto block4; else goto block5;
block4:;
// line 509
panda$core$MutableString* $tmp725 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp725, &$s726);
goto block5;
block5:;
// line 511
org$pandalanguage$pandac$Pair* $tmp727 = *(&local2);
panda$core$Object** $tmp728 = &$tmp727->second;
panda$core$Object* $tmp729 = *$tmp728;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp730;
$tmp730 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp730->value = ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp729)->value;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp731 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp732;
$tmp732 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp732->value = $tmp731;
ITable* $tmp733 = ((panda$core$Equatable*) $tmp730)->$class->itable;
while ($tmp733->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp733 = $tmp733->next;
}
$fn735 $tmp734 = $tmp733->methods[1];
panda$core$Bit $tmp736 = $tmp734(((panda$core$Equatable*) $tmp730), ((panda$core$Equatable*) $tmp732));
bool $tmp737 = $tmp736.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp732)));
// unreffing REF($96:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp730)));
// unreffing REF($93:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
if ($tmp737) goto block9; else goto block10;
block9:;
// line 512
org$pandalanguage$pandac$Pair* $tmp738 = *(&local2);
panda$core$Object** $tmp739 = &$tmp738->second;
panda$core$Object* $tmp740 = *$tmp739;
*(&local1) = ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp740)->value;
// line 513
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp741 = *(&local1);
panda$core$Int64 $tmp742 = $tmp741.$rawValue;
panda$core$Int64 $tmp743 = (panda$core$Int64) {0};
panda$core$Bit $tmp744 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp743);
bool $tmp745 = $tmp744.value;
if ($tmp745) goto block12; else goto block13;
block12:;
goto block11;
block13:;
panda$core$Int64 $tmp746 = (panda$core$Int64) {1};
panda$core$Bit $tmp747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp746);
bool $tmp748 = $tmp747.value;
if ($tmp748) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp749 = (panda$core$Int64) {2};
panda$core$Bit $tmp750 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp749);
bool $tmp751 = $tmp750.value;
if ($tmp751) goto block14; else goto block16;
block14:;
// line 518
panda$core$MutableString* $tmp752 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp752, &$s753);
goto block11;
block16:;
panda$core$Int64 $tmp754 = (panda$core$Int64) {3};
panda$core$Bit $tmp755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp754);
bool $tmp756 = $tmp755.value;
if ($tmp756) goto block17; else goto block18;
block17:;
// line 521
panda$core$MutableString* $tmp757 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp757, &$s758);
goto block11;
block18:;
panda$core$Int64 $tmp759 = (panda$core$Int64) {4};
panda$core$Bit $tmp760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp759);
bool $tmp761 = $tmp760.value;
if ($tmp761) goto block19; else goto block20;
block19:;
// line 524
panda$core$MutableString* $tmp762 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp762, &$s763);
goto block11;
block20:;
panda$core$Int64 $tmp764 = (panda$core$Int64) {5};
panda$core$Bit $tmp765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp764);
bool $tmp766 = $tmp765.value;
if ($tmp766) goto block21; else goto block22;
block21:;
// line 527
panda$core$MutableString* $tmp767 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp767, &$s768);
goto block11;
block22:;
panda$core$Int64 $tmp769 = (panda$core$Int64) {6};
panda$core$Bit $tmp770 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp769);
bool $tmp771 = $tmp770.value;
if ($tmp771) goto block23; else goto block24;
block23:;
// line 530
panda$core$MutableString* $tmp772 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp772, &$s773);
goto block11;
block24:;
panda$core$Int64 $tmp774 = (panda$core$Int64) {7};
panda$core$Bit $tmp775 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp774);
bool $tmp776 = $tmp775.value;
if ($tmp776) goto block25; else goto block26;
block25:;
// line 533
panda$core$MutableString* $tmp777 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp777, &$s778);
goto block11;
block26:;
panda$core$Int64 $tmp779 = (panda$core$Int64) {8};
panda$core$Bit $tmp780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp779);
bool $tmp781 = $tmp780.value;
if ($tmp781) goto block27; else goto block28;
block27:;
// line 536
panda$core$MutableString* $tmp782 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp782, &$s783);
goto block11;
block28:;
panda$core$Int64 $tmp784 = (panda$core$Int64) {9};
panda$core$Bit $tmp785 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp784);
bool $tmp786 = $tmp785.value;
if ($tmp786) goto block29; else goto block30;
block29:;
// line 539
panda$core$MutableString* $tmp787 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp787, &$s788);
goto block11;
block30:;
panda$core$Int64 $tmp789 = (panda$core$Int64) {10};
panda$core$Bit $tmp790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp789);
bool $tmp791 = $tmp790.value;
if ($tmp791) goto block31; else goto block32;
block31:;
// line 542
panda$core$MutableString* $tmp792 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp792, &$s793);
goto block11;
block32:;
panda$core$Int64 $tmp794 = (panda$core$Int64) {11};
panda$core$Bit $tmp795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp794);
bool $tmp796 = $tmp795.value;
if ($tmp796) goto block33; else goto block34;
block33:;
// line 545
panda$core$MutableString* $tmp797 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp797, &$s798);
goto block11;
block34:;
panda$core$Int64 $tmp799 = (panda$core$Int64) {12};
panda$core$Bit $tmp800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742, $tmp799);
bool $tmp801 = $tmp800.value;
if ($tmp801) goto block35; else goto block36;
block35:;
// line 548
panda$core$MutableString* $tmp802 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp802, &$s803);
goto block11;
block36:;
// line 551
panda$core$Bit $tmp804 = panda$core$Bit$init$builtin_bit(false);
bool $tmp805 = $tmp804.value;
if ($tmp805) goto block37; else goto block38;
block38:;
panda$core$Int64 $tmp806 = (panda$core$Int64) {551};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s807, $tmp806);
abort(); // unreachable
block37:;
goto block11;
block11:;
goto block10;
block10:;
// line 555
panda$core$MutableString* $tmp808 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$Pair* $tmp809 = *(&local2);
panda$core$Object** $tmp810 = &$tmp809->first;
panda$core$Object* $tmp811 = *$tmp810;
panda$core$String* $tmp812 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param1, ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp811)->value);
panda$core$MutableString$init$panda$core$String($tmp808, $tmp812);
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp813 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp813));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp808));
*(&local4) = $tmp808;
// line 556
panda$core$MutableString* $tmp814 = *(&local4);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp814, &$s815, &$s816);
// line 557
panda$core$MutableString* $tmp817 = *(&local4);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp817, &$s818, &$s819);
// line 558
panda$core$MutableString* $tmp820 = *(&local4);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp820, &$s821, &$s822);
// line 559
panda$core$MutableString* $tmp823 = *(&local4);
org$pandalanguage$pandac$pandadoc$Protector** $tmp824 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp825 = *$tmp824;
$fn827 $tmp826 = ($fn827) $tmp825->$class->vtable[2];
panda$core$String* $tmp828 = $tmp826($tmp825, &$s829);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp823, &$s830, $tmp828);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp828));
// unreffing REF($253:panda.core.String)
// line 560
panda$core$MutableString* $tmp831 = *(&local4);
org$pandalanguage$pandac$pandadoc$Protector** $tmp832 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp833 = *$tmp832;
$fn835 $tmp834 = ($fn835) $tmp833->$class->vtable[2];
panda$core$String* $tmp836 = $tmp834($tmp833, &$s837);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp831, &$s838, $tmp836);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp836));
// unreffing REF($263:panda.core.String)
// line 561
panda$core$MutableString* $tmp839 = *(&local4);
org$pandalanguage$pandac$pandadoc$Protector** $tmp840 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp841 = *$tmp840;
$fn843 $tmp842 = ($fn843) $tmp841->$class->vtable[2];
panda$core$String* $tmp844 = $tmp842($tmp841, &$s845);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp839, &$s846, $tmp844);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp844));
// unreffing REF($273:panda.core.String)
// line 562
panda$core$MutableString* $tmp847 = *(&local4);
org$pandalanguage$pandac$pandadoc$Protector** $tmp848 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp849 = *$tmp848;
$fn851 $tmp850 = ($fn851) $tmp849->$class->vtable[2];
panda$core$String* $tmp852 = $tmp850($tmp849, &$s853);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp847, &$s854, $tmp852);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp852));
// unreffing REF($283:panda.core.String)
// line 563
panda$core$MutableString* $tmp855 = *(&local4);
org$pandalanguage$pandac$pandadoc$Protector** $tmp856 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp857 = *$tmp856;
$fn859 $tmp858 = ($fn859) $tmp857->$class->vtable[2];
panda$core$String* $tmp860 = $tmp858($tmp857, &$s861);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp855, &$s862, $tmp860);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp860));
// unreffing REF($293:panda.core.String)
// line 564
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp863 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp864;
$tmp864 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp864->value = $tmp863;
panda$core$Int64 $tmp865 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp866 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp865);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp867;
$tmp867 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp867->value = $tmp866;
ITable* $tmp868 = ((panda$core$Equatable*) $tmp864)->$class->itable;
while ($tmp868->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp868 = $tmp868->next;
}
$fn870 $tmp869 = $tmp868->methods[1];
panda$core$Bit $tmp871 = $tmp869(((panda$core$Equatable*) $tmp864), ((panda$core$Equatable*) $tmp867));
bool $tmp872 = $tmp871.value;
if ($tmp872) goto block41; else goto block42;
block41:;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp873 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp874;
$tmp874 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp874->value = $tmp873;
panda$core$Int64 $tmp875 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp876 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp875);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp877;
$tmp877 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp877->value = $tmp876;
ITable* $tmp878 = ((panda$core$Equatable*) $tmp874)->$class->itable;
while ($tmp878->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp878 = $tmp878->next;
}
$fn880 $tmp879 = $tmp878->methods[1];
panda$core$Bit $tmp881 = $tmp879(((panda$core$Equatable*) $tmp874), ((panda$core$Equatable*) $tmp877));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp877)));
// unreffing REF($314:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp874)));
// unreffing REF($310:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
*(&local5) = $tmp881;
goto block43;
block42:;
*(&local5) = $tmp871;
goto block43;
block43:;
panda$core$Bit $tmp882 = *(&local5);
bool $tmp883 = $tmp882.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp867)));
// unreffing REF($304:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp864)));
// unreffing REF($300:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
if ($tmp883) goto block39; else goto block40;
block39:;
// line 566
panda$core$MutableString* $tmp884 = *(&local0);
org$pandalanguage$pandac$Pair* $tmp885 = *(&local2);
panda$core$Object** $tmp886 = &$tmp885->first;
panda$core$Object* $tmp887 = *$tmp886;
org$pandalanguage$pandac$parser$Token$Kind $tmp888 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp887)->value.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp889;
$tmp889 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp889->value = $tmp888;
panda$core$String* $tmp890 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s891, ((panda$core$Object*) $tmp889));
panda$core$String* $tmp892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp890, &$s893);
panda$core$MutableString$append$panda$core$String($tmp884, $tmp892);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp892));
// unreffing REF($346:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp890));
// unreffing REF($345:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp889));
// unreffing REF($344:panda.core.Object)
goto block40;
block40:;
// line 568
panda$core$MutableString* $tmp894 = *(&local0);
panda$core$MutableString* $tmp895 = *(&local4);
panda$core$MutableString$append$panda$core$Object($tmp894, ((panda$core$Object*) $tmp895));
// line 569
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp896 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp897;
$tmp897 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp897->value = $tmp896;
panda$core$Int64 $tmp898 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp899 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp898);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp900;
$tmp900 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp900->value = $tmp899;
ITable* $tmp901 = ((panda$core$Equatable*) $tmp897)->$class->itable;
while ($tmp901->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp901 = $tmp901->next;
}
$fn903 $tmp902 = $tmp901->methods[1];
panda$core$Bit $tmp904 = $tmp902(((panda$core$Equatable*) $tmp897), ((panda$core$Equatable*) $tmp900));
bool $tmp905 = $tmp904.value;
if ($tmp905) goto block46; else goto block47;
block46:;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp906 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp907;
$tmp907 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp907->value = $tmp906;
panda$core$Int64 $tmp908 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp909 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp908);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp910;
$tmp910 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp910->value = $tmp909;
ITable* $tmp911 = ((panda$core$Equatable*) $tmp907)->$class->itable;
while ($tmp911->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp911 = $tmp911->next;
}
$fn913 $tmp912 = $tmp911->methods[1];
panda$core$Bit $tmp914 = $tmp912(((panda$core$Equatable*) $tmp907), ((panda$core$Equatable*) $tmp910));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp910)));
// unreffing REF($379:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp907)));
// unreffing REF($375:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
*(&local6) = $tmp914;
goto block48;
block47:;
*(&local6) = $tmp904;
goto block48;
block48:;
panda$core$Bit $tmp915 = *(&local6);
bool $tmp916 = $tmp915.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp900)));
// unreffing REF($369:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp897)));
// unreffing REF($365:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
if ($tmp916) goto block44; else goto block45;
block44:;
// line 571
panda$core$MutableString* $tmp917 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp917, &$s918);
goto block45;
block45:;
panda$core$MutableString* $tmp919 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp919));
// unreffing s
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp812));
// unreffing REF($230:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp808));
// unreffing REF($224:panda.core.MutableString)
panda$core$Panda$unref$panda$core$Object$Q($tmp701);
// unreffing REF($34:panda.collections.Iterator.T)
org$pandalanguage$pandac$Pair* $tmp920 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp920));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp692));
// unreffing REF($23:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 574
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp921 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp922;
$tmp922 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp922->value = $tmp921;
panda$core$Int64 $tmp923 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp924 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp923);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp925;
$tmp925 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp925->value = $tmp924;
ITable* $tmp926 = ((panda$core$Equatable*) $tmp922)->$class->itable;
while ($tmp926->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp926 = $tmp926->next;
}
$fn928 $tmp927 = $tmp926->methods[1];
panda$core$Bit $tmp929 = $tmp927(((panda$core$Equatable*) $tmp922), ((panda$core$Equatable*) $tmp925));
bool $tmp930 = $tmp929.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp925)));
// unreffing REF($434:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp922)));
// unreffing REF($430:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
if ($tmp930) goto block49; else goto block50;
block49:;
// line 575
panda$core$MutableString* $tmp931 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp931, &$s932);
goto block50;
block50:;
// line 577
panda$core$MutableString* $tmp933 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp933, &$s934);
// line 578
panda$core$MutableString* $tmp935 = *(&local0);
panda$core$String* $tmp936 = panda$core$MutableString$finish$R$panda$core$String($tmp935);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp936));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp936));
// unreffing REF($454:panda.core.String)
panda$core$MutableString* $tmp937 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp937));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp680));
// unreffing REF($1:panda.core.MutableString)
return $tmp936;

}
void org$pandalanguage$pandac$pandadoc$Markdown$syntaxHighlight$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$core$Bit local2;
panda$core$Bit local3;
panda$core$Bit local4;
org$pandalanguage$pandac$parser$Token local5;
// line 582
panda$threads$MessageQueue** $tmp938 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp939 = *$tmp938;
panda$threads$MessageQueue$clear($tmp939);
// line 583
panda$core$String* $tmp940 = panda$core$MutableString$convert$R$panda$core$String(param1);
panda$core$String* $tmp941 = panda$core$String$get_trimmed$R$panda$core$String($tmp940);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp942 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp942));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp941));
*(&local0) = $tmp941;
// line 584
org$pandalanguage$pandac$parser$Parser** $tmp943 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp944 = *$tmp943;
panda$io$File** $tmp945 = &param0->source;
panda$io$File* $tmp946 = *$tmp945;
panda$core$String* $tmp947 = *(&local0);
org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String($tmp944, $tmp946, $tmp947);
// line 585
org$pandalanguage$pandac$parser$Parser** $tmp948 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp949 = *$tmp948;
org$pandalanguage$pandac$ASTNode* $tmp950 = org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q($tmp949);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp951 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp951));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp950));
*(&local1) = $tmp950;
// line 586
org$pandalanguage$pandac$ASTNode* $tmp952 = *(&local1);
panda$core$Bit $tmp953 = panda$core$Bit$init$builtin_bit($tmp952 != NULL);
bool $tmp954 = $tmp953.value;
if ($tmp954) goto block3; else goto block4;
block3:;
panda$threads$MessageQueue** $tmp955 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp956 = *$tmp955;
panda$core$Int64 $tmp957 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp956);
panda$core$Int64 $tmp958 = (panda$core$Int64) {0};
panda$core$Bit $tmp959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp957, $tmp958);
*(&local2) = $tmp959;
goto block5;
block4:;
*(&local2) = $tmp953;
goto block5;
block5:;
panda$core$Bit $tmp960 = *(&local2);
bool $tmp961 = $tmp960.value;
if ($tmp961) goto block1; else goto block2;
block1:;
// line 587
panda$core$Bit $tmp962 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$MutableString$Index$Q$GT $tmp963 = panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$init$panda$core$MutableString$Index$Q$panda$core$MutableString$Index$Q$panda$core$Bit(((panda$core$MutableString$Index$nullable) { .nonnull = false }), ((panda$core$MutableString$Index$nullable) { .nonnull = false }), $tmp962);
org$pandalanguage$pandac$parser$Parser** $tmp964 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp965 = *$tmp964;
$fn967 $tmp966 = ($fn967) param0->$class->vtable[16];
panda$core$String* $tmp968 = $tmp966(param0, $tmp965);
panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String(param1, $tmp963, $tmp968);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp968));
// unreffing REF($58:panda.core.String)
// line 588
org$pandalanguage$pandac$ASTNode* $tmp969 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp969));
// unreffing file
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp950));
// unreffing REF($25:org.pandalanguage.pandac.ASTNode?)
panda$core$String* $tmp970 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp970));
// unreffing text
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp941));
// unreffing REF($7:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp940));
// unreffing REF($6:panda.core.String)
return;
block2:;
// line 591
panda$threads$MessageQueue** $tmp971 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp972 = *$tmp971;
panda$threads$MessageQueue$clear($tmp972);
// line 592
org$pandalanguage$pandac$parser$Parser** $tmp973 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp974 = *$tmp973;
panda$io$File** $tmp975 = &param0->source;
panda$io$File* $tmp976 = *$tmp975;
panda$core$String* $tmp977 = *(&local0);
org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String($tmp974, $tmp976, $tmp977);
// line 593
goto block6;
block6:;
org$pandalanguage$pandac$parser$Parser** $tmp978 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp979 = *$tmp978;
org$pandalanguage$pandac$parser$Token $tmp980 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token($tmp979);
org$pandalanguage$pandac$parser$Token$Kind $tmp981 = $tmp980.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp982;
$tmp982 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp982->value = $tmp981;
panda$core$Int64 $tmp983 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp984 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp983);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp985;
$tmp985 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp985->value = $tmp984;
ITable* $tmp986 = ((panda$core$Equatable*) $tmp982)->$class->itable;
while ($tmp986->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp986 = $tmp986->next;
}
$fn988 $tmp987 = $tmp986->methods[1];
panda$core$Bit $tmp989 = $tmp987(((panda$core$Equatable*) $tmp982), ((panda$core$Equatable*) $tmp985));
bool $tmp990 = $tmp989.value;
if ($tmp990) goto block9; else goto block10;
block9:;
panda$threads$MessageQueue** $tmp991 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp992 = *$tmp991;
panda$core$Int64 $tmp993 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp992);
panda$core$Int64 $tmp994 = (panda$core$Int64) {0};
panda$core$Bit $tmp995 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp993, $tmp994);
*(&local3) = $tmp995;
goto block11;
block10:;
*(&local3) = $tmp989;
goto block11;
block11:;
panda$core$Bit $tmp996 = *(&local3);
bool $tmp997 = $tmp996.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp985)));
// unreffing REF($106:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp982)));
// unreffing REF($102:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp997) goto block7; else goto block8;
block7:;
// line 594
org$pandalanguage$pandac$parser$Parser** $tmp998 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp999 = *$tmp998;
org$pandalanguage$pandac$ASTNode* $tmp1000 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q($tmp999);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1000));
// unreffing REF($133:org.pandalanguage.pandac.ASTNode?)
goto block6;
block8:;
// line 596
panda$threads$MessageQueue** $tmp1001 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1002 = *$tmp1001;
panda$core$Int64 $tmp1003 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp1002);
panda$core$Int64 $tmp1004 = (panda$core$Int64) {0};
panda$core$Bit $tmp1005 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1003, $tmp1004);
bool $tmp1006 = $tmp1005.value;
if ($tmp1006) goto block12; else goto block13;
block12:;
// line 597
panda$core$Bit $tmp1007 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$MutableString$Index$Q$GT $tmp1008 = panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$init$panda$core$MutableString$Index$Q$panda$core$MutableString$Index$Q$panda$core$Bit(((panda$core$MutableString$Index$nullable) { .nonnull = false }), ((panda$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1007);
org$pandalanguage$pandac$parser$Parser** $tmp1009 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1010 = *$tmp1009;
$fn1012 $tmp1011 = ($fn1012) param0->$class->vtable[16];
panda$core$String* $tmp1013 = $tmp1011(param0, $tmp1010);
panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String(param1, $tmp1008, $tmp1013);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1013));
// unreffing REF($153:panda.core.String)
// line 598
org$pandalanguage$pandac$ASTNode* $tmp1014 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1014));
// unreffing file
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp950));
// unreffing REF($25:org.pandalanguage.pandac.ASTNode?)
panda$core$String* $tmp1015 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1015));
// unreffing text
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp941));
// unreffing REF($7:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp940));
// unreffing REF($6:panda.core.String)
return;
block13:;
// line 601
panda$threads$MessageQueue** $tmp1016 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1017 = *$tmp1016;
panda$threads$MessageQueue$clear($tmp1017);
// line 602
org$pandalanguage$pandac$parser$Parser** $tmp1018 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1019 = *$tmp1018;
panda$io$File** $tmp1020 = &param0->source;
panda$io$File* $tmp1021 = *$tmp1020;
panda$core$String* $tmp1022 = *(&local0);
org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String($tmp1019, $tmp1021, $tmp1022);
// line 603
goto block14;
block14:;
org$pandalanguage$pandac$parser$Parser** $tmp1023 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1024 = *$tmp1023;
org$pandalanguage$pandac$parser$Token $tmp1025 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token($tmp1024);
org$pandalanguage$pandac$parser$Token$Kind $tmp1026 = $tmp1025.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1027;
$tmp1027 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1027->value = $tmp1026;
panda$core$Int64 $tmp1028 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp1029 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1028);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1030;
$tmp1030 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1030->value = $tmp1029;
ITable* $tmp1031 = ((panda$core$Equatable*) $tmp1027)->$class->itable;
while ($tmp1031->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1031 = $tmp1031->next;
}
$fn1033 $tmp1032 = $tmp1031->methods[1];
panda$core$Bit $tmp1034 = $tmp1032(((panda$core$Equatable*) $tmp1027), ((panda$core$Equatable*) $tmp1030));
bool $tmp1035 = $tmp1034.value;
if ($tmp1035) goto block17; else goto block18;
block17:;
panda$threads$MessageQueue** $tmp1036 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1037 = *$tmp1036;
panda$core$Int64 $tmp1038 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp1037);
panda$core$Int64 $tmp1039 = (panda$core$Int64) {0};
panda$core$Bit $tmp1040 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1038, $tmp1039);
*(&local4) = $tmp1040;
goto block19;
block18:;
*(&local4) = $tmp1034;
goto block19;
block19:;
panda$core$Bit $tmp1041 = *(&local4);
bool $tmp1042 = $tmp1041.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1030)));
// unreffing REF($201:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1027)));
// unreffing REF($197:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp1042) goto block15; else goto block16;
block15:;
// line 604
org$pandalanguage$pandac$parser$Parser** $tmp1043 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1044 = *$tmp1043;
org$pandalanguage$pandac$ASTNode* $tmp1045 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q($tmp1044);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1045));
// unreffing REF($228:org.pandalanguage.pandac.ASTNode?)
goto block14;
block16:;
// line 606
panda$threads$MessageQueue** $tmp1046 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1047 = *$tmp1046;
panda$core$Int64 $tmp1048 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp1047);
panda$core$Int64 $tmp1049 = (panda$core$Int64) {0};
panda$core$Bit $tmp1050 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1048, $tmp1049);
bool $tmp1051 = $tmp1050.value;
if ($tmp1051) goto block20; else goto block21;
block20:;
// line 607
panda$core$Bit $tmp1052 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$MutableString$Index$Q$GT $tmp1053 = panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$init$panda$core$MutableString$Index$Q$panda$core$MutableString$Index$Q$panda$core$Bit(((panda$core$MutableString$Index$nullable) { .nonnull = false }), ((panda$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1052);
org$pandalanguage$pandac$parser$Parser** $tmp1054 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1055 = *$tmp1054;
$fn1057 $tmp1056 = ($fn1057) param0->$class->vtable[16];
panda$core$String* $tmp1058 = $tmp1056(param0, $tmp1055);
panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String(param1, $tmp1053, $tmp1058);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1058));
// unreffing REF($248:panda.core.String)
// line 608
org$pandalanguage$pandac$ASTNode* $tmp1059 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1059));
// unreffing file
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp950));
// unreffing REF($25:org.pandalanguage.pandac.ASTNode?)
panda$core$String* $tmp1060 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1060));
// unreffing text
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp941));
// unreffing REF($7:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp940));
// unreffing REF($6:panda.core.String)
return;
block21:;
// line 611
panda$threads$MessageQueue** $tmp1061 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1062 = *$tmp1061;
panda$threads$MessageQueue$clear($tmp1062);
// line 612
org$pandalanguage$pandac$parser$Parser** $tmp1063 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1064 = *$tmp1063;
panda$io$File** $tmp1065 = &param0->source;
panda$io$File* $tmp1066 = *$tmp1065;
panda$core$String* $tmp1067 = *(&local0);
org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String($tmp1064, $tmp1066, $tmp1067);
// line 613
goto block22;
block22:;
// line 614
org$pandalanguage$pandac$parser$Parser** $tmp1068 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1069 = *$tmp1068;
org$pandalanguage$pandac$parser$Token $tmp1070 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token($tmp1069);
*(&local5) = $tmp1070;
// line 615
org$pandalanguage$pandac$parser$Token $tmp1071 = *(&local5);
org$pandalanguage$pandac$parser$Token$Kind $tmp1072 = $tmp1071.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1073;
$tmp1073 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1073->value = $tmp1072;
panda$core$Int64 $tmp1074 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp1075 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1074);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1076;
$tmp1076 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1076->value = $tmp1075;
ITable* $tmp1077 = ((panda$core$Equatable*) $tmp1073)->$class->itable;
while ($tmp1077->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1077 = $tmp1077->next;
}
$fn1079 $tmp1078 = $tmp1077->methods[0];
panda$core$Bit $tmp1080 = $tmp1078(((panda$core$Equatable*) $tmp1073), ((panda$core$Equatable*) $tmp1076));
bool $tmp1081 = $tmp1080.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1076)));
// unreffing REF($300:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1073)));
// unreffing REF($296:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp1081) goto block24; else goto block25;
block24:;
// line 616
goto block23;
block25:;
goto block22;
block23:;
// line 619
panda$core$Bit $tmp1082 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$MutableString$Index$Q$GT $tmp1083 = panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$init$panda$core$MutableString$Index$Q$panda$core$MutableString$Index$Q$panda$core$Bit(((panda$core$MutableString$Index$nullable) { .nonnull = false }), ((panda$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1082);
org$pandalanguage$pandac$parser$Parser** $tmp1084 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1085 = *$tmp1084;
$fn1087 $tmp1086 = ($fn1087) param0->$class->vtable[16];
panda$core$String* $tmp1088 = $tmp1086(param0, $tmp1085);
panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String(param1, $tmp1083, $tmp1088);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1088));
// unreffing REF($320:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1089 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1089));
// unreffing file
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp950));
// unreffing REF($25:org.pandalanguage.pandac.ASTNode?)
panda$core$String* $tmp1090 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1090));
// unreffing text
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp941));
// unreffing REF($7:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp940));
// unreffing REF($6:panda.core.String)
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$encodeCode$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 625
panda$core$RegularExpression* $tmp1091 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1091, &$s1092);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1091, &$s1093);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1091));
// unreffing REF($1:panda.core.RegularExpression)
// line 626
$fn1095 $tmp1094 = ($fn1095) param0->$class->vtable[17];
$tmp1094(param0, param1);
// line 627
panda$core$MutableString$replace$panda$core$String$panda$core$String(param1, &$s1096, &$s1097);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doLists$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$Int64 local0;
panda$core$String* local1 = NULL;
panda$core$RegularExpression* local2 = NULL;
panda$core$RegularExpression* local3 = NULL;
// line 631
panda$core$Int64 $tmp1098 = (panda$core$Int64) {4};
panda$core$Int64 $tmp1099 = (panda$core$Int64) {1};
int64_t $tmp1100 = $tmp1098.value;
int64_t $tmp1101 = $tmp1099.value;
int64_t $tmp1102 = $tmp1100 - $tmp1101;
panda$core$Int64 $tmp1103 = (panda$core$Int64) {$tmp1102};
*(&local0) = $tmp1103;
// line 633
panda$core$Int64 $tmp1104 = *(&local0);
panda$core$Int64$wrapper* $tmp1105;
$tmp1105 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp1105->value = $tmp1104;
panda$core$String* $tmp1106 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1107, ((panda$core$Object*) $tmp1105));
panda$core$String* $tmp1108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1106, &$s1109);
panda$core$String* $tmp1110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1108, &$s1111);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp1112 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1112));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1110));
*(&local1) = $tmp1110;
// line 656
panda$core$Int64* $tmp1113 = &param0->listLevel;
panda$core$Int64 $tmp1114 = *$tmp1113;
panda$core$Int64 $tmp1115 = (panda$core$Int64) {0};
int64_t $tmp1116 = $tmp1114.value;
int64_t $tmp1117 = $tmp1115.value;
bool $tmp1118 = $tmp1116 > $tmp1117;
panda$core$Bit $tmp1119 = (panda$core$Bit) {$tmp1118};
bool $tmp1120 = $tmp1119.value;
if ($tmp1120) goto block1; else goto block3;
block1:;
// line 657
panda$core$RegularExpression* $tmp1121 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1122 = *(&local1);
panda$core$String* $tmp1123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1124, $tmp1122);
panda$core$String* $tmp1125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1123, &$s1126);
panda$core$RegularExpression$init$panda$core$String($tmp1121, $tmp1125);
*(&local2) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1127 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1127));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1121));
*(&local2) = $tmp1121;
// line 658
panda$core$RegularExpression* $tmp1128 = *(&local2);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure12* $tmp1129 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure12*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure12$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure12$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1129, param0);
panda$core$MutableMethod* $tmp1131 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1131, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure12$$anonymous11$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp1129));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1128, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1131)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1131));
// unreffing REF($49:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1129));
// unreffing REF($46:org.pandalanguage.pandac.pandadoc.Markdown._Closure12)
panda$core$RegularExpression* $tmp1132 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1132));
// unreffing matchStartOfLine
*(&local2) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1125));
// unreffing REF($35:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1123));
// unreffing REF($34:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1121));
// unreffing REF($32:panda.core.RegularExpression)
goto block2;
block3:;
// line 1
// line 684
panda$core$RegularExpression* $tmp1133 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1134 = *(&local1);
panda$core$String* $tmp1135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1136, $tmp1134);
panda$core$RegularExpression$init$panda$core$String($tmp1133, $tmp1135);
*(&local3) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1137 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1137));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1133));
*(&local3) = $tmp1133;
// line 685
panda$core$RegularExpression* $tmp1138 = *(&local3);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure14* $tmp1139 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure14*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure14$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure14$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1139, param0);
panda$core$MutableMethod* $tmp1141 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1141, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure14$$anonymous13$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp1139));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1138, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1141)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1141));
// unreffing REF($94:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1139));
// unreffing REF($91:org.pandalanguage.pandac.pandadoc.Markdown._Closure14)
panda$core$RegularExpression* $tmp1142 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1142));
// unreffing matchStartOfLine
*(&local3) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1135));
// unreffing REF($80:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1133));
// unreffing REF($78:panda.core.RegularExpression)
goto block2;
block2:;
panda$core$String* $tmp1143 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1143));
// unreffing wholeList
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1110));
// unreffing REF($13:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1108));
// unreffing REF($12:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1106));
// unreffing REF($11:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1105));
// unreffing REF($10:panda.core.Object)
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$processListItems$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$String* param1) {

panda$core$String* local0 = NULL;
panda$core$RegularExpression* local1 = NULL;
// line 726
panda$core$Int64* $tmp1144 = &param0->listLevel;
panda$core$Int64 $tmp1145 = *$tmp1144;
panda$core$Int64 $tmp1146 = (panda$core$Int64) {1};
int64_t $tmp1147 = $tmp1145.value;
int64_t $tmp1148 = $tmp1146.value;
int64_t $tmp1149 = $tmp1147 + $tmp1148;
panda$core$Int64 $tmp1150 = (panda$core$Int64) {$tmp1149};
panda$core$Int64* $tmp1151 = &param0->listLevel;
*$tmp1151 = $tmp1150;
// line 729
panda$core$RegularExpression* $tmp1152 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1152, &$s1153);
panda$core$String* $tmp1154 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(param1, $tmp1152, &$s1155);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp1156 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1156));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1154));
*(&local0) = $tmp1154;
// line 731
panda$core$RegularExpression* $tmp1157 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1159, &$s1160);
panda$core$String* $tmp1161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1158, &$s1162);
panda$core$Int64 $tmp1163 = (panda$core$Int64) {1};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1157, $tmp1161, $tmp1163);
*(&local1) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1164 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1164));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1157));
*(&local1) = $tmp1157;
// line 736
panda$core$String* $tmp1165 = *(&local0);
panda$core$RegularExpression* $tmp1166 = *(&local1);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure16* $tmp1167 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure16*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure16$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure16$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1167, param0);
panda$core$MutableMethod* $tmp1169 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1169, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure16$$anonymous15$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1167));
panda$core$String* $tmp1170 = panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String($tmp1165, $tmp1166, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1169)));
panda$core$String* $tmp1171 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1171));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1170));
*(&local0) = $tmp1170;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1170));
// unreffing REF($45:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1169));
// unreffing REF($40:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1167));
// unreffing REF($37:org.pandalanguage.pandac.pandadoc.Markdown._Closure16)
// line 753
panda$core$Int64* $tmp1172 = &param0->listLevel;
panda$core$Int64 $tmp1173 = *$tmp1172;
panda$core$Int64 $tmp1174 = (panda$core$Int64) {1};
int64_t $tmp1175 = $tmp1173.value;
int64_t $tmp1176 = $tmp1174.value;
int64_t $tmp1177 = $tmp1175 - $tmp1176;
panda$core$Int64 $tmp1178 = (panda$core$Int64) {$tmp1177};
panda$core$Int64* $tmp1179 = &param0->listLevel;
*$tmp1179 = $tmp1178;
// line 754
panda$core$String* $tmp1180 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1180));
panda$core$RegularExpression* $tmp1181 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1181));
// unreffing p
*(&local1) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1161));
// unreffing REF($24:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1158));
// unreffing REF($23:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1157));
// unreffing REF($22:panda.core.RegularExpression)
panda$core$String* $tmp1182 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1182));
// unreffing list
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1154));
// unreffing REF($13:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1152));
// unreffing REF($11:panda.core.RegularExpression)
return $tmp1180;

}
panda$core$Bit org$pandalanguage$pandac$pandadoc$Markdown$hasParagraphBreak$panda$core$MutableString$R$panda$core$Bit(panda$core$MutableString* param0) {

// line 759
panda$core$Bit $tmp1183 = panda$core$MutableString$contains$panda$core$String$R$panda$core$Bit(param0, &$s1184);
return $tmp1183;

}
panda$core$Bit org$pandalanguage$pandac$pandadoc$Markdown$isEmptyString$panda$core$String$Q$R$panda$core$Bit(panda$core$String* param0) {

panda$core$Bit local0;
// line 764
panda$core$Bit $tmp1185 = panda$core$Bit$init$builtin_bit(param0 == NULL);
bool $tmp1186 = $tmp1185.value;
if ($tmp1186) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1185;
goto block3;
block2:;
panda$core$Bit $tmp1187 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(param0, &$s1188);
*(&local0) = $tmp1187;
goto block3;
block3:;
panda$core$Bit $tmp1189 = *(&local0);
return $tmp1189;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doHeaders$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
// line 769
panda$core$RegularExpression* $tmp1190 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1190, &$s1191);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure18* $tmp1192 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure18*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure18$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure18$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1192, param0);
panda$core$MutableMethod* $tmp1194 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1194, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure18$$anonymous17$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1192));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1190, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1194)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1194));
// unreffing REF($6:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1192));
// unreffing REF($3:org.pandalanguage.pandac.pandadoc.Markdown._Closure18)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1190));
// unreffing REF($1:panda.core.RegularExpression)
// line 774
panda$core$RegularExpression* $tmp1195 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1195, &$s1196);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure20* $tmp1197 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure20*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure20$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure20$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1197, param0);
panda$core$MutableMethod* $tmp1199 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1199, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure20$$anonymous19$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1197));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1195, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1199)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1199));
// unreffing REF($27:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1197));
// unreffing REF($24:org.pandalanguage.pandac.pandadoc.Markdown._Closure20)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1195));
// unreffing REF($22:panda.core.RegularExpression)
// line 781
panda$core$RegularExpression* $tmp1200 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$Int64 $tmp1201 = (panda$core$Int64) {1};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1200, &$s1202, $tmp1201);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1203 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1203));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1200));
*(&local0) = $tmp1200;
// line 782
panda$core$RegularExpression* $tmp1204 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure22* $tmp1205 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure22*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure22$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure22$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1205, param0);
panda$core$MutableMethod* $tmp1207 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1207, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure22$$anonymous21$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp1205));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1204, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1207)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1207));
// unreffing REF($58:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1205));
// unreffing REF($55:org.pandalanguage.pandac.pandadoc.Markdown._Closure22)
panda$core$RegularExpression* $tmp1208 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1208));
// unreffing p
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1200));
// unreffing REF($43:panda.core.RegularExpression)
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$runSpanGamut$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 793
$fn1210 $tmp1209 = ($fn1210) param0->$class->vtable[24];
$tmp1209(param0, param1);
// line 794
$fn1212 $tmp1211 = ($fn1212) param0->$class->vtable[29];
$tmp1211(param0, param1);
// line 795
$fn1214 $tmp1213 = ($fn1214) param0->$class->vtable[3];
$tmp1213(param0, param1);
// line 797
$fn1216 $tmp1215 = ($fn1216) param0->$class->vtable[25];
$tmp1215(param0, param1);
// line 798
$fn1218 $tmp1217 = ($fn1218) param0->$class->vtable[26];
$tmp1217(param0, param1);
// line 799
$fn1220 $tmp1219 = ($fn1220) param0->$class->vtable[10];
$tmp1219(param0, param1);
// line 805
$fn1222 $tmp1221 = ($fn1222) param0->$class->vtable[24];
$tmp1221(param0, param1);
// line 807
$fn1224 $tmp1223 = ($fn1224) param0->$class->vtable[28];
$tmp1223(param0, param1);
// line 808
$fn1226 $tmp1225 = ($fn1226) param0->$class->vtable[27];
$tmp1225(param0, param1);
// line 810
panda$core$RegularExpression* $tmp1227 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1227, &$s1228);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1227, &$s1229);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1227));
// unreffing REF($28:panda.core.RegularExpression)
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$nestedTagsRegex$panda$core$Int64$R$panda$core$String(panda$core$Int64 param0) {

// line 820
panda$core$Int64 $tmp1230 = (panda$core$Int64) {0};
panda$core$Bit $tmp1231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(param0, $tmp1230);
bool $tmp1232 = $tmp1231.value;
if ($tmp1232) goto block1; else goto block3;
block1:;
// line 821
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1233));
return &$s1234;
block3:;
// line 1
// line 824
panda$core$Int64 $tmp1235 = (panda$core$Int64) {1};
int64_t $tmp1236 = param0.value;
int64_t $tmp1237 = $tmp1235.value;
int64_t $tmp1238 = $tmp1236 - $tmp1237;
panda$core$Int64 $tmp1239 = (panda$core$Int64) {$tmp1238};
panda$core$String* $tmp1240 = org$pandalanguage$pandac$pandadoc$Markdown$nestedTagsRegex$panda$core$Int64$R$panda$core$String($tmp1239);
panda$core$String* $tmp1241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1242, $tmp1240);
panda$core$String* $tmp1243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1241, &$s1244);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1243));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1243));
// unreffing REF($18:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1241));
// unreffing REF($17:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1240));
// unreffing REF($16:panda.core.String)
return $tmp1243;
block2:;
panda$core$Bit $tmp1245 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1246 = $tmp1245.value;
if ($tmp1246) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp1247 = (panda$core$Int64) {819};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1248, $tmp1247, &$s1249);
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
panda$collections$Array* $tmp1250 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1250);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1251 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1251));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1250));
*(&local0) = $tmp1250;
// line 830
panda$core$Int64 $tmp1252 = (panda$core$Int64) {6};
panda$core$String* $tmp1253 = org$pandalanguage$pandac$pandadoc$Markdown$nestedTagsRegex$panda$core$Int64$R$panda$core$String($tmp1252);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp1254 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1254));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1253));
*(&local1) = $tmp1253;
// line 832
panda$core$RegularExpression* $tmp1255 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1257, &$s1258);
panda$core$String* $tmp1259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1256, &$s1260);
panda$core$String* $tmp1261 = *(&local1);
panda$core$String* $tmp1262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1259, $tmp1261);
panda$core$Int64 $tmp1263 = (panda$core$Int64) {2};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1255, $tmp1262, $tmp1263);
*(&local2) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1264 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1264));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1255));
*(&local2) = $tmp1255;
// line 840
panda$core$RegularExpression* $tmp1265 = *(&local2);
panda$core$Matcher* $tmp1266 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher($tmp1265, param1);
*(&local3) = ((panda$core$Matcher*) NULL);
panda$core$Matcher* $tmp1267 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1267));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1266));
*(&local3) = $tmp1266;
// line 841
panda$core$String$Index $tmp1268 = panda$core$String$get_start$R$panda$core$String$Index(param1);
*(&local4) = $tmp1268;
// line 842
goto block1;
block1:;
panda$core$Matcher* $tmp1269 = *(&local3);
panda$core$Bit $tmp1270 = panda$core$Matcher$find$R$panda$core$Bit($tmp1269);
bool $tmp1271 = $tmp1270.value;
if ($tmp1271) goto block2; else goto block3;
block2:;
// line 843
panda$core$String$Index $tmp1272 = *(&local4);
panda$core$String$Index$wrapper* $tmp1273;
$tmp1273 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp1273->value = $tmp1272;
panda$core$Matcher* $tmp1274 = *(&local3);
panda$core$String$Index $tmp1275;
panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1275, $tmp1274);
panda$core$String$Index$wrapper* $tmp1276;
$tmp1276 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp1276->value = $tmp1275;
ITable* $tmp1277 = ((panda$core$Comparable*) $tmp1273)->$class->itable;
while ($tmp1277->$class != (panda$core$Class*) &panda$core$Comparable$class) {
    $tmp1277 = $tmp1277->next;
}
$fn1279 $tmp1278 = $tmp1277->methods[1];
panda$core$Bit $tmp1280 = $tmp1278(((panda$core$Comparable*) $tmp1273), ((panda$core$Comparable*) $tmp1276));
bool $tmp1281 = $tmp1280.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp1276)));
// unreffing REF($61:panda.core.Comparable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp1273)));
// unreffing REF($57:panda.core.Comparable<panda.core.String.Index>)
if ($tmp1281) goto block4; else goto block5;
block4:;
// line 844
panda$collections$Array* $tmp1282 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1283 = (org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class);
panda$core$Int64 $tmp1284 = (panda$core$Int64) {1};
panda$core$String$Index $tmp1285 = *(&local4);
panda$core$Matcher* $tmp1286 = *(&local3);
panda$core$String$Index $tmp1287;
panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1287, $tmp1286);
panda$core$Bit $tmp1288 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp1289 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp1285, $tmp1287, $tmp1288);
panda$core$String* $tmp1290 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param1, $tmp1289);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String($tmp1283, $tmp1284, $tmp1290);
panda$collections$Array$add$panda$collections$Array$T($tmp1282, ((panda$core$Object*) $tmp1283));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1290));
// unreffing REF($82:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1283));
// unreffing REF($75:org.pandalanguage.pandac.pandadoc.Markdown.HTMLToken)
goto block5;
block5:;
// line 846
panda$collections$Array* $tmp1291 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1292 = (org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class);
panda$core$Int64 $tmp1293 = (panda$core$Int64) {0};
panda$core$Matcher* $tmp1294 = *(&local3);
panda$core$String$Index $tmp1295;
panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1295, $tmp1294);
panda$core$Matcher* $tmp1296 = *(&local3);
panda$core$String$Index $tmp1297;
panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1297, $tmp1296);
panda$core$Bit $tmp1298 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp1299 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp1295, $tmp1297, $tmp1298);
panda$core$String* $tmp1300 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param1, $tmp1299);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String($tmp1292, $tmp1293, $tmp1300);
panda$collections$Array$add$panda$collections$Array$T($tmp1291, ((panda$core$Object*) $tmp1292));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1300));
// unreffing REF($104:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1292));
// unreffing REF($96:org.pandalanguage.pandac.pandadoc.Markdown.HTMLToken)
// line 847
panda$core$Matcher* $tmp1301 = *(&local3);
panda$core$String$Index $tmp1302;
panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1302, $tmp1301);
*(&local4) = $tmp1302;
goto block1;
block3:;
// line 849
panda$core$String$Index $tmp1303 = *(&local4);
panda$core$String$Index$wrapper* $tmp1304;
$tmp1304 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp1304->value = $tmp1303;
panda$core$String$Index $tmp1305 = panda$core$String$get_end$R$panda$core$String$Index(param1);
panda$core$String$Index$wrapper* $tmp1306;
$tmp1306 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp1306->value = $tmp1305;
ITable* $tmp1307 = ((panda$core$Comparable*) $tmp1304)->$class->itable;
while ($tmp1307->$class != (panda$core$Class*) &panda$core$Comparable$class) {
    $tmp1307 = $tmp1307->next;
}
$fn1309 $tmp1308 = $tmp1307->methods[1];
panda$core$Bit $tmp1310 = $tmp1308(((panda$core$Comparable*) $tmp1304), ((panda$core$Comparable*) $tmp1306));
bool $tmp1311 = $tmp1310.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp1306)));
// unreffing REF($124:panda.core.Comparable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp1304)));
// unreffing REF($121:panda.core.Comparable<panda.core.String.Index>)
if ($tmp1311) goto block6; else goto block7;
block6:;
// line 850
panda$collections$Array* $tmp1312 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1313 = (org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class);
panda$core$Int64 $tmp1314 = (panda$core$Int64) {1};
panda$core$String$Index $tmp1315 = *(&local4);
panda$core$String$Index $tmp1316 = panda$core$String$get_end$R$panda$core$String$Index(param1);
panda$core$Bit $tmp1317 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp1318 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp1315, $tmp1316, $tmp1317);
panda$core$String* $tmp1319 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param1, $tmp1318);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String($tmp1313, $tmp1314, $tmp1319);
panda$collections$Array$add$panda$collections$Array$T($tmp1312, ((panda$core$Object*) $tmp1313));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1319));
// unreffing REF($144:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1313));
// unreffing REF($138:org.pandalanguage.pandac.pandadoc.Markdown.HTMLToken)
goto block7;
block7:;
// line 853
panda$collections$Array* $tmp1320 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp1320)));
panda$core$Matcher* $tmp1321 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1321));
// unreffing m
*(&local3) = ((panda$core$Matcher*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1266));
// unreffing REF($38:panda.core.Matcher)
panda$core$RegularExpression* $tmp1322 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1322));
// unreffing p
*(&local2) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1262));
// unreffing REF($26:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1259));
// unreffing REF($24:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1256));
// unreffing REF($23:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1255));
// unreffing REF($22:panda.core.RegularExpression)
panda$core$String* $tmp1323 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1323));
// unreffing nestedTags
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1253));
// unreffing REF($13:panda.core.String)
panda$collections$Array* $tmp1324 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1324));
// unreffing tokens
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1250));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.pandadoc.Markdown.HTMLToken>)
return ((panda$collections$ListView*) $tmp1320);

}
void org$pandalanguage$pandac$pandadoc$Markdown$escapeSpecialCharsWithinTagAttributes$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$collections$ListView* local0 = NULL;
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
panda$core$String* local4 = NULL;
// line 866
panda$core$String* $tmp1325 = panda$core$MutableString$convert$R$panda$core$String(param1);
$fn1327 $tmp1326 = ($fn1327) param0->$class->vtable[23];
panda$collections$ListView* $tmp1328 = $tmp1326(param0, $tmp1325);
*(&local0) = ((panda$collections$ListView*) NULL);
panda$collections$ListView* $tmp1329 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1329));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1328));
*(&local0) = $tmp1328;
// line 867
panda$core$MutableString$clear(param1);
// line 869
panda$collections$ListView* $tmp1330 = *(&local0);
ITable* $tmp1331 = ((panda$collections$Iterable*) $tmp1330)->$class->itable;
while ($tmp1331->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1331 = $tmp1331->next;
}
$fn1333 $tmp1332 = $tmp1331->methods[0];
panda$collections$Iterator* $tmp1334 = $tmp1332(((panda$collections$Iterable*) $tmp1330));
goto block1;
block1:;
ITable* $tmp1335 = $tmp1334->$class->itable;
while ($tmp1335->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1335 = $tmp1335->next;
}
$fn1337 $tmp1336 = $tmp1335->methods[0];
panda$core$Bit $tmp1338 = $tmp1336($tmp1334);
bool $tmp1339 = $tmp1338.value;
if ($tmp1339) goto block3; else goto block2;
block2:;
*(&local1) = ((org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) NULL);
ITable* $tmp1340 = $tmp1334->$class->itable;
while ($tmp1340->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1340 = $tmp1340->next;
}
$fn1342 $tmp1341 = $tmp1340->methods[1];
panda$core$Object* $tmp1343 = $tmp1341($tmp1334);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1344 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1344));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) $tmp1343)));
*(&local1) = ((org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) $tmp1343);
// line 870
*(&local2) = ((panda$core$String*) NULL);
// line 871
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1345 = *(&local1);
panda$core$Int64* $tmp1346 = &$tmp1345->$rawValue;
panda$core$Int64 $tmp1347 = *$tmp1346;
panda$core$Int64 $tmp1348 = (panda$core$Int64) {0};
panda$core$Bit $tmp1349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1347, $tmp1348);
bool $tmp1350 = $tmp1349.value;
if ($tmp1350) goto block5; else goto block6;
block5:;
panda$core$String** $tmp1351 = (panda$core$String**) ($tmp1345->$data + 0);
panda$core$String* $tmp1352 = *$tmp1351;
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp1353 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1353));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1352));
*(&local3) = $tmp1352;
// line 873
panda$core$String* $tmp1354 = *(&local3);
panda$core$String* $tmp1355 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1355));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1354));
*(&local2) = $tmp1354;
// line 874
panda$core$String* $tmp1356 = *(&local2);
org$pandalanguage$pandac$pandadoc$Protector** $tmp1357 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp1358 = *$tmp1357;
$fn1360 $tmp1359 = ($fn1360) $tmp1358->$class->vtable[2];
panda$core$String* $tmp1361 = $tmp1359($tmp1358, &$s1362);
panda$core$String* $tmp1363 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1356, &$s1364, $tmp1361);
panda$core$String* $tmp1365 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1365));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1363));
*(&local2) = $tmp1363;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1363));
// unreffing REF($70:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1361));
// unreffing REF($69:panda.core.String)
// line 875
panda$core$String* $tmp1366 = *(&local2);
org$pandalanguage$pandac$pandadoc$Protector** $tmp1367 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp1368 = *$tmp1367;
$fn1370 $tmp1369 = ($fn1370) $tmp1368->$class->vtable[2];
panda$core$String* $tmp1371 = $tmp1369($tmp1368, &$s1372);
panda$core$String* $tmp1373 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1366, &$s1374, $tmp1371);
panda$core$String* $tmp1375 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1375));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1373));
*(&local2) = $tmp1373;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1373));
// unreffing REF($89:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1371));
// unreffing REF($88:panda.core.String)
// line 876
panda$core$String* $tmp1376 = *(&local2);
org$pandalanguage$pandac$pandadoc$Protector** $tmp1377 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp1378 = *$tmp1377;
$fn1380 $tmp1379 = ($fn1380) $tmp1378->$class->vtable[2];
panda$core$String* $tmp1381 = $tmp1379($tmp1378, &$s1382);
panda$core$String* $tmp1383 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1376, &$s1384, $tmp1381);
panda$core$String* $tmp1385 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1385));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1383));
*(&local2) = $tmp1383;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1383));
// unreffing REF($108:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1381));
// unreffing REF($107:panda.core.String)
// line 877
panda$core$String* $tmp1386 = *(&local2);
org$pandalanguage$pandac$pandadoc$Protector** $tmp1387 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp1388 = *$tmp1387;
$fn1390 $tmp1389 = ($fn1390) $tmp1388->$class->vtable[2];
panda$core$String* $tmp1391 = $tmp1389($tmp1388, &$s1392);
panda$core$String* $tmp1393 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1386, &$s1394, $tmp1391);
panda$core$String* $tmp1395 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1395));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1393));
*(&local2) = $tmp1393;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1393));
// unreffing REF($127:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1391));
// unreffing REF($126:panda.core.String)
panda$core$String* $tmp1396 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1396));
// unreffing text
*(&local3) = ((panda$core$String*) NULL);
goto block4;
block6:;
panda$core$Int64 $tmp1397 = (panda$core$Int64) {1};
panda$core$Bit $tmp1398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1347, $tmp1397);
bool $tmp1399 = $tmp1398.value;
if ($tmp1399) goto block7; else goto block4;
block7:;
panda$core$String** $tmp1400 = (panda$core$String**) ($tmp1345->$data + 0);
panda$core$String* $tmp1401 = *$tmp1400;
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp1402 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1402));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1401));
*(&local4) = $tmp1401;
// line 880
panda$core$String* $tmp1403 = *(&local4);
panda$core$String* $tmp1404 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1404));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1403));
*(&local2) = $tmp1403;
panda$core$String* $tmp1405 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1405));
// unreffing text
*(&local4) = ((panda$core$String*) NULL);
goto block4;
block4:;
// line 883
panda$core$String* $tmp1406 = *(&local2);
panda$core$MutableString$append$panda$core$String(param1, $tmp1406);
panda$core$String* $tmp1407 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1407));
// unreffing value
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp1343);
// unreffing REF($29:panda.collections.Iterator.T)
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1408 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1408));
// unreffing token
*(&local1) = ((org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1334));
// unreffing REF($18:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$collections$ListView* $tmp1409 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1409));
// unreffing tokens
*(&local0) = ((panda$collections$ListView*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1328));
// unreffing REF($3:panda.collections.ListView<org.pandalanguage.pandac.pandadoc.Markdown.HTMLToken>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1325));
// unreffing REF($1:panda.core.String)
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doImages$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
// line 889
panda$core$RegularExpression* $tmp1410 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1410, &$s1411);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1410, &$s1412);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1410));
// unreffing REF($1:panda.core.RegularExpression)
// line 890
panda$core$RegularExpression* $tmp1413 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1413, &$s1414);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1413, &$s1415);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1413));
// unreffing REF($8:panda.core.RegularExpression)
// line 893
panda$core$RegularExpression* $tmp1416 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1418, &$s1419);
panda$core$String* $tmp1420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1417, &$s1421);
panda$core$String* $tmp1422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1420, &$s1423);
panda$core$RegularExpression$init$panda$core$String($tmp1416, $tmp1422);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1424 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1424));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1416));
*(&local0) = $tmp1416;
// line 898
panda$core$RegularExpression* $tmp1425 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure24* $tmp1426 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure24*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure24$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure24$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1426, param0);
panda$core$MutableMethod* $tmp1428 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1428, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure24$$anonymous23$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1426));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1425, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1428)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1428));
// unreffing REF($32:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1426));
// unreffing REF($29:org.pandalanguage.pandac.pandadoc.Markdown._Closure24)
panda$core$RegularExpression* $tmp1429 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1429));
// unreffing imageLink
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1422));
// unreffing REF($18:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1420));
// unreffing REF($17:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1417));
// unreffing REF($16:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1416));
// unreffing REF($15:panda.core.RegularExpression)
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doAnchors$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
panda$core$RegularExpression* local1 = NULL;
panda$core$RegularExpression* local2 = NULL;
// line 931
panda$core$RegularExpression* $tmp1430 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1432, &$s1433);
panda$core$String* $tmp1434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1431, &$s1435);
panda$core$String* $tmp1436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1434, &$s1437);
panda$core$RegularExpression$init$panda$core$String($tmp1430, $tmp1436);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1438 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1438));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1430));
*(&local0) = $tmp1430;
// line 936
panda$core$RegularExpression* $tmp1439 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure26* $tmp1440 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure26*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure26$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure26$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1440, param0);
panda$core$MutableMethod* $tmp1442 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1442, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure26$$anonymous25$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp1440));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1439, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1442)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1442));
// unreffing REF($18:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1440));
// unreffing REF($15:org.pandalanguage.pandac.pandadoc.Markdown._Closure26)
// line 968
panda$core$RegularExpression* $tmp1443 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1445, &$s1446);
panda$core$String* $tmp1447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1444, &$s1448);
panda$core$String* $tmp1449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1447, &$s1450);
panda$core$String* $tmp1451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1449, &$s1452);
panda$core$String* $tmp1453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1451, &$s1454);
panda$core$String* $tmp1455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1453, &$s1456);
panda$core$String* $tmp1457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1455, &$s1458);
panda$core$String* $tmp1459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1457, &$s1460);
panda$core$String* $tmp1461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1459, &$s1462);
panda$core$String* $tmp1463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1461, &$s1464);
panda$core$String* $tmp1465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1463, &$s1466);
panda$core$Int64 $tmp1467 = (panda$core$Int64) {4};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1443, $tmp1465, $tmp1467);
*(&local1) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1468 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1468));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1443));
*(&local1) = $tmp1443;
// line 982
panda$core$RegularExpression* $tmp1469 = *(&local1);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure28* $tmp1470 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure28*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure28$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure28$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1470, param0);
panda$core$MutableMethod* $tmp1472 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1472, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure28$$anonymous27$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1470));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1469, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1472)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1472));
// unreffing REF($57:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1470));
// unreffing REF($54:org.pandalanguage.pandac.pandadoc.Markdown._Closure28)
// line 1019
panda$core$RegularExpression* $tmp1473 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1475, &$s1476);
panda$core$String* $tmp1477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1474, &$s1478);
panda$core$String* $tmp1479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1477, &$s1480);
panda$core$Int64 $tmp1481 = (panda$core$Int64) {4};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1473, $tmp1479, $tmp1481);
*(&local2) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1482 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1482));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1473));
*(&local2) = $tmp1473;
// line 1025
panda$core$RegularExpression* $tmp1483 = *(&local2);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure30* $tmp1484 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure30*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure30$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure30$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1484, param0);
panda$core$MutableMethod* $tmp1486 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1486, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure30$$anonymous29$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp1484));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1483, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1486)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1486));
// unreffing REF($88:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1484));
// unreffing REF($85:org.pandalanguage.pandac.pandadoc.Markdown._Closure30)
panda$core$RegularExpression* $tmp1487 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1487));
// unreffing referenceShortcut
*(&local2) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1479));
// unreffing REF($73:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1477));
// unreffing REF($72:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1474));
// unreffing REF($71:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1473));
// unreffing REF($70:panda.core.RegularExpression)
panda$core$RegularExpression* $tmp1488 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1488));
// unreffing inlineLink
*(&local1) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1465));
// unreffing REF($42:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1463));
// unreffing REF($41:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1461));
// unreffing REF($40:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1459));
// unreffing REF($39:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1457));
// unreffing REF($38:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1455));
// unreffing REF($37:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1453));
// unreffing REF($36:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1451));
// unreffing REF($35:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1449));
// unreffing REF($34:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1447));
// unreffing REF($33:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1444));
// unreffing REF($32:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1443));
// unreffing REF($31:panda.core.RegularExpression)
panda$core$RegularExpression* $tmp1489 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1489));
// unreffing internalLink
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1436));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1434));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1431));
// unreffing REF($2:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1430));
// unreffing REF($1:panda.core.RegularExpression)
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doItalicsAndBold$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 1067
panda$core$RegularExpression* $tmp1490 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1490, &$s1491);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1490, &$s1492);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1490));
// unreffing REF($1:panda.core.RegularExpression)
// line 1068
panda$core$RegularExpression* $tmp1493 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1493, &$s1494);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1493, &$s1495);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1493));
// unreffing REF($8:panda.core.RegularExpression)
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$encodeAmpsAndAngles$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 1074
panda$core$RegularExpression* $tmp1496 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1496, &$s1497);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1496, &$s1498);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1496));
// unreffing REF($1:panda.core.RegularExpression)
// line 1075
panda$core$RegularExpression* $tmp1499 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1499, &$s1500);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1499, &$s1501);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1499));
// unreffing REF($8:panda.core.RegularExpression)
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doCodeSpans$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 1079
panda$core$RegularExpression* $tmp1502 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1502, &$s1503);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure32* $tmp1504 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure32*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure32$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure32$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1504, param0);
panda$core$MutableMethod* $tmp1506 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1506, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure32$$anonymous31$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1504));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1502, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1506)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1506));
// unreffing REF($6:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1504));
// unreffing REF($3:org.pandalanguage.pandac.pandadoc.Markdown._Closure32)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1502));
// unreffing REF($1:panda.core.RegularExpression)
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$cleanup(org$pandalanguage$pandac$pandadoc$Markdown* param0) {

// line 83
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$io$File** $tmp1507 = &param0->source;
panda$io$File* $tmp1508 = *$tmp1507;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1508));
panda$threads$MessageQueue** $tmp1509 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1510 = *$tmp1509;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1510));
org$pandalanguage$pandac$parser$Parser** $tmp1511 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1512 = *$tmp1511;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1512));
panda$core$MutableMethod** $tmp1513 = &param0->linkResolver;
panda$core$MutableMethod* $tmp1514 = *$tmp1513;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1514));
panda$collections$HashMap** $tmp1515 = &param0->linkDefinitions;
panda$collections$HashMap* $tmp1516 = *$tmp1515;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1516));
org$pandalanguage$pandac$pandadoc$Protector** $tmp1517 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp1518 = *$tmp1517;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1518));
org$pandalanguage$pandac$pandadoc$Protector** $tmp1519 = &param0->htmlProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp1520 = *$tmp1519;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1520));
panda$math$Random** $tmp1521 = &param0->random;
panda$math$Random* $tmp1522 = *$tmp1521;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1522));
return;

}

