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
typedef panda$core$String* (*$fn654)(panda$collections$ListView*);
typedef panda$core$String* (*$fn675)(org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer*, panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn689)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn693)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn698)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn709)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn719)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn733)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn825)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn833)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn841)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn849)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn857)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$Bit (*$fn868)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn878)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn901)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn911)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn926)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn963)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$Bit (*$fn984)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn1006)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$Bit (*$fn1027)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn1049)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$Bit (*$fn1071)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn1077)(org$pandalanguage$pandac$pandadoc$Markdown*, org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1085)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Object* (*$fn1120)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure12*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn1130)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure14*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1158)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure16*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1183)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure18*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1188)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure20*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn1196)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure22*, panda$collections$ListView*);
typedef void (*$fn1200)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1202)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1204)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1206)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1208)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1210)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1212)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1214)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef void (*$fn1216)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Bit (*$fn1269)(panda$core$Comparable*, panda$core$Comparable*);
typedef panda$core$Bit (*$fn1299)(panda$core$Comparable*, panda$core$Comparable*);
typedef panda$collections$ListView* (*$fn1317)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1323)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1327)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1332)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1350)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1360)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1370)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1380)(org$pandalanguage$pandac$pandadoc$Protector*, panda$core$String*);
typedef panda$core$String* (*$fn1417)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure24*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn1431)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure26*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1461)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure28*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn1475)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure30*, panda$collections$ListView*);
typedef panda$core$String* (*$fn1495)(org$pandalanguage$pandac$pandadoc$Markdown$_Closure32*, panda$collections$ListView*);

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
static panda$core$String $s653 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2e\x2a\x3f\x29\x5c\x74", 7, 150162241731241, NULL };
static panda$core$String $s657 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x5c\x74\x7c\x5b\x20\x5d\x7b\x31\x2c\x34\x7d\x29", 18, 7461573203115413830, NULL };
static panda$core$String $s658 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s661 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x5c\x6e\x5c\x6e\x7c\x5c\x41\x29\x28\x28\x3f\x3a", 15, -8559916856311689575, NULL };
static panda$core$String $s662 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x5b\x20\x5d\x7b\x34\x7d\x29", 10, 7324185912868193391, NULL };
static panda$core$String $s664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2a\x5c\x6e\x2b", 5, 15341101234, NULL };
static panda$core$String $s666 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2b", 2, 14385, NULL };
static panda$core$String $s668 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s670 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x3f\x3d\x5e\x5b\x20\x5d\x7b\x30\x2c\x34\x7d\x5c\x53\x29\x7c\x5c\x5a\x29", 20, -1268815784794221538, NULL };
static panda$core$String $s679 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x6e\x64\x61\x63\x6f\x64\x65\x22\x3e", 24, -1375153472772145809, NULL };
static panda$core$String $s724 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s751 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6d\x6d\x65\x6e\x74\x22\x3e", 22, -1756050522877089685, NULL };
static panda$core$String $s756 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x22\x3e", 25, 4577563245309187979, NULL };
static panda$core$String $s761 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x22\x3e", 25, 6760721592980043958, NULL };
static panda$core$String $s766 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x4e\x61\x6d\x65\x22\x3e", 28, 5111374842590752150, NULL };
static panda$core$String $s771 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x74\x79\x70\x65\x22\x3e", 19, -6878895466207673670, NULL };
static panda$core$String $s776 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6b\x65\x79\x77\x6f\x72\x64\x22\x3e", 22, -1670481277391576067, NULL };
static panda$core$String $s781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6e\x74\x72\x6f\x6c\x22\x3e", 22, -1756049386432501671, NULL };
static panda$core$String $s786 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x74\x65\x72\x61\x6c\x22\x3e", 22, -1659229352682266791, NULL };
static panda$core$String $s791 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x73\x74\x72\x69\x6e\x67\x22\x3e", 21, -198306892965556893, NULL };
static panda$core$String $s796 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6f\x70\x65\x72\x61\x74\x6f\x72\x22\x3e", 23, 1793793249967207580, NULL };
static panda$core$String $s801 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x61\x62\x65\x6c\x22\x3e", 20, 6207823968128210400, NULL };
static panda$core$String $s805 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s813 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s817 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s819 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s820 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x67\x74\x3b", 4, 144274317, NULL };
static panda$core$String $s827 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s828 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s835 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s836 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s843 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s844 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5b", 2, 19584, NULL };
static panda$core$String $s851 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s852 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5d", 2, 19586, NULL };
static panda$core$String $s859 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s889 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22", 13, -8467438715157355368, NULL };
static panda$core$String $s891 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e", 2, 13697, NULL };
static panda$core$String $s916 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s930 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s932 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 171410802310804, NULL };
static panda$core$String $s1082 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x24\x28\x5c\x73\x2a\x29\x5c\x2e\x5c\x2e\x5c\x2e\x28\x5c\x73\x2a\x29\x5e", 22, -7048023396403805866, NULL };
static panda$core$String $s1083 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x31\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d\x24\x32", 13, -8807464024981417766, NULL };
static panda$core$String $s1086 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x23\x2e\x2e\x2e\x23\x2a\x2d", 9, 1585511400200274083, NULL };
static panda$core$String $s1087 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x65\x6c\x6c\x69\x70\x73\x69\x73\x22\x3e\x2e\x2e\x2e\x3c\x2f\x73\x70\x61\x6e\x3e", 33, 5749756206725659630, NULL };
static panda$core$String $s1097 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x5b\x20\x5d\x7b\x30\x2c", 8, 15160529116888912, NULL };
static panda$core$String $s1099 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x28\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x29\x5b\x20\x5d\x2b\x29\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x7a\x7c\x5c\x6e\x7b\x32\x2c\x7d", 42, -5883137854691898449, NULL };
static panda$core$String $s1101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x53\x29\x28\x3f\x21\x5b\x20\x5d\x2a\x28\x3f\x3a\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b\x29\x29\x29", 36, 8434742182533998850, NULL };
static panda$core$String $s1114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e", 5, 14738541648, NULL };
static panda$core$String $s1116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x28\x3f\x3a\x28\x3f\x3c\x3d\x5c\x6e\x5c\x6e\x29\x7c\x5c\x41\x5c\x6e\x3f\x29", 23, 6260301638587013175, NULL };
static panda$core$String $s1143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x6e\x7b\x32\x2c\x7d\x5c\x7a", 8, 20810277504230859, NULL };
static panda$core$String $s1145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x6e\x29\x3f\x5e\x28\x5b\x20\x5c\x74\x5d\x2a\x29\x28\x5b\x2d\x2b\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5d\x2b", 32, 116054090365740223, NULL };
static panda$core$String $s1150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x28\x3f\x73\x3a\x2e\x2b\x3f\x29\x28\x5c\x6e\x7b\x31\x2c\x32\x7d\x29\x29", 19, 4304152477369649477, NULL };
static panda$core$String $s1152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3d\x5c\x6e\x2a\x28\x5c\x7a\x7c\x5c\x32\x28\x5b\x2d\x2b\x5c\x2a\x5d\x7c\x5c\x64\x2b\x5b\x2e\x5d\x29\x5b\x20\x5c\x74\x5d\x2b\x29\x29", 35, -2157463411774501410, NULL };
static panda$core$String $s1174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a", 2, 11221, NULL };
static panda$core$String $s1178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x3d\x3d\x3d\x3d\x2b\x24", 17, 8644226230150951458, NULL };
static panda$core$String $s1186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x2e\x2a\x29\x5c\x6e\x2d\x2d\x2d\x2d\x2b\x24", 17, 8644226060307728994, NULL };
static panda$core$String $s1192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x28\x23\x7b\x31\x2c\x36\x7d\x29\x5c\x73\x2a\x28\x2e\x2a\x3f\x29\x5c\x73\x2a\x5c\x31\x3f\x24", 24, 6625741561155563100, NULL };
static panda$core$String $s1218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x32\x2c\x7d\x5c\x6e", 7, 142480172029377, NULL };
static panda$core$String $s1219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3c\x62\x72\x20\x2f\x3e\x0a", 8, 14324133278249456, NULL };
static panda$core$String $s1223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3a\x3c\x5b\x61\x2d\x7a\x2f\x21\x24\x5d\x28\x3f\x3a\x5b\x5e\x3c\x3e\x5d\x7c", 21, -3726567012419943545, NULL };
static panda$core$String $s1234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x2a\x3e\x29", 4, 146737487, NULL };
static panda$core$String $s1238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s1239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x6e\x65\x73\x74\x65\x64\x54\x61\x67\x73\x52\x65\x67\x65\x78\x28\x64\x65\x70\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 134, 6382497733495402167, NULL };
static panda$core$String $s1247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x73\x3a\x3c\x21\x28\x2d\x2d\x2e\x2a\x3f\x2d\x2d\x5c\x73\x2a\x29\x2b\x3e\x29\x7c", 22, -7717011245258052727, NULL };
static panda$core$String $s1248 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x73\x3a\x3c\x5c\x3f\x2e\x2a\x3f\x5c\x3f\x3e\x29", 14, -1964502928120912323, NULL };
static panda$core$String $s1250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c", 1, 193, NULL };
static panda$core$String $s1354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static panda$core$String $s1362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x60", 1, 197, NULL };
static panda$core$String $s1364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x60", 1, 197, NULL };
static panda$core$String $s1372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s1374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x2a", 2, 19535, NULL };
static panda$core$String $s1382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s1384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s1401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x20\x5c\x22\x28\x2e\x2a\x29\x5c\x22\x5c\x5c\x29", 30, 1507772917981139974, NULL };
static panda$core$String $s1402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x74\x69\x74\x6c\x65\x3d\x22\x24\x33\x22\x20\x2f\x3e", 36, -5185982321426610333, NULL };
static panda$core$String $s1404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x21\x5c\x5c\x5b\x28\x2e\x2a\x29\x5c\x5c\x5d\x5c\x5c\x28\x28\x2e\x2a\x29\x5c\x5c\x29", 21, -5830152919387063515, NULL };
static panda$core$String $s1405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22\x24\x32\x22\x20\x61\x6c\x74\x3d\x22\x24\x31\x22\x20\x2f\x3e", 25, -7685348581218553223, NULL };
static panda$core$String $s1408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5b\x21\x5d\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 13, -4389225286389518346, NULL };
static panda$core$String $s1409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f", 15, -5004708712015115107, NULL };
static panda$core$String $s1411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 9, 2099712822272888901, NULL };
static panda$core$String $s1413 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 10, 7641698408407002113, NULL };
static panda$core$String $s1423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5d\x3f\x28\x3f\x3a\x5c\x6e\x5b\x20\x5d\x2a\x29\x3f", 15, -5004708712015115107, NULL };
static panda$core$String $s1425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 9, 2099712822272888901, NULL };
static panda$core$String $s1427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x5b\x28\x2e\x2a\x3f\x29\x5c\x5d", 10, 7641698408407002113, NULL };
static panda$core$String $s1436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x28", 2, 19533, NULL };
static panda$core$String $s1438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a", 6, 2021365209467, NULL };
static panda$core$String $s1440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3f\x28\x2e\x2a\x3f\x29\x3e\x3f", 9, 1750196697486000581, NULL };
static panda$core$String $s1442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x20\x5c\x74\x5d\x2a", 6, 2021365209467, NULL };
static panda$core$String $s1444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5b\x27\x22\x5d\x29", 6, 1491434205139, NULL };
static panda$core$String $s1448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x2e\x2a\x3f\x29", 5, 14720345233, NULL };
static panda$core$String $s1450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x35", 2, 19546, NULL };
static panda$core$String $s1452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3f", 2, 14405, NULL };
static panda$core$String $s1454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x29", 2, 19534, NULL };
static panda$core$String $s1456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x5b", 3, 1447724, NULL };
static panda$core$String $s1466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5b\x5e\x5c\x5b\x5c\x5d\x5d\x2b\x29", 10, 7631247159193161743, NULL };
static panda$core$String $s1468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5d", 2, 19586, NULL };
static panda$core$String $s1470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x2a\x5c\x5c\x2a\x7c\x5f\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x5b\x2a\x5f\x5d\x2a\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 35, 636172404878895653, NULL };
static panda$core$String $s1482 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x73\x74\x72\x6f\x6e\x67\x3e\x24\x32\x3c\x2f\x73\x74\x72\x6f\x6e\x67\x3e", 19, 504491683038092400, NULL };
static panda$core$String $s1484 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x2a\x7c\x5f\x29\x28\x3f\x3d\x5c\x53\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x3d\x5c\x53\x29\x5c\x31", 26, -4247179954659836315, NULL };
static panda$core$String $s1485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x6d\x3e\x24\x32\x3c\x2f\x65\x6d\x3e", 11, 2723679958089201678, NULL };
static panda$core$String $s1487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x28\x3f\x21\x23\x3f\x5b\x78\x58\x5d\x3f\x28\x3f\x3a\x5b\x30\x2d\x39\x61\x2d\x66\x41\x2d\x46\x5d\x2b\x7c\x5c\x77\x2b\x29\x3b\x29", 33, -6716186838887255919, NULL };
static panda$core$String $s1488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s1490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x28\x3f\x21\x5b\x61\x2d\x7a\x41\x2d\x5a\x2f\x3f\x5c\x24\x21\x5d\x29", 18, 6433614010358842861, NULL };
static panda$core$String $s1491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s1493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x3c\x21\x5c\x5c\x29\x28\x60\x2b\x29\x28\x2e\x2b\x3f\x29\x28\x3f\x3c\x21\x60\x29\x5c\x31\x28\x3f\x21\x60\x29", 29, 7657757978565690602, NULL };

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
panda$core$Panda$unref$panda$core$Object$Q($tmp119);
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
panda$core$Panda$unref$panda$core$Object$Q($tmp189);
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
panda$core$Panda$unref$panda$core$Object$Q($tmp529);
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
panda$core$Panda$unref$panda$core$Object$Q($tmp556);
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
int64_t $tmp643 = $tmp641.value;
int64_t $tmp644 = $tmp642.value;
bool $tmp645 = $tmp643 != $tmp644;
panda$core$Bit $tmp646 = (panda$core$Bit) {$tmp645};
bool $tmp647 = $tmp646.value;
if ($tmp647) goto block1; else goto block3;
block3:;
// line 431
panda$core$MutableString* $tmp648 = *(&local2);
panda$core$String* $tmp649 = panda$core$MutableString$convert$R$panda$core$String($tmp648);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp649));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp649));
panda$core$MutableString* $tmp650 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp650));
// unreffing replacement
*(&local2) = ((panda$core$MutableString*) NULL);
panda$core$String* $tmp651 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp651));
// unreffing lineSoFar
*(&local0) = ((panda$core$String*) NULL);
return $tmp649;

}
void org$pandalanguage$pandac$pandadoc$Markdown$detabify$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 422
panda$core$RegularExpression* $tmp652 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp652, &$s653);
panda$core$Method* $tmp655 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp655, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$$anonymous10$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Immutable*) NULL));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp652, ((panda$core$MutableMethod*) $tmp655));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp652));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp655));
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$outdent$panda$core$MutableString(panda$core$MutableString* param0) {

// line 437
panda$core$RegularExpression* $tmp656 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp656, &$s657);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param0, $tmp656, &$s658);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp656));
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doCodeBlocks$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
// line 493
panda$core$RegularExpression* $tmp659 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s661, &$s662);
panda$core$String* $tmp663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp660, &$s664);
panda$core$String* $tmp665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp663, &$s666);
panda$core$String* $tmp667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp665, &$s668);
panda$core$String* $tmp669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp667, &$s670);
panda$core$Int64 $tmp671 = (panda$core$Int64) {1};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp659, $tmp669, $tmp671);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp672 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp672));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp659));
*(&local0) = $tmp659;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp659));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp660));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp663));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp665));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp667));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp669));
// line 501
panda$core$RegularExpression* $tmp673 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer* $tmp674 = (org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$class);
org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp674, param0);
panda$core$MutableMethod* $tmp676 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp676, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$CodeReplacer$replacement$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp674));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp673, $tmp676);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp674));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp676));
panda$core$RegularExpression* $tmp677 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp677));
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
panda$core$MutableString* $tmp678 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp678, &$s679);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp680 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp680));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp678));
*(&local0) = $tmp678;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp678));
// line 506
panda$core$Int64 $tmp681 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp682 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp681);
*(&local1) = $tmp682;
// line 507
org$pandalanguage$pandac$parser$SyntaxHighlighter** $tmp683 = &param1->syntaxHighlighter;
org$pandalanguage$pandac$parser$SyntaxHighlighter* $tmp684 = *$tmp683;
panda$collections$Array** $tmp685 = &$tmp684->tokens;
panda$collections$Array* $tmp686 = *$tmp685;
ITable* $tmp687 = ((panda$collections$Iterable*) $tmp686)->$class->itable;
while ($tmp687->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp687 = $tmp687->next;
}
$fn689 $tmp688 = $tmp687->methods[0];
panda$collections$Iterator* $tmp690 = $tmp688(((panda$collections$Iterable*) $tmp686));
goto block1;
block1:;
ITable* $tmp691 = $tmp690->$class->itable;
while ($tmp691->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp691 = $tmp691->next;
}
$fn693 $tmp692 = $tmp691->methods[0];
panda$core$Bit $tmp694 = $tmp692($tmp690);
bool $tmp695 = $tmp694.value;
if ($tmp695) goto block3; else goto block2;
block2:;
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
ITable* $tmp696 = $tmp690->$class->itable;
while ($tmp696->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp696 = $tmp696->next;
}
$fn698 $tmp697 = $tmp696->methods[1];
panda$core$Object* $tmp699 = $tmp697($tmp690);
panda$core$Panda$unref$panda$core$Object$Q($tmp699);
org$pandalanguage$pandac$Pair* $tmp700 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp700));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Pair*) $tmp699)));
*(&local2) = ((org$pandalanguage$pandac$Pair*) $tmp699);
// line 508
org$pandalanguage$pandac$Pair* $tmp701 = *(&local2);
panda$core$Object** $tmp702 = &$tmp701->second;
panda$core$Object* $tmp703 = *$tmp702;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp704;
$tmp704 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp704->value = ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp703)->value;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp705 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp706;
$tmp706 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp706->value = $tmp705;
ITable* $tmp707 = ((panda$core$Equatable*) $tmp704)->$class->itable;
while ($tmp707->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp707 = $tmp707->next;
}
$fn709 $tmp708 = $tmp707->methods[1];
panda$core$Bit $tmp710 = $tmp708(((panda$core$Equatable*) $tmp704), ((panda$core$Equatable*) $tmp706));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp704)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp706)));
bool $tmp711 = $tmp710.value;
if ($tmp711) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp712 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp713;
$tmp713 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp713->value = $tmp712;
panda$core$Int64 $tmp714 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp715 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp714);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp716;
$tmp716 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp716->value = $tmp715;
ITable* $tmp717 = ((panda$core$Equatable*) $tmp713)->$class->itable;
while ($tmp717->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp717 = $tmp717->next;
}
$fn719 $tmp718 = $tmp717->methods[1];
panda$core$Bit $tmp720 = $tmp718(((panda$core$Equatable*) $tmp713), ((panda$core$Equatable*) $tmp716));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp713)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp716)));
*(&local3) = $tmp720;
goto block6;
block5:;
*(&local3) = $tmp710;
goto block6;
block6:;
panda$core$Bit $tmp721 = *(&local3);
bool $tmp722 = $tmp721.value;
if ($tmp722) goto block7; else goto block8;
block7:;
// line 509
panda$core$MutableString* $tmp723 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp723, &$s724);
goto block8;
block8:;
// line 511
org$pandalanguage$pandac$Pair* $tmp725 = *(&local2);
panda$core$Object** $tmp726 = &$tmp725->second;
panda$core$Object* $tmp727 = *$tmp726;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp728;
$tmp728 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp728->value = ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp727)->value;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp729 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp730;
$tmp730 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp730->value = $tmp729;
ITable* $tmp731 = ((panda$core$Equatable*) $tmp728)->$class->itable;
while ($tmp731->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp731 = $tmp731->next;
}
$fn733 $tmp732 = $tmp731->methods[1];
panda$core$Bit $tmp734 = $tmp732(((panda$core$Equatable*) $tmp728), ((panda$core$Equatable*) $tmp730));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp728)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp730)));
bool $tmp735 = $tmp734.value;
if ($tmp735) goto block9; else goto block10;
block9:;
// line 512
org$pandalanguage$pandac$Pair* $tmp736 = *(&local2);
panda$core$Object** $tmp737 = &$tmp736->second;
panda$core$Object* $tmp738 = *$tmp737;
*(&local1) = ((org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) $tmp738)->value;
// line 513
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp739 = *(&local1);
panda$core$Int64 $tmp740 = $tmp739.$rawValue;
panda$core$Int64 $tmp741 = (panda$core$Int64) {0};
panda$core$Bit $tmp742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp740, $tmp741);
bool $tmp743 = $tmp742.value;
if ($tmp743) goto block12; else goto block13;
block12:;
goto block11;
block13:;
panda$core$Int64 $tmp744 = (panda$core$Int64) {1};
panda$core$Bit $tmp745 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp740, $tmp744);
bool $tmp746 = $tmp745.value;
if ($tmp746) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp747 = (panda$core$Int64) {2};
panda$core$Bit $tmp748 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp740, $tmp747);
bool $tmp749 = $tmp748.value;
if ($tmp749) goto block14; else goto block16;
block14:;
// line 518
panda$core$MutableString* $tmp750 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp750, &$s751);
goto block11;
block16:;
panda$core$Int64 $tmp752 = (panda$core$Int64) {3};
panda$core$Bit $tmp753 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp740, $tmp752);
bool $tmp754 = $tmp753.value;
if ($tmp754) goto block17; else goto block18;
block17:;
// line 521
panda$core$MutableString* $tmp755 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp755, &$s756);
goto block11;
block18:;
panda$core$Int64 $tmp757 = (panda$core$Int64) {4};
panda$core$Bit $tmp758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp740, $tmp757);
bool $tmp759 = $tmp758.value;
if ($tmp759) goto block19; else goto block20;
block19:;
// line 524
panda$core$MutableString* $tmp760 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp760, &$s761);
goto block11;
block20:;
panda$core$Int64 $tmp762 = (panda$core$Int64) {5};
panda$core$Bit $tmp763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp740, $tmp762);
bool $tmp764 = $tmp763.value;
if ($tmp764) goto block21; else goto block22;
block21:;
// line 527
panda$core$MutableString* $tmp765 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp765, &$s766);
goto block11;
block22:;
panda$core$Int64 $tmp767 = (panda$core$Int64) {6};
panda$core$Bit $tmp768 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp740, $tmp767);
bool $tmp769 = $tmp768.value;
if ($tmp769) goto block23; else goto block24;
block23:;
// line 530
panda$core$MutableString* $tmp770 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp770, &$s771);
goto block11;
block24:;
panda$core$Int64 $tmp772 = (panda$core$Int64) {7};
panda$core$Bit $tmp773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp740, $tmp772);
bool $tmp774 = $tmp773.value;
if ($tmp774) goto block25; else goto block26;
block25:;
// line 533
panda$core$MutableString* $tmp775 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp775, &$s776);
goto block11;
block26:;
panda$core$Int64 $tmp777 = (panda$core$Int64) {8};
panda$core$Bit $tmp778 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp740, $tmp777);
bool $tmp779 = $tmp778.value;
if ($tmp779) goto block27; else goto block28;
block27:;
// line 536
panda$core$MutableString* $tmp780 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp780, &$s781);
goto block11;
block28:;
panda$core$Int64 $tmp782 = (panda$core$Int64) {9};
panda$core$Bit $tmp783 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp740, $tmp782);
bool $tmp784 = $tmp783.value;
if ($tmp784) goto block29; else goto block30;
block29:;
// line 539
panda$core$MutableString* $tmp785 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp785, &$s786);
goto block11;
block30:;
panda$core$Int64 $tmp787 = (panda$core$Int64) {10};
panda$core$Bit $tmp788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp740, $tmp787);
bool $tmp789 = $tmp788.value;
if ($tmp789) goto block31; else goto block32;
block31:;
// line 542
panda$core$MutableString* $tmp790 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp790, &$s791);
goto block11;
block32:;
panda$core$Int64 $tmp792 = (panda$core$Int64) {11};
panda$core$Bit $tmp793 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp740, $tmp792);
bool $tmp794 = $tmp793.value;
if ($tmp794) goto block33; else goto block34;
block33:;
// line 545
panda$core$MutableString* $tmp795 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp795, &$s796);
goto block11;
block34:;
panda$core$Int64 $tmp797 = (panda$core$Int64) {12};
panda$core$Bit $tmp798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp740, $tmp797);
bool $tmp799 = $tmp798.value;
if ($tmp799) goto block35; else goto block36;
block35:;
// line 548
panda$core$MutableString* $tmp800 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp800, &$s801);
goto block11;
block36:;
// line 551
panda$core$Bit $tmp802 = panda$core$Bit$init$builtin_bit(false);
bool $tmp803 = $tmp802.value;
if ($tmp803) goto block37; else goto block38;
block38:;
panda$core$Int64 $tmp804 = (panda$core$Int64) {551};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s805, $tmp804);
abort(); // unreachable
block37:;
goto block11;
block11:;
goto block10;
block10:;
// line 555
panda$core$MutableString* $tmp806 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$Pair* $tmp807 = *(&local2);
panda$core$Object** $tmp808 = &$tmp807->first;
panda$core$Object* $tmp809 = *$tmp808;
panda$core$String* $tmp810 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(param1, ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp809)->value);
panda$core$MutableString$init$panda$core$String($tmp806, $tmp810);
*(&local4) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp811 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp811));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp806));
*(&local4) = $tmp806;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp806));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp810));
// line 556
panda$core$MutableString* $tmp812 = *(&local4);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp812, &$s813, &$s814);
// line 557
panda$core$MutableString* $tmp815 = *(&local4);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp815, &$s816, &$s817);
// line 558
panda$core$MutableString* $tmp818 = *(&local4);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp818, &$s819, &$s820);
// line 559
panda$core$MutableString* $tmp821 = *(&local4);
org$pandalanguage$pandac$pandadoc$Protector** $tmp822 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp823 = *$tmp822;
$fn825 $tmp824 = ($fn825) $tmp823->$class->vtable[2];
panda$core$String* $tmp826 = $tmp824($tmp823, &$s827);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp821, &$s828, $tmp826);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp826));
// line 560
panda$core$MutableString* $tmp829 = *(&local4);
org$pandalanguage$pandac$pandadoc$Protector** $tmp830 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp831 = *$tmp830;
$fn833 $tmp832 = ($fn833) $tmp831->$class->vtable[2];
panda$core$String* $tmp834 = $tmp832($tmp831, &$s835);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp829, &$s836, $tmp834);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp834));
// line 561
panda$core$MutableString* $tmp837 = *(&local4);
org$pandalanguage$pandac$pandadoc$Protector** $tmp838 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp839 = *$tmp838;
$fn841 $tmp840 = ($fn841) $tmp839->$class->vtable[2];
panda$core$String* $tmp842 = $tmp840($tmp839, &$s843);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp837, &$s844, $tmp842);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp842));
// line 562
panda$core$MutableString* $tmp845 = *(&local4);
org$pandalanguage$pandac$pandadoc$Protector** $tmp846 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp847 = *$tmp846;
$fn849 $tmp848 = ($fn849) $tmp847->$class->vtable[2];
panda$core$String* $tmp850 = $tmp848($tmp847, &$s851);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp845, &$s852, $tmp850);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp850));
// line 563
panda$core$MutableString* $tmp853 = *(&local4);
org$pandalanguage$pandac$pandadoc$Protector** $tmp854 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp855 = *$tmp854;
$fn857 $tmp856 = ($fn857) $tmp855->$class->vtable[2];
panda$core$String* $tmp858 = $tmp856($tmp855, &$s859);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp853, &$s860, $tmp858);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp858));
// line 564
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp861 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp862;
$tmp862 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp862->value = $tmp861;
panda$core$Int64 $tmp863 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp864 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp863);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp865;
$tmp865 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp865->value = $tmp864;
ITable* $tmp866 = ((panda$core$Equatable*) $tmp862)->$class->itable;
while ($tmp866->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp866 = $tmp866->next;
}
$fn868 $tmp867 = $tmp866->methods[1];
panda$core$Bit $tmp869 = $tmp867(((panda$core$Equatable*) $tmp862), ((panda$core$Equatable*) $tmp865));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp862)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp865)));
bool $tmp870 = $tmp869.value;
if ($tmp870) goto block39; else goto block40;
block39:;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp871 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp872;
$tmp872 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp872->value = $tmp871;
panda$core$Int64 $tmp873 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp874 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp873);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp875;
$tmp875 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp875->value = $tmp874;
ITable* $tmp876 = ((panda$core$Equatable*) $tmp872)->$class->itable;
while ($tmp876->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp876 = $tmp876->next;
}
$fn878 $tmp877 = $tmp876->methods[1];
panda$core$Bit $tmp879 = $tmp877(((panda$core$Equatable*) $tmp872), ((panda$core$Equatable*) $tmp875));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp872)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp875)));
*(&local5) = $tmp879;
goto block41;
block40:;
*(&local5) = $tmp869;
goto block41;
block41:;
panda$core$Bit $tmp880 = *(&local5);
bool $tmp881 = $tmp880.value;
if ($tmp881) goto block42; else goto block43;
block42:;
// line 566
panda$core$MutableString* $tmp882 = *(&local0);
org$pandalanguage$pandac$Pair* $tmp883 = *(&local2);
panda$core$Object** $tmp884 = &$tmp883->first;
panda$core$Object* $tmp885 = *$tmp884;
org$pandalanguage$pandac$parser$Token$Kind $tmp886 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp885)->value.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp887;
$tmp887 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp887->value = $tmp886;
panda$core$String* $tmp888 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s889, ((panda$core$Object*) $tmp887));
panda$core$String* $tmp890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp888, &$s891);
panda$core$MutableString$append$panda$core$String($tmp882, $tmp890);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp887));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp888));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp890));
goto block43;
block43:;
// line 568
panda$core$MutableString* $tmp892 = *(&local0);
panda$core$MutableString* $tmp893 = *(&local4);
panda$core$MutableString$append$panda$core$Object($tmp892, ((panda$core$Object*) $tmp893));
// line 569
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp894 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp895;
$tmp895 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp895->value = $tmp894;
panda$core$Int64 $tmp896 = (panda$core$Int64) {1};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp897 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp896);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp898;
$tmp898 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp898->value = $tmp897;
ITable* $tmp899 = ((panda$core$Equatable*) $tmp895)->$class->itable;
while ($tmp899->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp899 = $tmp899->next;
}
$fn901 $tmp900 = $tmp899->methods[1];
panda$core$Bit $tmp902 = $tmp900(((panda$core$Equatable*) $tmp895), ((panda$core$Equatable*) $tmp898));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp895)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp898)));
bool $tmp903 = $tmp902.value;
if ($tmp903) goto block44; else goto block45;
block44:;
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp904 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp905;
$tmp905 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp905->value = $tmp904;
panda$core$Int64 $tmp906 = (panda$core$Int64) {2};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp907 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp906);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp908;
$tmp908 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp908->value = $tmp907;
ITable* $tmp909 = ((panda$core$Equatable*) $tmp905)->$class->itable;
while ($tmp909->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp909 = $tmp909->next;
}
$fn911 $tmp910 = $tmp909->methods[1];
panda$core$Bit $tmp912 = $tmp910(((panda$core$Equatable*) $tmp905), ((panda$core$Equatable*) $tmp908));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp905)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp908)));
*(&local6) = $tmp912;
goto block46;
block45:;
*(&local6) = $tmp902;
goto block46;
block46:;
panda$core$Bit $tmp913 = *(&local6);
bool $tmp914 = $tmp913.value;
if ($tmp914) goto block47; else goto block48;
block47:;
// line 571
panda$core$MutableString* $tmp915 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp915, &$s916);
goto block48;
block48:;
panda$core$MutableString* $tmp917 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp917));
// unreffing s
*(&local4) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$Pair* $tmp918 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp918));
// unreffing t
*(&local2) = ((org$pandalanguage$pandac$Pair*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp690));
// line 574
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp919 = *(&local1);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp920;
$tmp920 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp920->value = $tmp919;
panda$core$Int64 $tmp921 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind $tmp922 = org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$init$panda$core$Int64($tmp921);
org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper* $tmp923;
$tmp923 = (org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp923->value = $tmp922;
ITable* $tmp924 = ((panda$core$Equatable*) $tmp920)->$class->itable;
while ($tmp924->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp924 = $tmp924->next;
}
$fn926 $tmp925 = $tmp924->methods[1];
panda$core$Bit $tmp927 = $tmp925(((panda$core$Equatable*) $tmp920), ((panda$core$Equatable*) $tmp923));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp920)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp923)));
bool $tmp928 = $tmp927.value;
if ($tmp928) goto block49; else goto block50;
block49:;
// line 575
panda$core$MutableString* $tmp929 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp929, &$s930);
goto block50;
block50:;
// line 577
panda$core$MutableString* $tmp931 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp931, &$s932);
// line 578
panda$core$MutableString* $tmp933 = *(&local0);
panda$core$String* $tmp934 = panda$core$MutableString$finish$R$panda$core$String($tmp933);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp934));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp934));
panda$core$MutableString* $tmp935 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp935));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp934;

}
void org$pandalanguage$pandac$pandadoc$Markdown$syntaxHighlight$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$core$Bit local2;
panda$core$Bit local3;
panda$core$Bit local4;
org$pandalanguage$pandac$parser$Token local5;
// line 582
panda$threads$MessageQueue** $tmp936 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp937 = *$tmp936;
panda$threads$MessageQueue$clear($tmp937);
// line 583
panda$core$String* $tmp938 = panda$core$MutableString$convert$R$panda$core$String(param1);
panda$core$String* $tmp939 = panda$core$String$get_trimmed$R$panda$core$String($tmp938);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp940 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp940));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp939));
*(&local0) = $tmp939;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp938));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp939));
// line 584
org$pandalanguage$pandac$parser$Parser** $tmp941 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp942 = *$tmp941;
panda$io$File** $tmp943 = &param0->source;
panda$io$File* $tmp944 = *$tmp943;
panda$core$String* $tmp945 = *(&local0);
org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String($tmp942, $tmp944, $tmp945);
// line 585
org$pandalanguage$pandac$parser$Parser** $tmp946 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp947 = *$tmp946;
org$pandalanguage$pandac$ASTNode* $tmp948 = org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q($tmp947);
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp949 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp949));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp948));
*(&local1) = $tmp948;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp948));
// line 586
org$pandalanguage$pandac$ASTNode* $tmp950 = *(&local1);
panda$core$Bit $tmp951 = panda$core$Bit$init$builtin_bit($tmp950 != NULL);
bool $tmp952 = $tmp951.value;
if ($tmp952) goto block1; else goto block2;
block1:;
panda$threads$MessageQueue** $tmp953 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp954 = *$tmp953;
panda$core$Int64 $tmp955 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp954);
panda$core$Int64 $tmp956 = (panda$core$Int64) {0};
panda$core$Bit $tmp957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp955, $tmp956);
*(&local2) = $tmp957;
goto block3;
block2:;
*(&local2) = $tmp951;
goto block3;
block3:;
panda$core$Bit $tmp958 = *(&local2);
bool $tmp959 = $tmp958.value;
if ($tmp959) goto block4; else goto block5;
block4:;
// line 587
org$pandalanguage$pandac$parser$Parser** $tmp960 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp961 = *$tmp960;
$fn963 $tmp962 = ($fn963) param0->$class->vtable[16];
panda$core$String* $tmp964 = $tmp962(param0, $tmp961);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp964));
// line 588
org$pandalanguage$pandac$ASTNode* $tmp965 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp965));
// unreffing file
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp966 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp966));
// unreffing text
*(&local0) = ((panda$core$String*) NULL);
return;
block5:;
// line 591
panda$threads$MessageQueue** $tmp967 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp968 = *$tmp967;
panda$threads$MessageQueue$clear($tmp968);
// line 592
org$pandalanguage$pandac$parser$Parser** $tmp969 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp970 = *$tmp969;
panda$io$File** $tmp971 = &param0->source;
panda$io$File* $tmp972 = *$tmp971;
panda$core$String* $tmp973 = *(&local0);
org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String($tmp970, $tmp972, $tmp973);
// line 593
goto block6;
block6:;
org$pandalanguage$pandac$parser$Parser** $tmp974 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp975 = *$tmp974;
org$pandalanguage$pandac$parser$Token $tmp976 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token($tmp975);
org$pandalanguage$pandac$parser$Token$Kind $tmp977 = $tmp976.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp978;
$tmp978 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp978->value = $tmp977;
panda$core$Int64 $tmp979 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp980 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp979);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp981;
$tmp981 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp981->value = $tmp980;
ITable* $tmp982 = ((panda$core$Equatable*) $tmp978)->$class->itable;
while ($tmp982->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp982 = $tmp982->next;
}
$fn984 $tmp983 = $tmp982->methods[1];
panda$core$Bit $tmp985 = $tmp983(((panda$core$Equatable*) $tmp978), ((panda$core$Equatable*) $tmp981));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp978)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp981)));
bool $tmp986 = $tmp985.value;
if ($tmp986) goto block9; else goto block10;
block9:;
panda$threads$MessageQueue** $tmp987 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp988 = *$tmp987;
panda$core$Int64 $tmp989 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp988);
panda$core$Int64 $tmp990 = (panda$core$Int64) {0};
panda$core$Bit $tmp991 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp989, $tmp990);
*(&local3) = $tmp991;
goto block11;
block10:;
*(&local3) = $tmp985;
goto block11;
block11:;
panda$core$Bit $tmp992 = *(&local3);
bool $tmp993 = $tmp992.value;
if ($tmp993) goto block7; else goto block8;
block7:;
// line 594
org$pandalanguage$pandac$parser$Parser** $tmp994 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp995 = *$tmp994;
org$pandalanguage$pandac$ASTNode* $tmp996 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q($tmp995);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp996));
goto block6;
block8:;
// line 596
panda$threads$MessageQueue** $tmp997 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp998 = *$tmp997;
panda$core$Int64 $tmp999 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp998);
panda$core$Int64 $tmp1000 = (panda$core$Int64) {0};
panda$core$Bit $tmp1001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp999, $tmp1000);
bool $tmp1002 = $tmp1001.value;
if ($tmp1002) goto block12; else goto block13;
block12:;
// line 597
org$pandalanguage$pandac$parser$Parser** $tmp1003 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1004 = *$tmp1003;
$fn1006 $tmp1005 = ($fn1006) param0->$class->vtable[16];
panda$core$String* $tmp1007 = $tmp1005(param0, $tmp1004);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1007));
// line 598
org$pandalanguage$pandac$ASTNode* $tmp1008 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1008));
// unreffing file
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1009 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1009));
// unreffing text
*(&local0) = ((panda$core$String*) NULL);
return;
block13:;
// line 601
panda$threads$MessageQueue** $tmp1010 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1011 = *$tmp1010;
panda$threads$MessageQueue$clear($tmp1011);
// line 602
org$pandalanguage$pandac$parser$Parser** $tmp1012 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1013 = *$tmp1012;
panda$io$File** $tmp1014 = &param0->source;
panda$io$File* $tmp1015 = *$tmp1014;
panda$core$String* $tmp1016 = *(&local0);
org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String($tmp1013, $tmp1015, $tmp1016);
// line 603
goto block14;
block14:;
org$pandalanguage$pandac$parser$Parser** $tmp1017 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1018 = *$tmp1017;
org$pandalanguage$pandac$parser$Token $tmp1019 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token($tmp1018);
org$pandalanguage$pandac$parser$Token$Kind $tmp1020 = $tmp1019.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1021;
$tmp1021 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1021->value = $tmp1020;
panda$core$Int64 $tmp1022 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp1023 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1022);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1024;
$tmp1024 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1024->value = $tmp1023;
ITable* $tmp1025 = ((panda$core$Equatable*) $tmp1021)->$class->itable;
while ($tmp1025->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1025 = $tmp1025->next;
}
$fn1027 $tmp1026 = $tmp1025->methods[1];
panda$core$Bit $tmp1028 = $tmp1026(((panda$core$Equatable*) $tmp1021), ((panda$core$Equatable*) $tmp1024));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1021)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1024)));
bool $tmp1029 = $tmp1028.value;
if ($tmp1029) goto block17; else goto block18;
block17:;
panda$threads$MessageQueue** $tmp1030 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1031 = *$tmp1030;
panda$core$Int64 $tmp1032 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp1031);
panda$core$Int64 $tmp1033 = (panda$core$Int64) {0};
panda$core$Bit $tmp1034 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1032, $tmp1033);
*(&local4) = $tmp1034;
goto block19;
block18:;
*(&local4) = $tmp1028;
goto block19;
block19:;
panda$core$Bit $tmp1035 = *(&local4);
bool $tmp1036 = $tmp1035.value;
if ($tmp1036) goto block15; else goto block16;
block15:;
// line 604
org$pandalanguage$pandac$parser$Parser** $tmp1037 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1038 = *$tmp1037;
org$pandalanguage$pandac$ASTNode* $tmp1039 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q($tmp1038);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1039));
goto block14;
block16:;
// line 606
panda$threads$MessageQueue** $tmp1040 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1041 = *$tmp1040;
panda$core$Int64 $tmp1042 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp1041);
panda$core$Int64 $tmp1043 = (panda$core$Int64) {0};
panda$core$Bit $tmp1044 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1042, $tmp1043);
bool $tmp1045 = $tmp1044.value;
if ($tmp1045) goto block20; else goto block21;
block20:;
// line 607
org$pandalanguage$pandac$parser$Parser** $tmp1046 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1047 = *$tmp1046;
$fn1049 $tmp1048 = ($fn1049) param0->$class->vtable[16];
panda$core$String* $tmp1050 = $tmp1048(param0, $tmp1047);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1050));
// line 608
org$pandalanguage$pandac$ASTNode* $tmp1051 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1051));
// unreffing file
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1052 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1052));
// unreffing text
*(&local0) = ((panda$core$String*) NULL);
return;
block21:;
// line 611
panda$threads$MessageQueue** $tmp1053 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1054 = *$tmp1053;
panda$threads$MessageQueue$clear($tmp1054);
// line 612
org$pandalanguage$pandac$parser$Parser** $tmp1055 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1056 = *$tmp1055;
panda$io$File** $tmp1057 = &param0->source;
panda$io$File* $tmp1058 = *$tmp1057;
panda$core$String* $tmp1059 = *(&local0);
org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String($tmp1056, $tmp1058, $tmp1059);
// line 613
goto block22;
block22:;
// line 614
org$pandalanguage$pandac$parser$Parser** $tmp1060 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1061 = *$tmp1060;
org$pandalanguage$pandac$parser$Token $tmp1062 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token($tmp1061);
*(&local5) = $tmp1062;
// line 615
org$pandalanguage$pandac$parser$Token $tmp1063 = *(&local5);
org$pandalanguage$pandac$parser$Token$Kind $tmp1064 = $tmp1063.kind;
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1065;
$tmp1065 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1065->value = $tmp1064;
panda$core$Int64 $tmp1066 = (panda$core$Int64) {0};
org$pandalanguage$pandac$parser$Token$Kind $tmp1067 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1066);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1068;
$tmp1068 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp1068->value = $tmp1067;
ITable* $tmp1069 = ((panda$core$Equatable*) $tmp1065)->$class->itable;
while ($tmp1069->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1069 = $tmp1069->next;
}
$fn1071 $tmp1070 = $tmp1069->methods[0];
panda$core$Bit $tmp1072 = $tmp1070(((panda$core$Equatable*) $tmp1065), ((panda$core$Equatable*) $tmp1068));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1065)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1068)));
bool $tmp1073 = $tmp1072.value;
if ($tmp1073) goto block24; else goto block25;
block24:;
// line 616
goto block23;
block25:;
goto block22;
block23:;
// line 619
org$pandalanguage$pandac$parser$Parser** $tmp1074 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1075 = *$tmp1074;
$fn1077 $tmp1076 = ($fn1077) param0->$class->vtable[16];
panda$core$String* $tmp1078 = $tmp1076(param0, $tmp1075);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1078));
org$pandalanguage$pandac$ASTNode* $tmp1079 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1079));
// unreffing file
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1080 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1080));
// unreffing text
*(&local0) = ((panda$core$String*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$encodeCode$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 625
panda$core$RegularExpression* $tmp1081 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1081, &$s1082);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1081, &$s1083);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1081));
// line 626
$fn1085 $tmp1084 = ($fn1085) param0->$class->vtable[17];
$tmp1084(param0, param1);
// line 627
panda$core$MutableString$replace$panda$core$String$panda$core$String(param1, &$s1086, &$s1087);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doLists$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$Int64 local0;
panda$core$String* local1 = NULL;
panda$core$RegularExpression* local2 = NULL;
panda$core$RegularExpression* local3 = NULL;
// line 631
panda$core$Int64 $tmp1088 = (panda$core$Int64) {4};
panda$core$Int64 $tmp1089 = (panda$core$Int64) {1};
int64_t $tmp1090 = $tmp1088.value;
int64_t $tmp1091 = $tmp1089.value;
int64_t $tmp1092 = $tmp1090 - $tmp1091;
panda$core$Int64 $tmp1093 = (panda$core$Int64) {$tmp1092};
*(&local0) = $tmp1093;
// line 633
panda$core$Int64 $tmp1094 = *(&local0);
panda$core$Int64$wrapper* $tmp1095;
$tmp1095 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp1095->value = $tmp1094;
panda$core$String* $tmp1096 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1097, ((panda$core$Object*) $tmp1095));
panda$core$String* $tmp1098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1096, &$s1099);
panda$core$String* $tmp1100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1098, &$s1101);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp1102 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1102));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1100));
*(&local1) = $tmp1100;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1095));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1096));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1098));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1100));
// line 656
panda$core$Int64* $tmp1103 = &param0->listLevel;
panda$core$Int64 $tmp1104 = *$tmp1103;
panda$core$Int64 $tmp1105 = (panda$core$Int64) {0};
int64_t $tmp1106 = $tmp1104.value;
int64_t $tmp1107 = $tmp1105.value;
bool $tmp1108 = $tmp1106 > $tmp1107;
panda$core$Bit $tmp1109 = (panda$core$Bit) {$tmp1108};
bool $tmp1110 = $tmp1109.value;
if ($tmp1110) goto block1; else goto block3;
block1:;
// line 657
panda$core$RegularExpression* $tmp1111 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1112 = *(&local1);
panda$core$String* $tmp1113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1114, $tmp1112);
panda$core$String* $tmp1115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1113, &$s1116);
panda$core$RegularExpression$init$panda$core$String($tmp1111, $tmp1115);
*(&local2) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1117 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1117));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1111));
*(&local2) = $tmp1111;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1111));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1113));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1115));
// line 658
panda$core$RegularExpression* $tmp1118 = *(&local2);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure12* $tmp1119 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure12*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure12$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure12$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1119, param0);
panda$core$MutableMethod* $tmp1121 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1121, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure12$$anonymous11$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp1119));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1118, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1121)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1119));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1121));
panda$core$RegularExpression* $tmp1122 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1122));
// unreffing matchStartOfLine
*(&local2) = ((panda$core$RegularExpression*) NULL);
goto block2;
block3:;
// line 1
// line 684
panda$core$RegularExpression* $tmp1123 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1124 = *(&local1);
panda$core$String* $tmp1125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1126, $tmp1124);
panda$core$RegularExpression$init$panda$core$String($tmp1123, $tmp1125);
*(&local3) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1127 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1127));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1123));
*(&local3) = $tmp1123;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1123));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1125));
// line 685
panda$core$RegularExpression* $tmp1128 = *(&local3);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure14* $tmp1129 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure14*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure14$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure14$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1129, param0);
panda$core$MutableMethod* $tmp1131 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1131, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure14$$anonymous13$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp1129));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1128, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1131)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1129));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1131));
panda$core$RegularExpression* $tmp1132 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1132));
// unreffing matchStartOfLine
*(&local3) = ((panda$core$RegularExpression*) NULL);
goto block2;
block2:;
panda$core$String* $tmp1133 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1133));
// unreffing wholeList
*(&local1) = ((panda$core$String*) NULL);
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$processListItems$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$String* param1) {

panda$core$String* local0 = NULL;
panda$core$RegularExpression* local1 = NULL;
// line 726
panda$core$Int64* $tmp1134 = &param0->listLevel;
panda$core$Int64 $tmp1135 = *$tmp1134;
panda$core$Int64 $tmp1136 = (panda$core$Int64) {1};
int64_t $tmp1137 = $tmp1135.value;
int64_t $tmp1138 = $tmp1136.value;
int64_t $tmp1139 = $tmp1137 + $tmp1138;
panda$core$Int64 $tmp1140 = (panda$core$Int64) {$tmp1139};
panda$core$Int64* $tmp1141 = &param0->listLevel;
*$tmp1141 = $tmp1140;
// line 729
panda$core$RegularExpression* $tmp1142 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1142, &$s1143);
panda$core$String* $tmp1144 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String(param1, $tmp1142, &$s1145);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp1146 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1146));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1144));
*(&local0) = $tmp1144;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1142));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1144));
// line 731
panda$core$RegularExpression* $tmp1147 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1149, &$s1150);
panda$core$String* $tmp1151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1148, &$s1152);
panda$core$Int64 $tmp1153 = (panda$core$Int64) {1};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1147, $tmp1151, $tmp1153);
*(&local1) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1154 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1154));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1147));
*(&local1) = $tmp1147;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1147));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1148));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1151));
// line 736
panda$core$String* $tmp1155 = *(&local0);
panda$core$RegularExpression* $tmp1156 = *(&local1);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure16* $tmp1157 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure16*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure16$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure16$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1157, param0);
panda$core$MutableMethod* $tmp1159 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1159, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure16$$anonymous15$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1157));
panda$core$String* $tmp1160 = panda$core$String$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP$R$panda$core$String($tmp1155, $tmp1156, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1159)));
panda$core$String* $tmp1161 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1161));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1160));
*(&local0) = $tmp1160;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1157));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1159));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1160));
// line 753
panda$core$Int64* $tmp1162 = &param0->listLevel;
panda$core$Int64 $tmp1163 = *$tmp1162;
panda$core$Int64 $tmp1164 = (panda$core$Int64) {1};
int64_t $tmp1165 = $tmp1163.value;
int64_t $tmp1166 = $tmp1164.value;
int64_t $tmp1167 = $tmp1165 - $tmp1166;
panda$core$Int64 $tmp1168 = (panda$core$Int64) {$tmp1167};
panda$core$Int64* $tmp1169 = &param0->listLevel;
*$tmp1169 = $tmp1168;
// line 754
panda$core$String* $tmp1170 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1170));
panda$core$RegularExpression* $tmp1171 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1171));
// unreffing p
*(&local1) = ((panda$core$RegularExpression*) NULL);
panda$core$String* $tmp1172 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1172));
// unreffing list
*(&local0) = ((panda$core$String*) NULL);
return $tmp1170;

}
panda$core$Bit org$pandalanguage$pandac$pandadoc$Markdown$hasParagraphBreak$panda$core$MutableString$R$panda$core$Bit(panda$core$MutableString* param0) {

// line 759
panda$core$Bit $tmp1173 = panda$core$MutableString$contains$panda$core$String$R$panda$core$Bit(param0, &$s1174);
return $tmp1173;

}
panda$core$Bit org$pandalanguage$pandac$pandadoc$Markdown$isEmptyString$panda$core$String$Q$R$panda$core$Bit(panda$core$String* param0) {

panda$core$Bit local0;
// line 764
panda$core$Bit $tmp1175 = panda$core$Bit$init$builtin_bit(param0 == NULL);
bool $tmp1176 = $tmp1175.value;
if ($tmp1176) goto block1; else goto block2;
block1:;
*(&local0) = $tmp1175;
goto block3;
block2:;
panda$core$Bit $tmp1177 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(param0, &$s1178);
*(&local0) = $tmp1177;
goto block3;
block3:;
panda$core$Bit $tmp1179 = *(&local0);
return $tmp1179;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doHeaders$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
// line 769
panda$core$RegularExpression* $tmp1180 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1180, &$s1181);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure18* $tmp1182 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure18*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure18$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure18$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1182, param0);
panda$core$MutableMethod* $tmp1184 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1184, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure18$$anonymous17$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1182));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1180, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1184)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1180));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1182));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1184));
// line 774
panda$core$RegularExpression* $tmp1185 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1185, &$s1186);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure20* $tmp1187 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure20*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure20$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure20$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1187, param0);
panda$core$MutableMethod* $tmp1189 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1189, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure20$$anonymous19$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1187));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1185, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1189)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1185));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1187));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1189));
// line 781
panda$core$RegularExpression* $tmp1190 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$Int64 $tmp1191 = (panda$core$Int64) {1};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1190, &$s1192, $tmp1191);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1193 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1193));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1190));
*(&local0) = $tmp1190;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1190));
// line 782
panda$core$RegularExpression* $tmp1194 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure22* $tmp1195 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure22*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure22$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure22$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1195, param0);
panda$core$MutableMethod* $tmp1197 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1197, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure22$$anonymous21$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp1195));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1194, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1197)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1195));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1197));
panda$core$RegularExpression* $tmp1198 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1198));
// unreffing p
*(&local0) = ((panda$core$RegularExpression*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$runSpanGamut$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 793
$fn1200 $tmp1199 = ($fn1200) param0->$class->vtable[24];
$tmp1199(param0, param1);
// line 794
$fn1202 $tmp1201 = ($fn1202) param0->$class->vtable[29];
$tmp1201(param0, param1);
// line 795
$fn1204 $tmp1203 = ($fn1204) param0->$class->vtable[3];
$tmp1203(param0, param1);
// line 797
$fn1206 $tmp1205 = ($fn1206) param0->$class->vtable[25];
$tmp1205(param0, param1);
// line 798
$fn1208 $tmp1207 = ($fn1208) param0->$class->vtable[26];
$tmp1207(param0, param1);
// line 799
$fn1210 $tmp1209 = ($fn1210) param0->$class->vtable[10];
$tmp1209(param0, param1);
// line 805
$fn1212 $tmp1211 = ($fn1212) param0->$class->vtable[24];
$tmp1211(param0, param1);
// line 807
$fn1214 $tmp1213 = ($fn1214) param0->$class->vtable[28];
$tmp1213(param0, param1);
// line 808
$fn1216 $tmp1215 = ($fn1216) param0->$class->vtable[27];
$tmp1215(param0, param1);
// line 810
panda$core$RegularExpression* $tmp1217 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1217, &$s1218);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1217, &$s1219);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1217));
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$nestedTagsRegex$panda$core$Int64$R$panda$core$String(panda$core$Int64 param0) {

// line 820
panda$core$Int64 $tmp1220 = (panda$core$Int64) {0};
panda$core$Bit $tmp1221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(param0, $tmp1220);
bool $tmp1222 = $tmp1221.value;
if ($tmp1222) goto block1; else goto block3;
block1:;
// line 821
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1223));
return &$s1224;
block3:;
// line 1
// line 824
panda$core$Int64 $tmp1225 = (panda$core$Int64) {1};
int64_t $tmp1226 = param0.value;
int64_t $tmp1227 = $tmp1225.value;
int64_t $tmp1228 = $tmp1226 - $tmp1227;
panda$core$Int64 $tmp1229 = (panda$core$Int64) {$tmp1228};
panda$core$String* $tmp1230 = org$pandalanguage$pandac$pandadoc$Markdown$nestedTagsRegex$panda$core$Int64$R$panda$core$String($tmp1229);
panda$core$String* $tmp1231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1232, $tmp1230);
panda$core$String* $tmp1233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1231, &$s1234);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1233));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1230));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1231));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1233));
return $tmp1233;
block2:;
panda$core$Bit $tmp1235 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1236 = $tmp1235.value;
if ($tmp1236) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp1237 = (panda$core$Int64) {819};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1238, $tmp1237, &$s1239);
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
panda$collections$Array* $tmp1240 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1240);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp1241 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1241));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1240));
*(&local0) = $tmp1240;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1240));
// line 830
panda$core$Int64 $tmp1242 = (panda$core$Int64) {6};
panda$core$String* $tmp1243 = org$pandalanguage$pandac$pandadoc$Markdown$nestedTagsRegex$panda$core$Int64$R$panda$core$String($tmp1242);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp1244 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1244));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1243));
*(&local1) = $tmp1243;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1243));
// line 832
panda$core$RegularExpression* $tmp1245 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1247, &$s1248);
panda$core$String* $tmp1249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1246, &$s1250);
panda$core$String* $tmp1251 = *(&local1);
panda$core$String* $tmp1252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1249, $tmp1251);
panda$core$Int64 $tmp1253 = (panda$core$Int64) {2};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1245, $tmp1252, $tmp1253);
*(&local2) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1254 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1254));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1245));
*(&local2) = $tmp1245;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1245));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1246));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1249));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1252));
// line 840
panda$core$RegularExpression* $tmp1255 = *(&local2);
panda$core$Matcher* $tmp1256 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher($tmp1255, param1);
*(&local3) = ((panda$core$Matcher*) NULL);
panda$core$Matcher* $tmp1257 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1257));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1256));
*(&local3) = $tmp1256;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1256));
// line 841
panda$core$String$Index $tmp1258 = panda$core$String$get_start$R$panda$core$String$Index(param1);
*(&local4) = $tmp1258;
// line 842
goto block1;
block1:;
panda$core$Matcher* $tmp1259 = *(&local3);
panda$core$Bit $tmp1260 = panda$core$Matcher$find$R$panda$core$Bit($tmp1259);
bool $tmp1261 = $tmp1260.value;
if ($tmp1261) goto block2; else goto block3;
block2:;
// line 843
panda$core$String$Index $tmp1262 = *(&local4);
panda$core$String$Index$wrapper* $tmp1263;
$tmp1263 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp1263->value = $tmp1262;
panda$core$Matcher* $tmp1264 = *(&local3);
panda$core$String$Index $tmp1265;
panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1265, $tmp1264);
panda$core$String$Index$wrapper* $tmp1266;
$tmp1266 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp1266->value = $tmp1265;
ITable* $tmp1267 = ((panda$core$Comparable*) $tmp1263)->$class->itable;
while ($tmp1267->$class != (panda$core$Class*) &panda$core$Comparable$class) {
    $tmp1267 = $tmp1267->next;
}
$fn1269 $tmp1268 = $tmp1267->methods[1];
panda$core$Bit $tmp1270 = $tmp1268(((panda$core$Comparable*) $tmp1263), ((panda$core$Comparable*) $tmp1266));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp1263)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp1266)));
bool $tmp1271 = $tmp1270.value;
if ($tmp1271) goto block4; else goto block5;
block4:;
// line 844
panda$collections$Array* $tmp1272 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1273 = (org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class);
panda$core$Int64 $tmp1274 = (panda$core$Int64) {1};
panda$core$String$Index $tmp1275 = *(&local4);
panda$core$Matcher* $tmp1276 = *(&local3);
panda$core$String$Index $tmp1277;
panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1277, $tmp1276);
panda$core$Bit $tmp1278 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp1279 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp1275, $tmp1277, $tmp1278);
panda$core$String* $tmp1280 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param1, $tmp1279);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String($tmp1273, $tmp1274, $tmp1280);
panda$collections$Array$add$panda$collections$Array$T($tmp1272, ((panda$core$Object*) $tmp1273));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1273));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1280));
goto block5;
block5:;
// line 846
panda$collections$Array* $tmp1281 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1282 = (org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class);
panda$core$Int64 $tmp1283 = (panda$core$Int64) {0};
panda$core$Matcher* $tmp1284 = *(&local3);
panda$core$String$Index $tmp1285;
panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp1285, $tmp1284);
panda$core$Matcher* $tmp1286 = *(&local3);
panda$core$String$Index $tmp1287;
panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1287, $tmp1286);
panda$core$Bit $tmp1288 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp1289 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp1285, $tmp1287, $tmp1288);
panda$core$String* $tmp1290 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param1, $tmp1289);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String($tmp1282, $tmp1283, $tmp1290);
panda$collections$Array$add$panda$collections$Array$T($tmp1281, ((panda$core$Object*) $tmp1282));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1282));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1290));
// line 847
panda$core$Matcher* $tmp1291 = *(&local3);
panda$core$String$Index $tmp1292;
panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp1292, $tmp1291);
*(&local4) = $tmp1292;
goto block1;
block3:;
// line 849
panda$core$String$Index $tmp1293 = *(&local4);
panda$core$String$Index$wrapper* $tmp1294;
$tmp1294 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp1294->value = $tmp1293;
panda$core$String$Index $tmp1295 = panda$core$String$get_end$R$panda$core$String$Index(param1);
panda$core$String$Index$wrapper* $tmp1296;
$tmp1296 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp1296->value = $tmp1295;
ITable* $tmp1297 = ((panda$core$Comparable*) $tmp1294)->$class->itable;
while ($tmp1297->$class != (panda$core$Class*) &panda$core$Comparable$class) {
    $tmp1297 = $tmp1297->next;
}
$fn1299 $tmp1298 = $tmp1297->methods[1];
panda$core$Bit $tmp1300 = $tmp1298(((panda$core$Comparable*) $tmp1294), ((panda$core$Comparable*) $tmp1296));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp1294)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Comparable*) $tmp1296)));
bool $tmp1301 = $tmp1300.value;
if ($tmp1301) goto block6; else goto block7;
block6:;
// line 850
panda$collections$Array* $tmp1302 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1303 = (org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$class);
panda$core$Int64 $tmp1304 = (panda$core$Int64) {1};
panda$core$String$Index $tmp1305 = *(&local4);
panda$core$String$Index $tmp1306 = panda$core$String$get_end$R$panda$core$String$Index(param1);
panda$core$Bit $tmp1307 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp1308 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp1305, $tmp1306, $tmp1307);
panda$core$String* $tmp1309 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(param1, $tmp1308);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String($tmp1303, $tmp1304, $tmp1309);
panda$collections$Array$add$panda$collections$Array$T($tmp1302, ((panda$core$Object*) $tmp1303));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1303));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1309));
goto block7;
block7:;
// line 853
panda$collections$Array* $tmp1310 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp1310)));
panda$core$Matcher* $tmp1311 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1311));
// unreffing m
*(&local3) = ((panda$core$Matcher*) NULL);
panda$core$RegularExpression* $tmp1312 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1312));
// unreffing p
*(&local2) = ((panda$core$RegularExpression*) NULL);
panda$core$String* $tmp1313 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1313));
// unreffing nestedTags
*(&local1) = ((panda$core$String*) NULL);
panda$collections$Array* $tmp1314 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1314));
// unreffing tokens
*(&local0) = ((panda$collections$Array*) NULL);
return ((panda$collections$ListView*) $tmp1310);

}
void org$pandalanguage$pandac$pandadoc$Markdown$escapeSpecialCharsWithinTagAttributes$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$collections$ListView* local0 = NULL;
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
panda$core$String* local4 = NULL;
// line 866
panda$core$String* $tmp1315 = panda$core$MutableString$convert$R$panda$core$String(param1);
$fn1317 $tmp1316 = ($fn1317) param0->$class->vtable[23];
panda$collections$ListView* $tmp1318 = $tmp1316(param0, $tmp1315);
*(&local0) = ((panda$collections$ListView*) NULL);
panda$collections$ListView* $tmp1319 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1319));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1318));
*(&local0) = $tmp1318;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1315));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1318));
// line 867
panda$core$MutableString$clear(param1);
// line 869
panda$collections$ListView* $tmp1320 = *(&local0);
ITable* $tmp1321 = ((panda$collections$Iterable*) $tmp1320)->$class->itable;
while ($tmp1321->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1321 = $tmp1321->next;
}
$fn1323 $tmp1322 = $tmp1321->methods[0];
panda$collections$Iterator* $tmp1324 = $tmp1322(((panda$collections$Iterable*) $tmp1320));
goto block1;
block1:;
ITable* $tmp1325 = $tmp1324->$class->itable;
while ($tmp1325->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1325 = $tmp1325->next;
}
$fn1327 $tmp1326 = $tmp1325->methods[0];
panda$core$Bit $tmp1328 = $tmp1326($tmp1324);
bool $tmp1329 = $tmp1328.value;
if ($tmp1329) goto block3; else goto block2;
block2:;
*(&local1) = ((org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) NULL);
ITable* $tmp1330 = $tmp1324->$class->itable;
while ($tmp1330->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1330 = $tmp1330->next;
}
$fn1332 $tmp1331 = $tmp1330->methods[1];
panda$core$Object* $tmp1333 = $tmp1331($tmp1324);
panda$core$Panda$unref$panda$core$Object$Q($tmp1333);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1334 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1334));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) $tmp1333)));
*(&local1) = ((org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) $tmp1333);
// line 870
*(&local2) = ((panda$core$String*) NULL);
// line 871
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1335 = *(&local1);
panda$core$Int64* $tmp1336 = &$tmp1335->$rawValue;
panda$core$Int64 $tmp1337 = *$tmp1336;
panda$core$Int64 $tmp1338 = (panda$core$Int64) {0};
panda$core$Bit $tmp1339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1337, $tmp1338);
bool $tmp1340 = $tmp1339.value;
if ($tmp1340) goto block5; else goto block6;
block5:;
panda$core$String** $tmp1341 = (panda$core$String**) ($tmp1335->$data + 0);
panda$core$String* $tmp1342 = *$tmp1341;
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp1343 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1343));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1342));
*(&local3) = $tmp1342;
// line 873
panda$core$String* $tmp1344 = *(&local3);
panda$core$String* $tmp1345 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1345));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1344));
*(&local2) = $tmp1344;
// line 874
panda$core$String* $tmp1346 = *(&local2);
org$pandalanguage$pandac$pandadoc$Protector** $tmp1347 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp1348 = *$tmp1347;
$fn1350 $tmp1349 = ($fn1350) $tmp1348->$class->vtable[2];
panda$core$String* $tmp1351 = $tmp1349($tmp1348, &$s1352);
panda$core$String* $tmp1353 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1346, &$s1354, $tmp1351);
panda$core$String* $tmp1355 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1355));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1353));
*(&local2) = $tmp1353;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1351));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1353));
// line 875
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1361));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1363));
// line 876
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1371));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1373));
// line 877
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1381));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1383));
panda$core$String* $tmp1386 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1386));
// unreffing text
*(&local3) = ((panda$core$String*) NULL);
goto block4;
block6:;
panda$core$Int64 $tmp1387 = (panda$core$Int64) {1};
panda$core$Bit $tmp1388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1337, $tmp1387);
bool $tmp1389 = $tmp1388.value;
if ($tmp1389) goto block7; else goto block4;
block7:;
panda$core$String** $tmp1390 = (panda$core$String**) ($tmp1335->$data + 0);
panda$core$String* $tmp1391 = *$tmp1390;
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp1392 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1392));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1391));
*(&local4) = $tmp1391;
// line 880
panda$core$String* $tmp1393 = *(&local4);
panda$core$String* $tmp1394 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1394));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1393));
*(&local2) = $tmp1393;
panda$core$String* $tmp1395 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1395));
// unreffing text
*(&local4) = ((panda$core$String*) NULL);
goto block4;
block4:;
// line 883
panda$core$String* $tmp1396 = *(&local2);
panda$core$MutableString$append$panda$core$String(param1, $tmp1396);
panda$core$String* $tmp1397 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1397));
// unreffing value
*(&local2) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* $tmp1398 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1398));
// unreffing token
*(&local1) = ((org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1324));
panda$collections$ListView* $tmp1399 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1399));
// unreffing tokens
*(&local0) = ((panda$collections$ListView*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doImages$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
// line 889
panda$core$RegularExpression* $tmp1400 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1400, &$s1401);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1400, &$s1402);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1400));
// line 890
panda$core$RegularExpression* $tmp1403 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1403, &$s1404);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1403, &$s1405);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1403));
// line 893
panda$core$RegularExpression* $tmp1406 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1408, &$s1409);
panda$core$String* $tmp1410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1407, &$s1411);
panda$core$String* $tmp1412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1410, &$s1413);
panda$core$RegularExpression$init$panda$core$String($tmp1406, $tmp1412);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1414 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1414));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1406));
*(&local0) = $tmp1406;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1406));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1407));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1410));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1412));
// line 898
panda$core$RegularExpression* $tmp1415 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure24* $tmp1416 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure24*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure24$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure24$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1416, param0);
panda$core$MutableMethod* $tmp1418 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1418, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure24$$anonymous23$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1416));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1415, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1418)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1416));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1418));
panda$core$RegularExpression* $tmp1419 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1419));
// unreffing imageLink
*(&local0) = ((panda$core$RegularExpression*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doAnchors$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

panda$core$RegularExpression* local0 = NULL;
panda$core$RegularExpression* local1 = NULL;
panda$core$RegularExpression* local2 = NULL;
// line 931
panda$core$RegularExpression* $tmp1420 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1422, &$s1423);
panda$core$String* $tmp1424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1421, &$s1425);
panda$core$String* $tmp1426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1424, &$s1427);
panda$core$RegularExpression$init$panda$core$String($tmp1420, $tmp1426);
*(&local0) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1428 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1428));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1420));
*(&local0) = $tmp1420;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1420));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1421));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1424));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1426));
// line 936
panda$core$RegularExpression* $tmp1429 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure26* $tmp1430 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure26*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure26$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure26$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1430, param0);
panda$core$MutableMethod* $tmp1432 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1432, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure26$$anonymous25$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp1430));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1429, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1432)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1430));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1432));
// line 968
panda$core$RegularExpression* $tmp1433 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1435, &$s1436);
panda$core$String* $tmp1437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1434, &$s1438);
panda$core$String* $tmp1439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1437, &$s1440);
panda$core$String* $tmp1441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1439, &$s1442);
panda$core$String* $tmp1443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1441, &$s1444);
panda$core$String* $tmp1445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1443, &$s1446);
panda$core$String* $tmp1447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1445, &$s1448);
panda$core$String* $tmp1449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1447, &$s1450);
panda$core$String* $tmp1451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1449, &$s1452);
panda$core$String* $tmp1453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1451, &$s1454);
panda$core$String* $tmp1455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1453, &$s1456);
panda$core$Int64 $tmp1457 = (panda$core$Int64) {4};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1433, $tmp1455, $tmp1457);
*(&local1) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1458 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1458));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1433));
*(&local1) = $tmp1433;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1433));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1434));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1437));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1439));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1441));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1443));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1445));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1447));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1449));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1451));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1453));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1455));
// line 982
panda$core$RegularExpression* $tmp1459 = *(&local1);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure28* $tmp1460 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure28*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure28$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure28$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1460, param0);
panda$core$MutableMethod* $tmp1462 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1462, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure28$$anonymous27$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1460));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1459, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1462)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1460));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1462));
// line 1019
panda$core$RegularExpression* $tmp1463 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$String* $tmp1464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1465, &$s1466);
panda$core$String* $tmp1467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1464, &$s1468);
panda$core$String* $tmp1469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1467, &$s1470);
panda$core$Int64 $tmp1471 = (panda$core$Int64) {4};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp1463, $tmp1469, $tmp1471);
*(&local2) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1472 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1472));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1463));
*(&local2) = $tmp1463;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1463));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1464));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1467));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1469));
// line 1025
panda$core$RegularExpression* $tmp1473 = *(&local2);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure30* $tmp1474 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure30*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure30$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure30$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1474, param0);
panda$core$MutableMethod* $tmp1476 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1476, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure30$$anonymous29$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Object*) $tmp1474));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1473, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1476)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1474));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1476));
panda$core$RegularExpression* $tmp1477 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1477));
// unreffing referenceShortcut
*(&local2) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1478 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1478));
// unreffing inlineLink
*(&local1) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp1479 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1479));
// unreffing internalLink
*(&local0) = ((panda$core$RegularExpression*) NULL);
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doItalicsAndBold$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 1067
panda$core$RegularExpression* $tmp1480 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1480, &$s1481);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1480, &$s1482);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1480));
// line 1068
panda$core$RegularExpression* $tmp1483 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1483, &$s1484);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1483, &$s1485);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1483));
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$encodeAmpsAndAngles$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 1074
panda$core$RegularExpression* $tmp1486 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1486, &$s1487);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1486, &$s1488);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1486));
// line 1075
panda$core$RegularExpression* $tmp1489 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1489, &$s1490);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(param1, $tmp1489, &$s1491);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1489));
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$doCodeSpans$panda$core$MutableString(org$pandalanguage$pandac$pandadoc$Markdown* param0, panda$core$MutableString* param1) {

// line 1079
panda$core$RegularExpression* $tmp1492 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp1492, &$s1493);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure32* $tmp1494 = (org$pandalanguage$pandac$pandadoc$Markdown$_Closure32*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$_Closure32$class);
org$pandalanguage$pandac$pandadoc$Markdown$_Closure32$init$org$pandalanguage$pandac$pandadoc$Markdown($tmp1494, param0);
panda$core$MutableMethod* $tmp1496 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1496, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure32$$anonymous31$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String), ((panda$core$Object*) $tmp1494));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(param1, $tmp1492, ((panda$core$MutableMethod*) ((panda$core$Method*) $tmp1496)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1492));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1494));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1496));
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$cleanup(org$pandalanguage$pandac$pandadoc$Markdown* param0) {

panda$io$File** $tmp1497 = &param0->source;
panda$io$File* $tmp1498 = *$tmp1497;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1498));
panda$threads$MessageQueue** $tmp1499 = &param0->errorQueue;
panda$threads$MessageQueue* $tmp1500 = *$tmp1499;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1500));
org$pandalanguage$pandac$parser$Parser** $tmp1501 = &param0->parser;
org$pandalanguage$pandac$parser$Parser* $tmp1502 = *$tmp1501;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1502));
panda$core$MutableMethod** $tmp1503 = &param0->linkResolver;
panda$core$MutableMethod* $tmp1504 = *$tmp1503;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1504));
panda$collections$HashMap** $tmp1505 = &param0->linkDefinitions;
panda$collections$HashMap* $tmp1506 = *$tmp1505;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1506));
org$pandalanguage$pandac$pandadoc$Protector** $tmp1507 = &param0->charProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp1508 = *$tmp1507;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1508));
org$pandalanguage$pandac$pandadoc$Protector** $tmp1509 = &param0->htmlProtector;
org$pandalanguage$pandac$pandadoc$Protector* $tmp1510 = *$tmp1509;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1510));
panda$math$Random** $tmp1511 = &param0->random;
panda$math$Random* $tmp1512 = *$tmp1511;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1512));
return;

}

