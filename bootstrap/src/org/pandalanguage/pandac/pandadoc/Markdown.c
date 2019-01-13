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
typedef void (*$fn467)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn503)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$core$String* (*$fn515)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure6*, panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn524)(panda$collections$MapView*);
typedef panda$core$Bit (*$fn528)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn533)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn540)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn551)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn555)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn560)(panda$collections$Iterator*);
typedef panda$core$Real64 (*$fn566)(panda$math$Random*);
typedef panda$core$Object* (*$fn622)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure9*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn628)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn659)(panda$collections$ListView*);
typedef panda$core$String* (*$fn680)(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer*, panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn694)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn698)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn703)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn714)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn724)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn738)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn830)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn838)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn846)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn854)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn862)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Bit (*$fn873)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn883)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn906)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn916)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn931)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn970)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$Bit (*$fn991)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn1015)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$Bit (*$fn1036)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn1060)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$Bit (*$fn1082)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn1090)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1098)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Object* (*$fn1133)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure12*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn1143)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure14*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1171)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure16*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1196)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure18*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1201)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure20*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn1209)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure22*, panda$collections$ListView*);
typedef void (*$fn1213)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1215)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1217)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1219)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1221)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1223)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1225)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1227)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1229)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Bit (*$fn1282)(panda$core$Comparable*, panda$core$Comparable*);
typedef panda$core$Bit (*$fn1312)(panda$core$Comparable*, panda$core$Comparable*);
typedef panda$collections$ListView* (*$fn1330)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1336)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1340)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1345)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1363)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1373)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1383)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1393)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1430)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure24*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn1444)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure26*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1474)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure28*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn1488)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure30*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1508)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure32*, panda$collections$ListView*);

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
static panda$core$String $s576 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x23", 2, 14074, NULL };
static panda$core$String $s582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s591 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x23\x78", 3, 1421594, NULL };
static panda$core$String $s596 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78", 1, 221, NULL };
static panda$core$String $s598 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s607 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x5b\x20\x09\x5d\x2a\x3e\x5b\x20\x09\x5d\x3f", 12, -3582088860114369432, NULL };
static panda$core$String $s609 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2b\x5c\x6e", 4, 151902292, NULL };
static panda$core$String $s611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2e\x2b\x5c\x6e\x29\x2a", 7, 150162376369015, NULL };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x2a", 3, 1979945, NULL };
static panda$core$String $s615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2b", 2, 14385, NULL };
static panda$core$String $s617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s637 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s658 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2e\x2a\x3f\x29\x5c\x74", 7, 150162241731241, NULL };
static panda$core$String $s662 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x5c\x74\x7c\x5b\x20\x5d\x7b\x31\x2c\x34\x7d\x29", 18, 7461573203115413830, NULL };
static panda$core$String $s663 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s666 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x5c\x6e\x5c\x6e\x7c\x5c\x41\x29\x28\x28\x3f\x3a", 15, -8559916856311689575, NULL };
static panda$core$String $s667 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x5b\x20\x5d\x7b\x34\x7d\x29", 10, 7324185912868193391, NULL };
static panda$core$String $s669 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2a\x5c\x6e\x2b", 5, 15341101234, NULL };
static panda$core$String $s671 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2b", 2, 14385, NULL };
static panda$core$String $s673 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x3f\x3d\x5e\x5b\x20\x5d\x7b\x30\x2c\x34\x7d\x5c\x53\x29\x7c\x5c\x5a\x29", 20, -1268815784794221538, NULL };
static panda$core$String $s684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x6e\x64\x61\x63\x6f\x64\x65\x22\x3e", 24, -1375153472772145809, NULL };
static panda$core$String $s729 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s756 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6d\x6d\x65\x6e\x74\x22\x3e", 22, -1756050522877089685, NULL };
static panda$core$String $s761 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x22\x3e", 25, 4577563245309187979, NULL };
static panda$core$String $s766 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x22\x3e", 25, 6760721592980043958, NULL };
static panda$core$String $s771 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x4e\x61\x6d\x65\x22\x3e", 28, 5111374842590752150, NULL };
static panda$core$String $s776 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x74\x79\x70\x65\x22\x3e", 19, -6878895466207673670, NULL };
static panda$core$String $s781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6b\x65\x79\x77\x6f\x72\x64\x22\x3e", 22, -1670481277391576067, NULL };
static panda$core$String $s786 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6e\x74\x72\x6f\x6c\x22\x3e", 22, -1756049386432501671, NULL };
static panda$core$String $s791 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x74\x65\x72\x61\x6c\x22\x3e", 22, -1659229352682266791, NULL };
static panda$core$String $s796 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x73\x74\x72\x69\x6e\x67\x22\x3e", 21, -198306892965556893, NULL };
static panda$core$String $s801 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6f\x70\x65\x72\x61\x74\x6f\x72\x22\x3e", 23, 1793793249967207580, NULL };
static panda$core$String $s806 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x61\x62\x65\x6c\x22\x3e", 20, 6207823968128210400, NULL };
static panda$core$String $s810 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s818 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s819 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s821 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s824 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s825 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x67\x74\x3b", 4, 144274317, NULL };
static panda$core$String $s832 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s833 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s840 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s841 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s848 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s849 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5b", 2, 19584, NULL };
static panda$core$String $s856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s857 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5d", 2, 19586, NULL };
static panda$core$String $s864 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s865 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s894 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22", 13, -8467438715157355368, NULL };
static panda$core$String $s896 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e", 2, 13697, NULL };
static panda$core$String $s921 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s935 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s937 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s1095 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x24\x28\x5c\x73\x2a\x29\x5c\x2e\x5c\x2e\x5c\x2e\x28\x5c\x73\x2a\x29\x5e", 22, -7048023396403805866, NULL };
static panda$core$String $s1096 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x31\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d\x24\x32", 13, -8807464024981417766, NULL };
static panda$core$String $s1099 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d", 9, 1585511400200274083, NULL };
static panda$core$String $s1100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x65\x6c\x6c\x69\x70\x73\x69\x73\x22\x3e\x2e\x2e\x2e\x3c\x2f\x73\x70\x61\x6e\x3e", 33, 5749756206725659630, NULL };
static panda$core$String $s1110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x5b\x20\x5d\x7b\x30\x2c", 8, 15160529116888912, NULL };
static panda$core$String $s1112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x28\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x29\x5b\x20\x5d\x2b\x29\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x7a\x7c\x5c\x6e\x7b\x32\x2c\x7d", 42, -5883137854691898449, NULL };
static panda$core$String $s1114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x53\x29\x28\x3f\x21\x5b\x20\x5d\x2a\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b\x29\x29\x29", 36, 8434742182533998850, NULL };
static panda$core$String $s1127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e", 5, 14738541648, NULL };
static panda$core$String $s1129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29\x7c\x5c\x41\x5c\x6e\x3f\x29", 23, 6260301638587013175, NULL };
static panda$core$String $s1156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d\x5c\x7a", 8, 20810277504230859, NULL };
static panda$core$String $s1158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x6e\x29\x3f\x5e\x28\x5b\x20\x5c\x74\x5d\x2a\x29\x28\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b", 32, 116054090365740223, NULL };
static panda$core$String $s1163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x6e\x7b\x31\x2c\x32\x7d\x29\x29", 19, 4304152477369649477, NULL };
static panda$core$String $s1165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2a\x28\x5c\x7a\x7c\x5c\x32\x28\x5b\x2d\x2b\x5c\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5c\x74\x5d\x2b\x29\x29", 35, -2157463411774501410, NULL };
static panda$core$String $s1187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static panda$core$String $s1191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x3d\x3d\x3d\x3d\x2b\x24", 17, 8644226230150951458, NULL };
static panda$core$String $s1199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x2d\x2d\x2d\x2d\x2b\x24", 17, 8644226060307728994, NULL };
static panda$core$String $s1205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x28\x23\x7b\x31\x2c\x36\x7d\x29\x5c\x73\x2a\x28\x2e\x2a\x3f\x29\x5c\x73\x2a\x5c\x31\x3f\x24", 24, 6625741561155563100, NULL };
static panda$core$String $s1231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x32\x2c\x7d\x5c\x6e", 7, 142480172029377, NULL };
static panda$core$String $s1232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x62\x72\x20\x2f\x3e\x0a", 8, 14324133278249456, NULL };
static panda$core$String $s1236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x3c\x5b\x61\x2d\x7a\x2f\x21\x24\x5d\x28\x3f\x3a\x5b\x5e\x3c\x3e\x5d\x7c", 21, -3726567012419943545, NULL };
static panda$core$String $s1247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2a\x3e\x29", 4, 146737487, NULL };
static panda$core$String $s1251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s1252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x6e\x65\x73\x74\x65\x64\x54\x61\x67\x73\x52\x65\x67\x65\x78\x28\x64\x65\x70\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 134, 6382497733495402167, NULL };
static panda$core$String $s1260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x73\x3a\x3c\x21\x28\x2d\x2d\x2e\x2a\x3f\x2d\x2d\x5c\x73\x2a\x29\x2b\x3e\x29\x7c", 22, -7717011245258052727, NULL };
static panda$core$String $s1261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x73\x3a\x3c\x5c\x3f\x2e\x2a\x3f\x5c\x3f\x3e\x29", 14, -1964502928120912323, NULL };
static panda$core$String $s1263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s1367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s1375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x60", 1, 197, NULL };
static panda$core$String $s1377 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x60", 1, 197, NULL };
static panda$core$String $s1385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s1387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s1395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s1397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s1414 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x20\x5c\x22\x28\x2e\x2a\x29\x5c\x22\x5c\x5c\x29", 30, 1507772917981139974, NULL };
static panda$core$String $s1415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x74\x69\x74\x6c\x65\x3d\x22\x24\x33\x22\x20\x2f\x3e", 36, -5185982321426610333, NULL };
static panda$core$String $s1417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x5c\x5c\x29", 21, -5830152919387063515, NULL };
static panda$core$String $s1418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x2f\x3e", 25, -7685348581218553223, NULL };
static panda$core$String $s1421 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5b\x21\x5d\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 13, -4389225286389518346, NULL };
static panda$core$String $s1422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f", 15, -5004708712015115107, NULL };
static panda$core$String $s1424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 9, 2099712822272888901, NULL };
static panda$core$String $s1426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 10, 7641698408407002113, NULL };
static panda$core$String $s1436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f", 15, -5004708712015115107, NULL };
static panda$core$String $s1438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 9, 2099712822272888901, NULL };
static panda$core$String $s1440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 10, 7641698408407002113, NULL };
static panda$core$String $s1449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x28", 2, 19533, NULL };
static panda$core$String $s1451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a", 6, 2021365209467, NULL };
static panda$core$String $s1453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3f\x28\x2e\x2a\x3f\x29\x3e\x3f", 9, 1750196697486000581, NULL };
static panda$core$String $s1455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a", 6, 2021365209467, NULL };
static panda$core$String $s1457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5b\x27\x22\x5d\x29", 6, 1491434205139, NULL };
static panda$core$String $s1461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2e\x2a\x3f\x29", 5, 14720345233, NULL };
static panda$core$String $s1463 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x35", 2, 19546, NULL };
static panda$core$String $s1465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3f", 2, 14405, NULL };
static panda$core$String $s1467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x29", 2, 19534, NULL };
static panda$core$String $s1469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x5b", 3, 1447724, NULL };
static panda$core$String $s1479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5b\x5e\x5c\x5b\x5c\x5d\x5d\x2b\x29", 10, 7631247159193161743, NULL };
static panda$core$String $s1481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5d", 2, 19586, NULL };
static panda$core$String $s1483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x2a\x5c\x5c\x2a\x7c\x5f\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x5b\x2a\x5f\x5d\x2a\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 35, 636172404878895653, NULL };
static panda$core$String $s1495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x74\x72\x6f\x6e\x67\x3e\x24\x32\x3c\x2f\x73\x74\x72\x6f\x6e\x67\x3e", 19, 504491683038092400, NULL };
static panda$core$String $s1497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x2a\x7c\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 26, -4247179954659836315, NULL };
static panda$core$String $s1498 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x6d\x3e\x24\x32\x3c\x2f\x65\x6d\x3e", 11, 2723679958089201678, NULL };
static panda$core$String $s1500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x28\x3f\x21\x23\x3f\x5b\x78\x58\x5d\x3f\x28\x3f\x3a\x5b\x30\x2d\x39\x61\x2d\x66\x41\x2d\x46\x5d\x2b\x7c\x5c\x77\x2b\x29\x3b\x29", 33, -6716186838887255919, NULL };
static panda$core$String $s1501 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s1503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28\x3f\x21\x5b\x61\x2d\x7a\x41\x2d\x5a\x2f\x3f\x5c\x24\x21\x5d\x29", 18, 6433614010358842861, NULL };
static panda$core$String $s1504 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s1506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3c\x21\x5c\x5c\x29\x28\x60\x2b\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x21\x60\x29\x5c\x31\x28\x3f\x21\x60\x29", 29, 7657757978565690602, NULL };

