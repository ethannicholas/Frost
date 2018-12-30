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
typedef panda$core$String* (*$fn501)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$core$String* (*$fn513)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure6*, panda$collections$ListView*);
typedef panda$core$Bit (*$fn523)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn528)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn535)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn546)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn550)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn555)(panda$collections$Iterator*);
typedef panda$core$Real64 (*$fn561)(panda$math$Random*);
typedef panda$core$Object* (*$fn617)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure9*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn623)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn651)(panda$collections$ListView*);
typedef panda$core$String* (*$fn672)(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer*, panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn686)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn690)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn695)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn706)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn716)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn730)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn822)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn830)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn838)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn846)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn854)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Bit (*$fn865)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn875)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn898)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn908)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn923)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn960)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$Bit (*$fn981)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn1003)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$Bit (*$fn1024)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn1046)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$Bit (*$fn1068)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn1074)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1082)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Object* (*$fn1117)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure12*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn1127)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure14*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1155)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure16*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1180)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure18*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1185)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure20*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn1193)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure22*, panda$collections$ListView*);
typedef void (*$fn1197)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1199)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1201)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1203)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1205)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1207)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1209)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1211)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1213)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Bit (*$fn1266)(panda$core$Comparable*, panda$core$Comparable*);
typedef panda$core$Bit (*$fn1296)(panda$core$Comparable*, panda$core$Comparable*);
typedef panda$collections$ListView* (*$fn1314)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1320)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1324)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1329)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1347)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1357)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1367)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1377)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1414)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure24*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn1428)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure26*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1458)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure28*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn1472)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure30*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1492)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure32*, panda$collections$ListView*);

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
static panda$core$String $s471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x70\x3e", 3, 1653735, NULL };
static panda$core$String $s473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x70\x3e", 4, 166369282, NULL };
static panda$core$String $s503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static panda$core$String $s506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28\x28\x68\x74\x74\x70\x73\x3f\x7c\x66\x74\x70\x29\x3a\x5b\x5e\x27\x5c\x22\x3e\x5c\x73\x5d\x2b\x29\x3e", 27, -3769254741412201634, NULL };
static panda$core$String $s507 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22\x24\x31\x22\x3e\x24\x31\x3c\x2f\x61\x3e", 19, -7734359251480494054, NULL };
static panda$core$String $s509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28\x5b\x2d\x2e\x5c\x77\x5d\x2b\x5c\x40\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x28\x5c\x2e\x5b\x2d\x61\x2d\x7a\x30\x2d\x39\x5d\x2b\x29\x2a\x5c\x2e\x5b\x61\x2d\x7a\x5d\x2b\x29\x3e", 46, 7932002164266535007, NULL };
static panda$core$String $s571 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x23", 2, 14074, NULL };
static panda$core$String $s577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x23\x78", 3, 1421594, NULL };
static panda$core$String $s591 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78", 1, 221, NULL };
static panda$core$String $s593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s601 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s602 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x5b\x20\x09\x5d\x2a\x3e\x5b\x20\x09\x5d\x3f", 12, -3582088860114369432, NULL };
static panda$core$String $s604 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2b\x5c\x6e", 4, 151902292, NULL };
static panda$core$String $s606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2e\x2b\x5c\x6e\x29\x2a", 7, 150162376369015, NULL };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x2a", 3, 1979945, NULL };
static panda$core$String $s610 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2b", 2, 14385, NULL };
static panda$core$String $s612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s632 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s650 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2e\x2a\x3f\x29\x5c\x74", 7, 150162241731241, NULL };
static panda$core$String $s654 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x5c\x74\x7c\x5b\x20\x5d\x7b\x31\x2c\x34\x7d\x29", 18, 7461573203115413830, NULL };
static panda$core$String $s655 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s658 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x5c\x6e\x5c\x6e\x7c\x5c\x41\x29\x28\x28\x3f\x3a", 15, -8559916856311689575, NULL };
static panda$core$String $s659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x5b\x20\x5d\x7b\x34\x7d\x29", 10, 7324185912868193391, NULL };
static panda$core$String $s661 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2a\x5c\x6e\x2b", 5, 15341101234, NULL };
static panda$core$String $s663 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2b", 2, 14385, NULL };
static panda$core$String $s665 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s667 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x3f\x3d\x5e\x5b\x20\x5d\x7b\x30\x2c\x34\x7d\x5c\x53\x29\x7c\x5c\x5a\x29", 20, -1268815784794221538, NULL };
static panda$core$String $s676 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x6e\x64\x61\x63\x6f\x64\x65\x22\x3e", 24, -1375153472772145809, NULL };
static panda$core$String $s721 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s748 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6d\x6d\x65\x6e\x74\x22\x3e", 22, -1756050522877089685, NULL };
static panda$core$String $s753 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x22\x3e", 25, 4577563245309187979, NULL };
static panda$core$String $s758 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x22\x3e", 25, 6760721592980043958, NULL };
static panda$core$String $s763 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x4e\x61\x6d\x65\x22\x3e", 28, 5111374842590752150, NULL };
static panda$core$String $s768 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x74\x79\x70\x65\x22\x3e", 19, -6878895466207673670, NULL };
static panda$core$String $s773 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6b\x65\x79\x77\x6f\x72\x64\x22\x3e", 22, -1670481277391576067, NULL };
static panda$core$String $s778 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6e\x74\x72\x6f\x6c\x22\x3e", 22, -1756049386432501671, NULL };
static panda$core$String $s783 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x74\x65\x72\x61\x6c\x22\x3e", 22, -1659229352682266791, NULL };
static panda$core$String $s788 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x73\x74\x72\x69\x6e\x67\x22\x3e", 21, -198306892965556893, NULL };
static panda$core$String $s793 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6f\x70\x65\x72\x61\x74\x6f\x72\x22\x3e", 23, 1793793249967207580, NULL };
static panda$core$String $s798 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x61\x62\x65\x6c\x22\x3e", 20, 6207823968128210400, NULL };
static panda$core$String $s802 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s810 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s811 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s813 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s817 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x67\x74\x3b", 4, 144274317, NULL };
static panda$core$String $s824 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s825 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s832 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s833 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s840 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s841 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5b", 2, 19584, NULL };
static panda$core$String $s848 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s849 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5d", 2, 19586, NULL };
static panda$core$String $s856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s857 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s886 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22", 13, -8467438715157355368, NULL };
static panda$core$String $s888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e", 2, 13697, NULL };
static panda$core$String $s913 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s927 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s929 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s1079 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x24\x28\x5c\x73\x2a\x29\x5c\x2e\x5c\x2e\x5c\x2e\x28\x5c\x73\x2a\x29\x5e", 22, -7048023396403805866, NULL };
static panda$core$String $s1080 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x31\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d\x24\x32", 13, -8807464024981417766, NULL };
static panda$core$String $s1083 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d", 9, 1585511400200274083, NULL };
static panda$core$String $s1084 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x65\x6c\x6c\x69\x70\x73\x69\x73\x22\x3e\x2e\x2e\x2e\x3c\x2f\x73\x70\x61\x6e\x3e", 33, 5749756206725659630, NULL };
static panda$core$String $s1094 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x5b\x20\x5d\x7b\x30\x2c", 8, 15160529116888912, NULL };
static panda$core$String $s1096 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x28\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x29\x5b\x20\x5d\x2b\x29\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x7a\x7c\x5c\x6e\x7b\x32\x2c\x7d", 42, -5883137854691898449, NULL };
static panda$core$String $s1098 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x53\x29\x28\x3f\x21\x5b\x20\x5d\x2a\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b\x29\x29\x29", 36, 8434742182533998850, NULL };
static panda$core$String $s1111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e", 5, 14738541648, NULL };
static panda$core$String $s1113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29\x7c\x5c\x41\x5c\x6e\x3f\x29", 23, 6260301638587013175, NULL };
static panda$core$String $s1140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d\x5c\x7a", 8, 20810277504230859, NULL };
static panda$core$String $s1142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x6e\x29\x3f\x5e\x28\x5b\x20\x5c\x74\x5d\x2a\x29\x28\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b", 32, 116054090365740223, NULL };
static panda$core$String $s1147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x6e\x7b\x31\x2c\x32\x7d\x29\x29", 19, 4304152477369649477, NULL };
static panda$core$String $s1149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2a\x28\x5c\x7a\x7c\x5c\x32\x28\x5b\x2d\x2b\x5c\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5c\x74\x5d\x2b\x29\x29", 35, -2157463411774501410, NULL };
static panda$core$String $s1171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static panda$core$String $s1175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x3d\x3d\x3d\x3d\x2b\x24", 17, 8644226230150951458, NULL };
static panda$core$String $s1183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x2d\x2d\x2d\x2d\x2b\x24", 17, 8644226060307728994, NULL };
static panda$core$String $s1189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x28\x23\x7b\x31\x2c\x36\x7d\x29\x5c\x73\x2a\x28\x2e\x2a\x3f\x29\x5c\x73\x2a\x5c\x31\x3f\x24", 24, 6625741561155563100, NULL };
static panda$core$String $s1215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x32\x2c\x7d\x5c\x6e", 7, 142480172029377, NULL };
static panda$core$String $s1216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x62\x72\x20\x2f\x3e\x0a", 8, 14324133278249456, NULL };
static panda$core$String $s1220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x3c\x5b\x61\x2d\x7a\x2f\x21\x24\x5d\x28\x3f\x3a\x5b\x5e\x3c\x3e\x5d\x7c", 21, -3726567012419943545, NULL };
static panda$core$String $s1231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2a\x3e\x29", 4, 146737487, NULL };
static panda$core$String $s1235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s1236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x6e\x65\x73\x74\x65\x64\x54\x61\x67\x73\x52\x65\x67\x65\x78\x28\x64\x65\x70\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 134, 6382497733495402167, NULL };
static panda$core$String $s1244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x73\x3a\x3c\x21\x28\x2d\x2d\x2e\x2a\x3f\x2d\x2d\x5c\x73\x2a\x29\x2b\x3e\x29\x7c", 22, -7717011245258052727, NULL };
static panda$core$String $s1245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x73\x3a\x3c\x5c\x3f\x2e\x2a\x3f\x5c\x3f\x3e\x29", 14, -1964502928120912323, NULL };
static panda$core$String $s1247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s1351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s1359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x60", 1, 197, NULL };
static panda$core$String $s1361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x60", 1, 197, NULL };
static panda$core$String $s1369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s1371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s1379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s1381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s1398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x20\x5c\x22\x28\x2e\x2a\x29\x5c\x22\x5c\x5c\x29", 30, 1507772917981139974, NULL };
static panda$core$String $s1399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x74\x69\x74\x6c\x65\x3d\x22\x24\x33\x22\x20\x2f\x3e", 36, -5185982321426610333, NULL };
static panda$core$String $s1401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x5c\x5c\x29", 21, -5830152919387063515, NULL };
static panda$core$String $s1402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x2f\x3e", 25, -7685348581218553223, NULL };
static panda$core$String $s1405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5b\x21\x5d\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 13, -4389225286389518346, NULL };
static panda$core$String $s1406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f", 15, -5004708712015115107, NULL };
static panda$core$String $s1408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 9, 2099712822272888901, NULL };
static panda$core$String $s1410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1419 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 10, 7641698408407002113, NULL };
static panda$core$String $s1420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f", 15, -5004708712015115107, NULL };
static panda$core$String $s1422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 9, 2099712822272888901, NULL };
static panda$core$String $s1424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 10, 7641698408407002113, NULL };
static panda$core$String $s1433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x28", 2, 19533, NULL };
static panda$core$String $s1435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a", 6, 2021365209467, NULL };
static panda$core$String $s1437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3f\x28\x2e\x2a\x3f\x29\x3e\x3f", 9, 1750196697486000581, NULL };
static panda$core$String $s1439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a", 6, 2021365209467, NULL };
static panda$core$String $s1441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1443 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5b\x27\x22\x5d\x29", 6, 1491434205139, NULL };
static panda$core$String $s1445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2e\x2a\x3f\x29", 5, 14720345233, NULL };
static panda$core$String $s1447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x35", 2, 19546, NULL };
static panda$core$String $s1449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3f", 2, 14405, NULL };
static panda$core$String $s1451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x29", 2, 19534, NULL };
static panda$core$String $s1453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x5b", 3, 1447724, NULL };
static panda$core$String $s1463 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5b\x5e\x5c\x5b\x5c\x5d\x5d\x2b\x29", 10, 7631247159193161743, NULL };
static panda$core$String $s1465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5d", 2, 19586, NULL };
static panda$core$String $s1467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x2a\x5c\x5c\x2a\x7c\x5f\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x5b\x2a\x5f\x5d\x2a\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 35, 636172404878895653, NULL };
static panda$core$String $s1479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x74\x72\x6f\x6e\x67\x3e\x24\x32\x3c\x2f\x73\x74\x72\x6f\x6e\x67\x3e", 19, 504491683038092400, NULL };
static panda$core$String $s1481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x2a\x7c\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 26, -4247179954659836315, NULL };
static panda$core$String $s1482 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x6d\x3e\x24\x32\x3c\x2f\x65\x6d\x3e", 11, 2723679958089201678, NULL };
static panda$core$String $s1484 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x28\x3f\x21\x23\x3f\x5b\x78\x58\x5d\x3f\x28\x3f\x3a\x5b\x30\x2d\x39\x61\x2d\x66\x41\x2d\x46\x5d\x2b\x7c\x5c\x77\x2b\x29\x3b\x29", 33, -6716186838887255919, NULL };
static panda$core$String $s1485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s1487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28\x3f\x21\x5b\x61\x2d\x7a\x41\x2d\x5a\x2f\x3f\x5c\x24\x21\x5d\x29", 18, 6433614010358842861, NULL };
static panda$core$String $s1488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s1490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3c\x21\x5c\x5c\x29\x28\x60\x2b\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x21\x60\x29\x5c\x31\x28\x3f\x21\x60\x29", 29, 7657757978565690602, NULL };

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
// line 114
panda$math$Random* $tmp24 = panda$math$Random$default$R$panda$math$Random();
panda$math$Random** $tmp25 = &param0->random;
panda$math$Random* $tmp26 = *$tmp25;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
panda$math$Random** $tmp27 = &param0->random;
*$tmp27 = $tmp24;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
// line 131
panda$core$MutableString* $tmp46 = *(&local0);
panda$core$RegularExpression* $tmp47 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp47, &$s48);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String($tmp46, $tmp47, &$s49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
// line 132
panda$core$MutableString* $tmp50 = *(&local0);
panda$core$RegularExpression* $tmp51 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp51, &$s52);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String($tmp50, $tmp51, &$s53);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
// line 133
panda$core$MutableString* $tmp54 = *(&local0);
panda$core$RegularExpression* $tmp55 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp55, &$s56);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String($tmp54, $tmp55, &$s57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
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
panda$collections$ListView* $tmp86 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp86));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
*(&local0) = $tmp84;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
// line 151
panda$collections$ListView* $tmp87 = panda$core$String$get_utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s88);
*(&local1) = ((panda$collections$ListView*) NULL);
panda$collections$ListView* $tmp89 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
*(&local1) = $tmp87;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
// line 154
org$pandalanguage$pandac$pandadoc$Protector** $tmp90 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp91 = *$tmp90;
$fn93 $tmp92 = ($fn93) $tmp91->$class->vtable[2];
panda$core$String* $tmp94 = $tmp92($tmp91, &$s95);
panda$core$MutableString$replace$panda$core$String$panda$core$String(param1, &$s96, $tmp94);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp121));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
panda$core$Panda$unref$panda$core$Object$Q($tmp119);
panda$core$RegularExpression* $tmp136 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp136));
// unreffing regex
*(&local1) = ((panda$core$RegularExpression*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp137));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp138));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp143));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp145));
// line 177
panda$core$RegularExpression* $tmp149 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure2* $tmp150 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure2*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure2$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure2$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp150, param0);
panda$core$MutableMethod* $tmp152 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp152, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure2$$anonymous1$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp150));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp149, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp152)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp152));
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
panda$collections$Array* $tmp168 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp168);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp169 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp169));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp168));
*(&local0) = $tmp168;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp168));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp191));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp193));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp195));
panda$core$Panda$unref$panda$core$Object$Q($tmp189);
panda$core$String* $tmp198 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
// unreffing hrDelimiter
*(&local1) = ((panda$core$String*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp180));
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
panda$collections$Array* $tmp200 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp200);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp201 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp201));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp200));
*(&local0) = $tmp200;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp200));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp252));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp256));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp257));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp263));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp265));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp266));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp275));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp277));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp279));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp281));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp283));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp285));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp287));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp289));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp295));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp297));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp301));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp302));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp306));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp307));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp309));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp311));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp313));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp315));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp317));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp325));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp326));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp329));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp331));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp333));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp335));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp338));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp339));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp340));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp342));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp344));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp346));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp348));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp350));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp352));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp358));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp359));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp362));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp364));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp366));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp368));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp371));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp372));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp373));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp375));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp377));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp379));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp381));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp383));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp385));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp387));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp389));
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
panda$core$RegularExpression* $tmp403 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp403, &$s404);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp403, &$s405);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp403));
// line 333
panda$core$RegularExpression* $tmp406 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp406, &$s407);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp406, &$s408);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp406));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp415));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp416));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp417));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp419));
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
panda$core$Panda$unref$panda$core$Object$Q($tmp447);
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp454));
// line 344
panda$core$String* $tmp456 = *(&local3);
panda$core$Bit $tmp457 = panda$core$Bit$init$builtin_bit($tmp456 != NULL);
bool $tmp458 = $tmp457.value;
if ($tmp458) goto block9; else goto block11;
block9:;
// line 345
panda$collections$Array* $tmp459 = *(&local0);
panda$core$String* $tmp460 = *(&local3);
panda$core$Int64 $tmp461 = *(&local1);
panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T($tmp459, $tmp461, ((panda$core$Object*) $tmp460));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp462));
// line 349
panda$core$MutableString* $tmp465 = *(&local4);
$fn467 $tmp466 = ($fn467) param0->$class->vtable[22];
$tmp466(param0, $tmp465);
// line 350
panda$collections$Array* $tmp468 = *(&local0);
panda$core$MutableString* $tmp469 = *(&local4);
panda$core$String* $tmp470 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s471, ((panda$core$Object*) $tmp469));
panda$core$String* $tmp472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp470, &$s473);
panda$core$Int64 $tmp474 = *(&local1);
panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T($tmp468, $tmp474, ((panda$core$Object*) $tmp472));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp470));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp472));
panda$core$MutableString* $tmp475 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp475));
// unreffing mutable
*(&local4) = ((panda$core$MutableString*) NULL);
goto block10;
block10:;
panda$core$String* $tmp476 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp476));
// unreffing decoded
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp477 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp477));
// unreffing paragraph
*(&local2) = ((panda$core$String*) NULL);
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
panda$collections$Array* $tmp498 = *(&local0);
ITable* $tmp499 = ((panda$collections$CollectionView*) $tmp498)->$class->itable;
while ($tmp499->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp499 = $tmp499->next;
}
$fn501 $tmp500 = $tmp499->methods[2];
panda$core$String* $tmp502 = $tmp500(((panda$collections$CollectionView*) $tmp498), &$s503);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp502));
panda$collections$Array* $tmp504 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp504));
// unreffing paragraphs
*(&local0) = ((panda$collections$Array*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doAutoLinks$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
// line 357
panda$core$RegularExpression* $tmp505 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp505, &$s506);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp505, &$s507);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp505));
// line 358
panda$core$RegularExpression* $tmp508 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp508, &$s509);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp510 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp510));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp508));
*(&local0) = $tmp508;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp508));
// line 359
panda$core$RegularExpression* $tmp511 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure6* $tmp512 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure6*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure6$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure6$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp512, param0);
panda$core$MutableMethod* $tmp514 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp514, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure6$$anonymous5$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp512));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp511, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp514)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp512));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp514));
panda$core$RegularExpression* $tmp515 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp515));
// unreffing email
*(&local0) = ((panda$core$RegularExpression*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$unescapeSpecialChars$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
// line 370
org$pandalanguage$pandac$pandadoc$Protector** $tmp516 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp517 = *$tmp516;
panda$collections$HashMap** $tmp518 = &$tmp517->decodeMap;
panda$collections$HashMap* $tmp519 = *$tmp518;
panda$collections$Iterator* $tmp520 = panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT($tmp519);
goto block1;
block1:;
ITable* $tmp521 = $tmp520->$class->itable;
while ($tmp521->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp521 = $tmp521->next;
}
$fn523 $tmp522 = $tmp521->methods[0];
panda$core$Bit $tmp524 = $tmp522($tmp520);
bool $tmp525 = $tmp524.value;
if ($tmp525) goto block3; else goto block2;
block2:;
*(&local0) = ((panda$core$String*) NULL);
ITable* $tmp526 = $tmp520->$class->itable;
while ($tmp526->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp526 = $tmp526->next;
}
$fn528 $tmp527 = $tmp526->methods[1];
panda$core$Object* $tmp529 = $tmp527($tmp520);
panda$core$String* $tmp530 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp530));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp529)));
*(&local0) = ((panda$core$String*) $tmp529);
// line 371
org$pandalanguage$pandac$pandadoc$Protector** $tmp531 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp532 = *$tmp531;
panda$core$String* $tmp533 = *(&local0);
$fn535 $tmp534 = ($fn535) $tmp532->$class->vtable[3];
panda$core$String* $tmp536 = $tmp534($tmp532, $tmp533);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp537 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp537));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp536));
*(&local1) = $tmp536;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp536));
// line 372
panda$core$String* $tmp538 = *(&local0);
panda$core$String* $tmp539 = *(&local1);
panda$core$MutableString$replace$panda$core$String$panda$core$String(param1, $tmp538, $tmp539);
panda$core$Panda$unref$panda$core$Object$Q($tmp529);
panda$core$String* $tmp540 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp540));
// unreffing plaintext
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp541 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp541));
// unreffing hash
*(&local0) = ((panda$core$String*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp520));
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$encodeEmail$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$String* param1) {

panda$core$MutableString* local0 = NULL;
panda$core$Char32 local1;
panda$core$Real64 local2;
// line 377
panda$core$MutableString* $tmp542 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp542);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp543 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp543));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp542));
*(&local0) = $tmp542;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp542));
// line 378
ITable* $tmp544 = ((panda$collections$Iterable*) param1)->$class->itable;
while ($tmp544->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp544 = $tmp544->next;
}
$fn546 $tmp545 = $tmp544->methods[0];
panda$collections$Iterator* $tmp547 = $tmp545(((panda$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp548 = $tmp547->$class->itable;
while ($tmp548->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp548 = $tmp548->next;
}
$fn550 $tmp549 = $tmp548->methods[0];
panda$core$Bit $tmp551 = $tmp549($tmp547);
bool $tmp552 = $tmp551.value;
if ($tmp552) goto block3; else goto block2;
block2:;
ITable* $tmp553 = $tmp547->$class->itable;
while ($tmp553->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp553 = $tmp553->next;
}
$fn555 $tmp554 = $tmp553->methods[1];
panda$core$Object* $tmp556 = $tmp554($tmp547);
*(&local1) = ((panda$core$Char32$wrapper*) $tmp556)->value;
// line 380
panda$math$Random** $tmp557 = &param0->random;
panda$math$Random* $tmp558 = *$tmp557;
ITable* $tmp559 = $tmp558->$class->itable;
while ($tmp559->$class != (panda$core$Class*) &panda$math$Random$class) {
    $tmp559 = $tmp559->next;
}
$fn561 $tmp560 = $tmp559->methods[5];
panda$core$Real64 $tmp562 = $tmp560($tmp558);
*(&local2) = $tmp562;
// line 381
panda$core$Real64 $tmp563 = *(&local2);
panda$core$Real64 $tmp564 = (panda$core$Real64) {0.45};
double $tmp565 = $tmp563.value;
double $tmp566 = $tmp564.value;
bool $tmp567 = $tmp565 < $tmp566;
panda$core$Bit $tmp568 = (panda$core$Bit) {$tmp567};
bool $tmp569 = $tmp568.value;
if ($tmp569) goto block4; else goto block6;
block4:;
// line 382
panda$core$MutableString* $tmp570 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp570, &$s571);
// line 383
panda$core$MutableString* $tmp572 = *(&local0);
panda$core$Char32 $tmp573 = *(&local1);
panda$core$Int32 $tmp574 = panda$core$Char32$convert$R$panda$core$Int32($tmp573);
panda$core$Int32$wrapper* $tmp575;
$tmp575 = (panda$core$Int32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$Int32$wrapperclass);
$tmp575->value = $tmp574;
panda$core$MutableString$append$panda$core$Object($tmp572, ((panda$core$Object*) $tmp575));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp575));
// line 384
panda$core$MutableString* $tmp576 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp576, &$s577);
goto block5;
block6:;
// line 386
panda$core$Real64 $tmp578 = *(&local2);
panda$core$Real64 $tmp579 = (panda$core$Real64) {0.9};
double $tmp580 = $tmp578.value;
double $tmp581 = $tmp579.value;
bool $tmp582 = $tmp580 < $tmp581;
panda$core$Bit $tmp583 = (panda$core$Bit) {$tmp582};
bool $tmp584 = $tmp583.value;
if ($tmp584) goto block7; else goto block9;
block7:;
// line 387
panda$core$MutableString* $tmp585 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp585, &$s586);
// line 388
panda$core$MutableString* $tmp587 = *(&local0);
panda$core$Char32 $tmp588 = *(&local1);
panda$core$Int32 $tmp589 = panda$core$Char32$convert$R$panda$core$Int32($tmp588);
panda$core$String* $tmp590 = panda$core$Int32$format$panda$core$String$R$panda$core$String($tmp589, &$s591);
panda$core$MutableString$append$panda$core$String($tmp587, $tmp590);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp590));
// line 389
panda$core$MutableString* $tmp592 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp592, &$s593);
goto block8;
block9:;
// line 1
// line 392
panda$core$MutableString* $tmp594 = *(&local0);
panda$core$Char32 $tmp595 = *(&local1);
panda$core$MutableString$append$panda$core$Char32($tmp594, $tmp595);
goto block8;
block8:;
goto block5;
block5:;
panda$core$Panda$unref$panda$core$Object$Q($tmp556);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp547));
// line 395
panda$core$MutableString* $tmp596 = *(&local0);
panda$core$String* $tmp597 = panda$core$MutableString$convert$R$panda$core$String($tmp596);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp597));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp597));
panda$core$MutableString* $tmp598 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp598));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp597;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doBlockQuotes$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
// line 399
panda$core$RegularExpression* $tmp599 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s601, &$s602);
panda$core$String* $tmp603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp600, &$s604);
panda$core$String* $tmp605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp603, &$s606);
panda$core$String* $tmp607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp605, &$s608);
panda$core$String* $tmp609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp607, &$s610);
panda$core$String* $tmp611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp609, &$s612);
panda$core$Int64 $tmp613 = (panda$core$Int64) {1};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp599, $tmp611, $tmp613);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp614 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp614));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp599));
*(&local0) = $tmp599;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp599));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp600));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp603));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp605));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp607));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp609));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp611));
// line 408
panda$core$RegularExpression* $tmp615 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure9* $tmp616 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure9*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure9$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure9$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp616, param0);
panda$core$MutableMethod* $tmp618 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp618, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure9$$anonymous7$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp616));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp615, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp618)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp616));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp618));
panda$core$RegularExpression* $tmp619 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp619));
// unreffing p
*(&local0) = ((panda$core$RegularExpression*) NULL);
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous10$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(panda$collections$ListView* param0) {

panda$core$String* local0 = NULL;
panda$core$Int64 local1;
panda$core$MutableString* local2 = NULL;
// line 423
panda$core$Int64 $tmp620 = (panda$core$Int64) {1};
ITable* $tmp621 = param0->$class->itable;
while ($tmp621->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp621 = $tmp621->next;
}
$fn623 $tmp622 = $tmp621->methods[0];
panda$core$Object* $tmp624 = $tmp622(param0, $tmp620);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp625 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp625));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp624)));
*(&local0) = ((panda$core$String*) $tmp624);
panda$core$Panda$unref$panda$core$Object$Q($tmp624);
// line 424
panda$core$String* $tmp626 = *(&local0);
panda$core$Int64 $tmp627 = panda$core$String$get_length$R$panda$core$Int64($tmp626);
*(&local1) = $tmp627;
// line 425
panda$core$MutableString* $tmp628 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$String* $tmp629 = *(&local0);
panda$core$MutableString$init$panda$core$String($tmp628, $tmp629);
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp630 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp630));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp628));
*(&local2) = $tmp628;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp628));
// line 426
goto block1;
block1:;
// line 427
panda$core$MutableString* $tmp631 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp631, &$s632);
// line 428
panda$core$Int64 $tmp633 = *(&local1);
panda$core$Int64 $tmp634 = (panda$core$Int64) {1};
int64_t $tmp635 = $tmp633.value;
int64_t $tmp636 = $tmp634.value;
int64_t $tmp637 = $tmp635 + $tmp636;
panda$core$Int64 $tmp638 = (panda$core$Int64) {$tmp637};
*(&local1) = $tmp638;
goto block2;
block2:;
panda$core$Int64 $tmp639 = *(&local1);
panda$core$Int64 $tmp640 = (panda$core$Int64) {4};
panda$core$Int64 $tmp641 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp639, $tmp640);
panda$core$Int64 $tmp642 = (panda$core$Int64) {0};
panda$core$Bit $tmp643 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp641, $tmp642);
bool $tmp644 = $tmp643.value;
if ($tmp644) goto block1; else goto block3;
block3:;
// line 431
panda$core$MutableString* $tmp645 = *(&local2);
panda$core$String* $tmp646 = panda$core$MutableString$convert$R$panda$core$String($tmp645);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp646));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp646));
panda$core$MutableString* $tmp647 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp647));
// unreffing replacement
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$String* $tmp648 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp648));
// unreffing lineSoFar
*(&local0) = ((panda$core$String*) NULL);
return $tmp646;

}
void org$pandalanguage$pandac$pandadoc$Markdown$detabify$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 422
panda$core$RegularExpression* $tmp649 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp649, &$s650);
panda$core$Method* $tmp652 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp652, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$$anonymous10$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Immutable*) NULL));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp649, ((panda$core$MutableMethod*) $tmp652));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp649));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp652));
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$outdent$panda$core$MutableString(panda$core$MutableString* param0) {

// line 437
panda$core$RegularExpression* $tmp653 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp653, &$s654);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param0, $tmp653, &$s655);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp653));
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doCodeBlocks$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
// line 493
panda$core$RegularExpression* $tmp656 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s658, &$s659);
panda$core$String* $tmp660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp657, &$s661);
panda$core$String* $tmp662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp660, &$s663);
panda$core$String* $tmp664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp662, &$s665);
panda$core$String* $tmp666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp664, &$s667);
panda$core$Int64 $tmp668 = (panda$core$Int64) {1};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp656, $tmp666, $tmp668);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp669 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp669));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp656));
*(&local0) = $tmp656;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp656));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp657));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp660));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp662));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp664));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp666));
// line 501
panda$core$RegularExpression* $tmp670 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* $tmp671 = (org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$class);
org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp671, param0);
panda$core$MutableMethod* $tmp673 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp673, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$replacement$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp671));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp670, $tmp673);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp671));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp673));
panda$core$RegularExpression* $tmp674 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp674));
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
panda$core$MutableString* $tmp675 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp675, &$s676);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp677 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp677));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp675));
*(&local0) = $tmp675;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp675));
// line 506
panda$core$Int64 $tmp678 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp679 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp678);
*(&local1) = $tmp679;
// line 507
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp680 = &param1->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp681 = *$tmp680;
panda$collections$Array** $tmp682 = &$tmp681->tokens;
panda$collections$Array* $tmp683 = *$tmp682;
ITable* $tmp684 = ((panda$collections$Iterable*) $tmp683)->$class->itable;
while ($tmp684->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp684 = $tmp684->next;
}
$fn686 $tmp685 = $tmp684->methods[0];
panda$collections$Iterator* $tmp687 = $tmp685(((panda$collections$Iterable*) $tmp683));
goto block1;
block1:;
ITable* $tmp688 = $tmp687->$class->itable;
while ($tmp688->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp688 = $tmp688->next;
}
$fn690 $tmp689 = $tmp688->methods[0];
panda$core$Bit $tmp691 = $tmp689($tmp687);
bool $tmp692 = $tmp691.value;
if ($tmp692) goto block3; else goto block2;
block2:;
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
ITable* $tmp693 = $tmp687->$class->itable;
while ($tmp693->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp693 = $tmp693->next;
}
$fn695 $tmp694 = $tmp693->methods[1];
panda$core$Object* $tmp696 = $tmp694($tmp687);
org$pandalanguage$pandac$Pair* $tmp697 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp697));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Pair*) $tmp696)));
*(&local2) = ((org$pandalanguage$pandac$Pair*) $tmp696);
// line 508
org$pandalanguage$pandac$Pair* $tmp698 = *(&local2);
panda$core$Object** $tmp699 = &$tmp698->second;
panda$core$Object* $tmp700 = *$tmp699;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp701;
$tmp701 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp701->value = ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp700)->value;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp702 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp703;
$tmp703 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp703->value = $tmp702;
ITable* $tmp704 = ((panda$core$Equatable*) $tmp701)->$class->itable;
while ($tmp704->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp704 = $tmp704->next;
}
$fn706 $tmp705 = $tmp704->methods[1];
panda$core$Bit $tmp707 = $tmp705(((panda$core$Equatable*) $tmp701), ((panda$core$Equatable*) $tmp703));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp701)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp703)));
bool $tmp708 = $tmp707.value;
if ($tmp708) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp709 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp710;
$tmp710 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp710->value = $tmp709;
panda$core$Int64 $tmp711 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp712 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp711);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp713;
$tmp713 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp713->value = $tmp712;
ITable* $tmp714 = ((panda$core$Equatable*) $tmp710)->$class->itable;
while ($tmp714->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp714 = $tmp714->next;
}
$fn716 $tmp715 = $tmp714->methods[1];
panda$core$Bit $tmp717 = $tmp715(((panda$core$Equatable*) $tmp710), ((panda$core$Equatable*) $tmp713));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp710)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp713)));
*(&local3) = $tmp717;
goto block6;
block5:;
*(&local3) = $tmp707;
goto block6;
block6:;
panda$core$Bit $tmp718 = *(&local3);
bool $tmp719 = $tmp718.value;
if ($tmp719) goto block7; else goto block8;
block7:;
// line 509
panda$core$MutableString* $tmp720 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp720, &$s721);
goto block8;
block8:;
// line 511
org$pandalanguage$pandac$Pair* $tmp722 = *(&local2);
panda$core$Object** $tmp723 = &$tmp722->second;
panda$core$Object* $tmp724 = *$tmp723;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp725;
$tmp725 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp725->value = ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp724)->value;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp726 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp727;
$tmp727 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp727->value = $tmp726;
ITable* $tmp728 = ((panda$core$Equatable*) $tmp725)->$class->itable;
while ($tmp728->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp728 = $tmp728->next;
}
$fn730 $tmp729 = $tmp728->methods[1];
panda$core$Bit $tmp731 = $tmp729(((panda$core$Equatable*) $tmp725), ((panda$core$Equatable*) $tmp727));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp725)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp727)));
bool $tmp732 = $tmp731.value;
if ($tmp732) goto block9; else goto block10;
block9:;
// line 512
org$pandalanguage$pandac$Pair* $tmp733 = *(&local2);
panda$core$Object** $tmp734 = &$tmp733->second;
panda$core$Object* $tmp735 = *$tmp734;
*(&local1) = ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp735)->value;
// line 513
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp736 = *(&local1);
panda$core$Int64 $tmp737 = $tmp736.$rawValue;
panda$core$Int64 $tmp738 = (panda$core$Int64) {0};
panda$core$Bit $tmp739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp738);
bool $tmp740 = $tmp739.value;
if ($tmp740) goto block12; else goto block13;
block12:;
// line 1
goto block11;
block13:;
panda$core$Int64 $tmp741 = (panda$core$Int64) {1};
panda$core$Bit $tmp742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp741);
bool $tmp743 = $tmp742.value;
if ($tmp743) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp744 = (panda$core$Int64) {2};
panda$core$Bit $tmp745 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp744);
bool $tmp746 = $tmp745.value;
if ($tmp746) goto block14; else goto block16;
block14:;
// line 516
panda$core$MutableString* $tmp747 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp747, &$s748);
goto block11;
block16:;
panda$core$Int64 $tmp749 = (panda$core$Int64) {3};
panda$core$Bit $tmp750 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp749);
bool $tmp751 = $tmp750.value;
if ($tmp751) goto block17; else goto block18;
block17:;
// line 518
panda$core$MutableString* $tmp752 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp752, &$s753);
goto block11;
block18:;
panda$core$Int64 $tmp754 = (panda$core$Int64) {4};
panda$core$Bit $tmp755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp754);
bool $tmp756 = $tmp755.value;
if ($tmp756) goto block19; else goto block20;
block19:;
// line 520
panda$core$MutableString* $tmp757 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp757, &$s758);
goto block11;
block20:;
panda$core$Int64 $tmp759 = (panda$core$Int64) {5};
panda$core$Bit $tmp760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp759);
bool $tmp761 = $tmp760.value;
if ($tmp761) goto block21; else goto block22;
block21:;
// line 522
panda$core$MutableString* $tmp762 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp762, &$s763);
goto block11;
block22:;
panda$core$Int64 $tmp764 = (panda$core$Int64) {6};
panda$core$Bit $tmp765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp764);
bool $tmp766 = $tmp765.value;
if ($tmp766) goto block23; else goto block24;
block23:;
// line 524
panda$core$MutableString* $tmp767 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp767, &$s768);
goto block11;
block24:;
panda$core$Int64 $tmp769 = (panda$core$Int64) {7};
panda$core$Bit $tmp770 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp769);
bool $tmp771 = $tmp770.value;
if ($tmp771) goto block25; else goto block26;
block25:;
// line 526
panda$core$MutableString* $tmp772 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp772, &$s773);
goto block11;
block26:;
panda$core$Int64 $tmp774 = (panda$core$Int64) {8};
panda$core$Bit $tmp775 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp774);
bool $tmp776 = $tmp775.value;
if ($tmp776) goto block27; else goto block28;
block27:;
// line 528
panda$core$MutableString* $tmp777 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp777, &$s778);
goto block11;
block28:;
panda$core$Int64 $tmp779 = (panda$core$Int64) {9};
panda$core$Bit $tmp780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp779);
bool $tmp781 = $tmp780.value;
if ($tmp781) goto block29; else goto block30;
block29:;
// line 530
panda$core$MutableString* $tmp782 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp782, &$s783);
goto block11;
block30:;
panda$core$Int64 $tmp784 = (panda$core$Int64) {10};
panda$core$Bit $tmp785 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp784);
bool $tmp786 = $tmp785.value;
if ($tmp786) goto block31; else goto block32;
block31:;
// line 532
panda$core$MutableString* $tmp787 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp787, &$s788);
goto block11;
block32:;
panda$core$Int64 $tmp789 = (panda$core$Int64) {11};
panda$core$Bit $tmp790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp789);
bool $tmp791 = $tmp790.value;
if ($tmp791) goto block33; else goto block34;
block33:;
// line 534
panda$core$MutableString* $tmp792 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp792, &$s793);
goto block11;
block34:;
panda$core$Int64 $tmp794 = (panda$core$Int64) {12};
panda$core$Bit $tmp795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp794);
bool $tmp796 = $tmp795.value;
if ($tmp796) goto block35; else goto block36;
block35:;
// line 536
panda$core$MutableString* $tmp797 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp797, &$s798);
goto block11;
block36:;
// line 538
panda$core$Bit $tmp799 = panda$core$Bit$init$builtin_bit(false);
bool $tmp800 = $tmp799.value;
if ($tmp800) goto block37; else goto block38;
block38:;
panda$core$Int64 $tmp801 = (panda$core$Int64) {538};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s802, $tmp801);
abort(); // unreachable
block37:;
goto block11;
block11:;
goto block10;
block10:;
// line 541
panda$core$MutableString* $tmp803 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$Pair* $tmp804 = *(&local2);
panda$core$Object** $tmp805 = &$tmp804->first;
panda$core$Object* $tmp806 = *$tmp805;
panda$core$String* $tmp807 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param1, ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp806)->value);
panda$core$MutableString$init$panda$core$String($tmp803, $tmp807);
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp808 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp808));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp803));
*(&local4) = $tmp803;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp803));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp807));
// line 542
panda$core$MutableString* $tmp809 = *(&local4);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp809, &$s810, &$s811);
// line 543
panda$core$MutableString* $tmp812 = *(&local4);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp812, &$s813, &$s814);
// line 544
panda$core$MutableString* $tmp815 = *(&local4);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp815, &$s816, &$s817);
// line 545
panda$core$MutableString* $tmp818 = *(&local4);
org$pandalanguage$pandac$pandadoc$Protector** $tmp819 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp820 = *$tmp819;
$fn822 $tmp821 = ($fn822) $tmp820->$class->vtable[2];
panda$core$String* $tmp823 = $tmp821($tmp820, &$s824);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp818, &$s825, $tmp823);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp823));
// line 546
panda$core$MutableString* $tmp826 = *(&local4);
org$pandalanguage$pandac$pandadoc$Protector** $tmp827 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp828 = *$tmp827;
$fn830 $tmp829 = ($fn830) $tmp828->$class->vtable[2];
panda$core$String* $tmp831 = $tmp829($tmp828, &$s832);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp826, &$s833, $tmp831);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp831));
// line 547
panda$core$MutableString* $tmp834 = *(&local4);
org$pandalanguage$pandac$pandadoc$Protector** $tmp835 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp836 = *$tmp835;
$fn838 $tmp837 = ($fn838) $tmp836->$class->vtable[2];
panda$core$String* $tmp839 = $tmp837($tmp836, &$s840);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp834, &$s841, $tmp839);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp839));
// line 548
panda$core$MutableString* $tmp842 = *(&local4);
org$pandalanguage$pandac$pandadoc$Protector** $tmp843 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp844 = *$tmp843;
$fn846 $tmp845 = ($fn846) $tmp844->$class->vtable[2];
panda$core$String* $tmp847 = $tmp845($tmp844, &$s848);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp842, &$s849, $tmp847);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp847));
// line 549
panda$core$MutableString* $tmp850 = *(&local4);
org$pandalanguage$pandac$pandadoc$Protector** $tmp851 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp852 = *$tmp851;
$fn854 $tmp853 = ($fn854) $tmp852->$class->vtable[2];
panda$core$String* $tmp855 = $tmp853($tmp852, &$s856);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp850, &$s857, $tmp855);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp855));
// line 550
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp858 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp859;
$tmp859 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp859->value = $tmp858;
panda$core$Int64 $tmp860 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp861 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp860);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp862;
$tmp862 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp862->value = $tmp861;
ITable* $tmp863 = ((panda$core$Equatable*) $tmp859)->$class->itable;
while ($tmp863->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp863 = $tmp863->next;
}
$fn865 $tmp864 = $tmp863->methods[1];
panda$core$Bit $tmp866 = $tmp864(((panda$core$Equatable*) $tmp859), ((panda$core$Equatable*) $tmp862));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp859)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp862)));
bool $tmp867 = $tmp866.value;
if ($tmp867) goto block39; else goto block40;
block39:;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp868 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp869;
$tmp869 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp869->value = $tmp868;
panda$core$Int64 $tmp870 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp871 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp870);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp872;
$tmp872 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp872->value = $tmp871;
ITable* $tmp873 = ((panda$core$Equatable*) $tmp869)->$class->itable;
while ($tmp873->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp873 = $tmp873->next;
}
$fn875 $tmp874 = $tmp873->methods[1];
panda$core$Bit $tmp876 = $tmp874(((panda$core$Equatable*) $tmp869), ((panda$core$Equatable*) $tmp872));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp869)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp872)));
*(&local5) = $tmp876;
goto block41;
block40:;
*(&local5) = $tmp866;
goto block41;
block41:;
panda$core$Bit $tmp877 = *(&local5);
bool $tmp878 = $tmp877.value;
if ($tmp878) goto block42; else goto block43;
block42:;
// line 552
panda$core$MutableString* $tmp879 = *(&local0);
org$pandalanguage$pandac$Pair* $tmp880 = *(&local2);
panda$core$Object** $tmp881 = &$tmp880->first;
panda$core$Object* $tmp882 = *$tmp881;
org$pandalanguage$pandac$parser$Token$Kind $tmp883 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp882)->value.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp884;
$tmp884 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp884->value = $tmp883;
panda$core$String* $tmp885 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s886, ((panda$core$Object*) $tmp884));
panda$core$String* $tmp887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp885, &$s888);
panda$core$MutableString$append$panda$core$String($tmp879, $tmp887);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp884));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp885));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp887));
goto block43;
block43:;
// line 554
panda$core$MutableString* $tmp889 = *(&local0);
panda$core$MutableString* $tmp890 = *(&local4);
panda$core$MutableString$append$panda$core$Object($tmp889, ((panda$core$Object*) $tmp890));
// line 555
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp891 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp892;
$tmp892 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp892->value = $tmp891;
panda$core$Int64 $tmp893 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp894 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp893);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp895;
$tmp895 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp895->value = $tmp894;
ITable* $tmp896 = ((panda$core$Equatable*) $tmp892)->$class->itable;
while ($tmp896->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp896 = $tmp896->next;
}
$fn898 $tmp897 = $tmp896->methods[1];
panda$core$Bit $tmp899 = $tmp897(((panda$core$Equatable*) $tmp892), ((panda$core$Equatable*) $tmp895));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp892)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp895)));
bool $tmp900 = $tmp899.value;
if ($tmp900) goto block44; else goto block45;
block44:;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp901 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp902;
$tmp902 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp902->value = $tmp901;
panda$core$Int64 $tmp903 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp904 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp903);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp905;
$tmp905 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp905->value = $tmp904;
ITable* $tmp906 = ((panda$core$Equatable*) $tmp902)->$class->itable;
while ($tmp906->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp906 = $tmp906->next;
}
$fn908 $tmp907 = $tmp906->methods[1];
panda$core$Bit $tmp909 = $tmp907(((panda$core$Equatable*) $tmp902), ((panda$core$Equatable*) $tmp905));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp902)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp905)));
*(&local6) = $tmp909;
goto block46;
block45:;
*(&local6) = $tmp899;
goto block46;
block46:;
panda$core$Bit $tmp910 = *(&local6);
bool $tmp911 = $tmp910.value;
if ($tmp911) goto block47; else goto block48;
block47:;
// line 557
panda$core$MutableString* $tmp912 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp912, &$s913);
goto block48;
block48:;
panda$core$Panda$unref$panda$core$Object$Q($tmp696);
panda$core$MutableString* $tmp914 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp914));
// unreffing s
*(&local4) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$Pair* $tmp915 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp915));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp687));
// line 560
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp916 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp917;
$tmp917 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp917->value = $tmp916;
panda$core$Int64 $tmp918 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp919 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp918);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp920;
$tmp920 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp920->value = $tmp919;
ITable* $tmp921 = ((panda$core$Equatable*) $tmp917)->$class->itable;
while ($tmp921->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp921 = $tmp921->next;
}
$fn923 $tmp922 = $tmp921->methods[1];
panda$core$Bit $tmp924 = $tmp922(((panda$core$Equatable*) $tmp917), ((panda$core$Equatable*) $tmp920));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp917)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp920)));
bool $tmp925 = $tmp924.value;
if ($tmp925) goto block49; else goto block50;
block49:;
// line 561
panda$core$MutableString* $tmp926 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp926, &$s927);
goto block50;
block50:;
// line 563
panda$core$MutableString* $tmp928 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp928, &$s929);
// line 564
panda$core$MutableString* $tmp930 = *(&local0);
panda$core$String* $tmp931 = panda$core$MutableString$finish$R$panda$core$String($tmp930);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp931));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp931));
panda$core$MutableString* $tmp932 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp932));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp931;

}
void org$pandalanguage$pandac$pandadoc$Markdown$syntaxHighlight$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$core$Bit local2;
panda$core$Bit local3;
panda$core$Bit local4;
org$pandalanguage$pandac$parser$Token local5;
// line 568
panda$threads$MessageQueue** $tmp933 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp934 = *$tmp933;
panda$threads$MessageQueue$clear($tmp934);
// line 569
panda$core$String* $tmp935 = panda$core$MutableString$convert$R$panda$core$String(param1);
panda$core$String* $tmp936 = panda$core$String$get_trimmed$R$panda$core$String($tmp935);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp937 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp937));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp936));
*(&local0) = $tmp936;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp935));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp936));
// line 570
org$pandalanguage$pandac$parser$Parser** $tmp938 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp939 = *$tmp938;
panda$io$File** $tmp940 = &param0->source;
panda$io$File* $tmp941 = *$tmp940;
panda$core$String* $tmp942 = *(&local0);
org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String($tmp939, $tmp941, $tmp942);
// line 571
org$pandalanguage$pandac$parser$Parser** $tmp943 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp944 = *$tmp943;
org$pandalanguage$pandac$ASTNode* $tmp945 = org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q($tmp944);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp946 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp946));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp945));
*(&local1) = $tmp945;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp945));
// line 572
org$pandalanguage$pandac$ASTNode* $tmp947 = *(&local1);
panda$core$Bit $tmp948 = panda$core$Bit$init$builtin_bit($tmp947 != NULL);
bool $tmp949 = $tmp948.value;
if ($tmp949) goto block1; else goto block2;
block1:;
panda$threads$MessageQueue** $tmp950 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp951 = *$tmp950;
panda$core$Int64 $tmp952 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp951);
panda$core$Int64 $tmp953 = (panda$core$Int64) {0};
panda$core$Bit $tmp954 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp952, $tmp953);
*(&local2) = $tmp954;
goto block3;
block2:;
*(&local2) = $tmp948;
goto block3;
block3:;
panda$core$Bit $tmp955 = *(&local2);
bool $tmp956 = $tmp955.value;
if ($tmp956) goto block4; else goto block5;
block4:;
// line 573
org$pandalanguage$pandac$parser$Parser** $tmp957 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp958 = *$tmp957;
$fn960 $tmp959 = ($fn960) param0->$class->vtable[16];
panda$core$String* $tmp961 = $tmp959(param0, $tmp958);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp961));
// line 574
org$pandalanguage$pandac$ASTNode* $tmp962 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp962));
// unreffing file
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp963 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp963));
// unreffing text
*(&local0) = ((panda$core$String*) NULL);
return;
block5:;
// line 577
panda$threads$MessageQueue** $tmp964 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp965 = *$tmp964;
panda$threads$MessageQueue$clear($tmp965);
// line 578
org$pandalanguage$pandac$parser$Parser** $tmp966 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp967 = *$tmp966;
panda$io$File** $tmp968 = &param0->source;
panda$io$File* $tmp969 = *$tmp968;
panda$core$String* $tmp970 = *(&local0);
org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String($tmp967, $tmp969, $tmp970);
// line 579
goto block6;
block6:;
org$pandalanguage$pandac$parser$Parser** $tmp971 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp972 = *$tmp971;
org$pandalanguage$pandac$parser$Token $tmp973 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token($tmp972);
org$pandalanguage$pandac$parser$Token$Kind $tmp974 = $tmp973.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp975;
$tmp975 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp975->value = $tmp974;
panda$core$Int64 $tmp976 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp977 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp976);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp978;
$tmp978 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp978->value = $tmp977;
ITable* $tmp979 = ((panda$core$Equatable*) $tmp975)->$class->itable;
while ($tmp979->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp979 = $tmp979->next;
}
$fn981 $tmp980 = $tmp979->methods[1];
panda$core$Bit $tmp982 = $tmp980(((panda$core$Equatable*) $tmp975), ((panda$core$Equatable*) $tmp978));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp975)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp978)));
bool $tmp983 = $tmp982.value;
if ($tmp983) goto block9; else goto block10;
block9:;
panda$threads$MessageQueue** $tmp984 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp985 = *$tmp984;
panda$core$Int64 $tmp986 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp985);
panda$core$Int64 $tmp987 = (panda$core$Int64) {0};
panda$core$Bit $tmp988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp986, $tmp987);
*(&local3) = $tmp988;
goto block11;
block10:;
*(&local3) = $tmp982;
goto block11;
block11:;
panda$core$Bit $tmp989 = *(&local3);
bool $tmp990 = $tmp989.value;
if ($tmp990) goto block7; else goto block8;
block7:;
// line 580
org$pandalanguage$pandac$parser$Parser** $tmp991 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp992 = *$tmp991;
org$pandalanguage$pandac$ASTNode* $tmp993 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q($tmp992);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp993));
goto block6;
block8:;
// line 582
panda$threads$MessageQueue** $tmp994 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp995 = *$tmp994;
panda$core$Int64 $tmp996 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp995);
panda$core$Int64 $tmp997 = (panda$core$Int64) {0};
panda$core$Bit $tmp998 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp996, $tmp997);
bool $tmp999 = $tmp998.value;
if ($tmp999) goto block12; else goto block13;
block12:;
// line 583
org$pandalanguage$pandac$parser$Parser** $tmp1000 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1001 = *$tmp1000;
$fn1003 $tmp1002 = ($fn1003) param0->$class->vtable[16];
panda$core$String* $tmp1004 = $tmp1002(param0, $tmp1001);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1004));
// line 584
org$pandalanguage$pandac$ASTNode* $tmp1005 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1005));
// unreffing file
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1006 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1006));
// unreffing text
*(&local0) = ((panda$core$String*) NULL);
return;
block13:;
// line 587
panda$threads$MessageQueue** $tmp1007 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1008 = *$tmp1007;
panda$threads$MessageQueue$clear($tmp1008);
// line 588
org$pandalanguage$pandac$parser$Parser** $tmp1009 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1010 = *$tmp1009;
panda$io$File** $tmp1011 = &param0->source;
panda$io$File* $tmp1012 = *$tmp1011;
panda$core$String* $tmp1013 = *(&local0);
org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String($tmp1010, $tmp1012, $tmp1013);
// line 589
goto block14;
block14:;
org$pandalanguage$pandac$parser$Parser** $tmp1014 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1015 = *$tmp1014;
org$pandalanguage$pandac$parser$Token $tmp1016 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token($tmp1015);
org$pandalanguage$pandac$parser$Token$Kind $tmp1017 = $tmp1016.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1018;
$tmp1018 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1018->value = $tmp1017;
panda$core$Int64 $tmp1019 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp1020 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1019);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1021;
$tmp1021 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1021->value = $tmp1020;
ITable* $tmp1022 = ((panda$core$Equatable*) $tmp1018)->$class->itable;
while ($tmp1022->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1022 = $tmp1022->next;
}
$fn1024 $tmp1023 = $tmp1022->methods[1];
panda$core$Bit $tmp1025 = $tmp1023(((panda$core$Equatable*) $tmp1018), ((panda$core$Equatable*) $tmp1021));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1018)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1021)));
bool $tmp1026 = $tmp1025.value;
if ($tmp1026) goto block17; else goto block18;
block17:;
panda$threads$MessageQueue** $tmp1027 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1028 = *$tmp1027;
panda$core$Int64 $tmp1029 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp1028);
panda$core$Int64 $tmp1030 = (panda$core$Int64) {0};
panda$core$Bit $tmp1031 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1029, $tmp1030);
*(&local4) = $tmp1031;
goto block19;
block18:;
*(&local4) = $tmp1025;
goto block19;
block19:;
panda$core$Bit $tmp1032 = *(&local4);
bool $tmp1033 = $tmp1032.value;
if ($tmp1033) goto block15; else goto block16;
block15:;
// line 590
org$pandalanguage$pandac$parser$Parser** $tmp1034 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1035 = *$tmp1034;
org$pandalanguage$pandac$ASTNode* $tmp1036 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q($tmp1035);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1036));
goto block14;
block16:;
// line 592
panda$threads$MessageQueue** $tmp1037 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1038 = *$tmp1037;
panda$core$Int64 $tmp1039 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp1038);
panda$core$Int64 $tmp1040 = (panda$core$Int64) {0};
panda$core$Bit $tmp1041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1039, $tmp1040);
bool $tmp1042 = $tmp1041.value;
if ($tmp1042) goto block20; else goto block21;
block20:;
// line 593
org$pandalanguage$pandac$parser$Parser** $tmp1043 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1044 = *$tmp1043;
$fn1046 $tmp1045 = ($fn1046) param0->$class->vtable[16];
panda$core$String* $tmp1047 = $tmp1045(param0, $tmp1044);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1047));
// line 594
org$pandalanguage$pandac$ASTNode* $tmp1048 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1048));
// unreffing file
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1049 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1049));
// unreffing text
*(&local0) = ((panda$core$String*) NULL);
return;
block21:;
// line 597
panda$threads$MessageQueue** $tmp1050 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1051 = *$tmp1050;
panda$threads$MessageQueue$clear($tmp1051);
// line 598
org$pandalanguage$pandac$parser$Parser** $tmp1052 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1053 = *$tmp1052;
panda$io$File** $tmp1054 = &param0->source;
panda$io$File* $tmp1055 = *$tmp1054;
panda$core$String* $tmp1056 = *(&local0);
org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String($tmp1053, $tmp1055, $tmp1056);
// line 599
goto block22;
block22:;
// line 600
org$pandalanguage$pandac$parser$Parser** $tmp1057 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1058 = *$tmp1057;
org$pandalanguage$pandac$parser$Token $tmp1059 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token($tmp1058);
*(&local5) = $tmp1059;
// line 601
org$pandalanguage$pandac$parser$Token $tmp1060 = *(&local5);
org$pandalanguage$pandac$parser$Token$Kind $tmp1061 = $tmp1060.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1062;
$tmp1062 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1062->value = $tmp1061;
panda$core$Int64 $tmp1063 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp1064 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1063);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1065;
$tmp1065 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1065->value = $tmp1064;
ITable* $tmp1066 = ((panda$core$Equatable*) $tmp1062)->$class->itable;
while ($tmp1066->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1066 = $tmp1066->next;
}
$fn1068 $tmp1067 = $tmp1066->methods[0];
panda$core$Bit $tmp1069 = $tmp1067(((panda$core$Equatable*) $tmp1062), ((panda$core$Equatable*) $tmp1065));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1062)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1065)));
bool $tmp1070 = $tmp1069.value;
if ($tmp1070) goto block24; else goto block25;
block24:;
// line 602
goto block23;
block25:;
goto block22;
block23:;
// line 605
org$pandalanguage$pandac$parser$Parser** $tmp1071 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1072 = *$tmp1071;
$fn1074 $tmp1073 = ($fn1074) param0->$class->vtable[16];
panda$core$String* $tmp1075 = $tmp1073(param0, $tmp1072);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1075));
org$pandalanguage$pandac$ASTNode* $tmp1076 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1076));
// unreffing file
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1077 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1077));
// unreffing text
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$encodeCode$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 611
panda$core$RegularExpression* $tmp1078 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1078, &$s1079);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1078, &$s1080);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1078));
// line 612
$fn1082 $tmp1081 = ($fn1082) param0->$class->vtable[17];
$tmp1081(param0, param1);
// line 613
panda$core$MutableString$replace$panda$core$String$panda$core$String(param1, &$s1083, &$s1084);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doLists$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$Int64 local0;
panda$core$String* local1 = NULL;
panda$core$RegularExpression* local2 = NULL;
panda$core$RegularExpression* local3 = NULL;
// line 617
panda$core$Int64 $tmp1085 = (panda$core$Int64) {4};
panda$core$Int64 $tmp1086 = (panda$core$Int64) {1};
int64_t $tmp1087 = $tmp1085.value;
int64_t $tmp1088 = $tmp1086.value;
int64_t $tmp1089 = $tmp1087 - $tmp1088;
panda$core$Int64 $tmp1090 = (panda$core$Int64) {$tmp1089};
*(&local0) = $tmp1090;
// line 619
panda$core$Int64 $tmp1091 = *(&local0);
panda$core$Int64$wrapper* $tmp1092;
$tmp1092 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp1092->value = $tmp1091;
panda$core$String* $tmp1093 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1094, ((panda$core$Object*) $tmp1092));
panda$core$String* $tmp1095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1093, &$s1096);
panda$core$String* $tmp1097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1095, &$s1098);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp1099 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1099));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1097));
*(&local1) = $tmp1097;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1092));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1093));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1095));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1097));
// line 642
panda$core$Int64* $tmp1100 = &param0->listLevel;
panda$core$Int64 $tmp1101 = *$tmp1100;
panda$core$Int64 $tmp1102 = (panda$core$Int64) {0};
int64_t $tmp1103 = $tmp1101.value;
int64_t $tmp1104 = $tmp1102.value;
bool $tmp1105 = $tmp1103 > $tmp1104;
panda$core$Bit $tmp1106 = (panda$core$Bit) {$tmp1105};
bool $tmp1107 = $tmp1106.value;
if ($tmp1107) goto block1; else goto block3;
block1:;
// line 643
panda$core$RegularExpression* $tmp1108 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1109 = *(&local1);
panda$core$String* $tmp1110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1111, $tmp1109);
panda$core$String* $tmp1112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1110, &$s1113);
panda$core$RegularExpression$init$panda$core$String($tmp1108, $tmp1112);
*(&local2) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1114 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1114));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1108));
*(&local2) = $tmp1108;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1108));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1110));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1112));
// line 644
panda$core$RegularExpression* $tmp1115 = *(&local2);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure12* $tmp1116 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure12*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure12$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure12$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1116, param0);
panda$core$MutableMethod* $tmp1118 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1118, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure12$$anonymous11$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp1116));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1115, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1118)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1116));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1118));
panda$core$RegularExpression* $tmp1119 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1119));
// unreffing matchStartOfLine
*(&local2) = ((panda$core$RegularExpression*) NULL);
goto block2;
block3:;
// line 1
// line 670
panda$core$RegularExpression* $tmp1120 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1121 = *(&local1);
panda$core$String* $tmp1122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1123, $tmp1121);
panda$core$RegularExpression$init$panda$core$String($tmp1120, $tmp1122);
*(&local3) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1124 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1124));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1120));
*(&local3) = $tmp1120;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1120));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1122));
// line 671
panda$core$RegularExpression* $tmp1125 = *(&local3);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure14* $tmp1126 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure14*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure14$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure14$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1126, param0);
panda$core$MutableMethod* $tmp1128 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1128, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure14$$anonymous13$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp1126));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1125, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1128)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1126));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1128));
panda$core$RegularExpression* $tmp1129 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1129));
// unreffing matchStartOfLine
*(&local3) = ((panda$core$RegularExpression*) NULL);
goto block2;
block2:;
panda$core$String* $tmp1130 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1130));
// unreffing wholeList
*(&local1) = ((panda$core$String*) NULL);
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$processListItems$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$String* param1) {

panda$core$String* local0 = NULL;
panda$core$RegularExpression* local1 = NULL;
// line 712
panda$core$Int64* $tmp1131 = &param0->listLevel;
panda$core$Int64 $tmp1132 = *$tmp1131;
panda$core$Int64 $tmp1133 = (panda$core$Int64) {1};
int64_t $tmp1134 = $tmp1132.value;
int64_t $tmp1135 = $tmp1133.value;
int64_t $tmp1136 = $tmp1134 + $tmp1135;
panda$core$Int64 $tmp1137 = (panda$core$Int64) {$tmp1136};
panda$core$Int64* $tmp1138 = &param0->listLevel;
*$tmp1138 = $tmp1137;
// line 715
panda$core$RegularExpression* $tmp1139 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1139, &$s1140);
panda$core$String* $tmp1141 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(param1, $tmp1139, &$s1142);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp1143 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1143));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1141));
*(&local0) = $tmp1141;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1139));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1141));
// line 717
panda$core$RegularExpression* $tmp1144 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1146, &$s1147);
panda$core$String* $tmp1148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1145, &$s1149);
panda$core$Int64 $tmp1150 = (panda$core$Int64) {1};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1144, $tmp1148, $tmp1150);
*(&local1) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1151 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1151));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1144));
*(&local1) = $tmp1144;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1144));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1145));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1148));
// line 722
panda$core$String* $tmp1152 = *(&local0);
panda$core$RegularExpression* $tmp1153 = *(&local1);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure16* $tmp1154 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure16*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure16$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure16$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1154, param0);
panda$core$MutableMethod* $tmp1156 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1156, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure16$$anonymous15$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1154));
panda$core$String* $tmp1157 = panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String($tmp1152, $tmp1153, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1156)));
panda$core$String* $tmp1158 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1158));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1157));
*(&local0) = $tmp1157;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1154));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1156));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1157));
// line 739
panda$core$Int64* $tmp1159 = &param0->listLevel;
panda$core$Int64 $tmp1160 = *$tmp1159;
panda$core$Int64 $tmp1161 = (panda$core$Int64) {1};
int64_t $tmp1162 = $tmp1160.value;
int64_t $tmp1163 = $tmp1161.value;
int64_t $tmp1164 = $tmp1162 - $tmp1163;
panda$core$Int64 $tmp1165 = (panda$core$Int64) {$tmp1164};
panda$core$Int64* $tmp1166 = &param0->listLevel;
*$tmp1166 = $tmp1165;
// line 740
panda$core$String* $tmp1167 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1167));
panda$core$RegularExpression* $tmp1168 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1168));
// unreffing p
*(&local1) = ((panda$core$RegularExpression*) NULL);
panda$core$String* $tmp1169 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1169));
// unreffing list
*(&local0) = ((panda$core$String*) NULL);
return $tmp1167;

}
panda$core$Bit org$pandalanguage$pandac$pandadoc$Markdown$hasParagraphBreak$panda$core$MutableString$R$panda$core$Bit(panda$core$MutableString* param0) {

// line 745
panda$core$Bit $tmp1170 = panda$core$MutableString$contains$panda$core$String$R$panda$core$Bit(param0, &$s1171);
return $tmp1170;

}
panda$core$Bit org$pandalanguage$pandac$pandadoc$Markdown$isEmptyString$panda$core$String$Q$R$panda$core$Bit(panda$core$String* param0) {

panda$core$Bit local0;
// line 750
panda$core$Bit $tmp1172 = panda$core$Bit$init$builtin_bit(param0 == NULL);
bool $tmp1173 = $tmp1172.value;
if ($tmp1173) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1172;
goto block3;
block2:;
panda$core$Bit $tmp1174 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(param0, &$s1175);
*(&local0) = $tmp1174;
goto block3;
block3:;
panda$core$Bit $tmp1176 = *(&local0);
return $tmp1176;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doHeaders$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
// line 755
panda$core$RegularExpression* $tmp1177 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1177, &$s1178);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure18* $tmp1179 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure18*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure18$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure18$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1179, param0);
panda$core$MutableMethod* $tmp1181 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1181, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure18$$anonymous17$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1179));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1177, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1181)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1177));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1179));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1181));
// line 760
panda$core$RegularExpression* $tmp1182 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1182, &$s1183);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure20* $tmp1184 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure20*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure20$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure20$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1184, param0);
panda$core$MutableMethod* $tmp1186 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1186, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure20$$anonymous19$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1184));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1182, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1186)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1182));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1184));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1186));
// line 767
panda$core$RegularExpression* $tmp1187 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$Int64 $tmp1188 = (panda$core$Int64) {1};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1187, &$s1189, $tmp1188);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1190 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1190));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1187));
*(&local0) = $tmp1187;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1187));
// line 768
panda$core$RegularExpression* $tmp1191 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure22* $tmp1192 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure22*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure22$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure22$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1192, param0);
panda$core$MutableMethod* $tmp1194 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1194, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure22$$anonymous21$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp1192));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1191, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1194)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1192));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1194));
panda$core$RegularExpression* $tmp1195 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1195));
// unreffing p
*(&local0) = ((panda$core$RegularExpression*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$runSpanGamut$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 779
$fn1197 $tmp1196 = ($fn1197) param0->$class->vtable[24];
$tmp1196(param0, param1);
// line 780
$fn1199 $tmp1198 = ($fn1199) param0->$class->vtable[29];
$tmp1198(param0, param1);
// line 781
$fn1201 $tmp1200 = ($fn1201) param0->$class->vtable[3];
$tmp1200(param0, param1);
// line 783
$fn1203 $tmp1202 = ($fn1203) param0->$class->vtable[25];
$tmp1202(param0, param1);
// line 784
$fn1205 $tmp1204 = ($fn1205) param0->$class->vtable[26];
$tmp1204(param0, param1);
// line 785
$fn1207 $tmp1206 = ($fn1207) param0->$class->vtable[10];
$tmp1206(param0, param1);
// line 791
$fn1209 $tmp1208 = ($fn1209) param0->$class->vtable[24];
$tmp1208(param0, param1);
// line 793
$fn1211 $tmp1210 = ($fn1211) param0->$class->vtable[28];
$tmp1210(param0, param1);
// line 794
$fn1213 $tmp1212 = ($fn1213) param0->$class->vtable[27];
$tmp1212(param0, param1);
// line 796
panda$core$RegularExpression* $tmp1214 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1214, &$s1215);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1214, &$s1216);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1214));
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$nestedTagsRegex$panda$core$Int64$R$panda$core$String(panda$core$Int64 param0) {

// line 806
panda$core$Int64 $tmp1217 = (panda$core$Int64) {0};
panda$core$Bit $tmp1218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(param0, $tmp1217);
bool $tmp1219 = $tmp1218.value;
if ($tmp1219) goto block1; else goto block3;
block1:;
// line 807
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1220));
return &$s1221;
block3:;
// line 1
// line 810
panda$core$Int64 $tmp1222 = (panda$core$Int64) {1};
int64_t $tmp1223 = param0.value;
int64_t $tmp1224 = $tmp1222.value;
int64_t $tmp1225 = $tmp1223 - $tmp1224;
panda$core$Int64 $tmp1226 = (panda$core$Int64) {$tmp1225};
panda$core$String* $tmp1227 = org$pandalanguage$pandac$pandadoc$Markdown$nestedTagsRegex$panda$core$Int64$R$panda$core$String($tmp1226);
panda$core$String* $tmp1228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1229, $tmp1227);
panda$core$String* $tmp1230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1228, &$s1231);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1230));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1227));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1228));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1230));
return $tmp1230;
block2:;
panda$core$Bit $tmp1232 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1233 = $tmp1232.value;
if ($tmp1233) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp1234 = (panda$core$Int64) {805};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1235, $tmp1234, &$s1236);
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
// line 815
panda$collections$Array* $tmp1237 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1237);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1238 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1238));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1237));
*(&local0) = $tmp1237;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1237));
// line 816
panda$core$Int64 $tmp1239 = (panda$core$Int64) {6};
panda$core$String* $tmp1240 = org$pandalanguage$pandac$pandadoc$Markdown$nestedTagsRegex$panda$core$Int64$R$panda$core$String($tmp1239);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp1241 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1241));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1240));
*(&local1) = $tmp1240;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1240));
// line 818
panda$core$RegularExpression* $tmp1242 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1244, &$s1245);
panda$core$String* $tmp1246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1243, &$s1247);
panda$core$String* $tmp1248 = *(&local1);
panda$core$String* $tmp1249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1246, $tmp1248);
panda$core$Int64 $tmp1250 = (panda$core$Int64) {2};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1242, $tmp1249, $tmp1250);
*(&local2) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1251 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1251));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1242));
*(&local2) = $tmp1242;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1242));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1243));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1246));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1249));
// line 826
panda$core$RegularExpression* $tmp1252 = *(&local2);
panda$core$Matcher* $tmp1253 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher($tmp1252, param1);
*(&local3) = ((panda$core$Matcher*) NULL);
panda$core$Matcher* $tmp1254 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1254));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1253));
*(&local3) = $tmp1253;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1253));
// line 827
panda$core$String$Index $tmp1255 = panda$core$String$get_start$R$panda$core$String$Index(param1);
*(&local4) = $tmp1255;
// line 828
goto block1;
block1:;
panda$core$Matcher* $tmp1256 = *(&local3);
panda$core$Bit $tmp1257 = panda$core$Matcher$find$R$panda$core$Bit($tmp1256);
bool $tmp1258 = $tmp1257.value;
if ($tmp1258) goto block2; else goto block3;
block2:;
// line 829
panda$core$String$Index $tmp1259 = *(&local4);
panda$core$String$Index$wrapper* $tmp1260;
$tmp1260 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp1260->value = $tmp1259;
panda$core$Matcher* $tmp1261 = *(&local3);
panda$core$String$Index $tmp1262;
panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1262, $tmp1261);
panda$core$String$Index$wrapper* $tmp1263;
$tmp1263 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp1263->value = $tmp1262;
ITable* $tmp1264 = ((panda$core$Comparable*) $tmp1260)->$class->itable;
while ($tmp1264->$class != (panda$core$Class*) &panda$core$Comparable$class) {
    $tmp1264 = $tmp1264->next;
}
$fn1266 $tmp1265 = $tmp1264->methods[1];
panda$core$Bit $tmp1267 = $tmp1265(((panda$core$Comparable*) $tmp1260), ((panda$core$Comparable*) $tmp1263));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp1260)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp1263)));
bool $tmp1268 = $tmp1267.value;
if ($tmp1268) goto block4; else goto block5;
block4:;
// line 830
panda$collections$Array* $tmp1269 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1270 = (org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class);
panda$core$Int64 $tmp1271 = (panda$core$Int64) {1};
panda$core$String$Index $tmp1272 = *(&local4);
panda$core$Matcher* $tmp1273 = *(&local3);
panda$core$String$Index $tmp1274;
panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1274, $tmp1273);
panda$core$Bit $tmp1275 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp1276 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp1272, $tmp1274, $tmp1275);
panda$core$String* $tmp1277 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param1, $tmp1276);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String($tmp1270, $tmp1271, $tmp1277);
panda$collections$Array$add$panda$collections$Array$T($tmp1269, ((panda$core$Object*) $tmp1270));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1270));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1277));
goto block5;
block5:;
// line 832
panda$collections$Array* $tmp1278 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1279 = (org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class);
panda$core$Int64 $tmp1280 = (panda$core$Int64) {0};
panda$core$Matcher* $tmp1281 = *(&local3);
panda$core$String$Index $tmp1282;
panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1282, $tmp1281);
panda$core$Matcher* $tmp1283 = *(&local3);
panda$core$String$Index $tmp1284;
panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1284, $tmp1283);
panda$core$Bit $tmp1285 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp1286 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp1282, $tmp1284, $tmp1285);
panda$core$String* $tmp1287 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param1, $tmp1286);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String($tmp1279, $tmp1280, $tmp1287);
panda$collections$Array$add$panda$collections$Array$T($tmp1278, ((panda$core$Object*) $tmp1279));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1279));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1287));
// line 833
panda$core$Matcher* $tmp1288 = *(&local3);
panda$core$String$Index $tmp1289;
panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1289, $tmp1288);
*(&local4) = $tmp1289;
goto block1;
block3:;
// line 835
panda$core$String$Index $tmp1290 = *(&local4);
panda$core$String$Index$wrapper* $tmp1291;
$tmp1291 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp1291->value = $tmp1290;
panda$core$String$Index $tmp1292 = panda$core$String$get_end$R$panda$core$String$Index(param1);
panda$core$String$Index$wrapper* $tmp1293;
$tmp1293 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp1293->value = $tmp1292;
ITable* $tmp1294 = ((panda$core$Comparable*) $tmp1291)->$class->itable;
while ($tmp1294->$class != (panda$core$Class*) &panda$core$Comparable$class) {
    $tmp1294 = $tmp1294->next;
}
$fn1296 $tmp1295 = $tmp1294->methods[1];
panda$core$Bit $tmp1297 = $tmp1295(((panda$core$Comparable*) $tmp1291), ((panda$core$Comparable*) $tmp1293));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp1291)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp1293)));
bool $tmp1298 = $tmp1297.value;
if ($tmp1298) goto block6; else goto block7;
block6:;
// line 836
panda$collections$Array* $tmp1299 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1300 = (org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class);
panda$core$Int64 $tmp1301 = (panda$core$Int64) {1};
panda$core$String$Index $tmp1302 = *(&local4);
panda$core$String$Index $tmp1303 = panda$core$String$get_end$R$panda$core$String$Index(param1);
panda$core$Bit $tmp1304 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp1305 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp1302, $tmp1303, $tmp1304);
panda$core$String* $tmp1306 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param1, $tmp1305);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String($tmp1300, $tmp1301, $tmp1306);
panda$collections$Array$add$panda$collections$Array$T($tmp1299, ((panda$core$Object*) $tmp1300));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1300));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1306));
goto block7;
block7:;
// line 839
panda$collections$Array* $tmp1307 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp1307)));
panda$core$Matcher* $tmp1308 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1308));
// unreffing m
*(&local3) = ((panda$core$Matcher*) NULL);
panda$core$RegularExpression* $tmp1309 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1309));
// unreffing p
*(&local2) = ((panda$core$RegularExpression*) NULL);
panda$core$String* $tmp1310 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1310));
// unreffing nestedTags
*(&local1) = ((panda$core$String*) NULL);
panda$collections$Array* $tmp1311 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1311));
// unreffing tokens
*(&local0) = ((panda$collections$Array*) NULL);
return ((panda$collections$ListView*) $tmp1307);

}
void org$pandalanguage$pandac$pandadoc$Markdown$escapeSpecialCharsWithinTagAttributes$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$collections$ListView* local0 = NULL;
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
panda$core$String* local4 = NULL;
// line 852
panda$core$String* $tmp1312 = panda$core$MutableString$convert$R$panda$core$String(param1);
$fn1314 $tmp1313 = ($fn1314) param0->$class->vtable[23];
panda$collections$ListView* $tmp1315 = $tmp1313(param0, $tmp1312);
*(&local0) = ((panda$collections$ListView*) NULL);
panda$collections$ListView* $tmp1316 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1316));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1315));
*(&local0) = $tmp1315;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1312));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1315));
// line 853
panda$core$MutableString$clear(param1);
// line 855
panda$collections$ListView* $tmp1317 = *(&local0);
ITable* $tmp1318 = ((panda$collections$Iterable*) $tmp1317)->$class->itable;
while ($tmp1318->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1318 = $tmp1318->next;
}
$fn1320 $tmp1319 = $tmp1318->methods[0];
panda$collections$Iterator* $tmp1321 = $tmp1319(((panda$collections$Iterable*) $tmp1317));
goto block1;
block1:;
ITable* $tmp1322 = $tmp1321->$class->itable;
while ($tmp1322->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1322 = $tmp1322->next;
}
$fn1324 $tmp1323 = $tmp1322->methods[0];
panda$core$Bit $tmp1325 = $tmp1323($tmp1321);
bool $tmp1326 = $tmp1325.value;
if ($tmp1326) goto block3; else goto block2;
block2:;
*(&local1) = ((org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) NULL);
ITable* $tmp1327 = $tmp1321->$class->itable;
while ($tmp1327->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1327 = $tmp1327->next;
}
$fn1329 $tmp1328 = $tmp1327->methods[1];
panda$core$Object* $tmp1330 = $tmp1328($tmp1321);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1331 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1331));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) $tmp1330)));
*(&local1) = ((org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) $tmp1330);
// line 856
*(&local2) = ((panda$core$String*) NULL);
// line 857
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1332 = *(&local1);
panda$core$Int64* $tmp1333 = &$tmp1332->$rawValue;
panda$core$Int64 $tmp1334 = *$tmp1333;
panda$core$Int64 $tmp1335 = (panda$core$Int64) {0};
panda$core$Bit $tmp1336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1334, $tmp1335);
bool $tmp1337 = $tmp1336.value;
if ($tmp1337) goto block5; else goto block6;
block5:;
panda$core$String** $tmp1338 = (panda$core$String**) ($tmp1332->$data + 0);
panda$core$String* $tmp1339 = *$tmp1338;
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp1340 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1340));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1339));
*(&local3) = $tmp1339;
// line 859
panda$core$String* $tmp1341 = *(&local3);
panda$core$String* $tmp1342 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1342));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1341));
*(&local2) = $tmp1341;
// line 860
panda$core$String* $tmp1343 = *(&local2);
org$pandalanguage$pandac$pandadoc$Protector** $tmp1344 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp1345 = *$tmp1344;
$fn1347 $tmp1346 = ($fn1347) $tmp1345->$class->vtable[2];
panda$core$String* $tmp1348 = $tmp1346($tmp1345, &$s1349);
panda$core$String* $tmp1350 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1343, &$s1351, $tmp1348);
panda$core$String* $tmp1352 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1352));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1350));
*(&local2) = $tmp1350;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1348));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1350));
// line 861
panda$core$String* $tmp1353 = *(&local2);
org$pandalanguage$pandac$pandadoc$Protector** $tmp1354 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp1355 = *$tmp1354;
$fn1357 $tmp1356 = ($fn1357) $tmp1355->$class->vtable[2];
panda$core$String* $tmp1358 = $tmp1356($tmp1355, &$s1359);
panda$core$String* $tmp1360 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1353, &$s1361, $tmp1358);
panda$core$String* $tmp1362 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1362));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1360));
*(&local2) = $tmp1360;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1358));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1360));
// line 862
panda$core$String* $tmp1363 = *(&local2);
org$pandalanguage$pandac$pandadoc$Protector** $tmp1364 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp1365 = *$tmp1364;
$fn1367 $tmp1366 = ($fn1367) $tmp1365->$class->vtable[2];
panda$core$String* $tmp1368 = $tmp1366($tmp1365, &$s1369);
panda$core$String* $tmp1370 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1363, &$s1371, $tmp1368);
panda$core$String* $tmp1372 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1372));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1370));
*(&local2) = $tmp1370;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1368));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1370));
// line 863
panda$core$String* $tmp1373 = *(&local2);
org$pandalanguage$pandac$pandadoc$Protector** $tmp1374 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp1375 = *$tmp1374;
$fn1377 $tmp1376 = ($fn1377) $tmp1375->$class->vtable[2];
panda$core$String* $tmp1378 = $tmp1376($tmp1375, &$s1379);
panda$core$String* $tmp1380 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1373, &$s1381, $tmp1378);
panda$core$String* $tmp1382 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1382));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1380));
*(&local2) = $tmp1380;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1378));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1380));
panda$core$String* $tmp1383 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1383));
// unreffing text
*(&local3) = ((panda$core$String*) NULL);
goto block4;
block6:;
panda$core$Int64 $tmp1384 = (panda$core$Int64) {1};
panda$core$Bit $tmp1385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1334, $tmp1384);
bool $tmp1386 = $tmp1385.value;
if ($tmp1386) goto block7; else goto block4;
block7:;
panda$core$String** $tmp1387 = (panda$core$String**) ($tmp1332->$data + 0);
panda$core$String* $tmp1388 = *$tmp1387;
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp1389 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1389));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1388));
*(&local4) = $tmp1388;
// line 865
panda$core$String* $tmp1390 = *(&local4);
panda$core$String* $tmp1391 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1391));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1390));
*(&local2) = $tmp1390;
panda$core$String* $tmp1392 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1392));
// unreffing text
*(&local4) = ((panda$core$String*) NULL);
goto block4;
block4:;
// line 867
panda$core$String* $tmp1393 = *(&local2);
panda$core$MutableString$append$panda$core$String(param1, $tmp1393);
panda$core$Panda$unref$panda$core$Object$Q($tmp1330);
panda$core$String* $tmp1394 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1394));
// unreffing value
*(&local2) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1395 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1395));
// unreffing token
*(&local1) = ((org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1321));
panda$collections$ListView* $tmp1396 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1396));
// unreffing tokens
*(&local0) = ((panda$collections$ListView*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doImages$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
// line 873
panda$core$RegularExpression* $tmp1397 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1397, &$s1398);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1397, &$s1399);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1397));
// line 874
panda$core$RegularExpression* $tmp1400 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1400, &$s1401);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1400, &$s1402);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1400));
// line 877
panda$core$RegularExpression* $tmp1403 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1405, &$s1406);
panda$core$String* $tmp1407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1404, &$s1408);
panda$core$String* $tmp1409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1407, &$s1410);
panda$core$RegularExpression$init$panda$core$String($tmp1403, $tmp1409);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1411 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1411));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1403));
*(&local0) = $tmp1403;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1403));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1404));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1407));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1409));
// line 882
panda$core$RegularExpression* $tmp1412 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure24* $tmp1413 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure24*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure24$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure24$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1413, param0);
panda$core$MutableMethod* $tmp1415 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1415, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure24$$anonymous23$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1413));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1412, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1415)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1413));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1415));
panda$core$RegularExpression* $tmp1416 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1416));
// unreffing imageLink
*(&local0) = ((panda$core$RegularExpression*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doAnchors$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
panda$core$RegularExpression* local1 = NULL;
panda$core$RegularExpression* local2 = NULL;
// line 915
panda$core$RegularExpression* $tmp1417 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1419, &$s1420);
panda$core$String* $tmp1421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1418, &$s1422);
panda$core$String* $tmp1423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1421, &$s1424);
panda$core$RegularExpression$init$panda$core$String($tmp1417, $tmp1423);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1425 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1425));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1417));
*(&local0) = $tmp1417;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1417));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1418));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1421));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1423));
// line 920
panda$core$RegularExpression* $tmp1426 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure26* $tmp1427 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure26*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure26$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure26$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1427, param0);
panda$core$MutableMethod* $tmp1429 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1429, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure26$$anonymous25$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp1427));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1426, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1429)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1427));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1429));
// line 952
panda$core$RegularExpression* $tmp1430 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1432, &$s1433);
panda$core$String* $tmp1434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1431, &$s1435);
panda$core$String* $tmp1436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1434, &$s1437);
panda$core$String* $tmp1438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1436, &$s1439);
panda$core$String* $tmp1440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1438, &$s1441);
panda$core$String* $tmp1442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1440, &$s1443);
panda$core$String* $tmp1444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1442, &$s1445);
panda$core$String* $tmp1446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1444, &$s1447);
panda$core$String* $tmp1448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1446, &$s1449);
panda$core$String* $tmp1450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1448, &$s1451);
panda$core$String* $tmp1452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1450, &$s1453);
panda$core$Int64 $tmp1454 = (panda$core$Int64) {4};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1430, $tmp1452, $tmp1454);
*(&local1) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1455 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1455));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1430));
*(&local1) = $tmp1430;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1430));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1431));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1434));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1436));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1438));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1440));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1442));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1444));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1446));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1448));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1450));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1452));
// line 966
panda$core$RegularExpression* $tmp1456 = *(&local1);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure28* $tmp1457 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure28*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure28$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure28$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1457, param0);
panda$core$MutableMethod* $tmp1459 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1459, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure28$$anonymous27$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1457));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1456, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1459)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1457));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1459));
// line 1003
panda$core$RegularExpression* $tmp1460 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1462, &$s1463);
panda$core$String* $tmp1464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1461, &$s1465);
panda$core$String* $tmp1466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1464, &$s1467);
panda$core$Int64 $tmp1468 = (panda$core$Int64) {4};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1460, $tmp1466, $tmp1468);
*(&local2) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1469 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1469));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1460));
*(&local2) = $tmp1460;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1460));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1461));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1464));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1466));
// line 1009
panda$core$RegularExpression* $tmp1470 = *(&local2);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure30* $tmp1471 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure30*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure30$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure30$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1471, param0);
panda$core$MutableMethod* $tmp1473 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1473, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure30$$anonymous29$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp1471));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1470, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1473)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1471));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1473));
panda$core$RegularExpression* $tmp1474 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1474));
// unreffing referenceShortcut
*(&local2) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1475 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1475));
// unreffing inlineLink
*(&local1) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1476 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1476));
// unreffing internalLink
*(&local0) = ((panda$core$RegularExpression*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doItalicsAndBold$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 1051
panda$core$RegularExpression* $tmp1477 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1477, &$s1478);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1477, &$s1479);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1477));
// line 1052
panda$core$RegularExpression* $tmp1480 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1480, &$s1481);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1480, &$s1482);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1480));
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$encodeAmpsAndAngles$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 1058
panda$core$RegularExpression* $tmp1483 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1483, &$s1484);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1483, &$s1485);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1483));
// line 1059
panda$core$RegularExpression* $tmp1486 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1486, &$s1487);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1486, &$s1488);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1486));
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doCodeSpans$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 1063
panda$core$RegularExpression* $tmp1489 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1489, &$s1490);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure32* $tmp1491 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure32*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure32$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure32$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1491, param0);
panda$core$MutableMethod* $tmp1493 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1493, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure32$$anonymous31$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1491));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1489, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1493)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1489));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1491));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1493));
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$cleanup(org$pandalanguage$pandac$pandadoc$Markdown* param0) {

panda$io$File** $tmp1494 = &param0->source;
panda$io$File* $tmp1495 = *$tmp1494;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1495));
panda$threads$MessageQueue** $tmp1496 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1497 = *$tmp1496;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1497));
org$pandalanguage$pandac$parser$Parser** $tmp1498 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1499 = *$tmp1498;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1499));
panda$core$MutableMethod** $tmp1500 = &param0->linkResolver;
panda$core$MutableMethod* $tmp1501 = *$tmp1500;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1501));
panda$collections$HashMap** $tmp1502 = &param0->linkDefinitions;
panda$collections$HashMap* $tmp1503 = *$tmp1502;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1503));
org$pandalanguage$pandac$pandadoc$Protector** $tmp1504 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp1505 = *$tmp1504;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1505));
org$pandalanguage$pandac$pandadoc$Protector** $tmp1506 = &param0->htmlProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp1507 = *$tmp1506;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1507));
panda$math$Random** $tmp1508 = &param0->random;
panda$math$Random* $tmp1509 = *$tmp1508;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1509));
return;

}