void org$pandalanguage$pandac$pandadoc$Markdown$init(org$pandalanguage$pandac$pandadoc$Markdown* param0) {

// line 120
org$pandalanguage$pandac$pandadoc$Markdown$init$$LPpanda$core$String$RP$EQ$AM$GT$LPpanda$core$String$Q$RP$Q(param0, ((panda$core$MutableMethod*) NULL));
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$init$$LPpanda$core$String$RP$EQ$AM$GT$LPpanda$core$String$Q$RP$Q(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableMethod* param1) {

// line 98
panda$threads$MessageQueue* $tmp2 = (panda$threads$MessageQueue*) pandaObjectAlloc(56, (panda$core$Class*) &panda$threads$MessageQueue$class);
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
org$pandalanguage$pandac$parser$Parser* $tmp6 = (org$pandalanguage$pandac$parser$Parser*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$class);
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
panda$collections$HashMap* $tmp12 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
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
org$pandalanguage$pandac$pandadoc$Protector* $tmp16 = (org$pandalanguage$pandac$pandadoc$Protector*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Protector$class);
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
org$pandalanguage$pandac$pandadoc$Protector* $tmp20 = (org$pandalanguage$pandac$pandadoc$Protector*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Protector$class);
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
panda$io$File* $tmp30 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
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
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp40 = (org$pandalanguage$pandac$parser$SyntaxHighlighter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$class);
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
panda$core$MutableString* $tmp44 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
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
panda$core$RegularExpression* $tmp47 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp47, &$s48);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String($tmp46, $tmp47, &$s49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
// unreffing REF($15:panda.core.RegularExpression)
// line 132
panda$core$MutableString* $tmp50 = *(&local0);
panda$core$RegularExpression* $tmp51 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp51, &$s52);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String($tmp50, $tmp51, &$s53);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
// unreffing REF($23:panda.core.RegularExpression)
// line 133
panda$core$MutableString* $tmp54 = *(&local0);
panda$core$RegularExpression* $tmp55 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
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
panda$core$RegularExpression* $tmp64 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
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
panda$core$RegularExpression* $tmp120 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s122, param3);
panda$core$Char8 $tmp123 = *(&local0);
panda$core$Char8$wrapper* $tmp124;
$tmp124 = (panda$core$Char8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Char8$wrapperclass);
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
panda$core$RegularExpression* $tmp137 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
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
org$pandalanguage$pandac$pandadoc$Markdown$_Closure2* $tmp150 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure2*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure2$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure2$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp150, param0);
panda$core$MutableMethod* $tmp152 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
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
panda$collections$Array* $tmp168 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
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
panda$core$RegularExpression* $tmp191 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
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
panda$collections$Array* $tmp200 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
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
panda$collections$Array* $tmp242 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
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
org$pandalanguage$pandac$pandadoc$Markdown$_Closure4* $tmp295 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure4*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure4$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure4$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp295, param0);
panda$core$MutableMethod* $tmp297 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
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
panda$core$Int64 $tmp409 = panda$core$MutableString$get_byteLength$R$panda$core$Int64(param1);
panda$core$Int64 $tmp410 = (panda$core$Int64) {0};
panda$core$Bit $tmp411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp409, $tmp410);
bool $tmp412 = $tmp411.value;
if ($tmp412) goto block1; else goto block3;
block1:;
// line 337
panda$collections$Array* $tmp413 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
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
panda$collections$Array* $tmp415 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$String* $tmp416 = panda$core$MutableString$convert$R$panda$core$String(param1);
panda$core$RegularExpression* $tmp417 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
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
panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T($tmp459, $tmp460, ((panda$core$Object*) $tmp461));
goto block10;
block11:;
// line 1
// line 348
panda$core$MutableString* $tmp462 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$String* $tmp463 = *(&local2);
panda$core$MutableString$init$panda$core$String($tmp462, $tmp463);
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp462));
panda$core$MutableString* $tmp464 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp464));
*(&local4) = $tmp462;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp462));
// unreffing REF($143:panda.core.MutableString)
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
// unreffing REF($167:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp471));
// unreffing REF($166:panda.core.String)
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp510));
panda$core$RegularExpression* $tmp512 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp512));
*(&local0) = $tmp510;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp510));
// unreffing REF($8:panda.core.RegularExpression)
// line 359
panda$core$RegularExpression* $tmp513 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure6* $tmp514 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure6*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure6$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure6$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp514, param0);
panda$core$MutableMethod* $tmp516 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp516, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure6$$anonymous5$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp514));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp513, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp516)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp516));
// unreffing REF($25:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp514));
// unreffing REF($22:org.pandalanguage.pandac.pandadoc.Markdown._Closure6)
panda$core$RegularExpression* $tmp517 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp517));
// unreffing email
*(&local0) = ((panda$core$RegularExpression*) NULL);
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
ITable* $tmp522 = ((panda$collections$MapView*) $tmp521)->$class->itable;
while ($tmp522->$class != (panda$core$Class*) &panda$collections$MapView$class) {
    $tmp522 = $tmp522->next;
}
$fn524 $tmp523 = $tmp522->methods[3];
panda$collections$Iterator* $tmp525 = $tmp523(((panda$collections$MapView*) $tmp521));
goto block1;
block1:;
ITable* $tmp526 = $tmp525->$class->itable;
while ($tmp526->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp526 = $tmp526->next;
}
$fn528 $tmp527 = $tmp526->methods[0];
panda$core$Bit $tmp529 = $tmp527($tmp525);
bool $tmp530 = $tmp529.value;
if ($tmp530) goto block3; else goto block2;
block2:;
*(&local0) = ((panda$core$String*) NULL);
ITable* $tmp531 = $tmp525->$class->itable;
while ($tmp531->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp531 = $tmp531->next;
}
$fn533 $tmp532 = $tmp531->methods[1];
panda$core$Object* $tmp534 = $tmp532($tmp525);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp534)));
panda$core$String* $tmp535 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp535));
*(&local0) = ((panda$core$String*) $tmp534);
// line 371
org$pandalanguage$pandac$pandadoc$Protector** $tmp536 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp537 = *$tmp536;
panda$core$String* $tmp538 = *(&local0);
$fn540 $tmp539 = ($fn540) $tmp537->$class->vtable[3];
panda$core$String* $tmp541 = $tmp539($tmp537, $tmp538);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp541));
panda$core$String* $tmp542 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp542));
*(&local1) = $tmp541;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp541));
// unreffing REF($31:panda.core.String?)
// line 372
panda$core$String* $tmp543 = *(&local0);
panda$core$String* $tmp544 = *(&local1);
panda$core$MutableString$replace$panda$core$String$panda$core$String(param1, $tmp543, $tmp544);
panda$core$String* $tmp545 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp545));
// unreffing plaintext
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp534);
// unreffing REF($18:panda.collections.Iterator.T)
panda$core$String* $tmp546 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp546));
// unreffing hash
*(&local0) = ((panda$core$String*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp525));
// unreffing REF($7:panda.collections.Iterator<panda.collections.MapView.K>)
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$encodeEmail$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$String* param1) {

panda$core$MutableString* local0 = NULL;
panda$core$Char32 local1;
panda$core$Real64 local2;
// line 377
panda$core$MutableString* $tmp547 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp547);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp547));
panda$core$MutableString* $tmp548 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp548));
*(&local0) = $tmp547;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp547));
// unreffing REF($1:panda.core.MutableString)
// line 378
ITable* $tmp549 = ((panda$collections$Iterable*) param1)->$class->itable;
while ($tmp549->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp549 = $tmp549->next;
}
$fn551 $tmp550 = $tmp549->methods[0];
panda$collections$Iterator* $tmp552 = $tmp550(((panda$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp553 = $tmp552->$class->itable;
while ($tmp553->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp553 = $tmp553->next;
}
$fn555 $tmp554 = $tmp553->methods[0];
panda$core$Bit $tmp556 = $tmp554($tmp552);
bool $tmp557 = $tmp556.value;
if ($tmp557) goto block3; else goto block2;
block2:;
ITable* $tmp558 = $tmp552->$class->itable;
while ($tmp558->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp558 = $tmp558->next;
}
$fn560 $tmp559 = $tmp558->methods[1];
panda$core$Object* $tmp561 = $tmp559($tmp552);
*(&local1) = ((panda$core$Char32$wrapper*) $tmp561)->value;
// line 380
panda$math$Random** $tmp562 = &param0->random;
panda$math$Random* $tmp563 = *$tmp562;
ITable* $tmp564 = $tmp563->$class->itable;
while ($tmp564->$class != (panda$core$Class*) &panda$math$Random$class) {
    $tmp564 = $tmp564->next;
}
$fn566 $tmp565 = $tmp564->methods[5];
panda$core$Real64 $tmp567 = $tmp565($tmp563);
*(&local2) = $tmp567;
// line 381
panda$core$Real64 $tmp568 = *(&local2);
panda$core$Real64 $tmp569 = (panda$core$Real64) {0.45};
double $tmp570 = $tmp568.value;
double $tmp571 = $tmp569.value;
bool $tmp572 = $tmp570 < $tmp571;
panda$core$Bit $tmp573 = (panda$core$Bit) {$tmp572};
bool $tmp574 = $tmp573.value;
if ($tmp574) goto block4; else goto block6;
block4:;
// line 382
panda$core$MutableString* $tmp575 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp575, &$s576);
// line 383
panda$core$MutableString* $tmp577 = *(&local0);
panda$core$Char32 $tmp578 = *(&local1);
panda$core$Int32 $tmp579 = panda$core$Char32$convert$R$panda$core$Int32($tmp578);
panda$core$Int32$wrapper* $tmp580;
$tmp580 = (panda$core$Int32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$Int32$wrapperclass);
$tmp580->value = $tmp579;
panda$core$MutableString$append$panda$core$Object($tmp577, ((panda$core$Object*) $tmp580));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp580));
// unreffing REF($52:panda.core.Object)
// line 384
panda$core$MutableString* $tmp581 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp581, &$s582);
goto block5;
block6:;
// line 386
panda$core$Real64 $tmp583 = *(&local2);
panda$core$Real64 $tmp584 = (panda$core$Real64) {0.9};
double $tmp585 = $tmp583.value;
double $tmp586 = $tmp584.value;
bool $tmp587 = $tmp585 < $tmp586;
panda$core$Bit $tmp588 = (panda$core$Bit) {$tmp587};
bool $tmp589 = $tmp588.value;
if ($tmp589) goto block7; else goto block9;
block7:;
// line 387
panda$core$MutableString* $tmp590 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp590, &$s591);
// line 388
panda$core$MutableString* $tmp592 = *(&local0);
panda$core$Char32 $tmp593 = *(&local1);
panda$core$Int32 $tmp594 = panda$core$Char32$convert$R$panda$core$Int32($tmp593);
panda$core$String* $tmp595 = panda$core$Int32$format$panda$core$String$R$panda$core$String($tmp594, &$s596);
panda$core$MutableString$append$panda$core$String($tmp592, $tmp595);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp595));
// unreffing REF($77:panda.core.String)
// line 389
panda$core$MutableString* $tmp597 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp597, &$s598);
goto block8;
block9:;
// line 1
// line 392
panda$core$MutableString* $tmp599 = *(&local0);
panda$core$Char32 $tmp600 = *(&local1);
panda$core$MutableString$append$panda$core$Char32($tmp599, $tmp600);
goto block8;
block8:;
goto block5;
block5:;
panda$core$Panda$unref$panda$core$Object$Q($tmp561);
// unreffing REF($27:panda.collections.Iterator.T)
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp552));
// unreffing REF($17:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 395
panda$core$MutableString* $tmp601 = *(&local0);
panda$core$String* $tmp602 = panda$core$MutableString$convert$R$panda$core$String($tmp601);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp602));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp602));
// unreffing REF($102:panda.core.String)
panda$core$MutableString* $tmp603 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp603));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp602;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doBlockQuotes$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
// line 399
panda$core$RegularExpression* $tmp604 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s606, &$s607);
panda$core$String* $tmp608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp605, &$s609);
panda$core$String* $tmp610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp608, &$s611);
panda$core$String* $tmp612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp610, &$s613);
panda$core$String* $tmp614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp612, &$s615);
panda$core$String* $tmp616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp614, &$s617);
panda$core$Int64 $tmp618 = (panda$core$Int64) {1};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp604, $tmp616, $tmp618);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp604));
panda$core$RegularExpression* $tmp619 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp619));
*(&local0) = $tmp604;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp616));
// unreffing REF($7:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp614));
// unreffing REF($6:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp612));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp610));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp608));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp605));
// unreffing REF($2:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp604));
// unreffing REF($1:panda.core.RegularExpression)
// line 408
panda$core$RegularExpression* $tmp620 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure9* $tmp621 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure9*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure9$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure9$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp621, param0);
panda$core$MutableMethod* $tmp623 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp623, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure9$$anonymous7$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp621));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp620, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp623)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp623));
// unreffing REF($43:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp621));
// unreffing REF($40:org.pandalanguage.pandac.pandadoc.Markdown._Closure9)
panda$core$RegularExpression* $tmp624 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp624));
// unreffing p
*(&local0) = ((panda$core$RegularExpression*) NULL);
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$$anonymous10$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(panda$collections$ListView* param0) {

panda$core$String* local0 = NULL;
panda$core$Int64 local1;
panda$core$MutableString* local2 = NULL;
// line 423
panda$core$Int64 $tmp625 = (panda$core$Int64) {1};
ITable* $tmp626 = param0->$class->itable;
while ($tmp626->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp626 = $tmp626->next;
}
$fn628 $tmp627 = $tmp626->methods[0];
panda$core$Object* $tmp629 = $tmp627(param0, $tmp625);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp629)));
panda$core$String* $tmp630 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp630));
*(&local0) = ((panda$core$String*) $tmp629);
panda$core$Panda$unref$panda$core$Object$Q($tmp629);
// unreffing REF($4:panda.collections.ListView.T)
// line 424
panda$core$String* $tmp631 = *(&local0);
panda$core$Int64 $tmp632 = panda$core$String$get_length$R$panda$core$Int64($tmp631);
*(&local1) = $tmp632;
// line 425
panda$core$MutableString* $tmp633 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$String* $tmp634 = *(&local0);
panda$core$MutableString$init$panda$core$String($tmp633, $tmp634);
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp633));
panda$core$MutableString* $tmp635 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp635));
*(&local2) = $tmp633;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp633));
// unreffing REF($22:panda.core.MutableString)
// line 426
goto block1;
block1:;
// line 427
panda$core$MutableString* $tmp636 = *(&local2);
panda$core$MutableString$append$panda$core$String($tmp636, &$s637);
// line 428
panda$core$Int64 $tmp638 = *(&local1);
panda$core$Int64 $tmp639 = (panda$core$Int64) {1};
int64_t $tmp640 = $tmp638.value;
int64_t $tmp641 = $tmp639.value;
int64_t $tmp642 = $tmp640 + $tmp641;
panda$core$Int64 $tmp643 = (panda$core$Int64) {$tmp642};
*(&local1) = $tmp643;
goto block2;
block2:;
panda$core$Int64 $tmp644 = *(&local1);
panda$core$Int64 $tmp645 = (panda$core$Int64) {4};
panda$core$Int64 $tmp646 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp644, $tmp645);
panda$core$Int64 $tmp647 = (panda$core$Int64) {0};
int64_t $tmp648 = $tmp646.value;
int64_t $tmp649 = $tmp647.value;
bool $tmp650 = $tmp648 != $tmp649;
panda$core$Bit $tmp651 = (panda$core$Bit) {$tmp650};
bool $tmp652 = $tmp651.value;
if ($tmp652) goto block1; else goto block3;
block3:;
// line 431
panda$core$MutableString* $tmp653 = *(&local2);
panda$core$String* $tmp654 = panda$core$MutableString$convert$R$panda$core$String($tmp653);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp654));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp654));
// unreffing REF($62:panda.core.String)
panda$core$MutableString* $tmp655 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp655));
// unreffing replacement
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$String* $tmp656 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp656));
// unreffing lineSoFar
*(&local0) = ((panda$core$String*) NULL);
return $tmp654;

}
void org$pandalanguage$pandac$pandadoc$Markdown$detabify$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 422
panda$core$RegularExpression* $tmp657 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp657, &$s658);
panda$core$Method* $tmp660 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp660, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$$anonymous10$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Immutable*) NULL));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp657, ((panda$core$MutableMethod*) $tmp660));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp660));
// unreffing REF($4:panda.core.Method)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp657));
// unreffing REF($1:panda.core.RegularExpression)
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$outdent$panda$core$MutableString(panda$core$MutableString* param0) {

// line 437
panda$core$RegularExpression* $tmp661 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp661, &$s662);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param0, $tmp661, &$s663);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp661));
// unreffing REF($1:panda.core.RegularExpression)
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doCodeBlocks$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
// line 493
panda$core$RegularExpression* $tmp664 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s666, &$s667);
panda$core$String* $tmp668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp665, &$s669);
panda$core$String* $tmp670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp668, &$s671);
panda$core$String* $tmp672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp670, &$s673);
panda$core$String* $tmp674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp672, &$s675);
panda$core$Int64 $tmp676 = (panda$core$Int64) {1};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp664, $tmp674, $tmp676);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp664));
panda$core$RegularExpression* $tmp677 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp677));
*(&local0) = $tmp664;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp674));
// unreffing REF($6:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp672));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp670));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp668));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp665));
// unreffing REF($2:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp664));
// unreffing REF($1:panda.core.RegularExpression)
// line 501
panda$core$RegularExpression* $tmp678 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* $tmp679 = (org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$class);
org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp679, param0);
panda$core$MutableMethod* $tmp681 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp681, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$replacement$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp679));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp678, $tmp681);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp681));
// unreffing REF($39:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp679));
// unreffing REF($36:org.pandalanguage.pandac.pandadoc.Markdown.CodeReplacer)
panda$core$RegularExpression* $tmp682 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp682));
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
panda$core$MutableString* $tmp683 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp683, &$s684);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp683));
panda$core$MutableString* $tmp685 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp685));
*(&local0) = $tmp683;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp683));
// unreffing REF($1:panda.core.MutableString)
// line 506
panda$core$Int64 $tmp686 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp687 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp686);
*(&local1) = $tmp687;
// line 507
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp688 = &param1->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp689 = *$tmp688;
panda$collections$Array** $tmp690 = &$tmp689->tokens;
panda$collections$Array* $tmp691 = *$tmp690;
ITable* $tmp692 = ((panda$collections$Iterable*) $tmp691)->$class->itable;
while ($tmp692->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp692 = $tmp692->next;
}
$fn694 $tmp693 = $tmp692->methods[0];
panda$collections$Iterator* $tmp695 = $tmp693(((panda$collections$Iterable*) $tmp691));
goto block1;
block1:;
ITable* $tmp696 = $tmp695->$class->itable;
while ($tmp696->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp696 = $tmp696->next;
}
$fn698 $tmp697 = $tmp696->methods[0];
panda$core$Bit $tmp699 = $tmp697($tmp695);
bool $tmp700 = $tmp699.value;
if ($tmp700) goto block3; else goto block2;
block2:;
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
ITable* $tmp701 = $tmp695->$class->itable;
while ($tmp701->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp701 = $tmp701->next;
}
$fn703 $tmp702 = $tmp701->methods[1];
panda$core$Object* $tmp704 = $tmp702($tmp695);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Pair*) $tmp704)));
org$pandalanguage$pandac$Pair* $tmp705 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp705));
*(&local2) = ((org$pandalanguage$pandac$Pair*) $tmp704);
// line 508
org$pandalanguage$pandac$Pair* $tmp706 = *(&local2);
panda$core$Object** $tmp707 = &$tmp706->second;
panda$core$Object* $tmp708 = *$tmp707;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp709;
$tmp709 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp709->value = ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp708)->value;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp710 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp711;
$tmp711 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp711->value = $tmp710;
ITable* $tmp712 = ((panda$core$Equatable*) $tmp709)->$class->itable;
while ($tmp712->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp712 = $tmp712->next;
}
$fn714 $tmp713 = $tmp712->methods[1];
panda$core$Bit $tmp715 = $tmp713(((panda$core$Equatable*) $tmp709), ((panda$core$Equatable*) $tmp711));
bool $tmp716 = $tmp715.value;
if ($tmp716) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp717 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp718;
$tmp718 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp718->value = $tmp717;
panda$core$Int64 $tmp719 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp720 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp719);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp721;
$tmp721 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp721->value = $tmp720;
ITable* $tmp722 = ((panda$core$Equatable*) $tmp718)->$class->itable;
while ($tmp722->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp722 = $tmp722->next;
}
$fn724 $tmp723 = $tmp722->methods[1];
panda$core$Bit $tmp725 = $tmp723(((panda$core$Equatable*) $tmp718), ((panda$core$Equatable*) $tmp721));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp721)));
// unreffing REF($64:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp718)));
// unreffing REF($60:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
*(&local3) = $tmp725;
goto block8;
block7:;
*(&local3) = $tmp715;
goto block8;
block8:;
panda$core$Bit $tmp726 = *(&local3);
bool $tmp727 = $tmp726.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp711)));
// unreffing REF($54:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp709)));
// unreffing REF($51:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
if ($tmp727) goto block4; else goto block5;
block4:;
// line 509
panda$core$MutableString* $tmp728 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp728, &$s729);
goto block5;
block5:;
// line 511
org$pandalanguage$pandac$Pair* $tmp730 = *(&local2);
panda$core$Object** $tmp731 = &$tmp730->second;
panda$core$Object* $tmp732 = *$tmp731;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp733;
$tmp733 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp733->value = ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp732)->value;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp734 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp735;
$tmp735 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp735->value = $tmp734;
ITable* $tmp736 = ((panda$core$Equatable*) $tmp733)->$class->itable;
while ($tmp736->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp736 = $tmp736->next;
}
$fn738 $tmp737 = $tmp736->methods[1];
panda$core$Bit $tmp739 = $tmp737(((panda$core$Equatable*) $tmp733), ((panda$core$Equatable*) $tmp735));
bool $tmp740 = $tmp739.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp735)));
// unreffing REF($99:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp733)));
// unreffing REF($96:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
if ($tmp740) goto block9; else goto block10;
block9:;
// line 512
org$pandalanguage$pandac$Pair* $tmp741 = *(&local2);
panda$core$Object** $tmp742 = &$tmp741->second;
panda$core$Object* $tmp743 = *$tmp742;
*(&local1) = ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp743)->value;
// line 513
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp744 = *(&local1);
panda$core$Int64 $tmp745 = $tmp744.$rawValue;
panda$core$Int64 $tmp746 = (panda$core$Int64) {0};
panda$core$Bit $tmp747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp745, $tmp746);
bool $tmp748 = $tmp747.value;
if ($tmp748) goto block12; else goto block13;
block12:;
goto block11;
block13:;
panda$core$Int64 $tmp749 = (panda$core$Int64) {1};
panda$core$Bit $tmp750 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp745, $tmp749);
bool $tmp751 = $tmp750.value;
if ($tmp751) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp752 = (panda$core$Int64) {2};
panda$core$Bit $tmp753 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp745, $tmp752);
bool $tmp754 = $tmp753.value;
if ($tmp754) goto block14; else goto block16;
block14:;
// line 518
panda$core$MutableString* $tmp755 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp755, &$s756);
goto block11;
block16:;
panda$core$Int64 $tmp757 = (panda$core$Int64) {3};
panda$core$Bit $tmp758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp745, $tmp757);
bool $tmp759 = $tmp758.value;
if ($tmp759) goto block17; else goto block18;
block17:;
// line 521
panda$core$MutableString* $tmp760 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp760, &$s761);
goto block11;
block18:;
panda$core$Int64 $tmp762 = (panda$core$Int64) {4};
panda$core$Bit $tmp763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp745, $tmp762);
bool $tmp764 = $tmp763.value;
if ($tmp764) goto block19; else goto block20;
block19:;
// line 524
panda$core$MutableString* $tmp765 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp765, &$s766);
goto block11;
block20:;
panda$core$Int64 $tmp767 = (panda$core$Int64) {5};
panda$core$Bit $tmp768 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp745, $tmp767);
bool $tmp769 = $tmp768.value;
if ($tmp769) goto block21; else goto block22;
block21:;
// line 527
panda$core$MutableString* $tmp770 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp770, &$s771);
goto block11;
block22:;
panda$core$Int64 $tmp772 = (panda$core$Int64) {6};
panda$core$Bit $tmp773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp745, $tmp772);
bool $tmp774 = $tmp773.value;
if ($tmp774) goto block23; else goto block24;
block23:;
// line 530
panda$core$MutableString* $tmp775 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp775, &$s776);
goto block11;
block24:;
panda$core$Int64 $tmp777 = (panda$core$Int64) {7};
panda$core$Bit $tmp778 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp745, $tmp777);
bool $tmp779 = $tmp778.value;
if ($tmp779) goto block25; else goto block26;
block25:;
// line 533
panda$core$MutableString* $tmp780 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp780, &$s781);
goto block11;
block26:;
panda$core$Int64 $tmp782 = (panda$core$Int64) {8};
panda$core$Bit $tmp783 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp745, $tmp782);
bool $tmp784 = $tmp783.value;
if ($tmp784) goto block27; else goto block28;
block27:;
// line 536
panda$core$MutableString* $tmp785 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp785, &$s786);
goto block11;
block28:;
panda$core$Int64 $tmp787 = (panda$core$Int64) {9};
panda$core$Bit $tmp788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp745, $tmp787);
bool $tmp789 = $tmp788.value;
if ($tmp789) goto block29; else goto block30;
block29:;
// line 539
panda$core$MutableString* $tmp790 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp790, &$s791);
goto block11;
block30:;
panda$core$Int64 $tmp792 = (panda$core$Int64) {10};
panda$core$Bit $tmp793 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp745, $tmp792);
bool $tmp794 = $tmp793.value;
if ($tmp794) goto block31; else goto block32;
block31:;
// line 542
panda$core$MutableString* $tmp795 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp795, &$s796);
goto block11;
block32:;
panda$core$Int64 $tmp797 = (panda$core$Int64) {11};
panda$core$Bit $tmp798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp745, $tmp797);
bool $tmp799 = $tmp798.value;
if ($tmp799) goto block33; else goto block34;
block33:;
// line 545
panda$core$MutableString* $tmp800 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp800, &$s801);
goto block11;
block34:;
panda$core$Int64 $tmp802 = (panda$core$Int64) {12};
panda$core$Bit $tmp803 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp745, $tmp802);
bool $tmp804 = $tmp803.value;
if ($tmp804) goto block35; else goto block36;
block35:;
// line 548
panda$core$MutableString* $tmp805 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp805, &$s806);
goto block11;
block36:;
// line 551
panda$core$Bit $tmp807 = panda$core$Bit$init$builtin_bit(false);
bool $tmp808 = $tmp807.value;
if ($tmp808) goto block37; else goto block38;
block38:;
panda$core$Int64 $tmp809 = (panda$core$Int64) {551};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s810, $tmp809);
abort(); // unreachable
block37:;
goto block11;
block11:;
goto block10;
block10:;
// line 555
panda$core$MutableString* $tmp811 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$Pair* $tmp812 = *(&local2);
panda$core$Object** $tmp813 = &$tmp812->first;
panda$core$Object* $tmp814 = *$tmp813;
panda$core$String* $tmp815 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param1, ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp814)->value);
panda$core$MutableString$init$panda$core$String($tmp811, $tmp815);
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp811));
panda$core$MutableString* $tmp816 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp816));
*(&local4) = $tmp811;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp815));
// unreffing REF($233:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp811));
// unreffing REF($227:panda.core.MutableString)
// line 556
panda$core$MutableString* $tmp817 = *(&local4);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp817, &$s818, &$s819);
// line 557
panda$core$MutableString* $tmp820 = *(&local4);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp820, &$s821, &$s822);
// line 558
panda$core$MutableString* $tmp823 = *(&local4);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp823, &$s824, &$s825);
// line 559
panda$core$MutableString* $tmp826 = *(&local4);
org$pandalanguage$pandac$pandadoc$Protector** $tmp827 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp828 = *$tmp827;
$fn830 $tmp829 = ($fn830) $tmp828->$class->vtable[2];
panda$core$String* $tmp831 = $tmp829($tmp828, &$s832);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp826, &$s833, $tmp831);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp831));
// unreffing REF($262:panda.core.String)
// line 560
panda$core$MutableString* $tmp834 = *(&local4);
org$pandalanguage$pandac$pandadoc$Protector** $tmp835 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp836 = *$tmp835;
$fn838 $tmp837 = ($fn838) $tmp836->$class->vtable[2];
panda$core$String* $tmp839 = $tmp837($tmp836, &$s840);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp834, &$s841, $tmp839);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp839));
// unreffing REF($272:panda.core.String)
// line 561
panda$core$MutableString* $tmp842 = *(&local4);
org$pandalanguage$pandac$pandadoc$Protector** $tmp843 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp844 = *$tmp843;
$fn846 $tmp845 = ($fn846) $tmp844->$class->vtable[2];
panda$core$String* $tmp847 = $tmp845($tmp844, &$s848);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp842, &$s849, $tmp847);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp847));
// unreffing REF($282:panda.core.String)
// line 562
panda$core$MutableString* $tmp850 = *(&local4);
org$pandalanguage$pandac$pandadoc$Protector** $tmp851 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp852 = *$tmp851;
$fn854 $tmp853 = ($fn854) $tmp852->$class->vtable[2];
panda$core$String* $tmp855 = $tmp853($tmp852, &$s856);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp850, &$s857, $tmp855);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp855));
// unreffing REF($292:panda.core.String)
// line 563
panda$core$MutableString* $tmp858 = *(&local4);
org$pandalanguage$pandac$pandadoc$Protector** $tmp859 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp860 = *$tmp859;
$fn862 $tmp861 = ($fn862) $tmp860->$class->vtable[2];
panda$core$String* $tmp863 = $tmp861($tmp860, &$s864);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp858, &$s865, $tmp863);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp863));
// unreffing REF($302:panda.core.String)
// line 564
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp866 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp867;
$tmp867 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp867->value = $tmp866;
panda$core$Int64 $tmp868 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp869 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp868);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp870;
$tmp870 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp870->value = $tmp869;
ITable* $tmp871 = ((panda$core$Equatable*) $tmp867)->$class->itable;
while ($tmp871->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp871 = $tmp871->next;
}
$fn873 $tmp872 = $tmp871->methods[1];
panda$core$Bit $tmp874 = $tmp872(((panda$core$Equatable*) $tmp867), ((panda$core$Equatable*) $tmp870));
bool $tmp875 = $tmp874.value;
if ($tmp875) goto block41; else goto block42;
block41:;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp876 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp877;
$tmp877 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp877->value = $tmp876;
panda$core$Int64 $tmp878 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp879 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp878);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp880;
$tmp880 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp880->value = $tmp879;
ITable* $tmp881 = ((panda$core$Equatable*) $tmp877)->$class->itable;
while ($tmp881->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp881 = $tmp881->next;
}
$fn883 $tmp882 = $tmp881->methods[1];
panda$core$Bit $tmp884 = $tmp882(((panda$core$Equatable*) $tmp877), ((panda$core$Equatable*) $tmp880));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp880)));
// unreffing REF($323:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp877)));
// unreffing REF($319:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
*(&local5) = $tmp884;
goto block43;
block42:;
*(&local5) = $tmp874;
goto block43;
block43:;
panda$core$Bit $tmp885 = *(&local5);
bool $tmp886 = $tmp885.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp870)));
// unreffing REF($313:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp867)));
// unreffing REF($309:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
if ($tmp886) goto block39; else goto block40;
block39:;
// line 566
panda$core$MutableString* $tmp887 = *(&local0);
org$pandalanguage$pandac$Pair* $tmp888 = *(&local2);
panda$core$Object** $tmp889 = &$tmp888->first;
panda$core$Object* $tmp890 = *$tmp889;
org$pandalanguage$pandac$parser$Token$Kind $tmp891 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp890)->value.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp892;
$tmp892 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp892->value = $tmp891;
panda$core$String* $tmp893 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s894, ((panda$core$Object*) $tmp892));
panda$core$String* $tmp895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp893, &$s896);
panda$core$MutableString$append$panda$core$String($tmp887, $tmp895);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp895));
// unreffing REF($355:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp893));
// unreffing REF($354:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp892));
// unreffing REF($353:panda.core.Object)
goto block40;
block40:;
// line 568
panda$core$MutableString* $tmp897 = *(&local0);
panda$core$MutableString* $tmp898 = *(&local4);
panda$core$MutableString$append$panda$core$Object($tmp897, ((panda$core$Object*) $tmp898));
// line 569
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp899 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp900;
$tmp900 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp900->value = $tmp899;
panda$core$Int64 $tmp901 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp902 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp901);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp903;
$tmp903 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp903->value = $tmp902;
ITable* $tmp904 = ((panda$core$Equatable*) $tmp900)->$class->itable;
while ($tmp904->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp904 = $tmp904->next;
}
$fn906 $tmp905 = $tmp904->methods[1];
panda$core$Bit $tmp907 = $tmp905(((panda$core$Equatable*) $tmp900), ((panda$core$Equatable*) $tmp903));
bool $tmp908 = $tmp907.value;
if ($tmp908) goto block46; else goto block47;
block46:;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp909 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp910;
$tmp910 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp910->value = $tmp909;
panda$core$Int64 $tmp911 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp912 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp911);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp913;
$tmp913 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp913->value = $tmp912;
ITable* $tmp914 = ((panda$core$Equatable*) $tmp910)->$class->itable;
while ($tmp914->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp914 = $tmp914->next;
}
$fn916 $tmp915 = $tmp914->methods[1];
panda$core$Bit $tmp917 = $tmp915(((panda$core$Equatable*) $tmp910), ((panda$core$Equatable*) $tmp913));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp913)));
// unreffing REF($388:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp910)));
// unreffing REF($384:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
*(&local6) = $tmp917;
goto block48;
block47:;
*(&local6) = $tmp907;
goto block48;
block48:;
panda$core$Bit $tmp918 = *(&local6);
bool $tmp919 = $tmp918.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp903)));
// unreffing REF($378:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp900)));
// unreffing REF($374:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
if ($tmp919) goto block44; else goto block45;
block44:;
// line 571
panda$core$MutableString* $tmp920 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp920, &$s921);
goto block45;
block45:;
panda$core$MutableString* $tmp922 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp922));
// unreffing s
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp704);
// unreffing REF($37:panda.collections.Iterator.T)
org$pandalanguage$pandac$Pair* $tmp923 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp923));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp695));
// unreffing REF($26:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 574
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp924 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp925;
$tmp925 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp925->value = $tmp924;
panda$core$Int64 $tmp926 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp927 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp926);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp928;
$tmp928 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp928->value = $tmp927;
ITable* $tmp929 = ((panda$core$Equatable*) $tmp925)->$class->itable;
while ($tmp929->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp929 = $tmp929->next;
}
$fn931 $tmp930 = $tmp929->methods[1];
panda$core$Bit $tmp932 = $tmp930(((panda$core$Equatable*) $tmp925), ((panda$core$Equatable*) $tmp928));
bool $tmp933 = $tmp932.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp928)));
// unreffing REF($437:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp925)));
// unreffing REF($433:panda.core.Equatable<org.pandalanguage.pandac.parser.SyntaxHighlighter.Kind>)
if ($tmp933) goto block49; else goto block50;
block49:;
// line 575
panda$core$MutableString* $tmp934 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp934, &$s935);
goto block50;
block50:;
// line 577
panda$core$MutableString* $tmp936 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp936, &$s937);
// line 578
panda$core$MutableString* $tmp938 = *(&local0);
panda$core$String* $tmp939 = panda$core$MutableString$finish$R$panda$core$String($tmp938);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp939));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp939));
// unreffing REF($457:panda.core.String)
panda$core$MutableString* $tmp940 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp940));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp939;

}
void org$pandalanguage$pandac$pandadoc$Markdown$syntaxHighlight$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$core$Bit local2;
panda$core$Bit local3;
panda$core$Bit local4;
org$pandalanguage$pandac$parser$Token local5;
// line 582
panda$threads$MessageQueue** $tmp941 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp942 = *$tmp941;
panda$threads$MessageQueue$clear($tmp942);
// line 583
panda$core$String* $tmp943 = panda$core$MutableString$convert$R$panda$core$String(param1);
panda$core$String* $tmp944 = panda$core$String$get_trimmed$R$panda$core$String($tmp943);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp944));
panda$core$String* $tmp945 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp945));
*(&local0) = $tmp944;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp944));
// unreffing REF($7:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp943));
// unreffing REF($6:panda.core.String)
// line 584
org$pandalanguage$pandac$parser$Parser** $tmp946 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp947 = *$tmp946;
panda$io$File** $tmp948 = &param0->source;
panda$io$File* $tmp949 = *$tmp948;
panda$core$String* $tmp950 = *(&local0);
org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String($tmp947, $tmp949, $tmp950);
// line 585
org$pandalanguage$pandac$parser$Parser** $tmp951 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp952 = *$tmp951;
org$pandalanguage$pandac$ASTNode* $tmp953 = org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q($tmp952);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp953));
org$pandalanguage$pandac$ASTNode* $tmp954 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp954));
*(&local1) = $tmp953;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp953));
// unreffing REF($31:org.pandalanguage.pandac.ASTNode?)
// line 586
org$pandalanguage$pandac$ASTNode* $tmp955 = *(&local1);
panda$core$Bit $tmp956 = panda$core$Bit$init$builtin_bit($tmp955 != NULL);
bool $tmp957 = $tmp956.value;
if ($tmp957) goto block3; else goto block4;
block3:;
panda$threads$MessageQueue** $tmp958 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp959 = *$tmp958;
panda$core$Int64 $tmp960 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp959);
panda$core$Int64 $tmp961 = (panda$core$Int64) {0};
panda$core$Bit $tmp962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp960, $tmp961);
*(&local2) = $tmp962;
goto block5;
block4:;
*(&local2) = $tmp956;
goto block5;
block5:;
panda$core$Bit $tmp963 = *(&local2);
bool $tmp964 = $tmp963.value;
if ($tmp964) goto block1; else goto block2;
block1:;
// line 587
panda$core$Bit $tmp965 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$MutableString$Index$Q$GT $tmp966 = panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$init$panda$core$MutableString$Index$Q$panda$core$MutableString$Index$Q$panda$core$Bit(((panda$core$MutableString$Index$nullable) { .nonnull = false }), ((panda$core$MutableString$Index$nullable) { .nonnull = false }), $tmp965);
org$pandalanguage$pandac$parser$Parser** $tmp967 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp968 = *$tmp967;
$fn970 $tmp969 = ($fn970) param0->$class->vtable[16];
panda$core$String* $tmp971 = $tmp969(param0, $tmp968);
panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String(param1, $tmp966, $tmp971);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp971));
// unreffing REF($67:panda.core.String)
// line 588
org$pandalanguage$pandac$ASTNode* $tmp972 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp972));
// unreffing file
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp973 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp973));
// unreffing text
*(&local0) = ((panda$core$String*) NULL);
return;
block2:;
// line 591
panda$threads$MessageQueue** $tmp974 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp975 = *$tmp974;
panda$threads$MessageQueue$clear($tmp975);
// line 592
org$pandalanguage$pandac$parser$Parser** $tmp976 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp977 = *$tmp976;
panda$io$File** $tmp978 = &param0->source;
panda$io$File* $tmp979 = *$tmp978;
panda$core$String* $tmp980 = *(&local0);
org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String($tmp977, $tmp979, $tmp980);
// line 593
goto block6;
block6:;
org$pandalanguage$pandac$parser$Parser** $tmp981 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp982 = *$tmp981;
org$pandalanguage$pandac$parser$Token $tmp983 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token($tmp982);
org$pandalanguage$pandac$parser$Token$Kind $tmp984 = $tmp983.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp985;
$tmp985 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp985->value = $tmp984;
panda$core$Int64 $tmp986 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp987 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp986);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp988;
$tmp988 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp988->value = $tmp987;
ITable* $tmp989 = ((panda$core$Equatable*) $tmp985)->$class->itable;
while ($tmp989->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp989 = $tmp989->next;
}
$fn991 $tmp990 = $tmp989->methods[1];
panda$core$Bit $tmp992 = $tmp990(((panda$core$Equatable*) $tmp985), ((panda$core$Equatable*) $tmp988));
bool $tmp993 = $tmp992.value;
if ($tmp993) goto block9; else goto block10;
block9:;
panda$threads$MessageQueue** $tmp994 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp995 = *$tmp994;
panda$core$Int64 $tmp996 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp995);
panda$core$Int64 $tmp997 = (panda$core$Int64) {0};
panda$core$Bit $tmp998 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp996, $tmp997);
*(&local3) = $tmp998;
goto block11;
block10:;
*(&local3) = $tmp992;
goto block11;
block11:;
panda$core$Bit $tmp999 = *(&local3);
bool $tmp1000 = $tmp999.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp988)));
// unreffing REF($106:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp985)));
// unreffing REF($102:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp1000) goto block7; else goto block8;
block7:;
// line 594
org$pandalanguage$pandac$parser$Parser** $tmp1001 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1002 = *$tmp1001;
org$pandalanguage$pandac$ASTNode* $tmp1003 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q($tmp1002);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1003));
// unreffing REF($133:org.pandalanguage.pandac.ASTNode?)
goto block6;
block8:;
// line 596
panda$threads$MessageQueue** $tmp1004 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1005 = *$tmp1004;
panda$core$Int64 $tmp1006 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp1005);
panda$core$Int64 $tmp1007 = (panda$core$Int64) {0};
panda$core$Bit $tmp1008 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1006, $tmp1007);
bool $tmp1009 = $tmp1008.value;
if ($tmp1009) goto block12; else goto block13;
block12:;
// line 597
panda$core$Bit $tmp1010 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$MutableString$Index$Q$GT $tmp1011 = panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$init$panda$core$MutableString$Index$Q$panda$core$MutableString$Index$Q$panda$core$Bit(((panda$core$MutableString$Index$nullable) { .nonnull = false }), ((panda$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1010);
org$pandalanguage$pandac$parser$Parser** $tmp1012 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1013 = *$tmp1012;
$fn1015 $tmp1014 = ($fn1015) param0->$class->vtable[16];
panda$core$String* $tmp1016 = $tmp1014(param0, $tmp1013);
panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String(param1, $tmp1011, $tmp1016);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1016));
// unreffing REF($153:panda.core.String)
// line 598
org$pandalanguage$pandac$ASTNode* $tmp1017 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1017));
// unreffing file
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1018 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1018));
// unreffing text
*(&local0) = ((panda$core$String*) NULL);
return;
block13:;
// line 601
panda$threads$MessageQueue** $tmp1019 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1020 = *$tmp1019;
panda$threads$MessageQueue$clear($tmp1020);
// line 602
org$pandalanguage$pandac$parser$Parser** $tmp1021 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1022 = *$tmp1021;
panda$io$File** $tmp1023 = &param0->source;
panda$io$File* $tmp1024 = *$tmp1023;
panda$core$String* $tmp1025 = *(&local0);
org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String($tmp1022, $tmp1024, $tmp1025);
// line 603
goto block14;
block14:;
org$pandalanguage$pandac$parser$Parser** $tmp1026 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1027 = *$tmp1026;
org$pandalanguage$pandac$parser$Token $tmp1028 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token($tmp1027);
org$pandalanguage$pandac$parser$Token$Kind $tmp1029 = $tmp1028.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1030;
$tmp1030 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1030->value = $tmp1029;
panda$core$Int64 $tmp1031 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp1032 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1031);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1033;
$tmp1033 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1033->value = $tmp1032;
ITable* $tmp1034 = ((panda$core$Equatable*) $tmp1030)->$class->itable;
while ($tmp1034->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1034 = $tmp1034->next;
}
$fn1036 $tmp1035 = $tmp1034->methods[1];
panda$core$Bit $tmp1037 = $tmp1035(((panda$core$Equatable*) $tmp1030), ((panda$core$Equatable*) $tmp1033));
bool $tmp1038 = $tmp1037.value;
if ($tmp1038) goto block17; else goto block18;
block17:;
panda$threads$MessageQueue** $tmp1039 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1040 = *$tmp1039;
panda$core$Int64 $tmp1041 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp1040);
panda$core$Int64 $tmp1042 = (panda$core$Int64) {0};
panda$core$Bit $tmp1043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1041, $tmp1042);
*(&local4) = $tmp1043;
goto block19;
block18:;
*(&local4) = $tmp1037;
goto block19;
block19:;
panda$core$Bit $tmp1044 = *(&local4);
bool $tmp1045 = $tmp1044.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1033)));
// unreffing REF($192:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1030)));
// unreffing REF($188:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp1045) goto block15; else goto block16;
block15:;
// line 604
org$pandalanguage$pandac$parser$Parser** $tmp1046 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1047 = *$tmp1046;
org$pandalanguage$pandac$ASTNode* $tmp1048 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q($tmp1047);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1048));
// unreffing REF($219:org.pandalanguage.pandac.ASTNode?)
goto block14;
block16:;
// line 606
panda$threads$MessageQueue** $tmp1049 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1050 = *$tmp1049;
panda$core$Int64 $tmp1051 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp1050);
panda$core$Int64 $tmp1052 = (panda$core$Int64) {0};
panda$core$Bit $tmp1053 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1051, $tmp1052);
bool $tmp1054 = $tmp1053.value;
if ($tmp1054) goto block20; else goto block21;
block20:;
// line 607
panda$core$Bit $tmp1055 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$MutableString$Index$Q$GT $tmp1056 = panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$init$panda$core$MutableString$Index$Q$panda$core$MutableString$Index$Q$panda$core$Bit(((panda$core$MutableString$Index$nullable) { .nonnull = false }), ((panda$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1055);
org$pandalanguage$pandac$parser$Parser** $tmp1057 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1058 = *$tmp1057;
$fn1060 $tmp1059 = ($fn1060) param0->$class->vtable[16];
panda$core$String* $tmp1061 = $tmp1059(param0, $tmp1058);
panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String(param1, $tmp1056, $tmp1061);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1061));
// unreffing REF($239:panda.core.String)
// line 608
org$pandalanguage$pandac$ASTNode* $tmp1062 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1062));
// unreffing file
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1063 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1063));
// unreffing text
*(&local0) = ((panda$core$String*) NULL);
return;
block21:;
// line 611
panda$threads$MessageQueue** $tmp1064 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1065 = *$tmp1064;
panda$threads$MessageQueue$clear($tmp1065);
// line 612
org$pandalanguage$pandac$parser$Parser** $tmp1066 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1067 = *$tmp1066;
panda$io$File** $tmp1068 = &param0->source;
panda$io$File* $tmp1069 = *$tmp1068;
panda$core$String* $tmp1070 = *(&local0);
org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String($tmp1067, $tmp1069, $tmp1070);
// line 613
goto block22;
block22:;
// line 614
org$pandalanguage$pandac$parser$Parser** $tmp1071 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1072 = *$tmp1071;
org$pandalanguage$pandac$parser$Token $tmp1073 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token($tmp1072);
*(&local5) = $tmp1073;
// line 615
org$pandalanguage$pandac$parser$Token $tmp1074 = *(&local5);
org$pandalanguage$pandac$parser$Token$Kind $tmp1075 = $tmp1074.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1076;
$tmp1076 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1076->value = $tmp1075;
panda$core$Int64 $tmp1077 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp1078 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1077);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1079;
$tmp1079 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1079->value = $tmp1078;
ITable* $tmp1080 = ((panda$core$Equatable*) $tmp1076)->$class->itable;
while ($tmp1080->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1080 = $tmp1080->next;
}
$fn1082 $tmp1081 = $tmp1080->methods[0];
panda$core$Bit $tmp1083 = $tmp1081(((panda$core$Equatable*) $tmp1076), ((panda$core$Equatable*) $tmp1079));
bool $tmp1084 = $tmp1083.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1079)));
// unreffing REF($282:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1076)));
// unreffing REF($278:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp1084) goto block24; else goto block25;
block24:;
// line 616
goto block23;
block25:;
goto block22;
block23:;
// line 619
panda$core$Bit $tmp1085 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$MutableString$Index$Q$GT $tmp1086 = panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$init$panda$core$MutableString$Index$Q$panda$core$MutableString$Index$Q$panda$core$Bit(((panda$core$MutableString$Index$nullable) { .nonnull = false }), ((panda$core$MutableString$Index$nullable) { .nonnull = false }), $tmp1085);
org$pandalanguage$pandac$parser$Parser** $tmp1087 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1088 = *$tmp1087;
$fn1090 $tmp1089 = ($fn1090) param0->$class->vtable[16];
panda$core$String* $tmp1091 = $tmp1089(param0, $tmp1088);
panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String(param1, $tmp1086, $tmp1091);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1091));
// unreffing REF($302:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1092 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1092));
// unreffing file
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1093 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1093));
// unreffing text
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$encodeCode$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 625
panda$core$RegularExpression* $tmp1094 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1094, &$s1095);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1094, &$s1096);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1094));
// unreffing REF($1:panda.core.RegularExpression)
// line 626
$fn1098 $tmp1097 = ($fn1098) param0->$class->vtable[17];
$tmp1097(param0, param1);
// line 627
panda$core$MutableString$replace$panda$core$String$panda$core$String(param1, &$s1099, &$s1100);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doLists$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$Int64 local0;
panda$core$String* local1 = NULL;
panda$core$RegularExpression* local2 = NULL;
panda$core$RegularExpression* local3 = NULL;
// line 631
panda$core$Int64 $tmp1101 = (panda$core$Int64) {4};
panda$core$Int64 $tmp1102 = (panda$core$Int64) {1};
int64_t $tmp1103 = $tmp1101.value;
int64_t $tmp1104 = $tmp1102.value;
int64_t $tmp1105 = $tmp1103 - $tmp1104;
panda$core$Int64 $tmp1106 = (panda$core$Int64) {$tmp1105};
*(&local0) = $tmp1106;
// line 633
panda$core$Int64 $tmp1107 = *(&local0);
panda$core$Int64$wrapper* $tmp1108;
$tmp1108 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp1108->value = $tmp1107;
panda$core$String* $tmp1109 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1110, ((panda$core$Object*) $tmp1108));
panda$core$String* $tmp1111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1109, &$s1112);
panda$core$String* $tmp1113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1111, &$s1114);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1113));
panda$core$String* $tmp1115 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1115));
*(&local1) = $tmp1113;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1113));
// unreffing REF($13:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1111));
// unreffing REF($12:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1109));
// unreffing REF($11:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1108));
// unreffing REF($10:panda.core.Object)
// line 656
panda$core$Int64* $tmp1116 = &param0->listLevel;
panda$core$Int64 $tmp1117 = *$tmp1116;
panda$core$Int64 $tmp1118 = (panda$core$Int64) {0};
int64_t $tmp1119 = $tmp1117.value;
int64_t $tmp1120 = $tmp1118.value;
bool $tmp1121 = $tmp1119 > $tmp1120;
panda$core$Bit $tmp1122 = (panda$core$Bit) {$tmp1121};
bool $tmp1123 = $tmp1122.value;
if ($tmp1123) goto block1; else goto block3;
block1:;
// line 657
panda$core$RegularExpression* $tmp1124 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1125 = *(&local1);
panda$core$String* $tmp1126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1127, $tmp1125);
panda$core$String* $tmp1128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1126, &$s1129);
panda$core$RegularExpression$init$panda$core$String($tmp1124, $tmp1128);
*(&local2) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1124));
panda$core$RegularExpression* $tmp1130 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1130));
*(&local2) = $tmp1124;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1128));
// unreffing REF($47:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1126));
// unreffing REF($46:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1124));
// unreffing REF($44:panda.core.RegularExpression)
// line 658
panda$core$RegularExpression* $tmp1131 = *(&local2);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure12* $tmp1132 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure12*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure12$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure12$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1132, param0);
panda$core$MutableMethod* $tmp1134 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1134, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure12$$anonymous11$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp1132));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1131, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1134)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1134));
// unreffing REF($70:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1132));
// unreffing REF($67:org.pandalanguage.pandac.pandadoc.Markdown._Closure12)
panda$core$RegularExpression* $tmp1135 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1135));
// unreffing matchStartOfLine
*(&local2) = ((panda$core$RegularExpression*) NULL);
goto block2;
block3:;
// line 1
// line 684
panda$core$RegularExpression* $tmp1136 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1137 = *(&local1);
panda$core$String* $tmp1138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1139, $tmp1137);
panda$core$RegularExpression$init$panda$core$String($tmp1136, $tmp1138);
*(&local3) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1136));
panda$core$RegularExpression* $tmp1140 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1140));
*(&local3) = $tmp1136;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1138));
// unreffing REF($92:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1136));
// unreffing REF($90:panda.core.RegularExpression)
// line 685
panda$core$RegularExpression* $tmp1141 = *(&local3);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure14* $tmp1142 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure14*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure14$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure14$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1142, param0);
panda$core$MutableMethod* $tmp1144 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1144, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure14$$anonymous13$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp1142));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1141, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1144)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1144));
// unreffing REF($112:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1142));
// unreffing REF($109:org.pandalanguage.pandac.pandadoc.Markdown._Closure14)
panda$core$RegularExpression* $tmp1145 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1145));
// unreffing matchStartOfLine
*(&local3) = ((panda$core$RegularExpression*) NULL);
goto block2;
block2:;
panda$core$String* $tmp1146 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1146));
// unreffing wholeList
*(&local1) = ((panda$core$String*) NULL);
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$processListItems$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$String* param1) {

panda$core$String* local0 = NULL;
panda$core$RegularExpression* local1 = NULL;
// line 726
panda$core$Int64* $tmp1147 = &param0->listLevel;
panda$core$Int64 $tmp1148 = *$tmp1147;
panda$core$Int64 $tmp1149 = (panda$core$Int64) {1};
int64_t $tmp1150 = $tmp1148.value;
int64_t $tmp1151 = $tmp1149.value;
int64_t $tmp1152 = $tmp1150 + $tmp1151;
panda$core$Int64 $tmp1153 = (panda$core$Int64) {$tmp1152};
panda$core$Int64* $tmp1154 = &param0->listLevel;
*$tmp1154 = $tmp1153;
// line 729
panda$core$RegularExpression* $tmp1155 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1155, &$s1156);
panda$core$String* $tmp1157 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(param1, $tmp1155, &$s1158);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1157));
panda$core$String* $tmp1159 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1159));
*(&local0) = $tmp1157;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1157));
// unreffing REF($13:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1155));
// unreffing REF($11:panda.core.RegularExpression)
// line 731
panda$core$RegularExpression* $tmp1160 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1162, &$s1163);
panda$core$String* $tmp1164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1161, &$s1165);
panda$core$Int64 $tmp1166 = (panda$core$Int64) {1};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1160, $tmp1164, $tmp1166);
*(&local1) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1160));
panda$core$RegularExpression* $tmp1167 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1167));
*(&local1) = $tmp1160;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1164));
// unreffing REF($30:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1161));
// unreffing REF($29:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1160));
// unreffing REF($28:panda.core.RegularExpression)
// line 736
panda$core$String* $tmp1168 = *(&local0);
panda$core$RegularExpression* $tmp1169 = *(&local1);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure16* $tmp1170 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure16*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure16$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure16$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1170, param0);
panda$core$MutableMethod* $tmp1172 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1172, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure16$$anonymous15$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1170));
panda$core$String* $tmp1173 = panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String($tmp1168, $tmp1169, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1172)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1173));
panda$core$String* $tmp1174 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1174));
*(&local0) = $tmp1173;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1173));
// unreffing REF($60:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1172));
// unreffing REF($55:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1170));
// unreffing REF($52:org.pandalanguage.pandac.pandadoc.Markdown._Closure16)
// line 753
panda$core$Int64* $tmp1175 = &param0->listLevel;
panda$core$Int64 $tmp1176 = *$tmp1175;
panda$core$Int64 $tmp1177 = (panda$core$Int64) {1};
int64_t $tmp1178 = $tmp1176.value;
int64_t $tmp1179 = $tmp1177.value;
int64_t $tmp1180 = $tmp1178 - $tmp1179;
panda$core$Int64 $tmp1181 = (panda$core$Int64) {$tmp1180};
panda$core$Int64* $tmp1182 = &param0->listLevel;
*$tmp1182 = $tmp1181;
// line 754
panda$core$String* $tmp1183 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1183));
panda$core$RegularExpression* $tmp1184 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1184));
// unreffing p
*(&local1) = ((panda$core$RegularExpression*) NULL);
panda$core$String* $tmp1185 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1185));
// unreffing list
*(&local0) = ((panda$core$String*) NULL);
return $tmp1183;

}
panda$core$Bit org$pandalanguage$pandac$pandadoc$Markdown$hasParagraphBreak$panda$core$MutableString$R$panda$core$Bit(panda$core$MutableString* param0) {

// line 759
panda$core$Bit $tmp1186 = panda$core$MutableString$contains$panda$core$String$R$panda$core$Bit(param0, &$s1187);
return $tmp1186;

}
panda$core$Bit org$pandalanguage$pandac$pandadoc$Markdown$isEmptyString$panda$core$String$Q$R$panda$core$Bit(panda$core$String* param0) {

panda$core$Bit local0;
// line 764
panda$core$Bit $tmp1188 = panda$core$Bit$init$builtin_bit(param0 == NULL);
bool $tmp1189 = $tmp1188.value;
if ($tmp1189) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1188;
goto block3;
block2:;
panda$core$Bit $tmp1190 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(param0, &$s1191);
*(&local0) = $tmp1190;
goto block3;
block3:;
panda$core$Bit $tmp1192 = *(&local0);
return $tmp1192;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doHeaders$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
// line 769
panda$core$RegularExpression* $tmp1193 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1193, &$s1194);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure18* $tmp1195 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure18*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure18$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure18$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1195, param0);
panda$core$MutableMethod* $tmp1197 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1197, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure18$$anonymous17$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1195));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1193, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1197)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1197));
// unreffing REF($6:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1195));
// unreffing REF($3:org.pandalanguage.pandac.pandadoc.Markdown._Closure18)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1193));
// unreffing REF($1:panda.core.RegularExpression)
// line 774
panda$core$RegularExpression* $tmp1198 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1198, &$s1199);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure20* $tmp1200 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure20*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure20$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure20$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1200, param0);
panda$core$MutableMethod* $tmp1202 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1202, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure20$$anonymous19$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1200));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1198, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1202)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1202));
// unreffing REF($27:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1200));
// unreffing REF($24:org.pandalanguage.pandac.pandadoc.Markdown._Closure20)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1198));
// unreffing REF($22:panda.core.RegularExpression)
// line 781
panda$core$RegularExpression* $tmp1203 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$Int64 $tmp1204 = (panda$core$Int64) {1};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1203, &$s1205, $tmp1204);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1203));
panda$core$RegularExpression* $tmp1206 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1206));
*(&local0) = $tmp1203;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1203));
// unreffing REF($43:panda.core.RegularExpression)
// line 782
panda$core$RegularExpression* $tmp1207 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure22* $tmp1208 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure22*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure22$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure22$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1208, param0);
panda$core$MutableMethod* $tmp1210 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1210, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure22$$anonymous21$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp1208));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1207, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1210)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1210));
// unreffing REF($61:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1208));
// unreffing REF($58:org.pandalanguage.pandac.pandadoc.Markdown._Closure22)
panda$core$RegularExpression* $tmp1211 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1211));
// unreffing p
*(&local0) = ((panda$core$RegularExpression*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$runSpanGamut$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 793
$fn1213 $tmp1212 = ($fn1213) param0->$class->vtable[24];
$tmp1212(param0, param1);
// line 794
$fn1215 $tmp1214 = ($fn1215) param0->$class->vtable[29];
$tmp1214(param0, param1);
// line 795
$fn1217 $tmp1216 = ($fn1217) param0->$class->vtable[3];
$tmp1216(param0, param1);
// line 797
$fn1219 $tmp1218 = ($fn1219) param0->$class->vtable[25];
$tmp1218(param0, param1);
// line 798
$fn1221 $tmp1220 = ($fn1221) param0->$class->vtable[26];
$tmp1220(param0, param1);
// line 799
$fn1223 $tmp1222 = ($fn1223) param0->$class->vtable[10];
$tmp1222(param0, param1);
// line 805
$fn1225 $tmp1224 = ($fn1225) param0->$class->vtable[24];
$tmp1224(param0, param1);
// line 807
$fn1227 $tmp1226 = ($fn1227) param0->$class->vtable[28];
$tmp1226(param0, param1);
// line 808
$fn1229 $tmp1228 = ($fn1229) param0->$class->vtable[27];
$tmp1228(param0, param1);
// line 810
panda$core$RegularExpression* $tmp1230 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1230, &$s1231);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1230, &$s1232);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1230));
// unreffing REF($28:panda.core.RegularExpression)
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$nestedTagsRegex$panda$core$Int64$R$panda$core$String(panda$core$Int64 param0) {

// line 820
panda$core$Int64 $tmp1233 = (panda$core$Int64) {0};
panda$core$Bit $tmp1234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(param0, $tmp1233);
bool $tmp1235 = $tmp1234.value;
if ($tmp1235) goto block1; else goto block3;
block1:;
// line 821
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1236));
return &$s1237;
block3:;
// line 1
// line 824
panda$core$Int64 $tmp1238 = (panda$core$Int64) {1};
int64_t $tmp1239 = param0.value;
int64_t $tmp1240 = $tmp1238.value;
int64_t $tmp1241 = $tmp1239 - $tmp1240;
panda$core$Int64 $tmp1242 = (panda$core$Int64) {$tmp1241};
panda$core$String* $tmp1243 = org$pandalanguage$pandac$pandadoc$Markdown$nestedTagsRegex$panda$core$Int64$R$panda$core$String($tmp1242);
panda$core$String* $tmp1244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1245, $tmp1243);
panda$core$String* $tmp1246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1244, &$s1247);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1246));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1246));
// unreffing REF($18:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1244));
// unreffing REF($17:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1243));
// unreffing REF($16:panda.core.String)
return $tmp1246;
block2:;
panda$core$Bit $tmp1248 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1249 = $tmp1248.value;
if ($tmp1249) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp1250 = (panda$core$Int64) {819};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1251, $tmp1250, &$s1252);
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
panda$collections$Array* $tmp1253 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1253);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1253));
panda$collections$Array* $tmp1254 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1254));
*(&local0) = $tmp1253;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1253));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.pandadoc.Markdown.HTMLToken>)
// line 830
panda$core$Int64 $tmp1255 = (panda$core$Int64) {6};
panda$core$String* $tmp1256 = org$pandalanguage$pandac$pandadoc$Markdown$nestedTagsRegex$panda$core$Int64$R$panda$core$String($tmp1255);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1256));
panda$core$String* $tmp1257 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1257));
*(&local1) = $tmp1256;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1256));
// unreffing REF($16:panda.core.String)
// line 832
panda$core$RegularExpression* $tmp1258 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1260, &$s1261);
panda$core$String* $tmp1262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1259, &$s1263);
panda$core$String* $tmp1264 = *(&local1);
panda$core$String* $tmp1265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1262, $tmp1264);
panda$core$Int64 $tmp1266 = (panda$core$Int64) {2};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1258, $tmp1265, $tmp1266);
*(&local2) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1258));
panda$core$RegularExpression* $tmp1267 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1267));
*(&local2) = $tmp1258;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1265));
// unreffing REF($32:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1262));
// unreffing REF($30:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1259));
// unreffing REF($29:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1258));
// unreffing REF($28:panda.core.RegularExpression)
// line 840
panda$core$RegularExpression* $tmp1268 = *(&local2);
panda$core$Matcher* $tmp1269 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher($tmp1268, param1);
*(&local3) = ((panda$core$Matcher*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1269));
panda$core$Matcher* $tmp1270 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1270));
*(&local3) = $tmp1269;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1269));
// unreffing REF($56:panda.core.Matcher)
// line 841
panda$core$String$Index $tmp1271 = panda$core$String$get_start$R$panda$core$String$Index(param1);
*(&local4) = $tmp1271;
// line 842
goto block1;
block1:;
panda$core$Matcher* $tmp1272 = *(&local3);
panda$core$Bit $tmp1273 = panda$core$Matcher$find$R$panda$core$Bit($tmp1272);
bool $tmp1274 = $tmp1273.value;
if ($tmp1274) goto block2; else goto block3;
block2:;
// line 843
panda$core$String$Index $tmp1275 = *(&local4);
panda$core$String$Index$wrapper* $tmp1276;
$tmp1276 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp1276->value = $tmp1275;
panda$core$Matcher* $tmp1277 = *(&local3);
panda$core$String$Index $tmp1278;
panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1278, $tmp1277);
panda$core$String$Index$wrapper* $tmp1279;
$tmp1279 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp1279->value = $tmp1278;
ITable* $tmp1280 = ((panda$core$Comparable*) $tmp1276)->$class->itable;
while ($tmp1280->$class != (panda$core$Class*) &panda$core$Comparable$class) {
    $tmp1280 = $tmp1280->next;
}
$fn1282 $tmp1281 = $tmp1280->methods[1];
panda$core$Bit $tmp1283 = $tmp1281(((panda$core$Comparable*) $tmp1276), ((panda$core$Comparable*) $tmp1279));
bool $tmp1284 = $tmp1283.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp1279)));
// unreffing REF($82:panda.core.Comparable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp1276)));
// unreffing REF($78:panda.core.Comparable<panda.core.String.Index>)
if ($tmp1284) goto block4; else goto block5;
block4:;
// line 844
panda$collections$Array* $tmp1285 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1286 = (org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class);
panda$core$Int64 $tmp1287 = (panda$core$Int64) {1};
panda$core$String$Index $tmp1288 = *(&local4);
panda$core$Matcher* $tmp1289 = *(&local3);
panda$core$String$Index $tmp1290;
panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1290, $tmp1289);
panda$core$Bit $tmp1291 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp1292 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp1288, $tmp1290, $tmp1291);
panda$core$String* $tmp1293 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param1, $tmp1292);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String($tmp1286, $tmp1287, $tmp1293);
panda$collections$Array$add$panda$collections$Array$T($tmp1285, ((panda$core$Object*) $tmp1286));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1293));
// unreffing REF($103:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1286));
// unreffing REF($96:org.pandalanguage.pandac.pandadoc.Markdown.HTMLToken)
goto block5;
block5:;
// line 846
panda$collections$Array* $tmp1294 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1295 = (org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class);
panda$core$Int64 $tmp1296 = (panda$core$Int64) {0};
panda$core$Matcher* $tmp1297 = *(&local3);
panda$core$String$Index $tmp1298;
panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1298, $tmp1297);
panda$core$Matcher* $tmp1299 = *(&local3);
panda$core$String$Index $tmp1300;
panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1300, $tmp1299);
panda$core$Bit $tmp1301 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp1302 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp1298, $tmp1300, $tmp1301);
panda$core$String* $tmp1303 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param1, $tmp1302);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String($tmp1295, $tmp1296, $tmp1303);
panda$collections$Array$add$panda$collections$Array$T($tmp1294, ((panda$core$Object*) $tmp1295));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1303));
// unreffing REF($125:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1295));
// unreffing REF($117:org.pandalanguage.pandac.pandadoc.Markdown.HTMLToken)
// line 847
panda$core$Matcher* $tmp1304 = *(&local3);
panda$core$String$Index $tmp1305;
panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1305, $tmp1304);
*(&local4) = $tmp1305;
goto block1;
block3:;
// line 849
panda$core$String$Index $tmp1306 = *(&local4);
panda$core$String$Index$wrapper* $tmp1307;
$tmp1307 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp1307->value = $tmp1306;
panda$core$String$Index $tmp1308 = panda$core$String$get_end$R$panda$core$String$Index(param1);
panda$core$String$Index$wrapper* $tmp1309;
$tmp1309 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp1309->value = $tmp1308;
ITable* $tmp1310 = ((panda$core$Comparable*) $tmp1307)->$class->itable;
while ($tmp1310->$class != (panda$core$Class*) &panda$core$Comparable$class) {
    $tmp1310 = $tmp1310->next;
}
$fn1312 $tmp1311 = $tmp1310->methods[1];
panda$core$Bit $tmp1313 = $tmp1311(((panda$core$Comparable*) $tmp1307), ((panda$core$Comparable*) $tmp1309));
bool $tmp1314 = $tmp1313.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp1309)));
// unreffing REF($145:panda.core.Comparable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp1307)));
// unreffing REF($142:panda.core.Comparable<panda.core.String.Index>)
if ($tmp1314) goto block6; else goto block7;
block6:;
// line 850
panda$collections$Array* $tmp1315 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1316 = (org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class);
panda$core$Int64 $tmp1317 = (panda$core$Int64) {1};
panda$core$String$Index $tmp1318 = *(&local4);
panda$core$String$Index $tmp1319 = panda$core$String$get_end$R$panda$core$String$Index(param1);
panda$core$Bit $tmp1320 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp1321 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp1318, $tmp1319, $tmp1320);
panda$core$String* $tmp1322 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param1, $tmp1321);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String($tmp1316, $tmp1317, $tmp1322);
panda$collections$Array$add$panda$collections$Array$T($tmp1315, ((panda$core$Object*) $tmp1316));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1322));
// unreffing REF($165:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1316));
// unreffing REF($159:org.pandalanguage.pandac.pandadoc.Markdown.HTMLToken)
goto block7;
block7:;
// line 853
panda$collections$Array* $tmp1323 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp1323)));
panda$core$Matcher* $tmp1324 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1324));
// unreffing m
*(&local3) = ((panda$core$Matcher*) NULL);
panda$core$RegularExpression* $tmp1325 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1325));
// unreffing p
*(&local2) = ((panda$core$RegularExpression*) NULL);
panda$core$String* $tmp1326 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1326));
// unreffing nestedTags
*(&local1) = ((panda$core$String*) NULL);
panda$collections$Array* $tmp1327 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1327));
// unreffing tokens
*(&local0) = ((panda$collections$Array*) NULL);
return ((panda$collections$ListView*) $tmp1323);

}
void org$pandalanguage$pandac$pandadoc$Markdown$escapeSpecialCharsWithinTagAttributes$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$collections$ListView* local0 = NULL;
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
panda$core$String* local4 = NULL;
// line 866
panda$core$String* $tmp1328 = panda$core$MutableString$convert$R$panda$core$String(param1);
$fn1330 $tmp1329 = ($fn1330) param0->$class->vtable[23];
panda$collections$ListView* $tmp1331 = $tmp1329(param0, $tmp1328);
*(&local0) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1331));
panda$collections$ListView* $tmp1332 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1332));
*(&local0) = $tmp1331;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1331));
// unreffing REF($3:panda.collections.ListView<org.pandalanguage.pandac.pandadoc.Markdown.HTMLToken>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1328));
// unreffing REF($1:panda.core.String)
// line 867
panda$core$MutableString$clear(param1);
// line 869
panda$collections$ListView* $tmp1333 = *(&local0);
ITable* $tmp1334 = ((panda$collections$Iterable*) $tmp1333)->$class->itable;
while ($tmp1334->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1334 = $tmp1334->next;
}
$fn1336 $tmp1335 = $tmp1334->methods[0];
panda$collections$Iterator* $tmp1337 = $tmp1335(((panda$collections$Iterable*) $tmp1333));
goto block1;
block1:;
ITable* $tmp1338 = $tmp1337->$class->itable;
while ($tmp1338->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1338 = $tmp1338->next;
}
$fn1340 $tmp1339 = $tmp1338->methods[0];
panda$core$Bit $tmp1341 = $tmp1339($tmp1337);
bool $tmp1342 = $tmp1341.value;
if ($tmp1342) goto block3; else goto block2;
block2:;
*(&local1) = ((org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) NULL);
ITable* $tmp1343 = $tmp1337->$class->itable;
while ($tmp1343->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1343 = $tmp1343->next;
}
$fn1345 $tmp1344 = $tmp1343->methods[1];
panda$core$Object* $tmp1346 = $tmp1344($tmp1337);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) $tmp1346)));
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1347 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1347));
*(&local1) = ((org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) $tmp1346);
// line 870
*(&local2) = ((panda$core$String*) NULL);
// line 871
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1348 = *(&local1);
panda$core$Int64* $tmp1349 = &$tmp1348->$rawValue;
panda$core$Int64 $tmp1350 = *$tmp1349;
panda$core$Int64 $tmp1351 = (panda$core$Int64) {0};
panda$core$Bit $tmp1352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1350, $tmp1351);
bool $tmp1353 = $tmp1352.value;
if ($tmp1353) goto block5; else goto block6;
block5:;
panda$core$String** $tmp1354 = (panda$core$String**) ($tmp1348->$data + 0);
panda$core$String* $tmp1355 = *$tmp1354;
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1355));
panda$core$String* $tmp1356 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1356));
*(&local3) = $tmp1355;
// line 873
panda$core$String* $tmp1357 = *(&local3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1357));
panda$core$String* $tmp1358 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1358));
*(&local2) = $tmp1357;
// line 874
panda$core$String* $tmp1359 = *(&local2);
org$pandalanguage$pandac$pandadoc$Protector** $tmp1360 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp1361 = *$tmp1360;
$fn1363 $tmp1362 = ($fn1363) $tmp1361->$class->vtable[2];
panda$core$String* $tmp1364 = $tmp1362($tmp1361, &$s1365);
panda$core$String* $tmp1366 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1359, &$s1367, $tmp1364);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1366));
panda$core$String* $tmp1368 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1368));
*(&local2) = $tmp1366;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1366));
// unreffing REF($76:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1364));
// unreffing REF($75:panda.core.String)
// line 875
panda$core$String* $tmp1369 = *(&local2);
org$pandalanguage$pandac$pandadoc$Protector** $tmp1370 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp1371 = *$tmp1370;
$fn1373 $tmp1372 = ($fn1373) $tmp1371->$class->vtable[2];
panda$core$String* $tmp1374 = $tmp1372($tmp1371, &$s1375);
panda$core$String* $tmp1376 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1369, &$s1377, $tmp1374);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1376));
panda$core$String* $tmp1378 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1378));
*(&local2) = $tmp1376;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1376));
// unreffing REF($95:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1374));
// unreffing REF($94:panda.core.String)
// line 876
panda$core$String* $tmp1379 = *(&local2);
org$pandalanguage$pandac$pandadoc$Protector** $tmp1380 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp1381 = *$tmp1380;
$fn1383 $tmp1382 = ($fn1383) $tmp1381->$class->vtable[2];
panda$core$String* $tmp1384 = $tmp1382($tmp1381, &$s1385);
panda$core$String* $tmp1386 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1379, &$s1387, $tmp1384);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1386));
panda$core$String* $tmp1388 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1388));
*(&local2) = $tmp1386;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1386));
// unreffing REF($114:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1384));
// unreffing REF($113:panda.core.String)
// line 877
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
// unreffing REF($133:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1394));
// unreffing REF($132:panda.core.String)
panda$core$String* $tmp1399 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1399));
// unreffing text
*(&local3) = ((panda$core$String*) NULL);
goto block4;
block6:;
panda$core$Int64 $tmp1400 = (panda$core$Int64) {1};
panda$core$Bit $tmp1401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1350, $tmp1400);
bool $tmp1402 = $tmp1401.value;
if ($tmp1402) goto block7; else goto block4;
block7:;
panda$core$String** $tmp1403 = (panda$core$String**) ($tmp1348->$data + 0);
panda$core$String* $tmp1404 = *$tmp1403;
*(&local4) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1404));
panda$core$String* $tmp1405 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1405));
*(&local4) = $tmp1404;
// line 880
panda$core$String* $tmp1406 = *(&local4);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1406));
panda$core$String* $tmp1407 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1407));
*(&local2) = $tmp1406;
panda$core$String* $tmp1408 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1408));
// unreffing text
*(&local4) = ((panda$core$String*) NULL);
goto block4;
block4:;
// line 883
panda$core$String* $tmp1409 = *(&local2);
panda$core$MutableString$append$panda$core$String(param1, $tmp1409);
panda$core$String* $tmp1410 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1410));
// unreffing value
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp1346);
// unreffing REF($35:panda.collections.Iterator.T)
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1411 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1411));
// unreffing token
*(&local1) = ((org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1337));
// unreffing REF($24:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$collections$ListView* $tmp1412 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1412));
// unreffing tokens
*(&local0) = ((panda$collections$ListView*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doImages$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
// line 889
panda$core$RegularExpression* $tmp1413 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1413, &$s1414);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1413, &$s1415);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1413));
// unreffing REF($1:panda.core.RegularExpression)
// line 890
panda$core$RegularExpression* $tmp1416 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1416, &$s1417);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1416, &$s1418);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1416));
// unreffing REF($8:panda.core.RegularExpression)
// line 893
panda$core$RegularExpression* $tmp1419 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1421, &$s1422);
panda$core$String* $tmp1423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1420, &$s1424);
panda$core$String* $tmp1425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1423, &$s1426);
panda$core$RegularExpression$init$panda$core$String($tmp1419, $tmp1425);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1419));
panda$core$RegularExpression* $tmp1427 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1427));
*(&local0) = $tmp1419;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1425));
// unreffing REF($18:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1423));
// unreffing REF($17:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1420));
// unreffing REF($16:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1419));
// unreffing REF($15:panda.core.RegularExpression)
// line 898
panda$core$RegularExpression* $tmp1428 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure24* $tmp1429 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure24*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure24$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure24$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1429, param0);
panda$core$MutableMethod* $tmp1431 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1431, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure24$$anonymous23$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1429));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1428, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1431)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1431));
// unreffing REF($44:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1429));
// unreffing REF($41:org.pandalanguage.pandac.pandadoc.Markdown._Closure24)
panda$core$RegularExpression* $tmp1432 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1432));
// unreffing imageLink
*(&local0) = ((panda$core$RegularExpression*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doAnchors$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
panda$core$RegularExpression* local1 = NULL;
panda$core$RegularExpression* local2 = NULL;
// line 931
panda$core$RegularExpression* $tmp1433 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1435, &$s1436);
panda$core$String* $tmp1437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1434, &$s1438);
panda$core$String* $tmp1439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1437, &$s1440);
panda$core$RegularExpression$init$panda$core$String($tmp1433, $tmp1439);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1433));
panda$core$RegularExpression* $tmp1441 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1441));
*(&local0) = $tmp1433;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1439));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1437));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1434));
// unreffing REF($2:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1433));
// unreffing REF($1:panda.core.RegularExpression)
// line 936
panda$core$RegularExpression* $tmp1442 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure26* $tmp1443 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure26*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure26$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure26$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1443, param0);
panda$core$MutableMethod* $tmp1445 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1445, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure26$$anonymous25$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp1443));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1442, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1445)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1445));
// unreffing REF($30:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1443));
// unreffing REF($27:org.pandalanguage.pandac.pandadoc.Markdown._Closure26)
// line 968
panda$core$RegularExpression* $tmp1446 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1448, &$s1449);
panda$core$String* $tmp1450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1447, &$s1451);
panda$core$String* $tmp1452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1450, &$s1453);
panda$core$String* $tmp1454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1452, &$s1455);
panda$core$String* $tmp1456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1454, &$s1457);
panda$core$String* $tmp1458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1456, &$s1459);
panda$core$String* $tmp1460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1458, &$s1461);
panda$core$String* $tmp1462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1460, &$s1463);
panda$core$String* $tmp1464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1462, &$s1465);
panda$core$String* $tmp1466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1464, &$s1467);
panda$core$String* $tmp1468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1466, &$s1469);
panda$core$Int64 $tmp1470 = (panda$core$Int64) {4};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1446, $tmp1468, $tmp1470);
*(&local1) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1446));
panda$core$RegularExpression* $tmp1471 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1471));
*(&local1) = $tmp1446;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1468));
// unreffing REF($54:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1466));
// unreffing REF($53:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1464));
// unreffing REF($52:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1462));
// unreffing REF($51:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1460));
// unreffing REF($50:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1458));
// unreffing REF($49:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1456));
// unreffing REF($48:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1454));
// unreffing REF($47:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1452));
// unreffing REF($46:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1450));
// unreffing REF($45:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1447));
// unreffing REF($44:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1446));
// unreffing REF($43:panda.core.RegularExpression)
// line 982
panda$core$RegularExpression* $tmp1472 = *(&local1);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure28* $tmp1473 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure28*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure28$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure28$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1473, param0);
panda$core$MutableMethod* $tmp1475 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1475, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure28$$anonymous27$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1473));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1472, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1475)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1475));
// unreffing REF($105:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1473));
// unreffing REF($102:org.pandalanguage.pandac.pandadoc.Markdown._Closure28)
// line 1019
panda$core$RegularExpression* $tmp1476 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1478, &$s1479);
panda$core$String* $tmp1480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1477, &$s1481);
panda$core$String* $tmp1482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1480, &$s1483);
panda$core$Int64 $tmp1484 = (panda$core$Int64) {4};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1476, $tmp1482, $tmp1484);
*(&local2) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1476));
panda$core$RegularExpression* $tmp1485 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1485));
*(&local2) = $tmp1476;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1482));
// unreffing REF($121:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1480));
// unreffing REF($120:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1477));
// unreffing REF($119:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1476));
// unreffing REF($118:panda.core.RegularExpression)
// line 1025
panda$core$RegularExpression* $tmp1486 = *(&local2);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure30* $tmp1487 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure30*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure30$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure30$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1487, param0);
panda$core$MutableMethod* $tmp1489 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1489, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure30$$anonymous29$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp1487));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1486, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1489)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1489));
// unreffing REF($148:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1487));
// unreffing REF($145:org.pandalanguage.pandac.pandadoc.Markdown._Closure30)
panda$core$RegularExpression* $tmp1490 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1490));
// unreffing referenceShortcut
*(&local2) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1491 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1491));
// unreffing inlineLink
*(&local1) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1492 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1492));
// unreffing internalLink
*(&local0) = ((panda$core$RegularExpression*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doItalicsAndBold$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 1067
panda$core$RegularExpression* $tmp1493 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1493, &$s1494);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1493, &$s1495);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1493));
// unreffing REF($1:panda.core.RegularExpression)
// line 1068
panda$core$RegularExpression* $tmp1496 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1496, &$s1497);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1496, &$s1498);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1496));
// unreffing REF($8:panda.core.RegularExpression)
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$encodeAmpsAndAngles$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 1074
panda$core$RegularExpression* $tmp1499 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1499, &$s1500);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1499, &$s1501);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1499));
// unreffing REF($1:panda.core.RegularExpression)
// line 1075
panda$core$RegularExpression* $tmp1502 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1502, &$s1503);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1502, &$s1504);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1502));
// unreffing REF($8:panda.core.RegularExpression)
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doCodeSpans$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 1079
panda$core$RegularExpression* $tmp1505 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1505, &$s1506);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure32* $tmp1507 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure32*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure32$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure32$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1507, param0);
panda$core$MutableMethod* $tmp1509 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1509, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure32$$anonymous31$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1507));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1505, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1509)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1509));
// unreffing REF($6:panda.core.MutableMethod)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1507));
// unreffing REF($3:org.pandalanguage.pandac.pandadoc.Markdown._Closure32)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1505));
// unreffing REF($1:panda.core.RegularExpression)
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$cleanup(org$pandalanguage$pandac$pandadoc$Markdown* param0) {

// line 83
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$io$File** $tmp1510 = &param0->source;
panda$io$File* $tmp1511 = *$tmp1510;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1511));
panda$threads$MessageQueue** $tmp1512 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1513 = *$tmp1512;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1513));
org$pandalanguage$pandac$parser$Parser** $tmp1514 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1515 = *$tmp1514;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1515));
panda$core$MutableMethod** $tmp1516 = &param0->linkResolver;
panda$core$MutableMethod* $tmp1517 = *$tmp1516;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1517));
panda$collections$HashMap** $tmp1518 = &param0->linkDefinitions;
panda$collections$HashMap* $tmp1519 = *$tmp1518;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1519));
org$pandalanguage$pandac$pandadoc$Protector** $tmp1520 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp1521 = *$tmp1520;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1521));
org$pandalanguage$pandac$pandadoc$Protector** $tmp1522 = &param0->htmlProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp1523 = *$tmp1522;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1523));
panda$math$Random** $tmp1524 = &param0->random;
panda$math$Random* $tmp1525 = *$tmp1524;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1525));
return;

}

